/*
FUNCTION_NAME: OVR.OpenVR.IVRApplications._IsQuitUserPromptRequested$$EndInvoke
ENTRY_POINT: 050e3da4
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_7;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_2
*/


void OVR_OpenVR_IVRApplications__IsQuitUserPromptRequested__EndInvoke(long param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  int in_w9;
  long unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  int unaff_w23;
  int iVar10;
  ulong unaff_x24;
  undefined4 unaff_w25;
  int iVar11;
  long *unaff_x27;
  undefined8 *unaff_x28;
  long unaff_x29;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000010;
  ulong in_stack_00000028;
  
  while( true ) {
    if (in_w9 == 0) {
      thunk_FUN_02dbd7b4(param_1);
    }
    uVar5 = FUN_04f80ed4(unaff_w25,0);
    if ((uVar5 & 1) == 0) break;
    unaff_w23 = unaff_w23 + 1;
    if (*(int *)(unaff_x20 + 0x10) <= unaff_w23) {
      thunk_FUN_02dc61f4(PTR_DAT_06763b78);
      uVar6 = thunk_FUN_02d9d534();
      uVar7 = thunk_FUN_02dc61f4(PTR_DAT_0677b880);
      FUN_04f7d8e0(uVar6,uVar7,0);
      uVar7 = thunk_FUN_02dc61f4(PTR_DAT_0677f4d0);
                    /* WARNING: Subroutine does not return */
      FUN_02d609b4(uVar6,uVar7);
    }
    unaff_w25 = FUN_04e87a5c();
    param_1 = *(long *)(unaff_x19 + 0x88);
    in_w9 = *(int *)(param_1 + 0xe4);
  }
  uVar2 = FUN_04e87a5c();
  if (*(int *)(*(long *)(unaff_x19 + 0x88) + 0xe4) == 0) {
    thunk_FUN_02dbd7b4(*(long *)(unaff_x19 + 0x88));
  }
  uVar5 = FUN_04f7cfe0(uVar2,0);
  if ((((uVar5 & 1) != 0) || ((uVar2 & 0xffff) == 0x2d)) || ((uVar2 & 0xffff) == 0x2b)) {
    if (*(int *)(*(long *)(unaff_x19 + 0x98) + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar6 = FUN_0503abac(in_stack_00000000,0);
    unaff_x20 = FUN_04e91db4();
    if (*(int *)(*(long *)PTR_DAT_0675eef8 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(*(long *)PTR_DAT_0675eef8);
    }
    uVar7 = FUN_04f8e414(0);
    if (*(int *)(*(long *)PTR_DAT_06760758 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    lVar8 = FUN_04f8604c(unaff_x20,uVar6,uVar7,0);
    if (lVar8 != 0) {
      if ((unaff_x24 & 1) == 0) {
        if (*(int *)(*(long *)(unaff_x19 + 0x98) + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        FUN_0503ac4c(in_stack_00000000,lVar8,0);
        return;
      }
      thunk_FUN_02dc61f4(PTR_DAT_0675eef8);
      FUN_028f4b80();
      uVar6 = FUN_04f8e414(0);
      uVar7 = thunk_FUN_02dc61f4(PTR_DAT_0677f4d8);
      uVar6 = FUN_050f0ec0(uVar7,uVar6,unaff_x20,0);
      thunk_FUN_02dc61f4(PTR_DAT_0676fbb0);
      uVar7 = thunk_FUN_02d9d534();
      FUN_04fefd84(uVar7,uVar6,0);
OVR_OpenVR_IVRApplications__GetCurrentSceneProcessId__EndInvoke:
      uVar6 = thunk_FUN_02dc61f4(PTR_DAT_0677f4d0);
                    /* WARNING: Subroutine does not return */
      FUN_02d609b4(uVar7,uVar6);
    }
    if (unaff_x20 == 0) {
LAB_050e4240:
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
  }
  if (*(int *)(unaff_x20 + 0x10) < unaff_w23) {
    uVar5 = 0;
  }
  else {
    uVar5 = 0;
    do {
      iVar3 = FUN_04e92204(unaff_x20,0x2c,unaff_w23,0);
      if (iVar3 == -1) {
        iVar3 = *(int *)(unaff_x20 + 0x10);
      }
      iVar11 = iVar3;
      iVar10 = unaff_w23;
      if (unaff_w23 < iVar3) {
        do {
          uVar4 = FUN_04e87a5c(unaff_x20,unaff_w23,0);
          if (*(int *)(*(long *)(unaff_x19 + 0x88) + 0xe4) == 0) {
            thunk_FUN_02dbd7b4(*(long *)(unaff_x19 + 0x88));
          }
          uVar9 = FUN_04f80ed4(uVar4,0);
          iVar10 = unaff_w23;
        } while (((uVar9 & 1) != 0) &&
                (unaff_w23 = unaff_w23 + 1, iVar10 = iVar3, iVar3 != unaff_w23));
      }
      do {
        iVar1 = iVar11 - iVar10;
        if (iVar1 == 0 || iVar11 < iVar10) break;
        uVar4 = FUN_04e87a5c(unaff_x20,iVar11 + -1,0);
        if (*(int *)(*(long *)(unaff_x19 + 0x88) + 0xe4) == 0) {
          thunk_FUN_02dbd7b4(*(long *)(unaff_x19 + 0x88));
        }
        uVar9 = FUN_04f80ed4(uVar4,0);
        iVar11 = iVar11 + -1;
      } while ((uVar9 & 1) != 0);
      if (*(int *)(*unaff_x27 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      in_stack_00000028 = FUN_050e43cc(unaff_x20,in_stack_00000010,unaff_x21,iVar10,iVar1,4);
      if ((in_stack_00000028 & 0xff) == 0) {
        if (*(int *)(*unaff_x27 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        in_stack_00000028 = FUN_050e43cc(unaff_x20,in_stack_00000010,unaff_x21,iVar10,iVar1,5);
        if ((in_stack_00000028 & 0xff) == 0) {
          uVar4 = *(undefined4 *)(unaff_x20 + 0x10);
          if (*(int *)(*unaff_x27 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          in_stack_00000028 = FUN_050e42dc(unaff_x21,unaff_x20,0,uVar4,5);
          if ((in_stack_00000028 & 0xff) == 0) {
            thunk_FUN_02dc61f4(PTR_DAT_0675eef8);
            FUN_028f4b80();
            uVar6 = FUN_04f8e414(0);
            uVar7 = thunk_FUN_02dc61f4(PTR_DAT_0677b878);
            uVar6 = FUN_050f0ec0(uVar7,uVar6,unaff_x20,0);
            thunk_FUN_02dc61f4(PTR_DAT_06763b78);
            uVar7 = thunk_FUN_02d9d534();
            FUN_04f7d8e0(uVar7,uVar6,0);
            goto OVR_OpenVR_IVRApplications__GetCurrentSceneProcessId__EndInvoke;
          }
          uVar2 = FUN_03dce088(&stack0x00000028,*unaff_x28);
          if (unaff_x29 == 0) goto LAB_050e4240;
          if (*(uint *)(unaff_x29 + 0x18) <= uVar2) goto LAB_050e4244;
          uVar5 = *(ulong *)(unaff_x29 + (long)(int)uVar2 * 8 + 0x20);
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
      unaff_w23 = iVar3 + 1;
      uVar5 = *(ulong *)(unaff_x29 + (long)(int)uVar2 * 8 + 0x20) | uVar5;
    } while (unaff_w23 <= *(int *)(unaff_x20 + 0x10));
  }
  if (*(int *)(*(long *)(unaff_x19 + 0x98) + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
LAB_050e3d40:
  FUN_0503b084(in_stack_00000000,uVar5,0);
  return;
}


