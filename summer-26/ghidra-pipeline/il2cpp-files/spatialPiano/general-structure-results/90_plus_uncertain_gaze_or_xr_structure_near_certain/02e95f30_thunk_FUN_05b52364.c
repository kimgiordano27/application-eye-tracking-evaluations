/*
FUNCTION_NAME: thunk_FUN_05b52364
ENTRY_POINT: 02e95f30
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 113
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_2
*/


long thunk_FUN_05b52364(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  puVar2 = Method_System_Array_Resize<OVRPlugin_SpaceComponentType>__;
  if ((DAT_06bc2af7 & 1) == 0) {
    FUN_02f08768(Method_Unity_XR_CompositionLayers_CompositionSplash_<OnEnable>b__8_0__);
    FUN_02f08768(Method_Unity_XR_CompositionLayers_CompositionSplash_OnCameraPostRender__);
    FUN_02f08768(Method_System_Array_Resize<OVRPlugin_SpaceComponentType>__);
    FUN_02f08768(PTR_DAT_067ca4e8);
    FUN_02f08768(Method_UnityEngine_ComputeBuffer_SetData<ShaderInput_LightData>__);
    DAT_06bc2af7 = 1;
  }
  lVar5 = **(long **)(*(long *)puVar2 + 0xb8);
  if (lVar5 == 0) {
    uVar3 = thunk_FUN_02f45270(*(undefined8 *)
                                Method_UnityEngine_ComputeBuffer_SetData<ShaderInput_LightData>__);
    FUN_05b524bc();
    **(undefined8 **)(*(long *)puVar2 + 0xb8) = uVar3;
    lVar5 = **(long **)(*(long *)puVar2 + 0xb8);
    if (lVar5 == 0) goto LAB_05b524b8;
  }
  puVar1 = PTR_DAT_067ca4e8;
  if (*(int *)(lVar5 + 0x10) == 0) {
    lVar4 = *(long *)PTR_DAT_067ca4e8;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
      lVar5 = **(long **)(*(long *)puVar2 + 0xb8);
      if (lVar5 == 0) goto LAB_05b524b8;
      lVar4 = *(long *)puVar1;
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 8);
    if (lVar4 == 0) goto LAB_05b524b8;
    FUN_05b0531c(lVar4,*(undefined8 *)(lVar5 + 0x28),0);
    lVar5 = **(long **)(*(long *)puVar2 + 0xb8);
    if (lVar5 == 0) goto LAB_05b524b8;
  }
  puVar2 = Method_Unity_XR_CompositionLayers_CompositionSplash_<OnEnable>b__8_0__;
  FUN_037a79e8(lVar5 + 0x10,param_2,10,
               *(undefined8 *)
                Method_Unity_XR_CompositionLayers_CompositionSplash_OnCameraPostRender__);
  lVar5 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
  FUN_05116b38(lVar5,0);
  if (lVar5 != 0) {
    *(undefined8 *)(lVar5 + 0x10) = param_2;
    return lVar5;
  }
LAB_05b524b8:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


