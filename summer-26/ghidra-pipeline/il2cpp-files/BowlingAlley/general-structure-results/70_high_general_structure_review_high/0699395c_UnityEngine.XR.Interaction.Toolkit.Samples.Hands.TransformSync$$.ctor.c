/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.Samples.Hands.TransformSync$$.ctor
ENTRY_POINT: 0699395c
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_21;paired_field_refs_with_structure_only;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;negative_framework_namespace_without_eye_use_flow
*/


void UnityEngine_XR_Interaction_Toolkit_Samples_Hands_TransformSync___ctor(undefined **param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  int *piVar11;
  long unaff_x19;
  undefined8 *unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  long unaff_x23;
  uint unaff_w24;
  long *unaff_x25;
  undefined8 unaff_x26;
  uint uVar12;
  long *plVar13;
  long lVar14;
  long *plVar15;
  undefined8 uVar16;
  long unaff_x29;
  long in_stack_00000020;
  long in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  long in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  long in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  long in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  long in_stack_000000a8;
  long *in_stack_000000b8;
  undefined8 in_stack_000000c0;
  long *in_stack_000000c8;
  
code_r0x0699395c:
  plVar13 = *(long **)(unaff_x19 + 0x48);
  uVar5 = FUN_057a19ac(*(undefined8 *)param_1[0x15f],unaff_x26,0);
  if (plVar13 != (long *)0x0) {
    lVar8 = *plVar13;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) ==
            *(long *)Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>_get_Data__) {
          puVar6 = (undefined8 *)(lVar8 + (long)(*piVar11 + 2) * 0x10 + 0x138);
          goto LAB_069939d8;
        }
        uVar9 = uVar9 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar9 != 0);
    }
    puVar6 = (undefined8 *)
             FUN_032937ac(plVar13,*(long *)
                                   Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>_get_Data__
                          ,2);
LAB_069939d8:
    uVar9 = (*(code *)*puVar6)(plVar13,uVar5,&stack0x000000b8,puVar6[1]);
    lVar8 = unaff_x23;
    if ((uVar9 & 1) == 0) goto LAB_06993f34;
    if (in_stack_000000b8 != (long *)0x0) {
      uVar5 = (**(code **)(*in_stack_000000b8 + 0x298))
                        (in_stack_000000b8,*(undefined8 *)(*in_stack_000000b8 + 0x2a0));
      lVar8 = *unaff_x21;
      if (*(int *)(lVar8 + 0xe0) == 0) {
        thunk_FUN_032cd7c0(lVar8);
        lVar8 = *unaff_x21;
      }
      lVar14 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x30);
      if (lVar14 == 0) {
        if (*(int *)(lVar8 + 0xe0) == 0) {
          thunk_FUN_032cd7c0(lVar8);
          lVar8 = *unaff_x21;
        }
        uVar16 = **(undefined8 **)(lVar8 + 0xb8);
        lVar14 = thunk_FUN_032a56a0(*(undefined8 *)
                                     Method_Unity_Collections_NativeArray<byte>__ctor__);
        Meta_WitAi_Json_WitResponseArray_<get_Childs>d__13__System_IDisposable_Dispose
                  (lVar14,uVar16,
                   *(undefined8 *)Method_Unity_Collections_NativeArray<DecalSubDrawCall>_Dispose__,0
                  );
        plVar13 = (long *)(*(long *)(*unaff_x21 + 0xb8) + 0x30);
        *plVar13 = lVar14;
        thunk_FUN_0333a630(plVar13,lVar14);
      }
      uVar5 = FUN_0399a7bc(uVar5,lVar14,
                           *(undefined8 *)Method_Unity_Collections_NativeArray<bool>__ctor__);
      lVar14 = FUN_039a43e4(uVar5,*(undefined8 *)
                                   Method_Unity_Collections_NativeArray<bool>_Dispose__);
      if (lVar14 != 0) {
        uVar1 = *(uint *)(lVar14 + 0x18);
        if (0 < (int)uVar1) {
          uVar12 = 0;
          do {
            if (uVar1 <= uVar12) {
LAB_06994278:
                    /* WARNING: Subroutine does not return */
              Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
            }
            plVar13 = *(long **)(lVar14 + (long)(int)uVar12 * 8 + 0x20);
            if (plVar13 == (long *)0x0) goto LAB_06994260;
            (**(code **)(*plVar13 + 0x328))
                      (plVar13,in_stack_000000b8,*(undefined8 *)(*plVar13 + 0x330));
            uVar1 = *(uint *)(lVar14 + 0x18);
            uVar12 = uVar12 + 1;
          } while ((int)uVar12 < (int)uVar1);
        }
        plVar13 = in_stack_000000b8;
        plVar15 = *(long **)(unaff_x19 + 0x48);
        if (plVar15 != (long *)0x0) {
          lVar8 = *plVar15;
          uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar9 != 0) {
            piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) ==
                  *(long *)Method_Unity_Collections_NativeArray<byte>_Dispose__) {
                puVar6 = (undefined8 *)(lVar8 + (long)(*piVar11 + 6) * 0x10 + 0x138);
                goto LAB_06993dec;
              }
              uVar9 = uVar9 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar9 != 0);
          }
          puVar6 = (undefined8 *)
                   FUN_032937ac(plVar15,*(long *)
                                         Method_Unity_Collections_NativeArray<byte>_Dispose__,6);
