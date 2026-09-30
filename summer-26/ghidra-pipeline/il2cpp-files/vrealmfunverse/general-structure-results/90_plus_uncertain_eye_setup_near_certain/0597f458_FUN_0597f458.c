/*
FUNCTION_NAME: FUN_0597f458
ENTRY_POINT: 0597f458
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 94
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_5;ui_or_gameplay_sink_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_0597f458(long param_1,long param_2)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  
  if ((DAT_066d38a1 & 1) == 0) {
    FUN_02b3c81c(Method_Oculus_Platform_Message<BlockedUserList>_get_Data__);
    FUN_02b3c81c(Method_System_Array_FindIndex<OVRPlugin_BoneCapsule>__);
    FUN_02b3c81c(Method_Oculus_Platform_Message<AssetDetails>__ctor__);
    FUN_02b3c81c(Method_System_Array_Find<MetaXRAcousticMaterialMapping_Pair>__);
    DAT_066d38a1 = 1;
  }
  puVar2 = Method_System_Array_Find<MetaXRAcousticMaterialMapping_Pair>__;
  if (((param_2 == 0) && (lVar6 = *(long *)(param_1 + 0xc0), lVar6 != 0)) &&
     (*(char *)(lVar6 + 0x22) != '\0')) {
    lVar3 = *(long *)(*(long *)(*(long *)
                                 Method_System_Array_Find<MetaXRAcousticMaterialMapping_Pair>__ +
                               0xb8) + 8);
    if (lVar3 == 0) {
      uVar4 = thunk_FUN_02b79644(*(undefined8 *)Method_Oculus_Platform_Message<AssetDetails>__ctor__
                                );
      FUN_037a5d48(uVar4,4,*(undefined8 *)Method_System_Array_FindIndex<OVRPlugin_BoneCapsule>__);
      puVar5 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
      *puVar5 = uVar4;
      thunk_FUN_02bb0e9c(puVar5,uVar4);
      lVar3 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
      if (lVar3 == 0) goto LAB_0597f5a8;
      lVar6 = *(long *)(param_1 + 0xc0);
    }
    lVar7 = *(long *)(lVar3 + 0x10);
    lVar9 = *(long *)Method_Oculus_Platform_Message<BlockedUserList>_get_Data__;
    *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
    if (lVar7 == 0) {
LAB_0597f5a8:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    uVar1 = *(uint *)(lVar3 + 0x18);
    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
      *(uint *)(lVar3 + 0x18) = uVar1 + 1;
      plVar8 = (long *)(lVar7 + (long)(int)uVar1 * 8 + 0x20);
      *plVar8 = lVar6;
      thunk_FUN_02bb0e9c(plVar8);
    }
    else {
      FUN_037a6538(lVar3,lVar6,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
    }
  }
  *(long *)(param_1 + 0xc0) = param_2;
  thunk_FUN_02bb0e9c((long *)(param_1 + 0xc0),param_2);
  return;
}


