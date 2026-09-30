/*
FUNCTION_NAME: OVRPlugin$$IsPerfMetricsSupported
ENTRY_POINT: 031579d0
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_1;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__IsPerfMetricsSupported(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long *unaff_x19;
  long unaff_x20;
  undefined8 uVar10;
  
  thunk_FUN_01ad9084(*(undefined8 *)(param_1 + 0x438));
  thunk_FUN_01ad9084(PTR_DAT_03d80440);
  *(undefined1 *)(unaff_x20 + 0x14) = 1;
  puVar3 = PTR_DAT_03d80460;
  if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  lVar7 = *unaff_x19;
  uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_03d80428) {
        puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
        goto LAB_03157a4c;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar5 = (undefined8 *)FUN_01ae9f78();
LAB_03157a4c:
  uVar4 = (*(code *)*puVar5)();
  lVar7 = *(long *)puVar3;
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_01ac7298(lVar7);
    lVar7 = *(long *)puVar3;
  }
  puVar2 = PTR_DAT_03d80440;
  puVar1 = PTR_DAT_03d80438;
  if (*(long *)(*(long *)(lVar7 + 0xb8) + 0x10) == 0) {
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_01ac7298(lVar7);
      lVar7 = *(long *)puVar3;
    }
    uVar10 = **(undefined8 **)(lVar7 + 0xb8);
    uVar6 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d80420);
    FUN_028b2014(uVar6,uVar10,*(undefined8 *)PTR_DAT_03d80488,0);
    puVar5 = (undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x10);
    *puVar5 = uVar6;
    thunk_FUN_01b4f09c(puVar5,uVar6);
  }
  uVar6 = FUN_01ebe8b0();
  uVar10 = thunk_FUN_01afaadc(*(undefined8 *)puVar2);
  FUN_020854b0(uVar10,uVar4,uVar6,*(undefined8 *)puVar1);
  return uVar10;
}


