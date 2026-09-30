/*
FUNCTION_NAME: FUN_0296a364
ENTRY_POINT: 0296a364
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


undefined8 FUN_0296a364(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *plVar7;
  undefined4 uVar8;
  undefined1 auVar9 [16];
  
  if ((DAT_04830c74 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    DAT_04830c74 = 1;
  }
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (*(int *)((long)param_1 + 0x14) != 2) {
    if (*(int *)((long)param_1 + 0x14) != 1) {
      return 0;
    }
    plVar7 = (long *)param_1[4];
    if (plVar7 == (long *)0x0) goto LAB_0296a5ac;
    lVar3 = *(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x10);
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
          goto LAB_0296a424;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238(plVar7,lVar3,0);
LAB_0296a424:
    lVar3 = (*(code *)*puVar2)(plVar7,puVar2[1]);
                    /* try { // try from 0296a434 to 02a6a477 has its CatchHandler @ 0296a4dc */
    param_1[7] = lVar3;
    thunk_FUN_01f51358(param_1 + 7,lVar3);
    *(undefined4 *)((long)param_1 + 0x14) = 2;
  }
  do {
    plVar7 = (long *)param_1[7];
    if (plVar7 == (long *)0x0) goto LAB_0296a5ac;
    lVar3 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_0296a4a0;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar1,0);
LAB_0296a4a0:
                    /* try { // try from 0296a4a8 to 02a6a4ab has its CatchHandler @ 0296a4d8 */
    uVar5 = (*(code *)*puVar2)(plVar7,puVar2[1]);
                    /* try { // try from 0296a4ac to 02a6a4bf has its CatchHandler @ 0296a4e0 */
    if ((uVar5 & 1) == 0) {
      if (param_1 != (long *)0x0) {
        (**(code **)(*param_1 + 0x1f8))(param_1,*(undefined8 *)(*param_1 + 0x200));
        return 0;
      }
      goto LAB_0296a5ac;
    }
    plVar7 = (long *)param_1[7];
    if (plVar7 == (long *)0x0) goto LAB_0296a5ac;
                    /* try { // try from 0296a4c0 to 02a6a4cf has its CatchHandler @ 0296a274 */
    lVar3 = *(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x40);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
                    /* try { // try from 0296a4d0 to 02a6a4d3 has its CatchHandler @ 0296a4d4 */
      lVar3 = FUN_01ecaf44(lVar3);
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0296a4d0 with catch @ 0296a4d4
                       try { // try from 0296a4d4 to 02a6a4f7 has its CatchHandler @ 0296a274 */
    }
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0296a4a8 with catch @ 0296a4d8
                        */
    lVar4 = *plVar7;
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0296a434 with catch @ 0296a4dc
                        */
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0296a4ac with catch @ 0296a4e0
                        */
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == lVar3) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_0296a520;
        }
                    /* try { // try from 0296a4f8 to 02a6a50f has its CatchHandler @ 0296a544 */
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238(plVar7,lVar3,0);
                    /* try { // try from 0296a510 to 02a6a533 has its CatchHandler @ 0296a274 */
LAB_0296a520:
    auVar9 = (*(code *)*puVar2)(plVar7,puVar2[1]);
    lVar3 = param_1[5];
                    /* try { // try from 0296a534 to 02a6a543 has its CatchHandler @ 0296a544 */
  } while ((lVar3 != 0) &&
          (uVar5 = (**(code **)(lVar3 + 0x18))
                             (*(undefined8 *)(lVar3 + 0x40),auVar9._0_8_,auVar9._8_8_,
                              *(undefined8 *)(lVar3 + 0x28)), (uVar5 & 1) == 0));
  lVar3 = param_1[6];
  if (lVar3 != 0) {
    uVar8 = (**(code **)(lVar3 + 0x18))
                      (*(undefined8 *)(lVar3 + 0x40),auVar9._0_8_,auVar9._8_8_,
                       *(undefined8 *)(lVar3 + 0x28));
    *(undefined4 *)(param_1 + 3) = uVar8;
    return 1;
  }
LAB_0296a5ac:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


