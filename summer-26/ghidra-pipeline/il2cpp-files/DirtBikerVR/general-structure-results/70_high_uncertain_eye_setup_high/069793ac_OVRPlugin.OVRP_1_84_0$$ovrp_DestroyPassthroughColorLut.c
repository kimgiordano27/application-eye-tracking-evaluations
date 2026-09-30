/*
FUNCTION_NAME: OVRPlugin.OVRP_1_84_0$$ovrp_DestroyPassthroughColorLut
ENTRY_POINT: 069793ac
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_84_0__ovrp_DestroyPassthroughColorLut
               (long param_1,float param_2,float param_3,float param_4)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  uint in_w9;
  long lVar4;
  long unaff_x19;
  int unaff_w20;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  float unaff_s15;
  float fStack0000000000000000;
  float fStack0000000000000004;
  float fStack0000000000000008;
  float fStack000000000000000c;
  float fStack0000000000000010;
  float fStack0000000000000014;
  float fStack0000000000000018;
  float fStack000000000000001c;
  float in_stack_00000020;
  float fStack0000000000000078;
  float fStack000000000000007c;
  
  while( true ) {
    unaff_s15 = unaff_s15 + param_3;
    param_4 = param_4 + param_2;
    *(float *)(param_1 + 0x48) = param_4;
    if (in_w9 != 0) {
      lVar4 = *(long *)(unaff_x19 + 0x40);
      if (lVar4 == 0) goto LAB_0697980c;
      fVar8 = -1.0;
      lVar3 = *(long *)(unaff_x19 + 0x68);
      fVar5 = -((param_4 * *(float *)(param_1 + 0x58) - *(float *)(lVar4 + 0x20)) *
               in_stack_00000020);
      fVar7 = *(float *)(lVar4 + 0x1c) * fVar5;
      *(float *)(lVar4 + 0x14) = fVar7;
      fVar5 = -(*(float *)(lVar4 + 0x1c) * fVar5);
      if (0.0 <= fVar7) {
        fVar8 = 1.0;
        fVar5 = fVar7;
      }
      if ((lVar3 == 0) || (lVar4 = *(long *)(lVar3 + 0x30), lVar4 == 0)) goto LAB_0697980c;
      fVar5 = (float)FUN_07c42008(fVar5,lVar4,0);
      fVar8 = fStack000000000000007c * -(fVar8 * fVar5);
      fVar5 = unaff_s9;
      if ((fVar8 <= unaff_s9) && (fVar5 = fVar8, fVar8 < fStack000000000000001c)) {
        fVar5 = fStack000000000000001c;
      }
      param_1 = *(long *)(unaff_x19 + 0x30);
      if (param_1 == 0) goto LAB_0697980c;
      unaff_s12 = unaff_s12 + unaff_s8 * fVar5;
      fVar5 = unaff_s14 * fVar5 * *(float *)(param_1 + 0x58);
      unaff_s15 = unaff_s15 + fVar5;
      param_4 = *(float *)(param_1 + 0x48) - unaff_s13 * fVar5;
      *(float *)(param_1 + 0x48) = param_4;
    }
    if (0.0 < unaff_s10) {
      bVar2 = param_4 < 0.0;
      fVar5 = fStack0000000000000078;
      if (!bVar2) {
        fVar5 = unaff_s10;
      }
      unaff_s15 = unaff_s15 - unaff_s14 * fVar5;
      param_4 = param_4 - unaff_s13 * unaff_s14 * fVar5;
      if (param_4 >= 0.0 && bVar2 || param_4 < 0.0 && !bVar2) {
        param_4 = 0.0;
      }
      *(float *)(param_1 + 0x48) = param_4;
    }
    unaff_w20 = unaff_w20 + 1;
    if (*(int *)(unaff_x19 + 200) <= unaff_w20) break;
    param_1 = *(long *)(unaff_x19 + 0x30);
    if (param_1 == 0) goto LAB_0697980c;
    param_4 = *(float *)(param_1 + 0x48);
    in_w9 = (uint)*(byte *)(unaff_x19 + 0x9c);
    param_3 = unaff_s14 * *(float *)(unaff_x19 + 0x70);
    param_2 = unaff_s13 * param_3;
  }
  fVar5 = 0.0;
  lVar4 = *(long *)(unaff_x19 + 0x40);
  if (lVar4 != 0) {
    cVar1 = *(char *)(unaff_x19 + 0x9c);
    *(float *)(lVar4 + 0x10) = unaff_s12;
    if (cVar1 != '\0') {
      lVar3 = *(long *)(unaff_x19 + 0x30);
      if (lVar3 == 0) goto LAB_0697980c;
      fVar5 = *(float *)(lVar4 + 0x1c) *
              -((*(float *)(lVar3 + 0x48) * *(float *)(lVar3 + 0x58) - *(float *)(lVar4 + 0x20)) *
               in_stack_00000020);
    }
    fVar8 = -1.0;
    lVar3 = *(long *)(unaff_x19 + 0x38);
    *(float *)(unaff_x19 + 0x78) = -unaff_s15;
    fVar7 = 1.0;
    if (fVar5 <= 1.0) {
      fVar7 = fVar5;
    }
    fVar6 = fVar8;
    if (-1.0 <= fVar5) {
      fVar6 = fVar7;
    }
    *(float *)(lVar4 + 0x14) = fVar6;
    if (lVar3 != 0) {
      fVar5 = atan2f(*(float *)(lVar3 + 0x20),fStack0000000000000014);
      lVar4 = *(long *)(unaff_x19 + 0x68);
      fVar5 = fVar5 * DAT_015c595c * DAT_015c5d68;
      fVar7 = *(float *)(lVar3 + 0x1c) * fVar5;
      *(float *)(lVar3 + 0x14) = fVar7;
      fVar5 = -(*(float *)(lVar3 + 0x1c) * fVar5);
      if (0.0 <= fVar7) {
        fVar8 = 1.0;
        fVar5 = fVar7;
      }
      if ((lVar4 != 0) && (*(long *)(lVar4 + 0x30) != 0)) {
        fVar7 = *(float *)(lVar4 + 0x20);
        fStack0000000000000000 =
             fStack0000000000000000 * fStack0000000000000004 * fStack0000000000000010;
        fVar5 = (float)FUN_07c42008(fVar5,*(long *)(lVar4 + 0x30),0);
        cVar1 = *(char *)(unaff_x19 + 0x9c);
        *(float *)(lVar3 + 0x10) =
             fStack000000000000000c * fStack0000000000000000 * -(fVar8 * fVar5);
        if ((cVar1 == '\0') ||
           (((*(char *)(unaff_x19 + 0x458) != '\0' || (DAT_015c5840 <= fStack0000000000000018)) ||
            (DAT_015c5840 <= fStack0000000000000008)))) {
          *(undefined1 *)(unaff_x19 + 0x408) = 0;
        }
        else {
          if ((*(long *)(unaff_x19 + 0x20) == 0) ||
             (lVar4 = *(long *)(unaff_x19 + 0x30), lVar4 == 0)) goto LAB_0697980c;
          fVar5 = *(float *)(*(long *)(unaff_x19 + 0x20) + 0x20) + *(float *)(lVar4 + 0x58);
          fVar8 = (float)*(undefined8 *)(unaff_x19 + 0x268) -
                  (float)*(undefined8 *)(unaff_x19 + 0x284) * fVar5;
          fVar6 = (float)((ulong)*(undefined8 *)(unaff_x19 + 0x268) >> 0x20) -
                  (float)((ulong)*(undefined8 *)(unaff_x19 + 0x284) >> 0x20) * fVar5;
          fVar5 = *(float *)(unaff_x19 + 0x270) - fVar5 * *(float *)(unaff_x19 + 0x28c);
          if (*(char *)(unaff_x19 + 0x408) == '\0') {
            *(float *)(unaff_x19 + 0x414) = fVar5;
            *(undefined1 *)(unaff_x19 + 0x408) = 1;
            *(ulong *)(unaff_x19 + 0x40c) = CONCAT44(fVar6,fVar8);
          }
          else {
            fVar9 = *(float *)(unaff_x19 + 0x3ec) * *(float *)(unaff_x19 + 0x84);
            fVar8 = (*(float *)(unaff_x19 + 0x40c) - fVar8) * fVar9;
            fVar6 = ((float)*(undefined8 *)(unaff_x19 + 0x410) - fVar6) * fVar9;
            fVar9 = ((float)((ulong)*(undefined8 *)(unaff_x19 + 0x410) >> 0x20) - fVar5) * fVar9;
            if (ABS(*(float *)(lVar4 + 0x48)) < 0.5) {
              lVar4 = *(long *)(unaff_x19 + 0x40);
              if (lVar4 == 0) goto LAB_0697980c;
              *(float *)(lVar4 + 0x10) =
                   *(float *)(lVar4 + 0x10) +
                   fVar9 * (float)((ulong)*(undefined8 *)(unaff_x19 + 0x294) >> 0x20) +
                   fVar8 * *(float *)(unaff_x19 + 0x290) +
                   fVar6 * (float)*(undefined8 *)(unaff_x19 + 0x294);
            }
            lVar4 = *(long *)(unaff_x19 + 0x38);
            if (lVar4 == 0) goto LAB_0697980c;
            *(float *)(lVar4 + 0x10) =
                 *(float *)(lVar4 + 0x10) +
                 fVar9 * (float)((ulong)*(undefined8 *)(unaff_x19 + 0x2a0) >> 0x20) +
                 fVar8 * *(float *)(unaff_x19 + 0x29c) +
                 fVar6 * (float)*(undefined8 *)(unaff_x19 + 0x2a0);
          }
        }
        lVar4 = *(long *)(unaff_x19 + 0x40);
        if (lVar4 != 0) {
          fVar8 = *(float *)(lVar4 + 0x10);
          fVar5 = unaff_s9;
          if ((fVar8 <= unaff_s9) && (fVar5 = -unaff_s9, -unaff_s9 <= fVar8)) {
            fVar5 = fVar8;
          }
          lVar3 = *(long *)(unaff_x19 + 0x38);
          *(float *)(lVar4 + 0x10) = fVar5;
          if (lVar3 != 0) {
            fStack0000000000000000 = fStack0000000000000000 * fVar7;
            fVar8 = *(float *)(lVar3 + 0x10);
            fVar5 = fStack0000000000000000;
            if ((fVar8 <= fStack0000000000000000) &&
               (fVar5 = -fStack0000000000000000, -fStack0000000000000000 <= fVar8)) {
              fVar5 = fVar8;
            }
            *(float *)(lVar3 + 0x10) = fVar5;
            fVar8 = *(float *)(unaff_x19 + 0x94);
            fVar5 = *(float *)(lVar3 + 0x18);
            *(float *)(lVar4 + 0x10) = *(float *)(lVar4 + 0x10) * *(float *)(lVar4 + 0x18);
            fVar5 = *(float *)(lVar3 + 0x10) * fVar5;
            *(float *)(lVar3 + 0x10) = fVar5;
            if (0.0 < fVar8) {
              fVar7 = 1.0;
              if (ABS(*(float *)(lVar4 + 0x14)) <= 1.0) {
                fVar7 = ABS(*(float *)(lVar4 + 0x14));
              }
              fVar7 = powf(fVar7,*(float *)(unaff_x19 + 0x98));
              fVar5 = fVar5 * (1.0 - fVar8 * fVar7);
              *(float *)(lVar3 + 0x10) = fVar5;
            }
            fVar8 = *(float *)(lVar4 + 0x10);
            *(ulong *)(unaff_x19 + 0x3c8) =
                 CONCAT44((float)((ulong)*(undefined8 *)(unaff_x19 + 0x29c) >> 0x20) * fVar5 +
                          (float)((ulong)*(undefined8 *)(unaff_x19 + 0x290) >> 0x20) * fVar8,
                          (float)*(undefined8 *)(unaff_x19 + 0x29c) * fVar5 +
                          (float)*(undefined8 *)(unaff_x19 + 0x290) * fVar8);
            *(float *)(unaff_x19 + 0x3d0) =
                 *(float *)(unaff_x19 + 0x2a4) * fVar5 + *(float *)(unaff_x19 + 0x298) * fVar8;
            if (*(char *)(unaff_x19 + 0x458) != '\0') {
              *(undefined1 *)(unaff_x19 + 0x458) = 0;
            }
            return;
          }
        }
      }
    }
  }
LAB_0697980c:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


