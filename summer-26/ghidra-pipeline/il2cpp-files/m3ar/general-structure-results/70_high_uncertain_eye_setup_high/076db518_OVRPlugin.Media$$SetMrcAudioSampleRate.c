/*
FUNCTION_NAME: OVRPlugin.Media$$SetMrcAudioSampleRate
ENTRY_POINT: 076db518
PROGRAM: m3ar-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x076db594) */

undefined8 OVRPlugin_Media__SetMrcAudioSampleRate(float param_1,float param_2)

{
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  bool bVar1;
  int iVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  float *unaff_x19;
  long *unaff_x20;
  int unaff_w21;
  uint unaff_w23;
  long *unaff_x24;
  long *unaff_x25;
  long *unaff_x26;
  float fVar9;
  float fVar10;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  float fStack0000000000000000;
  float fStack0000000000000004;
  float fStack0000000000000008;
  float fStack000000000000000c;
  
  do {
    if ((bool)in_ZR || in_NG != in_OV) {
      unaff_w23 = 0;
      if (unaff_s8 <= param_2) {
        unaff_s8 = param_2;
      }
      if (param_1 <= unaff_s9) {
        unaff_s9 = param_1;
      }
    }
    do {
      do {
        unaff_w21 = unaff_w21 + 1;
        lVar6 = *unaff_x20;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *unaff_x24) {
              puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_076db418;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar3 = (undefined8 *)FUN_0406ae20();
LAB_076db418:
        iVar2 = (*(code *)*puVar3)();
        if (iVar2 <= unaff_w21) {
          if ((unaff_s11 < unaff_s10) || ((unaff_w23 & 1) == 0 && unaff_s9 < unaff_s8)) {
            uVar5 = 0;
            unaff_x19[0] = 0.0;
            unaff_x19[1] = 0.0;
            unaff_x19[2] = 0.0;
            unaff_x19[3] = 0.0;
          }
          else {
            fVar9 = fmodf(unaff_s10 + (unaff_s11 - unaff_s10) * 0.5,360.0);
            bVar1 = (unaff_w23 & 1) == 0;
            *unaff_x19 = fVar9;
            unaff_x19[1] = unaff_s11 - unaff_s10;
            fVar9 = 1.0;
            if (bVar1) {
              fVar9 = unaff_s8;
            }
            fVar10 = -1.0;
            if (bVar1) {
              fVar10 = unaff_s9;
            }
            unaff_x19[2] = fVar9;
            unaff_x19[3] = fVar10;
            uVar5 = 1;
          }
          return uVar5;
        }
        lVar6 = *unaff_x20;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *unaff_x25) {
              puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_076db478;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar3 = (undefined8 *)FUN_0406ae20();
LAB_076db478:
        plVar4 = (long *)(*(code *)*puVar3)();
      } while (plVar4 == (long *)0x0);
      lVar6 = *plVar4;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *unaff_x26) {
            puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_076db4dc;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar3 = (undefined8 *)FUN_0406ae20(plVar4,*unaff_x26,0);
LAB_076db4dc:
      uVar7 = (*(code *)*puVar3)(plVar4);
    } while ((uVar7 & 1) == 0);
    fVar9 = fStack0000000000000000 - fStack0000000000000004 * unaff_s12;
    fVar10 = fStack0000000000000000 + fStack0000000000000004 * unaff_s12;
    if (unaff_s10 <= fVar9) {
      unaff_s10 = fVar9;
    }
    if (fVar10 <= unaff_s11) {
      unaff_s11 = fVar10;
    }
    in_NG = '\0';
    in_ZR = false;
    in_OV = '\x01';
    param_2 = fStack0000000000000008;
    param_1 = fStack000000000000000c;
    if (!NAN(fStack0000000000000008) && !NAN(fStack000000000000000c)) {
      in_NG = fStack0000000000000008 < fStack000000000000000c;
      in_ZR = fStack0000000000000008 == fStack000000000000000c;
      in_OV = '\0';
    }
  } while( true );
}


