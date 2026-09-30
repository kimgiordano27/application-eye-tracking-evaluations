/*
FUNCTION_NAME: System.Array$$InternalArray__IndexOf<KeyValuePair<object,-int>>
ENTRY_POINT: 020888c8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_6;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02088b58) */

void System_Array__InternalArray__IndexOf<KeyValuePair<object,_int>>(undefined8 param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  long *plVar10;
  int in_w9;
  ulong uVar11;
  int *piVar12;
  long *unaff_x22;
  
  if (in_w9 == 0) {
    thunk_FUN_01ee6d7c(param_1);
  }
  lVar5 = FUN_023aa90c();
  if (lVar5 != 0) {
    FUN_0406f8a4(lVar5,0,0);
    uVar6 = FUN_022c59ec();
                    /* try { // try from 02088914 to 0218892b has its CatchHandler @ 02089ef0 */
    FUN_037a9b38(lVar5,uVar6,0);
    lVar7 = FUN_04070398(lVar5,0);
    if (lVar7 != 0) {
      FUN_0407de3c(lVar7,0);
      lVar5 = FUN_04070398(lVar5,0);
      puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
      if (lVar5 != 0) {
        plVar8 = (long *)FUN_0407eda0(lVar5,0);
        puVar4 = Method_UnityEngine_Rendering_ObjectPool<List<ProbeBrickIndex_VoxelMeta>>_Release__;
        puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        do {
          lVar7 = *plVar8;
          lVar5 = *(long *)puVar3;
          uVar11 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar11 != 0) {
            piVar12 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == lVar5) {
                puVar9 = (undefined8 *)(lVar7 + (long)*piVar12 * 0x10 + 0x138);
                goto LAB_020889d0;
              }
              uVar11 = uVar11 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar11 != 0);
          }
          puVar9 = (undefined8 *)FUN_01ecb238(plVar8,lVar5,0);
LAB_020889d0:
                    /* try { // try from 020889d0 to 021889e7 has its CatchHandler @ 02089ef0 */
          uVar11 = (*(code *)*puVar9)(plVar8,puVar9[1]);
          if ((uVar11 & 1) == 0) {
            plVar8 = (long *)thunk_FUN_01f116d0(plVar8,*(undefined8 *)puVar2);
            if (plVar8 == (long *)0x0) goto LAB_02088af4;
            lVar7 = *plVar8;
            lVar5 = *(long *)puVar2;
            uVar11 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar11 == 0) goto LAB_02088acc;
            piVar12 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            goto LAB_02088ab4;
          }
          lVar7 = *plVar8;
          lVar5 = *(long *)puVar3;
          uVar11 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar11 != 0) {
            piVar12 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == lVar5) {
                puVar9 = (undefined8 *)(lVar7 + (long)(*piVar12 + 1) * 0x10 + 0x138);
                goto LAB_02088a30;
              }
              uVar11 = uVar11 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar11 != 0);
          }
          puVar9 = (undefined8 *)FUN_01ecb238(plVar8,lVar5,1);
LAB_02088a30:
                    /* try { // try from 02088a34 to 02188a3b has its CatchHandler @ 02089ed4 */
          plVar10 = (long *)(*(code *)*puVar9)(plVar8,puVar9[1]);
          if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          bVar1 = *(byte *)(*(long *)puVar4 + 0x130);
          if ((*(byte *)(*plVar10 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar4)) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08cfc();
          }
          FUN_0407da88(plVar10,0);
        } while( true );
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar12 = piVar12 + 4;
    if (uVar11 == 0) break;
LAB_02088ab4:
    if (*(long *)(piVar12 + -2) == lVar5) {
      puVar9 = (undefined8 *)(lVar7 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_02088ae8;
    }
  }
LAB_02088acc:
  puVar9 = (undefined8 *)FUN_01ecb238(plVar8,lVar5,0);
LAB_02088ae8:
  (*(code *)*puVar9)(plVar8,puVar9[1]);
LAB_02088af4:
  uVar6 = FUN_040703d4();
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c(*unaff_x22);
  }
  FUN_040770d0(uVar6,0);
  return;
}


