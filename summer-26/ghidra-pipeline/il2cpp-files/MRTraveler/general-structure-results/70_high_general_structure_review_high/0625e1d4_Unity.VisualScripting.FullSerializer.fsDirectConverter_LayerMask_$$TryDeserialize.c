/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.fsDirectConverter<LayerMask>$$TryDeserialize
ENTRY_POINT: 0625e1d4
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_2;ray_or_cast_sink_hits_2;telemetry_or_network_hits_4
*/


undefined8
Unity_VisualScripting_FullSerializer_fsDirectConverter<LayerMask>__TryDeserialize(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long *unaff_x19;
  long unaff_x20;
  undefined1 auVar5 [16];
  long in_stack_00000000;
  long in_stack_00000008;
  long in_stack_00000010;
  long in_stack_00000018;
  
  if (param_1 != 0) {
    FUN_050bf5cc(param_1,*(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x40));
    unaff_x19[9] = in_stack_00000008;
    unaff_x19[8] = in_stack_00000000;
    unaff_x19[0xb] = in_stack_00000018;
    unaff_x19[10] = in_stack_00000010;
    thunk_FUN_03d233cc(unaff_x19 + 8,0);
    *(undefined4 *)((long)unaff_x19 + 0x14) = 2;
    do {
      uVar3 = FUN_06bf7dac(unaff_x19 + 8,
                           *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x80));
      if ((uVar3 & 1) == 0) {
        (**(code **)(*unaff_x19 + 0x1f8))();
        return 0;
      }
      lVar4 = unaff_x19[6];
      lVar1 = unaff_x19[10];
      lVar2 = unaff_x19[0xb];
    } while ((lVar4 != 0) &&
            (uVar3 = (**(code **)(lVar4 + 0x18))
                               (*(undefined8 *)(lVar4 + 0x40),lVar1,lVar2,
                                *(undefined8 *)(lVar4 + 0x28)), (uVar3 & 1) == 0));
    lVar4 = unaff_x19[7];
    if (lVar4 != 0) {
      auVar5 = (**(code **)(lVar4 + 0x18))
                         (*(undefined8 *)(lVar4 + 0x40),lVar1,lVar2,*(undefined8 *)(lVar4 + 0x28));
      *(undefined1 (*) [16])(unaff_x19 + 3) = auVar5;
      thunk_FUN_03d233cc((undefined1 (*) [16])(unaff_x19 + 3),0);
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


