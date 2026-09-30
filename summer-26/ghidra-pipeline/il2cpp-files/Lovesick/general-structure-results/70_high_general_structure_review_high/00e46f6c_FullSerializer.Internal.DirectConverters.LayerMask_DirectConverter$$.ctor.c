/*
FUNCTION_NAME: FullSerializer.Internal.DirectConverters.LayerMask_DirectConverter$$.ctor
ENTRY_POINT: 00e46f6c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_2;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FullSerializer_Internal_DirectConverters_LayerMask_DirectConverter___ctor(void)

{
  ulong uVar1;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = thunk_FUN_015fe514();
  if ((uVar1 & 1) == 0) {
    if (unaff_x19 == 0) goto LAB_00e4706c;
    uVar2 = *(undefined8 *)(unaff_x20 + 0x8c);
    uVar3 = *(undefined8 *)(unaff_x20 + 0x94);
  }
  else {
    uVar2 = _DAT_028aa090;
    uVar3 = _UNK_028aa098;
    if (unaff_x19 == 0) {
LAB_00e4706c:
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
  }
  *(undefined8 *)(unaff_x19 + 0x20) = uVar3;
  *(undefined8 *)(unaff_x19 + 0x18) = uVar2;
  return;
}


