/*
FUNCTION_NAME: FUN_05cd8c2c
ENTRY_POINT: 05cd8c2c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_3
*/


bool FUN_05cd8c2c(long param_1,long *param_2)

{
  byte bVar1;
  long *plVar2;
  ulong uVar3;
  
  if ((DAT_06dc2d22 & 1) == 0) {
    FUN_02d965b8(
                Method_System_Collections_Generic_Dictionary<Type,_OVRPlugin_SpaceComponentType>_Add__
                );
    DAT_06dc2d22 = 1;
  }
  if (param_2 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)
                       Method_System_Collections_Generic_Dictionary<Type,_OVRPlugin_SpaceComponentType>_Add__
                     + 0x130);
    if ((bVar1 <= *(byte *)(*param_2 + 0x130)) &&
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) ==
        *(long *)
         Method_System_Collections_Generic_Dictionary<Type,_OVRPlugin_SpaceComponentType>_Add__)) {
      plVar2 = (long *)param_2[2];
      if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      uVar3 = (**(code **)(*plVar2 + 0x138))
                        (plVar2,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(*plVar2 + 0x140));
      if ((uVar3 & 1) != 0) {
        return (int)param_2[3] == *(int *)(param_1 + 0x18);
      }
    }
  }
  return false;
}


