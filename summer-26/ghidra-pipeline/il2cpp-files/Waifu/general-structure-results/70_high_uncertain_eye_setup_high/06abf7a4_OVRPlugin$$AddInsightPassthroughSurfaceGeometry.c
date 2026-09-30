/*
FUNCTION_NAME: OVRPlugin$$AddInsightPassthroughSurfaceGeometry
ENTRY_POINT: 06abf7a4
PROGRAM: Waifu-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__AddInsightPassthroughSurfaceGeometry(void)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  uint unaff_w19;
  undefined8 *unaff_x20;
  long unaff_x21;
  long unaff_x23;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  float in_stack_00000000;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  
  FUN_0335b6c8();
  DataMemoryBarrier(2,3);
  *(undefined1 *)(unaff_x23 + 0x204) = 1;
  in_stack_00000010 = 0;
  in_stack_00000018 = 0;
  in_stack_00000028 = 0;
  in_stack_00000020 = 0;
  uVar1 = 1 << (ulong)(unaff_w19 & 0x1f);
  if ((*(uint *)(unaff_x21 + 0x40) & uVar1) != 0) {
    if (*(int *)(DAT_083cffc8 + 0xe0) == 0) {
      FUN_033b9870();
    }
    FUN_07a1747c(&stack0x00000010,0);
    FUN_06ac063c();
    lVar2 = *(long *)(unaff_x21 + 0x10);
    if ((lVar2 == 0) || (lVar3 = *(long *)(unaff_x21 + 0x20), lVar3 == 0)) goto LAB_06abf8fc;
    if ((*(int *)(lVar2 + 0x18) == 0) || (*(uint *)(lVar3 + 0x18) <= unaff_w19)) goto LAB_06abf900;
    FUN_06a70228(lVar2 + 0x20,&stack0x00000010,lVar3 + (long)(int)unaff_w19 * 0x1c + 0x20,0);
    lVar2 = *(long *)(unaff_x21 + 0x20);
    if (lVar2 == 0) goto LAB_06abf8fc;
    if (*(uint *)(lVar2 + 0x18) <= unaff_w19) goto LAB_06abf900;
    lVar2 = lVar2 + (long)(int)unaff_w19 * 0x1c;
    *(ulong *)(lVar2 + 0x20) =
         CONCAT44((float)((ulong)*(undefined8 *)(lVar2 + 0x20) >> 0x20) * in_stack_00000000,
                  (float)*(undefined8 *)(lVar2 + 0x20) * in_stack_00000000);
    *(float *)(lVar2 + 0x28) = *(float *)(lVar2 + 0x28) * in_stack_00000000;
    if (*(long *)(unaff_x21 + 0x20) == 0) goto LAB_06abf8fc;
    if (*(uint *)(*(long *)(unaff_x21 + 0x20) + 0x18) <= unaff_w19) goto LAB_06abf900;
    FUN_06a70228();
    *(uint *)(unaff_x21 + 0x40) = *(uint *)(unaff_x21 + 0x40) & (uVar1 ^ 0xffffffff);
  }
  lVar2 = *(long *)(unaff_x21 + 0x20);
  if (lVar2 != 0) {
    if (unaff_w19 < *(uint *)(lVar2 + 0x18)) {
      lVar2 = lVar2 + (long)(int)unaff_w19 * 0x1c;
      uVar4 = *(undefined8 *)(lVar2 + 0x2c);
      uVar6 = *(undefined8 *)(lVar2 + 0x28);
      uVar5 = *(undefined8 *)(lVar2 + 0x20);
      *(undefined8 *)((long)unaff_x20 + 0x14) = *(undefined8 *)(lVar2 + 0x34);
      *(undefined8 *)((long)unaff_x20 + 0xc) = uVar4;
      unaff_x20[1] = uVar6;
      *unaff_x20 = uVar5;
      return;
    }
LAB_06abf900:
                    /* WARNING: Subroutine does not return */
    FUN_033d1d44();
  }
LAB_06abf8fc:
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


