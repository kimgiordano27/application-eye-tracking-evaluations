/*
FUNCTION_NAME: FUN_07166378
ENTRY_POINT: 07166378
PROGRAM: vandalizer-libil2cpp.so
SCORE: 84
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_14
*/


void FUN_07166378(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  
  if ((DAT_07a5b35c & 1) == 0) {
    FUN_031f20f4(PTR_DAT_0759b2b0);
    FUN_031f20f4(Unity_VisualScripting_FullSerializer_fsMetaType_<>c__DisplayClass16_0_TypeInfo);
    FUN_031f20f4(Unity_VisualScripting_FullSerializer_fsMetaType_<>c__DisplayClass18_0_TypeInfo);
    FUN_031f20f4(OVRSimpleJSON_JSONArray_<get_Children>d__24_TypeInfo);
    FUN_031f20f4(Unity_VisualScripting_FullSerializer_fsMetaType_<>c__DisplayClass19_0_TypeInfo);
    FUN_031f20f4(
                Unity_VisualScripting_FullSerializer_Internal_fsPortableReflection_AttributeQueryComparator_TypeInfo
                );
    FUN_031f20f4(
                Unity_VisualScripting_FullSerializer_fsSerializer_fsLazyCycleDefinitionWriter_TypeInfo
                );
    FUN_031f20f4(
                Unity_VisualScripting_FullSerializer_Internal_fsTypeExtensions_<>c__DisplayClass2_0_TypeInfo
                );
    DAT_07a5b35c = 1;
  }
  puVar1 = 
  Unity_VisualScripting_FullSerializer_Internal_fsTypeExtensions_<>c__DisplayClass2_0_TypeInfo;
  lVar5 = *(long *)(param_1 + 0x20);
  if (lVar5 != 0) {
    uVar3 = thunk_FUN_0322f148(*(undefined8 *)PTR_DAT_0759b2b0);
    FUN_05d75504(uVar3,param_1,*(undefined8 *)puVar1,0);
    FUN_0710821c(lVar5,uVar3,0);
    puVar2 = Unity_VisualScripting_FullSerializer_fsSerializer_fsLazyCycleDefinitionWriter_TypeInfo;
    puVar1 = Unity_VisualScripting_FullSerializer_fsMetaType_<>c__DisplayClass19_0_TypeInfo;
    plVar4 = *(long **)(param_1 + 0x20);
    if (plVar4 != (long *)0x0) {
      lVar5 = (**(code **)(*plVar4 + 0x3c8))(plVar4,*(undefined8 *)(*plVar4 + 0x3d0));
      uVar3 = thunk_FUN_0322f148(*(undefined8 *)puVar1);
      FUN_04292d74(uVar3,param_1,*(undefined8 *)puVar2,0);
      if (lVar5 != 0) {
        Fusion_Native__MallocAndClearArray<NetPeerGroup>
                  (lVar5,uVar3,1,
                   *(undefined8 *)
                    Unity_VisualScripting_FullSerializer_fsMetaType_<>c__DisplayClass18_0_TypeInfo);
        puVar2 = 
        Unity_VisualScripting_FullSerializer_Internal_fsPortableReflection_AttributeQueryComparator_TypeInfo
        ;
        puVar1 = OVRSimpleJSON_JSONArray_<get_Children>d__24_TypeInfo;
        plVar4 = *(long **)(param_1 + 0x20);
        if (plVar4 != (long *)0x0) {
          lVar5 = (**(code **)(*plVar4 + 0x3c8))(plVar4,*(undefined8 *)(*plVar4 + 0x3d0));
          uVar3 = thunk_FUN_0322f148(*(undefined8 *)puVar1);
          FUN_04292d74(uVar3,param_1,*(undefined8 *)puVar2,0);
          if (lVar5 != 0) {
            Fusion_Native__MallocAndClearArray<NetPeerGroup>
                      (lVar5,uVar3,1,
                       *(undefined8 *)
                        Unity_VisualScripting_FullSerializer_fsMetaType_<>c__DisplayClass16_0_TypeInfo
                      );
            return;
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_031f2390();
  }
  return;
}


