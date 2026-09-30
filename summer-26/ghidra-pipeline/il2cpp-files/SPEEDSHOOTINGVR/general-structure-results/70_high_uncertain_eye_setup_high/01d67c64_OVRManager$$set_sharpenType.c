/*
FUNCTION_NAME: OVRManager$$set_sharpenType
ENTRY_POINT: 01d67c64
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;functionality_eye_api_context_without_clear_sink_hits_2
*/


ulong OVRManager__set_sharpenType(void)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  ulong uVar13;
  uint *in_x4;
  undefined8 in_x6;
  undefined8 in_x7;
  uint unaff_w19;
  uint unaff_w20;
  long unaff_x21;
  ulong unaff_x23;
  ulong uVar14;
  long unaff_x25;
  long *plVar15;
  uint uVar16;
  uint uVar17;
  ulong *unaff_x28;
  undefined1 auVar18 [16];
  undefined4 uStack0000000000000000;
  undefined4 uStack0000000000000004;
  uint uStack0000000000000008;
  undefined4 uStack000000000000000c;
  code *pcVar19;
  
  plVar15 = *(long **)(unaff_x25 + 0xa18);
  uVar7 = (uint)unaff_x23;
  iVar1 = uVar7 + 1;
  if ((*(byte *)(*(long *)(*plVar15 + 0x20) + 0x135) & 1) == 0) {
    FUN_0103c244();
  }
  uVar13 = *unaff_x28;
  uVar14 = (ulong)(unaff_w20 - iVar1);
  uVar11 = unaff_x21 + (long)iVar1 * 2;
  uVar12 = 0x2e;
  iVar6 = FUN_01d450b0(uVar11,uVar14,0x2e);
  if (iVar6 == -1) {
    uVar17 = 0xffffffff;
LAB_01d67d88:
    uVar16 = 0xffffffff;
  }
  else {
    uVar17 = iVar6 + iVar1;
    uVar16 = uVar17 + 1;
    if (unaff_w20 < uVar16) goto LAB_01d67fe8;
    if ((*(byte *)(*(long *)(*plVar15 + 0x20) + 0x135) & 1) == 0) {
      FUN_0103c244();
    }
    uVar13 = *unaff_x28;
    uVar12 = 0x2e;
    iVar6 = FUN_01d450b0(unaff_x21 + (long)(int)uVar16 * 2,unaff_w20 - uVar16,0x2e);
    if (iVar6 == -1) goto LAB_01d67d88;
    uVar16 = iVar6 + uVar16;
    uVar2 = uVar16 + 1;
    if (unaff_w20 < uVar2) goto LAB_01d67fe8;
    if ((*(byte *)(*(long *)(*plVar15 + 0x20) + 0x135) & 1) == 0) {
      FUN_0103c244();
    }
    uVar13 = *unaff_x28;
    uVar12 = 0x2e;
    iVar6 = FUN_01d450b0(unaff_x21 + (long)(int)uVar2 * 2,unaff_w20 - uVar2,0x2e);
    if (iVar6 != -1) {
      if ((unaff_w19 & 1) != 0) {
        thunk_FUN_010303a8(PTR_DAT_0234bcd0);
        uVar12 = thunk_FUN_010400dc();
        uVar8 = thunk_FUN_010303a8(PTR_DAT_023585f8);
        uVar9 = thunk_FUN_010303a8(PTR_DAT_02354f40);
        FUN_01c5e198(uVar12,uVar8,uVar9,0);
        uVar8 = thunk_FUN_010303a8(PTR_DAT_02358600);
                    /* WARNING: Subroutine does not return */
        FUN_00fdc400(uVar12,uVar8);
      }
      return 0;
    }
  }
  puVar3 = PTR_DAT_023517a8;
  if (uVar7 <= unaff_w20) {
    if ((*(byte *)(*(long *)(*(long *)PTR_DAT_023517a8 + 0x20) + 0x135) & 1) == 0) {
      FUN_0103c244();
    }
    puVar4 = PTR_DAT_02354f40;
    uVar13 = (ulong)(unaff_w19 & 1);
    uVar12 = *(undefined8 *)PTR_DAT_02354f40;
    in_x4 = (uint *)register0x00000008;
    uVar10 = FUN_01d67fec();
    if ((uVar10 & 1) != 0) {
      if (uVar17 != 0xffffffff) {
        uVar7 = uVar17 + ~uVar7;
        unaff_x23 = (ulong)uVar7;
        if (uVar7 <= unaff_w20 - iVar1) {
          if ((*(byte *)(*(long *)(*(long *)puVar3 + 0x20) + 0x135) & 1) == 0) {
            FUN_0103c244();
          }
          uVar12 = *(undefined8 *)puVar4;
          uVar13 = (ulong)(unaff_w19 & 1);
          in_x4 = (uint *)((long)&stack0x00000008 + 4);
          uVar11 = FUN_01d67fec(uVar11,uVar7,uVar12);
          if ((uVar11 & 1) == 0) {
            return 0;
          }
          uVar7 = uVar17 + 1;
          uVar11 = (ulong)uVar7;
          if (uVar16 == 0xffffffff) {
            if (uVar17 < unaff_w20) {
              if ((*(byte *)(*(long *)(*plVar15 + 0x20) + 0x135) & 1) == 0) {
                FUN_0103c244();
              }
              uVar11 = FUN_01d67fec(unaff_x21 + (long)(int)uVar7 * 2,unaff_w20 - uVar7,
                                    *(undefined8 *)PTR_DAT_02358598,unaff_w19 & 1,&stack0x00000008);
              uVar7 = uStack0000000000000008;
              uVar5 = uStack0000000000000000;
              if ((uVar11 & 1) != 0) {
                uVar11 = thunk_FUN_010400dc(*(undefined8 *)PTR_DAT_02353f50);
                FUN_01d67190(uVar11,uVar5,uStack000000000000000c,uVar7);
                return uVar11;
              }
              return 0;
            }
          }
          else if (uVar17 < unaff_w20) {
            uVar17 = uVar16 + ~uVar17;
            unaff_x23 = (ulong)uVar17;
            if (uVar17 <= unaff_w20 - uVar7) {
              if ((*(byte *)(*(long *)(*(long *)puVar3 + 0x20) + 0x135) & 1) == 0) {
                FUN_0103c244();
              }
              uVar13 = (ulong)(unaff_w19 & 1);
              uVar12 = *(undefined8 *)PTR_DAT_02358598;
              in_x4 = &stack0x00000008;
              uVar10 = FUN_01d67fec(unaff_x21 + (long)(int)uVar7 * 2,uVar17,uVar12);
              if ((uVar10 & 1) == 0) {
                return 0;
              }
              if (uVar16 < unaff_w20) {
                if ((*(byte *)(*(long *)(*plVar15 + 0x20) + 0x135) & 1) == 0) {
                  FUN_0103c244();
                }
                uVar11 = FUN_01d67fec(unaff_x21 + (long)(int)(uVar16 + 1) * 2,
                                      unaff_w20 - (uVar16 + 1),*(undefined8 *)PTR_DAT_023585a0,
                                      unaff_w19 & 1,(long)&stack0x00000000 + 4);
                uVar7 = uStack0000000000000008;
                uVar5 = uStack0000000000000000;
                if ((uVar11 & 1) != 0) {
                  uVar11 = thunk_FUN_010400dc(*(undefined8 *)PTR_DAT_02353f50);
                  FUN_01d6707c(uVar11,uVar5,uStack000000000000000c,uVar7,uStack0000000000000004);
                  return uVar11;
                }
                return 0;
              }
            }
          }
        }
        goto LAB_01d67fe8;
      }
      if ((*(byte *)(*(long *)(*plVar15 + 0x20) + 0x135) & 1) == 0) {
        FUN_0103c244();
      }
      uVar11 = FUN_01d67fec(uVar11,uVar14,*(undefined8 *)puVar4,unaff_w19 & 1,
                            (long)&stack0x00000008 + 4);
      uVar5 = uStack0000000000000000;
      if ((uVar11 & 1) != 0) {
        uVar11 = thunk_FUN_010400dc(*(undefined8 *)PTR_DAT_02353f50);
        FUN_01d6727c(uVar11,uVar5,uStack000000000000000c);
        return uVar11;
      }
    }
    return 0;
  }