LAB_06993dec:
          (*(code *)*puVar6)(plVar15,plVar13,puVar6[1]);
          lVar8 = in_stack_00000028;
          if (in_stack_00000028 == 0) {
            lVar8 = thunk_FUN_032a56a0(*(undefined8 *)
                                        Method_Unity_Collections_NativeArray<DecalEntity>_Dispose__)
            ;
            FUN_040f2de0(lVar8,1,*(undefined8 *)
                                  Method_Unity_Collections_NativeArray<ConfigurationDescriptor>_Dispose__
                        );
          }
          uVar5 = (**(code **)(*unaff_x25 + 0x1d8))(unaff_x25,*(undefined8 *)(*unaff_x25 + 0x1e0));
          uVar5 = FUN_057a19ac(*(undefined8 *)PTR_DAT_0728aaf8,uVar5,0);
          uVar16 = (**(code **)(*unaff_x25 + 0x1e8))(unaff_x25,*(undefined8 *)(*unaff_x25 + 0x1f0));
          uVar7 = thunk_FUN_032a56a0(*(undefined8 *)Method_Oculus_Platform_Message<User>_get_Data__)
          ;
          FUN_069c0040(uVar7,uVar5,uVar16,0);
          in_stack_00000030 = 0;
          in_stack_00000038 = 0;
          FUN_04cd2fc4(&stack0x00000030,uVar7,lVar14,
                       *(undefined8 *)
                        Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>__ctor__);
          if (lVar8 != 0) {
            lVar14 = *(long *)(lVar8 + 0x10);
            lVar10 = *(long *)Method_Unity_Collections_NativeArray<byte>_Equals__;
            *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
            if (lVar14 != 0) {
              uVar1 = *(uint *)(lVar8 + 0x18);
              in_stack_00000028 = lVar8;
              if (*(uint *)(lVar14 + 0x18) <= uVar1) {
                lVar14 = *(long *)(lVar10 + 0x20);
                goto LAB_06993f28;
              }
              lVar14 = lVar14 + (long)(int)uVar1 * 0x10;
              *(uint *)(lVar8 + 0x18) = uVar1 + 1;
              do {
                *(undefined8 *)(lVar14 + 0x20) = in_stack_00000030;
                *(undefined8 *)(lVar14 + 0x28) = in_stack_00000038;
                thunk_FUN_0333a630((undefined8 *)(lVar14 + 0x20),0);
                lVar8 = unaff_x23;
LAB_06993f34:
                do {
                  lVar14 = *(long *)(unaff_x19 + 0xe0);
                  uVar5 = (**(code **)(*unaff_x25 + 0x1d8))
                                    (unaff_x25,*(undefined8 *)(*unaff_x25 + 0x1e0));
                  if (lVar14 == 0) goto LAB_06994260;
                  FUN_041e29fc(lVar14,unaff_w24,uVar5,*(undefined8 *)PTR_DAT_0728b600);
                  do {
                    unaff_w24 = unaff_w24 + 1;
                    if ((int)*(uint *)(unaff_x22 + 0x18) <= (int)unaff_w24) {
                      bVar4 = unaff_x29 == 0;
                      if (unaff_x29 != 0) {
                        FUN_040f4064(&stack0x00000030,unaff_x29,
                                     *(undefined8 *)
                                      Method_Unity_Collections_NativeArray<Color>__ctor__);
                        puVar3 = Method_Unity_Collections_NativeArray<byte>_CopyTo__;
                        puVar2 = 
                        Method_Unity_Collections_NativeArray<byte>_Reinterpret<OvrAvatarComputeSkinnedPrimitive_UInt8Wrapper>__
                        ;
                        in_stack_00000098 = in_stack_00000038;
                        in_stack_00000090 = in_stack_00000030;
                        in_stack_000000a8 = in_stack_00000048;
                        in_stack_000000a0 = in_stack_00000040;
                        goto LAB_06993fb8;
                      }
                      bVar4 = true;
                      goto LAB_06994118;
                    }
                    if (*(uint *)(unaff_x22 + 0x18) <= unaff_w24) goto LAB_06994278;
                    if (*(long *)(unaff_x19 + 0xe0) == 0) goto LAB_06994260;
                    unaff_x25 = *(long **)(unaff_x22 + (long)(int)unaff_w24 * 8 + 0x20);
                    unaff_x26 = FUN_041e29a8(*(long *)(unaff_x19 + 0xe0),unaff_w24,*unaff_x20);
                    if (unaff_x25 == (long *)0x0) goto LAB_06994260;
                    uVar5 = (**(code **)(*unaff_x25 + 0x1d8))
                                      (unaff_x25,*(undefined8 *)(*unaff_x25 + 0x1e0));
                    uVar9 = FUN_057aa92c(uVar5,unaff_x26,0);
                  } while ((uVar9 & 1) == 0);
                  plVar13 = *(long **)(unaff_x19 + 0x40);
                  uVar5 = FUN_057a19ac(*(undefined8 *)PTR_DAT_0727b7d8,unaff_x26,0);
                  if (plVar13 == (long *)0x0) goto LAB_06994260;
                  lVar14 = *plVar13;
                  uVar9 = (ulong)*(ushort *)(lVar14 + 0x12e);
                  if (uVar9 != 0) {
                    piVar11 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_072841f0) {
                        puVar6 = (undefined8 *)(lVar14 + (long)(*piVar11 + 2) * 0x10 + 0x138);
                        goto LAB_069937c0;
                      }
                      uVar9 = uVar9 - 1;
                      piVar11 = piVar11 + 4;
                    } while (uVar9 != 0);
                  }
                  puVar6 = (undefined8 *)FUN_032937ac(plVar13,*(long *)PTR_DAT_072841f0,2);
LAB_069937c0:
                  uVar9 = (*(code *)*puVar6)(plVar13,uVar5,&stack0x000000c8,puVar6[1]);
                  if ((uVar9 & 1) == 0) {
                    param_1 = &PTR_DAT_0728a000;
                    unaff_x23 = lVar8;
                    goto code_r0x0699395c;
                  }
                  if (in_stack_000000c8 == (long *)0x0) goto LAB_06994260;
                  uVar5 = (**(code **)(*in_stack_000000c8 + 0x298))
                                    (in_stack_000000c8,*(undefined8 *)(*in_stack_000000c8 + 0x2a0));
                  lVar14 = *unaff_x21;
                  if (*(int *)(lVar14 + 0xe0) == 0) {
                    thunk_FUN_032cd7c0(lVar14);
                    lVar14 = *unaff_x21;
                  }
                  lVar10 = *(long *)(*(long *)(lVar14 + 0xb8) + 0x28);
                  if (lVar10 == 0) {
                    if (*(int *)(lVar14 + 0xe0) == 0) {
                      thunk_FUN_032cd7c0(lVar14);
                      lVar14 = *unaff_x21;
                    }
                    uVar16 = **(undefined8 **)(lVar14 + 0xb8);
                    lVar10 = thunk_FUN_032a56a0(*(undefined8 *)
                                                 Method_Unity_Collections_NativeArray<byte>_CopyFrom__
                                               );
                    Meta_WitAi_Json_WitResponseArray_<get_Childs>d__13__System_IDisposable_Dispose
                              (lVar10,uVar16,
                               *(undefined8 *)
                                Method_Unity_Collections_NativeArray<DecalScaleMode>_Dispose__,0);
                    plVar13 = (long *)(*(long *)(*unaff_x21 + 0xb8) + 0x28);
                    *plVar13 = lVar10;
                    thunk_FUN_0333a630(plVar13,lVar10);
                  }
                  uVar5 = FUN_0399a7bc(uVar5,lVar10,
                                       *(undefined8 *)
                                        Method_Unity_Collections_NativeArray<bool>_CopyFrom__);
                  lVar14 = FUN_039a43e4(uVar5,*(undefined8 *)
                                               Method_Unity_Collections_NativeArray<BoundingSphere>_CopyTo__
                                       );
                  if (lVar14 == 0) goto LAB_06994260;
                  uVar1 = *(uint *)(lVar14 + 0x18);
                  if (0 < (int)uVar1) {
                    uVar12 = 0;
                    do {
                      if (uVar1 <= uVar12) goto LAB_06994278;
                      plVar13 = *(long **)(lVar14 + (long)(int)uVar12 * 8 + 0x20);
                      if (plVar13 == (long *)0x0) goto LAB_06994260;
                      (**(code **)(*plVar13 + 0x328))
                                (plVar13,in_stack_000000c8,*(undefined8 *)(*plVar13 + 0x330));
                      uVar1 = *(uint *)(lVar14 + 0x18);
                      uVar12 = uVar12 + 1;
                    } while ((int)uVar12 < (int)uVar1);
                  }
                  plVar13 = in_stack_000000c8;
                  plVar15 = *(long **)(unaff_x19 + 0x40);
                  if (plVar15 == (long *)0x0) goto LAB_06994260;
                  lVar10 = *plVar15;
                  uVar9 = (ulong)*(ushort *)(lVar10 + 0x12e);
                  if (uVar9 != 0) {
                    piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar11 + -2) ==
                          *(long *)Method_Unity_Collections_NativeArray<byte>_CopyTo__) {
                        puVar6 = (undefined8 *)(lVar10 + (long)(*piVar11 + 6) * 0x10 + 0x138);
                        goto LAB_06993b7c;
                      }
                      uVar9 = uVar9 - 1;
                      piVar11 = piVar11 + 4;
                    } while (uVar9 != 0);
                  }
                  puVar6 = (undefined8 *)
                           FUN_032937ac(plVar15,*(long *)
                                                 Method_Unity_Collections_NativeArray<byte>_CopyTo__
                                        ,6);
