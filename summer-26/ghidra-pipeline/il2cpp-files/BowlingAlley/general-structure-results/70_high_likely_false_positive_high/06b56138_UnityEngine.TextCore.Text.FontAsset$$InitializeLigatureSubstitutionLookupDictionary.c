/*
FUNCTION_NAME: UnityEngine.TextCore.Text.FontAsset$$InitializeLigatureSubstitutionLookupDictionary
ENTRY_POINT: 06b56138
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 89
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;ui_interaction;data_collection;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_20;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_3;strong_file_logging_hits_6;telemetry_or_network_hits_7;frame_or_lifecycle_behavior;negative_framework_namespace_without_eye_use_flow;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x06b566f8) */
/* WARNING: Removing unreachable block (ram,0x06b56894) */

void UnityEngine_TextCore_Text_FontAsset__InitializeLigatureSubstitutionLookupDictionary
               (long param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  int in_w9;
  ulong uVar12;
  int *piVar13;
  long *unaff_x19;
  long unaff_x20;
  long lVar14;
  int iVar15;
  undefined8 uVar16;
  long in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  long in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  long in_stack_00000048;
  undefined8 in_stack_00000050;
  
  if (in_w9 == 0) {
    thunk_FUN_032cd7c0(param_1);
    param_1 = *unaff_x19;
  }
  if (*(long *)(*(long *)(param_1 + 0xb8) + 8) == 0) {
    if (*(int *)(param_1 + 0xe0) == 0) {
      thunk_FUN_032cd7c0(param_1);
      param_1 = *unaff_x19;
    }
    uVar16 = **(undefined8 **)(param_1 + 0xb8);
    uVar7 = thunk_FUN_032a56a0(*(undefined8 *)
                                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<TimeBudgetPerFrameDeferAgent_<BreakPoint>d__12>__
                              );
    FUN_055d2e5c(uVar7,uVar16,
                 *(undefined8 *)
                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<WebRequestStream_<Initialize>d__36>__
                 ,0);
    puVar8 = (undefined8 *)(*(long *)(*unaff_x19 + 0xb8) + 8);
    *puVar8 = uVar7;
    thunk_FUN_0333a630(puVar8,uVar7);
  }
  plVar9 = (long *)FUN_039a8198();
  if (plVar9 != (long *)0x0) {
    lVar11 = *plVar9;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) ==
            *(long *)
             Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<TransformExtensions_<LerpPosition>d__1>__
           ) {
          puVar8 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_06b56224;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar8 = (undefined8 *)
             FUN_032937ac(plVar9,*(long *)
                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<TransformExtensions_<LerpPosition>d__1>__
                          ,0);
LAB_06b56224:
    puVar4 = 
    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<JsonTextWriter_<DoWriteValueAsync>d__64>__
    ;
    plVar9 = (long *)(*(code *)*puVar8)(plVar9,puVar8[1]);
    puVar5 = 
    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<TransformExtensions_<LerpScale>d__0>__
    ;
    puVar3 = PTR_DAT_0727a180;
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    do {
      lVar11 = *plVar9;
      uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)puVar3) {
            puVar8 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_06b562ac;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar8 = (undefined8 *)FUN_032937ac(plVar9,*(long *)puVar3,0);
LAB_06b562ac:
      uVar12 = (*(code *)*puVar8)(plVar9,puVar8[1]);
      if ((uVar12 & 1) == 0) {
        if (plVar9 == (long *)0x0) goto LAB_06b563f8;
        lVar11 = *plVar9;
        uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar12 == 0) goto LAB_06b563d0;
        piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        goto LAB_06b563b8;
      }
      lVar11 = *plVar9;
      uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)puVar5) {
            puVar8 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_06b56308;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar8 = (undefined8 *)FUN_032937ac(plVar9,*(long *)puVar5,0);
LAB_06b56308:
      lVar11 = (*(code *)*puVar8)(plVar9,puVar8[1]);
      if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      iVar1 = *(int *)(unaff_x20 + 0x18);
      FUN_06b5b9b0(lVar11);
      iVar15 = *(int *)(unaff_x20 + 0x18);
      while (iVar15 = iVar15 + -1, iVar1 <= iVar15) {
        uVar7 = FUN_041e29a8();
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
        }
        uVar12 = FUN_06b5b85c(lVar11,uVar7);
        if ((uVar12 & 1) == 0) {
          FUN_041e4460();
        }
      }
    } while( true );
  }
  goto LAB_06b56890;
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar13 = piVar13 + 4;
    if (uVar12 == 0) break;
