/*
FUNCTION_NAME: Newtonsoft.Json.Linq.JToken$$Newtonsoft.Json.IJsonLineInfo.get_LinePosition
ENTRY_POINT: 054d30b8
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2
*/


bool Newtonsoft_Json_Linq_JToken__Newtonsoft_Json_IJsonLineInfo_get_LinePosition
               (undefined8 param_1,long param_2,short *param_3,uint param_4,int *param_5)

{
  short sVar1;
  ushort uVar2;
  short sVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  short sVar10;
  undefined8 uVar11;
  ulong uVar12;
  int iVar13;
  long lStack0000000000000008;
  
  puVar5 = PTR_DAT_06a1e0a8;
                    /* try { // try from 054d30cc to 055d30db has its CatchHandler @ 054d31b0 */
  lStack0000000000000008 = param_2;
  if ((DAT_06dbae0a & 1) == 0) {
    FUN_02d965b8(PTR_DAT_06a1e0a8);
                    /* try { // try from 054d30fc to 055d30ff has its CatchHandler @ 054d31a4 */
    FUN_02d965b8(PTR_DAT_069fc268);
                    /* try { // try from 054d3100 to 055d310b has its CatchHandler @ 054d31ac */
    FUN_02d965b8(PTR_DAT_06a183c8);
    FUN_02d965b8(PTR_DAT_06a19118);
    FUN_02d965b8(PTR_DAT_069fd8d8);
    FUN_02d965b8(PTR_DAT_06a1e110);
    DAT_06dbae0a = 1;
  }
  puVar4 = PTR_DAT_069fd8d8;
  lVar8 = *(long *)puVar5;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_02df485c();
    lVar8 = *(long *)puVar5;
  }
  uVar11 = **(undefined8 **)(lVar8 + 0xb8);
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_02df485c(*(long *)puVar4);
  }
  uVar9 = FUN_054ffee4(param_2,uVar11,0);
  if ((uVar9 & 1) == 0) {
FUN_054d31fc:
    iVar13 = 0x21;
    iVar6 = 2;
  }
  else {
    if (*(int *)(*(long *)PTR_DAT_069fc268 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    iVar6 = FUN_054c555c(&stack0x00000018);
    if (iVar6 == 1) {
      iVar13 = 0x1c;
    }
    else {
      if (iVar6 == 2) {
        if (*(int *)(*(long *)PTR_DAT_06a1e110 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        lVar8 = FUN_0544859c(0);
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        param_2 = FUN_0544b468(lVar8,param_1,0);
        lStack0000000000000008 = param_2;
        goto FUN_054d31fc;
      }
      iVar13 = 0x1b;
    }
  }
  if ((int)param_4 < iVar13) {
    *param_5 = 0;
  }
  else {
    *param_5 = iVar13;
    if (param_4 < 0x1b) {
LAB_054d359c:
                    /* WARNING: Subroutine does not return */
      FUN_02d96868();
    }
    if (*(int *)(*(long *)PTR_DAT_069fc268 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    uVar9 = FUN_054c51c0(&stack0x00000018);
    uVar12 = uVar9 & 0xffffffff;
    if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
      thunk_FUN_02df485c(*(long *)puVar5);
    }
    sVar10 = (short)(uVar12 / 10);
    sVar1 = (short)(uVar12 / 100);
    param_3[4] = 0x2d;
    sVar3 = (short)(uVar12 / 1000);
    *param_3 = sVar3 + 0x30;
    param_3[3] = (short)uVar9 + sVar10 * -10 + 0x30;
    param_3[2] = sVar10 + sVar1 * -10 + 0x30;
    param_3[1] = sVar1 + sVar3 * -10 + 0x30;
    uVar9 = FUN_054c8aac(&stack0x00000018);
    param_3[7] = 0x2d;
    sVar10 = (short)((uVar9 & 0xffffffff) / 10);
    param_3[5] = sVar10 + 0x30;
    param_3[6] = (short)uVar9 + sVar10 * -10 + 0x30;
    uVar9 = FUN_054c8770(&stack0x00000018);
    param_3[10] = 0x54;
    sVar10 = (short)((uVar9 & 0xffffffff) / 10);
    param_3[8] = sVar10 + 0x30;
    param_3[9] = (short)uVar9 + sVar10 * -10 + 0x30;
    uVar7 = FUN_054c88b0(&stack0x00000018);
    param_3[0xd] = 0x3a;
    uVar2 = (ushort)((uVar7 & 0xff) / 10);
    param_3[0xb] = uVar2 | 0x30;
    param_3[0xc] = (short)uVar7 + uVar2 * -10 + 0x30;
    uVar7 = FUN_054c8a24(&stack0x00000018);
    param_3[0x10] = 0x3a;
    uVar2 = (ushort)((uVar7 & 0xff) / 10);
    param_3[0xe] = uVar2 | 0x30;
    param_3[0xf] = (short)uVar7 + uVar2 * -10 + 0x30;
    uVar7 = FUN_054c8c90(&stack0x00000018);
    param_3[0x13] = 0x2e;
    uVar2 = (ushort)((uVar7 & 0xff) / 10);
    param_3[0x11] = uVar2 | 0x30;
    param_3[0x12] = (short)uVar7 + uVar2 * -10 + 0x30;
    uVar9 = FUN_054c55cc(&stack0x00000018);
    if ((*(ushort *)(*(long *)(*(long *)PTR_DAT_06a183c8 + 0x20) + 0x135) & 1) == 0) {
      FUN_02dcfd18(*(long *)(*(long *)PTR_DAT_06a183c8 + 0x20));
    }
    if (DAT_06dbae55 == '\0') {
      FUN_02d965b8(PTR_DAT_06a19118);
      DAT_06dbae55 = '\x01';
    }
    lVar8 = 0x1a;
    uVar9 = uVar9 % 10000000;
    do {
      uVar12 = lVar8 - 0x14;
      sVar10 = (short)(uVar9 / 10);
      param_3[lVar8] = (short)uVar9 + sVar10 * -10 + 0x30;
      lVar8 = lVar8 + -1;
      uVar9 = uVar9 / 10;
    } while (1 < uVar12);
    param_3[0x14] = sVar10 + 0x30;
    if (iVar6 == 1) {
      if (param_4 == 0x1b) goto LAB_054d359c;
      param_3[0x1b] = 0x5a;
    }
    else if (iVar6 == 2) {
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      uVar9 = FUN_054ffefc(param_2,0,0);
      if ((uVar9 & 1) == 0) {
        sVar10 = 0x2b;
      }
      else {
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        lStack0000000000000008 = FUN_054ff814(-param_2,0);
        sVar10 = 0x2d;
      }
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      uVar9 = FUN_054ff114(&stack0x00000008,0);
      if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
        thunk_FUN_02df485c(*(long *)puVar5);
      }
      if (param_4 < 0x21) goto LAB_054d359c;
      sVar1 = (short)((uVar9 & 0xffffffff) / 10);
      param_3[0x1f] = sVar1 + 0x30;
      param_3[0x20] = (short)uVar9 + sVar1 * -10 + 0x30;
      param_3[0x1e] = 0x3a;
      uVar9 = Oculus_Skinning_GpuSkinning_OvrGpuCombinerDrawCall___cctor(&stack0x00000008,0);
      param_3[0x1b] = sVar10;
      sVar10 = (short)((uVar9 & 0xffffffff) / 10);
      param_3[0x1c] = sVar10 + 0x30;
      param_3[0x1d] = (short)uVar9 + sVar10 * -10 + 0x30;
    }
  }
  return iVar13 <= (int)param_4;
}


