/*
FUNCTION_NAME: FUN_02968934
ENTRY_POINT: 02968934
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


undefined8
FUN_02968934(undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
            long *param_5,long param_6)

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
  
                    /* try { // try from 02968934 to 02a68ae3 has its CatchHandler @ 02968934
                       catch() { ... } // from try @ 02968934 with catch @ 02968934
                       catch() { ... } // from try @ 02968b6c with catch @ 02968934
                       catch() { ... } // from try @ 02968b80 with catch @ 02968934
                       catch() { ... } // from try @ 02968bbc with catch @ 02968934
                       catch() { ... } // from try @ 02968bf8 with catch @ 02968934 */
  if ((DAT_04830c68 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    DAT_04830c68 = 1;
  }
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (*(int *)((long)param_5 + 0x14) != 2) {
    if (*(int *)((long)param_5 + 0x14) != 1) {
      return 0;
    }
    plVar7 = (long *)param_5[5];
    if (plVar7 == (long *)0x0) goto LAB_02968b80;
    lVar3 = *(long *)(*(long *)(*(long *)(param_6 + 0x20) + 0xc0) + 0x10);
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
          goto LAB_029689f4;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238(plVar7,lVar3,0);
LAB_029689f4:
    lVar3 = (*(code *)*puVar2)(plVar7,puVar2[1]);
    param_5[8] = lVar3;
    thunk_FUN_01f51358(param_5 + 8,lVar3);
    *(undefined4 *)((long)param_5 + 0x14) = 2;
  }
  do {
    plVar7 = (long *)param_5[8];
    if (plVar7 == (long *)0x0) goto LAB_02968b80;
    lVar3 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_02968a70;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar1,0);
LAB_02968a70:
    uVar5 = (*(code *)*puVar2)(plVar7,puVar2[1]);
    if ((uVar5 & 1) == 0) {
                    /* try { // try from 02968b58 to 02a68b6b has its CatchHandler @ 02968b8c */
      if (param_5 != (long *)0x0) {
        (**(code **)(*param_5 + 0x1f8))(param_5,*(undefined8 *)(*param_5 + 0x200));
        return 0;
                    /* try { // try from 02968b6c to 02a68b7b has its CatchHandler @ 02968934 */
      }
      goto LAB_02968b80;
    }
    plVar7 = (long *)param_5[8];
    if (plVar7 == (long *)0x0) goto LAB_02968b80;
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
                    /* try { // try from 02968ae4 to 02a68b27 has its CatchHandler @ 02968b88 */
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_02968af0;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238(plVar7,lVar3,0);
LAB_02968af0:
    auVar9 = (*(code *)*puVar2)(plVar7,puVar2[1]);
    lVar3 = param_5[6];
  } while ((lVar3 != 0) &&
          (uVar5 = (**(code **)(lVar3 + 0x18))
                             (*(undefined8 *)(lVar3 + 0x40),auVar9._0_8_,auVar9._8_8_,
                              *(undefined8 *)(lVar3 + 0x28)), (uVar5 & 1) == 0));
  lVar3 = param_5[7];
  if (lVar3 != 0) {
    uVar8 = (**(code **)(lVar3 + 0x18))
                      (*(undefined8 *)(lVar3 + 0x40),auVar9._0_8_,auVar9._8_8_,
                       *(undefined8 *)(lVar3 + 0x28));
    *(undefined4 *)(param_5 + 3) = uVar8;
    *(undefined4 *)((long)param_5 + 0x1c) = param_2;
    *(undefined4 *)(param_5 + 4) = param_3;
    *(undefined4 *)((long)param_5 + 0x24) = param_4;
                    /* try { // try from 02968b7c to 02a68b7f has its CatchHandler @ 02968b80 */
    return 1;
                    /* try { // try from 02968b54 to 02a68b57 has its CatchHandler @ 02968b84 */
  }
LAB_02968b80:
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02968b7c with catch @ 02968b80
                       try { // try from 02968b80 to 02a68ba3 has its CatchHandler @ 02968934 */
  FUN_01f08a3c();
}


