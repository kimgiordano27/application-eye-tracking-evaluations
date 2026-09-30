/*
FUNCTION_NAME: OVRPlugin$$SetControllerHapticsPcm
ENTRY_POINT: 06941890
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__SetControllerHapticsPcm(long param_1)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
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
    if ((((param_1 == 0) || (*(long *)(param_1 + 0x58) == 0)) ||
        (lVar2 = FUN_04de82e0(*(long *)(param_1 + 0x58),unaff_w21,*unaff_x23), lVar2 == 0)) ||
       (plVar3 = *(long **)(lVar2 + 0x80), plVar3 == (long *)0x0)) goto LAB_0694199c;
    uVar4 = (**(code **)(*plVar3 + 0x2e8))(plVar3,*(undefined8 *)(*plVar3 + 0x2f0));
    if ((uVar4 & 1) != 0) {
      if (*(char *)(unaff_x20 + 0x80) == '\0') {
        lVar2 = unaff_x19[2];
        if (lVar2 == 0) goto LAB_0694199c;
LAB_06941920:
        fVar8 = 1.0;
      }
      else {
        plVar3 = *(long **)(lVar2 + 0x80);
        if (plVar3 == (long *)0x0) goto LAB_0694199c;
        fVar6 = (float)(**(code **)(*plVar3 + 0x528))(plVar3,*(undefined8 *)(*plVar3 + 0x530));
        lVar2 = unaff_x19[2];
        if (lVar2 == 0) goto LAB_0694199c;
        fVar6 = fVar6 / *(float *)(lVar2 + 0x10c);
        fVar8 = 0.0;
        if ((0.0 <= fVar6) && (fVar8 = fVar6, unaff_s11 < fVar6)) goto LAB_06941920;
      }
      fVar7 = (float)FUN_06926524(lVar2,0);
      fVar7 = fVar7 * unaff_s12;
      fVar6 = 0.0;
      if ((0.0 <= fVar7) && (fVar6 = fVar7, unaff_s11 < fVar7)) {
        fVar6 = 1.0;
      }
      fVar7 = fVar6 * fVar8 * *(float *)(unaff_x20 + 0x94);
      fVar8 = 0.0;
      if ((0.0 <= fVar7) && (fVar8 = fVar7, unaff_s11 < fVar7)) {
        fVar8 = 1.0;
      }
      if (unaff_s8 <= fVar8) {
        unaff_s8 = fVar8;
      }
      fVar6 = fVar6 + *(float *)(unaff_x20 + 0x90) * unaff_s10;
      if (unaff_s9 <= fVar6) {
        unaff_s9 = fVar6;
      }
    }
    unaff_w21 = unaff_w21 + 1;
    if ((unaff_x19[2] == 0) || (*(long *)(unaff_x19[2] + 0xe8) == 0)) goto LAB_0694199c;
    iVar1 = FUN_06936294();
    lVar2 = unaff_x19[2];
    if (iVar1 <= unaff_w21) {
      if (lVar2 == 0) goto LAB_0694199c;
      fVar8 = *(float *)(lVar2 + 0x13c) * 20.0;
      fVar6 = 1.0;
      if (fVar8 <= 1.0) {
        fVar6 = fVar8;
      }
      fVar7 = 0.0;
      if (0.0 <= fVar8) {
        fVar7 = fVar6;
      }
      fVar6 = *(float *)((long)unaff_x19 + 0x3c) +
              (unaff_s8 - *(float *)((long)unaff_x19 + 0x3c)) * fVar7;
      (**(code **)(*unaff_x19 + 0x318))(fVar6);
      *(float *)((long)unaff_x19 + 0x3c) = fVar6;
      if (unaff_x19[2] == 0) goto LAB_0694199c;
      fVar7 = *(float *)(unaff_x19[2] + 0x13c) * 20.0;
      fVar8 = 1.0;
      if (fVar7 <= 1.0) {
        fVar8 = fVar7;
      }
      fVar9 = 0.0;
      if (0.0 <= fVar7) {
        fVar9 = fVar8;
      }
      fVar8 = *(float *)(unaff_x19 + 7) + (unaff_s9 - *(float *)(unaff_x19 + 7)) * fVar9;
      (**(code **)(*unaff_x19 + 0x308))(fVar8);
      *(float *)(unaff_x19 + 7) = fVar8;
      if (fVar6 < DAT_015c5994) {
        if (unaff_x19[6] == 0) goto LAB_0694199c;
        uVar4 = FUN_07c35ac4(unaff_x19[6],0);
        if ((uVar4 & 1) != 0) {
          puVar5 = (undefined8 *)(*unaff_x19 + 0x328);
          goto LAB_06941a70;
        }
      }
      if (unaff_x19[6] != 0) {
        uVar4 = FUN_07c35ac4(unaff_x19[6],0);
        if ((uVar4 & 1) != 0) {
          return;
        }
        puVar5 = (undefined8 *)(*unaff_x19 + 0x2e8);
LAB_06941a70:
                    /* WARNING: Could not recover jumptable at 0x06941a94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)*puVar5)();
        return;
      }
LAB_0694199c:
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    if (lVar2 == 0) goto LAB_0694199c;
    param_1 = *(long *)(lVar2 + 0xe8);
  } while( true );
}


