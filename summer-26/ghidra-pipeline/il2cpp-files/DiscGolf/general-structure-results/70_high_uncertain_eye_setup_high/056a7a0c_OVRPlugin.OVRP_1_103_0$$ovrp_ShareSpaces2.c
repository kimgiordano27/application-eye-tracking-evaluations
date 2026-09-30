/*
FUNCTION_NAME: OVRPlugin.OVRP_1_103_0$$ovrp_ShareSpaces2
ENTRY_POINT: 056a7a0c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_103_0__ovrp_ShareSpaces2(void)

{
  long lVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  char in_NG;
  char in_OV;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  int iVar9;
  long unaff_x19;
  void *unaff_x20;
  ulong unaff_x21;
  long *unaff_x22;
  long *plVar10;
  long *unaff_x24;
  uint uVar11;
  undefined8 *unaff_x25;
  uint unaff_w26;
  long unaff_x27;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_000000c0;
  undefined4 in_stack_000000c8;
  
  while (in_NG != in_OV) {
    lVar6 = *unaff_x22;
    uVar7 = FUN_055339f0(*(undefined8 *)(*(long *)((long)unaff_x20 + 8) + unaff_x27 * 8),0);
    if (*(int *)(*unaff_x24 + 0xe4) == 0) {
      thunk_FUN_02df485c(*unaff_x24);
    }
    uVar7 = thunk_FUN_02da261c(uVar7,0);
    if (lVar6 == 0) goto LAB_056a7ba0;
    if (*(uint *)(lVar6 + 0x18) <= unaff_w26) goto LAB_056a7b9c;
    *(undefined8 *)(lVar6 + unaff_x27 * 8 + 0x20) = uVar7;
    LeanTween__value();
    unaff_w26 = unaff_w26 + 1;
    unaff_x27 = (long)(int)unaff_w26;
    in_OV = SBORROW8(unaff_x27,unaff_x21);
    in_NG = (long)(unaff_x27 - unaff_x21) < 0;
  }
  lVar6 = FUN_02d966a4(*(undefined8 *)PTR_DAT_06a146e0,unaff_x21 & 0xffffffff);
  plVar10 = (long *)(unaff_x19 + 0x18);
  *plVar10 = lVar6;
  LeanTween__value(plVar10,lVar6);
  if ((int)unaff_x21 != 0) {
    lVar6 = *plVar10;
    if (lVar6 == 0) {
LAB_056a7ba0:
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    iVar3 = *(int *)(lVar6 + 0x18);
    lVar8 = 0;
    iVar9 = 0;
    do {
      if (iVar3 == iVar9) goto LAB_056a7b9c;
      iVar9 = iVar9 + 1;
      lVar1 = lVar8 * 4;
      lVar2 = lVar8 * 4;
      lVar8 = (long)iVar9;
      *(undefined4 *)(lVar6 + lVar1 + 0x20) =
           *(undefined4 *)(*(long *)((long)unaff_x20 + 0x10) + lVar2);
    } while (lVar8 < (long)unaff_x21);
  }
  uVar4 = *(uint *)((long)unaff_x20 + 0x18);
  lVar6 = FUN_02d966a4(*unaff_x25,(ulong)uVar4);
  plVar10 = (long *)(unaff_x19 + 0x20);
  *plVar10 = lVar6;
  LeanTween__value(plVar10,lVar6);
  if (uVar4 != 0) {
    lVar6 = 0;
    uVar11 = 0;
    do {
      lVar8 = *plVar10;
      uVar7 = FUN_055339f0(*(undefined8 *)(*(long *)((long)unaff_x20 + 0x20) + lVar6 * 8),0);
      if (*(int *)(*unaff_x24 + 0xe4) == 0) {
        thunk_FUN_02df485c(*unaff_x24);
      }
      uVar7 = thunk_FUN_02da261c(uVar7,0);
      if (lVar8 == 0) goto LAB_056a7ba0;
      if (*(uint *)(lVar8 + 0x18) <= uVar11) {
LAB_056a7b9c:
                    /* WARNING: Subroutine does not return */
        FUN_02d96868();
      }
      *(undefined8 *)(lVar8 + lVar6 * 8 + 0x20) = uVar7;
      LeanTween__value();
      uVar11 = uVar11 + 1;
      lVar6 = (long)(int)uVar11;
    } while (lVar6 < (long)(ulong)uVar4);
  }
  puVar5 = Unity_Services_Core_Scheduler_Internal_MinimumBinaryHeap<ScheduledInvocation>_TypeInfo;
  memcpy(&stack0x00000098,unaff_x20,0x68);
  *(undefined8 *)(unaff_x19 + 0x28) = in_stack_000000c0;
  *(undefined4 *)(unaff_x19 + 0x30) = in_stack_000000c8;
  memcpy(&stack0x00000030,unaff_x20,0x68);
  uVar7 = thunk_FUN_02dd3144(*(undefined8 *)puVar5);
  FUN_056a6420();
  *(undefined8 *)(unaff_x19 + 0x38) = uVar7;
  LeanTween__value((undefined8 *)(unaff_x19 + 0x38),uVar7);
  return;
}


