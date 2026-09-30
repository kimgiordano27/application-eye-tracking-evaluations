/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.SerializationUtils$$DeserializeFromString<__Il2CppFullySharedGenericType>
ENTRY_POINT: 0321e36c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 70
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MultiplayerBlocks_Shared_SerializationUtils__DeserializeFromString<__Il2CppFullySharedGenericType>
               (void)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined8 uVar5;
  
  plVar1 = (long *)thunk_FUN_02b488f8();
                    /* catch() { ... } // from try @ 0321e364 with catch @ 0321e380 */
                    /* try { // try from 0321e384 to 0331e38b has its CatchHandler @ 0321e394 */
  lVar3 = *(long *)(*(long *)(unaff_x20 + 0x38) + 8);
                    /* try { // try from 0321e38c to 0331e397 has its CatchHandler @ 0321e2a4 */
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0321e384 with catch @ 0321e394
                        */
                    /* try { // try from 0321e398 to 0331e3fb has its CatchHandler @ 0321e398
                       catch() { ... } // from try @ 0321e398 with catch @ 0321e398
                       catch() { ... } // from try @ 0321e41c with catch @ 0321e398
                       catch() { ... } // from try @ 0321e45c with catch @ 0321e398
                       catch() { ... } // from try @ 0321e480 with catch @ 0321e398 */
    lVar3 = FUN_02b76218(lVar3);
  }
  if (plVar1 != (long *)0x0) {
    if (*(long *)(*plVar1 + 0x40) == *(long *)(lVar3 + 0x40)) {
      puVar2 = (undefined8 *)thunk_FUN_02b7978c();
      uVar5 = *puVar2;
      uVar4 = puVar2[2];
      unaff_x19[1] = puVar2[1];
      *unaff_x19 = uVar5;
      unaff_x19[2] = uVar4;
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_02b3ce44(plVar1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


