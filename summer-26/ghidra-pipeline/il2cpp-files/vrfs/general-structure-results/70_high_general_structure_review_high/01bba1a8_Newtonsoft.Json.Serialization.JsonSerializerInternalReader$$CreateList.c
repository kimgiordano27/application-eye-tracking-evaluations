/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CreateList
ENTRY_POINT: 01bba1a8
PROGRAM: vrfs-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


ulong Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CreateList
                (ulong param_1,ulong param_2,long param_3,int param_4,char *param_5,ulong param_6,
                undefined8 param_7,uint param_8,undefined8 param_9,undefined8 param_10,
                char *param_11,char *param_12,char *param_13,char *param_14,undefined8 param_15,
                long param_16)

{
  uint uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  uint in_w8;
  uint in_w9;
  char *in_x11;
  uint in_w12;
  uint in_w13;
  uint in_w14;
  uint in_w15;
  uint in_w16;
  uint in_w17;
  long unaff_x19;
  uint unaff_w20;
  int unaff_w21;
  int unaff_w22;
  long unaff_x24;
  long unaff_x25;
  int iVar6;
  uint unaff_w27;
  char *unaff_x28;
  char unaff_w29;
  char unaff_w30;
  
  uVar5 = (ulong)param_8;
  if (in_w13 == *(byte *)(param_3 + 0x20)) {
    if ((in_w8 <= in_w14) || (unaff_w27 = unaff_w20 + 3, in_w8 <= unaff_w27)) goto LAB_01bba5b8;
    uVar5 = (ulong)in_w14;
    if (*unaff_x28 == *(char *)(unaff_x24 + (int)unaff_w27 + 0x20)) {
      if ((in_w8 <= in_w15) || (unaff_w27 = unaff_w20 + 4, in_w8 <= unaff_w27)) goto LAB_01bba5b8;
      uVar5 = (ulong)in_w15;
      if (*param_14 == *(char *)(unaff_x24 + (int)unaff_w27 + 0x20)) {
        if ((in_w8 <= in_w16) || (unaff_w27 = unaff_w20 + 5, in_w8 <= unaff_w27)) goto LAB_01bba5b8;
        uVar5 = (ulong)in_w16;
        if (*param_13 == *(char *)(unaff_x24 + (int)unaff_w27 + 0x20)) {
          if ((in_w8 <= in_w17) || (unaff_w27 = unaff_w20 + 6, in_w8 <= unaff_w27))
          goto LAB_01bba5b8;
          uVar5 = (ulong)in_w17;
          if (*param_12 == *(char *)(unaff_x24 + (int)unaff_w27 + 0x20)) {
            if ((in_w8 <= (uint)param_2) || (unaff_w27 = unaff_w20 + 7, in_w8 <= unaff_w27))
            goto LAB_01bba5b8;
            uVar5 = param_2 & 0xffffffff;
            if (*param_11 == *(char *)(unaff_x24 + (int)unaff_w27 + 0x20)) {
              if (in_w8 <= (uint)param_6) goto LAB_01bba5b8;
              unaff_w27 = unaff_w20 + 8;
              uVar5 = param_6 & 0xffffffff;
              if (in_w8 <= unaff_w27) goto LAB_01bba5b8;
            }
          }
        }
      }
    }
  }
  while ((uVar3 = (uint)uVar5, uVar3 < in_w8 && (unaff_w27 < in_w8))) {
    uVar4 = uVar3;
    if (*(char *)(unaff_x24 + 0x20 + (long)(int)uVar3) ==
        *(char *)(unaff_x24 + 0x20 + (long)(int)unaff_w27)) {
      param_2 = param_2 & 0xffffffff;
      iVar6 = 0;
      do {
        uVar4 = uVar3 + iVar6 + 1;
        if (param_15._4_4_ + uVar3 + iVar6 == 0) goto LAB_01bba51c;
        if ((in_w8 <= uVar4) || (uVar1 = unaff_w27 + iVar6 + 1, in_w8 <= uVar1)) goto LAB_01bba5b8;
        if (*(char *)(unaff_x24 + 0x20 + (long)(int)uVar4) !=
            *(char *)(unaff_x24 + 0x20 + (long)(int)uVar1)) goto LAB_01bba51c;
        uVar4 = uVar3 + iVar6 + 2;
        if ((in_w8 <= uVar4) || (uVar1 = unaff_w27 + iVar6 + 2, in_w8 <= uVar1)) goto LAB_01bba5b8;
        if (*(char *)(unaff_x24 + 0x20 + (long)(int)uVar4) !=
            *(char *)(unaff_x24 + 0x20 + (long)(int)uVar1)) {
          uVar4 = uVar3 + iVar6 + 2;
          goto LAB_01bba51c;
        }
        uVar4 = uVar3 + iVar6 + 3;
        if ((in_w8 <= uVar4) || (uVar1 = unaff_w27 + iVar6 + 3, in_w8 <= uVar1)) goto LAB_01bba5b8;
        if (*(char *)(unaff_x24 + 0x20 + (long)(int)uVar4) !=
            *(char *)(unaff_x24 + 0x20 + (long)(int)uVar1)) {
          uVar4 = uVar3 + iVar6 + 3;
          goto LAB_01bba51c;
        }
        uVar4 = uVar3 + iVar6 + 4;
        if ((in_w8 <= uVar4) || (uVar1 = unaff_w27 + iVar6 + 4, in_w8 <= uVar1)) goto LAB_01bba5b8;
        if (*(char *)(unaff_x24 + 0x20 + (long)(int)uVar4) !=
            *(char *)(unaff_x24 + 0x20 + (long)(int)uVar1)) {
          uVar4 = uVar3 + iVar6 + 4;
          goto LAB_01bba51c;
        }
        uVar4 = uVar3 + iVar6 + 5;
        if ((in_w8 <= uVar4) || (uVar1 = unaff_w27 + iVar6 + 5, in_w8 <= uVar1)) goto LAB_01bba5b8;
        if (*(char *)(unaff_x24 + 0x20 + (long)(int)uVar4) !=
            *(char *)(unaff_x24 + 0x20 + (long)(int)uVar1)) {
          uVar4 = uVar3 + iVar6 + 5;
          goto LAB_01bba51c;
        }
        uVar4 = uVar3 + iVar6 + 6;
        if ((in_w8 <= uVar4) || (uVar1 = unaff_w27 + iVar6 + 6, in_w8 <= uVar1)) goto LAB_01bba5b8;
        if (*(char *)(unaff_x24 + 0x20 + (long)(int)uVar4) !=
            *(char *)(unaff_x24 + 0x20 + (long)(int)uVar1)) {
          uVar4 = uVar3 + iVar6 + 6;
          goto LAB_01bba51c;
        }
        uVar4 = uVar3 + iVar6 + 7;
        if ((in_w8 <= uVar4) || (uVar1 = unaff_w27 + iVar6 + 7, in_w8 <= uVar1)) goto LAB_01bba5b8;
        if (*(char *)(unaff_x24 + 0x20 + (long)(int)uVar4) !=
            *(char *)(unaff_x24 + 0x20 + (long)(int)uVar1)) {
          uVar4 = uVar3 + iVar6 + 7;
          goto LAB_01bba51c;
        }
        uVar4 = uVar3 + iVar6 + 8;
        if ((in_w8 <= uVar4) || (uVar1 = unaff_w27 + iVar6 + 8, in_w8 <= uVar1)) goto LAB_01bba5b8;
        iVar6 = iVar6 + 8;
      } while (*(char *)(unaff_x24 + 0x20 + (long)(int)uVar4) ==
               *(char *)(unaff_x24 + 0x20 + (long)(int)uVar1));
      uVar4 = uVar3 + iVar6;
    }
LAB_01bba51c:
    uVar3 = uVar4 - in_w9;
    if ((int)param_1 < (int)uVar3) {
      *(uint *)(unaff_x19 + 0x28) = unaff_w20;
      *(uint *)(unaff_x19 + 0x2c) = uVar3;
      if (unaff_w22 <= (int)uVar3) {
        param_1 = (ulong)uVar3;
LAB_01bba584:
        return (ulong)(2 < (int)param_1);
      }
      if ((in_w8 <= uVar4 - 1) || (in_w8 <= uVar4)) break;
      unaff_w30 = *(char *)(unaff_x24 + 0x20 + (long)(int)(uVar4 - 1));
      unaff_w29 = *(char *)(unaff_x24 + 0x20 + (long)(int)uVar4);
      param_1 = (ulong)uVar3;
    }
    do {
      do {
        do {
          do {
            if (unaff_x25 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_0160eeb4(param_1,param_2);
            }
            if (*(uint *)(unaff_x25 + 0x18) <= (unaff_w20 & 0x7fff)) goto LAB_01bba5b8;
            uVar2 = *(ushort *)(unaff_x25 + (ulong)(unaff_w20 & 0x7fff) * 2 + 0x20);
            unaff_w20 = (uint)uVar2;
            if (((int)unaff_w20 <= unaff_w21) || (param_4 = param_4 + -1, param_4 == 0))
            goto LAB_01bba584;
            uVar3 = (int)param_1 + (uint)uVar2;
            if (in_w8 <= uVar3) goto LAB_01bba5b8;
          } while (*(char *)(unaff_x24 + (int)uVar3 + 0x20) != unaff_w29);
          if (in_w8 <= uVar3 - 1) goto LAB_01bba5b8;
        } while (*(char *)(unaff_x24 + (int)(uVar3 - 1) + 0x20) != unaff_w30);
        if ((in_w8 <= uVar2) || (in_w8 <= in_w9)) goto LAB_01bba5b8;
      } while (*(char *)(unaff_x24 + (int)unaff_w20 + 0x20) != *in_x11);
      unaff_w27 = unaff_w20 + 1;
      if ((in_w8 <= unaff_w27) || (in_w8 <= in_w12)) goto LAB_01bba5b8;
    } while (*(char *)(unaff_x24 + (int)unaff_w27 + 0x20) != *param_5);
    if ((uint)param_16 < 7) {
                    /* WARNING: Could not recover jumptable at 0x01bb9e2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar5 = (*(code *)((ulong)(&switchD_01bb9e2c::switchdataD_0536add8)[param_16] * 4 + 0x1bb9e30)
              )();
      return uVar5;
    }
    uVar5 = (ulong)in_w12;
  }
LAB_01bba5b8:
                    /* WARNING: Subroutine does not return */
  FUN_0160eebc();
}


