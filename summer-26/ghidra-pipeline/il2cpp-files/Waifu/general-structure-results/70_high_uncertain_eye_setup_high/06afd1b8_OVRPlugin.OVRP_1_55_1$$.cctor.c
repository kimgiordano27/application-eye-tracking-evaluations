/*
FUNCTION_NAME: OVRPlugin.OVRP_1_55_1$$.cctor
ENTRY_POINT: 06afd1b8
PROGRAM: Waifu-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_55_1___cctor(void)

{
  uint uVar1;
  undefined8 uVar2;
  void *pvVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long unaff_x20;
  long unaff_x21;
  undefined1 unaff_w22;
  int iVar8;
  uint uVar9;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  
  FUN_0335b6c8();
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083e9748,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083e9750,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083e9758,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083c7848,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083ee508,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083ee510,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083ce7b0,1);
  DataMemoryBarrier(2,3);
  *(undefined1 *)(unaff_x20 + 0x619) = unaff_w22;
  in_stack_00000050 = 0;
  in_stack_00000038 = 0;
  in_stack_00000030 = 0;
  in_stack_00000048 = 0;
  in_stack_00000040 = 0;
  if (*(int *)(DAT_083c9548 + 0xe0) == 0) {
    FUN_033b9870();
  }
  pvVar3 = (void *)FUN_06afc048();
  if (unaff_x21 == 0) {
    iVar8 = 0;
  }
  else {
    iVar8 = *(int *)(unaff_x21 + 0x20) - *(int *)(unaff_x21 + 0x28);
  }
  lVar4 = FUN_03398188(DAT_083c7848,iVar8 << 1);
  if (0 < iVar8) {
    if (unaff_x21 == 0) goto LAB_06afd450;
    FUN_0609cfe4();
    uVar9 = 0;
    in_stack_00000038 = 0;
    in_stack_00000030 = 0;
    in_stack_00000048 = 0;
    in_stack_00000040 = 0;
    in_stack_00000050 = 0;
    while (uVar5 = FUN_0609d050(&stack0x00000030,DAT_083e9750), uVar2 = in_stack_00000048,
          uVar6 = in_stack_00000040, (uVar5 & 1) != 0) {
      if (*(int *)(DAT_083c9548 + 0xe0) == 0) {
        FUN_033b9870();
      }
      uVar6 = FUN_06afc048(uVar6);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_033d1d3c();
      }
      if (*(uint *)(lVar4 + 0x18) <= uVar9) {
                    /* WARNING: Subroutine does not return */
        FUN_033d1d44();
      }
      *(undefined8 *)(lVar4 + (long)(int)uVar9 * 8 + 0x20) = uVar6;
      uVar6 = FUN_06afc048(uVar2);
      uVar1 = uVar9 + 1;
      if (*(uint *)(lVar4 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_033d1d44();
      }
      uVar9 = uVar9 + 2;
      *(undefined8 *)(lVar4 + (long)(int)uVar1 * 8 + 0x20) = uVar6;
    }
  }
  if (*(int *)(DAT_083c9548 + 0xe0) == 0) {
    FUN_033b9870();
  }
  FUN_06afd470(pvVar3,lVar4,(long)iVar8);
  if (*(int *)(DAT_083ce7b0 + 0xe0) == 0) {
    FUN_033b9870();
  }
  free(pvVar3);
  if (lVar4 != 0) {
    if (0 < (int)*(ulong *)(lVar4 + 0x18)) {
      uVar5 = 0;
      uVar7 = *(ulong *)(lVar4 + 0x18) & 0xffffffff;
      do {
        if (uVar7 <= uVar5) {
                    /* WARNING: Subroutine does not return */
          FUN_033d1d44();
        }
        pvVar3 = *(void **)(lVar4 + 0x20 + uVar5 * 8);
        if (*(int *)(DAT_083ce7b0 + 0xe0) == 0) {
          FUN_033b9870();
        }
        free(pvVar3);
        uVar7 = (ulong)*(uint *)(lVar4 + 0x18);
        uVar5 = uVar5 + 1;
      } while ((long)uVar5 < (long)(int)*(uint *)(lVar4 + 0x18));
    }
    return;
  }
LAB_06afd450:
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


