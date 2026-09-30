/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$Serialize
ENTRY_POINT: 0675c43c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_10;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


undefined8 Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__Serialize(void)

{
  ushort uVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined1 *unaff_x20;
  ushort *puVar6;
  long unaff_x21;
  uint unaff_w22;
  uint unaff_w23;
  uint unaff_w24;
  uint uVar7;
  uint unaff_w25;
  uint unaff_w26;
  int unaff_w27;
  long *unaff_x29;
  uint *in_stack_00000010;
  undefined8 in_stack_00000018;
  
  if (unaff_w26 - 0x30 < 10) {
    unaff_w24 = unaff_w27 + 10;
    if ((0x19999999 < unaff_w25) || ((bVar2 = false, unaff_w25 == 0x19999999 && (0x35 < unaff_w26)))
       ) {
      bVar2 = true;
    }
    unaff_w25 = (unaff_w26 + unaff_w25 * 10) - 0x30;
    if (unaff_w23 <= unaff_w24) goto LAB_0675c608;
    lVar3 = *unaff_x29;
    do {
      unaff_w26 = (uint)*(ushort *)(unaff_x21 + (long)(int)unaff_w24 * 2);
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
        lVar3 = *unaff_x29;
      }
      if (9 < unaff_w26 - 0x30) goto LAB_0675c514;
      unaff_w24 = unaff_w24 + 1;
      bVar2 = true;
    } while (unaff_w23 != unaff_w24);
  }
  else {
    bVar2 = false;
LAB_0675c514:
    if (*(int *)(*unaff_x29 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    if ((unaff_w26 - 9 < 5) || (unaff_w26 == 0x20)) {
      if ((unaff_w22 >> 1 & 1) == 0) goto LAB_0675c5d8;
      uVar7 = unaff_w24 + 1;
      if ((int)uVar7 < (int)unaff_w23) {
        puVar6 = (ushort *)(unaff_x21 + (long)(int)uVar7 * 2);
        do {
          if (unaff_w23 <= uVar7) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c8();
          }
          uVar1 = *puVar6;
          if (*(int *)(*unaff_x29 + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
          }
          if ((4 < uVar1 - 9) && (uVar1 != 0x20)) goto LAB_0675c598;
          uVar7 = uVar7 + 1;
          puVar6 = puVar6 + 1;
        } while (unaff_w23 != uVar7);
      }
      else {
LAB_0675c598:
        if (uVar7 < unaff_w23) goto LAB_0675c5ac;
      }
    }
    else {
LAB_0675c5ac:
      if (*(int *)(*unaff_x29 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      uVar4 = FUN_0675d708();
      if ((uVar4 & 1) == 0) {
LAB_0675c5d8:
        unaff_w25 = 0;
        uVar5 = 0;
        goto LAB_0675c5e0;
      }
    }
LAB_0675c608:
    if (!bVar2) {
      if (unaff_w25 == 0) {
        in_stack_00000018._4_4_ = 1;
      }
      if ((in_stack_00000018._4_4_ & 1) != 0) {
        uVar5 = 1;
        goto LAB_0675c5e0;
      }
    }
  }
  unaff_w25 = 0;
  uVar5 = 0;
  *unaff_x20 = 1;
LAB_0675c5e0:
  *in_stack_00000010 = unaff_w25;
  return uVar5;
}


