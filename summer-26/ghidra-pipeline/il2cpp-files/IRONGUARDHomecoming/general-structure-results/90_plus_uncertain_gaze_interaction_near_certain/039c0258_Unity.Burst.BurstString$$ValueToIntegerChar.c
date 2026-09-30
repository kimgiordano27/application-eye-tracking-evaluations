/*
FUNCTION_NAME: Unity.Burst.BurstString$$ValueToIntegerChar
ENTRY_POINT: 039c0258
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 111
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_10;functionality_gaze_interaction_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x039c0400) */
/* WARNING: Removing unreachable block (ram,0x039c04f8) */

void Unity_Burst_BurstString__ValueToIntegerChar(int param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long unaff_x20;
  int iVar12;
  undefined8 uVar13;
  
  puVar3 = Method_UnityEngine_Component_GetComponent<OVRSpatialAnchor>__;
  puVar2 = Method_UnityEngine_Component_GetComponent<OVRSkeletonRenderer>__;
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (param_1 < 1) {
    return;
  }
  iVar12 = 0;
LAB_039c027c:
  lVar5 = FUN_0265d74c();
  if (((*(long *)(unaff_x20 + 0x10) != 0) && (FUN_039ab888(*(long *)(unaff_x20 + 0x10)), lVar5 != 0)
      ) && (*(long *)(lVar5 + 0x18) != 0)) {
    plVar6 = (long *)FUN_0265d924(*(long *)(lVar5 + 0x18),*(undefined8 *)puVar3);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    do {
      lVar9 = *plVar6;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
            puVar7 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_039c0310;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar7 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar1,0);
LAB_039c0310:
      uVar10 = (*(code *)*puVar7)(plVar6,puVar7[1]);
      if ((uVar10 & 1) == 0) goto LAB_039c0388;
      lVar9 = *plVar6;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
            puVar7 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_039c036c;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar7 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar2,0);
LAB_039c036c:
      (*(code *)*puVar7)(plVar6,puVar7[1]);
      FUN_039b554c();
    } while( true );
  }
  goto LAB_039c04f4;
LAB_039c0388:
  if (plVar6 != (long *)0x0) {
    lVar9 = *plVar6;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar7 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_039c03e8;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar7 = (undefined8 *)
             FUN_01ecb238(plVar6,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_039c03e8:
    (*(code *)*puVar7)(plVar6,puVar7[1]);
  }
  if (*(long *)(unaff_x20 + 0x10) != 0) {
    plVar6 = *(long **)(lVar5 + 0x10);
    FUN_039af678(*(long *)(unaff_x20 + 0x10),plVar6);
    if (plVar6 != (long *)0x0) {
      uVar8 = (**(code **)(*plVar6 + 1000))(plVar6,*(undefined8 *)(*plVar6 + 0x3f0));
      uVar13 = *(undefined8 *)Method_UnityEngine_Component_GetComponent<Point>__;
      if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0)
      {
        thunk_FUN_01ee6d7c(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
      }
      uVar13 = FUN_03579868(uVar13,0);
      uVar10 = FUN_03583338(uVar8,uVar13,0);
      if ((uVar10 & 1) != 0) {
        if (*(long *)(unaff_x20 + 0x10) == 0) goto LAB_039c04f4;
        FUN_039ab8e8();
      }
      iVar12 = iVar12 + 1;
      iVar4 = FUN_0265d6c4();
      if (iVar4 <= iVar12) {
        return;
      }
      goto LAB_039c027c;
    }
  }
LAB_039c04f4:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


