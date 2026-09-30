/*
FUNCTION_NAME: FUN_070ccd44
ENTRY_POINT: 070ccd44
PROGRAM: vandalizer-libil2cpp.so
SCORE: 114
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_6;functionality_eye_api_context_without_clear_sink_hits_6
*/


void FUN_070ccd44(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  puVar2 = OVRPlugin_OVRP_1_17_0_TypeInfo;
  puVar1 = PTR_DAT_075d8838;
  if ((DAT_07a5a97d & 1) == 0) {
    FUN_031f20f4(PTR_DAT_075d8810);
    FUN_031f20f4(PTR_DAT_075d8888);
    FUN_031f20f4(PTR_DAT_075d8818);
    FUN_031f20f4(PTR_DAT_075d8890);
    FUN_031f20f4(PTR_DAT_075d8838);
    FUN_031f20f4(PTR_DAT_075d8840);
    FUN_031f20f4(OVRPlugin_OVRP_1_17_0_TypeInfo);
    FUN_031f20f4(OVRPlugin_OVRP_1_18_0_TypeInfo);
    FUN_031f20f4(OVRPlugin_OVRP_1_19_0_TypeInfo);
    DAT_07a5a97d = 1;
  }
  lVar3 = FUN_0710341c(param_1,0);
  uVar4 = thunk_FUN_0322f148(*(undefined8 *)puVar1);
  FUN_04292d74(uVar4,param_1,*(undefined8 *)puVar2,0);
  puVar2 = OVRPlugin_OVRP_1_18_0_TypeInfo;
  puVar1 = PTR_DAT_075d8890;
  if (lVar3 != 0) {
    Fusion_Native__ExpandPtrArray<__Il2CppFullySharedGenericStructType>
              (lVar3,uVar4,0,*(undefined8 *)PTR_DAT_075d8810);
    lVar3 = FUN_0710341c(param_1,0);
    uVar4 = thunk_FUN_0322f148(*(undefined8 *)puVar1);
    FUN_04292d74(uVar4,param_1,*(undefined8 *)puVar2,0);
    puVar2 = OVRPlugin_OVRP_1_19_0_TypeInfo;
    puVar1 = PTR_DAT_075d8840;
    if (lVar3 != 0) {
      Fusion_Native__ExpandPtrArray<__Il2CppFullySharedGenericStructType>
                (lVar3,uVar4,0,*(undefined8 *)PTR_DAT_075d8888);
      lVar3 = FUN_0710341c(param_1,0);
      uVar4 = thunk_FUN_0322f148(*(undefined8 *)puVar1);
      FUN_04292d74(uVar4,param_1,*(undefined8 *)puVar2,0);
      if (lVar3 != 0) {
        Fusion_Native__ExpandPtrArray<__Il2CppFullySharedGenericStructType>
                  (lVar3,uVar4,0,*(undefined8 *)PTR_DAT_075d8818);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


