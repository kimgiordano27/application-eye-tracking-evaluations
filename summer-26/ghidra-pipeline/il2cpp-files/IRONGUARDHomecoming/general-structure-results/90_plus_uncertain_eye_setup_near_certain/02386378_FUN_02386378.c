/*
FUNCTION_NAME: FUN_02386378
ENTRY_POINT: 02386378
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 117
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_10;weak_xr_or_state_hits_10;validity_or_gating_hits_20;strong_pose_or_ray_construction_hits_20;functionality_eye_api_context_without_clear_sink_hits_10
*/


/* WARNING: Removing unreachable block (ram,0x02386ad0) */
/* WARNING: Removing unreachable block (ram,0x023869e4) */
/* WARNING: Removing unreachable block (ram,0x02386bf8) */

void FUN_02386378(long *param_1,long param_2,uint param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  int *piVar7;
  ulong uVar8;
  void *__s;
  long *plVar9;
  ulong __n;
  undefined8 *__dest;
  void *__s_00;
  undefined8 uStack_d0;
  uint local_c4;
  long local_c0;
  long local_b8;
  long *local_b0;
  long local_a8;
  long *local_a0;
  undefined8 *local_98;
  long *local_90;
  char local_88 [4];
  undefined1 auStack_84 [4];
  long local_80;
  undefined8 *local_78;
  undefined8 uStack_70;
  long local_68;
  
  local_c0 = tpidr_el0;
  local_68 = *(long *)(local_c0 + 0x28);
  plVar9 = *(long **)(param_4 + 0x38);
  local_c4 = param_3;
  local_b0 = param_1;
  local_a8 = param_2;
  if (plVar9 == (long *)0x0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    plVar9 = *(long **)(param_4 + 0x38);
    if (plVar9 == (long *)0x0) {
      FUN_01ecafa0(param_4);
      plVar9 = *(long **)(param_4 + 0x38);
    }
  }
  __n = (ulong)*(uint *)(plVar9[8] + 0xfc);
  uVar8 = __n + 0xf & 0x1fffffff0;
  puVar6 = (undefined8 *)((long)&uStack_d0 - uVar8);
  __dest = (undefined8 *)((long)puVar6 - uVar8);
  __s_00 = (void *)((long)__dest - uVar8);
  memset(__s_00,0,__n);
  __s = (void *)((long)__s_00 - uVar8);
  memset(__s,0,__n);
  if ((*(byte *)(*plVar9 + 0x135) & 1) == 0) {
    FUN_01ecaf44();
  }
  lVar1 = thunk_FUN_01f117cc();
  (*(code *)**(undefined8 **)(*(long *)(param_4 + 0x38) + 8))();
  if ((*(byte *)(*(long *)(*(long *)(param_4 + 0x38) + 0x10) + 0x135) & 1) == 0) {
    FUN_01ecaf44();
  }
  lVar2 = thunk_FUN_01f117cc();
  (*(code *)**(undefined8 **)(*(long *)(param_4 + 0x38) + 0x18))();
  if (lVar1 != 0) {
    plVar9 = (long *)(lVar1 + 0x10);
    *plVar9 = lVar2;
    local_b8 = lVar1;
    thunk_FUN_01f51358(plVar9,lVar2);
    if (local_b0 != (long *)0x0) {
      lVar1 = *(long *)(*(long *)(param_4 + 0x38) + 0x20);
      if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_01ecaf44(lVar1);
      }
      lVar2 = *local_b0;
      uVar8 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar8 != 0) {
        piVar7 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == lVar1) {
            puVar3 = (undefined8 *)(lVar2 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_0238652c;
          }
          uVar8 = uVar8 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar8 != 0);
      }
      puVar3 = (undefined8 *)FUN_01ecb238(local_b0,lVar1,0);
LAB_0238652c:
      local_a0 = (long *)(*(code *)*puVar3)(local_b0,puVar3[1]);
LAB_0238653c:
      if (local_a0 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar1 = *local_a0;
      uVar8 = (ulong)*(ushort *)(lVar1 + 0x12e);
      if (uVar8 != 0) {
        piVar7 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__) {
            puVar3 = (undefined8 *)(lVar1 + (long)*piVar7 * 0x10 + 0x138);
            goto System_Array__InternalArray__ICollection_Add<Int32Enum>;
          }
          uVar8 = uVar8 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar8 != 0);
      }
      puVar3 = (undefined8 *)
               FUN_01ecb238(local_a0,*(long *)
                                      Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__
                            ,0);
