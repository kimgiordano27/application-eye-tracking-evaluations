/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.fsDirectConverter<LayerMask>$$TryDeserialize
ENTRY_POINT: 04d5b1bc
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_1;ray_or_cast_sink_hits_2;telemetry_or_network_hits_4
*/


long * Unity_VisualScripting_FullSerializer_fsDirectConverter<LayerMask>__TryDeserialize
                 (undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  int in_w9;
  long unaff_x19;
  undefined8 uVar3;
  long *unaff_x23;
  
  uVar3 = *param_1;
  if (in_w9 == 0) {
    thunk_FUN_032cd7c0();
  }
  uVar3 = FUN_059324dc(uVar3,0);
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_032cd7c0(*unaff_x23);
  }
  plVar1 = (long *)FUN_05965238(uVar3);
  lVar2 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_032934b8(lVar2);
  }
  lVar2 = **(long **)(lVar2 + 0xc0);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_032934b8(lVar2);
  }
  if (plVar1 != (long *)0x0) {
    if ((*(byte *)(*plVar1 + 0x130) < *(byte *)(lVar2 + 0x130)) ||
       (*(long *)(*(long *)(*plVar1 + 200) + (ulong)*(byte *)(lVar2 + 0x130) * 8 + -8) != lVar2)) {
                    /* WARNING: Subroutine does not return */
      FUN_032d618c(plVar1);
    }
  }
  return plVar1;
}


