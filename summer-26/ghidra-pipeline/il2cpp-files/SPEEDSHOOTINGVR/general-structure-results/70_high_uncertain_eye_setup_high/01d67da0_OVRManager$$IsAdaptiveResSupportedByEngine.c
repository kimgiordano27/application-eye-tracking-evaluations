/*
FUNCTION_NAME: OVRManager$$IsAdaptiveResSupportedByEngine
ENTRY_POINT: 01d67da0
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


ulong OVRManager__IsAdaptiveResSupportedByEngine(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined4 uVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  uint *puVar10;
  undefined8 in_x6;
  undefined8 in_x7;
  uint unaff_w19;
  uint unaff_w20;
  long unaff_x21;
  uint unaff_w23;
  uint unaff_w24;
  long *unaff_x25;
  uint unaff_w26;
  uint unaff_w27;
  long *unaff_x28;
  undefined1 auVar11 [16];
  undefined4 uStack0000000000000000;
  undefined4 uStack0000000000000004;
  uint uStack0000000000000008;
  undefined4 uStack000000000000000c;
  code *pcVar12;
  
  if ((*(byte *)(*(long *)(param_1 + 0x20) + 0x135) & 1) == 0) {
    FUN_0103c244();
  }
  puVar2 = PTR_DAT_02354f40;
  uVar9 = (ulong)(unaff_w19 & 1);
  uVar8 = *(undefined8 *)PTR_DAT_02354f40;
  puVar10 = (uint *)register0x00000008;
  uVar5 = FUN_01d67fec();
  if ((uVar5 & 1) != 0) {
    if (unaff_w27 == 0xffffffff) {
      if ((*(byte *)(*(long *)(*unaff_x25 + 0x20) + 0x135) & 1) == 0) {
        FUN_0103c244();
      }
      uVar5 = FUN_01d67fec();
      uVar3 = uStack0000000000000000;
      if ((uVar5 & 1) != 0) {
        uVar5 = thunk_FUN_010400dc(*(undefined8 *)PTR_DAT_02353f50);
        FUN_01d6727c(uVar5,uVar3,uStack000000000000000c);
        return uVar5;
      }
    }
    else {
      if (unaff_w24 < unaff_w27 + ~unaff_w23) goto LAB_01d67fe8;
      if ((*(byte *)(*(long *)(*unaff_x28 + 0x20) + 0x135) & 1) == 0) {
        FUN_0103c244();
      }
      uVar8 = *(undefined8 *)puVar2;
      uVar9 = (ulong)(unaff_w19 & 1);
      puVar10 = (uint *)((long)&stack0x00000008 + 4);
      uVar5 = FUN_01d67fec();
      if ((uVar5 & 1) != 0) {
        iVar1 = unaff_w27 + 1;
        if (unaff_w26 == 0xffffffff) {
          if (unaff_w20 <= unaff_w27) goto LAB_01d67fe8;
          if ((*(byte *)(*(long *)(*unaff_x25 + 0x20) + 0x135) & 1) == 0) {
            FUN_0103c244();
          }
          uVar5 = FUN_01d67fec(unaff_x21 + (long)iVar1 * 2,unaff_w20 - iVar1,
                               *(undefined8 *)PTR_DAT_02358598,unaff_w19 & 1,&stack0x00000008);
          uVar4 = uStack0000000000000008;
          uVar3 = uStack0000000000000000;
          if ((uVar5 & 1) != 0) {
            uVar5 = thunk_FUN_010400dc(*(undefined8 *)PTR_DAT_02353f50);
            FUN_01d67190(uVar5,uVar3,uStack000000000000000c,uVar4);
            return uVar5;
          }
        }
        else {
          if ((unaff_w20 <= unaff_w27) || (unaff_w20 - iVar1 < unaff_w26 + ~unaff_w27)) {
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
            uVar6 = FUN_01d22d48(0);
            if ((uVar9 & 1) == 0) {
              uVar5 = OVR_OpenVR_CVRDriverManager__GetDriverHandle
                                (auVar11._0_8_,auVar11._8_8_,7,uVar6,puVar10,0,in_x6,in_x7,pcVar12);
              if ((uVar5 & 1) == 0) {
                uVar5 = 0;
              }
              else {
                uVar5 = (ulong)(~*puVar10 >> 0x1f);
              }
            }
            else {
              uVar4 = FUN_01d483a0();
              *puVar10 = uVar4;
              if ((int)uVar4 < 0) {
                thunk_FUN_010303a8(PTR_DAT_0234be28);
                uVar6 = thunk_FUN_010400dc();
                uVar7 = thunk_FUN_010303a8(PTR_DAT_023585a8);
                FUN_01c62494(uVar6,uVar8,uVar7,0);
                uVar8 = thunk_FUN_010303a8(PTR_DAT_02358608);
                    /* WARNING: Subroutine does not return */
                FUN_00fdc400(uVar6,uVar8);
              }
              uVar5 = 1;
            }
            return uVar5;
          }
          if ((*(byte *)(*(long *)(*unaff_x28 + 0x20) + 0x135) & 1) == 0) {
            FUN_0103c244();
          }
          uVar9 = (ulong)(unaff_w19 & 1);
          uVar8 = *(undefined8 *)PTR_DAT_02358598;
          puVar10 = &stack0x00000008;
          uVar5 = FUN_01d67fec(unaff_x21 + (long)iVar1 * 2,unaff_w26 + ~unaff_w27,uVar8);
          if ((uVar5 & 1) != 0) {
            if (unaff_w20 <= unaff_w26) goto LAB_01d67fe8;
            if ((*(byte *)(*(long *)(*unaff_x25 + 0x20) + 0x135) & 1) == 0) {
              FUN_0103c244();
            }
            uVar5 = FUN_01d67fec(unaff_x21 + (long)(int)(unaff_w26 + 1) * 2,
                                 unaff_w20 - (unaff_w26 + 1),*(undefined8 *)PTR_DAT_023585a0,
                                 unaff_w19 & 1,(long)&stack0x00000000 + 4);
            uVar4 = uStack0000000000000008;
            uVar3 = uStack0000000000000000;
            if ((uVar5 & 1) != 0) {
              uVar5 = thunk_FUN_010400dc(*(undefined8 *)PTR_DAT_02353f50);
              FUN_01d6707c(uVar5,uVar3,uStack000000000000000c,uVar4,uStack0000000000000004);
              return uVar5;
            }
          }
        }
      }
    }
  }
  return 0;
}


