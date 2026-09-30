/*
FUNCTION_NAME: FUN_07465d8c
ENTRY_POINT: 07465d8c
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_3
*/


void FUN_07465d8c(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  int *piVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  
  if ((DAT_07ef3cfc & 1) == 0) {
    FUN_03642964(Method_System_Collections_Generic_LowLevelList<Task>_Add__);
    FUN_03642964(Method_System_Collections_Generic_LowLevelList<Task>_RemoveAll__);
    FUN_03642964(
                Method_System_Collections_Generic_List<OVRPlugin_Qpl_Annotation_Builder_Entry>_get_Count__
                );
    FUN_03642964(Method_System_Collections_Generic_LowLevelList<Task>_get_Count__);
    FUN_03642964(Method_Firebase_Platform_MainThreadProperty<bool>__ctor__);
    FUN_03642964(Method_Firebase_Platform_MainThreadProperty<bool>_get_Value__);
    FUN_03642964(Method_System_Data_Listeners<DataViewListener>_Add__);
    FUN_03642964(PTR_DAT_07a28f00);
    FUN_03642964(PTR_DAT_07a28f08);
    DAT_07ef3cfc = 1;
  }
  puVar1 = Method_System_Data_Listeners<DataViewListener>_Add__;
  uVar2 = FUN_074662bc(param_1);
  if ((uVar2 & 1) != 0) {
    lVar3 = *(long *)puVar1;
    lVar7 = *(long *)(param_1 + 0x50);
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_036a1978();
      lVar3 = *(long *)puVar1;
    }
    puVar5 = *(undefined8 **)(lVar3 + 0xb8);
    lVar8 = puVar5[7];
    if (lVar8 == 0) {
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_036a1978();
        puVar5 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
      }
      uVar9 = *puVar5;
      lVar8 = thunk_FUN_0367fe20(*(undefined8 *)
                                  Method_System_Collections_Generic_LowLevelList<Task>_RemoveAll__);
      FUN_04159c38(lVar8,uVar9,
                   *(undefined8 *)Method_System_Collections_Generic_LowLevelList<Task>_get_Count__,0
                  );
      plVar4 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x38);
      *plVar4 = lVar8;
      thunk_FUN_036b7ad0(plVar4,lVar8);
    }
    if (lVar7 == 0) goto LAB_0746612c;
    FUN_03c7e948(lVar7,lVar8,param_1,
                 *(undefined8 *)Method_System_Collections_Generic_LowLevelList<Task>_Add__);
  }
  plVar4 = (long *)FUN_07464244(param_1);
  if (plVar4 != (long *)0x0) {
    lVar3 = *plVar4;
    uVar2 = (ulong)*(ushort *)(lVar3 + 0x12e);
    uVar9 = *(undefined8 *)PTR_DAT_07a28f00;
    if (uVar2 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) ==
            *(long *)
             Method_System_Collections_Generic_List<OVRPlugin_Qpl_Annotation_Builder_Entry>_get_Count__
           ) {
          puVar5 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_07465f40;
        }
        uVar2 = uVar2 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar2 != 0);
    }
    puVar5 = (undefined8 *)
             FUN_0367cd30(plVar4,*(long *)
                                  Method_System_Collections_Generic_List<OVRPlugin_Qpl_Annotation_Builder_Entry>_get_Count__
                          ,0);
LAB_07465f40:
    uVar2 = (*(code *)*puVar5)(plVar4,uVar9,puVar5[1]);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)puVar1;
      lVar7 = *(long *)(param_1 + 0x50);
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_036a1978();
        lVar3 = *(long *)puVar1;
      }
      puVar5 = *(undefined8 **)(lVar3 + 0xb8);
      lVar8 = puVar5[8];
      if (lVar8 == 0) {
        if (*(int *)(lVar3 + 0xe4) == 0) {
          thunk_FUN_036a1978();
          puVar5 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
        }
        uVar9 = *puVar5;
        lVar8 = thunk_FUN_0367fe20(*(undefined8 *)
                                    Method_System_Collections_Generic_LowLevelList<Task>_RemoveAll__
                                  );
        FUN_04159c38(lVar8,uVar9,
                     *(undefined8 *)Method_Firebase_Platform_MainThreadProperty<bool>__ctor__,0);
        plVar4 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x40);
        *plVar4 = lVar8;
        thunk_FUN_036b7ad0(plVar4,lVar8);
      }
      if (lVar7 == 0) goto LAB_0746612c;
      FUN_03c7e948(lVar7,lVar8,param_1,
                   *(undefined8 *)Method_System_Collections_Generic_LowLevelList<Task>_Add__);
    }
    puVar5 = (undefined8 *)FUN_07464244(param_1);
    if (puVar5 != (undefined8 *)0x0) {
      FUN_0753c5f0(*puVar5);
      return;
    }
  }
LAB_0746612c:
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


