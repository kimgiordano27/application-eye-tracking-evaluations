/*
FUNCTION_NAME: FUN_02385960
ENTRY_POINT: 02385960
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 117
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_10;functionality_eye_api_context_without_clear_sink_hits_5
*/


/* WARNING: Removing unreachable block (ram,0x02385cd4) */
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_02385960(long *param_1,undefined8 param_2,byte param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  undefined8 *apuStack_a0 [4];
  undefined8 uStack_80;
  byte *local_78;
  byte local_6c [4];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  plVar8 = *(long **)(param_4 + 0x38);
  if (plVar8 == (long *)0x0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    plVar8 = *(long **)(param_4 + 0x38);
    if (plVar8 == (long *)0x0) {
      FUN_01ecafa0(param_4);
      plVar8 = *(long **)(param_4 + 0x38);
    }
  }
  puVar7 = (undefined8 *)
           ((long)apuStack_a0 - ((ulong)*(uint *)(plVar8[9] + 0xfc) + 0xf & 0x1fffffff0));
  if ((*(byte *)(*plVar8 + 0x135) & 1) == 0) {
    FUN_01ecaf44();
  }
  uVar3 = thunk_FUN_01f117cc();
  (*(code *)**(undefined8 **)(*(long *)(param_4 + 0x38) + 8))();
  lVar4 = *(long *)(*(long *)(param_4 + 0x38) + 0x18);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01ecaf44();
  }
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar5 = (*(code *)**(undefined8 **)(*(long *)(param_4 + 0x38) + 0x10))();
  if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar4 = *(long *)(*(long *)(param_4 + 0x38) + 0x28);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01ecaf44(lVar4);
  }
  lVar9 = *param_1;
  uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == lVar4) {
        puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
        goto FUN_02385ab0;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar6 = (undefined8 *)FUN_01ecb238(param_1,lVar4,0);
FUN_02385ab0:
  plVar8 = (long *)(*(code *)*puVar6)(param_1,puVar6[1]);
  puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar4 = *plVar8;
    uVar10 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
          puVar6 = (undefined8 *)(lVar4 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_02385b20;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)puVar2,0);
LAB_02385b20:
    uVar10 = (*(code *)*puVar6)(plVar8,puVar6[1]);
    if ((uVar10 & 1) == 0) break;
    lVar4 = *(long *)(*(long *)(param_4 + 0x38) + 0x38);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01ecaf44(lVar4);
    }
    lVar9 = *plVar8;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == lVar4) {
          lVar4 = lVar9 + (long)*piVar11 * 0x10 + 0x138;
          goto LAB_02385b94;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    lVar4 = FUN_01ecb238(plVar8,lVar4,0);
LAB_02385b94:
    lVar4 = *(long *)(lVar4 + 8);
    apuStack_a0[1] = puVar7;
    (**(code **)(lVar4 + 0x10))(*(undefined8 *)(lVar4 + 8),lVar4,plVar8,apuStack_a0 + 1,puVar7);
    apuStack_a0[1] = puVar7;
    if (-1 < *(int *)(*(long *)(*(long *)(param_4 + 0x38) + 0x48) + 0x28)) {
      apuStack_a0[1] = (undefined8 *)*puVar7;
    }
    puVar6 = *(undefined8 **)(*(long *)(param_4 + 0x38) + 0x58);
    apuStack_a0[2] = (undefined8 *)uVar5;
    apuStack_a0[3] = (undefined8 *)uVar3;
    uStack_80 = param_2;
    local_78 = local_6c;
    local_6c[0] = param_3 & 1;
    (*(code *)puVar6[2])(*puVar6,puVar6,0,apuStack_a0 + 1,local_6c);
  } while( true );
  if (plVar8 != (long *)0x0) {
    lVar4 = *plVar8;
    uVar10 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar7 = (undefined8 *)(lVar4 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_02385c54;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar7 = (undefined8 *)
             FUN_01ecb238(plVar8,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_02385c54:
    (*(code *)*puVar7)(plVar8,puVar7[1]);
  }
  lVar4 = *(long *)(*(long *)(param_4 + 0x38) + 0x18);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01ecaf44();
  }
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  (*(code *)**(undefined8 **)(*(long *)(param_4 + 0x38) + 0x60))(uVar5);
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}


