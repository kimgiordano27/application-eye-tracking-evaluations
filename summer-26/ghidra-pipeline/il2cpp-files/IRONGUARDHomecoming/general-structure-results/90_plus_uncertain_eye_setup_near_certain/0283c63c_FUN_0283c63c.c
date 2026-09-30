/*
FUNCTION_NAME: FUN_0283c63c
ENTRY_POINT: 0283c63c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 105
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_6;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x0283c884) */

void FUN_0283c63c(long *param_1,long param_2)

{
  undefined8 uVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  int *piVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long local_60;
  long lStack_58;
  long local_50;
  long local_40;
  long lStack_38;
  long local_30;
  
                    /* try { // try from 0283c658 to 0293c65b has its CatchHandler @ 0283c6b0 */
  if ((DAT_0483083b & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    DAT_0483083b = 1;
  }
                    /* try { // try from 0283c670 to 0293c67f has its CatchHandler @ 0283c6b8 */
  if (param_1 == (long *)0x0) {
LAB_0283c87c:
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  FUN_0422b6c0(param_1,0);
  if (param_1[0x7d] != 0) {
                    /* try { // try from 0283c690 to 0293c6ab has its CatchHandler @ 0283c6bc */
    uVar1 = FUN_0422b208(param_1,0);
    lVar11 = param_1[0x7f];
    lVar9 = param_1[0x7e];
    lVar6 = param_1[0x80];
                    /* try { // try from 0283c6ac to 0293c6d7 has its CatchHandler @ 0283c404 */
                    /* catch() { ... } // from try @ 0283c658 with catch @ 0283c6b0 */
                    /* catch() { ... } // from try @ 0283c634 with catch @ 0283c6b4 */
    FUN_0422b27c(param_1,param_1,uVar1,0);
                    /* catch() { ... } // from try @ 0283c670 with catch @ 0283c6b8 */
                    /* catch() { ... } // from try @ 0283c690 with catch @ 0283c6bc */
    plVar2 = (long *)FUN_02853310(*(undefined8 *)
                                   (*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x28));
                    /* try { // try from 0283c6d8 to 0293c6eb has its CatchHandler @ 0283c8f8 */
    local_50 = param_1[0x80];
    lStack_58 = param_1[0x7f];
    local_60 = param_1[0x7e];
    if (plVar2 == (long *)0x0) goto LAB_0283c87c;
                    /* try { // try from 0283c6f4 to 0293c6f7 has its CatchHandler @ 0283c8f4 */
                    /* try { // try from 0283c6f8 to 0293c75b has its CatchHandler @ 0283c8f0 */
    local_40 = lVar9;
    lStack_38 = lVar11;
    local_30 = lVar6;
    uVar3 = (**(code **)(*plVar2 + 0x1b8))
                      (plVar2,&local_40,&local_60,*(undefined8 *)(*plVar2 + 0x1c0));
    if ((uVar3 & 1) == 0) {
      lVar7 = param_1[0x80];
      lVar12 = param_1[0x7f];
      lVar10 = param_1[0x7e];
      lVar4 = *(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x58);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_01ecaf44();
      }
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      local_60 = lVar10;
      lStack_58 = lVar12;
      local_50 = lVar7;
      local_40 = lVar9;
      lStack_38 = lVar11;
      local_30 = lVar6;
      plVar2 = (long *)FUN_029e4ab8(&local_40,&local_60,
                                    *(undefined8 *)
                                     (*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x50));
      if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      FUN_041d4560(plVar2,param_1,0);
      local_30 = param_1[0x80];
      lStack_38 = param_1[0x7f];
      local_40 = param_1[0x7e];
      (**(code **)(*param_1 + 0x838))(param_1,&local_40,*(undefined8 *)(*param_1 + 0x840));
      (**(code **)(*param_1 + 0x198))(param_1,plVar2,*(undefined8 *)(*param_1 + 0x1a0));
      lVar6 = *plVar2;
      uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar3 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
            puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_0283c85c;
          }
          uVar3 = uVar3 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar3 != 0);
      }
      puVar5 = (undefined8 *)
               FUN_01ecb238(plVar2,*(long *)
                                    Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                            ,0);
LAB_0283c85c:
      (*(code *)*puVar5)(plVar2,puVar5[1]);
    }
  }
  return;
}


