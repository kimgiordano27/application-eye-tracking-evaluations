/*
FUNCTION_NAME: Meta.XR.MetaXRFeature$$OnSessionStateChange
ENTRY_POINT: 074437ec
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 104
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_9;paired_field_refs_with_eye_source;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MetaXRFeature__OnSessionStateChange
               (undefined1 param_1 [16],float param_2,float param_3,undefined1 param_4 [16])

{
  undefined *puVar1;
  ulong uVar2;
  undefined1 in_w8;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  uVar15 = param_4._4_4_;
  uVar14 = param_4._0_4_;
  *(undefined1 *)(unaff_x20 + 0x714) = in_w8;
  if (DAT_09836325 == '\0') {
    FUN_03d2d2b0(PTR_DAT_091a0f88);
    DAT_09836325 = '\x01';
  }
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    lVar3 = *(long *)(*(long *)PTR_DAT_091a0f88 + 0xb8);
    fVar16 = *(float *)(lVar3 + 0x1c);
    fVar17 = *(float *)(lVar3 + 0x20);
    fVar19 = *(float *)(lVar3 + 0x18);
    fVar5 = (float)FUN_08abf9b0(*(long *)(unaff_x19 + 0x20),0);
    if (*(long *)(unaff_x19 + 0x20) != 0) {
      fVar18 = *(float *)(unaff_x19 + 0x28);
      lVar3 = FUN_08a4d98c(*(long *)(unaff_x19 + 0x20),0);
      if (lVar3 != 0) {
        fVar6 = (float)FUN_08a5d3f4(lVar3,0);
        if ((*(long *)(unaff_x19 + 0x20) != 0) &&
           (fVar9 = param_2, fVar12 = param_3, lVar3 = FUN_08a4d98c(*(long *)(unaff_x19 + 0x20),0),
           lVar3 != 0)) {
          fVar7 = (float)FUN_08a5d3f4(lVar3,0);
          if (*(long *)(unaff_x19 + 0x20) != 0) {
            fVar13 = fVar12;
            lVar3 = FUN_08a4d98c(*(long *)(unaff_x19 + 0x20),0);
            puVar1 = PTR_DAT_091a0c40;
            if (lVar3 != 0) {
              fVar18 = fVar5 * 0.5 + fVar18;
              uVar10 = 0;
              uVar11 = 0;
              if (fVar18 <= 0.0) {
                fVar18 = 0.0;
              }
              uVar8 = FUN_08a5bb30(lVar3,0);
              uVar4 = *(undefined8 *)(unaff_x19 + 0x40);
              if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                thunk_FUN_03db619c();
              }
              fVar19 = fVar19 * fVar18;
              fVar16 = fVar16 * fVar18;
              fVar17 = fVar17 * fVar18;
              uVar2 = FUN_08a508b0(uVar4,0,0);
              if ((uVar2 & 1) != 0) {
                if ((*(long *)(unaff_x19 + 0x40) == 0) ||
                   (lVar3 = FUN_08a4d98c(*(long *)(unaff_x19 + 0x40),0), lVar3 == 0))
                goto LAB_074439e8;
                FUN_08a5e270(fVar19 + fVar6,fVar16 + param_2,fVar17 + param_3,uVar8,
                             CONCAT44(uVar11,uVar10),fVar13,CONCAT44(uVar15,uVar14),lVar3,0);
              }
              uVar4 = *(undefined8 *)(unaff_x19 + 0x48);
              if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                thunk_FUN_03db619c();
              }
              uVar2 = FUN_08a508b0(uVar4,0,0);
              if ((uVar2 & 1) == 0) {
                return;
              }
              if ((*(long *)(unaff_x19 + 0x48) != 0) &&
                 (lVar3 = FUN_08a4d98c(*(long *)(unaff_x19 + 0x48),0), lVar3 != 0)) {
                FUN_08a5e270(fVar7 - fVar19,fVar9 - fVar16,fVar12 - fVar17,uVar8,
                             CONCAT44(uVar11,uVar10),fVar13,CONCAT44(uVar15,uVar14),lVar3,0);
                return;
              }
            }
          }
        }
      }
    }
  }
LAB_074439e8:
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


