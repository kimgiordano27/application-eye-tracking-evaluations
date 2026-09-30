/*
FUNCTION_NAME: FUN_027d1b04
ENTRY_POINT: 027d1b04
PROGRAM: Lovesick-libil2cpp.so
SCORE: 83
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_3;telemetry_or_network_hits_3;functionality_data_collection_or_telemetry_hits_3
*/


void FUN_027d1b04(long param_1)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined4 *puVar4;
  long local_30;
  undefined8 local_28;
  undefined8 local_18;
  
  if ((DAT_037888fc & 1) == 0) {
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List<MB3_AgglomerativeClustering_ClusterNode>_Add__
                      );
    thunk_FUN_00d48444(
                      Method_UnityEngine_XR_Interaction_Toolkit_Utilities_ComponentLocatorUtility<ARSessionOrigin>_TryFindComponent__
                      );
    thunk_FUN_00d48444(StringLiteral_10448);
    DAT_037888fc = 1;
  }
  local_30 = 0;
  local_28 = 0;
  local_18 = 0;
  if ((*(long *)(param_1 + 0x3c0) != 0) &&
     (lVar2 = FUN_02749858(*(long *)(param_1 + 0x3c0),0), *(long *)(lVar2 + 0x38) != 0)) {
    if (*(long *)(param_1 + 0x3c0) == 0) {
LAB_027d1c0c:
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    lVar2 = FUN_02749858(*(long *)(param_1 + 0x3c0),0);
    if (*(long *)(lVar2 + 0x38) == 0) goto LAB_027d1c0c;
    uVar3 = FUN_0129eff4(*(long *)(lVar2 + 0x38),*(undefined8 *)StringLiteral_10448,&local_30,
                         *(undefined8 *)
                          Method_System_Collections_Generic_List<MB3_AgglomerativeClustering_ClusterNode>_Add__
                        );
    if ((uVar3 & 1) != 0) {
      if (local_30 == 0) goto LAB_027d1c0c;
      uVar3 = FUN_02818bc4(local_30,local_28,&local_18,0);
      if ((uVar3 & 1) == 0) {
        return;
      }
      puVar4 = (undefined4 *)((ulong)&local_18 | 4);
      goto LAB_027d1bf4;
    }
  }
  puVar1 = 
  Method_UnityEngine_XR_Interaction_Toolkit_Utilities_ComponentLocatorUtility<ARSessionOrigin>_TryFindComponent__
  ;
  lVar2 = *(long *)
           Method_UnityEngine_XR_Interaction_Toolkit_Utilities_ComponentLocatorUtility<ARSessionOrigin>_TryFindComponent__
  ;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar2 = *(long *)puVar1;
  }
  puVar4 = (undefined4 *)(*(long *)(lVar2 + 0xb8) + 0x28);
LAB_027d1bf4:
  *(undefined4 *)(param_1 + 0x3c8) = *puVar4;
  return;
}


