/*
FUNCTION_NAME: OVRPlugin.OVRP_1_32_0$$ovrp_AddCustomMetadata
ENTRY_POINT: 06972f84
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 84
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_32_0__ovrp_AddCustomMetadata(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  long *plVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  puVar1 = PTR_DAT_084b7360;
  if ((*(byte *)(unaff_x20 + 0x107) & 1) == 0) {
    FUN_03a8a718(PTR_DAT_084b7360);
    *(undefined1 *)(unaff_x20 + 0x107) = 1;
  }
  if (**(long **)(*(long *)puVar1 + 0xb8) != 0) {
    plVar5 = (long *)(param_1 + 0x88);
    *plVar5 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x20);
    thunk_FUN_03afed3c(plVar5);
    if ((((*plVar5 != 0) && (lVar4 = *(long *)(*plVar5 + 0xe8), lVar4 != 0)) &&
        (lVar3 = *(long *)(lVar4 + 0x40), lVar3 != 0)) && (*(long *)(lVar4 + 0x48) != 0)) {
      fVar7 = *(float *)(lVar3 + 0x9c);
      fVar8 = *(float *)(lVar3 + 0xe8);
      fVar6 = (float)FUN_0694b568(*(long *)(lVar4 + 0x48),1,0);
      if (((*plVar5 != 0) && (lVar4 = *(long *)(*plVar5 + 0xe8), lVar4 != 0)) &&
         (lVar4 = *(long *)(lVar4 + 0x48), lVar4 != 0)) {
        *(float *)(param_1 + 0x80) = ((fVar7 * 9600.0) / fVar8) * fVar6 * *(float *)(lVar4 + 0x78);
        uVar2 = FUN_06973064(param_1);
        FUN_07c9ee6c(param_1,uVar2,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


