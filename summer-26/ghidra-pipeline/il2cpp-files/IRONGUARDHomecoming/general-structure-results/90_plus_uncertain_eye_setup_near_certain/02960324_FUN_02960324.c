/*
FUNCTION_NAME: FUN_02960324
ENTRY_POINT: 02960324
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


undefined8 FUN_02960324(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *plVar8;
  undefined8 uVar9;
  code *pcVar10;
  undefined1 auStack_130 [80];
  undefined1 auStack_e0 [80];
  undefined1 auStack_90 [80];
  
                    /* try { // try from 02960328 to 02a60337 has its CatchHandler @ 029600e4 */
                    /* try { // try from 02960338 to 02a6033b has its CatchHandler @ 0296033c */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02960338 with catch @ 0296033c
                       try { // try from 0296033c to 02a6035f has its CatchHandler @ 029600e4 */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02960310 with catch @ 02960340
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0296029c with catch @ 02960344
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02960314 with catch @ 02960348
                        */
  if ((DAT_04830c2c & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    DAT_04830c2c = 1;
  }
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
                    /* try { // try from 02960360 to 02a60377 has its CatchHandler @ 029603ac */
  if (*(int *)((long)param_1 + 0x14) != 2) {
                    /* try { // try from 02960378 to 02a6039b has its CatchHandler @ 029600e4 */
    if (*(int *)((long)param_1 + 0x14) != 1) {
      return 0;
    }
    plVar8 = (long *)param_1[4];
    if (plVar8 == (long *)0x0) goto LAB_029605b8;
    lVar4 = *(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x10);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
                    /* try { // try from 0296039c to 02a603ab has its CatchHandler @ 029603ac */
      lVar4 = FUN_01ecaf44(lVar4);
    }
    lVar5 = *plVar8;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
                    /* catch() { ... } // from try @ 02960360 with catch @ 029603ac
                       catch() { ... } // from try @ 0296039c with catch @ 029603ac */
    if (uVar6 != 0) {
                    /* try { // try from 029603b0 to 02a603b3 has its CatchHandler @ 029603bc */
                    /* try { // try from 029603b4 to 02a603bf has its CatchHandler @ 029600e4 */
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 029603b0 with catch @ 029603bc
                        */
        if (*(long *)(piVar7 + -2) == lVar4) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_029603ec;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ecb238(plVar8,lVar4,0);
LAB_029603ec:
    lVar4 = (*(code *)*puVar3)(plVar8,puVar3[1]);
    param_1[7] = lVar4;
    thunk_FUN_01f51358(param_1 + 7,lVar4);
    *(undefined4 *)((long)param_1 + 0x14) = 2;
  }
  do {
    plVar8 = (long *)param_1[7];
    if (plVar8 == (long *)0x0) goto LAB_029605b8;
    lVar4 = *plVar8;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_02960468;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)puVar1,0);
LAB_02960468:
    uVar6 = (*(code *)*puVar3)(plVar8,puVar3[1]);
    if ((uVar6 & 1) == 0) {
      if (param_1 != (long *)0x0) {
        (**(code **)(*param_1 + 0x1f8))(param_1,*(undefined8 *)(*param_1 + 0x200));
        return 0;
      }
      goto LAB_029605b8;
    }
    plVar8 = (long *)param_1[7];
    if (plVar8 == (long *)0x0) goto LAB_029605b8;
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
          goto LAB_029604e8;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ecb238(plVar8,lVar4,0);
LAB_029604e8:
    (*(code *)*puVar3)(auStack_90,plVar8,puVar3[1]);
    memcpy(auStack_e0,auStack_90,0x50);
    lVar4 = param_1[5];
    if (lVar4 == 0) break;
    pcVar10 = *(code **)(lVar4 + 0x18);
    uVar9 = *(undefined8 *)(lVar4 + 0x40);
    memcpy(auStack_90,auStack_e0,0x50);
    uVar6 = (*pcVar10)(uVar9,auStack_90,*(undefined8 *)(lVar4 + 0x28));
  } while ((uVar6 & 1) == 0);
  lVar4 = param_1[6];
  memcpy(auStack_130,auStack_e0,0x50);
  if (lVar4 != 0) {
    pcVar10 = *(code **)(lVar4 + 0x18);
    uVar9 = *(undefined8 *)(lVar4 + 0x40);
    memcpy(auStack_90,auStack_130,0x50);
    uVar2 = (*pcVar10)(uVar9,auStack_90,*(undefined8 *)(lVar4 + 0x28));
    *(undefined4 *)(param_1 + 3) = uVar2;
    return 1;
  }
LAB_029605b8:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


