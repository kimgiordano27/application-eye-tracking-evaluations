/*
FUNCTION_NAME: Unity.Mathematics.half4$$get_wyyx
ENTRY_POINT: 05afa1f0
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 83
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_6;strong_file_logging_hits_2;telemetry_or_network_hits_1;frame_or_lifecycle_behavior
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long Unity_Mathematics_half4__get_wyyx
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  
  puVar1 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<StreamWriter_<WriteAsyncInternal>d__57>__
  ;
  if ((DAT_06bc2791 & 1) == 0) {
    FUN_02f08768(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<StreamWriter_<WriteAsyncInternal>d__57>__
                );
    FUN_02f08768(PTR_DAT_067ca498);
    FUN_02f08768(
                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_SpatialAnchorCoreBuildingBlock_<InitSpatialAnchorAsync>d__21>__
                );
    FUN_02f08768(Unity_AppUI_UI_Tabs_UxmlSerializedData_var);
    DAT_06bc2791 = 1;
  }
  lVar2 = thunk_FUN_02f45270(*(undefined8 *)puVar1);
  FUN_05a9f134(lVar2,0);
  if (lVar2 != 0) {
    *(undefined1 *)(lVar2 + 0x114) = 1;
    *(undefined8 *)(lVar2 + 0x104) = 0xff7ffffd00000001;
    lVar3 = FUN_05abef1c(lVar2,0);
    if ((param_1 != 0) && (plVar6 = *(long **)(param_1 + 0x150), plVar6 != (long *)0x0)) {
      if (lVar3 == 0) {
        if (0xf4 < *(uint *)(plVar6 + 3)) {
          plVar6[0xf8] = 0;
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
      }
      else {
        lVar4 = thunk_FUN_02f45174(lVar3,*(undefined8 *)(*plVar6 + 0x40));
        if (lVar4 == 0) {
          uVar5 = thunk_FUN_02f52b60();
                    /* WARNING: Subroutine does not return */
          FUN_02f0888c(uVar5,0);
        }
        if (0xf4 < *(uint *)(plVar6 + 3)) {
          plVar6[0xf8] = lVar3;
          *(long *)(lVar3 + 0x78) = param_1;
          puVar1 = PTR_DAT_067ca498;
          *(undefined8 *)(lVar3 + 0x80) = param_4;
          FUN_05a9e398();
          *(undefined8 *)(lVar3 + 0x28) = 0;
          *(undefined8 *)(lVar3 + 0x20) = 0;
          FUN_05a9e398();
          uVar5 = FUN_05a9e714(0,0,0);
          *(undefined8 *)(lVar3 + 0x40) = uVar5;
          FUN_05a9e398();
          uVar5 = FUN_05a9e714(0,0,0);
          *(undefined8 *)(lVar3 + 0x50) = uVar5;
          *(undefined8 *)(lVar3 + 0x58) = param_2;
          *(undefined8 *)(lVar3 + 0x60) = param_3;
          FUN_05abbad0(lVar3,1,0);
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          uVar5 = _DAT_011b3460;
          *(undefined8 *)(lVar3 + 0x18) = _UNK_011b3468;
          *(undefined8 *)(lVar3 + 0x10) = uVar5;
          FUN_05abcc30(lVar3,1,0);
          return lVar2;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_02f089d0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


