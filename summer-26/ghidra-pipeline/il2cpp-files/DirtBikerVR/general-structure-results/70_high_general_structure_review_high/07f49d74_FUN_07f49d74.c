/*
FUNCTION_NAME: FUN_07f49d74
ENTRY_POINT: 07f49d74
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_8;telemetry_or_network_hits_4
*/


void FUN_07f49d74(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  int *piVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  
  if ((DAT_0899b27f & 1) == 0) {
    FUN_03a8a718(
                Method_System_Collections_Generic_Dictionary<string,_List<OpenXRInput_SerializedBinding>>_set_Item__
                );
    FUN_03a8a718(Method_System_Collections_Generic_Dictionary<string,_Tuple<Guid,_string>>__ctor__);
    FUN_03a8a718(Method_System_Collections_Generic_Dictionary<string,_List<int>>_GetEnumerator__);
    FUN_03a8a718(Method_System_Collections_Generic_Dictionary<string,_Tuple<Guid,_string>>_Add__);
    FUN_03a8a718(
                Method_System_Collections_Generic_Dictionary<string,_Tuple<Guid,_string>>_TryGetValue__
                );
    FUN_03a8a718(
                Method_System_Collections_Generic_Dictionary<string,_ValueTuple<ProbeVolumeBakingSet,_List<int>>>__ctor__
                );
    FUN_03a8a718(
                Method_System_Collections_Generic_Dictionary<string,_List<RosterItem>>_ContainsKey__
                );
    FUN_03a8a718(PTR_DAT_08488f00);
    FUN_03a8a718(PTR_DAT_08488f20);
    DAT_0899b27f = 1;
  }
  puVar2 = Method_System_Collections_Generic_Dictionary<string,_List<RosterItem>>_ContainsKey__;
  uVar3 = FUN_07f4a2a4(param_1);
  if ((uVar3 & 1) != 0) {
    lVar4 = *(long *)puVar2;
    lVar8 = *(long *)(param_1 + 0x50);
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
      lVar4 = *(long *)puVar2;
    }
    puVar6 = *(undefined8 **)(lVar4 + 0xb8);
    lVar9 = puVar6[7];
    if (lVar9 == 0) {
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
        puVar6 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
      }
      uVar10 = *puVar6;
      lVar9 = thunk_FUN_03ac74bc(*(undefined8 *)
                                  Method_System_Collections_Generic_Dictionary<string,_Tuple<Guid,_string>>__ctor__
                                );
      FUN_049639e4(lVar9,uVar10,
                   *(undefined8 *)
                    Method_System_Collections_Generic_Dictionary<string,_Tuple<Guid,_string>>_Add__,
                   0);
      plVar5 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x38);
      *plVar5 = lVar9;
      thunk_FUN_03afed3c(plVar5,lVar9);
    }
    if (lVar8 == 0) goto LAB_07f4a114;
    FUN_044a3354(lVar8,lVar9,param_1,
                 *(undefined8 *)
                  Method_System_Collections_Generic_Dictionary<string,_List<OpenXRInput_SerializedBinding>>_set_Item__
                );
  }
  plVar5 = (long *)FUN_07f4822c(param_1);
  puVar1 = Method_System_Collections_Generic_Dictionary<string,_List<int>>_GetEnumerator__;
  if (plVar5 != (long *)0x0) {
    lVar4 = *plVar5;
    uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
    uVar10 = *(undefined8 *)PTR_DAT_08488f00;
    if (uVar3 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) ==
            *(long *)Method_System_Collections_Generic_Dictionary<string,_List<int>>_GetEnumerator__
           ) {
          puVar6 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_07f49f28;
        }
        uVar3 = uVar3 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar3 != 0);
    }
    puVar6 = (undefined8 *)
             FUN_03ac43c4(plVar5,*(long *)
                                  Method_System_Collections_Generic_Dictionary<string,_List<int>>_GetEnumerator__
                          ,0);
LAB_07f49f28:
    uVar3 = (*(code *)*puVar6)(plVar5,uVar10,puVar6[1]);
    if ((uVar3 & 1) != 0) {
      lVar4 = *(long *)puVar2;
      lVar8 = *(long *)(param_1 + 0x50);
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
        lVar4 = *(long *)puVar2;
      }
      puVar6 = *(undefined8 **)(lVar4 + 0xb8);
      lVar9 = puVar6[8];
      if (lVar9 == 0) {
        if (*(int *)(lVar4 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
          puVar6 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
        }
        uVar10 = *puVar6;
        lVar9 = thunk_FUN_03ac74bc(*(undefined8 *)
                                    Method_System_Collections_Generic_Dictionary<string,_Tuple<Guid,_string>>__ctor__
                                  );
        FUN_049639e4(lVar9,uVar10,
                     *(undefined8 *)
                      Method_System_Collections_Generic_Dictionary<string,_Tuple<Guid,_string>>_TryGetValue__
                     ,0);
        plVar5 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x40);
        *plVar5 = lVar9;
        thunk_FUN_03afed3c(plVar5,lVar9);
      }
      if (lVar8 == 0) goto LAB_07f4a114;
      FUN_044a3354(lVar8,lVar9,param_1,
                   *(undefined8 *)
                    Method_System_Collections_Generic_Dictionary<string,_List<OpenXRInput_SerializedBinding>>_set_Item__
                  );
    }
    plVar5 = (long *)FUN_07f4822c(param_1);
    if (plVar5 != (long *)0x0) {
      lVar4 = *plVar5;
      uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
      uVar10 = *(undefined8 *)PTR_DAT_08488f20;
      if (uVar3 != 0) {
        piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
            puVar6 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_07f4a040;
          }
          uVar3 = uVar3 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar3 != 0);
      }
      puVar6 = (undefined8 *)FUN_03ac43c4(plVar5,*(long *)puVar1,0);
LAB_07f4a040:
      uVar3 = (*(code *)*puVar6)(plVar5,uVar10,puVar6[1]);
      if ((uVar3 & 1) == 0) {
        return;
      }
      lVar4 = *(long *)puVar2;
      lVar8 = *(long *)(param_1 + 0x50);
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
        lVar4 = *(long *)puVar2;
      }
      puVar6 = *(undefined8 **)(lVar4 + 0xb8);
      lVar9 = puVar6[9];
      if (lVar9 == 0) {
        if (*(int *)(lVar4 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
          puVar6 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
        }
        uVar10 = *puVar6;
        lVar9 = thunk_FUN_03ac74bc(*(undefined8 *)
                                    Method_System_Collections_Generic_Dictionary<string,_Tuple<Guid,_string>>__ctor__
                                  );
        FUN_049639e4(lVar9,uVar10,
                     *(undefined8 *)
                      Method_System_Collections_Generic_Dictionary<string,_ValueTuple<ProbeVolumeBakingSet,_List<int>>>__ctor__
                     ,0);
        plVar5 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x48);
        *plVar5 = lVar9;
        thunk_FUN_03afed3c(plVar5,lVar9);
      }
      if (lVar8 != 0) {
        FUN_044a3354(lVar8,lVar9,param_1,
                     *(undefined8 *)
                      Method_System_Collections_Generic_Dictionary<string,_List<OpenXRInput_SerializedBinding>>_set_Item__
                    );
        return;
      }
    }
  }
LAB_07f4a114:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


