/*
FUNCTION_NAME: FUN_0283d520
ENTRY_POINT: 0283d520
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


/* WARNING: Removing unreachable block (ram,0x0283d780) */

void FUN_0283d520(long *param_1,long *param_2,long param_3)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  int *piVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long local_70;
  long lStack_68;
  long local_60;
  long local_50;
  long lStack_48;
  long local_40;
  
                    /* try { // try from 0283d540 to 0293d547 has its CatchHandler @ 0283d5ec */
  if ((DAT_0483083e & 1) == 0) {
                    /* try { // try from 0283d548 to 0293d553 has its CatchHandler @ 0283cd40 */
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
                    /* try { // try from 0283d554 to 0293d557 has its CatchHandler @ 0283d5d0 */
                    /* try { // try from 0283d558 to 0293d55b has its CatchHandler @ 0283d5b4 */
    DAT_0483083e = 1;
  }
                    /* try { // try from 0283d55c to 0293d55f has its CatchHandler @ 0283d5a8 */
                    /* try { // try from 0283d560 to 0293d567 has its CatchHandler @ 0283d5c8 */
                    /* try { // try from 0283d568 to 0293d56b has its CatchHandler @ 0283d5c4 */
  plVar1 = (long *)FUN_028533e0(*(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x28))
  ;
                    /* try { // try from 0283d56c to 0293d56f has its CatchHandler @ 0283d5a4 */
  local_40 = param_1[0x80];
                    /* try { // try from 0283d570 to 0293d573 has its CatchHandler @ 0283d5c0 */
  lStack_48 = param_1[0x7f];
  local_50 = param_1[0x7e];
                    /* try { // try from 0283d574 to 0293d577 has its CatchHandler @ 0283d5a0 */
                    /* try { // try from 0283d578 to 0293d57b has its CatchHandler @ 0283d5bc */
                    /* try { // try from 0283d57c to 0293d57f has its CatchHandler @ 0283d5b0 */
  local_60 = param_2[2];
                    /* try { // try from 0283d580 to 0293d583 has its CatchHandler @ 0283d59c */
  lStack_68 = param_2[1];
  local_70 = *param_2;
                    /* try { // try from 0283d584 to 0293d587 has its CatchHandler @ 0283d5b8 */
                    /* try { // try from 0283d588 to 0293d607 has its CatchHandler @ 0283cd40 */
  if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar2 = (**(code **)(*plVar1 + 0x1b8))
                    (plVar1,&local_50,&local_70,*(undefined8 *)(*plVar1 + 0x1c0));
  if ((uVar2 & 1) == 0) {
    lVar3 = FUN_04224ea4(param_1,0);
    if (lVar3 == 0) {
      local_40 = param_2[2];
      lStack_48 = param_2[1];
      local_50 = *param_2;
      (**(code **)(*param_1 + 0x838))(param_1,&local_50,*(undefined8 *)(*param_1 + 0x840));
    }
    else {
      lVar5 = param_1[0x80];
      lVar10 = param_1[0x7f];
      lVar8 = param_1[0x7e];
      local_40 = param_2[2];
      lStack_48 = param_2[1];
      local_50 = *param_2;
      (**(code **)(*param_1 + 0x838))(param_1,&local_50,*(undefined8 *)(*param_1 + 0x840));
      lVar6 = param_1[0x80];
      lVar11 = param_1[0x7f];
      lVar9 = param_1[0x7e];
      lVar3 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x58);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_01ecaf44();
      }
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      local_70 = lVar9;
      lStack_68 = lVar11;
      local_60 = lVar6;
      local_50 = lVar8;
      lStack_48 = lVar10;
      local_40 = lVar5;
      plVar1 = (long *)FUN_029e4e58(&local_50,&local_70,
                                    *(undefined8 *)
                                     (*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x50));
      if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      FUN_041d4560(plVar1,param_1,0);
      (**(code **)(*param_1 + 0x198))(param_1,plVar1,*(undefined8 *)(*param_1 + 0x1a0));
      lVar3 = *plVar1;
      uVar2 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar2 != 0) {
        piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
            puVar4 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_0283d754;
          }
          uVar2 = uVar2 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar2 != 0);
      }
      puVar4 = (undefined8 *)
               FUN_01ecb238(plVar1,*(long *)
                                    Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                            ,0);
LAB_0283d754:
      (*(code *)*puVar4)(plVar1,puVar4[1]);
    }
  }
  return;
}


