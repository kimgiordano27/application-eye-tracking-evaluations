/*
FUNCTION_NAME: FUN_06a9c438
ENTRY_POINT: 06a9c438
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_8;telemetry_or_network_hits_8
*/


void FUN_06a9c438(undefined1 param_1 [16],float param_2,float param_3,long param_4,float *param_5,
                 float *param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *plVar8;
  int iVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  if ((DAT_076e3010 & 1) == 0) {
    thunk_FUN_032e1da0(PTR_DAT_0727a8d8);
    thunk_FUN_032e1da0(PTR_DAT_0727ac98);
    thunk_FUN_032e1da0(
                      Method_Meta_Voice_TranscriptionRequestEvents<VoiceServiceRequestEvent>_get_OnAudioDeactivation__
                      );
    thunk_FUN_032e1da0(
                      Method_Meta_Voice_TranscriptionRequestEvents<VoiceServiceRequestEvent>_get_OnAudioInputStateChange__
                      );
    DAT_076e3010 = 1;
  }
  plVar8 = *(long **)(param_4 + 0xf0);
  if (plVar8 != (long *)0x0) {
    lVar4 = *plVar8;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_0727ac98) {
          puVar3 = (undefined8 *)(lVar4 + (long)(*piVar7 + 2) * 0x10 + 0x138);
          goto LAB_06a9c500;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_032937ac(plVar8,*(long *)PTR_DAT_0727ac98,2);
LAB_06a9c500:
    lVar4 = (*(code *)*puVar3)(plVar8,puVar3[1]);
    puVar2 = 
    Method_Meta_Voice_TranscriptionRequestEvents<VoiceServiceRequestEvent>_get_OnAudioInputStateChange__
    ;
    if ((lVar4 != 0) &&
       (plVar8 = (long *)FUN_041e29a8(lVar4,0,*(undefined8 *)
                                               Method_Meta_Voice_TranscriptionRequestEvents<VoiceServiceRequestEvent>_get_OnAudioInputStateChange__
                                     ), puVar1 = PTR_DAT_0727a8d8, plVar8 != (long *)0x0)) {
      lVar5 = *plVar8;
      uVar10 = *(undefined8 *)(param_4 + 0xf0);
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_0727a8d8) {
            puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 7) * 0x10 + 0x138);
            goto LAB_06a9c58c;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar3 = (undefined8 *)FUN_032937ac(plVar8,*(long *)PTR_DAT_0727a8d8,7);
LAB_06a9c58c:
      lVar5 = (*(code *)*puVar3)(plVar8,uVar10,puVar3[1]);
      if (lVar5 != 0) {
        fVar11 = (float)FUN_06bf4868(lVar5,0);
        *param_6 = fVar11;
        param_6[1] = param_2;
        param_6[2] = param_3;
        if (1 < *(int *)(lVar4 + 0x18)) {
          iVar9 = 1;
          fVar13 = (param_2 - param_5[1]) * (param_2 - param_5[1]);
          fVar14 = (param_3 - param_5[2]) * (param_3 - param_5[2]);
          fVar11 = fVar14 + (fVar11 - *param_5) * (fVar11 - *param_5) + fVar13;
          do {
            plVar8 = (long *)FUN_041e29a8(lVar4,iVar9,*(undefined8 *)puVar2);
            if (plVar8 == (long *)0x0) goto LAB_06a9c6d8;
            lVar5 = *plVar8;
            uVar10 = *(undefined8 *)(param_4 + 0xf0);
            uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
            if (uVar6 != 0) {
              piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
              do {
                if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
                  puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 7) * 0x10 + 0x138);
                  goto LAB_06a9c654;
                }
                uVar6 = uVar6 - 1;
                piVar7 = piVar7 + 4;
              } while (uVar6 != 0);
            }
            puVar3 = (undefined8 *)FUN_032937ac(plVar8,*(long *)puVar1,7);
LAB_06a9c654:
            lVar5 = (*(code *)*puVar3)(plVar8,uVar10,puVar3[1]);
            if (lVar5 == 0) goto LAB_06a9c6d8;
            fVar12 = (float)FUN_06bf4868(lVar5,0);
            fVar15 = (fVar14 - param_5[2]) * (fVar14 - param_5[2]) +
                     (fVar12 - *param_5) * (fVar12 - *param_5) +
                     (fVar13 - param_5[1]) * (fVar13 - param_5[1]);
            if (fVar15 < fVar11) {
              *param_6 = fVar12;
              param_6[1] = fVar13;
              param_6[2] = fVar14;
              fVar11 = fVar15;
            }
            iVar9 = iVar9 + 1;
          } while (iVar9 < *(int *)(lVar4 + 0x18));
        }
        return;
      }
    }
  }
LAB_06a9c6d8:
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


