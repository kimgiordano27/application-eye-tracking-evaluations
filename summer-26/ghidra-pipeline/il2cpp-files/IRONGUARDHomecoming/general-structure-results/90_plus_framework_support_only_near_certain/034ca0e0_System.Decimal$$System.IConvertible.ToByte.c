/*
FUNCTION_NAME: System.Decimal$$System.IConvertible.ToByte
ENTRY_POINT: 034ca0e0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 137
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x034ca1d8) */
/* WARNING: Removing unreachable block (ram,0x034ca1f8) */

uint System_Decimal__System_IConvertible_ToByte(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  ulong uVar7;
  int *piVar8;
  
  uVar3 = thunk_FUN_035652ac(param_1,param_2,0);
  FUN_03405678(*(undefined8 *)
                Method_Unity_VisualScripting_UnityOnDropdownValueChangedMessageListener_<Start>b__0_0__
               ,uVar3,0);
  lVar4 = System_Threading_OSSpecificSynchronizationContext__Post();
  plVar5 = (long *)thunk_FUN_01f117cc(*(undefined8 *)
                                       Method_System_Collections_Specialized_NameObjectCollectionBase_BaseAdd__
                                     );
  FUN_034d6264(plVar5,lVar4,1,3,0,0x1000,0x4000000,0);
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar3 = FUN_034128bc(lVar4,0);
  uVar2 = FUN_034d3ae4(uVar3,0);
  if (plVar5 != (long *)0x0) {
    lVar4 = *plVar5;
    uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
          puVar6 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_034ca1c4;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar1,0);
LAB_034ca1c4:
    (*(code *)*puVar6)(plVar5,puVar6[1]);
  }
  return (uVar2 ^ 1) & 1;
}


