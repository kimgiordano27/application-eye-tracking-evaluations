/*
FUNCTION_NAME: Skonec.MinigameManager.<RequestStartGameWithDelay>d__89$$SetStateMachine
ENTRY_POINT: 03e895ec
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_2;ray_or_cast_sink_hits_1;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void Skonec_MinigameManager_<RequestStartGameWithDelay>d__89__SetStateMachine(void)

{
  undefined4 uVar1;
  byte bVar2;
  long lVar3;
  long *plVar4;
  byte unaff_w19;
  long unaff_x20;
  undefined4 unaff_w21;
  long unaff_x22;
  
  FUN_03c8f898(PTR_DAT_08e6f098);
  *(undefined1 *)(unaff_x22 + 0x55e) = 1;
  *(undefined4 *)(unaff_x20 + 0x50) = 2;
  if (((*(long *)(unaff_x20 + 0x48) != 0) &&
      (lVar3 = System_Collections_Generic_Dictionary<object,_PokeInteractor_SurfaceHitCache_HitInfo>__TryInsert
                         (*(long *)(unaff_x20 + 0x48),2,*(undefined8 *)PTR_DAT_08e6f090), lVar3 != 0
      )) && (plVar4 = *(long **)(lVar3 + 0x20), plVar4 != (long *)0x0)) {
    bVar2 = *(byte *)(*(long *)PTR_DAT_08e6f098 + 0x130);
    if ((bVar2 <= *(byte *)(*plVar4 + 0x130)) &&
       (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar2 * 8 + -8) == *(long *)PTR_DAT_08e6f098)) {
      uVar1 = *(undefined4 *)(unaff_x20 + 100);
      *(undefined4 *)((long)plVar4 + 0x14) = uVar1;
      *(undefined4 *)(plVar4 + 3) = unaff_w21;
      *(undefined4 *)(plVar4 + 2) = uVar1;
      *(undefined4 *)((long)plVar4 + 0x1c) = *(undefined4 *)(unaff_x20 + 0x3c);
      *(byte *)(plVar4 + 4) = unaff_w19 & 1;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