LAB_06b563b8:
    if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_07279f60) {
      puVar8 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_06b563ec;
    }
  }
LAB_06b563d0:
  puVar8 = (undefined8 *)FUN_032937ac(plVar9,*(long *)PTR_DAT_07279f60,0);
LAB_06b563ec:
  (*(code *)*puVar8)(plVar9,puVar8[1]);
LAB_06b563f8:
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  uVar12 = FUN_06b5ba54();
  if ((uVar12 & 1) == 0) {
    return;
  }
  lVar11 = FUN_06b50bc8(0);
  if (lVar11 != 0) {
    uVar7 = FUN_039954f8(*(undefined8 *)(lVar11 + 0x18),
                         *(undefined8 *)
                          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<StreamWriter_<WriteAsyncInternal>d__62>__
                        );
    puVar3 = 
    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<WebRequestStream_<SetHeadersAsync>d__37>__
    ;
    lVar11 = *(long *)
              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<WebRequestStream_<SetHeadersAsync>d__37>__
    ;
    if (*(int *)(lVar11 + 0xe0) == 0) {
      thunk_FUN_032cd7c0(lVar11);
      lVar11 = *(long *)puVar3;
    }
    lVar14 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x10);
    if (lVar14 == 0) {
      if (*(int *)(lVar11 + 0xe0) == 0) {
        thunk_FUN_032cd7c0(lVar11);
        lVar11 = *(long *)
                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<WebRequestStream_<SetHeadersAsync>d__37>__
        ;
      }
      puVar3 = 
      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<WebRequestStream_<SetHeadersAsync>d__37>__
      ;
      uVar16 = **(undefined8 **)(lVar11 + 0xb8);
      lVar14 = thunk_FUN_032a56a0(*(undefined8 *)
                                   Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<TimeBudgetPerFrameDeferAgent_<BreakPoint>d__12>__
                                 );
      FUN_055d2e5c(lVar14,uVar16,
                   *(undefined8 *)
                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<WebRequestStream_<ProcessWrite>d__34>__
                   ,0);
      plVar9 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x10);
      *plVar9 = lVar14;
      thunk_FUN_0333a630(plVar9,lVar14);
    }
    plVar9 = (long *)FUN_039a8198(uVar7,lVar14,
                                  *(undefined8 *)
                                   Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<TaskExtensions_<HandleCancellation>d__2>__
                                 );
    if (plVar9 != (long *)0x0) {
      lVar11 = *plVar9;
      uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) ==
              *(long *)
               Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<TransformExtensions_<LerpPosition>d__1>__
             ) {
            puVar8 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_06b56550;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar8 = (undefined8 *)
               FUN_032937ac(plVar9,*(long *)
                                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<TransformExtensions_<LerpPosition>d__1>__
                            ,0);
LAB_06b56550:
      plVar9 = (long *)(*(code *)*puVar8)(plVar9,puVar8[1]);
      puVar6 = 
      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<WebRequestStream_<FinishWriting>d__31>__
      ;
      puVar5 = 
      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<TransformExtensions_<LerpScale>d__0>__
      ;
      puVar3 = PTR_DAT_0727a180;
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      do {
        lVar11 = *plVar9;
        uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *(long *)puVar3) {
              puVar8 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_06b565cc;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar8 = (undefined8 *)FUN_032937ac(plVar9,*(long *)puVar3,0);
LAB_06b565cc:
        uVar12 = (*(code *)*puVar8)(plVar9,puVar8[1]);
        if ((uVar12 & 1) == 0) {
          if (plVar9 == (long *)0x0) goto LAB_06b566ec;
          lVar11 = *plVar9;
          uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar12 == 0) goto LAB_06b566c4;
          piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          goto LAB_06b566ac;
        }
        lVar11 = *plVar9;
        uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *(long *)puVar5) {
              puVar8 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_06b56628;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar8 = (undefined8 *)FUN_032937ac(plVar9,*(long *)puVar5,0);
LAB_06b56628:
        plVar10 = (long *)(*(code *)*puVar8)(plVar9,puVar8[1]);
        if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        FUN_06b5b9b0(plVar10,in_stack_00000000);
        if (in_stack_00000000 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        FUN_041e29a8(in_stack_00000000,*(int *)(in_stack_00000000 + 0x18) + -1,*(undefined8 *)puVar6
                    );
        (**(code **)(*plVar10 + 0x358))(plVar10);
      } while( true );
    }
  }
  goto LAB_06b56890;
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar13 = piVar13 + 4;
    if (uVar12 == 0) break;
