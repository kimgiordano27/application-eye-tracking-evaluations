/*
FUNCTION_NAME: FUN_022e4c24
ENTRY_POINT: 022e4c24
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 174
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_10;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x022e4f74) */
/* WARNING: Type propagation algorithm not settling */

uint FUN_022e4c24(long *param_1,long param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  ulong __n;
  void *__src;
  undefined8 *puVar10;
  void *__s;
  long *plVar11;
  undefined8 *apuStack_80 [2];
  char local_6c [4];
  long local_68;
  undefined *puVar5;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  plVar11 = *(long **)(param_3 + 0x38);
  if (plVar11 == (long *)0x0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    plVar11 = *(long **)(param_3 + 0x38);
    if (plVar11 == (long *)0x0) {
      FUN_01ecafa0(param_3);
      plVar11 = *(long **)(param_3 + 0x38);
    }
  }
  __n = (ulong)*(uint *)(plVar11[5] + 0xfc);
  uVar8 = __n + 0xf & 0x1fffffff0;
  __src = (void *)((long)apuStack_80 - uVar8);
  puVar10 = (undefined8 *)((long)__src - uVar8);
  __s = (void *)((long)puVar10 - uVar8);
  memset(__s,0,__n);
  puVar5 = Method_UnityEngine_UIElements_BoundsIntField_<_ctor>b__10_1__;
  if ((param_1 == (long *)0x0) ||
     (puVar5 = Method_UnityEngine_CanvasRenderer_SetColor__, param_2 == 0)) {
    uVar4 = thunk_FUN_01efb3a4(puVar5);
    uVar4 = FUN_03971094(uVar4,0);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar4,param_3);
  }
  lVar6 = *plVar11;
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_01ecaf44(lVar6);
  }
  lVar7 = *param_1;
  uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == lVar6) {
        puVar3 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
        goto LAB_022e4d3c;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar3 = (undefined8 *)FUN_01ecb238(param_1,lVar6,0);
LAB_022e4d3c:
  plVar11 = (long *)(*(code *)*puVar3)(param_1,puVar3[1]);
  puVar5 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar6 = *plVar11;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar5) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_022e4da4;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ecb238(plVar11,*(long *)puVar5,0);
LAB_022e4da4:
    uVar2 = (*(code *)*puVar3)(plVar11,puVar3[1]);
    if ((uVar2 & 1) == 0) {
      uVar2 = 0;
      break;
    }
    lVar6 = *(long *)(*(long *)(param_3 + 0x38) + 0x18);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_01ecaf44(lVar6);
    }
    lVar7 = *plVar11;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar6) {
          lVar6 = lVar7 + (long)*piVar9 * 0x10 + 0x138;
          goto LAB_022e4e1c;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    lVar6 = FUN_01ecb238(plVar11,lVar6,0);
LAB_022e4e1c:
    lVar6 = *(long *)(lVar6 + 8);
    apuStack_80[1] = __src;
    (**(code **)(lVar6 + 0x10))(*(undefined8 *)(lVar6 + 8),lVar6,plVar11,apuStack_80 + 1,__src);
    memcpy(__s,__src,__n);
    memcpy(puVar10,__s,__n);
    apuStack_80[1] = puVar10;
    if (-1 < *(int *)(*(long *)(*(long *)(param_3 + 0x38) + 0x28) + 0x28)) {
      apuStack_80[1] = (undefined8 *)*puVar10;
    }
    puVar3 = *(undefined8 **)(*(long *)(param_3 + 0x38) + 0x30);
    (*(code *)puVar3[2])(*puVar3,puVar3,param_2,apuStack_80 + 1,local_6c);
  } while (local_6c[0] == '\0');
  if (plVar11 != (long *)0x0) {
    lVar6 = *plVar11;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar10 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_022e4f04;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar10 = (undefined8 *)
              FUN_01ecb238(plVar11,*(long *)
                                    Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                           ,0);
LAB_022e4f04:
    (*(code *)*puVar10)(plVar11,puVar10[1]);
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


