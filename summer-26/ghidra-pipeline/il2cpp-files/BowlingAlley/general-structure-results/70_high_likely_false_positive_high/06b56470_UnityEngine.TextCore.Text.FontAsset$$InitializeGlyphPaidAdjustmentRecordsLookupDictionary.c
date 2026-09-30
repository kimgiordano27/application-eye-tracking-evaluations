/*
FUNCTION_NAME: UnityEngine.TextCore.Text.FontAsset$$InitializeGlyphPaidAdjustmentRecordsLookupDictionary
ENTRY_POINT: 06b56470
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 89
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ui_interaction;data_collection;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_3;strong_file_logging_hits_4;telemetry_or_network_hits_4;frame_or_lifecycle_behavior;negative_framework_namespace_without_eye_use_flow;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x06b566f8) */
/* WARNING: Removing unreachable block (ram,0x06b56894) */

void UnityEngine_TextCore_Text_FontAsset__InitializeGlyphPaidAdjustmentRecordsLookupDictionary
               (long param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  int in_w9;
  ulong uVar10;
  int *piVar11;
  undefined8 uVar12;
  long *unaff_x25;
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
    param_1 = *(long *)
               Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<WebRequestStream_<SetHeadersAsync>d__37>__
    ;
  }
  puVar2 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<WebRequestStream_<SetHeadersAsync>d__37>__
  ;
  uVar12 = **(undefined8 **)(param_1 + 0xb8);
  uVar5 = thunk_FUN_032a56a0(*(undefined8 *)
                              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<TimeBudgetPerFrameDeferAgent_<BreakPoint>d__12>__
                            );
  FUN_055d2e5c(uVar5,uVar12,
               *(undefined8 *)
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<WebRequestStream_<ProcessWrite>d__34>__
               ,0);
  puVar6 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10);
  *puVar6 = uVar5;
  thunk_FUN_0333a630(puVar6,uVar5);
  plVar7 = (long *)FUN_039a8198();
  if (plVar7 != (long *)0x0) {
    lVar9 = *plVar7;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) ==
            *(long *)
             Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<TransformExtensions_<LerpPosition>d__1>__
           ) {
          puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_06b56550;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar6 = (undefined8 *)
             FUN_032937ac(plVar7,*(long *)
                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<TransformExtensions_<LerpPosition>d__1>__
                          ,0);
LAB_06b56550:
    plVar7 = (long *)(*(code *)*puVar6)(plVar7,puVar6[1]);
    puVar4 = 
    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<WebRequestStream_<FinishWriting>d__31>__
    ;
    puVar3 = 
    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<TransformExtensions_<LerpScale>d__0>__
    ;
    puVar2 = PTR_DAT_0727a180;
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    do {
      lVar9 = *plVar7;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
            puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_06b565cc;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar6 = (undefined8 *)FUN_032937ac(plVar7,*(long *)puVar2,0);
LAB_06b565cc:
      uVar10 = (*(code *)*puVar6)(plVar7,puVar6[1]);
      if ((uVar10 & 1) == 0) {
        if (plVar7 == (long *)0x0) goto LAB_06b566ec;
        lVar9 = *plVar7;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar10 == 0) goto LAB_06b566c4;
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        goto LAB_06b566ac;
      }
      lVar9 = *plVar7;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)puVar3) {
            puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_06b56628;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar6 = (undefined8 *)FUN_032937ac(plVar7,*(long *)puVar3,0);
LAB_06b56628:
      plVar8 = (long *)(*(code *)*puVar6)(plVar7,puVar6[1]);
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      FUN_06b5b9b0(plVar8,in_stack_00000000);
      if (in_stack_00000000 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      FUN_041e29a8(in_stack_00000000,*(int *)(in_stack_00000000 + 0x18) + -1,*(undefined8 *)puVar4);
      (**(code **)(*plVar8 + 0x358))(plVar8);
    } while( true );
  }
  goto LAB_06b56890;
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar11 = piVar11 + 4;
    if (uVar10 == 0) break;
LAB_06b566ac:
    if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_07279f60) {
      puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_06b566e0;
    }
  }
LAB_06b566c4:
  puVar6 = (undefined8 *)FUN_032937ac(plVar7,*(long *)PTR_DAT_07279f60,0);
LAB_06b566e0:
  (*(code *)*puVar6)(plVar7,puVar6[1]);
LAB_06b566ec:
  lVar9 = thunk_FUN_032a56a0(*(undefined8 *)
                              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<StreamWriter_<WriteAsyncInternal>d__59>__
                            );
  FUN_050f8160(lVar9,*(undefined8 *)
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<StreamWriter_<WriteAsyncInternal>d__57>__
              );
  if (*(int *)(*unaff_x25 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  uVar10 = FUN_06b5bdcc();
  if ((uVar10 & 1) == 0) {
    return;
  }
  if (in_stack_00000000 != 0) {
    if (0 < *(int *)(in_stack_00000000 + 0x18)) {
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      FUN_06b5ba54(in_stack_00000000,1);
      FUN_06b5bdcc(in_stack_00000000,lVar9);
    }
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    FUN_06b5ca38();
    if (lVar9 != 0) {
      FUN_050f8f40(&stack0x00000008,lVar9,
                   *(undefined8 *)
                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<StreamWriter_<FlushAsyncInternal>d__74>__
                  );
      puVar3 = 
      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<UserManager_<LoginUser>d__3>__
      ;
      puVar2 = 
      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<TemplateSelectionElement_<LoadTemplateData>d__14>__
      ;
      in_stack_00000038 = in_stack_00000010;
      in_stack_00000030 = in_stack_00000008;
      in_stack_00000048 = in_stack_00000020;
      in_stack_00000040 = in_stack_00000018;
      in_stack_00000050 = in_stack_00000028;
      while (uVar10 = FUN_05391a64(&stack0x00000030,*(undefined8 *)puVar2),
            lVar9 = in_stack_00000048, uVar5 = in_stack_00000040, (uVar10 & 1) != 0) {
        if (in_stack_00000048 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        uVar12 = FUN_0432a3dc(in_stack_00000048,*(undefined8 *)puVar3);
        uVar1 = *(undefined4 *)(lVar9 + 0x18);
        if (*(int *)(*unaff_x25 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
        }
        uVar10 = FUN_06b5cb60(uVar5,uVar12,uVar1);
        if ((uVar10 & 1) == 0) {
          FUN_06b5ae9c();
        }
      }
      FUN_05391b84(&stack0x00000030,
                   *(undefined8 *)
                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<TemplateSelectionElement_<LoadAndCreateButtons>d__10>__
                  );
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      uVar10 = FUN_06b5cca0();
      if ((uVar10 & 1) != 0) {
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


