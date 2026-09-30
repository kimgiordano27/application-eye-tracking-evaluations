/*
FUNCTION_NAME: OVRMeshJobs.NativeArrayHelper<OVRPlugin.Vector4s>$$.ctor
ENTRY_POINT: 04c8ea90
PROGRAM: Waifu-libil2cpp.so
SCORE: 84
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


int OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector4s>___ctor(long param_1)

{
  ulong uVar1;
  ulong *puVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  long *unaff_x19;
  long unaff_x21;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  
  if (*(long *)(*unaff_x19 + 0x40) != *(long *)(param_1 + 0x40)) {
                    /* WARNING: Subroutine does not return */
    FUN_033d1fec();
  }
  lVar11 = unaff_x19[5];
  lVar10 = unaff_x19[4];
  lVar9 = unaff_x19[7];
  lVar8 = unaff_x19[6];
                    /* catch() { ... } // from try @ 04c8ebe0 with catch @ 04c8eaac
                       catch() { ... } // from try @ 04c8ec0c with catch @ 04c8eaac
                       catch() { ... } // from try @ 04c8ec40 with catch @ 04c8eaac
                       catch() { ... } // from try @ 04c8ecb4 with catch @ 04c8eaac */
  lVar13 = unaff_x19[3];
  lVar12 = unaff_x19[2];
  lVar6 = *(long *)(unaff_x21 + 0x10);
  *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
                    /* try { // try from 04c8eadc to 04d8ebdf has its CatchHandler @ 04c8ec0c */
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_033d1d3c();
  }
  uVar3 = *(uint *)(unaff_x21 + 0x18);
  if (uVar3 < *(uint *)(lVar6 + 0x18)) {
    *(uint *)(unaff_x21 + 0x18) = uVar3 + 1;
    lVar7 = lVar6 + (long)(int)uVar3 * 0x30;
    *(long *)(lVar7 + 0x38) = lVar11;
    *(long *)(lVar7 + 0x30) = lVar10;
    *(long *)(lVar7 + 0x48) = lVar9;
    *(long *)(lVar7 + 0x40) = lVar8;
    *(long *)(lVar7 + 0x28) = lVar13;
    *(long *)(lVar7 + 0x20) = lVar12;
    if (DAT_08908cd0 != 0) {
      uVar1 = lVar6 + (long)(int)uVar3 * 0x30 + 0x28;
      puVar2 = &DAT_0873ccb0 + (uVar1 >> 0x12 & 0x7fff);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar5) {
          *puVar2 = *puVar2 | 1L << (uVar1 >> 0xc & 0x3f);
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
  }
  else {
    FUN_04c8e968();
  }
  return *(int *)(unaff_x21 + 0x18) + -1;
}


