/*
FUNCTION_NAME: OVRPlugin.OVRP_1_16_0$$ovrp_UpdateCameraDevices
ENTRY_POINT: 0534e4f0
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_16_0__ovrp_UpdateCameraDevices(undefined8 param_1)

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
  float fVar8;
  
  lVar1 = FUN_060f0a10(param_1,0);
  if ((lVar1 != 0) && (lVar1 = thunk_FUN_0610061c(lVar1,0), lVar1 != 0)) {
    fVar7 = (float)FUN_06101d4c(lVar1,0);
    if (*(long *)(unaff_x19 + 0x30) != 0) {
      lVar1 = FUN_060f0a10(*(long *)(unaff_x19 + 0x30),0);
      plVar6 = *(long **)(unaff_x19 + 0x28);
      if (plVar6 != (long *)0x0) {
        lVar3 = *plVar6;
        uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar4 != 0) {
          piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar5 + -2) == *unaff_x21) {
              puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 1) * 0x10 + 0x138);
              goto LAB_0534e5a8;
            }
            uVar4 = uVar4 - 1;
            piVar5 = piVar5 + 4;
          } while (uVar4 != 0);
        }
        puVar2 = (undefined8 *)FUN_02f421d0(plVar6,*unaff_x21,1);
LAB_0534e5a8:
        fVar8 = (float)(*(code *)*puVar2)(plVar6,puVar2[1]);
        if (DAT_06bb42c2 == '\0') {
          FUN_02f08768(PTR_DAT_067c8f78);
          DAT_06bb42c2 = '\x01';
        }
        if (lVar1 != 0) {
          fVar8 = fVar8 / fVar7;
          lVar3 = *(long *)(*(long *)PTR_DAT_067c8f78 + 0xb8);
          FUN_06100490(fVar8 * *(float *)(lVar3 + 0xc),fVar8 * *(float *)(lVar3 + 0x10),
                       fVar8 * *(float *)(lVar3 + 0x14),lVar1,0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


