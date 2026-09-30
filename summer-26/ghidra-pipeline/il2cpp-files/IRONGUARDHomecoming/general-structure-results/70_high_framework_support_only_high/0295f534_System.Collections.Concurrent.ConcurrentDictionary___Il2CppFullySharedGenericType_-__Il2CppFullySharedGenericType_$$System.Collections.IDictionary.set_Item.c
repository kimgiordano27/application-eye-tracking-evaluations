/*
FUNCTION_NAME: System.Collections.Concurrent.ConcurrentDictionary<__Il2CppFullySharedGenericType,-__Il2CppFullySharedGenericType>$$System.Collections.IDictionary.set_Item
ENTRY_POINT: 0295f534
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
System_Collections_Concurrent_ConcurrentDictionary<__Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType>__System_Collections_IDictionary_set_Item
          (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
          long *param_5,long param_6)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *plVar7;
  undefined8 uVar8;
  code *pcVar9;
  undefined4 uVar10;
  undefined1 auStack_130 [80];
  undefined1 auStack_e0 [80];
  undefined1 auStack_90 [80];
  
                    /* try { // try from 0295f544 to 02a5f55b has its CatchHandler @ 0295f590 */
  if ((DAT_04830c26 & 1) == 0) {
                    /* try { // try from 0295f55c to 02a5f57f has its CatchHandler @ 0295f2c8 */
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    DAT_04830c26 = 1;
  }
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
                    /* try { // try from 0295f580 to 02a5f58f has its CatchHandler @ 0295f590 */
  if (*(int *)((long)param_5 + 0x14) != 2) {
    if (*(int *)((long)param_5 + 0x14) != 1) {
      return 0;
    }
    plVar7 = (long *)param_5[5];
                    /* catch() { ... } // from try @ 0295f544 with catch @ 0295f590
                       catch() { ... } // from try @ 0295f580 with catch @ 0295f590 */
    if (plVar7 == (long *)0x0) goto LAB_0295f7cc;
                    /* try { // try from 0295f594 to 02a5f597 has its CatchHandler @ 0295f5a0 */
                    /* try { // try from 0295f598 to 02a5f5a3 has its CatchHandler @ 0295f2c8 */
    lVar3 = *(long *)(*(long *)(*(long *)(param_6 + 0x20) + 0xc0) + 0x10);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0295f594 with catch @ 0295f5a0
                        */
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01ecaf44(lVar3);
    }
    lVar4 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == lVar3) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_0295f5fc;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238(plVar7,lVar3,0);
LAB_0295f5fc:
    lVar3 = (*(code *)*puVar2)(plVar7,puVar2[1]);
    param_5[8] = lVar3;
    thunk_FUN_01f51358(param_5 + 8,lVar3);
    *(undefined4 *)((long)param_5 + 0x14) = 2;
  }
  do {
    plVar7 = (long *)param_5[8];
    if (plVar7 == (long *)0x0) goto LAB_0295f7cc;
    lVar3 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_0295f678;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar1,0);
LAB_0295f678:
    uVar5 = (*(code *)*puVar2)(plVar7,puVar2[1]);
    if ((uVar5 & 1) == 0) {
      if (param_5 != (long *)0x0) {
        (**(code **)(*param_5 + 0x1f8))(param_5,*(undefined8 *)(*param_5 + 0x200));
        return 0;
      }
      goto LAB_0295f7cc;
    }
    plVar7 = (long *)param_5[8];
    if (plVar7 == (long *)0x0) goto LAB_0295f7cc;
    lVar3 = *(long *)(*(long *)(*(long *)(param_6 + 0x20) + 0xc0) + 0x40);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01ecaf44(lVar3);
    }
    lVar4 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == lVar3) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_0295f6f8;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238(plVar7,lVar3,0);
LAB_0295f6f8:
    (*(code *)*puVar2)(auStack_90,plVar7,puVar2[1]);
    memcpy(auStack_e0,auStack_90,0x50);
    lVar3 = param_5[6];
    if (lVar3 == 0) break;
    pcVar9 = *(code **)(lVar3 + 0x18);
    uVar8 = *(undefined8 *)(lVar3 + 0x40);
    memcpy(auStack_90,auStack_e0,0x50);
    uVar5 = (*pcVar9)(uVar8,auStack_90,*(undefined8 *)(lVar3 + 0x28));
  } while ((uVar5 & 1) == 0);
  lVar3 = param_5[7];
  memcpy(auStack_130,auStack_e0,0x50);
  if (lVar3 != 0) {
    pcVar9 = *(code **)(lVar3 + 0x18);
    uVar8 = *(undefined8 *)(lVar3 + 0x40);
    memcpy(auStack_90,auStack_130,0x50);
    uVar10 = (*pcVar9)(uVar8,auStack_90,*(undefined8 *)(lVar3 + 0x28));
    *(undefined4 *)(param_5 + 3) = uVar10;
    *(undefined4 *)((long)param_5 + 0x1c) = param_2;
    *(undefined4 *)(param_5 + 4) = param_3;
    *(undefined4 *)((long)param_5 + 0x24) = param_4;
    return 1;
  }
LAB_0295f7cc:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


