/*
FUNCTION_NAME: FUN_02a5a02c
ENTRY_POINT: 02a5a02c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 129
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_7;validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_12;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_6
*/


/* WARNING: Removing unreachable block (ram,0x02a5a580) */
/* WARNING: Removing unreachable block (ram,0x02a5a604) */

void FUN_02a5a02c(long param_1,long *param_2,long param_3)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  ulong __n;
  long lVar13;
  long *plVar14;
  ulong uVar15;
  undefined8 *puVar16;
  undefined8 *__src;
  undefined8 *puVar17;
  long alStack_d0 [2];
  long *local_c0;
  void *local_b8;
  ulong local_b0;
  undefined8 *local_a8;
  undefined1 *local_a0;
  undefined8 *puStack_98;
  undefined1 *local_90;
  undefined1 *local_88;
  void *local_80;
  char local_78 [4];
  undefined1 local_74 [4];
  undefined1 local_70 [4];
  undefined1 local_6c [4];
  long local_68;
  
  alStack_d0[1] = tpidr_el0;
  local_68 = *(long *)(alStack_d0[1] + 0x28);
  local_c0 = param_2;
  if ((DAT_04830f27 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    DAT_04830f27 = 1;
  }
  lVar13 = *(long *)(param_3 + 0x20);
  lVar10 = *(long *)(lVar13 + 0xc0);
  uVar9 = (ulong)*(uint *)(*(long *)(lVar10 + 0x88) + 0xfc);
  __n = (ulong)*(uint *)(*(long *)(lVar10 + 0x48) + 0xfc);
  uVar11 = (ulong)*(uint *)(*(long *)(lVar10 + 0x60) + 0xfc) + 0xf & 0x1fffffff0;
  puVar8 = (undefined8 *)((long)alStack_d0 - uVar11);
  puVar17 = (undefined8 *)((long)puVar8 - uVar11);
  uVar11 = uVar9 + 0xf & 0x1fffffff0;
  puVar16 = (undefined8 *)((long)puVar17 - uVar11);
  uVar15 = __n + 0xf & 0x1fffffff0;
  __src = (undefined8 *)((long)puVar16 - uVar15);
  pvVar3 = (void *)((long)__src - uVar11);
  local_b8 = pvVar3;
  memset(pvVar3,0,uVar9);
  pvVar3 = (void *)((long)pvVar3 - uVar15);
  local_b0 = __n;
  memset(pvVar3,0,__n);
  plVar5 = local_c0;
  if (local_c0 != (long *)0x0) {
    lVar10 = *(long *)(*(long *)(lVar13 + 0xc0) + 0x28);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_01ecaf44(lVar10);
    }
    lVar13 = *plVar5;
    uVar9 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar9 != 0) {
      piVar12 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == lVar10) {
          puVar4 = (undefined8 *)(lVar13 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_02a5a19c;
        }
        uVar9 = uVar9 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ecb238(plVar5,lVar10,0);
LAB_02a5a19c:
    plVar5 = (long *)(*(code *)*puVar4)(plVar5,puVar4[1]);
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    do {
      lVar10 = *plVar5;
      uVar9 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar9 != 0) {
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__) {
            puVar4 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_02a5a204;
          }
          uVar9 = uVar9 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined8 *)
               FUN_01ecb238(plVar5,*(long *)
                                    Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__
                            ,0);
LAB_02a5a204:
      uVar9 = (*(code *)*puVar4)(plVar5,puVar4[1]);
      if ((uVar9 & 1) == 0) {
        if (plVar5 == (long *)0x0) goto LAB_02a5a574;
        lVar10 = *plVar5;
        uVar9 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar9 == 0) goto LAB_02a5a54c;
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        goto LAB_02a5a534;
      }
      lVar10 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x38);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_01ecaf44(lVar10);
      }
      lVar13 = *plVar5;
      uVar9 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar9 != 0) {
        piVar12 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == lVar10) {
            lVar10 = lVar13 + (long)*piVar12 * 0x10 + 0x138;
            goto LAB_02a5a27c;
          }
          uVar9 = uVar9 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar9 != 0);
      }
      lVar10 = FUN_01ecb238(plVar5,lVar10,0);
