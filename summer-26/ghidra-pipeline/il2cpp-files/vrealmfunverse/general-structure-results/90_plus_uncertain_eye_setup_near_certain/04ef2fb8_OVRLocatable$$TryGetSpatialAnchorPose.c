/*
FUNCTION_NAME: OVRLocatable$$TryGetSpatialAnchorPose
ENTRY_POINT: 04ef2fb8
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 172
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ray_interaction;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_3;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_3;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_1;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_eye_api_context_without_clear_sink_hits_1
*/


void OVRLocatable__TryGetSpatialAnchorPose(void)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long unaff_x19;
  undefined8 in_stack_00000000;
  undefined8 *in_stack_00000008;
  undefined8 in_stack_00000010;
  ulong in_stack_00000018;
  undefined8 in_stack_00000020;
  long in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 *in_stack_00000048;
  undefined8 in_stack_00000050;
  ulong in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 *in_stack_00000068;
  undefined8 in_stack_00000070;
  ulong in_stack_00000078;
  undefined4 uStack0000000000000080;
  undefined4 uStack0000000000000084;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  ulong in_stack_000000a8;
  undefined4 uStack00000000000000b0;
  undefined4 uStack00000000000000b4;
  
  puVar2 = System_Action<PathOptions,_Tween,_Quaternion,_Transform>_TypeInfo;
  puVar1 = 
  System_Action<XRHandSubsystem,_XRHandSubsystem_UpdateSuccessFlags,_XRHandSubsystem_UpdateType>_TypeInfo
  ;
  FUN_0378667c();
  _uStack00000000000000b0 = in_stack_00000020;
  in_stack_00000098 = in_stack_00000008;
  in_stack_00000090 = in_stack_00000000;
  in_stack_000000a8 = in_stack_00000018;
  in_stack_000000a0 = in_stack_00000010;
  while( true ) {
    uVar3 = FUN_0472788c(&stack0x00000090,*(undefined8 *)puVar2);
    if ((uVar3 & 1) == 0) {
      FUN_04727888(&stack0x00000090,*(undefined8 *)puVar1);
      puVar2 = System_Action<PhysicsScene,_IntPtr,_int,_bool>_TypeInfo;
      puVar1 = 
      System_Data_Listeners_Action<DataViewListener,_DataViewListener,_ListChangedEventArgs,_bool,_bool>_TypeInfo
      ;
      in_stack_00000008 = &stack0x00000090;
      if (*(long *)(unaff_x19 + 0x30) != 0) {
                    /* try { // try from 04ef303c to 04ff304b has its CatchHandler @ 04ef30c8 */
                    /* try { // try from 04ef3050 to 04ff3053 has its CatchHandler @ 04ef30c4 */
        FUN_03780f78(*(long *)(unaff_x19 + 0x30),
                     *(undefined8 *)
                      System_Action<ulong,_bool,_OVRSpace,_Guid,_OVRPlugin_SpaceComponentType,_bool>_TypeInfo
                    );
                    /* try { // try from 04ef305c to 04ff3077 has its CatchHandler @ 04ef30cc */
        _uStack0000000000000080 = in_stack_00000020;
        in_stack_00000008 = &stack0x00000060;
        in_stack_00000060 = 0;
        in_stack_00000078 = in_stack_00000018;
        in_stack_00000070 = in_stack_00000010;
        in_stack_00000068 = &stack0x00000090;
                    /* try { // try from 04ef3078 to 04ff30bb has its CatchHandler @ 04ef2f5c */
        while (uVar3 = FUN_04727454(&stack0x00000060,*(undefined8 *)puVar2), (uVar3 & 1) != 0) {
          if (*(long *)(unaff_x19 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cac4();
          }
          FUN_05c5610c(in_stack_00000078 & 0xffffffff,in_stack_00000078._4_4_,uStack0000000000000080
                       ,uStack0000000000000084,*(long *)(unaff_x19 + 0x48),in_stack_00000070,0);
        }
        FUN_04727450(&stack0x00000060,*(undefined8 *)puVar1);
      }
      puVar2 = 
      System_Data_Listeners_Action<DataViewListener,_DataViewListener,_ListChangedType,_DataRow,_bool>_TypeInfo
      ;
      puVar1 = System_Action<TrackAsset,_GameObject,_Playable>_TypeInfo;
      if (*(long *)(unaff_x19 + 0x38) != 0) {
                    /* try { // try from 04ef30bc to 04ff30bf has its CatchHandler @ 04ef30cc */
                    /* try { // try from 04ef30c0 to 04ff30e7 has its CatchHandler @ 04ef2f5c */
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 04ef3050 with catch @ 04ef30c4
                        */
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 04ef303c with catch @ 04ef30c8
                        */
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 04ef305c with catch @ 04ef30cc
                       catch(type#1 @ 05fbf508) { ... } // from try @ 04ef30bc with catch @ 04ef30cc
                        */
        FUN_03783a98(*(long *)(unaff_x19 + 0x38),
                     *(undefined8 *)
                      System_Action<IntPtr,_IntPtr,_IntPtr,_IntPtr,_IntPtr,_IntPtr,_int,_Action<TransformDispatchData>>_TypeInfo
                    );
        in_stack_00000048 = in_stack_00000008;
        in_stack_00000040 = 0;
        in_stack_00000058 = in_stack_00000018;
        in_stack_00000050 = in_stack_00000010;
        while (uVar3 = FUN_04727680(&stack0x00000040,*(undefined8 *)puVar2), (uVar3 & 1) != 0) {
          if (*(long *)(unaff_x19 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cac4();
          }
          FUN_05c56050(in_stack_00000058 & 0xffffffff,*(long *)(unaff_x19 + 0x48),in_stack_00000050,
                       0);
        }
        FUN_0472767c(&stack0x00000040,*(undefined8 *)puVar1);
      }
      puVar2 = PTR_DAT_06318fe8;
      puVar1 = PTR_DAT_06318fe0;
      if (*(long *)(unaff_x19 + 0x20) != 0) {
        FUN_037a6fdc(&stack0x00000028,*(long *)(unaff_x19 + 0x20),*(undefined8 *)PTR_DAT_06319010);
        while (uVar3 = FUN_0472eaf4(&stack0x00000028,*(undefined8 *)puVar2), (uVar3 & 1) != 0) {
          if (in_stack_00000038 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cac4();
          }
          thunk_FUN_05c56aec();
        }
        FUN_0472eaf0(&stack0x00000028,*(undefined8 *)puVar1);
      }
      return;
    }
    if (*(long *)(unaff_x19 + 0x48) == 0) break;
    FUN_05c560b8(in_stack_000000a8 & 0xffffffff,in_stack_000000a8._4_4_,uStack00000000000000b0,
                 uStack00000000000000b4,*(long *)(unaff_x19 + 0x48),in_stack_000000a0,0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


