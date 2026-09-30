/*
FUNCTION_NAME: FUN_02962850
ENTRY_POINT: 02962850
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 103
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 FUN_02962850(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *plVar7;
  undefined1 local_50 [32];
  
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 029627a8 with catch @ 02962850
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02962820 with catch @ 02962854
                        */
                    /* try { // try from 0296286c to 02a62883 has its CatchHandler @ 029628b8 */
  if ((DAT_04830c3c & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
                    /* try { // try from 02962884 to 02a628a7 has its CatchHandler @ 029625e0 */
    DAT_04830c3c = 1;
  }
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (*(int *)((long)param_1 + 0x14) != 2) {
    if (*(int *)((long)param_1 + 0x14) != 1) {
      return 0;
    }
    plVar7 = (long *)param_1[4];
                    /* try { // try from 029628a8 to 02a628b7 has its CatchHandler @ 029628b8 */
    if (plVar7 == (long *)0x0) goto LAB_02962ac0;
    lVar3 = *(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x10);
                    /* catch() { ... } // from try @ 0296286c with catch @ 029628b8
                       catch() { ... } // from try @ 029628a8 with catch @ 029628b8 */
                    /* try { // try from 029628bc to 02a628bf has its CatchHandler @ 029628c8 */
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
                    /* try { // try from 029628c0 to 02a628cb has its CatchHandler @ 029625e0 */
      lVar3 = FUN_01ecaf44(lVar3);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 029628bc with catch @ 029628c8
                        */
    }
    lVar4 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == lVar3) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_02962914;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238(plVar7,lVar3,0);
LAB_02962914:
    lVar3 = (*(code *)*puVar2)(plVar7,puVar2[1]);
    param_1[7] = lVar3;
    thunk_FUN_01f51358(param_1 + 7,lVar3);
    *(undefined4 *)((long)param_1 + 0x14) = 2;
  }
  do {
    plVar7 = (long *)param_1[7];
    if (plVar7 == (long *)0x0) goto LAB_02962ac0;
    lVar3 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_02962990;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar1,0);
LAB_02962990:
    uVar5 = (*(code *)*puVar2)(plVar7,puVar2[1]);
    if ((uVar5 & 1) == 0) {
      if (param_1 != (long *)0x0) {
        (**(code **)(*param_1 + 0x1f8))(param_1,*(undefined8 *)(*param_1 + 0x200));
        return 0;
      }
      goto LAB_02962ac0;
    }
    plVar7 = (long *)param_1[7];
    if (plVar7 == (long *)0x0) goto LAB_02962ac0;
    lVar3 = *(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x40);
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
          goto 
          System_Collections_Concurrent_ConcurrentQueue<__Il2CppFullySharedGenericType>__ToArray;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238(plVar7,lVar3,0);
System_Collections_Concurrent_ConcurrentQueue<__Il2CppFullySharedGenericType>__ToArray:
    (*(code *)*puVar2)(local_50,plVar7,puVar2[1]);
    lVar3 = param_1[5];
  } while ((lVar3 != 0) &&
          (uVar5 = (**(code **)(lVar3 + 0x18))
                             (*(undefined8 *)(lVar3 + 0x40),local_50,*(undefined8 *)(lVar3 + 0x28)),
          (uVar5 & 1) == 0));
  lVar3 = param_1[6];
  if (lVar3 != 0) {
    lVar3 = (**(code **)(lVar3 + 0x18))
                      (*(undefined8 *)(lVar3 + 0x40),local_50,*(undefined8 *)(lVar3 + 0x28));
    param_1[3] = lVar3;
    thunk_FUN_01f51358(param_1 + 3,lVar3);
    return 1;
  }
LAB_02962ac0:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


