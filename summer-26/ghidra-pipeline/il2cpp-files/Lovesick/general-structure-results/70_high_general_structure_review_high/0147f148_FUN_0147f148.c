/*
FUNCTION_NAME: FUN_0147f148
ENTRY_POINT: 0147f148
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0147f148(void)

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
  ulong uVar13;
  double dVar14;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  puVar5 = StringLiteral_12747;
  puVar4 = 
  Method_System_Collections_Generic_List_Enumerator<BodyPoseComparerActiveState_JointComparerConfig>_MoveNext__
  ;
  puVar3 = PTR_DAT_033f4940;
  if ((DAT_03776b62 & 1) == 0) {
    thunk_FUN_00d48444(PTR_DAT_033f4940);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List_Enumerator<BodyPoseComparerActiveState_JointComparerConfig>_MoveNext__
                      );
    thunk_FUN_00d48444(StringLiteral_12507);
    thunk_FUN_00d48444(PTR_DAT_033f4eb0);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vmaxnmv_f32__);
    thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
    thunk_FUN_00d48444(Method_System_Collections_Generic_HashSet<RTHandle>_Contains__);
    thunk_FUN_00d48444(PTR_DAT_033f3198);
    thunk_FUN_00d48444(
                      System_Collections_Generic_List<MB3_MeshCombinerSingle_BoneAndBindpose>_TypeInfo
                      );
    thunk_FUN_00d48444(Method_Sirenix_Serialization_MinimalBaseFormatter<Vector3Int>__ctor__);
    thunk_FUN_00d48444(System_Action<OVRColocationSession_Data>_TypeInfo);
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
    DAT_03776b62 = 1;
  }
  plVar8 = (long *)FUN_00da4fb8(*(undefined8 *)puVar3,0x11);
  uStack_48 = _UNK_0293f998;
  local_50 = _DAT_0293f990;
  lVar9 = FUN_00da4fc0(*(undefined8 *)puVar4,&local_50);
  FUN_016a34e8(lVar9,*(undefined8 *)puVar5,0);
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
    uStack_58 = _UNK_0293f9a8;
    local_60 = _DAT_0293f9a0;
    lVar9 = FUN_00da4fc0(*(undefined8 *)puVar4,&local_60);
    FUN_016a34e8(lVar9,*(undefined8 *)puVar3,0);
    if ((lVar9 != 0) &&
       (lVar10 = thunk_FUN_00d6225c(lVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar10 == 0))
    goto LAB_0147f9f0;
    if (1 < *(uint *)(plVar8 + 3)) {
      plVar8[5] = lVar9;
      puVar3 = System_Collections_Generic_List<MB3_MeshCombinerSingle_BoneAndBindpose>_TypeInfo;
      uStack_68 = uVar12;
      local_70 = uVar11;
      lVar9 = FUN_00da4fc0(*(undefined8 *)puVar4,&local_70);
      FUN_016a34e8(lVar9,*(undefined8 *)puVar3,0);
      if ((lVar9 != 0) &&
         (lVar10 = thunk_FUN_00d6225c(lVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar10 == 0))
      goto LAB_0147f9f0;
      if (2 < *(uint *)(plVar8 + 3)) {
        plVar8[6] = lVar9;
        puVar3 = Method_System_Collections_Generic_List<UIDocument>__ctor__;
        uVar12 = _UNK_0293f9f8;
        uVar11 = _DAT_0293f9f0;
        uStack_78 = _UNK_0293f9f8;
        local_80 = _DAT_0293f9f0;
        lVar9 = FUN_00da4fc0(*(undefined8 *)puVar4,&local_80);
        FUN_016a34e8(lVar9,*(undefined8 *)puVar3,0);
        if ((lVar9 != 0) &&
           (lVar10 = thunk_FUN_00d6225c(lVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar10 == 0))
        goto LAB_0147f9f0;
        if (3 < *(uint *)(plVar8 + 3)) {
          plVar8[7] = lVar9;
          puVar3 = Method_System_Collections_Specialized_ListDictionary_NodeEnumerator_Reset__;
          uStack_88 = uVar12;
          local_90 = uVar11;
          lVar9 = FUN_00da4fc0(*(undefined8 *)puVar4,&local_90);
          FUN_016a34e8(lVar9,*(undefined8 *)puVar3,0);
          if ((lVar9 != 0) &&
             (lVar10 = thunk_FUN_00d6225c(lVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar10 == 0))
          goto LAB_0147f9f0;
          if (4 < *(uint *)(plVar8 + 3)) {
            plVar8[8] = lVar9;
            puVar3 = PTR_DAT_033f6d68;
            uVar2 = _UNK_0293f9b8;
            uVar1 = _DAT_0293f9b0;
            uStack_98 = _UNK_0293f9b8;
            local_a0 = _DAT_0293f9b0;
            lVar9 = FUN_00da4fc0(*(undefined8 *)puVar4,&local_a0);
            FUN_016a34e8(lVar9,*(undefined8 *)puVar3,0);
            if ((lVar9 != 0) &&
               (lVar10 = thunk_FUN_00d6225c(lVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar10 == 0))
            goto LAB_0147f9f0;
            if (5 < *(uint *)(plVar8 + 3)) {
              plVar8[9] = lVar9;
              puVar3 = System_Action<OVRColocationSession_Data>_TypeInfo;
              uStack_a8 = uVar2;
              local_b0 = uVar1;
              lVar9 = FUN_00da4fc0(*(undefined8 *)puVar4,&local_b0);
              FUN_016a34e8(lVar9,*(undefined8 *)puVar3,0);
              if ((lVar9 != 0) &&
                 (lVar10 = thunk_FUN_00d6225c(lVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar10 == 0))
              goto LAB_0147f9f0;
              if (6 < *(uint *)(plVar8 + 3)) {
                plVar8[10] = lVar9;
                puVar3 = Method_Sirenix_Serialization_MinimalBaseFormatter<Vector3Int>__ctor__;
                uStack_b8 = uVar2;
                local_c0 = uVar1;
                lVar9 = FUN_00da4fc0(*(undefined8 *)puVar4,&local_c0);
                FUN_016a34e8(lVar9,*(undefined8 *)puVar3,0);
                if ((lVar9 != 0) &&
                   (lVar10 = thunk_FUN_00d6225c(lVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar10 == 0)
                   ) goto LAB_0147f9f0;
                if (7 < *(uint *)(plVar8 + 3)) {
                  plVar8[0xb] = lVar9;
                  puVar3 = StringLiteral_11756;
                  uVar2 = _UNK_0293f9c8;
                  uVar1 = _DAT_0293f9c0;
                  uStack_c8 = _UNK_0293f9c8;
                  local_d0 = _DAT_0293f9c0;
                  lVar9 = FUN_00da4fc0(*(undefined8 *)puVar4,&local_d0);
                  FUN_016a34e8(lVar9,*(undefined8 *)puVar3,0);
                  if ((lVar9 != 0) &&
                     (lVar10 = thunk_FUN_00d6225c(lVar9,*(undefined8 *)(*plVar8 + 0x40)),
                     lVar10 == 0)) goto LAB_0147f9f0;
                  if (8 < *(uint *)(plVar8 + 3)) {
                    plVar8[0xc] = lVar9;
                    puVar3 = 
                    Method_UnityEngine_UIElements_PointerEventBase<PointerCancelEvent>_get_isPrimary__
                    ;
                    uStack_d8 = uVar2;
                    local_e0 = uVar1;
                    lVar9 = FUN_00da4fc0(*(undefined8 *)puVar4,&local_e0);
                    FUN_016a34e8(lVar9,*(undefined8 *)puVar3,0);
                    if ((lVar9 != 0) &&
                       (lVar10 = thunk_FUN_00d6225c(lVar9,*(undefined8 *)(*plVar8 + 0x40)),
                       lVar10 == 0)) goto LAB_0147f9f0;
                    if (9 < *(uint *)(plVar8 + 3)) {
                      plVar8[0xd] = lVar9;
                      puVar3 = 
                      Method_Newtonsoft_Json_Utilities_ThreadSafeStore<StructMultiKey<string,_string>,_Type>__ctor__
                      ;
                      uStack_e8 = uVar2;
                      local_f0 = uVar1;
                      lVar9 = FUN_00da4fc0(*(undefined8 *)puVar4,&local_f0);
                      FUN_016a34e8(lVar9,*(undefined8 *)puVar3,0);
                      if ((lVar9 != 0) &&
                         (lVar10 = thunk_FUN_00d6225c(lVar9,*(undefined8 *)(*plVar8 + 0x40)),
                         lVar10 == 0)) goto LAB_0147f9f0;
                      if (10 < *(uint *)(plVar8 + 3)) {
                        plVar8[0xe] = lVar9;
                        puVar3 = Method_System_Collections_Generic_List<InputBinding>__ctor__;
                        uVar2 = _UNK_0293f9d8;
                        uVar1 = _DAT_0293f9d0;
                        uStack_f8 = _UNK_0293f9d8;
                        local_100 = _DAT_0293f9d0;
                        lVar9 = FUN_00da4fc0(*(undefined8 *)puVar4,&local_100);
                        FUN_016a34e8(lVar9,*(undefined8 *)puVar3,0);
                        if ((lVar9 != 0) &&
                           (lVar10 = thunk_FUN_00d6225c(lVar9,*(undefined8 *)(*plVar8 + 0x40)),
                           lVar10 == 0)) goto LAB_0147f9f0;
                        if (0xb < *(uint *)(plVar8 + 3)) {
                          plVar8[0xf] = lVar9;
                          puVar3 = 
                          Field_<PrivateImplementationDetails>_039E400B4E2D72C49D87613C187F7B3CA3AD0C1917B3BB6692C2EF7FE8C10982
                          ;
                          uStack_108 = uVar2;
                          local_110 = uVar1;
                          lVar9 = FUN_00da4fc0(*(undefined8 *)puVar4,&local_110);
                          FUN_016a34e8(lVar9,*(undefined8 *)puVar3,0);
                          if ((lVar9 != 0) &&
                             (lVar10 = thunk_FUN_00d6225c(lVar9,*(undefined8 *)(*plVar8 + 0x40)),
                             lVar10 == 0)) goto LAB_0147f9f0;
                          if (0xc < *(uint *)(plVar8 + 3)) {
                            plVar8[0x10] = lVar9;
                            puVar3 = PTR_DAT_033f3198;
                            uStack_118 = uVar2;
                            local_120 = uVar1;
                            lVar9 = FUN_00da4fc0(*(undefined8 *)puVar4,&local_120);
                            FUN_016a34e8(lVar9,*(undefined8 *)puVar3,0);
                            if ((lVar9 != 0) &&
                               (lVar10 = thunk_FUN_00d6225c(lVar9,*(undefined8 *)(*plVar8 + 0x40)),
                               lVar10 == 0)) goto LAB_0147f9f0;
                            if (0xd < *(uint *)(plVar8 + 3)) {
                              plVar8[0x11] = lVar9;
                              puVar3 = System_Collections_Generic_IEnumerable<WingedEdge>_TypeInfo;
                              uStack_128 = _UNK_0293f9e8;
                              local_130 = _DAT_0293f9e0;
                              lVar9 = FUN_00da4fc0(*(undefined8 *)puVar4,&local_130);
                              FUN_016a34e8(lVar9,*(undefined8 *)puVar3,0);
                              if ((lVar9 != 0) &&
                                 (lVar10 = thunk_FUN_00d6225c(lVar9,*(undefined8 *)(*plVar8 + 0x40))
                                 , lVar10 == 0)) goto LAB_0147f9f0;
                              if (0xe < *(uint *)(plVar8 + 3)) {
                                plVar8[0x12] = lVar9;
                                puVar3 = StringLiteral_14046;
                                uStack_138 = uVar12;
                                local_140 = uVar11;
                                lVar9 = FUN_00da4fc0(*(undefined8 *)puVar4,&local_140);
                                FUN_016a34e8(lVar9,*(undefined8 *)puVar3,0);
                                if ((lVar9 != 0) &&
                                   (lVar10 = thunk_FUN_00d6225c(lVar9,*(undefined8 *)
                                                                       (*plVar8 + 0x40)),
                                   lVar10 == 0)) goto LAB_0147f9f0;
                                if (0xf < *(uint *)(plVar8 + 3)) {
                                  plVar8[0x13] = lVar9;
                                  puVar3 = OVRVirtualKeyboard_WaitUntilKeyboardVisible_TypeInfo;
                                  uStack_148 = uVar12;
                                  local_150 = uVar11;
                                  lVar9 = FUN_00da4fc0(*(undefined8 *)puVar4,&local_150);
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


