/*
FUNCTION_NAME: Meta.WitAi.Requests.VRequest$$set_Url
ENTRY_POINT: 013e540c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_3;ray_or_cast_sink_hits_2;telemetry_or_network_hits_4
*/


void Meta_WitAi_Requests_VRequest__set_Url(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x19;
  undefined4 unaff_w23;
  undefined4 unaff_w24;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000018;
  
  lVar1 = thunk_FUN_00d62348();
  if (lVar1 != 0) {
    FUN_02671b60(lVar1,unaff_w23,unaff_w24,5,1,0,0);
    FUN_013e663c(*(undefined8 *)(unaff_x19 + 0x20),in_stack_00000008._4_4_ & 1,0,
                 *(undefined4 *)(unaff_x19 + 0x10),lVar1);
    if (*(long *)(unaff_x19 + 0x28) != 0) {
      FUN_02684a90(*(long *)(unaff_x19 + 0x28),0,0);
      *(long *)(unaff_x19 + 0x60) = lVar1;
      if (3 < *(int *)(unaff_x19 + 0x10)) {
        in_stack_00000018 = FUN_020407b0();
        uVar2 = FUN_01770034(&stack0x00000018,*(undefined8 *)StringLiteral_12992,0);
        uVar2 = FUN_015f5b28(*(undefined8 *)
                              UnityEngine_EventSystems_OVRPhysicsRaycaster_<>c_TypeInfo,uVar2,0);
        if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)StringLiteral_302);
        }
        FUN_02660dac(uVar2,0);
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


