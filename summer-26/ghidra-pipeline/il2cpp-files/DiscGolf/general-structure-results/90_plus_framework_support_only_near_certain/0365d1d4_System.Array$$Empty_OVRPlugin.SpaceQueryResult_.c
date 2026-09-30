/*
FUNCTION_NAME: System.Array$$Empty<OVRPlugin.SpaceQueryResult>
ENTRY_POINT: 0365d1d4
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_16;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0365d8f4) */
/* WARNING: Removing unreachable block (ram,0x0365d908) */
/* WARNING: Removing unreachable block (ram,0x0365d8d8) */
/* WARNING: Removing unreachable block (ram,0x0365d8ec) */

long * System_Array__Empty<OVRPlugin_SpaceQueryResult>(long *param_1,long param_2,long param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  ulong __n;
  undefined8 *__dest;
  void *__s;
  int iVar8;
  long *plVar9;
  uint uVar10;
  long local_b0 [2];
  long **local_a0;
  long *local_98;
  long *local_90;
  undefined8 *local_88;
  byte local_7c [4];
  undefined8 *local_78;
  char local_6c [4];
  long local_68;
  
                    /* try { // try from 0365d1d8 to 0375d1ef has its CatchHandler @ 0365cb5c */
                    /* try { // try from 0365d1f0 to 0375d1f3 has its CatchHandler @ 0365d1f8 */
  local_b0[0] = tpidr_el0;
                    /* catch() { ... } // from try @ 0365d1f0 with catch @ 0365d1f8 */
                    /* try { // try from 0365d1fc to 0375d203 has its CatchHandler @ 0365d20c */
                    /* try { // try from 0365d204 to 0375d213 has its CatchHandler @ 0365cb5c */
  local_68 = *(long *)(local_b0[0] + 0x28);
                    /* catch() { ... } // from try @ 0365d0b8 with catch @ 0365d20c
                       catch() { ... } // from try @ 0365d120 with catch @ 0365d20c
                       catch() { ... } // from try @ 0365d1d0 with catch @ 0365d20c
                       catch() { ... } // from try @ 0365d1fc with catch @ 0365d20c */
                    /* catch() { ... } // from try @ 0365d17c with catch @ 0365d210
                       catch() { ... } // from try @ 0365d1c4 with catch @ 0365d210 */
  plVar9 = *(long **)(param_3 + 0x38);
                    /* try { // try from 0365d214 to 0375d2ff has its CatchHandler @ 0365d214
                       catch() { ... } // from try @ 0365d214 with catch @ 0365d214
                       catch() { ... } // from try @ 0365d618 with catch @ 0365d214
                       catch() { ... } // from try @ 0365d720 with catch @ 0365d214
                       catch() { ... } // from try @ 0365d778 with catch @ 0365d214
                       catch() { ... } // from try @ 0365d7e0 with catch @ 0365d214
                       catch() { ... } // from try @ 0365d838 with catch @ 0365d214
                       catch() { ... } // from try @ 0365d890 with catch @ 0365d214
                       catch() { ... } // from try @ 0365d8bc with catch @ 0365d214 */
  if (plVar9 == (long *)0x0) {
    FUN_02d965b8(PTR_DAT_069fbff0);
    FUN_02d965b8(PTR_DAT_069fbff8);
    plVar9 = *(long **)(param_3 + 0x38);
    if (plVar9 == (long *)0x0) {
      FUN_02dcfd74(param_3);
      plVar9 = *(long **)(param_3 + 0x38);
    }
  }
  __n = (ulong)*(uint *)(plVar9[4] + 0xfc);
  uVar6 = __n + 0xf & 0x1fffffff0;
  puVar3 = (undefined8 *)((long)local_b0 - uVar6);
  __dest = (undefined8 *)((long)puVar3 - uVar6);
  local_98 = (long *)0x0;
  local_90 = (long *)0x0;
  __s = (void *)((long)__dest - uVar6);
  memset(__s,0,__n);
  if (param_1 == (long *)0x0) {
    if (*(long *)(local_b0[0] + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
  }
  else {
    lVar4 = *plVar9;
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02dcfd18(lVar4);
    }
    lVar5 = *param_1;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar4) {
          puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_0365d2f4;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_02dd004c(param_1,lVar4,0);
LAB_0365d2f4:
    local_90 = (long *)(*(code *)*puVar2)(param_1,puVar2[1]);
    local_a0 = &local_90;
    local_b0[1] = 0;
    if (local_90 != (long *)0x0) {
      iVar8 = 0;
      do {
        plVar9 = local_90;
        lVar4 = *local_90;
        uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_069fbff8) {
              puVar2 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_0365d36c;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar2 = (undefined8 *)FUN_02dd004c(local_90,*(long *)PTR_DAT_069fbff8,0);
LAB_0365d36c:
        uVar6 = (*(code *)*puVar2)(plVar9,puVar2[1]);
        plVar9 = local_90;
        if ((uVar6 & 1) == 0) {
          if (local_90 == (long *)0x0) goto LAB_0365d4ec;
          lVar4 = *local_90;
          uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar6 == 0) goto LAB_0365d4c4;
          piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          goto LAB_0365d4ac;
        }
        if (local_90 == (long *)0x0) {
          if (*(long *)(local_b0[0] + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          goto LAB_0365d9d4;
        }
        lVar4 = *(long *)(*(long *)(param_3 + 0x38) + 0x10);
        if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_02dcfd18(lVar4);
        }
        lVar5 = *plVar9;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == lVar4) {
              lVar4 = lVar5 + (long)*piVar7 * 0x10 + 0x138;
              goto LAB_0365d3ec;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        lVar4 = FUN_02dd004c(plVar9,lVar4,0);
LAB_0365d3ec:
        lVar4 = *(long *)(lVar4 + 8);
        local_88 = puVar3;
        (**(code **)(lVar4 + 0x10))(*(undefined8 *)(lVar4 + 8),lVar4,plVar9,&local_88,puVar3);
        memcpy(__dest,puVar3,__n);
        if (param_2 == 0) {
          if (*(long *)(local_b0[0] + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          goto LAB_0365d9d4;
        }
        local_88 = __dest;
        if (-1 < *(int *)(*(long *)(*(long *)(param_3 + 0x38) + 0x20) + 0x28)) {
          local_88 = (undefined8 *)*__dest;
        }
        puVar2 = *(undefined8 **)(*(long *)(param_3 + 0x38) + 0x30);
        (*(code *)puVar2[2])(*puVar2,puVar2,param_2,&local_88,local_7c);
        iVar8 = iVar8 + (uint)local_7c[0];
      } while (local_90 != (long *)0x0);
    }
    if (*(long *)(local_b0[0] + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
  }
  goto LAB_0365d9d4;
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
LAB_0365d4ac:
    if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_069fbff0) {
      puVar2 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_0365d4e0;
    }
  }
LAB_0365d4c4:
  puVar2 = (undefined8 *)FUN_02dd004c(local_90,*(long *)PTR_DAT_069fbff0,0);
LAB_0365d4e0:
  (*(code *)*puVar2)(plVar9,puVar2[1]);
LAB_0365d4ec:
  lVar4 = *(long *)(*(long *)(param_3 + 0x38) + 0x38);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02dcfd18();
  }
  plVar9 = (long *)FUN_02d966a4(lVar4,iVar8);
  lVar4 = **(long **)(param_3 + 0x38);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02dcfd18(lVar4);
  }
  lVar5 = *param_1;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == lVar4) {
        puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_0365d57c;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar2 = (undefined8 *)FUN_02dd004c(param_1,lVar4,0);
LAB_0365d57c:
  local_98 = (long *)(*(code *)*puVar2)(param_1,puVar2[1]);
  local_a0 = &local_98;
  uVar10 = 0;
  local_b0[1] = 0;
LAB_0365d59c:
  do {
    plVar1 = local_98;
    if (local_98 == (long *)0x0) break;
    lVar4 = *local_98;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_069fbff8) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_0365d5f8;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_02dd004c(local_98,*(long *)PTR_DAT_069fbff8,0);
LAB_0365d5f8:
    uVar6 = (*(code *)*puVar2)(plVar1,puVar2[1]);
    plVar1 = local_98;
    if ((uVar6 & 1) == 0) {
      if (local_98 == (long *)0x0) goto LAB_0365d7ec;
      lVar4 = *local_98;
      uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar6 == 0) goto LAB_0365d7c4;
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      goto LAB_0365d7ac;
    }
    if (local_98 == (long *)0x0) {
      if (*(long *)(local_b0[0] + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      goto LAB_0365d9d4;
    }
    lVar4 = *(long *)(*(long *)(param_3 + 0x38) + 0x10);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02dcfd18(lVar4);
    }
    lVar5 = *plVar1;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar4) {
          lVar4 = lVar5 + (long)*piVar7 * 0x10 + 0x138;
          goto LAB_0365d678;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    lVar4 = FUN_02dd004c(plVar1,lVar4,0);
LAB_0365d678:
    lVar4 = *(long *)(lVar4 + 8);
    local_78 = puVar3;
    (**(code **)(lVar4 + 0x10))(*(undefined8 *)(lVar4 + 8),lVar4,plVar1,&local_78,puVar3);
    memcpy(__s,puVar3,__n);
    memcpy(__dest,puVar3,__n);
    if (param_2 == 0) {
      if (*(long *)(local_b0[0] + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      goto LAB_0365d9d4;
    }
    local_78 = __dest;
    if (-1 < *(int *)(*(long *)(*(long *)(param_3 + 0x38) + 0x20) + 0x28)) {
      local_78 = (undefined8 *)*__dest;
    }
    puVar2 = *(undefined8 **)(*(long *)(param_3 + 0x38) + 0x30);
    (*(code *)puVar2[2])(*puVar2,puVar2,param_2,&local_78,local_6c);
    if (local_6c[0] != '\0') {
      memcpy(puVar3,__s,__n);
      if (plVar9 == (long *)0x0) {
        if (*(long *)(local_b0[0] + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        goto LAB_0365d9d4;
      }
      if (uVar10 < *(uint *)(plVar9 + 3)) {
        lVar5 = (long)(int)uVar10;
        memcpy((void *)((long)plVar9 + (ulong)*(uint *)(*plVar9 + 0x104) * lVar5 + 0x20),__s,__n);
        lVar4 = *(long *)(*(long *)(param_3 + 0x38) + 0x20);
        if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_02dcfd18();
        }
        if (uVar10 < *(uint *)(plVar9 + 3)) {
          uVar10 = uVar10 + 1;
          FUN_02d96568(lVar4,(long)plVar9 + (ulong)*(uint *)(*plVar9 + 0x104) * lVar5 + 0x20,puVar3)
          ;
          goto LAB_0365d59c;
        }
      }
      if (*(long *)(local_b0[0] + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96868();
      }
      goto LAB_0365d9d4;
    }
  } while( true );
  if (*(long *)(local_b0[0] + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  goto LAB_0365d9d4;
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
LAB_0365d7ac:
    if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_069fbff0) {
      puVar3 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_0365d7e0;
    }
  }
LAB_0365d7c4:
  puVar3 = (undefined8 *)FUN_02dd004c(local_98,*(long *)PTR_DAT_069fbff0,0);
LAB_0365d7e0:
  (*(code *)*puVar3)(plVar1,puVar3[1]);
LAB_0365d7ec:
  if (*(long *)(local_b0[0] + 0x28) == local_68) {
    return plVar9;
  }
LAB_0365d9d4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


