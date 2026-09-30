/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalBase$$ClearErrorContext
ENTRY_POINT: 07179660
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined1  [16] Newtonsoft_Json_Serialization_JsonSerializerInternalBase__ClearErrorContext(void)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  double *pdVar7;
  double dVar8;
  uint unaff_w19;
  uint unaff_w20;
  long unaff_x21;
  double dVar9;
  undefined1 auVar10 [16];
  double unaff_d8;
  undefined8 in_register_00005108;
  double dVar11;
  double in_stack_00000008;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  
  FUN_03d2d2b0(PTR_DAT_091a1008);
  *(undefined1 *)(unaff_x21 + 0xfad) = 1;
  puVar1 = PTR_DAT_091a1008;
  if (0xf < unaff_w20) {
    thunk_FUN_03d1e194(PTR_DAT_091ab0b0);
    uVar4 = thunk_FUN_03d2ef40();
    uVar5 = thunk_FUN_03d1e194(PTR_DAT_09212ad8);
    uVar6 = thunk_FUN_03d1e194(PTR_DAT_09212ae0);
    FUN_070c848c(uVar4,uVar5,uVar6,0);
    uVar5 = thunk_FUN_03d1e194(PTR_DAT_09212ae8);
                    /* WARNING: Subroutine does not return */
    FUN_03d2d414(uVar4,uVar5);
  }
  if (1 < unaff_w19) {
    uVar4 = thunk_FUN_03d1e194(PTR_DAT_09212af0);
    uVar4 = thunk_FUN_03d2eb70(uVar4,&stack0x00000018);
    uVar5 = thunk_FUN_03d1e194(PTR_DAT_09212af8);
    uVar6 = thunk_FUN_03d1e194(PTR_DAT_09212b00);
    uVar4 = FUN_06fad8bc(uVar5,uVar4,uVar6,0);
    thunk_FUN_03d1e194(PTR_DAT_091ab1c0);
    uVar5 = thunk_FUN_03d2ef40();
    uVar6 = thunk_FUN_03d1e194(PTR_DAT_091caf58);
    FUN_070c4cac(uVar5,uVar4,uVar6,0);
    uVar4 = thunk_FUN_03d1e194(PTR_DAT_09212ae8);
                    /* WARNING: Subroutine does not return */
    FUN_03d2d414(uVar5,uVar4);
  }
  lVar3 = *(long *)PTR_DAT_091a1008;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_03db619c();
    lVar3 = *(long *)puVar1;
  }
  pdVar7 = *(double **)(lVar3 + 0xb8);
  if (*pdVar7 <= ABS(unaff_d8)) goto LAB_071797b8;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_03db619c();
    lVar3 = *(long *)puVar1;
    pdVar7 = *(double **)(lVar3 + 0xb8);
  }
  dVar8 = pdVar7[1];
  if (dVar8 == 0.0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  if (*(uint *)((long)dVar8 + 0x18) <= unaff_w20) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d550();
  }
  dVar11 = *(double *)((long)dVar8 + (ulong)unaff_w20 * 8 + 0x20);
  dVar8 = dVar11 * unaff_d8;
  in_stack_00000008 = dVar8;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_03db619c();
  }
  if (unaff_w19 == 1) {
    dVar9 = modf(dVar8,&stack0x00000008);
    dVar8 = in_stack_00000008;
    if (0.5 <= ABS(dVar9)) {
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_03db619c();
      }
      iVar2 = FUN_07179940(dVar9);
      in_stack_00000008 = dVar8 + (double)iVar2;
    }
  }
  else {
    dVar9 = modf(dVar8,(double *)&stack0x00000018);
    if (0.0 <= dVar8) {
      if (dVar9 == 0.5) {
        dVar8 = 1.0;
        goto LAB_07179788;
      }
      in_stack_00000008 = (double)(long)(dVar8 + 0.5);
    }
    else if (dVar9 == -0.5) {
      dVar8 = -1.0;
LAB_07179788:
      in_stack_00000008 = (double)CONCAT44(uStack000000000000001c,uStack0000000000000018);
      if (((long)in_stack_00000008 & 1U) != 0) {
        in_stack_00000008 = in_stack_00000008 + dVar8;
      }
    }
    else {
      in_stack_00000008 = (double)(long)(dVar8 + -0.5);
    }
  }
  unaff_d8 = in_stack_00000008 / dVar11;
  in_register_00005108 = 0;
LAB_071797b8:
  auVar10._8_8_ = in_register_00005108;
  auVar10._0_8_ = unaff_d8;
  return auVar10;
}


