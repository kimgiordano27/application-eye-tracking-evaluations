/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_GetNativeSDKVersion
ENTRY_POINT: 051e292c
PROGRAM: hellodot-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_7;validity_or_gating_hits_10;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_1_0__ovrp_GetNativeSDKVersion(code *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  int *piVar6;
  long unaff_x19;
  long *plVar7;
  long *unaff_x21;
  float fVar8;
  float fVar9;
  undefined4 uStack0000000000000000;
  undefined4 uStack0000000000000004;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined4 in_stack_00000018;
  
  uVar1 = (*param_1)();
  if (((uVar1 & 1) != 0) && (*(char *)(unaff_x19 + 0x38) == '\0')) {
    plVar7 = *(long **)(unaff_x19 + 0x28);
    if (plVar7 == (long *)0x0) goto LAB_051e2b84;
    lVar4 = *plVar7;
    uVar1 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar1 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x21) {
          puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 4) * 0x10 + 0x138);
          goto LAB_051e2994;
        }
        uVar1 = uVar1 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar1 != 0);
    }
    puVar2 = (undefined8 *)FUN_02ce0a7c(plVar7,*unaff_x21,4);
LAB_051e2994:
    uVar1 = (*(code *)*puVar2)(plVar7);
    if ((uVar1 & 1) != 0) {
      if (*(long *)(unaff_x19 + 0x30) != 0) {
        FUN_05ef60b0(*(long *)(unaff_x19 + 0x30),1,0);
        if ((*(long *)(unaff_x19 + 0x30) != 0) &&
           (lVar4 = UnityEngine_UIElements_VisualTreeStyleUpdater__set_disposed
                              (*(long *)(unaff_x19 + 0x30),0), lVar4 != 0)) {
          FUN_05f019b0(uStack0000000000000000,uStack0000000000000004,uStack0000000000000008,lVar4,0)
          ;
          if ((*(long *)(unaff_x19 + 0x30) != 0) &&
             (lVar4 = UnityEngine_UIElements_VisualTreeStyleUpdater__set_disposed
                                (*(long *)(unaff_x19 + 0x30),0), lVar4 != 0)) {
            FUN_05f01d30(uStack000000000000000c,uStack0000000000000010,uStack0000000000000014,
                         in_stack_00000018,lVar4,0);
            if ((*(long *)(unaff_x19 + 0x30) != 0) &&
               (lVar4 = UnityEngine_UIElements_VisualTreeStyleUpdater__set_disposed
                                  (*(long *)(unaff_x19 + 0x30),0), lVar4 != 0)) {
              uVar3 = FUN_05f01814(lVar4,0);
              if (*(int *)(*(long *)PTR_DAT_065c8c40 + 0xe0) == 0) {
                thunk_FUN_02cd038c(*(long *)PTR_DAT_065c8c40);
              }
              uVar1 = FUN_05ef59b8(uVar3,0,0);
              fVar8 = 1.0;
              if ((uVar1 & 1) != 0) {
                if (((*(long *)(unaff_x19 + 0x30) == 0) ||
                    (lVar4 = UnityEngine_UIElements_VisualTreeStyleUpdater__set_disposed
                                       (*(long *)(unaff_x19 + 0x30),0), lVar4 == 0)) ||
                   (lVar4 = FUN_05f01814(lVar4,0), lVar4 == 0)) goto LAB_051e2b84;
                fVar8 = (float)FUN_05f04738(lVar4,0);
              }
              if (*(long *)(unaff_x19 + 0x30) != 0) {
                lVar4 = UnityEngine_UIElements_VisualTreeStyleUpdater__set_disposed
                                  (*(long *)(unaff_x19 + 0x30),0);
                plVar7 = *(long **)(unaff_x19 + 0x28);
                if (plVar7 != (long *)0x0) {
                  lVar5 = *plVar7;
                  uVar1 = (ulong)*(ushort *)(lVar5 + 0x12e);
                  if (uVar1 != 0) {
                    piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar6 + -2) == *unaff_x21) {
                        puVar2 = (undefined8 *)(lVar5 + (long)(*piVar6 + 1) * 0x10 + 0x138);
                        goto LAB_051e2b18;
                      }
                      uVar1 = uVar1 - 1;
                      piVar6 = piVar6 + 4;
                    } while (uVar1 != 0);
                  }
                  puVar2 = (undefined8 *)FUN_02ce0a7c(plVar7,*unaff_x21,1);
LAB_051e2b18:
                  fVar9 = (float)(*(code *)*puVar2)(plVar7,puVar2[1]);
                  if (DAT_06a6730f == '\0') {
                    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c9850);
                    DAT_06a6730f = '\x01';
                  }
                  if (lVar4 != 0) {
                    fVar9 = fVar9 / fVar8;
                    lVar5 = *(long *)(*(long *)PTR_DAT_065c9850 + 0xb8);
                    FUN_05f023d8(fVar9 * *(float *)(lVar5 + 0xc),fVar9 * *(float *)(lVar5 + 0x10),
                                 fVar9 * *(float *)(lVar5 + 0x14),lVar4,0);
                    return;
                  }
                }
              }
            }
          }
        }
      }
      goto LAB_051e2b84;
    }
  }
  if (*(long *)(unaff_x19 + 0x30) != 0) {
    FUN_05ef60b0(*(long *)(unaff_x19 + 0x30),0,0);
    return;
  }
LAB_051e2b84:
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


