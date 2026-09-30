/*
FUNCTION_NAME: Unity.Services.Analytics.Internal.Dispatcher$$FlushBufferToService
ENTRY_POINT: 08171954
PROGRAM: cac-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


long Unity_Services_Analytics_Internal_Dispatcher__FlushBufferToService(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 unaff_x20;
  
  FUN_074f9228(param_1,0);
  puVar4 = PTR_DAT_0917bab8;
  puVar1 = PTR_DAT_091752f8;
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x10) = unaff_x20;
    thunk_FUN_03f86000();
    lVar8 = thunk_FUN_03f4e68c(*(undefined8 *)puVar1);
    FUN_080882f4(lVar8,0);
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    puVar7 = PTR_DAT_0917bd78;
    puVar6 = PTR_DAT_0917bd70;
    puVar5 = PTR_DAT_0917bd68;
    puVar3 = PTR_DAT_0910dcc0;
    puVar2 = PTR_DAT_0910dc98;
    puVar1 = PTR_DAT_0910cb98;
    if (lVar8 != 0) {
      lVar10 = *(long *)(*(long *)puVar4 + 0xb8);
      FUN_0807ceac(lVar8,*(undefined8 *)(lVar10 + 0xb0),*(undefined8 *)(lVar10 + 0xb8),0);
      uVar9 = thunk_FUN_03f4e68c(*(undefined8 *)puVar3);
      FUN_0503888c(uVar9,param_1,*(undefined8 *)puVar5,0);
      *(undefined8 *)(lVar8 + 0x50) = uVar9;
      thunk_FUN_03f86000((undefined8 *)(lVar8 + 0x50),uVar9);
      uVar9 = thunk_FUN_03f4e68c(*(undefined8 *)puVar2);
      FUN_07233930(uVar9,param_1,*(undefined8 *)puVar6,0);
      *(undefined8 *)(lVar8 + 0x58) = uVar9;
      thunk_FUN_03f86000((undefined8 *)(lVar8 + 0x58),uVar9);
      uVar9 = *(undefined8 *)puVar1;
      *(undefined4 *)(lVar8 + 0x78) = 0x3c23d70a;
      uVar9 = thunk_FUN_03f4e68c(uVar9);
      FUN_05035934(uVar9,param_1,*(undefined8 *)puVar7,0);
      *(undefined8 *)(lVar8 + 0x48) = uVar9;
      thunk_FUN_03f86000((undefined8 *)(lVar8 + 0x48),uVar9);
      return lVar8;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f1362c();
}


