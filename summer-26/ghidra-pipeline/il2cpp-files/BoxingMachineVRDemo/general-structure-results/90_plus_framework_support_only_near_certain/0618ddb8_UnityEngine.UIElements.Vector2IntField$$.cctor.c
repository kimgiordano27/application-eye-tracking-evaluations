/*
FUNCTION_NAME: UnityEngine.UIElements.Vector2IntField$$.cctor
ENTRY_POINT: 0618ddb8
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 216
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ray_interaction;ui_interaction;telemetry;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_6;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_1;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_interaction_sink;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_5
*/


void UnityEngine_UIElements_Vector2IntField___cctor(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  int in_w9;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  long unaff_x26;
  undefined8 in_stack_00000008;
  
  if (in_w9 == 0) {
    thunk_FUN_02dbd7b4(param_1);
    param_1 = *unaff_x24;
  }
  uVar4 = **(undefined8 **)(param_1 + 0xb8);
  uVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                              Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                            );
  System_Collections_Generic_Dictionary_ValueCollection<__Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType>__CopyTo
            (uVar1,uVar4,
             *(undefined8 *)Method_System_Reflection_RuntimeAssembly_GetManifestResourceStream__,0);
  lVar2 = *(long *)(*unaff_x24 + 0xb8);
  *(undefined8 *)(lVar2 + 0x310) = uVar1;
  thunk_FUN_02dd37b4(lVar2 + 0x310,uVar1);
  if (*(int *)(*unaff_x25 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  FUN_0618615c(&stack0x00000008);
  lVar2 = *unaff_x23;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar2 = *unaff_x23;
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 8);
  if (lVar2 != 0) {
    in_stack_00000008 = *(undefined8 *)(lVar2 + 0x28);
    lVar2 = *(long *)(unaff_x26 + 0x78);
    if (*(int *)(*(long *)(unaff_x26 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar1 = FUN_05015c2c(lVar2 + 0x20,0);
    uVar4 = FUN_05015c2c(*(long *)(unaff_x26 + 0x30) + 0x20,0);
    lVar2 = *unaff_x24;
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(lVar2);
      lVar2 = *unaff_x24;
    }
    lVar3 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x318);
    if (lVar3 == 0) {
      if (*(int *)(lVar2 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4(lVar2);
        lVar2 = *unaff_x24;
      }
      uVar5 = **(undefined8 **)(lVar2 + 0xb8);
      lVar3 = thunk_FUN_02d9d534(*(undefined8 *)
                                  Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<MetadataValue>__
                                );
      FUN_0439ce50(lVar3,uVar5,
                   *(undefined8 *)
                    Method_Unity_VisualScripting_RuntimeCodebase_GetAssemblyAttributes<RenamedAssemblyAttribute>__
                   ,0);
      lVar2 = *(long *)(*unaff_x24 + 0xb8);
      *(long *)(lVar2 + 0x318) = lVar3;
      thunk_FUN_02dd37b4(lVar2 + 0x318,lVar3);
    }
    if (*(int *)(*unaff_x25 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    FUN_0618615c(&stack0x00000008,uVar1,uVar4,lVar3);
    lVar2 = *unaff_x23;
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar2 = *unaff_x23;
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 8);
    if (lVar2 != 0) {
      in_stack_00000008 = *(undefined8 *)(lVar2 + 0x28);
      lVar2 = *(long *)(unaff_x26 + 0x78);
      if (*(int *)(*(long *)(unaff_x26 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar1 = FUN_05015c2c(lVar2 + 0x20,0);
      uVar4 = FUN_05015c2c(*(long *)(unaff_x26 + 0x88) + 0x20,0);
      lVar2 = *unaff_x24;
      if (*(int *)(lVar2 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4(lVar2);
        lVar2 = *unaff_x24;
      }
      lVar3 = *(long *)(*(long *)(lVar2 + 0xb8) + 800);
      if (lVar3 == 0) {
        if (*(int *)(lVar2 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4(lVar2);
          lVar2 = *unaff_x24;
        }
        uVar5 = **(undefined8 **)(lVar2 + 0xb8);
        lVar3 = thunk_FUN_02d9d534(*(undefined8 *)
                                    Method_UnityEngine_XR_ARSubsystems_NativeCopyUtility_PtrToNativeArrayWithDefault<XREraseAnchorResult>__
                                  );
        FUN_0439c9b8(lVar3,uVar5,
                     *(undefined8 *)
                      Method_Unity_VisualScripting_RuntimeCodebase_GetAssemblyAttributes<RenamedNamespaceAttribute>__
                     ,0);
        lVar2 = *(long *)(*unaff_x24 + 0xb8);
        *(long *)(lVar2 + 800) = lVar3;
        thunk_FUN_02dd37b4(lVar2 + 800,lVar3);
      }
      if (*(int *)(*unaff_x25 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      FUN_0618615c(&stack0x00000008,uVar1,uVar4,lVar3);
      lVar2 = *unaff_x23;
      if (*(int *)(lVar2 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        lVar2 = *unaff_x23;
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 8);
      if (lVar2 != 0) {
        in_stack_00000008 = *(undefined8 *)(lVar2 + 0x28);
        lVar2 = *(long *)(unaff_x26 + 0x78);
        if (*(int *)(*(long *)(unaff_x26 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        uVar1 = FUN_05015c2c(lVar2 + 0x20,0);
        uVar4 = FUN_05015c2c(*(long *)(unaff_x26 + 0x38) + 0x20,0);
        lVar2 = *unaff_x24;
        if (*(int *)(lVar2 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4(lVar2);
          lVar2 = *unaff_x24;
        }
        lVar3 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x328);
        if (lVar3 == 0) {
          if (*(int *)(lVar2 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4(lVar2);
            lVar2 = *unaff_x24;
          }
          uVar5 = **(undefined8 **)(lVar2 + 0xb8);
          lVar3 = thunk_FUN_02d9d534(*(undefined8 *)
                                      Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<Matrix4x4>__
                                    );
          FUN_0439cb40(lVar3,uVar5,
                       *(undefined8 *)Method_Unity_VisualScripting_RuntimeCodebase_DeserializeType__
                       ,0);
          lVar2 = *(long *)(*unaff_x24 + 0xb8);
          *(long *)(lVar2 + 0x328) = lVar3;
          thunk_FUN_02dd37b4(lVar2 + 0x328,lVar3);
        }
        if (*(int *)(*unaff_x25 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        FUN_0618615c(&stack0x00000008,uVar1,uVar4,lVar3);
        lVar2 = *unaff_x23;
        if (*(int *)(lVar2 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
          lVar2 = *unaff_x23;
        }
        lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 8);
        if (lVar2 != 0) {
          in_stack_00000008 = *(undefined8 *)(lVar2 + 0x28);
          lVar2 = *(long *)(unaff_x26 + 0x78);
          if (*(int *)(*(long *)(unaff_x26 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          uVar1 = FUN_05015c2c(lVar2 + 0x20,0);
          uVar4 = FUN_05015c2c(*(long *)(unaff_x26 + 0x48) + 0x20,0);
          lVar2 = *unaff_x24;
          if (*(int *)(lVar2 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4(lVar2);
            lVar2 = *unaff_x24;
          }
          lVar3 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x330);
          if (lVar3 == 0) {
            if (*(int *)(lVar2 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4(lVar2);
              lVar2 = *unaff_x24;
            }
            uVar5 = **(undefined8 **)(lVar2 + 0xb8);
            lVar3 = thunk_FUN_02d9d534(*(undefined8 *)
                                        Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<Vector3>__
                                      );
            FUN_0439cc04(lVar3,uVar5,
                         *(undefined8 *)Method_System_Reflection_RuntimeConstructorInfo_DoInvoke__,0
                        );
            lVar2 = *(long *)(*unaff_x24 + 0xb8);
            *(long *)(lVar2 + 0x330) = lVar3;
            thunk_FUN_02dd37b4(lVar2 + 0x330,lVar3);
          }
          if (*(int *)(*unaff_x25 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          FUN_0618615c(&stack0x00000008,uVar1,uVar4,lVar3);
          lVar2 = *unaff_x23;
          if (*(int *)(lVar2 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
            lVar2 = *unaff_x23;
          }
          lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 8);
          if (lVar2 != 0) {
            in_stack_00000008 = *(undefined8 *)(lVar2 + 0x28);
            lVar2 = *(long *)(unaff_x26 + 0x78);
            if (*(int *)(*(long *)(unaff_x26 + 0xe0) + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
            }
            uVar1 = FUN_05015c2c(lVar2 + 0x20,0);
            uVar4 = FUN_05015c2c(*(long *)(unaff_x26 + 0x68) + 0x20,0);
            lVar2 = *unaff_x24;
            if (*(int *)(lVar2 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4(lVar2);
              lVar2 = *unaff_x24;
            }
            lVar3 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x338);
            if (lVar3 == 0) {
              if (*(int *)(lVar2 + 0xe4) == 0) {
                thunk_FUN_02dbd7b4(lVar2);
                lVar2 = *unaff_x24;
              }
              uVar5 = **(undefined8 **)(lVar2 + 0xb8);
              lVar3 = thunk_FUN_02d9d534(*(undefined8 *)
                                          Method_UnityEngine_XR_ARSubsystems_NativeCopyUtility_PtrToNativeArrayWithDefault<XRLoadAnchorResult>__
                                        );
              FUN_0439ccc8(lVar3,uVar5,
                           *(undefined8 *)
                            Method_System_Reflection_RuntimeConstructorInfo_GetObjectData__,0);
              lVar2 = *(long *)(*unaff_x24 + 0xb8);
              *(long *)(lVar2 + 0x338) = lVar3;
              thunk_FUN_02dd37b4(lVar2 + 0x338,lVar3);
            }
            if (*(int *)(*unaff_x25 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
            }
            FUN_0618615c(&stack0x00000008,uVar1,uVar4,lVar3);
            lVar2 = *unaff_x23;
            if (*(int *)(lVar2 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
              lVar2 = *unaff_x23;
            }
            lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 8);
            if (lVar2 != 0) {
              in_stack_00000008 = *(undefined8 *)(lVar2 + 0x28);
              lVar2 = *(long *)(unaff_x26 + 0x78);
              if (*(int *)(*(long *)(unaff_x26 + 0xe0) + 0xe4) == 0) {
                thunk_FUN_02dbd7b4();
              }
              uVar1 = FUN_05015c2c(lVar2 + 0x20,0);
              uVar4 = FUN_05015c2c(*(long *)(unaff_x26 + 0x18) + 0x20,0);
              lVar2 = *unaff_x24;
              if (*(int *)(lVar2 + 0xe4) == 0) {
                thunk_FUN_02dbd7b4(lVar2);
                lVar2 = *unaff_x24;
              }
              lVar3 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x340);
              if (lVar3 == 0) {
                if (*(int *)(lVar2 + 0xe4) == 0) {
                  thunk_FUN_02dbd7b4(lVar2);
                  lVar2 = *unaff_x24;
                }
                uVar5 = **(undefined8 **)(lVar2 + 0xb8);
                lVar3 = thunk_FUN_02d9d534(*(undefined8 *)
                                            Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<ShaderTagId>__
                                          );
                FUN_0439c8f4(lVar3,uVar5,
                             *(undefined8 *)
                              Method_System_Reflection_RuntimeConstructorInfo_InternalInvoke__,0);
                lVar2 = *(long *)(*unaff_x24 + 0xb8);
                *(long *)(lVar2 + 0x340) = lVar3;
                thunk_FUN_02dd37b4(lVar2 + 0x340,lVar3);
              }
              if (*(int *)(*unaff_x25 + 0xe4) == 0) {
                thunk_FUN_02dbd7b4();
              }
              FUN_0618615c(&stack0x00000008,uVar1,uVar4,lVar3);
              lVar2 = *unaff_x23;
              if (*(int *)(lVar2 + 0xe4) == 0) {
                thunk_FUN_02dbd7b4();
                lVar2 = *unaff_x23;
              }
              lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 8);
              if (lVar2 != 0) {
                in_stack_00000008 = *(undefined8 *)(lVar2 + 0x28);
                lVar2 = *(long *)(unaff_x26 + 0x78);
                if (*(int *)(*(long *)(unaff_x26 + 0xe0) + 0xe4) == 0) {
                  thunk_FUN_02dbd7b4();
                }
                uVar1 = FUN_05015c2c(lVar2 + 0x20,0);
                uVar4 = FUN_05015c2c(*(long *)(unaff_x26 + 0x40) + 0x20,0);
                lVar2 = *unaff_x24;
                if (*(int *)(lVar2 + 0xe4) == 0) {
                  thunk_FUN_02dbd7b4(lVar2);
                  lVar2 = *unaff_x24;
                }
                lVar3 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x348);
                if (lVar3 == 0) {
                  if (*(int *)(lVar2 + 0xe4) == 0) {
                    thunk_FUN_02dbd7b4(lVar2);
                    lVar2 = *unaff_x24;
                  }
                  uVar5 = **(undefined8 **)(lVar2 + 0xb8);
                  lVar3 = thunk_FUN_02d9d534(*(undefined8 *)
                                              Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<ulong>__
                                            );
                  FUN_0439d0ac(lVar3,uVar5,
                               *(undefined8 *)
                                Method_System_Reflection_RuntimeConstructorInfo_Invoke__,0);
                  lVar2 = *(long *)(*unaff_x24 + 0xb8);
                  *(long *)(lVar2 + 0x348) = lVar3;
                  thunk_FUN_02dd37b4(lVar2 + 0x348,lVar3);
                }
                if (*(int *)(*unaff_x25 + 0xe4) == 0) {
                  thunk_FUN_02dbd7b4();
                }
                FUN_0618615c(&stack0x00000008,uVar1,uVar4,lVar3);
                lVar2 = *unaff_x23;
                if (*(int *)(lVar2 + 0xe4) == 0) {
                  thunk_FUN_02dbd7b4();
                  lVar2 = *unaff_x23;
                }
                lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 8);
                if (lVar2 != 0) {
                  in_stack_00000008 = *(undefined8 *)(lVar2 + 0x28);
                  lVar2 = *(long *)(unaff_x26 + 0x78);
                  if (*(int *)(*(long *)(unaff_x26 + 0xe0) + 0xe4) == 0) {
                    thunk_FUN_02dbd7b4();
                  }
                  uVar1 = FUN_05015c2c(lVar2 + 0x20,0);
                  uVar4 = FUN_05015c2c(*(long *)(unaff_x26 + 0x50) + 0x20,0);
                  lVar2 = *unaff_x24;
                  if (*(int *)(lVar2 + 0xe4) == 0) {
                    thunk_FUN_02dbd7b4(lVar2);
                    lVar2 = *unaff_x24;
                  }
                  lVar3 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x350);
                  if (lVar3 == 0) {
                    if (*(int *)(lVar2 + 0xe4) == 0) {
                      thunk_FUN_02dbd7b4(lVar2);
                      lVar2 = *unaff_x24;
                    }
                    uVar5 = **(undefined8 **)(lVar2 + 0xb8);
                    lVar3 = thunk_FUN_02d9d534(*(undefined8 *)
                                                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<RenderStateBlock>__
                                              );
                    FUN_0439d170(lVar3,uVar5,
                                 *(undefined8 *)
                                  Method_UnityEngine_XR_OpenXR_Features_RuntimeDebugger_RuntimeDebuggerOpenXRFeature_RecvMsg__
                                 ,0);
                    lVar2 = *(long *)(*unaff_x24 + 0xb8);
                    *(long *)(lVar2 + 0x350) = lVar3;
                    thunk_FUN_02dd37b4(lVar2 + 0x350,lVar3);
                  }
                  if (*(int *)(*unaff_x25 + 0xe4) == 0) {
                    thunk_FUN_02dbd7b4();
                  }
                  FUN_0618615c(&stack0x00000008,uVar1,uVar4,lVar3);
                  lVar2 = *unaff_x23;
                  if (*(int *)(lVar2 + 0xe4) == 0) {
                    thunk_FUN_02dbd7b4();
                    lVar2 = *unaff_x23;
                  }
                  lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 8);
                  if (lVar2 != 0) {
                    in_stack_00000008 = *(undefined8 *)(lVar2 + 0x28);
                    lVar2 = *(long *)(unaff_x26 + 0x78);
                    if (*(int *)(*(long *)(unaff_x26 + 0xe0) + 0xe4) == 0) {
                      thunk_FUN_02dbd7b4();
                    }
                    uVar1 = FUN_05015c2c(lVar2 + 0x20,0);
                    uVar4 = FUN_05015c2c(*(long *)(unaff_x26 + 0x70) + 0x20,0);
                    lVar2 = *unaff_x24;
                    if (*(int *)(lVar2 + 0xe4) == 0) {
                      thunk_FUN_02dbd7b4(lVar2);
                      lVar2 = *unaff_x24;
                    }
                    lVar3 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x358);
                    if (lVar3 == 0) {
                      if (*(int *)(lVar2 + 0xe4) == 0) {
                        thunk_FUN_02dbd7b4(lVar2);
                        lVar2 = *unaff_x24;
                      }
                      uVar5 = **(undefined8 **)(lVar2 + 0xb8);
                      lVar3 = thunk_FUN_02d9d534(*(undefined8 *)
                                                  Method_UnityEngine_XR_ARSubsystems_NativeCopyUtility_PtrToNativeArrayWithDefault<byte>__
                                                );
                      FUN_0439d234(lVar3,uVar5,
                                   *(undefined8 *)
                                    Method_System_Reflection_RuntimeEventInfo_GetObjectData__,0);
                      lVar2 = *(long *)(*unaff_x24 + 0xb8);
                      *(long *)(lVar2 + 0x358) = lVar3;
                      thunk_FUN_02dd37b4(lVar2 + 0x358,lVar3);
                    }
                    if (*(int *)(*unaff_x25 + 0xe4) == 0) {
                      thunk_FUN_02dbd7b4();
                    }
                    FUN_0618615c(&stack0x00000008,uVar1,uVar4,lVar3);
                    lVar2 = *unaff_x23;
                    if (*(int *)(lVar2 + 0xe4) == 0) {
                      thunk_FUN_02dbd7b4();
                      lVar2 = *unaff_x23;
                    }
                    lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 8);
                    if (lVar2 != 0) {
                      in_stack_00000008 = *(undefined8 *)(lVar2 + 0x28);
                      lVar2 = *(long *)(unaff_x26 + 0x78);
                      if (*(int *)(*(long *)(unaff_x26 + 0xe0) + 0xe4) == 0) {
                        thunk_FUN_02dbd7b4();
                      }
                      uVar1 = FUN_05015c2c(lVar2 + 0x20,0);
                      uVar4 = FUN_05015c2c(*(long *)(unaff_x26 + 0x80) + 0x20,0);
                      lVar2 = *unaff_x24;
                      if (*(int *)(lVar2 + 0xe4) == 0) {
                        thunk_FUN_02dbd7b4(lVar2);
                        lVar2 = *unaff_x24;
                      }
                      lVar3 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x360);
                      if (lVar3 == 0) {
                        if (*(int *)(lVar2 + 0xe4) == 0) {
                          thunk_FUN_02dbd7b4(lVar2);
                          lVar2 = *unaff_x24;
                        }
                        uVar5 = **(undefined8 **)(lVar2 + 0xb8);
                        lVar3 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                        
                                                  Method_UnityEngine_XR_ARSubsystems_NativeCopyUtility_PtrToNativeArrayWithDefault<XRAnchor>__
                                                  );
                        FUN_0439ca7c(lVar3,uVar5,
                                     *(undefined8 *)
                                      Method_System_Reflection_RuntimeAssembly_GetModule__,0);
                        lVar2 = *(long *)(*unaff_x24 + 0xb8);
                        *(long *)(lVar2 + 0x360) = lVar3;
                        thunk_FUN_02dd37b4(lVar2 + 0x360,lVar3);
                      }
                      if (*(int *)(*unaff_x25 + 0xe4) == 0) {
                        thunk_FUN_02dbd7b4();
                      }
                      FUN_0618615c(&stack0x00000008,uVar1,uVar4,lVar3);
                      lVar2 = *unaff_x23;
                      if (*(int *)(lVar2 + 0xe4) == 0) {
                        thunk_FUN_02dbd7b4();
                        lVar2 = *unaff_x23;
                      }
                      lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 8);
                      if (lVar2 != 0) {
                        in_stack_00000008 = *(undefined8 *)(lVar2 + 0x28);
                        lVar2 = *(long *)(unaff_x26 + 0x78);
                        if (*(int *)(*(long *)(unaff_x26 + 0xe0) + 0xe4) == 0) {
                          thunk_FUN_02dbd7b4();
                        }
                        uVar1 = FUN_05015c2c(lVar2 + 0x20,0);
                        uVar4 = FUN_05015c2c(*(long *)(unaff_x26 + 0x90) + 0x20,0);
                        lVar2 = *unaff_x24;
                        if (*(int *)(lVar2 + 0xe4) == 0) {
                          thunk_FUN_02dbd7b4(lVar2);
                          lVar2 = *unaff_x24;
                        }
                        lVar3 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x368);
                        if (lVar3 == 0) {
                          if (*(int *)(lVar2 + 0xe4) == 0) {
                            thunk_FUN_02dbd7b4(lVar2);
                            lVar2 = *unaff_x24;
                          }
                          uVar5 = **(undefined8 **)(lVar2 + 0xb8);
                          lVar3 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                            
                                                  Method_UnityEngine_NoAllocHelpers_ExtractArrayFromList<RaycastHit2D>__
                                                  );
                          FUN_0439cd8c(lVar3,uVar5,
                                       *(undefined8 *)
                                        Method_System_Reflection_RuntimeAssembly_GetObjectData__,0);
                          lVar2 = *(long *)(*unaff_x24 + 0xb8);
                          *(long *)(lVar2 + 0x368) = lVar3;
                          thunk_FUN_02dd37b4(lVar2 + 0x368,lVar3);
                        }
                        if (*(int *)(*unaff_x25 + 0xe4) == 0) {
                          thunk_FUN_02dbd7b4();
                        }
                        FUN_0618615c(&stack0x00000008,uVar1,uVar4,lVar3);
                        lVar2 = *unaff_x23;
                        if (*(int *)(lVar2 + 0xe4) == 0) {
                          thunk_FUN_02dbd7b4();
                          lVar2 = *unaff_x23;
                        }
                        lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 8);
                        if (lVar2 != 0) {
                          in_stack_00000008 = *(undefined8 *)(lVar2 + 0x28);
                          lVar2 = *(long *)(unaff_x26 + 0x90);
                          if (*(int *)(*(long *)(unaff_x26 + 0xe0) + 0xe4) == 0) {
                            thunk_FUN_02dbd7b4();
                          }
                          uVar1 = FUN_05015c2c(lVar2 + 0x20,0);
                          uVar4 = FUN_05015c2c(*(long *)(unaff_x26 + 0x78) + 0x20,0);
                          lVar2 = *unaff_x24;
                          if (*(int *)(lVar2 + 0xe4) == 0) {
                            thunk_FUN_02dbd7b4(lVar2);
                            lVar2 = *unaff_x24;
                          }
                          lVar3 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x370);
                          if (lVar3 == 0) {
                            if (*(int *)(lVar2 + 0xe4) == 0) {
                              thunk_FUN_02dbd7b4(lVar2);
                              lVar2 = *unaff_x24;
                            }
                            uVar5 = **(undefined8 **)(lVar2 + 0xb8);
                            lVar3 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                
                                                  Method_UnityEngine_NoAllocHelpers_EnsureListElemCount<Material>__
                                                  );
                            FUN_0439b81c(lVar3,uVar5,
                                         *(undefined8 *)
                                          Method_System_Reflection_RuntimeAssembly_GetType__,0);
                            lVar2 = *(long *)(*unaff_x24 + 0xb8);
                            *(long *)(lVar2 + 0x370) = lVar3;
                            thunk_FUN_02dd37b4(lVar2 + 0x370,lVar3);
                          }
                          if (*(int *)(*unaff_x25 + 0xe4) == 0) {
                            thunk_FUN_02dbd7b4();
                          }
                          FUN_0618615c(&stack0x00000008,uVar1,uVar4,lVar3);
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


