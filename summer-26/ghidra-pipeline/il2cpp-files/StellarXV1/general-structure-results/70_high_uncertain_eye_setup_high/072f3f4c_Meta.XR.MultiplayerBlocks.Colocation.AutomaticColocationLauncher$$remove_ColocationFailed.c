/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Colocation.AutomaticColocationLauncher$$remove_ColocationFailed
ENTRY_POINT: 072f3f4c
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x072f40ec) */
/* WARNING: Removing unreachable block (ram,0x072f4558) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void Meta_XR_MultiplayerBlocks_Colocation_AutomaticColocationLauncher__remove_ColocationFailed(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  int *piVar9;
  int *unaff_x19;
  long unaff_x20;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  undefined8 in_stack_00000030;
  char cStack000000000000003c;
  undefined8 in_stack_00000040;
  int iStack000000000000004c;
  
  FUN_04077588();
  FUN_04077588(PTR_DAT_092c4990);
  FUN_04077588(PTR_DAT_09285ef8);
  FUN_04077588(PTR_DAT_092c47d8);
  FUN_04077588(PTR_DAT_092858c8);
  FUN_04077588(PTR_DAT_092c4998);
  FUN_04077588(PTR_DAT_092c49a0);
  FUN_04077588(PTR_DAT_092c49a8);
  FUN_04077588(PTR_DAT_092c49b0);
  *(undefined1 *)(unaff_x20 + 0xc22) = 1;
  puVar2 = PTR_DAT_09285a68;
  in_stack_00000040 = 0;
  iStack000000000000004c = *unaff_x19;
  lVar10 = *(long *)(unaff_x19 + 8);
  cStack000000000000003c = '\0';
  in_stack_00000030 = 0;
  if (iStack000000000000004c == 0) {
    in_stack_00000030 = *(undefined8 *)(unaff_x19 + 10);
    unaff_x19[10] = 0;
    unaff_x19[0xb] = 0;
    iStack000000000000004c = -1;
    *unaff_x19 = -1;
  }
  else {
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    *(undefined1 *)(lVar10 + 0x24) = 0;
    if (*(long *)(lVar10 + 0x68) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    uVar5 = FUN_06efc4a0(*(long *)(lVar10 + 0x68),*(undefined8 *)PTR_DAT_092c4988);
    puVar3 = PTR_DAT_09285ef8;
    lVar6 = FUN_04fba6a8(uVar5,*(undefined8 *)PTR_DAT_09285ef8);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    if (0 < (int)*(ulong *)(lVar6 + 0x18)) {
      uVar12 = 0;
      uVar8 = *(ulong *)(lVar6 + 0x18) & 0xffffffff;
      do {
        if (uVar8 <= uVar12) {
                    /* WARNING: Subroutine does not return */
          FUN_04077838();
        }
        FUN_072f2e04(lVar10,*(undefined8 *)(lVar6 + 0x20 + uVar12 * 8));
        uVar8 = (ulong)*(uint *)(lVar6 + 0x18);
        uVar12 = uVar12 + 1;
      } while ((long)uVar12 < (long)(int)*(uint *)(lVar6 + 0x18));
    }
    in_stack_00000040 = *(undefined8 *)(lVar10 + 0x68);
    cStack000000000000003c = '\0';
    FUN_076e7928(in_stack_00000040,&stack0x0000003c,0);
    lVar6 = *(long *)(lVar10 + 0x70);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    iVar1 = *(int *)(lVar6 + 0x18);
    *(undefined4 *)(lVar6 + 0x18) = 0;
    *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
    if (0 < iVar1) {
      FUN_0769c874(*(undefined8 *)(lVar6 + 0x10),0,iVar1,0);
    }
    if ((iStack000000000000004c < 0) && (cStack000000000000003c != '\0')) {
      thunk_FUN_0408541c(in_stack_00000040,0);
    }
    if (*(long *)(lVar10 + 0x88) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    uVar5 = FUN_06efc4a0(*(long *)(lVar10 + 0x88),*(undefined8 *)PTR_DAT_092c4990);
    lVar6 = FUN_04fba6a8(uVar5,*(undefined8 *)puVar3);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    if (0 < (int)*(ulong *)(lVar6 + 0x18)) {
      uVar12 = 0;
      uVar8 = *(ulong *)(lVar6 + 0x18) & 0xffffffff;
      do {
        if (uVar8 <= uVar12) {
                    /* WARNING: Subroutine does not return */
          FUN_04077838();
        }
        uVar5 = *(undefined8 *)(lVar6 + 0x20 + uVar12 * 8);
        uVar4 = FUN_072f2b5c(lVar10,uVar5);
        if ((uVar4 < 5) && ((1 << (ulong)(uVar4 & 0x1f) & 0x16U) != 0)) {
          FUN_072f3614(lVar10,uVar5,1);
        }
        else {
          FUN_072f3b70(lVar10,uVar5,1);
        }
        uVar8 = (ulong)*(uint *)(lVar6 + 0x18);
        uVar12 = uVar12 + 1;
      } while ((long)uVar12 < (long)(int)*(uint *)(lVar6 + 0x18));
    }
    plVar11 = *(long **)(lVar10 + 0x78);
    if (plVar11 == (long *)0x0) goto LAB_072f44b0;
    uVar5 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_09285e40);
    FUN_075d444c(uVar5,lVar10,*(undefined8 *)PTR_DAT_092c4998,0);
    puVar3 = PTR_DAT_092c47d8;
    lVar6 = *plVar11;
    uVar12 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar12 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_092c47d8) {
          puVar7 = (undefined8 *)(lVar6 + (long)(*piVar9 + 2) * 0x10 + 0x138);
          goto LAB_072f4240;
        }
        uVar12 = uVar12 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar12 != 0);
    }
    puVar7 = (undefined8 *)FUN_040b1e00(plVar11,*(long *)PTR_DAT_092c47d8,2);
