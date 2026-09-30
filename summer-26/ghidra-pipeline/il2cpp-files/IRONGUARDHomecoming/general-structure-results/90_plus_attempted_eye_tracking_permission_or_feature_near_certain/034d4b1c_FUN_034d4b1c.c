/*
FUNCTION_NAME: FUN_034d4b1c
ENTRY_POINT: 034d4b1c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 131
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_6;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;attempted_eye_tracking_permission_or_feature_enable;functionality_permission_setup;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Removing unreachable block (ram,0x034d4cb4) */

void FUN_034d4b1c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  
                    /* catch() { ... } // from try @ 034d4b10 with catch @ 034d4b20 */
                    /* try { // try from 034d4b28 to 035d4b3f has its CatchHandler @ 034d4b54 */
  if ((DAT_04832d4b & 1) == 0) {
                    /* try { // try from 034d4b40 to 035d4b4b has its CatchHandler @ 034d48fc */
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
                    /* try { // try from 034d4b4c to 035d4b53 has its CatchHandler @ 034d4b54 */
    thunk_FUN_01efb3a4(Method_OVREyeGaze_OnPermissionGranted__);
                    /* catch() { ... } // from try @ 034d4b28 with catch @ 034d4b54
                       catch() { ... } // from try @ 034d4b4c with catch @ 034d4b54 */
                    /* try { // try from 034d4b58 to 035d50e7 has its CatchHandler @ 034d4b58
                       catch() { ... } // from try @ 034d4b58 with catch @ 034d4b58
                       catch() { ... } // from try @ 034d51dc with catch @ 034d4b58
                       catch() { ... } // from try @ 034d5478 with catch @ 034d4b58
                       catch() { ... } // from try @ 034d5598 with catch @ 034d4b58
                       catch() { ... } // from try @ 034d55e0 with catch @ 034d4b58
                       catch() { ... } // from try @ 034d5604 with catch @ 034d4b58
                       catch() { ... } // from try @ 034d579c with catch @ 034d4b58 */
    DAT_04832d4b = 1;
  }
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  if (param_1 == 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
    uVar4 = thunk_FUN_01f117cc();
    uVar5 = thunk_FUN_01efb3a4(Method_System_Globalization_CompareInfo_GetHashCode__);
    FUN_034efd20(uVar4,uVar5,0);
  }
  else {
    if (*(int *)(param_1 + 0x10) != 0) {
      plVar2 = (long *)thunk_FUN_01f117cc(*(undefined8 *)Method_OVREyeGaze_OnPermissionGranted__);
      FUN_034cd3c8(plVar2,param_1,1,0);
      if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      (**(code **)(*plVar2 + 0x228))(plVar2,param_2,*(undefined8 *)(*plVar2 + 0x230));
      lVar7 = *plVar2;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
            puVar3 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_034d4c00;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar3 = (undefined8 *)FUN_01ecb238(plVar2,*(long *)puVar1,0);
LAB_034d4c00:
      (*(code *)*puVar3)(plVar2,puVar3[1]);
      return;
    }
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
    uVar4 = thunk_FUN_01f117cc();
    uVar5 = thunk_FUN_01efb3a4(
                              Method_Sirenix_Serialization_UnitySerializationUtility_GetCachedUnityWriter__
                              );
    uVar6 = thunk_FUN_01efb3a4(Method_System_Globalization_CompareInfo_GetHashCode__);
    FUN_034efd98(uVar4,uVar5,uVar6,0);
  }
  uVar5 = thunk_FUN_01efb3a4(
                            Method_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_SizeOf<InputEvent>__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar4,uVar5);
}


