/*
FUNCTION_NAME: FUN_0748540c
ENTRY_POINT: 0748540c
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


ulong FUN_0748540c(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  undefined1 auVar3 [16];
  uint local_24;
  
  if ((DAT_07ef3ed8 & 1) == 0) {
    FUN_03642964(PTR_DAT_079f4540);
    FUN_03642964(Method_Unity_Collections_NativeArray<byte>_GetSubArray__);
    FUN_03642964(Method_UnityEngine_UIElements_MouseEventBase<MouseLeaveWindowEvent>_PostDispatch__)
    ;
    FUN_03642964(
                Method_UnityEngine_UIElements_MouseEventBase<MouseLeaveWindowEvent>_get_mousePosition__
                );
    FUN_03642964(PTR_DAT_079fd2e0);
    DAT_07ef3ed8 = 1;
  }
  local_24 = 0;
  if (*(long *)(param_1 + 0x18) != 0) {
    uVar1 = System_Array_EmptyInternalEnumerator<BaseCompositeField_FieldDescription<Vector3Int,_object,_int>>__System_Collections_IEnumerator_Reset
                      (*(long *)(param_1 + 0x18),param_2,&local_24,
                       *(undefined8 *)Method_Unity_Collections_NativeArray<byte>_GetSubArray__);
    if ((uVar1 & 1) == 0) {
      uVar1 = FUN_07484f08(param_1,param_2,0);
      return uVar1;
    }
    lVar2 = *(long *)(param_1 + 0x10);
    if (*(int *)(*(long *)PTR_DAT_079fd2e0 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    if (lVar2 != 0) {
      auVar3 = FUN_04769984(lVar2,local_24 - 1,
                            *(undefined8 *)
                             Method_UnityEngine_UIElements_MouseEventBase<MouseLeaveWindowEvent>_PostDispatch__
                           );
      if (*(int *)(*(long *)PTR_DAT_079f4540 + 0xe4) == 0) {
        thunk_FUN_036a1978(*(long *)PTR_DAT_079f4540);
      }
      FUN_0717a0ec(0 < auVar3._12_4_,0);
      FUN_0717a0ec((auVar3._8_8_ & 1) == 0,0);
      if (*(long *)(param_1 + 0x10) != 0) {
        FUN_047699d8(*(long *)(param_1 + 0x10),local_24 - 1,auVar3._0_8_,auVar3._8_8_ + 0x100000000,
                     *(undefined8 *)
                      Method_UnityEngine_UIElements_MouseEventBase<MouseLeaveWindowEvent>_get_mousePosition__
                    );
        return (ulong)local_24;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


