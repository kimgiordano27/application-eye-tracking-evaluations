/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_evt_text_stream_updated_t_sessiongroup_handle_set
ENTRY_POINT: 085461ec
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_14;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_text_stream_updated_t_sessiongroup_handle_set
               (long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 unaff_x19;
  long unaff_x20;
  long unaff_x21;
  int unaff_w23;
  undefined4 unaff_w24;
  ulong uVar9;
  undefined8 *unaff_x26;
  long *unaff_x27;
  undefined4 uStack0000000000000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined4 in_stack_00000058;
  undefined4 uStack000000000000005c;
  undefined4 in_stack_00000060;
  undefined8 uStack0000000000000064;
  undefined4 uStack000000000000006c;
  undefined4 uStack0000000000000070;
  undefined4 in_stack_00000078;
  
  *(undefined4 *)(unaff_x20 + 0x10) = unaff_w24;
  *(int *)(unaff_x20 + 0xb8) = unaff_w23;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  thunk_FUN_040ec700((undefined8 *)(param_1 + 0xe8),0);
  *(undefined8 *)(unaff_x20 + 0xf8) = 0;
  *(undefined4 *)(unaff_x20 + 0xf0) = 0;
  thunk_FUN_040ec700((undefined8 *)(unaff_x20 + 0xf8),0);
  lVar4 = *unaff_x27;
  *(undefined4 *)(unaff_x20 + 0x100) = 0;
  if (unaff_w23 == 1) {
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    uVar5 = FUN_08a03c48(0);
  }
  else {
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    uVar5 = FUN_08a03c40(0);
  }
  puVar2 = PTR_DAT_0932c878;
  in_stack_00000078 = 0;
  _uStack0000000000000070 = 0;
  FUN_0601aa2c(&stack0x00000070,uVar5,*unaff_x26);
  in_stack_00000008 = 0;
  _uStack0000000000000000 = 0;
  in_stack_00000018 = 0;
  in_stack_00000010 = 0;
  UnityEngine_UIElements_InlineStyleAccessPropertyBag_PaddingRightProperty___ctor();
  *(undefined8 *)(unaff_x20 + 0xc4) = in_stack_00000008;
  *(ulong *)(unaff_x20 + 0xbc) = _uStack0000000000000000;
  *(undefined8 *)(unaff_x20 + 0xd4) = in_stack_00000018;
  *(undefined8 *)(unaff_x20 + 0xcc) = in_stack_00000010;
  if ((unaff_x21 != 0) && (uVar6 = *(ulong *)(unaff_x21 + 0x18), uVar6 != 0)) {
    if (0 < (int)uVar6) {
      uVar9 = 0;
      do {
        if ((uVar6 & 0xffffffff) <= uVar9) {
                    /* WARNING: Subroutine does not return */
          FUN_04077838();
        }
        lVar4 = *(long *)(unaff_x20 + 0x108);
        _uStack0000000000000000 = _uStack0000000000000000 & 0xffffffff00000000;
        FUN_08a07820();
        if (lVar4 == 0) goto LAB_08546514;
        lVar7 = *(long *)(lVar4 + 0x10);
        lVar8 = *(long *)puVar2;
        *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
        if (lVar7 == 0) goto LAB_08546514;
        uVar1 = *(uint *)(lVar4 + 0x18);
        if (uVar1 < *(uint *)(lVar7 + 0x18)) {
          *(uint *)(lVar4 + 0x18) = uVar1 + 1;
          *(undefined4 *)(lVar7 + (long)(int)uVar1 * 4 + 0x20) = uStack0000000000000000;
        }
        else {
          FUN_05cc8dcc(lVar4,_uStack0000000000000000 & 0xffffffff,
                       *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
        }
        uVar6 = (ulong)*(uint *)(unaff_x21 + 0x18);
        uVar9 = uVar9 + 1;
      } while ((long)uVar9 < (long)(int)*(uint *)(unaff_x21 + 0x18));
    }
LAB_085464b4:
    uStack0000000000000064 = 0;
    in_stack_00000060 = 0;
    in_stack_00000008 = 0;
    _uStack0000000000000000 = 0;
    in_stack_00000018 = 0;
    in_stack_00000010 = 0;
    in_stack_00000028 = 0;
    in_stack_00000020 = 0;
    in_stack_00000038 = 0;
    in_stack_00000030 = 0;
    in_stack_00000048 = 0;
    in_stack_00000040 = 0;
    in_stack_00000058 = 0;
    uStack000000000000005c = 0;
    in_stack_00000050 = 0;
    FUN_08a03dd0();
    memcpy((void *)(unaff_x20 + 0x118),&stack0x00000000,0x6c);
    *(undefined8 *)(unaff_x20 + 0xe0) = unaff_x19;
    thunk_FUN_040ec700((undefined8 *)(unaff_x20 + 0xe0));
    return;
  }
  lVar4 = *(long *)(unaff_x20 + 0x108);
  _uStack0000000000000000 = _uStack0000000000000000 & 0xffffffff00000000;
  FUN_08a07820();
  if (lVar4 != 0) {
    lVar7 = *(long *)(lVar4 + 0x10);
    lVar8 = *(long *)puVar2;
    *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
    puVar3 = PTR_DAT_0932e248;
    if (lVar7 != 0) {
      uVar1 = *(uint *)(lVar4 + 0x18);
      if (uVar1 < *(uint *)(lVar7 + 0x18)) {
        *(uint *)(lVar4 + 0x18) = uVar1 + 1;
        *(undefined4 *)(lVar7 + (long)(int)uVar1 * 4 + 0x20) = uStack0000000000000000;
      }
      else {
        FUN_05cc8dcc(lVar4,_uStack0000000000000000 & 0xffffffff,
                     *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
      }
      lVar4 = *(long *)(unaff_x20 + 0x108);
      _uStack0000000000000070 = _uStack0000000000000070 & 0xffffffff00000000;
      FUN_08a07820(&stack0x00000070,*(undefined8 *)puVar3,0);
      if (lVar4 != 0) {
        lVar7 = *(long *)(lVar4 + 0x10);
        lVar8 = *(long *)puVar2;
        *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
        puVar3 = PTR_DAT_0932e258;
        if (lVar7 != 0) {
          uVar1 = *(uint *)(lVar4 + 0x18);
          if (uVar1 < *(uint *)(lVar7 + 0x18)) {
            *(uint *)(lVar4 + 0x18) = uVar1 + 1;
            *(undefined4 *)(lVar7 + (long)(int)uVar1 * 4 + 0x20) = uStack0000000000000070;
          }
          else {
            FUN_05cc8dcc(lVar4,_uStack0000000000000070 & 0xffffffff,
                         *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
          }
          lVar4 = *(long *)(unaff_x20 + 0x108);
          uStack000000000000006c = 0;
          FUN_08a07820((long)((long)register0x00000008 + 0x68) + 4,*(undefined8 *)puVar3,0);
          if (lVar4 != 0) {
            lVar7 = *(long *)(lVar4 + 0x10);
            lVar8 = *(long *)puVar2;
            *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
            if (lVar7 != 0) {
              uVar1 = *(uint *)(lVar4 + 0x18);
              if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                *(undefined4 *)(lVar7 + (long)(int)uVar1 * 4 + 0x20) = uStack000000000000006c;
              }
              else {
                FUN_05cc8dcc(lVar4,uStack000000000000006c,
                             *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
              }
              goto LAB_085464b4;
            }
          }
        }
      }
    }
  }
LAB_08546514:
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


