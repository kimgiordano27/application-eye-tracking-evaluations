/*
FUNCTION_NAME: FUN_02979b88
ENTRY_POINT: 02979b88
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


/* WARNING: Removing unreachable block (ram,0x02979d94) */

void FUN_02979b88(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  int *piVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  
  if ((DAT_04830cbd & 1) == 0) {
                    /* try { // try from 02979bb4 to 02a79bb7 has its CatchHandler @ 02979be4 */
                    /* try { // try from 02979bb8 to 02a79bcb has its CatchHandler @ 02979bec */
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    DAT_04830cbd = 1;
  }
  if (param_1 == (long *)0x0) {
LAB_02979d8c:
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  FUN_0422b6c0(param_1,0);
  if (param_1[0x7d] != 0) {
    uVar4 = FUN_0422b208(param_1,0);
    lVar9 = param_1[0x7e];
    uVar11 = *(undefined4 *)((long)param_1 + 0x3f4);
    lVar1 = param_1[0x7f];
    uVar12 = *(undefined4 *)((long)param_1 + 0x3fc);
    FUN_0422b27c(param_1,param_1,uVar4,0);
    plVar5 = (long *)FUN_0249b5b8(*(undefined8 *)
                                   (*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x28));
    if (plVar5 == (long *)0x0) goto LAB_02979d8c;
    uVar6 = (**(code **)(*plVar5 + 0x1b8))
                      ((int)lVar9,uVar11,(int)lVar1,uVar12,(int)param_1[0x7e],
                       *(undefined4 *)((long)param_1 + 0x3f4),(int)param_1[0x7f],
                       *(undefined4 *)((long)param_1 + 0x3fc),plVar5,
                       *(undefined8 *)(*plVar5 + 0x1c0));
    if ((uVar6 & 1) == 0) {
      lVar2 = param_1[0x7e];
      uVar13 = *(undefined4 *)((long)param_1 + 0x3f4);
      lVar3 = param_1[0x7f];
      uVar14 = *(undefined4 *)((long)param_1 + 0x3fc);
      lVar7 = *(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x58);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_01ecaf44();
      }
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      plVar5 = (long *)FUN_029e7ccc((int)lVar9,uVar11,(int)lVar1,uVar12,(int)lVar2,uVar13,(int)lVar3
                                    ,uVar14,*(undefined8 *)
                                             (*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x50));
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      FUN_041d4560(plVar5,param_1,0);
      (**(code **)(*param_1 + 0x838))
                ((int)param_1[0x7e],*(undefined4 *)((long)param_1 + 0x3f4),(int)param_1[0x7f],
                 *(undefined4 *)((long)param_1 + 0x3fc),param_1,*(undefined8 *)(*param_1 + 0x840));
      (**(code **)(*param_1 + 0x198))(param_1,plVar5,*(undefined8 *)(*param_1 + 0x1a0));
      lVar9 = *plVar5;
      uVar6 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar6 != 0) {
        piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
            puVar8 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_02979d60;
          }
          uVar6 = uVar6 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar6 != 0);
      }
      puVar8 = (undefined8 *)
               FUN_01ecb238(plVar5,*(long *)
                                    Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                            ,0);
LAB_02979d60:
      (*(code *)*puVar8)(plVar5,puVar8[1]);
    }
  }
  return;
}


