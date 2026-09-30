/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.DebugGizmos$$get_Renderer
ENTRY_POINT: 08a1f328
PROGRAM: Hyper-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Gizmo_DebugGizmos__get_Renderer(void)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  int *piVar9;
  undefined4 *unaff_x19;
  long *plVar10;
  long *unaff_x22;
  undefined8 uStack0000000000000018;
  
  uStack0000000000000018 = *(undefined8 *)(unaff_x19 + 0xc);
  *(undefined8 *)(unaff_x19 + 0xc) = 0;
  *unaff_x19 = 0xffffffff;
  lVar3 = FUN_07684508(&stack0x00000018,*(undefined8 *)PTR_DAT_0ac521d8);
  if ((lVar3 == 0) || (lVar4 = FUN_0898dc78(lVar3,0), lVar4 == 0)) {
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
    plVar10 = (long *)**(undefined8 **)(lVar3 + 0xb8);
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    lVar3 = *plVar10;
    uVar8 = (ulong)*(ushort *)(lVar3 + 0x12e);
    uVar6 = *(undefined8 *)PTR_DAT_0ac521f0;
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_0ac46ed8) {
          puVar7 = (undefined8 *)(lVar3 + (long)(*piVar9 + 3) * 0x10 + 0x138);
          goto LAB_08a1f454;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar7 = (undefined8 *)FUN_04980e68(plVar10,*(long *)PTR_DAT_0ac46ed8,3);
LAB_08a1f454:
    (*(code *)*puVar7)(plVar10,uVar6,puVar7[1]);
    uVar6 = 0;
  }
  else {
    uVar5 = FUN_0898dc78(lVar3,0);
    uVar6 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac521d0);
    FUN_08a1f6b0(uVar6,uVar5);
  }
  puVar2 = PTR_DAT_0ac521c8;
  iVar1 = *(int *)(*unaff_x22 + 0xe4);
  *unaff_x19 = 0xfffffffe;
  if (iVar1 == 0) {
    thunk_FUN_049a583c();
  }
  FUN_07b6c5d8(unaff_x19 + 2,uVar6,*(undefined8 *)puVar2);
  return;
}


