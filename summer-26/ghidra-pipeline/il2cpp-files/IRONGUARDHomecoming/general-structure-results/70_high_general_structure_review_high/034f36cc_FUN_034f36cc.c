/*
FUNCTION_NAME: FUN_034f36cc
ENTRY_POINT: 034f36cc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 84
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_11;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_3
*/


long FUN_034f36cc(undefined4 param_1,long *param_2,undefined8 param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  long lVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  int iVar18;
  undefined8 uVar19;
  undefined8 local_168;
  undefined1 local_160;
  undefined1 local_15f;
  undefined1 local_15e;
  undefined1 local_15d;
  undefined4 local_15c;
  undefined1 local_158;
  undefined4 local_157;
  undefined3 uStack_153;
  undefined8 local_150;
  undefined1 local_148;
  undefined1 local_147;
  undefined1 local_146;
  undefined1 local_145;
  undefined4 local_144;
  undefined1 local_140;
  undefined4 local_13f;
  undefined3 uStack_13b;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined1 local_118;
  undefined1 local_117;
  undefined1 local_116;
  undefined1 local_115;
  undefined4 local_114;
  undefined1 local_110;
  undefined4 local_10f;
  undefined3 uStack_10b;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined1 local_f8;
  undefined4 local_f7;
  undefined3 uStack_f3;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined1 local_d8;
  undefined1 local_d7;
  undefined1 local_d6;
  undefined1 local_d5;
  undefined4 local_d4;
  undefined1 local_d0;
  undefined4 uStack_cf;
  undefined3 uStack_cb;
  undefined8 local_c8;
  undefined1 local_c0;
  undefined1 local_bf;
  undefined1 local_be;
  undefined1 local_bd;
  undefined4 local_bc;
  undefined1 local_b8;
  undefined4 local_b7;
  undefined3 uStack_b3;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined3 uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  char local_64 [4];
  
  puVar3 = Method_System_Net_WebHeaderCollection_GetAsString__;
  puVar2 = Method_System_Net_WebHeaderCollection_CheckBadChars__;
  if ((DAT_04832e5b & 1) == 0) {
    thunk_FUN_01efb3a4(Method_System_Array_Resize<InputDevice_ControlBitRangeNode>__);
    thunk_FUN_01efb3a4(Method_System_Net_WebRequest_get_ContentLength__);
    thunk_FUN_01efb3a4(Method_System_Net_WebHeaderCollection_CheckBadChars__);
    thunk_FUN_01efb3a4(Method_System_Net_WebHeaderCollection_GetAsString__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusInEvent>__
                      );
    DAT_04832e5b = 1;
  }
  local_64[0] = '\0';
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  lVar11 = thunk_FUN_01f117cc(*(undefined8 *)puVar3);
  FUN_030f2380(lVar11,*(undefined8 *)puVar2);
  uVar12 = thunk_FUN_01ecad80(param_1,param_2,param_3,local_64,0);
  puVar2 = Method_System_Array_Resize<InputDevice_ControlBitRangeNode>__;
  if ((uVar12 & 1) == 0) {
    return lVar11;
  }
  lVar16 = *param_2;
  if (lVar16 == 0) goto LAB_034f3eb8;
  if (*(int *)(lVar16 + 0x18) == 0) goto LAB_034f3ebc;
  uVar19 = *(undefined8 *)(lVar16 + 0x20);
  if (*(int *)(*(long *)Method_System_Array_Resize<InputDevice_ControlBitRangeNode>__ + 0xe0) == 0)
  {
    thunk_FUN_01ee6d7c();
  }
  FUN_0354c030(&uStack_70,uVar19,0);
  lVar16 = *param_2;
  if (lVar16 == 0) goto LAB_034f3eb8;
  if (*(uint *)(lVar16 + 0x18) < 2) goto LAB_034f3ebc;
  FUN_0354c030(&local_78,*(undefined8 *)(lVar16 + 0x28),0);
  lVar16 = *param_2;
  if (lVar16 == 0) goto LAB_034f3eb8;
  if (*(uint *)(lVar16 + 0x18) < 4) {
LAB_034f3ebc:
                    /* WARNING: Subroutine does not return */
    FUN_01f08a44();
  }
  uVar19 = *(undefined8 *)(lVar16 + 0x38);
  if (*(int *)(*(long *)
                Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusInEvent>__
              + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar16 = *param_2;
    if (lVar16 == 0) goto LAB_034f3eb8;
  }
  uVar14 = local_78;
  if (*(uint *)(lVar16 + 0x18) < 4) goto LAB_034f3ebc;
  if (*(long *)(lVar16 + 0x38) != 0) {
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar12 = FUN_0354da20(&uStack_70,uVar14,0);
    if ((uVar12 & 1) != 0) {
      return lVar11;
    }
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    FUN_0354c5fc(&uStack_80,param_1,1,1,0,0,0,0,0);
    uVar4 = FUN_0354d470(param_1,0xc,0);
    FUN_0354c244(&local_88,param_1,0xc,uVar4,0);
    uVar4 = FUN_0354d470(param_1,0xc,0);
    FUN_0354c5fc(&uStack_90,param_1,0xc,uVar4,0x17,0x3b,0x3b,999,0);
    if (local_64[0] == '\0') {
      local_a8 = 0;
      FUN_0354c244(&local_a8,1,1,1,0);
      local_98 = local_a8;
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar14 = FUN_0354e8f0(&uStack_70,0);
      uVar14 = FUN_0354ccd0(&local_98,uVar14,0);
      uVar4 = FUN_0354e68c(&uStack_70,0);
      uVar5 = FUN_0354e33c(&uStack_70,0);
      FUN_034f522c(uVar14,uVar4,1,uVar5,0);
      local_b0 = 0;
      FUN_0354c244(&local_b0,1,1,1,0);
      local_98 = local_b0;
      uVar13 = FUN_0354e8f0(&local_78,0);
      uVar13 = FUN_0354ccd0(&local_98,uVar13,0);
      uVar6 = FUN_0354e68c(&local_78,0);
      uVar7 = FUN_0354e33c(&local_78,0);
      FUN_034f522c(uVar13,uVar6,1,uVar7,0);
      local_c0 = (undefined1)uVar4;
      local_bf = 1;
      local_be = (undefined1)uVar5;
      local_bd = 0;
      local_bc = 0;
      local_b8 = 1;
      local_b7 = 0;
      uStack_b3 = 0;
      local_d8 = (undefined1)uVar6;
      local_d7 = 1;
      local_d6 = (undefined1)uVar7;
      local_d5 = 0;
      local_d4 = 0;
      local_d0 = 1;
      uStack_cb = 0;
      uStack_cf = 0;
      local_e0 = uVar13;
      local_c8 = uVar14;
      uVar19 = FUN_034f3ec0(uStack_80,local_88,uVar19,&local_c8,&local_e0);
      if (lVar11 == 0) goto LAB_034f3eb8;
      iVar18 = *(int *)(lVar11 + 0x1c);
      lVar16 = *(long *)(lVar11 + 0x10);
    }
    else {
      local_a8 = 0;
      FUN_0354c244(&local_a8,1,1,1,0);
      uVar14 = local_a8;
      local_a0 = 0;
      uStack_9c = 0;
      FUN_034f522c(local_a8,1,1,1,0);
      local_b0 = 0;
      FUN_0354c244(&local_b0,1,1,1,0);
      local_98 = local_b0;
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar13 = FUN_0354e8f0(&uStack_70,0);
      uVar13 = FUN_0354ccd0(&local_98,uVar13,0);
      uVar4 = FUN_0354e68c(&uStack_70,0);
      uVar5 = FUN_0354e33c(&uStack_70,0);
      FUN_034f522c(uVar13,uVar4,1,uVar5,0);
      local_e8 = 0;
      FUN_0354c244(&local_e8,param_1,1,1,0);
      uVar6 = FUN_0354e970(&uStack_70,0);
      uVar7 = FUN_0354e68c(&uStack_70,0);
      uVar8 = FUN_0354e33c(&uStack_70,0);
      local_f0 = 0;
      FUN_0354c244(&local_f0,uVar6,uVar7,uVar8,0);
      local_f8 = 1;
      local_118 = (undefined1)uVar4;
      local_117 = 1;
      local_116 = (undefined1)uVar5;
      local_115 = 0;
      local_114 = 0;
      local_110 = 1;
      local_108 = uVar14;
      uStack_100 = 0x10101;
      local_f7 = local_a0;
      uStack_f3 = uStack_9c;
      local_10f = 0;
      uStack_10b = 0;
      local_120 = uVar13;
      uVar14 = FUN_034f3ec0(local_e8,local_f0,uVar19,&local_108,&local_120);
      if (lVar11 == 0) goto LAB_034f3eb8;
      lVar16 = *(long *)(lVar11 + 0x10);
      lVar17 = *(long *)Method_System_Net_WebRequest_get_ContentLength__;
      *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
      if (lVar16 == 0) goto LAB_034f3eb8;
      uVar1 = *(uint *)(lVar11 + 0x18);
      if (uVar1 < *(uint *)(lVar16 + 0x18)) {
        *(uint *)(lVar11 + 0x18) = uVar1 + 1;
        *(undefined8 *)(lVar16 + (long)(int)uVar1 * 8 + 0x20) = uVar14;
        thunk_FUN_01f51358();
      }
      else {
        FUN_030f2bb4(lVar11,uVar14,
                     *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
      }
      local_128 = 0;
      FUN_0354c244(&local_128,1,1,1,0);
      local_98 = local_128;
      uVar14 = FUN_0354e8f0(&local_78,0);
      uVar14 = FUN_0354ccd0(&local_98,uVar14,0);
      uVar4 = FUN_0354e68c(&local_78,0);
      uVar5 = FUN_0354e33c(&local_78,0);
      FUN_034f522c(uVar14,uVar4,1,uVar5,0);
      local_130 = 0;
      FUN_0354c244(&local_130,1,1,1,0);
      local_98 = local_130;
      uVar13 = FUN_0354e8f0(&uStack_90,0);
      uVar13 = FUN_0354ccd0(&local_98,uVar13,0);
      uVar6 = FUN_0354e68c(&uStack_90,0);
      uVar7 = FUN_0354e33c(&uStack_90,0);
      FUN_034f522c(uVar13,uVar6,1,uVar7,0);
      uVar8 = FUN_0354e970(&uStack_70,0);
      uVar9 = FUN_0354e68c(&uStack_70,0);
      uVar10 = FUN_0354e33c(&uStack_70,0);
      local_138 = 0;
      FUN_0354c244(&local_138,uVar8,uVar9,uVar10,0);
      local_98 = local_138;
      uVar15 = FUN_0354cf64(0x3ff0000000000000,&local_98,0);
      local_148 = (undefined1)uVar4;
      local_147 = 1;
      local_146 = (undefined1)uVar5;
      local_145 = 0;
      local_144 = 0;
      local_140 = 1;
      local_13f = 0;
      uStack_13b = 0;
      local_160 = (undefined1)uVar6;
      local_15f = 1;
      local_15e = (undefined1)uVar7;
      local_15d = 0;
      local_15c = 0;
      local_158 = 1;
      local_157 = 0;
      uStack_153 = 0;
      local_168 = uVar13;
      local_150 = uVar14;
      uVar19 = FUN_034f3ec0(uVar15,local_88,uVar19,&local_150,&local_168);
      iVar18 = *(int *)(lVar11 + 0x1c);
      lVar16 = *(long *)(lVar11 + 0x10);
    }
    lVar17 = *(long *)Method_System_Net_WebRequest_get_ContentLength__;
    *(int *)(lVar11 + 0x1c) = iVar18 + 1;
    if (lVar16 == 0) {
LAB_034f3eb8:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar1 = *(uint *)(lVar11 + 0x18);
    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
      *(undefined8 *)(lVar16 + (long)(int)uVar1 * 8 + 0x20) = uVar19;
      thunk_FUN_01f51358();
    }
    else {
      FUN_030f2bb4(lVar11,uVar19,*(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70))
      ;
    }
  }
  return lVar11;
}


