/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.Samples.Hands.Vector3ScaleAffordanceReceiver$$OnEnable
ENTRY_POINT: 06993a10
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 72
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_21;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;negative_framework_namespace_without_eye_use_flow
*/


void UnityEngine_XR_Interaction_Toolkit_Samples_Hands_Vector3ScaleAffordanceReceiver__OnEnable
               (long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long unaff_x19;
  undefined8 *unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  long unaff_x23;
  uint unaff_w24;
  long *unaff_x25;
  uint uVar12;
  long lVar13;
  long *plVar14;
  long *unaff_x28;
  undefined8 uVar15;
  long in_stack_00000018;
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
  
code_r0x06993a10:
  if (*(int *)(param_1 + 0xe0) == 0) {
    thunk_FUN_032cd7c0(param_1);
    param_1 = *unaff_x28;
  }
  lVar13 = *(long *)(*(long *)(param_1 + 0xb8) + 0x30);
  if (lVar13 == 0) {
    if (*(int *)(param_1 + 0xe0) == 0) {
      thunk_FUN_032cd7c0(param_1);
      param_1 = *unaff_x28;
    }
    uVar15 = **(undefined8 **)(param_1 + 0xb8);
    lVar13 = thunk_FUN_032a56a0(*(undefined8 *)Method_Unity_Collections_NativeArray<byte>__ctor__);
    Meta_WitAi_Json_WitResponseArray_<get_Childs>d__13__System_IDisposable_Dispose
              (lVar13,uVar15,
               *(undefined8 *)Method_Unity_Collections_NativeArray<DecalSubDrawCall>_Dispose__,0);
    plVar5 = (long *)(*(long *)(*unaff_x28 + 0xb8) + 0x30);
    *plVar5 = lVar13;
    thunk_FUN_0333a630(plVar5,lVar13);
  }
  uVar15 = FUN_0399a7bc(param_2,lVar13,
                        *(undefined8 *)Method_Unity_Collections_NativeArray<bool>__ctor__);
  lVar13 = FUN_039a43e4(uVar15,*(undefined8 *)Method_Unity_Collections_NativeArray<bool>_Dispose__);
  if (lVar13 != 0) {
    uVar1 = *(uint *)(lVar13 + 0x18);
    if (0 < (int)uVar1) {
      uVar12 = 0;
      do {
        if (uVar1 <= uVar12) {
LAB_06994278:
                    /* WARNING: Subroutine does not return */
          Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
        }
        plVar5 = *(long **)(lVar13 + (long)(int)uVar12 * 8 + 0x20);
        if (plVar5 == (long *)0x0) goto LAB_06994260;
        (**(code **)(*plVar5 + 0x328))(plVar5,in_stack_000000b8,*(undefined8 *)(*plVar5 + 0x330));
        uVar1 = *(uint *)(lVar13 + 0x18);
        uVar12 = uVar12 + 1;
      } while ((int)uVar12 < (int)uVar1);
    }
    plVar5 = in_stack_000000b8;
    plVar14 = *(long **)(unaff_x19 + 0x48);
    if (plVar14 != (long *)0x0) {
      lVar9 = *plVar14;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<byte>_Dispose__) {
            puVar6 = (undefined8 *)(lVar9 + (long)(*piVar11 + 6) * 0x10 + 0x138);
            goto LAB_06993dec;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar6 = (undefined8 *)
               FUN_032937ac(plVar14,*(long *)Method_Unity_Collections_NativeArray<byte>_Dispose__,6)
      ;
LAB_06993dec:
      (*(code *)*puVar6)(plVar14,plVar5,puVar6[1]);
      if (in_stack_00000028 == 0) {
        in_stack_00000028 =
             thunk_FUN_032a56a0(*(undefined8 *)
                                 Method_Unity_Collections_NativeArray<DecalEntity>_Dispose__);
        FUN_040f2de0(in_stack_00000028,1,
                     *(undefined8 *)
                      Method_Unity_Collections_NativeArray<ConfigurationDescriptor>_Dispose__);
      }
      uVar15 = (**(code **)(*unaff_x25 + 0x1d8))(unaff_x25,*(undefined8 *)(*unaff_x25 + 0x1e0));
      uVar15 = FUN_057a19ac(*(undefined8 *)PTR_DAT_0728aaf8,uVar15,0);
      uVar7 = (**(code **)(*unaff_x25 + 0x1e8))(unaff_x25,*(undefined8 *)(*unaff_x25 + 0x1f0));
      uVar8 = thunk_FUN_032a56a0(*(undefined8 *)Method_Oculus_Platform_Message<User>_get_Data__);
      FUN_069c0040(uVar8,uVar15,uVar7,0);
      in_stack_00000030 = 0;
      in_stack_00000038 = 0;
      FUN_04cd2fc4(&stack0x00000030,uVar8,lVar13,
                   *(undefined8 *)Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>__ctor__
                  );
      if (in_stack_00000028 != 0) {
        lVar13 = *(long *)(in_stack_00000028 + 0x10);
        lVar9 = *(long *)Method_Unity_Collections_NativeArray<byte>_Equals__;
        *(int *)(in_stack_00000028 + 0x1c) = *(int *)(in_stack_00000028 + 0x1c) + 1;
        if (lVar13 != 0) {
          uVar1 = *(uint *)(in_stack_00000028 + 0x18);
          if (*(uint *)(lVar13 + 0x18) <= uVar1) {
            lVar9 = *(long *)(lVar9 + 0x20);
            lVar13 = in_stack_00000028;
            goto LAB_06993f28;
          }
          lVar13 = lVar13 + (long)(int)uVar1 * 0x10;
          *(uint *)(in_stack_00000028 + 0x18) = uVar1 + 1;
          do {
            *(undefined8 *)(lVar13 + 0x20) = in_stack_00000030;
            *(undefined8 *)(lVar13 + 0x28) = in_stack_00000038;
            thunk_FUN_0333a630((undefined8 *)(lVar13 + 0x20),0);
LAB_06993f34:
            lVar13 = *(long *)(unaff_x19 + 0xe0);
            uVar15 = (**(code **)(*unaff_x25 + 0x1d8))
                               (unaff_x25,*(undefined8 *)(*unaff_x25 + 0x1e0));
            if (lVar13 == 0) break;
            FUN_041e29fc(lVar13,unaff_w24,uVar15,*(undefined8 *)PTR_DAT_0728b600);
            do {
              unaff_w24 = unaff_w24 + 1;
              if ((int)*(uint *)(unaff_x22 + 0x18) <= (int)unaff_w24) {
                bVar4 = in_stack_00000018 == 0;
                if (in_stack_00000018 != 0) {
                  FUN_040f4064(&stack0x00000030,in_stack_00000018,
                               *(undefined8 *)Method_Unity_Collections_NativeArray<Color>__ctor__);
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
              uVar15 = FUN_041e29a8(*(long *)(unaff_x19 + 0xe0),unaff_w24,*unaff_x20);
              if (unaff_x25 == (long *)0x0) goto LAB_06994260;
              uVar7 = (**(code **)(*unaff_x25 + 0x1d8))
                                (unaff_x25,*(undefined8 *)(*unaff_x25 + 0x1e0));
              uVar10 = FUN_057aa92c(uVar7,uVar15,0);
            } while ((uVar10 & 1) == 0);
            plVar5 = *(long **)(unaff_x19 + 0x40);
            uVar7 = FUN_057a19ac(*(undefined8 *)PTR_DAT_0727b7d8,uVar15,0);
            if (plVar5 == (long *)0x0) break;
            lVar13 = *plVar5;
            uVar10 = (ulong)*(ushort *)(lVar13 + 0x12e);
            if (uVar10 != 0) {
              piVar11 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              do {
                if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_072841f0) {
                  puVar6 = (undefined8 *)(lVar13 + (long)(*piVar11 + 2) * 0x10 + 0x138);
                  goto LAB_069937c0;
                }
                uVar10 = uVar10 - 1;
                piVar11 = piVar11 + 4;
              } while (uVar10 != 0);
            }
            puVar6 = (undefined8 *)FUN_032937ac(plVar5,*(long *)PTR_DAT_072841f0,2);
LAB_069937c0:
            uVar10 = (*(code *)*puVar6)(plVar5,uVar7,&stack0x000000c8,puVar6[1]);
            if ((uVar10 & 1) == 0) {
              plVar5 = *(long **)(unaff_x19 + 0x48);
              uVar15 = FUN_057a19ac(*(undefined8 *)PTR_DAT_0728aaf8,uVar15,0);
              if (plVar5 == (long *)0x0) break;
              lVar13 = *plVar5;
              uVar10 = (ulong)*(ushort *)(lVar13 + 0x12e);
              if (uVar10 != 0) {
                piVar11 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar11 + -2) ==
                      *(long *)
                       Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>_get_Data__) {
                    puVar6 = (undefined8 *)(lVar13 + (long)(*piVar11 + 2) * 0x10 + 0x138);
                    goto LAB_069939d8;
                  }
                  uVar10 = uVar10 - 1;
                  piVar11 = piVar11 + 4;
                } while (uVar10 != 0);
              }
              puVar6 = (undefined8 *)
                       FUN_032937ac(plVar5,*(long *)
                                            Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>_get_Data__
                                    ,2);
LAB_069939d8:
              uVar10 = (*(code *)*puVar6)(plVar5,uVar15,&stack0x000000b8,puVar6[1]);
              if ((uVar10 & 1) != 0) {
                if (in_stack_000000b8 == (long *)0x0) break;
                param_2 = (**(code **)(*in_stack_000000b8 + 0x298))
                                    (in_stack_000000b8,*(undefined8 *)(*in_stack_000000b8 + 0x2a0));
                param_1 = *unaff_x21;
                unaff_x28 = unaff_x21;
                goto code_r0x06993a10;
              }
              goto LAB_06993f34;
            }
            if (in_stack_000000c8 == (long *)0x0) break;
            uVar15 = (**(code **)(*in_stack_000000c8 + 0x298))
                               (in_stack_000000c8,*(undefined8 *)(*in_stack_000000c8 + 0x2a0));
            lVar13 = *unaff_x21;
            if (*(int *)(lVar13 + 0xe0) == 0) {
              thunk_FUN_032cd7c0(lVar13);
              lVar13 = *unaff_x21;
            }
            lVar9 = *(long *)(*(long *)(lVar13 + 0xb8) + 0x28);
            if (lVar9 == 0) {
              if (*(int *)(lVar13 + 0xe0) == 0) {
                thunk_FUN_032cd7c0(lVar13);
                lVar13 = *unaff_x21;
              }
              uVar7 = **(undefined8 **)(lVar13 + 0xb8);
              lVar9 = thunk_FUN_032a56a0(*(undefined8 *)
                                          Method_Unity_Collections_NativeArray<byte>_CopyFrom__);
              Meta_WitAi_Json_WitResponseArray_<get_Childs>d__13__System_IDisposable_Dispose
                        (lVar9,uVar7,
                         *(undefined8 *)
                          Method_Unity_Collections_NativeArray<DecalScaleMode>_Dispose__,0);
              plVar5 = (long *)(*(long *)(*unaff_x21 + 0xb8) + 0x28);
              *plVar5 = lVar9;
              thunk_FUN_0333a630(plVar5,lVar9);
            }
            uVar15 = FUN_0399a7bc(uVar15,lVar9,
                                  *(undefined8 *)
                                   Method_Unity_Collections_NativeArray<bool>_CopyFrom__);
            lVar13 = FUN_039a43e4(uVar15,*(undefined8 *)
                                          Method_Unity_Collections_NativeArray<BoundingSphere>_CopyTo__
                                 );
            if (lVar13 == 0) break;
            uVar1 = *(uint *)(lVar13 + 0x18);
            if (0 < (int)uVar1) {
              uVar12 = 0;
              do {
                if (uVar1 <= uVar12) goto LAB_06994278;
                plVar5 = *(long **)(lVar13 + (long)(int)uVar12 * 8 + 0x20);
                if (plVar5 == (long *)0x0) goto LAB_06994260;
                (**(code **)(*plVar5 + 0x328))
                          (plVar5,in_stack_000000c8,*(undefined8 *)(*plVar5 + 0x330));
                uVar1 = *(uint *)(lVar13 + 0x18);
                uVar12 = uVar12 + 1;
              } while ((int)uVar12 < (int)uVar1);
            }
            plVar5 = in_stack_000000c8;
            plVar14 = *(long **)(unaff_x19 + 0x40);
            if (plVar14 == (long *)0x0) break;
            lVar9 = *plVar14;
            uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar10 != 0) {
              piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar11 + -2) ==
                    *(long *)Method_Unity_Collections_NativeArray<byte>_CopyTo__) {
                  puVar6 = (undefined8 *)(lVar9 + (long)(*piVar11 + 6) * 0x10 + 0x138);
                  goto LAB_06993b7c;
                }
                uVar10 = uVar10 - 1;
                piVar11 = piVar11 + 4;
              } while (uVar10 != 0);
            }
            puVar6 = (undefined8 *)
                     FUN_032937ac(plVar14,*(long *)
                                           Method_Unity_Collections_NativeArray<byte>_CopyTo__,6);
