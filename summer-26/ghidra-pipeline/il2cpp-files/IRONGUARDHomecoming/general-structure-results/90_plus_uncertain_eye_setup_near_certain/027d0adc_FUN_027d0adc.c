/*
FUNCTION_NAME: FUN_027d0adc
ENTRY_POINT: 027d0adc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 129
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_10;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_5
*/


/* WARNING: Removing unreachable block (ram,0x027d10c4) */

void FUN_027d0adc(undefined8 param_1,void *param_2,long param_3)

{
  ushort uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  int *piVar11;
  long lVar12;
  long *plVar13;
  code *pcVar14;
  ulong __n;
  int iVar15;
  void *__s;
  long *plVar16;
  undefined8 local_90;
  long local_88;
  int *local_80;
  int *piStack_78;
  int local_6c;
  long local_68;
  
  lVar8 = tpidr_el0;
  local_68 = *(long *)(lVar8 + 0x28);
  if ((DAT_04830600 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    DAT_04830600 = 1;
  }
  lVar12 = *(long *)(param_3 + 0x20);
  lVar6 = lVar12;
  if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
    lVar12 = FUN_01ecaf44(lVar12);
    lVar6 = *(long *)(param_3 + 0x20);
  }
  __n = (ulong)*(uint *)(**(long **)(lVar12 + 0xc0) + 0xfc);
  uVar9 = __n + 0xf & 0x1fffffff0;
  piVar11 = (int *)((long)&local_90 - uVar9);
  __s = (void *)((long)piVar11 - uVar9);
  memset(__s,0,__n);
  uVar1 = *(ushort *)(lVar6 + 0x135);
  lVar12 = lVar6;
  if ((uVar1 & 1) == 0) {
    lVar6 = FUN_01ecaf44(lVar6);
    uVar1 = *(ushort *)(*(long *)(param_3 + 0x20) + 0x135);
    lVar12 = *(long *)(param_3 + 0x20);
  }
  pcVar14 = (code *)**(undefined8 **)(*(long *)(lVar6 + 0xc0) + 0x78);
  if ((uVar1 & 1) == 0) {
    lVar12 = FUN_01ecaf44(lVar12);
  }
  uVar9 = (*pcVar14)(param_1,*(undefined8 *)(*(long *)(lVar12 + 0xc0) + 0x78));
  if ((uVar9 & 1) != 0) {
    lVar6 = *(long *)(param_3 + 0x20);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_01ecaf44();
    }
    puVar7 = (undefined8 *)
             thunk_FUN_01ee7388(param_1,*(long *)(**(long **)(lVar6 + 0xc0) + 0x80) + 0x40);
    plVar13 = (long *)*puVar7;
    if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar6 = *(long *)(param_3 + 0x20);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_01ecaf44();
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x18);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_01ecaf44(lVar6);
    }
    lVar12 = *plVar13;
    uVar9 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar6) {
          puVar7 = (undefined8 *)(lVar12 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_027d0c98;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar7 = (undefined8 *)FUN_01ecb238(plVar13,lVar6,0);
LAB_027d0c98:
    local_90 = param_1;
    local_88 = lVar8;
    plVar13 = (long *)(*(code *)*puVar7)(plVar13,puVar7[1]);
    puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    iVar15 = 0;
    do {
      lVar8 = *plVar13;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
            puVar7 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_027d0d08;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar7 = (undefined8 *)FUN_01ecb238(plVar13,*(long *)puVar2,0);
LAB_027d0d08:
      uVar9 = (*(code *)*puVar7)(plVar13,puVar7[1]);
      if ((uVar9 & 1) == 0) {
        lVar8 = local_88;
        if (plVar13 == (long *)0x0) break;
        goto LAB_027d1028;
      }
      lVar8 = *(long *)(param_3 + 0x20);
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_01ecaf44();
      }
      lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x68);
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_01ecaf44(lVar8);
      }
      lVar6 = *plVar13;
      uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == lVar8) {
            lVar8 = lVar6 + (long)*piVar10 * 0x10 + 0x138;
            goto LAB_027d0d8c;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      lVar8 = FUN_01ecb238(plVar13,lVar8,0);
LAB_027d0d8c:
      lVar8 = *(long *)(lVar8 + 8);
      local_80 = piVar11;
      (**(code **)(lVar8 + 0x10))(*(undefined8 *)(lVar8 + 8),lVar8,plVar13,&local_80,piVar11);
      memcpy(__s,piVar11,__n);
      lVar6 = *(long *)(param_3 + 0x20);
      uVar1 = *(ushort *)(lVar6 + 0x135);
      lVar8 = lVar6;
      if ((uVar1 & 1) == 0) {
        lVar8 = FUN_01ecaf44();
        lVar6 = *(long *)(param_3 + 0x20);
        uVar1 = *(ushort *)(lVar6 + 0x135);
      }
      pcVar14 = (code *)**(undefined8 **)(*(long *)(lVar8 + 0xc0) + 0x48);
      if ((uVar1 & 1) == 0) {
        lVar6 = FUN_01ecaf44();
      }
      iVar4 = (*pcVar14)(__s,*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x48));
      lVar6 = *(long *)(param_3 + 0x20);
      uVar1 = *(ushort *)(lVar6 + 0x135);
      lVar8 = lVar6;
      if ((uVar1 & 1) == 0) {
        lVar8 = FUN_01ecaf44();
        lVar6 = *(long *)(param_3 + 0x20);
        uVar1 = *(ushort *)(lVar6 + 0x135);
      }
      pcVar14 = (code *)**(undefined8 **)(*(long *)(lVar8 + 0xc0) + 0x48);
      if ((uVar1 & 1) == 0) {
        lVar6 = FUN_01ecaf44();
      }
      iVar5 = (*pcVar14)(param_2,*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x48));
      lVar8 = local_88;
      if (iVar4 == iVar5) goto LAB_027d0e7c;
      iVar15 = iVar15 + 1;
    } while( true );
  }
  goto LAB_027d108c;
