/*
FUNCTION_NAME: FUN_05b1fa00
ENTRY_POINT: 05b1fa00
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_5;telemetry_or_network_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_05b1fa00(long param_1,long param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 local_68;
  undefined8 *puStack_60;
  long local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  if ((DAT_06dc202e & 1) == 0) {
    FUN_02d965b8(Method_UnityEngine_UIElements_BaseField<Vector2Int>_get_visualInput__);
    FUN_02d965b8(Method_UnityEngine_UIElements_BaseField<Vector3>_get_labelElement__);
    FUN_02d965b8(Method_UnityEngine_UIElements_BaseField<Vector3>_get_visualInput__);
    FUN_02d965b8(Method_UnityEngine_UIElements_BaseField<Vector3>_set_showMixedValue__);
    FUN_02d965b8(Method_UnityEngine_UIElements_BaseField<Vector3Int>_get_labelElement__);
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<OvrAvatarManager_HasAvatarRequestResultCode>_SetStateMachine__
                );
    DAT_06dc202e = 1;
  }
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0;
  if (((param_2 != 0) && (*(long *)(param_2 + 0x60) != 0)) &&
     (lVar5 = FUN_04e93414(*(long *)(param_2 + 0x60),
                           *(undefined8 *)
                            Method_UnityEngine_UIElements_BaseField<Vector2Int>_get_visualInput__),
     puVar4 = Method_UnityEngine_UIElements_BaseField<Vector3>_get_visualInput__,
     puVar3 = Method_UnityEngine_UIElements_BaseField<Vector3>_get_labelElement__,
     puVar2 = 
     Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<OvrAvatarManager_HasAvatarRequestResultCode>_SetStateMachine__
     , lVar5 != 0)) {
    FUN_049cf0ac(&local_68,lVar5,
                 *(undefined8 *)
                  Method_UnityEngine_UIElements_BaseField<Vector3Int>_get_labelElement__);
    local_40 = local_58;
    uStack_48 = puStack_60;
    local_50 = local_68;
    local_68 = 0;
    puStack_60 = &local_50;
    while( true ) {
      uVar6 = FUN_05232ed8(&local_50,*(undefined8 *)puVar4);
      lVar5 = local_40;
      if ((uVar6 & 1) == 0) {
        FUN_05232ed4(&local_50,*(undefined8 *)puVar3);
        return;
      }
      if (local_40 == 0) break;
      plVar7 = *(long **)(param_1 + 0x58);
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar8 = (**(code **)(*plVar7 + 0x2f8))
                        (plVar7,*(undefined8 *)(local_40 + 0x10),*(undefined8 *)(*plVar7 + 0x300));
      if (lVar8 == 0) {
        iVar1 = *(int *)(lVar5 + 0x24);
        if ((iVar1 == 4) || (iVar1 == 1)) {
          plVar7 = *(long **)(lVar5 + 0x10);
          if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          uVar9 = (**(code **)(*plVar7 + 0x168))(plVar7,*(undefined8 *)(*plVar7 + 0x170));
          FUN_05b1eee0(param_1,*(undefined8 *)puVar2,uVar9);
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


