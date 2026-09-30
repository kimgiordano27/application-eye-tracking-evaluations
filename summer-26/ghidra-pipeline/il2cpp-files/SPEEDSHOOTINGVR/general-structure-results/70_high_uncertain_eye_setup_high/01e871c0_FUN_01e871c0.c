/*
FUNCTION_NAME: FUN_01e871c0
ENTRY_POINT: 01e871c0
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 FUN_01e871c0(int param_1,undefined4 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  uint uVar10;
  long *plVar11;
  uint uVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  
  puVar1 = PTR_DAT_0234c2e8;
  if ((DAT_0247e2c5 & 1) == 0) {
    FUN_00fdc2e4(PTR_DAT_0235f480);
    FUN_00fdc2e4(PTR_DAT_0235f488);
    FUN_00fdc2e4(PTR_DAT_0234ba20);
    FUN_00fdc2e4(PTR_DAT_0235f230);
    FUN_00fdc2e4(PTR_DAT_0235f490);
    FUN_00fdc2e4(PTR_DAT_0234c2e8);
    FUN_00fdc2e4(PTR_DAT_0235f498);
    DAT_0247e2c5 = 1;
  }
  puVar2 = PTR_DAT_0235f490;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01022c14();
  }
  uVar5 = FUN_01e79184();
  lVar7 = *(long *)puVar2;
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_01022c14(lVar7);
    lVar7 = *(long *)puVar2;
  }
  uVar6 = OVRManager__OVRMixedRealityCaptureConfiguration_set_virtualGreenScreenTopY
                    (uVar5,**(undefined8 **)(lVar7 + 0xb8),0);
  if ((uVar6 & 1) == 0) {
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01022c14();
    }
    uVar5 = FUN_01e79184();
    puVar2 = PTR_DAT_0235f230;
    lVar7 = *(long *)PTR_DAT_0235f230;
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_01022c14(lVar7);
      lVar7 = *(long *)puVar2;
    }
    uVar6 = OVRManager__OVRMixedRealityCaptureConfiguration_set_virtualGreenScreenTopY
                      (uVar5,**(undefined8 **)(lVar7 + 0xb8),0);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01022c14(*(long *)puVar1);
      if ((uVar6 & 1) == 0) goto LAB_01e87b30;
LAB_01e8734c:
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01022c14();
      }
      iVar3 = FUN_01eb7984(param_1,*(long *)(*(long *)puVar1 + 0xb8) + 0x620,0);
      if (iVar3 != 0) goto LAB_01e88570;
      plVar9 = (long *)(param_2 + 6);
      if ((*plVar9 == 0) || (*(int *)(*plVar9 + 0x18) != 0x13)) {
        lVar7 = FUN_00fdc388(*(undefined8 *)PTR_DAT_0235f480,0x13);
        *plVar9 = lVar7;
        thunk_FUN_0106e12c(plVar9,lVar7);
      }
      lVar7 = *(long *)puVar1;
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_01022c14();
        lVar7 = *(long *)puVar1;
      }
      lVar7 = *(long *)(lVar7 + 0xb8);
      *param_2 = *(undefined4 *)(lVar7 + 0x620);
      uVar6 = *(ulong *)(lVar7 + 0x624);
      *(ulong *)(param_2 + 1) = uVar6;
      plVar11 = (long *)(param_2 + 4);
      iVar3 = (int)uVar6;
      if ((*plVar11 == 0) || ((long)*(int *)(*plVar11 + 0x18) != (uVar6 & 0xffffffff))) {
        uVar5 = FUN_00fdc388(*(undefined8 *)PTR_DAT_0235f488,iVar3);
        *(undefined8 *)(param_2 + 4) = uVar5;
        thunk_FUN_0106e12c(plVar11,uVar5);
        iVar3 = param_2[1];
      }
      if (iVar3 != 0) {
        lVar7 = 0;
        do {
          lVar8 = *(long *)puVar1;
          lVar13 = *plVar11;
          if (*(int *)(lVar8 + 0xe0) == 0) {
            thunk_FUN_01022c14();
            lVar8 = *(long *)puVar1;
          }
          lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x1268);
          if (lVar8 == 0) goto LAB_01e88598;
          uVar12 = (uint)lVar7;
          if (*(uint *)(lVar8 + 0x18) <= uVar12) goto LAB_01e8859c;
          lVar8 = *(long *)(lVar8 + lVar7 * 8 + 0x20);
          if (lVar8 == 0) goto LAB_01e88598;
          (**(code **)(lVar8 + 0x18))
                    (&local_b0,*(undefined8 *)(lVar8 + 0x40),*(undefined8 *)(lVar8 + 0x28));
          uStack_78 = uStack_a8;
          local_80 = local_b0;
          uStack_68 = uStack_98;
          local_70 = local_a0;
          local_60 = local_90;
          if (lVar13 == 0) goto LAB_01e88598;
          if (*(uint *)(lVar13 + 0x18) <= uVar12) goto LAB_01e8859c;
          lVar13 = lVar13 + lVar7 * 0x24;
          *(undefined4 *)(lVar13 + 0x40) = local_90;
          *(undefined8 *)(lVar13 + 0x28) = uStack_a8;
          *(undefined8 *)(lVar13 + 0x20) = local_b0;
          *(undefined8 *)(lVar13 + 0x38) = uStack_98;
          *(undefined8 *)(lVar13 + 0x30) = local_a0;
          lVar7 = (long)(int)(uVar12 + 1);
        } while (lVar7 < (long)(ulong)(uint)param_2[1]);
      }
      lVar7 = *(long *)puVar1;
      lVar8 = *plVar9;
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_01022c14();
        lVar7 = *(long *)puVar1;
      }
      lVar7 = *(long *)(lVar7 + 0xb8);
      uStack_78 = *(undefined8 *)(lVar7 + 0x100c);
      local_80 = *(undefined8 *)(lVar7 + 0x1004);
      uStack_68 = *(undefined8 *)(lVar7 + 0x101c);
      local_70 = *(undefined8 *)(lVar7 + 0x1014);
      if (lVar8 == 0) goto LAB_01e88598;
      if (*(int *)(lVar8 + 0x18) == 0) goto LAB_01e8859c;
      *(undefined8 *)(lVar8 + 0x28) = uStack_78;
      *(undefined8 *)(lVar8 + 0x20) = local_80;
      *(undefined8 *)(lVar8 + 0x38) = uStack_68;
      *(undefined8 *)(lVar8 + 0x30) = local_70;
      lVar7 = *(long *)(*(long *)puVar1 + 0xb8);
      uStack_a8 = *(undefined8 *)(lVar7 + 0x102c);
      local_b0 = *(undefined8 *)(lVar7 + 0x1024);
      uStack_98 = *(undefined8 *)(lVar7 + 0x103c);
      local_a0 = *(undefined8 *)(lVar7 + 0x1034);
      lVar7 = *plVar9;
      if (lVar7 == 0) goto LAB_01e88598;
      if (*(uint *)(lVar7 + 0x18) < 2) goto LAB_01e8859c;
      *(undefined8 *)(lVar7 + 0x48) = uStack_a8;
      *(undefined8 *)(lVar7 + 0x40) = local_b0;
      *(undefined8 *)(lVar7 + 0x58) = uStack_98;
      *(undefined8 *)(lVar7 + 0x50) = local_a0;
      lVar7 = *(long *)(*(long *)puVar1 + 0xb8);
      uVar15 = *(undefined8 *)(lVar7 + 0x1044);
      uVar14 = *(undefined8 *)(lVar7 + 0x105c);
      uVar5 = *(undefined8 *)(lVar7 + 0x1054);
      lVar8 = *plVar9;
      if (lVar8 == 0) goto LAB_01e88598;
      if (*(uint *)(lVar8 + 0x18) < 3) goto LAB_01e8859c;
      *(undefined8 *)(lVar8 + 0x68) = *(undefined8 *)(lVar7 + 0x104c);
      *(undefined8 *)(lVar8 + 0x60) = uVar15;
      *(undefined8 *)(lVar8 + 0x78) = uVar14;
      *(undefined8 *)(lVar8 + 0x70) = uVar5;
      lVar7 = *(long *)(*(long *)puVar1 + 0xb8);
      uVar15 = *(undefined8 *)(lVar7 + 0x1064);
      uVar14 = *(undefined8 *)(lVar7 + 0x107c);
      uVar5 = *(undefined8 *)(lVar7 + 0x1074);
      lVar8 = *plVar9;
      if (lVar8 == 0) goto LAB_01e88598;
      if (*(uint *)(lVar8 + 0x18) < 4) goto LAB_01e8859c;
      *(undefined8 *)(lVar8 + 0x88) = *(undefined8 *)(lVar7 + 0x106c);
      *(undefined8 *)(lVar8 + 0x80) = uVar15;
      *(undefined8 *)(lVar8 + 0x98) = uVar14;
      *(undefined8 *)(lVar8 + 0x90) = uVar5;
      lVar7 = *(long *)(*(long *)puVar1 + 0xb8);
      uVar15 = *(undefined8 *)(lVar7 + 0x1084);
      uVar14 = *(undefined8 *)(lVar7 + 0x109c);
      uVar5 = *(undefined8 *)(lVar7 + 0x1094);
      lVar8 = *plVar9;
      if (lVar8 == 0) goto LAB_01e88598;
      if (*(uint *)(lVar8 + 0x18) < 5) goto LAB_01e8859c;
      *(undefined8 *)(lVar8 + 0xa8) = *(undefined8 *)(lVar7 + 0x108c);
      *(undefined8 *)(lVar8 + 0xa0) = uVar15;
      *(undefined8 *)(lVar8 + 0xb8) = uVar14;
      *(undefined8 *)(lVar8 + 0xb0) = uVar5;
      lVar7 = *(long *)(*(long *)puVar1 + 0xb8);
      uVar15 = *(undefined8 *)(lVar7 + 0x10a4);
      uVar14 = *(undefined8 *)(lVar7 + 0x10bc);
      uVar5 = *(undefined8 *)(lVar7 + 0x10b4);
      lVar8 = *plVar9;
      if (lVar8 == 0) goto LAB_01e88598;
      if (*(uint *)(lVar8 + 0x18) < 6) goto LAB_01e8859c;
      *(undefined8 *)(lVar8 + 200) = *(undefined8 *)(lVar7 + 0x10ac);
      *(undefined8 *)(lVar8 + 0xc0) = uVar15;
      *(undefined8 *)(lVar8 + 0xd8) = uVar14;
      *(undefined8 *)(lVar8 + 0xd0) = uVar5;
      lVar7 = *(long *)(*(long *)puVar1 + 0xb8);
      uVar15 = *(undefined8 *)(lVar7 + 0x10c4);
      uVar14 = *(undefined8 *)(lVar7 + 0x10dc);
      uVar5 = *(undefined8 *)(lVar7 + 0x10d4);
      lVar8 = *plVar9;
      if (lVar8 == 0) goto LAB_01e88598;
      if (*(uint *)(lVar8 + 0x18) < 7) goto LAB_01e8859c;
      *(undefined8 *)(lVar8 + 0xe8) = *(undefined8 *)(lVar7 + 0x10cc);
      *(undefined8 *)(lVar8 + 0xe0) = uVar15;
      *(undefined8 *)(lVar8 + 0xf8) = uVar14;
      *(undefined8 *)(lVar8 + 0xf0) = uVar5;
      lVar7 = *(long *)(*(long *)puVar1 + 0xb8);
      uVar15 = *(undefined8 *)(lVar7 + 0x10e4);
      uVar14 = *(undefined8 *)(lVar7 + 0x10fc);
      uVar5 = *(undefined8 *)(lVar7 + 0x10f4);
      lVar8 = *plVar9;
      if (lVar8 == 0) goto LAB_01e88598;
      if (*(uint *)(lVar8 + 0x18) < 8) goto LAB_01e8859c;
      *(undefined8 *)(lVar8 + 0x108) = *(undefined8 *)(lVar7 + 0x10ec);
      *(undefined8 *)(lVar8 + 0x100) = uVar15;
      *(undefined8 *)(lVar8 + 0x118) = uVar14;
      *(undefined8 *)(lVar8 + 0x110) = uVar5;
      lVar7 = *(long *)(*(long *)puVar1 + 0xb8);
      uVar15 = *(undefined8 *)(lVar7 + 0x1104);
      uVar14 = *(undefined8 *)(lVar7 + 0x111c);
      uVar5 = *(undefined8 *)(lVar7 + 0x1114);
      lVar8 = *plVar9;
      if (lVar8 == 0) goto LAB_01e88598;
      if (*(uint *)(lVar8 + 0x18) < 9) goto LAB_01e8859c;
      *(undefined8 *)(lVar8 + 0x128) = *(undefined8 *)(lVar7 + 0x110c);
      *(undefined8 *)(lVar8 + 0x120) = uVar15;
      *(undefined8 *)(lVar8 + 0x138) = uVar14;
      *(undefined8 *)(lVar8 + 0x130) = uVar5;
      lVar7 = *(long *)(*(long *)puVar1 + 0xb8);
      uVar15 = *(undefined8 *)(lVar7 + 0x1124);
      uVar14 = *(undefined8 *)(lVar7 + 0x113c);
      uVar5 = *(undefined8 *)(lVar7 + 0x1134);
      lVar8 = *plVar9;
      if (lVar8 == 0) goto LAB_01e88598;
      if (*(uint *)(lVar8 + 0x18) < 10) goto LAB_01e8859c;
      *(undefined8 *)(lVar8 + 0x148) = *(undefined8 *)(lVar7 + 0x112c);
      *(undefined8 *)(lVar8 + 0x140) = uVar15;
      *(undefined8 *)(lVar8 + 0x158) = uVar14;
      *(undefined8 *)(lVar8 + 0x150) = uVar5;
      lVar7 = *(long *)(*(long *)puVar1 + 0xb8);
      uVar15 = *(undefined8 *)(lVar7 + 0x1144);
      uVar14 = *(undefined8 *)(lVar7 + 0x115c);
      uVar5 = *(undefined8 *)(lVar7 + 0x1154);
      lVar8 = *plVar9;
      if (lVar8 == 0) goto LAB_01e88598;
      if (*(uint *)(lVar8 + 0x18) < 0xb) goto LAB_01e8859c;
      *(undefined8 *)(lVar8 + 0x168) = *(undefined8 *)(lVar7 + 0x114c);
      *(undefined8 *)(lVar8 + 0x160) = uVar15;
      *(undefined8 *)(lVar8 + 0x178) = uVar14;
      *(undefined8 *)(lVar8 + 0x170) = uVar5;
      lVar7 = *(long *)(*(long *)puVar1 + 0xb8);
      uVar15 = *(undefined8 *)(lVar7 + 0x1164);
      uVar14 = *(undefined8 *)(lVar7 + 0x117c);
      uVar5 = *(undefined8 *)(lVar7 + 0x1174);
      lVar8 = *plVar9;
      if (lVar8 == 0) goto LAB_01e88598;
      if (*(uint *)(lVar8 + 0x18) < 0xc) goto LAB_01e8859c;
      *(undefined8 *)(lVar8 + 0x188) = *(undefined8 *)(lVar7 + 0x116c);
      *(undefined8 *)(lVar8 + 0x180) = uVar15;
      *(undefined8 *)(lVar8 + 0x198) = uVar14;
      *(undefined8 *)(lVar8 + 400) = uVar5;
      lVar7 = *(long *)(*(long *)puVar1 + 0xb8);
      uVar15 = *(undefined8 *)(lVar7 + 0x1184);
      uVar14 = *(undefined8 *)(lVar7 + 0x119c);
      uVar5 = *(undefined8 *)(lVar7 + 0x1194);
      lVar8 = *plVar9;
      if (lVar8 == 0) goto LAB_01e88598;
      if (*(uint *)(lVar8 + 0x18) < 0xd) goto LAB_01e8859c;
      *(undefined8 *)(lVar8 + 0x1a8) = *(undefined8 *)(lVar7 + 0x118c);
      *(undefined8 *)(lVar8 + 0x1a0) = uVar15;
      *(undefined8 *)(lVar8 + 0x1b8) = uVar14;
      *(undefined8 *)(lVar8 + 0x1b0) = uVar5;
      lVar7 = *(long *)(*(long *)puVar1 + 0xb8);
      uVar15 = *(undefined8 *)(lVar7 + 0x11a4);
      uVar14 = *(undefined8 *)(lVar7 + 0x11bc);
      uVar5 = *(undefined8 *)(lVar7 + 0x11b4);
      lVar8 = *plVar9;
      if (lVar8 == 0) goto LAB_01e88598;
      if (*(uint *)(lVar8 + 0x18) < 0xe) goto LAB_01e8859c;
      *(undefined8 *)(lVar8 + 0x1c8) = *(undefined8 *)(lVar7 + 0x11ac);
      *(undefined8 *)(lVar8 + 0x1c0) = uVar15;
      *(undefined8 *)(lVar8 + 0x1d8) = uVar14;
      *(undefined8 *)(lVar8 + 0x1d0) = uVar5;
      lVar7 = *(long *)(*(long *)puVar1 + 0xb8);
      uVar15 = *(undefined8 *)(lVar7 + 0x11c4);
      uVar14 = *(undefined8 *)(lVar7 + 0x11dc);
      uVar5 = *(undefined8 *)(lVar7 + 0x11d4);
      lVar8 = *plVar9;
      if (lVar8 == 0) goto LAB_01e88598;
      if (*(uint *)(lVar8 + 0x18) < 0xf) goto LAB_01e8859c;
      *(undefined8 *)(lVar8 + 0x1e8) = *(undefined8 *)(lVar7 + 0x11cc);
      *(undefined8 *)(lVar8 + 0x1e0) = uVar15;
      *(undefined8 *)(lVar8 + 0x1f8) = uVar14;
      *(undefined8 *)(lVar8 + 0x1f0) = uVar5;
      lVar7 = *(long *)(*(long *)puVar1 + 0xb8);
      uVar15 = *(undefined8 *)(lVar7 + 0x11e4);
      uVar14 = *(undefined8 *)(lVar7 + 0x11fc);
      uVar5 = *(undefined8 *)(lVar7 + 0x11f4);
      lVar8 = *plVar9;
      if (lVar8 == 0) goto LAB_01e88598;
      if (*(uint *)(lVar8 + 0x18) < 0x10) goto LAB_01e8859c;
      *(undefined8 *)(lVar8 + 0x208) = *(undefined8 *)(lVar7 + 0x11ec);
      *(undefined8 *)(lVar8 + 0x200) = uVar15;
      *(undefined8 *)(lVar8 + 0x218) = uVar14;
      *(undefined8 *)(lVar8 + 0x210) = uVar5;
      lVar7 = *(long *)(*(long *)puVar1 + 0xb8);
      uVar15 = *(undefined8 *)(lVar7 + 0x1204);
      uVar14 = *(undefined8 *)(lVar7 + 0x121c);
      uVar5 = *(undefined8 *)(lVar7 + 0x1214);
      lVar8 = *plVar9;
      if (lVar8 == 0) goto LAB_01e88598;
      if (*(uint *)(lVar8 + 0x18) < 0x11) goto LAB_01e8859c;
      *(undefined8 *)(lVar8 + 0x228) = *(undefined8 *)(lVar7 + 0x120c);
      *(undefined8 *)(lVar8 + 0x220) = uVar15;
      *(undefined8 *)(lVar8 + 0x238) = uVar14;
      *(undefined8 *)(lVar8 + 0x230) = uVar5;
      lVar7 = *(long *)(*(long *)puVar1 + 0xb8);
      uVar15 = *(undefined8 *)(lVar7 + 0x1224);
      uVar14 = *(undefined8 *)(lVar7 + 0x123c);
      uVar5 = *(undefined8 *)(lVar7 + 0x1234);
      lVar8 = *plVar9;
      if (lVar8 == 0) goto LAB_01e88598;
      if (*(uint *)(lVar8 + 0x18) < 0x12) goto LAB_01e8859c;
      *(undefined8 *)(lVar8 + 0x248) = *(undefined8 *)(lVar7 + 0x122c);
      *(undefined8 *)(lVar8 + 0x240) = uVar15;
      *(undefined8 *)(lVar8 + 600) = uVar14;
      *(undefined8 *)(lVar8 + 0x250) = uVar5;
      lVar7 = *(long *)(*(long *)puVar1 + 0xb8);
      uVar16 = *(undefined8 *)(lVar7 + 0x124c);
      uVar15 = *(undefined8 *)(lVar7 + 0x1244);
      uVar14 = *(undefined8 *)(lVar7 + 0x125c);
      uVar5 = *(undefined8 *)(lVar7 + 0x1254);
      lVar7 = *plVar9;
      if (lVar7 == 0) goto LAB_01e88598;
      uVar12 = *(uint *)(lVar7 + 0x18);
joined_r0x01e879d4:
      if (uVar12 < 0x13) {
LAB_01e8859c:
                    /* WARNING: Subroutine does not return */
        FUN_00fdc53c();
      }
      *(undefined8 *)(lVar7 + 0x268) = uVar16;
      *(undefined8 *)(lVar7 + 0x260) = uVar15;
      *(undefined8 *)(lVar7 + 0x278) = uVar14;
      *(undefined8 *)(lVar7 + 0x270) = uVar5;
    }
    else {
      if ((uVar6 & 1) != 0) goto LAB_01e8734c;
LAB_01e87b30:
      uVar6 = FUN_01e870e0(param_1,*(long *)(*(long *)puVar1 + 0xb8) + 0x600);
      if ((uVar6 & 1) == 0) goto LAB_01e88570;
      plVar9 = (long *)(param_2 + 4);
      if ((*plVar9 == 0) || (*(int *)(*plVar9 + 0x18) != 0x54)) {
        lVar7 = FUN_00fdc388(*(undefined8 *)PTR_DAT_0235f488,0x54);
        *plVar9 = lVar7;
        thunk_FUN_0106e12c(plVar9,lVar7);
      }
      plVar11 = (long *)(param_2 + 6);
      if ((*plVar11 == 0) || (*(int *)(*plVar11 + 0x18) != 0x13)) {
        lVar7 = FUN_00fdc388(*(undefined8 *)PTR_DAT_0235f480,0x13);
        *plVar11 = lVar7;
        thunk_FUN_0106e12c(plVar11,lVar7);
      }
      lVar7 = *(long *)puVar1;
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_01022c14();
        lVar7 = *(long *)puVar1;
      }
      lVar8 = *(long *)(lVar7 + 0xb8);
      *param_2 = *(undefined4 *)(lVar8 + 0x600);
      iVar3 = *(int *)(lVar8 + 0x604);
      param_2[1] = iVar3;
      iVar4 = *(int *)(lVar8 + 0x608);
      param_2[2] = iVar4;
      if (iVar3 != 0) {
        lVar8 = 0;
        iVar3 = 1;
        while( true ) {
          lVar13 = *plVar9;
          if (*(int *)(lVar7 + 0xe0) == 0) {
            thunk_FUN_01022c14();
            lVar7 = *(long *)puVar1;
          }
          lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x610);
          if (lVar7 == 0) goto LAB_01e88598;
          if (*(uint *)(lVar7 + 0x18) <= iVar3 - 1U) goto LAB_01e8859c;
          lVar7 = lVar7 + lVar8 * 0x24;
          local_60 = *(undefined4 *)(lVar7 + 0x40);
          uStack_78 = *(undefined8 *)(lVar7 + 0x28);
          local_80 = *(undefined8 *)(lVar7 + 0x20);
          uStack_68 = *(undefined8 *)(lVar7 + 0x38);
          local_70 = *(undefined8 *)(lVar7 + 0x30);
          if (lVar13 == 0) goto LAB_01e88598;
          if (*(uint *)(lVar13 + 0x18) <= iVar3 - 1U) goto LAB_01e8859c;
          lVar13 = lVar13 + lVar8 * 0x24;
          lVar8 = (long)iVar3;
          *(undefined4 *)(lVar13 + 0x40) = local_60;
          *(undefined8 *)(lVar13 + 0x28) = uStack_78;
          *(undefined8 *)(lVar13 + 0x20) = local_80;
          *(undefined8 *)(lVar13 + 0x38) = uStack_68;
          *(undefined8 *)(lVar13 + 0x30) = local_70;
          if ((long)(ulong)(uint)param_2[1] <= lVar8) break;
          lVar7 = *(long *)puVar1;
          iVar3 = iVar3 + 1;
        }
        iVar4 = param_2[2];
      }
      if (iVar4 != 0) {
        lVar7 = 0;
        iVar3 = 1;
        do {
          lVar13 = *(long *)puVar1;
          lVar8 = *plVar11;
          if (*(int *)(lVar13 + 0xe0) == 0) {
            thunk_FUN_01022c14();
            lVar13 = *(long *)puVar1;
          }
          lVar13 = *(long *)(*(long *)(lVar13 + 0xb8) + 0x618);
          if (lVar13 == 0) goto LAB_01e88598;
          if (*(uint *)(lVar13 + 0x18) <= iVar3 - 1U) goto LAB_01e8859c;
          lVar13 = lVar13 + lVar7 * 0x20;
          uStack_78 = *(undefined8 *)(lVar13 + 0x28);
          local_80 = *(undefined8 *)(lVar13 + 0x20);
          uStack_68 = *(undefined8 *)(lVar13 + 0x38);
          local_70 = *(undefined8 *)(lVar13 + 0x30);
          if (lVar8 == 0) goto LAB_01e88598;
          if (*(uint *)(lVar8 + 0x18) <= iVar3 - 1U) goto LAB_01e8859c;
          lVar8 = lVar8 + lVar7 * 0x20;
          lVar7 = (long)iVar3;
          iVar3 = iVar3 + 1;
          *(undefined8 *)(lVar8 + 0x28) = uStack_78;
          *(undefined8 *)(lVar8 + 0x20) = local_80;
          *(undefined8 *)(lVar8 + 0x38) = uStack_68;
          *(undefined8 *)(lVar8 + 0x30) = local_70;
        } while (lVar7 < (long)(ulong)(uint)param_2[2]);
      }
    }
    uVar5 = 1;
  }
  else {
    uVar6 = FUN_01f120f8(param_1,0);
    lVar7 = *(long *)puVar1;
    iVar3 = param_1;
    if ((uVar6 & 1) == 0) {
LAB_01e879e4:
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_01022c14(lVar7);
      }
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01022c14();
      }
      iVar4 = FUN_01ebdf24(iVar3,*(long *)(*(long *)puVar1 + 0xb8) + 0x1270,0);
      if (iVar4 == 0) {
        plVar9 = (long *)(param_2 + 6);
        if ((*plVar9 == 0) || (*(int *)(*plVar9 + 0x18) != 0x13)) {
          lVar7 = FUN_00fdc388(*(undefined8 *)PTR_DAT_0235f480,0x13);
          *plVar9 = lVar7;
          thunk_FUN_0106e12c(plVar9,lVar7);
        }
        lVar7 = *(long *)puVar1;
        if (*(int *)(lVar7 + 0xe0) == 0) {
          thunk_FUN_01022c14();
          lVar7 = *(long *)puVar1;
        }
        lVar8 = *(long *)(lVar7 + 0xb8);
        *param_2 = *(undefined4 *)(lVar8 + 0x1270);
        param_2[2] = *(undefined4 *)(lVar8 + 0x1278);
        if ((param_1 == 2) && (iVar3 == 3)) {
          uVar12 = 0;
          uVar10 = 0;
          while( true ) {
            if (*(int *)(lVar7 + 0xe0) == 0) {
              thunk_FUN_01022c14();
              lVar7 = *(long *)puVar1;
            }
            lVar8 = *(long *)(lVar7 + 0xb8);
            if ((long)(ulong)*(uint *)(lVar8 + 0x1274) <= (long)(int)uVar12) {
              plVar11 = (long *)(param_2 + 4);
              param_2[1] = uVar10;
              if ((*plVar11 == 0) || ((long)*(int *)(*plVar11 + 0x18) != (ulong)uVar10)) {
                lVar7 = FUN_00fdc388(*(undefined8 *)PTR_DAT_0235f488,uVar10);
                *plVar11 = lVar7;
                thunk_FUN_0106e12c(plVar11,lVar7);
              }
              uVar10 = 0;
              uVar12 = 0;
              goto LAB_01e88378;
            }
            if (*(int *)(lVar7 + 0xe0) == 0) {
              thunk_FUN_01022c14();
              lVar8 = *(long *)(*(long *)puVar1 + 0xb8);
            }
            lVar7 = *(long *)(lVar8 + 0x20b0);
            if (lVar7 == 0) break;
            if (*(uint *)(lVar7 + 0x18) <= uVar12) goto LAB_01e8859c;
            lVar7 = *(long *)(lVar7 + (long)(int)uVar12 * 8 + 0x20);
            if (lVar7 == 0) break;
            (**(code **)(lVar7 + 0x18))
                      (&local_80,*(undefined8 *)(lVar7 + 0x40),*(undefined8 *)(lVar7 + 0x28));
            lVar7 = *(long *)puVar1;
            uVar12 = uVar12 + 1;
            if ((int)local_80 < 0x46) {
              uVar10 = uVar10 + 1;
            }
          }
LAB_01e88598:
                    /* WARNING: Subroutine does not return */
          FUN_00fdc534();
        }
        if (*(int *)(lVar7 + 0xe0) == 0) {
          thunk_FUN_01022c14();
          lVar8 = *(long *)(*(long *)puVar1 + 0xb8);
        }
        uVar12 = *(uint *)(lVar8 + 0x1274);
        plVar11 = (long *)(param_2 + 4);
        param_2[1] = uVar12;
        if ((*plVar11 == 0) || ((long)*(int *)(*plVar11 + 0x18) != (ulong)uVar12)) {
          uVar5 = FUN_00fdc388(*(undefined8 *)PTR_DAT_0235f488);
          *(undefined8 *)(param_2 + 4) = uVar5;
          thunk_FUN_0106e12c(plVar11,uVar5);
          uVar12 = param_2[1];
        }
        if (uVar12 != 0) {
          lVar7 = 0;
          do {
            lVar8 = *(long *)puVar1;
            lVar13 = *plVar11;
            if (*(int *)(lVar8 + 0xe0) == 0) {
              thunk_FUN_01022c14();
              lVar8 = *(long *)puVar1;
            }
            lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x20b0);
            if (lVar8 == 0) goto LAB_01e88598;
            uVar12 = (uint)lVar7;
            if (*(uint *)(lVar8 + 0x18) <= uVar12) goto LAB_01e8859c;
            lVar8 = *(long *)(lVar8 + lVar7 * 8 + 0x20);
            if (lVar8 == 0) goto LAB_01e88598;
            (**(code **)(lVar8 + 0x18))
                      (&local_b0,*(undefined8 *)(lVar8 + 0x40),*(undefined8 *)(lVar8 + 0x28));
            uStack_78 = uStack_a8;
            local_80 = local_b0;
            uStack_68 = uStack_98;
            local_70 = local_a0;
            local_60 = local_90;
            if (lVar13 == 0) goto LAB_01e88598;
            if (*(uint *)(lVar13 + 0x18) <= uVar12) goto LAB_01e8859c;
            lVar13 = lVar13 + lVar7 * 0x24;
            *(undefined4 *)(lVar13 + 0x40) = local_90;
            *(undefined8 *)(lVar13 + 0x28) = uStack_a8;
            *(undefined8 *)(lVar13 + 0x20) = local_b0;
            *(undefined8 *)(lVar13 + 0x38) = uStack_98;
            *(undefined8 *)(lVar13 + 0x30) = local_a0;
            lVar7 = (long)(int)(uVar12 + 1);
          } while (lVar7 < (long)(ulong)(uint)param_2[1]);
        }
