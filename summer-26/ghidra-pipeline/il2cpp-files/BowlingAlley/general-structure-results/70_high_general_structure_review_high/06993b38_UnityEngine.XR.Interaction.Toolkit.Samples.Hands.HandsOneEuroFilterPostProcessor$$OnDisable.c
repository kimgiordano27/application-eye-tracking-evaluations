/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.Samples.Hands.HandsOneEuroFilterPostProcessor$$OnDisable
ENTRY_POINT: 06993b38
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 83
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_21;paired_field_refs_with_structure_only;telemetry_or_network_hits_4;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;negative_framework_namespace_without_eye_use_flow
*/


void UnityEngine_XR_Interaction_Toolkit_Samples_Hands_HandsOneEuroFilterPostProcessor__OnDisable
               (long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  ulong in_x9;
  long lVar11;
  int *piVar12;
  long unaff_x19;
  undefined8 *unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long *plVar13;
  uint unaff_w24;
  long *unaff_x25;
  long unaff_x26;
  uint uVar14;
  long *plVar15;
  long *unaff_x27;
  long *unaff_x28;
  long unaff_x29;
  long in_stack_00000018;
  long in_stack_00000020;
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
  
code_r0x06993b38:
  if (in_x9 != 0) {
    piVar12 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == param_3) {
        puVar5 = (undefined8 *)(param_1 + (long)(*piVar12 + 6) * 0x10 + 0x138);
        goto LAB_06993dec;
      }
      in_x9 = in_x9 - 1;
      piVar12 = piVar12 + 4;
    } while (in_x9 != 0);
  }
  puVar5 = (undefined8 *)FUN_032937ac(unaff_x27,param_3,6);
LAB_06993dec:
  (*(code *)*puVar5)(unaff_x27,unaff_x28,puVar5[1]);
  if (unaff_x29 == 0) {
    unaff_x29 = thunk_FUN_032a56a0(*(undefined8 *)
                                    Method_Unity_Collections_NativeArray<DecalEntity>_Dispose__);
    FUN_040f2de0(unaff_x29,1,
                 *(undefined8 *)
                  Method_Unity_Collections_NativeArray<ConfigurationDescriptor>_Dispose__);
  }
  uVar6 = (**(code **)(*unaff_x25 + 0x1d8))(unaff_x25,*(undefined8 *)(*unaff_x25 + 0x1e0));
  uVar6 = FUN_057a19ac(*(undefined8 *)PTR_DAT_0728aaf8,uVar6,0);
  uVar7 = (**(code **)(*unaff_x25 + 0x1e8))(unaff_x25,*(undefined8 *)(*unaff_x25 + 0x1f0));
  uVar8 = thunk_FUN_032a56a0(*(undefined8 *)Method_Oculus_Platform_Message<User>_get_Data__);
  FUN_069c0040(uVar8,uVar6,uVar7,0);
  in_stack_00000030 = 0;
  in_stack_00000038 = 0;
  FUN_04cd2fc4(&stack0x00000030,uVar8,unaff_x26,
               *(undefined8 *)Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>__ctor__);
  if (unaff_x29 != 0) {
    lVar10 = *(long *)(unaff_x29 + 0x10);
    lVar11 = *(long *)Method_Unity_Collections_NativeArray<byte>_Equals__;
    *(int *)(unaff_x29 + 0x1c) = *(int *)(unaff_x29 + 0x1c) + 1;
    if (lVar10 != 0) {
      uVar1 = *(uint *)(unaff_x29 + 0x18);
      if (*(uint *)(lVar10 + 0x18) <= uVar1) {
        lVar11 = *(long *)(lVar11 + 0x20);
        lVar10 = unaff_x29;
        goto LAB_06993f28;
      }
      lVar10 = lVar10 + (long)(int)uVar1 * 0x10;
      *(uint *)(unaff_x29 + 0x18) = uVar1 + 1;
      do {
        *(undefined8 *)(lVar10 + 0x20) = in_stack_00000030;
        *(undefined8 *)(lVar10 + 0x28) = in_stack_00000038;
        thunk_FUN_0333a630((undefined8 *)(lVar10 + 0x20),0);
LAB_06993f34:
        lVar10 = *(long *)(unaff_x19 + 0xe0);
        uVar6 = (**(code **)(*unaff_x25 + 0x1d8))(unaff_x25,*(undefined8 *)(*unaff_x25 + 0x1e0));
        if (lVar10 == 0) break;
        FUN_041e29fc(lVar10,unaff_w24,uVar6,*(undefined8 *)PTR_DAT_0728b600);
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
          uVar6 = FUN_041e29a8(*(long *)(unaff_x19 + 0xe0),unaff_w24,*unaff_x20);
          if (unaff_x25 == (long *)0x0) goto LAB_06994260;
          uVar7 = (**(code **)(*unaff_x25 + 0x1d8))(unaff_x25,*(undefined8 *)(*unaff_x25 + 0x1e0));
          uVar9 = FUN_057aa92c(uVar7,uVar6,0);
        } while ((uVar9 & 1) == 0);
        plVar13 = *(long **)(unaff_x19 + 0x40);
        uVar7 = FUN_057a19ac(*(undefined8 *)PTR_DAT_0727b7d8,uVar6,0);
        if (plVar13 == (long *)0x0) break;
        lVar10 = *plVar13;
        uVar9 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar9 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_072841f0) {
              puVar5 = (undefined8 *)(lVar10 + (long)(*piVar12 + 2) * 0x10 + 0x138);
              goto LAB_069937c0;
            }
            uVar9 = uVar9 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar9 != 0);
        }
        puVar5 = (undefined8 *)FUN_032937ac(plVar13,*(long *)PTR_DAT_072841f0,2);
