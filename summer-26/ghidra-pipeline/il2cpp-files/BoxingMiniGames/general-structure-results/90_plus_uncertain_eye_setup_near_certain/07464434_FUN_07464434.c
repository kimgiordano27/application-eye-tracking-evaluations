/*
FUNCTION_NAME: FUN_07464434
ENTRY_POINT: 07464434
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_4
*/


bool FUN_07464434(long param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long lVar11;
  undefined8 uVar12;
  undefined4 local_98;
  undefined4 uStack_94;
  int iStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  
  if ((DAT_07ef3cfe & 1) == 0) {
    FUN_03642964(
                Method_System_Data_Listeners<DataViewListener>_Notify<ListChangedEventArgs,_bool,_bool>__
                );
    FUN_03642964(
                Method_System_Data_Listeners<DataViewListener>_Notify<ListChangedType,_DataRow,_bool>__
                );
    FUN_03642964(
                Method_System_Collections_Generic_List<OVRPlugin_Qpl_Annotation_Builder_Entry>_get_Count__
                );
    FUN_03642964(PTR_DAT_079ffc80);
    FUN_03642964(Method_System_Data_Listeners<DataViewListener>__ctor__);
    FUN_03642964(Method_System_Data_Listeners<DataViewListener>_Add__);
    DAT_07ef3cfe = 1;
  }
  plVar5 = (long *)FUN_07464244(param_1);
  puVar3 = 
  Method_System_Collections_Generic_List<OVRPlugin_Qpl_Annotation_Builder_Entry>_get_Count__;
  if (plVar5 != (long *)0x0) {
    lVar8 = *plVar5;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) ==
            *(long *)
             Method_System_Collections_Generic_List<OVRPlugin_Qpl_Annotation_Builder_Entry>_get_Count__
           ) {
          puVar6 = (undefined8 *)(lVar8 + (long)(*piVar10 + 3) * 0x10 + 0x138);
          goto LAB_07464524;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar6 = (undefined8 *)
             FUN_0367cd30(plVar5,*(long *)
                                  Method_System_Collections_Generic_List<OVRPlugin_Qpl_Annotation_Builder_Entry>_get_Count__
                          ,3);
LAB_07464524:
    (*(code *)*puVar6)(&local_98,plVar5,puVar6[1]);
    puVar4 = Method_System_Data_Listeners<DataViewListener>_Add__;
    puVar2 = PTR_DAT_079ffc80;
    if (iStack_7c == 0) {
LAB_074646c4:
      return iStack_7c != 0;
    }
    lVar8 = *(long *)PTR_DAT_079ffc80;
    lVar11 = *(long *)(param_1 + 0x50);
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_036a1978(lVar8);
      lVar8 = *(long *)puVar2;
    }
    lVar7 = *(long *)puVar4;
    uVar1 = *(undefined4 *)(*(long *)(lVar8 + 0xb8) + 0x14);
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_036a1978();
      lVar7 = *(long *)puVar4;
    }
    puVar6 = *(undefined8 **)(lVar7 + 0xb8);
    lVar8 = puVar6[0xb];
    if (lVar8 == 0) {
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_036a1978();
        puVar6 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
      }
      uVar12 = *puVar6;
      lVar8 = thunk_FUN_0367fe20(*(undefined8 *)
                                  Method_System_Data_Listeners<DataViewListener>_Notify<ListChangedType,_DataRow,_bool>__
                                );
      FUN_04167450(lVar8,uVar12,
                   *(undefined8 *)Method_System_Data_Listeners<DataViewListener>__ctor__,0);
      plVar5 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x58);
      *plVar5 = lVar8;
      thunk_FUN_036b7ad0(plVar5,lVar8);
    }
    if (lVar11 != 0) {
      FUN_03c8245c(local_98,uStack_94,0,local_78,uStack_74,0,lVar11,uVar1,0,lVar8,&local_98,0,
                   *(undefined8 *)
                    Method_System_Data_Listeners<DataViewListener>_Notify<ListChangedEventArgs,_bool,_bool>__
                  );
      plVar5 = (long *)FUN_07464244(param_1);
      if (plVar5 != (long *)0x0) {
        lVar8 = *plVar5;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)puVar3) {
              puVar6 = (undefined8 *)(lVar8 + (long)(*piVar10 + 2) * 0x10 + 0x138);
              goto LAB_074646b8;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar6 = (undefined8 *)FUN_0367cd30(plVar5,*(long *)puVar3,2);
LAB_074646b8:
        (*(code *)*puVar6)(plVar5,puVar6[1]);
        goto LAB_074646c4;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


