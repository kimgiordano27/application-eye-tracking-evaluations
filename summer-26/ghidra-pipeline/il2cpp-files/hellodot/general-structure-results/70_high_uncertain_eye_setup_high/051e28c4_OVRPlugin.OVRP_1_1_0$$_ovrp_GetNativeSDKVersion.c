/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$_ovrp_GetNativeSDKVersion
ENTRY_POINT: 051e28c4
PROGRAM: hellodot-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_7;validity_or_gating_hits_11;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_1_0___ovrp_GetNativeSDKVersion(void)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x19;
  long *plVar9;
  float fVar10;
  float fVar11;
  undefined4 uStack0000000000000000;
  undefined4 uStack0000000000000004;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined4 in_stack_00000018;
  
  puVar1 = PTR_DAT_06604fb8;
  plVar9 = *(long **)(unaff_x19 + 0x28);
  if (plVar9 == (long *)0x0) goto LAB_051e2b84;
  lVar4 = *plVar9;
  uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_06604fb8) {
        puVar2 = (undefined8 *)(lVar4 + (long)(*piVar8 + 2) * 0x10 + 0x138);
        goto LAB_051e2924;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar2 = (undefined8 *)FUN_02ce0a7c(plVar9,*(long *)PTR_DAT_06604fb8,2);
LAB_051e2924:
  uVar7 = (*(code *)*puVar2)(plVar9,puVar2[1]);
  if (((uVar7 & 1) != 0) && (*(char *)(unaff_x19 + 0x38) == '\0')) {
    plVar9 = *(long **)(unaff_x19 + 0x28);
    if (plVar9 == (long *)0x0) goto LAB_051e2b84;
    lVar5 = *plVar9;
    lVar4 = *(long *)puVar1;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar4) {
          puVar2 = (undefined8 *)(lVar5 + (long)(*piVar8 + 4) * 0x10 + 0x138);
          goto LAB_051e2994;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar2 = (undefined8 *)FUN_02ce0a7c(plVar9,lVar4,4);
LAB_051e2994:
    uVar7 = (*(code *)*puVar2)(plVar9);
    if ((uVar7 & 1) != 0) {
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
              uVar7 = FUN_05ef59b8(uVar3,0,0);
              fVar10 = 1.0;
              if ((uVar7 & 1) != 0) {
                if (((*(long *)(unaff_x19 + 0x30) == 0) ||
                    (lVar4 = UnityEngine_UIElements_VisualTreeStyleUpdater__set_disposed
                                       (*(long *)(unaff_x19 + 0x30),0), lVar4 == 0)) ||
                   (lVar4 = FUN_05f01814(lVar4,0), lVar4 == 0)) goto LAB_051e2b84;
                fVar10 = (float)FUN_05f04738(lVar4,0);
              }
              if (*(long *)(unaff_x19 + 0x30) != 0) {
                lVar4 = UnityEngine_UIElements_VisualTreeStyleUpdater__set_disposed
                                  (*(long *)(unaff_x19 + 0x30),0);
                plVar9 = *(long **)(unaff_x19 + 0x28);
                if (plVar9 != (long *)0x0) {
                  lVar6 = *plVar9;
                  lVar5 = *(long *)puVar1;
                  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
                  if (uVar7 != 0) {
                    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar8 + -2) == lVar5) {
                        puVar2 = (undefined8 *)(lVar6 + (long)(*piVar8 + 1) * 0x10 + 0x138);
                        goto LAB_051e2b18;
                      }
                      uVar7 = uVar7 - 1;
                      piVar8 = piVar8 + 4;
                    } while (uVar7 != 0);
                  }
                  puVar2 = (undefined8 *)FUN_02ce0a7c(plVar9,lVar5,1);
LAB_051e2b18:
                  fVar11 = (float)(*(code *)*puVar2)(plVar9,puVar2[1]);
                  if (DAT_06a6730f == '\0') {
                    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c9850);
                    DAT_06a6730f = '\x01';
                  }
                  if (lVar4 != 0) {
                    fVar11 = fVar11 / fVar10;
                    lVar5 = *(long *)(*(long *)PTR_DAT_065c9850 + 0xb8);
                    FUN_05f023d8(fVar11 * *(float *)(lVar5 + 0xc),fVar11 * *(float *)(lVar5 + 0x10),
                                 fVar11 * *(float *)(lVar5 + 0x14),lVar4,0);
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


