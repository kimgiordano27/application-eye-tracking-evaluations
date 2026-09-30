/*
FUNCTION_NAME: OVRManager$$get_sharpenType
ENTRY_POINT: 01d67c5c
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


ulong OVRManager__get_sharpenType
                (undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                uint *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                undefined8 param_9,undefined8 param_10)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  bool in_CY;
  int iVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  uint unaff_w19;
  uint unaff_w20;
  long unaff_x21;
  ulong unaff_x22;
  ulong unaff_x23;
  ulong unaff_x24;
  undefined *unaff_x25;
  uint uVar13;
  uint uVar14;
  ulong *unaff_x28;
  undefined1 auVar15 [16];
  code *pcVar16;
  
  puVar3 = PTR_DAT_02351a18;
  if (in_CY) goto LAB_01d67fe8;
  uVar8 = (uint)unaff_x23;
  iVar1 = uVar8 + 1;
  if ((*(byte *)(*(long *)(*(long *)PTR_DAT_02351a18 + 0x20) + 0x135) & 1) == 0) {
    FUN_0103c244();
  }
  param_4 = *unaff_x28;
  unaff_x24 = (ulong)(unaff_w20 - iVar1);
  unaff_x22 = unaff_x21 + (long)iVar1 * 2;
  param_3 = 0x2e;
  iVar7 = FUN_01d450b0(unaff_x22,unaff_x24,0x2e);
  unaff_x25 = puVar3;
  if (iVar7 == -1) {
    uVar14 = 0xffffffff;
LAB_01d67d88:
    uVar13 = 0xffffffff;
  }
  else {
    uVar14 = iVar7 + iVar1;
    uVar13 = uVar14 + 1;
    if (unaff_w20 < uVar13) goto LAB_01d67fe8;
    if ((*(byte *)(*(long *)(*(long *)puVar3 + 0x20) + 0x135) & 1) == 0) {
      FUN_0103c244();
    }
    param_4 = *unaff_x28;
    param_3 = 0x2e;
    iVar7 = FUN_01d450b0(unaff_x21 + (long)(int)uVar13 * 2,unaff_w20 - uVar13,0x2e);
    if (iVar7 == -1) goto LAB_01d67d88;
    uVar13 = iVar7 + uVar13;
    uVar2 = uVar13 + 1;
    if (unaff_w20 < uVar2) goto LAB_01d67fe8;
    if ((*(byte *)(*(long *)(*(long *)puVar3 + 0x20) + 0x135) & 1) == 0) {
      FUN_0103c244();
    }
    param_4 = *unaff_x28;
    param_3 = 0x2e;
    iVar7 = FUN_01d450b0(unaff_x21 + (long)(int)uVar2 * 2,unaff_w20 - uVar2,0x2e);
    if (iVar7 != -1) {
      if ((unaff_w19 & 1) != 0) {
        thunk_FUN_010303a8(PTR_DAT_0234bcd0);
        uVar9 = thunk_FUN_010400dc();
        uVar10 = thunk_FUN_010303a8(PTR_DAT_023585f8);
        uVar11 = thunk_FUN_010303a8(PTR_DAT_02354f40);
        FUN_01c5e198(uVar9,uVar10,uVar11,0);
        uVar10 = thunk_FUN_010303a8(PTR_DAT_02358600);
                    /* WARNING: Subroutine does not return */
        FUN_00fdc400(uVar9,uVar10);
      }
      return 0;
    }
  }
  puVar4 = PTR_DAT_023517a8;
  if (uVar8 <= unaff_w20) {
    if ((*(byte *)(*(long *)(*(long *)PTR_DAT_023517a8 + 0x20) + 0x135) & 1) == 0) {
      FUN_0103c244();
    }
    puVar5 = PTR_DAT_02354f40;
    param_4 = (ulong)(unaff_w19 & 1);
    param_3 = *(undefined8 *)PTR_DAT_02354f40;
    param_5 = (uint *)register0x00000008;
    uVar12 = FUN_01d67fec();
    if ((uVar12 & 1) != 0) {
      if (uVar14 != 0xffffffff) {
        uVar8 = uVar14 + ~uVar8;
        unaff_x23 = (ulong)uVar8;
        if (uVar8 <= unaff_w20 - iVar1) {
          if ((*(byte *)(*(long *)(*(long *)puVar4 + 0x20) + 0x135) & 1) == 0) {
            FUN_0103c244();
          }
          param_3 = *(undefined8 *)puVar5;
          param_4 = (ulong)(unaff_w19 & 1);
          param_5 = (uint *)((long)&param_10 + 4);
          uVar12 = FUN_01d67fec(unaff_x22,uVar8,param_3);
          if ((uVar12 & 1) == 0) {
            return 0;
          }
          uVar8 = uVar14 + 1;
          unaff_x22 = (ulong)uVar8;
          if (uVar13 == 0xffffffff) {
            if (uVar14 < unaff_w20) {
              if ((*(byte *)(*(long *)(*(long *)puVar3 + 0x20) + 0x135) & 1) == 0) {
                FUN_0103c244();
              }
              uVar12 = FUN_01d67fec(unaff_x21 + (long)(int)uVar8 * 2,unaff_w20 - uVar8,
                                    *(undefined8 *)PTR_DAT_02358598,unaff_w19 & 1,&param_10);
              uVar8 = (uint)param_10;
              uVar6 = (undefined4)param_9;
              if ((uVar12 & 1) != 0) {
                uVar12 = thunk_FUN_010400dc(*(undefined8 *)PTR_DAT_02353f50);
                FUN_01d67190(uVar12,uVar6,param_10._4_4_,uVar8);
                return uVar12;
              }
              return 0;
            }
          }
          else if (uVar14 < unaff_w20) {
            uVar14 = uVar13 + ~uVar14;
            unaff_x23 = (ulong)uVar14;
            if (uVar14 <= unaff_w20 - uVar8) {
              if ((*(byte *)(*(long *)(*(long *)puVar4 + 0x20) + 0x135) & 1) == 0) {
                FUN_0103c244();
              }
              param_4 = (ulong)(unaff_w19 & 1);
              param_3 = *(undefined8 *)PTR_DAT_02358598;
              param_5 = (uint *)&param_10;
              uVar12 = FUN_01d67fec(unaff_x21 + (long)(int)uVar8 * 2,uVar14,param_3);
              if ((uVar12 & 1) == 0) {
                return 0;
              }
              if (uVar13 < unaff_w20) {
                if ((*(byte *)(*(long *)(*(long *)puVar3 + 0x20) + 0x135) & 1) == 0) {
                  FUN_0103c244();
                }
                uVar12 = FUN_01d67fec(unaff_x21 + (long)(int)(uVar13 + 1) * 2,
                                      unaff_w20 - (uVar13 + 1),*(undefined8 *)PTR_DAT_023585a0,
                                      unaff_w19 & 1,(long)&param_9 + 4);
                uVar8 = (uint)param_10;
                uVar6 = (undefined4)param_9;
                if ((uVar12 & 1) != 0) {
                  uVar12 = thunk_FUN_010400dc(*(undefined8 *)PTR_DAT_02353f50);
                  FUN_01d6707c(uVar12,uVar6,param_10._4_4_,uVar8,param_9._4_4_);
                  return uVar12;
                }
                return 0;
              }
            }
          }
        }
        goto LAB_01d67fe8;
      }
      if ((*(byte *)(*(long *)(*(long *)puVar3 + 0x20) + 0x135) & 1) == 0) {
        FUN_0103c244();
      }
      uVar12 = FUN_01d67fec(unaff_x22,unaff_x24,*(undefined8 *)puVar5,unaff_w19 & 1,
                            (long)&param_10 + 4);
      uVar6 = (undefined4)param_9;
      if ((uVar12 & 1) != 0) {
        uVar12 = thunk_FUN_010400dc(*(undefined8 *)PTR_DAT_02353f50);
        FUN_01d6727c(uVar12,uVar6,param_10._4_4_);
        return uVar12;
      }
    }
    return 0;
  }
