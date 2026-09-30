/*
FUNCTION_NAME: FUN_07810fb8
ENTRY_POINT: 07810fb8
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 84
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_07810fb8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  if ((DAT_08272318 & 1) == 0) {
    FUN_0373b518(Method_System_Collections_Generic_List_Enumerator<OVRPlugin_Result>_get_Current__);
    DAT_08272318 = 1;
  }
  iVar2 = FUN_060becb4(param_2,*(undefined8 *)(param_1 + 0x4c0),0);
  puVar1 = Method_System_Collections_Generic_List_Enumerator<OVRPlugin_Result>_get_Current__;
  if (iVar2 != 0) {
    plVar4 = *(long **)(param_1 + 0x518);
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0xdf8))(plVar4,param_2,*(undefined8 *)(*plVar4 + 0xe00));
      lVar5 = *(long *)puVar1;
      lVar6 = *(long *)(param_1 + 0x518);
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar5 = *(long *)puVar1;
      }
      uVar7 = *(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x1f8);
      uVar3 = FUN_060c08a0(param_2,0);
      if (lVar6 != 0) {
        FUN_077189b0(lVar6,uVar7,uVar3 & 1,0);
        lVar5 = *(long *)(param_1 + 0x510);
        uVar7 = *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x1e8);
        uVar3 = FUN_060c08a0(param_2,0);
        if (lVar5 != 0) {
          FUN_077189b0(lVar5,uVar7,uVar3 & 1,0);
          *(undefined8 *)(param_1 + 0x4c0) = param_2;
          thunk_FUN_037aeb94(param_1 + 0x4c0,param_2);
          FUN_0783aeb0(param_1,*(undefined8 *)(*(long *)puVar1 + 0xb8),0);
          return;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  return;
}


