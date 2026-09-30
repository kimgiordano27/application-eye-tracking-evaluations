/*
FUNCTION_NAME: FUN_029607c8
ENTRY_POINT: 029607c8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 103
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 FUN_029607c8(long *param_1,long param_2)

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
  undefined1 auVar10 [16];
  undefined1 auStack_130 [80];
  undefined1 auStack_e0 [80];
  undefined1 auStack_90 [80];
  
  if ((DAT_04830c2e & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    DAT_04830c2e = 1;
  }
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (*(int *)((long)param_1 + 0x14) != 2) {
    if (*(int *)((long)param_1 + 0x14) != 1) {
      return 0;
    }
    plVar7 = (long *)param_1[5];
    if (plVar7 == (long *)0x0) goto LAB_02960a6c;
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
          goto LAB_02960890;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238(plVar7,lVar3,0);
LAB_02960890:
    lVar3 = (*(code *)*puVar2)(plVar7,puVar2[1]);
    param_1[8] = lVar3;
    thunk_FUN_01f51358(param_1 + 8,lVar3);
    *(undefined4 *)((long)param_1 + 0x14) = 2;
  }
  do {
                    /* try { // try from 029608b8 to 02a608fb has its CatchHandler @ 0296095c */
    plVar7 = (long *)param_1[8];
    if (plVar7 == (long *)0x0) goto LAB_02960a6c;
    lVar3 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_0296090c;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar1,0);
LAB_0296090c:
    uVar5 = (*(code *)*puVar2)(plVar7,puVar2[1]);
    if ((uVar5 & 1) == 0) {
      if (param_1 != (long *)0x0) {
        (**(code **)(*param_1 + 0x1f8))(param_1,*(undefined8 *)(*param_1 + 0x200));
        return 0;
      }
      goto LAB_02960a6c;
    }
    plVar7 = (long *)param_1[8];
    if (plVar7 == (long *)0x0) goto LAB_02960a6c;
                    /* try { // try from 02960928 to 02a6092b has its CatchHandler @ 02960958 */
                    /* try { // try from 0296092c to 02a6093f has its CatchHandler @ 02960960 */
    lVar3 = *(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x40);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01ecaf44(lVar3);
                    /* try { // try from 02960940 to 02a6094f has its CatchHandler @ 02960708 */
    }
    lVar4 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
                    /* try { // try from 02960950 to 02a60953 has its CatchHandler @ 02960954 */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02960950 with catch @ 02960954
                       try { // try from 02960954 to 02a60977 has its CatchHandler @ 02960708 */
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02960928 with catch @ 02960958
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 029608b8 with catch @ 0296095c
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0296092c with catch @ 02960960
                        */
        if (*(long *)(piVar6 + -2) == lVar3) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_0296098c;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
                    /* try { // try from 02960978 to 02a6098f has its CatchHandler @ 029609c4 */
    puVar2 = (undefined8 *)FUN_01ecb238(plVar7,lVar3,0);
LAB_0296098c:
                    /* try { // try from 02960990 to 02a609b3 has its CatchHandler @ 02960708 */
    (*(code *)*puVar2)(auStack_90,plVar7,puVar2[1]);
    memcpy(auStack_e0,auStack_90,0x50);
    lVar3 = param_1[6];
    if (lVar3 == 0) break;
                    /* try { // try from 029609b4 to 02a609c3 has its CatchHandler @ 029609c4 */
    pcVar9 = *(code **)(lVar3 + 0x18);
    uVar8 = *(undefined8 *)(lVar3 + 0x40);
                    /* catch() { ... } // from try @ 02960978 with catch @ 029609c4
                       catch() { ... } // from try @ 029609b4 with catch @ 029609c4 */
                    /* try { // try from 029609c8 to 02a609cb has its CatchHandler @ 029609d4 */
    memcpy(auStack_90,auStack_e0,0x50);
                    /* try { // try from 029609cc to 02a609d7 has its CatchHandler @ 02960708 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 029609c8 with catch @ 029609d4
                        */
    uVar5 = (*pcVar9)(uVar8,auStack_90,*(undefined8 *)(lVar3 + 0x28));
  } while ((uVar5 & 1) == 0);
  lVar3 = param_1[7];
  memcpy(auStack_130,auStack_e0,0x50);
  if (lVar3 != 0) {
    pcVar9 = *(code **)(lVar3 + 0x18);
    uVar8 = *(undefined8 *)(lVar3 + 0x40);
    memcpy(auStack_90,auStack_130,0x50);
    auVar10 = (*pcVar9)(uVar8,auStack_90,*(undefined8 *)(lVar3 + 0x28));
    *(undefined1 (*) [16])(param_1 + 3) = auVar10;
    thunk_FUN_01f51358((undefined1 (*) [16])(param_1 + 3),0);
    return 1;
  }
LAB_02960a6c:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


