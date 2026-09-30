/*
FUNCTION_NAME: OVRPlugin$$CreateSpaceUser
ENTRY_POINT: 051c859c
PROGRAM: hellodot-libil2cpp.so
SCORE: 84
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__CreateSpaceUser(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  float *pfVar8;
  int *piVar9;
  long unaff_x19;
  long *unaff_x20;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined8 uVar17;
  float fVar18;
  
  puVar1 = PTR_DAT_06604ba0;
  lVar6 = *unaff_x20;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_065d65c0) {
        puVar4 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
        goto LAB_051c85f8;
      }
      uVar7 = uVar7 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar7 != 0);
  }
  puVar4 = (undefined8 *)FUN_02ce0a7c();
LAB_051c85f8:
  iVar3 = (*(code *)*puVar4)();
  lVar6 = *(long *)puVar1;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_02cd038c(lVar6);
    lVar6 = *(long *)puVar1;
  }
  puVar2 = PTR_DAT_06608ea8;
  lVar6 = *(long *)(lVar6 + 0xb8);
  if (iVar3 == 0) {
    lVar5 = *(long *)PTR_DAT_06608ea8;
    uVar17 = *(undefined8 *)(lVar6 + 0x54);
    fVar18 = *(float *)(lVar6 + 0x5c);
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
      lVar5 = *(long *)puVar2;
      lVar6 = *(long *)(*(long *)puVar1 + 0xb8);
    }
    pfVar8 = *(float **)(lVar5 + 0xb8);
    uVar13 = *(undefined8 *)(lVar6 + 0x6c);
    fVar12 = *pfVar8;
    fVar14 = pfVar8[1];
    fVar16 = pfVar8[2];
    fVar10 = (float)*(undefined8 *)(lVar6 + 0x84) * fVar14;
    fVar11 = (float)((ulong)*(undefined8 *)(lVar6 + 0x84) >> 0x20) * fVar14;
    fVar14 = *(float *)(lVar6 + 0x8c) * fVar14;
    fVar15 = *(float *)(lVar6 + 0x74);
  }
  else {
    lVar5 = *(long *)PTR_DAT_06608ea8;
    uVar17 = *(undefined8 *)(lVar6 + 0xc);
    fVar18 = *(float *)(lVar6 + 0x14);
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
      lVar5 = *(long *)puVar2;
      lVar6 = *(long *)(*(long *)puVar1 + 0xb8);
    }
    pfVar8 = *(float **)(lVar5 + 0xb8);
    uVar13 = *(undefined8 *)(lVar6 + 0x24);
    fVar12 = *pfVar8;
    fVar14 = pfVar8[1];
    fVar16 = pfVar8[2];
    fVar10 = (float)*(undefined8 *)(lVar6 + 0x3c) * fVar14;
    fVar11 = (float)((ulong)*(undefined8 *)(lVar6 + 0x3c) >> 0x20) * fVar14;
    fVar14 = *(float *)(lVar6 + 0x44) * fVar14;
    fVar15 = *(float *)(lVar6 + 0x2c);
  }
  if (unaff_x19 != 0) {
    *(ulong *)(unaff_x19 + 0x10) =
         CONCAT44((float)((ulong)uVar17 >> 0x20) * fVar12 + fVar11 +
                  (float)((ulong)uVar13 >> 0x20) * fVar16,
                  (float)uVar17 * fVar12 + fVar10 + (float)uVar13 * fVar16);
    *(float *)(unaff_x19 + 0x18) = fVar18 * fVar12 + fVar14 + fVar15 * fVar16;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


