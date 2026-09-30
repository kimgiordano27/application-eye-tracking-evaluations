/*
FUNCTION_NAME: Meta.XR.EnvironmentDepth.DepthProviderNotSupported$$Meta.XR.EnvironmentDepth.IDepthProvider.SetDepthEnabled
ENTRY_POINT: 0562db4c
PROGRAM: waitwhat-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint Meta_XR_EnvironmentDepth_DepthProviderNotSupported__Meta_XR_EnvironmentDepth_IDepthProvider_SetDepthEnabled
               (undefined8 param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  
  if ((*(ushort *)(param_2 + 0x135) & 1) == 0) {
    FUN_031c09d4(param_2);
  }
  lVar2 = thunk_FUN_031c3cac();
  if (lVar2 != 0) {
    lVar2 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x48);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      FUN_031c09d4(lVar2);
    }
    lVar2 = thunk_FUN_031c3cac();
    if (lVar2 != 0) {
      lVar2 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x48);
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_031c09d4(lVar2);
      }
      if (*(long *)(*unaff_x22 + 0x40) != *(long *)(lVar2 + 0x40)) {
LAB_0562dca4:
                    /* WARNING: Subroutine does not return */
        FUN_03189058();
      }
      thunk_FUN_031c3ef0();
      lVar2 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x48);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_031c09d4(lVar2);
      }
      if (*(long *)(*unaff_x20 + 0x40) != *(long *)(lVar2 + 0x40)) goto LAB_0562dca4;
      thunk_FUN_031c3ef0();
      uVar1 = (**(code **)(*unaff_x19 + 0x1b8))();
      goto LAB_0562dc8c;
    }
  }
  FUN_0595040c(2,0);
  uVar1 = 0;
LAB_0562dc8c:
  return uVar1 & 1;
}


