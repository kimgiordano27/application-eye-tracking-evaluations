/*
FUNCTION_NAME: Newtonsoft.Json.JsonTextReader$$get_LinePosition
ENTRY_POINT: 0761d080
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_19;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2
*/


void Newtonsoft_Json_JsonTextReader__get_LinePosition(long param_1)

{
  uint uVar1;
  undefined1 in_ZR;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  uint *puVar7;
  ulong uVar8;
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
  long unaff_x29;
  
  while( true ) {
    if ((bool)in_ZR) {
      uVar2 = (**(code **)(*unaff_x19 + 0x378))();
      if ((uVar2 & 1) != 0) {
        if ((unaff_x22 & 1) != 0) {
          lVar6 = unaff_x19[2];
          FUN_03b0899c(lVar6);
          puVar3 = (undefined8 *)FUN_03fae1a0(lVar6,unaff_x23);
          uVar4 = *puVar3;
          uVar5 = thunk_FUN_040dedf8(PTR_DAT_092d8538);
          uVar5 = FUN_074c1ac4(uVar5,uVar4);
          thunk_FUN_040dedf8(PTR_DAT_09287028);
          uVar4 = thunk_FUN_040b4efc();
          FUN_075d4b88(uVar4,uVar5,0);
          uVar5 = thunk_FUN_040dedf8(PTR_DAT_092d89f8);
                    /* WARNING: Subroutine does not return */
          FUN_040776f4(uVar4,uVar5);
        }
        thunk_FUN_04085a30();
        lVar6 = unaff_x19[2];
        *(undefined1 *)((long)unaff_x19 + 0x2c) = 1;
        if (lVar6 == 0) goto LAB_0761d2b4;
        if (*(uint *)(lVar6 + 0x18) <= (uint)unaff_x29) goto LAB_0761d2b0;
        *(undefined8 *)(lVar6 + (long)(int)unaff_x23 * 0x18 + 0x28) = unaff_x21;
        thunk_FUN_040ec700();
        goto LAB_0761d278;
      }
      param_1 = unaff_x19[2];
    }
    if (unaff_w25 == 0xffffffff) {
      if (param_1 == 0) goto LAB_0761d2b4;
      if (*(uint *)(param_1 + 0x18) <= (uint)unaff_x29) goto LAB_0761d2b0;
      puVar7 = (uint *)(param_1 + (long)(int)unaff_x23 * (long)unaff_w28 + 0x30);
      uVar9 = *puVar7;
      if (-1 < (int)uVar9) {
        *puVar7 = uVar9 | 0x80000000;
        *(int *)((long)unaff_x19 + 0x1c) = *(int *)((long)unaff_x19 + 0x1c) + 1;
      }
      uVar2 = *(ulong *)(param_1 + 0x18);
      if ((int)uVar2 <= unaff_w26 + 1) {
        thunk_FUN_040dedf8(PTR_DAT_0929cb88);
        uVar4 = thunk_FUN_040b4efc();
        uVar5 = thunk_FUN_040dedf8(PTR_DAT_092d8a00);
        FUN_07679464(uVar4,uVar5,0);
        uVar5 = thunk_FUN_040dedf8(PTR_DAT_092d89f8);
                    /* WARNING: Subroutine does not return */
        FUN_040776f4(uVar4,uVar5);
      }
    }
    else {
      if (param_1 == 0) goto LAB_0761d2b4;
      uVar2 = *(ulong *)(param_1 + 0x18);
      if ((int)uVar2 <= unaff_w26 + 1) {
        thunk_FUN_04085a30();
        lVar6 = unaff_x19[2];
        *(undefined1 *)((long)unaff_x19 + 0x2c) = 1;
        if (lVar6 == 0) goto LAB_0761d2b4;
        if (*(uint *)(lVar6 + 0x18) <= unaff_w25) goto LAB_0761d2b0;
        *(undefined8 *)(lVar6 + (long)(int)unaff_w25 * 0x18 + 0x28) = unaff_x21;
        thunk_FUN_040ec700();
        lVar6 = unaff_x19[2];
        if (lVar6 == 0) goto LAB_0761d2b4;
        if (*(uint *)(lVar6 + 0x18) <= unaff_w25) goto LAB_0761d2b0;
        *(undefined8 *)(lVar6 + (long)(int)unaff_w25 * 0x18 + 0x20) = unaff_x20;
        thunk_FUN_040ec700();
        lVar6 = unaff_x19[2];
        if (lVar6 == 0) goto LAB_0761d2b4;
        if (*(uint *)(lVar6 + 0x18) <= unaff_w25) goto LAB_0761d2b0;
        lVar6 = lVar6 + (long)(int)unaff_w25 * 0x18;
        goto LAB_0761d260;
      }
    }
    unaff_w26 = unaff_w26 + 1;
    uVar8 = uVar2 & 0xffffffff;
    lVar6 = 0;
    if (uVar8 != 0) {
      lVar6 = (unaff_x23 + unaff_x27) / (long)uVar8;
    }
    unaff_x29 = (unaff_x23 + unaff_x27) - lVar6 * uVar8;
    uVar9 = (uint)unaff_x29;
    if (unaff_w25 == 0xffffffff) {
      if ((uint)uVar2 <= uVar9) goto LAB_0761d2b0;
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
    if ((uint)uVar2 <= uVar9) goto LAB_0761d2b0;
    unaff_x23 = (long)(int)uVar9;
    lVar6 = *(long *)(param_1 + 0x20 + (long)(int)uVar9 * (long)unaff_w28);
    if ((lVar6 == 0) ||
       ((uVar1 = *(uint *)(param_1 + 0x20 + (long)(int)uVar9 * (long)unaff_w28 + 0x10),
        lVar6 == param_1 && (-1 < (int)uVar1)))) break;
    in_ZR = (uVar1 & 0x7fffffff) == unaff_w24;
  }
  if (unaff_w25 != 0xffffffff) {
    uVar9 = unaff_w25;
  }
  thunk_FUN_04085a30();
  lVar6 = unaff_x19[2];
  *(undefined1 *)((long)unaff_x19 + 0x2c) = 1;
  if (lVar6 != 0) {
    if (uVar9 < *(uint *)(lVar6 + 0x18)) {
      *(undefined8 *)(lVar6 + (long)(int)uVar9 * 0x18 + 0x28) = unaff_x21;
      thunk_FUN_040ec700();
      lVar6 = unaff_x19[2];
      if (lVar6 == 0) goto LAB_0761d2b4;
      if (uVar9 < *(uint *)(lVar6 + 0x18)) {
        *(undefined8 *)(lVar6 + (long)(int)uVar9 * 0x18 + 0x20) = unaff_x20;
        thunk_FUN_040ec700();
        lVar6 = unaff_x19[2];
        if (lVar6 == 0) goto LAB_0761d2b4;
        if (uVar9 < *(uint *)(lVar6 + 0x18)) {
          lVar6 = lVar6 + (long)(int)uVar9 * 0x18;
LAB_0761d260:
          *(uint *)(lVar6 + 0x30) = *(uint *)(lVar6 + 0x30) | unaff_w24;
          *(int *)(unaff_x19 + 3) = (int)unaff_x19[3] + 1;
LAB_0761d278:
          lVar6 = unaff_x19[5];
          thunk_FUN_04085a30();
          thunk_FUN_04085a30();
          *(int *)(unaff_x19 + 5) = (int)lVar6 + 1;
          thunk_FUN_04085a30();
          *(undefined1 *)((long)unaff_x19 + 0x2c) = 0;
          return;
        }
      }
    }
LAB_0761d2b0:
                    /* WARNING: Subroutine does not return */
    FUN_04077838();
  }
LAB_0761d2b4:
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


