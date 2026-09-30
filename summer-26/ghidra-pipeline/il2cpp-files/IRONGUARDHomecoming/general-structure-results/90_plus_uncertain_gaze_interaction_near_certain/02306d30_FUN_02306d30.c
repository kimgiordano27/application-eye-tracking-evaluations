/*
FUNCTION_NAME: FUN_02306d30
ENTRY_POINT: 02306d30
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 174
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_10;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02306fe8) */
/* WARNING: Removing unreachable block (ram,0x02306f88) */

undefined8 FUN_02306d30(long *param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  
  if (*(long *)(param_3 + 0x38) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    if (*(long *)(param_3 + 0x38) == 0) {
      FUN_01ecafa0(param_3);
    }
  }
  puVar4 = Method_UnityEngine_UIElements_BoundsIntField_<_ctor>b__10_1__;
  if ((param_1 != (long *)0x0) &&
     (puVar4 = Method_UnityEngine_CanvasRenderer_SetColor__, param_2 != 0)) {
    lVar6 = **(long **)(param_3 + 0x38);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_01ecaf44(lVar6);
    }
    lVar7 = *param_1;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar6) {
          puVar1 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_02306dec;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar1 = (undefined8 *)FUN_01ecb238(param_1,lVar6,0);
LAB_02306dec:
    plVar2 = (long *)(*(code *)*puVar1)(param_1,puVar1[1]);
    puVar4 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    lVar6 = 0;
    uVar5 = 0;
    do {
      if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar7 = *plVar2;
      uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)puVar4) {
            puVar1 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_02306e60;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar1 = (undefined8 *)FUN_01ecb238(plVar2,*(long *)puVar4,0);
LAB_02306e60:
      uVar9 = (*(code *)*puVar1)(plVar2,puVar1[1]);
      if ((uVar9 & 1) == 0) {
        if (plVar2 == (long *)0x0) goto LAB_02306f7c;
        lVar7 = *plVar2;
        uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar9 == 0) goto LAB_02306f54;
        piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        goto LAB_02306f3c;
      }
      lVar7 = *(long *)(*(long *)(param_3 + 0x38) + 0x20);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_01ecaf44(lVar7);
      }
      lVar8 = *plVar2;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == lVar7) {
            puVar1 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_02306ed4;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar1 = (undefined8 *)FUN_01ecb238(plVar2,lVar7,0);
LAB_02306ed4:
      uVar3 = (*(code *)*puVar1)(plVar2,puVar1[1]);
      uVar9 = (**(code **)(param_2 + 0x18))
                        (*(undefined8 *)(param_2 + 0x40),uVar3,*(undefined8 *)(param_2 + 0x28));
      if ((uVar9 & 1) != 0) {
        if (lVar6 == 0x7fffffffffffffff) {
          uVar5 = FUN_01f08a4c();
                    /* WARNING: Subroutine does not return */
          FUN_01f08910(uVar5,param_3);
        }
        lVar6 = lVar6 + 1;
        uVar5 = uVar3;
      }
    } while( true );
  }
  uVar5 = thunk_FUN_01efb3a4(puVar4);
  uVar5 = FUN_03971094(uVar5,0);
  goto LAB_02307000;
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
LAB_02306f3c:
    if (*(long *)(piVar10 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar1 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_02306f70;
    }
  }
LAB_02306f54:
  puVar1 = (undefined8 *)
           FUN_01ecb238(plVar2,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_02306f70:
  (*(code *)*puVar1)(plVar2,puVar1[1]);
LAB_02306f7c:
  if (lVar6 == 1) {
    return uVar5;
  }
  if (lVar6 == 0) {
    uVar5 = FUN_03971290();
  }
  else {
    uVar5 = FUN_039711b8(0);
  }
LAB_02307000:
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar5,param_3);
}


