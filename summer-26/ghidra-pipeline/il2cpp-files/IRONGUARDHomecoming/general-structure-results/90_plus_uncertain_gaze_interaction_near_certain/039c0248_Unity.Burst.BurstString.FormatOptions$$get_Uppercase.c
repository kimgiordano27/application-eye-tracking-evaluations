/*
FUNCTION_NAME: Unity.Burst.BurstString.FormatOptions$$get_Uppercase
ENTRY_POINT: 039c0248
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

void Unity_Burst_BurstString_FormatOptions__get_Uppercase(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long unaff_x20;
  undefined8 uVar13;
  
  iVar4 = FUN_0265d6c4();
  puVar3 = Method_UnityEngine_Component_GetComponent<OVRSpatialAnchor>__;
  puVar2 = Method_UnityEngine_Component_GetComponent<OVRSkeletonRenderer>__;
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (iVar4 < 1) {
    return;
  }
  iVar4 = 0;
LAB_039c027c:
  lVar6 = FUN_0265d74c();
  if (((*(long *)(unaff_x20 + 0x10) != 0) && (FUN_039ab888(*(long *)(unaff_x20 + 0x10)), lVar6 != 0)
      ) && (*(long *)(lVar6 + 0x18) != 0)) {
    plVar7 = (long *)FUN_0265d924(*(long *)(lVar6 + 0x18),*(undefined8 *)puVar3);
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    do {
      lVar10 = *plVar7;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
            puVar8 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_039c0310;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar8 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar1,0);
LAB_039c0310:
      uVar11 = (*(code *)*puVar8)(plVar7,puVar8[1]);
      if ((uVar11 & 1) == 0) goto LAB_039c0388;
      lVar10 = *plVar7;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
            puVar8 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_039c036c;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar8 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar2,0);
LAB_039c036c:
      (*(code *)*puVar8)(plVar7,puVar8[1]);
      FUN_039b554c();
    } while( true );
  }
  goto LAB_039c04f4;
LAB_039c0388:
  if (plVar7 != (long *)0x0) {
    lVar10 = *plVar7;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar8 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_039c03e8;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar8 = (undefined8 *)
             FUN_01ecb238(plVar7,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_039c03e8:
    (*(code *)*puVar8)(plVar7,puVar8[1]);
  }
  if (*(long *)(unaff_x20 + 0x10) != 0) {
    plVar7 = *(long **)(lVar6 + 0x10);
    FUN_039af678(*(long *)(unaff_x20 + 0x10),plVar7);
    if (plVar7 != (long *)0x0) {
      uVar9 = (**(code **)(*plVar7 + 1000))(plVar7,*(undefined8 *)(*plVar7 + 0x3f0));
      uVar13 = *(undefined8 *)Method_UnityEngine_Component_GetComponent<Point>__;
      if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0)
      {
        thunk_FUN_01ee6d7c(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
      }
      uVar13 = FUN_03579868(uVar13,0);
      uVar11 = FUN_03583338(uVar9,uVar13,0);
      if ((uVar11 & 1) != 0) {
        if (*(long *)(unaff_x20 + 0x10) == 0) goto LAB_039c04f4;
        FUN_039ab8e8();
      }
      iVar4 = iVar4 + 1;
      iVar5 = FUN_0265d6c4();
      if (iVar5 <= iVar4) {
        return;
      }
      goto LAB_039c027c;
    }
  }
LAB_039c04f4:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


