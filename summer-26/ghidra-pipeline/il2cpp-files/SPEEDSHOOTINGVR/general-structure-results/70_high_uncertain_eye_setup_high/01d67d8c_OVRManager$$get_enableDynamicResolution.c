/*
FUNCTION_NAME: OVRManager$$get_enableDynamicResolution
ENTRY_POINT: 01d67d8c
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


ulong OVRManager__get_enableDynamicResolution
                (undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                uint *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                undefined8 param_9,undefined8 param_10)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  uint uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uint unaff_w19;
  uint unaff_w20;
  long unaff_x21;
  uint unaff_w23;
  uint unaff_w24;
  long *unaff_x25;
  uint unaff_w26;
  uint unaff_w27;
  undefined1 auVar9 [16];
  code *pcVar10;
  
  puVar2 = PTR_DAT_023517a8;
  if (unaff_w20 < unaff_w23) goto LAB_01d67fe8;
  if ((*(byte *)(*(long *)(*(long *)PTR_DAT_023517a8 + 0x20) + 0x135) & 1) == 0) {
    FUN_0103c244();
  }
  puVar3 = PTR_DAT_02354f40;
  param_4 = (ulong)(unaff_w19 & 1);
  param_3 = *(undefined8 *)PTR_DAT_02354f40;
  param_5 = (uint *)register0x00000008;
  uVar6 = FUN_01d67fec();
  if ((uVar6 & 1) != 0) {
    if (unaff_w27 == 0xffffffff) {
      if ((*(byte *)(*(long *)(*unaff_x25 + 0x20) + 0x135) & 1) == 0) {
        FUN_0103c244();
      }
      uVar6 = FUN_01d67fec();
      uVar4 = (undefined4)param_9;
      if ((uVar6 & 1) != 0) {
        uVar6 = thunk_FUN_010400dc(*(undefined8 *)PTR_DAT_02353f50);
        FUN_01d6727c(uVar6,uVar4,param_10._4_4_);
        return uVar6;
      }
    }
    else {
      if (unaff_w24 < unaff_w27 + ~unaff_w23) goto LAB_01d67fe8;
      if ((*(byte *)(*(long *)(*(long *)puVar2 + 0x20) + 0x135) & 1) == 0) {
        FUN_0103c244();
      }
      param_3 = *(undefined8 *)puVar3;
      param_4 = (ulong)(unaff_w19 & 1);
      param_5 = (uint *)((long)&param_10 + 4);
      uVar6 = FUN_01d67fec();
      if ((uVar6 & 1) != 0) {
        iVar1 = unaff_w27 + 1;
        if (unaff_w26 == 0xffffffff) {
          if (unaff_w20 <= unaff_w27) goto LAB_01d67fe8;
          if ((*(byte *)(*(long *)(*unaff_x25 + 0x20) + 0x135) & 1) == 0) {
            FUN_0103c244();
          }
          uVar6 = FUN_01d67fec(unaff_x21 + (long)iVar1 * 2,unaff_w20 - iVar1,
                               *(undefined8 *)PTR_DAT_02358598,unaff_w19 & 1,&param_10);
          uVar5 = (uint)param_10;
          uVar4 = (undefined4)param_9;
          if ((uVar6 & 1) != 0) {
            uVar6 = thunk_FUN_010400dc(*(undefined8 *)PTR_DAT_02353f50);
            FUN_01d67190(uVar6,uVar4,param_10._4_4_,uVar5);
            return uVar6;
          }
        }
        else {
          if ((unaff_w20 <= unaff_w27) || (unaff_w20 - iVar1 < unaff_w26 + ~unaff_w27)) {
LAB_01d67fe8:
            auVar9 = FUN_01d68788();
            puVar2 = PTR_DAT_0234c0c0;
            pcVar10 = FUN_01d67fec;
            if ((DAT_0247d711 & 1) == 0) {
              FUN_00fdc2e4(PTR_DAT_0234c0c0);
              DAT_0247d711 = 1;
            }
            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
              thunk_FUN_01022c14();
            }
            uVar7 = FUN_01d22d48(0);
            if ((param_4 & 1) == 0) {
              uVar6 = OVR_OpenVR_CVRDriverManager__GetDriverHandle
                                (auVar9._0_8_,auVar9._8_8_,7,uVar7,param_5,0,param_7,param_8,pcVar10
                                );
              if ((uVar6 & 1) == 0) {
                uVar6 = 0;
              }
              else {
                uVar6 = (ulong)(~*param_5 >> 0x1f);
              }
            }
            else {
              uVar5 = FUN_01d483a0();
              *param_5 = uVar5;
              if ((int)uVar5 < 0) {
                thunk_FUN_010303a8(PTR_DAT_0234be28);
                uVar7 = thunk_FUN_010400dc();
                uVar8 = thunk_FUN_010303a8(PTR_DAT_023585a8);
                FUN_01c62494(uVar7,param_3,uVar8,0);
                uVar8 = thunk_FUN_010303a8(PTR_DAT_02358608);
                    /* WARNING: Subroutine does not return */
                FUN_00fdc400(uVar7,uVar8);
              }
              uVar6 = 1;
            }
            return uVar6;
          }
          if ((*(byte *)(*(long *)(*(long *)puVar2 + 0x20) + 0x135) & 1) == 0) {
            FUN_0103c244();
          }
          param_4 = (ulong)(unaff_w19 & 1);
          param_3 = *(undefined8 *)PTR_DAT_02358598;
          param_5 = (uint *)&param_10;
          uVar6 = FUN_01d67fec(unaff_x21 + (long)iVar1 * 2,unaff_w26 + ~unaff_w27,param_3);
          if ((uVar6 & 1) != 0) {
            if (unaff_w20 <= unaff_w26) goto LAB_01d67fe8;
            if ((*(byte *)(*(long *)(*unaff_x25 + 0x20) + 0x135) & 1) == 0) {
              FUN_0103c244();
            }
            uVar6 = FUN_01d67fec(unaff_x21 + (long)(int)(unaff_w26 + 1) * 2,
                                 unaff_w20 - (unaff_w26 + 1),*(undefined8 *)PTR_DAT_023585a0,
                                 unaff_w19 & 1,(long)&param_9 + 4);
            uVar5 = (uint)param_10;
            uVar4 = (undefined4)param_9;
            if ((uVar6 & 1) != 0) {
              uVar6 = thunk_FUN_010400dc(*(undefined8 *)PTR_DAT_02353f50);
              FUN_01d6707c(uVar6,uVar4,param_10._4_4_,uVar5,param_9._4_4_);
              return uVar6;
            }
          }
        }
      }
    }
  }
  return 0;
}


