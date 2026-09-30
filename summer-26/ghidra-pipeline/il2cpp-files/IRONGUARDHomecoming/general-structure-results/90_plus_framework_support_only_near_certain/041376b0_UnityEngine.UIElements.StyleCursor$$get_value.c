/*
FUNCTION_NAME: UnityEngine.UIElements.StyleCursor$$get_value
ENTRY_POINT: 041376b0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 180
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_6;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x04137a3c) */
/* WARNING: Removing unreachable block (ram,0x04137b04) */

void UnityEngine_UIElements_StyleCursor__get_value(void)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined8 *puVar6;
  ulong extraout_x1;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  code *in_x9;
  ulong uVar10;
  int *piVar11;
  long unaff_x19;
  ulong unaff_x21;
  ulong unaff_x22;
  int unaff_w23;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  
  auVar12 = (*in_x9)();
  uVar7 = auVar12._0_8_;
  plVar8 = *(long **)(unaff_x19 + 0x448);
  auVar14 = auVar12;
  if (plVar8 != (long *)0x0) {
    auVar13 = (**(code **)(*plVar8 + 0x188))(plVar8,*(undefined8 *)(*plVar8 + 400));
    plVar8 = auVar13._0_8_;
    auVar14._8_8_ = 0;
    auVar14._0_8_ = auVar13._8_8_;
    auVar14 = auVar14 << 0x40;
    if (plVar8 != (long *)0x0) {
      lVar9 = *plVar8;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) ==
              *(long *)Method_System_Collections_CollectionBase_System_Collections_IList_set_Item__)
          {
            puVar6 = (undefined8 *)(lVar9 + (long)(*piVar11 + 1) * 0x10 + 0x138);
            goto LAB_04137730;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar6 = (undefined8 *)
               FUN_01ecb238(plVar8,*(long *)
                                    Method_System_Collections_CollectionBase_System_Collections_IList_set_Item__
                            ,1);
LAB_04137730:
      iVar5 = (*(code *)*puVar6)(plVar8,puVar6[1]);
      if ((auVar12._0_4_ <= iVar5 + -1) && (*(int *)(unaff_x19 + 0x428) != 0)) {
        plVar8 = *(long **)(unaff_x19 + 0x448);
        auVar13._8_8_ = 0;
        auVar13._0_8_ = extraout_x1;
        auVar14 = auVar13 << 0x40;
        if (plVar8 == (long *)0x0) goto LAB_04137afc;
        auVar14 = (**(code **)(*plVar8 + 0x1f8))
                            (plVar8,uVar7 & 0xffffffff,*(undefined8 *)(*plVar8 + 0x200));
        uVar10 = auVar14._8_8_;
        if (unaff_w23 == 2) {
          if (*(long *)(unaff_x19 + 0x3d8) != 0) {
            plVar8 = *(long **)(unaff_x19 + 0x470);
            if (plVar8 == (long *)0x0) goto LAB_04137afc;
            lVar9 = *plVar8;
            uVar7 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar7 != 0) {
              piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar11 + -2) == *(long *)Method_System_DateTime_AddMonths__) {
                  puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
                  goto LAB_041378dc;
                }
                uVar7 = uVar7 - 1;
                piVar11 = piVar11 + 4;
              } while (uVar7 != 0);
            }
            puVar6 = (undefined8 *)
                     FUN_01ecb238(plVar8,*(long *)Method_System_DateTime_AddMonths__,0);
LAB_041378dc:
            plVar8 = (long *)(*(code *)*puVar6)(plVar8,puVar6[1]);
            puVar4 = Method_System_DateTime_AddTicks__;
            puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
            if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            do {
              lVar9 = *plVar8;
              uVar7 = (ulong)*(ushort *)(lVar9 + 0x12e);
              if (uVar7 != 0) {
                piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar11 + -2) == *(long *)puVar3) {
                    puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
                    goto LAB_0413794c;
                  }
                  uVar7 = uVar7 - 1;
                  piVar11 = piVar11 + 4;
                } while (uVar7 != 0);
              }
              puVar6 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)puVar3,0);
LAB_0413794c:
              uVar7 = (*(code *)*puVar6)(plVar8,puVar6[1]);
              if ((uVar7 & 1) == 0) break;
              lVar9 = *plVar8;
              uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
              if (uVar10 != 0) {
                piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar11 + -2) == *(long *)puVar4) {
                    puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
                    goto FUN_041379ac;
                  }
                  uVar10 = uVar10 - 1;
                  piVar11 = piVar11 + 4;
                } while (uVar10 != 0);
              }
              puVar6 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)puVar4,0);
