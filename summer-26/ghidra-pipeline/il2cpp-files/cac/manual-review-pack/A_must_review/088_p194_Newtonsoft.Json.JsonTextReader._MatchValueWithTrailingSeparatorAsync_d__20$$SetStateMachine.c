/*
FUNCTION_NAME: Newtonsoft.Json.JsonTextReader.<MatchValueWithTrailingSeparatorAsync>d__20$$SetStateMachine
ENTRY_POINT: 0745ca64
PROGRAM: cac-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_20;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonTextReader_<MatchValueWithTrailingSeparatorAsync>d__20__SetStateMachine
               (long param_1)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  uint *puVar8;
  ulong in_x9;
  long *unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  ulong unaff_x22;
  long unaff_x23;
  uint unaff_w24;
  uint unaff_w25;
  int unaff_w26;
  long unaff_x27;
  int unaff_w28;
  uint uVar9;
  
  do {
    while( true ) {
      iVar2 = 0;
      if ((in_x9 & 0xffffffff) != 0) {
        iVar2 = (int)((unaff_x23 + unaff_x27) / (long)(in_x9 & 0xffffffff));
      }
      uVar1 = (uint)in_x9;
      uVar9 = (int)(unaff_x23 + unaff_x27) - iVar2 * uVar1;
      if (unaff_w25 == 0xffffffff) {
        if (uVar1 <= uVar9) goto LAB_0745cc10;
        if (*(long *)(param_1 + 0x20 + (long)(int)uVar9 * (long)unaff_w28) == param_1) {
          unaff_w25 = uVar9;
          if (-1 < *(int *)(param_1 + 0x20 + (long)(int)uVar9 * (long)unaff_w28 + 0x10)) {
            unaff_w25 = 0xffffffff;
          }
        }
        else {
          unaff_w25 = 0xffffffff;
        }
      }
      if (uVar1 <= uVar9) goto LAB_0745cc10;
      unaff_x23 = (long)(int)uVar9;
      lVar7 = *(long *)(param_1 + 0x20 + (long)(int)uVar9 * (long)unaff_w28);
      if ((lVar7 == 0) ||
         ((uVar1 = *(uint *)(param_1 + 0x20 + (long)(int)uVar9 * (long)unaff_w28 + 0x10),
          lVar7 == param_1 && (-1 < (int)uVar1)))) {
        if (unaff_w25 != 0xffffffff) {
          uVar9 = unaff_w25;
        }
        thunk_FUN_03f1faf4();
        lVar7 = unaff_x19[2];
        *(undefined1 *)((long)unaff_x19 + 0x2c) = 1;
        if (lVar7 == 0) goto LAB_0745cc14;
        if (*(uint *)(lVar7 + 0x18) <= uVar9) goto LAB_0745cc10;
        *(undefined8 *)(lVar7 + (long)(int)uVar9 * 0x18 + 0x28) = unaff_x21;
        thunk_FUN_03f86000();
        lVar7 = unaff_x19[2];
        if (lVar7 == 0) goto LAB_0745cc14;
        if (*(uint *)(lVar7 + 0x18) <= uVar9) goto LAB_0745cc10;
        *(undefined8 *)(lVar7 + (long)(int)uVar9 * 0x18 + 0x20) = unaff_x20;
        thunk_FUN_03f86000();
        lVar7 = unaff_x19[2];
        if (lVar7 == 0) goto LAB_0745cc14;
        if (*(uint *)(lVar7 + 0x18) <= uVar9) goto LAB_0745cc10;
        lVar7 = lVar7 + (long)(int)uVar9 * 0x18;
        goto LAB_0745cbc0;
      }
      if ((uVar1 & 0x7fffffff) == unaff_w24) {
        uVar3 = (**(code **)(*unaff_x19 + 0x378))();
        if ((uVar3 & 1) != 0) {
          if ((unaff_x22 & 1) != 0) {
            lVar7 = unaff_x19[2];
            FUN_039529c4(lVar7);
            puVar4 = (undefined8 *)FUN_03e49a9c(lVar7,unaff_x23);
            uVar5 = *puVar4;
            uVar6 = thunk_FUN_03f786f8(PTR_DAT_09131388);
            uVar6 = FUN_0730805c(uVar6,uVar5);
            thunk_FUN_03f786f8(PTR_DAT_0910e988);
            uVar5 = thunk_FUN_03f4e68c();
            FUN_07419a00(uVar5,uVar6,0);
            uVar6 = thunk_FUN_03f786f8(PTR_DAT_09131838);
                    /* WARNING: Subroutine does not return */
            FUN_03f134f0(uVar5,uVar6);
          }
          thunk_FUN_03f1faf4();
          lVar7 = unaff_x19[2];
          *(undefined1 *)((long)unaff_x19 + 0x2c) = 1;
          if (lVar7 == 0) goto LAB_0745cc14;
          if (*(uint *)(lVar7 + 0x18) <= uVar9) goto LAB_0745cc10;
          *(undefined8 *)(lVar7 + (long)(int)uVar9 * 0x18 + 0x28) = unaff_x21;
          thunk_FUN_03f86000();
          goto LAB_0745cbd8;
        }
        param_1 = unaff_x19[2];
      }
      if (unaff_w25 != 0xffffffff) break;
      if (param_1 == 0) goto LAB_0745cc14;
      if (*(uint *)(param_1 + 0x18) <= uVar9) goto LAB_0745cc10;
      puVar8 = (uint *)(param_1 + (long)(int)uVar9 * (long)unaff_w28 + 0x30);
      uVar9 = *puVar8;
      if (-1 < (int)uVar9) {
        *puVar8 = uVar9 | 0x80000000;
        *(int *)((long)unaff_x19 + 0x1c) = *(int *)((long)unaff_x19 + 0x1c) + 1;
      }
      in_x9 = *(ulong *)(param_1 + 0x18);
      unaff_w26 = unaff_w26 + 1;
      if ((int)in_x9 <= unaff_w26) {
        thunk_FUN_03f786f8(PTR_DAT_09111b70);
        uVar5 = thunk_FUN_03f4e68c();
        uVar6 = thunk_FUN_03f786f8(PTR_DAT_09131840);
        Newtonsoft_Json_Serialization_JsonSerializerInternalReader__GetInternalSerializer
                  (uVar5,uVar6,0);
        uVar6 = thunk_FUN_03f786f8(PTR_DAT_09131838);
                    /* WARNING: Subroutine does not return */
        FUN_03f134f0(uVar5,uVar6);
      }
    }
    if (param_1 == 0) goto LAB_0745cc14;
    in_x9 = *(ulong *)(param_1 + 0x18);
    unaff_w26 = unaff_w26 + 1;
  } while (unaff_w26 < (int)in_x9);
  thunk_FUN_03f1faf4();
  lVar7 = unaff_x19[2];
  *(undefined1 *)((long)unaff_x19 + 0x2c) = 1;
  if (lVar7 != 0) {
    if (unaff_w25 < *(uint *)(lVar7 + 0x18)) {
      *(undefined8 *)(lVar7 + (long)(int)unaff_w25 * 0x18 + 0x28) = unaff_x21;
      thunk_FUN_03f86000();
      lVar7 = unaff_x19[2];
      if (lVar7 == 0) goto LAB_0745cc14;
      if (unaff_w25 < *(uint *)(lVar7 + 0x18)) {
        *(undefined8 *)(lVar7 + (long)(int)unaff_w25 * 0x18 + 0x20) = unaff_x20;
        thunk_FUN_03f86000();
        lVar7 = unaff_x19[2];
        if (lVar7 == 0) goto LAB_0745cc14;
        if (unaff_w25 < *(uint *)(lVar7 + 0x18)) {
          lVar7 = lVar7 + (long)(int)unaff_w25 * 0x18;
LAB_0745cbc0:
          *(uint *)(lVar7 + 0x30) = *(uint *)(lVar7 + 0x30) | unaff_w24;
          *(int *)(unaff_x19 + 3) = (int)unaff_x19[3] + 1;
LAB_0745cbd8:
          lVar7 = unaff_x19[5];
          thunk_FUN_03f1faf4();
          thunk_FUN_03f1faf4();
          *(int *)(unaff_x19 + 5) = (int)lVar7 + 1;
          thunk_FUN_03f1faf4();
          *(undefined1 *)((long)unaff_x19 + 0x2c) = 0;
          return;
        }
      }
    }
LAB_0745cc10:
                    /* WARNING: Subroutine does not return */
    FUN_03f13634();
  }
LAB_0745cc14:
                    /* WARNING: Subroutine does not return */
  FUN_03f1362c();
}