LAB_027d0e7c:
  lVar6 = *(long *)(param_3 + 0x20);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_01ecaf44();
  }
  uVar3 = local_90;
  puVar7 = (undefined8 *)
           thunk_FUN_01ee7388(local_90,*(long *)(**(long **)(lVar6 + 0xc0) + 0x80) + 0x40);
  plVar16 = (long *)*puVar7;
  if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar6 = *(long *)(param_3 + 0x20);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_01ecaf44();
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x10);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_01ecaf44(lVar6);
  }
  lVar12 = *plVar16;
  uVar9 = (ulong)*(ushort *)(lVar12 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == lVar6) {
        puVar7 = (undefined8 *)(lVar12 + (long)(*piVar10 + 4) * 0x10 + 0x138);
        goto LAB_027d0f34;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar7 = (undefined8 *)FUN_01ecb238(plVar16,lVar6,4);
LAB_027d0f34:
  (*(code *)*puVar7)(plVar16,iVar15,puVar7[1]);
  lVar6 = *(long *)(param_3 + 0x20);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_01ecaf44();
  }
  puVar7 = (undefined8 *)
           thunk_FUN_01ee7388(uVar3,*(long *)(**(long **)(lVar6 + 0xc0) + 0x80) + 0x40);
  plVar16 = (long *)*puVar7;
  memcpy(piVar11,param_2,__n);
  if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar6 = *(long *)(param_3 + 0x20);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_01ecaf44();
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x10);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_01ecaf44(lVar6);
  }
  lVar12 = *plVar16;
  uVar9 = (ulong)*(ushort *)(lVar12 + 0x12e);
  local_6c = iVar15;
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == lVar6) {
        lVar6 = lVar12 + (long)(*piVar10 + 3) * 0x10 + 0x138;
        goto LAB_027d1000;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  lVar6 = FUN_01ecb238(plVar16,lVar6,3);
LAB_027d1000:
  local_80 = &local_6c;
  lVar6 = *(long *)(lVar6 + 8);
  piStack_78 = piVar11;
  (**(code **)(lVar6 + 0x10))(*(undefined8 *)(lVar6 + 8),lVar6,plVar16,&local_80,piVar11);
  if (plVar13 != (long *)0x0) {
LAB_027d1028:
    lVar6 = *plVar13;
    uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar9 != 0) {
      piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar7 = (undefined8 *)(lVar6 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_027d107c;
        }
        uVar9 = uVar9 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar9 != 0);
    }
    puVar7 = (undefined8 *)
             FUN_01ecb238(plVar13,*(long *)
                                   Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_027d107c:
    (*(code *)*puVar7)(plVar13,puVar7[1]);
  }
LAB_027d108c:
  if (*(long *)(lVar8 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