LAB_06993b7c:
                  (*(code *)*puVar6)(plVar15,plVar13,puVar6[1]);
                  if (unaff_x29 == 0) {
                    unaff_x29 = thunk_FUN_032a56a0(*(undefined8 *)
                                                                                                        
                                                  Method_Unity_Collections_NativeArray<ConfigurationDescriptor>_get_IsCreated__
                                                  );
                    FUN_040f2de0(unaff_x29,1,
                                 *(undefined8 *)
                                  Method_Unity_Collections_NativeArray<ConfigurationDescriptor>__ctor__
                                );
                  }
                  uVar5 = (**(code **)(*unaff_x25 + 0x1d8))
                                    (unaff_x25,*(undefined8 *)(*unaff_x25 + 0x1e0));
                  uVar5 = FUN_057a19ac(*(undefined8 *)PTR_DAT_0727b7d8,uVar5,0);
                  uVar16 = (**(code **)(*unaff_x25 + 0x1e8))
                                     (unaff_x25,*(undefined8 *)(*unaff_x25 + 0x1f0));
                  uVar7 = thunk_FUN_032a56a0(*(undefined8 *)
                                              Method_Oculus_Platform_Message<User>__ctor__);
                  FUN_069be608(uVar7,uVar5,uVar16,0);
                  in_stack_00000030 = 0;
                  in_stack_00000038 = 0;
                  FUN_04cd2fc4(&stack0x00000030,uVar7,lVar14,
                               *(undefined8 *)
                                Method_Unity_Collections_NativeArray<InclusiveRange>__ctor__);
                  if (unaff_x29 == 0) goto LAB_06994260;
                  lVar14 = *(long *)(unaff_x29 + 0x10);
                  lVar10 = *(long *)Method_Unity_Collections_NativeArray<byte>_GetSubArray__;
                  *(int *)(unaff_x29 + 0x1c) = *(int *)(unaff_x29 + 0x1c) + 1;
                  if (lVar14 == 0) goto LAB_06994260;
                  uVar1 = *(uint *)(unaff_x29 + 0x18);
                  if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                    lVar14 = lVar14 + (long)(int)uVar1 * 0x10;
                    *(uint *)(unaff_x29 + 0x18) = uVar1 + 1;
                    puVar6 = (undefined8 *)(lVar14 + 0x20);
                    *puVar6 = in_stack_00000030;
                    *(undefined8 *)(lVar14 + 0x28) = in_stack_00000038;
                    thunk_FUN_0333a630(puVar6,0);
                  }
                  else {
                    FUN_040f35f0(unaff_x29,in_stack_00000030,in_stack_00000038,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70))
                    ;
                  }
                  if ((in_stack_000000c8 == (long *)0x0) || (*(long *)(unaff_x19 + 0x68) == 0))
                  goto LAB_06994260;
                  uVar9 = FUN_050fa644(*(long *)(unaff_x19 + 0x68),in_stack_000000c8[3],
                                       &stack0x000000c0,*(undefined8 *)PTR_DAT_072897d0);
                  unaff_x22 = in_stack_00000020;
                } while ((uVar9 & 1) == 0);
                if ((in_stack_000000c8 == (long *)0x0) || (*(long *)(unaff_x19 + 0x68) == 0)) break;
                System_Array_EmptyInternalEnumerator<OVRTask_CallbackWithState<OVRAnchor_Tracker_AsyncLock,_OVRTask_CombinedTaskDataWithCompletedTaskId<OVRAnchor_Tracker_AsyncLock>>>___ctor
                          (*(long *)(unaff_x19 + 0x68),in_stack_000000c8[3],
                           *(undefined8 *)PTR_DAT_0729b610);
                if (lVar8 == 0) {
                  lVar8 = thunk_FUN_032a56a0(*(undefined8 *)
                                              Method_Unity_Collections_NativeArray<ContactPairHeader>_AsReadOnly__
                                            );
                  FUN_040f2de0(lVar8,1,*(undefined8 *)
                                        Method_Unity_Collections_NativeArray<Color>_Dispose__);
                }
                uVar5 = (**(code **)(*unaff_x25 + 0x1d8))
                                  (unaff_x25,*(undefined8 *)(*unaff_x25 + 0x1e0));
                uVar5 = FUN_057a19ac(*(undefined8 *)PTR_DAT_0727b7d8,uVar5,0);
                in_stack_00000030 = 0;
                in_stack_00000038 = 0;
                FUN_04cd2fc4(&stack0x00000030,uVar5,in_stack_000000c0,
                             *(undefined8 *)
                              Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__);
                if (lVar8 == 0) break;
                lVar14 = *(long *)(lVar8 + 0x10);
                lVar10 = *(long *)Method_Unity_Collections_NativeArray<byte>_GetHashCode__;
                *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
                if (lVar14 == 0) break;
                uVar1 = *(uint *)(lVar8 + 0x18);
                unaff_x23 = lVar8;
                if (*(uint *)(lVar14 + 0x18) <= uVar1) {
                  lVar14 = *(long *)(lVar10 + 0x20);
LAB_06993f28:
                  FUN_040f35f0(lVar8,in_stack_00000030,in_stack_00000038,
                               *(undefined8 *)(*(long *)(lVar14 + 0xc0) + 0x70));
                  lVar8 = unaff_x23;
                  goto LAB_06993f34;
                }
                lVar14 = lVar14 + (long)(int)uVar1 * 0x10;
                *(uint *)(lVar8 + 0x18) = uVar1 + 1;
              } while( true );
            }
          }
        }
      }
    }
  }
