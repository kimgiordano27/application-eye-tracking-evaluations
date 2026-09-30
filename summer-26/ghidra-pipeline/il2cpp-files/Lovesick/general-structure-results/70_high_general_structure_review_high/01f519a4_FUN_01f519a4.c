/*
FUNCTION_NAME: FUN_01f519a4
ENTRY_POINT: 01f519a4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;frame_behavior;keyword_support
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_21;ray_or_cast_sink_hits_3;frame_or_lifecycle_behavior;eye_or_gaze_keyword_boost_only
*/


void FUN_01f519a4(long param_1,long *param_2,long param_3)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  undefined8 uVar12;
  long *plVar13;
  undefined8 *puVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  undefined8 uVar19;
  int *piVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  if ((DAT_0378036c & 1) == 0) {
    thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<int,_bool>_Remove__);
    thunk_FUN_00d48444(
                      Method_System_Collections_ObjectModel_KeyedCollection<Type,_PropertiesToIgnore_TypePropertiesToIgnore>__ctor__
                      );
    thunk_FUN_00d48444(StringLiteral_1855);
    thunk_FUN_00d48444(StringLiteral_4510);
    thunk_FUN_00d48444(Oculus_Interaction_MAction<TeleportInteractable>_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_2619);
    thunk_FUN_00d48444(StringLiteral_3997);
    thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<int,_object>_get_Item__);
    thunk_FUN_00d48444(Method_System_Nullable<NullValueHandling>__ctor__);
    thunk_FUN_00d48444(
                      Method_UnityEngine_InputSystem_InputActionRebindingExtensions_ApplyBindingOverridesOnMatchingControls__
                      );
    thunk_FUN_00d48444(UnityEngine_InputSystem_InputManager_<>c_TypeInfo);
    thunk_FUN_00d48444(System_Nullable<Guid>_var);
    thunk_FUN_00d48444(Method_System_Threading_Tasks_Task_FromCancellation<bool>__);
    thunk_FUN_00d48444(Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__);
    thunk_FUN_00d48444(Method_System_Xml_Linq_XNamespace_Get__);
    thunk_FUN_00d48444(System_Xml_Schema_DtdValidator_TypeInfo);
    thunk_FUN_00d48444(Method_System_Collections_Generic_HashSet<Collider>_Remove__);
    thunk_FUN_00d48444(System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo)
    ;
    thunk_FUN_00d48444(Oculus_Platform_Models_HttpTransferUpdate_TypeInfo);
    thunk_FUN_00d48444(System_Linq_Expressions_Interpreter_NotInstruction_NotByte_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033f39b8);
    thunk_FUN_00d48444(StringLiteral_10573);
    DAT_0378036c = 1;
  }
  uStack_78 = 0;
  local_70 = 0;
  local_80 = 0;
  uStack_98 = 0;
  local_90 = 0;
  local_a0 = 0;
  if (param_2 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)Method_System_Collections_Generic_HashSet<Collider>_Remove__ + 300);
    if ((bVar1 <= *(byte *)(*param_2 + 300)) &&
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) ==
        *(long *)Method_System_Collections_Generic_HashSet<Collider>_Remove__)) {
      if (param_3 != 0) {
        *(long **)(param_3 + 0x58) = param_2;
        if (*(long *)(param_1 + 0x10) != 0) {
          *(long **)(*(long *)(param_1 + 0x10) + 0x48) = param_2;
          lVar8 = FUN_01e9238c(param_2,0);
          if (lVar8 != 0) {
            lVar8 = FUN_01e9238c(param_2,0);
            if ((lVar8 == 0) ||
               (lVar8 = FUN_01299a34(lVar8,*(undefined8 *)StringLiteral_1855),
               puVar4 = StringLiteral_10573,
               puVar3 = Method_System_Nullable<NullValueHandling>__ctor__,
               puVar2 = Method_System_Collections_Generic_Dictionary<int,_object>_get_Item__,
               lVar8 == 0)) goto LAB_01f522c0;
            FUN_011dcc00(lVar8,&local_c8,
                         *(undefined8 *)Oculus_Platform_Models_HttpTransferUpdate_TypeInfo);
            uStack_78 = uStack_c0;
            local_80 = local_c8;
            local_70 = local_b8;
            while (uVar9 = FUN_012c3588(&local_80,*(undefined8 *)puVar2), (uVar9 & 1) != 0) {
              lVar8 = FUN_00c4ade0(&local_80,*(undefined8 *)puVar3);
              plVar10 = (long *)FUN_01f4d3a8(param_3);
              if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              if (*(long *)(lVar8 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              uVar21 = *(undefined8 *)(*(long *)(lVar8 + 0x10) + 0x10);
              uVar12 = *(undefined8 *)(lVar8 + 0x18);
              uVar19 = *(undefined8 *)(lVar8 + 0x20);
              uVar22 = *(undefined8 *)(param_1 + 0x10);
              lVar8 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
              if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              FUN_01f5bf34(lVar8,uVar21,uVar19,uVar12,uVar22,0);
              if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              (**(code **)(*plVar10 + 0x198))(plVar10,lVar8,*(undefined8 *)(*plVar10 + 0x1a0));
            }
            FUN_012c3584(&local_80,*(undefined8 *)StringLiteral_2619);
          }
          puVar2 = StringLiteral_3997;
          lVar8 = FUN_01e92264(param_2,0);
          if (lVar8 != 0) {
            lVar8 = FUN_01e92264(param_2,0);
            if ((lVar8 == 0) ||
               (lVar8 = FUN_01299a34(lVar8,*(undefined8 *)StringLiteral_4510), lVar8 == 0))
            goto LAB_01f522c0;
            FUN_011dcc00(lVar8,&local_c8,
                         *(undefined8 *)
                          System_Linq_Expressions_Interpreter_NotInstruction_NotByte_TypeInfo);
            uStack_98 = uStack_c0;
            local_a0 = local_c8;
            local_90 = local_b8;
            while (uVar9 = FUN_012c3588(&local_a0,*(undefined8 *)puVar2), (uVar9 & 1) != 0) {
              lVar8 = FUN_00c4e758(&local_a0,
                                   *(undefined8 *)
                                    Method_UnityEngine_InputSystem_InputActionRebindingExtensions_ApplyBindingOverridesOnMatchingControls__
                                  );
              if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              if (*(long *)(lVar8 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              if (*(long *)(lVar8 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              uVar21 = *(undefined8 *)(*(long *)(lVar8 + 0x10) + 0x10);
              uVar12 = *(undefined8 *)(lVar8 + 0x20);
              uVar19 = *(undefined8 *)(lVar8 + 0x28);
              uVar22 = *(undefined8 *)(lVar8 + 0x18);
              uVar9 = FUN_01f7609c(*(long *)(lVar8 + 0x30),0);
              if ((uVar9 & 1) == 0) {
                if (*(long *)(lVar8 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da518c();
                }
                uVar23 = *(undefined8 *)(*(long *)(lVar8 + 0x30) + 0x10);
              }
              else {
                uVar23 = 0;
              }
              uVar24 = *(undefined8 *)(param_1 + 0x10);
              lVar11 = thunk_FUN_00d62348(*(undefined8 *)PTR_DAT_033f39b8);
              if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              FUN_01f4eec4(lVar11,uVar21,uVar19,uVar12,uVar22,uVar23,uVar24);
              uVar12 = FUN_01e91e58(lVar8,0);
              *(undefined8 *)(lVar11 + 0x40) = uVar12;
              plVar10 = (long *)FUN_01f4c5f8(param_3);
              if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              (**(code **)(*plVar10 + 0x198))(plVar10,lVar11,*(undefined8 *)(*plVar10 + 0x1a0));
            }
            FUN_012c3584(&local_a0,
                         *(undefined8 *)Oculus_Interaction_MAction<TeleportInteractable>_TypeInfo);
          }
          lVar8 = FUN_01e922e4(param_2,0);
          if (lVar8 != 0) {
            lVar8 = FUN_01e922e4(param_2,0);
            if ((lVar8 == 0) ||
               (lVar8 = FUN_01299a34(lVar8,*(undefined8 *)StringLiteral_4510), lVar8 == 0))
            goto LAB_01f522c0;
            FUN_011dcc00(lVar8,&local_c8,
                         *(undefined8 *)
                          System_Linq_Expressions_Interpreter_NotInstruction_NotByte_TypeInfo);
            uStack_98 = uStack_c0;
            local_a0 = local_c8;
            local_90 = local_b8;
            while (uVar9 = FUN_012c3588(&local_a0,*(undefined8 *)puVar2), (uVar9 & 1) != 0) {
              lVar8 = FUN_00c4e758(&local_a0,
                                   *(undefined8 *)
                                    Method_UnityEngine_InputSystem_InputActionRebindingExtensions_ApplyBindingOverridesOnMatchingControls__
                                  );
              if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              if (*(long *)(lVar8 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              if (*(long *)(lVar8 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              uVar21 = *(undefined8 *)(*(long *)(lVar8 + 0x10) + 0x10);
              uVar12 = *(undefined8 *)(lVar8 + 0x20);
              uVar19 = *(undefined8 *)(lVar8 + 0x28);
              uVar22 = *(undefined8 *)(lVar8 + 0x18);
              uVar9 = FUN_01f7609c(*(long *)(lVar8 + 0x30),0);
              if ((uVar9 & 1) == 0) {
                if (*(long *)(lVar8 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da518c();
                }
                uVar23 = *(undefined8 *)(*(long *)(lVar8 + 0x30) + 0x10);
              }
              else {
                uVar23 = 0;
              }
              uVar24 = *(undefined8 *)(param_1 + 0x10);
              lVar11 = thunk_FUN_00d62348(*(undefined8 *)PTR_DAT_033f39b8);
              if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              FUN_01f4eec4(lVar11,uVar21,uVar19,uVar12,uVar22,uVar23,uVar24);
              uVar12 = FUN_01e91e58(lVar8,0);
              *(undefined8 *)(lVar11 + 0x40) = uVar12;
              plVar10 = (long *)FUN_01f4c5f8(param_3);
              if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              (**(code **)(*plVar10 + 0x198))(plVar10,lVar11,*(undefined8 *)(*plVar10 + 0x1a0));
            }
            FUN_012c3584(&local_a0,
                         *(undefined8 *)Oculus_Interaction_MAction<TeleportInteractable>_TypeInfo);
          }
          lVar8 = *(long *)(param_1 + 0x10);
          uVar12 = FUN_01f4c5f8(param_3);
          if (lVar8 != 0) {
            *(undefined8 *)(lVar8 + 0x30) = uVar12;
            puVar2 = UnityEngine_InputSystem_InputManager_<>c_TypeInfo;
            if (param_2[2] != 0) {
              FUN_0129b5d0(param_2[2],&local_c8,
                           *(undefined8 *)
                            Method_System_Collections_ObjectModel_KeyedCollection<Type,_PropertiesToIgnore_TypePropertiesToIgnore>__ctor__
                          );
              uStack_e8 = uStack_c0;
              local_f0 = local_c8;
              uStack_d8 = uStack_b0;
              uStack_e0 = local_b8;
              local_d0 = local_a8;
              plVar13 = (long *)thunk_FUN_00d61fa0(*(undefined8 *)puVar2,&local_f0);
              plVar10 = (long *)
                        Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__;
              if (plVar13 == (long *)0x0) {
                return;
              }
              lVar8 = *plVar13;
              uVar9 = (ulong)*(ushort *)(lVar8 + 0x12a);
              if (uVar9 != 0) {
                piVar20 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar20 + -2) ==
                      *(long *)
                       Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__)
                  {
                    puVar14 = (undefined8 *)(lVar8 + (long)(*piVar20 + 2) * 0x10 + 0x138);
                    goto LAB_01f51fa4;
                  }
                  uVar9 = uVar9 - 1;
                  piVar20 = piVar20 + 4;
                } while (uVar9 != 0);
              }
              puVar14 = (undefined8 *)
                        FUN_00d59724(plVar13,*(long *)
                                              Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__
                                     ,2);
LAB_01f51fa4:
              puVar6 = Method_System_Xml_Linq_XNamespace_Get__;
              puVar5 = Method_System_Threading_Tasks_Task_FromCancellation<bool>__;
              puVar4 = Method_System_Collections_Generic_Dictionary<int,_bool>_Remove__;
              puVar3 = System_Xml_Schema_DtdValidator_TypeInfo;
              puVar2 = System_Nullable<Guid>_var;
              (*(code *)*puVar14)(plVar13,puVar14[1]);
LAB_01f51fd8:
              do {
                do {
                  lVar8 = *plVar13;
                  uVar9 = (ulong)*(ushort *)(lVar8 + 0x12a);
                  if (uVar9 != 0) {
                    piVar20 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar20 + -2) == *plVar10) {
                        puVar14 = (undefined8 *)(lVar8 + (long)*piVar20 * 0x10 + 0x138);
                        goto LAB_01f52024;
                      }
                      uVar9 = uVar9 - 1;
                      piVar20 = piVar20 + 4;
                    } while (uVar9 != 0);
                  }
                  puVar14 = (undefined8 *)FUN_00d59724(plVar13,*plVar10,0);
LAB_01f52024:
                  uVar9 = (*(code *)*puVar14)(plVar13,puVar14[1]);
                  if ((uVar9 & 1) == 0) {
                    return;
                  }
                  lVar11 = *plVar13;
                  lVar8 = *(long *)puVar5;
                  uVar9 = (ulong)*(ushort *)(lVar11 + 0x12a);
                  if (uVar9 != 0) {
                    piVar20 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar20 + -2) == lVar8) {
                        puVar14 = (undefined8 *)(lVar11 + (long)(*piVar20 + 1) * 0x10 + 0x138);
                        goto LAB_01f52084;
                      }
                      uVar9 = uVar9 - 1;
                      piVar20 = piVar20 + 4;
                    } while (uVar9 != 0);
                  }
                  puVar14 = (undefined8 *)FUN_00d59724(plVar13,lVar8,1);
LAB_01f52084:
                  plVar15 = (long *)(*(code *)*puVar14)(plVar13,puVar14[1]);
                  if (plVar15 == (long *)0x0) goto LAB_01f522c0;
                  if (*plVar15 != *(long *)puVar3) {
                    /* WARNING: Subroutine does not return */
                    FUN_00da544c(plVar15);
                  }
                } while (plVar15[0xc] == 0);
                FUN_0129b5d0(plVar15[0xc],&local_c8,*(undefined8 *)puVar4);
                uStack_e8 = uStack_c0;
                local_f0 = local_c8;
                uStack_d8 = uStack_b0;
                uStack_e0 = local_b8;
                local_d0 = local_a8;
                plVar16 = (long *)thunk_FUN_00d61fa0(*(undefined8 *)puVar2,&local_f0);
                if (plVar16 == (long *)0x0) break;
                do {
                  lVar8 = *plVar16;
                  uVar9 = (ulong)*(ushort *)(lVar8 + 0x12a);
                  if (uVar9 != 0) {
                    piVar20 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar20 + -2) == *plVar10) {
                        puVar14 = (undefined8 *)(lVar8 + (long)*piVar20 * 0x10 + 0x138);
                        goto LAB_01f52130;
                      }
                      uVar9 = uVar9 - 1;
                      piVar20 = piVar20 + 4;
                    } while (uVar9 != 0);
                  }
                  puVar14 = (undefined8 *)FUN_00d59724(plVar16,*plVar10,0);
LAB_01f52130:
                  uVar9 = (*(code *)*puVar14)(plVar16,puVar14[1]);
                  if ((uVar9 & 1) == 0) goto LAB_01f51fd8;
                  lVar11 = *plVar16;
                  lVar8 = *(long *)puVar5;
                  uVar9 = (ulong)*(ushort *)(lVar11 + 0x12a);
                  if (uVar9 != 0) {
                    piVar20 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar20 + -2) == lVar8) {
                        puVar14 = (undefined8 *)(lVar11 + (long)(*piVar20 + 1) * 0x10 + 0x138);
                        goto LAB_01f52190;
                      }
                      uVar9 = uVar9 - 1;
                      piVar20 = piVar20 + 4;
                    } while (uVar9 != 0);
                  }
                  puVar14 = (undefined8 *)FUN_00d59724(plVar16,lVar8,1);
LAB_01f52190:
                  plVar17 = (long *)(*(code *)*puVar14)(plVar16,puVar14[1]);
                  if (plVar17 == (long *)0x0) goto LAB_01f522c0;
                  if (*plVar17 != *(long *)puVar6) {
                    /* WARNING: Subroutine does not return */
                    FUN_00da544c(plVar17);
                  }
                  plVar18 = (long *)plVar17[6];
                  if (plVar18 == (long *)0x0) goto LAB_01f522c0;
                  iVar7 = (**(code **)(*plVar18 + 0x188))(plVar18,*(undefined8 *)(*plVar18 + 400));
                } while (iVar7 != 1);
                lVar8 = *(long *)(param_1 + 0x10);
                uVar12 = FUN_01e90f80(plVar15,0);
                if (((plVar15[2] == 0) || (lVar8 == 0)) || (*(long *)(lVar8 + 0x20) == 0)) break;
                uVar12 = FUN_01f44824(*(long *)(lVar8 + 0x20),uVar12,
                                      *(undefined8 *)(plVar15[2] + 0x10),
                                      **(undefined8 **)
                                        (*(long *)
                                          System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo
                                        + 0xb8),0,0);
                lVar11 = *(long *)(param_1 + 0x10);
                uVar19 = FUN_01e90f80(plVar17,0);
                if ((plVar17[2] == 0) || (lVar11 == 0)) break;
                uVar19 = FUN_01f48448(lVar11,uVar19,*(undefined8 *)(plVar17[2] + 0x10),
                                      **(undefined8 **)
                                        (*(long *)
                                          System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo
                                        + 0xb8),0);
                FUN_01f48568(lVar8,uVar12,uVar19);
                plVar10 = (long *)
                          Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__
                ;
              } while( true );
            }
          }
        }
      }
LAB_01f522c0:
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
  }
  lVar8 = thunk_FUN_00d48444(
                            System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo
                            );
  uVar21 = **(undefined8 **)(lVar8 + 0xb8);
  thunk_FUN_00d48444(
                    Method_UnityEngine_XR_Interaction_Toolkit_Utilities_Tweenables_TweenableVariableAsyncBase<float3>_set_Value__
                    );
  uVar12 = thunk_FUN_00d62348();
  FUN_00ac2be8();
  uVar19 = thunk_FUN_00d48444(StringLiteral_12889);
  FUN_01f730c0(uVar12,uVar19,uVar21,0);
  uVar19 = thunk_FUN_00d48444(StringLiteral_12236);
                    /* WARNING: Subroutine does not return */
  FUN_00da5038(uVar12,uVar19);
}


