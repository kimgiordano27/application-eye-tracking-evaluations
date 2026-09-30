/*
FUNCTION_NAME: FUN_03194e8c
ENTRY_POINT: 03194e8c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 117
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_10;functionality_eye_api_context_without_clear_sink_hits_5
*/


/* WARNING: Removing unreachable block (ram,0x03195340) */
/* WARNING: Removing unreachable block (ram,0x031953a4) */

void FUN_03194e8c(long *param_1,uint param_2,long *param_3,long param_4)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  int iVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  uint *puVar12;
  uint *local_80;
  uint *puStack_78;
  uint local_6c;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if ((DAT_04831cff & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    DAT_04831cff = 1;
  }
  puVar12 = (uint *)((long)&local_80 -
                    ((ulong)*(uint *)(*(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x48)
                                     + 0xfc) + 0xf & 0x1fffffff0));
  if (param_3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0357c5b0(6,0);
  }
  if (*(uint *)(param_1 + 3) < param_2) {
    FUN_0358b9a4(0);
  }
  lVar7 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x28);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_01ecaf44(lVar7);
  }
  plVar5 = (long *)thunk_FUN_01f116d0(param_3,lVar7);
  if (plVar5 == (long *)0x0) {
    if ((int)param_2 < (int)param_1[3]) {
      if (param_3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar7 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x20);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_01ecaf44(lVar7);
      }
      lVar8 = *param_3;
      uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == lVar7) {
            puVar6 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_03195184;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar6 = (undefined8 *)FUN_01ecb238(param_3,lVar7,0);
LAB_03195184:
      plVar5 = (long *)(*(code *)*puVar6)(param_3,puVar6[1]);
      puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      do {
        lVar7 = *plVar5;
        uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)puVar3) {
              puVar6 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_031951f0;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar6 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar3,0);
LAB_031951f0:
        uVar10 = (*(code *)*puVar6)(plVar5,puVar6[1]);
        if ((uVar10 & 1) == 0) goto LAB_031952c8;
        lVar7 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x140);
        if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_01ecaf44(lVar7);
        }
        lVar8 = *plVar5;
        uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == lVar7) {
              lVar7 = lVar8 + (long)*piVar11 * 0x10 + 0x138;
              goto LAB_03195268;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        lVar7 = FUN_01ecb238(plVar5,lVar7,0);
LAB_03195268:
        lVar7 = *(long *)(lVar7 + 8);
        local_80 = puVar12;
        (**(code **)(lVar7 + 0x10))(*(undefined8 *)(lVar7 + 8),lVar7,plVar5,&local_80,puVar12);
        lVar7 = *(long *)(*(long *)(param_4 + 0x20) + 0xc0);
        puStack_78 = puVar12;
        if (-1 < *(int *)(*(long *)(lVar7 + 0x48) + 0x28)) {
          puStack_78 = *(uint **)puVar12;
        }
        puVar6 = *(undefined8 **)(lVar7 + 0x158);
        local_80 = &local_6c;
        local_6c = param_2;
        (*(code *)puVar6[2])(*puVar6,puVar6,param_1,&local_80);
        param_2 = param_2 + 1;
      } while( true );
    }
    (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x40))
              (param_1,param_3);
  }
  else {
    lVar7 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x28);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_01ecaf44(lVar7);
    }
    lVar8 = *plVar5;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == lVar7) {
          puVar6 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_03195040;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238(plVar5,lVar7,0);
LAB_03195040:
    iVar4 = (*(code *)*puVar6)(plVar5,puVar6[1]);
    if (0 < iVar4) {
      (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x78))
                (param_1,(int)param_1[3] + iVar4);
      iVar1 = (int)param_1[3] - param_2;
      if (iVar1 != 0 && (int)param_2 <= (int)param_1[3]) {
        FUN_0358d498(param_1[2],param_2,param_1[2],iVar4 + param_2,iVar1,0);
      }
      if (param_1 == plVar5) {
        FUN_0358d498(param_1[2],0,param_1[2],param_2,param_2,0);
        FUN_0358d498(param_1[2],iVar4 + param_2,param_1[2],param_2 << 1,(int)param_1[3] - param_2,0)
        ;
      }
      else {
        lVar8 = param_1[2];
        lVar7 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x28);
        if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_01ecaf44(lVar7);
        }
        lVar9 = *plVar5;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == lVar7) {
              puVar6 = (undefined8 *)(lVar9 + (long)(*piVar11 + 5) * 0x10 + 0x138);
              goto LAB_03195154;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar6 = (undefined8 *)FUN_01ecb238(plVar5,lVar7,5);
LAB_03195154:
        (*(code *)*puVar6)(plVar5,lVar8,param_2,puVar6[1]);
      }
      *(int *)(param_1 + 3) = (int)param_1[3] + iVar4;
    }
  }
LAB_03195360:
  *(int *)((long)param_1 + 0x1c) = *(int *)((long)param_1 + 0x1c) + 1;
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_031952c8:
  if (plVar5 != (long *)0x0) {
    lVar7 = *plVar5;
    uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar6 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_03195328;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar6 = (undefined8 *)
             FUN_01ecb238(plVar5,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_03195328:
    (*(code *)*puVar6)(plVar5,puVar6[1]);
  }
  goto LAB_03195360;
}


