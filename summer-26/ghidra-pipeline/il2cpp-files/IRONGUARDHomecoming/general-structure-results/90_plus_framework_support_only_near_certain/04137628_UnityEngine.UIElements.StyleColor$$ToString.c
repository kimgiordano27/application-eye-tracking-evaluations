/*
FUNCTION_NAME: UnityEngine.UIElements.StyleColor$$ToString
ENTRY_POINT: 04137628
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_10;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_5
*/


/* WARNING: Removing unreachable block (ram,0x04137a3c) */
/* WARNING: Removing unreachable block (ram,0x04137b04) */

void UnityEngine_UIElements_StyleColor__ToString(void)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long *plVar7;
  undefined8 *puVar8;
  ulong extraout_x1;
  ulong extraout_x1_00;
  ulong extraout_x1_01;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long *unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  ulong unaff_x22;
  int unaff_w23;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  
  thunk_FUN_01efb3a4();
  thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
  thunk_FUN_01efb3a4(Method_System_DateTime_AddMonths__);
  thunk_FUN_01efb3a4(Method_System_DateTime_AddTicks__);
  thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
  thunk_FUN_01efb3a4(Method_System_Runtime_CompilerServices_TaskAwaiter<bool>_GetResult__);
  thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_MouseEventBase<MouseLeaveWindowEvent>__ctor__);
  *(undefined1 *)(unaff_x20 + 0x808) = 1;
  plVar7 = (long *)unaff_x19[0x8a];
  uVar9 = extraout_x1;
  if (plVar7 == (long *)0x0) {
    (**(code **)(*unaff_x19 + 0x7c8))();
    plVar7 = (long *)unaff_x19[0x8a];
    uVar9 = extraout_x1_00;
  }
  auVar13._8_8_ = 0;
  auVar13._0_8_ = uVar9;
  auVar15 = auVar13 << 0x40;
  if (plVar7 != (long *)0x0) {
    auVar13 = (**(code **)(*plVar7 + 0x1e8))(plVar7,*(undefined8 *)(*plVar7 + 0x1f0));
    uVar9 = auVar13._0_8_;
    plVar7 = (long *)unaff_x19[0x89];
    auVar15 = auVar13;
    if (plVar7 != (long *)0x0) {
      auVar14 = (**(code **)(*plVar7 + 0x188))(plVar7,*(undefined8 *)(*plVar7 + 400));
      plVar7 = auVar14._0_8_;
      auVar15._8_8_ = 0;
      auVar15._0_8_ = auVar14._8_8_;
      auVar15 = auVar15 << 0x40;
      if (plVar7 != (long *)0x0) {
        lVar10 = *plVar7;
        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) ==
                *(long *)
                 Method_System_Collections_CollectionBase_System_Collections_IList_set_Item__) {
              puVar8 = (undefined8 *)(lVar10 + (long)(*piVar12 + 1) * 0x10 + 0x138);
              goto LAB_04137730;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar8 = (undefined8 *)
                 FUN_01ecb238(plVar7,*(long *)
                                      Method_System_Collections_CollectionBase_System_Collections_IList_set_Item__
                              ,1);
LAB_04137730:
        iVar6 = (*(code *)*puVar8)(plVar7,puVar8[1]);
        if ((auVar13._0_4_ <= iVar6 + -1) && ((int)unaff_x19[0x85] != 0)) {
          plVar7 = (long *)unaff_x19[0x89];
          auVar14._8_8_ = 0;
          auVar14._0_8_ = extraout_x1_01;
          auVar15 = auVar14 << 0x40;
          if (plVar7 == (long *)0x0) goto LAB_04137afc;
          auVar15 = (**(code **)(*plVar7 + 0x1f8))
                              (plVar7,uVar9 & 0xffffffff,*(undefined8 *)(*plVar7 + 0x200));
          uVar11 = auVar15._8_8_;
          if (unaff_w23 == 2) {
            if (unaff_x19[0x7b] != 0) {
              plVar7 = (long *)unaff_x19[0x8e];
              if (plVar7 == (long *)0x0) goto LAB_04137afc;
              lVar10 = *plVar7;
              uVar9 = (ulong)*(ushort *)(lVar10 + 0x12e);
              if (uVar9 != 0) {
                piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar12 + -2) == *(long *)Method_System_DateTime_AddMonths__) {
                    puVar8 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
                    goto LAB_041378dc;
                  }
                  uVar9 = uVar9 - 1;
                  piVar12 = piVar12 + 4;
                } while (uVar9 != 0);
              }
              puVar8 = (undefined8 *)
                       FUN_01ecb238(plVar7,*(long *)Method_System_DateTime_AddMonths__,0);
LAB_041378dc:
              plVar7 = (long *)(*(code *)*puVar8)(plVar7,puVar8[1]);
              puVar5 = Method_System_DateTime_AddTicks__;
              puVar4 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
              if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              do {
                lVar10 = *plVar7;
                uVar9 = (ulong)*(ushort *)(lVar10 + 0x12e);
                if (uVar9 != 0) {
                  piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar12 + -2) == *(long *)puVar4) {
                      puVar8 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
                      goto LAB_0413794c;
                    }
                    uVar9 = uVar9 - 1;
                    piVar12 = piVar12 + 4;
                  } while (uVar9 != 0);
                }
                puVar8 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar4,0);