LAB_02a5a27c:
      lVar10 = *(long *)(lVar10 + 8);
      local_a8 = __src;
      (**(code **)(lVar10 + 0x10))(*(undefined8 *)(lVar10 + 8),lVar10,plVar5,&local_a8,__src);
      memcpy(pvVar3,__src,local_b0);
      puVar4 = *(undefined8 **)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x50);
      local_a8 = puVar8;
      (*(code *)puVar4[2])(*puVar4,puVar4,pvVar3,&local_a8,puVar8);
      uVar9 = FUN_01f089f8(*(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x60),
                           puVar8);
      if ((uVar9 & 1) == 0) {
        lVar10 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x10);
        if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
          lVar10 = FUN_01ecaf44();
        }
        if (*(int *)(lVar10 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x68))();
      }
      puVar4 = *(undefined8 **)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x50);
      local_a8 = puVar8;
      (*(code *)puVar4[2])(*puVar4,puVar4,pvVar3,&local_a8,puVar8);
      plVar14 = *(long **)(param_1 + 0x18);
      puVar4 = *(undefined8 **)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x50);
      local_a8 = puVar17;
      (*(code *)puVar4[2])(*puVar4,puVar4,pvVar3,&local_a8,puVar17);
      if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar13 = *(long *)(*(long *)(param_3 + 0x20) + 0xc0);
      lVar10 = *(long *)(lVar13 + 0x20);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_01ecaf44(lVar10);
        lVar13 = *(long *)(*(long *)(param_3 + 0x20) + 0xc0);
      }
      puVar4 = puVar17;
      if (-1 < *(int *)(*(long *)(lVar13 + 0x60) + 0x28)) {
        puVar4 = (undefined8 *)*puVar17;
      }
      lVar13 = *plVar14;
      uVar9 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar9 != 0) {
        piVar12 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == lVar10) {
            lVar10 = lVar13 + (long)(*piVar12 + 1) * 0x10 + 0x138;
            goto LAB_02a5a400;
          }
          uVar9 = uVar9 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar9 != 0);
      }
      lVar10 = FUN_01ecb238(plVar14,lVar10,1);
LAB_02a5a400:
      lVar10 = *(long *)(lVar10 + 8);
      local_a8 = puVar4;
      (**(code **)(lVar10 + 0x10))(*(undefined8 *)(lVar10 + 8),lVar10,plVar14,&local_a8,local_6c);
      puVar4 = *(undefined8 **)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x80);
      local_a8 = puVar16;
      (*(code *)puVar4[2])(*puVar4,puVar4,pvVar3,&local_a8,puVar16);
      lVar10 = *(long *)(*(long *)(param_3 + 0x20) + 0xc0);
      local_a8 = puVar8;
      if (-1 < *(int *)(*(long *)(lVar10 + 0x60) + 0x28)) {
        local_a8 = (undefined8 *)*puVar8;
      }
      puStack_98 = puVar16;
      if (-1 < *(int *)(*(long *)(lVar10 + 0x88) + 0x28)) {
        puStack_98 = (undefined8 *)*puVar16;
      }
      puVar4 = *(undefined8 **)(lVar10 + 0x90);
      local_a0 = local_6c;
      local_90 = local_70;
      local_88 = local_74;
      local_70[0] = 0;
      local_74[0] = 0;
      local_80 = local_b8;
      (*(code *)puVar4[2])(*puVar4,puVar4,param_1,&local_a8,local_78);
      if (local_78[0] == '\0') {
        thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
        uVar6 = thunk_FUN_01f117cc();
        uVar7 = thunk_FUN_01efb3a4(
                                  Method_System_Linq_Enumerable_Select<int,_AnimatorTextureBaker_VertInfo>__
                                  );
        FUN_034f6754(uVar6,uVar7,0);
                    /* WARNING: Subroutine does not return */
        FUN_01f08910(uVar6,param_3);
      }
    } while( true );
  }
  goto LAB_02a5a5fc;
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar12 = piVar12 + 4;
    if (uVar9 == 0) break;
LAB_02a5a534:
    if (*(long *)(piVar12 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar8 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_02a5a568;
    }
  }
LAB_02a5a54c:
  puVar8 = (undefined8 *)
           FUN_01ecb238(plVar5,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_02a5a568:
  (*(code *)*puVar8)(plVar5,puVar8[1]);
LAB_02a5a574:
  if (*(int *)(param_1 + 0x24) != 0) {
LAB_02a5a5c4:
    if (*(long *)(alStack_d0[1] + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  lVar10 = *(long *)(param_1 + 0x10);
  thunk_FUN_01f3e6f0();
  if ((lVar10 != 0) && (lVar10 = *(long *)(lVar10 + 0x10), lVar10 != 0)) {
    lVar13 = *(long *)(param_1 + 0x10);
    thunk_FUN_01f3e6f0();
    if ((lVar13 != 0) && (lVar13 = *(long *)(lVar13 + 0x18), lVar13 != 0)) {
      iVar1 = *(int *)(lVar13 + 0x18);
      iVar2 = 0;
      if (iVar1 != 0) {
        iVar2 = *(int *)(lVar10 + 0x18) / iVar1;
      }
      *(int *)(param_1 + 0x24) = iVar2;
      goto LAB_02a5a5c4;
    }
  }
LAB_02a5a5fc:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


