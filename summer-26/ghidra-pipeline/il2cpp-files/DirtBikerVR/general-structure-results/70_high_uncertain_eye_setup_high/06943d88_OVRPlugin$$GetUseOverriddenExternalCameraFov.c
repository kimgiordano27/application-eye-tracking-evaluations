/*
FUNCTION_NAME: OVRPlugin$$GetUseOverriddenExternalCameraFov
ENTRY_POINT: 06943d88
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_13;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetUseOverriddenExternalCameraFov(void)

{
  ulong uVar1;
  long *plVar2;
  char cVar3;
  long lVar4;
  code *pcVar5;
  long *unaff_x19;
  long *unaff_x20;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float unaff_s8;
  float fVar10;
  float fVar11;
  float fVar12;
  
  *(undefined1 *)(unaff_x19 + 0x27) = 0;
  if (*(char *)((long)unaff_x19 + 0x11c) == '\0') {
    if ((unaff_x19[2] == 0) || (lVar4 = *(long *)(unaff_x19[2] + 0xd8), lVar4 == 0))
    goto LAB_0694402c;
    uVar1 = FUN_069607e8(lVar4,0);
    if ((uVar1 & 1) != 0) {
      FUN_06943654();
      if ((unaff_x19[2] == 0) || (lVar4 = *(long *)(unaff_x19[2] + 0xd8), lVar4 == 0))
      goto LAB_0694402c;
      FUN_069607f0(lVar4,0,0);
    }
  }
  else {
    FUN_06943108();
  }
  cVar3 = (char)unaff_x19[0x27];
  if ((char)unaff_x19[0xe] == '\0') {
LAB_06943e4c:
    if (cVar3 == '\0') {
      uVar6 = 0;
    }
    else {
LAB_06943e50:
      uVar6 = FUN_069440e8();
    }
  }
  else {
    if (cVar3 != '\0') goto LAB_06943e50;
    uVar6 = 0;
    if ((DAT_015c5928 < *(float *)(unaff_x19 + 0x22)) &&
       (*(float *)((long)unaff_x19 + 0x6c) < DAT_015c598c)) {
      FUN_06942fd0();
      cVar3 = (char)unaff_x19[0x27];
      goto LAB_06943e4c;
    }
  }
  *(undefined4 *)((long)unaff_x19 + 0x104) = uVar6;
  if (unaff_x19[0x11] != 0) {
    FUN_069441b8();
    if ((int)unaff_x19[0xd] == 0) {
      return;
    }
    plVar2 = (long *)unaff_x19[0xc];
    if (plVar2 != (long *)0x0) {
      fVar7 = (float)(**(code **)(*plVar2 + 0x248))(plVar2,*(undefined8 *)(*plVar2 + 0x250));
      fVar11 = fVar7 + *(float *)(unaff_x19 + 6);
      if (fVar11 == 0.0) {
        if (*(int *)(*unaff_x20 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        FUN_07c4fb40(*(undefined8 *)PTR_DAT_084b6340,0);
        return;
      }
      fVar8 = (float)(**(code **)(*unaff_x19 + 0x238))((int)unaff_x19[8],unaff_s8);
      lVar4 = unaff_x19[0xf];
      if (lVar4 != 0) {
        fVar10 = *(float *)(unaff_x19 + 8);
        fVar12 = *(float *)(unaff_x19 + 6);
        fVar9 = (float)(**(code **)(lVar4 + 0x18))
                                 (fVar10,unaff_s8,*(undefined8 *)(lVar4 + 0x40),
                                  *(undefined8 *)(lVar4 + 0x28));
        fVar8 = ((((fVar7 / fVar11) * fVar8 + fVar10 * (fVar12 / fVar11)) -
                 *(float *)(unaff_x19 + 8)) * *(float *)(unaff_x19 + 6)) / unaff_s8;
        pcVar5 = *(code **)(*unaff_x19 + 600);
        fVar7 = fVar9 - fVar8;
        *(float *)(unaff_x19 + 7) = fVar7;
        *(float *)(unaff_x19 + 0x12) = (fVar9 * *(float *)(unaff_x19 + 8)) / 1000.0;
        fVar7 = (float)(*pcVar5)(fVar7,0,unaff_s8);
        lVar4 = unaff_x19[0x11];
        fVar11 = *(float *)(unaff_x19 + 8) + ((fVar8 + fVar9 + fVar7) / fVar11) * unaff_s8;
        fVar7 = *(float *)(unaff_x19 + 0x20) * DAT_015c5d4c;
        if (fVar11 <= fVar7) {
          fVar7 = fVar11;
        }
        fVar9 = 1.0;
        fVar8 = 0.0;
        if (0.0 <= fVar11) {
          fVar8 = fVar7;
        }
        fVar11 = fVar8 / *(float *)(unaff_x19 + 0x20);
        *(float *)(unaff_x19 + 8) = fVar8;
        fVar7 = 1.0;
        if (fVar11 <= 1.0) {
          fVar7 = fVar11;
        }
        fVar8 = 0.0;
        if (0.0 <= fVar11) {
          fVar8 = fVar7;
        }
        *(float *)(unaff_x19 + 0x26) = fVar8;
        if (lVar4 != 0) {
          if (*(char *)(lVar4 + 0x10) != '\0') {
            fVar9 = *(float *)(lVar4 + 0x20);
          }
          fVar11 = *(float *)(unaff_x19 + 0x12) / (*(float *)((long)unaff_x19 + 0x9c) * fVar9);
          fVar7 = 1.0;
          if (fVar11 <= 1.0) {
            fVar7 = fVar11;
          }
          fVar8 = 0.0;
          if (0.0 <= fVar11) {
            fVar8 = fVar7;
          }
          *(float *)((long)unaff_x19 + 0x13c) = fVar8;
          return;
        }
      }
    }
  }
LAB_0694402c:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


