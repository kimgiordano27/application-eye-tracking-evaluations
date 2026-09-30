/*
FUNCTION_NAME: FUN_060f8764
ENTRY_POINT: 060f8764
PROGRAM: beastcraft-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;telemetry_or_network_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_060f8764(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 local_28;
  
  puVar1 = PTR_DAT_06a2ed80;
  if ((DAT_06e9538a & 1) == 0) {
    FUN_02e3ca1c(System_ValueTuple<object,_PlayerRef,_ReliableKey,_float>_TypeInfo);
    FUN_02e3ca1c(System_ValueTuple<Vector3,_Vector3,_int,_int>_TypeInfo);
    FUN_02e3ca1c(
                System_Reactive_Subjects_Subject<ValueTuple<NetworkRunner,_List<SessionInfo>>>_TypeInfo
                );
    FUN_02e3ca1c(PTR_DAT_06a2ed80);
    DAT_06e9538a = 1;
  }
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  local_28 = 0;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02e9a04c();
  }
  uVar2 = FUN_062696b0(uVar4,0,0);
  if ((uVar2 & 1) != 0) {
    return;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    uVar2 = FUN_060d8a84(*(long *)(param_1 + 0x20),param_2,&local_28,0);
    if ((uVar2 & 1) == 0) {
      if (*(long *)(param_1 + 0x38) != 0) {
        FUN_052e9494(*(long *)(param_1 + 0x38),param_2,
                     *(undefined8 *)System_ValueTuple<Vector3,_Vector3,_int,_int>_TypeInfo);
        return;
      }
    }
    else if (*(long *)(param_1 + 0x28) != 0) {
      FUN_04def5fc(*(long *)(param_1 + 0x28),param_2,local_28,
                   *(undefined8 *)System_ValueTuple<object,_PlayerRef,_ReliableKey,_float>_TypeInfo)
      ;
      if (*(long *)(param_1 + 0x30) != 0) {
        uVar2 = FUN_052e9494(*(long *)(param_1 + 0x30),local_28,
                             *(undefined8 *)
                              System_Reactive_Subjects_Subject<ValueTuple<NetworkRunner,_List<SessionInfo>>>_TypeInfo
                            );
        if ((uVar2 & 1) == 0) {
          return;
        }
        lVar3 = *(long *)(param_1 + 0x10);
        if (lVar3 == 0) {
          return;
        }
        (**(code **)(lVar3 + 0x18))
                  (*(undefined8 *)(lVar3 + 0x40),local_28,*(undefined8 *)(lVar3 + 0x28));
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02e3ccc4();
}


