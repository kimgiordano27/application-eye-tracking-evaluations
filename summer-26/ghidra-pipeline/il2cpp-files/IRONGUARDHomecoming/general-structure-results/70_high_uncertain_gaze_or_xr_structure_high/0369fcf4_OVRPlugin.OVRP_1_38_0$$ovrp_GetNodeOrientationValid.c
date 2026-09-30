/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$ovrp_GetNodeOrientationValid
ENTRY_POINT: 0369fcf4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 75
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin_OVRP_1_38_0__ovrp_GetNodeOrientationValid(long param_1)

{
  long lVar1;
  long in_x9;
  uint in_w10;
  long in_x11;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar3;
  
  for (; lVar1 = *(long *)(param_1 + 0x20), lVar1 != 0; param_1 = param_1 + in_x9 * 8) {
    if (*(uint *)(lVar1 + 0x18) <= in_w10) {
LAB_0369fe48:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    lVar2 = *(long *)(unaff_x19 + 0x38);
    if (lVar2 == 0) break;
    if (*(uint *)(lVar2 + 0x18) <= (uint)in_x9) goto LAB_0369fe48;
    lVar1 = lVar1 + in_x11 * 0x10;
    uVar3 = *(undefined8 *)(lVar1 + 0x20);
    lVar2 = lVar2 + in_x9 * 0x10;
    in_x9 = in_x9 + 1;
    *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)(lVar1 + 0x28);
    *(undefined8 *)(lVar2 + 0x20) = uVar3;
    param_1 = *(long *)(unaff_x20 + 0x88);
    if (param_1 == 0) break;
    if ((int)*(uint *)(param_1 + 0x18) <= (int)(uint)in_x9) {
      return;
    }
    if (*(uint *)(param_1 + 0x18) <= (uint)in_x9) goto LAB_0369fe48;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


