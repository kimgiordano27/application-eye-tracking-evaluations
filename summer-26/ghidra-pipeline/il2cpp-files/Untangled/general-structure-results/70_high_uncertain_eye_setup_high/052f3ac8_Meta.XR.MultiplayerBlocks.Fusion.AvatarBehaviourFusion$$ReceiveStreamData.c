/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Fusion.AvatarBehaviourFusion$$ReceiveStreamData
ENTRY_POINT: 052f3ac8
PROGRAM: Untangled-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MultiplayerBlocks_Fusion_AvatarBehaviourFusion__ReceiveStreamData(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long unaff_x19;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  long in_stack_00000010;
  undefined8 uStack0000000000000018;
  undefined8 uStack0000000000000020;
  long lStack0000000000000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  long in_stack_00000040;
  
  puVar5 = PTR_DAT_06d3ded0;
  puVar4 = PTR_DAT_06d3dec0;
  puVar3 = PTR_DAT_06d3deb8;
  puVar2 = PTR_DAT_06d12fc8;
  puVar1 = PTR_DAT_06d12fa8;
  uStack0000000000000018 = 0;
  uStack0000000000000020 = 0;
  lStack0000000000000028 = 0;
  if (*(long *)(unaff_x19 + 0x28) != 0) {
                    /* try { // try from 052f3ae0 to 053f3ae3 has its CatchHandler @ 052f3aec */
                    /* try { // try from 052f3ae4 to 053f3b0b has its CatchHandler @ 052f3a24 */
                    /* catch(type#1 @ 069384f8) { ... } // from try @ 052f3ae0 with catch @ 052f3aec
                        */
                    /* catch(type#1 @ 069384f8) { ... } // from try @ 052f3aa0 with catch @ 052f3af0
                        */
                    /* catch(type#1 @ 069384f8) { ... } // from try @ 052f3a7c with catch @ 052f3af4
                        */
                    /* try { // try from 052f3b0c to 053f3b0f has its CatchHandler @ 052f3b20 */
    FUN_052421e8(*(long *)(unaff_x19 + 0x28),*(undefined8 *)PTR_DAT_06d12fb8);
    in_stack_00000038 = in_stack_00000008;
    in_stack_00000030 = in_stack_00000000;
                    /* catch() { ... } // from try @ 052f3b0c with catch @ 052f3b20 */
    in_stack_00000040 = in_stack_00000010;
                    /* try { // try from 052f3b30 to 053f3b37 has its CatchHandler @ 052f3b4c */
    while (uVar6 = System_Collections_Generic_EqualityComparer<OVRTask_CallbackWithState<Int32Enum,_OVRTask_CombinedTaskDataWithCompletedTaskId<Int32Enum>>>__get_Default
                             (&stack0x00000030,*(undefined8 *)puVar1), (uVar6 & 1) != 0) {
                    /* try { // try from 052f3b38 to 053f3b43 has its CatchHandler @ 052f3a24 */
      if (in_stack_00000040 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
                    /* try { // try from 052f3b44 to 053f3b4b has its CatchHandler @ 052f3b4c */
      FUN_066c9b04(in_stack_00000040,1,0);
    }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 052f3b30 with catch @ 052f3b4c
                       catch(type#2 @ 00000000) { ... } // from try @ 052f3b44 with catch @ 052f3b4c
                        */
    FUN_04df65b0(&stack0x00000030,*(undefined8 *)puVar2);
    if (*(long *)(unaff_x19 + 0x30) != 0) {
      FUN_052421e8(&stack0x00000018,*(long *)(unaff_x19 + 0x30),*(undefined8 *)puVar5);
      while( true ) {
        uVar6 = System_Collections_Generic_EqualityComparer<OVRTask_CallbackWithState<Int32Enum,_OVRTask_CombinedTaskDataWithCompletedTaskId<Int32Enum>>>__get_Default
                          (&stack0x00000018,*(undefined8 *)puVar4);
        if ((uVar6 & 1) == 0) {
          FUN_04df65b0(&stack0x00000018,*(undefined8 *)puVar3);
          return;
        }
        if (lStack0000000000000028 == 0) break;
        FUN_066a1214(lStack0000000000000028,0,0);
      }
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


