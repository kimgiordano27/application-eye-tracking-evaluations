/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_GetAudioInId
ENTRY_POINT: 051e2a18
PROGRAM: hellodot-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_4;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_1_0__ovrp_GetAudioInId(undefined8 param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  int *piVar6;
  long unaff_x19;
  long *plVar7;
  long *unaff_x21;
  float fVar8;
  float fVar9;
  
  uVar1 = FUN_05f01814(param_1,0);
  if (*(int *)(*(long *)PTR_DAT_065c8c40 + 0xe0) == 0) {
                    /* catch() { ... } // from try @ 051e2a08 with catch @ 051e2a38 */
                    /* try { // try from 051e2a3c to 052e2a47 has its CatchHandler @ 051e2a5c */
    thunk_FUN_02cd038c(*(long *)PTR_DAT_065c8c40);
  }
                    /* try { // try from 051e2a48 to 052e2a53 has its CatchHandler @ 051e29c0 */
  uVar2 = FUN_05ef59b8(uVar1,0,0);
  fVar8 = 1.0;
                    /* try { // try from 051e2a54 to 052e2a5b has its CatchHandler @ 051e2a5c */
  if ((uVar2 & 1) != 0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 051e2a3c with catch @ 051e2a5c
                       catch(type#2 @ 00000000) { ... } // from try @ 051e2a54 with catch @ 051e2a5c
                        */
    if (((*(long *)(unaff_x19 + 0x30) == 0) ||
        (lVar3 = UnityEngine_UIElements_VisualTreeStyleUpdater__set_disposed
                           (*(long *)(unaff_x19 + 0x30),0), lVar3 == 0)) ||
       (lVar3 = FUN_05f01814(lVar3,0), lVar3 == 0)) goto LAB_051e2b84;
    fVar8 = (float)FUN_05f04738(lVar3,0);
  }
  if (*(long *)(unaff_x19 + 0x30) != 0) {
    lVar3 = UnityEngine_UIElements_VisualTreeStyleUpdater__set_disposed
                      (*(long *)(unaff_x19 + 0x30),0);
    plVar7 = *(long **)(unaff_x19 + 0x28);
    if (plVar7 != (long *)0x0) {
      lVar5 = *plVar7;
      uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar2 != 0) {
        piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *unaff_x21) {
            puVar4 = (undefined8 *)(lVar5 + (long)(*piVar6 + 1) * 0x10 + 0x138);
            goto LAB_051e2b18;
          }
          uVar2 = uVar2 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar2 != 0);
      }
      puVar4 = (undefined8 *)FUN_02ce0a7c(plVar7,*unaff_x21,1);
LAB_051e2b18:
      fVar9 = (float)(*(code *)*puVar4)(plVar7,puVar4[1]);
      if (DAT_06a6730f == '\0') {
        AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c9850);
        DAT_06a6730f = '\x01';
      }
      if (lVar3 != 0) {
        fVar9 = fVar9 / fVar8;
        lVar5 = *(long *)(*(long *)PTR_DAT_065c9850 + 0xb8);
        FUN_05f023d8(fVar9 * *(float *)(lVar5 + 0xc),fVar9 * *(float *)(lVar5 + 0x10),
                     fVar9 * *(float *)(lVar5 + 0x14),lVar3,0);
        return;
      }
    }
  }
LAB_051e2b84:
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


