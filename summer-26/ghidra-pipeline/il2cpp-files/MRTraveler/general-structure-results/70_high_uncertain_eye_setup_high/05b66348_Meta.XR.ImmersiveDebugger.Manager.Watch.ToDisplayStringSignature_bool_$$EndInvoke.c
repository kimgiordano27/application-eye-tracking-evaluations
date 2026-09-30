/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch.ToDisplayStringSignature<bool>$$EndInvoke
ENTRY_POINT: 05b66348
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8
Meta_XR_ImmersiveDebugger_Manager_Watch_ToDisplayStringSignature<bool>__EndInvoke(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  undefined8 *unaff_x21;
  long unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uVar7;
  undefined8 *unaff_x25;
  undefined8 uVar8;
  undefined8 uVar9;
  long *unaff_x28;
  
  if (*(int *)(param_1 + 0xe0) == 0) {
    thunk_FUN_03cd7500(param_1);
  }
  FUN_07179b34(0);
  uVar9 = *unaff_x21;
  if (*(int *)(*unaff_x28 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  if (DAT_09411b65 == '\0') {
    FUN_03c8f898(PTR_DAT_08e812f8);
    FUN_03c8f898(PTR_DAT_08e69590);
    DAT_09411b65 = '\x01';
  }
  puVar1 = PTR_DAT_08e69590;
  lVar2 = *(long *)PTR_DAT_08e69590;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
    lVar2 = *(long *)puVar1;
  }
  puVar1 = PTR_DAT_08e812f0;
  if (*(char *)(*(long *)(lVar2 + 0xb8) + 0x10) != '\0') {
    if (*(int *)(*unaff_x28 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    FUN_07179bdc(uVar9,0);
  }
  uVar9 = thunk_FUN_03cf5234(*(undefined8 *)puVar1);
  if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
    FUN_03cf1244();
  }
  FUN_07066718(uVar9);
  plVar3 = (long *)(**(code **)(unaff_x23 + 0x18))(*(undefined8 *)(unaff_x23 + 0x40),uVar9);
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  lVar2 = *plVar3;
  uVar5 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_08e812e8) {
        puVar4 = (undefined8 *)(lVar2 + (long)(*piVar6 + 3) * 0x10 + 0x138);
        goto LAB_05b664a8;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar4 = (undefined8 *)FUN_03cf1348(plVar3,*(long *)PTR_DAT_08e812e8,3);
LAB_05b664a8:
  uVar5 = (*(code *)*puVar4)(plVar3,puVar4[1]);
  if ((uVar5 & 1) != 0) {
    lVar2 = *(long *)(unaff_x19 + 0x20);
    uVar7 = *unaff_x24;
    uVar9 = *unaff_x25;
    uVar8 = *unaff_x21;
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03cf1244();
    }
    FUN_05b65a90(plVar3,uVar7,uVar9,uVar8,0,*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0xb8));
  }
  return *unaff_x21;
}


