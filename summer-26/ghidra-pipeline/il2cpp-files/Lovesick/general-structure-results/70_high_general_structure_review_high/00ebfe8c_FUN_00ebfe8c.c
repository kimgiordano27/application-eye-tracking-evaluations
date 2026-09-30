/*
FUNCTION_NAME: FUN_00ebfe8c
ENTRY_POINT: 00ebfe8c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_3;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_00ebfe8c(undefined8 param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  uint uVar9;
  
  if ((DAT_037751b3 & 1) == 0) {
    thunk_FUN_00d48444(Method_UnityEngine_Events_UnityEvent<MRUKTrackable>_Invoke__);
    thunk_FUN_00d48444(StringLiteral_3007);
    thunk_FUN_00d48444(PTR_DAT_033eb430);
    thunk_FUN_00d48444(
                      Method_Oculus_Interaction_PoseDetection_Debug_HandShapeDebugVisual_<>c_<Start>b__15_0__
                      );
    thunk_FUN_00d48444(Method_UnityEngine_Component_GetComponent<VA_Spiral>__);
    thunk_FUN_00d48444(
                      Method_DG_Tweening_Plugins_Core_ABSTweenPlugin<Vector4,_Vector4,_VectorOptions>__ctor__
                      );
    thunk_FUN_00d48444(StringLiteral_13474);
    thunk_FUN_00d48444(DG_Tweening_Plugins_Core_PathCore_CubicBezierDecoder_TypeInfo);
    thunk_FUN_00d48444(System_Collections_Generic_List<Image>_TypeInfo);
    thunk_FUN_00d48444(Method_SuperTextMeshData_<>c_<RebuildDictionaries>b__45_3__);
    thunk_FUN_00d48444(Method_Oculus_Platform_Request<AchievementDefinitionList>__ctor__);
    thunk_FUN_00d48444(PTR_DAT_033f4e80);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vrshlq_u64__);
    thunk_FUN_00d48444(Method_Autohand_HandPublicEvents_OnReleaseEvent__);
    thunk_FUN_00d48444(
                      Method_UnityEngine_XR_ARFoundation_ARTrackableManager<XRAnchorSubsystem,_XRAnchorSubsystemDescriptor,_XRAnchorSubsystem_Provider,_XRAnchor,_ARAnchor>_CreateTrackableFromExisting__
                      );
    DAT_037751b3 = 1;
  }
  lVar4 = FUN_00ed46bc(0);
  puVar2 = Method_Unity_Burst_Intrinsics_Arm_Neon_vrshlq_u64__;
  if (lVar4 != 0) {
    lVar7 = *(long *)(lVar4 + 0xa8);
    lVar4 = thunk_FUN_00d62348(*(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vrshlq_u64__);
    if ((lVar4 != 0) && (FUN_026c8404(lVar4,param_1,*(undefined8 *)PTR_DAT_033eb430,0), lVar7 != 0))
    {
      FUN_026c84dc(lVar7,lVar4,0);
      lVar4 = FUN_00ed46bc(0);
      if (lVar4 != 0) {
        lVar7 = *(long *)(lVar4 + 0xb0);
        lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
        if ((lVar4 != 0) &&
           (FUN_026c8404(lVar4,param_1,
                         *(undefined8 *)
                          Method_Oculus_Interaction_PoseDetection_Debug_HandShapeDebugVisual_<>c_<Start>b__15_0__
                         ,0), lVar7 != 0)) {
          FUN_026c84dc(lVar7,lVar4,0);
          lVar4 = FUN_00ed46bc(0);
          puVar2 = Method_Oculus_Platform_Request<AchievementDefinitionList>__ctor__;
          if (lVar4 != 0) {
            lVar7 = *(long *)(lVar4 + 0x120);
            lVar4 = thunk_FUN_00d62348(*(undefined8 *)
                                        Method_Oculus_Platform_Request<AchievementDefinitionList>__ctor__
                                      );
            if ((lVar4 != 0) &&
               (FUN_013df2bc(lVar4,param_1,*(undefined8 *)StringLiteral_13474,0),
               puVar3 = Method_Autohand_HandPublicEvents_OnReleaseEvent__, lVar7 != 0)) {
              FUN_013df780(lVar7,lVar4,
                           *(undefined8 *)Method_Autohand_HandPublicEvents_OnReleaseEvent__);
              lVar4 = FUN_00ed46bc(0);
              if (lVar4 != 0) {
                lVar7 = *(long *)(lVar4 + 0x128);
                lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                if ((lVar4 != 0) &&
                   (FUN_013df2bc(lVar4,param_1,
                                 *(undefined8 *)
                                  DG_Tweening_Plugins_Core_PathCore_CubicBezierDecoder_TypeInfo,0),
                   lVar7 != 0)) {
                  FUN_013df780(lVar7,lVar4,*(undefined8 *)puVar3);
                  lVar4 = FUN_00ed46bc(0);
                  if (lVar4 != 0) {
                    lVar7 = *(long *)(lVar4 + 0x130);
                    lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                    if ((lVar4 != 0) &&
                       (FUN_013df2bc(lVar4,param_1,
                                     *(undefined8 *)System_Collections_Generic_List<Image>_TypeInfo,
                                     0), lVar7 != 0)) {
                      FUN_013df780(lVar7,lVar4,*(undefined8 *)puVar3);
                      lVar4 = FUN_00ed46bc(0);
                      if (lVar4 != 0) {
                        lVar7 = *(long *)(lVar4 + 0x138);
                        lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                        if ((lVar4 != 0) &&
                           (FUN_013df2bc(lVar4,param_1,
                                         *(undefined8 *)
                                          Method_SuperTextMeshData_<>c_<RebuildDictionaries>b__45_3__
                                         ,0),
                           puVar2 = Method_UnityEngine_Events_UnityEvent<MRUKTrackable>_Invoke__,
                           lVar7 != 0)) {
                          FUN_013df780(lVar7,lVar4,*(undefined8 *)puVar3);
                          lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                          puVar3 = StringLiteral_3007;
                          puVar2 = 
                          Method_UnityEngine_XR_ARFoundation_ARTrackableManager<XRAnchorSubsystem,_XRAnchorSubsystemDescriptor,_XRAnchorSubsystem_Provider,_XRAnchor,_ARAnchor>_CreateTrackableFromExisting__
                          ;
                          if (lVar4 != 0) {
                            FUN_016f27fc(lVar4,param_1,
                                         *(undefined8 *)
                                          Method_DG_Tweening_Plugins_Core_ABSTweenPlugin<Vector4,_Vector4,_VectorOptions>__ctor__
                                         ,0);
                            FUN_00fe0700(*(undefined8 *)puVar2,lVar4,0);
                            lVar4 = FUN_010c3404(param_1,*(undefined8 *)puVar3);
                            puVar3 = Method_UnityEngine_Component_GetComponent<VA_Spiral>__;
                            puVar2 = PTR_DAT_033f4e80;
                            if (lVar4 != 0) {
                              uVar1 = *(uint *)(lVar4 + 0x18);
                              if (0 < (int)uVar1) {
                                uVar9 = 0;
                                do {
                                  if (uVar1 <= uVar9) {
                    /* WARNING: Subroutine does not return */
                                    FUN_00da5194();
                                  }
                                  lVar7 = *(long *)(lVar4 + (long)(int)uVar9 * 8 + 0x20);
                                  if (lVar7 == 0) goto LAB_00ec0278;
                                  uVar8 = *(undefined8 *)(lVar7 + 0x28);
                                  lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                                  if (lVar5 == 0) goto LAB_00ec0278;
                                  FUN_013df2bc(lVar5,param_1,*(undefined8 *)puVar3,0);
                                  lVar5 = FUN_017b76bc(uVar8,lVar5,0);
                                  if (lVar5 == 0) {
                                    *(undefined8 *)(lVar7 + 0x28) = 0;
                                  }
                                  else {
                                    uVar8 = *(undefined8 *)puVar2;
                                    lVar6 = thunk_FUN_00d6225c(lVar5,uVar8);
                                    if (lVar6 == 0) {
LAB_00ec027c:
                    /* WARNING: Subroutine does not return */
                                      FUN_00da544c(lVar5,uVar8);
                                    }
                                    *(long *)(lVar7 + 0x28) = lVar6;
                                    uVar8 = *(undefined8 *)puVar2;
                                    lVar7 = thunk_FUN_00d6225c(lVar5,uVar8);
                                    if (lVar7 == 0) goto LAB_00ec027c;
                                  }
                                  uVar1 = *(uint *)(lVar4 + 0x18);
                                  uVar9 = uVar9 + 1;
                                } while ((int)uVar9 < (int)uVar1);
                              }
                              return;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_00ec0278:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


