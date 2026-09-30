/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.GizmoTypesRegistry.<>c$$<InitGizmos>b__3_9
ENTRY_POINT: 08a25204
PROGRAM: Hyper-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_8;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Gizmo_GizmoTypesRegistry_<>c__<InitGizmos>b__3_9(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  int *piVar8;
  long unaff_x19;
  long *unaff_x21;
  long *plVar9;
  undefined8 in_stack_00000000;
  
  thunk_FUN_049a583c();
  if (DAT_0b32ba8b == '\0') {
    FUN_04947ee4(PTR_DAT_0ac4d650);
    DAT_0b32ba8b = '\x01';
  }
  lVar2 = *unaff_x21;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_049a583c();
    lVar2 = *unaff_x21;
  }
  if (**(long **)(lVar2 + 0xb8) == 0) goto LAB_08a25440;
  lVar2 = FUN_06ec47f0();
  if (lVar2 != 0) {
    lVar3 = FUN_089c6ad8(lVar2,0);
    if (lVar3 != 0) {
      if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_08a25440;
      uVar4 = FUN_08438bd8(*(long *)(unaff_x19 + 0x20),*(undefined4 *)(lVar3 + 0x18),
                           *(undefined8 *)PTR_DAT_0ac52428);
      if ((uVar4 & 1) != 0) {
        return;
      }
      if (*(long *)(unaff_x19 + 0x18) == 0) goto LAB_08a25440;
      uVar4 = FUN_08438bfc(*(long *)(unaff_x19 + 0x18),*(undefined4 *)(lVar3 + 0x18),
                           &stack0x00000008,*(undefined8 *)PTR_DAT_0ac524e0);
      puVar1 = PTR_DAT_0ac46eb8;
      if ((uVar4 & 1) != 0) {
        if (*(int *)(*(long *)PTR_DAT_0ac46eb8 + 0xe4) == 0) {
          thunk_FUN_049a583c();
        }
        if (DAT_0b32acf7 == '\0') {
          FUN_04947ee4(PTR_DAT_0ac46eb8);
          DAT_0b32acf7 = '\x01';
        }
        lVar5 = *(long *)puVar1;
        if (*(int *)(lVar5 + 0xe4) == 0) {
          thunk_FUN_049a583c();
          lVar5 = *(long *)puVar1;
        }
        in_stack_00000000._4_4_ = *(undefined4 *)(lVar3 + 0x18);
        plVar9 = (long *)**(undefined8 **)(lVar5 + 0xb8);
        uVar6 = thunk_FUN_04983b98(*(undefined8 *)(PTR_DAT_0ac09758 + 0x50),
                                   (long)&stack0x00000000 + 4);
        uVar6 = FUN_08bda628(*(undefined8 *)PTR_DAT_0ac524f0,uVar6,lVar3,0);
        if (plVar9 == (long *)0x0) goto LAB_08a25440;
        lVar5 = *plVar9;
        uVar4 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar4 != 0) {
          piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_0ac46ed8) {
              puVar7 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_08a253a4;
            }
            uVar4 = uVar4 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar4 != 0);
        }
        puVar7 = (undefined8 *)FUN_04980e68(plVar9,*(long *)PTR_DAT_0ac46ed8,0);
LAB_08a253a4:
        (*(code *)*puVar7)(plVar9,uVar6,puVar7[1]);
      }
      if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_08a25440;
      FUN_08438ae4(*(long *)(unaff_x19 + 0x20),*(undefined4 *)(lVar3 + 0x18),lVar3,
                   *(undefined8 *)PTR_DAT_0ac524d0);
    }
    lVar2 = FUN_089c6b78(lVar2,0);
    if (lVar2 != 0) {
      lVar3 = *(long *)(unaff_x19 + 0x28);
      if (*(int *)(*(long *)PTR_DAT_0ac09b88 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      uVar6 = FUN_08d599a0(0);
      if (lVar3 == 0) {
LAB_08a25440:
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      FUN_08409330(lVar3,uVar6,lVar2,*(undefined8 *)PTR_DAT_0ac524d8);
    }
  }
  return;
}


