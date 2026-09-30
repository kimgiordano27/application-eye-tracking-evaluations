/*
FUNCTION_NAME: FUN_06d2bc88
ENTRY_POINT: 06d2bc88
PROGRAM: vandalizer-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_4;ray_or_cast_sink_hits_1;telemetry_or_network_hits_2
*/


undefined8 FUN_06d2bc88(long param_1,int param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 local_40;
  undefined8 uStack_38;
  long local_28;
  
  if ((DAT_07a50d45 & 1) == 0) {
    FUN_031f20f4(UnityEngine_Events_UnityAction<CreateArtworkRequest_Response>_TypeInfo);
    DAT_07a50d45 = 1;
  }
  local_28 = 0;
  if (param_2 == 0) {
    return 0;
  }
  if ((param_3 != 0) && (*(long *)(param_1 + 0x28) != 0)) {
    uVar2 = FUN_056efb38(*(long *)(param_1 + 0x28),*(undefined8 *)(param_3 + 0x30),
                         *(undefined8 *)(param_3 + 0x38),&local_28,
                         *(undefined8 *)
                          UnityEngine_Events_UnityAction<CreateArtworkRequest_Response>_TypeInfo);
    if ((uVar2 & 1) == 0) {
      FUN_02d65918(param_3);
      local_40 = *(undefined8 *)(param_3 + 0x30);
      uStack_38 = *(undefined8 *)(param_3 + 0x38);
      uVar3 = thunk_FUN_03257e30(PTR_DAT_075d64d0);
      uVar3 = thunk_FUN_0322ed78(uVar3,&local_40);
      uVar4 = thunk_FUN_03257e30(UnityEngine_Events_UnityAction<DeactivateEventArgs>_TypeInfo);
      uVar3 = FUN_05c7ecc4(uVar4,uVar3,0);
      thunk_FUN_03257e30(PTR_DAT_0759bb58);
      uVar4 = thunk_FUN_0322f148();
      FUN_05e01578(uVar4,uVar3,0);
      uVar3 = thunk_FUN_03257e30(UnityEngine_Events_UnityAction<DripPhysics>_TypeInfo);
                    /* WARNING: Subroutine does not return */
      FUN_031f225c(uVar4,uVar3);
    }
    if (local_28 != 0) {
      lVar1 = 0x20;
      if (param_2 != 1) {
        lVar1 = 0x28;
      }
      return *(undefined8 *)(local_28 + lVar1);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


