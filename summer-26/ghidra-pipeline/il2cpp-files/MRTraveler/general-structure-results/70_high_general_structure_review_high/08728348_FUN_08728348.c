/*
FUNCTION_NAME: FUN_08728348
ENTRY_POINT: 08728348
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_17;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_structure_only;telemetry_or_network_hits_5;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure;functionality_data_collection_or_telemetry_hits_5
*/


void FUN_08728348(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  
  if ((DAT_0943c8f6 & 1) == 0) {
    FUN_03c8f898(UnityEngine_UIElements_BaseField<Bounds>_TypeInfo);
    FUN_03c8f898(Newtonsoft_Json_Utilities_BidirectionalDictionary<string,_object>_TypeInfo);
    FUN_03c8f898(Oculus_Movement_Utils_BoneVisualizer_BoneTuple<HumanBodyBones>_TypeInfo);
    FUN_03c8f898(
                Oculus_Movement_Utils_BoneVisualizer_BoneTuple<OVRUnityHumanoidSkeletonRetargeter_OVRHumanBodyBonesMappings_BodyTrackingBoneId>_TypeInfo
                );
    FUN_03c8f898(
                Oculus_Movement_Utils_BoneVisualizer_BoneTuple<OVRUnityHumanoidSkeletonRetargeter_OVRHumanBodyBonesMappings_FullBodyTrackingBoneId>_TypeInfo
                );
    FUN_03c8f898(
                Cysharp_Threading_Tasks_AutoResetUniTaskCompletionSource<AsyncGPUReadbackRequest>_TypeInfo
                );
    FUN_03c8f898(Cysharp_Threading_Tasks_AutoResetUniTaskCompletionSource<Object>_TypeInfo);
    FUN_03c8f898(Cysharp_Threading_Tasks_AutoResetUniTaskCompletionSource<UnityWebRequest>_TypeInfo)
    ;
    FUN_03c8f898(UnityEngine_UIElements_BaseCompositeField<RectInt,_IntegerField,_int>_TypeInfo);
    FUN_03c8f898(UnityEngine_UIElements_BaseCompositeField<Vector2,_FloatField,_float>_TypeInfo);
    DAT_0943c8f6 = 1;
  }
  puVar3 = Cysharp_Threading_Tasks_AutoResetUniTaskCompletionSource<Object>_TypeInfo;
  if (*(long *)(param_1 + 0x20) != 0) {
    iVar9 = FUN_05aa0028(*(long *)(param_1 + 0x20),
                         *(undefined8 *)
                          Cysharp_Threading_Tasks_AutoResetUniTaskCompletionSource<Object>_TypeInfo)
    ;
    puVar4 = Cysharp_Threading_Tasks_AutoResetUniTaskCompletionSource<UnityWebRequest>_TypeInfo;
    if (*(long *)(param_1 + 0x18) != 0) {
      uVar11 = FUN_05aa0f7c(*(long *)(param_1 + 0x18),
                            *(undefined8 *)
                             Cysharp_Threading_Tasks_AutoResetUniTaskCompletionSource<UnityWebRequest>_TypeInfo
                           );
      if (*(long *)(param_1 + 0x18) != 0) {
        uVar12 = FUN_05aa0f7c(*(long *)(param_1 + 0x18),*(undefined8 *)puVar4);
        lVar14 = *(long *)(param_1 + 0x10);
        if (lVar14 != 0) {
          iVar10 = *(int *)(lVar14 + 0x18);
          *(undefined4 *)(lVar14 + 0x18) = 0;
          *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
          if (0 < iVar10) {
            FUN_071245a8(*(undefined8 *)(lVar14 + 0x10),0,iVar10,0);
            lVar14 = *(long *)(param_1 + 0x10);
            if (lVar14 == 0) goto LAB_08728634;
          }
          puVar2 = Newtonsoft_Json_Utilities_BidirectionalDictionary<string,_object>_TypeInfo;
          lVar15 = *(long *)(lVar14 + 0x10);
          lVar16 = *(long *)
                    Newtonsoft_Json_Utilities_BidirectionalDictionary<string,_object>_TypeInfo;
          *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
          if (lVar15 != 0) {
            uVar1 = *(uint *)(lVar14 + 0x18);
            if (uVar1 < *(uint *)(lVar15 + 0x18)) {
              *(uint *)(lVar14 + 0x18) = uVar1 + 1;
              puVar13 = (undefined8 *)(lVar15 + (long)(int)uVar1 * 8 + 0x20);
              *puVar13 = uVar12;
              thunk_FUN_03d233cc(puVar13,uVar12);
            }
            else {
              FUN_05212cf4(lVar14,uVar12,
                           *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
            }
            lVar14 = *(long *)(param_1 + 0x10);
            if (lVar14 != 0) {
              lVar15 = *(long *)(lVar14 + 0x10);
              lVar16 = *(long *)puVar2;
              *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
              if (lVar15 != 0) {
                uVar1 = *(uint *)(lVar14 + 0x18);
                if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                  *(uint *)(lVar14 + 0x18) = uVar1 + 1;
                  puVar13 = (undefined8 *)(lVar15 + (long)(int)uVar1 * 8 + 0x20);
                  *puVar13 = uVar11;
                  thunk_FUN_03d233cc(puVar13,uVar11);
                }
                else {
                  FUN_05212cf4(lVar14,uVar11,
                               *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
                }
                puVar8 = 
                Oculus_Movement_Utils_BoneVisualizer_BoneTuple<OVRUnityHumanoidSkeletonRetargeter_OVRHumanBodyBonesMappings_FullBodyTrackingBoneId>_TypeInfo
                ;
                puVar7 = 
                Oculus_Movement_Utils_BoneVisualizer_BoneTuple<OVRUnityHumanoidSkeletonRetargeter_OVRHumanBodyBonesMappings_BodyTrackingBoneId>_TypeInfo
                ;
                puVar6 = UnityEngine_UIElements_BaseField<Bounds>_TypeInfo;
                puVar5 = 
                UnityEngine_UIElements_BaseCompositeField<RectInt,_IntegerField,_int>_TypeInfo;
                puVar2 = 
                Cysharp_Threading_Tasks_AutoResetUniTaskCompletionSource<AsyncGPUReadbackRequest>_TypeInfo
                ;
                lVar14 = *(long *)(param_1 + 0x20);
                while (lVar14 != 0) {
                  if ((*(int *)(lVar14 + 0x18) < 1) ||
                     (iVar10 = FUN_05a9ffe4(lVar14,*(undefined8 *)puVar2), iVar9 != iVar10)) {
                    lVar14 = thunk_FUN_03cf5234(*(undefined8 *)puVar6);
                    FUN_08726e68(lVar14,3);
                    if (lVar14 != 0) {
                      *(int *)(lVar14 + 0x24) = iVar9;
                      if (*(long *)(param_1 + 0x10) != 0) {
                        uVar11 = FUN_05214770(*(long *)(param_1 + 0x10),*(undefined8 *)puVar8);
                        *(undefined8 *)(lVar14 + 0x28) = uVar11;
                        thunk_FUN_03d233cc();
                        if (*(long *)(param_1 + 0x18) != 0) {
                          FUN_05aa0fdc(*(long *)(param_1 + 0x18),lVar14,*(undefined8 *)puVar5);
                          return;
                        }
                      }
                    }
                    break;
                  }
                  if (*(long *)(param_1 + 0x18) == 0) break;
                  uVar11 = FUN_05aa0f7c(*(long *)(param_1 + 0x18),*(undefined8 *)puVar4);
                  if (*(long *)(param_1 + 0x10) == 0) break;
                  FUN_052139c8(*(long *)(param_1 + 0x10),0,uVar11,*(undefined8 *)puVar7);
                  if (*(long *)(param_1 + 0x20) == 0) break;
                  FUN_05aa0028(*(long *)(param_1 + 0x20),*(undefined8 *)puVar3);
                  lVar14 = *(long *)(param_1 + 0x20);
                }
              }
            }
          }
        }
      }
    }
  }
LAB_08728634:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


