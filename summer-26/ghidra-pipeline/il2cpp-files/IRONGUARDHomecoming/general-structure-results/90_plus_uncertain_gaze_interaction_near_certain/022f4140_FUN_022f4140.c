/*
FUNCTION_NAME: FUN_022f4140
ENTRY_POINT: 022f4140
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 174
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_10;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x022f4494) */
/* WARNING: Type propagation algorithm not settling */

int FUN_022f4140(long *param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  int iVar9;
  long *plVar10;
  ulong __n;
  void *__src;
  undefined8 *puVar11;
  void *__s;
  undefined8 *apuStack_80 [2];
  char local_6c [4];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  plVar10 = *(long **)(param_3 + 0x38);
  if (plVar10 == (long *)0x0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    plVar10 = *(long **)(param_3 + 0x38);
    if (plVar10 == (long *)0x0) {
      FUN_01ecafa0(param_3);
      plVar10 = *(long **)(param_3 + 0x38);
    }
  }
  __n = (ulong)*(uint *)(plVar10[5] + 0xfc);
  uVar7 = __n + 0xf & 0x1fffffff0;
  __src = (void *)((long)apuStack_80 - uVar7);
  puVar11 = (undefined8 *)((long)__src - uVar7);
  __s = (void *)((long)puVar11 - uVar7);
  memset(__s,0,__n);
  puVar3 = Method_UnityEngine_UIElements_BoundsIntField_<_ctor>b__10_1__;
  if ((param_1 == (long *)0x0) ||
     (puVar3 = Method_UnityEngine_CanvasRenderer_SetColor__, param_2 == 0)) {
    uVar4 = thunk_FUN_01efb3a4(puVar3);
    uVar4 = FUN_03971094(uVar4,0);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar4,param_3);
  }
  lVar5 = *plVar10;
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_01ecaf44(lVar5);
  }
  lVar6 = *param_1;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == lVar5) {
        puVar2 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_022f4258;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar2 = (undefined8 *)FUN_01ecb238(param_1,lVar5,0);
LAB_022f4258:
  plVar10 = (long *)(*(code *)*puVar2)(param_1,puVar2[1]);
  puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  iVar9 = 0;
  do {
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar5 = *plVar10;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar3) {
          puVar2 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_022f42c4;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238(plVar10,*(long *)puVar3,0);
LAB_022f42c4:
    uVar7 = (*(code *)*puVar2)(plVar10,puVar2[1]);
    if ((uVar7 & 1) == 0) {
      if (plVar10 == (long *)0x0) goto LAB_022f4430;
      lVar5 = *plVar10;
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar7 == 0) goto LAB_022f4408;
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      break;
    }
    lVar5 = *(long *)(*(long *)(param_3 + 0x38) + 0x18);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01ecaf44(lVar5);
    }
    lVar6 = *plVar10;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar5) {
          lVar5 = lVar6 + (long)*piVar8 * 0x10 + 0x138;
          goto LAB_022f4338;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    lVar5 = FUN_01ecb238(plVar10,lVar5,0);
LAB_022f4338:
    lVar5 = *(long *)(lVar5 + 8);
    apuStack_80[1] = __src;
    (**(code **)(lVar5 + 0x10))(*(undefined8 *)(lVar5 + 8),lVar5,plVar10,apuStack_80 + 1,__src);
    memcpy(__s,__src,__n);
    memcpy(puVar11,__s,__n);
    apuStack_80[1] = puVar11;
    if (-1 < *(int *)(*(long *)(*(long *)(param_3 + 0x38) + 0x28) + 0x28)) {
      apuStack_80[1] = (undefined8 *)*puVar11;
    }
    puVar2 = *(undefined8 **)(*(long *)(param_3 + 0x38) + 0x30);
    (*(code *)puVar2[2])(*puVar2,puVar2,param_2,apuStack_80 + 1,local_6c);
    if (local_6c[0] != '\0') {
      if (iVar9 == 0x7fffffff) {
        uVar4 = FUN_01f08a4c();
                    /* WARNING: Subroutine does not return */
        FUN_01f08910(uVar4,param_3);
      }
      iVar9 = iVar9 + 1;
    }
  } while( true );
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
    if (*(long *)(piVar8 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar11 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_022f4424;
    }
  }
LAB_022f4408:
  puVar11 = (undefined8 *)
            FUN_01ecb238(plVar10,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                         ,0);
LAB_022f4424:
  (*(code *)*puVar11)(plVar10,puVar11[1]);
LAB_022f4430:
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return iVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


