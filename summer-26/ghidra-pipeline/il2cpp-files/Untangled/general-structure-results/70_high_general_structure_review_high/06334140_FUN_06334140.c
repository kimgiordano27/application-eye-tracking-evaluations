/*
FUNCTION_NAME: FUN_06334140
ENTRY_POINT: 06334140
PROGRAM: Untangled-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_16;validity_or_gating_hits_1;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2
*/


void FUN_06334140(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if ((DAT_071cd1a8 & 1) == 0) {
    FUN_02f07e70(PTR_DAT_06d37100);
    FUN_02f07e70(UnityEngine_XR_OpenXR_Features_Meta_MetaOpenXRCameraSubsystem_var);
    FUN_02f07e70(UnityEngine_XR_OpenXR_Features_Meta_MetaOpenXRPlaneSubsystem_var);
    FUN_02f07e70(UnityEngine_XR_OpenXR_Features_Meta_MetaOpenXRRaycastSubsystem_var);
    FUN_02f07e70(UnityEngine_XR_OpenXR_Features_Meta_MetaOpenXRSessionSubsystem_var);
    DAT_071cd1a8 = 1;
  }
  puVar4 = UnityEngine_XR_OpenXR_Features_Meta_MetaOpenXRSessionSubsystem_var;
  puVar3 = UnityEngine_XR_OpenXR_Features_Meta_MetaOpenXRRaycastSubsystem_var;
  puVar2 = UnityEngine_XR_OpenXR_Features_Meta_MetaOpenXRPlaneSubsystem_var;
  puVar1 = UnityEngine_XR_OpenXR_Features_Meta_MetaOpenXRCameraSubsystem_var;
  if (param_2 != 0) {
    if (*(int *)(*(long *)PTR_DAT_06d37100 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    FUN_062e012c(param_2,*(undefined8 *)puVar1,0,0);
    FUN_062e012c(param_2,*(undefined8 *)puVar3,0,0);
    FUN_062e012c(param_2,*(undefined8 *)puVar2,0,0);
    FUN_062e012c(param_2,*(undefined8 *)puVar4,0,0);
    return;
  }
  thunk_FUN_02f239f0(PTR_DAT_06d02610);
  uVar5 = thunk_FUN_02ef1808();
  uVar6 = thunk_FUN_02f239f0(System_Reflection_MethodBase_var);
  FUN_05558508(uVar5,uVar6,0);
  uVar6 = thunk_FUN_02f239f0(System_Reflection_MethodInfo_var);
                    /* WARNING: Subroutine does not return */
  FUN_02f07f94(uVar5,uVar6);
}


