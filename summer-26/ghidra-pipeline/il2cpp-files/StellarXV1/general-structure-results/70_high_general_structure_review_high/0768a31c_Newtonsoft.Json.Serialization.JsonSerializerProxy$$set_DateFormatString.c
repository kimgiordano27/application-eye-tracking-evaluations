/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$set_DateFormatString
ENTRY_POINT: 0768a31c
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


long Newtonsoft_Json_Serialization_JsonSerializerProxy__set_DateFormatString(long param_1)

{
  uint uVar1;
  ushort uVar2;
  bool in_CY;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  undefined8 in_x9;
  short in_w10;
  ulong uVar8;
  undefined2 unaff_w19;
  long unaff_x20;
  ulong unaff_x21;
  int unaff_w22;
  undefined4 unaff_w23;
  short unaff_w24;
  long unaff_x26;
  long unaff_x29;
  
  uVar2 = (ushort)(uint)((ulong)in_x9 >> 0x23);
  *(ushort *)(param_1 + 2) = unaff_w24 - uVar2 * in_w10 | 0x30;
  if (in_CY) {
LAB_0768a460:
    if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
      FUN_04077838();
    }
  }
  else {
    uVar1 = unaff_w22 + 3;
    *(ushort *)(param_1 + 4) = uVar2 | 0x30;
    if (*(int *)(*(long *)PTR_DAT_09285ae0 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    uVar4 = FUN_0767a564(unaff_w23,uVar1,0);
    lVar5 = thunk_FUN_040b28f8(uVar4,0);
    if (lVar5 == 0) {
      if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
    }
    else {
      iVar3 = thunk_FUN_04083428(0);
      puVar7 = (undefined2 *)(lVar5 + iVar3);
      iVar3 = *(int *)(lVar5 + 0x10) - uVar1;
      if ((unaff_x21 & 1) == 0) {
        if (0 < (int)uVar1) {
          uVar8 = (ulong)uVar1;
          puVar6 = puVar7;
          do {
            if (0x43 < uVar1) goto LAB_0768a460;
            uVar8 = uVar8 - 1;
            puVar7 = puVar6 + 1;
            *puVar6 = *(undefined2 *)(unaff_x20 + (uVar8 & 0xffffffff) * 2);
            puVar6 = puVar7;
          } while (uVar8 != 0);
        }
        if (0 < iVar3) {
          do {
            iVar3 = iVar3 + -1;
            *puVar7 = unaff_w19;
            puVar7 = puVar7 + 1;
          } while (iVar3 != 0);
        }
      }
      else {
        puVar6 = puVar7;
        if (0 < iVar3) {
          do {
            iVar3 = iVar3 + -1;
            puVar7 = puVar6 + 1;
            *puVar6 = unaff_w19;
            puVar6 = puVar7;
          } while (iVar3 != 0);
        }
        if (0 < (int)uVar1) {
          uVar8 = (ulong)uVar1;
          do {
            if (0x43 < uVar1) goto LAB_0768a460;
            uVar8 = uVar8 - 1;
            *puVar7 = *(undefined2 *)(unaff_x20 + (uVar8 & 0xffffffff) * 2);
            puVar7 = puVar7 + 1;
          } while (uVar8 != 0);
        }
      }
      if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
        return lVar5;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