LAB_072f4240:
    (*(code *)*puVar7)(plVar11,uVar5,puVar7[1]);
    plVar11 = *(long **)(lVar10 + 0x78);
    uVar5 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092c4638);
    FUN_06f31944(uVar5,lVar10,*(undefined8 *)PTR_DAT_092c49b0,0);
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar6 = *plVar11;
    uVar12 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar12 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar3) {
          puVar7 = (undefined8 *)(lVar6 + (long)(*piVar9 + 4) * 0x10 + 0x138);
          goto LAB_072f42d4;
        }
        uVar12 = uVar12 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar12 != 0);
    }
    puVar7 = (undefined8 *)FUN_040b1e00(plVar11,*(long *)puVar3,4);
LAB_072f42d4:
    (*(code *)*puVar7)(plVar11,uVar5,puVar7[1]);
    plVar11 = *(long **)(lVar10 + 0x78);
    uVar5 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_0928b5c0);
    FUN_06e5b700(uVar5,lVar10,*(undefined8 *)PTR_DAT_092c49a8,0);
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar6 = *plVar11;
    uVar12 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar12 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar3) {
          puVar7 = (undefined8 *)(lVar6 + (long)(*piVar9 + 6) * 0x10 + 0x138);
          goto LAB_072f4368;
        }
        uVar12 = uVar12 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar12 != 0);
    }
    puVar7 = (undefined8 *)FUN_040b1e00(plVar11,*(long *)puVar3,6);
LAB_072f4368:
    (*(code *)*puVar7)(plVar11,uVar5,puVar7[1]);
    plVar11 = *(long **)(lVar10 + 0x78);
    uVar5 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092c4648);
    FUN_06e5992c(uVar5,lVar10,*(undefined8 *)PTR_DAT_092c49a0,0);
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar6 = *plVar11;
    uVar12 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar12 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar3) {
          puVar7 = (undefined8 *)(lVar6 + (long)(*piVar9 + 8) * 0x10 + 0x138);
          goto LAB_072f43fc;
        }
        uVar12 = uVar12 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar12 != 0);
    }
    puVar7 = (undefined8 *)FUN_040b1e00(plVar11,*(long *)puVar3,8);
LAB_072f43fc:
    (*(code *)*puVar7)(plVar11,uVar5,puVar7[1]);
    plVar11 = *(long **)(lVar10 + 0x78);
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar6 = *plVar11;
    uVar12 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar12 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar3) {
          puVar7 = (undefined8 *)(lVar6 + (long)(*piVar9 + 0xb) * 0x10 + 0x138);
          goto LAB_072f4464;
        }
        uVar12 = uVar12 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar12 != 0);
    }
    puVar7 = (undefined8 *)FUN_040b1e00(plVar11,*(long *)puVar3,0xb);
LAB_072f4464:
    lVar6 = (*(code *)*puVar7)(plVar11,puVar7[1]);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    in_stack_00000030 = FUN_076f1ee4(lVar6,0);
    uVar12 = FUN_07591eb4(&stack0x00000030,0);
    if ((uVar12 & 1) == 0) {
      iStack000000000000004c = 0;
      *unaff_x19 = 0;
      *(undefined8 *)(unaff_x19 + 10) = in_stack_00000030;
      thunk_FUN_040ec700(unaff_x19 + 10,0);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      FUN_04e53928(unaff_x19 + 2,&stack0x00000030);
      return;
    }
  }
  FUN_07591f7c(&stack0x00000030,0);
  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  *(undefined8 *)(lVar10 + 0x78) = 0;
  thunk_FUN_040ec700((undefined8 *)(lVar10 + 0x78),0);
LAB_072f44b0:
  lVar6 = *(long *)puVar2;
  *(undefined8 *)(lVar10 + 0x58) = 0;
  *unaff_x19 = -2;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  FUN_0759053c(unaff_x19 + 2,0);
  return;
}


