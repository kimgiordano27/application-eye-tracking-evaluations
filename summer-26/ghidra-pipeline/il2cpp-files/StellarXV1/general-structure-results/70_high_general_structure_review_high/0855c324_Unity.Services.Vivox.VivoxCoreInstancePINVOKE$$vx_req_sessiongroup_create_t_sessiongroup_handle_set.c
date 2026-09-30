/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_sessiongroup_create_t_sessiongroup_handle_set
ENTRY_POINT: 0855c324
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_9;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


undefined4
Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_sessiongroup_create_t_sessiongroup_handle_set
          (undefined4 param_1,long *param_2,undefined8 param_3,undefined8 *param_4,
          undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  undefined1 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  undefined8 uVar15;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  ulong uStack_268;
  undefined8 uStack_260;
  ulong uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  ulong uStack_228;
  undefined8 uStack_220;
  ulong uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined4 uStack_1d0;
  undefined1 auStack_1c0 [128];
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined4 uStack_110;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined4 uStack_d0;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  undefined8 uStack_8;
  
  if ((DAT_0989da60 & 1) == 0) {
    FUN_04077588(PTR_DAT_09285bb0);
    FUN_04077588(PTR_DAT_0932e900);
    FUN_04077588(PTR_DAT_09326d38);
    FUN_04077588(PTR_DAT_0932c538);
    FUN_04077588(PTR_DAT_092871d8);
    FUN_04077588(PTR_DAT_09285978);
    DAT_0989da60 = 1;
  }
  puVar2 = PTR_DAT_0932e900;
  uStack_d0 = 0;
  lVar11 = *param_2;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  uStack_18 = 0;
  uStack_20 = 0;
  uStack_8 = 0;
  uStack_10 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  if ((lVar11 == 0) || (*(char *)(lVar11 + 0xa8) == '\0')) {
    bVar4 = true;
  }
  else {
    uVar15 = *(undefined8 *)(lVar11 + 0x94);
    if (DAT_09885777 == '\0') {
      FUN_04077588(PTR_DAT_09286e28);
      DAT_09885777 = '\x01';
    }
    fVar12 = (float)uVar15 - (float)**(undefined8 **)(*(long *)PTR_DAT_09286e28 + 0xb8);
    fVar14 = (float)((ulong)uVar15 >> 0x20) -
             (float)((ulong)**(undefined8 **)(*(long *)PTR_DAT_09286e28 + 0xb8) >> 0x20);
    bVar4 = DAT_01aeb71c <= fVar12 * fVar12 + fVar14 * fVar14;
  }
  puVar1 = PTR_DAT_09285978;
  uStack_238 = param_4[1];
  uStack_240 = *param_4;
  uStack_228 = param_4[3];
  uStack_230 = param_4[2];
  uStack_218 = param_4[5];
  uStack_220 = param_4[4];
  uStack_210 = CONCAT44(uStack_210._4_4_,*(undefined4 *)(param_4 + 6));
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  puVar3 = PTR_DAT_0932c538;
  uStack_138 = uStack_238;
  uStack_140 = uStack_240;
  uStack_128 = uStack_228;
  uStack_130 = uStack_230;
  uStack_110 = (undefined4)uStack_210;
  uStack_118 = uStack_218;
  uStack_120 = uStack_220;
  FUN_0855ad24(&uStack_80,0,&uStack_140,2,param_7,param_5,param_6,*(undefined8 *)puVar1);
  if (!bVar4) {
    lVar11 = *param_2;
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    uVar10 = FUN_0855a3bc(lVar11,&uStack_80,1);
    if ((uVar10 & 1) == 0) {
      return 0;
    }
  }
  if (*param_2 != 0) {
    uVar15 = *(undefined8 *)(*param_2 + 0x18);
    if (*(int *)(*(long *)PTR_DAT_09285bb0 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    uVar10 = FUN_089ca704(uVar15,0,0);
    if ((uVar10 & 1) != 0) {
      if ((*param_2 == 0) || (lVar11 = *(long *)(*param_2 + 0x18), lVar11 == 0)) goto LAB_0855c894;
      FUN_089ae0dc(&uStack_240,lVar11,0);
      if ((*param_2 == 0) || (lVar11 = *(long *)(*param_2 + 0x18), lVar11 == 0)) goto LAB_0855c894;
      uVar6 = FUN_089a4830(lVar11,0);
      if ((*param_2 == 0) || (lVar11 = *(long *)(*param_2 + 0x18), lVar11 == 0)) goto LAB_0855c894;
      uVar13 = FUN_089a49f8(lVar11,0);
      if ((*param_2 == 0) || (lVar11 = *(long *)(*param_2 + 0x18), lVar11 == 0)) goto LAB_0855c894;
      uVar7 = FUN_089a4668(lVar11,0);
      if ((*param_2 == 0) || (lVar11 = *(long *)(*param_2 + 0x18), lVar11 == 0)) goto LAB_0855c894;
      uVar8 = FUN_089a41d0(lVar11,0);
      lVar11 = *(long *)puVar2;
      if (*(int *)(lVar11 + 0xe4) == 0) {
        thunk_FUN_040d65a8(lVar11);
      }
      uStack_1f8 = uStack_238;
      uStack_200 = uStack_240;
      uStack_1e8 = uStack_228;
      uStack_1f0 = uStack_230;
      uStack_1d0 = (undefined4)uStack_210;
      uStack_1d8 = uStack_218;
      uStack_1e0 = uStack_220;
      FUN_0855ad24(auStack_1c0,uVar13,&uStack_200,2,uVar6,uVar7,uVar8,*(undefined8 *)puVar1);
      lVar11 = *param_2;
      if (*(int *)(*(long *)PTR_DAT_0932c538 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      FUN_0855ae88(auStack_1c0,lVar11);
    }
  }
  puVar2 = PTR_DAT_092871d8;
  lVar11 = *(long *)PTR_DAT_092871d8;
  if (*(int *)(lVar11 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
    lVar11 = *(long *)puVar2;
  }
  lVar11 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x10);
  if (lVar11 != 0) {
    uVar10 = FUN_0855af54(lVar11,&uStack_80,param_2,1);
    if ((uVar10 & 1) == 0) {
      uStack_f8 = param_4[1];
      uStack_100 = *param_4;
      uStack_e8 = param_4[3];
      uStack_f0 = param_4[2];
      uStack_d8 = param_4[5];
      uStack_e0 = param_4[4];
      uStack_d0 = *(undefined4 *)(param_4 + 6);
      iVar9 = FUN_089af740(&uStack_100,0);
      if (iVar9 == 0) {
        uVar6 = *(undefined4 *)((long)param_4 + 0x1c);
      }
      else {
        uStack_f8 = param_4[1];
        uStack_100 = *param_4;
        uStack_e8 = param_4[3];
        uStack_f0 = param_4[2];
        uStack_d8 = param_4[5];
        uStack_e0 = param_4[4];
        uStack_d0 = *(undefined4 *)(param_4 + 6);
        uVar6 = FUN_089af740(&uStack_100,0);
      }
      uStack_d0 = *(undefined4 *)(param_4 + 6);
      uStack_98 = 0;
      uStack_a0 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_e8 = param_4[3];
      uStack_f0 = param_4[2];
      uStack_d8 = param_4[5];
      uStack_e0 = param_4[4];
      uStack_c0 = CONCAT44(uVar6,*(undefined4 *)((long)param_4 + 0xc));
      uStack_f8 = param_4[1];
      uStack_100 = *param_4;
      uStack_b8 = CONCAT44(param_6,param_5);
      uStack_b0 = CONCAT44(param_6,param_6);
      uStack_a8 = (ulong)*(uint *)(param_4 + 4);
      uVar5 = FUN_089afefc(&uStack_100,0);
      uStack_f8 = param_4[1];
      uStack_100 = *param_4;
      uStack_e8 = param_4[3];
      uStack_f0 = param_4[2];
      uStack_a8 = CONCAT35(uStack_a8._5_3_,CONCAT14(uVar5,(undefined4)uStack_a8)) &
                  0xffffff01ffffffff;
      uStack_d8 = param_4[5];
      uStack_e0 = param_4[4];
      uStack_d0 = *(undefined4 *)(param_4 + 6);
      uVar5 = FUN_089afeb4(&uStack_100,0);
      uStack_f8 = param_4[1];
      uStack_100 = *param_4;
      uStack_e8 = param_4[3];
      uStack_f0 = param_4[2];
      uStack_a8 = CONCAT26(uStack_a8._6_2_,CONCAT15(uVar5,(undefined5)uStack_a8)) &
                  0xffff01ffffffffff;
      uStack_d8 = param_4[5];
      uStack_e0 = param_4[4];
      uStack_d0 = *(undefined4 *)(param_4 + 6);
      uVar5 = FUN_089afed0(&uStack_100,0);
      uStack_f8 = param_4[1];
      uStack_100 = *param_4;
      uStack_e8 = param_4[3];
      uStack_f0 = param_4[2];
      uStack_d8 = param_4[5];
      uStack_e0 = param_4[4];
      uStack_98 = CONCAT44(uStack_98._4_4_,*(undefined4 *)(param_4 + 1));
      uStack_d0 = *(undefined4 *)(param_4 + 6);
      uStack_a0 = CONCAT44(param_1,param_7);
      uStack_a8 = CONCAT17(uStack_a8._7_1_,CONCAT16(uVar5,(undefined6)uStack_a8)) &
                  0xff01ffffffffffff;
      uVar5 = UnityEngine_TextCore_Text_TextLib__GenerateTextInternal(&uStack_100,0);
      uStack_f8 = param_4[1];
      uStack_100 = *param_4;
      uStack_e8 = param_4[3];
      uStack_f0 = param_4[2];
      uStack_98 = CONCAT35(uStack_98._5_3_,CONCAT14(uVar5,(undefined4)uStack_98)) &
                  0xffffff01ffffffff;
      uStack_d8 = param_4[5];
      uStack_e0 = param_4[4];
      uStack_d0 = *(undefined4 *)(param_4 + 6);
      uVar5 = FUN_089aff74(&uStack_100,0);
      uStack_98 = CONCAT26(uStack_98._6_2_,CONCAT15(uVar5,(undefined5)uStack_98)) &
                  0xffff01ffffffffff;
      uStack_90 = CONCAT44(*(undefined4 *)(param_4 + 5),*(undefined4 *)(param_4 + 6));
      uStack_88 = param_8;
      thunk_FUN_040ec700(&uStack_88,param_8);
      uStack_238 = uStack_b8;
      uStack_240 = uStack_c0;
      uStack_228 = uStack_a8;
      uStack_230 = uStack_b0;
      uStack_218 = uStack_98;
      uStack_220 = uStack_a0;
      uStack_208 = uStack_88;
      uStack_210 = uStack_90;
      if (*(int *)(*(long *)PTR_DAT_09326d38 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      uStack_278 = uStack_238;
      uStack_280 = uStack_240;
      uStack_268 = uStack_228;
      uStack_270 = uStack_230;
      uStack_258 = uStack_218;
      uStack_260 = uStack_220;
      uStack_248 = uStack_208;
      uStack_250 = uStack_210;
      lVar11 = FUN_0844cba4(param_3,&uStack_280,0);
      *param_2 = lVar11;
      thunk_FUN_040ec700(param_2,lVar11);
    }
    return 1;
  }
LAB_0855c894:
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


