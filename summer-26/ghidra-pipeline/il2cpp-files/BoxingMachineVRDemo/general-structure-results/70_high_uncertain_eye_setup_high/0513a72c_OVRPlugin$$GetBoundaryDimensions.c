/*
FUNCTION_NAME: OVRPlugin$$GetBoundaryDimensions
ENTRY_POINT: 0513a72c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__GetBoundaryDimensions(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint uVar7;
  undefined4 uVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  undefined8 *puVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  long *unaff_x19;
  long *plVar16;
  long unaff_x20;
  long *plVar17;
  undefined8 uVar18;
  undefined8 in_stack_00000020;
  long in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  long in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined4 uStack0000000000000058;
  long in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  long in_stack_00000078;
  undefined8 in_stack_00000080;
  
  FUN_02d6084c(*(undefined8 *)(param_1 + 0xb20));
  FUN_02d6084c(PTR_DAT_0677db28);
  *(undefined1 *)(unaff_x20 + 0xcd9) = 1;
  puVar6 = PTR_DAT_06781110;
  puVar5 = PTR_DAT_06780c40;
  puVar4 = PTR_DAT_0677db20;
  puVar3 = PTR_DAT_0677db18;
  puVar2 = PTR_DAT_0677d958;
  _uStack0000000000000058 = 0;
  in_stack_00000060 = 0;
  in_stack_00000068 = 0;
  if (unaff_x19[2] == 0) {
    uVar18 = **(undefined8 **)(*(long *)(PTR_DAT_0675e258 + 0x90) + 0xb8);
  }
  else {
    lVar9 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_0677db28);
    FUN_03a786b4(lVar9,*(undefined8 *)puVar4);
    plVar17 = (long *)0x0;
    do {
      plVar16 = unaff_x19;
      uVar7 = (**(code **)(*plVar16 + 0x228))(plVar16,*(undefined8 *)(*plVar16 + 0x230));
      if ((uVar7 & 0xfffffffe) == 2) {
        if (plVar17 != (long *)0x0) {
          uVar18 = *(undefined8 *)puVar6;
          lVar10 = thunk_FUN_02d9d438(plVar16,uVar18);
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60e88(plVar16,uVar18);
          }
          lVar10 = *(long *)puVar6;
          plVar11 = (long *)thunk_FUN_02d9d438(plVar16,lVar10);
          if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60e88(plVar16,lVar10);
          }
          lVar13 = *plVar11;
          uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
          if (uVar14 != 0) {
            piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == lVar10) {
                puVar12 = (undefined8 *)(lVar13 + (long)(*piVar15 + 2) * 0x10 + 0x138);
                goto LAB_0513a8b4;
              }
              uVar14 = uVar14 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar14 != 0);
          }
          puVar12 = (undefined8 *)FUN_02d9a5d4(plVar11,lVar10,2);
LAB_0513a8b4:
          uVar8 = (*(code *)*puVar12)(plVar11,plVar17,puVar12[1]);
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4(*(long *)puVar2);
          }
          FUN_050939c4(&stack0x00000058,2,0);
          _uStack0000000000000058 = CONCAT44(uVar8,uStack0000000000000058);
LAB_0513a8f0:
          in_stack_00000048 = in_stack_00000060;
          in_stack_00000040 = _uStack0000000000000058;
          in_stack_00000050 = in_stack_00000068;
          if (lVar9 == 0) {
LAB_0513aa20:
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8();
          }
          lVar13 = *(long *)puVar3;
          in_stack_00000078 = in_stack_00000060;
          in_stack_00000070 = _uStack0000000000000058;
          in_stack_00000080 = in_stack_00000068;
          lVar10 = *(long *)(lVar9 + 0x10);
          *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
          if (lVar10 == 0) goto LAB_0513aa20;
          uVar7 = *(uint *)(lVar9 + 0x18);
          if (uVar7 < *(uint *)(lVar10 + 0x18)) {
            *(uint *)(lVar9 + 0x18) = uVar7 + 1;
            lVar10 = lVar10 + (long)(int)uVar7 * 0x18;
            *(undefined8 *)(lVar10 + 0x30) = in_stack_00000068;
            *(long *)(lVar10 + 0x28) = in_stack_00000060;
            *(undefined8 *)(lVar10 + 0x20) = _uStack0000000000000058;
            thunk_FUN_02dd37b4(lVar10 + 0x28,0);
          }
          else {
            in_stack_00000028 = in_stack_00000060;
            in_stack_00000020 = _uStack0000000000000058;
            in_stack_00000030 = in_stack_00000068;
            FUN_03a78fd4(lVar9,&stack0x00000020,
                         *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
          }
        }
      }
      else if (uVar7 == 4) {
        bVar1 = *(byte *)(*(long *)puVar5 + 0x130);
        if ((*(byte *)(*plVar16 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar16 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar5)) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60e88(plVar16);
        }
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        FUN_050939c4(&stack0x00000058,1,0);
        in_stack_00000060 = plVar16[0xc];
        thunk_FUN_02dd37b4(&stack0x00000060);
        goto LAB_0513a8f0;
      }
      unaff_x19 = (long *)plVar16[2];
      plVar17 = plVar16;
    } while ((long *)plVar16[2] != (long *)0x0);
    FUN_03358a54(lVar9,*(undefined8 *)PTR_DAT_06781780);
    in_stack_00000028 = 0;
    in_stack_00000020 = 0;
    in_stack_00000038 = 0;
    in_stack_00000030 = 0;
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar18 = FUN_05093d08(lVar9);
  }
  return uVar18;
}


