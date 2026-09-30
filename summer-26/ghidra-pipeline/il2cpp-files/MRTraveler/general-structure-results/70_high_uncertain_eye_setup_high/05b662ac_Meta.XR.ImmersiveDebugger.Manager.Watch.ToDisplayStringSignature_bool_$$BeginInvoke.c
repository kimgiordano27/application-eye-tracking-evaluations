/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch.ToDisplayStringSignature<bool>$$BeginInvoke
ENTRY_POINT: 05b662ac
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
Meta_XR_ImmersiveDebugger_Manager_Watch_ToDisplayStringSignature<bool>__BeginInvoke
          (undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  int *piVar7;
  long unaff_x19;
  long unaff_x20;
  undefined8 *puVar8;
  long *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 uVar9;
  undefined8 uVar10;
  long *unaff_x28;
  
  if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
    FUN_03cf1244(*(long *)(unaff_x19 + 0x20));
  }
  FUN_05bf82cc(param_1);
  puVar8 = (undefined8 *)(unaff_x20 + 0x20);
  *puVar8 = param_1;
                    /* try { // try from 05b662e8 to 05c662f7 has its CatchHandler @ 05b66814 */
  thunk_FUN_03d233cc(puVar8,param_1);
  if (*(int *)(*unaff_x28 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  uVar2 = FUN_07179b2c(0);
  if ((uVar2 & 1) != 0) {
    uVar9 = *puVar8;
                    /* try { // try from 05b6631c to 05c6639f has its CatchHandler @ 05b6681c */
    uVar10 = *(undefined8 *)PTR_DAT_08e81300;
    uVar3 = (**(code **)(*unaff_x23 + 0x168))();
    uVar3 = FUN_06f683f8(uVar10,uVar3,0);
    if (*(int *)(*unaff_x28 + 0xe0) == 0) {
      thunk_FUN_03cd7500(*unaff_x28);
    }
    FUN_07179b34(0,uVar9,uVar3,0,0);
  }
  uVar3 = *puVar8;
  if (*(int *)(*unaff_x28 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  if (DAT_09411b65 == '\0') {
    FUN_03c8f898(PTR_DAT_08e812f8);
    FUN_03c8f898(PTR_DAT_08e69590);
    DAT_09411b65 = '\x01';
  }
  puVar1 = PTR_DAT_08e69590;
  lVar4 = *(long *)PTR_DAT_08e69590;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
    lVar4 = *(long *)puVar1;
  }
  puVar1 = PTR_DAT_08e812f0;
  if (*(char *)(*(long *)(lVar4 + 0xb8) + 0x10) != '\0') {
    if (*(int *)(*unaff_x28 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    FUN_07179bdc(uVar3,0);
  }
  uVar3 = thunk_FUN_03cf5234(*(undefined8 *)puVar1);
  if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
    FUN_03cf1244();
  }
  FUN_07066718(uVar3);
  plVar5 = (long *)(*(code *)unaff_x23[3])(unaff_x23[8],uVar3);
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  lVar4 = *plVar5;
  uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar2 != 0) {
    piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_08e812e8) {
        puVar6 = (undefined8 *)(lVar4 + (long)(*piVar7 + 3) * 0x10 + 0x138);
        goto LAB_05b664a8;
      }
      uVar2 = uVar2 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar2 != 0);
  }
  puVar6 = (undefined8 *)FUN_03cf1348(plVar5,*(long *)PTR_DAT_08e812e8,3);
LAB_05b664a8:
  uVar2 = (*(code *)*puVar6)(plVar5,puVar6[1]);
  if ((uVar2 & 1) != 0) {
    lVar4 = *(long *)(unaff_x19 + 0x20);
    uVar9 = *unaff_x24;
    uVar3 = *unaff_x25;
    uVar10 = *puVar8;
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03cf1244();
    }
    FUN_05b65a90(plVar5,uVar9,uVar3,uVar10,0,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0xb8));
  }
  return *puVar8;
}


