/*
FUNCTION_NAME: OVR.OpenVR.IVRApplications._IsQuitUserPromptRequested$$Invoke
ENTRY_POINT: 050e3d70
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_7;ui_or_gameplay_sink_hits_6;telemetry_or_network_hits_2
*/


void OVR_OpenVR_IVRApplications__IsQuitUserPromptRequested__Invoke(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  int in_w8;
  long unaff_x20;
  undefined8 unaff_x21;
  int iVar10;
  int iVar11;
  ulong unaff_x24;
  undefined8 unaff_x25;
  int iVar12;
  long *unaff_x27;
  undefined8 *unaff_x28;
  long unaff_x29;
  undefined8 in_stack_00000010;
  ulong in_stack_00000028;
  
  puVar1 = PTR_DAT_0675e258;
  if (0 < in_w8) {
    iVar10 = 0;
    do {
      uVar2 = FUN_04e87a5c();
      if (*(int *)(*(long *)(puVar1 + 0x88) + 0xe4) == 0) {
        thunk_FUN_02dbd7b4(*(long *)(puVar1 + 0x88));
      }
      uVar5 = FUN_04f80ed4(uVar2,0);
      if ((uVar5 & 1) == 0) {
        uVar3 = FUN_04e87a5c();
        if (*(int *)(*(long *)(puVar1 + 0x88) + 0xe4) == 0) {
          thunk_FUN_02dbd7b4(*(long *)(puVar1 + 0x88));
        }
        uVar5 = FUN_04f7cfe0(uVar3,0);
        if ((((uVar5 & 1) != 0) || ((uVar3 & 0xffff) == 0x2d)) || ((uVar3 & 0xffff) == 0x2b)) {
          if (*(int *)(*(long *)(puVar1 + 0x98) + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          uVar6 = FUN_0503abac(unaff_x25,0);
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
              if (*(int *)(*(long *)(puVar1 + 0x98) + 0xe4) == 0) {
                thunk_FUN_02dbd7b4();
              }
              FUN_0503ac4c(unaff_x25,lVar8,0);
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
            goto OVR_OpenVR_IVRApplications__GetCurrentSceneProcessId__EndInvoke;
          }
          if (unaff_x20 == 0) goto LAB_050e4240;
        }
        if (*(int *)(unaff_x20 + 0x10) < iVar10) {
          uVar5 = 0;
          goto OVR_OpenVR_IVRChaperone__GetPlayAreaSize__BeginInvoke;
        }
        uVar5 = 0;
        goto LAB_050e4034;
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 < *(int *)(unaff_x20 + 0x10));
  }
  thunk_FUN_02dc61f4(PTR_DAT_06763b78);
  uVar6 = thunk_FUN_02d9d534();
  uVar7 = thunk_FUN_02dc61f4(PTR_DAT_0677b880);
  FUN_04f7d8e0(uVar6,uVar7,0);
  uVar7 = thunk_FUN_02dc61f4(PTR_DAT_0677f4d0);
                    /* WARNING: Subroutine does not return */
  FUN_02d609b4(uVar6,uVar7);
LAB_050e4034:
  do {
    iVar4 = FUN_04e92204(unaff_x20,0x2c,iVar10,0);
    if (iVar4 == -1) {
      iVar4 = *(int *)(unaff_x20 + 0x10);
    }
    iVar12 = iVar4;
    iVar11 = iVar10;
    if (iVar10 < iVar4) {
      do {
        uVar2 = FUN_04e87a5c(unaff_x20,iVar10,0);
        if (*(int *)(*(long *)(puVar1 + 0x88) + 0xe4) == 0) {
          thunk_FUN_02dbd7b4(*(long *)(puVar1 + 0x88));
        }
        uVar9 = FUN_04f80ed4(uVar2,0);
        iVar11 = iVar10;
      } while (((uVar9 & 1) != 0) && (iVar10 = iVar10 + 1, iVar11 = iVar4, iVar4 != iVar10));
    }
    do {
      iVar10 = iVar12 - iVar11;
      if (iVar10 == 0 || iVar12 < iVar11) break;
      uVar2 = FUN_04e87a5c(unaff_x20,iVar12 + -1,0);
      if (*(int *)(*(long *)(puVar1 + 0x88) + 0xe4) == 0) {
        thunk_FUN_02dbd7b4(*(long *)(puVar1 + 0x88));
      }
      uVar9 = FUN_04f80ed4(uVar2,0);
      iVar12 = iVar12 + -1;
    } while ((uVar9 & 1) != 0);
    if (*(int *)(*unaff_x27 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    in_stack_00000028 = FUN_050e43cc(unaff_x20,in_stack_00000010,unaff_x21,iVar11,iVar10,4);
    if ((in_stack_00000028 & 0xff) == 0) {
      if (*(int *)(*unaff_x27 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      in_stack_00000028 = FUN_050e43cc(unaff_x20,in_stack_00000010,unaff_x21,iVar11,iVar10,5);
      if ((in_stack_00000028 & 0xff) == 0) {
        uVar2 = *(undefined4 *)(unaff_x20 + 0x10);
        if (*(int *)(*unaff_x27 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        in_stack_00000028 = FUN_050e42dc(unaff_x21,unaff_x20,0,uVar2,5);
        if ((in_stack_00000028 & 0xff) == 0) {
          thunk_FUN_02dc61f4(PTR_DAT_0675eef8);
          FUN_028f4b80();
          uVar6 = FUN_04f8e414(0);
          uVar7 = thunk_FUN_02dc61f4(PTR_DAT_0677b878);
          uVar6 = FUN_050f0ec0(uVar7,uVar6,unaff_x20,0);
          thunk_FUN_02dc61f4(PTR_DAT_06763b78);
          uVar7 = thunk_FUN_02d9d534();
          FUN_04f7d8e0(uVar7,uVar6,0);
OVR_OpenVR_IVRApplications__GetCurrentSceneProcessId__EndInvoke:
          uVar6 = thunk_FUN_02dc61f4(PTR_DAT_0677f4d0);
                    /* WARNING: Subroutine does not return */
          FUN_02d609b4(uVar7,uVar6);
        }
        uVar3 = FUN_03dce088(&stack0x00000028,*unaff_x28);
        if (unaff_x29 == 0) {
LAB_050e4240:
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        if (*(uint *)(unaff_x29 + 0x18) <= uVar3) goto LAB_050e4244;
        uVar5 = *(ulong *)(unaff_x29 + (long)(int)uVar3 * 8 + 0x20);
        if (*(int *)(*(long *)(puVar1 + 0x98) + 0xe4) == 0) {
          thunk_FUN_02dbd7b4(*(long *)(puVar1 + 0x98));
        }
        goto LAB_050e3d40;
      }
    }
    uVar3 = FUN_03dce088(&stack0x00000028,*unaff_x28);
    if (unaff_x29 == 0) goto LAB_050e4240;
    if (*(uint *)(unaff_x29 + 0x18) <= uVar3) {
LAB_050e4244:
                    /* WARNING: Subroutine does not return */
      FUN_02d60af0();
    }
    iVar10 = iVar4 + 1;
    uVar5 = *(ulong *)(unaff_x29 + (long)(int)uVar3 * 8 + 0x20) | uVar5;
  } while (iVar10 <= *(int *)(unaff_x20 + 0x10));
OVR_OpenVR_IVRChaperone__GetPlayAreaSize__BeginInvoke:
  if (*(int *)(*(long *)(puVar1 + 0x98) + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
LAB_050e3d40:
  FUN_0503b084(unaff_x25,uVar5,0);
  return;
}


