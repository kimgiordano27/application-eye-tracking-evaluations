/*
FUNCTION_NAME: FUN_06b546f8
ENTRY_POINT: 06b546f8
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection;frame_behavior
EVIDENCE: validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_1;strong_file_logging_hits_21;frame_or_lifecycle_behavior
*/


undefined8 FUN_06b546f8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  
  puVar1 = PTR_DAT_07281708;
  if ((DAT_076e3a09 & 1) == 0) {
    thunk_FUN_032e1da0(PTR_DAT_07279480);
    thunk_FUN_032e1da0(PTR_DAT_072798f8);
    thunk_FUN_032e1da0(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<JsonTextWriter_<DoWriteStartConstructorAsync>d__40>__
                      );
    thunk_FUN_032e1da0(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<JsonTextWriter_<DoWriteStartObjectAsync>d__38>__
                      );
    thunk_FUN_032e1da0(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<JsonTextWriter_<DoWriteUndefinedAsync>d__43>__
                      );
    thunk_FUN_032e1da0(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<JavaScriptUtils_<WriteEscapedJavaScriptStringWithDelimitersAsync>d__13>__
                      );
    thunk_FUN_032e1da0(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<JsonTextWriter_<DoWriteValueAsync>d__60>__
                      );
    thunk_FUN_032e1da0(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<JsonReader_<ReaderReadAndAssertAsync>d__2>__
                      );
    thunk_FUN_032e1da0(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<JsonReader_<SkipAsync>d__1>__
                      );
    thunk_FUN_032e1da0(PTR_DAT_072794f0);
    thunk_FUN_032e1da0(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<JsonTextWriter_<DoWriteValueAsync>d__64>__
                      );
    thunk_FUN_032e1da0(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<JsonTextWriter_<DoWriteValueAsync>d__78>__
                      );
    thunk_FUN_032e1da0(PTR_DAT_07281708);
    thunk_FUN_032e1da0(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<JsonTextWriter_<DoWriteValueAsync>d__97>__
                      );
    thunk_FUN_032e1da0(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<JsonTextWriter_<DoWriteValueAsync>d__99>__
                      );
    thunk_FUN_032e1da0(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<JsonTextWriter_<WriteIndentAsync>d__13>__
                      );
    thunk_FUN_032e1da0(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<JsonTextWriter_<WriteIntegerValueAsync>d__24>__
                      );
    thunk_FUN_032e1da0(PTR_DAT_07279b30);
    thunk_FUN_032e1da0(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<JsonTextWriter_<WriteValueInternalAsync>d__15>__
                      );
    DAT_076e3a09 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  if (DAT_076e3d05 == '\0') {
    thunk_FUN_032e1da0(PTR_DAT_07281708);
    DAT_076e3d05 = '\x01';
  }
  puVar2 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<JsonTextWriter_<DoWriteValueAsync>d__64>__
  ;
  lVar3 = *(long *)puVar1;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar3 = *(long *)puVar1;
  }
  plVar4 = (long *)(*(long *)(lVar3 + 0xb8) + 0x10);
  *plVar4 = param_1;
  thunk_FUN_0333a630(plVar4,param_1);
  *(undefined4 *)(param_1 + 0x28) = 1;
  UnityEngine_TextCore_Text_FontAsset__get_fallbackFontAssetTable(0);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  FUN_06b54cc0();
  FUN_06b54eac();
  uVar5 = FUN_06b54fcc();
  puVar2 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<JsonTextWriter_<WriteValueInternalAsync>d__15>__
  ;
  if ((uVar5 & 1) == 0) {
    if (*(int *)(*(long *)PTR_DAT_072798f8 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    FUN_06bb2a00(*(undefined8 *)puVar2,0);
    return 0;
  }
  lVar3 = FUN_06b50bc8(0);
  lVar6 = FUN_06b50bc8(0);
  puVar2 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<JsonTextWriter_<WriteIntegerValueAsync>d__24>__
  ;
  if (lVar6 != 0) {
    uVar7 = *(undefined8 *)(lVar6 + 0x18);
    lVar6 = *(long *)
             Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<JsonTextWriter_<WriteIntegerValueAsync>d__24>__
    ;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar6 = *(long *)puVar2;
    }
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar6 = *(long *)puVar2;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_032a56a0(*(undefined8 *)
                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<JsonReader_<ReaderReadAndAssertAsync>d__2>__
                                );
      FUN_055d2e5c(lVar8,uVar9,
                   *(undefined8 *)
                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<JsonTextWriter_<DoWriteValueAsync>d__97>__
                   ,0);
      plVar4 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
      *plVar4 = lVar8;
      thunk_FUN_0333a630(plVar4,lVar8);
    }
    uVar7 = FUN_039a8198(uVar7,lVar8,
                         *(undefined8 *)
                          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<JavaScriptUtils_<WriteEscapedJavaScriptStringWithDelimitersAsync>d__13>__
                        );
    lVar6 = *(long *)puVar2;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_032cd7c0(lVar6);
      lVar6 = *(long *)puVar2;
    }
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x10);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_032cd7c0(lVar6);
        lVar6 = *(long *)puVar2;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_032a56a0(*(undefined8 *)
                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<JsonTextWriter_<DoWriteValueAsync>d__60>__
                                );
      FUN_055d3620(lVar8,uVar9,
                   *(undefined8 *)
                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<JsonTextWriter_<DoWriteValueAsync>d__99>__
                   ,0);
      plVar4 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10);
      *plVar4 = lVar8;
      thunk_FUN_0333a630(plVar4,lVar8);
    }
    uVar7 = FUN_03995d18(uVar7,lVar8,
                         *(undefined8 *)
                          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<JsonTextWriter_<DoWriteStartConstructorAsync>d__40>__
                        );
    lVar6 = *(long *)puVar2;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_032cd7c0(lVar6);
      lVar6 = *(long *)puVar2;
    }
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x18);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_032cd7c0(lVar6);
        lVar6 = *(long *)puVar2;
      }
      uVar9 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_032a56a0(*(undefined8 *)
                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<JsonReader_<SkipAsync>d__1>__
                                );
      Meta_WitAi_Json_WitResponseArray_<get_Childs>d__13__System_IDisposable_Dispose
                (lVar8,uVar9,
                 *(undefined8 *)
                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<JsonTextWriter_<WriteIndentAsync>d__13>__
                 ,0);
      plVar4 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x18);
      *plVar4 = lVar8;
      thunk_FUN_0333a630(plVar4,lVar8);
    }
    uVar7 = FUN_039a3d40(uVar7,lVar8,
                         *(undefined8 *)
                          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<JsonTextWriter_<DoWriteStartObjectAsync>d__38>__
                        );
    uVar7 = FUN_039a43e4(uVar7,*(undefined8 *)
                                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<JsonTextWriter_<DoWriteUndefinedAsync>d__43>__
                        );
    if (lVar3 != 0) {
      *(undefined8 *)(lVar3 + 0x18) = uVar7;
      thunk_FUN_0333a630((undefined8 *)(lVar3 + 0x18),uVar7);
      FUN_06b55034();
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      uVar5 = FUN_06b5514c();
      if ((uVar5 & 1) == 0) {
        return 0;
      }
      FUN_06b551bc(param_1);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      FUN_06b5548c();
      uVar7 = FUN_06b50bc8(0);
      if (*(int *)(*(long *)PTR_DAT_072794f0 + 0xe0) == 0) {
        thunk_FUN_032cd7c0(*(long *)PTR_DAT_072794f0);
      }
      uVar5 = FUN_06be9890(0,uVar7,0);
      if ((uVar5 & 1) != 0) {
        lVar3 = FUN_06b50bc8(0);
        if (lVar3 == 0) goto LAB_06b54c40;
        FUN_06b513b0();
      }
      uVar5 = FUN_06b55524(param_1);
      if ((uVar5 & 1) == 0) {
        return 0;
      }
      if (DAT_076e3d06 == '\0') {
        thunk_FUN_032e1da0(
                          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<JsonTextWriter_<WriteValueNonNullAsync>d__54>__
                          );
        DAT_076e3d06 = '\x01';
      }
      if (**(char **)(*(long *)
                       Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<JsonTextWriter_<WriteValueNonNullAsync>d__54>__
                     + 0xb8) != '\0') {
        return 0;
      }
      FUN_06b55640();
      uVar7 = FUN_06b52150(1);
      FUN_06b55790(uVar7,0);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      FUN_06b55960();
      uVar7 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_07279b30);
      FUN_06bfb7c8(uVar7,param_1,
                   *(undefined8 *)
                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<JsonTextWriter_<DoWriteValueAsync>d__78>__
                   ,0);
      if (*(int *)(*(long *)PTR_DAT_07279480 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      FUN_06bad1c4(uVar7,0);
      *(undefined4 *)(param_1 + 0x28) = 2;
      return 1;
    }
  }
LAB_06b54c40:
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


