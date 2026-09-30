/*
FUNCTION_NAME: UnityEngine.CubemapArray$$.ctor
ENTRY_POINT: 0380a3a4
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined4 UnityEngine_CubemapArray___ctor(long *param_1,long *param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x21;
  undefined8 in_stack_00000010;
  
  if ((*(byte *)(unaff_x21 + 0x364) & 1) == 0) {
    thunk_FUN_01ad9084(
                      Method_Meta_WitAi_Json_WitResponseClass_<get_Childs>d__17_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    *(undefined1 *)(unaff_x21 + 0x364) = 1;
  }
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  lVar3 = 0;
  if (param_2 != (long *)0x0) {
    lVar3 = *param_2;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) ==
            *(long *)
             Method_Meta_WitAi_Json_WitResponseClass_<get_Childs>d__17_System_Collections_IEnumerator_Reset__
           ) {
          puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 6) * 0x10 + 0x138);
          goto LAB_0380a438;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)
             FUN_01ae9f78(param_2,*(long *)
                                   Method_Meta_WitAi_Json_WitResponseClass_<get_Childs>d__17_System_Collections_IEnumerator_Reset__
                          ,6);
LAB_0380a438:
    lVar3 = (*(code *)*puVar2)(param_2,param_1,puVar2[1]);
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar4 = FUN_03922f24(lVar3,0,0);
  if ((uVar4 & 1) == 0) {
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    FUN_03928d34(lVar3,0);
    (**(code **)(*param_1 + 0x5c8))(&stack0x00000008,param_1,*(undefined8 *)(*param_1 + 0x5d0));
  }
  else {
    in_stack_00000010._4_4_ = 0x7f7fffff;
  }
  return in_stack_00000010._4_4_;
}


