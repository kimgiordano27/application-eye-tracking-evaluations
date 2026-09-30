/*
FUNCTION_NAME: FUN_056cd9fc
ENTRY_POINT: 056cd9fc
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_8;telemetry_or_network_hits_3
*/


void FUN_056cd9fc(long param_1,long *param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  ulong uVar16;
  long *plVar17;
  
  if ((DAT_06a54b00 & 1) == 0) {
    FUN_02d4dc40(PTR_DAT_06647de0);
    FUN_02d4dc40(UnityEngine_Rendering_DebugUI_ObjectField_TypeInfo);
    FUN_02d4dc40(GravityAccountsLinkingHandlerTextDefualt_<>c__DisplayClass10_0_TypeInfo);
    FUN_02d4dc40(
                System_Linq_Expressions_Interpreter_ExclusiveOrInstruction_ExclusiveOrBoolean_TypeInfo
                );
    FUN_02d4dc40(
                System_Linq_Expressions_Interpreter_GreaterThanInstruction_GreaterThanInt64_TypeInfo
                );
    FUN_02d4dc40(PlayFab_ClientModels_GetTitleDataRequest_TypeInfo);
    FUN_02d4dc40(UnityEngine_Rendering_DebugUI_ColorField_TypeInfo);
    FUN_02d4dc40(UnityEngine_UIElements_GroupBox_UxmlFactory_TypeInfo);
    DAT_06a54b00 = 1;
  }
  puVar5 = System_Linq_Expressions_Interpreter_ExclusiveOrInstruction_ExclusiveOrBoolean_TypeInfo;
  if ((*(long *)(param_1 + 0x38) != 0) && (param_2 != (long *)0x0)) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_06647de0 + 0x130);
    if ((bVar1 <= *(byte *)(*param_2 + 0x130)) &&
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_06647de0))
    {
      uVar9 = FUN_058130c8(*(long *)(param_1 + 0x38),
                           *(undefined8 *)
                            System_Linq_Expressions_Interpreter_ExclusiveOrInstruction_ExclusiveOrBoolean_TypeInfo
                           ,0);
      puVar3 = UnityEngine_Rendering_DebugUI_ColorField_TypeInfo;
      if (*(long *)(param_1 + 0x38) != 0) {
        uVar10 = FUN_058130c8(*(long *)(param_1 + 0x38),
                              *(undefined8 *)UnityEngine_Rendering_DebugUI_ColorField_TypeInfo,0);
        puVar2 = PlayFab_ClientModels_GetTitleDataRequest_TypeInfo;
        if (*(long *)(param_1 + 0x38) != 0) {
          uVar11 = FUN_058130c8(*(long *)(param_1 + 0x38),
                                *(undefined8 *)PlayFab_ClientModels_GetTitleDataRequest_TypeInfo,0);
          puVar8 = UnityEngine_UIElements_GroupBox_UxmlFactory_TypeInfo;
          if (*(long *)(param_1 + 0x38) != 0) {
            uVar12 = FUN_058130c8(*(long *)(param_1 + 0x38),
                                  *(undefined8 *)
                                   UnityEngine_UIElements_GroupBox_UxmlFactory_TypeInfo,0);
            puVar6 = GravityAccountsLinkingHandlerTextDefualt_<>c__DisplayClass10_0_TypeInfo;
            if (*(long *)(param_1 + 0x38) != 0) {
              uVar13 = FUN_058130c8(*(long *)(param_1 + 0x38),
                                    *(undefined8 *)
                                     GravityAccountsLinkingHandlerTextDefualt_<>c__DisplayClass10_0_TypeInfo
                                    ,0);
              puVar7 = 
              System_Linq_Expressions_Interpreter_GreaterThanInstruction_GreaterThanInt64_TypeInfo;
              if (*(long *)(param_1 + 0x38) != 0) {
                uVar14 = FUN_058130c8(*(long *)(param_1 + 0x38),
                                      *(undefined8 *)
                                       System_Linq_Expressions_Interpreter_GreaterThanInstruction_GreaterThanInt64_TypeInfo
                                      ,0);
                puVar4 = UnityEngine_Rendering_DebugUI_ObjectField_TypeInfo;
                if (*(long *)(param_1 + 0x38) != 0) {
                  uVar15 = FUN_058130c8(*(long *)(param_1 + 0x38),
                                        *(undefined8 *)
                                         UnityEngine_Rendering_DebugUI_ObjectField_TypeInfo,0);
                  plVar17 = *(long **)(param_1 + 0x38);
                  if (plVar17 != (long *)0x0) {
                    (**(code **)(*plVar17 + 0x298))
                              (plVar17,*(undefined8 *)puVar5,*(undefined8 *)(*plVar17 + 0x2a0));
                    plVar17 = *(long **)(param_1 + 0x38);
                    if (plVar17 != (long *)0x0) {
                      (**(code **)(*plVar17 + 0x298))
                                (plVar17,*(undefined8 *)puVar3,*(undefined8 *)(*plVar17 + 0x2a0));
                      plVar17 = *(long **)(param_1 + 0x38);
                      if (plVar17 != (long *)0x0) {
                        (**(code **)(*plVar17 + 0x298))
                                  (plVar17,*(undefined8 *)puVar2,*(undefined8 *)(*plVar17 + 0x2a0));
                        plVar17 = *(long **)(param_1 + 0x38);
                        if (plVar17 != (long *)0x0) {
                          (**(code **)(*plVar17 + 0x298))
                                    (plVar17,*(undefined8 *)puVar8,*(undefined8 *)(*plVar17 + 0x2a0)
                                    );
                          plVar17 = *(long **)(param_1 + 0x38);
                          if (plVar17 != (long *)0x0) {
                            (**(code **)(*plVar17 + 0x298))
                                      (plVar17,*(undefined8 *)puVar6,
                                       *(undefined8 *)(*plVar17 + 0x2a0));
                            plVar17 = *(long **)(param_1 + 0x38);
                            if (plVar17 != (long *)0x0) {
                              (**(code **)(*plVar17 + 0x298))
                                        (plVar17,*(undefined8 *)puVar7,
                                         *(undefined8 *)(*plVar17 + 0x2a0));
                              plVar17 = *(long **)(param_1 + 0x38);
                              if (plVar17 != (long *)0x0) {
                                (**(code **)(*plVar17 + 0x298))
                                          (plVar17,*(undefined8 *)puVar4,
                                           *(undefined8 *)(*plVar17 + 0x2a0));
                                (**(code **)(*param_2 + 0x248))
                                          (param_2,*(undefined8 *)(param_1 + 0x38),
                                           *(undefined8 *)(*param_2 + 0x250));
                                uVar16 = FUN_04e7faf0(uVar9,0);
                                if ((uVar16 & 1) == 0) {
                                  FUN_057282b0(param_2,uVar9,0);
                                }
                                uVar16 = FUN_04e7faf0(uVar10,0);
                                if ((uVar16 & 1) == 0) {
                                  FUN_05728664(param_2,uVar10,0);
                                }
                                uVar16 = FUN_04e7faf0(uVar11,0);
                                if ((uVar16 & 1) == 0) {
                                  (**(code **)(*param_2 + 0x288))
                                            (param_2,uVar11,*(undefined8 *)(*param_2 + 0x290));
                                }
                                uVar16 = FUN_04e7faf0(uVar12,0);
                                if ((uVar16 & 1) == 0) {
                                  FUN_05728c9c(param_2,uVar12,0);
                                }
                                uVar16 = FUN_04e7faf0(uVar13,0);
                                if ((uVar16 & 1) == 0) {
                                  FUN_05729db0(param_2,uVar13,0);
                                }
                                uVar16 = FUN_04e7faf0(uVar14,0);
                                if ((uVar16 & 1) == 0) {
                                  FUN_0572a234(param_2,uVar14,0);
                                }
                                uVar16 = FUN_04e7faf0(uVar15,0);
                                if ((uVar16 & 1) != 0) {
                                  return;
                                }
                                FUN_05728ff4(param_2,uVar15,0);
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
                    /* WARNING: Subroutine does not return */
      FUN_02d4dee8();
    }
  }
  return;
}


