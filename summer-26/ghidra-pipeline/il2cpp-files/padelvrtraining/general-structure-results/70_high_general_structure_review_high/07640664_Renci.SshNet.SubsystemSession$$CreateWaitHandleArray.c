/*
FUNCTION_NAME: Renci.SshNet.SubsystemSession$$CreateWaitHandleArray
ENTRY_POINT: 07640664
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_5
*/


void Renci_SshNet_SubsystemSession__CreateWaitHandleArray(undefined8 param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  undefined8 unaff_x26;
  undefined8 *unaff_x27;
  long *plVar11;
  undefined8 *unaff_x29;
  long *in_stack_00000008;
  undefined8 in_stack_00000028;
  
  uVar4 = thunk_FUN_03d19be4(param_1,*(undefined8 *)*unaff_x27);
  if ((uVar4 & 1) == 0) {
    uVar5 = thunk_FUN_03d1e194(PTR_DAT_091a4f90);
    uVar4 = thunk_FUN_03d19be4(uVar5,*(undefined8 *)*unaff_x27);
    if ((uVar4 & 1) == 0) {
      puVar10 = (undefined8 *)__cxa_allocate_exception(8);
      *puVar10 = *unaff_x27;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar10,&PTR_PTR_08cb6798,0);
    }
    plVar11 = (long *)*unaff_x27;
    __cxa_end_catch();
    uVar4 = Renci_SshNet_Session__Reset();
    if ((uVar4 & 1) != 0) {
      if (plVar11 != (long *)0x0) {
        if (plVar11 == (long *)0x0) goto LAB_07640a84;
        (**(code **)(*plVar11 + 0x168))(plVar11,*(undefined8 *)(*plVar11 + 0x170));
        in_stack_00000008 = plVar11;
      }
      thunk_FUN_03d1e194(PTR_DAT_091b3e48);
      unaff_x26 = FUN_06fd2168();
      uVar5 = thunk_FUN_03d1e194(PTR_DAT_0922d748);
      if (plVar11 == (long *)0x0) {
        uVar7 = 0;
      }
      else {
        if (in_stack_00000008 == (long *)0x0) goto LAB_07640a84;
        uVar7 = (**(code **)(*in_stack_00000008 + 0x168))
                          (in_stack_00000008,*(undefined8 *)(*in_stack_00000008 + 0x170));
      }
      FUN_06fc5244(uVar5,uVar7,0);
      goto code_r0x0764094c;
    }
  }
  else {
    plVar11 = (long *)*unaff_x27;
    __cxa_end_catch();
    uVar4 = Renci_SshNet_Session__Reset();
    if ((uVar4 & 1) != 0) {
      uVar5 = thunk_FUN_03d1e194(PTR_DAT_091a2770);
      lVar6 = FUN_03d2d394(uVar5,5);
      if (lVar6 == 0) goto LAB_07640a84;
      if (*(int *)(lVar6 + 0x18) == 0) {
LAB_07640a80:
                    /* WARNING: Subroutine does not return */
        FUN_03d2d550();
      }
      *(undefined8 *)(lVar6 + 0x20) = unaff_x26;
      thunk_FUN_03d1023c();
      if (plVar11 == (long *)0x0) {
        uVar5 = 0;
      }
      else {
        if (plVar11 == (long *)0x0) goto LAB_07640a84;
        uVar5 = (**(code **)(*plVar11 + 0x168))(plVar11,*(undefined8 *)(*plVar11 + 0x170));
      }
      if (*(uint *)(lVar6 + 0x18) < 2) goto LAB_07640a80;
      *(undefined8 *)(lVar6 + 0x28) = uVar5;
      thunk_FUN_03d1023c((undefined8 *)(lVar6 + 0x28));
      uVar5 = thunk_FUN_03d1e194(PTR_DAT_091a29d8);
      if (*(uint *)(lVar6 + 0x18) < 3) goto LAB_07640a80;
      *(undefined8 *)(lVar6 + 0x30) = uVar5;
      thunk_FUN_03d1023c();
      if (plVar11 == (long *)0x0) goto LAB_07640a84;
      in_stack_00000028._4_4_ =
           (**(code **)(*plVar11 + 0x1f8))(plVar11,*(undefined8 *)(*plVar11 + 0x200));
      uVar5 = FUN_07175a38((long)&stack0x00000028 + 4,0);
      if (*(uint *)(lVar6 + 0x18) < 4) goto LAB_07640a80;
      *(undefined8 *)(lVar6 + 0x38) = uVar5;
      thunk_FUN_03d1023c((undefined8 *)(lVar6 + 0x38),uVar5);
      uVar5 = thunk_FUN_03d1e194(PTR_DAT_091b3e48);
      if (*(uint *)(lVar6 + 0x18) < 5) goto LAB_07640a80;
      *(undefined8 *)(lVar6 + 0x40) = uVar5;
      thunk_FUN_03d1023c();
      unaff_x26 = FUN_06fd2590(lVar6,0);
      uVar5 = thunk_FUN_03d1e194(PTR_DAT_0922d738);
      uVar7 = (**(code **)(*plVar11 + 0x168))(plVar11,*(undefined8 *)(*plVar11 + 0x170));
      in_stack_00000028._4_4_ =
           (**(code **)(*plVar11 + 0x1f8))(plVar11,*(undefined8 *)(*plVar11 + 0x200));
      uVar8 = FUN_07175a38((long)&stack0x00000028 + 4,0);
      uVar9 = thunk_FUN_03d1e194(PTR_DAT_0922d740);
      FUN_06fd2488(uVar5,uVar7,uVar9,uVar8,0);
code_r0x0764094c:
      FUN_07620134();
    }
  }
  do {
    unaff_x21 = unaff_x21 + 1;
    if ((long)(int)*(uint *)(unaff_x20 + 0x18) <= (long)unaff_x21) break;
    if (*(uint *)(unaff_x20 + 0x18) <= unaff_x21) goto LAB_07640a80;
    lVar6 = *(long *)(unaff_x22 + unaff_x21 * 8);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    uVar2 = FUN_07cf1710(lVar6,0);
    lVar3 = thunk_FUN_03d2ef40(*unaff_x29);
    FUN_07c1738c(lVar3,uVar2,1,6,0);
    *unaff_x23 = lVar3;
    thunk_FUN_03d1023c();
    if (*unaff_x23 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    FUN_07c1aa68(*unaff_x23,1,0);
    if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    lVar3 = *(long *)(unaff_x19 + 0x58);
    uVar4 = FUN_0761ceb0(*(long *)(unaff_x19 + 0x10),0);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548(uVar4,uVar4 & 0xffffffff);
    }
    FUN_07c17eec(lVar3,uVar4 & 0xffffffff,0);
    if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    lVar3 = *(long *)(unaff_x19 + 0x58);
    uVar4 = FUN_0761ceb0(*(long *)(unaff_x19 + 0x10),0);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548(uVar4,uVar4 & 0xffffffff);
    }
    FUN_07c17f54(lVar3,uVar4 & 0xffffffff,0);
    if (*unaff_x23 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    FUN_07c1c9ec(*unaff_x23,lVar6,*(undefined4 *)(unaff_x19 + 0x40),0);
  } while ((*unaff_x23 == 0) || (*(char *)(*unaff_x23 + 0x52) == '\0'));
  lVar6 = *(long *)(unaff_x19 + 0x58);
  if ((lVar6 == 0) || (*(char *)(lVar6 + 0x52) == '\0')) {
    uVar4 = Renci_SshNet_Session__Reset();
    if ((uVar4 & 1) != 0) {
      FUN_06fc5244(*(undefined8 *)PTR_DAT_0922d728,unaff_x26,0);
      FUN_07620134();
    }
    FUN_0762014c();
    return;
  }
  *(bool *)(unaff_x19 + 0x44) = *(int *)(lVar6 + 0x20) == 0x17;
  plVar11 = (long *)FUN_07c1b194(lVar6,0);
  if (plVar11 != (long *)0x0) {
    uVar5 = (**(code **)(*plVar11 + 0x168))(plVar11,*(undefined8 *)(*plVar11 + 0x170));
    if (cRam00000000098498ef == '\0') {
      FUN_03d2d2b0(PTR_DAT_0922cdd0);
      cRam00000000098498ef = '\x01';
    }
    puVar1 = PTR_DAT_0922cdd0;
    **(undefined8 **)(*(long *)PTR_DAT_0922cdd0 + 0xb8) = uVar5;
    thunk_FUN_03d1023c(*(undefined8 *)(*(long *)puVar1 + 0xb8),uVar5);
    plVar11 = *(long **)(unaff_x19 + 0x10);
    *(undefined4 *)(unaff_x19 + 0x1c) = 2;
    if (plVar11 != (long *)0x0) {
      (**(code **)(*plVar11 + 0x1d8))(plVar11,*(undefined8 *)(*plVar11 + 0x1e0));
      FUN_07640ac0();
      return;
    }
  }
LAB_07640a84:
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


