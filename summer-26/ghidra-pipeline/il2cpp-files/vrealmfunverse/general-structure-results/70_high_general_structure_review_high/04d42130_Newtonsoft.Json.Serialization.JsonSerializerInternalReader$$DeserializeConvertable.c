/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$DeserializeConvertable
ENTRY_POINT: 04d42130
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;data_collection;telemetry
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_4;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x04d42328) */
/* WARNING: Removing unreachable block (ram,0x04d423ec) */

undefined1  [16]
Newtonsoft_Json_Serialization_JsonSerializerInternalReader__DeserializeConvertable(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  long *unaff_x20;
  undefined8 unaff_x21;
  long unaff_x22;
  undefined1 auVar8 [16];
  long in_stack_00000008;
  uint uStack0000000000000010;
  undefined1 uStack0000000000000017;
  undefined8 in_stack_00000018;
  undefined1 *in_stack_00000020;
  long *in_stack_00000028;
  long in_stack_00000030;
  undefined8 in_stack_00000038;
  char cStack0000000000000044;
  long in_stack_00000048;
  undefined8 in_stack_00000050;
  int iStack0000000000000058;
  uint uStack000000000000005c;
  long in_stack_00000060;
  undefined4 in_stack_00000068;
  undefined2 uStack000000000000006c;
  undefined1 uStack000000000000006e;
  undefined1 uStack000000000000006f;
  undefined8 in_stack_00000078;
  
  FUN_02b3c81c(PTR_DAT_06332478);
  FUN_02b3c81c(PTR_DAT_06332480);
  FUN_02b3c81c(PTR_DAT_063320c0);
  FUN_02b3c81c(PTR_DAT_06332078);
  FUN_02b3c81c(PTR_DAT_06312bb0);
  FUN_02b3c81c(PTR_DAT_063320d0);
  FUN_02b3c81c(PTR_DAT_063320d8);
  *(undefined1 *)(unaff_x22 + 0x68e) = 1;
  in_stack_00000048 = 0;
  cStack0000000000000044 = '\0';
  in_stack_00000030 = 0;
  in_stack_00000038 = 0;
  if (*(int *)(*unaff_x20 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  uVar6 = FUN_04ddd978(&stack0x00000078,0);
  uVar2 = in_stack_00000078;
  puVar1 = PTR_DAT_06332078;
  if ((uVar6 & 1) == 0) {
    FUN_04d40a18();
    FUN_04d40ae4();
    in_stack_00000048 = FUN_04d40734();
    if ((in_stack_00000048 == 0) || (lVar7 = FUN_04de265c(in_stack_00000048,0), lVar7 == 0)) {
LAB_04d423e8:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    uVar6 = FUN_04df2a40(lVar7,0);
    if ((uVar6 & 1) == 0) {
      uVar5 = (uint)((ulong)unaff_x21 >> 0x20);
      uVar4 = 0;
      lVar7 = *(long *)PTR_DAT_06332478;
    }
    else {
      cStack0000000000000044 = 1;
      in_stack_00000020 = &stack0x00000044;
      in_stack_00000018 = 0;
      in_stack_00000028 = &stack0x00000048;
      FUN_039db9d4(&stack0x00000050,*(undefined8 *)PTR_DAT_063320c0);
      uVar4 = FUN_04d41508();
      uVar5 = FUN_039d8c80(&stack0x00000050,*(undefined8 *)PTR_DAT_06332480);
      cStack0000000000000044 = uVar4 == uVar5;
      if ((bool)cStack0000000000000044) {
        in_stack_00000008 = 0;
        _uStack0000000000000010 = (ulong)uVar4;
        thunk_FUN_02bb0e9c(&stack0x00000008,0);
        uVar6 = _uStack0000000000000010;
        _uStack0000000000000010 = (uint6)uStack0000000000000010;
        uStack0000000000000017 = SUB81(uVar6,7);
        _uStack0000000000000010 = CONCAT16(1,_uStack0000000000000010);
        in_stack_00000038 = _uStack0000000000000010;
        in_stack_00000030 = in_stack_00000008;
        if (cStack0000000000000044 != '\0') {
          if (*in_stack_00000028 == 0) goto LAB_04d423e8;
          FUN_04de299c(*in_stack_00000028,0);
        }
        in_stack_00000068 = (undefined4)in_stack_00000038;
        uStack000000000000006c = (undefined2)((ulong)in_stack_00000038 >> 0x20);
        uStack000000000000006e = (undefined1)((ulong)in_stack_00000038 >> 0x30);
        uStack000000000000006f = (undefined1)((ulong)in_stack_00000038 >> 0x38);
        in_stack_00000060 = in_stack_00000030;
        goto LAB_04d423c0;
      }
      lVar7 = *(long *)PTR_DAT_06332478;
      uVar5 = uStack000000000000005c;
      if ((uStack000000000000005c & 0x7fffffff) < uVar4) {
        FUN_04d9bd3c(0x18,0);
      }
    }
    iVar3 = iStack0000000000000058;
    uVar2 = in_stack_00000050;
    in_stack_00000018 = 0;
    in_stack_00000020 = (undefined1 *)0x0;
    if ((*(byte *)(*(long *)(lVar7 + 0x20) + 0x135) & 1) == 0) {
      FUN_02b76218();
    }
    in_stack_00000018 = uVar2;
    thunk_FUN_02bb0e9c(&stack0x00000018,uVar2);
    in_stack_00000020 = (undefined1 *)CONCAT44(uVar5 - uVar4,iVar3 + uVar4);
    auVar8 = FUN_04d41f5c();
    in_stack_00000060 = auVar8._0_8_;
    in_stack_00000068 = auVar8._8_4_;
    uStack000000000000006c = auVar8._12_2_;
    uStack000000000000006e = auVar8[0xe];
    uStack000000000000006f = auVar8[0xf];
  }
  else {
    if (*(int *)(*(long *)PTR_DAT_06312bb0 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    lVar7 = FUN_03336464(uVar2,*(undefined8 *)puVar1);
    in_stack_00000060 = 0;
    in_stack_00000068 = 0;
    uStack000000000000006c = 0;
    uStack000000000000006e = 0;
    uStack000000000000006f = 0;
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      Oculus_Interaction_ActiveStateTracker__InjectOptionalGameObjects(0x26,0);
    }
    in_stack_00000060 = lVar7;
    thunk_FUN_02bb0e9c(&stack0x00000060,lVar7);
    in_stack_00000068 = 0;
    uStack000000000000006e = 1;
    uStack000000000000006c = 0;
  }
LAB_04d423c0:
  auVar8._8_4_ = in_stack_00000068;
  auVar8._0_8_ = in_stack_00000060;
  auVar8._12_2_ = uStack000000000000006c;
  auVar8[0xe] = uStack000000000000006e;
  auVar8[0xf] = uStack000000000000006f;
  return auVar8;
}


