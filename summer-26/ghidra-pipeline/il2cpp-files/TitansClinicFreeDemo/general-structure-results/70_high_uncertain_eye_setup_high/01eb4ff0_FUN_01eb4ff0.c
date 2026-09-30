/*
FUNCTION_NAME: FUN_01eb4ff0
ENTRY_POINT: 01eb4ff0
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 79
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void FUN_01eb4ff0(long param_1,long param_2,long *param_3,long param_4)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  FUN_01fab77c(param_1,0);
  uVar1 = FUN_01ee3bc8(param_3,0,0);
  if ((param_4 == 0) && ((uVar1 & 1) != 0)) {
    thunk_FUN_01279b34(PTR_DAT_027b3eb0);
    uVar3 = thunk_FUN_0124bba8();
    puVar5 = PTR_DAT_027bb740;
  }
  else {
    if ((param_2 == 0) && (uVar1 = FUN_01ee3bc8(param_3,0,0), (uVar1 & 1) != 0)) {
      *(undefined8 *)(param_1 + 0x10) = 0;
      *(long *)(param_1 + 0x18) = (long)param_3;
      thunk_FUN_01286abc((long *)(param_1 + 0x18),param_3);
      *(long *)(param_1 + 0x20) = param_4;
      thunk_FUN_01286abc((long *)(param_1 + 0x20),param_4);
    }
    uVar1 = FUN_01ee3bf4(param_3,0,0);
    if ((uVar1 & 1) == 0) {
LAB_01eb50ac:
      *(long *)(param_1 + 0x10) = param_2;
      *(long *)(param_1 + 0x18) = (long)param_3;
      thunk_FUN_01286abc((long *)(param_1 + 0x18),param_3);
      *(long *)(param_1 + 0x20) = param_4;
      thunk_FUN_01286abc((long *)(param_1 + 0x20),param_4);
      return;
    }
    if (param_4 == 0) {
      if (param_3 != (long *)0x0) {
        lVar2 = (**(code **)(*param_3 + 0x238))(param_3,*(undefined8 *)(*param_3 + 0x240));
        if (lVar2 != 0) {
          uVar1 = OVRPlugin__set_tiledMultiResLevel(lVar2,0);
          if ((param_2 != 0) || ((uVar1 & 1) == 0)) goto LAB_01eb50ac;
          thunk_FUN_01279b34(PTR_DAT_027b3eb0);
          uVar3 = thunk_FUN_0124bba8();
          puVar5 = PTR_DAT_027bb750;
          goto LAB_01eb513c;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01230ca0();
    }
    thunk_FUN_01279b34(PTR_DAT_027b3eb0);
    uVar3 = thunk_FUN_0124bba8();
    puVar5 = PTR_DAT_027bb748;
  }
LAB_01eb513c:
  uVar4 = thunk_FUN_01279b34(puVar5);
  FUN_01e7d290(uVar3,uVar4,0);
  uVar4 = thunk_FUN_01279b34(PTR_DAT_027bb758);
                    /* WARNING: Subroutine does not return */
  FUN_01230b78(uVar3,uVar4);
}


