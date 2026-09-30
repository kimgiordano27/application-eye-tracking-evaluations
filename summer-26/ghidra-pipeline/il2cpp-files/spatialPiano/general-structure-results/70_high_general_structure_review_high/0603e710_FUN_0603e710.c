/*
FUNCTION_NAME: FUN_0603e710
ENTRY_POINT: 0603e710
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_18;telemetry_or_network_hits_6;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x0603eed0) */
/* WARNING: Removing unreachable block (ram,0x0603f07c) */

void FUN_0603e710(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long *plVar13;
  undefined8 *puVar14;
  ulong uVar15;
  int *piVar16;
  int iVar17;
  long lVar18;
  undefined8 uVar19;
  undefined8 local_b8;
  long **pplStack_b0;
  undefined8 local_a8;
  long lStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  long **pplStack_88;
  undefined8 local_80;
  long local_78;
  undefined8 local_70;
  long *local_68;
  
  puVar5 = Method_System_Threading_Tasks_Task_<>c_<Delay>b__247_0__;
  puVar4 = Method_System_Threading_Tasks_Task_<>c_<_cctor>b__271_2__;
  if ((DAT_06bc5a55 & 1) == 0) {
    FUN_02f08768(Method_System_Threading_Tasks_Task_<>c_<Delay>b__247_1__);
    FUN_02f08768(
                Method_System_Runtime_CompilerServices_TaskAwaiter_<>c__DisplayClass11_0_<OutputWaitEtwEvents>b__0__
                );
    FUN_02f08768(Method_Unity_AppUI_Core_TaskExtensions_<>c_<_cctor>b__6_0__);
    FUN_02f08768(
                Method_Unity_AppUI_Core_TaskExtensions_<AsCoroutine>d__2_System_Collections_IEnumerator_Reset__
                );
    FUN_02f08768(Method_System_Threading_Tasks_TaskSchedulerAwaitTaskContinuation_<>c_<Run>b__2_0__)
    ;
    FUN_02f08768(
                Method_System_Threading_Tasks_TaskToApm_<>c__DisplayClass3_0_<InvokeCallbackWhenTaskCompletes>b__0__
                );
    FUN_02f08768(Method_Meta_XR_ImmersiveDebugger_Telemetry_TelemetryTracker_OnDisable__);
    FUN_02f08768(Method_Meta_XR_ImmersiveDebugger_Telemetry_TelemetryTracker_OnFocusLost__);
    FUN_02f08768(Method_Oculus_Interaction_Locomotion_TeleportInteractor_<>c_<_ctor>b__47_0__);
    FUN_02f08768(PTR_DAT_067c91b0);
    FUN_02f08768(
                Method_Oculus_Interaction_DistanceReticles_TeleportReticleDrawer_<SelectionAnimation>d__58_System_Collections_IEnumerator_Reset__
                );
    FUN_02f08768(Method_UnityEngine_Rendering_Universal_TemporalAA_<>c_<Render>b__17_0__);
    FUN_02f08768(PTR_DAT_067c91b8);
    FUN_02f08768(Method_UnityEngine_Rendering_Universal_TemporalAA_<>c_<Render>b__17_1__);
    FUN_02f08768(
                Method_UnityEngine_TerrainUtils_TerrainMap_<>c__DisplayClass3_0_<CreateFromPlacement>b__0__
                );
    FUN_02f08768(
                Method_UnityEngine_TerrainUtils_TerrainUtility_<>c__DisplayClass2_1_<CollectTerrains>b__0__
                );
    FUN_02f08768(
                Method_UnityEngine_UIElements_TextElement_<>c__DisplayClass126_1_<EditionHandleEvent>b__0__
                );
    FUN_02f08768(Method_System_Threading_Tasks_Task_<>c_<Delay>b__247_0__);
    FUN_02f08768(Method_UnityEngine_TextCore_Text_TextHandle_<>c_<InitThreadArrays>b__4_0__);
    FUN_02f08768(Method_UnityEngine_TextCore_Text_TextHandle_<>c_<InitThreadArrays>b__4_1__);
    FUN_02f08768(Method_UnityEngine_TextCore_Text_TextHandle_<>c_<InitThreadArrays>b__4_2__);
    FUN_02f08768(Method_System_Threading_Tasks_Task_<>c_<_cctor>b__271_2__);
    FUN_02f08768(Method_Newtonsoft_Json_JsonTextReader_<ParseCommentAsync>d__16_MoveNext__);
    FUN_02f08768(Method_UnityEngine_TextCore_Text_TextHandle_<>c_<get_generators>b__10_0__);
    FUN_02f08768(Method_UnityEngine_TextCore_Text_TextHandle_<>c_<get_settingsArray>b__7_0__);
    FUN_02f08768(Method_UnityEngine_TextCore_Text_TextHandle_<>c_<get_textInfosCommon>b__13_0__);
    DAT_06bc5a55 = 1;
  }
  local_70 = 0;
  local_68 = (long *)0x0;
  pplStack_88 = (long **)0x0;
  local_90 = 0;
  local_78 = 0;
  local_80 = 0;
  lVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
  FUN_03abf108(lVar9,*(undefined8 *)puVar5);
  lVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
  FUN_03abf108(lVar10,*(undefined8 *)puVar5);
  lVar11 = FUN_060382a4(0);
  puVar4 = Method_UnityEngine_TextCore_Text_TextHandle_<>c_<get_textInfosCommon>b__13_0__;
  if (lVar11 != 0) {
    uVar12 = FUN_03398fb4(*(undefined8 *)(lVar11 + 0x18),
                          *(undefined8 *)
                           Method_Unity_AppUI_Core_TaskExtensions_<AsCoroutine>d__2_System_Collections_IEnumerator_Reset__
                         );
    lVar11 = *(long *)puVar4;
    if (*(int *)(lVar11 + 0xe4) == 0) {
      thunk_FUN_02f6670c(lVar11);
      lVar11 = *(long *)puVar4;
    }
    puVar5 = Method_System_Threading_Tasks_TaskSchedulerAwaitTaskContinuation_<>c_<Run>b__2_0__;
    puVar14 = *(undefined8 **)(lVar11 + 0xb8);
    lVar18 = puVar14[1];
    if (lVar18 == 0) {
      if (*(int *)(lVar11 + 0xe4) == 0) {
        thunk_FUN_02f6670c(lVar11);
        puVar14 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
      }
      uVar19 = *puVar14;
      lVar18 = thunk_FUN_02f45270(*(undefined8 *)
                                   Method_Oculus_Interaction_Locomotion_TeleportInteractor_<>c_<_ctor>b__47_0__
                                 );
      FUN_04e0200c(lVar18,uVar19,
                   *(undefined8 *)
                    Method_UnityEngine_TextCore_Text_TextHandle_<>c_<get_generators>b__10_0__,0);
      *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 8) = lVar18;
    }
    plVar13 = (long *)FUN_033a774c(uVar12,lVar18,*(undefined8 *)puVar5);
    if (plVar13 != (long *)0x0) {
      lVar11 = *plVar13;
      uVar15 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) ==
              *(long *)
               Method_Oculus_Interaction_DistanceReticles_TeleportReticleDrawer_<SelectionAnimation>d__58_System_Collections_IEnumerator_Reset__
             ) {
            puVar14 = (undefined8 *)(lVar11 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_0603e9d4;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar14 = (undefined8 *)
                FUN_02f421d0(plVar13,*(long *)
                                      Method_Oculus_Interaction_DistanceReticles_TeleportReticleDrawer_<SelectionAnimation>d__58_System_Collections_IEnumerator_Reset__
                             ,0);
LAB_0603e9d4:
      puVar5 = Method_Newtonsoft_Json_JsonTextReader_<ParseCommentAsync>d__16_MoveNext__;
      plVar13 = (long *)(*(code *)*puVar14)(plVar13,puVar14[1]);
      puVar8 = Method_UnityEngine_TextCore_Text_TextHandle_<>c_<InitThreadArrays>b__4_2__;
      puVar7 = 
      Method_UnityEngine_TerrainUtils_TerrainUtility_<>c__DisplayClass2_1_<CollectTerrains>b__0__;
      puVar6 = Method_UnityEngine_Rendering_Universal_TemporalAA_<>c_<Render>b__17_0__;
      puVar4 = PTR_DAT_067c91b8;
      pplStack_b0 = &local_68;
      local_b8 = 0;
      do {
        local_68 = plVar13;
        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        lVar11 = *plVar13;
        uVar15 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar15 != 0) {
          piVar16 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == *(long *)puVar4) {
              puVar14 = (undefined8 *)(lVar11 + (long)*piVar16 * 0x10 + 0x138);
              goto LAB_0603ea68;
            }
            uVar15 = uVar15 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar15 != 0);
        }
        puVar14 = (undefined8 *)FUN_02f421d0(plVar13,*(long *)puVar4,0);
