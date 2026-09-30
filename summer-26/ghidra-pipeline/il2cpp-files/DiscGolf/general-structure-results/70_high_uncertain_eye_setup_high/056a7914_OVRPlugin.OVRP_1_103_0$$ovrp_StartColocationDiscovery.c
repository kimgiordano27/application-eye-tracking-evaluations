/*
FUNCTION_NAME: OVRPlugin.OVRP_1_103_0$$ovrp_StartColocationDiscovery
ENTRY_POINT: 056a7914
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_103_0__ovrp_StartColocationDiscovery(ulong param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  int iVar8;
  uint *unaff_x20;
  undefined8 unaff_x21;
  ulong uVar9;
  long unaff_x22;
  long *plVar10;
  undefined8 *unaff_x25;
  uint uVar11;
  long lVar12;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_000000c0;
  undefined4 in_stack_000000c8;
  
  if ((param_1 & 1) == 0) {
    FUN_02d965b8(
                Unity_Services_Core_Scheduler_Internal_MinimumBinaryHeap<ScheduledInvocation>_TypeInfo
                );
    FUN_02d965b8(PTR_DAT_06a0d5f0);
    FUN_02d965b8(PTR_DAT_069fb9d8);
    FUN_02d965b8(PTR_DAT_06a146e0);
    *(undefined1 *)(unaff_x22 + 0xa53) = 1;
  }
  puVar4 = PTR_DAT_06a0d5f0;
  FUN_0552aca4(param_2,0);
  *(undefined8 *)(param_2 + 0x40) = unaff_x21;
  LeanTween__value();
  uVar2 = *unaff_x20;
  uVar9 = (ulong)uVar2;
  lVar5 = FUN_02d966a4(*unaff_x25,uVar9);
  plVar10 = (long *)(param_2 + 0x10);
  *plVar10 = lVar5;
  LeanTween__value(plVar10,lVar5);
  if (uVar2 != 0) {
    lVar5 = 0;
    uVar11 = 0;
    do {
      lVar12 = *plVar10;
      uVar6 = FUN_055339f0(*(undefined8 *)(*(long *)(unaff_x20 + 2) + lVar5 * 8),0);
      lVar7 = *(long *)puVar4;
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_02df485c(lVar7);
      }
      uVar6 = thunk_FUN_02da261c(uVar6,0);
      if (lVar12 == 0) goto LAB_056a7ba0;
      if (*(uint *)(lVar12 + 0x18) <= uVar11) goto LAB_056a7b9c;
      *(undefined8 *)(lVar12 + lVar5 * 8 + 0x20) = uVar6;
      LeanTween__value();
      uVar11 = uVar11 + 1;
      lVar5 = (long)(int)uVar11;
    } while (lVar5 < (long)uVar9);
  }
  lVar5 = FUN_02d966a4(*(undefined8 *)PTR_DAT_06a146e0,uVar2);
  plVar10 = (long *)(param_2 + 0x18);
  *plVar10 = lVar5;
  LeanTween__value(plVar10,lVar5);
  if (uVar2 != 0) {
    lVar5 = *plVar10;
    if (lVar5 == 0) {
LAB_056a7ba0:
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    iVar3 = *(int *)(lVar5 + 0x18);
    lVar7 = 0;
    iVar8 = 0;
    do {
      if (iVar3 == iVar8) goto LAB_056a7b9c;
      iVar8 = iVar8 + 1;
      lVar12 = lVar7 * 4;
      lVar1 = lVar7 * 4;
      lVar7 = (long)iVar8;
      *(undefined4 *)(lVar5 + lVar12 + 0x20) = *(undefined4 *)(*(long *)(unaff_x20 + 4) + lVar1);
    } while (lVar7 < (long)uVar9);
  }
  uVar2 = unaff_x20[6];
  lVar5 = FUN_02d966a4(*unaff_x25,(ulong)uVar2);
  plVar10 = (long *)(param_2 + 0x20);
  *plVar10 = lVar5;
  LeanTween__value(plVar10,lVar5);
  if (uVar2 != 0) {
    lVar5 = 0;
    uVar11 = 0;
    do {
      lVar12 = *plVar10;
      uVar6 = FUN_055339f0(*(undefined8 *)(*(long *)(unaff_x20 + 8) + lVar5 * 8),0);
      lVar7 = *(long *)puVar4;
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_02df485c(lVar7);
      }
      uVar6 = thunk_FUN_02da261c(uVar6,0);
      if (lVar12 == 0) goto LAB_056a7ba0;
      if (*(uint *)(lVar12 + 0x18) <= uVar11) {
LAB_056a7b9c:
                    /* WARNING: Subroutine does not return */
        FUN_02d96868();
      }
      *(undefined8 *)(lVar12 + lVar5 * 8 + 0x20) = uVar6;
      LeanTween__value();
      uVar11 = uVar11 + 1;
      lVar5 = (long)(int)uVar11;
    } while (lVar5 < (long)(ulong)uVar2);
  }
  puVar4 = Unity_Services_Core_Scheduler_Internal_MinimumBinaryHeap<ScheduledInvocation>_TypeInfo;
  memcpy(&stack0x00000098,unaff_x20,0x68);
  *(undefined8 *)(param_2 + 0x28) = in_stack_000000c0;
  *(undefined4 *)(param_2 + 0x30) = in_stack_000000c8;
  memcpy(&stack0x00000030,unaff_x20,0x68);
  uVar6 = thunk_FUN_02dd3144(*(undefined8 *)puVar4);
  FUN_056a6420();
  *(undefined8 *)(param_2 + 0x38) = uVar6;
  LeanTween__value((undefined8 *)(param_2 + 0x38),uVar6);
  return;
}