FUN_041379ac:
              iVar5 = (*(code *)*puVar6)(plVar8,puVar6[1]);
            } while (auVar12._0_4_ != iVar5);
            if (plVar8 != (long *)0x0) {
              lVar9 = *plVar8;
              uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
              if (uVar10 != 0) {
                piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar11 + -2) ==
                      *(long *)
                       Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
                    puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
                    goto LAB_04137a24;
                  }
                  uVar10 = uVar10 - 1;
                  piVar11 = piVar11 + 4;
                } while (uVar10 != 0);
              }
              puVar6 = (undefined8 *)
                       FUN_01ecb238(plVar8,*(long *)
                                            Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                                    ,0);
LAB_04137a24:
              (*(code *)*puVar6)(plVar8,puVar6[1]);
            }
            FUN_04133b2c();
            if (((uVar7 & 1) != 0) && (lVar9 = *(long *)(unaff_x19 + 0x3d8), lVar9 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x04137a7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)(lVar9 + 0x18))
                        (*(undefined8 *)(lVar9 + 0x40),*(undefined8 *)(unaff_x19 + 0x478),
                         *(undefined8 *)(lVar9 + 0x28));
              return;
            }
          }
        }
        else if (unaff_w23 == 1) {
          iVar5 = *(int *)(unaff_x19 + 0x428);
          if ((iVar5 != 2) || ((unaff_x22 & 1) == 0)) {
            if ((iVar5 == 2) && ((unaff_x21 & 1) != 0)) {
              if (*(long *)(unaff_x19 + 0x470) == 0) goto LAB_04137afc;
              if (*(int *)(*(long *)(unaff_x19 + 0x470) + 0x18) != 0) {
                FUN_04137ca0();
                return;
              }
            }
            else {
              if (iVar5 == 2) {
                auVar12._8_8_ = 0;
                auVar12._0_8_ = uVar10;
                auVar14 = auVar12 << 0x40;
                if (*(long *)(unaff_x19 + 0x470) == 0) goto LAB_04137afc;
                auVar14 = FUN_030bac7c(*(long *)(unaff_x19 + 0x470),uVar7 & 0xffffffff,
                                       *(undefined8 *)
                                        Method_System_Runtime_CompilerServices_TaskAwaiter<bool>_GetResult__
                                      );
                uVar10 = auVar14._8_8_;
                if ((auVar14._0_8_ & 1) != 0) {
                  lVar9 = *(long *)(unaff_x19 + 0x400);
                  if (lVar9 == 0) {
                    return;
                  }
                    /* WARNING: Could not recover jumptable at 0x041378ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (**(code **)(lVar9 + 0x18))
                            (*(undefined8 *)(lVar9 + 0x40),*(undefined8 *)(lVar9 + 0x28));
                  return;
                }
                iVar5 = *(int *)(unaff_x19 + 0x428);
              }
              if (iVar5 == 1) {
                auVar2._8_8_ = 0;
                auVar2._0_8_ = uVar10;
                auVar14 = auVar2 << 0x40;
                if (*(long *)(unaff_x19 + 0x470) == 0) goto LAB_04137afc;
                uVar7 = FUN_030bac7c(*(long *)(unaff_x19 + 0x470),uVar7 & 0xffffffff,
                                     *(undefined8 *)
                                      Method_System_Runtime_CompilerServices_TaskAwaiter<bool>_GetResult__
                                    );
                if (((uVar7 & 1) != 0) && (lVar9 = *(long *)(unaff_x19 + 0x400), lVar9 != 0)) {
                  (**(code **)(lVar9 + 0x18))
                            (*(undefined8 *)(lVar9 + 0x40),*(undefined8 *)(lVar9 + 0x28));
                }
              }
            }
            FUN_04133b2c();
            return;
          }
          uVar7 = auVar14._0_8_ & 0xffffffff;
          auVar1._8_8_ = 0;
          auVar1._0_8_ = uVar7;
          auVar14 = auVar1 << 0x40;
          if (*(long *)(unaff_x19 + 0x468) != 0) {
            uVar7 = FUN_030bac7c(*(long *)(unaff_x19 + 0x468),uVar7,
                                 *(undefined8 *)
                                  Method_System_Runtime_CompilerServices_TaskAwaiter<bool>_GetResult__
                                );
            if ((uVar7 & 1) == 0) {
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
LAB_04137afc:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c(auVar14._0_8_,auVar14._8_8_);
}


