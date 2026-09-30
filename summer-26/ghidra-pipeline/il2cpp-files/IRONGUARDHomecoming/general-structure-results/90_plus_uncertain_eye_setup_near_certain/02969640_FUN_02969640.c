/*
FUNCTION_NAME: FUN_02969640
ENTRY_POINT: 02969640
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


undefined8 FUN_02969640(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *plVar8;
  undefined1 auVar9 [16];
  
  if ((DAT_04830c6e & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    DAT_04830c6e = 1;
  }
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (*(int *)((long)param_1 + 0x14) != 2) {
    if (*(int *)((long)param_1 + 0x14) != 1) {
      return 0;
    }
    plVar8 = (long *)param_1[4];
    if (plVar8 == (long *)0x0) goto LAB_02969888;
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
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_02969700;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ecb238(plVar8,lVar4,0);
LAB_02969700:
    lVar4 = (*(code *)*puVar3)(plVar8,puVar3[1]);
    param_1[7] = lVar4;
    thunk_FUN_01f51358(param_1 + 7,lVar4);
    *(undefined4 *)((long)param_1 + 0x14) = 2;
  }
  do {
    plVar8 = (long *)param_1[7];
    if (plVar8 == (long *)0x0) goto LAB_02969888;
    lVar4 = *plVar8;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_0296977c;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)puVar1,0);
LAB_0296977c:
    uVar6 = (*(code *)*puVar3)(plVar8,puVar3[1]);
    if ((uVar6 & 1) == 0) {
      if (param_1 != (long *)0x0) {
                    /* try { // try from 02969870 to 02a69893 has its CatchHandler @ 029695d4 */
        (**(code **)(*param_1 + 0x1f8))(param_1,*(undefined8 *)(*param_1 + 0x200));
        return 0;
      }
      goto LAB_02969888;
    }
    plVar8 = (long *)param_1[7];
    if (plVar8 == (long *)0x0) goto LAB_02969888;
                    /* try { // try from 02969794 to 02a697d7 has its CatchHandler @ 0296983c */
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
          goto LAB_029697fc;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ecb238(plVar8,lVar4,0);
LAB_029697fc:
    auVar9 = (*(code *)*puVar3)(plVar8,puVar3[1]);
                    /* try { // try from 02969808 to 02a6980b has its CatchHandler @ 02969838 */
    lVar4 = param_1[5];
                    /* try { // try from 0296980c to 02a6981f has its CatchHandler @ 02969840 */
  } while ((lVar4 != 0) &&
          (uVar6 = (**(code **)(lVar4 + 0x18))
                             (*(undefined8 *)(lVar4 + 0x40),auVar9._0_8_,auVar9._8_8_,
                              *(undefined8 *)(lVar4 + 0x28)), (uVar6 & 1) == 0
                    /* try { // try from 02969820 to 02a6982f has its CatchHandler @ 029695d4 */
                    /* try { // try from 02969830 to 02a69833 has its CatchHandler @ 02969834 */));
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02969830 with catch @ 02969834
                       try { // try from 02969834 to 02a69857 has its CatchHandler @ 029695d4 */
  lVar4 = param_1[6];
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02969808 with catch @ 02969838
                        */
  if (lVar4 != 0) {
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02969794 with catch @ 0296983c
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0296980c with catch @ 02969840
                        */
    uVar2 = (**(code **)(lVar4 + 0x18))
                      (*(undefined8 *)(lVar4 + 0x40),auVar9._0_8_,auVar9._8_8_,
                       *(undefined8 *)(lVar4 + 0x28));
    *(undefined4 *)(param_1 + 3) = uVar2;
    return 1;
                    /* try { // try from 02969858 to 02a6986f has its CatchHandler @ 029698a4 */
  }
LAB_02969888:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


