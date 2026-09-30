/*
FUNCTION_NAME: FUN_0745db54
ENTRY_POINT: 0745db54
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_5;ui_or_gameplay_sink_hits_10;telemetry_or_network_hits_6
*/


undefined8 FUN_0745db54(long param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 extraout_x1;
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  undefined8 local_38;
  undefined8 local_28;
  
  if ((DAT_07ef3cbc & 1) == 0) {
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
    FUN_03642964(
                Method_System_Collections_Generic_List<VisualElementFocusRing_FocusRingRecord>_Add__
                );
    FUN_03642964(
                Method_System_Collections_Generic_List<VisualElementFocusRing_FocusRingRecord>_Clear__
                );
    DAT_07ef3cbc = 1;
  }
  local_28 = 0;
  uStack_48 = 0;
  local_50 = 0;
  local_38 = 0;
  local_40 = 0;
  if (param_2 != 0) {
    local_28 = *(undefined8 *)(param_2 + 0x260);
    lVar3 = FUN_0732f598(&local_28,0);
    if (lVar3 != 0) {
      do {
        uVar4 = FUN_0731f098(lVar3,0);
        if ((uVar4 & 1) != 0) {
LAB_0745dc64:
          if (*(long *)(param_1 + 0x20) != 0) {
            FUN_046c0870(&local_50,*(long *)(param_1 + 0x20),
                         *(undefined8 *)
                          Method_System_Collections_Generic_List<VisualElementFocusRing_FocusRingRecord>__ctor__
                        );
            puVar1 = 
            Method_System_Collections_Generic_List<UnitySynchronizationContext_WorkRequest>_get_Count__
            ;
            do {
              uVar4 = FUN_058d5018(&local_50,*(undefined8 *)puVar1);
              uVar2 = local_38;
              if ((uVar4 & 1) == 0) {
                FUN_058d5014(&local_50,
                             *(undefined8 *)
                              Method_System_Collections_Generic_List<UnitySynchronizationContext_WorkRequest>_RemoveAt__
                            );
                return 0;
              }
            } while (lVar3 != local_40);
            FUN_058d5014(&local_50,
                         *(undefined8 *)
                          Method_System_Collections_Generic_List<UnitySynchronizationContext_WorkRequest>_RemoveAt__
                        );
            return uVar2;
          }
          break;
        }
        local_28 = *(undefined8 *)(lVar3 + 0x260);
        lVar5 = FUN_0732f598(&local_28,0);
        if (lVar5 == 0) goto LAB_0745dc64;
        local_28 = *(undefined8 *)(lVar3 + 0x260);
        lVar3 = FUN_0732f598(&local_28,0);
      } while (lVar3 != 0);
      goto LAB_0745dc34;
    }
  }
  lVar3 = *(long *)(param_1 + 0x20);
  if (lVar3 != 0) {
    if (*(int *)(lVar3 + 0x18) < 1) {
      return 0;
    }
    FUN_046bfa0c(lVar3,*(int *)(lVar3 + 0x18) + -1,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<VisualElementFocusRing_FocusRingRecord>_Clear__
                );
    return extraout_x1;
  }
LAB_0745dc34:
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