LAB_0413794c:
                uVar9 = (*(code *)*puVar8)(plVar7,puVar8[1]);
                if ((uVar9 & 1) == 0) break;
                lVar10 = *plVar7;
                uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
                if (uVar11 != 0) {
                  piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar12 + -2) == *(long *)puVar5) {
                      puVar8 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
                      goto FUN_041379ac;
                    }
                    uVar11 = uVar11 - 1;
                    piVar12 = piVar12 + 4;
                  } while (uVar11 != 0);
                }
                puVar8 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar5,0);
FUN_041379ac:
                iVar6 = (*(code *)*puVar8)(plVar7,puVar8[1]);
              } while (auVar13._0_4_ != iVar6);
              if (plVar7 != (long *)0x0) {
                lVar10 = *plVar7;
                uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
                if (uVar11 != 0) {
                  piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar12 + -2) ==
                        *(long *)
                         Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
                      puVar8 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
                      goto LAB_04137a24;
                    }
                    uVar11 = uVar11 - 1;
                    piVar12 = piVar12 + 4;
                  } while (uVar11 != 0);
                }
                puVar8 = (undefined8 *)
                         FUN_01ecb238(plVar7,*(long *)
                                              Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                                      ,0);
LAB_04137a24:
                (*(code *)*puVar8)(plVar7,puVar8[1]);
              }
              FUN_04133b2c();
              if (((uVar9 & 1) != 0) && (lVar10 = unaff_x19[0x7b], lVar10 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x04137a7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (**(code **)(lVar10 + 0x18))
                          (*(undefined8 *)(lVar10 + 0x40),unaff_x19[0x8f],
                           *(undefined8 *)(lVar10 + 0x28));
                return;
              }
            }
          }
          else if (unaff_w23 == 1) {
            iVar6 = (int)unaff_x19[0x85];
            if ((iVar6 != 2) || ((unaff_x22 & 1) == 0)) {
              if ((iVar6 == 2) && ((unaff_x21 & 1) != 0)) {
                if (unaff_x19[0x8e] == 0) goto LAB_04137afc;
                if (*(int *)(unaff_x19[0x8e] + 0x18) != 0) {
                  FUN_04137ca0();
                  return;
                }
              }
              else {
                if (iVar6 == 2) {
                  auVar2._8_8_ = 0;
                  auVar2._0_8_ = uVar11;
                  auVar15 = auVar2 << 0x40;
                  if (unaff_x19[0x8e] == 0) goto LAB_04137afc;
                  auVar15 = FUN_030bac7c(unaff_x19[0x8e],uVar9 & 0xffffffff,
                                         *(undefined8 *)
                                          Method_System_Runtime_CompilerServices_TaskAwaiter<bool>_GetResult__
                                        );
                  uVar11 = auVar15._8_8_;
                  if ((auVar15._0_8_ & 1) != 0) {
                    lVar10 = unaff_x19[0x80];
                    if (lVar10 == 0) {
                      return;
                    }
                    /* WARNING: Could not recover jumptable at 0x041378ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    (**(code **)(lVar10 + 0x18))
                              (*(undefined8 *)(lVar10 + 0x40),*(undefined8 *)(lVar10 + 0x28));
                    return;
                  }
                  iVar6 = (int)unaff_x19[0x85];
                }
                if (iVar6 == 1) {
                  auVar3._8_8_ = 0;
                  auVar3._0_8_ = uVar11;
                  auVar15 = auVar3 << 0x40;
                  if (unaff_x19[0x8e] == 0) goto LAB_04137afc;
                  uVar9 = FUN_030bac7c(unaff_x19[0x8e],uVar9 & 0xffffffff,
                                       *(undefined8 *)
                                        Method_System_Runtime_CompilerServices_TaskAwaiter<bool>_GetResult__
                                      );
                  if (((uVar9 & 1) != 0) && (lVar10 = unaff_x19[0x80], lVar10 != 0)) {
                    (**(code **)(lVar10 + 0x18))
                              (*(undefined8 *)(lVar10 + 0x40),*(undefined8 *)(lVar10 + 0x28));
                  }
                }
              }
              FUN_04133b2c();
              return;
            }
            uVar9 = auVar15._0_8_ & 0xffffffff;
            auVar1._8_8_ = 0;
            auVar1._0_8_ = uVar9;
            auVar15 = auVar1 << 0x40;
            if (unaff_x19[0x8d] != 0) {
              uVar9 = FUN_030bac7c(unaff_x19[0x8d],uVar9,
                                   *(undefined8 *)
                                    Method_System_Runtime_CompilerServices_TaskAwaiter<bool>_GetResult__
                                  );
              if ((uVar9 & 1) == 0) {
                FUN_04137c28();
                return;
              }
              FUN_04137bcc();
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
  FUN_01f08a3c(auVar15._0_8_,auVar15._8_8_);
}


