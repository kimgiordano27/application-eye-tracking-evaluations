/*
FUNCTION_NAME: FUN_05dd1cdc
ENTRY_POINT: 05dd1cdc
PROGRAM: hellodot-libil2cpp.so
SCORE: 72
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_7;telemetry_or_network_hits_3;frame_or_lifecycle_behavior
*/


void FUN_05dd1cdc(undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,long param_4,
                 long param_5,long *param_6)

{
  char cVar1;
  char cVar2;
  char cVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  int *piVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  if ((DAT_06a7af57 & 1) == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum
              (System_Func<CaptureIconService_CaptureRequest,_bool>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c8c40);
    DAT_06a7af57 = 1;
  }
  if (*(long *)(param_4 + 0x30) != 0) {
    lVar7 = *(long *)(*(long *)(param_4 + 0x30) + 0x30);
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = *(long *)(lVar7 + 0x38);
    }
    if (*(int *)(*(long *)PTR_DAT_065c8c40 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    uVar4 = FUN_05ef59b8(lVar7,0,0);
    if ((uVar4 & 1) == 0) {
      return;
    }
    lVar5 = FUN_05dd1f18(param_4,param_5);
    if ((lVar5 != 0) && (lVar7 != 0)) {
      cVar1 = *(char *)(lVar5 + 0x10);
      cVar2 = *(char *)(lVar5 + 0x11);
      cVar3 = *(char *)(lVar5 + 0x12);
      lVar7 = UnityEngine_UIElements_VisualTreeStyleUpdater__set_disposed(lVar7,0);
      if (param_6 != (long *)0x0) {
        lVar5 = *param_6;
        uVar4 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar4 != 0) {
          piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) ==
                *(long *)System_Func<CaptureIconService_CaptureRequest,_bool>_TypeInfo) {
              puVar6 = (undefined8 *)(lVar5 + (long)(*piVar8 + 5) * 0x10 + 0x138);
              goto LAB_05dd1e1c;
            }
            uVar4 = uVar4 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar4 != 0);
        }
        puVar6 = (undefined8 *)
                 FUN_02ce0a7c(param_6,*(long *)
                                       System_Func<CaptureIconService_CaptureRequest,_bool>_TypeInfo
                              ,5);
LAB_05dd1e1c:
        lVar5 = (*(code *)*puVar6)(param_6,puVar6[1]);
        if (lVar5 != 0) {
          uVar11 = FUN_05f01910(lVar5,0);
          if (((cVar1 == '\0') || (cVar2 == '\0')) || (cVar3 == '\0')) {
            if ((param_5 == 0) || (lVar5 = FUN_05dd0b50(param_5), lVar5 == 0)) goto LAB_05dd1f14;
            fVar9 = (float)FUN_05f040ec(uVar11,param_2,param_3,lVar5,0);
            fVar13 = *(float *)(param_4 + 0x6c) - (float)param_3;
            fVar14 = *(float *)(param_4 + 0x68) - (float)param_2;
            if (cVar3 == '\0') {
              fVar13 = 0.0;
            }
            fVar9 = *(float *)(param_4 + 100) - fVar9;
            if (cVar2 == '\0') {
              fVar14 = 0.0;
            }
            if (cVar1 == '\0') {
              fVar9 = 0.0;
            }
            fVar15 = (float)FUN_05f03890(fVar9,fVar14,fVar13,lVar5,0);
            fVar9 = fVar14;
            fVar12 = fVar13;
          }
          else {
            fVar15 = *(float *)(param_4 + 0x58) - (float)uVar11;
            fVar14 = *(float *)(param_4 + 0x5c) - (float)param_2;
            fVar13 = *(float *)(param_4 + 0x60) - (float)param_3;
            fVar9 = *(float *)(param_4 + 0x5c);
            fVar12 = *(float *)(param_4 + 0x60);
          }
          if (lVar7 != 0) {
            fVar10 = (float)FUN_05f01910(lVar7,0);
            FUN_05f019b0(fVar15 + fVar10,fVar14 + fVar9,fVar13 + fVar12,lVar7,0);
            return;
          }
        }
      }
    }
  }
LAB_05dd1f14:
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


