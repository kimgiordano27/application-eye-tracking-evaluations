/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.SpaceQueryResult>$$.cctor
ENTRY_POINT: 025f81b0
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_EmptyInternalEnumerator<OVRPlugin_SpaceQueryResult>___cctor
               (long *param_1,long param_2,long param_3)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  
  if ((DAT_03fef02d & 1) == 0) {
    thunk_FUN_01ad9084(StringLiteral_3518);
    DAT_03fef02d = 1;
  }
  puVar4 = StringLiteral_3518;
  uVar1 = *(uint *)(param_1 + 4);
joined_r0x025f81f0:
  do {
    uVar1 = uVar1 - 1;
    if ((int)uVar1 < 0) {
      return;
    }
    lVar5 = *param_1;
    if (lVar5 == 0) goto LAB_025f82ac;
    if (*(uint *)(lVar5 + 0x18) <= uVar1) goto LAB_025f82b0;
  } while (*(long *)(lVar5 + (ulong)uVar1 * 8 + 0x20) != param_2);
  lVar5 = param_1[1];
  if (lVar5 != 0) {
    if (*(uint *)(lVar5 + 0x18) <= uVar1) {
LAB_025f82b0:
                    /* WARNING: Subroutine does not return */
      FUN_01b48180();
    }
    if (param_3 != 0) {
      uVar2 = *(undefined4 *)(lVar5 + (ulong)uVar1 * 4 + 0x20);
      lVar5 = *(long *)(param_3 + 0x10);
      lVar6 = *(long *)puVar4;
      *(int *)(param_3 + 0x1c) = *(int *)(param_3 + 0x1c) + 1;
      if (lVar5 != 0) {
        uVar3 = *(uint *)(param_3 + 0x18);
        if (uVar3 < *(uint *)(lVar5 + 0x18)) {
          *(uint *)(param_3 + 0x18) = uVar3 + 1;
          *(undefined4 *)(lVar5 + (long)(int)uVar3 * 4 + 0x20) = uVar2;
        }
        else {
          FUN_02b2f054(param_3,uVar2,
                       *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
        }
        goto joined_r0x025f81f0;
      }
    }
  }
LAB_025f82ac:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