LAB_0603ea68:
        uVar15 = (*(code *)*puVar14)(plVar13,puVar14[1]);
        plVar13 = local_68;
        puVar3 = PTR_DAT_067c91b0;
        if ((uVar15 & 1) == 0) {
          if (local_68 == (long *)0x0) goto LAB_0603ebcc;
          lVar11 = *local_68;
          uVar15 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar15 == 0) goto LAB_0603eba4;
          piVar16 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          goto LAB_0603eb8c;
        }
        if (local_68 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        lVar11 = *local_68;
        uVar15 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar15 != 0) {
          piVar16 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == *(long *)puVar6) {
              puVar14 = (undefined8 *)(lVar11 + (long)*piVar16 * 0x10 + 0x138);
              goto LAB_0603eacc;
            }
            uVar15 = uVar15 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar15 != 0);
        }
        puVar14 = (undefined8 *)FUN_02f421d0(local_68,*(long *)puVar6,0);
LAB_0603eacc:
        lVar11 = (*(code *)*puVar14)(plVar13,puVar14[1]);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        iVar1 = *(int *)(lVar9 + 0x18);
        FUN_06043d0c(lVar11,lVar9);
        iVar17 = *(int *)(lVar9 + 0x18);
        while (iVar17 = iVar17 + -1, plVar13 = local_68, iVar1 <= iVar17) {
          uVar12 = FUN_03abf644(lVar9,iVar17,*(undefined8 *)puVar8);
          if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          uVar15 = FUN_06043bb8(lVar11,uVar12);
          if ((uVar15 & 1) == 0) {
            FUN_03ac0f78(lVar9,iVar17,*(undefined8 *)puVar7);
          }
        }
      } while( true );
    }
  }
  goto LAB_0603f078;
  while( true ) {
    uVar15 = uVar15 - 1;
    piVar16 = piVar16 + 4;
    if (uVar15 == 0) break;
LAB_0603eb8c:
    if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_067c91b0) {
      puVar14 = (undefined8 *)(lVar11 + (long)*piVar16 * 0x10 + 0x138);
      goto LAB_0603ebc0;
    }
  }
