/*
FUNCTION_NAME: thunk_FUN_058e218c
ENTRY_POINT: 058e2720
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_19;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void thunk_FUN_058e218c(undefined1 param_1 [16],float param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  long lVar5;
  float *pfVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  double dVar14;
  float fVar15;
  ulong uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  
  if ((DAT_06b80b68 & 1) == 0) {
    FUN_02d6084c(PTR_DAT_06786768);
    FUN_02d6084c(OVRPlugin_OVRP_1_34_0_TypeInfo);
    FUN_02d6084c(UnityEngine_InputSystem_HID_HID_Simulation_TypeInfo);
    FUN_02d6084c(PTR_DAT_0675e1b8);
    DAT_06b80b68 = 1;
  }
  if (*(long *)(param_3 + 0xf0) == 0) {
    return;
  }
  lVar5 = FUN_0582a6ec(param_3 + 0x40,0);
  puVar2 = PTR_DAT_06786768;
  if (lVar5 == 0) {
    return;
  }
  fVar10 = (float)FUN_0344c37c(lVar5,*(undefined8 *)PTR_DAT_06786768);
  if (DAT_06b72814 == '\0') {
    FUN_02d6084c(PTR_DAT_0675ebd8);
    DAT_06b72814 = '\x01';
  }
  puVar1 = PTR_DAT_0675ebd8;
  fVar18 = DAT_012084b4;
  fVar17 = ABS(fVar10) * DAT_012084b4;
  fVar11 = **(float **)(*(long *)PTR_DAT_0675ebd8 + 0xb8) * 8.0;
  if (fVar17 <= fVar11) {
    fVar17 = fVar11;
  }
  if (fVar17 <= ABS(fVar10)) {
LAB_058e229c:
    dVar14 = (double)FUN_058fd9e8(0);
    fVar17 = *(float *)(param_3 + 0x118);
    if (DAT_06b72814 == '\0') {
      FUN_02d6084c(PTR_DAT_0675ebd8);
      DAT_06b72814 = '\x01';
    }
    fVar11 = 8.0;
    fVar15 = ABS(fVar17) * fVar18;
    fVar12 = **(float **)(*(long *)puVar1 + 0xb8) * 8.0;
    if (fVar15 <= fVar12) {
      fVar15 = fVar12;
    }
    if (ABS(fVar17) < fVar15) {
      fVar18 = ABS(*(float *)(param_3 + 0x11c)) * fVar18;
      if (fVar18 <= fVar12) {
        fVar18 = fVar12;
      }
      if (ABS(*(float *)(param_3 + 0x11c)) < fVar18) {
        *(double *)(param_3 + 0x110) = dVar14;
      }
    }
    if ((*(long *)(param_3 + 0xf0) == 0) ||
       (lVar5 = *(long *)(*(long *)(param_3 + 0xf0) + 0x188), lVar5 == 0)) goto LAB_058e2524;
    fVar17 = fVar10 * *(float *)(param_3 + 0x38);
    fVar15 = param_2 * *(float *)(param_3 + 0x38);
    uVar8 = (ulong)(uint)fVar15;
    fVar18 = (float)(dVar14 - *(double *)(param_3 + 0x110));
    fVar20 = fVar17 * fVar18;
    fVar15 = fVar15 * fVar18;
    pfVar6 = (float *)FUN_037b9bf0(lVar5,*(undefined8 *)OVRPlugin_OVRP_1_34_0_TypeInfo);
    puVar1 = PTR_DAT_0675e1b8;
    fVar18 = *pfVar6;
    fVar12 = pfVar6[1];
    uVar9 = *(undefined8 *)(param_3 + 0xe8);
    if (*(int *)(*(long *)PTR_DAT_0675e1b8 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    fVar18 = fVar20 + fVar18;
    fVar12 = fVar15 + fVar12;
    uVar7 = FUN_0606a004(uVar9,0,0);
    uVar16 = (ulong)(uint)fVar12;
    if ((uVar7 & 1) != 0) {
      if (*(long *)(param_3 + 0xe8) == 0) goto LAB_058e2524;
      fVar13 = (float)FUN_0633de1c(*(long *)(param_3 + 0xe8),0);
      fVar19 = fVar17 + fVar13;
      if (fVar18 <= fVar17 + fVar13) {
        fVar19 = fVar18;
      }
      bVar4 = fVar18 < fVar13;
      fVar18 = fVar19;
      if (bVar4) {
        fVar18 = fVar13;
      }
      uVar16 = uVar8;
      if ((float)uVar8 <= fVar12) {
        fVar11 = fVar11 + (float)uVar8;
        if (fVar12 <= fVar11) {
          fVar11 = fVar12;
        }
        uVar16 = (ulong)(uint)fVar11;
      }
    }
    puVar3 = UnityEngine_InputSystem_HID_HID_Simulation_TypeInfo;
    if (*(long *)(param_3 + 0xf0) == 0) goto LAB_058e2524;
    FUN_03460b70(fVar18,uVar16,*(undefined8 *)(*(long *)(param_3 + 0xf0) + 0x188),0,0,
                 *(undefined8 *)UnityEngine_InputSystem_HID_HID_Simulation_TypeInfo);
    if (*(long *)(param_3 + 0xf0) == 0) goto LAB_058e2524;
    FUN_03460b70(fVar20,fVar15,*(undefined8 *)(*(long *)(param_3 + 0xf0) + 400),0,0,
                 *(undefined8 *)puVar3);
    uVar9 = *(undefined8 *)(param_3 + 0x30);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar8 = FUN_0606a004(uVar9,0,0);
    if (((uVar8 & 1) != 0) &&
       ((*(int *)(param_3 + 0x20) == 0 ||
        ((*(int *)(param_3 + 0x20) == 1 && (*(long *)(param_3 + 0xf8) == 0)))))) {
      if (*(long *)(param_3 + 0x30) == 0) goto LAB_058e2524;
      uVar8 = uVar16;
      FUN_06077e74(fVar18,uVar16,*(long *)(param_3 + 0x30),0);
      fVar15 = (float)uVar8;
    }
    *(float *)(param_3 + 0x118) = fVar10;
    *(float *)(param_3 + 0x11c) = param_2;
    *(double *)(param_3 + 0x110) = dVar14;
    if (*(long *)(param_3 + 0xf8) != 0) {
      FUN_05868748(fVar18,uVar16,*(long *)(param_3 + 0xf8),0);
      fVar15 = (float)uVar16;
    }
  }
  else {
    fVar15 = ABS(param_2);
    fVar17 = fVar15 * DAT_012084b4;
    if (fVar15 * DAT_012084b4 <= fVar11) {
      fVar17 = fVar11;
    }
    if (fVar17 <= fVar15) goto LAB_058e229c;
    *(undefined8 *)(param_3 + 0x110) = 0;
    *(undefined8 *)(param_3 + 0x118) = 0;
  }
  lVar5 = FUN_0582a6ec(param_3 + 0xd0,0);
  if (lVar5 == 0) {
    return;
  }
  fVar10 = (float)FUN_0344c37c(lVar5,*(undefined8 *)puVar2);
  if (*(long *)(param_3 + 0xf0) != 0) {
    FUN_03460b70(fVar10 * *(float *)(param_3 + 0x3c),fVar15 * *(float *)(param_3 + 0x3c),
                 *(undefined8 *)(*(long *)(param_3 + 0xf0) + 0x1b8),0,0,
                 *(undefined8 *)UnityEngine_InputSystem_HID_HID_Simulation_TypeInfo);
    return;
  }
LAB_058e2524:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


