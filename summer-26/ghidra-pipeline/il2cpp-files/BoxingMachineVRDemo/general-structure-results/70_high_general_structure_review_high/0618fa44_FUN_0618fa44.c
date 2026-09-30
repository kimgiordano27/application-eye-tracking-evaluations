/*
FUNCTION_NAME: FUN_0618fa44
ENTRY_POINT: 0618fa44
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_8;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_0618fa44(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 local_48;
  
  puVar2 = PTR_DAT_06767628;
  if ((DAT_06b8aded & 1) == 0) {
    FUN_02d6084c(PTR_DAT_06767628);
    FUN_02d6084c(PTR_DAT_06767d10);
    FUN_02d6084c(
                Method_Unity_Collections_NativeSliceExtensions_Slice<MeshGenerator_TessellationJobParameters>__
                );
    FUN_02d6084c(Method_Unity_Collections_NativeSliceExtensions_Slice<Painter2D_Painter2DJobData>__)
    ;
    FUN_02d6084c(Method_UnityEngine_NoAllocHelpers_ExtractArrayFromList<int>__);
    FUN_02d6084c(
                Method_Unity_Collections_LowLevel_Unsafe_NativeSliceUnsafeUtility_GetUnsafePtr<byte>__
                );
    FUN_02d6084c(
                Method_Unity_Collections_LowLevel_Unsafe_NativeSliceUnsafeUtility_GetUnsafePtr<ConvertMeshJobData>__
                );
    FUN_02d6084c(
                Method_Unity_Collections_LowLevel_Unsafe_NativeSliceUnsafeUtility_GetUnsafePtr<DrawBufferRange>__
                );
    FUN_02d6084c(
                Method_Unity_Collections_LowLevel_Unsafe_NativeSliceUnsafeUtility_GetUnsafePtr<GfxUpdateBufferRange>__
                );
    FUN_02d6084c(
                Method_Unity_Collections_LowLevel_Unsafe_NativeSliceUnsafeUtility_GetUnsafePtr<NudgeJobData>__
                );
    FUN_02d6084c(
                Method_Unity_Collections_LowLevel_Unsafe_NativeSliceUnsafeUtility_GetUnsafePtr<ushort>__
                );
    FUN_02d6084c(
                Method_Unity_Collections_LowLevel_Unsafe_NativeSliceUnsafeUtility_GetUnsafePtr<Vertex>__
                );
    FUN_02d6084c(
                Method_Unity_Collections_LowLevel_Unsafe_NativeSliceUnsafeUtility_GetUnsafeReadOnlyPtr<JobHandle>__
                );
    FUN_02d6084c(Method_Unity_Collections_NativeSortExtension_BinarySearch<InstanceHandle>__);
    FUN_02d6084c(Method_System_RuntimeMethodHandle_GetObjectData__);
    FUN_02d6084c(Method_System_Reflection_RuntimeMethodInfo_ConvertValues__);
    FUN_02d6084c(Method_System_Reflection_RuntimeMethodInfo_GetGenericMethodDefinition__);
    FUN_02d6084c(Method_System_Reflection_RuntimeMethodInfo_GetObjectData__);
    FUN_02d6084c(Method_System_Reflection_RuntimeMethodInfo_Invoke__);
    FUN_02d6084c(Method_System_Reflection_RuntimeMethodInfo_MakeGenericMethod__);
    FUN_02d6084c(Method_System_Reflection_RuntimeModule_GetObjectData__);
    FUN_02d6084c(Method_UnityEngine_UIElements_RuntimePanel_Create__);
    FUN_02d6084c(Method_System_Reflection_RuntimePropertyInfo_GetObjectData__);
    FUN_02d6084c(Method_System_Reflection_RuntimePropertyInfo_GetPropertyFromHandle__);
    FUN_02d6084c(Method_System_Reflection_RuntimePropertyInfo_GetValue__);
    FUN_02d6084c(Method_System_Reflection_RuntimePropertyInfo_SetValue__);
    FUN_02d6084c(Method_UnityEngine_UIElements_ResolvedStyleAccessPropertyBag_AddProperty<Vector3>__
                );
    DAT_06b8aded = 1;
  }
  lVar5 = *(long *)puVar2;
  local_48 = 0;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar5 = *(long *)puVar2;
  }
  puVar4 = Method_UnityEngine_UIElements_ResolvedStyleAccessPropertyBag_AddProperty<Vector3>__;
  puVar1 = PTR_DAT_0675e258;
  lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
  if (lVar5 != 0) {
    local_48 = *(undefined8 *)(lVar5 + 0x28);
    lVar5 = *(long *)(PTR_DAT_0675e258 + 0x28);
    if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar6 = FUN_05015c2c(lVar5 + 0x20,0);
    uVar7 = FUN_05015c2c(*(long *)(puVar1 + 0x88) + 0x20,0);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(lVar5);
      lVar5 = *(long *)puVar4;
    }
    puVar3 = PTR_DAT_06767d10;
    lVar8 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x3e0);
    if (lVar8 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4(lVar5);
        lVar5 = *(long *)puVar4;
      }
      uVar9 = **(undefined8 **)(lVar5 + 0xb8);
      lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                  Method_Unity_Collections_LowLevel_Unsafe_NativeSliceUnsafeUtility_GetUnsafeReadOnlyPtr<JobHandle>__
                                );
      FUN_04360f10(lVar8,uVar9,*(undefined8 *)Method_System_RuntimeMethodHandle_GetObjectData__,0);
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long *)(lVar5 + 0x3e0) = lVar8;
      thunk_FUN_02dd37b4(lVar5 + 0x3e0,lVar8);
    }
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    FUN_0618615c(&local_48,uVar6,uVar7,lVar8);
    lVar5 = *(long *)puVar2;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar5 = *(long *)puVar2;
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
    if (lVar5 != 0) {
      local_48 = *(undefined8 *)(lVar5 + 0x28);
      lVar5 = *(long *)(puVar1 + 0x28);
      if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar6 = FUN_05015c2c(lVar5 + 0x20,0);
      uVar7 = FUN_05015c2c(*(long *)(puVar1 + 0x30) + 0x20,0);
      lVar5 = *(long *)puVar4;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4(lVar5);
        lVar5 = *(long *)puVar4;
      }
      lVar8 = *(long *)(*(long *)(lVar5 + 0xb8) + 1000);
      if (lVar8 == 0) {
        if (*(int *)(lVar5 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4(lVar5);
          lVar5 = *(long *)puVar4;
        }
        uVar9 = **(undefined8 **)(lVar5 + 0xb8);
        lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                    Method_Unity_Collections_LowLevel_Unsafe_NativeSliceUnsafeUtility_GetUnsafePtr<DrawBufferRange>__
                                  );
        FUN_043613a8(lVar8,uVar9,
                     *(undefined8 *)Method_System_Reflection_RuntimeMethodInfo_GetObjectData__,0);
        lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
        *(long *)(lVar5 + 1000) = lVar8;
        thunk_FUN_02dd37b4(lVar5 + 1000,lVar8);
      }
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      FUN_0618615c(&local_48,uVar6,uVar7,lVar8);
      lVar5 = *(long *)puVar2;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        lVar5 = *(long *)puVar2;
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
      if (lVar5 != 0) {
        local_48 = *(undefined8 *)(lVar5 + 0x28);
        lVar5 = *(long *)(puVar1 + 0x28);
        if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        uVar6 = FUN_05015c2c(lVar5 + 0x20,0);
        uVar7 = FUN_05015c2c(*(long *)(puVar1 + 0x38) + 0x20,0);
        lVar5 = *(long *)puVar4;
        if (*(int *)(lVar5 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4(lVar5);
          lVar5 = *(long *)puVar4;
        }
        lVar8 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x3f0);
        if (lVar8 == 0) {
          if (*(int *)(lVar5 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4(lVar5);
            lVar5 = *(long *)puVar4;
          }
          uVar9 = **(undefined8 **)(lVar5 + 0xb8);
          lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                      Method_Unity_Collections_LowLevel_Unsafe_NativeSliceUnsafeUtility_GetUnsafePtr<NudgeJobData>__
                                    );
          FUN_04361098(lVar8,uVar9,
                       *(undefined8 *)Method_System_Reflection_RuntimeMethodInfo_Invoke__,0);
          lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
          *(long *)(lVar5 + 0x3f0) = lVar8;
          thunk_FUN_02dd37b4(lVar5 + 0x3f0,lVar8);
        }
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        FUN_0618615c(&local_48,uVar6,uVar7,lVar8);
        lVar5 = *(long *)puVar2;
        if (*(int *)(lVar5 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
          lVar5 = *(long *)puVar2;
        }
        lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
        if (lVar5 != 0) {
          local_48 = *(undefined8 *)(lVar5 + 0x28);
          lVar5 = *(long *)(puVar1 + 0x28);
          if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          uVar6 = FUN_05015c2c(lVar5 + 0x20,0);
          uVar7 = FUN_05015c2c(*(long *)(puVar1 + 0x48) + 0x20,0);
          lVar5 = *(long *)puVar4;
          if (*(int *)(lVar5 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4(lVar5);
            lVar5 = *(long *)puVar4;
          }
          lVar8 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x3f8);
          if (lVar8 == 0) {
            if (*(int *)(lVar5 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4(lVar5);
              lVar5 = *(long *)puVar4;
            }
            uVar9 = **(undefined8 **)(lVar5 + 0xb8);
            lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                        Method_Unity_Collections_LowLevel_Unsafe_NativeSliceUnsafeUtility_GetUnsafePtr<Vertex>__
                                      );
            FUN_0436115c(lVar8,uVar9,
                         *(undefined8 *)
                          Method_System_Reflection_RuntimeMethodInfo_MakeGenericMethod__,0);
            lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
            *(long *)(lVar5 + 0x3f8) = lVar8;
            thunk_FUN_02dd37b4(lVar5 + 0x3f8,lVar8);
          }
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          FUN_0618615c(&local_48,uVar6,uVar7,lVar8);
          lVar5 = *(long *)puVar2;
          if (*(int *)(lVar5 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
            lVar5 = *(long *)puVar2;
          }
          lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
          if (lVar5 != 0) {
            local_48 = *(undefined8 *)(lVar5 + 0x28);
            lVar5 = *(long *)(puVar1 + 0x28);
            if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
            }
            uVar6 = FUN_05015c2c(lVar5 + 0x20,0);
            uVar7 = FUN_05015c2c(*(long *)(puVar1 + 0x68) + 0x20,0);
            lVar5 = *(long *)puVar4;
            if (*(int *)(lVar5 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4(lVar5);
              lVar5 = *(long *)puVar4;
            }
            lVar8 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x400);
            if (lVar8 == 0) {
              if (*(int *)(lVar5 + 0xe4) == 0) {
                thunk_FUN_02dbd7b4(lVar5);
                lVar5 = *(long *)puVar4;
              }
              uVar9 = **(undefined8 **)(lVar5 + 0xb8);
              lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                          Method_Unity_Collections_LowLevel_Unsafe_NativeSliceUnsafeUtility_GetUnsafePtr<ushort>__
                                        );
              FUN_04361220(lVar8,uVar9,
                           *(undefined8 *)Method_System_Reflection_RuntimeModule_GetObjectData__,0);
              lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
              *(long *)(lVar5 + 0x400) = lVar8;
              thunk_FUN_02dd37b4(lVar5 + 0x400,lVar8);
            }
            if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
            }
            FUN_0618615c(&local_48,uVar6,uVar7,lVar8);
            lVar5 = *(long *)puVar2;
            if (*(int *)(lVar5 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
              lVar5 = *(long *)puVar2;
            }
            lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
            if (lVar5 != 0) {
              local_48 = *(undefined8 *)(lVar5 + 0x28);
              lVar5 = *(long *)(puVar1 + 0x28);
              if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
                thunk_FUN_02dbd7b4();
              }
              uVar6 = FUN_05015c2c(lVar5 + 0x20,0);
              uVar7 = FUN_05015c2c(*(long *)(puVar1 + 0x18) + 0x20,0);
              lVar5 = *(long *)puVar4;
              if (*(int *)(lVar5 + 0xe4) == 0) {
                thunk_FUN_02dbd7b4(lVar5);
                lVar5 = *(long *)puVar4;
              }
              lVar8 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x408);
              if (lVar8 == 0) {
                if (*(int *)(lVar5 + 0xe4) == 0) {
                  thunk_FUN_02dbd7b4(lVar5);
                  lVar5 = *(long *)puVar4;
                }
                uVar9 = **(undefined8 **)(lVar5 + 0xb8);
                lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                            Method_Unity_Collections_LowLevel_Unsafe_NativeSliceUnsafeUtility_GetUnsafePtr<ConvertMeshJobData>__
                                          );
                System_Collections_Generic_Dictionary_ValueCollection<Guid,_OVRTask_CallbackWithState<OVRResult<object,_Int32Enum>,_OVRTask_CombinedTaskDataWithCompletedTaskId<OVRResult<object,_Int32Enum>>>>___ctor
                          (lVar8,uVar9,
                           *(undefined8 *)Method_UnityEngine_UIElements_RuntimePanel_Create__,0);
                lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
                *(long *)(lVar5 + 0x408) = lVar8;
                thunk_FUN_02dd37b4(lVar5 + 0x408,lVar8);
              }
              if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                thunk_FUN_02dbd7b4();
              }
              FUN_0618615c(&local_48,uVar6,uVar7,lVar8);
              lVar5 = *(long *)puVar2;
              if (*(int *)(lVar5 + 0xe4) == 0) {
                thunk_FUN_02dbd7b4();
                lVar5 = *(long *)puVar2;
              }
              lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
              if (lVar5 != 0) {
                local_48 = *(undefined8 *)(lVar5 + 0x28);
                lVar5 = *(long *)(puVar1 + 0x28);
                if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
                  thunk_FUN_02dbd7b4();
                }
                uVar6 = FUN_05015c2c(lVar5 + 0x20,0);
                uVar7 = FUN_05015c2c(*(long *)(puVar1 + 0x40) + 0x20,0);
                lVar5 = *(long *)puVar4;
                if (*(int *)(lVar5 + 0xe4) == 0) {
                  thunk_FUN_02dbd7b4(lVar5);
                  lVar5 = *(long *)puVar4;
                }
                lVar8 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x410);
                if (lVar8 == 0) {
                  if (*(int *)(lVar5 + 0xe4) == 0) {
                    thunk_FUN_02dbd7b4(lVar5);
                    lVar5 = *(long *)puVar4;
                  }
                  uVar9 = **(undefined8 **)(lVar5 + 0xb8);
                  lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                              Method_Unity_Collections_LowLevel_Unsafe_NativeSliceUnsafeUtility_GetUnsafePtr<byte>__
                                            );
                  FUN_04361530(lVar8,uVar9,
                               *(undefined8 *)
                                Method_System_Reflection_RuntimePropertyInfo_GetObjectData__,0);
                  lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
                  *(long *)(lVar5 + 0x410) = lVar8;
                  thunk_FUN_02dd37b4(lVar5 + 0x410,lVar8);
                }
                if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                  thunk_FUN_02dbd7b4();
                }
                FUN_0618615c(&local_48,uVar6,uVar7,lVar8);
                lVar5 = *(long *)puVar2;
                if (*(int *)(lVar5 + 0xe4) == 0) {
                  thunk_FUN_02dbd7b4();
                  lVar5 = *(long *)puVar2;
                }
                lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
                if (lVar5 != 0) {
                  local_48 = *(undefined8 *)(lVar5 + 0x28);
                  lVar5 = *(long *)(puVar1 + 0x28);
                  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
                    thunk_FUN_02dbd7b4();
                  }
                  uVar6 = FUN_05015c2c(lVar5 + 0x20,0);
                  uVar7 = FUN_05015c2c(*(long *)(puVar1 + 0x50) + 0x20,0);
                  lVar5 = *(long *)puVar4;
                  if (*(int *)(lVar5 + 0xe4) == 0) {
                    thunk_FUN_02dbd7b4(lVar5);
                    lVar5 = *(long *)puVar4;
                  }
                  lVar8 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x418);
                  if (lVar8 == 0) {
                    if (*(int *)(lVar5 + 0xe4) == 0) {
                      thunk_FUN_02dbd7b4(lVar5);
                      lVar5 = *(long *)puVar4;
                    }
                    uVar9 = **(undefined8 **)(lVar5 + 0xb8);
                    lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                                Method_Unity_Collections_NativeSortExtension_BinarySearch<InstanceHandle>__
                                              );
                    FUN_043615f4(lVar8,uVar9,
                                 *(undefined8 *)
                                  Method_System_Reflection_RuntimePropertyInfo_GetPropertyFromHandle__
                                 ,0);
                    lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
                    *(long *)(lVar5 + 0x418) = lVar8;
                    thunk_FUN_02dd37b4(lVar5 + 0x418,lVar8);
                  }
                  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                    thunk_FUN_02dbd7b4();
                  }
                  FUN_0618615c(&local_48,uVar6,uVar7,lVar8);
                  lVar5 = *(long *)puVar2;
                  if (*(int *)(lVar5 + 0xe4) == 0) {
                    thunk_FUN_02dbd7b4();
                    lVar5 = *(long *)puVar2;
                  }
                  lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
                  if (lVar5 != 0) {
                    local_48 = *(undefined8 *)(lVar5 + 0x28);
                    lVar5 = *(long *)(puVar1 + 0x28);
                    if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
                      thunk_FUN_02dbd7b4();
                    }
                    uVar6 = FUN_05015c2c(lVar5 + 0x20,0);
                    uVar7 = FUN_05015c2c(*(long *)(puVar1 + 0x70) + 0x20,0);
                    lVar5 = *(long *)puVar4;
                    if (*(int *)(lVar5 + 0xe4) == 0) {
                      thunk_FUN_02dbd7b4(lVar5);
                      lVar5 = *(long *)puVar4;
                    }
                    lVar8 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x420);
                    if (lVar8 == 0) {
                      if (*(int *)(lVar5 + 0xe4) == 0) {
                        thunk_FUN_02dbd7b4(lVar5);
                        lVar5 = *(long *)puVar4;
                      }
                      uVar9 = **(undefined8 **)(lVar5 + 0xb8);
                      lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                                  Method_Unity_Collections_LowLevel_Unsafe_NativeSliceUnsafeUtility_GetUnsafePtr<GfxUpdateBufferRange>__
                                                );
                      FUN_043616b8(lVar8,uVar9,
                                   *(undefined8 *)
                                    Method_System_Reflection_RuntimePropertyInfo_GetValue__,0);
                      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
                      *(long *)(lVar5 + 0x420) = lVar8;
                      thunk_FUN_02dd37b4(lVar5 + 0x420,lVar8);
                    }
                    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                      thunk_FUN_02dbd7b4();
                    }
                    FUN_0618615c(&local_48,uVar6,uVar7,lVar8);
                    lVar5 = *(long *)puVar2;
                    if (*(int *)(lVar5 + 0xe4) == 0) {
                      thunk_FUN_02dbd7b4();
                      lVar5 = *(long *)puVar2;
                    }
                    lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
                    if (lVar5 != 0) {
                      local_48 = *(undefined8 *)(lVar5 + 0x28);
                      lVar5 = *(long *)(puVar1 + 0x28);
                      if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
                        thunk_FUN_02dbd7b4();
                      }
                      uVar6 = FUN_05015c2c(lVar5 + 0x20,0);
                      uVar7 = FUN_05015c2c(*(long *)(puVar1 + 0x78) + 0x20,0);
                      lVar5 = *(long *)puVar4;
                      if (*(int *)(lVar5 + 0xe4) == 0) {
                        thunk_FUN_02dbd7b4(lVar5);
                        lVar5 = *(long *)puVar4;
                      }
                      lVar8 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x428);
                      if (lVar8 == 0) {
                        if (*(int *)(lVar5 + 0xe4) == 0) {
                          thunk_FUN_02dbd7b4(lVar5);
                          lVar5 = *(long *)puVar4;
                        }
                        uVar9 = **(undefined8 **)(lVar5 + 0xb8);
                        lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                        
                                                  Method_Unity_Collections_NativeSliceExtensions_Slice<Painter2D_Painter2DJobData>__
                                                  );
                        FUN_0436146c(lVar8,uVar9,
                                     *(undefined8 *)
                                      Method_System_Reflection_RuntimePropertyInfo_SetValue__,0);
                        lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
                        *(long *)(lVar5 + 0x428) = lVar8;
                        thunk_FUN_02dd37b4(lVar5 + 0x428,lVar8);
                      }
                      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                        thunk_FUN_02dbd7b4();
                      }
                      FUN_0618615c(&local_48,uVar6,uVar7,lVar8);
                      lVar5 = *(long *)puVar2;
                      if (*(int *)(lVar5 + 0xe4) == 0) {
                        thunk_FUN_02dbd7b4();
                        lVar5 = *(long *)puVar2;
                      }
                      lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
                      if (lVar5 != 0) {
                        local_48 = *(undefined8 *)(lVar5 + 0x28);
                        lVar5 = *(long *)(puVar1 + 0x28);
                        if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
                          thunk_FUN_02dbd7b4();
                        }
                        uVar6 = FUN_05015c2c(lVar5 + 0x20,0);
                        uVar7 = FUN_05015c2c(*(long *)(puVar1 + 0x80) + 0x20,0);
                        lVar5 = *(long *)puVar4;
                        if (*(int *)(lVar5 + 0xe4) == 0) {
                          thunk_FUN_02dbd7b4(lVar5);
                          lVar5 = *(long *)puVar4;
                        }
                        lVar8 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x430);
                        if (lVar8 == 0) {
                          if (*(int *)(lVar5 + 0xe4) == 0) {
                            thunk_FUN_02dbd7b4(lVar5);
                            lVar5 = *(long *)puVar4;
                          }
                          uVar9 = **(undefined8 **)(lVar5 + 0xb8);
                          lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                            
                                                  Method_Unity_Collections_NativeSliceExtensions_Slice<MeshGenerator_TessellationJobParameters>__
                                                  );
                          FUN_04360fd4(lVar8,uVar9,
                                       *(undefined8 *)
                                        Method_System_Reflection_RuntimeMethodInfo_ConvertValues__,0
                                      );
                          lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
                          *(long *)(lVar5 + 0x430) = lVar8;
                          thunk_FUN_02dd37b4(lVar5 + 0x430,lVar8);
                        }
                        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                          thunk_FUN_02dbd7b4();
                        }
                        FUN_0618615c(&local_48,uVar6,uVar7,lVar8);
                        lVar5 = *(long *)puVar2;
                        if (*(int *)(lVar5 + 0xe4) == 0) {
                          thunk_FUN_02dbd7b4();
                          lVar5 = *(long *)puVar2;
                        }
                        lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
                        if (lVar5 != 0) {
                          local_48 = *(undefined8 *)(lVar5 + 0x28);
                          lVar5 = *(long *)(puVar1 + 0x90);
                          if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
                            thunk_FUN_02dbd7b4();
                          }
                          uVar6 = FUN_05015c2c(lVar5 + 0x20,0);
                          uVar7 = FUN_05015c2c(*(long *)(puVar1 + 0x28) + 0x20,0);
                          lVar5 = *(long *)puVar4;
                          if (*(int *)(lVar5 + 0xe4) == 0) {
                            thunk_FUN_02dbd7b4(lVar5);
                            lVar5 = *(long *)puVar4;
                          }
                          lVar8 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x438);
                          if (lVar8 == 0) {
                            if (*(int *)(lVar5 + 0xe4) == 0) {
                              thunk_FUN_02dbd7b4(lVar5);
                              lVar5 = *(long *)puVar4;
                            }
                            uVar9 = **(undefined8 **)(lVar5 + 0xb8);
                            lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                
                                                  Method_UnityEngine_NoAllocHelpers_ExtractArrayFromList<int>__
                                                  );
                            FUN_0439b138(lVar8,uVar9,
                                         *(undefined8 *)
                                          Method_System_Reflection_RuntimeMethodInfo_GetGenericMethodDefinition__
                                         ,0);
                            lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
                            *(long *)(lVar5 + 0x438) = lVar8;
                            thunk_FUN_02dd37b4(lVar5 + 0x438,lVar8);
                          }
                          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                            thunk_FUN_02dbd7b4();
                          }
                          FUN_0618615c(&local_48,uVar6,uVar7,lVar8);
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
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


