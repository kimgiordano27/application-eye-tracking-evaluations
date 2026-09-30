/*
FUNCTION_NAME: FUN_06a81e04
ENTRY_POINT: 06a81e04
PROGRAM: waitwhat-libil2cpp.so
SCORE: 71
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_4;ui_or_gameplay_sink_hits_6;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x06a82024) */
/* WARNING: Removing unreachable block (ram,0x06a82028) */
/* WARNING: Removing unreachable block (ram,0x06a820b0) */
/* WARNING: Removing unreachable block (ram,0x06a820c0) */

void FUN_06a81e04(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 local_e8;
  undefined8 *puStack_e0;
  ulong local_d8;
  long lStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 *puStack_b8;
  undefined8 local_b0;
  long lStack_a8;
  undefined8 local_a0;
  undefined8 local_90;
  undefined8 *puStack_88;
  ulong uStack_80;
  long local_78;
  undefined8 local_70;
  
  if ((DAT_0755f2d9 & 1) == 0) {
    FUN_03188a78(
                Method_System_Collections_Generic_Dictionary<InternedString,_InputControlLayout_Collection_PrecompiledLayout>_get_Count__
                );
    FUN_03188a78(
                Method_System_Collections_Generic_Dictionary<InternedString,_InputControlLayout_Collection_PrecompiledLayout>_get_Item__
                );
    FUN_03188a78(
                Method_System_Collections_Generic_Dictionary<InternedString,_InputControlLayout_Collection_PrecompiledLayout>_get_Keys__
                );
    FUN_03188a78(
                Method_System_Collections_Generic_Dictionary<InternedString,_InputControlLayout_Collection_PrecompiledLayout>_set_Item__
                );
    FUN_03188a78(Method_System_Collections_Generic_Dictionary<Item,_HierarchyItemButton>__ctor__);
    FUN_03188a78(Method_System_Collections_Generic_Dictionary<Item,_HierarchyItemButton>_Add__);
    FUN_03188a78(Method_System_Collections_Generic_Dictionary<Item,_HierarchyItemButton>_Remove__);
    FUN_03188a78(
                Method_System_Collections_Generic_Dictionary<Item,_HierarchyItemButton>_TryGetValue__
                );
    FUN_03188a78(
                Method_System_Collections_Generic_Dictionary<JsonProperty,_JsonSerializerInternalReader_PropertyPresence>_GetEnumerator__
                );
    FUN_03188a78(
                Method_System_Collections_Generic_Dictionary<JsonProperty,_JsonSerializerInternalReader_PropertyPresence>_set_Item__
                );
    DAT_0755f2d9 = 1;
  }
  local_70 = 0;
  local_a0 = 0;
  puStack_b8 = (undefined8 *)0x0;
  local_c0 = 0;
  lStack_a8 = 0;
  local_b0 = 0;
  puStack_88 = (undefined8 *)0x0;
  local_90 = 0;
  local_78 = 0;
  uStack_80 = 0;
  uVar6 = FUN_06a81a88();
  if ((uVar6 & 1) != 0) {
    FUN_06a81ae8();
    lVar7 = FUN_06a81b84(1);
    if (lVar7 != 0) {
      FUN_0518a7f8(&local_e8,lVar7,
                   *(undefined8 *)
                    Method_System_Collections_Generic_Dictionary<InternedString,_InputControlLayout_Collection_PrecompiledLayout>_get_Item__
                  );
      puVar3 = Method_System_Collections_Generic_Dictionary<Item,_HierarchyItemButton>_Add__;
      puVar2 = Method_System_Collections_Generic_Dictionary<Item,_HierarchyItemButton>__ctor__;
      puVar1 = 
      Method_System_Collections_Generic_Dictionary<InternedString,_InputControlLayout_Collection_PrecompiledLayout>_set_Item__
      ;
      puStack_88 = puStack_e0;
      local_90 = local_e8;
      local_78 = lStack_d0;
      uStack_80 = local_d8;
      local_70 = local_c8;
      while (uVar6 = FUN_054f07f8(&local_90,*(undefined8 *)puVar3), lVar7 = local_78,
            (uVar6 & 1) != 0) {
        if (local_78 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03188cd8();
        }
        if (*(long *)(local_78 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03188cd8();
        }
        FUN_052d1e30(&local_e8,*(long *)(local_78 + 0x20),
                     *(undefined8 *)
                      Method_System_Collections_Generic_Dictionary<InternedString,_InputControlLayout_Collection_PrecompiledLayout>_get_Count__
                    );
        local_c0 = local_e8;
        local_e8 = 0;
        puStack_b8 = puStack_e0;
        lStack_a8 = lStack_d0;
        local_b0 = local_d8;
        local_a0 = local_c8;
        puStack_e0 = &local_c0;
        while (uVar8 = FUN_05520c34(&local_c0,*(undefined8 *)puVar2), uVar6 = local_b0,
              (uVar8 & 1) != 0) {
          iVar4 = (int)local_b0;
          iVar5 = local_b0._4_4_;
          lVar9 = FUN_06a80908(lVar7,local_b0 & 0xffffffff,local_b0._4_4_);
          uVar10 = FUN_06a80908(lVar7,iVar4 + -1,iVar5);
          uVar11 = FUN_06a80908(lVar7,iVar4 + 1,iVar5);
          uVar12 = FUN_06a80908(lVar7,uVar6 & 0xffffffff,iVar5 + 1);
          uVar13 = FUN_06a80908(lVar7,uVar6 & 0xffffffff,iVar5 + -1);
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03188cd8();
          }
          FUN_06a7fe88(lVar9,uVar10,uVar12,uVar11,uVar13);
        }
        FUN_05520d48(&local_c0,*(undefined8 *)puVar1);
      }
      FUN_054f0910(&local_90,
                   *(undefined8 *)
                    Method_System_Collections_Generic_Dictionary<InternedString,_InputControlLayout_Collection_PrecompiledLayout>_get_Keys__
                  );
    }
  }
  return;
}


