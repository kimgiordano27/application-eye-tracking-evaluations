/*
FUNCTION_NAME: FUN_041375e8
ENTRY_POINT: 041375e8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 117
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_10;functionality_eye_api_context_without_clear_sink_hits_5
*/


/* WARNING: Removing unreachable block (ram,0x04137a3c) */
/* WARNING: Removing unreachable block (ram,0x04137b04) */

void FUN_041375e8(undefined8 param_1,undefined8 param_2,long *param_3,ulong param_4,ulong param_5,
                 ulong param_6)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  long *plVar8;
  undefined8 *puVar10;
  ulong extraout_x1;
  ulong extraout_x1_00;
  ulong extraout_x1_01;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  int *piVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  ulong uVar9;
  
  iVar7 = (int)param_4;
  if ((DAT_04840808 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_System_Collections_CollectionBase_System_Collections_IList_set_Item__)
    ;
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_System_DateTime_AddMonths__);
    thunk_FUN_01efb3a4(Method_System_DateTime_AddTicks__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(Method_System_Runtime_CompilerServices_TaskAwaiter<bool>_GetResult__);
    thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_MouseEventBase<MouseLeaveWindowEvent>__ctor__);
    DAT_04840808 = 1;
    param_4 = extraout_x1;
  }
  plVar8 = (long *)param_3[0x8a];
  if (plVar8 == (long *)0x0) {
    (**(code **)(*param_3 + 0x7c8))(param_3,*(undefined8 *)(*param_3 + 2000));
    plVar8 = (long *)param_3[0x8a];
    param_4 = extraout_x1_00;
  }
  auVar15._8_8_ = 0;
  auVar15._0_8_ = param_4;
  auVar17 = auVar15 << 0x40;
  if (plVar8 != (long *)0x0) {
    auVar15 = (**(code **)(*plVar8 + 0x1e8))
                        (param_1,param_2,plVar8,*(undefined8 *)(*plVar8 + 0x1f0));
    uVar9 = auVar15._0_8_;
    plVar8 = (long *)param_3[0x89];
    auVar17 = auVar15;
    if (plVar8 != (long *)0x0) {
      auVar16 = (**(code **)(*plVar8 + 0x188))(plVar8,*(undefined8 *)(*plVar8 + 400));
      plVar8 = auVar16._0_8_;
      auVar17._8_8_ = 0;
      auVar17._0_8_ = auVar16._8_8_;
      auVar17 = auVar17 << 0x40;
      if (plVar8 != (long *)0x0) {
        lVar11 = *plVar8;
        uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar12 != 0) {
          piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) ==
                *(long *)
                 Method_System_Collections_CollectionBase_System_Collections_IList_set_Item__) {
              puVar10 = (undefined8 *)(lVar11 + (long)(*piVar14 + 1) * 0x10 + 0x138);
              goto LAB_04137730;
            }
            uVar12 = uVar12 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar12 != 0);
        }
        puVar10 = (undefined8 *)
                  FUN_01ecb238(plVar8,*(long *)
                                       Method_System_Collections_CollectionBase_System_Collections_IList_set_Item__
                               ,1);
LAB_04137730:
        iVar6 = (*(code *)*puVar10)(plVar8,puVar10[1]);
        if ((auVar15._0_4_ <= iVar6 + -1) && ((int)param_3[0x85] != 0)) {
          plVar8 = (long *)param_3[0x89];
          auVar16._8_8_ = 0;
          auVar16._0_8_ = extraout_x1_01;
          auVar17 = auVar16 << 0x40;
          if (plVar8 == (long *)0x0) goto LAB_04137afc;
          auVar17 = (**(code **)(*plVar8 + 0x1f8))
                              (plVar8,uVar9 & 0xffffffff,*(undefined8 *)(*plVar8 + 0x200));
          uVar12 = auVar17._8_8_;
          if (iVar7 == 2) {
            if (param_3[0x7b] != 0) {
              plVar8 = (long *)param_3[0x8e];
              if (plVar8 == (long *)0x0) goto LAB_04137afc;
              lVar11 = *plVar8;
              uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
              if (uVar12 != 0) {
                piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar14 + -2) == *(long *)Method_System_DateTime_AddMonths__) {
                    puVar10 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
                    goto LAB_041378dc;
                  }
                  uVar12 = uVar12 - 1;
                  piVar14 = piVar14 + 4;
                } while (uVar12 != 0);
              }
              puVar10 = (undefined8 *)
                        FUN_01ecb238(plVar8,*(long *)Method_System_DateTime_AddMonths__,0);
LAB_041378dc:
              plVar8 = (long *)(*(code *)*puVar10)(plVar8,puVar10[1]);
              puVar5 = Method_System_DateTime_AddTicks__;
              puVar4 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
              if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              do {
                lVar11 = *plVar8;
                uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
                if (uVar12 != 0) {
                  piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar14 + -2) == *(long *)puVar4) {
                      puVar10 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
                      goto LAB_0413794c;
                    }
                    uVar12 = uVar12 - 1;
                    piVar14 = piVar14 + 4;
                  } while (uVar12 != 0);
                }
                puVar10 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)puVar4,0);
