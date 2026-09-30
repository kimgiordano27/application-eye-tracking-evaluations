/*
FUNCTION_NAME: FUN_05ad4584
ENTRY_POINT: 05ad4584
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_6;strong_file_logging_hits_2;telemetry_or_network_hits_4;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_05ad4584(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined8 local_50;
  undefined8 uStack_48;
  
  puVar2 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_JsonTextWriter_<DoWriteStartObjectAsync>d__38>__
  ;
  if ((DAT_06bc2659 & 1) == 0) {
    FUN_02f08768(PTR_DAT_067ca498);
    FUN_02f08768(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_JsonTextWriter_<DoWriteStartObjectAsync>d__38>__
                );
    FUN_02f08768(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_WebRequestStream_<WriteRequestAsync>d__38>__
                );
    FUN_02f08768(Method_System_Security_Cryptography_AsymmetricAlgorithm_set_KeySize__);
    DAT_06bc2659 = 1;
  }
  lVar5 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
  thunk_FUN_05a9ef74(lVar5,0);
  lVar6 = FUN_05abef1c(lVar5,0);
  if ((param_1 == 0) || (plVar10 = *(long **)(param_1 + 0x150), plVar10 == (long *)0x0)) {
LAB_05ad473c:
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  if (lVar6 == 0) {
    if (0x44 < *(uint *)(plVar10 + 3)) {
      plVar10[0x48] = 0;
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
  }
  else {
    lVar7 = thunk_FUN_02f45174(lVar6,*(undefined8 *)(*plVar10 + 0x40));
    puVar2 = Method_System_Security_Cryptography_AsymmetricAlgorithm_set_KeySize__;
    if (lVar7 == 0) {
      uVar8 = thunk_FUN_02f52b60();
                    /* WARNING: Subroutine does not return */
      FUN_02f0888c(uVar8,0);
    }
    if (0x44 < *(uint *)(plVar10 + 3)) {
      plVar10[0x48] = lVar6;
      puVar3 = 
      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_WebRequestStream_<WriteRequestAsync>d__38>__
      ;
      *(long *)(lVar6 + 0x78) = param_1;
      puVar1 = PTR_DAT_067ca498;
      uVar8 = *(undefined8 *)puVar2;
      *(undefined8 *)(lVar6 + 0x80) = param_4;
      local_50 = 0;
      uStack_48 = 0;
      FUN_05a9e398(&local_50,uVar8,0);
      uVar4 = uStack_48;
      uVar8 = local_50;
      uVar9 = *(undefined8 *)puVar3;
      local_50 = 0;
      uStack_48 = 0;
      *(undefined8 *)(lVar6 + 0x28) = uVar4;
      *(undefined8 *)(lVar6 + 0x20) = uVar8;
      FUN_05a9e398(&local_50,uVar9,0);
      uVar8 = FUN_05a9e714(local_50,uStack_48,0);
      *(undefined8 *)(lVar6 + 0x40) = uVar8;
      *(undefined8 *)(lVar6 + 0x58) = param_2;
      *(undefined8 *)(lVar6 + 0x60) = param_3;
      FUN_05abcc5c(lVar6,1,0);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      uVar8 = _DAT_011b5930;
      *(undefined8 *)(lVar6 + 0x18) = _UNK_011b5938;
      *(undefined8 *)(lVar6 + 0x10) = uVar8;
      auVar11 = FUN_05aac730(0,0);
      auVar12 = FUN_05aac730(1,0);
      *(undefined1 (*) [16])(lVar6 + 200) = auVar12;
      *(undefined1 (*) [16])(lVar6 + 0xb8) = auVar11;
      FUN_05abcc30(lVar6,1,0);
      if (lVar5 != 0) {
        *(undefined4 *)(lVar5 + 0x140) = 0x41;
        return lVar5;
      }
      goto LAB_05ad473c;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089d0();
}


