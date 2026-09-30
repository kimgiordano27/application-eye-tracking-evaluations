/*
FUNCTION_NAME: OVRPlugin$$OverrideExternalCameraFov
ENTRY_POINT: 06943c9c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_15;functionality_eye_api_context_without_clear_sink_hits_3
*/


void OVRPlugin__OverrideExternalCameraFov(void)

{
  undefined *puVar1;
  bool bVar2;
  bool in_ZR;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  byte bVar7;
  char cVar8;
  code *pcVar9;
  long *unaff_x19;
  long *unaff_x20;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float unaff_s8;
  float fVar14;
  float fVar15;
  float fVar16;
  
  puVar1 = PTR_DAT_084b6348;
  if (in_ZR) {
    if (*(int *)(*unaff_x20 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    uVar3 = *(undefined8 *)puVar1;
    goto LAB_06943cbc;
  }
  *(undefined4 *)(unaff_x19 + 0x23) = *(undefined4 *)((long)unaff_x19 + 0x6c);
  *(char *)((long)unaff_x19 + 0x11c) = (char)unaff_x19[0x27];
  if ((unaff_x19[2] == 0) || (lVar4 = *(long *)(unaff_x19[2] + 0xd8), lVar4 == 0))
  goto LAB_0694402c;
  uVar10 = FUN_06960778(lVar4,0);
  *(undefined4 *)(unaff_x19 + 0x22) = uVar10;
  *(undefined4 *)((long)unaff_x19 + 0x134) = uVar10;
  uVar10 = FUN_0692a978(*(undefined4 *)((long)unaff_x19 + 0x94),0);
  *(undefined4 *)(unaff_x19 + 0x1f) = uVar10;
  uVar10 = FUN_0692a978((int)unaff_x19[0x13],0);
  *(undefined4 *)((long)unaff_x19 + 0xfc) = uVar10;
  uVar10 = FUN_0692a978((int)unaff_x19[0x1d],0);
  *(undefined4 *)(unaff_x19 + 0x20) = uVar10;
  *(int *)((long)unaff_x19 + 0x114) = (int)unaff_x19[8];
  uVar5 = OVRPlugin__ResetDefaultExternalCamera();
  bVar7 = 0;
  if (((uVar5 & 1) != 0) && (*(char *)((long)unaff_x19 + 0xc1) != '\0')) {
    if (1.0 <= *(float *)((long)unaff_x19 + 0x6c)) {
      bVar7 = 0;
    }
    else {
      if ((int)unaff_x19[0x10] == 0) {
        bVar2 = ABS(*(float *)(unaff_x19 + 8)) < *(float *)((long)unaff_x19 + 0xfc);
      }
      else {
        bVar2 = false;
      }
      bVar7 = bVar2 ^ 1;
    }
  }
  *(byte *)(unaff_x19 + 0x27) = bVar7;
  if ((*(char *)((long)unaff_x19 + 0x11c) == '\0') || (bVar7 != 0)) {
    if ((unaff_x19[2] == 0) || (lVar4 = *(long *)(unaff_x19[2] + 0xd8), lVar4 == 0))
    goto LAB_0694402c;
    uVar5 = FUN_069607e8(lVar4,0);
    if ((uVar5 & 1) != 0) {
      FUN_06943654();
      if ((unaff_x19[2] == 0) || (lVar4 = *(long *)(unaff_x19[2] + 0xd8), lVar4 == 0))
      goto LAB_0694402c;
      FUN_069607f0(lVar4,0,0);
    }
  }
  else {
    FUN_06943108();
  }
  cVar8 = (char)unaff_x19[0x27];
  if ((char)unaff_x19[0xe] == '\0') {
LAB_06943e4c:
    if (cVar8 == '\0') {
      uVar10 = 0;
    }
    else {
LAB_06943e50:
      uVar10 = FUN_069440e8();
    }
  }
  else {
    if (cVar8 != '\0') goto LAB_06943e50;
    uVar10 = 0;
    if ((DAT_015c5928 < *(float *)(unaff_x19 + 0x22)) &&
       (*(float *)((long)unaff_x19 + 0x6c) < DAT_015c598c)) {
      FUN_06942fd0();
      cVar8 = (char)unaff_x19[0x27];
      goto LAB_06943e4c;
    }
  }
  *(undefined4 *)((long)unaff_x19 + 0x104) = uVar10;
  if (unaff_x19[0x11] != 0) {
    FUN_069441b8();
    if ((int)unaff_x19[0xd] == 0) {
      return;
    }
    plVar6 = (long *)unaff_x19[0xc];
    if (plVar6 != (long *)0x0) {
      fVar11 = (float)(**(code **)(*plVar6 + 0x248))(plVar6,*(undefined8 *)(*plVar6 + 0x250));
      fVar15 = fVar11 + *(float *)(unaff_x19 + 6);
      if (fVar15 == 0.0) {
        if (*(int *)(*unaff_x20 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        uVar3 = *(undefined8 *)PTR_DAT_084b6340;
LAB_06943cbc:
        FUN_07c4fb40(uVar3,0);
        return;
      }
      fVar12 = (float)(**(code **)(*unaff_x19 + 0x238))((int)unaff_x19[8],unaff_s8);
      lVar4 = unaff_x19[0xf];
      if (lVar4 != 0) {
        fVar14 = *(float *)(unaff_x19 + 8);
        fVar16 = *(float *)(unaff_x19 + 6);
        fVar13 = (float)(**(code **)(lVar4 + 0x18))
                                  (fVar14,unaff_s8,*(undefined8 *)(lVar4 + 0x40),
                                   *(undefined8 *)(lVar4 + 0x28));
        fVar12 = ((((fVar11 / fVar15) * fVar12 + fVar14 * (fVar16 / fVar15)) -
                  *(float *)(unaff_x19 + 8)) * *(float *)(unaff_x19 + 6)) / unaff_s8;
        pcVar9 = *(code **)(*unaff_x19 + 600);
        fVar11 = fVar13 - fVar12;
        *(float *)(unaff_x19 + 7) = fVar11;
        *(float *)(unaff_x19 + 0x12) = (fVar13 * *(float *)(unaff_x19 + 8)) / 1000.0;
        fVar11 = (float)(*pcVar9)(fVar11,0,unaff_s8);
        lVar4 = unaff_x19[0x11];
        fVar15 = *(float *)(unaff_x19 + 8) + ((fVar12 + fVar13 + fVar11) / fVar15) * unaff_s8;
        fVar11 = *(float *)(unaff_x19 + 0x20) * DAT_015c5d4c;
        if (fVar15 <= fVar11) {
          fVar11 = fVar15;
        }
        fVar13 = 1.0;
        fVar12 = 0.0;
        if (0.0 <= fVar15) {
          fVar12 = fVar11;
        }
        fVar15 = fVar12 / *(float *)(unaff_x19 + 0x20);
        *(float *)(unaff_x19 + 8) = fVar12;
        fVar11 = 1.0;
        if (fVar15 <= 1.0) {
          fVar11 = fVar15;
        }
        fVar12 = 0.0;
        if (0.0 <= fVar15) {
          fVar12 = fVar11;
        }
        *(float *)(unaff_x19 + 0x26) = fVar12;
        if (lVar4 != 0) {
          if (*(char *)(lVar4 + 0x10) != '\0') {
            fVar13 = *(float *)(lVar4 + 0x20);
          }
          fVar15 = *(float *)(unaff_x19 + 0x12) / (*(float *)((long)unaff_x19 + 0x9c) * fVar13);
          fVar11 = 1.0;
          if (fVar15 <= 1.0) {
            fVar11 = fVar15;
          }
          fVar12 = 0.0;
          if (0.0 <= fVar15) {
            fVar12 = fVar11;
          }
          *(float *)((long)unaff_x19 + 0x13c) = fVar12;
          return;
        }
      }
    }
  }
LAB_0694402c:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


