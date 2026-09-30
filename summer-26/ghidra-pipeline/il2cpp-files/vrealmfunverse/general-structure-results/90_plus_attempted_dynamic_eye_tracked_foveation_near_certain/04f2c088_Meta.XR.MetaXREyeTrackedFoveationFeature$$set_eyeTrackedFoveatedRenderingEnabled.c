/*
FUNCTION_NAME: Meta.XR.MetaXREyeTrackedFoveationFeature$$set_eyeTrackedFoveatedRenderingEnabled
ENTRY_POINT: 04f2c088
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 147
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_7;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_foveation_hits_4;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void Meta_XR_MetaXREyeTrackedFoveationFeature__set_eyeTrackedFoveatedRenderingEnabled(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  
  lVar2 = (**(code **)(param_1 + 0x138))();
  if ((lVar2 != 0) &&
     (plVar3 = (long *)thunk_FUN_02b4c898(lVar2,0),
     puVar1 = System_Collections_Generic_Dictionary<int,_DynamicResolutionHandler>_TypeInfo,
     plVar3 != (long *)0x0)) {
    uVar4 = (**(code **)(*plVar3 + 0x1b8))(plVar3,*(undefined8 *)(*plVar3 + 0x1c0));
    FUN_04c00984(*(undefined8 *)puVar1,uVar4,0);
    FUN_04bffdac();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


