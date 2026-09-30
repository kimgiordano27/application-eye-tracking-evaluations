/*
FUNCTION_NAME: FUN_0296c29c
ENTRY_POINT: 0296c29c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 103
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 FUN_0296c29c(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *plVar8;
  undefined1 local_50 [32];
  
  if ((DAT_04830c82 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    DAT_04830c82 = 1;
  }
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
                    /* try { // try from 0296c2d4 to 02a6c317 has its CatchHandler @ 0296c378 */
  if (*(int *)((long)param_1 + 0x14) != 2) {
    if (*(int *)((long)param_1 + 0x14) != 1) {
      return 0;
    }
    plVar8 = (long *)param_1[4];
    if (plVar8 == (long *)0x0) goto LAB_0296c520;
    lVar4 = *(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x10);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01ecaf44(lVar4);
    }
    lVar5 = *plVar8;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar4) {
                    /* try { // try from 0296c35c to 02a6c36b has its CatchHandler @ 0296c124 */
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_0296c360;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
                    /* try { // try from 0296c344 to 02a6c347 has its CatchHandler @ 0296c374 */
                    /* try { // try from 0296c348 to 02a6c35b has its CatchHandler @ 0296c37c */
    puVar3 = (undefined8 *)FUN_01ecb238(plVar8,lVar4,0);
LAB_0296c360:
    lVar4 = (*(code *)*puVar3)(plVar8,puVar3[1]);
                    /* try { // try from 0296c36c to 02a6c36f has its CatchHandler @ 0296c370 */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0296c36c with catch @ 0296c370
                       try { // try from 0296c370 to 02a6c393 has its CatchHandler @ 0296c124 */
    param_1[7] = lVar4;
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0296c344 with catch @ 0296c374
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0296c2d4 with catch @ 0296c378
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0296c348 with catch @ 0296c37c
                        */
    thunk_FUN_01f51358(param_1 + 7,lVar4);
    *(undefined4 *)((long)param_1 + 0x14) = 2;
  }
  do {
    plVar8 = (long *)param_1[7];
    if (plVar8 == (long *)0x0) goto LAB_0296c520;
    lVar4 = *plVar8;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_0296c3dc;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)puVar1,0);
LAB_0296c3dc:
    uVar6 = (*(code *)*puVar3)(plVar8,puVar3[1]);
    if ((uVar6 & 1) == 0) {
      if (param_1 != (long *)0x0) {
        (**(code **)(*param_1 + 0x1f8))(param_1,*(undefined8 *)(*param_1 + 0x200));
        return 0;
      }
      goto LAB_0296c520;
    }
    plVar8 = (long *)param_1[7];
    if (plVar8 == (long *)0x0) goto LAB_0296c520;
    lVar4 = *(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x40);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01ecaf44(lVar4);
    }
    lVar5 = *plVar8;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar4) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_0296c45c;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ecb238(plVar8,lVar4,0);
LAB_0296c45c:
    (*(code *)*puVar3)(local_50,plVar8,puVar3[1]);
    lVar4 = param_1[5];
  } while ((lVar4 != 0) &&
          (uVar6 = (**(code **)(lVar4 + 0x18))
                             (*(undefined8 *)(lVar4 + 0x40),local_50,*(undefined8 *)(lVar4 + 0x28)),
          (uVar6 & 1) == 0));
  lVar4 = param_1[6];
  if (lVar4 != 0) {
    uVar2 = (**(code **)(lVar4 + 0x18))
                      (*(undefined8 *)(lVar4 + 0x40),local_50,*(undefined8 *)(lVar4 + 0x28));
    *(undefined4 *)(param_1 + 3) = uVar2;
    return 1;
  }
LAB_0296c520:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