LAB_06993b7c:
            (*(code *)*puVar6)(plVar14,plVar5,puVar6[1]);
            if (in_stack_00000018 == 0) {
              in_stack_00000018 =
                   thunk_FUN_032a56a0(*(undefined8 *)
                                       Method_Unity_Collections_NativeArray<ConfigurationDescriptor>_get_IsCreated__
                                     );
              FUN_040f2de0(in_stack_00000018,1,
                           *(undefined8 *)
                            Method_Unity_Collections_NativeArray<ConfigurationDescriptor>__ctor__);
            }
            uVar15 = (**(code **)(*unaff_x25 + 0x1d8))
                               (unaff_x25,*(undefined8 *)(*unaff_x25 + 0x1e0));
            uVar15 = FUN_057a19ac(*(undefined8 *)PTR_DAT_0727b7d8,uVar15,0);
            uVar7 = (**(code **)(*unaff_x25 + 0x1e8))(unaff_x25,*(undefined8 *)(*unaff_x25 + 0x1f0))
            ;
            uVar8 = thunk_FUN_032a56a0(*(undefined8 *)Method_Oculus_Platform_Message<User>__ctor__);
            FUN_069be608(uVar8,uVar15,uVar7,0);
            in_stack_00000030 = 0;
            in_stack_00000038 = 0;
            FUN_04cd2fc4(&stack0x00000030,uVar8,lVar13,
                         *(undefined8 *)Method_Unity_Collections_NativeArray<InclusiveRange>__ctor__
                        );
            if (in_stack_00000018 == 0) break;
            lVar13 = *(long *)(in_stack_00000018 + 0x10);
            lVar9 = *(long *)Method_Unity_Collections_NativeArray<byte>_GetSubArray__;
            *(int *)(in_stack_00000018 + 0x1c) = *(int *)(in_stack_00000018 + 0x1c) + 1;
            if (lVar13 == 0) break;
            uVar1 = *(uint *)(in_stack_00000018 + 0x18);
            if (uVar1 < *(uint *)(lVar13 + 0x18)) {
              lVar13 = lVar13 + (long)(int)uVar1 * 0x10;
              *(uint *)(in_stack_00000018 + 0x18) = uVar1 + 1;
              puVar6 = (undefined8 *)(lVar13 + 0x20);
              *puVar6 = in_stack_00000030;
              *(undefined8 *)(lVar13 + 0x28) = in_stack_00000038;
              thunk_FUN_0333a630(puVar6,0);
            }
            else {
              FUN_040f35f0(in_stack_00000018,in_stack_00000030,in_stack_00000038,
                           *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
            }
            if ((in_stack_000000c8 == (long *)0x0) || (*(long *)(unaff_x19 + 0x68) == 0)) break;
            uVar10 = FUN_050fa644(*(long *)(unaff_x19 + 0x68),in_stack_000000c8[3],&stack0x000000c0,
                                  *(undefined8 *)PTR_DAT_072897d0);
            unaff_x22 = in_stack_00000020;
            if ((uVar10 & 1) == 0) goto LAB_06993f34;
            if ((in_stack_000000c8 == (long *)0x0) || (*(long *)(unaff_x19 + 0x68) == 0)) break;
            System_Array_EmptyInternalEnumerator<OVRTask_CallbackWithState<OVRAnchor_Tracker_AsyncLock,_OVRTask_CombinedTaskDataWithCompletedTaskId<OVRAnchor_Tracker_AsyncLock>>>___ctor
                      (*(long *)(unaff_x19 + 0x68),in_stack_000000c8[3],
                       *(undefined8 *)PTR_DAT_0729b610);
            if (unaff_x23 == 0) {
              unaff_x23 = thunk_FUN_032a56a0(*(undefined8 *)
                                              Method_Unity_Collections_NativeArray<ContactPairHeader>_AsReadOnly__
                                            );
              FUN_040f2de0(unaff_x23,1,
                           *(undefined8 *)Method_Unity_Collections_NativeArray<Color>_Dispose__);
            }
            uVar15 = (**(code **)(*unaff_x25 + 0x1d8))
                               (unaff_x25,*(undefined8 *)(*unaff_x25 + 0x1e0));
            uVar15 = FUN_057a19ac(*(undefined8 *)PTR_DAT_0727b7d8,uVar15,0);
            in_stack_00000030 = 0;
            in_stack_00000038 = 0;
            FUN_04cd2fc4(&stack0x00000030,uVar15,in_stack_000000c0,
                         *(undefined8 *)
                          Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__);
            if (unaff_x23 == 0) break;
            lVar13 = *(long *)(unaff_x23 + 0x10);
            lVar9 = *(long *)Method_Unity_Collections_NativeArray<byte>_GetHashCode__;
            *(int *)(unaff_x23 + 0x1c) = *(int *)(unaff_x23 + 0x1c) + 1;
            if (lVar13 == 0) break;
            uVar1 = *(uint *)(unaff_x23 + 0x18);
            if (*(uint *)(lVar13 + 0x18) <= uVar1) {
              lVar9 = *(long *)(lVar9 + 0x20);
              lVar13 = unaff_x23;
LAB_06993f28:
              FUN_040f35f0(lVar13,in_stack_00000030,in_stack_00000038,
                           *(undefined8 *)(*(long *)(lVar9 + 0xc0) + 0x70));
              goto LAB_06993f34;
            }
            lVar13 = lVar13 + (long)(int)uVar1 * 0x10;
            *(uint *)(unaff_x23 + 0x18) = uVar1 + 1;
          } while( true );
        }
      }
    }
  }
