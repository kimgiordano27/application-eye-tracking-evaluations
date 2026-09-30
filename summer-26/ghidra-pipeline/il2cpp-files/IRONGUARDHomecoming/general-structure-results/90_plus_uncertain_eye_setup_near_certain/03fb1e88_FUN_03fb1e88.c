/*
FUNCTION_NAME: FUN_03fb1e88
ENTRY_POINT: 03fb1e88
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 114
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_8;functionality_eye_api_context_without_clear_sink_hits_4
*/


undefined8 FUN_03fb1e88(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *plVar7;
  
                    /* try { // try from 03fb1e8c to 040b1e93 has its CatchHandler @ 03fb1ea8 */
                    /* try { // try from 03fb1e94 to 040b1e9f has its CatchHandler @ 03fb1cb0 */
                    /* try { // try from 03fb1ea0 to 040b1ea7 has its CatchHandler @ 03fb1ea8 */
  if ((DAT_0483b842 & 1) == 0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03fb1e8c with catch @ 03fb1ea8
                       catch(type#2 @ 00000000) { ... } // from try @ 03fb1ea0 with catch @ 03fb1ea8
                        */
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    DAT_0483b842 = 1;
  }
  if (*(int *)(param_1 + 0x10) == 1) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  }
  else {
    if (*(int *)(param_1 + 0x10) != 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if ((*(long *)(param_1 + 0x28) == 0) ||
       (lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 0x28), lVar4 == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar2 = (**(code **)(lVar4 + 0x18))
                      (*(undefined8 *)(lVar4 + 0x40),*(undefined8 *)(param_1 + 0x38),
                       *(undefined8 *)(lVar4 + 0x28));
    *(undefined8 *)(param_1 + 0x40) = uVar2;
    thunk_FUN_01f51358();
  }
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  plVar7 = *(long **)(param_1 + 0x40);
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar4 = *plVar7;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) ==
          *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__) {
        puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
        goto LAB_03fb1f70;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar3 = (undefined8 *)
           FUN_01ecb238(plVar7,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__
                        ,0);
LAB_03fb1f70:
  uVar5 = (*(code *)*puVar3)(plVar7,puVar3[1]);
  if ((uVar5 & 1) == 0) {
    return 0;
  }
  plVar7 = *(long **)(param_1 + 0x40);
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar4 = *plVar7;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
        puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 1) * 0x10 + 0x138);
        goto LAB_03fb1fe0;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar3 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar1,1);
LAB_03fb1fe0:
  uVar2 = (*(code *)*puVar3)(plVar7,puVar3[1]);
  *(undefined8 *)(param_1 + 0x18) = uVar2;
  thunk_FUN_01f51358((undefined8 *)(param_1 + 0x18));
  *(undefined4 *)(param_1 + 0x10) = 1;
  return 1;
}