LAB_01e87dc4:
        lVar7 = *(long *)puVar1;
        lVar8 = *plVar9;
        if (*(int *)(lVar7 + 0xe0) == 0) {
          thunk_FUN_01022c14();
          lVar7 = *(long *)puVar1;
        }
        lVar7 = *(long *)(lVar7 + 0xb8);
        uStack_78 = *(undefined8 *)(lVar7 + 0x1e54);
        local_80 = *(undefined8 *)(lVar7 + 0x1e4c);
        uStack_68 = *(undefined8 *)(lVar7 + 0x1e64);
        local_70 = *(undefined8 *)(lVar7 + 0x1e5c);
        if (lVar8 == 0) goto LAB_01e88598;
        if (*(int *)(lVar8 + 0x18) == 0) goto LAB_01e8859c;
        *(undefined8 *)(lVar8 + 0x28) = uStack_78;
        *(undefined8 *)(lVar8 + 0x20) = local_80;
        *(undefined8 *)(lVar8 + 0x38) = uStack_68;
        *(undefined8 *)(lVar8 + 0x30) = local_70;
        lVar7 = *(long *)(*(long *)puVar1 + 0xb8);
        uStack_a8 = *(undefined8 *)(lVar7 + 0x1e74);
        local_b0 = *(undefined8 *)(lVar7 + 0x1e6c);
        uStack_98 = *(undefined8 *)(lVar7 + 0x1e84);
        local_a0 = *(undefined8 *)(lVar7 + 0x1e7c);
        lVar7 = *plVar9;
        if (lVar7 == 0) goto LAB_01e88598;
        if (*(uint *)(lVar7 + 0x18) < 2) goto LAB_01e8859c;
        *(undefined8 *)(lVar7 + 0x48) = uStack_a8;
        *(undefined8 *)(lVar7 + 0x40) = local_b0;
        *(undefined8 *)(lVar7 + 0x58) = uStack_98;
        *(undefined8 *)(lVar7 + 0x50) = local_a0;
        lVar7 = *(long *)(*(long *)puVar1 + 0xb8);
        uVar15 = *(undefined8 *)(lVar7 + 0x1e8c);
        uVar14 = *(undefined8 *)(lVar7 + 0x1ea4);
        uVar5 = *(undefined8 *)(lVar7 + 0x1e9c);
        lVar8 = *plVar9;
        if (lVar8 == 0) goto LAB_01e88598;
        if (*(uint *)(lVar8 + 0x18) < 3) goto LAB_01e8859c;
        *(undefined8 *)(lVar8 + 0x68) = *(undefined8 *)(lVar7 + 0x1e94);
        *(undefined8 *)(lVar8 + 0x60) = uVar15;
        *(undefined8 *)(lVar8 + 0x78) = uVar14;
        *(undefined8 *)(lVar8 + 0x70) = uVar5;
        lVar7 = *(long *)(*(long *)puVar1 + 0xb8);
        uVar15 = *(undefined8 *)(lVar7 + 0x1eac);
        uVar14 = *(undefined8 *)(lVar7 + 0x1ec4);
        uVar5 = *(undefined8 *)(lVar7 + 0x1ebc);
        lVar8 = *plVar9;
        if (lVar8 == 0) goto LAB_01e88598;
        if (*(uint *)(lVar8 + 0x18) < 4) goto LAB_01e8859c;
        *(undefined8 *)(lVar8 + 0x88) = *(undefined8 *)(lVar7 + 0x1eb4);
        *(undefined8 *)(lVar8 + 0x80) = uVar15;
        *(undefined8 *)(lVar8 + 0x98) = uVar14;
        *(undefined8 *)(lVar8 + 0x90) = uVar5;
        lVar7 = *(long *)(*(long *)puVar1 + 0xb8);
        uVar15 = *(undefined8 *)(lVar7 + 0x1ecc);
        uVar14 = *(undefined8 *)(lVar7 + 0x1ee4);
        uVar5 = *(undefined8 *)(lVar7 + 0x1edc);
        lVar8 = *plVar9;
        if (lVar8 == 0) goto LAB_01e88598;
        if (*(uint *)(lVar8 + 0x18) < 5) goto LAB_01e8859c;
        *(undefined8 *)(lVar8 + 0xa8) = *(undefined8 *)(lVar7 + 0x1ed4);
        *(undefined8 *)(lVar8 + 0xa0) = uVar15;
        *(undefined8 *)(lVar8 + 0xb8) = uVar14;
        *(undefined8 *)(lVar8 + 0xb0) = uVar5;
        lVar7 = *(long *)(*(long *)puVar1 + 0xb8);
        uVar15 = *(undefined8 *)(lVar7 + 0x1eec);
        uVar14 = *(undefined8 *)(lVar7 + 0x1f04);
        uVar5 = *(undefined8 *)(lVar7 + 0x1efc);
        lVar8 = *plVar9;
        if (lVar8 == 0) goto LAB_01e88598;
        if (*(uint *)(lVar8 + 0x18) < 6) goto LAB_01e8859c;
        *(undefined8 *)(lVar8 + 200) = *(undefined8 *)(lVar7 + 0x1ef4);
        *(undefined8 *)(lVar8 + 0xc0) = uVar15;
        *(undefined8 *)(lVar8 + 0xd8) = uVar14;
        *(undefined8 *)(lVar8 + 0xd0) = uVar5;
        lVar7 = *(long *)(*(long *)puVar1 + 0xb8);
        uVar15 = *(undefined8 *)(lVar7 + 0x1f0c);
        uVar14 = *(undefined8 *)(lVar7 + 0x1f24);
        uVar5 = *(undefined8 *)(lVar7 + 0x1f1c);
        lVar8 = *plVar9;
        if (lVar8 == 0) goto LAB_01e88598;
        if (*(uint *)(lVar8 + 0x18) < 7) goto LAB_01e8859c;
        *(undefined8 *)(lVar8 + 0xe8) = *(undefined8 *)(lVar7 + 0x1f14);
        *(undefined8 *)(lVar8 + 0xe0) = uVar15;
        *(undefined8 *)(lVar8 + 0xf8) = uVar14;
        *(undefined8 *)(lVar8 + 0xf0) = uVar5;
        lVar7 = *(long *)(*(long *)puVar1 + 0xb8);
        uVar15 = *(undefined8 *)(lVar7 + 0x1f2c);
        uVar14 = *(undefined8 *)(lVar7 + 0x1f44);
        uVar5 = *(undefined8 *)(lVar7 + 0x1f3c);
        lVar8 = *plVar9;
        if (lVar8 == 0) goto LAB_01e88598;
        if (*(uint *)(lVar8 + 0x18) < 8) goto LAB_01e8859c;
        *(undefined8 *)(lVar8 + 0x108) = *(undefined8 *)(lVar7 + 0x1f34);
        *(undefined8 *)(lVar8 + 0x100) = uVar15;
        *(undefined8 *)(lVar8 + 0x118) = uVar14;
        *(undefined8 *)(lVar8 + 0x110) = uVar5;
        lVar7 = *(long *)(*(long *)puVar1 + 0xb8);
        uVar15 = *(undefined8 *)(lVar7 + 0x1f4c);
        uVar14 = *(undefined8 *)(lVar7 + 0x1f64);
        uVar5 = *(undefined8 *)(lVar7 + 0x1f5c);
        lVar8 = *plVar9;
        if (lVar8 == 0) goto LAB_01e88598;
        if (*(uint *)(lVar8 + 0x18) < 9) goto LAB_01e8859c;
        *(undefined8 *)(lVar8 + 0x128) = *(undefined8 *)(lVar7 + 0x1f54);
        *(undefined8 *)(lVar8 + 0x120) = uVar15;
        *(undefined8 *)(lVar8 + 0x138) = uVar14;
        *(undefined8 *)(lVar8 + 0x130) = uVar5;
        lVar7 = *(long *)(*(long *)puVar1 + 0xb8);
        uVar15 = *(undefined8 *)(lVar7 + 0x1f6c);
        uVar14 = *(undefined8 *)(lVar7 + 0x1f84);
        uVar5 = *(undefined8 *)(lVar7 + 0x1f7c);
        lVar8 = *plVar9;
        if (lVar8 == 0) goto LAB_01e88598;
        if (*(uint *)(lVar8 + 0x18) < 10) goto LAB_01e8859c;
        *(undefined8 *)(lVar8 + 0x148) = *(undefined8 *)(lVar7 + 0x1f74);
        *(undefined8 *)(lVar8 + 0x140) = uVar15;
        *(undefined8 *)(lVar8 + 0x158) = uVar14;
        *(undefined8 *)(lVar8 + 0x150) = uVar5;
        lVar7 = *(long *)(*(long *)puVar1 + 0xb8);
        uVar15 = *(undefined8 *)(lVar7 + 0x1f8c);
        uVar14 = *(undefined8 *)(lVar7 + 0x1fa4);
        uVar5 = *(undefined8 *)(lVar7 + 0x1f9c);
        lVar8 = *plVar9;
        if (lVar8 == 0) goto LAB_01e88598;
        if (*(uint *)(lVar8 + 0x18) < 0xb) goto LAB_01e8859c;
        *(undefined8 *)(lVar8 + 0x168) = *(undefined8 *)(lVar7 + 0x1f94);
        *(undefined8 *)(lVar8 + 0x160) = uVar15;
        *(undefined8 *)(lVar8 + 0x178) = uVar14;
        *(undefined8 *)(lVar8 + 0x170) = uVar5;
        lVar7 = *(long *)(*(long *)puVar1 + 0xb8);
        uVar15 = *(undefined8 *)(lVar7 + 0x1fac);
        uVar14 = *(undefined8 *)(lVar7 + 0x1fc4);
        uVar5 = *(undefined8 *)(lVar7 + 0x1fbc);
        lVar8 = *plVar9;
        if (lVar8 == 0) goto LAB_01e88598;
        if (*(uint *)(lVar8 + 0x18) < 0xc) goto LAB_01e8859c;
        *(undefined8 *)(lVar8 + 0x188) = *(undefined8 *)(lVar7 + 0x1fb4);
        *(undefined8 *)(lVar8 + 0x180) = uVar15;
        *(undefined8 *)(lVar8 + 0x198) = uVar14;
        *(undefined8 *)(lVar8 + 400) = uVar5;
        lVar7 = *(long *)(*(long *)puVar1 + 0xb8);
        uVar15 = *(undefined8 *)(lVar7 + 0x1fcc);
        uVar14 = *(undefined8 *)(lVar7 + 0x1fe4);
        uVar5 = *(undefined8 *)(lVar7 + 0x1fdc);
        lVar8 = *plVar9;
        if (lVar8 == 0) goto LAB_01e88598;
        if (*(uint *)(lVar8 + 0x18) < 0xd) goto LAB_01e8859c;
        *(undefined8 *)(lVar8 + 0x1a8) = *(undefined8 *)(lVar7 + 0x1fd4);
        *(undefined8 *)(lVar8 + 0x1a0) = uVar15;
        *(undefined8 *)(lVar8 + 0x1b8) = uVar14;
        *(undefined8 *)(lVar8 + 0x1b0) = uVar5;
        lVar7 = *(long *)(*(long *)puVar1 + 0xb8);
        uVar15 = *(undefined8 *)(lVar7 + 0x1fec);
        uVar14 = *(undefined8 *)(lVar7 + 0x2004);
        uVar5 = *(undefined8 *)(lVar7 + 0x1ffc);
        lVar8 = *plVar9;
        if (lVar8 == 0) goto LAB_01e88598;
        if (*(uint *)(lVar8 + 0x18) < 0xe) goto LAB_01e8859c;
        *(undefined8 *)(lVar8 + 0x1c8) = *(undefined8 *)(lVar7 + 0x1ff4);
        *(undefined8 *)(lVar8 + 0x1c0) = uVar15;
        *(undefined8 *)(lVar8 + 0x1d8) = uVar14;
        *(undefined8 *)(lVar8 + 0x1d0) = uVar5;
        lVar7 = *(long *)(*(long *)puVar1 + 0xb8);
        uVar15 = *(undefined8 *)(lVar7 + 0x200c);
        uVar14 = *(undefined8 *)(lVar7 + 0x2024);
        uVar5 = *(undefined8 *)(lVar7 + 0x201c);
        lVar8 = *plVar9;
        if (lVar8 == 0) goto LAB_01e88598;
        if (*(uint *)(lVar8 + 0x18) < 0xf) goto LAB_01e8859c;
        *(undefined8 *)(lVar8 + 0x1e8) = *(undefined8 *)(lVar7 + 0x2014);
        *(undefined8 *)(lVar8 + 0x1e0) = uVar15;
        *(undefined8 *)(lVar8 + 0x1f8) = uVar14;
        *(undefined8 *)(lVar8 + 0x1f0) = uVar5;
        lVar7 = *(long *)(*(long *)puVar1 + 0xb8);
        uVar15 = *(undefined8 *)(lVar7 + 0x202c);
        uVar14 = *(undefined8 *)(lVar7 + 0x2044);
        uVar5 = *(undefined8 *)(lVar7 + 0x203c);
        lVar8 = *plVar9;
        if (lVar8 == 0) goto LAB_01e88598;
        if (*(uint *)(lVar8 + 0x18) < 0x10) goto LAB_01e8859c;
        *(undefined8 *)(lVar8 + 0x208) = *(undefined8 *)(lVar7 + 0x2034);
        *(undefined8 *)(lVar8 + 0x200) = uVar15;
        *(undefined8 *)(lVar8 + 0x218) = uVar14;
        *(undefined8 *)(lVar8 + 0x210) = uVar5;
        lVar7 = *(long *)(*(long *)puVar1 + 0xb8);
        uVar15 = *(undefined8 *)(lVar7 + 0x204c);
        uVar14 = *(undefined8 *)(lVar7 + 0x2064);
        uVar5 = *(undefined8 *)(lVar7 + 0x205c);
        lVar8 = *plVar9;
        if (lVar8 == 0) goto LAB_01e88598;
        if (*(uint *)(lVar8 + 0x18) < 0x11) goto LAB_01e8859c;
        *(undefined8 *)(lVar8 + 0x228) = *(undefined8 *)(lVar7 + 0x2054);
        *(undefined8 *)(lVar8 + 0x220) = uVar15;
        *(undefined8 *)(lVar8 + 0x238) = uVar14;
        *(undefined8 *)(lVar8 + 0x230) = uVar5;
        lVar7 = *(long *)(*(long *)puVar1 + 0xb8);
        uVar15 = *(undefined8 *)(lVar7 + 0x206c);
        uVar14 = *(undefined8 *)(lVar7 + 0x2084);
        uVar5 = *(undefined8 *)(lVar7 + 0x207c);
        lVar8 = *plVar9;
        if (lVar8 == 0) goto LAB_01e88598;
        if (*(uint *)(lVar8 + 0x18) < 0x12) goto LAB_01e8859c;
        *(undefined8 *)(lVar8 + 0x248) = *(undefined8 *)(lVar7 + 0x2074);
        *(undefined8 *)(lVar8 + 0x240) = uVar15;
        *(undefined8 *)(lVar8 + 600) = uVar14;
        *(undefined8 *)(lVar8 + 0x250) = uVar5;
        lVar7 = *(long *)(*(long *)puVar1 + 0xb8);
        uVar16 = *(undefined8 *)(lVar7 + 0x2094);
        uVar15 = *(undefined8 *)(lVar7 + 0x208c);
        uVar14 = *(undefined8 *)(lVar7 + 0x20a4);
        uVar5 = *(undefined8 *)(lVar7 + 0x209c);
        lVar7 = *plVar9;
        if (lVar7 == 0) goto LAB_01e88598;
        uVar12 = *(uint *)(lVar7 + 0x18);
        goto joined_r0x01e879d4;
      }
    }
    else {
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_01022c14(lVar7);
        lVar7 = *(long *)puVar1;
      }
      iVar4 = *(int *)(*(long *)(lVar7 + 0xb8) + 0x23a0);
      if (iVar4 != -1) {
        if (iVar4 == 0) {
          iVar3 = 2;
        }
        else if (iVar4 == 1) {
          iVar3 = 3;
        }
        goto LAB_01e879e4;
      }
      if (*(int *)(*(long *)PTR_DAT_0234ba20 + 0xe0) == 0) {
        thunk_FUN_01022c14();
      }
      FUN_01fd09b0(*(undefined8 *)PTR_DAT_0235f498,0);
    }