LAB_06994260:
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
LAB_06993fb8:
  uVar10 = FUN_052a8304(&stack0x00000090,*(undefined8 *)puVar2);
  lVar13 = in_stack_000000a8;
  uVar15 = in_stack_000000a0;
  if ((uVar10 & 1) == 0) {
    FUN_052a8300(&stack0x00000090,
                 *(undefined8 *)Method_Unity_Collections_NativeArray<byte>_Reinterpret<uint>__);
    if (unaff_x23 != 0) {
      FUN_040f4064(&stack0x00000030,unaff_x23,
                   *(undefined8 *)Method_Unity_Collections_NativeArray<byte>_get_IsCreated__);
      puVar3 = 
      Method_Unity_Collections_NativeArray<byte>_Reinterpret<OvrComputeAnimatorBuffer_MeshInstanceMetaData>__
      ;
      puVar2 = PTR_DAT_0727e438;
      in_stack_00000078 = in_stack_00000038;
      in_stack_00000070 = in_stack_00000030;
      in_stack_00000088 = in_stack_00000048;
      in_stack_00000080 = in_stack_00000040;
      while (uVar10 = FUN_052a8304(&stack0x00000070,*(undefined8 *)puVar3), (uVar10 & 1) != 0) {
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
      while (uVar10 = FUN_052a8304(&stack0x00000050,*(undefined8 *)puVar2),
            lVar13 = in_stack_00000068, uVar15 = in_stack_00000060, (uVar10 & 1) != 0) {
        plVar5 = *(long **)(unaff_x19 + 0x48);
        if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        lVar9 = *plVar5;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)puVar3) {
              puVar6 = (undefined8 *)(lVar9 + (long)(*piVar11 + 2) * 0x10 + 0x138);
              goto LAB_069941b8;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar6 = (undefined8 *)FUN_032937ac(plVar5,*(long *)puVar3,2);
LAB_069941b8:
        (*(code *)*puVar6)(plVar5,uVar15,puVar6[1]);
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        uVar1 = *(uint *)(lVar13 + 0x18);
        if (0 < (int)uVar1) {
          uVar12 = 0;
          do {
            if (uVar1 <= uVar12) {
                    /* WARNING: Subroutine does not return */
              Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
            }
            plVar5 = *(long **)(lVar13 + (long)(int)uVar12 * 8 + 0x20);
            if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_032d5ee8();
            }
            (**(code **)(*plVar5 + 0x308))(plVar5,uVar15,*(undefined8 *)(*plVar5 + 0x310));
            uVar1 = *(uint *)(lVar13 + 0x18);
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
  plVar5 = *(long **)(unaff_x19 + 0x40);
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_032d5ee8();
  }
  lVar9 = *plVar5;
  uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == *(long *)puVar3) {
        puVar6 = (undefined8 *)(lVar9 + (long)(*piVar11 + 2) * 0x10 + 0x138);
        goto LAB_06994024;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar6 = (undefined8 *)FUN_032937ac(plVar5,*(long *)puVar3,2);
LAB_06994024:
  (*(code *)*puVar6)(plVar5,uVar15,puVar6[1]);
  if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_032d5ee8();
  }
  uVar1 = *(uint *)(lVar13 + 0x18);
  if (0 < (int)uVar1) {
    uVar12 = 0;
    do {
      if (uVar1 <= uVar12) {
                    /* WARNING: Subroutine does not return */
        Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
      }
      plVar5 = *(long **)(lVar13 + (long)(int)uVar12 * 8 + 0x20);
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      (**(code **)(*plVar5 + 0x308))(plVar5,uVar15,*(undefined8 *)(*plVar5 + 0x310));
      uVar1 = *(uint *)(lVar13 + 0x18);
      uVar12 = uVar12 + 1;
    } while ((int)uVar12 < (int)uVar1);
  }
  goto LAB_06993fb8;
}


