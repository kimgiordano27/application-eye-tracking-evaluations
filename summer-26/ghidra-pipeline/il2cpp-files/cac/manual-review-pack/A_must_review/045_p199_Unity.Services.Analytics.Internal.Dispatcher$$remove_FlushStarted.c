/*
FUNCTION_NAME: Unity.Services.Analytics.Internal.Dispatcher$$remove_FlushStarted
ENTRY_POINT: 081716b8
PROGRAM: cac-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


long Unity_Services_Analytics_Internal_Dispatcher__remove_FlushStarted(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 *unaff_x21;
  
  FUN_03f13384(*(undefined8 *)(param_1 + 0x2d8));
  FUN_03f13384(PTR_DAT_091752e8);
  FUN_03f13384(PTR_DAT_091752f8);
  FUN_03f13384(PTR_DAT_0910dcc0);
  FUN_03f13384(PTR_DAT_0910cb98);
  FUN_03f13384(PTR_DAT_0917bab8);
  FUN_03f13384(PTR_DAT_0917bd48);
  FUN_03f13384(PTR_DAT_0917bd50);
  FUN_03f13384(PTR_DAT_0917bd58);
  FUN_03f13384(PTR_DAT_0917bd40);
  *(undefined1 *)(unaff_x19 + 0xb06) = 1;
  lVar8 = thunk_FUN_03f4e68c(*unaff_x21);
  FUN_074f9228(lVar8,0);
  puVar4 = PTR_DAT_0917bab8;
  puVar1 = PTR_DAT_091752f8;
  if (lVar8 != 0) {
    *(undefined8 *)(lVar8 + 0x10) = unaff_x20;
    thunk_FUN_03f86000();
    lVar9 = thunk_FUN_03f4e68c(*(undefined8 *)puVar1);
    FUN_080882f4(lVar9,0);
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    puVar7 = PTR_DAT_0917bd58;
    puVar6 = PTR_DAT_0917bd50;
    puVar5 = PTR_DAT_0917bd48;
    puVar3 = PTR_DAT_0910dcc0;
    puVar2 = PTR_DAT_0910dc98;
    puVar1 = PTR_DAT_0910cb98;
    if (lVar9 != 0) {
      lVar11 = *(long *)(*(long *)puVar4 + 0xb8);
      FUN_0807ceac(lVar9,*(undefined8 *)(lVar11 + 0xa0),*(undefined8 *)(lVar11 + 0xa8),0);
      uVar10 = thunk_FUN_03f4e68c(*(undefined8 *)puVar3);
      FUN_0503888c(uVar10,lVar8,*(undefined8 *)puVar5,0);
      *(undefined8 *)(lVar9 + 0x50) = uVar10;
      thunk_FUN_03f86000((undefined8 *)(lVar9 + 0x50),uVar10);
      uVar10 = thunk_FUN_03f4e68c(*(undefined8 *)puVar2);
      FUN_07233930(uVar10,lVar8,*(undefined8 *)puVar6,0);
      *(undefined8 *)(lVar9 + 0x58) = uVar10;
      thunk_FUN_03f86000((undefined8 *)(lVar9 + 0x58),uVar10);
      uVar10 = *(undefined8 *)puVar1;
      *(undefined4 *)(lVar9 + 0x78) = 0x3c23d70a;
      uVar10 = thunk_FUN_03f4e68c(uVar10);
      FUN_05035934(uVar10,lVar8,*(undefined8 *)puVar7,0);
      *(undefined8 *)(lVar9 + 0x48) = uVar10;
      thunk_FUN_03f86000((undefined8 *)(lVar9 + 0x48),uVar10);
      return lVar9;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f1362c();
}


