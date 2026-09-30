/*
FUNCTION_NAME: FUN_05ce4070
ENTRY_POINT: 05ce4070
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_2;ui_or_gameplay_sink_hits_7;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


/* WARNING: Removing unreachable block (ram,0x05ce41e0) */
/* WARNING: Removing unreachable block (ram,0x05ce42a4) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_05ce4070(long param_1,long *param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar2 = Method_System_Collections_Generic_Dictionary<ulong,_Request>_Remove__;
  if ((DAT_06dc2d58 & 1) == 0) {
    FUN_02d965b8(Method_UnityEngine_XR_Interaction_Toolkit_AR_Gesture<TapGesture>__ctor__);
    FUN_02d965b8(Method_System_Collections_Generic_Dictionary<ulong,_Request>_Remove__);
                    /* try { // try from 05ce40b8 to 05de40df has its CatchHandler @ 05ce4538 */
    FUN_02d965b8(Method_Unity_XR_CoreUtils_Collections_HashSetList<IXRHoverInteractor>_Contains__);
    DAT_06dc2d58 = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  puVar3 = Method_Unity_XR_CoreUtils_Collections_HashSetList<IXRHoverInteractor>_Contains__;
  uVar4 = FUN_05cd427c(0);
  if ((uVar4 & 1) != 0) {
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    FUN_05cd5218(param_1,0,*(undefined8 *)puVar3,0);
  }
                    /* try { // try from 05ce411c to 05de4147 has its CatchHandler @ 05ce4534 */
  if (param_2 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)
                       Method_UnityEngine_XR_Interaction_Toolkit_AR_Gesture<TapGesture>__ctor__ +
                     0x130);
    if ((bVar1 <= *(byte *)(*param_2 + 0x130)) &&
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) ==
        *(long *)Method_UnityEngine_XR_Interaction_Toolkit_AR_Gesture<TapGesture>__ctor__)) {
      if (*(char *)((long)param_2 + 0x34) == '\0') {
        FUN_05cf5adc(param_2,1);
        *(undefined1 *)((long)param_2 + 0x34) = 1;
        if (*(long *)(param_1 + 0xa8) != 0) {
          FUN_0540e544(*(long *)(param_1 + 0xa8),0);
        }
                    /* try { // try from 05ce418c to 05de41c3 has its CatchHandler @ 05ce4530 */
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        uVar4 = FUN_05cd427c(0);
        if ((uVar4 & 1) != 0) {
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
                    /* try { // try from 05ce41c4 to 05de4313 has its CatchHandler @ 05ce3ca0 */
          FUN_05cd5d64(param_1,0,*(undefined8 *)puVar3,0);
        }
        return *(undefined8 *)(param_1 + 0xe8);
      }
      uVar6 = thunk_FUN_02dfd288(
                                Method_Unity_XR_CoreUtils_Collections_HashSetList<IXRHoverInteractor>_get_Count__
                                );
      uVar7 = thunk_FUN_02dfd288(
                                Method_Unity_XR_CoreUtils_Collections_HashSetList<IXRHoverInteractor>_Contains__
                                );
      uVar6 = FUN_0534e494(uVar6,uVar7,0);
      thunk_FUN_02dfd288(PTR_DAT_069ff3c8);
      uVar7 = thunk_FUN_02dd3144();
      FUN_054e8008(uVar7,uVar6,0);
      uVar6 = thunk_FUN_02dfd288(
                                Method_Unity_XR_CoreUtils_Collections_HashSetList<IXRHoverInteractor>_Remove__
                                );
                    /* WARNING: Subroutine does not return */
      FUN_02d96724(uVar7,uVar6);
    }
    thunk_FUN_02dfd288(PTR_DAT_06a0ac70);
    uVar6 = thunk_FUN_02dd3144();
    uVar7 = thunk_FUN_02dfd288(
                              Method_System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_Tuple<OVRSkeleton_BoneId,_OVRSkeleton_BoneId>>_Add__
                              );
    uVar5 = thunk_FUN_02dfd288(PTR_DAT_06a0f5b8);
    FUN_0544bfcc(uVar6,uVar7,uVar5,0);
    uVar7 = thunk_FUN_02dfd288(
                              Method_Unity_XR_CoreUtils_Collections_HashSetList<IXRHoverInteractor>_Remove__
                              );
                    /* WARNING: Subroutine does not return */
    FUN_02d96724(uVar6,uVar7);
  }
  thunk_FUN_02dfd288(PTR_DAT_069ff9a8);
  uVar6 = thunk_FUN_02dd3144();
  uVar7 = thunk_FUN_02dfd288(PTR_DAT_06a0f5b8);
  FUN_0544bf54(uVar6,uVar7,0);
  uVar7 = thunk_FUN_02dfd288(
                            Method_Unity_XR_CoreUtils_Collections_HashSetList<IXRHoverInteractor>_Remove__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_02d96724(uVar6,uVar7);
}


