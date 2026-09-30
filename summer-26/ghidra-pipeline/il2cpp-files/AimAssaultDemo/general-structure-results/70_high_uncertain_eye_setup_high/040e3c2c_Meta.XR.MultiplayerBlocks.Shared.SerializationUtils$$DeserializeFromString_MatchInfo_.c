/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.SerializationUtils$$DeserializeFromString<MatchInfo>
ENTRY_POINT: 040e3c2c
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 70
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MultiplayerBlocks_Shared_SerializationUtils__DeserializeFromString<MatchInfo>
               (long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  if (*(int *)(param_1 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
                    /* try { // try from 040e3c3c to 041e3c3f has its CatchHandler @ 040e3c68 */
                    /* try { // try from 040e3c40 to 041e3c77 has its CatchHandler @ 040e3aac */
  plVar1 = (long *)thunk_FUN_03747dd4();
  lVar3 = *(long *)(*(long *)(unaff_x20 + 0x38) + 8);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03775678(lVar3);
  }
                    /* catch() { ... } // from try @ 040e3c3c with catch @ 040e3c68 */
  if (plVar1 != (long *)0x0) {
                    /* try { // try from 040e3c78 to 041e3c7f has its CatchHandler @ 040e3c94 */
    if (*(long *)(*plVar1 + 0x40) == *(long *)(lVar3 + 0x40)) {
                    /* try { // try from 040e3c80 to 041e3c8b has its CatchHandler @ 040e3aac */
      puVar2 = (undefined8 *)thunk_FUN_03778a20(plVar1);
      uVar4 = puVar2[4];
      uVar8 = puVar2[1];
      uVar7 = *puVar2;
                    /* try { // try from 040e3c8c to 041e3c93 has its CatchHandler @ 040e3c94 */
      uVar6 = puVar2[3];
      uVar5 = puVar2[2];
                    /* catch(type#2 @ 00000000) { ... } // from try @ 040e3c78 with catch @ 040e3c94
                       catch(type#2 @ 00000000) { ... } // from try @ 040e3c8c with catch @ 040e3c94
                        */
      FUN_061622a0(&stack0x00000038,0);
      unaff_x19[4] = uVar4;
      unaff_x19[1] = uVar8;
      *unaff_x19 = uVar7;
      unaff_x19[3] = uVar6;
      unaff_x19[2] = uVar5;
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_0373bb54(plVar1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


