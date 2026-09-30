/*
FUNCTION_NAME: Meta.XR.EnvironmentRaycastManager.EnvironmentRaycastProviderDepthManager$$Meta.XR.IEnvironmentRaycastProvider.get_IsSupported
ENTRY_POINT: 057c4250
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 99
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;ray_or_cast_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Meta_XR_EnvironmentRaycastManager_EnvironmentRaycastProviderDepthManager__Meta_XR_IEnvironmentRaycastProvider_get_IsSupported
               (long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 uVar2;
  long unaff_x19;
  long lVar3;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  
  plVar1 = (long *)thunk_FUN_02fdd5fc(param_2,param_1 + 0x20);
  lVar3 = *plVar1;
  uVar2 = thunk_FUN_0301080c(*unaff_x26);
  FUN_0579bad0();
  if (lVar3 != 0) {
    FUN_03bb1674(lVar3,uVar2,0,*(undefined8 *)PTR_DAT_06f9b7c8);
    plVar1 = (long *)thunk_FUN_02fdd5fc();
    lVar3 = *plVar1;
    uVar2 = thunk_FUN_0301080c(*unaff_x25);
    FUN_0579bad0();
    if (lVar3 != 0) {
      FUN_03bb1674(lVar3,uVar2,0,*(undefined8 *)PTR_DAT_06f9b7d0);
      plVar1 = (long *)thunk_FUN_02fdd5fc();
      lVar3 = *plVar1;
      uVar2 = thunk_FUN_0301080c(*unaff_x24);
      FUN_0579bad0();
      if (lVar3 != 0) {
        FUN_03bb1674(lVar3,uVar2,0,*(undefined8 *)PTR_DAT_06f9cfd8);
        FUN_02b290ac();
        FUN_02bb0318();
        plVar1 = (long *)thunk_FUN_02fdd5fc();
        if (*plVar1 == 0) {
          return;
        }
        (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x10))();
        plVar1 = (long *)thunk_FUN_02fdd5fc();
        lVar3 = *plVar1;
        uVar2 = thunk_FUN_0301080c(*unaff_x26);
        FUN_0579bad0();
        if (lVar3 != 0) {
          FUN_03bb12a4(lVar3,uVar2,0,*(undefined8 *)PTR_DAT_06f9b578);
          plVar1 = (long *)thunk_FUN_02fdd5fc();
          lVar3 = *plVar1;
          uVar2 = thunk_FUN_0301080c(*unaff_x25);
          FUN_0579bad0();
          if (lVar3 != 0) {
            FUN_03bb12a4(lVar3,uVar2,0,*(undefined8 *)PTR_DAT_06f9b588);
            plVar1 = (long *)thunk_FUN_02fdd5fc();
            lVar3 = *plVar1;
            uVar2 = thunk_FUN_0301080c(*unaff_x24);
            FUN_0579bad0();
            if (lVar3 != 0) {
              FUN_03bb12a4(lVar3,uVar2,0,*(undefined8 *)PTR_DAT_06f9b6f8);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


