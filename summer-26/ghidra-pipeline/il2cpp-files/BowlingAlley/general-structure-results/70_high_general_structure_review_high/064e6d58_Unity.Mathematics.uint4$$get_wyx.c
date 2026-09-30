/*
FUNCTION_NAME: Unity.Mathematics.uint4$$get_wyx
ENTRY_POINT: 064e6d58
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_5;validity_or_gating_hits_4;ray_or_cast_sink_hits_4;telemetry_or_network_hits_4;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Unity_Mathematics_uint4__get_wyx(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
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
  
  lVar7 = (**(code **)(param_1 + 0x1b8))(param_2,*(undefined8 *)(param_1 + 0x1c0));
  puVar1 = 
  Method_UnityEngine_XR_ARFoundation_ARTrackable<XRTrackedImage,_ARTrackedImage>_get_sessionRelativeData__
  ;
  if (lVar7 != 0) {
    uVar8 = FUN_057a9fb8(lVar7,*(undefined8 *)
                                Method_UnityEngine_XR_ARFoundation_ARTrackable<XRTrackedImage,_ARTrackedImage>_get_sessionRelativeData__
                         ,0);
    if ((uVar8 & 1) != 0) {
      if (*(long *)puVar1 == 0) goto Unity_Mathematics_uint4__set_zx;
      lVar7 = FUN_057ac834(lVar7,0,*(int *)(lVar7 + 0x10) - *(int *)(*(long *)puVar1 + 0x10),0);
    }
    puVar1 = PTR_DAT_072808a8;
    lVar9 = *(long *)PTR_DAT_072808a8;
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar9 = *(long *)puVar1;
    }
    puVar3 = Method_UnityEngine_XR_ARFoundation_ARTrackable<XRTrackedImage,_ARTrackedImage>__ctor__;
    puVar2 = Method_UnityEngine_XR_ARFoundation_ARTrackable<XRRaycast,_ARRaycast>_get_trackableId__;
    if ((**(long **)(lVar9 + 0xb8) != 0) &&
       (lVar9 = *(long *)(**(long **)(lVar9 + 0xb8) + 0x48), lVar9 != 0)) {
      uVar10 = FUN_050bce1c(lVar9,*(undefined8 *)
                                   Method_UnityEngine_XR_ARFoundation_ARTrackable<XRPointCloud,_ARPointCloud>__ctor__
                           );
      lVar11 = thunk_FUN_032a56a0(*(undefined8 *)puVar3);
      FUN_041a4f88(lVar11,uVar10,*(undefined8 *)puVar2);
      puVar5 = 
      Method_UnityEngine_XR_ARFoundation_ARTrackable<XRPointCloud,_ARPointCloud>_get_trackingState__
      ;
      puVar4 = 
      Method_UnityEngine_XR_ARFoundation_ARTrackable<XRPointCloud,_ARPointCloud>_get_trackableId__;
      puVar3 = 
      Method_UnityEngine_XR_ARFoundation_ARTrackable<XRParticipant,_ARParticipant>_get_sessionRelativeData__
      ;
      puVar2 = Method_UnityEngine_XR_ARFoundation_ARTrackable<XRParticipant,_ARParticipant>__ctor__;
      if (lVar11 != 0) {
        FUN_041a6154(lVar11,*(undefined8 *)
                             Method_UnityEngine_XR_ARFoundation_ARTrackable<XRRaycast,_ARRaycast>_get_sessionRelativeData__
                    );
        in_stack_00000028 = in_stack_00000008;
        in_stack_00000020 = in_stack_00000000;
        in_stack_00000038 = in_stack_00000018;
        in_stack_00000030 = in_stack_00000010;
        while (uVar8 = FUN_052cb41c(&stack0x00000020,*(undefined8 *)puVar5),
              uVar6 = in_stack_00000038, uVar10 = in_stack_00000030, (uVar8 & 1) != 0) {
          FUN_050bd0bc(lVar9,in_stack_00000030,in_stack_00000038,*(undefined8 *)puVar3);
          uVar8 = FUN_064e0ae8(extraout_x1,lVar7,0x3b,0);
          if ((uVar8 & 1) != 0) {
            lVar11 = *(long *)puVar1;
            if (*(int *)(lVar11 + 0xe0) == 0) {
              thunk_FUN_032cd7c0();
              lVar11 = *(long *)puVar1;
            }
            if (**(long **)(lVar11 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_032d5ee8();
            }
            lVar11 = *(long *)(**(long **)(lVar11 + 0xb8) + 0x48);
            if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_032d5ee8();
            }
            FUN_050be688(lVar11,uVar10,uVar6,*(undefined8 *)puVar2);
          }
        }
        FUN_052cb418(&stack0x00000020,*(undefined8 *)puVar4);
        lVar9 = *(long *)puVar1;
        if (*(int *)(lVar9 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
          lVar9 = *(long *)puVar1;
        }
        if (**(long **)(lVar9 + 0xb8) != 0) {
          in_stack_00000048 = *(undefined8 *)(**(long **)(lVar9 + 0xb8) + 0x58);
          FUN_064e2fa0(&stack0x00000048,lVar7);
          return;
        }
      }
    }
  }
Unity_Mathematics_uint4__set_zx:
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


