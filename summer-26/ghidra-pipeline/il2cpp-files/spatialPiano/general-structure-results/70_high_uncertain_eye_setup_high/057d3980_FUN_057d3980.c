/*
FUNCTION_NAME: FUN_057d3980
ENTRY_POINT: 057d3980
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 FUN_057d3980(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  
  if ((DAT_06bc0c7e & 1) == 0) {
    FUN_02f08768(Method_System_Collections_Generic_List_Enumerator<IRaycaster>_get_Current__);
    FUN_02f08768(
                Method_System_Collections_Generic_HashSet_Enumerator<OVRPlugin_SpaceComponentType>_get_Current__
                );
    DAT_06bc0c7e = 1;
  }
  if (*(int *)(param_1 + 0x50) == 2) {
    uVar2 = FUN_057d4710(param_1,param_2);
    return uVar2;
  }
  if (*(int *)(param_1 + 0x50) != 4) {
    return param_2;
  }
  uVar1 = FUN_058543d0(0);
  if (((uVar1 & 1) == 0) || (*(char *)(param_1 + 0x6a) != '\0')) {
    lVar3 = *(long *)(param_1 + 0x20);
    if (lVar3 != 0) goto LAB_057d3a3c;
    if (*(char *)(param_1 + 0x6a) == '\0') goto LAB_057d39f8;
  }
  else {
LAB_057d39f8:
    uVar1 = FUN_057d45c8();
    if ((uVar1 & 1) == 0) {
      lVar3 = thunk_FUN_02f45270(*(undefined8 *)
                                  Method_System_Collections_Generic_List_Enumerator<IRaycaster>_get_Current__
                                );
      FUN_05826164(lVar3,0);
      goto LAB_057d3a3c;
    }
  }
  lVar3 = 0;
LAB_057d3a3c:
  uVar2 = thunk_FUN_02f45270(*(undefined8 *)
                              Method_System_Collections_Generic_HashSet_Enumerator<OVRPlugin_SpaceComponentType>_get_Current__
                            );
  FUN_057ecd50(uVar2,param_2,lVar3,param_1,0);
  return uVar2;
}


