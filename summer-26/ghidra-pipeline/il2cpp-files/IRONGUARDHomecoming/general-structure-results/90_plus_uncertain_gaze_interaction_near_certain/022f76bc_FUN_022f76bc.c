/*
FUNCTION_NAME: FUN_022f76bc
ENTRY_POINT: 022f76bc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 174
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_10;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x022f7a88) */
/* WARNING: Type propagation algorithm not settling */

void FUN_022f76bc(long *param_1,long param_2,void *param_3,long param_4)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  long *plVar10;
  ulong __n;
  void *__src;
  ulong uVar11;
  void *__s;
  undefined8 *puVar12;
  void *__s_00;
  void *local_80 [2];
  char local_6c [4];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  plVar10 = *(long **)(param_4 + 0x38);
  local_80[0] = param_3;
  if (plVar10 == (long *)0x0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    plVar10 = *(long **)(param_4 + 0x38);
    if (plVar10 == (long *)0x0) {
      FUN_01ecafa0(param_4);
      plVar10 = *(long **)(param_4 + 0x38);
    }
  }
  __n = (ulong)*(uint *)(plVar10[5] + 0xfc);
  uVar11 = __n + 0xf & 0x1fffffff0;
  __src = (void *)((long)local_80 - uVar11);
  puVar12 = (undefined8 *)((long)__src - uVar11);
  __s_00 = (void *)((long)puVar12 - uVar11);
  memset(__s_00,0,__n);
  __s = (void *)((long)__s_00 - uVar11);
  memset(__s,0,__n);
  puVar4 = Method_UnityEngine_UIElements_BoundsIntField_<_ctor>b__10_1__;
  if ((param_1 != (long *)0x0) &&
     (puVar4 = Method_UnityEngine_CanvasRenderer_SetColor__, param_2 != 0)) {
    lVar5 = *plVar10;
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01ecaf44(lVar5);
    }
    lVar6 = *param_1;
    uVar11 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar11 != 0) {
      piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar5) {
          puVar2 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_022f77f4;
        }
        uVar11 = uVar11 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar11 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238(param_1,lVar5,0);
LAB_022f77f4:
    plVar10 = (long *)(*(code *)*puVar2)(param_1,puVar2[1]);
    puVar4 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    do {
      lVar5 = *plVar10;
      uVar11 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar11 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)puVar4) {
            puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_022f785c;
          }
          uVar11 = uVar11 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar11 != 0);
      }
      puVar2 = (undefined8 *)FUN_01ecb238(plVar10,*(long *)puVar4,0);
LAB_022f785c:
      uVar11 = (*(code *)*puVar2)(plVar10,puVar2[1]);
      if ((uVar11 & 1) == 0) {
        iVar9 = 0xb;
        iVar8 = 0xb;
        goto joined_r0x022f7984;
      }
      lVar5 = *(long *)(*(long *)(param_4 + 0x38) + 0x18);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_01ecaf44(lVar5);
      }
      lVar6 = *plVar10;
      uVar11 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar11 != 0) {
        piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == lVar5) {
            lVar5 = lVar6 + (long)*piVar7 * 0x10 + 0x138;
            goto LAB_022f78d0;
          }
          uVar11 = uVar11 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar11 != 0);
      }
      lVar5 = FUN_01ecb238(plVar10,lVar5,0);
LAB_022f78d0:
      lVar5 = *(long *)(lVar5 + 8);
      local_80[1] = __src;
      (**(code **)(lVar5 + 0x10))(*(undefined8 *)(lVar5 + 8),lVar5,plVar10,local_80 + 1,__src);
      memcpy(__s_00,__src,__n);
      memcpy(puVar12,__s_00,__n);
      local_80[1] = puVar12;
      if (-1 < *(int *)(*(long *)(*(long *)(param_4 + 0x38) + 0x28) + 0x28)) {
        local_80[1] = (void *)*puVar12;
      }
      puVar2 = *(undefined8 **)(*(long *)(param_4 + 0x38) + 0x30);
      (*(code *)puVar2[2])(*puVar2,puVar2,param_2,local_80 + 1,local_6c);
    } while (local_6c[0] == '\0');
    memcpy(__src,__s_00,__n);
    memcpy(__s,__src,__n);
    iVar9 = 10;
    iVar8 = 10;
joined_r0x022f7984:
    if (plVar10 != (long *)0x0) {
      lVar5 = *plVar10;
      uVar11 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar11 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
            puVar12 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_022f79dc;
          }
          uVar11 = uVar11 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar11 != 0);
      }
      puVar12 = (undefined8 *)
                FUN_01ecb238(plVar10,*(long *)
                                      Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                             ,0);
LAB_022f79dc:
      (*(code *)*puVar12)(plVar10,puVar12[1]);
      iVar8 = iVar9;
    }
    if (iVar8 == 10) {
      memcpy(__src,__s,__n);
      memcpy(local_80[0],__src,__n);
    }
    else if ((iVar8 == 0xb) || (iVar8 == 0)) {
      uVar3 = FUN_03971290(0);
      goto LAB_022f7a7c;
    }
    if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  uVar3 = thunk_FUN_01efb3a4(puVar4);
  uVar3 = FUN_03971094(uVar3,0);
LAB_022f7a7c:
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar3,param_4);
}


