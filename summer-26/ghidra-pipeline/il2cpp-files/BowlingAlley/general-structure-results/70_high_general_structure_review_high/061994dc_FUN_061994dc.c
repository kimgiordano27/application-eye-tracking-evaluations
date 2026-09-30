/*
FUNCTION_NAME: FUN_061994dc
ENTRY_POINT: 061994dc
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_8;telemetry_or_network_hits_3
*/


void FUN_061994dc(long param_1,long param_2,long param_3,long *param_4)

{
  byte bVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  
  if ((DAT_076ddbba & 1) == 0) {
    thunk_FUN_032e1da0(
                      System_Collections_Generic_IEnumerator<VisualEffectPlayableSerializedEvent>_TypeInfo
                      );
    thunk_FUN_032e1da0(System_Collections_Generic_List<XRDisplaySubsystem>_TypeInfo);
    thunk_FUN_032e1da0(System_Collections_Generic_Dictionary<int,_InputDevice>_TypeInfo);
    DAT_076ddbba = 1;
  }
  FUN_0624d7ac(param_1,0);
  if (param_3 == 0) {
    thunk_FUN_032e1da0(PTR_DAT_0727dbc0);
    uVar4 = thunk_FUN_032a56a0();
    puVar6 = PTR_DAT_07280568;
  }
  else {
    if (param_2 != 0) {
      plVar12 = (long *)(param_1 + 0x10);
      *plVar12 = param_2;
      thunk_FUN_0333a630(plVar12,param_2);
      plVar11 = (long *)(param_1 + 0x18);
      *plVar11 = param_3;
      thunk_FUN_0333a630(plVar11,param_3);
      if (param_4 == (long *)0x0) {
        return;
      }
      if (*plVar12 != 0) {
        iVar2 = FUN_061ad8a8(*plVar12,0);
        if (iVar2 != 0x1d) {
          if (*plVar12 == 0) goto LAB_0619969c;
          iVar2 = FUN_061ad8a8(*plVar12,0);
          if (iVar2 != 0x1e) {
            return;
          }
        }
        plVar11 = (long *)*plVar11;
        if (plVar11 != (long *)0x0) {
          bVar1 = *(byte *)(*(long *)
                             System_Collections_Generic_Dictionary<int,_InputDevice>_TypeInfo +
                           0x130);
          if ((bVar1 <= *(byte *)(*plVar11 + 0x130)) &&
             (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) ==
              *(long *)System_Collections_Generic_Dictionary<int,_InputDevice>_TypeInfo)) {
            lVar7 = *param_4;
            lVar10 = plVar11[3];
            uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar8 != 0) {
              piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar9 + -2) ==
                    *(long *)
                     System_Collections_Generic_IEnumerator<VisualEffectPlayableSerializedEvent>_TypeInfo
                   ) {
                  puVar3 = (undefined8 *)(lVar7 + (long)(*piVar9 + 2) * 0x10 + 0x138);
                  goto LAB_06199648;
                }
                uVar8 = uVar8 - 1;
                piVar9 = piVar9 + 4;
              } while (uVar8 != 0);
            }
            puVar3 = (undefined8 *)
                     FUN_032937ac(param_4,*(long *)
                                           System_Collections_Generic_IEnumerator<VisualEffectPlayableSerializedEvent>_TypeInfo
                                  ,2);
LAB_06199648:
            uVar4 = (*(code *)*puVar3)(param_4,lVar10,puVar3[1]);
            uVar5 = thunk_FUN_032a56a0(*(undefined8 *)
                                        System_Collections_Generic_List<XRDisplaySubsystem>_TypeInfo
                                      );
            System_Xml_Schema_Datatype_NOTATION__get_TypeCode(uVar5,uVar4,lVar10);
            *(undefined8 *)(param_1 + 0x30) = uVar5;
            thunk_FUN_0333a630((undefined8 *)(param_1 + 0x30),uVar5);
            return;
          }
        }
      }
LAB_0619969c:
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    thunk_FUN_032e1da0(PTR_DAT_0727dbc0);
    uVar4 = thunk_FUN_032a56a0();
    puVar6 = System_Collections_Generic_List<XRAnchorSubsystemDescriptor>_TypeInfo;
  }
  uVar5 = thunk_FUN_032e1da0(puVar6);
  FUN_05897d14(uVar4,uVar5,0);
  uVar5 = thunk_FUN_032e1da0(System_Collections_Generic_List<XRFaceSubsystemDescriptor>_TypeInfo);
                    /* WARNING: Subroutine does not return */
  FUN_032d5dbc(uVar4,uVar5);
}


