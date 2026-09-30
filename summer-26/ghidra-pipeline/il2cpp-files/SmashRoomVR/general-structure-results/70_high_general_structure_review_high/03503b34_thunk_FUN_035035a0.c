/*
FUNCTION_NAME: thunk_FUN_035035a0
ENTRY_POINT: 03503b34
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_21;telemetry_or_network_hits_3
*/


void thunk_FUN_035035a0(undefined1 param_1 [16],float param_2,long param_3)

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
  
  if ((DAT_03ff6d95 & 1) == 0) {
    thunk_FUN_01ad9084(
                      Method_UnityEngine_UIElements_VisualElementUtils_<>c_<AssignInspectorStyleIfNecessary>b__5_0__
                      );
    thunk_FUN_01ad9084(PTR_DAT_03d958d8);
    thunk_FUN_01ad9084(PTR_DAT_03d939e8);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03ff6d95 = 1;
  }
  if (*(long *)(param_3 + 0xf0) == 0) {
    return;
  }
  lVar5 = FUN_034523e4(param_3 + 0x40,0);
  puVar2 = 
  Method_UnityEngine_UIElements_VisualElementUtils_<>c_<AssignInspectorStyleIfNecessary>b__5_0__;
  if (lVar5 == 0) {
    return;
  }
  fVar10 = (float)FUN_01ee146c(lVar5,*(undefined8 *)
                                      Method_UnityEngine_UIElements_VisualElementUtils_<>c_<AssignInspectorStyleIfNecessary>b__5_0__
                              );
  if (DAT_03fed263 == '\0') {
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_6__);
    DAT_03fed263 = '\x01';
  }
  puVar1 = Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_6__;
  fVar18 = DAT_00b55490;
  fVar17 = ABS(fVar10) * DAT_00b55490;
  fVar11 = **(float **)
             (*(long *)Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_6__ + 0xb8) *
           8.0;
  if (fVar17 <= fVar11) {
    fVar17 = fVar11;
  }
  if (fVar17 <= ABS(fVar10)) {
LAB_035036b0:
    dVar14 = (double)FUN_0351233c(0);
    fVar17 = *(float *)(param_3 + 0x118);
    if (DAT_03fed263 == '\0') {
      thunk_FUN_01ad9084(Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_6__);
      DAT_03fed263 = '\x01';
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
       (lVar5 = *(long *)(*(long *)(param_3 + 0xf0) + 0x170), lVar5 == 0)) goto LAB_03503938;
    fVar17 = fVar10 * *(float *)(param_3 + 0x38);
    fVar15 = param_2 * *(float *)(param_3 + 0x38);
    uVar8 = (ulong)(uint)fVar15;
    fVar18 = (float)(dVar14 - *(double *)(param_3 + 0x110));
    fVar20 = fVar17 * fVar18;
    fVar15 = fVar15 * fVar18;
    pfVar6 = (float *)FUN_029a4fd8(lVar5,*(undefined8 *)PTR_DAT_03d958d8);
    puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
    fVar18 = *pfVar6;
    fVar12 = pfVar6[1];
    uVar9 = *(undefined8 *)(param_3 + 0xe8);
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    fVar18 = fVar20 + fVar18;
    fVar12 = fVar15 + fVar12;
    uVar7 = FUN_0391f968(uVar9,0,0);
    uVar16 = (ulong)(uint)fVar12;
    if ((uVar7 & 1) != 0) {
      if (*(long *)(param_3 + 0xe8) == 0) goto LAB_03503938;
      fVar13 = (float)FUN_03afa748(*(long *)(param_3 + 0xe8),0);
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
    puVar3 = PTR_DAT_03d939e8;
    if (*(long *)(param_3 + 0xf0) == 0) goto LAB_03503938;
    FUN_01ef6300(fVar18,uVar16,*(undefined8 *)(*(long *)(param_3 + 0xf0) + 0x170),0,0,
                 *(undefined8 *)PTR_DAT_03d939e8);
    if (*(long *)(param_3 + 0xf0) == 0) goto LAB_03503938;
    FUN_01ef6300(fVar20,fVar15,*(undefined8 *)(*(long *)(param_3 + 0xf0) + 0x178),0,0,
                 *(undefined8 *)puVar3);
    uVar9 = *(undefined8 *)(param_3 + 0x30);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar8 = FUN_0391f968(uVar9,0,0);
    if (((uVar8 & 1) != 0) &&
       ((*(int *)(param_3 + 0x20) == 0 ||
        ((*(int *)(param_3 + 0x20) == 1 && (*(long *)(param_3 + 0xf8) == 0)))))) {
      if (*(long *)(param_3 + 0x30) == 0) goto LAB_03503938;
      uVar8 = uVar16;
      FUN_03927f8c(fVar18,uVar16,*(long *)(param_3 + 0x30),0);
      fVar15 = (float)uVar8;
    }
    *(float *)(param_3 + 0x118) = fVar10;
    *(float *)(param_3 + 0x11c) = param_2;
    *(double *)(param_3 + 0x110) = dVar14;
    if (*(long *)(param_3 + 0xf8) != 0) {
      FUN_0348e43c(fVar18,uVar16,*(long *)(param_3 + 0xf8),0);
      fVar15 = (float)uVar16;
    }
  }
  else {
    fVar15 = ABS(param_2);
    fVar17 = fVar15 * DAT_00b55490;
    if (fVar15 * DAT_00b55490 <= fVar11) {
      fVar17 = fVar11;
    }
    if (fVar17 <= fVar15) goto LAB_035036b0;
    *(undefined8 *)(param_3 + 0x110) = 0;
    *(undefined8 *)(param_3 + 0x118) = 0;
  }
  lVar5 = FUN_034523e4(param_3 + 0xd0,0);
  if (lVar5 == 0) {
    return;
  }
  fVar10 = (float)FUN_01ee146c(lVar5,*(undefined8 *)puVar2);
  if (*(long *)(param_3 + 0xf0) != 0) {
    FUN_01ef6300(fVar10 * *(float *)(param_3 + 0x3c),fVar15 * *(float *)(param_3 + 0x3c),
                 *(undefined8 *)(*(long *)(param_3 + 0xf0) + 0x1a0),0,0,
                 *(undefined8 *)PTR_DAT_03d939e8);
    return;
  }
LAB_03503938:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


