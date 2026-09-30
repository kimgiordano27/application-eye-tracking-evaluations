/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneDecorator.PoolManagerComponent$$Release
ENTRY_POINT: 08a79468
PROGRAM: Hyper-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_9;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_SceneDecorator_PoolManagerComponent__Release(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  undefined4 in_w8;
  ulong uVar8;
  int *piVar9;
  undefined4 *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long *plVar10;
  long lVar11;
  long lVar12;
  double dVar13;
  undefined8 in_stack_00000008;
  undefined4 uStack0000000000000014;
  undefined8 in_stack_00000028;
  
  *(undefined4 *)(unaff_x20 + 0x22) = in_w8;
  if (*(int *)(*unaff_x21 + 0xe4) == 0) {
    thunk_FUN_049a583c();
  }
  if (DAT_0b32acf7 == '\0') {
    FUN_04947ee4(PTR_DAT_0ac46eb8);
    DAT_0b32acf7 = '\x01';
  }
  lVar2 = *unaff_x21;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_049a583c();
    lVar2 = *unaff_x21;
  }
  puVar1 = PTR_DAT_0ac09758;
  plVar10 = (long *)**(undefined8 **)(lVar2 + 0xb8);
  in_stack_00000008 = CONCAT44(in_stack_00000008._4_4_,(int)unaff_x20[0x22]);
  uVar3 = thunk_FUN_04983b98(*(undefined8 *)(PTR_DAT_0ac09758 + 0x48),&stack0x00000008);
  uStack0000000000000014 = 3;
  uVar4 = thunk_FUN_04983b98(*(undefined8 *)(puVar1 + 0x48),&stack0x00000014);
  uVar3 = FUN_08bda628(*(undefined8 *)PTR_DAT_0ac4e8d8,uVar3,uVar4,0);
  uVar3 = FUN_08bcc3c0(*(undefined8 *)PTR_DAT_0ac545f8,uVar3,0);
  if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  lVar2 = *plVar10;
  uVar8 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_0ac46ed8) {
        puVar5 = (undefined8 *)(lVar2 + (long)*piVar9 * 0x10 + 0x138);
        goto LAB_08a7959c;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar5 = (undefined8 *)FUN_04980e68(plVar10,*(long *)PTR_DAT_0ac46ed8,0);
LAB_08a7959c:
  (*(code *)*puVar5)(plVar10,uVar3,puVar5[1]);
  lVar2 = FUN_08a730e4();
  unaff_x20[0x24] = lVar2;
  uVar8 = (**(code **)(*unaff_x20 + 0x188))();
  if ((((uVar8 & 1) != 0) && (unaff_x20[0x28] != 0)) && (*(char *)(unaff_x20[0x28] + 0x30) != '\0'))
  {
    lVar2 = FUN_08a730e4();
    lVar12 = unaff_x20[0x23];
    lVar6 = FUN_08a74224();
    if (unaff_x20[0x2c] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    lVar11 = unaff_x20[0x2d];
    lVar7 = FUN_09aee298(unaff_x20[0x2c],0);
    if (*(int *)(*(long *)PTR_DAT_0ac0a830 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    puVar1 = PTR_DAT_0ac52c18;
    lVar7 = (lVar11 - lVar6) + lVar7;
    lVar11 = -lVar7;
    if (-1 < lVar7) {
      lVar11 = lVar7;
    }
    lVar7 = *(long *)PTR_DAT_0ac52c18;
    *(long *)(unaff_x19 + 0xe) = lVar11;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    if (*(int *)(*(long *)PTR_DAT_0ac09c40 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    dVar13 = (double)FUN_08d9283c(*(long *)(*(long *)puVar1 + 0xb8) + 8,0);
    if (dVar13 < (double)lVar11) {
      unaff_x20[0x2d] = lVar6;
      if (unaff_x20[0x2c] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      FUN_09aee460(unaff_x20[0x2c],0);
      lVar11 = unaff_x20[0x27];
      lVar7 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac54598);
      FUN_08a40930(lVar7,0);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      *(long *)(lVar7 + 0x10) = lVar12 + lVar2;
      *(long *)(lVar7 + 0x18) = lVar6;
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      lVar2 = FUN_08a3fcac(lVar11,lVar7,*(undefined8 *)(unaff_x19 + 0xc),0);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      in_stack_00000028 = FUN_07764808(lVar2,*(undefined8 *)PTR_DAT_0ac54570);
      uVar8 = FUN_076844c8(&stack0x00000028,*(undefined8 *)PTR_DAT_0ac54568);
      if ((uVar8 & 1) == 0) {
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
      lVar2 = *(long *)puVar1;
      if (*(int *)(lVar2 + 0xe4) == 0) {
        thunk_FUN_049a583c();
        lVar2 = *(long *)puVar1;
      }
      in_stack_00000008 = *(undefined8 *)(unaff_x19 + 0xe);
      plVar10 = (long *)**(undefined8 **)(lVar2 + 0xb8);
      uVar3 = thunk_FUN_04983b98(*(undefined8 *)(PTR_DAT_0ac09758 + 0x68),&stack0x00000008);
      uVar3 = FUN_08bc9f74(*(undefined8 *)PTR_DAT_0ac545f0,uVar3,0);
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      lVar2 = *plVar10;
      uVar8 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_0ac46ed8) {
            puVar5 = (undefined8 *)(lVar2 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_08a7957c;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar5 = (undefined8 *)FUN_04980e68(plVar10,*(long *)PTR_DAT_0ac46ed8,0);
LAB_08a7957c:
      (*(code *)*puVar5)(plVar10,uVar3,puVar5[1]);
    }
  }
  *unaff_x19 = 0xfffffffe;
  FUN_08c7f6c8(unaff_x19 + 2,0);
  return;
}


