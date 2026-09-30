/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_GetAudioOutId
ENTRY_POINT: 051e29b0
PROGRAM: hellodot-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_7;validity_or_gating_hits_7;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_1_0__ovrp_GetAudioOutId(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 *puVar4;
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
  
  FUN_05ef60b0(param_1,1,0);
                    /* catch() { ... } // from try @ 051e29dc with catch @ 051e29c0
                       catch() { ... } // from try @ 051e2a0c with catch @ 051e29c0
                       catch() { ... } // from try @ 051e2a48 with catch @ 051e29c0 */
  if ((*(long *)(unaff_x19 + 0x30) != 0) &&
     (lVar1 = UnityEngine_UIElements_VisualTreeStyleUpdater__set_disposed
                        (*(long *)(unaff_x19 + 0x30),0), lVar1 != 0)) {
                    /* try { // try from 051e29d4 to 052e29db has its CatchHandler @ 051e29f0 */
                    /* try { // try from 051e29dc to 052e2a07 has its CatchHandler @ 051e29c0 */
    FUN_05f019b0(uStack0000000000000000,uStack0000000000000004,uStack0000000000000008,lVar1,0);
                    /* catch(type#1 @ 0620d888) { ... } // from try @ 051e29d4 with catch @ 051e29f0
                        */
    if ((*(long *)(unaff_x19 + 0x30) != 0) &&
       (lVar1 = UnityEngine_UIElements_VisualTreeStyleUpdater__set_disposed
                          (*(long *)(unaff_x19 + 0x30),0), lVar1 != 0)) {
      FUN_05f01d30(uStack000000000000000c,uStack0000000000000010,uStack0000000000000014,
                   in_stack_00000018,lVar1,0);
                    /* try { // try from 051e2a08 to 052e2a0b has its CatchHandler @ 051e2a38 */
                    /* try { // try from 051e2a0c to 052e2a3b has its CatchHandler @ 051e29c0 */
      if ((*(long *)(unaff_x19 + 0x30) != 0) &&
         (lVar1 = UnityEngine_UIElements_VisualTreeStyleUpdater__set_disposed
                            (*(long *)(unaff_x19 + 0x30),0), lVar1 != 0)) {
        uVar2 = FUN_05f01814(lVar1,0);
        if (*(int *)(*(long *)PTR_DAT_065c8c40 + 0xe0) == 0) {
          thunk_FUN_02cd038c(*(long *)PTR_DAT_065c8c40);
        }
        uVar3 = FUN_05ef59b8(uVar2,0,0);
        fVar8 = 1.0;
        if ((uVar3 & 1) != 0) {
          if (((*(long *)(unaff_x19 + 0x30) == 0) ||
              (lVar1 = UnityEngine_UIElements_VisualTreeStyleUpdater__set_disposed
                                 (*(long *)(unaff_x19 + 0x30),0), lVar1 == 0)) ||
             (lVar1 = FUN_05f01814(lVar1,0), lVar1 == 0)) goto LAB_051e2b84;
          fVar8 = (float)FUN_05f04738(lVar1,0);
        }
        if (*(long *)(unaff_x19 + 0x30) != 0) {
          lVar1 = UnityEngine_UIElements_VisualTreeStyleUpdater__set_disposed
                            (*(long *)(unaff_x19 + 0x30),0);
          plVar7 = *(long **)(unaff_x19 + 0x28);
          if (plVar7 != (long *)0x0) {
            lVar5 = *plVar7;
            uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
            if (uVar3 != 0) {
              piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
              do {
                if (*(long *)(piVar6 + -2) == *unaff_x21) {
                  puVar4 = (undefined8 *)(lVar5 + (long)(*piVar6 + 1) * 0x10 + 0x138);
                  goto LAB_051e2b18;
                }
                uVar3 = uVar3 - 1;
                piVar6 = piVar6 + 4;
              } while (uVar3 != 0);
            }
            puVar4 = (undefined8 *)FUN_02ce0a7c(plVar7,*unaff_x21,1);
LAB_051e2b18:
            fVar9 = (float)(*(code *)*puVar4)(plVar7,puVar4[1]);
            if (DAT_06a6730f == '\0') {
              AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c9850);
              DAT_06a6730f = '\x01';
            }
            if (lVar1 != 0) {
              fVar9 = fVar9 / fVar8;
              lVar5 = *(long *)(*(long *)PTR_DAT_065c9850 + 0xb8);
              FUN_05f023d8(fVar9 * *(float *)(lVar5 + 0xc),fVar9 * *(float *)(lVar5 + 0x10),
                           fVar9 * *(float *)(lVar5 + 0x14),lVar1,0);
              return;
            }
          }
        }
      }
    }
  }
LAB_051e2b84:
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


