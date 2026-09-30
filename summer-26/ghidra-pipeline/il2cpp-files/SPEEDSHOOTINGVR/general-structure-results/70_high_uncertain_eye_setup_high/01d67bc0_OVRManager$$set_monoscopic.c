/*
FUNCTION_NAME: OVRManager$$set_monoscopic
ENTRY_POINT: 01d67bc0
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;functionality_eye_api_context_without_clear_sink_hits_2
*/


ulong OVRManager__set_monoscopic
                (long param_1,undefined8 param_2,uint param_3,undefined8 param_4,uint *param_5,
                undefined8 param_6,undefined8 param_7,undefined8 param_8,ulong param_9,
                ulong param_10)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined8 uVar13;
  ulong uVar14;
  ulong uVar15;
  uint uVar16;
  ulong unaff_x22;
  ulong uVar17;
  ulong unaff_x24;
  undefined *unaff_x25;
  uint uVar18;
  uint uVar19;
  undefined1 auVar20 [16];
  code *pcVar21;
  
  puVar3 = PTR_DAT_02357cf0;
  uVar15 = (ulong)param_3;
  if ((*(byte *)(unaff_x22 + 0x710) & 1) == 0) {
    FUN_00fdc2e4(PTR_DAT_02357cf0);
    FUN_00fdc2e4(PTR_DAT_02351a18);
    FUN_00fdc2e4(PTR_DAT_023517a8);
    FUN_00fdc2e4(PTR_DAT_02353f50);
    FUN_00fdc2e4(PTR_DAT_02354f40);
    FUN_00fdc2e4(PTR_DAT_02358598);
    FUN_00fdc2e4(PTR_DAT_023585a0);
    *(undefined1 *)(unaff_x22 + 0x710) = 1;
  }
  uVar14 = *(ulong *)puVar3;
  uVar13 = 0x2e;
  param_9 = 0;
  param_10 = 0;
  uVar8 = FUN_01d450b0(param_1,param_2,0x2e);
  puVar4 = PTR_DAT_02351a18;
  if ((int)uVar8 < 0) {
LAB_01d67d24:
    if ((param_3 & 1) != 0) {
      thunk_FUN_010303a8(PTR_DAT_0234bcd0);
      uVar13 = thunk_FUN_010400dc();
      uVar10 = thunk_FUN_010303a8(PTR_DAT_023585f8);
      uVar11 = thunk_FUN_010303a8(PTR_DAT_02354f40);
      FUN_01c5e198(uVar13,uVar10,uVar11,0);
      uVar10 = thunk_FUN_010303a8(PTR_DAT_02358600);
                    /* WARNING: Subroutine does not return */
      FUN_00fdc400(uVar13,uVar10);
    }
    return 0;
  }
  uVar17 = (ulong)uVar8;
  uVar16 = (uint)param_2;
  if (uVar16 <= uVar8) goto LAB_01d67fe8;
  iVar1 = uVar8 + 1;
  if ((*(byte *)(*(long *)(*(long *)PTR_DAT_02351a18 + 0x20) + 0x135) & 1) == 0) {
    FUN_0103c244();
  }
  uVar14 = *(ulong *)puVar3;
  unaff_x24 = (ulong)(uVar16 - iVar1);
  unaff_x22 = param_1 + (long)iVar1 * 2;
  uVar13 = 0x2e;
  iVar9 = FUN_01d450b0(unaff_x22,unaff_x24,0x2e);
  unaff_x25 = puVar4;
  if (iVar9 == -1) {
    uVar19 = 0xffffffff;
LAB_01d67d88:
    uVar18 = 0xffffffff;
  }
  else {
    uVar19 = iVar9 + iVar1;
    uVar18 = uVar19 + 1;
    if (uVar16 < uVar18) goto LAB_01d67fe8;
    if ((*(byte *)(*(long *)(*(long *)puVar4 + 0x20) + 0x135) & 1) == 0) {
      FUN_0103c244();
    }
    uVar14 = *(ulong *)puVar3;
    uVar13 = 0x2e;
    iVar9 = FUN_01d450b0(param_1 + (long)(int)uVar18 * 2,uVar16 - uVar18,0x2e);
    if (iVar9 == -1) goto LAB_01d67d88;
    uVar18 = iVar9 + uVar18;
    uVar2 = uVar18 + 1;
    if (uVar16 < uVar2) goto LAB_01d67fe8;
    if ((*(byte *)(*(long *)(*(long *)puVar4 + 0x20) + 0x135) & 1) == 0) {
      FUN_0103c244();
    }
    uVar14 = *(ulong *)puVar3;
    uVar13 = 0x2e;
    iVar9 = FUN_01d450b0(param_1 + (long)(int)uVar2 * 2,uVar16 - uVar2,0x2e);
    if (iVar9 != -1) goto LAB_01d67d24;
  }
  puVar3 = PTR_DAT_023517a8;
  if (uVar8 <= uVar16) {
    if ((*(byte *)(*(long *)(*(long *)PTR_DAT_023517a8 + 0x20) + 0x135) & 1) == 0) {
      FUN_0103c244();
    }
    puVar5 = PTR_DAT_02354f40;
    uVar14 = (ulong)(param_3 & 1);
    uVar13 = *(undefined8 *)PTR_DAT_02354f40;
    param_5 = (uint *)register0x00000008;
    uVar17 = FUN_01d67fec(param_1,uVar8,uVar13);
    if ((uVar17 & 1) != 0) {
      if (uVar19 != 0xffffffff) {
        uVar8 = uVar19 + ~uVar8;
        uVar17 = (ulong)uVar8;
        if (uVar8 <= uVar16 - iVar1) {
          if ((*(byte *)(*(long *)(*(long *)puVar3 + 0x20) + 0x135) & 1) == 0) {
            FUN_0103c244();
          }
          uVar13 = *(undefined8 *)puVar5;
          uVar14 = (ulong)(param_3 & 1);
          param_5 = (uint *)((long)&param_10 + 4);
          uVar12 = FUN_01d67fec(unaff_x22,uVar8,uVar13);
          if ((uVar12 & 1) == 0) {
            return 0;
          }
          uVar8 = uVar19 + 1;
          unaff_x22 = (ulong)uVar8;
          if (uVar18 == 0xffffffff) {
            if (uVar19 < uVar16) {
              if ((*(byte *)(*(long *)(*(long *)puVar4 + 0x20) + 0x135) & 1) == 0) {
                FUN_0103c244();
              }
              uVar17 = FUN_01d67fec(param_1 + (long)(int)uVar8 * 2,uVar16 - uVar8,
                                    *(undefined8 *)PTR_DAT_02358598,param_3 & 1,&param_10);
              uVar14 = param_10;
              uVar15 = param_9;
              if ((uVar17 & 1) != 0) {
                uVar6 = param_10._4_4_;
                uVar17 = thunk_FUN_010400dc(*(undefined8 *)PTR_DAT_02353f50);
                FUN_01d67190(uVar17,uVar15 & 0xffffffff,uVar6,uVar14 & 0xffffffff);
                return uVar17;
              }
              return 0;
            }
          }
          else if (uVar19 < uVar16) {
            uVar19 = uVar18 + ~uVar19;
            uVar17 = (ulong)uVar19;
            if (uVar19 <= uVar16 - uVar8) {
              if ((*(byte *)(*(long *)(*(long *)puVar3 + 0x20) + 0x135) & 1) == 0) {
                FUN_0103c244();
              }
              uVar14 = (ulong)(param_3 & 1);
              uVar13 = *(undefined8 *)PTR_DAT_02358598;
              param_5 = (uint *)&param_10;
              uVar12 = FUN_01d67fec(param_1 + (long)(int)uVar8 * 2,uVar19,uVar13);
              if ((uVar12 & 1) == 0) {
                return 0;
              }
              if (uVar18 < uVar16) {
                if ((*(byte *)(*(long *)(*(long *)puVar4 + 0x20) + 0x135) & 1) == 0) {
                  FUN_0103c244();
                }
                uVar17 = FUN_01d67fec(param_1 + (long)(int)(uVar18 + 1) * 2,uVar16 - (uVar18 + 1),
                                      *(undefined8 *)PTR_DAT_023585a0,param_3 & 1,(long)&param_9 + 4
                                     );
                uVar14 = param_10;
                uVar15 = param_9;
                if ((uVar17 & 1) != 0) {
                  uVar6 = param_9._4_4_;
                  uVar7 = param_10._4_4_;
                  uVar17 = thunk_FUN_010400dc(*(undefined8 *)PTR_DAT_02353f50);
                  FUN_01d6707c(uVar17,uVar15 & 0xffffffff,uVar7,uVar14 & 0xffffffff,uVar6);
                  return uVar17;
                }
                return 0;
              }
            }
          }
        }
        goto LAB_01d67fe8;
      }
      if ((*(byte *)(*(long *)(*(long *)puVar4 + 0x20) + 0x135) & 1) == 0) {
        FUN_0103c244();
      }
      uVar14 = FUN_01d67fec(unaff_x22,unaff_x24,*(undefined8 *)puVar5,param_3 & 1,
                            (long)&param_10 + 4);
      uVar15 = param_9;
      if ((uVar14 & 1) != 0) {
        uVar6 = param_10._4_4_;
        uVar14 = thunk_FUN_010400dc(*(undefined8 *)PTR_DAT_02353f50);
        FUN_01d6727c(uVar14,uVar15 & 0xffffffff,uVar6);
        return uVar14;
      }
    }
    return 0;
  }
