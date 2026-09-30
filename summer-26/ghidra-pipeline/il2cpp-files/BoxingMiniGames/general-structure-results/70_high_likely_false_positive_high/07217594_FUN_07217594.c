/*
FUNCTION_NAME: FUN_07217594
ENTRY_POINT: 07217594
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 76
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_9;ui_or_gameplay_sink_hits_8;telemetry_or_network_hits_4
*/


long FUN_07217594(undefined1 param_1 [16],undefined4 param_2,undefined8 param_3)

{
  short sVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined4 local_30;
  uint local_24;
  
  if ((DAT_07ef1284 & 1) == 0) {
    FUN_03642964(Method_System_Collections_Generic_Dictionary<Item,_HierarchyItemButton>_Add__);
    FUN_03642964(PTR_DAT_07a00b50);
    FUN_03642964(
                Method_System_Collections_Generic_Dictionary<InternedString,_InternedString>_set_Item__
                );
    FUN_03642964(PTR_DAT_079f4a08);
    FUN_03642964(PTR_DAT_079f7f08);
    FUN_03642964(Method_System_Collections_Generic_Dictionary<Item,_HierarchyItemButton>_Remove__);
    FUN_03642964(
                Method_System_Collections_Generic_Dictionary<Item,_HierarchyItemButton>_TryGetValue__
                );
    FUN_03642964(
                Method_System_Collections_Generic_Dictionary<JsonProperty,_JsonSerializerInternalReader_PropertyPresence>_GetEnumerator__
                );
    FUN_03642964(
                Method_System_Collections_Generic_Dictionary<JsonProperty,_JsonSerializerInternalReader_PropertyPresence>_set_Item__
                );
    FUN_03642964(
                Method_System_Collections_Generic_Dictionary<JsonSchemaNode,_JsonSchemaModel>__ctor__
                );
    FUN_03642964(
                Method_System_Collections_Generic_Dictionary<JsonSchemaNode,_JsonSchemaModel>_TryGetValue__
                );
    FUN_03642964(
                Method_System_Collections_Generic_Dictionary<JsonSchemaNode,_JsonSchemaModel>_set_Item__
                );
    FUN_03642964(PTR_DAT_079f49e0);
    DAT_07ef1284 = 1;
  }
  local_24 = 0;
  uVar2 = FUN_0721519c(param_3);
  if ((uVar2 & 0xfffffffe) == 4) {
    sVar1 = FUN_07214d28();
    if (sVar1 != 0) {
      lVar5 = FUN_03642a4c(*(undefined8 *)PTR_DAT_079f4a08,8);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      if (*(int *)(lVar5 + 0x18) != 0) {
        *(undefined8 *)(lVar5 + 0x20) =
             *(undefined8 *)
              Method_System_Collections_Generic_Dictionary<JsonProperty,_JsonSerializerInternalReader_PropertyPresence>_GetEnumerator__
        ;
        thunk_FUN_036b7ad0((undefined8 *)(lVar5 + 0x20));
        local_30 = FUN_0721519c(param_3);
        local_40 = *(undefined8 *)PTR_DAT_07a00b50;
        uStack_38 = 0xffffffffffffffff;
        uVar6 = FUN_05e4e668(&local_40,0);
        if ((*(uint *)(lVar5 + 0x18) & 0xfffffffe) != 0) {
          *(undefined8 *)(lVar5 + 0x28) = uVar6;
          thunk_FUN_036b7ad0((undefined8 *)(lVar5 + 0x28),uVar6);
          if (2 < *(uint *)(lVar5 + 0x18)) {
            *(undefined8 *)(lVar5 + 0x30) =
                 *(undefined8 *)
                  Method_System_Collections_Generic_Dictionary<Item,_HierarchyItemButton>_TryGetValue__
            ;
            thunk_FUN_036b7ad0((undefined8 *)(lVar5 + 0x30));
            local_24 = FUN_07214d28(param_3);
            local_24 = local_24 & 0xffff;
            uVar6 = FUN_05e14f10(&local_24,0);
            if ((*(uint *)(lVar5 + 0x18) & 0xfffffffc) != 0) {
              *(undefined8 *)(lVar5 + 0x38) = uVar6;
              thunk_FUN_036b7ad0((undefined8 *)(lVar5 + 0x38),uVar6);
              if (4 < *(uint *)(lVar5 + 0x18)) {
                *(undefined8 *)(lVar5 + 0x40) =
                     *(undefined8 *)
                      Method_System_Collections_Generic_Dictionary<JsonSchemaNode,_JsonSchemaModel>__ctor__
                ;
                thunk_FUN_036b7ad0((undefined8 *)(lVar5 + 0x40));
                local_48 = FUN_072147e4(param_3);
                local_58 = *(undefined8 *)
                            Method_System_Collections_Generic_Dictionary<Item,_HierarchyItemButton>_Add__
                ;
                uStack_50 = 0xffffffffffffffff;
                uVar6 = FUN_05e4e668(&local_58,0);
                if (5 < *(uint *)(lVar5 + 0x18)) {
                  *(undefined8 *)(lVar5 + 0x48) = uVar6;
                  thunk_FUN_036b7ad0((undefined8 *)(lVar5 + 0x48),uVar6);
                  if (6 < *(uint *)(lVar5 + 0x18)) {
                    *(undefined8 *)(lVar5 + 0x50) =
                         *(undefined8 *)
                          Method_System_Collections_Generic_Dictionary<JsonSchemaNode,_JsonSchemaModel>_set_Item__
                    ;
                    thunk_FUN_036b7ad0((undefined8 *)(lVar5 + 0x50));
                    local_60 = FUN_07214f78(param_3);
                    local_70 = *(undefined8 *)
                                Method_System_Collections_Generic_Dictionary<InternedString,_InternedString>_set_Item__
                    ;
                    uStack_68 = 0xffffffffffffffff;
                    uVar6 = FUN_05e4e668(&local_70,0);
                    if ((*(uint *)(lVar5 + 0x18) & 0xfffffff8) != 0) {
                      *(undefined8 *)(lVar5 + 0x58) = uVar6;
                      thunk_FUN_036b7ad0();
                      lVar5 = FUN_05c98834(lVar5,0);
                      return lVar5;
                    }
                  }
                }
              }
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_03642c20();
    }
    uVar3 = FUN_0721519c(param_3);
    local_40 = CONCAT44(local_40._4_4_,uVar3);
    uVar6 = thunk_FUN_0367fa58(*(undefined8 *)PTR_DAT_07a00b50,&local_40);
    uVar3 = FUN_072147e4(param_3);
    local_58 = CONCAT44(local_58._4_4_,uVar3);
    uVar7 = thunk_FUN_0367fa58(*(undefined8 *)
                                Method_System_Collections_Generic_Dictionary<Item,_HierarchyItemButton>_Add__
                               ,&local_58);
    uVar3 = FUN_07214f78(param_3);
    local_70 = CONCAT44(local_70._4_4_,uVar3);
    uVar8 = thunk_FUN_0367fa58(*(undefined8 *)
                                Method_System_Collections_Generic_Dictionary<InternedString,_InternedString>_set_Item__
                               ,&local_70);
    puVar9 = (undefined8 *)
             Method_System_Collections_Generic_Dictionary<JsonProperty,_JsonSerializerInternalReader_PropertyPresence>_set_Item__
    ;
  }
  else {
    uVar2 = FUN_0721519c(param_3);
    if (((3 < uVar2) && (uVar2 != 0x10)) && ((uVar2 & 0xfffffffe) != 0x14)) {
      iVar4 = FUN_0721519c(param_3);
      if ((iVar4 != 0xe) && (iVar4 = FUN_0721519c(param_3), iVar4 != 0xd)) {
        local_30 = FUN_0721519c(param_3);
        local_40 = *(undefined8 *)PTR_DAT_07a00b50;
        uStack_38 = 0xffffffffffffffff;
        lVar5 = FUN_05e4e668(&local_40,0);
        if (lVar5 == 0) {
          return *(long *)PTR_DAT_079f49e0;
        }
        return lVar5;
      }
      uVar3 = FUN_0721519c(param_3);
      local_40 = CONCAT44(local_40._4_4_,uVar3);
      uVar6 = thunk_FUN_0367fa58(*(undefined8 *)PTR_DAT_07a00b50,&local_40);
      uVar7 = FUN_072152c4(param_3);
      lVar5 = FUN_05c98b2c(*(undefined8 *)
                            Method_System_Collections_Generic_Dictionary<Item,_HierarchyItemButton>_Remove__
                           ,uVar6,uVar7,0);
      return lVar5;
    }
    uVar3 = FUN_0721519c(param_3);
    local_58 = CONCAT44(local_58._4_4_,uVar3);
    uVar6 = thunk_FUN_0367fa58(*(undefined8 *)PTR_DAT_07a00b50,&local_58);
    uVar3 = FUN_0721430c(param_3);
    local_40 = CONCAT44(param_2,uVar3);
    uVar7 = thunk_FUN_0367fa58(*(undefined8 *)PTR_DAT_079f7f08,&local_40);
    uVar3 = FUN_072147e4(param_3);
    local_70 = CONCAT44(local_70._4_4_,uVar3);
    uVar8 = thunk_FUN_0367fa58(*(undefined8 *)
                                Method_System_Collections_Generic_Dictionary<Item,_HierarchyItemButton>_Add__
                               ,&local_70);
    puVar9 = (undefined8 *)
             Method_System_Collections_Generic_Dictionary<JsonSchemaNode,_JsonSchemaModel>_TryGetValue__
    ;
  }
  lVar5 = FUN_05c98b70(*puVar9,uVar6,uVar7,uVar8,0);
  return lVar5;
}


