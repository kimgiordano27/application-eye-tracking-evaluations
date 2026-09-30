/*
FUNCTION_NAME: FUN_06b5cd04
ENTRY_POINT: 06b5cd04
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;data_collection;frame_behavior
EVIDENCE: validity_or_gating_hits_7;ui_or_gameplay_sink_hits_2;strong_file_logging_hits_2;frame_or_lifecycle_behavior
*/


void FUN_06b5cd04(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  uint uVar9;
  
  puVar2 = PTR_DAT_0727f228;
  if ((DAT_076e3b78 & 1) == 0) {
    thunk_FUN_032e1da0(PTR_DAT_0727f228);
    thunk_FUN_032e1da0(PTR_DAT_0727fa20);
    thunk_FUN_032e1da0(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<JsonTextWriter_<DoWriteValueAsync>d__64>__
                      );
    thunk_FUN_032e1da0(PTR_DAT_0727cc98);
    thunk_FUN_032e1da0(
                      Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<AssetSelectionUI_<GetAssets>d__9>__
                      );
    DAT_076e3b78 = 1;
  }
  lVar5 = FUN_032d5d3c(*(undefined8 *)puVar2,2);
  if (lVar5 != 0) {
    if ((*(int *)(lVar5 + 0x18) == 0) ||
       (*(undefined2 *)(lVar5 + 0x20) = 0x2f, *(int *)(lVar5 + 0x18) == 1)) {
LAB_06b5cee0:
                    /* WARNING: Subroutine does not return */
      Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
    }
    *(undefined2 *)(lVar5 + 0x22) = 0x5f;
    puVar3 = 
    Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<AssetSelectionUI_<GetAssets>d__9>__
    ;
    puVar2 = PTR_DAT_0727cc98;
    if (param_1 != 0) {
      lVar5 = FUN_057ad8c4(param_1,lVar5,0);
      plVar6 = (long *)thunk_FUN_032a56a0(*(undefined8 *)puVar2);
      FUN_057b6818(plVar6,*(undefined8 *)puVar3,0);
      puVar3 = 
      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<JsonTextWriter_<DoWriteValueAsync>d__64>__
      ;
      puVar2 = PTR_DAT_0727fa20;
      if (lVar5 != 0) {
        uVar1 = *(uint *)(lVar5 + 0x18);
        if (0 < (int)uVar1) {
          uVar9 = 0;
          do {
            if (uVar1 <= uVar9) goto LAB_06b5cee0;
            lVar8 = *(long *)(lVar5 + (long)(int)uVar9 * 8 + 0x20);
            if (lVar8 == 0) goto LAB_06b5cedc;
            if (*(int *)(lVar8 + 0x10) != 0) {
              if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                thunk_FUN_032cd7c0();
              }
              lVar8 = FUN_06b5d00c(lVar8);
              if (lVar8 == 0) goto LAB_06b5cedc;
              uVar4 = FUN_057a62b4(lVar8,0,0);
              if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                thunk_FUN_032cd7c0(*(long *)puVar2);
              }
              uVar4 = FUN_058a4dd0(uVar4,0);
              if (plVar6 == (long *)0x0) goto LAB_06b5cedc;
              FUN_057b889c(plVar6,uVar4,0);
              uVar7 = FUN_057aeed8(lVar8,1,0);
              FUN_057b7f84(plVar6,uVar7,0);
            }
            uVar1 = *(uint *)(lVar5 + 0x18);
            uVar9 = uVar9 + 1;
          } while ((int)uVar9 < (int)uVar1);
        }
        if (plVar6 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x06b5ced8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
          return;
        }
      }
    }
  }
LAB_06b5cedc:
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


