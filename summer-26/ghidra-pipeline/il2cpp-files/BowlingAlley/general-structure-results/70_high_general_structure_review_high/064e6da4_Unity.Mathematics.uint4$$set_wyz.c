/*
FUNCTION_NAME: Unity.Mathematics.uint4$$set_wyz
ENTRY_POINT: 064e6da4
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 86
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_3;ray_or_cast_sink_hits_4;telemetry_or_network_hits_2
*/


void Unity_Mathematics_uint4__set_wyz(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  undefined8 extraout_x1;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000048;
  
  puVar1 = PTR_DAT_072808a8;
  lVar7 = *(long *)PTR_DAT_072808a8;
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar7 = *(long *)puVar1;
  }
  puVar3 = Method_UnityEngine_XR_ARFoundation_ARTrackable<XRTrackedImage,_ARTrackedImage>__ctor__;
  puVar2 = Method_UnityEngine_XR_ARFoundation_ARTrackable<XRRaycast,_ARRaycast>_get_trackableId__;
  if ((**(long **)(lVar7 + 0xb8) != 0) &&
     (lVar7 = *(long *)(**(long **)(lVar7 + 0xb8) + 0x48), lVar7 != 0)) {
    uVar8 = FUN_050bce1c(lVar7,*(undefined8 *)
                                Method_UnityEngine_XR_ARFoundation_ARTrackable<XRPointCloud,_ARPointCloud>__ctor__
                        );
    lVar9 = thunk_FUN_032a56a0(*(undefined8 *)puVar3);
    FUN_041a4f88(lVar9,uVar8,*(undefined8 *)puVar2);
    puVar5 = 
    Method_UnityEngine_XR_ARFoundation_ARTrackable<XRPointCloud,_ARPointCloud>_get_trackingState__;
    puVar4 = 
    Method_UnityEngine_XR_ARFoundation_ARTrackable<XRPointCloud,_ARPointCloud>_get_trackableId__;
    puVar3 = 
    Method_UnityEngine_XR_ARFoundation_ARTrackable<XRParticipant,_ARParticipant>_get_sessionRelativeData__
    ;
    puVar2 = Method_UnityEngine_XR_ARFoundation_ARTrackable<XRParticipant,_ARParticipant>__ctor__;
    if (lVar9 != 0) {
      FUN_041a6154(lVar9,*(undefined8 *)
                          Method_UnityEngine_XR_ARFoundation_ARTrackable<XRRaycast,_ARRaycast>_get_sessionRelativeData__
                  );
      in_stack_00000028 = in_stack_00000008;
      in_stack_00000020 = in_stack_00000000;
      in_stack_00000038 = in_stack_00000018;
      in_stack_00000030 = in_stack_00000010;
      while (uVar10 = FUN_052cb41c(&stack0x00000020,*(undefined8 *)puVar5),
            uVar6 = in_stack_00000038, uVar8 = in_stack_00000030, (uVar10 & 1) != 0) {
        FUN_050bd0bc(lVar7,in_stack_00000030,in_stack_00000038,*(undefined8 *)puVar3);
        uVar10 = FUN_064e0ae8(extraout_x1,param_1,0x3b,0);
        if ((uVar10 & 1) != 0) {
          lVar9 = *(long *)puVar1;
          if (*(int *)(lVar9 + 0xe0) == 0) {
            thunk_FUN_032cd7c0();
            lVar9 = *(long *)puVar1;
          }
          if (**(long **)(lVar9 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_032d5ee8();
          }
          lVar9 = *(long *)(**(long **)(lVar9 + 0xb8) + 0x48);
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_032d5ee8();
          }
          FUN_050be688(lVar9,uVar8,uVar6,*(undefined8 *)puVar2);
        }
      }
      FUN_052cb418(&stack0x00000020,*(undefined8 *)puVar4);
      lVar7 = *(long *)puVar1;
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar7 = *(long *)puVar1;
      }
      if (**(long **)(lVar7 + 0xb8) != 0) {
        in_stack_00000048 = *(undefined8 *)(**(long **)(lVar7 + 0xb8) + 0x58);
        FUN_064e2fa0(&stack0x00000048,param_1);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