LAB_0603eba4:
  puVar14 = (undefined8 *)FUN_02f421d0(local_68,*(long *)PTR_DAT_067c91b0,0);
LAB_0603ebc0:
  (*(code *)*puVar14)(plVar13,puVar14[1]);
LAB_0603ebcc:
  if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  uVar15 = FUN_06043d94(lVar9,0);
  if ((uVar15 & 1) == 0) {
    return;
  }
  lVar11 = FUN_060382a4(0);
  if (lVar11 != 0) {
    uVar12 = FUN_03398fb4(*(undefined8 *)(lVar11 + 0x18),
                          *(undefined8 *)
                           Method_Unity_AppUI_Core_TaskExtensions_<AsCoroutine>d__2_System_Collections_IEnumerator_Reset__
                         );
    puVar4 = Method_UnityEngine_TextCore_Text_TextHandle_<>c_<get_textInfosCommon>b__13_0__;
    lVar11 = *(long *)Method_UnityEngine_TextCore_Text_TextHandle_<>c_<get_textInfosCommon>b__13_0__
    ;
    if (*(int *)(lVar11 + 0xe4) == 0) {
      thunk_FUN_02f6670c(lVar11);
      lVar11 = *(long *)puVar4;
    }
    puVar14 = *(undefined8 **)(lVar11 + 0xb8);
    lVar18 = puVar14[2];
    if (lVar18 == 0) {
      if (*(int *)(lVar11 + 0xe4) == 0) {
        thunk_FUN_02f6670c(lVar11);
        puVar14 = *(undefined8 **)
                   (*(long *)
                     Method_UnityEngine_TextCore_Text_TextHandle_<>c_<get_textInfosCommon>b__13_0__
                   + 0xb8);
      }
      uVar19 = *puVar14;
      lVar18 = thunk_FUN_02f45270(*(undefined8 *)
                                   Method_Oculus_Interaction_Locomotion_TeleportInteractor_<>c_<_ctor>b__47_0__
                                 );
      FUN_04e0200c(lVar18,uVar19,
                   *(undefined8 *)
                    Method_UnityEngine_TextCore_Text_TextHandle_<>c_<get_settingsArray>b__7_0__,0);
      *(long *)(*(long *)(*(long *)
                           Method_UnityEngine_TextCore_Text_TextHandle_<>c_<get_textInfosCommon>b__13_0__
                         + 0xb8) + 0x10) = lVar18;
    }
    plVar13 = (long *)FUN_033a774c(uVar12,lVar18,
                                   *(undefined8 *)
                                    Method_System_Threading_Tasks_TaskSchedulerAwaitTaskContinuation_<>c_<Run>b__2_0__
                                  );
    if (plVar13 != (long *)0x0) {
      lVar11 = *plVar13;
      uVar15 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) ==
              *(long *)
               Method_Oculus_Interaction_DistanceReticles_TeleportReticleDrawer_<SelectionAnimation>d__58_System_Collections_IEnumerator_Reset__
             ) {
            puVar14 = (undefined8 *)(lVar11 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_0603ed18;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar14 = (undefined8 *)
                FUN_02f421d0(plVar13,*(long *)
                                      Method_Oculus_Interaction_DistanceReticles_TeleportReticleDrawer_<SelectionAnimation>d__58_System_Collections_IEnumerator_Reset__
                             ,0);
LAB_0603ed18:
      local_68 = (long *)(*(code *)*puVar14)(plVar13,puVar14[1]);
      puVar7 = Method_UnityEngine_TextCore_Text_TextHandle_<>c_<InitThreadArrays>b__4_2__;
      puVar6 = Method_UnityEngine_Rendering_Universal_TemporalAA_<>c_<Render>b__17_0__;
      puVar4 = PTR_DAT_067c91b8;
      pplStack_b0 = &local_68;
      local_b8 = 0;
      do {
        plVar13 = local_68;
        if (local_68 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        lVar11 = *local_68;
        uVar15 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar15 != 0) {
          piVar16 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == *(long *)puVar4) {
              puVar14 = (undefined8 *)(lVar11 + (long)*piVar16 * 0x10 + 0x138);
              goto LAB_0603ed9c;
            }
            uVar15 = uVar15 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar15 != 0);
        }
        puVar14 = (undefined8 *)FUN_02f421d0(local_68,*(long *)puVar4,0);
LAB_0603ed9c:
        uVar15 = (*(code *)*puVar14)(plVar13,puVar14[1]);
        plVar13 = local_68;
        if ((uVar15 & 1) == 0) {
          if (local_68 == (long *)0x0) goto UnityEngine_Event__CopyFrom;
          lVar11 = *local_68;
          uVar15 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar15 == 0) goto LAB_0603ee9c;
          piVar16 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          goto LAB_0603ee84;
        }
        if (local_68 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        lVar11 = *local_68;
        uVar15 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar15 != 0) {
          piVar16 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == *(long *)puVar6) {
              puVar14 = (undefined8 *)(lVar11 + (long)*piVar16 * 0x10 + 0x138);
              goto LAB_0603ee00;
            }
            uVar15 = uVar15 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar15 != 0);
        }
        puVar14 = (undefined8 *)FUN_02f421d0(local_68,*(long *)puVar6,0);