System_Array__InternalArray__ICollection_Add<Int32Enum>:
      uVar8 = (*(code *)*puVar3)(local_a0,puVar3[1]);
      plVar4 = local_a0;
      lVar1 = local_b8;
      if ((uVar8 & 1) != 0) {
        lVar1 = *(long *)(*(long *)(param_4 + 0x38) + 0x30);
        if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
          lVar1 = FUN_01ecaf44(lVar1);
        }
        lVar2 = *local_a0;
        uVar8 = (ulong)*(ushort *)(lVar2 + 0x12e);
        if (uVar8 != 0) {
          piVar7 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == lVar1) {
              lVar1 = lVar2 + (long)*piVar7 * 0x10 + 0x138;
              goto LAB_02386610;
            }
            uVar8 = uVar8 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar8 != 0);
        }
        lVar1 = FUN_01ecb238(local_a0,lVar1,0);
LAB_02386610:
        lVar1 = *(long *)(lVar1 + 8);
        local_98 = puVar6;
        (**(code **)(lVar1 + 0x10))(*(undefined8 *)(lVar1 + 8),lVar1,local_a0,&local_98,puVar6);
        memcpy(__s_00,puVar6,__n);
        memcpy(__dest,__s_00,__n);
        if (local_a8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        local_98 = __dest;
        if (-1 < *(int *)(*(long *)(*(long *)(param_4 + 0x38) + 0x40) + 0x28)) {
          local_98 = (undefined8 *)*__dest;
        }
        puVar3 = *(undefined8 **)(*(long *)(param_4 + 0x38) + 0x50);
        (*(code *)puVar3[2])(*puVar3,puVar3,local_a8,&local_98,&local_90);
        plVar4 = local_90;
        if (local_90 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar1 = *(long *)(*(long *)(param_4 + 0x38) + 0x20);
        if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
          lVar1 = FUN_01ecaf44(lVar1);
        }
        lVar2 = *plVar4;
        uVar8 = (ulong)*(ushort *)(lVar2 + 0x12e);
        if (uVar8 != 0) {
          piVar7 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == lVar1) {
              puVar3 = (undefined8 *)(lVar2 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_023866f8;
            }
            uVar8 = uVar8 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar8 != 0);
        }
        puVar3 = (undefined8 *)FUN_01ecb238(plVar4,lVar1,0);
LAB_023866f8:
        plVar4 = (long *)(*(code *)*puVar3)(plVar4,puVar3[1]);
        if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        do {
          lVar1 = *plVar4;
          uVar8 = (ulong)*(ushort *)(lVar1 + 0x12e);
          if (uVar8 != 0) {
            piVar7 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) ==
                  *(long *)
                   Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__) {
                puVar3 = (undefined8 *)(lVar1 + (long)*piVar7 * 0x10 + 0x138);
                goto LAB_02386760;
              }
              uVar8 = uVar8 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar8 != 0);
          }
          puVar3 = (undefined8 *)
                   FUN_01ecb238(plVar4,*(long *)
                                        Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__
                                ,0);
LAB_02386760:
          uVar8 = (*(code *)*puVar3)(plVar4,puVar3[1]);
          if ((uVar8 & 1) == 0) goto LAB_02386978;
          lVar1 = *(long *)(*(long *)(param_4 + 0x38) + 0x30);
          if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
            lVar1 = FUN_01ecaf44(lVar1);
          }
          lVar2 = *plVar4;
          uVar8 = (ulong)*(ushort *)(lVar2 + 0x12e);
          if (uVar8 != 0) {
            piVar7 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == lVar1) {
                lVar1 = lVar2 + (long)*piVar7 * 0x10 + 0x138;
                goto LAB_023867d4;
              }
              uVar8 = uVar8 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar8 != 0);
          }
          lVar1 = FUN_01ecb238(plVar4,lVar1,0);
