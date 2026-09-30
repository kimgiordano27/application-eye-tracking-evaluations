/*
FUNCTION_NAME: FUN_05ce858c
ENTRY_POINT: 05ce858c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_3
*/


long FUN_05ce858c(long param_1)

{
  byte bVar1;
  long lVar2;
  long *plVar3;
  
  if ((DAT_06dc2d78 & 1) == 0) {
    FUN_02d965b8(
                Method_System_Collections_Generic_Dictionary<Type,_OVRPlugin_SpaceComponentType>_Add__
                );
    DAT_06dc2d78 = 1;
  }
  if (((*(long *)(param_1 + 0x28) != 0) &&
      (lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 0x10), lVar2 != 0)) &&
     (plVar3 = (long *)FUN_05c40a04(lVar2,0), plVar3 != (long *)0x0)) {
    bVar1 = *(byte *)(*(long *)
                       Method_System_Collections_Generic_Dictionary<Type,_OVRPlugin_SpaceComponentType>_Add__
                     + 0x130);
    if ((bVar1 <= *(byte *)(*plVar3 + 0x130)) &&
       (*(long *)(*(long *)(*plVar3 + 200) + (ulong)bVar1 * 8 + -8) ==
        *(long *)
         Method_System_Collections_Generic_Dictionary<Type,_OVRPlugin_SpaceComponentType>_Add__)) {
      return plVar3[2];
    }
                    /* WARNING: Subroutine does not return */
    FUN_02d96be0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


