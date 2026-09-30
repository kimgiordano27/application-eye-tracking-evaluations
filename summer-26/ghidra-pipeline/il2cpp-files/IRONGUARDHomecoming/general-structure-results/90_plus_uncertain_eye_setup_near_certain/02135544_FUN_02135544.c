/*
FUNCTION_NAME: FUN_02135544
ENTRY_POINT: 02135544
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 129
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_12;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_6
*/


/* WARNING: Removing unreachable block (ram,0x02135b78) */

long FUN_02135544(long *param_1,long param_2,long param_3,undefined8 param_4,long param_5)

{
  ushort uVar1;
  long *plVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  undefined8 *puVar10;
  code *pcVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  void *__s;
  ulong __n;
  undefined8 *__src;
  undefined8 *puVar14;
  long alStack_c0 [2];
  undefined8 *local_b0;
  undefined8 *local_a8;
  long local_a0;
  long local_98;
  long local_90;
  undefined8 *local_88;
  undefined8 *local_80;
  long local_78;
  undefined1 local_6c [4];
  long local_68;
  
  alStack_c0[1] = tpidr_el0;
  local_68 = *(long *)(alStack_c0[1] + 0x28);
  lVar6 = *(long *)(param_5 + 0x38);
  local_a0 = param_3;
  local_98 = param_2;
  if (lVar6 == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    lVar6 = *(long *)(param_5 + 0x38);
    if (lVar6 == 0) {
      FUN_01ecafa0(param_5);
      lVar6 = *(long *)(param_5 + 0x38);
    }
  }
  __n = (ulong)*(uint *)(*(long *)(lVar6 + 0x30) + 0xfc);
  uVar8 = __n + 0xf & 0x1fffffff0;
  __src = (undefined8 *)((long)alStack_c0 - uVar8);
  local_a8 = (undefined8 *)((long)__src - uVar8);
  puVar10 = (undefined8 *)((long)local_a8 - uVar8);
  lVar7 = *(long *)(param_5 + 0x20);
  uVar1 = *(ushort *)(lVar7 + 0x135);
  lVar6 = lVar7;
  if ((uVar1 & 1) == 0) {
    lVar7 = FUN_01ecaf44(lVar7);
    uVar1 = *(ushort *)(*(long *)(param_5 + 0x20) + 0x135);
    lVar6 = *(long *)(param_5 + 0x20);
  }
  puVar14 = (undefined8 *)
            ((long)puVar10 -
            ((ulong)*(uint *)(*(long *)(*(long *)(lVar7 + 0xc0) + 0x18) + 0xfc) + 0xf & 0x1fffffff0)
            );
  if ((uVar1 & 1) == 0) {
    lVar6 = FUN_01ecaf44(lVar6);
  }
  puVar13 = (undefined8 *)
            ((long)puVar14 -
            ((ulong)*(uint *)(*(long *)(*(long *)(lVar6 + 0xc0) + 0x30) + 0xfc) + 0xf & 0x1fffffff0)
            );
  __s = (void *)((long)puVar13 - (__n + 0xf & 0x1fffffff0));
  memset(__s,0,__n);
  puVar4 = Method_UnityEngine_UIElements_BoundsIntField_<_ctor>b__10_1__;
  if (((param_1 == (long *)0x0) ||
      (puVar4 = 
       Method_Oculus_Interaction_Grab_GrabSurfaces_BoxGrabSurface_MinimalRotationPoseAtSurface__,
      local_98 == 0)) ||
     (puVar4 = 
      Method_Oculus_Interaction_Grab_GrabSurfaces_BoxGrabSurface_MinimalTranslationPoseAtSurface__,
     local_a0 == 0)) {
    uVar12 = thunk_FUN_01efb3a4(puVar4);
    uVar12 = FUN_03971094(uVar12,0);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar12,param_5);
  }
  lVar6 = *(long *)(param_5 + 0x20);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_01ecaf44();
  }
  if ((*(byte *)(*(long *)(*(long *)(lVar6 + 0xc0) + 8) + 0x135) & 1) == 0) {
    FUN_01ecaf44();
  }
  local_90 = thunk_FUN_01f117cc();
  lVar7 = *(long *)(param_5 + 0x20);
  uVar1 = *(ushort *)(lVar7 + 0x135);
  lVar6 = lVar7;
  local_b0 = puVar10;
  if ((uVar1 & 1) == 0) {
    lVar7 = FUN_01ecaf44(lVar7);
    uVar1 = *(ushort *)(*(long *)(param_5 + 0x20) + 0x135);
    lVar6 = *(long *)(param_5 + 0x20);
  }
  pcVar11 = (code *)**(undefined8 **)(*(long *)(lVar7 + 0xc0) + 0x10);
  if ((uVar1 & 1) == 0) {
    lVar6 = FUN_01ecaf44(lVar6);
  }
  (*pcVar11)(local_90,param_4,*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x10));
  lVar6 = **(long **)(param_5 + 0x38);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_01ecaf44(lVar6);
  }
  lVar7 = *param_1;
  uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == lVar6) {
        puVar10 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
        goto LAB_02135794;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar10 = (undefined8 *)FUN_01ecb238(param_1,lVar6,0);
LAB_02135794:
  plVar2 = (long *)(*(code *)*puVar10)(param_1,puVar10[1]);
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar6 = *plVar2;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__) {
          puVar10 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_021357fc;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar10 = (undefined8 *)
              FUN_01ecb238(plVar2,*(long *)
                                   Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__
                           ,0);
LAB_021357fc:
    uVar8 = (*(code *)*puVar10)(plVar2,puVar10[1]);
    if ((uVar8 & 1) == 0) {
      if (plVar2 == (long *)0x0) goto LAB_02135afc;
      lVar6 = *plVar2;
      uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar8 == 0) goto LAB_02135ad4;
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      break;
    }
    lVar6 = *(long *)(*(long *)(param_5 + 0x38) + 0x20);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_01ecaf44(lVar6);
    }
    lVar7 = *plVar2;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar6) {
          lVar6 = lVar7 + (long)*piVar9 * 0x10 + 0x138;
          goto LAB_02135870;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    lVar6 = FUN_01ecb238(plVar2,lVar6,0);
LAB_02135870:
    lVar6 = *(long *)(lVar6 + 8);
    local_88 = __src;
    (**(code **)(lVar6 + 0x10))(*(undefined8 *)(lVar6 + 8),lVar6,plVar2,&local_88,__src);
    memcpy(__s,__src,__n);
    puVar10 = local_a8;
    memcpy(local_a8,__s,__n);
    if (-1 < *(int *)(*(long *)(*(long *)(param_5 + 0x38) + 0x30) + 0x28)) {
      puVar10 = (undefined8 *)*puVar10;
    }
    puVar5 = *(undefined8 **)(*(long *)(param_5 + 0x38) + 0x38);
    local_88 = puVar10;
    local_80 = puVar14;
    (*(code *)puVar5[2])(*puVar5,puVar5,local_98,&local_88,puVar14);
    if (local_90 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar7 = *(long *)(param_5 + 0x20);
    uVar1 = *(ushort *)(lVar7 + 0x135);
    lVar6 = lVar7;
    if ((uVar1 & 1) == 0) {
      lVar6 = FUN_01ecaf44();
      lVar7 = *(long *)(param_5 + 0x20);
      uVar1 = *(ushort *)(lVar7 + 0x135);
    }
    uVar12 = **(undefined8 **)(*(long *)(lVar6 + 0xc0) + 0x20);
    lVar6 = lVar7;
    if ((uVar1 & 1) == 0) {
      lVar6 = FUN_01ecaf44();
      lVar7 = *(long *)(param_5 + 0x20);
      uVar1 = *(ushort *)(lVar7 + 0x135);
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x20);
    if ((uVar1 & 1) == 0) {
      lVar7 = FUN_01ecaf44();
    }
    local_88 = puVar14;
    if (-1 < *(int *)(*(long *)(*(long *)(lVar7 + 0xc0) + 0x18) + 0x28)) {
      local_88 = (undefined8 *)*puVar14;
    }
    local_80 = (undefined8 *)local_6c;
    local_6c[0] = 1;
    (**(code **)(lVar6 + 0x10))(uVar12,lVar6,local_90,&local_88,&local_78);
    lVar6 = local_78;
    puVar10 = local_b0;
    memcpy(local_b0,__s,__n);
    if (-1 < *(int *)(*(long *)(*(long *)(param_5 + 0x38) + 0x30) + 0x28)) {
      puVar10 = (undefined8 *)*puVar10;
    }
    puVar5 = *(undefined8 **)(*(long *)(param_5 + 0x38) + 0x40);
    local_88 = puVar10;
    local_80 = puVar13;
    (*(code *)puVar5[2])(*puVar5,puVar5,local_a0,&local_88,puVar13);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar3 = *(long *)(param_5 + 0x20);
    uVar1 = *(ushort *)(lVar3 + 0x135);
    lVar7 = lVar3;
    if ((uVar1 & 1) == 0) {
      lVar7 = FUN_01ecaf44();
      lVar3 = *(long *)(param_5 + 0x20);
      uVar1 = *(ushort *)(lVar3 + 0x135);
    }
    uVar12 = **(undefined8 **)(*(long *)(lVar7 + 0xc0) + 0x38);
    lVar7 = lVar3;
    if ((uVar1 & 1) == 0) {
      lVar7 = FUN_01ecaf44();
      lVar3 = *(long *)(param_5 + 0x20);
      uVar1 = *(ushort *)(lVar3 + 0x135);
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x38);
    if ((uVar1 & 1) == 0) {
      lVar3 = FUN_01ecaf44();
    }
    local_88 = puVar13;
    if (-1 < *(int *)(*(long *)(*(long *)(lVar3 + 0xc0) + 0x30) + 0x28)) {
      local_88 = (undefined8 *)*puVar13;
    }
    (**(code **)(lVar7 + 0x10))(uVar12,lVar7,lVar6,&local_88);
  } while( true );
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar9 = piVar9 + 4;
    if (uVar8 == 0) break;
    if (*(long *)(piVar9 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar10 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_02135af0;
    }
  }
LAB_02135ad4:
  puVar10 = (undefined8 *)
            FUN_01ecb238(plVar2,*(long *)
                                 Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                         ,0);
LAB_02135af0:
  (*(code *)*puVar10)(plVar2,puVar10[1]);
LAB_02135afc:
  if (*(long *)(alStack_c0[1] + 0x28) == local_68) {
    return local_90;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


