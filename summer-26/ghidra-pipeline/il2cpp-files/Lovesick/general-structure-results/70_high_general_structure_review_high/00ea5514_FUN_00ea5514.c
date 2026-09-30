/*
FUNCTION_NAME: FUN_00ea5514
ENTRY_POINT: 00ea5514
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;data_collection;structure_combo
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;strong_file_logging_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_00ea5514(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  long local_80;
  long local_78;
  long local_70;
  long local_68;
  
  if ((DAT_037750cb & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_302);
    thunk_FUN_00d48444(PTR_DAT_033ea940);
    thunk_FUN_00d48444(PTR_DAT_033f5520);
    thunk_FUN_00d48444(PTR_DAT_033ec328);
    thunk_FUN_00d48444(System_ComponentModel_EditorBrowsableAttribute_TypeInfo);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vrndq_f64__);
    thunk_FUN_00d48444(StringLiteral_11347);
    thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
    thunk_FUN_00d48444(
                      Method_Meta_WitAi_Json_WitResponseArray_<GetEnumerator>d__14_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_00d48444(Method_Meta_Voice_Net_WebSockets_NativeWebSocketWrapper_RaiseClose__);
    thunk_FUN_00d48444(Method_Unity_Collections_NativeSlice<Vector3>_set_Item__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List_Enumerator<IActiveState>_MoveNext__);
    DAT_037750cb = 1;
  }
  local_70 = 0;
  local_68 = 0;
  local_80 = 0;
  local_78 = 0;
  if (*(long *)(param_1 + 0x20) != 0) {
    if (*(long *)(*(long *)(param_1 + 0x20) + 0x18) == 0) {
      lVar5 = FUN_0268fd4c(param_1,0);
      if (lVar5 == 0) goto LAB_00ea5d14;
      uVar6 = FUN_010e6254(lVar5,1,*(undefined8 *)PTR_DAT_033ec328);
      *(undefined8 *)(param_1 + 0x20) = uVar6;
    }
    if (*(long *)(param_1 + 0x28) != 0) {
      if (*(long *)(*(long *)(param_1 + 0x28) + 0x18) == 0) {
        lVar5 = FUN_0268fd4c(param_1,0);
        if (lVar5 == 0) goto LAB_00ea5d14;
        uVar6 = FUN_010e6254(lVar5,1,*(undefined8 *)
                                      Method_Unity_Burst_Intrinsics_Arm_Neon_vrndq_f64__);
        *(undefined8 *)(param_1 + 0x28) = uVar6;
      }
      if (*(long *)(param_1 + 0x30) != 0) {
        if (*(long *)(*(long *)(param_1 + 0x30) + 0x18) == 0) {
          lVar5 = FUN_0268fd4c(param_1,0);
          if (lVar5 == 0) goto LAB_00ea5d14;
          uVar6 = FUN_010e6254(lVar5,1,*(undefined8 *)
                                        System_ComponentModel_EditorBrowsableAttribute_TypeInfo);
          *(undefined8 *)(param_1 + 0x30) = uVar6;
        }
        puVar3 = StringLiteral_11347;
        puVar4 = Method_Meta_Voice_Net_WebSockets_NativeWebSocketWrapper_RaiseClose__;
        puVar2 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
        puVar1 = PTR_DAT_033f5520;
        lVar5 = *(long *)(param_1 + 0x20);
        if (lVar5 != 0) {
          if (0 < (int)*(ulong *)(lVar5 + 0x18)) {
            uVar12 = 0;
            uVar9 = *(ulong *)(lVar5 + 0x18) & 0xffffffff;
            do {
              if (uVar9 <= uVar12) goto LAB_00ea5d38;
              plVar10 = *(long **)(lVar5 + 0x20 + uVar12 * 8);
              if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              uVar9 = FUN_0268b4e0(plVar10,0,0);
              if ((uVar9 & 1) == 0) {
                if (plVar10 == (long *)0x0) goto LAB_00ea5d14;
                uVar6 = (**(code **)(*plVar10 + 0x358))(plVar10,*(undefined8 *)(*plVar10 + 0x360));
                if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                  thunk_FUN_00d32864(*(long *)puVar2);
                }
                uVar9 = FUN_0268b4e0(uVar6,0,0);
                if ((uVar9 & 1) == 0) {
                  if (*(long *)(param_1 + 0x40) == 0) goto LAB_00ea5d14;
                  uVar9 = FUN_0129eff4(*(long *)(param_1 + 0x40),uVar6,&local_68,
                                       *(undefined8 *)puVar1);
                  if ((uVar9 & 1) == 0) {
                    lVar11 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
                    if (lVar11 == 0) goto LAB_00ea5d14;
                    FUN_0267d6d8(lVar11,uVar6,0);
                    local_68 = lVar11;
                    if (*(long *)(param_1 + 0x40) == 0) goto LAB_00ea5d14;
                    FUN_0129a054(*(long *)(param_1 + 0x40),uVar6,lVar11,
                                 *(undefined8 *)PTR_DAT_033ea940);
                  }
                  if (local_68 == 0) goto LAB_00ea5d14;
                  FUN_0267f088(local_68,*(undefined8 *)puVar4,*(undefined4 *)(param_1 + 0x18),0);
                  (**(code **)(*plVar10 + 0x348))
                            (plVar10,local_68,*(undefined8 *)(*plVar10 + 0x350));
                }
                else {
                  uVar6 = FUN_0268b6ac(plVar10,0);
                  plVar10 = (long *)thunk_FUN_00d93c64(plVar10,0);
                  if (plVar10 == (long *)0x0) goto LAB_00ea5d14;
                  uVar7 = (**(code **)(*plVar10 + 0x1b8))(plVar10,*(undefined8 *)(*plVar10 + 0x1c0))
                  ;
                  uVar6 = FUN_0160073c(*(undefined8 *)
                                        Method_Meta_WitAi_Json_WitResponseArray_<GetEnumerator>d__14_System_Collections_IEnumerator_Reset__
                                       ,uVar6,*(undefined8 *)
                                               Method_System_Collections_Generic_List_Enumerator<IActiveState>_MoveNext__
                                       ,uVar7,0);
                  if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
                    thunk_FUN_00d32864(*(long *)StringLiteral_302);
                  }
                  FUN_02661754(uVar6,0);
                }
              }
              uVar9 = (ulong)*(uint *)(lVar5 + 0x18);
              uVar12 = uVar12 + 1;
            } while ((long)uVar12 < (long)(int)*(uint *)(lVar5 + 0x18));
          }
          lVar5 = *(long *)(param_1 + 0x28);
          if (lVar5 != 0) {
            if (0 < (int)*(ulong *)(lVar5 + 0x18)) {
              uVar12 = 0;
              uVar9 = *(ulong *)(lVar5 + 0x18) & 0xffffffff;
              do {
                if (uVar9 <= uVar12) goto LAB_00ea5d38;
                lVar11 = *(long *)(lVar5 + 0x20 + uVar12 * 8);
                if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                uVar9 = FUN_0268b4e0(lVar11,0,0);
                if ((uVar9 & 1) == 0) {
                  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_00da518c();
                  }
                  uVar6 = FUN_024c745c(lVar11,0);
                  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                  }
                  uVar9 = FUN_0268b4e0(uVar6,0,0);
                  if ((uVar9 & 1) == 0) {
                    if (*(long *)(param_1 + 0x40) == 0) goto LAB_00ea5d14;
                    /* catch() { ... } // from try @ 00ea59c0 with catch @ 00ea58f8 */
                    uVar9 = FUN_0129eff4(*(long *)(param_1 + 0x40),uVar6,&local_70,
                                         *(undefined8 *)puVar1);
                    if ((uVar9 & 1) == 0) {
                      lVar8 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
                      if (lVar8 == 0) goto LAB_00ea5d14;
                    /* try { // try from 00ea5910 to 00fa59bf has its CatchHandler @ 00ea59c0 */
                      FUN_0267d6d8(lVar8,uVar6,0);
                      local_70 = lVar8;
                      if (*(long *)(param_1 + 0x40) == 0) goto LAB_00ea5d14;
                      FUN_0129a054(*(long *)(param_1 + 0x40),uVar6,lVar8,
                                   *(undefined8 *)PTR_DAT_033ea940);
                    }
                    if ((local_70 == 0) ||
                       (FUN_0267f088(local_70,*(undefined8 *)puVar4,*(undefined4 *)(param_1 + 0x18),
                                     0), lVar11 == 0)) goto LAB_00ea5d14;
                    FUN_024c7470(lVar11,local_70,0);
                  }
                }
                uVar9 = (ulong)*(uint *)(lVar5 + 0x18);
                uVar12 = uVar12 + 1;
              } while ((long)uVar12 < (long)(int)*(uint *)(lVar5 + 0x18));
            }
            puVar3 = Method_Unity_Collections_NativeSlice<Vector3>_set_Item__;
            lVar5 = *(long *)(param_1 + 0x30);
            if (lVar5 != 0) {
              if (0 < (int)*(ulong *)(lVar5 + 0x18)) {
                uVar12 = 0;
                uVar9 = *(ulong *)(lVar5 + 0x18) & 0xffffffff;
                do {
                  if (uVar9 <= uVar12) goto LAB_00ea5d38;
                  lVar11 = *(long *)(lVar5 + 0x20 + uVar12 * 8);
                  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                  }
                  uVar9 = FUN_0268b4e0(lVar11,0,0);
                  if ((uVar9 & 1) == 0) {
                    if (lVar11 == 0) goto LAB_00ea5d14;
                    uVar6 = *(undefined8 *)(lVar11 + 0x160);
                    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                      thunk_FUN_00d32864();
                    }
                    uVar9 = FUN_0268b4e0(uVar6,0,0);
                    if ((uVar9 & 1) == 0) {
                      if (*(long *)(param_1 + 0x40) == 0) goto LAB_00ea5d14;
                      uVar9 = FUN_0129eff4(*(long *)(param_1 + 0x40),uVar6,&local_78,
                                           *(undefined8 *)puVar1);
                      if ((uVar9 & 1) == 0) {
                        lVar8 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_11347);
                        if (lVar8 == 0) goto LAB_00ea5d14;
                        FUN_0267d6d8(lVar8,uVar6,0);
                        local_78 = lVar8;
                        if (*(long *)(param_1 + 0x40) == 0) goto LAB_00ea5d14;
                        FUN_0129a054(*(long *)(param_1 + 0x40),uVar6,lVar8,
                                     *(undefined8 *)PTR_DAT_033ea940);
                      }
                      if (local_78 == 0) goto LAB_00ea5d14;
                      FUN_0267f088(local_78,*(undefined8 *)puVar3,8,0);
                      *(long *)(lVar11 + 0x160) = local_78;
                    }
                    else {
                      uVar6 = FUN_0268b6ac(lVar11,0);
                      plVar10 = (long *)thunk_FUN_00d93c64(lVar11,0);
                      if (plVar10 == (long *)0x0) goto LAB_00ea5d14;
                      uVar7 = (**(code **)(*plVar10 + 0x1b8))
                                        (plVar10,*(undefined8 *)(*plVar10 + 0x1c0));
                      uVar6 = FUN_0160073c(*(undefined8 *)
                                            Method_Meta_WitAi_Json_WitResponseArray_<GetEnumerator>d__14_System_Collections_IEnumerator_Reset__
                                           ,uVar6,*(undefined8 *)
                                                                                                      
                                                  Method_System_Collections_Generic_List_Enumerator<IActiveState>_MoveNext__
                                           ,uVar7,0);
                      if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
                        thunk_FUN_00d32864(*(long *)StringLiteral_302);
                      }
                      FUN_02661754(uVar6,0);
                    }
                  }
                  uVar9 = (ulong)*(uint *)(lVar5 + 0x18);
                  uVar12 = uVar12 + 1;
                } while ((long)uVar12 < (long)(int)*(uint *)(lVar5 + 0x18));
              }
              uVar6 = *(undefined8 *)(param_1 + 0x38);
              if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              uVar12 = FUN_0268b5e4(uVar6,0);
              puVar2 = StringLiteral_11347;
              if (((uVar12 & 1) == 0) || (uVar12 = FUN_0269e56c(0), (uVar12 & 1) == 0)) {
                return;
              }
              lVar5 = *(long *)(param_1 + 0x38);
              if (lVar5 != 0) {
                lVar11 = 4;
                while (lVar5 = FUN_026688d4(lVar5,0), lVar5 != 0) {
                  uVar12 = lVar11 - 4;
                  if ((long)*(int *)(lVar5 + 0x18) <= (long)uVar12) {
                    return;
                  }
                  if (*(long *)(param_1 + 0x38) == 0) break;
                  lVar8 = *(long *)(param_1 + 0x40);
                  lVar5 = FUN_026688d4(*(long *)(param_1 + 0x38),0);
                  if (lVar5 == 0) break;
                  if (*(uint *)(lVar5 + 0x18) <= uVar12) goto LAB_00ea5d38;
                  if (lVar8 == 0) break;
                  uVar9 = FUN_0129eff4(lVar8,*(undefined8 *)(lVar5 + lVar11 * 8),&local_80,
                                       *(undefined8 *)puVar1);
                  if ((uVar9 & 1) == 0) {
                    if ((*(long *)(param_1 + 0x38) == 0) ||
                       (lVar5 = FUN_026688d4(*(long *)(param_1 + 0x38),0), lVar5 == 0)) break;
                    if (*(uint *)(lVar5 + 0x18) <= uVar12) {
LAB_00ea5d38:
                    /* WARNING: Subroutine does not return */
                      FUN_00da5194();
                    }
                    uVar6 = *(undefined8 *)(lVar5 + lVar11 * 8);
                    lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                    if (lVar5 == 0) break;
                    FUN_0267d6d8(lVar5,uVar6,0);
                    local_80 = lVar5;
                    if (*(long *)(param_1 + 0x38) == 0) break;
                    lVar8 = *(long *)(param_1 + 0x40);
                    lVar5 = FUN_026688d4(*(long *)(param_1 + 0x38),0);
                    if (lVar5 == 0) break;
                    if (*(uint *)(lVar5 + 0x18) <= uVar12) goto LAB_00ea5d38;
                    if (lVar8 == 0) break;
                    FUN_0129a054(lVar8,*(undefined8 *)(lVar5 + lVar11 * 8),local_80,
                                 *(undefined8 *)PTR_DAT_033ea940);
                  }
                  if (local_80 == 0) break;
                  FUN_0267f088(local_80,*(undefined8 *)puVar4,*(undefined4 *)(param_1 + 0x18),0);
                  if ((*(long *)(param_1 + 0x38) == 0) ||
                     (plVar10 = (long *)FUN_026688d4(*(long *)(param_1 + 0x38),0), lVar5 = local_80,
                     plVar10 == (long *)0x0)) break;
                  if ((local_80 != 0) &&
                     (lVar8 = thunk_FUN_00d6225c(local_80,*(undefined8 *)(*plVar10 + 0x40)),
                     lVar8 == 0)) {
                    uVar6 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
                    FUN_00da5038(uVar6,0);
                  }
                  if (*(uint *)(plVar10 + 3) <= uVar12) goto LAB_00ea5d38;
                  plVar10[lVar11] = lVar5;
                  lVar5 = *(long *)(param_1 + 0x38);
                  lVar11 = lVar11 + 1;
                  if (lVar5 == 0) break;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_00ea5d14:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