LAB_01d67fe8:
  auVar18 = FUN_01d68788();
  puVar3 = PTR_DAT_0234c0c0;
  pcVar19 = FUN_01d67fec;
  if ((DAT_0247d711 & 1) == 0) {
    FUN_00fdc2e4(PTR_DAT_0234c0c0);
    DAT_0247d711 = 1;
  }
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01022c14();
  }
  uVar8 = FUN_01d22d48(0);
  if ((uVar13 & 1) == 0) {
    uVar11 = OVR_OpenVR_CVRDriverManager__GetDriverHandle
                       (auVar18._0_8_,auVar18._8_8_,7,uVar8,in_x4,0,in_x6,in_x7,pcVar19,plVar15,
                        uVar14,unaff_x23,uVar11);
    if ((uVar11 & 1) == 0) {
      uVar11 = 0;
    }
    else {
      uVar11 = (ulong)(~*in_x4 >> 0x1f);
    }
  }
  else {
    uVar7 = FUN_01d483a0();
    *in_x4 = uVar7;
    if ((int)uVar7 < 0) {
      thunk_FUN_010303a8(PTR_DAT_0234be28);
      uVar8 = thunk_FUN_010400dc();
      uVar9 = thunk_FUN_010303a8(PTR_DAT_023585a8);
      FUN_01c62494(uVar8,uVar12,uVar9,0);
      uVar12 = thunk_FUN_010303a8(PTR_DAT_02358608);
                    /* WARNING: Subroutine does not return */
      FUN_00fdc400(uVar8,uVar12);
    }
    uVar11 = 1;
  }
  return uVar11;
}


