/*
FUNCTION_NAME: FUN_056000a8
ENTRY_POINT: 056000a8
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_21;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_2;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_056000a8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  long lVar6;
  long lVar7;
  
  puVar1 = PTR_DAT_0665f268;
                    /* try { // try from 056000b8 to 0570020f has its CatchHandler @ 056000b8
                       catch() { ... } // from try @ 056000b8 with catch @ 056000b8
                       catch() { ... } // from try @ 05600240 with catch @ 056000b8
                       catch() { ... } // from try @ 05600308 with catch @ 056000b8
                       catch() { ... } // from try @ 0560034c with catch @ 056000b8 */
  if ((DAT_06a544f9 & 1) == 0) {
    FUN_02d4dc40(
                Unity_Burst_BurstCompiler_BurstCompilerHelper_IsBurstEnabled_00000145_BurstDirectCall_TypeInfo
                );
    FUN_02d4dc40(
                Unity_Burst_BurstCompiler_BurstCompilerHelper_IsBurstEnabled_00000145_PostfixBurstDelegate_TypeInfo
                );
    FUN_02d4dc40(System_Uri_MoreInfo_TypeInfo);
    FUN_02d4dc40(PTR_DAT_0665f270);
    FUN_02d4dc40(
                System_Threading_CancellationTokenSource_LinkedNCancellationTokenSource_<>c_TypeInfo
                );
    FUN_02d4dc40(PTR_DAT_06657330);
    FUN_02d4dc40(
                UnityEngine_XR_Interaction_Toolkit_UI_CanvasOptimizer_CanvasState_CanvasScalerSettings_TypeInfo
                );
    FUN_02d4dc40(
                UnityEngine_XR_Interaction_Toolkit_UI_CanvasOptimizer_CanvasState_CanvasSettings_TypeInfo
                );
    FUN_02d4dc40(PTR_DAT_06649948);
    FUN_02d4dc40(PTR_DAT_0665f278);
    FUN_02d4dc40(PTR_DAT_0665f280);
    FUN_02d4dc40(PTR_DAT_0664e0a0);
    FUN_02d4dc40(PTR_DAT_06648880);
    FUN_02d4dc40(PTR_DAT_0665f288);
    FUN_02d4dc40(PTR_DAT_06657338);
    FUN_02d4dc40(
                UnityEngine_XR_Interaction_Toolkit_UI_CanvasOptimizer_CanvasState_GraphicRaycasterSettings_TypeInfo
                );
    FUN_02d4dc40(System_Linq_Expressions_Interpreter_CastInstruction_CastInstructionNoT_Ref_TypeInfo
                );
    FUN_02d4dc40(PTR_DAT_0665f290);
    FUN_02d4dc40(
                System_Linq_Expressions_Interpreter_CastInstruction_CastInstructionNoT_Value_TypeInfo
                );
    FUN_02d4dc40(PTR_DAT_0665f298);
    FUN_02d4dc40(PTR_DAT_0665f2a0);
    FUN_02d4dc40(System_Console_WindowsConsole_WindowsCancelHandler_TypeInfo);
    FUN_02d4dc40(PTR_DAT_0665f268);
    FUN_02d4dc40(PTR_DAT_0665f2a8);
    FUN_02d4dc40(UnityEngine_UIElements_Cursor_PropertyBag_DefaultCursorIdProperty_TypeInfo);
    DAT_06a544f9 = 1;
  }
  puVar2 = System_Uri_MoreInfo_TypeInfo;
  if (*(long *)puVar1 != 0) {
    lVar6 = *(long *)PTR_DAT_0665f290;
    puVar5 = *(undefined4 **)(*(long *)System_Uri_MoreInfo_TypeInfo + 0xb8);
    *puVar5 = *(undefined4 *)(*(long *)puVar1 + 0x10);
    if (lVar6 != 0) {
      lVar7 = *(long *)PTR_DAT_0665f2a8;
      puVar5[1] = *(undefined4 *)(lVar6 + 0x10);
      if (lVar7 != 0) {
        lVar6 = *(long *)PTR_DAT_0665f2a0;
        puVar5[2] = *(undefined4 *)(lVar7 + 0x10);
        if (lVar6 != 0) {
          lVar7 = *(long *)PTR_DAT_06648880;
          puVar5[3] = *(undefined4 *)(lVar6 + 0x10);
          if (lVar7 != 0) {
            lVar6 = *(long *)PTR_DAT_0665f288;
            puVar5[4] = *(undefined4 *)(lVar7 + 0x10);
            if (lVar6 != 0) {
              lVar7 = *(long *)PTR_DAT_0665f280;
              puVar5[5] = *(undefined4 *)(lVar6 + 0x10);
              if (lVar7 != 0) {
                lVar6 = *(long *)PTR_DAT_0665f278;
                puVar5[6] = *(undefined4 *)(lVar7 + 0x10);
                if (lVar6 != 0) {
                  lVar7 = *(long *)PTR_DAT_06657330;
                  puVar5[7] = *(undefined4 *)(lVar6 + 0x10);
                  if (lVar7 != 0) {
                    lVar6 = *(long *)PTR_DAT_0665f270;
                    puVar5[8] = *(undefined4 *)(lVar7 + 0x10);
                    if (lVar6 != 0) {
                      lVar7 = *(long *)PTR_DAT_06657338;
                      puVar5[9] = *(undefined4 *)(lVar6 + 0x10);
                      if (lVar7 != 0) {
                        lVar6 = *(long *)PTR_DAT_06649948;
                        puVar5[10] = *(undefined4 *)(lVar7 + 0x10);
                        if (lVar6 != 0) {
                          lVar7 = *(long *)PTR_DAT_0665f298;
                          puVar5[0xb] = *(undefined4 *)(lVar6 + 0x10);
                          if (lVar7 != 0) {
                            lVar6 = *(long *)
                                     System_Console_WindowsConsole_WindowsCancelHandler_TypeInfo;
                            puVar5[0xc] = *(undefined4 *)(lVar7 + 0x10);
                            if (lVar6 != 0) {
                              lVar7 = *(long *)
                                       UnityEngine_XR_Interaction_Toolkit_UI_CanvasOptimizer_CanvasState_CanvasScalerSettings_TypeInfo
                              ;
                              puVar5[0xd] = *(undefined4 *)(lVar6 + 0x10);
                              if (lVar7 != 0) {
                                lVar6 = *(long *)PTR_DAT_0664e0a0;
                                puVar5[0xe] = *(undefined4 *)(lVar7 + 0x10);
                                if (lVar6 != 0) {
                                  lVar7 = *(long *)
                                           UnityEngine_UIElements_Cursor_PropertyBag_DefaultCursorIdProperty_TypeInfo
                                  ;
                                  puVar5[0xf] = *(undefined4 *)(lVar6 + 0x10);
                                  if (lVar7 != 0) {
                                    lVar6 = *(long *)
                                             System_Linq_Expressions_Interpreter_CastInstruction_CastInstructionNoT_Value_TypeInfo
                                    ;
                                    puVar5[0x10] = *(undefined4 *)(lVar7 + 0x10);
                                    if (lVar6 != 0) {
                                      lVar7 = *(long *)
                                               UnityEngine_XR_Interaction_Toolkit_UI_CanvasOptimizer_CanvasState_GraphicRaycasterSettings_TypeInfo
                                      ;
                                      puVar5[0x11] = *(undefined4 *)(lVar6 + 0x10);
                                      if (lVar7 != 0) {
                                        lVar6 = *(long *)
                                                 UnityEngine_XR_Interaction_Toolkit_UI_CanvasOptimizer_CanvasState_CanvasSettings_TypeInfo
                                        ;
                                        puVar5[0x12] = *(undefined4 *)(lVar7 + 0x10);
                                        if (lVar6 != 0) {
                                          lVar7 = *(long *)
                                                  System_Threading_CancellationTokenSource_LinkedNCancellationTokenSource_<>c_TypeInfo
                                          ;
                                          puVar5[0x13] = *(undefined4 *)(lVar6 + 0x10);
                                          if (lVar7 != 0) {
                                            lVar6 = *(long *)
                                                  System_Linq_Expressions_Interpreter_CastInstruction_CastInstructionNoT_Ref_TypeInfo
                                            ;
                                            puVar5[0x14] = *(undefined4 *)(lVar7 + 0x10);
                                            puVar1 = 
                                            Unity_Burst_BurstCompiler_BurstCompilerHelper_IsBurstEnabled_00000145_BurstDirectCall_TypeInfo
                                            ;
                                            if (lVar6 != 0) {
                                              uVar3 = *(undefined8 *)
                                                                                                              
                                                  Unity_Burst_BurstCompiler_BurstCompilerHelper_IsBurstEnabled_00000145_PostfixBurstDelegate_TypeInfo
                                              ;
                                              puVar5[0x15] = *(undefined4 *)(lVar6 + 0x10);
                                              uVar3 = FUN_02d4dd2c(uVar3,8);
                                              FUN_04f3287c(uVar3,*(undefined8 *)puVar1,0);
                                              puVar4 = (undefined8 *)
                                                       (*(long *)(*(long *)puVar2 + 0xb8) + 0x58);
                                              *puVar4 = uVar3;
                                              thunk_FUN_02dc1ef0(puVar4,uVar3);
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


