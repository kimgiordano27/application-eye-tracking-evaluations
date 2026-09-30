/*
FUNCTION_NAME: FUN_06037138
ENTRY_POINT: 06037138
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_1;ray_or_cast_sink_hits_2;telemetry_or_network_hits_5
*/


void FUN_06037138(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  if ((DAT_06dc4ba7 & 1) == 0) {
    FUN_02d965b8(Method_Newtonsoft_Json_Utilities_CollectionUtils_IsNullOrEmpty<JsonConverter>__);
    FUN_02d965b8(
                Method_Newtonsoft_Json_Utilities_CollectionUtils_CopyFromJaggedToMultidimensionalArray__
                );
    FUN_02d965b8(Method_UnityEngine_Collision_GetContact__);
    FUN_02d965b8(Method_Meta_XR_MultiplayerBlocks_Shared_ColocationSessionEventHandler_OnDestroy__);
    FUN_02d965b8(
                Method_Meta_XR_MultiplayerBlocks_Shared_ColocationSessionEventHandler_OnSessionCreatedWithSpatialAnchor__
                );
    DAT_06dc4ba7 = 1;
  }
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  if (((*param_1 != 0) && (lVar3 = *(long *)(*param_1 + 0x20), lVar3 != 0)) &&
     (lVar3 = FUN_04d964bc(lVar3,*(undefined8 *)
                                  Method_Newtonsoft_Json_Utilities_CollectionUtils_IsNullOrEmpty<JsonConverter>__
                          ), puVar2 = Method_UnityEngine_Collision_GetContact__,
     puVar1 = 
     Method_Newtonsoft_Json_Utilities_CollectionUtils_CopyFromJaggedToMultidimensionalArray__,
     lVar3 != 0)) {
    FUN_049b50a8(&local_48,lVar3,
                 *(undefined8 *)
                  Method_Meta_XR_MultiplayerBlocks_Shared_ColocationSessionEventHandler_OnSessionCreatedWithSpatialAnchor__
                );
    while (uVar4 = FUN_0520f52c(&local_48,*(undefined8 *)puVar2), (uVar4 & 1) != 0) {
      FUN_060375e8(param_1,local_38);
    }
    FUN_0520f528(&local_48,*(undefined8 *)puVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


