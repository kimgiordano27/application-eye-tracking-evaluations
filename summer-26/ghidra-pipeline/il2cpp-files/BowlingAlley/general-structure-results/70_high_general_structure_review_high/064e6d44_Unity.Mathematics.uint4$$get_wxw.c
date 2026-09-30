/*
FUNCTION_NAME: Unity.Mathematics.uint4$$get_wxw
ENTRY_POINT: 064e6d44
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


void Unity_Mathematics_uint4__get_wxw(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 extraout_x1;
  long *unaff_x19;
  long unaff_x20;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000048;
  
  uVar7 = FUN_057ab1f0();
  if ((uVar7 & 1) != 0) {
    if (unaff_x19 == (long *)0x0) goto Unity_Mathematics_uint4__set_zx;
    unaff_x20 = (**(code **)(*unaff_x19 + 0x1b8))();
    puVar1 = 
    Method_UnityEngine_XR_ARFoundation_ARTrackable<XRTrackedImage,_ARTrackedImage>_get_sessionRelativeData__
    ;
    if (unaff_x20 == 0) goto Unity_Mathematics_uint4__set_zx;
    uVar7 = FUN_057a9fb8(unaff_x20,
                         *(undefined8 *)
                          Method_UnityEngine_XR_ARFoundation_ARTrackable<XRTrackedImage,_ARTrackedImage>_get_sessionRelativeData__
                         ,0);
    if ((uVar7 & 1) != 0) {
      if (*(long *)puVar1 == 0) goto Unity_Mathematics_uint4__set_zx;
      unaff_x20 = FUN_057ac834(unaff_x20,0,
                               *(int *)(unaff_x20 + 0x10) - *(int *)(*(long *)puVar1 + 0x10),0);
    }
  }
  puVar1 = PTR_DAT_072808a8;
  lVar8 = *(long *)PTR_DAT_072808a8;
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar8 = *(long *)puVar1;
  }
  puVar3 = Method_UnityEngine_XR_ARFoundation_ARTrackable<XRTrackedImage,_ARTrackedImage>__ctor__;
  puVar2 = Method_UnityEngine_XR_ARFoundation_ARTrackable<XRRaycast,_ARRaycast>_get_trackableId__;
  if ((**(long **)(lVar8 + 0xb8) != 0) &&
     (lVar8 = *(long *)(**(long **)(lVar8 + 0xb8) + 0x48), lVar8 != 0)) {
    uVar9 = FUN_050bce1c(lVar8,*(undefined8 *)
                                Method_UnityEngine_XR_ARFoundation_ARTrackable<XRPointCloud,_ARPointCloud>__ctor__
                        );
    lVar10 = thunk_FUN_032a56a0(*(undefined8 *)puVar3);
    FUN_041a4f88(lVar10,uVar9,*(undefined8 *)puVar2);
    puVar5 = 
    Method_UnityEngine_XR_ARFoundation_ARTrackable<XRPointCloud,_ARPointCloud>_get_trackingState__;
    puVar4 = 
    Method_UnityEngine_XR_ARFoundation_ARTrackable<XRPointCloud,_ARPointCloud>_get_trackableId__;
    puVar3 = 
    Method_UnityEngine_XR_ARFoundation_ARTrackable<XRParticipant,_ARParticipant>_get_sessionRelativeData__
    ;
    puVar2 = Method_UnityEngine_XR_ARFoundation_ARTrackable<XRParticipant,_ARParticipant>__ctor__;
    if (lVar10 != 0) {
      FUN_041a6154(lVar10,*(undefined8 *)
                           Method_UnityEngine_XR_ARFoundation_ARTrackable<XRRaycast,_ARRaycast>_get_sessionRelativeData__
                  );
      in_stack_00000028 = in_stack_00000008;
      in_stack_00000020 = in_stack_00000000;
      in_stack_00000038 = in_stack_00000018;
      in_stack_00000030 = in_stack_00000010;
      while (uVar7 = FUN_052cb41c(&stack0x00000020,*(undefined8 *)puVar5), uVar6 = in_stack_00000038
            , uVar9 = in_stack_00000030, (uVar7 & 1) != 0) {
        FUN_050bd0bc(lVar8,in_stack_00000030,in_stack_00000038,*(undefined8 *)puVar3);
        uVar7 = FUN_064e0ae8(extraout_x1,unaff_x20,0x3b,0);
        if ((uVar7 & 1) != 0) {
          lVar10 = *(long *)puVar1;
          if (*(int *)(lVar10 + 0xe0) == 0) {
            thunk_FUN_032cd7c0();
            lVar10 = *(long *)puVar1;
          }
          if (**(long **)(lVar10 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_032d5ee8();
          }
          lVar10 = *(long *)(**(long **)(lVar10 + 0xb8) + 0x48);
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_032d5ee8();
          }
          FUN_050be688(lVar10,uVar9,uVar6,*(undefined8 *)puVar2);
        }
      }
      FUN_052cb418(&stack0x00000020,*(undefined8 *)puVar4);
      lVar8 = *(long *)puVar1;
      if (*(int *)(lVar8 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar8 = *(long *)puVar1;
      }
      if (**(long **)(lVar8 + 0xb8) != 0) {
        in_stack_00000048 = *(undefined8 *)(**(long **)(lVar8 + 0xb8) + 0x58);
        FUN_064e2fa0(&stack0x00000048,unaff_x20);
        return;
      }
    }
  }
Unity_Mathematics_uint4__set_zx:
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


