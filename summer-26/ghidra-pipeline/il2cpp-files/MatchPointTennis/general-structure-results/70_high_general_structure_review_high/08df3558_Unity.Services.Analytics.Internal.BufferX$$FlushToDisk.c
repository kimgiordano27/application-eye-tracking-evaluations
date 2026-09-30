/*
FUNCTION_NAME: Unity.Services.Analytics.Internal.BufferX$$FlushToDisk
ENTRY_POINT: 08df3558
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_8;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 Unity_Services_Analytics_Internal_BufferX__FlushToDisk(void)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar5;
  long *plVar6;
  ulong in_stack_00000008;
  
  FUN_04447ba8(PTR_DAT_09fb2948);
  *(undefined1 *)(unaff_x20 + 0x42e) = 1;
  uVar2 = 0;
  if (*(long *)(unaff_x19 + 0x38) != 0) {
    in_stack_00000008 = 0;
    FUN_0613c680(&stack0x00000008,*(undefined4 *)(*(long *)(unaff_x19 + 0x38) + 0x18),
                 *(undefined8 *)PTR_DAT_09f27510);
    uVar2 = in_stack_00000008;
  }
  if (((uVar2 & 0xff) != 0) &&
     (uVar1 = *(uint *)(unaff_x19 + 0x40), (int)uVar1 < (int)(uVar2 >> 0x20))) {
    lVar3 = *(long *)(unaff_x19 + 0x38);
    if (lVar3 == 0) goto LAB_08df3720;
    if (*(uint *)(lVar3 + 0x18) <= uVar1) goto LAB_08df3724;
    uVar5 = *(undefined8 *)(lVar3 + (long)(int)uVar1 * 8 + 0x20);
    if (*(int *)(*(long *)PTR_DAT_09f1e538 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    uVar2 = FUN_0952c404(uVar5,0,0);
    if ((uVar2 & 1) != 0) {
      if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      FUN_094c6c50(*(undefined8 *)PTR_DAT_09fb2948);
      return 0;
    }
  }
  lVar3 = FUN_08df3734();
  if (lVar3 == 0) goto LAB_08df3720;
  lVar4 = *(long *)(unaff_x19 + 0x18);
  uVar1 = *(uint *)(unaff_x19 + 0x40);
  if (*(char *)(lVar3 + 0x28) == '\0') {
    if (lVar4 == 0) goto LAB_08df3720;
    if (*(uint *)(lVar4 + 0x18) <= uVar1) goto LAB_08df3724;
    if (*(long *)(lVar4 + (long)(int)uVar1 * 8 + 0x20) == 0) goto LAB_08df3650;
  }
  else {
    if (lVar4 == 0) goto LAB_08df3720;
LAB_08df3650:
    if (*(uint *)(lVar4 + 0x18) <= uVar1) goto LAB_08df3724;
    FUN_08df34b0(lVar3,lVar4 + (long)(int)uVar1 * 8 + 0x20);
    plVar6 = *(long **)(unaff_x19 + 0x18);
    uVar1 = *(uint *)(unaff_x19 + 0x40);
    lVar3 = FUN_08df3734();
    if ((lVar3 == 0) || (lVar3 = FUN_08e29064(lVar3,0), plVar6 == (long *)0x0)) goto LAB_08df3720;
    if ((lVar3 != 0) &&
       (lVar4 = thunk_FUN_04485110(lVar3,*(undefined8 *)(*plVar6 + 0x40)), lVar4 == 0)) {
      uVar5 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
      FUN_04447d10(uVar5,0);
    }
    if (*(uint *)(plVar6 + 3) <= uVar1) goto LAB_08df3724;
    plVar6[(long)(int)uVar1 + 4] = lVar3;
    thunk_FUN_044bb4b4(plVar6 + (long)(int)uVar1 + 4,lVar3);
    if (*(char *)(unaff_x19 + 0x114) != '\0') {
      FUN_08dcc994(0);
    }
  }
  lVar3 = *(long *)(unaff_x19 + 0x18);
  if (lVar3 == 0) {
LAB_08df3720:
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  if (*(uint *)(unaff_x19 + 0x40) < *(uint *)(lVar3 + 0x18)) {
    return *(undefined8 *)(lVar3 + (long)(int)*(uint *)(unaff_x19 + 0x40) * 8 + 0x20);
  }
LAB_08df3724:
                    /* WARNING: Subroutine does not return */
  FUN_04447e4c();
}