LAB_069937c0:
        uVar9 = (*(code *)*puVar5)(plVar13,uVar7,&stack0x000000c8,puVar5[1]);
        if ((uVar9 & 1) == 0) {
          plVar13 = *(long **)(unaff_x19 + 0x48);
          uVar6 = FUN_057a19ac(*(undefined8 *)PTR_DAT_0728aaf8,uVar6,0);
          if (plVar13 == (long *)0x0) break;
          lVar10 = *plVar13;
          uVar9 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar9 != 0) {
            piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) ==
                  *(long *)Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>_get_Data__)
              {
                puVar5 = (undefined8 *)(lVar10 + (long)(*piVar12 + 2) * 0x10 + 0x138);
                goto LAB_069939d8;
              }
              uVar9 = uVar9 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar9 != 0);
          }
          puVar5 = (undefined8 *)
                   FUN_032937ac(plVar13,*(long *)
                                         Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>_get_Data__
                                ,2);
LAB_069939d8:
          uVar9 = (*(code *)*puVar5)(plVar13,uVar6,&stack0x000000b8,puVar5[1]);
          if ((uVar9 & 1) != 0) {
            if (in_stack_000000b8 == (long *)0x0) break;
            uVar6 = (**(code **)(*in_stack_000000b8 + 0x298))
                              (in_stack_000000b8,*(undefined8 *)(*in_stack_000000b8 + 0x2a0));
            lVar10 = *unaff_x21;
            if (*(int *)(lVar10 + 0xe0) == 0) {
              thunk_FUN_032cd7c0(lVar10);
              lVar10 = *unaff_x21;
            }
            lVar11 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x30);
            if (lVar11 == 0) {
              if (*(int *)(lVar10 + 0xe0) == 0) {
                thunk_FUN_032cd7c0(lVar10);
                lVar10 = *unaff_x21;
              }
              uVar7 = **(undefined8 **)(lVar10 + 0xb8);
              lVar11 = thunk_FUN_032a56a0(*(undefined8 *)
                                           Method_Unity_Collections_NativeArray<byte>__ctor__);
              Meta_WitAi_Json_WitResponseArray_<get_Childs>d__13__System_IDisposable_Dispose
                        (lVar11,uVar7,
                         *(undefined8 *)
                          Method_Unity_Collections_NativeArray<DecalSubDrawCall>_Dispose__,0);
              plVar13 = (long *)(*(long *)(*unaff_x21 + 0xb8) + 0x30);
              *plVar13 = lVar11;
              thunk_FUN_0333a630(plVar13,lVar11);
            }
            uVar6 = FUN_0399a7bc(uVar6,lVar11,
                                 *(undefined8 *)Method_Unity_Collections_NativeArray<bool>__ctor__);
            unaff_x26 = FUN_039a43e4(uVar6,*(undefined8 *)
                                            Method_Unity_Collections_NativeArray<bool>_Dispose__);
            if (unaff_x26 == 0) break;
            uVar1 = *(uint *)(unaff_x26 + 0x18);
            if ((int)uVar1 < 1) goto LAB_06993b18;
            uVar14 = 0;
            goto LAB_06993ae0;
          }
          goto LAB_06993f34;
        }
        if (in_stack_000000c8 == (long *)0x0) break;
        uVar6 = (**(code **)(*in_stack_000000c8 + 0x298))
                          (in_stack_000000c8,*(undefined8 *)(*in_stack_000000c8 + 0x2a0));
        lVar10 = *unaff_x21;
        if (*(int *)(lVar10 + 0xe0) == 0) {
          thunk_FUN_032cd7c0(lVar10);
          lVar10 = *unaff_x21;
        }
        lVar11 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x28);
        if (lVar11 == 0) {
          if (*(int *)(lVar10 + 0xe0) == 0) {
            thunk_FUN_032cd7c0(lVar10);
            lVar10 = *unaff_x21;
          }
          uVar7 = **(undefined8 **)(lVar10 + 0xb8);
          lVar11 = thunk_FUN_032a56a0(*(undefined8 *)
                                       Method_Unity_Collections_NativeArray<byte>_CopyFrom__);
          Meta_WitAi_Json_WitResponseArray_<get_Childs>d__13__System_IDisposable_Dispose
                    (lVar11,uVar7,
                     *(undefined8 *)Method_Unity_Collections_NativeArray<DecalScaleMode>_Dispose__,0
                    );
          plVar13 = (long *)(*(long *)(*unaff_x21 + 0xb8) + 0x28);
          *plVar13 = lVar11;
          thunk_FUN_0333a630(plVar13,lVar11);
        }
        uVar6 = FUN_0399a7bc(uVar6,lVar11,
                             *(undefined8 *)Method_Unity_Collections_NativeArray<bool>_CopyFrom__);
        lVar10 = FUN_039a43e4(uVar6,*(undefined8 *)
                                     Method_Unity_Collections_NativeArray<BoundingSphere>_CopyTo__);
        if (lVar10 == 0) break;
        uVar1 = *(uint *)(lVar10 + 0x18);
        if (0 < (int)uVar1) {
          uVar14 = 0;
          do {
            if (uVar1 <= uVar14) goto LAB_06994278;
            plVar13 = *(long **)(lVar10 + (long)(int)uVar14 * 8 + 0x20);
            if (plVar13 == (long *)0x0) goto LAB_06994260;
            (**(code **)(*plVar13 + 0x328))
                      (plVar13,in_stack_000000c8,*(undefined8 *)(*plVar13 + 0x330));
            uVar1 = *(uint *)(lVar10 + 0x18);
            uVar14 = uVar14 + 1;
          } while ((int)uVar14 < (int)uVar1);
        }
        plVar13 = in_stack_000000c8;
        plVar15 = *(long **)(unaff_x19 + 0x40);
        if (plVar15 == (long *)0x0) break;
        lVar11 = *plVar15;
        uVar9 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar9 != 0) {
          piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) ==
                *(long *)Method_Unity_Collections_NativeArray<byte>_CopyTo__) {
              puVar5 = (undefined8 *)(lVar11 + (long)(*piVar12 + 6) * 0x10 + 0x138);
              goto LAB_06993b7c;
            }
            uVar9 = uVar9 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar9 != 0);
        }
        puVar5 = (undefined8 *)
                 FUN_032937ac(plVar15,*(long *)Method_Unity_Collections_NativeArray<byte>_CopyTo__,6
                             );
