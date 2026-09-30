/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKRoom$$UpdateRoomLabel
ENTRY_POINT: 0147f208
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

void Meta_XR_MRUtilityKit_MRUKRoom__UpdateRoomLabel(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long unaff_x19;
  ulong uVar13;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  double dVar14;
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
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  
  thunk_FUN_00d48444(StringLiteral_14046);
  thunk_FUN_00d48444(StringLiteral_11756);
  thunk_FUN_00d48444(StringLiteral_12747);
  thunk_FUN_00d48444(PTR_DAT_033f6d68);
  thunk_FUN_00d48444(
                    Method_UnityEngine_UIElements_PointerEventBase<PointerCancelEvent>_get_isPrimary__
                    );
  thunk_FUN_00d48444(OVRVirtualKeyboard_WaitUntilKeyboardVisible_TypeInfo);
  thunk_FUN_00d48444(
                    Method_Newtonsoft_Json_Utilities_ThreadSafeStore<StructMultiKey<string,_string>,_Type>__ctor__
                    );
  thunk_FUN_00d48444(
                    Field_<PrivateImplementationDetails>_039E400B4E2D72C49D87613C187F7B3CA3AD0C1917B3BB6692C2EF7FE8C10982
                    );
  thunk_FUN_00d48444(Method_System_Collections_Specialized_ListDictionary_NodeEnumerator_Reset__);
  thunk_FUN_00d48444(StringLiteral_7980);
  thunk_FUN_00d48444(Method_System_Collections_Generic_List<UIDocument>__ctor__);
  thunk_FUN_00d48444(Method_System_Linq_Enumerable_ElementAt<string>__);
  thunk_FUN_00d48444(Method_System_Collections_Generic_List<InputBinding>__ctor__);
  thunk_FUN_00d48444(System_Collections_Generic_IEnumerable<WingedEdge>_TypeInfo);
  *(undefined1 *)(unaff_x19 + 0xb62) = 1;
  plVar8 = (long *)FUN_00da4fb8(*unaff_x22,0x11);
  in_stack_00000128 = _UNK_0293f998;
  in_stack_00000120 = _DAT_0293f990;
  lVar9 = FUN_00da4fc0(*unaff_x21,&stack0x00000120);
  FUN_016a34e8(lVar9,*unaff_x20,0);
  if (plVar8 == (long *)0x0) {
LAB_0147f9ec:
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  if ((lVar9 != 0) &&
     (lVar10 = thunk_FUN_00d6225c(lVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar10 == 0)) {
LAB_0147f9f0:
    uVar11 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar11,0);
  }
  if ((int)plVar8[3] != 0) {
    plVar8[4] = lVar9;
    puVar3 = Method_System_Linq_Enumerable_ElementAt<string>__;
    uVar12 = _UNK_0293f9a8;
    uVar11 = _DAT_0293f9a0;
    in_stack_00000118 = _UNK_0293f9a8;
    in_stack_00000110 = _DAT_0293f9a0;
    lVar9 = FUN_00da4fc0(*unaff_x21,&stack0x00000110);
    FUN_016a34e8(lVar9,*(undefined8 *)puVar3,0);
    if ((lVar9 != 0) &&
       (lVar10 = thunk_FUN_00d6225c(lVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar10 == 0))
    goto LAB_0147f9f0;
    if (1 < *(uint *)(plVar8 + 3)) {
      plVar8[5] = lVar9;
      puVar3 = System_Collections_Generic_List<MB3_MeshCombinerSingle_BoneAndBindpose>_TypeInfo;
      in_stack_00000108 = uVar12;
      in_stack_00000100 = uVar11;
      lVar9 = FUN_00da4fc0(*unaff_x21,&stack0x00000100);
      FUN_016a34e8(lVar9,*(undefined8 *)puVar3,0);
      if ((lVar9 != 0) &&
         (lVar10 = thunk_FUN_00d6225c(lVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar10 == 0))
      goto LAB_0147f9f0;
      if (2 < *(uint *)(plVar8 + 3)) {
        plVar8[6] = lVar9;
        puVar3 = Method_System_Collections_Generic_List<UIDocument>__ctor__;
        uVar12 = _UNK_0293f9f8;
        uVar11 = _DAT_0293f9f0;
        in_stack_000000f8 = _UNK_0293f9f8;
        in_stack_000000f0 = _DAT_0293f9f0;
        lVar9 = FUN_00da4fc0(*unaff_x21,&stack0x000000f0);
        FUN_016a34e8(lVar9,*(undefined8 *)puVar3,0);
        if ((lVar9 != 0) &&
           (lVar10 = thunk_FUN_00d6225c(lVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar10 == 0))
        goto LAB_0147f9f0;
        if (3 < *(uint *)(plVar8 + 3)) {
          plVar8[7] = lVar9;
          puVar3 = Method_System_Collections_Specialized_ListDictionary_NodeEnumerator_Reset__;
          in_stack_000000e8 = uVar12;
          in_stack_000000e0 = uVar11;
          lVar9 = FUN_00da4fc0(*unaff_x21,&stack0x000000e0);
          FUN_016a34e8(lVar9,*(undefined8 *)puVar3,0);
          if ((lVar9 != 0) &&
             (lVar10 = thunk_FUN_00d6225c(lVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar10 == 0))
          goto LAB_0147f9f0;
          if (4 < *(uint *)(plVar8 + 3)) {
            plVar8[8] = lVar9;
            puVar3 = PTR_DAT_033f6d68;
            uVar2 = _UNK_0293f9b8;
            uVar1 = _DAT_0293f9b0;
            in_stack_000000d8 = _UNK_0293f9b8;
            in_stack_000000d0 = _DAT_0293f9b0;
            lVar9 = FUN_00da4fc0(*unaff_x21,&stack0x000000d0);
            FUN_016a34e8(lVar9,*(undefined8 *)puVar3,0);
            if ((lVar9 != 0) &&
               (lVar10 = thunk_FUN_00d6225c(lVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar10 == 0))
            goto LAB_0147f9f0;
            if (5 < *(uint *)(plVar8 + 3)) {
              plVar8[9] = lVar9;
              puVar3 = System_Action<OVRColocationSession_Data>_TypeInfo;
              in_stack_000000c8 = uVar2;
              in_stack_000000c0 = uVar1;
              lVar9 = FUN_00da4fc0(*unaff_x21,&stack0x000000c0);
              FUN_016a34e8(lVar9,*(undefined8 *)puVar3,0);
              if ((lVar9 != 0) &&
                 (lVar10 = thunk_FUN_00d6225c(lVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar10 == 0))
              goto LAB_0147f9f0;
              if (6 < *(uint *)(plVar8 + 3)) {
                plVar8[10] = lVar9;
                puVar3 = Method_Sirenix_Serialization_MinimalBaseFormatter<Vector3Int>__ctor__;
                in_stack_000000b8 = uVar2;
                in_stack_000000b0 = uVar1;
                lVar9 = FUN_00da4fc0(*unaff_x21,&stack0x000000b0);
                FUN_016a34e8(lVar9,*(undefined8 *)puVar3,0);
                if ((lVar9 != 0) &&
                   (lVar10 = thunk_FUN_00d6225c(lVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar10 == 0)
                   ) goto LAB_0147f9f0;
                if (7 < *(uint *)(plVar8 + 3)) {
                  plVar8[0xb] = lVar9;
                  puVar3 = StringLiteral_11756;
                  uVar2 = _UNK_0293f9c8;
                  uVar1 = _DAT_0293f9c0;
                  in_stack_000000a8 = _UNK_0293f9c8;
                  in_stack_000000a0 = _DAT_0293f9c0;
                  lVar9 = FUN_00da4fc0(*unaff_x21,&stack0x000000a0);
                  FUN_016a34e8(lVar9,*(undefined8 *)puVar3,0);
                  if ((lVar9 != 0) &&
                     (lVar10 = thunk_FUN_00d6225c(lVar9,*(undefined8 *)(*plVar8 + 0x40)),
                     lVar10 == 0)) goto LAB_0147f9f0;
                  if (8 < *(uint *)(plVar8 + 3)) {
                    plVar8[0xc] = lVar9;
                    puVar3 = 
                    Method_UnityEngine_UIElements_PointerEventBase<PointerCancelEvent>_get_isPrimary__
                    ;
                    in_stack_00000098 = uVar2;
                    in_stack_00000090 = uVar1;
                    lVar9 = FUN_00da4fc0(*unaff_x21,&stack0x00000090);
                    FUN_016a34e8(lVar9,*(undefined8 *)puVar3,0);
                    if ((lVar9 != 0) &&
                       (lVar10 = thunk_FUN_00d6225c(lVar9,*(undefined8 *)(*plVar8 + 0x40)),
                       lVar10 == 0)) goto LAB_0147f9f0;
                    if (9 < *(uint *)(plVar8 + 3)) {
                      plVar8[0xd] = lVar9;
                      puVar3 = 
                      Method_Newtonsoft_Json_Utilities_ThreadSafeStore<StructMultiKey<string,_string>,_Type>__ctor__
                      ;
                      in_stack_00000088 = uVar2;
                      in_stack_00000080 = uVar1;
                      lVar9 = FUN_00da4fc0(*unaff_x21,&stack0x00000080);
                      FUN_016a34e8(lVar9,*(undefined8 *)puVar3,0);
                      if ((lVar9 != 0) &&
                         (lVar10 = thunk_FUN_00d6225c(lVar9,*(undefined8 *)(*plVar8 + 0x40)),
                         lVar10 == 0)) goto LAB_0147f9f0;
                      if (10 < *(uint *)(plVar8 + 3)) {
                        plVar8[0xe] = lVar9;
                        puVar3 = Method_System_Collections_Generic_List<InputBinding>__ctor__;
                        uVar2 = _UNK_0293f9d8;
                        uVar1 = _DAT_0293f9d0;
                        in_stack_00000078 = _UNK_0293f9d8;
                        in_stack_00000070 = _DAT_0293f9d0;
                        lVar9 = FUN_00da4fc0(*unaff_x21,&stack0x00000070);
                        FUN_016a34e8(lVar9,*(undefined8 *)puVar3,0);
                        if ((lVar9 != 0) &&
                           (lVar10 = thunk_FUN_00d6225c(lVar9,*(undefined8 *)(*plVar8 + 0x40)),
                           lVar10 == 0)) goto LAB_0147f9f0;
                        if (0xb < *(uint *)(plVar8 + 3)) {
                          plVar8[0xf] = lVar9;
                          puVar3 = 
                          Field_<PrivateImplementationDetails>_039E400B4E2D72C49D87613C187F7B3CA3AD0C1917B3BB6692C2EF7FE8C10982
                          ;
                          in_stack_00000068 = uVar2;
                          in_stack_00000060 = uVar1;
                          lVar9 = FUN_00da4fc0(*unaff_x21,&stack0x00000060);
                          FUN_016a34e8(lVar9,*(undefined8 *)puVar3,0);
                          if ((lVar9 != 0) &&
                             (lVar10 = thunk_FUN_00d6225c(lVar9,*(undefined8 *)(*plVar8 + 0x40)),
                             lVar10 == 0)) goto LAB_0147f9f0;
                          if (0xc < *(uint *)(plVar8 + 3)) {
                            plVar8[0x10] = lVar9;
                            puVar3 = PTR_DAT_033f3198;
                            in_stack_00000058 = uVar2;
                            in_stack_00000050 = uVar1;
                            lVar9 = FUN_00da4fc0(*unaff_x21,&stack0x00000050);
                            FUN_016a34e8(lVar9,*(undefined8 *)puVar3,0);
                            if ((lVar9 != 0) &&
                               (lVar10 = thunk_FUN_00d6225c(lVar9,*(undefined8 *)(*plVar8 + 0x40)),
                               lVar10 == 0)) goto LAB_0147f9f0;
                            if (0xd < *(uint *)(plVar8 + 3)) {
                              plVar8[0x11] = lVar9;
                              puVar3 = System_Collections_Generic_IEnumerable<WingedEdge>_TypeInfo;
                              in_stack_00000048 = _UNK_0293f9e8;
                              in_stack_00000040 = _DAT_0293f9e0;
                              lVar9 = FUN_00da4fc0(*unaff_x21,&stack0x00000040);
                              FUN_016a34e8(lVar9,*(undefined8 *)puVar3,0);
                              if ((lVar9 != 0) &&
                                 (lVar10 = thunk_FUN_00d6225c(lVar9,*(undefined8 *)(*plVar8 + 0x40))
                                 , lVar10 == 0)) goto LAB_0147f9f0;
                              if (0xe < *(uint *)(plVar8 + 3)) {
                                plVar8[0x12] = lVar9;
                                puVar3 = StringLiteral_14046;
                                in_stack_00000038 = uVar12;
                                in_stack_00000030 = uVar11;
                                lVar9 = FUN_00da4fc0(*unaff_x21,&stack0x00000030);
                                FUN_016a34e8(lVar9,*(undefined8 *)puVar3,0);
                                if ((lVar9 != 0) &&
                                   (lVar10 = thunk_FUN_00d6225c(lVar9,*(undefined8 *)
                                                                       (*plVar8 + 0x40)),
                                   lVar10 == 0)) goto LAB_0147f9f0;
                                if (0xf < *(uint *)(plVar8 + 3)) {
                                  plVar8[0x13] = lVar9;
                                  puVar3 = OVRVirtualKeyboard_WaitUntilKeyboardVisible_TypeInfo;
                                  in_stack_00000028 = uVar12;
                                  in_stack_00000020 = uVar11;
                                  lVar9 = FUN_00da4fc0(*unaff_x21,&stack0x00000020);
                                  FUN_016a34e8(lVar9,*(undefined8 *)puVar3,0);
                                  if ((lVar9 != 0) &&
                                     (lVar10 = thunk_FUN_00d6225c(lVar9,*(undefined8 *)
                                                                         (*plVar8 + 0x40)),
                                     lVar10 == 0)) goto LAB_0147f9f0;
                                  puVar3 = PTR_DAT_033f4eb0;
                                  if (0x10 < *(uint *)(plVar8 + 3)) {
                                    plVar8[0x14] = lVar9;
                                    **(long **)(*(long *)puVar3 + 0xb8) = (long)plVar8;
                                    if (**(long **)(*(long *)puVar3 + 0xb8) != 0) {
                                      lVar9 = FUN_00da4fb8(*(undefined8 *)StringLiteral_12507,
                                                           *(undefined4 *)
                                                            (**(long **)(*(long *)puVar3 + 0xb8) +
                                                            0x18));
                                      lVar10 = **(long **)(*(long *)puVar3 + 0xb8);
                                      (*(long **)(*(long *)puVar3 + 0xb8))[2] = lVar9;
                                      puVar7 = StringLiteral_7980;
                                      puVar6 = Method_Unity_Burst_Intrinsics_Arm_Neon_vmaxnmv_f32__;
                                      puVar5 = 
                                      Method_System_Collections_Generic_HashSet<RTHandle>_Contains__
                                      ;
                                      puVar4 = System_Threading_Timer_TimerComparer_TypeInfo;
                                      if (lVar10 != 0) {
                                        uVar11 = FUN_00da4fb8(*(undefined8 *)
                                                                                                                              
                                                  Method_Unity_Burst_Intrinsics_Arm_Neon_vmaxnmv_f32__
                                                  ,*(undefined4 *)(lVar10 + 0x18));
                                        *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x18) =
                                             uVar11;
                                        uVar11 = FUN_00da4fb8(*(undefined8 *)puVar6,0x20);
                                        FUN_016a34e8(uVar11,*(undefined8 *)puVar7,0);
                                        *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x20) =
                                             uVar11;
                                        uVar12 = FUN_00da4fb8(*(undefined8 *)puVar5,0x200f);
                                        uVar11 = DAT_0293fa98;
                                        uVar13 = 0;
                                        lVar9 = *(long *)(*(long *)puVar3 + 0xb8);
                                        *(undefined8 *)(lVar9 + 8) = uVar12;
                                        while( true ) {
                                          lVar9 = *(long *)(lVar9 + 8);
                                          if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                                            thunk_FUN_00d32864();
                                          }
                                          dVar14 = (double)thunk_FUN_00d8240c((double)(int)uVar13,
                                                                              uVar11,0);
                                          if (lVar9 == 0) break;
                                          if (*(uint *)(lVar9 + 0x18) <= uVar13) goto LAB_0147f9e8;
                                          *(float *)(lVar9 + uVar13 * 4 + 0x20) = (float)dVar14;
                                          if (uVar13 == 0x200e) {
                                            return;
                                          }
                                          uVar13 = uVar13 + 1;
                                          lVar9 = *(long *)(*(long *)puVar3 + 0xb8);
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


