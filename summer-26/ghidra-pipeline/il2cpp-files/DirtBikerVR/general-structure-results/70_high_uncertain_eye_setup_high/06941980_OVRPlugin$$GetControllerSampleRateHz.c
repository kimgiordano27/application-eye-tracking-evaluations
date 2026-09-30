/*
FUNCTION_NAME: OVRPlugin$$GetControllerSampleRateHz
ENTRY_POINT: 06941980
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_20;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetControllerSampleRateHz(float param_1,float param_2,float param_3)

{
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  int iVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  long *unaff_x19;
  long unaff_x20;
  int unaff_w21;
  undefined8 *unaff_x23;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  
  do {
    if ((bool)in_ZR || in_NG != in_OV) {
      unaff_s8 = param_2;
    }
    if (unaff_s9 <= param_1 + param_3) {
      unaff_s9 = param_1 + param_3;
    }
    do {
      unaff_w21 = unaff_w21 + 1;
      if ((unaff_x19[2] == 0) || (*(long *)(unaff_x19[2] + 0xe8) == 0)) goto LAB_0694199c;
      iVar1 = FUN_06936294();
      lVar4 = unaff_x19[2];
      if (iVar1 <= unaff_w21) {
        if (lVar4 == 0) goto LAB_0694199c;
        fVar7 = *(float *)(lVar4 + 0x13c) * 20.0;
        fVar6 = 1.0;
        if (fVar7 <= 1.0) {
          fVar6 = fVar7;
        }
        fVar8 = 0.0;
        if (0.0 <= fVar7) {
          fVar8 = fVar6;
        }
        fVar6 = *(float *)((long)unaff_x19 + 0x3c) +
                (unaff_s8 - *(float *)((long)unaff_x19 + 0x3c)) * fVar8;
        (**(code **)(*unaff_x19 + 0x318))(fVar6);
        *(float *)((long)unaff_x19 + 0x3c) = fVar6;
        if (unaff_x19[2] == 0) goto LAB_0694199c;
        fVar8 = *(float *)(unaff_x19[2] + 0x13c) * 20.0;
        fVar7 = 1.0;
        if (fVar8 <= 1.0) {
          fVar7 = fVar8;
        }
        fVar9 = 0.0;
        if (0.0 <= fVar8) {
          fVar9 = fVar7;
        }
        fVar7 = *(float *)(unaff_x19 + 7) + (unaff_s9 - *(float *)(unaff_x19 + 7)) * fVar9;
        (**(code **)(*unaff_x19 + 0x308))(fVar7);
        *(float *)(unaff_x19 + 7) = fVar7;
        if (fVar6 < DAT_015c5994) {
          if (unaff_x19[6] == 0) goto LAB_0694199c;
          uVar3 = FUN_07c35ac4(unaff_x19[6],0);
          if ((uVar3 & 1) != 0) {
            puVar5 = (undefined8 *)(*unaff_x19 + 0x328);
            goto LAB_06941a70;
          }
        }
        if (unaff_x19[6] != 0) {
          uVar3 = FUN_07c35ac4(unaff_x19[6],0);
          if ((uVar3 & 1) != 0) {
            return;
          }
          puVar5 = (undefined8 *)(*unaff_x19 + 0x2e8);
LAB_06941a70:
                    /* WARNING: Could not recover jumptable at 0x06941a94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)*puVar5)();
          return;
        }
        goto LAB_0694199c;
      }
      if ((((lVar4 == 0) || (*(long *)(lVar4 + 0xe8) == 0)) ||
          (lVar4 = *(long *)(*(long *)(lVar4 + 0xe8) + 0x58), lVar4 == 0)) ||
         ((lVar4 = FUN_04de82e0(lVar4,unaff_w21,*unaff_x23), lVar4 == 0 ||
          (plVar2 = *(long **)(lVar4 + 0x80), plVar2 == (long *)0x0)))) goto LAB_0694199c;
      uVar3 = (**(code **)(*plVar2 + 0x2e8))(plVar2,*(undefined8 *)(*plVar2 + 0x2f0));
    } while ((uVar3 & 1) == 0);
    if (*(char *)(unaff_x20 + 0x80) == '\0') {
      lVar4 = unaff_x19[2];
      if (lVar4 == 0) goto LAB_0694199c;
LAB_06941920:
      fVar7 = 1.0;
    }
    else {
      plVar2 = *(long **)(lVar4 + 0x80);
      if (plVar2 == (long *)0x0) {
LAB_0694199c:
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      fVar6 = (float)(**(code **)(*plVar2 + 0x528))(plVar2,*(undefined8 *)(*plVar2 + 0x530));
      lVar4 = unaff_x19[2];
      if (lVar4 == 0) goto LAB_0694199c;
      fVar6 = fVar6 / *(float *)(lVar4 + 0x10c);
      fVar7 = 0.0;
      if ((0.0 <= fVar6) && (fVar7 = fVar6, unaff_s11 < fVar6)) goto LAB_06941920;
    }
    fVar6 = (float)FUN_06926524(lVar4,0);
    fVar6 = fVar6 * unaff_s12;
    param_1 = 0.0;
    if ((0.0 <= fVar6) && (param_1 = fVar6, unaff_s11 < fVar6)) {
      param_1 = 1.0;
    }
    fVar6 = param_1 * fVar7 * *(float *)(unaff_x20 + 0x94);
    param_2 = 0.0;
    if ((0.0 <= fVar6) && (param_2 = fVar6, unaff_s11 < fVar6)) {
      param_2 = 1.0;
    }
    in_OV = NAN(unaff_s8) || NAN(param_2);
    in_ZR = unaff_s8 == param_2;
    in_NG = unaff_s8 < param_2;
    param_3 = *(float *)(unaff_x20 + 0x90) * unaff_s10;
  } while( true );
}


