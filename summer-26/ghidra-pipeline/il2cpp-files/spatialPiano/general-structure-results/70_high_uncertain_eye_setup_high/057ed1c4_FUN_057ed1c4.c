/*
FUNCTION_NAME: FUN_057ed1c4
ENTRY_POINT: 057ed1c4
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 FUN_057ed1c4(long *param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  
  if ((DAT_06bc0d09 & 1) == 0) {
    FUN_02f08768(
                Method_System_Collections_Generic_HashSet_Enumerator<OVRPlugin_SpaceComponentType>_get_Current__
                );
    DAT_06bc0d09 = 1;
  }
  iVar1 = (**(code **)(*param_1 + 0x198))(param_1,*(undefined8 *)(*param_1 + 0x1a0));
  if (iVar1 == 0xf) {
LAB_057ed218:
    lVar3 = param_1[0x14];
  }
  else {
    if (iVar1 != 2) {
      if (iVar1 != 1) goto LAB_057ed23c;
      goto LAB_057ed218;
    }
    if (param_1[0xd] == 0) goto LAB_057ed23c;
    lVar3 = *(long *)(param_1[0xd] + 0x28);
  }
  if (lVar3 != 0) {
    if (*(int *)(lVar3 + 0x3c) != 0) {
LAB_057ed23c:
      uVar4 = **(undefined8 **)
                (*(long *)
                  Method_System_Collections_Generic_HashSet_Enumerator<OVRPlugin_SpaceComponentType>_get_Current__
                + 0xb8);
      thunk_FUN_02f168c4();
      return uVar4;
    }
    if ((*(long *)(lVar3 + 0x28) != 0) &&
       (plVar2 = *(long **)(*(long *)(lVar3 + 0x28) + 0x68), plVar2 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x057ed284. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (**(code **)(*plVar2 + 0x178))(plVar2,*(undefined8 *)(*plVar2 + 0x180));
      return uVar4;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


