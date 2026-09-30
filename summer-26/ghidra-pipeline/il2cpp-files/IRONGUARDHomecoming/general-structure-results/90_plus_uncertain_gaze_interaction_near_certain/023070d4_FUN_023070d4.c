/*
FUNCTION_NAME: FUN_023070d4
ENTRY_POINT: 023070d4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 174
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_10;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x023074bc) */
/* WARNING: Removing unreachable block (ram,0x02307424) */

void FUN_023070d4(long *param_1,long param_2,void *param_3,long param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  int *piVar7;
  long *plVar8;
  ulong __n;
  undefined8 *__dest;
  void *__s;
  undefined8 *puVar9;
  ulong uVar10;
  void *__s_00;
  void *apvStack_90 [2];
  long local_80;
  undefined8 *local_78;
  char local_6c [4];
  long local_68;
  
  local_80 = tpidr_el0;
  local_68 = *(long *)(local_80 + 0x28);
  plVar8 = *(long **)(param_4 + 0x38);
  apvStack_90[1] = param_3;
  if (plVar8 == (long *)0x0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    plVar8 = *(long **)(param_4 + 0x38);
    if (plVar8 == (long *)0x0) {
      FUN_01ecafa0(param_4);
      plVar8 = *(long **)(param_4 + 0x38);
    }
  }
  __n = (ulong)*(uint *)(plVar8[2] + 0xfc);
  uVar10 = __n + 0xf & 0x1fffffff0;
  __dest = (undefined8 *)((long)apvStack_90 - uVar10);
  puVar9 = (undefined8 *)((long)__dest - uVar10);
  __s = (void *)((long)puVar9 - uVar10);
  memset(__s,0,__n);
  __s_00 = (void *)((long)__s - uVar10);
  memset(__s_00,0,__n);
  puVar2 = Method_UnityEngine_UIElements_BoundsIntField_<_ctor>b__10_1__;
  if ((param_1 != (long *)0x0) &&
     (puVar2 = Method_UnityEngine_CanvasRenderer_SetColor__, param_2 != 0)) {
    memset(__s,0,__n);
    lVar4 = *plVar8;
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01ecaf44(lVar4);
    }
    lVar5 = *param_1;
    uVar10 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar10 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar4) {
          puVar1 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_0230721c;
        }
        uVar10 = uVar10 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar10 != 0);
    }
    puVar1 = (undefined8 *)FUN_01ecb238(param_1,lVar4,0);
LAB_0230721c:
    plVar8 = (long *)(*(code *)*puVar1)(param_1,puVar1[1]);
    puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    lVar4 = 0;
    do {
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar5 = *plVar8;
      uVar10 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar10 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)puVar2) {
            puVar1 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_02307288;
          }
          uVar10 = uVar10 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar10 != 0);
      }
      puVar1 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)puVar2,0);
LAB_02307288:
      uVar10 = (*(code *)*puVar1)(plVar8,puVar1[1]);
      if ((uVar10 & 1) == 0) {
        if (plVar8 == (long *)0x0) goto LAB_02307418;
        lVar5 = *plVar8;
        uVar10 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar10 == 0) goto LAB_023073f0;
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        goto LAB_023073d8;
      }
      lVar5 = *(long *)(*(long *)(param_4 + 0x38) + 0x20);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_01ecaf44(lVar5);
      }
      lVar6 = *plVar8;
      uVar10 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar10 != 0) {
        piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == lVar5) {
            lVar5 = lVar6 + (long)*piVar7 * 0x10 + 0x138;
            goto LAB_023072fc;
          }
          uVar10 = uVar10 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar10 != 0);
      }
      lVar5 = FUN_01ecb238(plVar8,lVar5,0);
LAB_023072fc:
      lVar5 = *(long *)(lVar5 + 8);
      local_78 = __dest;
      (**(code **)(lVar5 + 0x10))(*(undefined8 *)(lVar5 + 8),lVar5,plVar8,&local_78,__dest);
      memcpy(__s_00,__dest,__n);
      memcpy(puVar9,__s_00,__n);
      local_78 = puVar9;
      if (-1 < *(int *)(*(long *)(*(long *)(param_4 + 0x38) + 0x10) + 0x28)) {
        local_78 = (undefined8 *)*puVar9;
      }
      puVar1 = *(undefined8 **)(*(long *)(param_4 + 0x38) + 0x30);
      (*(code *)puVar1[2])(*puVar1,puVar1,param_2,&local_78,local_6c);
      if (local_6c[0] != '\0') {
        memcpy(__dest,__s_00,__n);
        memcpy(__s,__dest,__n);
        if (lVar4 == 0x7fffffffffffffff) {
          uVar3 = FUN_01f08a4c();
                    /* WARNING: Subroutine does not return */
          FUN_01f08910(uVar3,param_4);
        }
        lVar4 = lVar4 + 1;
      }
    } while( true );
  }
  uVar3 = thunk_FUN_01efb3a4(puVar2);
  uVar3 = FUN_03971094(uVar3,0);
  goto LAB_023074d4;
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar7 = piVar7 + 4;
    if (uVar10 == 0) break;
LAB_023073d8:
    if (*(long *)(piVar7 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar9 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_0230740c;
    }
  }
LAB_023073f0:
  puVar9 = (undefined8 *)
           FUN_01ecb238(plVar8,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_0230740c:
  (*(code *)*puVar9)(plVar8,puVar9[1]);
LAB_02307418:
  if (lVar4 == 1) {
    memcpy(__dest,__s,__n);
    memcpy(apvStack_90[1],__dest,__n);
    if (*(long *)(local_80 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  if (lVar4 == 0) {
    uVar3 = FUN_03971290();
  }
  else {
    uVar3 = FUN_039711b8(0);
  }
LAB_023074d4:
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar3,param_4);
}


