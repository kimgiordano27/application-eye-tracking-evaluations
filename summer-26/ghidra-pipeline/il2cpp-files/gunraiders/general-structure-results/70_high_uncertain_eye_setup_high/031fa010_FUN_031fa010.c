/*
FUNCTION_NAME: FUN_031fa010
ENTRY_POINT: 031fa010
PROGRAM: gunraiders-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_031fa010(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = 
  VoxelBusters_EssentialKit_NotificationServicesCore_Android_NotificationCenterInterface_<>c__DisplayClass12_0_TypeInfo
  ;
                    /* catch() { ... } // from try @ 031f9ffc with catch @ 031fa02c */
  if ((DAT_045326fb & 1) == 0) {
                    /* try { // try from 031fa030 to 032fa03b has its CatchHandler @ 031fa050 */
    FUN_01c5d288(
                System_Linq_Expressions_Interpreter_NullableMethodCallInstruction_GetHashCodeClass_TypeInfo
                );
                    /* try { // try from 031fa03c to 032fa047 has its CatchHandler @ 031f9fac */
    FUN_01c5d288(
                VoxelBusters_EssentialKit_NotificationServicesCore_Android_NotificationCenterInterface_<>c__DisplayClass12_0_TypeInfo
                );
                    /* try { // try from 031fa048 to 032fa04f has its CatchHandler @ 031fa050 */
    DAT_045326fb = 1;
  }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 031fa030 with catch @ 031fa050
                       catch(type#2 @ 00000000) { ... } // from try @ 031fa048 with catch @ 031fa050
                        */
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
    lVar2 = *(long *)puVar1;
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 8);
  thunk_FUN_01c21c38();
  if (lVar2 == 0) {
    uVar3 = thunk_FUN_01c496e0(*(undefined8 *)
                                System_Linq_Expressions_Interpreter_NullableMethodCallInstruction_GetHashCodeClass_TypeInfo
                              );
    FUN_031eb854(uVar3,0);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    thunk_FUN_01c21c38();
    lVar2 = *(long *)puVar1;
    *(undefined8 *)(*(long *)(lVar2 + 0xb8) + 8) = uVar3;
  }
  else {
    lVar2 = *(long *)puVar1;
  }
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
    lVar2 = *(long *)puVar1;
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 8);
  thunk_FUN_01c21c38();
  if (lVar2 != 0) {
    FUN_031eb884(lVar2,param_1,0);
    lVar2 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
    thunk_FUN_01c21c38();
    if (lVar2 != 0) {
      FUN_031eb888(lVar2,0);
      if (*(long *)(param_1 + 0x40) != 0) {
        if (*(int *)(*(long *)(param_1 + 0x40) + 0x20) < 1) {
          return;
        }
        uVar3 = thunk_FUN_01c273e8(OVRPlugin_OVRP_1_29_0_TypeInfo);
        uVar3 = FUN_03313b64(uVar3,0);
        thunk_FUN_01c273e8(ExitGames_Client_Photon_Protocol16_TypeInfo);
        uVar4 = thunk_FUN_01c496e0();
        FUN_031dce5c(uVar4,uVar3,0);
        uVar3 = thunk_FUN_01c273e8(OVRPlugin_OVRP_1_47_0_TypeInfo);
                    /* WARNING: Subroutine does not return */
        FUN_01c5d37c(uVar4,uVar3);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


