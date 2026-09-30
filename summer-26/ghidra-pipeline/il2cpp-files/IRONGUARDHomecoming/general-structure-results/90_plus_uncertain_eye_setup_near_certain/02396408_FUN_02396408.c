/*
FUNCTION_NAME: FUN_02396408
ENTRY_POINT: 02396408
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


/* WARNING: Removing unreachable block (ram,0x023968d8) */

void FUN_02396408(long param_1,long param_2,undefined4 param_3,undefined8 param_4,long param_5)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  int iVar14;
  undefined1 auVar15 [16];
  long local_68;
  
  if (*(long *)(param_5 + 0x38) == 0) {
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
    if (*(long *)(param_5 + 0x38) == 0) {
      FUN_01ecafa0(param_5);
    }
  }
  local_68 = 0;
  if (((*(long *)(param_1 + 0x30) == 0) ||
      (lVar5 = *(long *)(*(long *)(param_1 + 0x30) + 0x420), lVar5 == 0)) ||
     (plVar6 = (long *)FUN_041a7930(lVar5,0), plVar6 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar5 = *plVar6;
  uVar12 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar12 != 0) {
    piVar13 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar13 + -2) ==
          *(long *)Method_UnityEngine_Component_GetComponentInChildren<TrainLocomotive>__) {
        puVar7 = (undefined8 *)(lVar5 + (long)*piVar13 * 0x10 + 0x138);
        goto LAB_02396534;
      }
      uVar12 = uVar12 - 1;
      piVar13 = piVar13 + 4;
    } while (uVar12 != 0);
  }
  puVar7 = (undefined8 *)
           FUN_01ecb238(plVar6,*(long *)
                                Method_UnityEngine_Component_GetComponentInChildren<TrainLocomotive>__
                        ,0);
LAB_02396534:
  plVar6 = (long *)(*(code *)*puVar7)(plVar6,puVar7[1]);
  puVar4 = Method_UnityEngine_Component_GetComponentInChildren<WallMesh>__;
  puVar3 = Method_UnityEngine_Component_GetComponentInChildren<Toggle>__;
  puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  iVar14 = 0;
  do {
    lVar5 = *plVar6;
    uVar12 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)puVar2) {
          puVar7 = (undefined8 *)(lVar5 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_023965b4;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar7 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar2,0);
LAB_023965b4:
    uVar12 = (*(code *)*puVar7)(plVar6,puVar7[1]);
    if ((uVar12 & 1) == 0) {
      if (plVar6 == (long *)0x0) {
        return;
      }
      lVar5 = *plVar6;
      uVar12 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar12 == 0) goto LAB_0239687c;
      piVar13 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      break;
    }
    lVar5 = *plVar6;
    uVar12 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)puVar4) {
          puVar7 = (undefined8 *)(lVar5 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_02396610;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar7 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar4,0);
LAB_02396610:
    uVar8 = (*(code *)*puVar7)(plVar6,puVar7[1]);
    if (*(long *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar5 = *(long *)(*(long *)(param_1 + 0x30) + 0x400);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar12 = Unity_Collections_FixedList64Bytes_Enumerator<byte>__Reset
                       (lVar5,uVar8,&local_68,*(undefined8 *)puVar3);
    if ((uVar12 & 1) != 0) {
      if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar5 = FUN_0422f238(param_2,iVar14,0);
      if (*(int *)(*(long *)Method_UnityEngine_Component_GetComponentInChildren<Text>__ + 0xe0) == 0
         ) {
        thunk_FUN_01ee6d7c();
      }
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      plVar9 = (long *)FUN_0422bed0(lVar5,*(undefined4 *)
                                           (*(long *)(*(long *)
                                                  Method_UnityEngine_Component_GetComponentInChildren<Text>__
                                                  + 0xb8) + 4),0);
      if (plVar9 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)
                           Method_UnityEngine_UIElements_CallbackEventHandler_UnregisterCallback<PointerUpEvent>__
                         + 0x130);
        if (*(byte *)(*plVar9 + 0x130) < bVar1) {
          plVar9 = (long *)0x0;
        }
        else if (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) !=
                 *(long *)
                  Method_UnityEngine_UIElements_CallbackEventHandler_UnregisterCallback<PointerUpEvent>__
                ) {
          plVar9 = (long *)0x0;
        }
      }
      FUN_0239621c(plVar9,param_3,uVar8,param_4,*(undefined8 *)(*(long *)(param_5 + 0x38) + 8));
      plVar9 = (long *)FUN_04220be0(lVar5,0);
      if (local_68 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      if (*(long *)(local_68 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      plVar10 = (long *)FUN_042198ec(*(long *)(local_68 + 0x10),0);
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar11 = *plVar10;
      uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) ==
              *(long *)Method_UnityEngine_Component_GetComponentInChildren<Weapon>__) {
            puVar7 = (undefined8 *)(lVar11 + (long)(*piVar13 + 0x2c) * 0x10 + 0x138);
            goto LAB_02396780;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar7 = (undefined8 *)
               FUN_01ecb238(plVar10,*(long *)
                                     Method_UnityEngine_Component_GetComponentInChildren<Weapon>__,
                            0x2c);
LAB_02396780:
      (*(code *)*puVar7)(plVar10,puVar7[1]);
      auVar15 = FUN_04238194(0);
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar11 = *plVar9;
      uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) ==
              *(long *)
               Method_UnityEngine_Component_GetComponentInChildren<WindmillBladesController>__) {
            puVar7 = (undefined8 *)(lVar11 + (long)(*piVar13 + 0x36) * 0x10 + 0x138);
            goto LAB_023967f8;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar7 = (undefined8 *)
               FUN_01ecb238(plVar9,*(long *)
                                    Method_UnityEngine_Component_GetComponentInChildren<WindmillBladesController>__
                            ,0x36);
LAB_023967f8:
      (*(code *)*puVar7)(plVar9,auVar15._0_8_,auVar15._8_8_ & 0xffffffff,puVar7[1]);
      iVar14 = iVar14 + 1;
      FUN_0422c0ac(lVar5,**(undefined4 **)
                           (*(long *)Method_UnityEngine_Component_GetComponentInChildren<Text>__ +
                           0xb8),uVar8,0);
    }
  } while( true );
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar13 = piVar13 + 4;
    if (uVar12 == 0) break;
    if (*(long *)(piVar13 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar7 = (undefined8 *)(lVar5 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_02396898;
    }
  }
LAB_0239687c:
  puVar7 = (undefined8 *)
           FUN_01ecb238(plVar6,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_02396898:
  (*(code *)*puVar7)(plVar6,puVar7[1]);
  return;
}


