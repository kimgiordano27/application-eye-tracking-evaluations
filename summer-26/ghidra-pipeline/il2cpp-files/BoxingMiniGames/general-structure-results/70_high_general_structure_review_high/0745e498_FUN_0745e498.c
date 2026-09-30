/*
FUNCTION_NAME: FUN_0745e498
ENTRY_POINT: 0745e498
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_5;ui_or_gameplay_sink_hits_6;telemetry_or_network_hits_5
*/


void FUN_0745e498(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  undefined8 local_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long local_68;
  undefined8 local_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  long local_48;
  
  if ((DAT_07ef3cc2 & 1) == 0) {
    FUN_03642964(
                Method_System_Collections_Generic_List<UnitySynchronizationContext_WorkRequest>_RemoveAt__
                );
    FUN_03642964(
                Method_System_Collections_Generic_List<UnitySynchronizationContext_WorkRequest>_get_Count__
                );
    FUN_03642964(
                Method_System_Collections_Generic_List<UnitySynchronizationContext_WorkRequest>_get_Item__
                );
    FUN_03642964(
                Method_System_Collections_Generic_List<VisualElementFocusRing_FocusRingRecord>__ctor__
                );
    DAT_07ef3cc2 = 1;
  }
  iVar1 = *(int *)(param_1 + 0x38) + -1;
  *(int *)(param_1 + 0x38) = iVar1;
  uStack_78 = 0;
  local_80 = 0;
  local_68 = 0;
  uStack_70 = 0;
  puStack_58 = (undefined8 *)0x0;
  local_60 = 0;
  local_48 = 0;
  uStack_50 = 0;
  if (iVar1 == 0) {
    *(undefined8 *)(param_1 + 0x30) = 0;
    thunk_FUN_036b7ad0((undefined8 *)(param_1 + 0x30),0);
  }
  puVar4 = Method_System_Collections_Generic_List<VisualElementFocusRing_FocusRingRecord>__ctor__;
  puVar3 = 
  Method_System_Collections_Generic_List<UnitySynchronizationContext_WorkRequest>_get_Count__;
  puVar2 = 
  Method_System_Collections_Generic_List<UnitySynchronizationContext_WorkRequest>_RemoveAt__;
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_046c0870(&local_a0,*(long *)(param_1 + 0x20),
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<VisualElementFocusRing_FocusRingRecord>__ctor__
                );
    local_60 = local_a0;
    local_a0 = 0;
    puStack_58 = puStack_98;
    local_48 = lStack_88;
    uStack_50 = uStack_90;
    puStack_98 = &local_60;
    while (uVar7 = FUN_058d5018(&local_60,*(undefined8 *)puVar3), lVar5 = local_48, (uVar7 & 1) != 0
          ) {
      if (local_48 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      uVar6 = FUN_073228e4(local_48,0);
      FUN_073228ec(lVar5,uVar6 & 0xffffffbf,0);
    }
    FUN_058d5014(&local_60,*(undefined8 *)puVar2);
    FUN_0745e2b0(param_1,param_2);
    if (*(long *)(param_1 + 0x20) != 0) {
      FUN_046c0870(&local_80,*(long *)(param_1 + 0x20),*(undefined8 *)puVar4);
      local_a0 = 0;
      puStack_98 = &local_80;
      while( true ) {
        uVar7 = FUN_058d5018(&local_80,*(undefined8 *)puVar3);
        lVar5 = local_68;
        if ((uVar7 & 1) == 0) {
                    /* try { // try from 0745e604 to 0755e607 has its CatchHandler @ 0745e6b0 */
                    /* try { // try from 0745e608 to 0755e69f has its CatchHandler @ 0745e454 */
          FUN_058d5014(&local_80,*(undefined8 *)puVar2);
          return;
        }
        if (local_68 == 0) break;
                    /* try { // try from 0745e5ec to 0755e5ef has its CatchHandler @ 0745e6b4 */
        uVar6 = FUN_073228e4(local_68,0);
        FUN_073228ec(lVar5,uVar6 | 0x40,0);
      }
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


