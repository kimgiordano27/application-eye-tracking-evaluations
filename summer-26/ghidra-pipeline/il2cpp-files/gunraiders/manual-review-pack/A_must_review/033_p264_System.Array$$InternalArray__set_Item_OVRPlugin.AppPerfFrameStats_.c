/*
FUNCTION_NAME: System.Array$$InternalArray__set_Item<OVRPlugin.AppPerfFrameStats>
ENTRY_POINT: 021b4bb8
PROGRAM: gunraiders-libil2cpp.so
SCORE: 139
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_1;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_1
*/


void System_Array__InternalArray__set_Item<OVRPlugin_AppPerfFrameStats>(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long *in_x9;
  long unaff_x19;
  byte bStack0000000000000004;
  byte in_stack_00000008;
  byte bStack000000000000000c;
  
  if (*(int *)(*in_x9 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  uVar2 = FUN_03566d8c(0);
  if (*(uint *)(unaff_x19 + 0x18) < 2) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4ac();
  }
  *(undefined8 *)(unaff_x19 + 0x28) = uVar2;
  if (*(uint *)(unaff_x19 + 0x18) == 2) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4ac();
  }
  *(undefined8 *)(unaff_x19 + 0x30) = *(undefined8 *)System_Collections_IDictionary_TypeInfo;
  uVar2 = FUN_021b4854();
  if (*(uint *)(unaff_x19 + 0x18) < 4) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4ac();
  }
  *(undefined8 *)(unaff_x19 + 0x38) = uVar2;
  if (*(uint *)(unaff_x19 + 0x18) == 4) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4ac();
  }
  *(undefined8 *)(unaff_x19 + 0x40) = *(undefined8 *)System_ComponentModel_Design_IDesigner_TypeInfo
  ;
  uVar2 = FUN_03567278(0);
  if (*(uint *)(unaff_x19 + 0x18) < 6) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4ac();
  }
  *(undefined8 *)(unaff_x19 + 0x48) = uVar2;
  if (*(uint *)(unaff_x19 + 0x18) == 6) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4ac();
  }
  *(undefined8 *)(unaff_x19 + 0x50) = *(undefined8 *)PTR_DAT_04231e50;
  bStack000000000000000c = FUN_03567334(0);
  puVar1 = PTR_DAT_0422fa08;
  bStack000000000000000c = bStack000000000000000c & 1;
  uVar2 = thunk_FUN_01c49334(*(undefined8 *)PTR_DAT_0422fa08,&stack0x0000000c);
  uVar2 = System_Convert__ToSingle
                    (*(undefined8 *)Unity_Services_Analytics_Internal_IDiskCache_TypeInfo,uVar2,0);
  if (7 < *(uint *)(unaff_x19 + 0x18)) {
    *(undefined8 *)(unaff_x19 + 0x58) = uVar2;
    in_stack_00000008 = FUN_035684d8(0);
    in_stack_00000008 = in_stack_00000008 & 1;
    uVar2 = thunk_FUN_01c49334(*(undefined8 *)puVar1,&stack0x00000008);
    uVar2 = System_Convert__ToSingle
                      (*(undefined8 *)System_ComponentModel_Design_IDesignerHost_TypeInfo,uVar2,0);
    if (*(uint *)(unaff_x19 + 0x18) < 9) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4ac();
    }
    *(undefined8 *)(unaff_x19 + 0x60) = uVar2;
    uVar2 = FUN_0356796c(0);
    uVar2 = System_Convert__ToSingle
                      (*(undefined8 *)System_ComponentModel_Design_IDictionaryService_TypeInfo,uVar2
                       ,0);
    if (*(uint *)(unaff_x19 + 0x18) < 10) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4ac();
    }
    *(undefined8 *)(unaff_x19 + 0x68) = uVar2;
    bStack0000000000000004 = FUN_03568cd0(0);
    bStack0000000000000004 = bStack0000000000000004 & 1;
    uVar2 = thunk_FUN_01c49334(*(undefined8 *)puVar1,&stack0x00000004);
    uVar2 = System_Convert__ToSingle
                      (*(undefined8 *)System_Collections_IDictionaryEnumerator_TypeInfo,uVar2,0);
    if (*(uint *)(unaff_x19 + 0x18) < 0xb) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4ac();
    }
    *(undefined8 *)(unaff_x19 + 0x70) = uVar2;
    uVar2 = FUN_03562cf4(0);
    uVar2 = System_Convert__ToSingle
                      (*(undefined8 *)UnityEngine_EventSystems_IDeselectHandler_TypeInfo,uVar2,0);
    if (0xb < *(uint *)(unaff_x19 + 0x18)) {
      *(undefined8 *)(unaff_x19 + 0x78) = uVar2;
      uVar2 = FUN_031533cc();
      FUN_020f0d68(uVar2,0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4ac();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4ac();
}


