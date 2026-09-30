/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$SerializePrimitive
ENTRY_POINT: 074bf10c
PROGRAM: cac-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__SerializePrimitive(void)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined2 uVar4;
  int in_w8;
  short *psVar5;
  short *psVar6;
  int iVar7;
  long unaff_x19;
  ulong unaff_x20;
  ulong uVar8;
  int unaff_w21;
  long lVar9;
  long unaff_x25;
  long unaff_x29;
  undefined4 uStack_10;
  
  if (in_w8 == 1) {
    uVar2 = *(uint *)(unaff_x19 + 0x18);
    if ((int)*(uint *)(unaff_x19 + 0x10) <= (int)uVar2) goto LAB_074bf168;
    if (*(uint *)(unaff_x19 + 0x10) <= uVar2) {
      if (*(long *)(unaff_x25 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
        FUN_03f13634();
      }
      goto LAB_074bf26c;
    }
    lVar9 = *(long *)(unaff_x19 + 8);
    uVar4 = FUN_073213d0();
    *(undefined2 *)(lVar9 + (long)(int)uVar2 * 2) = uVar4;
    *(uint *)(unaff_x19 + 0x18) = uVar2 + 1;
  }
  else {
LAB_074bf168:
    FUN_0734705c();
  }
  uStack_10 = 0;
  if (*(int *)(*(long *)PTR_DAT_0912f2c0 + 0xe4) == 0) {
    thunk_FUN_03f6fea8();
  }
  if ((-1 < unaff_w21 + -1) || ((int)unaff_x20 != 0)) {
    psVar5 = (short *)((long)&uStack_10 + 2);
    iVar7 = unaff_w21 + -2;
    do {
      do {
        uVar2 = (uint)unaff_x20;
        uVar8 = (unaff_x20 & 0xffffffff) / 10;
        psVar6 = psVar5 + -1;
        *psVar5 = (short)unaff_x20 + (short)((unaff_x20 & 0xffffffff) / 10) * -10 + 0x30;
        iVar3 = iVar7 + -1;
        bVar1 = -1 < iVar7;
        psVar5 = psVar6;
        unaff_x20 = uVar8;
        iVar7 = iVar3;
      } while (bVar1);
    } while (9 < uVar2);
  }
  FUN_073475ec();
  if (*(long *)(unaff_x25 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
LAB_074bf26c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