LAB_06994260:
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
LAB_06993fb8:
  uVar9 = FUN_052a8304(&stack0x00000090,*(undefined8 *)puVar2);
  lVar14 = in_stack_000000a8;
  uVar5 = in_stack_000000a0;
  if ((uVar9 & 1) == 0) {
    FUN_052a8300(&stack0x00000090,
                 *(undefined8 *)Method_Unity_Collections_NativeArray<byte>_Reinterpret<uint>__);
    if (lVar8 != 0) {
      FUN_040f4064(&stack0x00000030,lVar8,
                   *(undefined8 *)Method_Unity_Collections_NativeArray<byte>_get_IsCreated__);
      puVar3 = 
      Method_Unity_Collections_NativeArray<byte>_Reinterpret<OvrComputeAnimatorBuffer_MeshInstanceMetaData>__
      ;
      puVar2 = PTR_DAT_0727e438;
      in_stack_00000078 = in_stack_00000038;
      in_stack_00000070 = in_stack_00000030;
      in_stack_00000088 = in_stack_00000048;
      in_stack_00000080 = in_stack_00000040;
      while (uVar9 = FUN_052a8304(&stack0x00000070,*(undefined8 *)puVar3), (uVar9 & 1) != 0) {
        if (*(long *)(unaff_x19 + 0x68) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        FUN_050f8afc(*(long *)(unaff_x19 + 0x68),in_stack_00000080,in_stack_00000088,
                     *(undefined8 *)puVar2);
      }
      FUN_052a8300(&stack0x00000070,
                   *(undefined8 *)
                    Method_Unity_Collections_NativeArray<byte>_Reinterpret<OvrAvatarComputeSkinnedPrimitive_UInt16Wrapper>__
                  );
    }
LAB_06994118:
    if (in_stack_00000028 == 0) {
      if (bVar4) {
        return;
      }
    }
    else {
      FUN_040f4064(&stack0x00000030,in_stack_00000028,
                   *(undefined8 *)Method_Unity_Collections_NativeArray<byte>_ToArray__);
      puVar3 = Method_Unity_Collections_NativeArray<byte>_Dispose__;
      puVar2 = 
      Method_Unity_Collections_NativeArray<byte>_Reinterpret<OvrAvatarComputeSkinnedPrimitive_UInt32Wrapper>__
      ;
      in_stack_00000058 = in_stack_00000038;
      in_stack_00000050 = in_stack_00000030;
      in_stack_00000068 = in_stack_00000048;
      in_stack_00000060 = in_stack_00000040;
      while (uVar9 = FUN_052a8304(&stack0x00000050,*(undefined8 *)puVar2), lVar8 = in_stack_00000068
            , uVar5 = in_stack_00000060, (uVar9 & 1) != 0) {
        plVar13 = *(long **)(unaff_x19 + 0x48);
        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        lVar14 = *plVar13;
        uVar9 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar9 != 0) {
          piVar11 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)puVar3) {
              puVar6 = (undefined8 *)(lVar14 + (long)(*piVar11 + 2) * 0x10 + 0x138);
              goto LAB_069941b8;
            }
            uVar9 = uVar9 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar9 != 0);
        }
        puVar6 = (undefined8 *)FUN_032937ac(plVar13,*(long *)puVar3,2);
