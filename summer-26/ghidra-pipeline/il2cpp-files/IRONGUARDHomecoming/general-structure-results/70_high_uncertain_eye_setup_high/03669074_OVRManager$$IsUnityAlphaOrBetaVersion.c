/*
FUNCTION_NAME: OVRManager$$IsUnityAlphaOrBetaVersion
ENTRY_POINT: 03669074
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_12;validity_or_gating_hits_20;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__IsUnityAlphaOrBetaVersion
               (undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  float *pfVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  float fVar19;
  
  if ((DAT_04833d4b & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__);
    DAT_04833d4b = 1;
  }
  if (*(long *)(param_4 + 0x40) != 0) {
    lVar2 = FUN_04070398(*(long *)(param_4 + 0x40),0);
    lVar3 = FUN_04070398(param_4,0);
    if ((lVar3 != 0) && (FUN_0407d3c8(lVar3,0), lVar2 != 0)) {
      fVar10 = (float)FUN_0407e9e4(lVar2,0);
      fVar16 = param_2 - param_2;
      fVar19 = param_3 * param_3 + fVar10 * fVar10 + fVar16 * fVar16;
      if (DAT_0482ef73 == '\0') {
        thunk_FUN_01efb3a4(
                          Method_UnityEngine_UIElements_PanelChangedEventBase<DetachFromPanelEvent>_GetPooled__
                          );
        DAT_0482ef73 = '\x01';
      }
      fVar11 = ABS(fVar19);
      if (fVar11 <= 0.0) {
        fVar11 = 0.0;
      }
      fVar12 = **(float **)
                 (*(long *)
                   Method_UnityEngine_UIElements_PanelChangedEventBase<DetachFromPanelEvent>_GetPooled__
                 + 0xb8) * 8.0;
      fVar14 = fVar11 * DAT_00c927dc;
      if (fVar11 * DAT_00c927dc <= fVar12) {
        fVar14 = fVar12;
      }
      if (fVar14 <= ABS(0.0 - fVar19)) {
        if (DAT_0482ee9b == '\0') {
          thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardList>__ctor__);
          DAT_0482ee9b = '\x01';
        }
        if (*(int *)(*(long *)Method_Oculus_Platform_Message<LeaderboardList>__ctor__ + 0xe0) == 0)
        {
          thunk_FUN_01ee6d7c();
        }
        fVar19 = SQRT(fVar19);
        if (fVar19 <= DAT_00c926ac) {
          if (DAT_0482ee12 == '\0') {
            thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__);
            DAT_0482ee12 = '\x01';
          }
          pfVar6 = *(float **)
                    (*(long *)Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__ + 0xb8
                    );
          fVar10 = *pfVar6;
          fVar16 = pfVar6[1];
          param_3 = pfVar6[2];
        }
        else {
          fVar10 = fVar10 / fVar19;
          fVar16 = fVar16 / fVar19;
          param_3 = param_3 / fVar19;
        }
      }
      else {
        if (DAT_0482ee1d == '\0') {
          thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__);
          DAT_0482ee1d = '\x01';
        }
        lVar2 = *(long *)(*(long *)Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__ +
                         0xb8);
        fVar10 = *(float *)(lVar2 + 0x48);
        fVar16 = *(float *)(lVar2 + 0x4c);
        param_3 = *(float *)(lVar2 + 0x50);
      }
      if (*(int *)(param_4 + 0x48) == 1) {
        if (DAT_0482ee18 == '\0') {
          thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__);
          DAT_0482ee18 = '\x01';
        }
        lVar2 = *(long *)(*(long *)Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__ +
                         0xb8);
        pfVar6 = (float *)(lVar2 + 0x3c);
        puVar7 = (undefined4 *)(lVar2 + 0x40);
        puVar8 = (undefined4 *)(lVar2 + 0x44);
      }
      else {
        if (DAT_0482ee19 == '\0') {
          thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__);
          DAT_0482ee19 = '\x01';
        }
        lVar2 = *(long *)(*(long *)Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__ +
                         0xb8);
        pfVar6 = (float *)(lVar2 + 0x18);
        puVar7 = (undefined4 *)(lVar2 + 0x1c);
        puVar8 = (undefined4 *)(lVar2 + 0x20);
      }
      uVar17 = *puVar8;
      uVar18 = *puVar7;
      fVar19 = *pfVar6;
      lVar2 = FUN_04070398(param_4,0);
      if (*(long *)(param_4 + 0x40) != 0) {
        lVar3 = FUN_04070398(*(long *)(param_4 + 0x40),0);
        if ((*(long *)(param_4 + 0x40) != 0) && (lVar3 != 0)) {
          fVar11 = *(float *)(*(long *)(param_4 + 0x40) + 0x20);
          fVar12 = 0.0;
          fVar14 = param_3 * fVar11 + 0.0;
          param_2 = param_2 + fVar16 * fVar11;
          FUN_0407ba80(fVar10 * fVar11 + 0.0,param_2,fVar14,lVar3,0);
          if (lVar2 != 0) {
            FUN_0407d468(lVar2,0);
            lVar2 = FUN_04070398(param_4,0);
            if ((*(long *)(param_4 + 0x40) != 0) &&
               (lVar3 = FUN_04070398(*(long *)(param_4 + 0x40),0), lVar3 != 0)) {
              fVar11 = (float)FUN_0407bae8(lVar3,0);
              fVar10 = (float)FUN_04067568(fVar10,fVar16,param_3,fVar19,uVar18,uVar17,0);
              puVar1 = Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__;
              if (lVar2 != 0) {
                fVar15 = (fVar11 * fVar16 + fVar12 * param_3 + fVar14 * fVar19) - param_2 * fVar10;
                fVar13 = (fVar14 * fVar10 + fVar12 * fVar16 + param_2 * fVar19) - fVar11 * param_3;
                FUN_0407d5e8((param_2 * param_3 + fVar12 * fVar10 + fVar11 * fVar19) -
                             fVar14 * fVar16,fVar13,fVar15,
                             ((fVar12 * fVar19 - fVar11 * fVar10) - param_2 * fVar16) -
                             fVar14 * param_3,lVar2,0);
                uVar9 = *(undefined8 *)(param_4 + 0x30);
                if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                  thunk_FUN_01ee6d7c();
                }
                uVar4 = FUN_04073094(uVar9,0,0);
                if ((uVar4 & 1) == 0) {
                  return;
                }
                if (*(long *)(param_4 + 0x30) != 0) {
                  uVar9 = FUN_04070398(*(long *)(param_4 + 0x30),0);
                  uVar5 = FUN_04070398(param_4,0);
                  lVar2 = *(long *)puVar1;
                  if (*(int *)(lVar2 + 0xe0) == 0) {
                    thunk_FUN_01ee6d7c(lVar2);
                  }
                  uVar4 = FUN_04073094(uVar9,uVar5,0);
                  if ((uVar4 & 1) == 0) {
                    return;
                  }
                  lVar2 = FUN_04070398(param_4,0);
                  if ((*(long *)(param_4 + 0x30) != 0) &&
                     (uVar9 = FUN_04070398(*(long *)(param_4 + 0x30),0), lVar2 != 0)) {
                    uVar4 = FUN_0407ecdc(lVar2,uVar9,0);
                    if ((uVar4 & 1) != 0) {
                      return;
                    }
                    if (*(long *)(param_4 + 0x30) != 0) {
                      lVar2 = FUN_04070398(*(long *)(param_4 + 0x30),0);
                      lVar3 = FUN_04070398(param_4,0);
                      if ((lVar3 != 0) && (FUN_0407d3c8(lVar3,0), lVar2 != 0)) {
                        FUN_0407d468(lVar2,0);
                        if (*(long *)(param_4 + 0x30) != 0) {
                          lVar2 = FUN_04070398(*(long *)(param_4 + 0x30),0);
                          lVar3 = FUN_04070398(param_4,0);
                          if ((lVar3 != 0) && (FUN_0407bae8(lVar3,0), lVar2 != 0)) {
                            FUN_0407d5e8(lVar2,0);
                            if ((*(long *)(param_4 + 0x30) != 0) &&
                               (lVar2 = FUN_04070398(*(long *)(param_4 + 0x30),0), lVar2 != 0)) {
                              fVar10 = (float)FUN_0407d9e8(lVar2,0);
                              lVar3 = FUN_04070398(param_4,0);
                              if (lVar3 != 0) {
                                fVar19 = (float)FUN_0407ec3c(lVar3,0);
                                if ((*(long *)(param_4 + 0x30) != 0) &&
                                   (lVar3 = FUN_04070398(*(long *)(param_4 + 0x30),0), lVar3 != 0))
                                {
                                  fVar16 = (float)FUN_0407ec3c(lVar3,0);
                                  fVar19 = fVar19 / fVar16;
                                  FUN_0407da88(fVar10 * fVar19,fVar13 * fVar19,fVar15 * fVar19,lVar2
                                               ,0);
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
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


