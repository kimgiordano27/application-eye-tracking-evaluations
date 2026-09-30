/*
FUNCTION_NAME: OVRPlugin.OVRP_1_71_0$$.cctor
ENTRY_POINT: 036a3350
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_3
*/


void OVRPlugin_OVRP_1_71_0___cctor(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long *unaff_x19;
  long unaff_x20;
  long lVar4;
  
  thunk_FUN_01efb3a4();
  *(undefined1 *)(unaff_x20 + 0xf88) = 1;
  if (unaff_x19[0xe] != 0) {
    iVar1 = (**(code **)(*unaff_x19 + 0x1c8))();
    lVar4 = unaff_x19[0xe];
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if (iVar1 != *(int *)(lVar4 + 0x48)) {
      uVar3 = FUN_02a7787c();
      uVar2 = (**(code **)(*unaff_x19 + 0x1c8))();
      OVRPlugin_OVRP_1_72_0__ovrp_CreateSpatialAnchor(lVar4,uVar3,uVar2);
      return;
    }
  }
  return;
}


