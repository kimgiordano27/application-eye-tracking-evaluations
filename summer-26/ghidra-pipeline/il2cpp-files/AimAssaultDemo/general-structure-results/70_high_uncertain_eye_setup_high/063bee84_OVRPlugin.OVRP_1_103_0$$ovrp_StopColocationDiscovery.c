/*
FUNCTION_NAME: OVRPlugin.OVRP_1_103_0$$ovrp_StopColocationDiscovery
ENTRY_POINT: 063bee84
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x063bef88) */

void OVRPlugin_OVRP_1_103_0__ovrp_StopColocationDiscovery(long param_1)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long *local_38;
  long *local_28;
  
  if ((DAT_0825c814 & 1) == 0) {
    FUN_0373b518(PTR_DAT_07d96018);
    FUN_0373b518(PTR_DAT_07db76d0);
    FUN_0373b518(PTR_DAT_07db76d8);
    FUN_0373b518(PTR_DAT_07db76e0);
    DAT_0825c814 = 1;
  }
  puVar1 = PTR_DAT_07d96018;
  local_28 = (long *)0x0;
  local_38 = (long *)0x0;
  if (param_1 == 0) goto LAB_063bf054;
  if (*(long *)(param_1 + 0x18) != 0) {
    lVar2 = *(long *)PTR_DAT_07d96018;
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar2 = *(long *)puVar1;
    }
    if (**(long **)(lVar2 + 0xb8) == 0) goto LAB_063bf054;
    uVar3 = FUN_05be43e0(**(long **)(lVar2 + 0xb8),*(undefined8 *)(param_1 + 0x18),&local_28,
                         *(undefined8 *)PTR_DAT_07db76e0);
    if ((uVar3 & 1) != 0) {
      if (local_28 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      (**(code **)(*local_28 + 0x178))(local_28,param_1,*(undefined8 *)(*local_28 + 0x180));
      lVar2 = *(long *)puVar1;
      if (*(int *)(lVar2 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar2 = *(long *)puVar1;
      }
      if (**(long **)(lVar2 + 0xb8) != 0) {
        FUN_05be3db8(**(long **)(lVar2 + 0xb8),*(undefined8 *)(param_1 + 0x18),
                     *(undefined8 *)PTR_DAT_07db76d0);
        return;
      }
      goto LAB_063bf054;
    }
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_03798b70();
    lVar2 = *(long *)puVar1;
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 8);
  if (lVar2 == 0) {
LAB_063bf054:
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  uVar3 = FUN_05bd31c8(lVar2,*(undefined4 *)(param_1 + 0x10),&local_38,
                       *(undefined8 *)PTR_DAT_07db76d8);
  if ((uVar3 & 1) == 0) {
    lVar2 = *(long *)puVar1;
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar2 = *(long *)puVar1;
    }
    lVar4 = *(long *)(lVar2 + 0xb8);
    if ((*(char *)(lVar4 + 0x10) == '\0') && (*(int *)(param_1 + 0x10) == 0x773889f6)) {
      if (*(int *)(lVar2 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar4 = *(long *)(*(long *)puVar1 + 0xb8);
      }
      *(long *)(lVar4 + 0x18) = param_1;
      thunk_FUN_037aeb94((long *)(lVar4 + 0x18),param_1);
    }
  }
  else {
    if (local_38 == (long *)0x0) goto LAB_063bf054;
    (**(code **)(*local_38 + 0x178))(local_38,param_1,*(undefined8 *)(*local_38 + 0x180));
  }
  return;
}


