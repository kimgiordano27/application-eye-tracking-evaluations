/*
FUNCTION_NAME: Unity.Mathematics.float3$$get_yyxx
ENTRY_POINT: 05ae0238
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_5;strong_file_logging_hits_4;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
Unity_Mathematics_float3__get_yyxx
          (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  
  puVar1 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<StreamWriter_<FlushAsyncInternal>d__74>__
  ;
  if ((DAT_06bc26b0 & 1) == 0) {
    FUN_02f08768(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<StreamWriter_<FlushAsyncInternal>d__74>__
                );
    FUN_02f08768(PTR_DAT_067ca498);
    FUN_02f08768(
                Method_Newtonsoft_Json_Utilities_AsyncUtils_CancelIfRequestedAsync<Nullable<DateTime>>__
                );
    FUN_02f08768(PTR_DAT_067ca6f0);
    DAT_06bc26b0 = 1;
  }
  uVar2 = thunk_FUN_02f45270(*(undefined8 *)puVar1);
  thunk_FUN_05aa00a4(uVar2,0);
  lVar3 = FUN_05abef1c(uVar2,0);
  if ((param_1 == 0) || (plVar6 = *(long **)(param_1 + 0x150), plVar6 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  if (lVar3 == 0) {
    if (0x13 < *(uint *)(plVar6 + 3)) {
      plVar6[0x17] = 0;
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
  }
  else {
    lVar4 = thunk_FUN_02f45174(lVar3,*(undefined8 *)(*plVar6 + 0x40));
    if (lVar4 == 0) {
      uVar2 = thunk_FUN_02f52b60();
                    /* WARNING: Subroutine does not return */
      FUN_02f0888c(uVar2,0);
    }
    if (0x13 < *(uint *)(plVar6 + 3)) {
      plVar6[0x17] = lVar3;
      uVar5 = DAT_011b13e8;
      *(long *)(lVar3 + 0x78) = param_1;
      *(undefined8 *)(lVar3 + 0x80) = param_4;
      puVar1 = PTR_DAT_067ca498;
      *(undefined8 *)(lVar3 + 0x98) = uVar5;
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
      lVar4 = *(long *)puVar1;
      *(undefined8 *)(lVar3 + 0x60) = param_3;
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      uVar5 = _DAT_011b2430;
      *(undefined8 *)(lVar3 + 0x18) = _UNK_011b2438;
      *(undefined8 *)(lVar3 + 0x10) = uVar5;
      FUN_05abcc30(lVar3,1,0);
      return uVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089d0();
}


