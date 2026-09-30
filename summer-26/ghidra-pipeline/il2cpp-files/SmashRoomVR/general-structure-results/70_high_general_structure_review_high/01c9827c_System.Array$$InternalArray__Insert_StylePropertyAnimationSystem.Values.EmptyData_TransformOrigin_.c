/*
FUNCTION_NAME: System.Array$$InternalArray__Insert<StylePropertyAnimationSystem.Values.EmptyData<TransformOrigin>>
ENTRY_POINT: 01c9827c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 72
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_16;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;negative_framework_namespace_without_eye_use_flow;functionality_data_collection_or_telemetry_hits_2
*/


undefined8
System_Array__InternalArray__Insert<StylePropertyAnimationSystem_Values_EmptyData<TransformOrigin>>
          (void)

{
  ulong uVar1;
  undefined8 uVar2;
  int extraout_var;
  long unaff_x19;
  long unaff_x20;
  long *plVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 in_stack_00000018;
  
  thunk_FUN_01ad9084();
  thunk_FUN_01ad9084(StringLiteral_620);
  thunk_FUN_01ad9084(
                    Method_Unity_XR_Oculus_OculusRestarter_<RestartCoroutine>d__23_System_Collections_IEnumerator_Reset__
                    );
  *(undefined1 *)(unaff_x20 + 0x8b1) = 1;
  in_stack_00000018 = 0;
  plVar3 = *(long **)(unaff_x19 + 0x20);
  if (*(int *)(unaff_x19 + 0x10) == 1) {
    *(undefined4 *)(unaff_x19 + 0x10) = 0xffffffff;
    if (plVar3 == (long *)0x0) goto LAB_01c9851c;
  }
  else {
    if (*(int *)(unaff_x19 + 0x10) != 0) {
      return 0;
    }
    *(undefined4 *)(unaff_x19 + 0x10) = 0xffffffff;
    if (plVar3 == (long *)0x0) goto LAB_01c9851c;
    lVar4 = plVar3[5];
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar1 = FUN_0391f968(0,lVar4,0);
    if ((uVar1 & 1) != 0) {
      if (plVar3[4] == 0) goto LAB_01c9851c;
      plVar5 = (long *)plVar3[5];
      lVar4 = FUN_03452478(plVar3[4],0);
      if ((lVar4 == 0) || (plVar5 == (long *)0x0)) goto LAB_01c9851c;
      (**(code **)(*plVar5 + 0x5e8))
                (plVar5,*(undefined8 *)(lVar4 + 0x10),*(undefined8 *)(*plVar5 + 0x5f0));
    }
  }
  uVar1 = FUN_0391b7d0(plVar3,0);
  if ((uVar1 & 1) == 0) {
    return 0;
  }
  if (plVar3[4] != 0) {
    lVar4 = FUN_03452478(plVar3[4],0);
    if (lVar4 == 0) {
LAB_01c984d0:
      uVar2 = thunk_FUN_01afaadc(*(undefined8 *)
                                  Method_Unity_XR_Oculus_OculusRestarter_<RestartCoroutine>d__23_System_Collections_IEnumerator_Reset__
                                );
      FUN_03924d70(0x3f800000,uVar2,0);
      *(undefined8 *)(unaff_x19 + 0x18) = uVar2;
      thunk_FUN_01b4f09c((undefined8 *)(unaff_x19 + 0x18),uVar2);
      *(undefined4 *)(unaff_x19 + 0x10) = 1;
      return 1;
    }
    if ((plVar3[4] != 0) && (lVar4 = FUN_03452478(plVar3[4],0), lVar4 != 0)) {
      FUN_03440a50(lVar4,0);
      if (extraout_var < 1) goto LAB_01c984d0;
      if ((plVar3[4] != 0) && (lVar4 = FUN_03452478(plVar3[4],0), lVar4 != 0)) {
        FUN_03440a50(lVar4,0);
        lVar4 = FUN_02d98200();
        if (lVar4 != 0) {
          if (*(long *)(lVar4 + 0x78) == 0) goto LAB_01c984d0;
          if (plVar3[4] != 0) {
            uVar2 = FUN_03452478(plVar3[4],0);
            if ((plVar3[4] != 0) && (lVar4 = FUN_03452478(plVar3[4],0), lVar4 != 0)) {
              FUN_03440a50(lVar4,0);
              lVar4 = FUN_02d98200();
              if (lVar4 != 0) {
                uVar6 = *(undefined8 *)(lVar4 + 0x78);
                if (*(int *)(*(long *)StringLiteral_619 + 0xe0) == 0) {
                  thunk_FUN_01ac7298(*(long *)StringLiteral_619);
                }
                uVar1 = FUN_038ae688(uVar2,0,&stack0x00000018,4,uVar6,0);
                if ((uVar1 & 1) == 0) goto LAB_01c984d0;
                lVar4 = plVar3[5];
                if (*(int *)(*(long *)
                              Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                            + 0xe0) == 0) {
                  thunk_FUN_01ac7298();
                }
                uVar1 = FUN_0391f968(0,lVar4,0);
                if (((uVar1 & 1) != 0) &&
                   (uVar1 = FUN_02ee6cf0(in_stack_00000018,0), (uVar1 & 1) == 0)) {
                  plVar5 = (long *)plVar3[5];
                  if (plVar5 == (long *)0x0) goto LAB_01c9851c;
                  (**(code **)(*plVar5 + 0x5e8))
                            (plVar5,in_stack_00000018,*(undefined8 *)(*plVar5 + 0x5f0));
                }
                (**(code **)(*plVar3 + 0x1c8))(plVar3,*(undefined8 *)(*plVar3 + 0x1d0));
                return 0;
              }
            }
          }
        }
      }
    }
  }
LAB_01c9851c:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


