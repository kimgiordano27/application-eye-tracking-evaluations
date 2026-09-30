/*
FUNCTION_NAME: OVRPlugin.OVRP_1_8_0$$ovrp_GetNodePose2
ENTRY_POINT: 0316cdc0
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_8_0__ovrp_GetNodePose2(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *plVar9;
  
  if ((DAT_03ff20bd & 1) == 0) {
    thunk_FUN_01ad9084(StringLiteral_3765);
    thunk_FUN_01ad9084(Method_System_Threading_ReaderWriterLockSlim_TimeoutTracker__ctor__);
    thunk_FUN_01ad9084(StringLiteral_3766);
    thunk_FUN_01ad9084(PTR_DAT_03d80958);
    thunk_FUN_01ad9084(PTR_DAT_03d80960);
    DAT_03ff20bd = 1;
  }
  puVar1 = PTR_DAT_03d80960;
  if (*(char *)(param_1 + 0x61) == '\0') {
    return;
  }
  plVar9 = *(long **)(param_1 + 0x28);
  uVar4 = thunk_FUN_01afaadc(*(undefined8 *)StringLiteral_3765);
  FUN_0251773c(uVar4,param_1,*(undefined8 *)puVar1,0);
  puVar3 = PTR_DAT_03d80958;
  puVar2 = StringLiteral_3766;
  puVar1 = Method_System_Threading_ReaderWriterLockSlim_TimeoutTracker__ctor__;
  if (plVar9 != (long *)0x0) {
    lVar6 = *plVar9;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)StringLiteral_3766) {
          puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 7) * 0x10 + 0x138);
          goto LAB_0316cec4;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ae9f78(plVar9,*(long *)StringLiteral_3766,7);
LAB_0316cec4:
    (*(code *)*puVar5)(plVar9,uVar4,puVar5[1]);
    plVar9 = *(long **)(param_1 + 0x28);
    uVar4 = thunk_FUN_01afaadc(*(undefined8 *)puVar1);
    FUN_02fd7524(uVar4,param_1,*(undefined8 *)puVar3,0);
    if (plVar9 != (long *)0x0) {
      lVar6 = *plVar9;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
            puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 0xd) * 0x10 + 0x138);
            goto LAB_0316cf48;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar5 = (undefined8 *)FUN_01ae9f78(plVar9,*(long *)puVar2,0xd);
LAB_0316cf48:
      (*(code *)*puVar5)(plVar9,uVar4,puVar5[1]);
      *(undefined1 *)(param_1 + 0x60) = 0;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