LAB_0603ee00:
        plVar13 = (long *)(*(code *)*puVar14)(plVar13,puVar14[1]);
        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        FUN_06043d0c(plVar13,lVar10);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        uVar12 = FUN_03abf644(lVar10,*(int *)(lVar10 + 0x18) + -1,*(undefined8 *)puVar7);
        (**(code **)(*plVar13 + 0x358))(plVar13,lVar9,uVar12,*(undefined8 *)(*plVar13 + 0x360));
      } while( true );
    }
  }
  goto LAB_0603f078;
  while( true ) {
    uVar15 = uVar15 - 1;
    piVar16 = piVar16 + 4;
    if (uVar15 == 0) break;
LAB_0603ee84:
    if (*(long *)(piVar16 + -2) == *(long *)puVar3) {
      puVar14 = (undefined8 *)(lVar11 + (long)*piVar16 * 0x10 + 0x138);
      goto LAB_0603eeb8;
    }
  }
LAB_0603ee9c:
  puVar14 = (undefined8 *)FUN_02f421d0(local_68,*(long *)puVar3,0);
LAB_0603eeb8:
  (*(code *)*puVar14)(plVar13,puVar14[1]);
UnityEngine_Event__CopyFrom:
  lVar11 = thunk_FUN_02f45270(*(undefined8 *)
                               Method_Unity_AppUI_Core_TaskExtensions_<>c_<_cctor>b__6_0__);
  FUN_0492c420(lVar11,*(undefined8 *)
                       Method_System_Runtime_CompilerServices_TaskAwaiter_<>c__DisplayClass11_0_<OutputWaitEtwEvents>b__0__
              );
  if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  uVar15 = FUN_060440d8(lVar9,lVar11);
  if ((uVar15 & 1) == 0) {
    return;
  }
  if (lVar10 != 0) {
    if (0 < *(int *)(lVar10 + 0x18)) {
      if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      FUN_06043d94(lVar10,1);
      FUN_060440d8(lVar10,lVar11);
    }
    if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    FUN_06044bf0();
    if (lVar11 != 0) {
      FUN_0492d154(&local_b8,lVar11,
                   *(undefined8 *)Method_System_Threading_Tasks_Task_<>c_<Delay>b__247_1__);
      puVar6 = 
      Method_UnityEngine_UIElements_TextElement_<>c__DisplayClass126_1_<EditionHandleEvent>b__0__;
      puVar4 = Method_Meta_XR_ImmersiveDebugger_Telemetry_TelemetryTracker_OnDisable__;
      pplStack_88 = pplStack_b0;
      local_90 = local_b8;
      local_78 = lStack_a0;
      local_80 = local_a8;
      local_70 = local_98;
      local_b8 = 0;
      pplStack_b0 = (long **)&local_90;
      while (uVar15 = FUN_04bbf644(&local_90,*(undefined8 *)puVar4), lVar9 = local_78,
            uVar12 = local_80, (uVar15 & 1) != 0) {
        if (local_78 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        uVar19 = FUN_03c15414(local_78,*(undefined8 *)puVar6);
        uVar2 = *(undefined4 *)(lVar9 + 0x18);
        if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        uVar15 = FUN_06044d18(uVar12,uVar19,uVar2);
        if ((uVar15 & 1) == 0) {
          FUN_06043180();
        }
      }
      FUN_04bbf758(&local_90,
                   *(undefined8 *)
                    Method_System_Threading_Tasks_TaskToApm_<>c__DisplayClass3_0_<InvokeCallbackWhenTaskCompletes>b__0__
                  );
      if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      uVar15 = FUN_06044e60();
      if ((uVar15 & 1) != 0) {
        return;
      }
      FUN_06043180();
      return;
    }
  }
LAB_0603f078:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


