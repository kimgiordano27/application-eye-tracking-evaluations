/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_GetEyeTextureScale
ENTRY_POINT: 051e2a80
PROGRAM: hellodot-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_3;validity_or_gating_hits_3;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_1_0__ovrp_GetEyeTextureScale(float param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x19;
  long *plVar6;
  long *unaff_x21;
  float fVar7;
  
  if (*(long *)(unaff_x19 + 0x30) != 0) {
    lVar1 = UnityEngine_UIElements_VisualTreeStyleUpdater__set_disposed
                      (*(long *)(unaff_x19 + 0x30),0);
    plVar6 = *(long **)(unaff_x19 + 0x28);
    if (plVar6 != (long *)0x0) {
      lVar3 = *plVar6;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *unaff_x21) {
            puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 1) * 0x10 + 0x138);
            goto LAB_051e2b18;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined8 *)FUN_02ce0a7c(plVar6,*unaff_x21,1);
LAB_051e2b18:
      fVar7 = (float)(*(code *)*puVar2)(plVar6,puVar2[1]);
      if (DAT_06a6730f == '\0') {
        AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c9850);
        DAT_06a6730f = '\x01';
      }
      if (lVar1 != 0) {
        fVar7 = fVar7 / param_1;
        lVar3 = *(long *)(*(long *)PTR_DAT_065c9850 + 0xb8);
        FUN_05f023d8(fVar7 * *(float *)(lVar3 + 0xc),fVar7 * *(float *)(lVar3 + 0x10),
                     fVar7 * *(float *)(lVar3 + 0x14),lVar1,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


