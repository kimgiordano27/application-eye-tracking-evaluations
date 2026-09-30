/*
FUNCTION_NAME: FUN_05ae1e24
ENTRY_POINT: 05ae1e24
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 88
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_6;strong_file_logging_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_05ae1e24(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined8 local_50;
  undefined8 uStack_48;
  
  puVar2 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<StreamWriter_<WriteAsyncInternal>d__57>__
  ;
  if ((DAT_06bc26bf & 1) == 0) {
    FUN_02f08768(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<StreamWriter_<WriteAsyncInternal>d__57>__
                );
    FUN_02f08768(PTR_DAT_067ca498);
    FUN_02f08768(Unity_AppUI_UI_Tabs_UxmlSerializedData_var);
    FUN_02f08768(
                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitOnCompleted<OVRTask_Awaiter<bool>,_OVRSceneManager_<QueryForExistingAnchorsTransform>d__39>__
                );
    DAT_06bc26bf = 1;
  }
  lVar4 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
  FUN_05a9f134(lVar4,0);
  if (lVar4 != 0) {
    *(undefined1 *)(lVar4 + 0x114) = 1;
    *(undefined8 *)(lVar4 + 0x104) = 0xff7ffffd00000001;
    lVar5 = FUN_05abef1c(lVar4,0);
    if ((param_1 != 0) && (plVar10 = *(long **)(param_1 + 0x150), plVar10 != (long *)0x0)) {
      if (lVar5 == 0) {
        if (0x22 < *(uint *)(plVar10 + 3)) {
          plVar10[0x26] = 0;
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
      }
      else {
        lVar6 = thunk_FUN_02f45174(lVar5,*(undefined8 *)(*plVar10 + 0x40));
        puVar2 = Unity_AppUI_UI_Tabs_UxmlSerializedData_var;
        if (lVar6 == 0) {
          uVar7 = thunk_FUN_02f52b60();
                    /* WARNING: Subroutine does not return */
          FUN_02f0888c(uVar7,0);
        }
        if (0x22 < *(uint *)(plVar10 + 3)) {
          plVar10[0x26] = lVar5;
          puVar3 = 
          Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitOnCompleted<OVRTask_Awaiter<bool>,_OVRSceneManager_<QueryForExistingAnchorsTransform>d__39>__
          ;
          *(long *)(lVar5 + 0x78) = param_1;
          puVar1 = PTR_DAT_067ca498;
          uVar7 = *(undefined8 *)puVar2;
          *(undefined8 *)(lVar5 + 0x80) = param_4;
          local_50 = 0;
          uStack_48 = 0;
          FUN_05a9e398(&local_50,uVar7,0);
          uVar9 = uStack_48;
          uVar7 = local_50;
          uVar8 = *(undefined8 *)puVar3;
          local_50 = 0;
          uStack_48 = 0;
          *(undefined8 *)(lVar5 + 0x28) = uVar9;
          *(undefined8 *)(lVar5 + 0x20) = uVar7;
          FUN_05a9e398(&local_50,uVar8,0);
          uVar7 = FUN_05a9e714(local_50,uStack_48,0);
          uVar9 = *(undefined8 *)puVar3;
          *(undefined8 *)(lVar5 + 0x40) = uVar7;
          local_50 = 0;
          uStack_48 = 0;
          FUN_05a9e398(&local_50,uVar9,0);
          uVar7 = FUN_05a9e714(local_50,uStack_48,0);
          *(undefined8 *)(lVar5 + 0x50) = uVar7;
          *(undefined8 *)(lVar5 + 0x58) = param_2;
          *(undefined8 *)(lVar5 + 0x60) = param_3;
          FUN_05abbad0(lVar5,1,0);
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          uVar7 = _DAT_011b5390;
          *(undefined8 *)(lVar5 + 0x18) = _UNK_011b5398;
          *(undefined8 *)(lVar5 + 0x10) = uVar7;
          FUN_05abcc30(lVar5,1,0);
          return lVar4;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_02f089d0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


