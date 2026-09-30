/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.fsDirectConverter<LayerMask>$$TrySerialize
ENTRY_POINT: 06917a2c
PROGRAM: m3ar-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_2;ray_or_cast_sink_hits_2;telemetry_or_network_hits_4
*/


undefined8 Unity_VisualScripting_FullSerializer_fsDirectConverter<LayerMask>__TrySerialize(void)

{
  long lVar1;
  undefined4 uVar2;
  ulong uVar3;
  long lVar4;
  long *unaff_x19;
  long unaff_x20;
  
  while( true ) {
    lVar4 = unaff_x19[5];
    lVar1 = unaff_x19[9];
    if ((lVar4 == 0) ||
       (uVar3 = (**(code **)(lVar4 + 0x18))
                          (*(undefined8 *)(lVar4 + 0x40),(int)lVar1,*(undefined8 *)(lVar4 + 0x28)),
       (uVar3 & 1) != 0)) break;
    uVar3 = FUN_071f94a0(unaff_x19 + 7,
                         *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x80));
    if ((uVar3 & 1) == 0) {
      (**(code **)(*unaff_x19 + 0x1f8))();
      return 0;
    }
  }
  lVar4 = unaff_x19[6];
  if (lVar4 != 0) {
    uVar2 = (**(code **)(lVar4 + 0x18))
                      (*(undefined8 *)(lVar4 + 0x40),(int)lVar1,*(undefined8 *)(lVar4 + 0x28));
    *(undefined4 *)(unaff_x19 + 3) = uVar2;
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


