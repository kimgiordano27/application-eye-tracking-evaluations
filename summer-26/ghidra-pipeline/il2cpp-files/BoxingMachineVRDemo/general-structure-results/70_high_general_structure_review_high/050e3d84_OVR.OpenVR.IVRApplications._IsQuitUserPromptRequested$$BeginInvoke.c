/*
FUNCTION_NAME: OVR.OpenVR.IVRApplications._IsQuitUserPromptRequested$$BeginInvoke
ENTRY_POINT: 050e3d84
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_6;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_2
*/


void OVR_OpenVR_IVRApplications__IsQuitUserPromptRequested__BeginInvoke(void)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  long unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  int iVar9;
  int iVar10;
  ulong unaff_x24;
  int iVar11;
  long *unaff_x27;
  undefined8 *unaff_x28;
  long unaff_x29;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000010;
  ulong in_stack_00000028;
  
  iVar9 = 0;
  while( true ) {
    uVar1 = FUN_04e87a5c();
    if (*(int *)(*(long *)(unaff_x19 + 0x88) + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(*(long *)(unaff_x19 + 0x88));
    }
    uVar4 = FUN_04f80ed4(uVar1,0);
    if ((uVar4 & 1) == 0) break;
    iVar9 = iVar9 + 1;
    if (*(int *)(unaff_x20 + 0x10) <= iVar9) {
      thunk_FUN_02dc61f4(PTR_DAT_06763b78);
      uVar5 = thunk_FUN_02d9d534();
      uVar6 = thunk_FUN_02dc61f4(PTR_DAT_0677b880);
      FUN_04f7d8e0(uVar5,uVar6,0);
      uVar6 = thunk_FUN_02dc61f4(PTR_DAT_0677f4d0);
                    /* WARNING: Subroutine does not return */
      FUN_02d609b4(uVar5,uVar6);
    }
  }
  uVar2 = FUN_04e87a5c();
  if (*(int *)(*(long *)(unaff_x19 + 0x88) + 0xe4) == 0) {
    thunk_FUN_02dbd7b4(*(long *)(unaff_x19 + 0x88));
  }
  uVar4 = FUN_04f7cfe0(uVar2,0);
  if ((((uVar4 & 1) != 0) || ((uVar2 & 0xffff) == 0x2d)) || ((uVar2 & 0xffff) == 0x2b)) {
    if (*(int *)(*(long *)(unaff_x19 + 0x98) + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar5 = FUN_0503abac(in_stack_00000000,0);
    unaff_x20 = FUN_04e91db4();
    if (*(int *)(*(long *)PTR_DAT_0675eef8 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(*(long *)PTR_DAT_0675eef8);
    }
    uVar6 = FUN_04f8e414(0);
    if (*(int *)(*(long *)PTR_DAT_06760758 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    lVar7 = FUN_04f8604c(unaff_x20,uVar5,uVar6,0);
    if (lVar7 != 0) {
      if ((unaff_x24 & 1) == 0) {
        if (*(int *)(*(long *)(unaff_x19 + 0x98) + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        FUN_0503ac4c(in_stack_00000000,lVar7,0);
        return;
      }
      thunk_FUN_02dc61f4(PTR_DAT_0675eef8);
      FUN_028f4b80();
      uVar5 = FUN_04f8e414(0);
      uVar6 = thunk_FUN_02dc61f4(PTR_DAT_0677f4d8);
      uVar5 = FUN_050f0ec0(uVar6,uVar5,unaff_x20,0);
      thunk_FUN_02dc61f4(PTR_DAT_0676fbb0);
      uVar6 = thunk_FUN_02d9d534();
      FUN_04fefd84(uVar6,uVar5,0);
OVR_OpenVR_IVRApplications__GetCurrentSceneProcessId__EndInvoke:
      uVar5 = thunk_FUN_02dc61f4(PTR_DAT_0677f4d0);
                    /* WARNING: Subroutine does not return */
      FUN_02d609b4(uVar6,uVar5);
    }
    if (unaff_x20 == 0) {
LAB_050e4240:
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
  }
  if (*(int *)(unaff_x20 + 0x10) < iVar9) {
    uVar4 = 0;
  }
  else {
    uVar4 = 0;
    do {
      iVar3 = FUN_04e92204(unaff_x20,0x2c,iVar9,0);
      if (iVar3 == -1) {
        iVar3 = *(int *)(unaff_x20 + 0x10);
      }
      iVar11 = iVar3;
      iVar10 = iVar9;
      if (iVar9 < iVar3) {
        do {
          uVar1 = FUN_04e87a5c(unaff_x20,iVar9,0);
          if (*(int *)(*(long *)(unaff_x19 + 0x88) + 0xe4) == 0) {
            thunk_FUN_02dbd7b4(*(long *)(unaff_x19 + 0x88));
          }
          uVar8 = FUN_04f80ed4(uVar1,0);
          iVar10 = iVar9;
        } while (((uVar8 & 1) != 0) && (iVar9 = iVar9 + 1, iVar10 = iVar3, iVar3 != iVar9));
      }
      do {
        iVar9 = iVar11 - iVar10;
        if (iVar9 == 0 || iVar11 < iVar10) break;
        uVar1 = FUN_04e87a5c(unaff_x20,iVar11 + -1,0);
        if (*(int *)(*(long *)(unaff_x19 + 0x88) + 0xe4) == 0) {
          thunk_FUN_02dbd7b4(*(long *)(unaff_x19 + 0x88));
        }
        uVar8 = FUN_04f80ed4(uVar1,0);
        iVar11 = iVar11 + -1;
      } while ((uVar8 & 1) != 0);
      if (*(int *)(*unaff_x27 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      in_stack_00000028 = FUN_050e43cc(unaff_x20,in_stack_00000010,unaff_x21,iVar10,iVar9,4);
      if ((in_stack_00000028 & 0xff) == 0) {
        if (*(int *)(*unaff_x27 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        in_stack_00000028 = FUN_050e43cc(unaff_x20,in_stack_00000010,unaff_x21,iVar10,iVar9,5);
        if ((in_stack_00000028 & 0xff) == 0) {
          uVar1 = *(undefined4 *)(unaff_x20 + 0x10);
          if (*(int *)(*unaff_x27 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          in_stack_00000028 = FUN_050e42dc(unaff_x21,unaff_x20,0,uVar1,5);
          if ((in_stack_00000028 & 0xff) == 0) {
            thunk_FUN_02dc61f4(PTR_DAT_0675eef8);
            FUN_028f4b80();
            uVar5 = FUN_04f8e414(0);
            uVar6 = thunk_FUN_02dc61f4(PTR_DAT_0677b878);
            uVar5 = FUN_050f0ec0(uVar6,uVar5,unaff_x20,0);
            thunk_FUN_02dc61f4(PTR_DAT_06763b78);
            uVar6 = thunk_FUN_02d9d534();
            FUN_04f7d8e0(uVar6,uVar5,0);
            goto OVR_OpenVR_IVRApplications__GetCurrentSceneProcessId__EndInvoke;
          }
          uVar2 = FUN_03dce088(&stack0x00000028,*unaff_x28);
          if (unaff_x29 == 0) goto LAB_050e4240;
          if (*(uint *)(unaff_x29 + 0x18) <= uVar2) goto LAB_050e4244;
          uVar4 = *(ulong *)(unaff_x29 + (long)(int)uVar2 * 8 + 0x20);
          if (*(int *)(*(long *)(unaff_x19 + 0x98) + 0xe4) == 0) {
            thunk_FUN_02dbd7b4(*(long *)(unaff_x19 + 0x98));
          }
          goto LAB_050e3d40;
        }
      }
      uVar2 = FUN_03dce088(&stack0x00000028,*unaff_x28);
      if (unaff_x29 == 0) goto LAB_050e4240;
      if (*(uint *)(unaff_x29 + 0x18) <= uVar2) {
LAB_050e4244:
                    /* WARNING: Subroutine does not return */
        FUN_02d60af0();
      }
      iVar9 = iVar3 + 1;
      uVar4 = *(ulong *)(unaff_x29 + (long)(int)uVar2 * 8 + 0x20) | uVar4;
    } while (iVar9 <= *(int *)(unaff_x20 + 0x10));
  }
  if (*(int *)(*(long *)(unaff_x19 + 0x98) + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
LAB_050e3d40:
  FUN_0503b084(in_stack_00000000,uVar4,0);
  return;
}


