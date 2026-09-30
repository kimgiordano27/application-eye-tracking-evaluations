/*
FUNCTION_NAME: UnityEngine.UIElements.StyleCursor$$.ctor
ENTRY_POINT: 0413770c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 180
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_6;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x04137a3c) */
/* WARNING: Removing unreachable block (ram,0x04137b04) */

void UnityEngine_UIElements_StyleCursor___ctor(long param_1,undefined8 param_2,long param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined *puVar4;
  undefined *puVar5;
  undefined1 in_ZR;
  int iVar6;
  undefined8 *puVar7;
  long *plVar8;
  ulong extraout_x1;
  ulong uVar9;
  long lVar10;
  long in_x9;
  ulong uVar11;
  int *in_x10;
  int *piVar12;
  long unaff_x19;
  int unaff_w20;
  ulong unaff_x21;
  ulong unaff_x22;
  int unaff_w23;
  undefined1 auVar13 [16];
  
  while (!(bool)in_ZR) {
    if (*(long *)(in_x10 + -2) == param_3) {
      puVar7 = (undefined8 *)(param_1 + (long)(*in_x10 + 1) * 0x10 + 0x138);
      goto LAB_04137730;
    }
    in_x9 = in_x9 + -1;
    in_x10 = in_x10 + 4;
    in_ZR = in_x9 == 0;
  }
  puVar7 = (undefined8 *)FUN_01ecb238();
LAB_04137730:
  iVar6 = (*(code *)*puVar7)();
  if ((unaff_w20 <= iVar6 + -1) && (*(int *)(unaff_x19 + 0x428) != 0)) {
    plVar8 = *(long **)(unaff_x19 + 0x448);
    auVar13._8_8_ = 0;
    auVar13._0_8_ = extraout_x1;
    auVar13 = auVar13 << 0x40;
    if (plVar8 == (long *)0x0) goto LAB_04137afc;
    auVar13 = (**(code **)(*plVar8 + 0x1f8))(plVar8,unaff_w20,*(undefined8 *)(*plVar8 + 0x200));
    uVar9 = auVar13._8_8_;
    if (unaff_w23 == 2) {
      if (*(long *)(unaff_x19 + 0x3d8) != 0) {
        plVar8 = *(long **)(unaff_x19 + 0x470);
        if (plVar8 == (long *)0x0) goto LAB_04137afc;
        lVar10 = *plVar8;
        uVar9 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar9 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)Method_System_DateTime_AddMonths__) {
              puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_041378dc;
            }
            uVar9 = uVar9 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar9 != 0);
        }
        puVar7 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)Method_System_DateTime_AddMonths__,0);
LAB_041378dc:
        plVar8 = (long *)(*(code *)*puVar7)(plVar8,puVar7[1]);
        puVar5 = Method_System_DateTime_AddTicks__;
        puVar4 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        do {
          lVar10 = *plVar8;
          uVar9 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar9 != 0) {
            piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == *(long *)puVar4) {
                puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
                goto LAB_0413794c;
              }
              uVar9 = uVar9 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar9 != 0);
          }
          puVar7 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)puVar4,0);
LAB_0413794c:
          uVar9 = (*(code *)*puVar7)(plVar8,puVar7[1]);
          if ((uVar9 & 1) == 0) break;
          lVar10 = *plVar8;
          uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar11 != 0) {
            piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == *(long *)puVar5) {
                puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
                goto FUN_041379ac;
              }
              uVar11 = uVar11 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar11 != 0);
          }
          puVar7 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)puVar5,0);
FUN_041379ac:
          iVar6 = (*(code *)*puVar7)(plVar8,puVar7[1]);
        } while (unaff_w20 != iVar6);
        if (plVar8 != (long *)0x0) {
          lVar10 = *plVar8;
          uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar11 != 0) {
            piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) ==
                  *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__)
              {
                puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
                goto LAB_04137a24;
              }
              uVar11 = uVar11 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar11 != 0);
          }
          puVar7 = (undefined8 *)
                   FUN_01ecb238(plVar8,*(long *)
                                        Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                                ,0);
LAB_04137a24:
          (*(code *)*puVar7)(plVar8,puVar7[1]);
        }
        FUN_04133b2c();
        if (((uVar9 & 1) != 0) && (lVar10 = *(long *)(unaff_x19 + 0x3d8), lVar10 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x04137a7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(lVar10 + 0x18))
                    (*(undefined8 *)(lVar10 + 0x40),*(undefined8 *)(unaff_x19 + 0x478),
                     *(undefined8 *)(lVar10 + 0x28));
          return;
        }
      }
    }
    else if (unaff_w23 == 1) {
      iVar6 = *(int *)(unaff_x19 + 0x428);
      if ((iVar6 == 2) && ((unaff_x22 & 1) != 0)) {
        uVar9 = auVar13._0_8_ & 0xffffffff;
        auVar1._8_8_ = 0;
        auVar1._0_8_ = uVar9;
        auVar13 = auVar1 << 0x40;
        if (*(long *)(unaff_x19 + 0x468) != 0) {
          uVar9 = FUN_030bac7c(*(long *)(unaff_x19 + 0x468),uVar9,
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
LAB_04137afc:
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c(auVar13._0_8_,auVar13._8_8_);
      }
      if ((iVar6 == 2) && ((unaff_x21 & 1) != 0)) {
        if (*(long *)(unaff_x19 + 0x470) == 0) goto LAB_04137afc;
        if (*(int *)(*(long *)(unaff_x19 + 0x470) + 0x18) != 0) {
          FUN_04137ca0();
          return;
        }
      }
      else {
        if (iVar6 == 2) {
          auVar2._8_8_ = 0;
          auVar2._0_8_ = uVar9;
          auVar13 = auVar2 << 0x40;
          if (*(long *)(unaff_x19 + 0x470) == 0) goto LAB_04137afc;
          auVar13 = FUN_030bac7c(*(long *)(unaff_x19 + 0x470),unaff_w20,
                                 *(undefined8 *)
                                  Method_System_Runtime_CompilerServices_TaskAwaiter<bool>_GetResult__
                                );
          uVar9 = auVar13._8_8_;
          if ((auVar13._0_8_ & 1) != 0) {
            lVar10 = *(long *)(unaff_x19 + 0x400);
            if (lVar10 == 0) {
              return;
            }
                    /* WARNING: Could not recover jumptable at 0x041378ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(lVar10 + 0x18))
                      (*(undefined8 *)(lVar10 + 0x40),*(undefined8 *)(lVar10 + 0x28));
            return;
          }
          iVar6 = *(int *)(unaff_x19 + 0x428);
        }
        if (iVar6 == 1) {
          auVar3._8_8_ = 0;
          auVar3._0_8_ = uVar9;
          auVar13 = auVar3 << 0x40;
          if (*(long *)(unaff_x19 + 0x470) == 0) goto LAB_04137afc;
          uVar9 = FUN_030bac7c(*(long *)(unaff_x19 + 0x470),unaff_w20,
                               *(undefined8 *)
                                Method_System_Runtime_CompilerServices_TaskAwaiter<bool>_GetResult__
                              );
          if (((uVar9 & 1) != 0) && (lVar10 = *(long *)(unaff_x19 + 0x400), lVar10 != 0)) {
            (**(code **)(lVar10 + 0x18))
                      (*(undefined8 *)(lVar10 + 0x40),*(undefined8 *)(lVar10 + 0x28));
          }
        }
      }
      FUN_04133b2c();
      return;
    }
  }
  return;
}


