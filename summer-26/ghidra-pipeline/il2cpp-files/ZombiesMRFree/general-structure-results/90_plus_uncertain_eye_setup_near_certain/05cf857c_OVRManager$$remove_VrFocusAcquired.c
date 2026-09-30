/*
FUNCTION_NAME: OVRManager$$remove_VrFocusAcquired
ENTRY_POINT: 05cf857c
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__remove_VrFocusAcquired(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  int in_w9;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  float fVar4;
  ulong uVar5;
  float fVar6;
  ulong uVar7;
  float fVar8;
  float fVar10;
  float fVar11;
  float unaff_s9;
  float fVar12;
  float unaff_s10;
  float fVar13;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  float fVar14;
  float fVar15;
  undefined8 in_stack_00000008;
  ulong uVar9;
  
  lVar2 = *(long *)(param_1 + 0xb8);
  fVar11 = *(float *)(lVar2 + 0x18);
  fVar15 = *(float *)(lVar2 + 0x1c);
  fVar14 = *(float *)(lVar2 + 0x20);
  if (in_w9 == 0) {
    FUN_02fe925c(PTR_DAT_06f6e7c0);
    *(undefined1 *)(unaff_x22 + 0xca3) = 1;
  }
  puVar1 = PTR_DAT_06f6e7c0;
  fVar4 = fVar14 * fVar14 + fVar11 * fVar11 + fVar15 * fVar15;
  fVar10 = unaff_s9 - unaff_s12;
  fVar12 = unaff_s10 - unaff_s13;
  fVar13 = in_stack_00000008._4_4_ - unaff_s11;
  fVar8 = **(float **)(*(long *)PTR_DAT_06f6e7c0 + 0xb8);
  if (fVar8 <= fVar4) {
    fVar6 = fVar13 * fVar14 + fVar10 * fVar11 + fVar12 * fVar15;
    in_stack_00000008._4_4_ = fVar14 * fVar6;
    fVar8 = (fVar11 * fVar6) / fVar4;
    fVar10 = fVar10 - fVar8;
    fVar12 = fVar12 - (fVar15 * fVar6) / fVar4;
    fVar13 = fVar13 - in_stack_00000008._4_4_ / fVar4;
  }
  uVar9 = (ulong)(uint)fVar8;
  uVar7 = (ulong)(uint)in_stack_00000008._4_4_;
  if (*(long *)(unaff_x19 + 0x30) != 0) {
    uVar5 = FUN_06904864(*(long *)(unaff_x19 + 0x30),0);
    if (*(char *)(unaff_x20 + 0x662) == '\0') {
      FUN_02fe925c(PTR_DAT_06f6d5d8);
      *(undefined1 *)(unaff_x20 + 0x662) = 1;
    }
    lVar2 = *(long *)(*unaff_x21 + 0xb8);
    fVar15 = *(float *)(lVar2 + 0x18);
    fVar14 = *(float *)(lVar2 + 0x1c);
    fVar11 = *(float *)(lVar2 + 0x20);
    if (*(char *)(unaff_x22 + 0xca3) == '\0') {
      FUN_02fe925c(PTR_DAT_06f6e7c0);
      *(undefined1 *)(unaff_x22 + 0xca3) = 1;
    }
    fVar4 = fVar11 * fVar11 + fVar15 * fVar15 + fVar14 * fVar14;
    if (**(float **)(*(long *)puVar1 + 0xb8) <= fVar4) {
      fVar8 = (float)uVar9 * fVar11 + (float)uVar5 * fVar15 + (float)uVar7 * fVar14;
      uVar5 = (ulong)(uint)((float)uVar5 - (fVar15 * fVar8) / fVar4);
      uVar7 = (ulong)(uint)((float)uVar7 - (fVar14 * fVar8) / fVar4);
      uVar9 = (ulong)(uint)((float)uVar9 - (fVar11 * fVar8) / fVar4);
    }
    if (*(long *)(unaff_x19 + 0x20) != 0) {
      FUN_05cf5a4c(fVar10,fVar12,fVar13,*(long *)(unaff_x19 + 0x20),0);
      lVar2 = *(long *)(unaff_x19 + 0x20);
      if (*(char *)(unaff_x20 + 0x662) == '\0') {
        FUN_02fe925c(PTR_DAT_06f6d5d8);
        *(undefined1 *)(unaff_x20 + 0x662) = 1;
      }
      lVar3 = *(long *)(*unaff_x21 + 0xb8);
      UnityEngine_UIElements_BackgroundRepeat__GetHashCode
                (uVar5,uVar7,uVar9,*(undefined4 *)(lVar3 + 0x18),*(undefined4 *)(lVar3 + 0x1c),
                 *(undefined4 *)(lVar3 + 0x20),0);
      if (lVar2 != 0) {
        FUN_05cf598c(lVar2,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


