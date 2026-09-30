/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.LayerMask_DirectConverter$$DoSerialize
ENTRY_POINT: 083f6290
PROGRAM: cac-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_2;ray_or_cast_sink_hits_2;telemetry_or_network_hits_4
*/


void Unity_VisualScripting_FullSerializer_LayerMask_DirectConverter__DoSerialize(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uVar6;
  
  FUN_03f13384(*(undefined8 *)(param_1 + 0x388));
  FUN_03f13384(PTR_DAT_0918a128);
  *(undefined1 *)(unaff_x20 + 0xef7) = 1;
  uVar3 = FUN_083f6178();
  puVar2 = PTR_DAT_0918a128;
  puVar1 = PTR_DAT_0910c388;
  uVar5 = 0x3ff0000000000000;
  if ((uVar3 >> 3 & 1) != 0) {
    lVar4 = *(long *)PTR_DAT_0918a128;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
      lVar4 = *(long *)puVar2;
    }
                    /* try { // try from 083f62e0 to 084f6333 has its CatchHandler @ 083f64d8 */
    uVar5 = *(undefined8 *)(*(long *)(lVar4 + 0xb8) + 8);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_03f6fea8(*(long *)puVar1);
    }
    uVar6 = FUN_074b6688(0);
    uVar5 = FUN_074b6538(uVar5,uVar6,0);
  }
  if (unaff_x19 != 0) {
    *(undefined8 *)(unaff_x19 + 0x38) = uVar5;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f1362c();
}