LAB_0413794c:
                uVar12 = (*(code *)*puVar10)(plVar8,puVar10[1]);
                if ((uVar12 & 1) == 0) break;
                lVar11 = *plVar8;
                uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
                if (uVar13 != 0) {
                  piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar14 + -2) == *(long *)puVar5) {
                      puVar10 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
                      goto FUN_041379ac;
                    }
                    uVar13 = uVar13 - 1;
                    piVar14 = piVar14 + 4;
                  } while (uVar13 != 0);
                }
                puVar10 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)puVar5,0);
FUN_041379ac:
                iVar7 = (*(code *)*puVar10)(plVar8,puVar10[1]);
              } while (auVar15._0_4_ != iVar7);
              if (plVar8 != (long *)0x0) {
                lVar11 = *plVar8;
                uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
                if (uVar13 != 0) {
                  piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar14 + -2) ==
                        *(long *)
                         Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
                      puVar10 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
                      goto LAB_04137a24;
                    }
                    uVar13 = uVar13 - 1;
                    piVar14 = piVar14 + 4;
                  } while (uVar13 != 0);
                }
                puVar10 = (undefined8 *)
                          FUN_01ecb238(plVar8,*(long *)
                                               Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                                       ,0);
LAB_04137a24:
                (*(code *)*puVar10)(plVar8,puVar10[1]);
              }
              FUN_04133b2c(param_3,uVar9 & 0xffffffff);
              if (((uVar12 & 1) != 0) && (lVar11 = param_3[0x7b], lVar11 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x04137a7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (**(code **)(lVar11 + 0x18))
                          (*(undefined8 *)(lVar11 + 0x40),param_3[0x8f],
                           *(undefined8 *)(lVar11 + 0x28));
                return;
              }
            }
          }
          else if (iVar7 == 1) {
            iVar7 = (int)param_3[0x85];
            if ((iVar7 != 2) || ((param_5 & 1) == 0)) {
              if ((iVar7 == 2) && ((param_6 & 1) != 0)) {
                if (param_3[0x8e] == 0) goto LAB_04137afc;
                if (*(int *)(param_3[0x8e] + 0x18) != 0) {
                  FUN_04137ca0(param_3,uVar9 & 0xffffffff);
                  return;
                }
              }
              else {
                if (iVar7 == 2) {
                  auVar2._8_8_ = 0;
                  auVar2._0_8_ = uVar12;
                  auVar17 = auVar2 << 0x40;
                  if (param_3[0x8e] == 0) goto LAB_04137afc;
                  auVar17 = FUN_030bac7c(param_3[0x8e],uVar9 & 0xffffffff,
                                         *(undefined8 *)
                                          Method_System_Runtime_CompilerServices_TaskAwaiter<bool>_GetResult__
                                        );
                  uVar12 = auVar17._8_8_;
                  if ((auVar17._0_8_ & 1) != 0) {
                    lVar11 = param_3[0x80];
                    if (lVar11 == 0) {
                      return;
                    }
                    /* WARNING: Could not recover jumptable at 0x041378ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    (**(code **)(lVar11 + 0x18))
                              (*(undefined8 *)(lVar11 + 0x40),*(undefined8 *)(lVar11 + 0x28));
                    return;
                  }
                  iVar7 = (int)param_3[0x85];
                }
                if (iVar7 == 1) {
                  auVar3._8_8_ = 0;
                  auVar3._0_8_ = uVar12;
                  auVar17 = auVar3 << 0x40;
                  if (param_3[0x8e] == 0) goto LAB_04137afc;
                  uVar12 = FUN_030bac7c(param_3[0x8e],uVar9 & 0xffffffff,
                                        *(undefined8 *)
                                         Method_System_Runtime_CompilerServices_TaskAwaiter<bool>_GetResult__
                                       );
                  if (((uVar12 & 1) != 0) && (lVar11 = param_3[0x80], lVar11 != 0)) {
                    (**(code **)(lVar11 + 0x18))
                              (*(undefined8 *)(lVar11 + 0x40),*(undefined8 *)(lVar11 + 0x28));
                  }
                }
              }
              FUN_04133b2c(param_3,uVar9 & 0xffffffff);
              return;
            }
            uVar12 = auVar17._0_8_ & 0xffffffff;
            auVar1._8_8_ = 0;
            auVar1._0_8_ = uVar12;
            auVar17 = auVar1 << 0x40;
            if (param_3[0x8d] != 0) {
              uVar12 = FUN_030bac7c(param_3[0x8d],uVar12,
                                    *(undefined8 *)
                                     Method_System_Runtime_CompilerServices_TaskAwaiter<bool>_GetResult__
                                   );
              if ((uVar12 & 1) == 0) {
                FUN_04137c28(param_3,uVar9 & 0xffffffff);
                return;
              }
              FUN_04137bcc(param_3,uVar9 & 0xffffffff);
              return;
            }
            goto LAB_04137afc;
          }
        }
        return;
      }
    }
  }
LAB_04137afc:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c(auVar17._0_8_,auVar17._8_8_);
}


