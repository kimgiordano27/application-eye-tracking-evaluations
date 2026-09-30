/*
FUNCTION_NAME: FUN_057e23a4
ENTRY_POINT: 057e23a4
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_12;ray_or_cast_sink_hits_5;telemetry_or_network_hits_2
*/


void FUN_057e23a4(long *param_1,long param_2,long param_3,long param_4)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  
  if ((DAT_06bc0cca & 1) == 0) {
    FUN_02f08768(
                Method_System_Collections_Generic_Dictionary_Enumerator<Collider,_IXRInteractable>_get_Current__
                );
    FUN_02f08768(
                Method_System_Collections_Generic_Dictionary_Enumerator<KeyValuePair<Type,_XmlRootAttribute>,_XmlSerializer>_get_Current__
                );
    DAT_06bc0cca = 1;
  }
  if ((param_3 == 0) || (*(int *)(param_3 + 0x10) == 0)) {
    uVar2 = thunk_FUN_02f6ef30(
                              Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<Collider,_IXRInteractable>_MoveNext__
                              );
    uVar2 = FUN_0581abc0(uVar2,0);
    thunk_FUN_02f6ef30(PTR_DAT_067c99e8);
    uVar3 = thunk_FUN_02f45270();
    FUN_05055664(uVar3,uVar2,0);
    uVar2 = thunk_FUN_02f6ef30(
                              Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<Collider,_IXRInteractable>_Dispose__
                              );
                    /* WARNING: Subroutine does not return */
    FUN_02f0888c(uVar3,uVar2);
  }
  FUN_057e2768(param_1,param_3);
  FUN_057e1c10(param_1,5);
  if (param_2 == 0) {
    if (param_4 != 0) {
      param_2 = (**(code **)(*param_1 + 0x318))(param_1,param_4,*(undefined8 *)(*param_1 + 800));
      if (param_2 != 0) goto LAB_057e250c;
    }
    param_2 = **(long **)(*(long *)(PTR_DAT_067c9338 + 0x90) + 0xb8);
  }
  else if (0 < *(int *)(param_2 + 0x10)) {
    FUN_057e2768(param_1,param_2);
    if (((param_4 == 0) && (param_4 = FUN_057e2868(param_1,param_2), param_4 == 0)) ||
       (*(int *)(param_4 + 0x10) == 0)) {
      uVar2 = thunk_FUN_02f6ef30(
                                Method_System_Collections_Generic_Dictionary<string,_LayerDataDescriptor>_TryGetValue__
                                );
      uVar2 = FUN_0581abc0(uVar2,0);
      thunk_FUN_02f6ef30(PTR_DAT_067c99e8);
      uVar3 = thunk_FUN_02f45270();
      FUN_05055664(uVar3,uVar2,0);
      uVar2 = thunk_FUN_02f6ef30(
                                Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<Collider,_IXRInteractable>_Dispose__
                                );
                    /* WARNING: Subroutine does not return */
      FUN_02f0888c(uVar3,uVar2);
    }
    goto LAB_057e250c;
  }
  if ((param_4 == 0) && (param_4 = FUN_057e2868(param_1,param_2), param_4 == 0)) {
    param_4 = **(long **)(*(long *)(PTR_DAT_067c9338 + 0x90) + 0xb8);
  }
LAB_057e250c:
  if (((int)param_1[0xb] == 0) && (plVar4 = (long *)param_1[4], plVar4 != (long *)0x0)) {
    (**(code **)(*plVar4 + 0x448))(plVar4,(int)param_1[0x14],*(undefined8 *)(*plVar4 + 0x450));
  }
  plVar4 = (long *)param_1[3];
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  (**(code **)(*plVar4 + 0x1c8))(plVar4,param_2,param_3,param_4,*(undefined8 *)(*plVar4 + 0x1d0));
  lVar5 = param_1[10];
  uVar1 = (int)param_1[0xb] + 1;
  *(uint *)(param_1 + 0xb) = uVar1;
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  if (uVar1 == *(uint *)(lVar5 + 0x18)) {
    lVar5 = FUN_02f0880c(*(undefined8 *)
                          Method_System_Collections_Generic_Dictionary_Enumerator<KeyValuePair<Type,_XmlRootAttribute>,_XmlSerializer>_get_Current__
                         ,uVar1 * 2);
    FUN_050f8cdc(param_1[10],lVar5,uVar1,0);
    param_1[10] = lVar5;
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
  }
  if (uVar1 < *(uint *)(lVar5 + 0x18)) {
    lVar5 = lVar5 + (long)(int)uVar1 * 0x30;
    *(int *)(lVar5 + 0x20) = (int)param_1[7];
    *(long *)(lVar5 + 0x30) = param_3;
    *(long *)(lVar5 + 0x38) = param_4;
    *(long *)(lVar5 + 0x28) = param_2;
    *(undefined4 *)(lVar5 + 0x40) = 0xffffffff;
    *(undefined8 *)(lVar5 + 0x48) = 0;
    FUN_057e29a0(param_1,param_2,param_4);
    if (0xd < (int)param_1[0xd]) {
      if (param_1[0xe] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      FUN_0491c900(param_1[0xe],
                   *(undefined8 *)
                    Method_System_Collections_Generic_Dictionary_Enumerator<Collider,_IXRInteractable>_get_Current__
                  );
    }
    *(undefined4 *)(param_1 + 0xd) = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089d0();
}


