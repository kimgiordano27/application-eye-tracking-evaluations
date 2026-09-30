/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKAnchor$$Equals
ENTRY_POINT: 0147f2e8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 201
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;pose_vector;ui_interaction;telemetry;frame_behavior;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_collection_sink;functionality_data_collection_or_telemetry_hits_1
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Meta_XR_MRUtilityKit_MRUKAnchor__Equals(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long *unaff_x19;
  ulong uVar12;
  undefined8 *unaff_x21;
  double dVar13;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  
  FUN_016a34e8(param_1,param_2,0);
  if (unaff_x19 == (long *)0x0) {
LAB_0147f9ec:
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  if ((param_1 != 0) &&
     (lVar8 = thunk_FUN_00d6225c(param_1,*(undefined8 *)(*unaff_x19 + 0x40)), lVar8 == 0)) {
LAB_0147f9f0:
    uVar10 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar10,0);
  }
  if ((int)unaff_x19[3] != 0) {
    unaff_x19[4] = param_1;
    puVar3 = Method_System_Linq_Enumerable_ElementAt<string>__;
    uVar11 = _UNK_0293f9a8;
    uVar10 = _DAT_0293f9a0;
    in_stack_00000118 = _UNK_0293f9a8;
    in_stack_00000110 = _DAT_0293f9a0;
    lVar8 = FUN_00da4fc0(*unaff_x21,&stack0x00000110);
    FUN_016a34e8(lVar8,*(undefined8 *)puVar3,0);
    if ((lVar8 != 0) &&
       (lVar9 = thunk_FUN_00d6225c(lVar8,*(undefined8 *)(*unaff_x19 + 0x40)), lVar9 == 0))
    goto LAB_0147f9f0;
    if (1 < *(uint *)(unaff_x19 + 3)) {
      unaff_x19[5] = lVar8;
      puVar3 = System_Collections_Generic_List<MB3_MeshCombinerSingle_BoneAndBindpose>_TypeInfo;
      in_stack_00000108 = uVar11;
      in_stack_00000100 = uVar10;
      lVar8 = FUN_00da4fc0(*unaff_x21,&stack0x00000100);
      FUN_016a34e8(lVar8,*(undefined8 *)puVar3,0);
      if ((lVar8 != 0) &&
         (lVar9 = thunk_FUN_00d6225c(lVar8,*(undefined8 *)(*unaff_x19 + 0x40)), lVar9 == 0))
      goto LAB_0147f9f0;
      if (2 < *(uint *)(unaff_x19 + 3)) {
        unaff_x19[6] = lVar8;
        puVar3 = Method_System_Collections_Generic_List<UIDocument>__ctor__;
        uVar11 = _UNK_0293f9f8;
        uVar10 = _DAT_0293f9f0;
        in_stack_000000f8 = _UNK_0293f9f8;
        in_stack_000000f0 = _DAT_0293f9f0;
        lVar8 = FUN_00da4fc0(*unaff_x21,&stack0x000000f0);
        FUN_016a34e8(lVar8,*(undefined8 *)puVar3,0);
        if ((lVar8 != 0) &&
           (lVar9 = thunk_FUN_00d6225c(lVar8,*(undefined8 *)(*unaff_x19 + 0x40)), lVar9 == 0))
        goto LAB_0147f9f0;
        if (3 < *(uint *)(unaff_x19 + 3)) {
          unaff_x19[7] = lVar8;
          puVar3 = Method_System_Collections_Specialized_ListDictionary_NodeEnumerator_Reset__;
          in_stack_000000e8 = uVar11;
          in_stack_000000e0 = uVar10;
          lVar8 = FUN_00da4fc0(*unaff_x21,&stack0x000000e0);
          FUN_016a34e8(lVar8,*(undefined8 *)puVar3,0);
          if ((lVar8 != 0) &&
             (lVar9 = thunk_FUN_00d6225c(lVar8,*(undefined8 *)(*unaff_x19 + 0x40)), lVar9 == 0))
          goto LAB_0147f9f0;
          if (4 < *(uint *)(unaff_x19 + 3)) {
            unaff_x19[8] = lVar8;
            puVar3 = PTR_DAT_033f6d68;
            uVar2 = _UNK_0293f9b8;
            uVar1 = _DAT_0293f9b0;
            in_stack_000000d8 = _UNK_0293f9b8;
            in_stack_000000d0 = _DAT_0293f9b0;
            lVar8 = FUN_00da4fc0(*unaff_x21,&stack0x000000d0);
            FUN_016a34e8(lVar8,*(undefined8 *)puVar3,0);
            if ((lVar8 != 0) &&
               (lVar9 = thunk_FUN_00d6225c(lVar8,*(undefined8 *)(*unaff_x19 + 0x40)), lVar9 == 0))
            goto LAB_0147f9f0;
            if (5 < *(uint *)(unaff_x19 + 3)) {
              unaff_x19[9] = lVar8;
              puVar3 = System_Action<OVRColocationSession_Data>_TypeInfo;
              in_stack_000000c8 = uVar2;
              in_stack_000000c0 = uVar1;
              lVar8 = FUN_00da4fc0(*unaff_x21,&stack0x000000c0);
              FUN_016a34e8(lVar8,*(undefined8 *)puVar3,0);
              if ((lVar8 != 0) &&
                 (lVar9 = thunk_FUN_00d6225c(lVar8,*(undefined8 *)(*unaff_x19 + 0x40)), lVar9 == 0))
              goto LAB_0147f9f0;
              if (6 < *(uint *)(unaff_x19 + 3)) {
                unaff_x19[10] = lVar8;
                puVar3 = Method_Sirenix_Serialization_MinimalBaseFormatter<Vector3Int>__ctor__;
                in_stack_000000b8 = uVar2;
                in_stack_000000b0 = uVar1;
                lVar8 = FUN_00da4fc0(*unaff_x21,&stack0x000000b0);
                FUN_016a34e8(lVar8,*(undefined8 *)puVar3,0);
                if ((lVar8 != 0) &&
                   (lVar9 = thunk_FUN_00d6225c(lVar8,*(undefined8 *)(*unaff_x19 + 0x40)), lVar9 == 0
                   )) goto LAB_0147f9f0;
                if (7 < *(uint *)(unaff_x19 + 3)) {
                  unaff_x19[0xb] = lVar8;
                  puVar3 = StringLiteral_11756;
                  uVar2 = _UNK_0293f9c8;
                  uVar1 = _DAT_0293f9c0;
                  in_stack_000000a8 = _UNK_0293f9c8;
                  in_stack_000000a0 = _DAT_0293f9c0;
                  lVar8 = FUN_00da4fc0(*unaff_x21,&stack0x000000a0);
                  FUN_016a34e8(lVar8,*(undefined8 *)puVar3,0);
                  if ((lVar8 != 0) &&
                     (lVar9 = thunk_FUN_00d6225c(lVar8,*(undefined8 *)(*unaff_x19 + 0x40)),
                     lVar9 == 0)) goto LAB_0147f9f0;
                  if (8 < *(uint *)(unaff_x19 + 3)) {
                    unaff_x19[0xc] = lVar8;
                    puVar3 = 
                    Method_UnityEngine_UIElements_PointerEventBase<PointerCancelEvent>_get_isPrimary__
                    ;
                    in_stack_00000098 = uVar2;
                    in_stack_00000090 = uVar1;
                    lVar8 = FUN_00da4fc0(*unaff_x21,&stack0x00000090);
                    FUN_016a34e8(lVar8,*(undefined8 *)puVar3,0);
                    if ((lVar8 != 0) &&
                       (lVar9 = thunk_FUN_00d6225c(lVar8,*(undefined8 *)(*unaff_x19 + 0x40)),
                       lVar9 == 0)) goto LAB_0147f9f0;
                    if (9 < *(uint *)(unaff_x19 + 3)) {
                      unaff_x19[0xd] = lVar8;
                      puVar3 = 
                      Method_Newtonsoft_Json_Utilities_ThreadSafeStore<StructMultiKey<string,_string>,_Type>__ctor__
                      ;
                      in_stack_00000088 = uVar2;
                      in_stack_00000080 = uVar1;
                      lVar8 = FUN_00da4fc0(*unaff_x21,&stack0x00000080);
                      FUN_016a34e8(lVar8,*(undefined8 *)puVar3,0);
                      if ((lVar8 != 0) &&
                         (lVar9 = thunk_FUN_00d6225c(lVar8,*(undefined8 *)(*unaff_x19 + 0x40)),
                         lVar9 == 0)) goto LAB_0147f9f0;
                      if (10 < *(uint *)(unaff_x19 + 3)) {
                        unaff_x19[0xe] = lVar8;
                        puVar3 = Method_System_Collections_Generic_List<InputBinding>__ctor__;
                        uVar2 = _UNK_0293f9d8;
                        uVar1 = _DAT_0293f9d0;
                        in_stack_00000078 = _UNK_0293f9d8;
                        in_stack_00000070 = _DAT_0293f9d0;
                        lVar8 = FUN_00da4fc0(*unaff_x21,&stack0x00000070);
                        FUN_016a34e8(lVar8,*(undefined8 *)puVar3,0);
                        if ((lVar8 != 0) &&
                           (lVar9 = thunk_FUN_00d6225c(lVar8,*(undefined8 *)(*unaff_x19 + 0x40)),
                           lVar9 == 0)) goto LAB_0147f9f0;
                        if (0xb < *(uint *)(unaff_x19 + 3)) {
                          unaff_x19[0xf] = lVar8;
                          puVar3 = 
                          Field_<PrivateImplementationDetails>_039E400B4E2D72C49D87613C187F7B3CA3AD0C1917B3BB6692C2EF7FE8C10982
                          ;
                          in_stack_00000068 = uVar2;
                          in_stack_00000060 = uVar1;
                          lVar8 = FUN_00da4fc0(*unaff_x21,&stack0x00000060);
                          FUN_016a34e8(lVar8,*(undefined8 *)puVar3,0);
                          if ((lVar8 != 0) &&
                             (lVar9 = thunk_FUN_00d6225c(lVar8,*(undefined8 *)(*unaff_x19 + 0x40)),
                             lVar9 == 0)) goto LAB_0147f9f0;
                          if (0xc < *(uint *)(unaff_x19 + 3)) {
                            unaff_x19[0x10] = lVar8;
                            puVar3 = PTR_DAT_033f3198;
                            in_stack_00000058 = uVar2;
                            in_stack_00000050 = uVar1;
                            lVar8 = FUN_00da4fc0(*unaff_x21,&stack0x00000050);
                            FUN_016a34e8(lVar8,*(undefined8 *)puVar3,0);
                            if ((lVar8 != 0) &&
                               (lVar9 = thunk_FUN_00d6225c(lVar8,*(undefined8 *)(*unaff_x19 + 0x40))
                               , lVar9 == 0)) goto LAB_0147f9f0;
                            if (0xd < *(uint *)(unaff_x19 + 3)) {
                              unaff_x19[0x11] = lVar8;
                              puVar3 = System_Collections_Generic_IEnumerable<WingedEdge>_TypeInfo;
                              in_stack_00000048 = _UNK_0293f9e8;
                              in_stack_00000040 = _DAT_0293f9e0;
                              lVar8 = FUN_00da4fc0(*unaff_x21,&stack0x00000040);
                              FUN_016a34e8(lVar8,*(undefined8 *)puVar3,0);
                              if ((lVar8 != 0) &&
                                 (lVar9 = thunk_FUN_00d6225c(lVar8,*(undefined8 *)
                                                                    (*unaff_x19 + 0x40)), lVar9 == 0
                                 )) goto LAB_0147f9f0;
                              if (0xe < *(uint *)(unaff_x19 + 3)) {
                                unaff_x19[0x12] = lVar8;
                                puVar3 = StringLiteral_14046;
                                in_stack_00000038 = uVar11;
                                in_stack_00000030 = uVar10;
                                lVar8 = FUN_00da4fc0(*unaff_x21,&stack0x00000030);
                                FUN_016a34e8(lVar8,*(undefined8 *)puVar3,0);
                                if ((lVar8 != 0) &&
                                   (lVar9 = thunk_FUN_00d6225c(lVar8,*(undefined8 *)
                                                                      (*unaff_x19 + 0x40)),
                                   lVar9 == 0)) goto LAB_0147f9f0;
                                if (0xf < *(uint *)(unaff_x19 + 3)) {
                                  unaff_x19[0x13] = lVar8;
                                  puVar3 = OVRVirtualKeyboard_WaitUntilKeyboardVisible_TypeInfo;
                                  in_stack_00000028 = uVar11;
                                  in_stack_00000020 = uVar10;
                                  lVar8 = FUN_00da4fc0(*unaff_x21,&stack0x00000020);
                                  FUN_016a34e8(lVar8,*(undefined8 *)puVar3,0);
                                  if ((lVar8 != 0) &&
                                     (lVar9 = thunk_FUN_00d6225c(lVar8,*(undefined8 *)
                                                                        (*unaff_x19 + 0x40)),
                                     lVar9 == 0)) goto LAB_0147f9f0;
                                  puVar3 = PTR_DAT_033f4eb0;
                                  if (0x10 < *(uint *)(unaff_x19 + 3)) {
                                    unaff_x19[0x14] = lVar8;
                                    **(undefined8 **)(*(long *)puVar3 + 0xb8) = unaff_x19;
                                    if (**(long **)(*(long *)puVar3 + 0xb8) != 0) {
                                      lVar8 = FUN_00da4fb8(*(undefined8 *)StringLiteral_12507,
                                                           *(undefined4 *)
                                                            (**(long **)(*(long *)puVar3 + 0xb8) +
                                                            0x18));
                                      lVar9 = **(long **)(*(long *)puVar3 + 0xb8);
                                      (*(long **)(*(long *)puVar3 + 0xb8))[2] = lVar8;
                                      puVar7 = StringLiteral_7980;
                                      puVar6 = Method_Unity_Burst_Intrinsics_Arm_Neon_vmaxnmv_f32__;
                                      puVar5 = 
                                      Method_System_Collections_Generic_HashSet<RTHandle>_Contains__
                                      ;
                                      puVar4 = System_Threading_Timer_TimerComparer_TypeInfo;
                                      if (lVar9 != 0) {
                                        uVar10 = FUN_00da4fb8(*(undefined8 *)
                                                                                                                              
                                                  Method_Unity_Burst_Intrinsics_Arm_Neon_vmaxnmv_f32__
                                                  ,*(undefined4 *)(lVar9 + 0x18));
                                        *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x18) =
                                             uVar10;
                                        uVar10 = FUN_00da4fb8(*(undefined8 *)puVar6,0x20);
                                        FUN_016a34e8(uVar10,*(undefined8 *)puVar7,0);
                                        *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x20) =
                                             uVar10;
                                        uVar11 = FUN_00da4fb8(*(undefined8 *)puVar5,0x200f);
                                        uVar10 = DAT_0293fa98;
                                        uVar12 = 0;
                                        lVar8 = *(long *)(*(long *)puVar3 + 0xb8);
                                        *(undefined8 *)(lVar8 + 8) = uVar11;
                                        while( true ) {
                                          lVar8 = *(long *)(lVar8 + 8);
                                          if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                                            thunk_FUN_00d32864();
                                          }
                                          dVar13 = (double)thunk_FUN_00d8240c((double)(int)uVar12,
                                                                              uVar10,0);
                                          if (lVar8 == 0) break;
                                          if (*(uint *)(lVar8 + 0x18) <= uVar12) goto LAB_0147f9e8;
                                          *(float *)(lVar8 + uVar12 * 4 + 0x20) = (float)dVar13;
                                          if (uVar12 == 0x200e) {
                                            return;
                                          }
                                          uVar12 = uVar12 + 1;
                                          lVar8 = *(long *)(*(long *)puVar3 + 0xb8);
                                        }
                                      }
                                    }
                                    goto LAB_0147f9ec;
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
      }
    }
  }
LAB_0147f9e8:
                    /* WARNING: Subroutine does not return */
  FUN_00da5194();
}


