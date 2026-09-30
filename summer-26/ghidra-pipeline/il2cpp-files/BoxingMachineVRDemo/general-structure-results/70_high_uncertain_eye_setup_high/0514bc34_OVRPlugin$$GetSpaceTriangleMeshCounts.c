/*
FUNCTION_NAME: OVRPlugin$$GetSpaceTriangleMeshCounts
ENTRY_POINT: 0514bc34
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__GetSpaceTriangleMeshCounts(undefined8 *param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  char cVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long *plVar12;
  long *unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  long in_stack_00000018;
  
code_r0x0514bc34:
  thunk_FUN_02dd37b4(param_1,0);
  puVar3 = PTR_DAT_067810c0;
  puVar2 = PTR_DAT_06780ff8;
                    /* try { // try from 0514bc3c to 0524bdaf has its CatchHandler @ 0514bc3c
                       catch() { ... } // from try @ 0514bc3c with catch @ 0514bc3c
                       catch() { ... } // from try @ 0514be48 with catch @ 0514bc3c
                       catch() { ... } // from try @ 0514beac with catch @ 0514bc3c
                       catch() { ... } // from try @ 0514bee4 with catch @ 0514bc3c
                       catch() { ... } // from try @ 0514bf2c with catch @ 0514bc3c */
LAB_0514bc88:
  do {
    plVar12 = *(long **)(in_stack_00000018 + 0x50);
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    lVar9 = *plVar12;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *unaff_x23) {
          puVar4 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_0514bce0;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar4 = (undefined8 *)FUN_02d9a5d4(plVar12,*unaff_x23,0);
LAB_0514bce0:
    uVar10 = (*(code *)*puVar4)(plVar12,puVar4[1]);
    if ((uVar10 & 1) == 0) {
      FUN_0514c410();
      *(undefined8 *)(in_stack_00000018 + 0x50) = 0;
      thunk_FUN_02dd37b4((undefined8 *)(in_stack_00000018 + 0x50),0);
      return 0;
    }
    plVar12 = *(long **)(in_stack_00000018 + 0x50);
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    lVar9 = *plVar12;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *unaff_x21) {
          puVar4 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_0514bd4c;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar4 = (undefined8 *)FUN_02d9a5d4(plVar12,*unaff_x21,0);
LAB_0514bd4c:
    plVar12 = (long *)(*(code *)*puVar4)(plVar12,puVar4[1]);
    if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    if ((*(ulong *)(unaff_x22 + 0x10) & 0xff) != 0) {
      lVar9 = FUN_0514c0a8(plVar12,*(undefined8 *)(in_stack_00000018 + 0x40),
                           *(ulong *)(unaff_x22 + 0x10) >> 0x20);
      if (lVar9 != 0) {
        *(long *)(in_stack_00000018 + 0x18) = lVar9;
        thunk_FUN_02dd37b4();
        *(undefined4 *)(in_stack_00000018 + 0x10) = 1;
        return 1;
      }
      goto LAB_0514bc88;
    }
    if (plVar12 != (long *)0x0) {
      lVar9 = *plVar12;
      bVar1 = *(byte *)(*(long *)puVar2 + 0x130);
                    /* try { // try from 0514bdb0 to 0524bdb7 has its CatchHandler @ 0514beb4 */
      if ((bVar1 <= *(byte *)(lVar9 + 0x130)) &&
         (*(long *)(*(long *)(lVar9 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)puVar2)) break;
      bVar1 = *(byte *)(*(long *)puVar3 + 0x130);
      if ((bVar1 <= *(byte *)(lVar9 + 0x130)) &&
         (*(long *)(*(long *)(lVar9 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)puVar3)) break;
    }
    lVar9 = *(long *)(in_stack_00000018 + 0x40);
    cVar8 = '\0';
    if (lVar9 != 0) {
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      cVar8 = *(char *)(lVar9 + 0x20);
    }
    if (cVar8 != '\0') {
      lVar9 = thunk_FUN_02dc61f4(PTR_DAT_0675eef8);
      if (*(int *)(lVar9 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar5 = FUN_04f8e414(0);
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      plVar12 = (long *)thunk_FUN_02d709fc(plVar12,0);
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      uVar6 = (**(code **)(*plVar12 + 0x1b8))(plVar12,*(undefined8 *)(*plVar12 + 0x1c0));
      uVar7 = thunk_FUN_02dc61f4(PTR_DAT_06781cc0);
      uVar5 = FUN_050f0ec0(uVar7,uVar5,uVar6,0);
      thunk_FUN_02dc61f4(PTR_DAT_0677d960);
      uVar6 = thunk_FUN_02d9d534();
      FUN_050931fc(uVar6,uVar5,0);
      uVar5 = thunk_FUN_02dc61f4(PTR_DAT_06781cc8);
                    /* WARNING: Subroutine does not return */
      FUN_02d609b4(uVar6,uVar5);
    }
  } while( true );
  uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_06780ac0) {
        puVar4 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
        goto LAB_0514bbb4;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar4 = (undefined8 *)FUN_02d9a5d4(plVar12,*(long *)PTR_DAT_06780ac0,0);
LAB_0514bbb4:
  uVar5 = (*(code *)*puVar4)(plVar12,puVar4[1]);
  *(undefined8 *)(in_stack_00000018 + 0x58) = uVar5;
  thunk_FUN_02dd37b4();
  plVar12 = *(long **)(in_stack_00000018 + 0x58);
  *(undefined4 *)(in_stack_00000018 + 0x10) = 0xfffffffc;
  if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  lVar9 = *plVar12;
  uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == *unaff_x23) {
        puVar4 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
        goto LAB_0514bc10;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar4 = (undefined8 *)FUN_02d9a5d4(plVar12,*unaff_x23,0);
LAB_0514bc10:
  uVar10 = (*(code *)*puVar4)(plVar12,puVar4[1]);
  if ((uVar10 & 1) != 0) goto LAB_0514be74;
  FUN_0514c360();
  param_1 = (undefined8 *)(in_stack_00000018 + 0x58);
  *param_1 = 0;
  goto code_r0x0514bc34;
LAB_0514be74:
  plVar12 = *(long **)(in_stack_00000018 + 0x58);
  if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  lVar9 = *plVar12;
  uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == *unaff_x21) {
        puVar4 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
        goto LAB_0514bec8;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar4 = (undefined8 *)FUN_02d9a5d4(plVar12,*unaff_x21,0);
LAB_0514bec8:
  uVar5 = (*(code *)*puVar4)(plVar12,puVar4[1]);
  *(undefined8 *)(in_stack_00000018 + 0x18) = uVar5;
  thunk_FUN_02dd37b4();
  *(undefined4 *)(in_stack_00000018 + 0x10) = 2;
  return 1;
}


