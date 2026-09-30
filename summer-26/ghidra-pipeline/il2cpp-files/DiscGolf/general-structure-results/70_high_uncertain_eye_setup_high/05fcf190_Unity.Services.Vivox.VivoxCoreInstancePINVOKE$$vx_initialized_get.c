/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_initialized_get
ENTRY_POINT: 05fcf190
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 84
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_7;ui_or_gameplay_sink_hits_5;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_initialized_get(ulong param_1,long param_2)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  undefined8 uVar5;
  int iVar6;
  long lVar7;
  int iVar8;
  long unaff_x20;
  undefined8 uVar9;
  long unaff_x21;
  long *unaff_x25;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  
  if ((param_1 & 1) == 0) {
    FUN_02d965b8(Method_UnityEngine_UIElements_UQueryBuilder<Button>_ToList__);
    FUN_02d965b8(Method_System_Span<HierarchyNode>_op_Implicit__);
    FUN_02d965b8(Method_System_Array_Empty<OVRPlugin_VirtualKeyboardModelAnimationState>__);
    FUN_02d965b8(Method_System_Span<FrameTiming>__ctor__);
                    /* try { // try from 05fcf1c8 to 060cf1ef has its CatchHandler @ 05fcf504 */
    *(undefined1 *)(unaff_x20 + 0x819) = 1;
  }
  if (*(int *)(*unaff_x25 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  if (param_2 != 0) {
    uVar9 = *(undefined8 *)(param_2 + 0x30);
    lVar7 = *(long *)(*unaff_x25 + 0xb8);
    *(undefined8 *)(lVar7 + 0x10) = *(undefined8 *)(param_2 + 0x38);
    *(undefined8 *)(lVar7 + 8) = uVar9;
    if (unaff_x21 != 0) {
      lVar7 = *(long *)(unaff_x21 + 0x18);
      if (*(int *)(*(long *)Method_System_Span<HierarchyNode>_op_Implicit__ + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      puVar4 = Method_System_Span<FrameTiming>__ctor__;
      if (lVar7 != 0) {
        uVar9 = *(undefined8 *)(lVar7 + 0x10);
        if (*(char *)(param_2 + 0x5c) == '\0') {
          iVar8 = *(int *)(param_2 + 0x48);
          if (0 < iVar8) {
            iVar6 = *(int *)(param_2 + 0x54);
            iVar10 = 0;
            do {
              if (0 < iVar6) {
                iVar8 = 0;
                do {
                  uVar5 = *(undefined8 *)(param_2 + 0x20);
                  uVar1 = *(undefined8 *)(param_2 + 0x28);
                  lVar7 = *(long *)(unaff_x21 + 0x18);
                  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                    thunk_FUN_02df485c();
                  }
                  FUN_05fccbc0(&stack0x00000068,uVar5,uVar1);
                  if (lVar7 == 0) goto LAB_05fcf45c;
                  in_stack_00000018 = in_stack_00000070;
                  in_stack_00000010 = in_stack_00000068;
                  in_stack_00000028 = in_stack_00000080;
                  in_stack_00000020 = in_stack_00000078;
                  in_stack_00000030 = in_stack_00000088;
                  FUN_05f2fc38(lVar7,&stack0x00000010,iVar8 + *(int *)(param_2 + 0x50),0xffffffff,
                               *(int *)(param_2 + 0x44) + iVar10,0);
                  uVar5 = FUN_05fcd064(*(undefined8 *)(param_2 + 0x10),
                                       *(undefined8 *)(param_2 + 0x18));
                  lVar7 = *unaff_x25;
                  if (*(int *)(lVar7 + 0xe4) == 0) {
                    thunk_FUN_02df485c(lVar7);
                    lVar7 = *unaff_x25;
                  }
                  lVar7 = *(long *)(lVar7 + 0xb8);
                  iVar6 = *(int *)(param_2 + 0x4c);
                  iVar2 = *(int *)(param_2 + 0x40);
                  uVar11 = *(undefined4 *)(lVar7 + 8);
                  uVar12 = *(undefined4 *)(lVar7 + 0xc);
                  iVar3 = *(int *)(param_2 + 0x58);
                  uVar13 = *(undefined4 *)(lVar7 + 0x10);
                  uVar14 = *(undefined4 *)(lVar7 + 0x14);
                  if (*(int *)(*(long *)Method_UnityEngine_UIElements_UQueryBuilder<Button>_ToList__
                              + 0xe4) == 0) {
                    thunk_FUN_02df485c();
                  }
                  FUN_05f981b0(uVar11,uVar12,uVar13,uVar14,(float)(iVar8 + iVar6),uVar9,uVar5,
                               iVar2 + iVar10,iVar3 == 1,0);
                  iVar6 = *(int *)(param_2 + 0x54);
                  iVar8 = iVar8 + 1;
                } while (iVar8 < iVar6);
                iVar8 = *(int *)(param_2 + 0x48);
              }
              iVar10 = iVar10 + 1;
            } while (iVar10 < iVar8);
          }
        }
        else {
          uVar5 = *(undefined8 *)(param_2 + 0x20);
          uVar1 = *(undefined8 *)(param_2 + 0x28);
          lVar7 = *(long *)(unaff_x21 + 0x18);
          if (*(int *)(*(long *)Method_System_Span<FrameTiming>__ctor__ + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          FUN_05fccbc0(&stack0x00000068,uVar5,uVar1);
          if (lVar7 == 0) goto LAB_05fcf45c;
          in_stack_00000048 = in_stack_00000070;
          in_stack_00000040 = in_stack_00000068;
          in_stack_00000058 = in_stack_00000080;
          in_stack_00000050 = in_stack_00000078;
          in_stack_00000060 = in_stack_00000088;
          FUN_05f2fc38(lVar7,&stack0x00000040,0,0xffffffff,0xffffffff,0);
          uVar5 = FUN_05fcd064(*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x18));
          lVar7 = *unaff_x25;
          if (*(int *)(lVar7 + 0xe4) == 0) {
            thunk_FUN_02df485c(lVar7);
            lVar7 = *unaff_x25;
          }
          lVar7 = *(long *)(lVar7 + 0xb8);
          iVar8 = *(int *)(param_2 + 0x4c);
          iVar10 = *(int *)(param_2 + 0x58);
          uVar11 = *(undefined4 *)(lVar7 + 8);
          uVar12 = *(undefined4 *)(lVar7 + 0xc);
          uVar13 = *(undefined4 *)(lVar7 + 0x10);
          uVar14 = *(undefined4 *)(lVar7 + 0x14);
          if (*(int *)(*(long *)Method_UnityEngine_UIElements_UQueryBuilder<Button>_ToList__ + 0xe4)
              == 0) {
            thunk_FUN_02df485c();
          }
          FUN_05f985f4(uVar11,uVar12,uVar13,uVar14,(float)iVar8,uVar9,uVar5,iVar10 == 1,0);
        }
        return;
      }
    }
  }
LAB_05fcf45c:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


