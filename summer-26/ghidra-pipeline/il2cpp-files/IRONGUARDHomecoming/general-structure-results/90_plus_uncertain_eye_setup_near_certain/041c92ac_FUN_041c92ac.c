/*
FUNCTION_NAME: FUN_041c92ac
ENTRY_POINT: 041c92ac
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 117
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_8;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x041c955c) */
/* WARNING: Removing unreachable block (ram,0x041c98ac) */

void FUN_041c92ac(undefined8 param_1,undefined8 param_2,long *param_3,undefined8 *param_4)

{
  long *plVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  long *plVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  int *piVar14;
  ulong uVar15;
  undefined1 auVar16 [16];
  
  if ((DAT_04840e42 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_System_Linq_Enumerable_ToList<BezierKnot>__);
    thunk_FUN_01efb3a4(PTR_DAT_04574ec0);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(
                      Method_System_DateTimeOffset_System_Runtime_Serialization_IDeserializationCallback_OnDeserialization__
                      );
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_Component_GetComponentInChildren<WindmillBladesController>__
                      );
    thunk_FUN_01efb3a4(Method_UnityEngine_Component_GetComponentInChildren<Mask>__);
    thunk_FUN_01efb3a4(Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__);
    thunk_FUN_01efb3a4(PTR_DAT_0458a338);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_CallbackEventHandler_UnregisterCallback<PointerUpEvent>__
                      );
    DAT_04840e42 = 1;
  }
  if (param_4[3] != 0) {
    lVar7 = FUN_02308ab0(param_4[3],*(undefined8 *)PTR_DAT_04574ec0);
    param_3[5] = lVar7;
    thunk_FUN_01f51358();
  }
  *(undefined4 *)(param_3 + 4) = *(undefined4 *)(param_4 + 1);
  puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  plVar8 = (long *)param_4[2];
  if (plVar8 != (long *)0x0) {
    plVar8 = (long *)(**(code **)(*plVar8 + 0x328))(plVar8,*(undefined8 *)(*plVar8 + 0x330));
    puVar6 = Method_System_Linq_Enumerable_ToList<BezierKnot>__;
    puVar5 = Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__;
    puVar4 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    do {
      lVar12 = *plVar8;
      lVar7 = *(long *)puVar4;
      uVar15 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar15 != 0) {
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == lVar7) {
            puVar9 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_041c9418;
          }
          uVar15 = uVar15 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar15 != 0);
      }
      puVar9 = (undefined8 *)FUN_01ecb238(plVar8,lVar7,0);
LAB_041c9418:
      uVar15 = (*(code *)*puVar9)(plVar8,puVar9[1]);
      if ((uVar15 & 1) == 0) {
        plVar8 = (long *)thunk_FUN_01f116d0(plVar8,*(undefined8 *)puVar3);
        if (plVar8 == (long *)0x0) goto LAB_041c9550;
        lVar12 = *plVar8;
        lVar7 = *(long *)puVar3;
        uVar15 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar15 == 0) goto LAB_041c9528;
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        goto LAB_041c9510;
      }
      lVar12 = *plVar8;
      lVar7 = *(long *)puVar4;
      uVar15 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar15 != 0) {
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == lVar7) {
            puVar9 = (undefined8 *)(lVar12 + (long)(*piVar14 + 1) * 0x10 + 0x138);
            goto LAB_041c9478;
          }
          uVar15 = uVar15 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar15 != 0);
      }
      puVar9 = (undefined8 *)FUN_01ecb238(plVar8,lVar7,1);
LAB_041c9478:
      plVar10 = (long *)(*(code *)*puVar9)(plVar8,puVar9[1]);
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      if (*(long *)(*plVar10 + 0x40) != *(long *)(*(long *)puVar6 + 0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08cfc();
      }
      plVar10 = (long *)thunk_FUN_01f11920();
      if ((long *)param_3[2] == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      plVar1 = (long *)*plVar10;
      if ((plVar1 != (long *)0x0) && (*plVar1 != *(long *)puVar5)) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08cfc(plVar1,*(long *)puVar5,plVar10[1]);
      }
      (**(code **)(*(long *)param_3[2] + 0x318))();
    } while( true );
  }
  goto LAB_041c98a4;
  while( true ) {
    uVar15 = uVar15 - 1;
    piVar14 = piVar14 + 4;
    if (uVar15 == 0) break;
LAB_041c9510:
    if (*(long *)(piVar14 + -2) == lVar7) {
      puVar9 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
      goto LAB_041c9544;
    }
  }
LAB_041c9528:
  puVar9 = (undefined8 *)FUN_01ecb238(plVar8,lVar7,0);
LAB_041c9544:
  (*(code *)*puVar9)(plVar8,puVar9[1]);