LAB_023867d4:
          lVar1 = *(long *)(lVar1 + 8);
          local_98 = puVar6;
          (**(code **)(lVar1 + 0x10))(*(undefined8 *)(lVar1 + 8),lVar1,plVar4,&local_98,puVar6);
          memcpy(__s,puVar6,__n);
          lVar1 = *plVar9;
          memcpy(__dest,__s,__n);
          if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          local_98 = __dest;
          if (-1 < *(int *)(*(long *)(*(long *)(param_4 + 0x38) + 0x40) + 0x28)) {
            local_98 = (undefined8 *)*__dest;
          }
          puVar3 = *(undefined8 **)(*(long *)(param_4 + 0x38) + 0x58);
          (*(code *)puVar3[2])(*puVar3,puVar3,lVar1,&local_98,local_88);
          if (local_88[0] == '\0') {
            lVar1 = *plVar9;
            memcpy(puVar6,__s,__n);
            if ((*(byte *)(*(long *)(*(long *)(param_4 + 0x38) + 0x60) + 0x135) & 1) == 0) {
              FUN_01ecaf44();
            }
            uVar5 = thunk_FUN_01f117cc();
            (*(code *)**(undefined8 **)(*(long *)(param_4 + 0x38) + 0x68))();
            if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            local_78 = puVar6;
            if (-1 < *(int *)(*(long *)(*(long *)(param_4 + 0x38) + 0x40) + 0x28)) {
              local_78 = (undefined8 *)*puVar6;
            }
            puVar3 = *(undefined8 **)(*(long *)(param_4 + 0x38) + 0x70);
            uStack_70 = uVar5;
            (*(code *)puVar3[2])(*puVar3,puVar3,lVar1,&local_78,uVar5);
          }
          lVar1 = *plVar9;
          memcpy(puVar6,__s,__n);
          if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          local_98 = puVar6;
          if (-1 < *(int *)(*(long *)(*(long *)(param_4 + 0x38) + 0x40) + 0x28)) {
            local_98 = (undefined8 *)*puVar6;
          }
          puVar3 = *(undefined8 **)(*(long *)(param_4 + 0x38) + 0x78);
          (*(code *)puVar3[2])(*puVar3,puVar3,lVar1,&local_98,&local_80);
          lVar1 = local_80;
          memcpy(__dest,__s_00,__n);
          if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          local_98 = __dest;
          if (-1 < *(int *)(*(long *)(*(long *)(param_4 + 0x38) + 0x40) + 0x28)) {
            local_98 = (undefined8 *)*__dest;
          }
          puVar3 = *(undefined8 **)(*(long *)(param_4 + 0x38) + 0x80);
          (*(code *)puVar3[2])(*puVar3,puVar3,lVar1,&local_98,auStack_84);
        } while( true );
      }
      if (local_a0 == (long *)0x0) goto LAB_02386ac4;
      lVar2 = *local_a0;
      uVar8 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar8 == 0) goto LAB_02386a9c;
      piVar7 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      goto LAB_02386a84;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
LAB_02386978:
  if (plVar4 != (long *)0x0) {
    lVar1 = *plVar4;
    uVar8 = (ulong)*(ushort *)(lVar1 + 0x12e);
    if (uVar8 != 0) {
      piVar7 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar3 = (undefined8 *)(lVar1 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_023869d4;
        }
        uVar8 = uVar8 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar8 != 0);
    }
    puVar3 = (undefined8 *)
             FUN_01ecb238(plVar4,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_023869d4:
    (*(code *)*puVar3)(plVar4,puVar3[1]);
  }
  goto LAB_0238653c;
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar7 = piVar7 + 4;
    if (uVar8 == 0) break;
LAB_02386a84:
    if (*(long *)(piVar7 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar6 = (undefined8 *)(lVar2 + (long)*piVar7 * 0x10 + 0x138);
      goto FUN_02386ab8;
    }
  }
LAB_02386a9c:
  puVar6 = (undefined8 *)
           FUN_01ecb238(local_a0,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
FUN_02386ab8:
  (*(code *)*puVar6)(plVar4,puVar6[1]);
LAB_02386ac4:
  if ((*(byte *)(*(long *)(*(long *)(param_4 + 0x38) + 0x48) + 0x135) & 1) == 0) {
    FUN_01ecaf44();
  }
  uVar5 = thunk_FUN_01f117cc();
  (*(code *)**(undefined8 **)(*(long *)(param_4 + 0x38) + 0x90))
            (uVar5,lVar1,*(undefined8 *)(*(long *)(param_4 + 0x38) + 0x88));
  (*(code *)**(undefined8 **)(*(long *)(param_4 + 0x38) + 0x98))(local_b0,uVar5,local_c4 & 1);
  if (*(long *)(local_c0 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


