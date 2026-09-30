/*
FUNCTION_NAME: FUN_02417a78
ENTRY_POINT: 02417a78
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;ui_interaction;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;ray_or_cast_sink_hits_3;ui_or_gameplay_sink_hits_8;telemetry_or_network_hits_3;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_02417a78(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  puVar2 = OVR_OpenVR_CVRCompositor_TypeInfo;
  if ((DAT_0378231d & 1) == 0) {
    thunk_FUN_00d48444(OVR_OpenVR_CVRCompositor_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_9184);
    thunk_FUN_00d48444(Oculus_Interaction_Input_HandPhysicsCapsules_<>c_TypeInfo);
    thunk_FUN_00d48444(Method_Meta_WitAi_WitRequest_<>c__DisplayClass99_0_<HandleResponse>b__0__);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List<FocusController_FocusedElement>_get_Count__
                      );
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vsri_n_u8__);
    thunk_FUN_00d48444(Method_UnityEngine_UIElements_BaseField<bool>_get_value__);
    thunk_FUN_00d48444(UnityEngine_XR_ARSubsystems_XROcclusionSubsystem_var);
    thunk_FUN_00d48444(StringLiteral_6695);
    thunk_FUN_00d48444(System_Linq_Expressions_Interpreter_InstructionArray_DebugView_TypeInfo);
    thunk_FUN_00d48444(Method_System_Collections_Generic_KeyValuePair<string,_GSTU_Cell>_get_Value__
                      );
    thunk_FUN_00d48444(PTR_DAT_033f5570);
    thunk_FUN_00d48444(
                      Method_RuntimeRopeGeneratorUse_<Start>d__2_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_00d48444(
                      Method_UnityEngine_InputSystem_InputActionSetupExtensions_ControlSchemeSyntax_WithBindingGroup__
                      );
    thunk_FUN_00d48444(UnityEngine_Rendering_VolumeParameter_var);
    thunk_FUN_00d48444(StringLiteral_11973);
    thunk_FUN_00d48444(Method_UnityEngine_UIElements_TreeView_OnItemsChosen__);
    thunk_FUN_00d48444(System_Collections_Generic_Dictionary<IntVec3,_List<int>>_TypeInfo);
    thunk_FUN_00d48444(
                      Method_Sirenix_Utilities_ImmutableList_System_Collections_Generic_IList<System_Object>_set_Item__
                      );
    thunk_FUN_00d48444(StringLiteral_3307);
    thunk_FUN_00d48444(
                      Method_UnityEngine_UIElements_TypedUxmlAttributeDescription<string>_get_defaultValue__
                      );
    thunk_FUN_00d48444(StringLiteral_13260);
    thunk_FUN_00d48444(Method_System_Text_RegularExpressions_Regex_Replace__);
    DAT_0378231d = 1;
  }
  uStack_78 = 0;
  local_70 = 0;
  uStack_88 = 0;
  local_80 = 0;
  local_90 = 0;
  uStack_a8 = 0;
  local_a0 = 0;
  local_b0 = 0;
  uStack_c8 = 0;
  local_c0 = 0;
  local_d0 = 0;
  uStack_e8 = 0;
  local_e0 = 0;
  local_f0 = 0;
  uVar15 = *(undefined8 *)(param_1 + 0x70);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  FUN_023c39ac(uVar15,0);
  FUN_023c39ac(*(undefined8 *)(param_1 + 0x78),0);
  puVar10 = StringLiteral_13260;
  puVar9 = StringLiteral_6695;
  puVar8 = Method_RuntimeRopeGeneratorUse_<Start>d__2_System_Collections_IEnumerator_Reset__;
  puVar7 = 
  Method_UnityEngine_InputSystem_InputActionSetupExtensions_ControlSchemeSyntax_WithBindingGroup__;
  puVar6 = Method_System_Collections_Generic_KeyValuePair<string,_GSTU_Cell>_get_Value__;
  puVar5 = Method_UnityEngine_UIElements_BaseField<bool>_get_value__;
  puVar4 = System_Linq_Expressions_Interpreter_InstructionArray_DebugView_TypeInfo;
  puVar3 = UnityEngine_XR_ARSubsystems_XROcclusionSubsystem_var;
  puVar2 = PTR_DAT_033f5570;
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_01323390(*(long *)(param_1 + 0x10),&local_108,*(undefined8 *)StringLiteral_13260);
    uStack_78 = uStack_100;
    local_80 = local_108;
    local_70 = local_f8;
    while (uVar11 = FUN_012b894c(&local_80,*(undefined8 *)puVar5), (uVar11 & 1) != 0) {
      lVar12 = FUN_00cb307c(&local_80,*(undefined8 *)puVar2);
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      uStack_88 = *(undefined8 *)(lVar12 + 0x20);
      local_90 = *(undefined8 *)(lVar12 + 0x18);
      FUN_0265e038(&local_90,0);
    }
    FUN_012b8948(&local_80,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<FocusController_FocusedElement>_get_Count__
                );
    if (*(long *)(param_1 + 0x18) != 0) {
      FUN_01323390(*(long *)(param_1 + 0x18),&local_108,
                   *(undefined8 *)Method_System_Text_RegularExpressions_Regex_Replace__);
      uStack_a8 = uStack_100;
      local_b0 = local_108;
      local_a0 = local_f8;
      while (uVar11 = FUN_012b894c(&local_b0,*(undefined8 *)puVar4), (uVar11 & 1) != 0) {
        lVar12 = FUN_00cb3184(&local_b0,*(undefined8 *)puVar8);
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        uStack_88 = *(undefined8 *)(lVar12 + 0x20);
        local_90 = *(undefined8 *)(lVar12 + 0x18);
        FUN_0265e038(&local_90,0);
      }
      FUN_012b8948(&local_b0,*(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vsri_n_u8__);
      if (*(long *)(param_1 + 0x20) != 0) {
        FUN_01323390(*(long *)(param_1 + 0x20),&local_108,
                     *(undefined8 *)
                      Method_UnityEngine_UIElements_TypedUxmlAttributeDescription<string>_get_defaultValue__
                    );
        uStack_c8 = uStack_100;
        local_d0 = local_108;
        local_c0 = local_f8;
        while (uVar11 = FUN_012b894c(&local_d0,*(undefined8 *)puVar9), (uVar11 & 1) != 0) {
          lVar12 = FUN_00cb328c(&local_d0,*(undefined8 *)puVar7);
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          uStack_88 = *(undefined8 *)(lVar12 + 0x20);
          local_90 = *(undefined8 *)(lVar12 + 0x18);
          FUN_0265e038(&local_90,0);
        }
        FUN_012b8948(&local_d0,
                     *(undefined8 *)Oculus_Interaction_Input_HandPhysicsCapsules_<>c_TypeInfo);
        if (*(long *)(param_1 + 0x28) != 0) {
          FUN_01323390(*(long *)(param_1 + 0x28),&local_108,*(undefined8 *)StringLiteral_3307);
          uStack_e8 = uStack_100;
          local_f0 = local_108;
          local_e0 = local_f8;
          while (uVar11 = FUN_012b894c(&local_f0,*(undefined8 *)puVar3), (uVar11 & 1) != 0) {
            lVar12 = FUN_00cb3394(&local_f0,*(undefined8 *)puVar6);
            if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            uStack_88 = *(undefined8 *)(lVar12 + 0x20);
            local_90 = *(undefined8 *)(lVar12 + 0x18);
            FUN_0265e038(&local_90,0);
          }
          FUN_012b8948(&local_f0,
                       *(undefined8 *)
                        Method_Meta_WitAi_WitRequest_<>c__DisplayClass99_0_<HandleResponse>b__0__);
          if (*(long *)(param_1 + 0x10) != 0) {
            FUN_01323390(*(long *)(param_1 + 0x10),&local_108,*(undefined8 *)puVar10);
            uStack_78 = uStack_100;
            local_80 = local_108;
            local_70 = local_f8;
            while (uVar11 = FUN_012b894c(&local_80,*(undefined8 *)puVar5), (uVar11 & 1) != 0) {
              plVar13 = (long *)FUN_00cb307c(&local_80,*(undefined8 *)puVar2);
              if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              (**(code **)(*plVar13 + 0x1b8))(plVar13,*(undefined8 *)(*plVar13 + 0x1c0));
            }
            FUN_012b8948(&local_80,
                         *(undefined8 *)
                          Method_System_Collections_Generic_List<FocusController_FocusedElement>_get_Count__
                        );
            if (*(long *)(param_1 + 0x18) != 0) {
              FUN_01323390(*(long *)(param_1 + 0x18),&local_108,
                           *(undefined8 *)Method_System_Text_RegularExpressions_Regex_Replace__);
              uStack_a8 = uStack_100;
              local_b0 = local_108;
              local_a0 = local_f8;
              while (uVar11 = FUN_012b894c(&local_b0,*(undefined8 *)puVar4), (uVar11 & 1) != 0) {
                plVar13 = (long *)FUN_00cb3184(&local_b0,*(undefined8 *)puVar8);
                if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da518c();
                }
                (**(code **)(*plVar13 + 0x1b8))(plVar13,*(undefined8 *)(*plVar13 + 0x1c0));
              }
              FUN_012b8948(&local_b0,
                           *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vsri_n_u8__);
              if (*(long *)(param_1 + 0x20) != 0) {
                FUN_01323390(*(long *)(param_1 + 0x20),&local_108,
                             *(undefined8 *)
                              Method_UnityEngine_UIElements_TypedUxmlAttributeDescription<string>_get_defaultValue__
                            );
                uStack_c8 = uStack_100;
                local_d0 = local_108;
                local_c0 = local_f8;
                while (uVar11 = FUN_012b894c(&local_d0,*(undefined8 *)puVar9), (uVar11 & 1) != 0) {
                  plVar13 = (long *)FUN_00cb328c(&local_d0,*(undefined8 *)puVar7);
                  if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_00da518c();
                  }
                  (**(code **)(*plVar13 + 0x1b8))(plVar13,*(undefined8 *)(*plVar13 + 0x1c0));
                }
                FUN_012b8948(&local_d0,
                             *(undefined8 *)
                              Oculus_Interaction_Input_HandPhysicsCapsules_<>c_TypeInfo);
                if (*(long *)(param_1 + 0x28) != 0) {
                  FUN_01323390(*(long *)(param_1 + 0x28),&local_108,
                               *(undefined8 *)StringLiteral_3307);
                  uStack_e8 = uStack_100;
                  local_f0 = local_108;
                  local_e0 = local_f8;
                  while (uVar11 = FUN_012b894c(&local_f0,*(undefined8 *)puVar3), (uVar11 & 1) != 0)
                  {
                    plVar13 = (long *)FUN_00cb3394(&local_f0,*(undefined8 *)puVar6);
                    if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                      FUN_00da518c();
                    }
                    (**(code **)(*plVar13 + 0x1b8))(plVar13,*(undefined8 *)(*plVar13 + 0x1c0));
                  }
                  FUN_012b8948(&local_f0,
                               *(undefined8 *)
                                Method_Meta_WitAi_WitRequest_<>c__DisplayClass99_0_<HandleResponse>b__0__
                              );
                  if (*(long *)(param_1 + 0x50) != 0) {
                    FUN_02414a6c(*(long *)(param_1 + 0x50),0);
                    if (*(long *)(param_1 + 0x58) != 0) {
                      FUN_0129a9f4(*(long *)(param_1 + 0x58),*(undefined8 *)StringLiteral_9184);
                      lVar12 = *(long *)(param_1 + 0x10);
                      if (lVar12 != 0) {
                        lVar14 = *(long *)Method_UnityEngine_UIElements_TreeView_OnItemsChosen__;
                        *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
                        uVar11 = FUN_00da5b18(*(undefined8 *)
                                               (*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 200));
                        if ((uVar11 & 1) == 0) {
                          *(undefined4 *)(lVar12 + 0x18) = 0;
                        }
                        else {
                          iVar1 = *(int *)(lVar12 + 0x18);
                          *(undefined4 *)(lVar12 + 0x18) = 0;
                          if (0 < iVar1) {
                            FUN_0179519c(*(undefined8 *)(lVar12 + 0x10),0,iVar1,0);
                          }
                        }
                        lVar12 = *(long *)(param_1 + 0x18);
                        if (lVar12 != 0) {
                          lVar14 = *(long *)StringLiteral_11973;
                          *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
                          uVar11 = FUN_00da5b18(*(undefined8 *)
                                                 (*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 200))
                          ;
                          if ((uVar11 & 1) == 0) {
                            *(undefined4 *)(lVar12 + 0x18) = 0;
                          }
                          else {
                            iVar1 = *(int *)(lVar12 + 0x18);
                            *(undefined4 *)(lVar12 + 0x18) = 0;
                            if (0 < iVar1) {
                              FUN_0179519c(*(undefined8 *)(lVar12 + 0x10),0,iVar1,0);
                            }
                          }
                          lVar12 = *(long *)(param_1 + 0x20);
                          if (lVar12 != 0) {
                            lVar14 = *(long *)
                                      System_Collections_Generic_Dictionary<IntVec3,_List<int>>_TypeInfo
                            ;
                            *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
                            uVar11 = FUN_00da5b18(*(undefined8 *)
                                                   (*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 200
                                                   ));
                            if ((uVar11 & 1) == 0) {
                              *(undefined4 *)(lVar12 + 0x18) = 0;
                            }
                            else {
                              iVar1 = *(int *)(lVar12 + 0x18);
                              *(undefined4 *)(lVar12 + 0x18) = 0;
                              if (0 < iVar1) {
                                FUN_0179519c(*(undefined8 *)(lVar12 + 0x10),0,iVar1,0);
                              }
                            }
                            lVar12 = *(long *)(param_1 + 0x28);
                            if (lVar12 != 0) {
                              lVar14 = *(long *)UnityEngine_Rendering_VolumeParameter_var;
                              *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
                              uVar11 = FUN_00da5b18(*(undefined8 *)
                                                     (*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) +
                                                     200));
                              if ((uVar11 & 1) == 0) {
                                *(undefined4 *)(lVar12 + 0x18) = 0;
                              }
                              else {
                                iVar1 = *(int *)(lVar12 + 0x18);
                                *(undefined4 *)(lVar12 + 0x18) = 0;
                                if (0 < iVar1) {
                                  FUN_0179519c(*(undefined8 *)(lVar12 + 0x10),0,iVar1,0);
                                }
                              }
                              lVar12 = *(long *)(param_1 + 0x60);
                              if (lVar12 != 0) {
                                lVar14 = *(long *)
                                          Method_Sirenix_Utilities_ImmutableList_System_Collections_Generic_IList<System_Object>_set_Item__
                                ;
                                *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
                                uVar11 = FUN_00da5b18(*(undefined8 *)
                                                       (*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) +
                                                       200));
                                if ((uVar11 & 1) == 0) {
                                  *(undefined4 *)(lVar12 + 0x18) = 0;
                                }
                                else {
                                  iVar1 = *(int *)(lVar12 + 0x18);
                                  *(undefined4 *)(lVar12 + 0x18) = 0;
                                  if (0 < iVar1) {
                                    FUN_0179519c(*(undefined8 *)(lVar12 + 0x10),0,iVar1,0);
                                  }
                                }
                                *(undefined4 *)(param_1 + 0x30) = 0;
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
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