LAB_01d67fe8:
  auVar15 = FUN_01d68788();
  puVar3 = PTR_DAT_0234c0c0;
  pcVar16 = FUN_01d67fec;
  if ((DAT_0247d711 & 1) == 0) {
    FUN_00fdc2e4(PTR_DAT_0234c0c0);
    DAT_0247d711 = 1;
  }
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01022c14();
  }
  uVar9 = FUN_01d22d48(0);
  if ((param_4 & 1) == 0) {
    uVar12 = OVR_OpenVR_CVRDriverManager__GetDriverHandle
                       (auVar15._0_8_,auVar15._8_8_,7,uVar9,param_5,0,param_7,param_8,pcVar16,
                        unaff_x25,unaff_x24,unaff_x23,unaff_x22);
    if ((uVar12 & 1) == 0) {
      uVar12 = 0;
    }
    else {
      uVar12 = (ulong)(~*param_5 >> 0x1f);
    }
  }
  else {
    uVar8 = FUN_01d483a0();
    *param_5 = uVar8;
    if ((int)uVar8 < 0) {
      thunk_FUN_010303a8(PTR_DAT_0234be28);
      uVar9 = thunk_FUN_010400dc();
      uVar10 = thunk_FUN_010303a8(PTR_DAT_023585a8);
      FUN_01c62494(uVar9,param_3,uVar10,0);
      uVar10 = thunk_FUN_010303a8(PTR_DAT_02358608);
                    /* WARNING: Subroutine does not return */
      FUN_00fdc400(uVar9,uVar10);
    }
    uVar12 = 1;
  }
  return uVar12;
}


