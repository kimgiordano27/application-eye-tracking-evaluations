/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_sessiongroup_set_tx_session_create
ENTRY_POINT: 07869f50
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_sessiongroup_set_tx_session_create
               (undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  undefined4 in_w9;
  ulong uVar8;
  int *piVar9;
  undefined4 *unaff_x19;
  long unaff_x20;
  long *plVar10;
  undefined8 uVar11;
  long *unaff_x26;
  undefined8 uStack0000000000000018;
  
  *unaff_x19 = in_w9;
  uStack0000000000000018 = param_1;
  uVar2 = FUN_0587c704(&stack0x00000018,*(undefined8 *)PTR_DAT_0848a5c8);
  puVar1 = System_Collections_Generic_IDictionary<string,_CommandEvent_Command>_TypeInfo;
  if ((unaff_x19[0xc] | 2) == 3) {
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    plVar10 = *(long **)(unaff_x20 + 0x38);
    uVar3 = FUN_07866938();
    uVar11 = *(undefined8 *)(unaff_x19 + 0xe);
    uVar4 = thunk_FUN_03ac74bc(*(undefined8 *)
                                System_Collections_Generic_ICollection<SerializationErrorCallback>_TypeInfo
                              );
    FUN_04962b78(uVar4,uVar11,
                 *(undefined8 *)
                  System_Collections_Generic_IEnumerable<ValueTuple<Type,_Type,_string>>_TypeInfo,0)
    ;
    uVar3 = FUN_044c97ac(uVar3,uVar4,
                         *(undefined8 *)
                          System_Collections_Generic_IDictionary<string,_StyleComplexSelector>_TypeInfo
                        );
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar7 = *plVar10;
    lVar6 = *(long *)puVar1;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar6) {
          puVar5 = (undefined8 *)(lVar7 + (long)(*piVar9 + 6) * 0x10 + 0x138);
          goto LAB_0786a0e0;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_03ac43c4(plVar10,lVar6,6);
LAB_0786a0e0:
    (*(code *)*puVar5)(plVar10,uVar3,puVar5[1]);
  }
  if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  plVar10 = *(long **)(unaff_x20 + 0x38);
  if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  lVar7 = *plVar10;
  lVar6 = *(long *)puVar1;
  uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == lVar6) {
        puVar5 = (undefined8 *)(lVar7 + (long)(*piVar9 + 2) * 0x10 + 0x138);
        goto LAB_0786a14c;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar5 = (undefined8 *)FUN_03ac43c4(plVar10,lVar6,2);
LAB_0786a14c:
  (*(code *)*puVar5)(plVar10,uVar2,puVar5[1]);
  puVar1 = System_Collections_Generic_HashSet<Text>_TypeInfo;
  *(undefined8 *)(unaff_x19 + 0xe) = 0;
  *unaff_x19 = 0xfffffffe;
  thunk_FUN_03afed3c(unaff_x19 + 0xe,0);
  if (*(int *)(*unaff_x26 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  FUN_05338ae8(unaff_x19 + 2,uVar2,*(undefined8 *)puVar1);
  return;
}


