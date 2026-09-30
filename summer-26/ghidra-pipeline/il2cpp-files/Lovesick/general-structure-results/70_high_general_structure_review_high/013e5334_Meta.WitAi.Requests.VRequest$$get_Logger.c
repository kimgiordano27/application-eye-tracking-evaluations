/*
FUNCTION_NAME: Meta.WitAi.Requests.VRequest$$get_Logger
ENTRY_POINT: 013e5334
PROGRAM: Lovesick-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_4;ray_or_cast_sink_hits_2;telemetry_or_network_hits_6
*/


void Meta_WitAi_Requests_VRequest__get_Logger(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  long unaff_x19;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000018;
  undefined4 uStack0000000000000064;
  
                    /* try { // try from 013e5334 to 014e536f has its CatchHandler @ 013e4e9c */
  uStack0000000000000064 = param_1;
  uVar3 = FUN_0176eb1c(&stack0x00000064,0);
  plVar6 = *(long **)(unaff_x19 + 0x20);
  if (plVar6 != (long *)0x0) {
    uStack0000000000000064 = (**(code **)(*plVar6 + 0x1a8))(plVar6,*(undefined8 *)(*plVar6 + 0x1b0))
    ;
    uVar4 = FUN_0176eb1c(&stack0x00000064,0);
    uVar3 = FUN_0160073c(*(undefined8 *)
                          Method_FullSerializer_fsBaseConverter_SerializeMember<RectOffset>__,uVar3,
                         *(undefined8 *)
                          Sirenix_OdinInspector_SelfValidationResultItemExtensions_<>c__DisplayClass6_0_TypeInfo
                         ,uVar4,0);
    if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)StringLiteral_302);
    }
    FUN_02660dac(uVar3,0);
    plVar6 = *(long **)(unaff_x19 + 0x20);
    if (plVar6 != (long *)0x0) {
      uVar1 = (**(code **)(*plVar6 + 0x188))(plVar6,*(undefined8 *)(*plVar6 + 400));
      plVar6 = *(long **)(unaff_x19 + 0x20);
      if (plVar6 != (long *)0x0) {
        uVar2 = (**(code **)(*plVar6 + 0x1a8))(plVar6,*(undefined8 *)(*plVar6 + 0x1b0));
        lVar5 = thunk_FUN_00d62348(*(undefined8 *)
                                    SpaceShipCommunicationModule_<ScrambleHint>d__14_TypeInfo);
        if (lVar5 != 0) {
          FUN_02671b60(lVar5,uVar1,uVar2,5,1,0,0);
          FUN_013e663c(*(undefined8 *)(unaff_x19 + 0x20),in_stack_00000008._4_4_ & 1,0,
                       *(undefined4 *)(unaff_x19 + 0x10),lVar5);
          if (*(long *)(unaff_x19 + 0x28) != 0) {
            FUN_02684a90(*(long *)(unaff_x19 + 0x28),0,0);
            *(long *)(unaff_x19 + 0x60) = lVar5;
            if (3 < *(int *)(unaff_x19 + 0x10)) {
              in_stack_00000018 = FUN_020407b0();
              uVar3 = FUN_01770034(&stack0x00000018,*(undefined8 *)StringLiteral_12992,0);
              uVar3 = FUN_015f5b28(*(undefined8 *)
                                    UnityEngine_EventSystems_OVRPhysicsRaycaster_<>c_TypeInfo,uVar3,
                                   0);
              if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
                thunk_FUN_00d32864(*(long *)StringLiteral_302);
              }
              FUN_02660dac(uVar3,0);
            }
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


