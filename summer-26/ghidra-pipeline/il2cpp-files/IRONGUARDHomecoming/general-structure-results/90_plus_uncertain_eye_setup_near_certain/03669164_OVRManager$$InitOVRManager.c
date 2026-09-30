/*
FUNCTION_NAME: OVRManager$$InitOVRManager
ENTRY_POINT: 03669164
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_13;validity_or_gating_hits_16;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_4
*/


void OVRManager__InitOVRManager(float param_1,float param_2)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  float *pfVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  long unaff_x19;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float unaff_s8;
  float unaff_s9;
  float fVar16;
  float unaff_s10;
  undefined4 uVar17;
  float unaff_s11;
  undefined4 uVar18;
  float unaff_s12;
  float fVar19;
  float fVar20;
  float fVar21;
  
  if (param_1 <= param_2) {
    if (DAT_0482ee9b == '\0') {
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardList>__ctor__);
      DAT_0482ee9b = '\x01';
    }
    if (*(int *)(*(long *)Method_Oculus_Platform_Message<LeaderboardList>__ctor__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    fVar20 = SQRT(unaff_s12);
    if (fVar20 <= DAT_00c926ac) {
      if (DAT_0482ee12 == '\0') {
        thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__);
        DAT_0482ee12 = '\x01';
      }
      pfVar6 = *(float **)
                (*(long *)Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__ + 0xb8);
      fVar16 = *pfVar6;
      fVar19 = pfVar6[1];
      fVar20 = pfVar6[2];
    }
    else {
      fVar16 = unaff_s9 / fVar20;
      fVar19 = unaff_s10 / fVar20;
      fVar20 = unaff_s11 / fVar20;
    }
  }
  else {
    if (DAT_0482ee1d == '\0') {
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__);
      DAT_0482ee1d = '\x01';
    }
    lVar5 = *(long *)(*(long *)Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__ +
                     0xb8);
    fVar16 = *(float *)(lVar5 + 0x48);
    fVar19 = *(float *)(lVar5 + 0x4c);
    fVar20 = *(float *)(lVar5 + 0x50);
  }
  if (*(int *)(unaff_x19 + 0x48) == 1) {
    if (DAT_0482ee18 == '\0') {
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__);
      DAT_0482ee18 = '\x01';
    }
    lVar5 = *(long *)(*(long *)Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__ +
                     0xb8);
    pfVar6 = (float *)(lVar5 + 0x3c);
    puVar7 = (undefined4 *)(lVar5 + 0x40);
    puVar8 = (undefined4 *)(lVar5 + 0x44);
  }
  else {
    if (DAT_0482ee19 == '\0') {
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__);
      DAT_0482ee19 = '\x01';
    }
    lVar5 = *(long *)(*(long *)Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__ +
                     0xb8);
    pfVar6 = (float *)(lVar5 + 0x18);
    puVar7 = (undefined4 *)(lVar5 + 0x1c);
    puVar8 = (undefined4 *)(lVar5 + 0x20);
  }
  uVar17 = *puVar8;
  uVar18 = *puVar7;
  fVar21 = *pfVar6;
  lVar5 = FUN_04070398();
  if (*(long *)(unaff_x19 + 0x40) != 0) {
    lVar2 = FUN_04070398(*(long *)(unaff_x19 + 0x40),0);
    if ((*(long *)(unaff_x19 + 0x40) != 0) && (lVar2 != 0)) {
      fVar10 = *(float *)(*(long *)(unaff_x19 + 0x40) + 0x20);
      fVar15 = 0.0;
      fVar13 = fVar20 * fVar10 + 0.0;
      fVar11 = unaff_s8 + fVar19 * fVar10;
      FUN_0407ba80(fVar16 * fVar10 + 0.0,fVar11,fVar13,lVar2,0);
      if (lVar5 != 0) {
        FUN_0407d468(lVar5,0);
        lVar5 = FUN_04070398();
        if ((*(long *)(unaff_x19 + 0x40) != 0) &&
           (lVar2 = FUN_04070398(*(long *)(unaff_x19 + 0x40),0), lVar2 != 0)) {
          fVar10 = (float)FUN_0407bae8(lVar2,0);
          fVar16 = (float)FUN_04067568(fVar16,fVar19,fVar20,fVar21,uVar18,uVar17,0);
          puVar1 = Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__;
          if (lVar5 != 0) {
            fVar14 = (fVar10 * fVar19 + fVar15 * fVar20 + fVar13 * fVar21) - fVar11 * fVar16;
            fVar12 = (fVar13 * fVar16 + fVar15 * fVar19 + fVar11 * fVar21) - fVar10 * fVar20;
            FUN_0407d5e8((fVar11 * fVar20 + fVar15 * fVar16 + fVar10 * fVar21) - fVar13 * fVar19,
                         fVar12,fVar14,
                         ((fVar15 * fVar21 - fVar10 * fVar16) - fVar11 * fVar19) - fVar13 * fVar20,
                         lVar5,0);
            uVar9 = *(undefined8 *)(unaff_x19 + 0x30);
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            uVar3 = FUN_04073094(uVar9,0,0);
            if ((uVar3 & 1) == 0) {
              return;
            }
            if (*(long *)(unaff_x19 + 0x30) != 0) {
              uVar9 = FUN_04070398(*(long *)(unaff_x19 + 0x30),0);
              uVar4 = FUN_04070398();
              lVar5 = *(long *)puVar1;
              if (*(int *)(lVar5 + 0xe0) == 0) {
                thunk_FUN_01ee6d7c(lVar5);
              }
              uVar3 = FUN_04073094(uVar9,uVar4,0);
              if ((uVar3 & 1) == 0) {
                return;
              }
              lVar5 = FUN_04070398();
              if ((*(long *)(unaff_x19 + 0x30) != 0) &&
                 (uVar9 = FUN_04070398(*(long *)(unaff_x19 + 0x30),0), lVar5 != 0)) {
                uVar3 = FUN_0407ecdc(lVar5,uVar9,0);
                if ((uVar3 & 1) != 0) {
                  return;
                }
                if (*(long *)(unaff_x19 + 0x30) != 0) {
                  lVar5 = FUN_04070398(*(long *)(unaff_x19 + 0x30),0);
                  lVar2 = FUN_04070398();
                  if ((lVar2 != 0) && (FUN_0407d3c8(lVar2,0), lVar5 != 0)) {
                    FUN_0407d468(lVar5,0);
                    if (*(long *)(unaff_x19 + 0x30) != 0) {
                      lVar5 = FUN_04070398(*(long *)(unaff_x19 + 0x30),0);
                      lVar2 = FUN_04070398();
                      if ((lVar2 != 0) && (FUN_0407bae8(lVar2,0), lVar5 != 0)) {
                        FUN_0407d5e8(lVar5,0);
                        if ((*(long *)(unaff_x19 + 0x30) != 0) &&
                           (lVar5 = FUN_04070398(*(long *)(unaff_x19 + 0x30),0), lVar5 != 0)) {
                          fVar20 = (float)FUN_0407d9e8(lVar5,0);
                          lVar2 = FUN_04070398();
                          if (lVar2 != 0) {
                            fVar19 = (float)FUN_0407ec3c(lVar2,0);
                            if ((*(long *)(unaff_x19 + 0x30) != 0) &&
                               (lVar2 = FUN_04070398(*(long *)(unaff_x19 + 0x30),0), lVar2 != 0)) {
                              fVar16 = (float)FUN_0407ec3c(lVar2,0);
                              fVar19 = fVar19 / fVar16;
                              FUN_0407da88(fVar20 * fVar19,fVar12 * fVar19,fVar14 * fVar19,lVar5,0);
                              return;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