LAB_069941b8:
        (*(code *)*puVar6)(plVar13,uVar5,puVar6[1]);
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        uVar1 = *(uint *)(lVar8 + 0x18);
        if (0 < (int)uVar1) {
          uVar12 = 0;
          do {
            if (uVar1 <= uVar12) {
                    /* WARNING: Subroutine does not return */
              Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
            }
            plVar13 = *(long **)(lVar8 + (long)(int)uVar12 * 8 + 0x20);
            if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_032d5ee8();
            }
            (**(code **)(*plVar13 + 0x308))(plVar13,uVar5,*(undefined8 *)(*plVar13 + 0x310));
            uVar1 = *(uint *)(lVar8 + 0x18);
            uVar12 = uVar12 + 1;
          } while ((int)uVar12 < (int)uVar1);
        }
      }
      FUN_052a8300(&stack0x00000050,
                   *(undefined8 *)Method_Unity_Collections_NativeArray<BoundingSphere>_Dispose__);
    }
    FUN_069c2d7c();
    return;
  }
  plVar13 = *(long **)(unaff_x19 + 0x40);
  if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_032d5ee8();
  }
  lVar10 = *plVar13;
  uVar9 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar9 != 0) {
    piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == *(long *)puVar3) {
        puVar6 = (undefined8 *)(lVar10 + (long)(*piVar11 + 2) * 0x10 + 0x138);
        goto LAB_06994024;
      }
      uVar9 = uVar9 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar9 != 0);
  }
  puVar6 = (undefined8 *)FUN_032937ac(plVar13,*(long *)puVar3,2);
LAB_06994024:
  (*(code *)*puVar6)(plVar13,uVar5,puVar6[1]);
  if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_032d5ee8();
  }
  uVar1 = *(uint *)(lVar14 + 0x18);
  if (0 < (int)uVar1) {
    uVar12 = 0;
    do {
      if (uVar1 <= uVar12) {
                    /* WARNING: Subroutine does not return */
        Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
      }
      plVar13 = *(long **)(lVar14 + (long)(int)uVar12 * 8 + 0x20);
      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      (**(code **)(*plVar13 + 0x308))(plVar13,uVar5,*(undefined8 *)(*plVar13 + 0x310));
      uVar1 = *(uint *)(lVar14 + 0x18);
      uVar12 = uVar12 + 1;
    } while ((int)uVar12 < (int)uVar1);
  }
  goto LAB_06993fb8;
}


