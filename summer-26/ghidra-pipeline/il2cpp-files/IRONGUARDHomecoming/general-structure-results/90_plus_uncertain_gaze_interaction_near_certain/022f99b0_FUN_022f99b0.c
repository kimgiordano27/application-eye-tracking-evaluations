/*
FUNCTION_NAME: FUN_022f99b0
ENTRY_POINT: 022f99b0
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


/* WARNING: Removing unreachable block (ram,0x022f9da4) */

void FUN_022f99b0(long *param_1,long param_2,void *param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar4;
  long lVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  long *plVar9;
  ulong __n;
  undefined8 *__src;
  void *__s;
  ulong uVar10;
  void *__s_00;
  undefined8 *puVar11;
  void *__s_01;
  void *apvStack_90 [2];
  long local_80;
  undefined8 *local_78;
  char local_6c [4];
  long local_68;
  undefined *puVar3;
  
  local_80 = tpidr_el0;
  local_68 = *(long *)(local_80 + 0x28);
  plVar9 = *(long **)(param_4 + 0x38);
  apvStack_90[1] = param_3;
  if (plVar9 == (long *)0x0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    plVar9 = *(long **)(param_4 + 0x38);
    if (plVar9 == (long *)0x0) {
      FUN_01ecafa0(param_4);
      plVar9 = *(long **)(param_4 + 0x38);
    }
  }
  __n = (ulong)*(uint *)(plVar9[5] + 0xfc);
  uVar10 = __n + 0xf & 0x1fffffff0;
  __src = (undefined8 *)((long)apvStack_90 - uVar10);
  puVar11 = (undefined8 *)((long)__src - uVar10);
  __s_01 = (void *)((long)puVar11 - uVar10);
  memset(__s_01,0,__n);
  __s = (void *)((long)__s_01 - uVar10);
  memset(__s,0,__n);
  __s_00 = (void *)((long)__s - uVar10);
  memset(__s_00,0,__n);
  puVar3 = Method_UnityEngine_UIElements_BoundsIntField_<_ctor>b__10_1__;
  if ((param_1 == (long *)0x0) ||
     (puVar3 = Method_UnityEngine_CanvasRenderer_SetColor__, param_2 == 0)) {
    uVar2 = thunk_FUN_01efb3a4(puVar3);
    uVar2 = FUN_03971094(uVar2,0);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar2,param_4);
  }
  lVar4 = *plVar9;
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01ecaf44(lVar4);
  }
  lVar5 = *param_1;
  uVar10 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar10 != 0) {
    piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == lVar4) {
        puVar1 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
        goto LAB_022f9b04;
      }
      uVar10 = uVar10 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar10 != 0);
  }
  puVar1 = (undefined8 *)FUN_01ecb238(param_1,lVar4,0);
LAB_022f9b04:
  plVar9 = (long *)(*(code *)*puVar1)(param_1,puVar1[1]);
  puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar4 = *plVar9;
    uVar10 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar10 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)puVar3) {
          puVar1 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_022f9b6c;
        }
        uVar10 = uVar10 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar10 != 0);
    }
    puVar1 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)puVar3,0);
LAB_022f9b6c:
    uVar10 = (*(code *)*puVar1)(plVar9,puVar1[1]);
    if ((uVar10 & 1) == 0) {
      iVar8 = 0xb;
      iVar7 = 0xb;
      goto joined_r0x022f9c94;
    }
    lVar4 = *(long *)(*(long *)(param_4 + 0x38) + 0x18);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01ecaf44(lVar4);
    }
    lVar5 = *plVar9;
    uVar10 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar10 != 0) {
      piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == lVar4) {
          lVar4 = lVar5 + (long)*piVar6 * 0x10 + 0x138;
          goto LAB_022f9be0;
        }
        uVar10 = uVar10 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar10 != 0);
    }
    lVar4 = FUN_01ecb238(plVar9,lVar4,0);
LAB_022f9be0:
    lVar4 = *(long *)(lVar4 + 8);
    local_78 = __src;
    (**(code **)(lVar4 + 0x10))(*(undefined8 *)(lVar4 + 8),lVar4,plVar9,&local_78,__src);
    memcpy(__s_01,__src,__n);
    memcpy(puVar11,__s_01,__n);
    local_78 = puVar11;
    if (-1 < *(int *)(*(long *)(*(long *)(param_4 + 0x38) + 0x28) + 0x28)) {
      local_78 = (undefined8 *)*puVar11;
    }
    puVar1 = *(undefined8 **)(*(long *)(param_4 + 0x38) + 0x30);
    (*(code *)puVar1[2])(*puVar1,puVar1,param_2,&local_78,local_6c);
  } while (local_6c[0] == '\0');
  memcpy(__src,__s_01,__n);
  memcpy(__s,__src,__n);
  iVar8 = 10;
  iVar7 = 10;
joined_r0x022f9c94:
  if (plVar9 != (long *)0x0) {
    lVar4 = *plVar9;
    uVar10 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar10 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar11 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_022f9cec;
        }
        uVar10 = uVar10 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar10 != 0);
    }
    puVar11 = (undefined8 *)
              FUN_01ecb238(plVar9,*(long *)
                                   Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                           ,0);
LAB_022f9cec:
    (*(code *)*puVar11)(plVar9,puVar11[1]);
    iVar7 = iVar8;
  }
  if (iVar7 == 0xb) {
LAB_022f9d10:
    memset(__s_00,0,__n);
    __s = __s_00;
  }
  else if (iVar7 != 10) {
    if (iVar7 != 0) goto LAB_022f9d44;
    goto LAB_022f9d10;
  }
  memcpy(__src,__s,__n);
  memcpy(apvStack_90[1],__src,__n);
LAB_022f9d44:
  if (*(long *)(local_80 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


