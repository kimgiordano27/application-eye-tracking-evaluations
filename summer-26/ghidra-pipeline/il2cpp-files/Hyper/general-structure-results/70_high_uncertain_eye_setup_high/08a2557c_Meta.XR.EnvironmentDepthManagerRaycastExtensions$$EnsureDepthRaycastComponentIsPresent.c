/*
FUNCTION_NAME: Meta.XR.EnvironmentDepthManagerRaycastExtensions$$EnsureDepthRaycastComponentIsPresent
ENTRY_POINT: 08a2557c
PROGRAM: Hyper-libil2cpp.so
SCORE: 84
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_11;ray_or_cast_sink_hits_3;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_EnvironmentDepthManagerRaycastExtensions__EnsureDepthRaycastComponentIsPresent(void)

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  int *piVar8;
  int *unaff_x19;
  long unaff_x20;
  long lVar9;
  long *plVar10;
  long lVar11;
  undefined8 in_stack_00000008;
  undefined4 in_stack_00000018;
  undefined8 in_stack_00000020;
  long in_stack_00000028;
  
  FUN_04947ee4();
  FUN_04947ee4(PTR_DAT_0ac52510);
  FUN_04947ee4(PTR_DAT_0ac46eb8);
  FUN_04947ee4(PTR_DAT_0ac10af0);
  FUN_04947ee4(PTR_DAT_0ac52518);
  FUN_04947ee4(PTR_DAT_0ac46ed8);
  *(undefined1 *)(unaff_x20 + 0x2e6) = 1;
  puVar1 = PTR_DAT_0ac111a0;
  in_stack_00000028 = 0;
  in_stack_00000020 = 0;
  in_stack_00000018 = 0;
  if (*unaff_x19 == 0) {
    in_stack_00000020 = *(undefined8 *)(unaff_x19 + 0xc);
    unaff_x19[0xc] = 0;
    unaff_x19[0xd] = 0;
    *unaff_x19 = -1;
  }
  else {
    lVar9 = *(long *)(unaff_x19 + 8);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    if (*(long *)(lVar9 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    bVar3 = FUN_0845cb74(*(long *)(lVar9 + 0x10),&stack0x00000028,*(undefined8 *)PTR_DAT_0ac52510);
    puVar2 = PTR_DAT_0ac46eb8;
    if ((bVar3 & in_stack_00000028 != 0) != 0) {
      if (*(int *)(*(long *)PTR_DAT_0ac46eb8 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      if (DAT_0b32acf7 == '\0') {
        FUN_04947ee4(PTR_DAT_0ac46eb8);
        DAT_0b32acf7 = '\x01';
      }
      lVar4 = *(long *)puVar2;
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_049a583c();
        lVar4 = *(long *)puVar2;
      }
      if (in_stack_00000028 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      plVar10 = (long *)**(undefined8 **)(lVar4 + 0xb8);
      lVar4 = FUN_089c6994(in_stack_00000028,0);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      in_stack_00000008._4_4_ = *(undefined4 *)(lVar4 + 0x18);
      uVar5 = thunk_FUN_04983b98(*(undefined8 *)(PTR_DAT_0ac09758 + 0x50),(long)&stack0x00000008 + 4
                                );
      uVar5 = FUN_08bda628(*(undefined8 *)PTR_DAT_0ac52518,uVar5,in_stack_00000028,0);
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      lVar4 = *plVar10;
      uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_0ac46ed8) {
            puVar6 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_08a25730;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar6 = (undefined8 *)FUN_04980e68(plVar10,*(long *)PTR_DAT_0ac46ed8,0);
LAB_08a25730:
      (*(code *)*puVar6)(plVar10,uVar5,puVar6[1]);
      if (in_stack_00000028 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      lVar11 = *(long *)(lVar9 + 0x18);
      lVar4 = FUN_089c6994(in_stack_00000028,0);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      FUN_08438ae4(lVar11,*(undefined4 *)(lVar4 + 0x18),in_stack_00000028,
                   *(undefined8 *)PTR_DAT_0ac52508);
      FUN_08a24d18(lVar9,in_stack_00000028);
    }
    uVar5 = *(undefined8 *)(unaff_x19 + 10);
    if (*(int *)(*(long *)PTR_DAT_0ac10af0 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    lVar9 = FUN_08dfc834(500,uVar5,0);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    in_stack_00000020 = FUN_08df2f04(lVar9,0);
    uVar7 = FUN_08c80df8(&stack0x00000020,0);
    if ((uVar7 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined8 *)(unaff_x19 + 0xc) = in_stack_00000020;
      thunk_FUN_049ee3d8(unaff_x19 + 0xc,0);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      FUN_05a2e250(unaff_x19 + 2,&stack0x00000020);
      return;
    }
  }
  FUN_08c80ec0(&stack0x00000020,0);
  lVar9 = *(long *)puVar1;
  *unaff_x19 = -2;
  if (*(int *)(lVar9 + 0xe4) == 0) {
    thunk_FUN_049a583c();
  }
  FUN_08c7f478(unaff_x19 + 2,0);
  return;
}


