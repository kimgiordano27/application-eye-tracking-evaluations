/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.GizmoRenderer$$Update
ENTRY_POINT: 08a237b0
PROGRAM: Hyper-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Gizmo_GizmoRenderer__Update(void)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  int *piVar6;
  undefined4 *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long *plVar7;
  undefined8 uVar8;
  long *unaff_x23;
  
  if (DAT_0b32acf7 == '\0') {
    FUN_04947ee4(PTR_DAT_0ac46eb8);
    DAT_0b32acf7 = '\x01';
  }
  lVar3 = *unaff_x21;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_049a583c();
    lVar3 = *unaff_x21;
  }
  plVar7 = (long *)**(undefined8 **)(lVar3 + 0xb8);
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  lVar3 = *plVar7;
  uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
  uVar8 = *(undefined8 *)PTR_DAT_0ac523d0;
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_0ac46ed8) {
        puVar4 = (undefined8 *)(lVar3 + (long)(*piVar6 + 3) * 0x10 + 0x138);
        goto LAB_08a23854;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar4 = (undefined8 *)FUN_04980e68(plVar7,*(long *)PTR_DAT_0ac46ed8,3);
LAB_08a23854:
  (*(code *)*puVar4)(plVar7,uVar8,puVar4[1]);
  puVar2 = PTR_DAT_0ac12b40;
  iVar1 = *(int *)(*unaff_x23 + 0xe4);
  *unaff_x19 = 0xfffffffe;
  if (iVar1 == 0) {
    thunk_FUN_049a583c();
  }
  FUN_07b63710(unaff_x19 + 2,unaff_x20 != 0,*(undefined8 *)puVar2);
  return;
}


