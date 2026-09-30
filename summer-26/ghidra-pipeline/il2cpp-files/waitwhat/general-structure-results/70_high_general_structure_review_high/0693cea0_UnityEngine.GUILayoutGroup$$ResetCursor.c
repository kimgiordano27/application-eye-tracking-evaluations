/*
FUNCTION_NAME: UnityEngine.GUILayoutGroup$$ResetCursor
ENTRY_POINT: 0693cea0
PROGRAM: waitwhat-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;ui_interaction;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_17;ray_or_cast_sink_hits_1;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x0693d264) */
/* WARNING: Removing unreachable block (ram,0x0693d3c8) */
/* WARNING: Removing unreachable block (ram,0x0693d4a0) */
/* WARNING: Removing unreachable block (ram,0x0693d3a4) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void UnityEngine_GUILayoutGroup__ResetCursor(undefined8 *param_1,undefined8 param_2)

{
  uint uVar1;
  bool bVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  int *piVar8;
  undefined8 *unaff_x19;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x27;
  long unaff_x28;
  undefined8 *unaff_x29;
  long in_stack_00000000;
  long in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 *in_stack_00000030;
  long in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 *in_stack_00000048;
  long in_stack_00000050;
  long *in_stack_00000058;
  long in_stack_00000070;
  
  do {
    uVar4 = FUN_03a69f28(param_2,*param_1);
    if ((uVar4 & 1) != 0) {
      if (in_stack_00000000 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      uVar9 = *(undefined8 *)(in_stack_00000000 + 0x28);
      lVar5 = *(long *)
               System_Linq_Expressions_Interpreter_CastInstruction_CastInstructionNoT_Value_TypeInfo
      ;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_031e5338();
        lVar5 = *(long *)
                 System_Linq_Expressions_Interpreter_CastInstruction_CastInstructionNoT_Value_TypeInfo
        ;
      }
      puVar7 = *(undefined8 **)(lVar5 + 0xb8);
      lVar10 = puVar7[2];
      if (lVar10 == 0) {
        if (*(int *)(lVar5 + 0xe4) == 0) {
          thunk_FUN_031e5338();
          puVar7 = *(undefined8 **)
                    (*(long *)
                      System_Linq_Expressions_Interpreter_CastInstruction_CastInstructionNoT_Value_TypeInfo
                    + 0xb8);
        }
        uVar11 = *puVar7;
        lVar10 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                           (*(undefined8 *)System_Xml_XmlTextReaderImpl_LaterInitParam_TypeInfo);
        FUN_03dfd060(lVar10,uVar11,
                     *(undefined8 *)
                      UnityEngine_XR_Interaction_Toolkit_UI_CanvasOptimizer_CanvasState_CanvasSettings_TypeInfo
                     ,0);
        *(long *)(*(long *)(*(long *)
                             System_Linq_Expressions_Interpreter_CastInstruction_CastInstructionNoT_Value_TypeInfo
                           + 0xb8) + 0x10) = lVar10;
      }
      plVar6 = (long *)FUN_03a93870(uVar9,lVar10,
                                    *(undefined8 *)System_Xml_XmlSqlBinaryReader_QName_TypeInfo);
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      lVar5 = *plVar6;
      uVar4 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar4 != 0) {
        piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) ==
              *(long *)System_Xml_XmlTextReaderImpl_NoNamespaceManager_TypeInfo) {
            puVar7 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_0693cfbc;
          }
          uVar4 = uVar4 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar4 != 0);
      }
      puVar7 = (undefined8 *)
               FUN_031c0d08(plVar6,*(long *)System_Xml_XmlTextReaderImpl_NoNamespaceManager_TypeInfo
                            ,0);
LAB_0693cfbc:
      plVar6 = (long *)(*(code *)*puVar7)(plVar6,puVar7[1]);
joined_r0x0693cfd8:
      in_stack_00000058 = plVar6;
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      lVar5 = *plVar6;
      uVar4 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar4 != 0) {
        piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_070c7c80) {
            puVar7 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_0693d030;
          }
          uVar4 = uVar4 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar4 != 0);
      }
      puVar7 = (undefined8 *)FUN_031c0d08(plVar6,*(long *)PTR_DAT_070c7c80,0);
LAB_0693d030:
      uVar4 = (*(code *)*puVar7)(plVar6,puVar7[1]);
      plVar6 = in_stack_00000058;
      if ((uVar4 & 1) != 0) {
        lVar5 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                          (*(undefined8 *)
                            System_Linq_Expressions_Interpreter_CastInstruction_CastInstructionNoT_Ref_TypeInfo
                          );
        FUN_05971910(lVar5,0);
        plVar6 = in_stack_00000058;
        if (in_stack_00000058 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03188cd8();
        }
        lVar10 = *in_stack_00000058;
        uVar4 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar4 != 0) {
          piVar8 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)System_Xml_XmlTextReaderImpl_NodeData_TypeInfo) {
              puVar7 = (undefined8 *)(lVar10 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_0693d0b8;
            }
            uVar4 = uVar4 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar4 != 0);
        }
        puVar7 = (undefined8 *)
                 FUN_031c0d08(in_stack_00000058,
                              *(long *)System_Xml_XmlTextReaderImpl_NodeData_TypeInfo,0);
LAB_0693d0b8:
        uVar9 = (*(code *)*puVar7)(plVar6,puVar7[1]);
        puVar3 = 
        System_Linq_Expressions_Interpreter_CastInstruction_CastInstructionNoT_Value_TypeInfo;
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03188cd8();
        }
        *(undefined8 *)(lVar5 + 0x10) = uVar9;
        uVar9 = *(undefined8 *)(unaff_x28 + 0x28);
        lVar10 = *(long *)puVar3;
        if (*(int *)(lVar10 + 0xe4) == 0) {
          thunk_FUN_031e5338();
          lVar10 = *(long *)
                    System_Linq_Expressions_Interpreter_CastInstruction_CastInstructionNoT_Value_TypeInfo
          ;
        }
        puVar7 = *(undefined8 **)(lVar10 + 0xb8);
        lVar12 = puVar7[3];
        if (lVar12 == 0) {
          if (*(int *)(lVar10 + 0xe4) == 0) {
            thunk_FUN_031e5338();
            puVar7 = *(undefined8 **)
                      (*(long *)
                        System_Linq_Expressions_Interpreter_CastInstruction_CastInstructionNoT_Value_TypeInfo
                      + 0xb8);
          }
          uVar11 = *puVar7;
          lVar12 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                             (*(undefined8 *)System_Xml_XmlTextReaderImpl_LaterInitParam_TypeInfo);
          FUN_03dfd060(lVar12,uVar11,
                       *(undefined8 *)
                        UnityEngine_XR_Interaction_Toolkit_UI_CanvasOptimizer_CanvasState_GraphicRaycasterSettings_TypeInfo
                       ,0);
          *(long *)(*(long *)(*(long *)
                               System_Linq_Expressions_Interpreter_CastInstruction_CastInstructionNoT_Value_TypeInfo
                             + 0xb8) + 0x18) = lVar12;
        }
        uVar9 = FUN_03a93870(uVar9,lVar12,
                             *(undefined8 *)System_Xml_XmlSqlBinaryReader_QName_TypeInfo);
        uVar9 = FUN_03a79a04(uVar9,*(undefined8 *)
                                    Oculus_Avatar2_Experimental_CAPI_AppPoseNodeCallback_PoseFunction_TypeInfo
                            );
        lVar10 = FUN_03a924f4(uVar9,*(undefined8 *)
                                     System_Threading_CancellationTokenSource_LinkedNCancellationTokenSource_<>c_TypeInfo
                             );
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03188cd8();
        }
        FUN_042e54fc(&stack0x00000028,lVar10,
                     *(undefined8 *)
                      UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_IsWithinRadius_000008E8_BurstDirectCall_TypeInfo
                    );
        bVar2 = false;
        in_stack_00000050 = in_stack_00000038;
        in_stack_00000048 = in_stack_00000030;
        in_stack_00000040 = in_stack_00000028;
        in_stack_00000028 = 0;
        in_stack_00000030 = &stack0x00000040;
        while (uVar4 = FUN_054518b4(&stack0x00000040,*unaff_x25), lVar10 = in_stack_00000050,
              (uVar4 & 1) != 0) {
          if (in_stack_00000050 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03188cd8();
          }
          lVar12 = *(long *)(lVar5 + 0x18);
          uVar9 = *(undefined8 *)(in_stack_00000050 + 0x28);
          if (lVar12 == 0) {
            lVar12 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                               (*unaff_x19);
            FUN_03dfd060(lVar12,lVar5,*unaff_x27,0);
            *(long *)(lVar5 + 0x18) = lVar12;
          }
          uVar9 = FUN_03a93870(uVar9,lVar12,*unaff_x24);
          uVar4 = FUN_03a69f28(uVar9,*unaff_x29);
          if ((uVar4 & 1) != 0) {
            bVar2 = true;
            *(undefined1 *)(lVar10 + 0x38) = 1;
          }
        }
        FUN_054518b0(&stack0x00000040,
                     *(undefined8 *)
                      UnityEngine_XR_Interaction_Toolkit_Filtering_XRPokeLogic_IsVelocitySufficient_0000100E_BurstDirectCall_TypeInfo
                    );
        plVar6 = in_stack_00000058;
        if (!bVar2) {
          lVar10 = *(long *)(unaff_x28 + 0x28);
          if (lVar10 != 0) {
            lVar12 = *(long *)(lVar10 + 0x10);
            uVar9 = *(undefined8 *)(lVar5 + 0x10);
            lVar5 = *(long *)System_Xml_XmlBaseReader_XmlCommentNode_TypeInfo;
            *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
            if (lVar12 != 0) {
              uVar1 = *(uint *)(lVar10 + 0x18);
              if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                *(undefined8 *)(lVar12 + (long)(int)uVar1 * 8 + 0x20) = uVar9;
              }
              else {
                FUN_042e4a64(lVar10,uVar9,
                             *(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
                plVar6 = in_stack_00000058;
              }
              goto joined_r0x0693cfd8;
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_03188cd8();
        }
        goto joined_r0x0693cfd8;
      }
      if (in_stack_00000058 != (long *)0x0) {
        lVar5 = *in_stack_00000058;
        uVar4 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar4 != 0) {
          piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_070c2e88) {
              puVar7 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_0693d384;
            }
            uVar4 = uVar4 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar4 != 0);
        }
        puVar7 = (undefined8 *)FUN_031c0d08(in_stack_00000058,*(long *)PTR_DAT_070c2e88,0);
LAB_0693d384:
        (*(code *)*puVar7)(plVar6,puVar7[1]);
      }
    }
    uVar4 = FUN_054518b4(&stack0x00000060,
                         *(undefined8 *)
                          UnityEngine_XR_Interaction_Toolkit_Interactors_Visuals_XRInteractorLineVisual_EvaluateLineEndPoint_00000D21_PostfixBurstDelegate_TypeInfo
                        );
    unaff_x28 = in_stack_00000070;
    if ((uVar4 & 1) == 0) {
      FUN_054518b0(in_stack_00000020,
                   *(undefined8 *)
                    UnityEngine_XR_Interaction_Toolkit_Interactors_Visuals_XRInteractorLineVisual_ComputeNewRenderPoints_00000D20_PostfixBurstDelegate_TypeInfo
                  );
      if (in_stack_00000018 == 0) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_03188cd0(in_stack_00000018);
    }
    if (in_stack_00000070 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    uVar9 = *(undefined8 *)(in_stack_00000070 + 0x20);
    lVar5 = *(long *)
             System_Linq_Expressions_Interpreter_CastInstruction_CastInstructionNoT_Value_TypeInfo;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_031e5338();
      lVar5 = *(long *)
               System_Linq_Expressions_Interpreter_CastInstruction_CastInstructionNoT_Value_TypeInfo
      ;
    }
    puVar7 = *(undefined8 **)(lVar5 + 0xb8);
    lVar10 = puVar7[1];
    if (lVar10 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_031e5338();
        puVar7 = *(undefined8 **)
                  (*(long *)
                    System_Linq_Expressions_Interpreter_CastInstruction_CastInstructionNoT_Value_TypeInfo
                  + 0xb8);
      }
      uVar11 = *puVar7;
      lVar10 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                         (*(undefined8 *)System_Xml_XmlTextReaderImpl_DtdParserProxy_TypeInfo);
      FUN_03dfd060(lVar10,uVar11,
                   *(undefined8 *)
                    UnityEngine_XR_Interaction_Toolkit_UI_CanvasOptimizer_CanvasState_CanvasScalerSettings_TypeInfo
                   ,0);
      *(long *)(*(long *)(*(long *)
                           System_Linq_Expressions_Interpreter_CastInstruction_CastInstructionNoT_Value_TypeInfo
                         + 0xb8) + 8) = lVar10;
    }
    param_2 = FUN_03a93870(uVar9,lVar10,
                           *(undefined8 *)
                            System_Xml_XmlTextReaderImpl_DtdDefaultAttributeInfoToNodeDataComparer_TypeInfo
                          );
    param_1 = (undefined8 *)System_Xml_XmlSqlBinaryReader_NamespaceDecl_TypeInfo;
  } while( true );
}