LAB_01e88570:
    uVar5 = 0;
  }
  return uVar5;
LAB_01e88378:
  lVar7 = *(long *)puVar1;
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_01022c14();
    lVar7 = *(long *)puVar1;
  }
  lVar8 = *(long *)(lVar7 + 0xb8);
  lVar13 = (long)(int)uVar10;
  if ((long)(ulong)*(uint *)(lVar8 + 0x1274) <= lVar13) goto LAB_01e87dc4;
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_01022c14();
    lVar8 = *(long *)(*(long *)puVar1 + 0xb8);
  }
  lVar7 = *(long *)(lVar8 + 0x20b0);
  if (lVar7 == 0) goto LAB_01e88598;
  if (*(uint *)(lVar7 + 0x18) <= uVar10) goto LAB_01e8859c;
  lVar7 = *(long *)(lVar7 + lVar13 * 8 + 0x20);
  if (lVar7 == 0) goto LAB_01e88598;
  (**(code **)(lVar7 + 0x18))(&local_80,*(undefined8 *)(lVar7 + 0x40),*(undefined8 *)(lVar7 + 0x28))
  ;
  if ((int)local_80 < 0x46) {
    lVar7 = *(long *)puVar1;
    lVar8 = *plVar11;
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_01022c14();
      lVar7 = *(long *)puVar1;
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x20b0);
    if (lVar7 == 0) goto LAB_01e88598;
    if (*(uint *)(lVar7 + 0x18) <= uVar10) goto LAB_01e8859c;
    lVar7 = *(long *)(lVar7 + lVar13 * 8 + 0x20);
    if (lVar7 == 0) goto LAB_01e88598;
    (**(code **)(lVar7 + 0x18))
              (&local_b0,*(undefined8 *)(lVar7 + 0x40),*(undefined8 *)(lVar7 + 0x28));
    uStack_78 = uStack_a8;
    local_80 = local_b0;
    uStack_68 = uStack_98;
    local_70 = local_a0;
    local_60 = local_90;
    if (lVar8 == 0) goto LAB_01e88598;
    if (*(uint *)(lVar8 + 0x18) <= uVar12) goto LAB_01e8859c;
    lVar8 = lVar8 + (long)(int)uVar12 * 0x24;
    uVar12 = uVar12 + 1;
    *(undefined4 *)(lVar8 + 0x40) = local_90;
    *(undefined8 *)(lVar8 + 0x28) = uStack_a8;
    *(undefined8 *)(lVar8 + 0x20) = local_b0;
    *(undefined8 *)(lVar8 + 0x38) = uStack_98;
    *(undefined8 *)(lVar8 + 0x30) = local_a0;
  }
  uVar10 = uVar10 + 1;
  goto LAB_01e88378;
}


