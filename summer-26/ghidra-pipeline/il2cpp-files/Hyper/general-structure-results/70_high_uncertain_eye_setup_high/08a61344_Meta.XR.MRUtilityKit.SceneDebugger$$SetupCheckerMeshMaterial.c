/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneDebugger$$SetupCheckerMeshMaterial
ENTRY_POINT: 08a61344
PROGRAM: Hyper-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_13;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_SceneDebugger__SetupCheckerMeshMaterial(long param_1)

{
  undefined1 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  undefined4 *unaff_x19;
  long unaff_x20;
  long *plVar11;
  long *unaff_x24;
  
  lVar3 = FUN_07684508(&stack0x00000018,**(undefined8 **)(param_1 + 0xc18));
  puVar2 = PTR_DAT_0ac46eb8;
  if (((lVar3 == 0) || (*(long *)(lVar3 + 0x10) == 0)) || (*(long *)(lVar3 + 0x18) == 0)) {
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
    plVar11 = (long *)**(undefined8 **)(lVar3 + 0xb8);
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    lVar3 = *plVar11;
    uVar9 = (ulong)*(ushort *)(lVar3 + 0x12e);
    uVar5 = *(undefined8 *)PTR_DAT_0ac53c30;
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_0ac46ed8) {
          puVar6 = (undefined8 *)(lVar3 + (long)(*piVar10 + 3) * 0x10 + 0x138);
          goto LAB_08a61590;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar6 = (undefined8 *)FUN_04980e68(plVar11,*(long *)PTR_DAT_0ac46ed8,3);
LAB_08a61590:
    (*(code *)*puVar6)(plVar11,uVar5,puVar6[1]);
  }
  else {
    lVar4 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac53c10);
    FUN_08a62fa8(lVar4,0);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    lVar7 = *(long *)(lVar3 + 0x18);
    *(undefined4 *)(lVar4 + 0x10) = 1;
    puVar2 = PTR_DAT_0ac53c00;
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    lVar7 = *(long *)(lVar7 + 0x10);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    uVar5 = FUN_06b181a8(lVar7,*(undefined8 *)PTR_DAT_0ac53c00);
    *(undefined8 *)(lVar4 + 0x28) = uVar5;
    thunk_FUN_049ee3d8();
    lVar7 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac53c08);
    FUN_08a62fb0(lVar7,0);
    lVar8 = *(long *)(lVar3 + 0x18);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    uVar1 = *(undefined1 *)(lVar8 + 0x20);
    uVar5 = *(undefined8 *)(lVar8 + 0x28);
    *(undefined8 *)(lVar7 + 0x20) = *(undefined8 *)(lVar8 + 0x18);
    *(undefined1 *)(lVar7 + 0x10) = uVar1;
    *(undefined8 *)(lVar7 + 0x18) = uVar5;
    thunk_FUN_049ee3d8();
    *(long *)(lVar4 + 0x20) = lVar7;
    thunk_FUN_049ee3d8((long *)(lVar4 + 0x20),lVar7);
    if (*(long *)(lVar3 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    lVar7 = *(long *)(*(long *)(lVar3 + 0x10) + 0x10);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    uVar5 = FUN_06b181a8(lVar7,*(undefined8 *)puVar2);
    *(undefined8 *)(lVar4 + 0x18) = uVar5;
    thunk_FUN_049ee3d8();
    if (*(long *)(lVar3 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    *(undefined8 *)(lVar4 + 0x38) = *(undefined8 *)(*(long *)(lVar3 + 0x10) + 0x18);
    thunk_FUN_049ee3d8();
    *(undefined8 *)(lVar4 + 0x30) = *(undefined8 *)PTR_DAT_0ac53c38;
    thunk_FUN_049ee3d8();
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    FUN_08a60a68();
  }
  lVar3 = *unaff_x24;
  *unaff_x19 = 0xfffffffe;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_049a583c();
  }
  FUN_08c7f478(unaff_x19 + 2,0);
  return;
}


