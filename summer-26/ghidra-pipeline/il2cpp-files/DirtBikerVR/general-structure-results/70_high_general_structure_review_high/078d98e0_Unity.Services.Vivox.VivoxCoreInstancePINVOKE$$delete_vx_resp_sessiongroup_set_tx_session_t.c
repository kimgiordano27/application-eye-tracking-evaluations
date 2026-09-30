/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$delete_vx_resp_sessiongroup_set_tx_session_t
ENTRY_POINT: 078d98e0
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__delete_vx_resp_sessiongroup_set_tx_session_t
               (long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long in_x9;
  ulong uVar6;
  int *piVar7;
  
  if (in_x9 != 0) {
    piVar7 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == param_3) {
        puVar1 = (undefined8 *)(param_1 + (long)(*piVar7 + 6) * 0x10 + 0x138);
        goto LAB_078d9924;
      }
      in_x9 = in_x9 + -1;
      piVar7 = piVar7 + 4;
    } while (in_x9 != 0);
  }
  puVar1 = (undefined8 *)FUN_03ac43c4();
LAB_078d9924:
  plVar2 = (long *)(*(code *)*puVar1)();
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  lVar5 = *plVar2;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *(long *)Unity_Properties_ContainerPropertyBag<Vector3>_TypeInfo
         ) {
        puVar1 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_078d998c;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar1 = (undefined8 *)
           FUN_03ac43c4(plVar2,*(long *)Unity_Properties_ContainerPropertyBag<Vector3>_TypeInfo,0);
LAB_078d998c:
  lVar5 = (*(code *)*puVar1)(plVar2,puVar1[1]);
  if (lVar5 != 0) {
    return;
  }
  thunk_FUN_03af1434(System_Collections_Generic_List<PowertrainComponent>_TypeInfo);
  uVar3 = thunk_FUN_03ac74bc();
  uVar4 = thunk_FUN_03af1434(
                            System_Collections_Generic_List<ValueTuple<object,_ValueTuple<Type,_int>>>_TypeInfo
                            );
  FUN_078d8508(uVar3,0x5399,uVar4,0);
  uVar4 = thunk_FUN_03af1434(
                            System_Collections_ObjectModel_ReadOnlyDictionary<MetricId,_IEventMetric>_TypeInfo
                            );
                    /* WARNING: Subroutine does not return */
  FUN_03a8a884(uVar3,uVar4);
}


