/*
FUNCTION_NAME: Unity.Mathematics.uint4$$set_wzy
ENTRY_POINT: 064e6e00
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_3;ray_or_cast_sink_hits_2;telemetry_or_network_hits_1
*/


void Unity_Mathematics_uint4__set_wzy(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 extraout_x1;
  long *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000048;
  
  lVar6 = thunk_FUN_032a56a0(param_1);
  FUN_041a4f88(lVar6,param_2,*unaff_x25);
  puVar3 = 
  Method_UnityEngine_XR_ARFoundation_ARTrackable<XRPointCloud,_ARPointCloud>_get_trackingState__;
  puVar2 = 
  Method_UnityEngine_XR_ARFoundation_ARTrackable<XRPointCloud,_ARPointCloud>_get_trackableId__;
  puVar1 = Method_UnityEngine_XR_ARFoundation_ARTrackable<XRParticipant,_ARParticipant>__ctor__;
  if (lVar6 != 0) {
    FUN_041a6154(lVar6,*(undefined8 *)
                        Method_UnityEngine_XR_ARFoundation_ARTrackable<XRRaycast,_ARRaycast>_get_sessionRelativeData__
                );
    in_stack_00000028 = in_stack_00000008;
    in_stack_00000020 = in_stack_00000000;
    in_stack_00000038 = in_stack_00000018;
    in_stack_00000030 = in_stack_00000010;
    while (uVar7 = FUN_052cb41c(&stack0x00000020,*(undefined8 *)puVar3), uVar5 = in_stack_00000038,
          uVar4 = in_stack_00000030, (uVar7 & 1) != 0) {
      FUN_050bd0bc();
      uVar7 = FUN_064e0ae8(extraout_x1);
      if ((uVar7 & 1) != 0) {
        lVar6 = *unaff_x24;
        if (*(int *)(lVar6 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
          lVar6 = *unaff_x24;
        }
        if (**(long **)(lVar6 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        lVar6 = *(long *)(**(long **)(lVar6 + 0xb8) + 0x48);
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        FUN_050be688(lVar6,uVar4,uVar5,*(undefined8 *)puVar1);
      }
    }
    FUN_052cb418(&stack0x00000020,*(undefined8 *)puVar2);
    lVar6 = *unaff_x24;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar6 = *unaff_x24;
    }
    if (**(long **)(lVar6 + 0xb8) != 0) {
      in_stack_00000048 = *(undefined8 *)(**(long **)(lVar6 + 0xb8) + 0x58);
      FUN_064e2fa0(&stack0x00000048);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


