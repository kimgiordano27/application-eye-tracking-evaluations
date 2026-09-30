/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.PolylineRenderer$$Cleanup
ENTRY_POINT: 08a1f8ec
PROGRAM: Hyper-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Gizmo_PolylineRenderer__Cleanup(undefined8 param_1)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined4 in_w9;
  ulong uVar6;
  int *piVar7;
  undefined4 *unaff_x19;
  long *plVar8;
  undefined8 uVar9;
  long *unaff_x22;
  undefined8 in_stack_00000008;
  undefined8 uStack0000000000000028;
  
  *unaff_x19 = in_w9;
  uStack0000000000000028 = param_1;
  lVar3 = FUN_07684508(&stack0x00000028,*(undefined8 *)PTR_DAT_0ac521d8);
  if ((lVar3 == 0) || (lVar4 = FUN_0898df08(lVar3,0), lVar4 == 0)) {
    puVar2 = PTR_DAT_0ac46eb8;
    if (*(int *)(*(long *)PTR_DAT_0ac46eb8 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    if (DAT_0b32acf7 == '\0') {
      FUN_04947ee4(PTR_DAT_0ac46eb8);
      DAT_0b32acf7 = '\x01';
    }
    lVar3 = *(long *)puVar2;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_049a583c();
      lVar3 = *(long *)puVar2;
    }
    plVar8 = (long *)**(undefined8 **)(lVar3 + 0xb8);
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    lVar3 = *plVar8;
    uVar6 = (ulong)*(ushort *)(lVar3 + 0x12e);
    uVar9 = *(undefined8 *)PTR_DAT_0ac52220;
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_0ac46ed8) {
          puVar5 = (undefined8 *)(lVar3 + (long)(*piVar7 + 3) * 0x10 + 0x138);
          goto LAB_08a1fa10;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar5 = (undefined8 *)FUN_04980e68(plVar8,*(long *)PTR_DAT_0ac46ed8,3);
LAB_08a1fa10:
    (*(code *)*puVar5)(plVar8,uVar9,puVar5[1]);
    uVar9 = 0;
  }
  else {
    lVar3 = FUN_0898df08(lVar3,0);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    in_stack_00000008 = 0;
    FUN_06fc0788(&stack0x00000008,*(undefined4 *)(lVar3 + 0x18),*(undefined8 *)PTR_DAT_0ac52218);
    uVar9 = in_stack_00000008;
  }
  puVar2 = PTR_DAT_0ac52210;
  iVar1 = *(int *)(*unaff_x22 + 0xe4);
  *unaff_x19 = 0xfffffffe;
  if (iVar1 == 0) {
    thunk_FUN_049a583c();
  }
  FUN_077379a0(unaff_x19 + 2,uVar9,*(undefined8 *)puVar2);
  return;
}


