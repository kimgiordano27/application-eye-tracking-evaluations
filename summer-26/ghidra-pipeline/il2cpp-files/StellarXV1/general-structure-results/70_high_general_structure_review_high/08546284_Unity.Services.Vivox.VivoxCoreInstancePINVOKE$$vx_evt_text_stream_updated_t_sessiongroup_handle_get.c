/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_evt_text_stream_updated_t_sessiongroup_handle_get
ENTRY_POINT: 08546284
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


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_text_stream_updated_t_sessiongroup_handle_get
               (undefined1 param_1 [16])

{
  uint uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long lVar6;
  long *unaff_x23;
  ulong uVar7;
  undefined4 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  ulong uStack0000000000000010;
  undefined8 uStack0000000000000018;
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
  undefined4 in_stack_00000070;
  
  uStack0000000000000008 = param_1._8_8_;
  _uStack0000000000000000 = param_1._0_8_;
  uStack0000000000000010 = _uStack0000000000000000;
  uStack0000000000000018 = uStack0000000000000008;
  UnityEngine_UIElements_InlineStyleAccessPropertyBag_PaddingRightProperty___ctor();
  *(undefined8 *)(unaff_x20 + 0xc4) = uStack0000000000000008;
  *(ulong *)(unaff_x20 + 0xbc) = _uStack0000000000000000;
  *(undefined8 *)(unaff_x20 + 0xd4) = uStack0000000000000018;
  *(ulong *)(unaff_x20 + 0xcc) = uStack0000000000000010;
  if ((unaff_x21 != 0) && (uVar3 = *(ulong *)(unaff_x21 + 0x18), uVar3 != 0)) {
    if (0 < (int)uVar3) {
      uVar7 = 0;
      do {
        if ((uVar3 & 0xffffffff) <= uVar7) {
                    /* WARNING: Subroutine does not return */
          FUN_04077838();
        }
        lVar6 = *(long *)(unaff_x20 + 0x108);
        _uStack0000000000000000 = _uStack0000000000000000 & 0xffffffff00000000;
        FUN_08a07820();
        if (lVar6 == 0) goto LAB_08546514;
        lVar4 = *(long *)(lVar6 + 0x10);
        lVar5 = *unaff_x23;
        *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
        if (lVar4 == 0) goto LAB_08546514;
        uVar1 = *(uint *)(lVar6 + 0x18);
        if (uVar1 < *(uint *)(lVar4 + 0x18)) {
          *(uint *)(lVar6 + 0x18) = uVar1 + 1;
          *(undefined4 *)(lVar4 + (long)(int)uVar1 * 4 + 0x20) = uStack0000000000000000;
        }
        else {
          FUN_05cc8dcc(lVar6,_uStack0000000000000000 & 0xffffffff,
                       *(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
        }
        uVar3 = (ulong)*(uint *)(unaff_x21 + 0x18);
        uVar7 = uVar7 + 1;
      } while ((long)uVar7 < (long)(int)*(uint *)(unaff_x21 + 0x18));
    }
LAB_085464b4:
    uStack0000000000000064 = 0;
    in_stack_00000060 = 0;
    uStack0000000000000008 = 0;
    _uStack0000000000000000 = 0;
    uStack0000000000000018 = 0;
    uStack0000000000000010 = 0;
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
  lVar6 = *(long *)(unaff_x20 + 0x108);
  _uStack0000000000000000 = _uStack0000000000000000 & 0xffffffff00000000;
  FUN_08a07820();
  if (lVar6 != 0) {
    lVar4 = *(long *)(lVar6 + 0x10);
    lVar5 = *unaff_x23;
    *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
    puVar2 = PTR_DAT_0932e248;
    if (lVar4 != 0) {
      uVar1 = *(uint *)(lVar6 + 0x18);
      if (uVar1 < *(uint *)(lVar4 + 0x18)) {
        *(uint *)(lVar6 + 0x18) = uVar1 + 1;
        *(undefined4 *)(lVar4 + (long)(int)uVar1 * 4 + 0x20) = uStack0000000000000000;
      }
      else {
        FUN_05cc8dcc(lVar6,_uStack0000000000000000 & 0xffffffff,
                     *(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
      }
      lVar6 = *(long *)(unaff_x20 + 0x108);
      in_stack_00000070 = 0;
      FUN_08a07820(&stack0x00000070,*(undefined8 *)puVar2,0);
      if (lVar6 != 0) {
        lVar4 = *(long *)(lVar6 + 0x10);
        lVar5 = *unaff_x23;
        *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
        puVar2 = PTR_DAT_0932e258;
        if (lVar4 != 0) {
          uVar1 = *(uint *)(lVar6 + 0x18);
          if (uVar1 < *(uint *)(lVar4 + 0x18)) {
            *(uint *)(lVar6 + 0x18) = uVar1 + 1;
            *(undefined4 *)(lVar4 + (long)(int)uVar1 * 4 + 0x20) = in_stack_00000070;
          }
          else {
            FUN_05cc8dcc(lVar6,in_stack_00000070,
                         *(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
          }
          lVar6 = *(long *)(unaff_x20 + 0x108);
          uStack000000000000006c = 0;
          FUN_08a07820((long)((long)register0x00000008 + 0x68) + 4,*(undefined8 *)puVar2,0);
          if (lVar6 != 0) {
            lVar4 = *(long *)(lVar6 + 0x10);
            lVar5 = *unaff_x23;
            *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
            if (lVar4 != 0) {
              uVar1 = *(uint *)(lVar6 + 0x18);
              if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                *(undefined4 *)(lVar4 + (long)(int)uVar1 * 4 + 0x20) = uStack000000000000006c;
              }
              else {
                FUN_05cc8dcc(lVar6,uStack000000000000006c,
                             *(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
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


