/*
FUNCTION_NAME: OVRManager$$set_colorGamut
ENTRY_POINT: 01d67cd4
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


ulong OVRManager__set_colorGamut
                (undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                uint *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                undefined8 param_9,undefined8 param_10)

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
  code *pcVar12;
  
  uVar10 = 0x2e;
  iVar5 = FUN_01d450b0(param_1,param_2,0x2e);
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
    param_4 = *unaff_x28;
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
  param_4 = (ulong)(unaff_w19 & 1);
  uVar10 = *(undefined8 *)PTR_DAT_02354f40;
  param_5 = (uint *)register0x00000008;
  uVar9 = FUN_01d67fec();
  if ((uVar9 & 1) != 0) {
    if (unaff_w27 == 0xffffffff) {
      if ((*(byte *)(*(long *)(*unaff_x25 + 0x20) + 0x135) & 1) == 0) {
        FUN_0103c244();
      }
      uVar9 = FUN_01d67fec();
      uVar4 = (undefined4)param_9;
      if ((uVar9 & 1) != 0) {
        uVar9 = thunk_FUN_010400dc(*(undefined8 *)PTR_DAT_02353f50);
        FUN_01d6727c(uVar9,uVar4,param_10._4_4_);
        return uVar9;
      }
    }
    else {
      if (unaff_w24 < unaff_w27 + ~unaff_w23) goto LAB_01d67fe8;
      if ((*(byte *)(*(long *)(*(long *)puVar2 + 0x20) + 0x135) & 1) == 0) {
        FUN_0103c244();
      }
      uVar10 = *(undefined8 *)puVar3;
      param_4 = (ulong)(unaff_w19 & 1);
      param_5 = (uint *)((long)&param_10 + 4);
      uVar9 = FUN_01d67fec();
      if ((uVar9 & 1) != 0) {
        iVar5 = unaff_w27 + 1;
        if (uVar6 == 0xffffffff) {
          if (unaff_w20 <= unaff_w27) goto LAB_01d67fe8;
          if ((*(byte *)(*(long *)(*unaff_x25 + 0x20) + 0x135) & 1) == 0) {
            FUN_0103c244();
          }
          uVar9 = FUN_01d67fec(unaff_x21 + (long)iVar5 * 2,unaff_w20 - iVar5,
                               *(undefined8 *)PTR_DAT_02358598,unaff_w19 & 1,&param_10);
          uVar6 = (uint)param_10;
          uVar4 = (undefined4)param_9;
          if ((uVar9 & 1) != 0) {
            uVar9 = thunk_FUN_010400dc(*(undefined8 *)PTR_DAT_02353f50);
            FUN_01d67190(uVar9,uVar4,param_10._4_4_,uVar6);
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
            if ((param_4 & 1) == 0) {
              uVar9 = OVR_OpenVR_CVRDriverManager__GetDriverHandle
                                (auVar11._0_8_,auVar11._8_8_,7,uVar7,param_5,0,param_7,param_8,
                                 pcVar12);
              if ((uVar9 & 1) == 0) {
                uVar9 = 0;
              }
              else {
                uVar9 = (ulong)(~*param_5 >> 0x1f);
              }
            }
            else {
              uVar6 = FUN_01d483a0();
              *param_5 = uVar6;
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
          param_4 = (ulong)(unaff_w19 & 1);
          uVar10 = *(undefined8 *)PTR_DAT_02358598;
          param_5 = (uint *)&param_10;
          uVar9 = FUN_01d67fec(unaff_x21 + (long)iVar5 * 2,uVar6 + ~unaff_w27,uVar10);
          if ((uVar9 & 1) != 0) {
            if (unaff_w20 <= uVar6) goto LAB_01d67fe8;
            if ((*(byte *)(*(long *)(*unaff_x25 + 0x20) + 0x135) & 1) == 0) {
              FUN_0103c244();
            }
            uVar9 = FUN_01d67fec(unaff_x21 + (long)(int)(uVar6 + 1) * 2,unaff_w20 - (uVar6 + 1),
                                 *(undefined8 *)PTR_DAT_023585a0,unaff_w19 & 1,(long)&param_9 + 4);
            uVar6 = (uint)param_10;
            uVar4 = (undefined4)param_9;
            if ((uVar9 & 1) != 0) {
              uVar9 = thunk_FUN_010400dc(*(undefined8 *)PTR_DAT_02353f50);
              FUN_01d6707c(uVar9,uVar4,param_10._4_4_,uVar6,param_9._4_4_);
              return uVar9;
            }
          }
        }
      }
    }
  }
  return 0;
}


