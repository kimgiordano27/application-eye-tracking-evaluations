/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$ovrp_GetNodePositionValid
ENTRY_POINT: 0316feac
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin_OVRP_1_38_0__ovrp_GetNodePositionValid(long param_1)

{
  char in_NG;
  char in_OV;
  long lVar1;
  long in_x9;
  uint in_w10;
  long in_x11;
  uint in_w12;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar3;
  
  while( true ) {
    if (in_NG == in_OV) {
      return;
    }
    if (in_w12 <= (uint)in_x9) break;
    lVar1 = *(long *)(param_1 + in_x9 * 8 + 0x20);
    if (lVar1 == 0) {
LAB_0317000c:
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    if (*(uint *)(lVar1 + 0x18) <= in_w10) break;
    lVar2 = *(long *)(unaff_x19 + 0x38);
    if (lVar2 == 0) goto LAB_0317000c;
    if (*(uint *)(lVar2 + 0x18) <= (uint)in_x9) break;
    lVar1 = lVar1 + in_x11 * 0x10;
    uVar3 = *(undefined8 *)(lVar1 + 0x20);
    lVar2 = lVar2 + in_x9 * 0x10;
    in_x9 = in_x9 + 1;
    *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)(lVar1 + 0x28);
    *(undefined8 *)(lVar2 + 0x20) = uVar3;
    param_1 = *(long *)(unaff_x20 + 0x88);
    if (param_1 == 0) goto LAB_0317000c;
    in_w12 = *(uint *)(param_1 + 0x18);
    in_OV = SBORROW4((int)in_x9,in_w12);
    in_NG = (int)((int)in_x9 - in_w12) < 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48180();
}


