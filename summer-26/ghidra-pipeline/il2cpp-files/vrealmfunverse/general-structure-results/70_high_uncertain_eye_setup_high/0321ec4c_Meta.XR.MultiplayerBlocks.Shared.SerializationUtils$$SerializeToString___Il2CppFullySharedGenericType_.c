/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.SerializationUtils$$SerializeToString<__Il2CppFullySharedGenericType>
ENTRY_POINT: 0321ec4c
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


void Meta_XR_MultiplayerBlocks_Shared_SerializationUtils__SerializeToString<__Il2CppFullySharedGenericType>
               (long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *in_x9;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar4 = *in_x9;
  if (*(int *)(*(long *)(param_1 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  FUN_04d8a7b0(uVar4,0);
  if (*(int *)(*(long *)PTR_DAT_0631e258 + 0xe4) == 0) {
    thunk_FUN_02b9ad44(*(long *)PTR_DAT_0631e258);
  }
                    /* try { // try from 0321ec90 to 0331ec9f has its CatchHandler @ 0321ecd0 */
  plVar1 = (long *)thunk_FUN_02b488f8();
  lVar3 = *(long *)(*(long *)(unaff_x20 + 0x38) + 8);
                    /* try { // try from 0321eca8 to 0331ecaf has its CatchHandler @ 0321eccc */
                    /* try { // try from 0321ecb0 to 0331eceb has its CatchHandler @ 0321ec2c */
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02b76218(lVar3);
  }
  if (plVar1 != (long *)0x0) {
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 0321eca8 with catch @ 0321eccc
                        */
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 0321ec90 with catch @ 0321ecd0
                        */
    if (*(long *)(*plVar1 + 0x40) == *(long *)(lVar3 + 0x40)) {
      puVar2 = (undefined8 *)thunk_FUN_02b7978c();
      uVar5 = *puVar2;
      uVar4 = puVar2[2];
                    /* try { // try from 0321ecec to 0331ecef has its CatchHandler @ 0321ed08 */
      unaff_x19[1] = puVar2[1];
      *unaff_x19 = uVar5;
                    /* try { // try from 0321ecf0 to 0331ed0b has its CatchHandler @ 0321ec2c */
      unaff_x19[2] = uVar4;
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_02b3ce44(plVar1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


