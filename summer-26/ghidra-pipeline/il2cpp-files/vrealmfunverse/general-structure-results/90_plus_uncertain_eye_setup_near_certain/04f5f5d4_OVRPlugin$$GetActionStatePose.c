/*
FUNCTION_NAME: OVRPlugin$$GetActionStatePose
ENTRY_POINT: 04f5f5d4
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 91
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_7;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetActionStatePose(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long *plVar7;
  long unaff_x21;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  
  FUN_03bf3338();
  *(undefined8 *)(unaff_x21 + 0x198) = 0;
  thunk_FUN_02bb0e9c(unaff_x21 + 0x198,0);
  plVar7 = *(long **)(unaff_x21 + 0x170);
  *(undefined4 *)(unaff_x21 + 400) = 0;
  puVar1 = 
  UnityEngine_XR_OpenXR_Features_Interactions_PICONeo3ControllerProfile_PICONeo3Controller_var;
  if (plVar7 != (long *)0x0) {
    if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    uVar2 = FUN_05c89340();
    lVar4 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_04f5f664;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_02b7654c(plVar7,*(long *)puVar1,0);
LAB_04f5f664:
    (*(code *)*puVar3)(&stack0x00000008,plVar7,uVar2,puVar3[1]);
    FUN_04f5c044(uStack0000000000000008,uStack000000000000000c,uStack0000000000000010,
                 uStack0000000000000014,uStack0000000000000018,uStack000000000000001c);
  }
  return;
}


