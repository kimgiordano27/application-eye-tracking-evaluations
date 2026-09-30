/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$ovrp_Media_SetMrcAudioSampleRate
ENTRY_POINT: 0749f5f8
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_38_0__ovrp_Media_SetMrcAudioSampleRate(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  int *piVar5;
  long unaff_x19;
  long *plVar6;
  long *unaff_x21;
  float fVar7;
  float fVar8;
  
  if (*(int *)(param_1 + 0xe0) == 0) {
    thunk_FUN_03db619c(param_1);
  }
  uVar1 = FUN_08a508b0();
  fVar7 = 1.0;
  if ((uVar1 & 1) != 0) {
    if (((*(long *)(unaff_x19 + 0x30) == 0) ||
        (lVar2 = FUN_08a50e6c(*(long *)(unaff_x19 + 0x30),0), lVar2 == 0)) ||
       (lVar2 = FUN_08a5d2e4(lVar2,0), lVar2 == 0)) goto LAB_0749f74c;
    fVar7 = (float)FUN_08a6021c(lVar2,0);
  }
  if (*(long *)(unaff_x19 + 0x30) != 0) {
    lVar2 = FUN_08a50e6c(*(long *)(unaff_x19 + 0x30),0);
    plVar6 = *(long **)(unaff_x19 + 0x28);
    if (plVar6 != (long *)0x0) {
      lVar4 = *plVar6;
      uVar1 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar1 != 0) {
        piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *unaff_x21) {
            puVar3 = (undefined8 *)(lVar4 + (long)(*piVar5 + 1) * 0x10 + 0x138);
            goto LAB_0749f6e0;
          }
          uVar1 = uVar1 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar1 != 0);
      }
      puVar3 = (undefined8 *)FUN_03d8f370(plVar6,*unaff_x21,1);
LAB_0749f6e0:
      fVar8 = (float)(*(code *)*puVar3)(plVar6,puVar3[1]);
      if (DAT_098362cb == '\0') {
        FUN_03d2d2b0(PTR_DAT_091a0f88);
        DAT_098362cb = '\x01';
      }
      if (lVar2 != 0) {
        fVar8 = fVar8 / fVar7;
        lVar4 = *(long *)(*(long *)PTR_DAT_091a0f88 + 0xb8);
        FUN_08a5debc(fVar8 * *(float *)(lVar4 + 0xc),fVar8 * *(float *)(lVar4 + 0x10),
                     fVar8 * *(float *)(lVar4 + 0x14),lVar2,0);
        return;
      }
    }
  }
LAB_0749f74c:
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


