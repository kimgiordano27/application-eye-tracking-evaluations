/*
FUNCTION_NAME: OVRPlugin$$GetActionStatePose
ENTRY_POINT: 05137f14
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 88
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetActionStatePose(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined4 *unaff_x19;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  
  lVar1 = FUN_0512bd30(param_1,*(undefined8 *)(unaff_x19 + 8),*(undefined8 *)(unaff_x19 + 0xc),
                       *(undefined8 *)(unaff_x19 + 10));
  if (lVar1 != 0) {
    auVar5 = FUN_0507b064(lVar1,0,0);
    uVar2 = FUN_04f2d31c();
    if ((uVar2 & 1) == 0) {
      *unaff_x19 = 2;
      *(undefined1 (*) [16])(unaff_x19 + 0x14) = auVar5;
      thunk_FUN_02dd37b4(unaff_x19 + 0x14,0);
      if (*(int *)(*(long *)PTR_DAT_06781588 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      FUN_03024544(unaff_x19 + 2);
    }
    else {
      FUN_04f2d338();
      puVar3 = (undefined8 *)(unaff_x19 + 0xe);
      uVar4 = *puVar3;
      *unaff_x19 = 0xfffffffe;
      *puVar3 = 0;
      thunk_FUN_02dd37b4(puVar3,0);
      if (*(int *)(*(long *)PTR_DAT_06781588 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      FUN_03ded864(unaff_x19 + 2,uVar4,*(undefined8 *)PTR_DAT_06781638);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


