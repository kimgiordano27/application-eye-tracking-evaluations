/*
FUNCTION_NAME: FUN_05d0ba00
ENTRY_POINT: 05d0ba00
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 121
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_8;validity_or_gating_hits_8;telemetry_or_network_hits_2;functionality_permission_setup;functionality_data_collection_or_telemetry_hits_2
*/


long * FUN_05d0ba00(long param_1)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long local_18;
  
  if ((DAT_06dc2e7a & 1) == 0) {
    FUN_02d965b8(Method_System_Collections_Generic_Dictionary<Type,_IMetrics>__ctor__);
    FUN_02d965b8(Newtonsoft_Json_Utilities_LateBoundReflectionDelegateFactory_TypeInfo);
    FUN_02d965b8(Method_System_Collections_Generic_HashSet<OVRPermissionsRequester_Permission>_Add__
                );
    FUN_02d965b8(Method_System_Collections_Generic_HashSet<OVRPlugin_SpaceComponentType>_Add__);
    DAT_06dc2e7a = 1;
  }
  local_18 = 0;
  if (param_1 == 0) {
    thunk_FUN_02dfd288(PTR_DAT_069ff9a8);
    uVar7 = thunk_FUN_02dd3144();
    uVar5 = thunk_FUN_02dfd288(
                              Method_System_Collections_Generic_HashSet<OvrAvatarShaderNameUtils_KnownShader>__ctor__
                              );
    FUN_0544bf54(uVar7,uVar5,0);
LAB_05d0bbb4:
    uVar5 = thunk_FUN_02dfd288(
                              Method_System_Collections_Generic_HashSet<OVRManager_EventListener>_Remove__
                              );
                    /* WARNING: Subroutine does not return */
    FUN_02d96724(uVar7,uVar5);
  }
                    /* try { // try from 05d0ba64 to 05e0ba7f has its CatchHandler @ 05d0bb3c */
  uVar1 = thunk_FUN_0536b75c(param_1,*(undefined8 *)
                                      Method_System_Collections_Generic_HashSet<OVRPlugin_SpaceComponentType>_Add__
                             ,0);
                    /* try { // try from 05d0ba8c to 05e0ba8f has its CatchHandler @ 05d0bb38 */
  if (((uVar1 & 1) != 0) ||
     (uVar1 = thunk_FUN_0536b75c(param_1,*(undefined8 *)
                                          Method_System_Collections_Generic_HashSet<OVRPermissionsRequester_Permission>_Add__
                                 ,0), (uVar1 & 1) != 0)) {
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 05d0ba64 with catch @ 05d0bb3c
                        */
    thunk_FUN_02dfd288(PTR_DAT_06a0ac70);
    uVar7 = thunk_FUN_02dd3144();
                    /* try { // try from 05d0bb58 to 05e0bb5b has its CatchHandler @ 05d0bb64 */
    uVar5 = thunk_FUN_02dfd288(
                              Method_System_Collections_Generic_HashSet<OVRPlugin_SpaceComponentType>_GetEnumerator__
                              );
                    /* catch() { ... } // from try @ 05d0bb58 with catch @ 05d0bb64 */
                    /* try { // try from 05d0bb68 to 05e0bb6f has its CatchHandler @ 05d0bb78 */
    uVar6 = thunk_FUN_02dfd288(
                              Method_System_Collections_Generic_HashSet<OvrAvatarShaderNameUtils_KnownShader>__ctor__
                              );
                    /* try { // try from 05d0bb70 to 05e0bb7b has its CatchHandler @ 05d0b9d8 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 05d0bb68 with catch @ 05d0bb78
                        */
    FUN_0544bfcc(uVar7,uVar5,uVar6,0);
    goto LAB_05d0bbb4;
  }
  if (0 < *(int *)(param_1 + 0x10)) {
                    /* try { // try from 05d0baa0 to 05e0baa3 has its CatchHandler @ 05d0bb34 */
    if (*(int *)(*(long *)Newtonsoft_Json_Utilities_LateBoundReflectionDelegateFactory_TypeInfo +
                0xe4) == 0) {
                    /* try { // try from 05d0bab0 to 05e0bab3 has its CatchHandler @ 05d0bb30 */
      thunk_FUN_02df485c();
    }
                    /* try { // try from 05d0bab4 to 05e0baf7 has its CatchHandler @ 05d0b9d8 */
    uVar1 = FUN_05cd6fb0(param_1,&local_18,0);
    if ((uVar1 & 1) != 0) {
      plVar2 = (long *)FUN_02d966a4(*(undefined8 *)
                                     Method_System_Collections_Generic_Dictionary<Type,_IMetrics>__ctor__
                                    ,1);
      lVar4 = local_18;
      if (plVar2 != (long *)0x0) {
                    /* try { // try from 05d0baf8 to 05e0bb13 has its CatchHandler @ 05d0bb34 */
        if ((local_18 != 0) &&
           (lVar3 = thunk_FUN_02dd3048(local_18,*(undefined8 *)(*plVar2 + 0x40)), lVar3 == 0)) {
          uVar7 = thunk_FUN_02de0bec();
                    /* WARNING: Subroutine does not return */
          FUN_02d96724(uVar7,0);
        }
        if ((int)plVar2[3] != 0) {
          plVar2[4] = lVar4;
                    /* try { // try from 05d0bb14 to 05e0bb57 has its CatchHandler @ 05d0b9d8 */
          LeanTween__value(plVar2 + 4,lVar4);
          return plVar2;
        }
                    /* WARNING: Subroutine does not return */
        FUN_02d96868();
      }
      goto LAB_05d0bbcc;
    }
  }
  lVar4 = FUN_05d0b744(param_1);
  if (lVar4 != 0) {
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 05d0bab0 with catch @ 05d0bb30
                        */
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 05d0baa0 with catch @ 05d0bb34
                       catch(type#1 @ 066567d8) { ... } // from try @ 05d0baf8 with catch @ 05d0bb34
                        */
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 05d0ba8c with catch @ 05d0bb38
                        */
    return *(long **)(lVar4 + 0x20);
  }
LAB_05d0bbcc:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


