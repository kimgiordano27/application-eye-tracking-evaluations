/*
FUNCTION_NAME: OVRManager$$get_colorGamut
ENTRY_POINT: 01d67ccc
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


ulong OVRManager__get_colorGamut(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 uVar10;
  ulong in_x3;
  uint *in_x4;
  undefined8 in_x6;
  undefined8 in_x7;
  uint unaff_w19;
  uint unaff_w20;
  long unaff_x21;
  uint unaff_w23;
  uint unaff_w24;
  long *unaff_x25;
  int unaff_w26;
  uint unaff_w27;
  ulong *unaff_x28;
  undefined1 auVar11 [16];
  undefined4 uStack0000000000000000;
  undefined4 uStack0000000000000004;
  uint uStack0000000000000008;
  undefined4 uStack000000000000000c;
  code *pcVar12;
  
  uVar10 = 0x2e;
  iVar5 = FUN_01d450b0(unaff_x21 + (long)unaff_w26 * 2,unaff_w20 - unaff_w26,0x2e);
  if (iVar5 == -1) {
    uVar6 = 0xffffffff;
  }
  else {
    uVar6 = iVar5 + unaff_w26;
    uVar1 = uVar6 + 1;
    if (unaff_w20 < uVar1) goto LAB_01d67fe8;
    if ((*(byte *)(*(long *)(*unaff_x25 + 0x20) + 0x135) & 1) == 0) {
      FUN_0103c244();
    }
    in_x3 = *unaff_x28;
    uVar10 = 0x2e;
    iVar5 = FUN_01d450b0(unaff_x21 + (long)(int)uVar1 * 2,unaff_w20 - uVar1,0x2e);
    if (iVar5 != -1) {
      if ((unaff_w19 & 1) == 0) {
        return 0;
      }
      thunk_FUN_010303a8(PTR_DAT_0234bcd0);
      uVar10 = thunk_FUN_010400dc();
      uVar7 = thunk_FUN_010303a8(PTR_DAT_023585f8);
      uVar8 = thunk_FUN_010303a8(PTR_DAT_02354f40);
      FUN_01c5e198(uVar10,uVar7,uVar8,0);
      uVar7 = thunk_FUN_010303a8(PTR_DAT_02358600);
                    /* WARNING: Subroutine does not return */
      FUN_00fdc400(uVar10,uVar7);
    }
  }
  puVar2 = PTR_DAT_023517a8;
  if (unaff_w20 < unaff_w23) goto LAB_01d67fe8;
  if ((*(byte *)(*(long *)(*(long *)PTR_DAT_023517a8 + 0x20) + 0x135) & 1) == 0) {
    FUN_0103c244();
  }
  puVar3 = PTR_DAT_02354f40;
  in_x3 = (ulong)(unaff_w19 & 1);
  uVar10 = *(undefined8 *)PTR_DAT_02354f40;
  in_x4 = (uint *)register0x00000008;
  uVar9 = FUN_01d67fec();
  if ((uVar9 & 1) != 0) {
    if (unaff_w27 == 0xffffffff) {
      if ((*(byte *)(*(long *)(*unaff_x25 + 0x20) + 0x135) & 1) == 0) {
        FUN_0103c244();
      }
      uVar9 = FUN_01d67fec();
      uVar4 = uStack0000000000000000;
      if ((uVar9 & 1) != 0) {
        uVar9 = thunk_FUN_010400dc(*(undefined8 *)PTR_DAT_02353f50);
        FUN_01d6727c(uVar9,uVar4,uStack000000000000000c);
        return uVar9;
      }
    }
    else {
      if (unaff_w24 < unaff_w27 + ~unaff_w23) goto LAB_01d67fe8;
      if ((*(byte *)(*(long *)(*(long *)puVar2 + 0x20) + 0x135) & 1) == 0) {
        FUN_0103c244();
      }
      uVar10 = *(undefined8 *)puVar3;
      in_x3 = (ulong)(unaff_w19 & 1);
      in_x4 = (uint *)((long)&stack0x00000008 + 4);
      uVar9 = FUN_01d67fec();
      if ((uVar9 & 1) != 0) {
        iVar5 = unaff_w27 + 1;
        if (uVar6 == 0xffffffff) {
          if (unaff_w20 <= unaff_w27) goto LAB_01d67fe8;
          if ((*(byte *)(*(long *)(*unaff_x25 + 0x20) + 0x135) & 1) == 0) {
            FUN_0103c244();
          }
          uVar9 = FUN_01d67fec(unaff_x21 + (long)iVar5 * 2,unaff_w20 - iVar5,
                               *(undefined8 *)PTR_DAT_02358598,unaff_w19 & 1,&stack0x00000008);
          uVar6 = uStack0000000000000008;
          uVar4 = uStack0000000000000000;
          if ((uVar9 & 1) != 0) {
            uVar9 = thunk_FUN_010400dc(*(undefined8 *)PTR_DAT_02353f50);
            FUN_01d67190(uVar9,uVar4,uStack000000000000000c,uVar6);
            return uVar9;
          }
        }
        else {
          if ((unaff_w20 <= unaff_w27) || (unaff_w20 - iVar5 < uVar6 + ~unaff_w27)) {
LAB_01d67fe8:
            auVar11 = FUN_01d68788();
            puVar2 = PTR_DAT_0234c0c0;
            pcVar12 = FUN_01d67fec;
            if ((DAT_0247d711 & 1) == 0) {
              FUN_00fdc2e4(PTR_DAT_0234c0c0);
              DAT_0247d711 = 1;
            }
            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
              thunk_FUN_01022c14();
            }
            uVar7 = FUN_01d22d48(0);
            if ((in_x3 & 1) == 0) {
              uVar9 = OVR_OpenVR_CVRDriverManager__GetDriverHandle
                                (auVar11._0_8_,auVar11._8_8_,7,uVar7,in_x4,0,in_x6,in_x7,pcVar12);
              if ((uVar9 & 1) == 0) {
                uVar9 = 0;
              }
              else {
                uVar9 = (ulong)(~*in_x4 >> 0x1f);
              }
            }
            else {
              uVar6 = FUN_01d483a0();
              *in_x4 = uVar6;
              if ((int)uVar6 < 0) {
                thunk_FUN_010303a8(PTR_DAT_0234be28);
                uVar7 = thunk_FUN_010400dc();
                uVar8 = thunk_FUN_010303a8(PTR_DAT_023585a8);
                FUN_01c62494(uVar7,uVar10,uVar8,0);
                uVar10 = thunk_FUN_010303a8(PTR_DAT_02358608);
                    /* WARNING: Subroutine does not return */
                FUN_00fdc400(uVar7,uVar10);
              }
              uVar9 = 1;
            }
            return uVar9;
          }
          if ((*(byte *)(*(long *)(*(long *)puVar2 + 0x20) + 0x135) & 1) == 0) {
            FUN_0103c244();
          }
          in_x3 = (ulong)(unaff_w19 & 1);
          uVar10 = *(undefined8 *)PTR_DAT_02358598;
          in_x4 = &stack0x00000008;
          uVar9 = FUN_01d67fec(unaff_x21 + (long)iVar5 * 2,uVar6 + ~unaff_w27,uVar10);
          if ((uVar9 & 1) != 0) {
            if (unaff_w20 <= uVar6) goto LAB_01d67fe8;
            if ((*(byte *)(*(long *)(*unaff_x25 + 0x20) + 0x135) & 1) == 0) {
              FUN_0103c244();
            }
            uVar9 = FUN_01d67fec(unaff_x21 + (long)(int)(uVar6 + 1) * 2,unaff_w20 - (uVar6 + 1),
                                 *(undefined8 *)PTR_DAT_023585a0,unaff_w19 & 1,
                                 (long)&stack0x00000000 + 4);
            uVar6 = uStack0000000000000008;
            uVar4 = uStack0000000000000000;
            if ((uVar9 & 1) != 0) {
              uVar9 = thunk_FUN_010400dc(*(undefined8 *)PTR_DAT_02353f50);
              FUN_01d6707c(uVar9,uVar4,uStack000000000000000c,uVar6,uStack0000000000000004);
              return uVar9;
            }
          }
        }
      }
    }
  }
  return 0;
}


