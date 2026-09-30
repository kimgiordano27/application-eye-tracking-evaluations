/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch.ToDisplayStringSignature<bool>$$Invoke
ENTRY_POINT: 05b66294
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
Meta_XR_ImmersiveDebugger_Manager_Watch_ToDisplayStringSignature<bool>__Invoke(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  int *piVar8;
  long unaff_x19;
  long unaff_x20;
  undefined8 *puVar9;
  long *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 uVar10;
  undefined8 uVar11;
  
  if ((*(byte *)(param_1 + 0x135) & 1) == 0) {
                    /* try { // try from 05b6629c to 05c662db has its CatchHandler @ 05b66820 */
    FUN_03cf1244();
  }
  puVar2 = PTR_DAT_08e812f8;
  uVar3 = thunk_FUN_03cf5234();
  if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
    FUN_03cf1244(*(long *)(unaff_x19 + 0x20));
  }
  FUN_05bf82cc(uVar3);
  puVar9 = (undefined8 *)(unaff_x20 + 0x20);
  *puVar9 = uVar3;
  thunk_FUN_03d233cc(puVar9,uVar3);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  uVar4 = FUN_07179b2c(0);
  if ((uVar4 & 1) != 0) {
    uVar10 = *puVar9;
    uVar11 = *(undefined8 *)PTR_DAT_08e81300;
    uVar3 = (**(code **)(*unaff_x23 + 0x168))();
    uVar3 = FUN_06f683f8(uVar11,uVar3,0);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_03cd7500(*(long *)puVar2);
    }
    FUN_07179b34(0,uVar10,uVar3,0,0);
  }
  uVar3 = *puVar9;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  if (DAT_09411b65 == '\0') {
    FUN_03c8f898(PTR_DAT_08e812f8);
    FUN_03c8f898(PTR_DAT_08e69590);
    DAT_09411b65 = '\x01';
  }
  puVar1 = PTR_DAT_08e69590;
  lVar5 = *(long *)PTR_DAT_08e69590;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
    lVar5 = *(long *)puVar1;
  }
  puVar1 = PTR_DAT_08e812f0;
  if (*(char *)(*(long *)(lVar5 + 0xb8) + 0x10) != '\0') {
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    FUN_07179bdc(uVar3,0);
  }
  uVar3 = thunk_FUN_03cf5234(*(undefined8 *)puVar1);
  if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
    FUN_03cf1244();
  }
  FUN_07066718(uVar3);
  plVar6 = (long *)(*(code *)unaff_x23[3])(unaff_x23[8],uVar3);
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  lVar5 = *plVar6;
  uVar4 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar4 != 0) {
    piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_08e812e8) {
        puVar7 = (undefined8 *)(lVar5 + (long)(*piVar8 + 3) * 0x10 + 0x138);
        goto LAB_05b664a8;
      }
      uVar4 = uVar4 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar4 != 0);
  }
  puVar7 = (undefined8 *)FUN_03cf1348(plVar6,*(long *)PTR_DAT_08e812e8,3);
LAB_05b664a8:
  uVar4 = (*(code *)*puVar7)(plVar6,puVar7[1]);
  if ((uVar4 & 1) != 0) {
    lVar5 = *(long *)(unaff_x19 + 0x20);
    uVar10 = *unaff_x24;
    uVar3 = *unaff_x25;
    uVar11 = *puVar9;
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03cf1244();
    }
    FUN_05b65a90(plVar6,uVar10,uVar3,uVar11,0,*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0xb8));
  }
  return *puVar9;
}


