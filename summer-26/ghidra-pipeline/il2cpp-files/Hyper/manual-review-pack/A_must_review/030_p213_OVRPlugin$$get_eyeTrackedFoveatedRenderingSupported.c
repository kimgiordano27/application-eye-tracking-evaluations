/*
FUNCTION_NAME: OVRPlugin$$get_eyeTrackedFoveatedRenderingSupported
ENTRY_POINT: 090a2000
PROGRAM: Hyper-libil2cpp.so
SCORE: 147
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_4;validity_or_gating_hits_2;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


long OVRPlugin__get_eyeTrackedFoveatedRenderingSupported(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 unaff_x19;
  undefined8 *unaff_x21;
  long unaff_x22;
  undefined8 *unaff_x23;
  
  FUN_04947ee4(*(undefined8 *)(param_1 + 0xea8));
  *(undefined1 *)(unaff_x22 + 0x281) = 1;
  lVar2 = thunk_FUN_04983f60(*unaff_x23);
  FUN_0a17c2c0(lVar2,*unaff_x21,0);
  if ((lVar2 != 0) && (lVar3 = FUN_0a17b7e4(lVar2,0), puVar1 = PTR_DAT_0ac78eb0, lVar3 != 0)) {
    FUN_0a18ac70();
    lVar2 = FUN_05bde8d8(lVar2,*(undefined8 *)puVar1);
    if (lVar2 != 0) {
      *(undefined8 *)(lVar2 + 0x30) = unaff_x19;
      thunk_FUN_049ee3d8();
      return lVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


