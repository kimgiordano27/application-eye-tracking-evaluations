/*
FUNCTION_NAME: Autohand.Demo.XRAutoHandAxisFingerBender$$LateUpdate
ENTRY_POINT: 00ea5db8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;data_collection;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_3;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Autohand_Demo_XRAutoHandAxisFingerBender__LateUpdate(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *plVar12;
  ulong uVar13;
  long in_stack_00000008;
  long in_stack_00000010;
  long in_stack_00000018;
  
  thunk_FUN_00d48444();
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
  *(undefined1 *)(unaff_x21 + 0xcc) = 1;
  in_stack_00000010 = 0;
  in_stack_00000018 = 0;
  in_stack_00000008 = 0;
  if (unaff_x20 != 0) {
    lVar5 = FUN_010e6254();
    lVar6 = FUN_010e6254();
    lVar7 = FUN_010e6254();
    puVar2 = Method_System_Collections_Generic_List_Enumerator<IActiveState>_MoveNext__;
    puVar1 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
    if (lVar5 != 0) {
      if (0 < (int)*(ulong *)(lVar5 + 0x18)) {
        uVar13 = 0;
        uVar11 = *(ulong *)(lVar5 + 0x18) & 0xffffffff;
        do {
          if (uVar11 <= uVar13) goto LAB_00ea63e8;
          plVar12 = *(long **)(lVar5 + 0x20 + uVar13 * 8);
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar11 = FUN_0268b4e0(plVar12,0,0);
          if ((uVar11 & 1) == 0) {
            if (plVar12 == (long *)0x0) goto LAB_00ea63e4;
            uVar8 = (**(code **)(*plVar12 + 0x358))(plVar12,*(undefined8 *)(*plVar12 + 0x360));
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_00d32864(*(long *)puVar1);
            }
            uVar11 = FUN_0268b4e0(uVar8,0,0);
            if ((uVar11 & 1) == 0) {
              if (*(long *)(unaff_x19 + 0x40) == 0) goto LAB_00ea63e4;
              uVar11 = FUN_0129eff4(*(long *)(unaff_x19 + 0x40),uVar8,&stack0x00000018,
                                    *(undefined8 *)PTR_DAT_033f5520);
              if ((uVar11 & 1) == 0) {
                lVar10 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_11347);
                if (lVar10 == 0) goto LAB_00ea63e4;
                FUN_0267d6d8(lVar10,uVar8,0);
                in_stack_00000018 = lVar10;
                if (*(long *)(unaff_x19 + 0x40) == 0) goto LAB_00ea63e4;
                FUN_0129a054(*(long *)(unaff_x19 + 0x40),uVar8,lVar10,
                             *(undefined8 *)PTR_DAT_033ea940);
              }
              if (in_stack_00000018 == 0) goto LAB_00ea63e4;
              FUN_0267f088(in_stack_00000018,
                           *(undefined8 *)
                            Method_Meta_Voice_Net_WebSockets_NativeWebSocketWrapper_RaiseClose__,
                           *(undefined4 *)(unaff_x19 + 0x18),0);
              (**(code **)(*plVar12 + 0x348))
                        (plVar12,in_stack_00000018,*(undefined8 *)(*plVar12 + 0x350));
            }
            else {
              uVar8 = FUN_0268b6ac(plVar12,0);
              plVar12 = (long *)thunk_FUN_00d93c64(plVar12,0);
              if (plVar12 == (long *)0x0) goto LAB_00ea63e4;
              uVar9 = (**(code **)(*plVar12 + 0x1b8))(plVar12,*(undefined8 *)(*plVar12 + 0x1c0));
              uVar8 = FUN_0160073c(*(undefined8 *)
                                    Method_Meta_WitAi_Json_WitResponseArray_<GetEnumerator>d__14_System_Collections_IEnumerator_Reset__
                                   ,uVar8,*(undefined8 *)puVar2,uVar9,0);
              if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
                thunk_FUN_00d32864(*(long *)StringLiteral_302);
              }
              FUN_02661754(uVar8,0);
            }
          }
          uVar11 = (ulong)*(uint *)(lVar5 + 0x18);
          uVar13 = uVar13 + 1;
        } while ((long)uVar13 < (long)(int)*(uint *)(lVar5 + 0x18));
      }
      puVar4 = 
      Method_Meta_WitAi_Json_WitResponseArray_<GetEnumerator>d__14_System_Collections_IEnumerator_Reset__
      ;
      if (lVar6 != 0) {
        if (0 < (int)*(ulong *)(lVar6 + 0x18)) {
          uVar13 = 0;
          uVar11 = *(ulong *)(lVar6 + 0x18) & 0xffffffff;
          do {
            if (uVar11 <= uVar13) goto LAB_00ea63e8;
            lVar5 = *(long *)(lVar6 + 0x20 + uVar13 * 8);
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar11 = FUN_0268b4e0(lVar5,0,0);
            if ((uVar11 & 1) == 0) {
              if (lVar5 == 0) goto LAB_00ea63e4;
              uVar8 = FUN_024c745c(lVar5,0);
              if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                thunk_FUN_00d32864(*(long *)puVar1);
              }
              uVar11 = FUN_0268b4e0(uVar8,0,0);
              if ((uVar11 & 1) == 0) {
                if (*(long *)(unaff_x19 + 0x40) == 0) goto LAB_00ea63e4;
                uVar11 = FUN_0129eff4(*(long *)(unaff_x19 + 0x40),uVar8,&stack0x00000010,
                                      *(undefined8 *)PTR_DAT_033f5520);
                if ((uVar11 & 1) == 0) {
                  lVar10 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_11347);
                  if (lVar10 == 0) goto LAB_00ea63e4;
                  FUN_0267d6d8(lVar10,uVar8,0);
                  in_stack_00000010 = lVar10;
                  if (*(long *)(unaff_x19 + 0x40) == 0) goto LAB_00ea63e4;
                  FUN_0129a054(*(long *)(unaff_x19 + 0x40),uVar8,lVar10,
                               *(undefined8 *)PTR_DAT_033ea940);
                }
                if (in_stack_00000010 == 0) goto LAB_00ea63e4;
                FUN_0267f088(in_stack_00000010,
                             *(undefined8 *)
                              Method_Meta_Voice_Net_WebSockets_NativeWebSocketWrapper_RaiseClose__,
                             *(undefined4 *)(unaff_x19 + 0x18),0);
                FUN_024c7470(lVar5,in_stack_00000010,0);
              }
              else {
                uVar8 = FUN_0268b6ac(lVar5,0);
                plVar12 = (long *)thunk_FUN_00d93c64(lVar5,0);
                if (plVar12 == (long *)0x0) goto LAB_00ea63e4;
                uVar9 = (**(code **)(*plVar12 + 0x1b8))(plVar12,*(undefined8 *)(*plVar12 + 0x1c0));
                uVar8 = FUN_0160073c(*(undefined8 *)puVar4,uVar8,*(undefined8 *)puVar2,uVar9,0);
                if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
                  thunk_FUN_00d32864(*(long *)StringLiteral_302);
                }
                FUN_02661754(uVar8,0);
              }
            }
            uVar11 = (ulong)*(uint *)(lVar6 + 0x18);
            uVar13 = uVar13 + 1;
          } while ((long)uVar13 < (long)(int)*(uint *)(lVar6 + 0x18));
        }
        puVar3 = Method_Unity_Collections_NativeSlice<Vector3>_set_Item__;
        if (lVar7 != 0) {
          if (0 < (int)*(ulong *)(lVar7 + 0x18)) {
            uVar13 = 0;
            uVar11 = *(ulong *)(lVar7 + 0x18) & 0xffffffff;
            do {
              if (uVar11 <= uVar13) {
LAB_00ea63e8:
                    /* WARNING: Subroutine does not return */
                FUN_00da5194();
              }
              lVar5 = *(long *)(lVar7 + 0x20 + uVar13 * 8);
              if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              uVar11 = FUN_0268b4e0(lVar5,0,0);
              if ((uVar11 & 1) == 0) {
                if (lVar5 == 0) goto LAB_00ea63e4;
                uVar8 = *(undefined8 *)(lVar5 + 0x160);
                if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                uVar11 = FUN_0268b4e0(uVar8,0,0);
                if ((uVar11 & 1) == 0) {
                  if (*(long *)(unaff_x19 + 0x40) == 0) goto LAB_00ea63e4;
                  uVar11 = FUN_0129eff4(*(long *)(unaff_x19 + 0x40),uVar8,&stack0x00000008,
                                        *(undefined8 *)PTR_DAT_033f5520);
                  if ((uVar11 & 1) == 0) {
                    lVar6 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_11347);
                    if (lVar6 == 0) goto LAB_00ea63e4;
                    FUN_0267d6d8(lVar6,uVar8,0);
                    in_stack_00000008 = lVar6;
                    if (*(long *)(unaff_x19 + 0x40) == 0) goto LAB_00ea63e4;
                    FUN_0129a054(*(long *)(unaff_x19 + 0x40),uVar8,lVar6,
                                 *(undefined8 *)PTR_DAT_033ea940);
                  }
                  if (in_stack_00000008 == 0) goto LAB_00ea63e4;
                  FUN_0267f088(in_stack_00000008,*(undefined8 *)puVar3,8,0);
                  *(long *)(lVar5 + 0x160) = in_stack_00000008;
                }
                else {
                  uVar8 = FUN_0268b6ac(lVar5,0);
                  plVar12 = (long *)thunk_FUN_00d93c64(lVar5,0);
                  if (plVar12 == (long *)0x0) goto LAB_00ea63e4;
                  uVar9 = (**(code **)(*plVar12 + 0x1b8))(plVar12,*(undefined8 *)(*plVar12 + 0x1c0))
                  ;
                  uVar8 = FUN_0160073c(*(undefined8 *)puVar4,uVar8,*(undefined8 *)puVar2,uVar9,0);
                  if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
                    thunk_FUN_00d32864(*(long *)StringLiteral_302);
                  }
                  FUN_02661754(uVar8,0);
                }
              }
              uVar11 = (ulong)*(uint *)(lVar7 + 0x18);
              uVar13 = uVar13 + 1;
            } while ((long)uVar13 < (long)(int)*(uint *)(lVar7 + 0x18));
          }
          return;
        }
      }
    }
  }
LAB_00ea63e4:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


