/*
FUNCTION_NAME: FUN_039c01ac
ENTRY_POINT: 039c01ac
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 174
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_16;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x039c0400) */
/* WARNING: Removing unreachable block (ram,0x039c04f8) */

void FUN_039c01ac(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  undefined8 uVar14;
  
  if ((DAT_0483884b & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Component_GetComponent<OVRSkeletonRenderer>__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Component_GetComponent<OVRSpatialAnchor>__);
    thunk_FUN_01efb3a4(StringLiteral_5419);
    thunk_FUN_01efb3a4(StringLiteral_5420);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Component_GetComponent<Point>__);
    DAT_0483884b = 1;
  }
  puVar4 = StringLiteral_5419;
  if (param_2 == 0) {
LAB_039c04f4:
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  iVar5 = FUN_0265d6c4(param_2,*(undefined8 *)StringLiteral_5419);
  puVar3 = Method_UnityEngine_Component_GetComponent<OVRSpatialAnchor>__;
  puVar2 = Method_UnityEngine_Component_GetComponent<OVRSkeletonRenderer>__;
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (iVar5 < 1) {
    return;
  }
  iVar5 = 0;
LAB_039c027c:
  lVar7 = FUN_0265d74c(param_2,iVar5,*(undefined8 *)StringLiteral_5420);
  if (((*(long *)(param_1 + 0x10) != 0) && (FUN_039ab888(*(long *)(param_1 + 0x10)), lVar7 != 0)) &&
     (*(long *)(lVar7 + 0x18) != 0)) {
    plVar8 = (long *)FUN_0265d924(*(long *)(lVar7 + 0x18),*(undefined8 *)puVar3);
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    do {
      lVar11 = *plVar8;
      uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
            puVar9 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_039c0310;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar9 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)puVar1,0);
LAB_039c0310:
      uVar12 = (*(code *)*puVar9)(plVar8,puVar9[1]);
      if ((uVar12 & 1) == 0) goto LAB_039c0388;
      lVar11 = *plVar8;
      uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)puVar2) {
            puVar9 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_039c036c;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar9 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)puVar2,0);
LAB_039c036c:
      uVar10 = (*(code *)*puVar9)(plVar8,puVar9[1]);
      FUN_039b554c(param_1,uVar10);
    } while( true );
  }
  goto LAB_039c04f4;
LAB_039c0388:
  if (plVar8 != (long *)0x0) {
    lVar11 = *plVar8;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar9 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_039c03e8;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar9 = (undefined8 *)
             FUN_01ecb238(plVar8,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_039c03e8:
    (*(code *)*puVar9)(plVar8,puVar9[1]);
  }
  if (*(long *)(param_1 + 0x10) == 0) goto LAB_039c04f4;
  plVar8 = *(long **)(lVar7 + 0x10);
  FUN_039af678(*(long *)(param_1 + 0x10),plVar8);
  if (plVar8 == (long *)0x0) goto LAB_039c04f4;
  uVar10 = (**(code **)(*plVar8 + 1000))(plVar8,*(undefined8 *)(*plVar8 + 0x3f0));
  uVar14 = *(undefined8 *)Method_UnityEngine_Component_GetComponent<Point>__;
  if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
  }
  uVar14 = FUN_03579868(uVar14,0);
  uVar12 = FUN_03583338(uVar10,uVar14,0);
  if ((uVar12 & 1) != 0) {
    if (*(long *)(param_1 + 0x10) == 0) goto LAB_039c04f4;
    FUN_039ab8e8();
  }
  iVar5 = iVar5 + 1;
  iVar6 = FUN_0265d6c4(param_2,*(undefined8 *)puVar4);
  if (iVar6 <= iVar5) {
    return;
  }
  goto LAB_039c027c;
}