LAB_06993b7c:
        (*(code *)*puVar5)(plVar15,plVar13,puVar5[1]);
        if (in_stack_00000018 == 0) {
          in_stack_00000018 =
               thunk_FUN_032a56a0(*(undefined8 *)
                                   Method_Unity_Collections_NativeArray<ConfigurationDescriptor>_get_IsCreated__
                                 );
          FUN_040f2de0(in_stack_00000018,1,
                       *(undefined8 *)
                        Method_Unity_Collections_NativeArray<ConfigurationDescriptor>__ctor__);
        }
        uVar6 = (**(code **)(*unaff_x25 + 0x1d8))(unaff_x25,*(undefined8 *)(*unaff_x25 + 0x1e0));
        uVar6 = FUN_057a19ac(*(undefined8 *)PTR_DAT_0727b7d8,uVar6,0);
        uVar7 = (**(code **)(*unaff_x25 + 0x1e8))(unaff_x25,*(undefined8 *)(*unaff_x25 + 0x1f0));
        uVar8 = thunk_FUN_032a56a0(*(undefined8 *)Method_Oculus_Platform_Message<User>__ctor__);
        FUN_069be608(uVar8,uVar6,uVar7,0);
        in_stack_00000030 = 0;
        in_stack_00000038 = 0;
        FUN_04cd2fc4(&stack0x00000030,uVar8,lVar10,
                     *(undefined8 *)Method_Unity_Collections_NativeArray<InclusiveRange>__ctor__);
        if (in_stack_00000018 == 0) break;
        lVar10 = *(long *)(in_stack_00000018 + 0x10);
        lVar11 = *(long *)Method_Unity_Collections_NativeArray<byte>_GetSubArray__;
        *(int *)(in_stack_00000018 + 0x1c) = *(int *)(in_stack_00000018 + 0x1c) + 1;
        if (lVar10 == 0) break;
        uVar1 = *(uint *)(in_stack_00000018 + 0x18);
        if (uVar1 < *(uint *)(lVar10 + 0x18)) {
          lVar10 = lVar10 + (long)(int)uVar1 * 0x10;
          *(uint *)(in_stack_00000018 + 0x18) = uVar1 + 1;
          puVar5 = (undefined8 *)(lVar10 + 0x20);
          *puVar5 = in_stack_00000030;
          *(undefined8 *)(lVar10 + 0x28) = in_stack_00000038;
          thunk_FUN_0333a630(puVar5,0);
        }
        else {
          FUN_040f35f0(in_stack_00000018,in_stack_00000030,in_stack_00000038,
                       *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
        }
        if ((in_stack_000000c8 == (long *)0x0) || (*(long *)(unaff_x19 + 0x68) == 0)) break;
        uVar9 = FUN_050fa644(*(long *)(unaff_x19 + 0x68),in_stack_000000c8[3],&stack0x000000c0,
                             *(undefined8 *)PTR_DAT_072897d0);
        unaff_x22 = in_stack_00000020;
        if ((uVar9 & 1) == 0) goto LAB_06993f34;
        if ((in_stack_000000c8 == (long *)0x0) || (*(long *)(unaff_x19 + 0x68) == 0)) break;
        System_Array_EmptyInternalEnumerator<OVRTask_CallbackWithState<OVRAnchor_Tracker_AsyncLock,_OVRTask_CombinedTaskDataWithCompletedTaskId<OVRAnchor_Tracker_AsyncLock>>>___ctor
                  (*(long *)(unaff_x19 + 0x68),in_stack_000000c8[3],*(undefined8 *)PTR_DAT_0729b610)
        ;
        if (unaff_x23 == 0) {
          unaff_x23 = thunk_FUN_032a56a0(*(undefined8 *)
                                          Method_Unity_Collections_NativeArray<ContactPairHeader>_AsReadOnly__
                                        );
          FUN_040f2de0(unaff_x23,1,
                       *(undefined8 *)Method_Unity_Collections_NativeArray<Color>_Dispose__);
        }
        uVar6 = (**(code **)(*unaff_x25 + 0x1d8))(unaff_x25,*(undefined8 *)(*unaff_x25 + 0x1e0));
        uVar6 = FUN_057a19ac(*(undefined8 *)PTR_DAT_0727b7d8,uVar6,0);
        in_stack_00000030 = 0;
        in_stack_00000038 = 0;
        FUN_04cd2fc4(&stack0x00000030,uVar6,in_stack_000000c0,
                     *(undefined8 *)
                      Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__);
        if (unaff_x23 == 0) break;
        lVar10 = *(long *)(unaff_x23 + 0x10);
        lVar11 = *(long *)Method_Unity_Collections_NativeArray<byte>_GetHashCode__;
        *(int *)(unaff_x23 + 0x1c) = *(int *)(unaff_x23 + 0x1c) + 1;
        if (lVar10 == 0) break;
        uVar1 = *(uint *)(unaff_x23 + 0x18);
        if (*(uint *)(lVar10 + 0x18) <= uVar1) {
          lVar11 = *(long *)(lVar11 + 0x20);
          lVar10 = unaff_x23;
LAB_06993f28:
          FUN_040f35f0(lVar10,in_stack_00000030,in_stack_00000038,
                       *(undefined8 *)(*(long *)(lVar11 + 0xc0) + 0x70));
          goto LAB_06993f34;
        }
        lVar10 = lVar10 + (long)(int)uVar1 * 0x10;
        *(uint *)(unaff_x23 + 0x18) = uVar1 + 1;
      } while( true );
    }
  }
