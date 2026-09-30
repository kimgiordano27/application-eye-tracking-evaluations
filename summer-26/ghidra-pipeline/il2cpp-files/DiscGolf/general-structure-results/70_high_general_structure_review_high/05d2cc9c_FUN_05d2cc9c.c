/*
FUNCTION_NAME: FUN_05d2cc9c
ENTRY_POINT: 05d2cc9c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


long FUN_05d2cc9c(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
                    /* try { // try from 05d2cca8 to 05e2ccb3 has its CatchHandler @ 05d2cedc */
  if ((DAT_06dc2fa4 & 1) == 0) {
                    /* try { // try from 05d2ccc0 to 05e2ccdf has its CatchHandler @ 05d2cf00 */
    FUN_02d965b8(Method_UnityEngine_InputSystem_Utilities_InlinedArray<Action<char>>_Append__);
    DAT_06dc2fa4 = 1;
  }
  if (param_1 == 0) {
                    /* try { // try from 05d2cd28 to 05e2cd33 has its CatchHandler @ 05d2ce70 */
    uVar3 = thunk_FUN_02dfd288(
                              Method_System_Collections_Generic_KeyValuePair<Type,_XmlRootAttribute>__ctor__
                              );
                    /* try { // try from 05d2cd38 to 05e2cd43 has its CatchHandler @ 05d2ce6c */
    thunk_FUN_02dfd288(PTR_DAT_069ff9a8);
    uVar4 = thunk_FUN_02dd3144();
                    /* try { // try from 05d2cd48 to 05e2cd4b has its CatchHandler @ 05d2cfc4 */
                    /* try { // try from 05d2cd4c to 05e2cd4f has its CatchHandler @ 05d2cfa0 */
                    /* try { // try from 05d2cd50 to 05e2cd53 has its CatchHandler @ 05d2cfc0 */
    FUN_05453ed4(uVar4,param_2,uVar3,0);
                    /* try { // try from 05d2cd5c to 05e2cd97 has its CatchHandler @ 05d2cf90 */
    uVar3 = thunk_FUN_02dfd288(
                              Method_System_Collections_Generic_KeyValuePair<Type,_XmlRootAttribute>_get_Key__
                              );
                    /* WARNING: Subroutine does not return */
    FUN_02d96724(uVar4,uVar3);
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    thunk_FUN_02dfd288(PTR_DAT_06a0ac70);
    uVar3 = thunk_FUN_02dd3144();
    puVar5 = Method_System_Collections_Generic_KeyValuePair<Type,_XmlRootAttribute>_get_Value__;
  }
  else {
    lVar1 = FUN_05371f5c(param_1,0);
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    if (*(int *)(lVar1 + 0x10) == 0) {
      thunk_FUN_02dfd288(PTR_DAT_06a0ac70);
      uVar3 = thunk_FUN_02dd3144();
      puVar5 = 
      Method_System_Collections_Generic_KeyValuePair<Type,_CAPI_ovrAvatar2ExperimentalEventPayloadTypeId>_get_Key__
      ;
    }
    else {
      if (*(int *)(*(long *)
                    Method_UnityEngine_InputSystem_Utilities_InlinedArray<Action<char>>_Append__ +
                  0xe4) == 0) {
        thunk_FUN_02df485c();
      }
                    /* try { // try from 05d2cd10 to 05e2cd17 has its CatchHandler @ 05d2ce74 */
      uVar2 = FUN_05d174e8(lVar1);
      if ((uVar2 & 1) != 0) {
        return lVar1;
      }
      thunk_FUN_02dfd288(PTR_DAT_06a0ac70);
      uVar3 = thunk_FUN_02dd3144();
      puVar5 = 
      Method_System_Collections_Generic_KeyValuePair<Type,_CAPI_ovrAvatar2ExperimentalEventPayloadTypeId>_get_Value__
      ;
    }
  }
  uVar4 = thunk_FUN_02dfd288(puVar5);
  FUN_0544bfcc(uVar3,uVar4,param_2,0);
  uVar4 = thunk_FUN_02dfd288(
                            Method_System_Collections_Generic_KeyValuePair<Type,_XmlRootAttribute>_get_Key__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_02d96724(uVar3,uVar4);
}


