/*
FUNCTION_NAME: Unity.Mathematics.uint4$$get_zzx
ENTRY_POINT: 064e6c54
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_9;validity_or_gating_hits_5;ray_or_cast_sink_hits_10;telemetry_or_network_hits_7;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Unity_Mathematics_uint4__get_zzx(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
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
  
  puVar1 = PTR_DAT_07279510;
  if ((DAT_076df7c6 & 1) == 0) {
    thunk_FUN_032e1da0(
                      Method_UnityEngine_XR_ARFoundation_ARTrackable<XRParticipant,_ARParticipant>__ctor__
                      );
    thunk_FUN_032e1da0(
                      Method_UnityEngine_XR_ARFoundation_ARTrackable<XRParticipant,_ARParticipant>_get_sessionRelativeData__
                      );
    thunk_FUN_032e1da0(
                      Method_UnityEngine_XR_ARFoundation_ARTrackable<XRPointCloud,_ARPointCloud>__ctor__
                      );
    thunk_FUN_032e1da0(
                      Method_UnityEngine_XR_ARFoundation_ARTrackable<XRPointCloud,_ARPointCloud>_get_trackableId__
                      );
    thunk_FUN_032e1da0(
                      Method_UnityEngine_XR_ARFoundation_ARTrackable<XRPointCloud,_ARPointCloud>_get_trackingState__
                      );
    thunk_FUN_032e1da0(Method_UnityEngine_XR_ARFoundation_ARTrackable<XRRaycast,_ARRaycast>__ctor__)
    ;
    thunk_FUN_032e1da0(PTR_DAT_072808a8);
    thunk_FUN_032e1da0(
                      Method_UnityEngine_XR_ARFoundation_ARTrackable<XRRaycast,_ARRaycast>_get_sessionRelativeData__
                      );
    thunk_FUN_032e1da0(
                      Method_UnityEngine_XR_ARFoundation_ARTrackable<XRRaycast,_ARRaycast>_get_trackableId__
                      );
    thunk_FUN_032e1da0(
                      Method_UnityEngine_XR_ARFoundation_ARTrackable<XRTrackedImage,_ARTrackedImage>__ctor__
                      );
    thunk_FUN_032e1da0(PTR_DAT_07279510);
    thunk_FUN_032e1da0(
                      Method_UnityEngine_XR_ARFoundation_ARTrackable<XRTrackedImage,_ARTrackedImage>_get_sessionRelativeData__
                      );
    DAT_076df7c6 = 1;
  }
  in_stack_00000028 = 0;
  in_stack_00000020 = 0;
  in_stack_00000038 = 0;
  in_stack_00000030 = 0;
  in_stack_00000048 = 0;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  uVar6 = FUN_0593b434(param_1,0,0);
  if ((uVar6 & 1) != 0) {
    thunk_FUN_032e1da0(PTR_DAT_0727dbc0);
    uVar8 = thunk_FUN_032a56a0();
    uVar10 = thunk_FUN_032e1da0(PTR_DAT_07281148);
    FUN_05897d14(uVar8,uVar10,0);
    uVar10 = thunk_FUN_032e1da0(
                               Method_UnityEngine_XR_ARFoundation_ARTrackable<XRTrackedObject,_ARTrackedObject>__ctor__
                               );
                    /* WARNING: Subroutine does not return */
    FUN_032d5dbc(uVar8,uVar10);
  }
  uVar6 = FUN_057ab1f0(param_2,0);
  if ((uVar6 & 1) != 0) {
    if (param_1 == (long *)0x0) goto Unity_Mathematics_uint4__set_zx;
    param_2 = (**(code **)(*param_1 + 0x1b8))(param_1,*(undefined8 *)(*param_1 + 0x1c0));
    puVar1 = 
    Method_UnityEngine_XR_ARFoundation_ARTrackable<XRTrackedImage,_ARTrackedImage>_get_sessionRelativeData__
    ;
    if (param_2 == 0) goto Unity_Mathematics_uint4__set_zx;
    uVar6 = FUN_057a9fb8(param_2,*(undefined8 *)
                                  Method_UnityEngine_XR_ARFoundation_ARTrackable<XRTrackedImage,_ARTrackedImage>_get_sessionRelativeData__
                         ,0);
    if ((uVar6 & 1) != 0) {
      if (*(long *)puVar1 == 0) goto Unity_Mathematics_uint4__set_zx;
      param_2 = FUN_057ac834(param_2,0,*(int *)(param_2 + 0x10) - *(int *)(*(long *)puVar1 + 0x10),0
                            );
    }
  }
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
      while (uVar6 = FUN_052cb41c(&stack0x00000020,*(undefined8 *)puVar5),
            uVar10 = in_stack_00000038, uVar8 = in_stack_00000030, (uVar6 & 1) != 0) {
        FUN_050bd0bc(lVar7,in_stack_00000030,in_stack_00000038,*(undefined8 *)puVar3);
        uVar6 = FUN_064e0ae8(extraout_x1,param_2,0x3b,0);
        if ((uVar6 & 1) != 0) {
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
          FUN_050be688(lVar9,uVar8,uVar10,*(undefined8 *)puVar2);
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
        FUN_064e2fa0(&stack0x00000048,param_2,param_1,0);
        return;
      }
    }
  }
Unity_Mathematics_uint4__set_zx:
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


