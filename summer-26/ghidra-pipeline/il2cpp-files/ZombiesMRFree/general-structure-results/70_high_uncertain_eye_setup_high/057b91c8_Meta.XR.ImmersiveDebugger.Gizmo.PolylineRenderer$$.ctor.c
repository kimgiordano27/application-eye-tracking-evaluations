/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.PolylineRenderer$$.ctor
ENTRY_POINT: 057b91c8
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Gizmo_PolylineRenderer___ctor
               (long param_1,int param_2,void *param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  byte bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  int iVar8;
  undefined1 *__dest;
  ulong __n;
  uint uVar9;
  int *piVar10;
  long *plVar11;
  long unaff_x29;
  
  lVar1 = tpidr_el0;
  *(undefined8 *)(unaff_x29 + -8) = *(undefined8 *)(lVar1 + 0x28);
  bVar4 = DAT_073951f1;
  *(int *)(unaff_x29 + -0xc) = param_2;
  *(void **)(unaff_x29 + -0x18) = param_3;
  if ((bVar4 & 1) == 0) {
    FUN_02fe925c(PTR_DAT_06f6d668);
    FUN_02fe925c(PTR_DAT_06f9bb78);
    FUN_02fe925c(PTR_DAT_06f9bb80);
    DAT_073951f1 = 1;
  }
  puVar3 = PTR_DAT_06f9bb80;
  puVar2 = PTR_DAT_06f9bb78;
  __n = (ulong)*(uint *)(*(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x38) + 0xfc);
  __dest = &stack0x00000000 + -(__n + 0xf & 0x1fffffff0);
  piVar10 = (int *)(param_1 + 0x14);
  iVar8 = *piVar10;
  if (iVar8 < param_2) {
    uVar5 = FUN_05aec914(unaff_x29 + -0xc,0);
    uVar6 = FUN_05aec914(piVar10,0);
    uVar5 = FUN_059721e8(*(undefined8 *)puVar2,uVar5,*(undefined8 *)puVar3,uVar6,0);
    if (*(int *)(*(long *)PTR_DAT_06f6d668 + 0xe0) == 0) {
      thunk_FUN_02fdcff0(*(long *)PTR_DAT_06f6d668);
    }
    FUN_068bd958(uVar5,0);
    iVar8 = *piVar10;
  }
  if (iVar8 == *(int *)(param_1 + 0x18)) {
    (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x58))(param_1);
    iVar8 = *(int *)(param_1 + 0x14);
  }
  uVar9 = *(uint *)(unaff_x29 + -0xc);
  if (iVar8 - uVar9 != 0 && (int)uVar9 <= iVar8) {
    NodeCanvas_Tasks_Actions_FadeOut___ctor
              (*(undefined8 *)(param_1 + 0x20),uVar9,*(undefined8 *)(param_1 + 0x20),uVar9 + 1,
               iVar8 - uVar9,0);
    uVar9 = *(uint *)(unaff_x29 + -0xc);
  }
  plVar11 = *(long **)(param_1 + 0x20);
  if (-1 < *(int *)(*(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x38) + 0x28)) {
    param_3 = (void *)(unaff_x29 + -0x18);
  }
  memcpy(__dest,param_3,__n);
  if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02fe94e8();
  }
  if (uVar9 < *(uint *)(plVar11 + 3)) {
    memcpy((void *)((long)plVar11 + (ulong)*(uint *)(*plVar11 + 0x104) * (long)(int)uVar9 + 0x20),
           __dest,__n);
    lVar7 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x38);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_02feb2c4();
    }
    if (uVar9 < *(uint *)(plVar11 + 3)) {
      FUN_02fe920c(lVar7,(long)plVar11 +
                         (ulong)*(uint *)(*plVar11 + 0x104) * (long)(int)uVar9 + 0x20,__dest);
      iVar8 = *(int *)(param_1 + 0x14) + 1;
      *(int *)(param_1 + 0x10) = iVar8;
      *(int *)(param_1 + 0x14) = iVar8;
      if (*(long *)(lVar1 + 0x28) == *(long *)(unaff_x29 + -8)) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94f0();
}


