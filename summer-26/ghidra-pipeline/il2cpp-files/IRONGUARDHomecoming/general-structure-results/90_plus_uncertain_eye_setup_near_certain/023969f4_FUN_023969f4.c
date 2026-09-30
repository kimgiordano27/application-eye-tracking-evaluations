/*
FUNCTION_NAME: FUN_023969f4
ENTRY_POINT: 023969f4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 117
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_16;strong_pose_or_ray_construction_hits_10;functionality_eye_api_context_without_clear_sink_hits_5
*/


/* WARNING: Removing unreachable block (ram,0x02396f70) */

void FUN_023969f4(long param_1,long param_2,undefined4 param_3,undefined8 ****param_4,long param_5)

{
  undefined8 ****__src;
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 *puVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  long *plVar14;
  undefined1 auVar15 [16];
  long local_e0 [2];
  undefined8 *local_d0;
  ulong local_c8;
  undefined4 local_bc;
  undefined8 ***local_b8;
  long local_b0;
  int local_a4;
  long local_a0;
  undefined8 ***local_98;
  long *local_90;
  undefined4 *puStack_88;
  undefined8 local_80;
  undefined8 *puStack_78;
  undefined4 local_6c;
  long local_68;
  
  lVar11 = tpidr_el0;
  local_68 = *(long *)(lVar11 + 0x28);
  plVar10 = *(long **)(param_5 + 0x38);
  local_bc = param_3;
  local_b8 = param_4;
  local_98 = param_4;
  if (plVar10 == (long *)0x0) {
    thunk_FUN_01efb3a4(Method_UnityEngine_Component_GetComponentInChildren<Toggle>__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Component_GetComponentInChildren<TrainLocomotive>__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Component_GetComponentInChildren<WallMesh>__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Component_GetComponentInChildren<Weapon>__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_Component_GetComponentInChildren<WindmillBladesController>__
                      );
    thunk_FUN_01efb3a4(Method_UnityEngine_Component_GetComponentInChildren<Text>__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_CallbackEventHandler_UnregisterCallback<PointerUpEvent>__
                      );
    plVar10 = *(long **)(param_5 + 0x38);
    if (plVar10 == (long *)0x0) {
      FUN_01ecafa0(param_5);
      plVar10 = *(long **)(param_5 + 0x38);
    }
  }
  local_c8 = (ulong)*(uint *)(*plVar10 + 0xfc);
  puVar6 = (undefined8 *)((long)local_e0 - (local_c8 + 0xf & 0x1fffffff0));
  local_a0 = 0;
  if (((*(long *)(param_1 + 0x30) == 0) ||
      (lVar5 = *(long *)(*(long *)(param_1 + 0x30) + 0x420), local_d0 = puVar6, lVar5 == 0)) ||
     (plVar10 = (long *)FUN_041a7930(lVar5,0), plVar10 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar5 = *plVar10;
  uVar12 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar12 != 0) {
    piVar13 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar13 + -2) ==
          *(long *)Method_UnityEngine_Component_GetComponentInChildren<TrainLocomotive>__) {
        puVar6 = (undefined8 *)(lVar5 + (long)*piVar13 * 0x10 + 0x138);
        goto LAB_02396b5c;
      }
      uVar12 = uVar12 - 1;
      piVar13 = piVar13 + 4;
    } while (uVar12 != 0);
  }
  puVar6 = (undefined8 *)
           FUN_01ecb238(plVar10,*(long *)
                                 Method_UnityEngine_Component_GetComponentInChildren<TrainLocomotive>__
                        ,0);
