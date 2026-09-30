/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.PolylineRenderer$$SetTransform
ENTRY_POINT: 08a236f0
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


void Meta_XR_ImmersiveDebugger_Gizmo_PolylineRenderer__SetTransform(long param_1)

{
  int iVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  int *piVar7;
  undefined4 *unaff_x19;
  long *plVar8;
  undefined8 uVar9;
  long *unaff_x23;
  undefined8 in_stack_00000018;
  
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  in_stack_00000018 = FUN_07764808(param_1,*(undefined8 *)PTR_DAT_0ac521e8);
  uVar3 = FUN_076844c8(&stack0x00000018,*(undefined8 *)PTR_DAT_0ac521e0);
  if ((uVar3 & 1) == 0) {
    *unaff_x19 = 0;
    *(undefined8 *)(unaff_x19 + 0xc) = in_stack_00000018;
    thunk_FUN_049ee3d8(unaff_x19 + 0xc,0);
    if (*(int *)(*unaff_x23 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    FUN_0532a4cc(unaff_x19 + 2,&stack0x00000018);
  }
  else {
    lVar4 = FUN_07684508(&stack0x00000018,*(undefined8 *)PTR_DAT_0ac521d8);
    puVar2 = PTR_DAT_0ac46eb8;
    if (lVar4 == 0) {
      if (*(int *)(*(long *)PTR_DAT_0ac46eb8 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      if (DAT_0b32acf7 == '\0') {
        FUN_04947ee4(PTR_DAT_0ac46eb8);
        DAT_0b32acf7 = '\x01';
      }
      lVar5 = *(long *)puVar2;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_049a583c();
        lVar5 = *(long *)puVar2;
      }
      plVar8 = (long *)**(undefined8 **)(lVar5 + 0xb8);
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      lVar5 = *plVar8;
      uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
      uVar9 = *(undefined8 *)PTR_DAT_0ac523d0;
      if (uVar3 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_0ac46ed8) {
            puVar6 = (undefined8 *)(lVar5 + (long)(*piVar7 + 3) * 0x10 + 0x138);
            goto LAB_08a23854;
          }
          uVar3 = uVar3 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar3 != 0);
      }
      puVar6 = (undefined8 *)FUN_04980e68(plVar8,*(long *)PTR_DAT_0ac46ed8,3);
LAB_08a23854:
      (*(code *)*puVar6)(plVar8,uVar9,puVar6[1]);
    }
    puVar2 = PTR_DAT_0ac12b40;
    iVar1 = *(int *)(*unaff_x23 + 0xe4);
    *unaff_x19 = 0xfffffffe;
    if (iVar1 == 0) {
      thunk_FUN_049a583c();
    }
    FUN_07b63710(unaff_x19 + 2,lVar4 != 0,*(undefined8 *)puVar2);
  }
  return;
}