LAB_01d67fe8:
  auVar20 = FUN_01d68788();
  puVar3 = PTR_DAT_0234c0c0;
  pcVar21 = FUN_01d67fec;
  if ((DAT_0247d711 & 1) == 0) {
    FUN_00fdc2e4(PTR_DAT_0234c0c0);
    DAT_0247d711 = 1;
  }
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01022c14();
  }
  uVar10 = FUN_01d22d48(0);
  if ((uVar14 & 1) == 0) {
    uVar15 = OVR_OpenVR_CVRDriverManager__GetDriverHandle
                       (auVar20._0_8_,auVar20._8_8_,7,uVar10,param_5,0,param_7,param_8,pcVar21,
                        unaff_x25,unaff_x24,uVar17,unaff_x22,param_1,param_2,uVar15);
    if ((uVar15 & 1) == 0) {
      uVar15 = 0;
    }
    else {
      uVar15 = (ulong)(~*param_5 >> 0x1f);
    }
  }
  else {
    uVar8 = FUN_01d483a0();
    *param_5 = uVar8;
    if ((int)uVar8 < 0) {
      thunk_FUN_010303a8(PTR_DAT_0234be28);
      uVar10 = thunk_FUN_010400dc();
      uVar11 = thunk_FUN_010303a8(PTR_DAT_023585a8);
      FUN_01c62494(uVar10,uVar13,uVar11,0);
      uVar13 = thunk_FUN_010303a8(PTR_DAT_02358608);
                    /* WARNING: Subroutine does not return */
      FUN_00fdc400(uVar10,uVar13);
    }
    uVar15 = 1;
  }
  return uVar15;
}