LAB_041c9550:
  uVar15 = FUN_03414c1c(*param_4,0);
  if (((uVar15 & 1) != 0) ||
     (plVar8 = (long *)(**(code **)(*param_3 + 0x188))(param_3,*(undefined8 *)(*param_3 + 400)),
     plVar8 == (long *)0x0)) {
    return;
  }
  bVar2 = *(byte *)(*(long *)
                     Method_UnityEngine_UIElements_CallbackEventHandler_UnregisterCallback<PointerUpEvent>__
                   + 0x130);
  if (*(byte *)(*plVar8 + 0x130) < bVar2) {
    return;
  }
  if (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar2 * 8 + -8) !=
      *(long *)
       Method_UnityEngine_UIElements_CallbackEventHandler_UnregisterCallback<PointerUpEvent>__) {
    return;
  }
  plVar8 = (long *)FUN_04224ea4(plVar8,0);
  if (plVar8 != (long *)0x0) {
    lVar7 = *plVar8;
    uVar15 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar15 != 0) {
      piVar14 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) ==
            *(long *)
             Method_System_DateTimeOffset_System_Runtime_Serialization_IDeserializationCallback_OnDeserialization__
           ) {
          puVar9 = (undefined8 *)(lVar7 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_041c9634;
        }
        uVar15 = uVar15 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar15 != 0);
    }
    puVar9 = (undefined8 *)
             FUN_01ecb238(plVar8,*(long *)
                                  Method_System_DateTimeOffset_System_Runtime_Serialization_IDeserializationCallback_OnDeserialization__
                          ,0);
LAB_041c9634:
    lVar7 = (*(code *)*puVar9)(plVar8,puVar9[1]);
    if (lVar7 == 0) {
      return;
    }
    param_3 = param_3 + 3;
    plVar8 = (long *)*param_3;
    if (plVar8 == (long *)0x0) {
      lVar12 = thunk_FUN_01f117cc(*(undefined8 *)
                                   Method_UnityEngine_Component_GetComponentInChildren<Mask>__);
      FUN_041a380c(lVar12,0);
      if (lVar12 == 0) goto LAB_041c98a4;
      *(undefined4 *)(lVar12 + 0x2b4) = 1;
      plVar8 = (long *)FUN_04220be0(lVar12,0);
      uVar11 = FUN_02766f28(1,*(undefined8 *)PTR_DAT_0458a338);
      if (plVar8 == (long *)0x0) goto LAB_041c98a4;
      lVar13 = *plVar8;
      uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar15 != 0) {
        piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) ==
              *(long *)
               Method_UnityEngine_Component_GetComponentInChildren<WindmillBladesController>__) {
            puVar9 = (undefined8 *)(lVar13 + (long)(*piVar14 + 0x28) * 0x10 + 0x138);
            goto LAB_041c96fc;
          }
          uVar15 = uVar15 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar15 != 0);
      }
      puVar9 = (undefined8 *)
               FUN_01ecb238(plVar8,*(long *)
                                    Method_UnityEngine_Component_GetComponentInChildren<WindmillBladesController>__
                            ,0x28);
LAB_041c96fc:
      (*(code *)*puVar9)(plVar8,uVar11,puVar9[1]);
      *param_3 = lVar12;
      thunk_FUN_01f51358(param_3,lVar12);
      plVar8 = (long *)*param_3;
      if (plVar8 == (long *)0x0) goto LAB_041c98a4;
    }
    (**(code **)(*plVar8 + 0xb38))(plVar8,*param_4,*(undefined8 *)(*plVar8 + 0xb40));
    if (*param_3 != 0) {
      plVar8 = (long *)FUN_04220be0(*param_3,0);
      auVar16 = FUN_04238194(param_2,0);
      puVar3 = Method_UnityEngine_Component_GetComponentInChildren<WindmillBladesController>__;
      if (plVar8 != (long *)0x0) {
        lVar12 = *plVar8;
        uVar15 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar15 != 0) {
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) ==
                *(long *)
                 Method_UnityEngine_Component_GetComponentInChildren<WindmillBladesController>__) {
              puVar9 = (undefined8 *)(lVar12 + (long)(*piVar14 + 0x2d) * 0x10 + 0x138);
              goto LAB_041c97c0;
            }
            uVar15 = uVar15 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar15 != 0);
        }
        puVar9 = (undefined8 *)
                 FUN_01ecb238(plVar8,*(long *)
                                      Method_UnityEngine_Component_GetComponentInChildren<WindmillBladesController>__
                              ,0x2d);
LAB_041c97c0:
        (*(code *)*puVar9)(plVar8,auVar16._0_8_,auVar16._8_8_ & 0xffffffff,puVar9[1]);
        if (*param_3 != 0) {
          plVar8 = (long *)FUN_04220be0(*param_3,0);
          auVar16 = FUN_04238194(param_1,0);
          if (plVar8 != (long *)0x0) {
            lVar12 = *plVar8;
            uVar15 = (ulong)*(ushort *)(lVar12 + 0x12e);
            if (uVar15 != 0) {
              piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
                  puVar9 = (undefined8 *)(lVar12 + (long)(*piVar14 + 0x19) * 0x10 + 0x138);
                  goto LAB_041c9854;
                }
                uVar15 = uVar15 - 1;
                piVar14 = piVar14 + 4;
              } while (uVar15 != 0);
            }
            puVar9 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)puVar3,0x19);
LAB_041c9854:
            (*(code *)*puVar9)(plVar8,auVar16._0_8_,auVar16._8_8_ & 0xffffffff,puVar9[1]);
            FUN_0422f074(lVar7,*param_3,0);
            return;
          }
        }
      }
    }
  }
LAB_041c98a4:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


