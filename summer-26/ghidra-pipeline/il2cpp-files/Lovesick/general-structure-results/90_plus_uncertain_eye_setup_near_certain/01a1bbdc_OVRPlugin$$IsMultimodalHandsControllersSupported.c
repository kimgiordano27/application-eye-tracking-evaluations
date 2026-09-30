/*
FUNCTION_NAME: OVRPlugin$$IsMultimodalHandsControllersSupported
ENTRY_POINT: 01a1bbdc
PROGRAM: Lovesick-libil2cpp.so
SCORE: 106
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_10;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__IsMultimodalHandsControllersSupported
               (undefined1 param_1 [16],float param_2,float param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  float *pfVar6;
  long unaff_x19;
  long unaff_x21;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  FUN_01a1ab68();
  if (unaff_x21 != 0) {
    FUN_0269f618();
    if (*(long *)(unaff_x19 + 0x40) != 0) {
      uVar3 = FUN_026653cc(*(long *)(unaff_x19 + 0x40),0);
      if ((uVar3 & 1) == 0) {
        return;
      }
      if (*(long *)(unaff_x19 + 0x48) != 0) {
        fVar7 = (float)FUN_0269f578(*(long *)(unaff_x19 + 0x48),0);
        fVar11 = param_2;
        fVar9 = param_3;
        lVar4 = FUN_0268fd10();
        if (lVar4 != 0) {
          fVar8 = (float)FUN_0269f578(lVar4,0);
          if (DAT_0377518c == '\0') {
            thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
            DAT_0377518c = '\x01';
          }
          puVar1 = System_Threading_Timer_TimerComparer_TypeInfo;
          fVar7 = fVar7 - fVar8;
          param_2 = param_2 - fVar11;
          param_3 = param_3 - fVar9;
          if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          puVar2 = Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__;
          fVar8 = param_3 * param_3;
          fVar9 = SQRT(fVar8 + fVar7 * fVar7 + param_2 * param_2);
          fVar11 = DAT_028aa038;
          if (fVar9 <= DAT_028aa038) {
            if (DAT_03774d76 == '\0') {
              thunk_FUN_00d48444(
                                Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                                );
              DAT_03774d76 = '\x01';
            }
            pfVar6 = *(float **)(*(long *)puVar2 + 0xb8);
            fVar7 = *pfVar6;
            param_2 = pfVar6[1];
            param_3 = pfVar6[2];
          }
          else {
            fVar7 = fVar7 / fVar9;
            param_2 = param_2 / fVar9;
            param_3 = param_3 / fVar9;
          }
          lVar4 = FUN_0268fd10();
          lVar5 = FUN_0268fd10();
          if (lVar5 != 0) {
            fVar9 = (float)FUN_0269f578(lVar5,0);
            if (DAT_037750c4 == '\0') {
              thunk_FUN_00d48444(
                                Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                                );
              DAT_037750c4 = '\x01';
            }
            if (lVar4 != 0) {
              fVar11 = fVar11 - param_2;
              fVar8 = fVar8 - param_3;
              lVar5 = *(long *)(*(long *)puVar2 + 0xb8);
              thunk_FUN_026a0a94(fVar9 - fVar7,fVar11,fVar8,*(undefined4 *)(lVar5 + 0x18),
                                 *(undefined4 *)(lVar5 + 0x1c),*(undefined4 *)(lVar5 + 0x20),lVar4,0
                                );
              if (*(char *)(unaff_x19 + 0x58) == '\0') {
                return;
              }
              lVar4 = FUN_0268fd10();
              if (lVar4 != 0) {
                fVar9 = (float)FUN_0269f578(lVar4,0);
                if (*(long *)(unaff_x19 + 0x48) != 0) {
                  fVar7 = fVar11;
                  fVar12 = fVar8;
                  fVar10 = (float)FUN_0269f578(*(long *)(unaff_x19 + 0x48),0);
                  if (DAT_03774e1a == '\0') {
                    thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
                    DAT_03774e1a = '\x01';
                  }
                  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                  }
                  if ((*(long *)(unaff_x19 + 0x40) != 0) &&
                     (lVar4 = FUN_0268fd10(*(long *)(unaff_x19 + 0x40),0), lVar4 != 0)) {
                    fVar11 = SQRT((fVar8 - fVar12) * (fVar8 - fVar12) +
                                  (fVar9 - fVar10) * (fVar9 - fVar10) +
                                  (fVar11 - fVar7) * (fVar11 - fVar7));
                    FUN_0269fd98(fVar11 * *(float *)(unaff_x19 + 0x5c),
                                 fVar11 * *(float *)(unaff_x19 + 0x60),
                                 fVar11 * *(float *)(unaff_x19 + 100),lVar4,0);
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
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