LAB_06994260:
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
LAB_06993fb8:
  uVar9 = FUN_052a8304(&stack0x00000090,*(undefined8 *)puVar2);
  lVar10 = in_stack_000000a8;
  uVar6 = in_stack_000000a0;
  if ((uVar9 & 1) == 0) {
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
    if (unaff_x29 == 0) {
      if (bVar4) {
        return;
      }
    }
    else {
      FUN_040f4064(&stack0x00000030,unaff_x29,
                   *(undefined8 *)Method_Unity_Collections_NativeArray<byte>_ToArray__);
      puVar3 = Method_Unity_Collections_NativeArray<byte>_Dispose__;
      puVar2 = 
      Method_Unity_Collections_NativeArray<byte>_Reinterpret<OvrAvatarComputeSkinnedPrimitive_UInt32Wrapper>__
      ;
      in_stack_00000058 = in_stack_00000038;
      in_stack_00000050 = in_stack_00000030;
      in_stack_00000068 = in_stack_00000048;
      in_stack_00000060 = in_stack_00000040;
      while (uVar9 = FUN_052a8304(&stack0x00000050,*(undefined8 *)puVar2),
            lVar10 = in_stack_00000068, uVar6 = in_stack_00000060, (uVar9 & 1) != 0) {
        plVar13 = *(long **)(unaff_x19 + 0x48);
        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        lVar11 = *plVar13;
        uVar9 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar9 != 0) {
          piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)puVar3) {
              puVar5 = (undefined8 *)(lVar11 + (long)(*piVar12 + 2) * 0x10 + 0x138);
              goto LAB_069941b8;
            }
            uVar9 = uVar9 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar9 != 0);
        }
        puVar5 = (undefined8 *)FUN_032937ac(plVar13,*(long *)puVar3,2);