LAB_02396b5c:
  local_e0[1] = param_5;
  local_b0 = lVar11;
  plVar10 = (long *)(*(code *)*puVar6)(plVar10,puVar6[1]);
  puVar4 = Method_UnityEngine_Component_GetComponentInChildren<WallMesh>__;
  puVar3 = Method_UnityEngine_Component_GetComponentInChildren<Toggle>__;
  puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  local_a4 = 0;
  do {
    lVar11 = *plVar10;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)puVar2) {
          puVar6 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_02396be0;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238(plVar10,*(long *)puVar2,0);
LAB_02396be0:
    uVar12 = (*(code *)*puVar6)(plVar10,puVar6[1]);
    lVar11 = local_b0;
    if ((uVar12 & 1) == 0) {
      if (plVar10 == (long *)0x0) goto LAB_02396f2c;
      lVar5 = *plVar10;
      uVar12 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar12 == 0) goto LAB_02396f04;
      piVar13 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      break;
    }
    lVar11 = *plVar10;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)puVar4) {
          puVar6 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_02396c3c;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238(plVar10,*(long *)puVar4,0);
LAB_02396c3c:
    uVar7 = (*(code *)*puVar6)(plVar10,puVar6[1]);
    if (*(long *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar11 = *(long *)(*(long *)(param_1 + 0x30) + 0x400);
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar12 = Unity_Collections_FixedList64Bytes_Enumerator<byte>__Reset
                       (lVar11,uVar7,&local_a0,*(undefined8 *)puVar3);
    if ((uVar12 & 1) != 0) {
      if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      local_e0[0] = param_2;
      lVar11 = FUN_0422f238(param_2,local_a4,0);
      if (*(int *)(*(long *)Method_UnityEngine_Component_GetComponentInChildren<Text>__ + 0xe0) == 0
         ) {
        thunk_FUN_01ee6d7c();
      }
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      plVar8 = (long *)FUN_0422bed0(lVar11,*(undefined4 *)
                                            (*(long *)(*(long *)
                                                  Method_UnityEngine_Component_GetComponentInChildren<Text>__
                                                  + 0xb8) + 4),0);
      puVar6 = local_d0;
      if (plVar8 == (long *)0x0) {
LAB_02396cec:
        plVar8 = (long *)0x0;
      }
      else {
        bVar1 = *(byte *)(*(long *)
                           Method_UnityEngine_UIElements_CallbackEventHandler_UnregisterCallback<PointerUpEvent>__
                         + 0x130);
        if (*(byte *)(*plVar8 + 0x130) < bVar1) goto LAB_02396cec;
        if (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) !=
            *(long *)
             Method_UnityEngine_UIElements_CallbackEventHandler_UnregisterCallback<PointerUpEvent>__
           ) {
          plVar8 = (long *)0x0;
        }
      }
      plVar14 = *(long **)(local_e0[1] + 0x38);
      __src = (undefined8 ****)local_b8;
      if (-1 < *(int *)(*plVar14 + 0x28)) {
        __src = &local_98;
      }
      memcpy(local_d0,__src,local_c8);
      if (-1 < *(int *)(*plVar14 + 0x28)) {
        puVar6 = (undefined8 *)*puVar6;
      }
      puVar9 = (undefined8 *)plVar14[1];
      local_6c = local_bc;
      puStack_88 = &local_6c;
      local_90 = plVar8;
      local_80 = uVar7;
      puStack_78 = puVar6;
      (*(code *)puVar9[2])(*puVar9,puVar9,0,&local_90);
      plVar8 = (long *)FUN_04220be0(lVar11,0);
      if (local_a0 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      if (*(long *)(local_a0 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      plVar14 = (long *)FUN_042198ec(*(long *)(local_a0 + 0x10),0);
      if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar5 = *plVar14;
      uVar12 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) ==
              *(long *)Method_UnityEngine_Component_GetComponentInChildren<Weapon>__) {
            puVar6 = (undefined8 *)(lVar5 + (long)(*piVar13 + 0x2c) * 0x10 + 0x138);
            goto LAB_02396dfc;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar6 = (undefined8 *)
               FUN_01ecb238(plVar14,*(long *)
                                     Method_UnityEngine_Component_GetComponentInChildren<Weapon>__,
                            0x2c);
LAB_02396dfc:
      (*(code *)*puVar6)(plVar14,puVar6[1]);
      auVar15 = FUN_04238194(0);
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar5 = *plVar8;
      uVar12 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) ==
              *(long *)
               Method_UnityEngine_Component_GetComponentInChildren<WindmillBladesController>__) {
            puVar6 = (undefined8 *)(lVar5 + (long)(*piVar13 + 0x36) * 0x10 + 0x138);
            goto LAB_02396e74;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar6 = (undefined8 *)
               FUN_01ecb238(plVar8,*(long *)
                                    Method_UnityEngine_Component_GetComponentInChildren<WindmillBladesController>__
                            ,0x36);
LAB_02396e74:
      (*(code *)*puVar6)(plVar8,auVar15._0_8_,auVar15._8_8_ & 0xffffffff,puVar6[1]);
      local_a4 = local_a4 + 1;
      FUN_0422c0ac(lVar11,**(undefined4 **)
                            (*(long *)Method_UnityEngine_Component_GetComponentInChildren<Text>__ +
                            0xb8),uVar7,0);
      param_2 = local_e0[0];
    }
  } while( true );
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar13 = piVar13 + 4;
    if (uVar12 == 0) break;
    if (*(long *)(piVar13 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar6 = (undefined8 *)(lVar5 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_02396f20;
    }
  }
LAB_02396f04:
  puVar6 = (undefined8 *)
           FUN_01ecb238(plVar10,*(long *)
                                 Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_02396f20:
  (*(code *)*puVar6)(plVar10,puVar6[1]);
LAB_02396f2c:
  if (*(long *)(lVar11 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


