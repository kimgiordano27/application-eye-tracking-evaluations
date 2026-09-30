/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CreateNewList
ENTRY_POINT: 0560b2c4
PROGRAM: Untangled-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CreateNewList(void)

{
  bool bVar1;
  int iVar2;
  undefined2 uVar3;
  short *psVar4;
  int iVar5;
  uint uVar6;
  long unaff_x19;
  int unaff_w20;
  ulong uVar7;
  ulong uVar8;
  int unaff_w21;
  long unaff_x22;
  long lVar9;
  long unaff_x25;
  long unaff_x29;
  short asStack_e [7];
  
  if (*(int *)(unaff_x22 + 0x10) == 1) {
    uVar6 = *(uint *)(unaff_x19 + 0x18);
    if ((int)uVar6 < (int)*(uint *)(unaff_x19 + 0x10)) {
      if (*(uint *)(unaff_x19 + 0x10) <= uVar6) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c8();
      }
      lVar9 = *(long *)(unaff_x19 + 8);
      uVar3 = FUN_05460528();
      *(undefined2 *)(lVar9 + (long)(int)uVar6 * 2) = uVar3;
      *(uint *)(unaff_x19 + 0x18) = uVar6 + 1;
      goto LAB_0560b3a8;
    }
  }
  FUN_054833ec();
LAB_0560b3a8:
  if (*(int *)(*(long *)PTR_DAT_06d4e298 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  psVar4 = asStack_e + 1;
  if ((-1 < unaff_w21 + -1) || (-unaff_w20 != 0)) {
    uVar7 = (ulong)(uint)-unaff_w20;
    iVar5 = unaff_w21 + -2;
    do {
      do {
        uVar8 = uVar7 / 10;
        uVar6 = (uint)uVar7;
        psVar4 = psVar4 + -1;
        *psVar4 = (short)uVar7 + (short)(uVar7 / 10) * -10 + 0x30;
        iVar2 = iVar5 + -1;
        bVar1 = -1 < iVar5;
        uVar7 = uVar8;
        iVar5 = iVar2;
      } while (bVar1);
    } while (9 < uVar6);
  }
  FUN_05483884();
  if (*(long *)(unaff_x25 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


