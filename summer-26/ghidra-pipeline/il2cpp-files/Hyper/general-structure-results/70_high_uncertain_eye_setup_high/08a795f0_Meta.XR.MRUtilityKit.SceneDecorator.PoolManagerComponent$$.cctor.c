/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneDecorator.PoolManagerComponent$$.cctor
ENTRY_POINT: 08a795f0
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


void Meta_XR_MRUtilityKit_SceneDecorator_PoolManagerComponent___cctor(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  undefined4 *unaff_x19;
  long *plVar7;
  long *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long lVar8;
  long unaff_x25;
  double dVar9;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000028;
  
  if (unaff_x20[0x2c] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  lVar8 = unaff_x20[0x2d];
  lVar4 = FUN_09aee298(unaff_x20[0x2c],0);
  if (*(int *)(*(long *)PTR_DAT_0ac0a830 + 0xe4) == 0) {
    thunk_FUN_049a583c();
  }
  puVar1 = PTR_DAT_0ac52c18;
  lVar4 = (lVar8 - unaff_x22) + lVar4;
  lVar8 = -lVar4;
  if (-1 < lVar4) {
    lVar8 = lVar4;
  }
  lVar4 = *(long *)PTR_DAT_0ac52c18;
  *(long *)(unaff_x19 + 0xe) = lVar8;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_049a583c();
  }
  if (*(int *)(*(long *)PTR_DAT_0ac09c40 + 0xe4) == 0) {
    thunk_FUN_049a583c();
  }
  dVar9 = (double)FUN_08d9283c(*(long *)(*(long *)puVar1 + 0xb8) + 8,0);
  if (dVar9 < (double)lVar8) {
    unaff_x20[0x2d] = unaff_x22;
    if (unaff_x20[0x2c] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    FUN_09aee460(unaff_x20[0x2c],0);
    lVar8 = unaff_x20[0x27];
    lVar4 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac54598);
    FUN_08a40930(lVar4,0);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    *(long *)(lVar4 + 0x10) = unaff_x25 + unaff_x21;
    *(long *)(lVar4 + 0x18) = unaff_x22;
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    lVar4 = FUN_08a3fcac(lVar8,lVar4,*(undefined8 *)(unaff_x19 + 0xc),0);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    in_stack_00000028 = FUN_07764808(lVar4,*(undefined8 *)PTR_DAT_0ac54570);
    uVar5 = FUN_076844c8(&stack0x00000028,*(undefined8 *)PTR_DAT_0ac54568);
    if ((uVar5 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined8 *)(unaff_x19 + 0x10) = in_stack_00000028;
      thunk_FUN_049ee3d8(unaff_x19 + 0x10,0);
      FUN_05a6f290(unaff_x19 + 2,&stack0x00000028);
      return;
    }
    FUN_07684508(&stack0x00000028,*(undefined8 *)PTR_DAT_0ac54560);
    if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    (**(code **)(*unaff_x20 + 0x198))();
    puVar1 = PTR_DAT_0ac46eb8;
    if (*(int *)(*(long *)PTR_DAT_0ac46eb8 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    if (DAT_0b32acf7 == '\0') {
      FUN_04947ee4(PTR_DAT_0ac46eb8);
      DAT_0b32acf7 = '\x01';
    }
    lVar4 = *(long *)puVar1;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_049a583c();
      lVar4 = *(long *)puVar1;
    }
    in_stack_00000008 = *(undefined8 *)(unaff_x19 + 0xe);
    plVar7 = (long *)**(undefined8 **)(lVar4 + 0xb8);
    uVar2 = thunk_FUN_04983b98(*(undefined8 *)(PTR_DAT_0ac09758 + 0x68),&stack0x00000008);
    uVar2 = FUN_08bc9f74(*(undefined8 *)PTR_DAT_0ac545f0,uVar2,0);
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    lVar4 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_0ac46ed8) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_08a7957c;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_04980e68(plVar7,*(long *)PTR_DAT_0ac46ed8,0);
LAB_08a7957c:
    (*(code *)*puVar3)(plVar7,uVar2,puVar3[1]);
  }
  *unaff_x19 = 0xfffffffe;
  FUN_08c7f6c8(unaff_x19 + 2,0);
  return;
}


