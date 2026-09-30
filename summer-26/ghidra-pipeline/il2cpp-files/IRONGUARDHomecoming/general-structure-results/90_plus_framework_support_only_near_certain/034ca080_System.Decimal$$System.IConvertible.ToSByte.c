/*
FUNCTION_NAME: System.Decimal$$System.IConvertible.ToSByte
ENTRY_POINT: 034ca080
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 153
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;telemetry;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;ray_or_cast_sink_hits_1;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x034ca1d8) */
/* WARNING: Removing unreachable block (ram,0x034ca1f8) */

uint System_Decimal__System_IConvertible_ToSByte(void)

{
  undefined *puVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  ulong uVar8;
  int *piVar9;
  long *unaff_x19;
  long unaff_x20;
  
  thunk_FUN_01efb3a4(
                    Method_Unity_VisualScripting_UnityOnDropdownValueChangedMessageListener_<Start>b__0_0__
                    );
  thunk_FUN_01efb3a4(Method_UnityEngine_GameObject_GetComponentInChildren<Collider>__);
  *(undefined1 *)(unaff_x20 + 0xcec) = 1;
  if (*(int *)(*unaff_x19 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar3 = FUN_034e48b8(0);
  FUN_03563414(0);
  uVar4 = thunk_FUN_035652ac();
  uVar4 = FUN_03405678(*(undefined8 *)
                        Method_Unity_VisualScripting_UnityOnDropdownValueChangedMessageListener_<Start>b__0_0__
                       ,uVar4,0);
  lVar5 = System_Threading_OSSpecificSynchronizationContext__Post(uVar3,uVar4,0);
  plVar6 = (long *)thunk_FUN_01f117cc(*(undefined8 *)
                                       Method_System_Collections_Specialized_NameObjectCollectionBase_BaseAdd__
                                     );
  FUN_034d6264(plVar6,lVar5,1,3,0,0x1000,0x4000000,0);
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar3 = FUN_034128bc(lVar5,0);
  uVar2 = FUN_034d3ae4(uVar3,0);
  if (plVar6 != (long *)0x0) {
    lVar5 = *plVar6;
    uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
          puVar7 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_034ca1c4;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar7 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar1,0);
LAB_034ca1c4:
    (*(code *)*puVar7)(plVar6,puVar7[1]);
  }
  return (uVar2 ^ 1) & 1;
}


