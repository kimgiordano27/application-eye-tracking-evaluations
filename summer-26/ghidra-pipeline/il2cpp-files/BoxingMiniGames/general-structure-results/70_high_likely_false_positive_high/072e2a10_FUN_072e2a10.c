/*
FUNCTION_NAME: FUN_072e2a10
ENTRY_POINT: 072e2a10
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 87
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_6;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_4
*/


void FUN_072e2a10(long param_1,long *param_2)

{
  byte bVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  int *piVar8;
  undefined8 uVar9;
  long local_38;
  
  if ((DAT_07ef2a7e & 1) == 0) {
    FUN_03642964(
                Method_System_Collections_Generic_List_Enumerator<JsonSerializerInternalReader_CreatorPropertyContext>_Dispose__
                );
    FUN_03642964(
                Method_System_Collections_Generic_List_Enumerator<CreationContext_AttributeOverrideRange>_MoveNext__
                );
    FUN_03642964(
                Method_System_Collections_Generic_List_Enumerator<DataBindingManager_BindingData>_Dispose__
                );
    FUN_03642964(
                Method_System_Collections_Generic_List_Enumerator<JsonSerializerInternalReader_CreatorPropertyContext>_MoveNext__
                );
    FUN_03642964(
                Method_System_Collections_Generic_List_Enumerator<InteractiveMenuPunchPadsRhythm2_LevelButton>_Dispose__
                );
    FUN_03642964(PTR_DAT_079fd710);
    DAT_07ef2a7e = 1;
  }
  local_38 = 0;
  if (param_2 == (long *)0x0) {
    return;
  }
  if (*(long *)(param_1 + 0x38) == 0) goto LAB_072e2c04;
  uVar3 = FUN_0422aaf4(*(long *)(param_1 + 0x38),param_2,
                       *(undefined8 *)
                        Method_System_Collections_Generic_List_Enumerator<JsonSerializerInternalReader_CreatorPropertyContext>_MoveNext__
                      );
  if (*(long *)(param_1 + 0x30) == 0) goto LAB_072e2c04;
  uVar4 = FUN_056b0f3c(*(long *)(param_1 + 0x30),param_2,&local_38,
                       *(undefined8 *)
                        Method_System_Collections_Generic_List_Enumerator<CreationContext_AttributeOverrideRange>_MoveNext__
                      );
  if ((uVar4 & 1) == 0) {
    lVar7 = *(long *)(param_1 + 0x30);
    local_38 = FUN_072e3c38(param_1);
    if (lVar7 == 0) goto LAB_072e2c04;
    FUN_056af3c0(lVar7,param_2,local_38,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List_Enumerator<DataBindingManager_BindingData>_Dispose__
                );
LAB_072e2b0c:
    puVar2 = 
    Method_System_Collections_Generic_List_Enumerator<InteractiveMenuPunchPadsRhythm2_LevelButton>_Dispose__
    ;
    plVar5 = (long *)thunk_FUN_0367fd24(param_2,*(undefined8 *)
                                                 Method_System_Collections_Generic_List_Enumerator<InteractiveMenuPunchPadsRhythm2_LevelButton>_Dispose__
                                       );
    if (plVar5 != (long *)0x0) {
      lVar7 = *plVar5;
      uVar9 = *(undefined8 *)(param_1 + 0x48);
      uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar3 != 0) {
        piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
            puVar6 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_072e2b78;
          }
          uVar3 = uVar3 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar3 != 0);
      }
      puVar6 = (undefined8 *)FUN_0367cd30(plVar5,*(long *)puVar2,0);
LAB_072e2b78:
      (*(code *)*puVar6)(plVar5,uVar9,puVar6[1]);
    }
    bVar1 = *(byte *)(*(long *)PTR_DAT_079fd710 + 0x130);
    if ((bVar1 <= *(byte *)(*param_2 + 0x130)) &&
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_079fd710))
    {
      FUN_03c2ce5c(param_2,*(undefined8 *)(param_1 + 0x50),param_2,0,
                   *(undefined8 *)
                    Method_System_Collections_Generic_List_Enumerator<JsonSerializerInternalReader_CreatorPropertyContext>_Dispose__
                  );
    }
  }
  else if ((uVar3 & 1) != 0) goto LAB_072e2b0c;
  if (local_38 != 0) {
    *(int *)(local_38 + 0x20) = *(int *)(local_38 + 0x20) + 1;
    return;
  }
LAB_072e2c04:
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