LAB_069941b8:
        (*(code *)*puVar5)(plVar13,uVar6,puVar5[1]);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        uVar1 = *(uint *)(lVar10 + 0x18);
        if (0 < (int)uVar1) {
          uVar14 = 0;
          do {
            if (uVar1 <= uVar14) {
                    /* WARNING: Subroutine does not return */
              Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
            }
            plVar13 = *(long **)(lVar10 + (long)(int)uVar14 * 8 + 0x20);
            if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_032d5ee8();
            }
            (**(code **)(*plVar13 + 0x308))(plVar13,uVar6,*(undefined8 *)(*plVar13 + 0x310));
            uVar1 = *(uint *)(lVar10 + 0x18);
            uVar14 = uVar14 + 1;
          } while ((int)uVar14 < (int)uVar1);
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
  lVar11 = *plVar13;
  uVar9 = (ulong)*(ushort *)(lVar11 + 0x12e);
  if (uVar9 != 0) {
    piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == *(long *)puVar3) {
        puVar5 = (undefined8 *)(lVar11 + (long)(*piVar12 + 2) * 0x10 + 0x138);
        goto LAB_06994024;
      }
      uVar9 = uVar9 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar9 != 0);
  }
  puVar5 = (undefined8 *)FUN_032937ac(plVar13,*(long *)puVar3,2);
LAB_06994024:
  (*(code *)*puVar5)(plVar13,uVar6,puVar5[1]);
  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_032d5ee8();
  }
  uVar1 = *(uint *)(lVar10 + 0x18);
  if (0 < (int)uVar1) {
    uVar14 = 0;
    do {
      if (uVar1 <= uVar14) {
                    /* WARNING: Subroutine does not return */
        Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
      }
      plVar13 = *(long **)(lVar10 + (long)(int)uVar14 * 8 + 0x20);
      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      (**(code **)(*plVar13 + 0x308))(plVar13,uVar6,*(undefined8 *)(*plVar13 + 0x310));
      uVar1 = *(uint *)(lVar10 + 0x18);
      uVar14 = uVar14 + 1;
    } while ((int)uVar14 < (int)uVar1);
  }
  goto LAB_06993fb8;
  while( true ) {
    (**(code **)(*plVar13 + 0x328))(plVar13,in_stack_000000b8,*(undefined8 *)(*plVar13 + 0x330));
    uVar1 = *(uint *)(unaff_x26 + 0x18);
    uVar14 = uVar14 + 1;
    if ((int)uVar1 <= (int)uVar14) break;
LAB_06993ae0:
    if (uVar1 <= uVar14) {
LAB_06994278:
                    /* WARNING: Subroutine does not return */
      Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
    }
    plVar13 = *(long **)(unaff_x26 + (long)(int)uVar14 * 8 + 0x20);
    if (plVar13 == (long *)0x0) goto LAB_06994260;
  }
LAB_06993b18:
  unaff_x27 = *(long **)(unaff_x19 + 0x48);
  if (unaff_x27 == (long *)0x0) goto LAB_06994260;
  param_1 = *unaff_x27;
  in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
  param_3 = *(long *)Method_Unity_Collections_NativeArray<byte>_Dispose__;
  unaff_x28 = in_stack_000000b8;
  goto code_r0x06993b38;
}


