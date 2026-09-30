/*
FUNCTION_NAME: FUN_0477ed88
ENTRY_POINT: 0477ed88
PROGRAM: waitwhat-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_7;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x0477ee40) */
/* WARNING: Removing unreachable block (ram,0x0477eeb0) */

void FUN_0477ed88(long param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  long local_28;
  
  local_40 = 0;
  uStack_38 = 0;
  local_30 = 0;
  local_28 = param_2;
  if (*(long *)(param_1 + 0x30) != 0) {
    if (*(long *)(param_1 + 0x10) == 0)
    goto Unity_Collections_NativeArray_ReadOnly<OVRPlugin_Vector4f>__get_Length;
    FUN_042e54fc(&local_40,*(long *)(param_1 + 0x10),
                 *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0xa0));
    while (uVar2 = FUN_054518b4(&local_40,
                                *(undefined8 *)(*(long *)(*(long *)(local_28 + 0x20) + 0xc0) + 0xc0)
                               ), (uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 0x30);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      (**(code **)(lVar3 + 0x18))
                (*(undefined8 *)(lVar3 + 0x40),local_30,*(undefined8 *)(lVar3 + 0x28));
    }
    FUN_054518b0(&local_40,*(undefined8 *)(*(long *)(*(long *)(local_28 + 0x20) + 0xc0) + 200));
    if (*(long *)(param_1 + 0x40) != 0) {
      lVar3 = *(long *)(param_1 + 0x30);
      if (lVar3 == 0) goto Unity_Collections_NativeArray_ReadOnly<OVRPlugin_Vector4f>__get_Length;
      (**(code **)(lVar3 + 0x18))
                (*(undefined8 *)(lVar3 + 0x40),*(long *)(param_1 + 0x40),
                 *(undefined8 *)(lVar3 + 0x28));
    }
  }
  lVar3 = *(long *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x40) = 0;
  if (lVar3 != 0) {
    iVar1 = *(int *)(lVar3 + 0x18);
    *(undefined4 *)(lVar3 + 0x18) = 0;
    *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
    if (0 < iVar1) {
      FUN_0595236c(*(undefined8 *)(lVar3 + 0x10),0,iVar1,0);
    }
    *(undefined4 *)(param_1 + 0x48) = 0;
    return;
  }
Unity_Collections_NativeArray_ReadOnly<OVRPlugin_Vector4f>__get_Length:
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


