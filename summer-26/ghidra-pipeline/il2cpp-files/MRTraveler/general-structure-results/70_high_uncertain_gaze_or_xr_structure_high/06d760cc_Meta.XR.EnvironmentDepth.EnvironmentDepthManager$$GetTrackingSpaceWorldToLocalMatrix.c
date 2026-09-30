/*
FUNCTION_NAME: Meta.XR.EnvironmentDepth.EnvironmentDepthManager$$GetTrackingSpaceWorldToLocalMatrix
ENTRY_POINT: 06d760cc
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 81
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_8;paired_field_refs_with_eye_source;functionality_gaze_retrieval_or_extraction
*/


void Meta_XR_EnvironmentDepth_EnvironmentDepthManager__GetTrackingSpaceWorldToLocalMatrix
               (undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x19;
  long *plVar4;
  undefined8 *unaff_x21;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fStack0000000000000004;
  undefined4 uStack000000000000000c;
  
  plVar4 = (long *)(unaff_x19 + 0xc0);
  *plVar4 = param_4;
  thunk_FUN_03d233cc(plVar4,param_4);
  uVar2 = FUN_03c8f97c(*unaff_x21,*(undefined4 *)(unaff_x19 + 0x28));
  *(undefined8 *)(unaff_x19 + 200) = uVar2;
  thunk_FUN_03d233cc((undefined8 *)(unaff_x19 + 200),uVar2);
  uStack000000000000000c =
       FUN_06d75dc0(*(undefined4 *)(unaff_x19 + 0xb4),*(undefined1 *)(unaff_x19 + 0xb9));
  puVar1 = PTR_DAT_08e6a6b8;
  lVar3 = *plVar4;
  fStack0000000000000004 = param_3;
  if (lVar3 != 0) {
    lVar8 = 0;
    uVar5 = 0;
    while( true ) {
      if ((long)*(int *)(lVar3 + 0x18) <= (long)uVar5) {
        return;
      }
      if (*(int *)(*(long *)PTR_DAT_08e84e60 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      lVar3 = FUN_07d8b59c(unaff_x19 + 0x28,uVar5 & 0xffffffff,0);
      if (lVar3 == 0) break;
      lVar7 = *(long *)(unaff_x19 + 0xc0);
      lVar6 = *(long *)(unaff_x19 + 0x18);
      fVar14 = param_2;
      fVar18 = fStack0000000000000004;
      FUN_085ec7f8(uStack000000000000000c,lVar3,0);
      if ((lVar6 == 0) || (uVar9 = FUN_085ec8b4(lVar6,0), lVar7 == 0)) break;
      if (*(uint *)(lVar7 + 0x18) <= uVar5) {
LAB_06d7633c:
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb38();
      }
      lVar7 = lVar7 + lVar8;
      *(undefined4 *)(lVar7 + 0x20) = uVar9;
      *(float *)(lVar7 + 0x24) = fVar14;
      *(float *)(lVar7 + 0x28) = fVar18;
      if (*(long *)(unaff_x19 + 0x20) == 0) break;
      lVar7 = *(long *)(unaff_x19 + 200);
      fVar10 = (float)FUN_085eb198(*(long *)(unaff_x19 + 0x20),0);
      fVar15 = fVar14;
      fVar19 = fVar18;
      fVar11 = (float)FUN_085eb198(lVar3,0);
      fVar16 = fVar15;
      fVar20 = fVar19;
      if (DAT_094100b5 == '\0') {
        FUN_03c8f898(puVar1);
        DAT_094100b5 = '\x01';
      }
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      if (*(long *)(unaff_x19 + 0x20) == 0) break;
      fVar12 = (float)FUN_085eb198(*(long *)(unaff_x19 + 0x20),0);
      if (*(long *)(unaff_x19 + 0x10) == 0) break;
      fVar17 = fVar16;
      fVar21 = fVar20;
      fVar13 = (float)FUN_085eb198(*(long *)(unaff_x19 + 0x10),0);
      if (DAT_094100b5 == '\0') {
        FUN_03c8f898(puVar1);
        DAT_094100b5 = '\x01';
      }
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      if (lVar7 == 0) break;
      if (*(uint *)(lVar7 + 0x18) <= uVar5) goto LAB_06d7633c;
      *(float *)(lVar7 + uVar5 * 4 + 0x20) =
           1.0 - SQRT((fVar18 - fVar19) * (fVar18 - fVar19) +
                      (fVar10 - fVar11) * (fVar10 - fVar11) + (fVar14 - fVar15) * (fVar14 - fVar15))
                 / SQRT((fVar20 - fVar21) * (fVar20 - fVar21) +
                        (fVar12 - fVar13) * (fVar12 - fVar13) +
                        (fVar16 - fVar17) * (fVar16 - fVar17));
      lVar3 = *plVar4;
      uVar5 = uVar5 + 1;
      lVar8 = lVar8 + 0xc;
      if (lVar3 == 0) break;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


