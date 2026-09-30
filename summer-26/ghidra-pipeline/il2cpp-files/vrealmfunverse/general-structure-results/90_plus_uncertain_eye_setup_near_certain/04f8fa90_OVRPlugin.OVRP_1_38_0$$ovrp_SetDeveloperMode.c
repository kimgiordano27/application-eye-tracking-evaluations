/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$ovrp_SetDeveloperMode
ENTRY_POINT: 04f8fa90
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 91
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;ray_or_cast_sink_hits_1;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin_OVRP_1_38_0__ovrp_SetDeveloperMode(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long unaff_x19;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  long unaff_x26;
  
  FUN_02b3c81c(*(undefined8 *)(param_1 + 0xcb0));
  FUN_02b3c81c(System_Func<PointerEnterEvent>_TypeInfo);
  FUN_02b3c81c(System_Func<PointerUpEvent>_TypeInfo);
  *(undefined1 *)(unaff_x26 + 0xdb1) = 1;
  uVar1 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody(*unaff_x25,&stack0x0000000c);
  uVar1 = FUN_04c00984(*unaff_x24,uVar1,0);
  lVar2 = thunk_FUN_02b79644(*unaff_x23);
  FUN_05c8d47c(lVar2,uVar1,0);
  if ((lVar2 != 0) && (lVar2 = FUN_031d8020(lVar2,*(undefined8 *)PTR_DAT_06316f28), lVar2 != 0)) {
    FUN_05d1c22c(0x3f800000,lVar2,0);
    FUN_05d1c52c(lVar2,1,0);
    FUN_05d1c3b4(lVar2,0,0);
    FUN_05d1c850(lVar2,3,0);
    lVar3 = FUN_05c89340(lVar2,0);
    if (lVar3 != 0) {
      FUN_05c9caa4();
      FUN_05c89340(lVar2,0);
      FUN_04efb620();
      FUN_05d1d794(lVar2,0);
      lVar3 = FUN_05c89410(lVar2,0);
      if (lVar3 != 0) {
        FUN_05c8cb28(lVar3,0,0);
        lVar3 = FUN_05c89410(lVar2,0);
        if (lVar3 != 0) {
          FUN_05c8ca64(lVar3,*(undefined4 *)(unaff_x19 + 0x4c),0);
          return lVar2;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


