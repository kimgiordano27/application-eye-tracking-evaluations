/*
FUNCTION_NAME: Unity.Mathematics.uint4$$get_wyz
ENTRY_POINT: 064e6d90
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


void Unity_Mathematics_uint4__get_wyz(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
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
  
  uVar7 = FUN_057ac834();
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
      while (uVar11 = FUN_052cb41c(&stack0x00000020,*(undefined8 *)puVar5),
            uVar6 = in_stack_00000038, uVar9 = in_stack_00000030, (uVar11 & 1) != 0) {
        FUN_050bd0bc(lVar8,in_stack_00000030,in_stack_00000038,*(undefined8 *)puVar3);
        uVar11 = FUN_064e0ae8(extraout_x1,uVar7,0x3b,0);
        if ((uVar11 & 1) != 0) {
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
        FUN_064e2fa0(&stack0x00000048,uVar7);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


