/*
FUNCTION_NAME: Meta.WitAi.Requests.VRequestFirstResponseDelegate$$BeginInvoke
ENTRY_POINT: 013e5308
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_5;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_6;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Meta_WitAi_Requests_VRequestFirstResponseDelegate__BeginInvoke(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x19;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000060;
  
  FUN_02660dac();
  if (3 < *(int *)(unaff_x19 + 0x10)) {
    plVar3 = *(long **)(unaff_x19 + 0x20);
    if (plVar3 == (long *)0x0) goto LAB_013e5504;
    in_stack_00000060._4_4_ = (**(code **)(*plVar3 + 0x188))(plVar3,*(undefined8 *)(*plVar3 + 400));
    uVar4 = FUN_0176eb1c((long)&stack0x00000060 + 4,0);
    plVar3 = *(long **)(unaff_x19 + 0x20);
    if (plVar3 == (long *)0x0) goto LAB_013e5504;
    in_stack_00000060._4_4_ =
         (**(code **)(*plVar3 + 0x1a8))(plVar3,*(undefined8 *)(*plVar3 + 0x1b0));
    uVar5 = FUN_0176eb1c((long)&stack0x00000060 + 4,0);
    uVar4 = FUN_0160073c(*(undefined8 *)
                          Method_FullSerializer_fsBaseConverter_SerializeMember<RectOffset>__,uVar4,
                         *(undefined8 *)
                          Sirenix_OdinInspector_SelfValidationResultItemExtensions_<>c__DisplayClass6_0_TypeInfo
                         ,uVar5,0);
    if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)StringLiteral_302);
    }
    FUN_02660dac(uVar4,0);
  }
  plVar3 = *(long **)(unaff_x19 + 0x20);
  if (plVar3 != (long *)0x0) {
    uVar1 = (**(code **)(*plVar3 + 0x188))(plVar3,*(undefined8 *)(*plVar3 + 400));
    plVar3 = *(long **)(unaff_x19 + 0x20);
    if (plVar3 != (long *)0x0) {
      uVar2 = (**(code **)(*plVar3 + 0x1a8))(plVar3,*(undefined8 *)(*plVar3 + 0x1b0));
      lVar6 = thunk_FUN_00d62348(*(undefined8 *)
                                  SpaceShipCommunicationModule_<ScrambleHint>d__14_TypeInfo);
      if (lVar6 != 0) {
        FUN_02671b60(lVar6,uVar1,uVar2,5,1,0,0);
        FUN_013e663c(*(undefined8 *)(unaff_x19 + 0x20),in_stack_00000008._4_4_ & 1,0,
                     *(undefined4 *)(unaff_x19 + 0x10),lVar6);
        if (*(long *)(unaff_x19 + 0x28) != 0) {
          FUN_02684a90(*(long *)(unaff_x19 + 0x28),0,0);
          *(long *)(unaff_x19 + 0x60) = lVar6;
          if (3 < *(int *)(unaff_x19 + 0x10)) {
            in_stack_00000018 = FUN_020407b0();
            uVar4 = FUN_01770034(&stack0x00000018,*(undefined8 *)StringLiteral_12992,0);
            uVar4 = FUN_015f5b28(*(undefined8 *)
                                  UnityEngine_EventSystems_OVRPhysicsRaycaster_<>c_TypeInfo,uVar4,0)
            ;
            if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
              thunk_FUN_00d32864(*(long *)StringLiteral_302);
            }
            FUN_02660dac(uVar4,0);
          }
          return;
        }
      }
    }
  }
LAB_013e5504:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


