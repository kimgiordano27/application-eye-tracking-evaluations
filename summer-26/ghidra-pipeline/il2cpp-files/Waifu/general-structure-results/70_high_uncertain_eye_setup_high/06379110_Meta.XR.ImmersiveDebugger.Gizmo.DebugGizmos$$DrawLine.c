/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.DebugGizmos$$DrawLine
ENTRY_POINT: 06379110
PROGRAM: Waifu-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_15;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined4
Meta_XR_ImmersiveDebugger_Gizmo_DebugGizmos__DrawLine
          (long param_1,undefined4 param_2,uint param_3,long param_4,long param_5)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined4 uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined4 uStack0000000000000008;
  uint uStack000000000000000c;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  if ((DAT_086de9c3 & 1) == 0) {
    FUN_0335b6c8(&DAT_083dfcb0,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083eb3d8,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083eafe0,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083eb400,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083eaff0,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083eb3f0,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083eb418,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083ebae0,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083ebce0,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_08412db8,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_08412dc0,1);
    DataMemoryBarrier(2,3);
    DAT_086de9c3 = 1;
  }
  if (param_4 != 0) {
    if (param_5 == 0) {
      return 0xffffffff;
    }
    if (*(long *)(param_4 + 0x18) == 0) {
      return 0xffffffff;
    }
    if (*(long *)(param_5 + 0x18) != 0) {
      lVar5 = FUN_05b961dc(DAT_083dfcb0);
      if (lVar5 != 0) {
        lVar5 = FUN_0631798c(lVar5,0);
        auVar3._8_8_ = in_stack_00000028;
        auVar3._0_8_ = in_stack_00000020;
        auVar2._8_8_ = in_stack_00000028;
        auVar2._0_8_ = in_stack_00000020;
        auVar9._8_8_ = in_stack_00000018;
        auVar9._0_8_ = in_stack_00000010;
        auVar8._8_8_ = in_stack_00000018;
        auVar8._0_8_ = in_stack_00000010;
        if (((lVar5 != 0) &&
            (_in_stack_00000010 = auVar8, _in_stack_00000020 = auVar2, *(long *)(lVar5 + 0x18) != 0)
            ) && (_in_stack_00000010 = auVar9, _in_stack_00000020 = auVar3,
                 *(long *)(param_1 + 0x18) != 0)) {
          auVar8 = FUN_042b19d8(*(long *)(param_1 + 0x18),*(undefined4 *)(param_4 + 0x18),
                                DAT_083eb3d8);
          if (*(long *)(param_1 + 0x20) != 0) {
            auVar9 = FUN_042b2858(*(long *)(param_1 + 0x20),*(undefined4 *)(param_5 + 0x18),
                                  DAT_083eb400);
            lVar5 = *(long *)(param_1 + 0x18);
            if (lVar5 != 0) {
              FUN_0405dcf4(*(undefined8 *)(lVar5 + 0x10),*(undefined8 *)(lVar5 + 0x18),
                           auVar8._0_8_ >> 0x20,param_4,DAT_08412db8);
              lVar5 = *(long *)(param_1 + 0x20);
              if (lVar5 != 0) {
                FUN_0405dd5c(*(undefined8 *)(lVar5 + 0x10),*(undefined8 *)(lVar5 + 0x18),
                             auVar9._0_8_ >> 0x20,param_5,DAT_08412dc0);
                if (*(long *)(param_1 + 0x28) != 0) {
                  uStack000000000000000c = param_3 & 1;
                  uStack0000000000000008 = param_2;
                  _in_stack_00000010 = auVar8;
                  _in_stack_00000020 = auVar9;
                  uVar4 = FUN_0438d348(*(long *)(param_1 + 0x28),&stack0x00000008,DAT_083ebae0);
                  if (*(long *)(param_1 + 0x30) != 0) {
                    auVar8 = FUN_0429e128(*(long *)(param_1 + 0x30),*(undefined4 *)(param_5 + 0x18),
                                          DAT_083eafe0);
                    uVar6 = auVar8._8_8_;
                    if (*(long *)(param_1 + 0x30) != 0) {
                      if (auVar8._8_4_ < 1) {
                        return uVar4;
                      }
                      lVar5 = *(long *)(*(long *)(param_1 + 0x30) + 0x10);
                      uVar7 = auVar8._0_8_ >> 0x20;
                      do {
                        *(undefined4 *)(lVar5 + (long)(int)uVar7 * 4) = param_2;
                        uVar1 = (int)uVar6 - 1;
                        uVar6 = (ulong)uVar1;
                        uVar7 = (ulong)((int)uVar7 + 1);
                      } while (uVar1 != 0);
                      return uVar4;
                    }
                  }
                }
              }
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_033d1d3c();
    }
  }
  return 0xffffffff;
}


