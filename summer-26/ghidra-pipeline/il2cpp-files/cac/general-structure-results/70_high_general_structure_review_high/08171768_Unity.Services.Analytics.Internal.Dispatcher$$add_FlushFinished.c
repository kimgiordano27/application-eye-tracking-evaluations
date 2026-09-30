/*
FUNCTION_NAME: Unity.Services.Analytics.Internal.Dispatcher$$add_FlushFinished
ENTRY_POINT: 08171768
PROGRAM: cac-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


long Unity_Services_Analytics_Internal_Dispatcher__add_FlushFinished(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long *unaff_x21;
  undefined8 *unaff_x22;
  
  thunk_FUN_03f86000();
  lVar4 = thunk_FUN_03f4e68c(*unaff_x22);
  FUN_080882f4(lVar4,0);
  if (*(int *)(*unaff_x21 + 0xe4) == 0) {
    thunk_FUN_03f6fea8();
  }
  puVar3 = PTR_DAT_0910dcc0;
  puVar2 = PTR_DAT_0910dc98;
  puVar1 = PTR_DAT_0910cb98;
  if (lVar4 != 0) {
    FUN_0807ceac(lVar4,*(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0xa0),
                 *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0xa8),0);
    uVar5 = thunk_FUN_03f4e68c(*(undefined8 *)puVar3);
    FUN_0503888c();
    *(undefined8 *)(lVar4 + 0x50) = uVar5;
    thunk_FUN_03f86000((undefined8 *)(lVar4 + 0x50),uVar5);
    uVar5 = thunk_FUN_03f4e68c(*(undefined8 *)puVar2);
    FUN_07233930();
    *(undefined8 *)(lVar4 + 0x58) = uVar5;
    thunk_FUN_03f86000((undefined8 *)(lVar4 + 0x58),uVar5);
    uVar5 = *(undefined8 *)puVar1;
    *(undefined4 *)(lVar4 + 0x78) = 0x3c23d70a;
    uVar5 = thunk_FUN_03f4e68c(uVar5);
    FUN_05035934();
    *(undefined8 *)(lVar4 + 0x48) = uVar5;
    thunk_FUN_03f86000((undefined8 *)(lVar4 + 0x48),uVar5);
    return lVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f1362c();
}