LAB_06b566ac:
    if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_07279f60) {
      puVar8 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_06b566e0;
    }
  }
LAB_06b566c4:
  puVar8 = (undefined8 *)FUN_032937ac(plVar9,*(long *)PTR_DAT_07279f60,0);
LAB_06b566e0:
  (*(code *)*puVar8)(plVar9,puVar8[1]);
LAB_06b566ec:
  lVar11 = thunk_FUN_032a56a0(*(undefined8 *)
                               Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<StreamWriter_<WriteAsyncInternal>d__59>__
                             );
  FUN_050f8160(lVar11,*(undefined8 *)
                       Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<StreamWriter_<WriteAsyncInternal>d__57>__
              );
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  uVar12 = FUN_06b5bdcc();
  if ((uVar12 & 1) == 0) {
    return;
  }
  if (in_stack_00000000 != 0) {
    if (0 < *(int *)(in_stack_00000000 + 0x18)) {
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      FUN_06b5ba54(in_stack_00000000,1);
      FUN_06b5bdcc(in_stack_00000000,lVar11);
    }
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    FUN_06b5ca38();
    if (lVar11 != 0) {
      FUN_050f8f40(&stack0x00000008,lVar11,
                   *(undefined8 *)
                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<StreamWriter_<FlushAsyncInternal>d__74>__
                  );
      puVar5 = 
      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<UserManager_<LoginUser>d__3>__
      ;
      puVar3 = 
      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<TemplateSelectionElement_<LoadTemplateData>d__14>__
      ;
      in_stack_00000038 = in_stack_00000010;
      in_stack_00000030 = in_stack_00000008;
      in_stack_00000048 = in_stack_00000020;
      in_stack_00000040 = in_stack_00000018;
      in_stack_00000050 = in_stack_00000028;
      while (uVar12 = FUN_05391a64(&stack0x00000030,*(undefined8 *)puVar3),
            lVar11 = in_stack_00000048, uVar7 = in_stack_00000040, (uVar12 & 1) != 0) {
        if (in_stack_00000048 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        uVar16 = FUN_0432a3dc(in_stack_00000048,*(undefined8 *)puVar5);
        uVar2 = *(undefined4 *)(lVar11 + 0x18);
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
        }
        uVar12 = FUN_06b5cb60(uVar7,uVar16,uVar2);
        if ((uVar12 & 1) == 0) {
          FUN_06b5ae9c();
        }
      }
      FUN_05391b84(&stack0x00000030,
                   *(undefined8 *)
                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<TemplateSelectionElement_<LoadAndCreateButtons>d__10>__
                  );
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      uVar12 = FUN_06b5cca0();
      if ((uVar12 & 1) != 0) {
        return;
      }
      FUN_06b5ae9c();
      return;
    }
  }
LAB_06b56890:
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


