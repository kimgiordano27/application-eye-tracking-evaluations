/*
FUNCTION_NAME: Oculus.Platform.MessageWithLaunchFriendRequestFlowResult$$GetDataFromMessage
ENTRY_POINT: 0330d638
PROGRAM: gunraiders-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_1;ray_or_cast_sink_hits_1;telemetry_or_network_hits_2
*/


long Oculus_Platform_MessageWithLaunchFriendRequestFlowResult__GetDataFromMessage(void)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long lVar6;
  uint unaff_w23;
  uint unaff_w24;
  
  do {
    lVar6 = unaff_x21;
    uVar3 = FUN_0320eab4(unaff_x20,0,0);
    if ((uVar3 & 1) != 0) {
                    /* try { // try from 0330d690 to 0340d69f has its CatchHandler @ 0330d8f4 */
      uVar4 = thunk_FUN_01c273e8(
                                DarkTonic_MasterAudio_PlaylistController_PlaylistEndedEventHandler_TypeInfo
                                );
      uVar4 = FUN_03313b64(uVar4,0);
      thunk_FUN_01c273e8(OVRRaycaster_<>c_TypeInfo);
                    /* try { // try from 0330d6b0 to 0340d6bf has its CatchHandler @ 0330d884 */
      uVar5 = thunk_FUN_01c496e0();
      FUN_0320e3ec(uVar5,uVar4,0);
      uVar4 = thunk_FUN_01c273e8(
                                Method_System_Collections_Generic_Dictionary<Toggle,_TabViewManager_Tab>__ctor__
                                );
                    /* WARNING: Subroutine does not return */
      FUN_01c5d37c(uVar5,uVar4);
    }
    do {
      unaff_w23 = unaff_w23 + 1;
      if ((int)*(uint *)(unaff_x19 + 0x18) <= (int)unaff_w23) {
        return lVar6;
      }
      if (*(uint *)(unaff_x19 + 0x18) <= unaff_w23) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4ac();
      }
      unaff_x21 = *(long *)(unaff_x19 + (long)(int)unaff_w23 * 8 + 0x20);
      if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      uVar1 = thunk_FUN_0321c034(unaff_x21,0);
      uVar2 = thunk_FUN_0321c034(unaff_x21,0);
      unaff_x20 = lVar6;
    } while ((uVar1 & unaff_w24) != uVar2);
  } while( true );
}


