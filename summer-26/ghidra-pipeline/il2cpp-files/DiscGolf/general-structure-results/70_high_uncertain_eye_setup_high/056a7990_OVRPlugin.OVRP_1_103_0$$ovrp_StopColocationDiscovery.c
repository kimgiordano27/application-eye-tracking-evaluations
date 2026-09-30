/*
FUNCTION_NAME: OVRPlugin.OVRP_1_103_0$$ovrp_StopColocationDiscovery
ENTRY_POINT: 056a7990
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


void OVRPlugin_OVRP_1_103_0__ovrp_StopColocationDiscovery(long param_1)

{
  long lVar1;
  long lVar2;
  int iVar3;
  undefined *puVar4;
  undefined8 uVar5;
  int iVar6;
  long unaff_x19;
  void *unaff_x20;
  ulong unaff_x21;
  long unaff_x22;
  long *plVar7;
  long *unaff_x24;
  uint uVar8;
  undefined8 *unaff_x25;
  uint uVar9;
  long lVar10;
  long lVar11;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_000000c0;
  undefined4 in_stack_000000c8;
  
  plVar7 = (long *)(unaff_x22 + 0x10);
  *plVar7 = param_1;
  LeanTween__value(plVar7);
  if ((int)unaff_x21 != 0) {
    lVar10 = 0;
    uVar9 = 0;
    do {
      lVar11 = *plVar7;
      uVar5 = FUN_055339f0(*(undefined8 *)(*(long *)((long)unaff_x20 + 8) + lVar10 * 8),0);
      if (*(int *)(*unaff_x24 + 0xe4) == 0) {
        thunk_FUN_02df485c(*unaff_x24);
      }
      uVar5 = thunk_FUN_02da261c(uVar5,0);
      if (lVar11 == 0) goto LAB_056a7ba0;
      if (*(uint *)(lVar11 + 0x18) <= uVar9) goto LAB_056a7b9c;
      *(undefined8 *)(lVar11 + lVar10 * 8 + 0x20) = uVar5;
      LeanTween__value();
      uVar9 = uVar9 + 1;
      lVar10 = (long)(int)uVar9;
    } while (lVar10 < (long)unaff_x21);
  }
  lVar10 = FUN_02d966a4(*(undefined8 *)PTR_DAT_06a146e0,unaff_x21 & 0xffffffff);
  plVar7 = (long *)(unaff_x19 + 0x18);
  *plVar7 = lVar10;
  LeanTween__value(plVar7,lVar10);
  if ((int)unaff_x21 != 0) {
    lVar10 = *plVar7;
    if (lVar10 == 0) {
LAB_056a7ba0:
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    iVar3 = *(int *)(lVar10 + 0x18);
    lVar11 = 0;
    iVar6 = 0;
    do {
      if (iVar3 == iVar6) goto LAB_056a7b9c;
      iVar6 = iVar6 + 1;
      lVar1 = lVar11 * 4;
      lVar2 = lVar11 * 4;
      lVar11 = (long)iVar6;
      *(undefined4 *)(lVar10 + lVar1 + 0x20) =
           *(undefined4 *)(*(long *)((long)unaff_x20 + 0x10) + lVar2);
    } while (lVar11 < (long)unaff_x21);
  }
  uVar9 = *(uint *)((long)unaff_x20 + 0x18);
  lVar10 = FUN_02d966a4(*unaff_x25,(ulong)uVar9);
  plVar7 = (long *)(unaff_x19 + 0x20);
  *plVar7 = lVar10;
  LeanTween__value(plVar7,lVar10);
  if (uVar9 != 0) {
    lVar10 = 0;
    uVar8 = 0;
    do {
      lVar11 = *plVar7;
      uVar5 = FUN_055339f0(*(undefined8 *)(*(long *)((long)unaff_x20 + 0x20) + lVar10 * 8),0);
      if (*(int *)(*unaff_x24 + 0xe4) == 0) {
        thunk_FUN_02df485c(*unaff_x24);
      }
      uVar5 = thunk_FUN_02da261c(uVar5,0);
      if (lVar11 == 0) goto LAB_056a7ba0;
      if (*(uint *)(lVar11 + 0x18) <= uVar8) {
LAB_056a7b9c:
                    /* WARNING: Subroutine does not return */
        FUN_02d96868();
      }
      *(undefined8 *)(lVar11 + lVar10 * 8 + 0x20) = uVar5;
      LeanTween__value();
      uVar8 = uVar8 + 1;
      lVar10 = (long)(int)uVar8;
    } while (lVar10 < (long)(ulong)uVar9);
  }
  puVar4 = Unity_Services_Core_Scheduler_Internal_MinimumBinaryHeap<ScheduledInvocation>_TypeInfo;
  memcpy(&stack0x00000098,unaff_x20,0x68);
  *(undefined8 *)(unaff_x19 + 0x28) = in_stack_000000c0;
  *(undefined4 *)(unaff_x19 + 0x30) = in_stack_000000c8;
  memcpy(&stack0x00000030,unaff_x20,0x68);
  uVar5 = thunk_FUN_02dd3144(*(undefined8 *)puVar4);
  FUN_056a6420();
  *(undefined8 *)(unaff_x19 + 0x38) = uVar5;
  LeanTween__value((undefined8 *)(unaff_x19 + 0x38),uVar5);
  return;
}


