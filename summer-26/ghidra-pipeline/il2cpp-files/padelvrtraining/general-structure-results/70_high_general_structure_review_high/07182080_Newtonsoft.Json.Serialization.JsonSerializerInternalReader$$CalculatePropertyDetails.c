/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CalculatePropertyDetails
ENTRY_POINT: 07182080
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_10;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8
Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CalculatePropertyDetails(void)

{
  int iVar1;
  ushort uVar2;
  bool bVar3;
  bool bVar4;
  ulong uVar5;
  undefined8 uVar6;
  uint in_w8;
  int *unaff_x19;
  ushort *puVar7;
  long unaff_x21;
  uint unaff_w22;
  uint unaff_w23;
  uint unaff_w24;
  uint uVar8;
  uint unaff_w25;
  uint unaff_w26;
  uint uVar9;
  int unaff_w27;
  long *unaff_x29;
  undefined1 *in_stack_00000010;
  undefined8 in_stack_00000018;
  
  if (in_w8 < 10) {
    uVar9 = in_w8 + unaff_w26 * 10;
    unaff_w24 = unaff_w27 + 10;
    iVar1 = 2 - in_stack_00000018._4_4_;
    if (-1 < 1 - in_stack_00000018._4_4_) {
      iVar1 = 1 - in_stack_00000018._4_4_;
    }
    bVar4 = (ulong)(uint)(iVar1 >> 1) + 0x7fffffff < (ulong)uVar9;
    bVar3 = 0xccccccc < (int)unaff_w26 || bVar4;
    if (unaff_w24 < unaff_w23) {
      do {
        uVar2 = *(ushort *)(unaff_x21 + (long)(int)unaff_w24 * 2);
        unaff_w25 = (uint)uVar2;
        if (*(int *)(*unaff_x29 + 0xe0) == 0) {
          thunk_FUN_03db619c();
        }
        if (9 < uVar2 - 0x30) goto LAB_07182158;
        unaff_w24 = unaff_w24 + 1;
        bVar3 = true;
      } while (unaff_w23 != unaff_w24);
    }
    else if (0xccccccc >= (int)unaff_w26 && !bVar4) goto LAB_07182264;
  }
  else {
    bVar3 = false;
    uVar9 = unaff_w26;
LAB_07182158:
    if (*(int *)(*unaff_x29 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    if ((unaff_w25 - 9 < 5) || (unaff_w25 == 0x20)) {
      if ((unaff_w22 >> 1 & 1) == 0) goto LAB_07182230;
      uVar8 = unaff_w24 + 1;
      if ((int)uVar8 < (int)unaff_w23) {
        puVar7 = (ushort *)(unaff_x21 + (long)(int)uVar8 * 2);
        do {
          if (unaff_w23 <= uVar8) {
                    /* WARNING: Subroutine does not return */
            FUN_03d2d550();
          }
          uVar2 = *puVar7;
          if (*(int *)(*unaff_x29 + 0xe0) == 0) {
            thunk_FUN_03db619c();
          }
          if ((4 < uVar2 - 9) && (uVar2 != 0x20)) goto LAB_071821d4;
          uVar8 = uVar8 + 1;
          puVar7 = puVar7 + 1;
        } while (unaff_w23 != uVar8);
      }
      else {
LAB_071821d4:
        if (uVar8 < unaff_w23) goto LAB_071821e8;
      }
    }
    else {
LAB_071821e8:
      if (*(int *)(*unaff_x29 + 0xe0) == 0) {
        thunk_FUN_03db619c();
      }
      uVar5 = FUN_071848d8();
      if ((uVar5 & 1) == 0) {
LAB_07182230:
        in_stack_00000018._4_4_ = 0;
        uVar6 = 0;
        goto LAB_07182238;
      }
    }
    if (!bVar3) {
LAB_07182264:
      uVar6 = 1;
      in_stack_00000018._4_4_ = uVar9 * in_stack_00000018._4_4_;
      goto LAB_07182238;
    }
  }
  in_stack_00000018._4_4_ = 0;
  uVar6 = 0;
  *in_stack_00000010 = 1;
LAB_07182238:
  *unaff_x19 = in_stack_00000018._4_4_;
  return uVar6;
}


