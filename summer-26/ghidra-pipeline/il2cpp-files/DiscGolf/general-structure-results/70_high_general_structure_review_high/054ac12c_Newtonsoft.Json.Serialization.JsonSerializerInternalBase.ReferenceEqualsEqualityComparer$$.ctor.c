/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalBase.ReferenceEqualsEqualityComparer$$.ctor
ENTRY_POINT: 054ac12c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 88
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


/* WARNING: Removing unreachable block (ram,0x054ac2dc) */
/* WARNING: Removing unreachable block (ram,0x054ac350) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined1  [16]
Newtonsoft_Json_Serialization_JsonSerializerInternalBase_ReferenceEqualsEqualityComparer___ctor
          (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long unaff_x20;
  long *plVar8;
  long unaff_x21;
  undefined1 auVar9 [16];
  char cStack0000000000000034;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  ulong in_stack_00000050;
  undefined2 in_stack_00000058;
  undefined1 uStack000000000000005a;
  undefined5 uStack000000000000005b;
  undefined8 uStack0000000000000068;
  
  plVar8 = *(long **)(unaff_x20 + 0x410);
  uStack0000000000000068 = param_4;
  if ((*(byte *)(unaff_x21 + 0xc86) & 1) == 0) {
    FUN_02d965b8(PTR_DAT_06a0d410);
    FUN_02d965b8(PTR_DAT_06a21458);
    FUN_02d965b8(PTR_DAT_06a21090);
    FUN_02d965b8(PTR_DAT_06a20fd8);
    FUN_02d965b8(PTR_DAT_069fd9c8);
    *(undefined1 *)(unaff_x21 + 0xc86) = 1;
  }
  cStack0000000000000034 = '\0';
  if (*(int *)(*plVar8 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  uVar5 = FUN_0554ab48(&stack0x00000068,0);
  uVar3 = uStack0000000000000068;
  puVar2 = PTR_DAT_06a20fd8;
  if ((uVar5 & 1) == 0) {
    FUN_054a9b00(param_1);
    FUN_054a9c3c(param_1);
    lVar6 = FUN_054a9814(param_1);
    if ((lVar6 == 0) || (lVar7 = FUN_0554faf0(lVar6,0), lVar7 == 0)) {
LAB_054ac34c:
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    uVar5 = FUN_0555ffb4(lVar7,0);
    if ((uVar5 & 1) != 0) {
      cStack0000000000000034 = 1;
      if (*(int *)(param_1 + 0x44) == 0) {
        FUN_054aa404(param_1);
      }
      iVar4 = FUN_0467d48c(&stack0x00000040,*(undefined8 *)PTR_DAT_06a21458);
      iVar1 = *(int *)(param_1 + 0x38) - *(int *)(param_1 + 0x44);
      cStack0000000000000034 = iVar4 < iVar1;
      if (iVar4 < iVar1) {
        auVar9 = FUN_04684010(&stack0x00000040,*(undefined8 *)PTR_DAT_06a21090);
        FUN_054ab7ec(param_1,auVar9._0_8_,auVar9._8_8_);
        if (cStack0000000000000034 != '\0') {
          if (lVar6 == 0) goto LAB_054ac34c;
          FUN_0554fe30(lVar6,0);
        }
        in_stack_00000050 = 0;
        uStack000000000000005a = 0;
        uStack000000000000005b = 0;
        goto LAB_054ac328;
      }
    }
    uVar5 = FUN_054ac3a8(param_1,in_stack_00000040,in_stack_00000048,uStack0000000000000068,lVar7);
  }
  else {
    if (*(int *)(*(long *)PTR_DAT_069fd9c8 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    uVar5 = FUN_0383f3b4(uVar3,*(undefined8 *)puVar2);
  }
  in_stack_00000050 = 0;
  in_stack_00000058 = 0;
  uStack000000000000005a = 0;
  uStack000000000000005b = 0;
  if (uVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_054fa008(0x26,0);
  }
  in_stack_00000050 = uVar5;
  LeanTween__value(&stack0x00000050,uVar5);
  uStack000000000000005a = 1;
LAB_054ac328:
  auVar9._8_2_ = 0;
  auVar9._0_8_ = in_stack_00000050;
  auVar9[10] = uStack000000000000005a;
  auVar9._11_5_ = uStack000000000000005b;
  return auVar9;
}


