/*
FUNCTION_NAME: FUN_03a2fd88
ENTRY_POINT: 03a2fd88
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 184
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_10;ray_or_cast_sink_hits_3;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x03a301e0) */

long FUN_03a2fd88(long param_1)

{
  long *plVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  int *piVar14;
  long *plVar15;
  
  if ((DAT_04838ba1 & 1) == 0) {
    thunk_FUN_01efb3a4(StringLiteral_7043);
    thunk_FUN_01efb3a4(StringLiteral_6988);
    thunk_FUN_01efb3a4(Method_System_Linq_Enumerable_ToList<BezierKnot>__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Component_GetComponents<BaseRaycaster>__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(StringLiteral_7044);
    thunk_FUN_01efb3a4(Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__);
    DAT_04838ba1 = 1;
  }
  plVar15 = (long *)(param_1 + 0x90);
  if (*plVar15 != 0) goto LAB_03a3019c;
  uVar7 = thunk_FUN_01f117cc(*(undefined8 *)StringLiteral_7043);
  thunk_FUN_03ab138c(uVar7,0);
  *(undefined8 *)(param_1 + 0x90) = uVar7;
  thunk_FUN_01f51358(plVar15,uVar7);
  plVar8 = *(long **)(param_1 + 0x88);
  if ((plVar8 != (long *)0x0) &&
     (uVar9 = (**(code **)(*plVar8 + 0x188))(plVar8,*(undefined8 *)(*plVar8 + 400)),
     (uVar9 & 1) != 0)) {
    plVar8 = *(long **)(param_1 + 0x88);
    if ((plVar8 == (long *)0x0) ||
       (plVar8 = (long *)(**(code **)(*plVar8 + 0x198))(plVar8,*(undefined8 *)(*plVar8 + 0x1a0)),
       puVar4 = StringLiteral_6988, plVar8 == (long *)0x0)) goto LAB_03a301d4;
    lVar12 = *plVar8;
    bVar2 = *(byte *)(*(long *)StringLiteral_6988 + 0x130);
    if ((*(byte *)(lVar12 + 0x130) < bVar2) ||
       (*(long *)(*(long *)(lVar12 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)StringLiteral_6988))
    {
LAB_03a301d8:
                    /* WARNING: Subroutine does not return */
      FUN_01f08cfc();
    }
    lVar12 = (**(code **)(lVar12 + 0x1b8))(plVar8,*(undefined8 *)(lVar12 + 0x1c0));
    if (lVar12 != 0) {
      plVar8 = *(long **)(param_1 + 0x88);
      if ((plVar8 == (long *)0x0) ||
         (plVar8 = (long *)(**(code **)(*plVar8 + 0x198))(plVar8,*(undefined8 *)(*plVar8 + 0x1a0)),
         plVar8 == (long *)0x0)) goto LAB_03a301d4;
      lVar12 = *plVar8;
      bVar2 = *(byte *)(*(long *)puVar4 + 0x130);
      if ((*(byte *)(lVar12 + 0x130) < bVar2) ||
         (*(long *)(*(long *)(lVar12 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)puVar4))
      goto LAB_03a301d8;
      plVar8 = (long *)(**(code **)(lVar12 + 0x1b8))(plVar8,*(undefined8 *)(lVar12 + 0x1c0));
      if (plVar8 == (long *)0x0) goto LAB_03a301d4;
      lVar12 = *plVar8;
      uVar9 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar9 != 0) {
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)StringLiteral_7044) {
            puVar10 = (undefined8 *)(lVar12 + (long)(*piVar14 + 1) * 0x10 + 0x138);
            goto LAB_03a2ff60;
          }
          uVar9 = uVar9 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar9 != 0);
      }
      puVar10 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)StringLiteral_7044,1);
LAB_03a2ff60:
      uVar9 = (*(code *)*puVar10)(plVar8,puVar10[1]);
      if ((uVar9 & 1) != 0) goto LAB_03a3019c;
    }
  }
  plVar8 = (long *)FUN_035b0974(0);
  if (plVar8 != (long *)0x0) {
    lVar12 = *plVar8;
    uVar9 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar9 != 0) {
      piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) ==
            *(long *)Method_UnityEngine_Component_GetComponents<BaseRaycaster>__) {
          puVar10 = (undefined8 *)(lVar12 + (long)(*piVar14 + 9) * 0x10 + 0x138);
          goto LAB_03a2ffd8;
        }
        uVar9 = uVar9 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar9 != 0);
    }
    puVar10 = (undefined8 *)
              FUN_01ecb238(plVar8,*(long *)
                                   Method_UnityEngine_Component_GetComponents<BaseRaycaster>__,9);
LAB_03a2ffd8:
    plVar8 = (long *)(*(code *)*puVar10)(plVar8,puVar10[1]);
    puVar6 = Method_System_Linq_Enumerable_ToList<BezierKnot>__;
    puVar5 = Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__;
    puVar4 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    do {
      lVar13 = *plVar8;
      lVar12 = *(long *)puVar4;
      uVar9 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar9 != 0) {
        piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == lVar12) {
            puVar10 = (undefined8 *)(lVar13 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_03a30050;
          }
          uVar9 = uVar9 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar9 != 0);
      }
      puVar10 = (undefined8 *)FUN_01ecb238(plVar8,lVar12,0);
LAB_03a30050:
      uVar9 = (*(code *)*puVar10)(plVar8,puVar10[1]);
      puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
      if ((uVar9 & 1) == 0) {
        plVar8 = (long *)thunk_FUN_01f116d0(plVar8,*(undefined8 *)
                                                                                                        
                                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                                           );
        if (plVar8 == (long *)0x0) goto LAB_03a3019c;
        lVar12 = *plVar8;
        uVar9 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar9 == 0) goto LAB_03a30170;
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        goto LAB_03a30158;
      }
      lVar13 = *plVar8;
      lVar12 = *(long *)puVar4;
      uVar9 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar9 != 0) {
        piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == lVar12) {
            puVar10 = (undefined8 *)(lVar13 + (long)(*piVar14 + 1) * 0x10 + 0x138);
            goto LAB_03a300b0;
          }
          uVar9 = uVar9 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar9 != 0);
      }
      puVar10 = (undefined8 *)FUN_01ecb238(plVar8,lVar12,1);
LAB_03a300b0:
      plVar11 = (long *)(*(code *)*puVar10)(plVar8,puVar10[1]);
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      if (*(long *)(*plVar11 + 0x40) != *(long *)(*(long *)puVar6 + 0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08cfc();
      }
      plVar11 = (long *)thunk_FUN_01f11920();
      if ((long *)*plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      plVar1 = (long *)*plVar11;
      plVar11 = (long *)plVar11[1];
      lVar12 = *(long *)puVar5;
      if ((plVar1 != (long *)0x0) && (*plVar1 != lVar12)) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08cfc(plVar1,lVar12);
      }
      if ((plVar11 != (long *)0x0) && (*plVar11 != lVar12)) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08cfc(plVar11,lVar12);
      }
      (**(code **)(*(long *)*plVar15 + 0x188))();
    } while( true );
  }
LAB_03a301d4:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar14 = piVar14 + 4;
    if (uVar9 == 0) break;
LAB_03a30158:
    if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
      puVar10 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
      goto LAB_03a3018c;
    }
  }
LAB_03a30170:
  puVar10 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)puVar3,0);
LAB_03a3018c:
  (*(code *)*puVar10)(plVar8,puVar10[1]);
LAB_03a3019c:
  return *plVar15;
}


