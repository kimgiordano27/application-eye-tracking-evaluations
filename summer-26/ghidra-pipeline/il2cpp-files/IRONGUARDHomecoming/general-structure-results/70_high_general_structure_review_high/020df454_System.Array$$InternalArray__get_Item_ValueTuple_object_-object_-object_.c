/*
FUNCTION_NAME: System.Array$$InternalArray__get_Item<ValueTuple<object,-object,-object>>
ENTRY_POINT: 020df454
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_3;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;negative_framework_namespace_without_eye_use_flow
*/


void System_Array__InternalArray__get_Item<ValueTuple<object,_object,_object>>
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 *puVar16;
  long lVar17;
  long unaff_x19;
  undefined8 uVar18;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long *in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  long *in_stack_00000030;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  long *in_stack_00000050;
  
  FUN_0358d1e4(param_1,0,param_3,0);
  puVar5 = Method_AppDeeplinkUI_LaunchUnrealDeeplinkSample__;
  if (*(long *)(unaff_x19 + 0x60) != 0) {
    lVar12 = FUN_02b6b114(*(long *)(unaff_x19 + 0x60),
                          *(undefined8 *)Method_AppDeeplinkUI_LaunchUnrealDeeplinkSample__);
    puVar10 = Method_Oculus_Voice_Dictation_AppDictationExperience_OnRequestInit__;
    puVar9 = Method_Oculus_Voice_Dictation_AppDictationExperience_OnPlatformServiceNotAvailable__;
    puVar8 = Method_Oculus_Voice_Dictation_AppDictationExperience_OnDictationSessionStarted__;
    puVar7 = Method_Oculus_Voice_Dictation_AppDictationExperience_OnComplete__;
    puVar6 = Method_Oculus_Voice_Dictation_AppDictationExperience_<OnEnable>b__37_0__;
    puVar4 = Method_AppDeeplinkUI_LaunchSelf__;
    puVar3 = Method_Sirenix_Serialization_AnySerializer_WriteValueWeak__;
    if (lVar12 != 0) {
      FUN_0300123c(&stack0x00000008,lVar12,
                   *(undefined8 *)
                    Method_Oculus_Voice_Dictation_AppDictationExperience_OnPlatformServiceNotAvailable__
                  );
      plVar1 = (long *)(unaff_x19 + 0x68);
      in_stack_00000048 = in_stack_00000010;
      in_stack_00000040 = in_stack_00000008;
      in_stack_00000050 = in_stack_00000018;
      while (uVar13 = FUN_02ce9cdc(&stack0x00000040,*(undefined8 *)puVar8),
            plVar11 = in_stack_00000050, (uVar13 & 1) != 0) {
        if (*plVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar13 = FUN_02b6b4d8(*plVar1,in_stack_00000050,*(undefined8 *)puVar3);
        if ((uVar13 & 1) == 0) {
          lVar12 = *(long *)(unaff_x19 + 0x48);
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          lVar15 = *(long *)(lVar12 + 0x10);
          lVar17 = *(long *)puVar10;
          *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
          if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          uVar2 = *(uint *)(lVar12 + 0x18);
          if (uVar2 < *(uint *)(lVar15 + 0x18)) {
            *(uint *)(lVar12 + 0x18) = uVar2 + 1;
            puVar16 = (undefined8 *)(lVar15 + (long)(int)uVar2 * 8 + 0x20);
            *puVar16 = plVar11;
            thunk_FUN_01f51358(puVar16,plVar11);
          }
          else {
            FUN_030f2bb4(lVar12,plVar11,
                         *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
          }
        }
        else {
          lVar12 = *(long *)(unaff_x19 + 0x58);
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          lVar15 = *(long *)(lVar12 + 0x10);
          lVar17 = *(long *)puVar10;
          *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
          if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          uVar2 = *(uint *)(lVar12 + 0x18);
          if (uVar2 < *(uint *)(lVar15 + 0x18)) {
            *(uint *)(lVar12 + 0x18) = uVar2 + 1;
            puVar16 = (undefined8 *)(lVar15 + (long)(int)uVar2 * 8 + 0x20);
            *puVar16 = plVar11;
            thunk_FUN_01f51358(puVar16,plVar11);
          }
          else {
            FUN_030f2bb4(lVar12,plVar11,
                         *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
          }
        }
      }
      FUN_02ce9cd8(&stack0x00000040,*(undefined8 *)puVar6);
      if ((*plVar1 != 0) && (lVar12 = FUN_02b6b114(*plVar1,*(undefined8 *)puVar5), lVar12 != 0)) {
        FUN_0300123c(&stack0x00000008,lVar12,*(undefined8 *)puVar9);
        in_stack_00000048 = in_stack_00000010;
        in_stack_00000040 = in_stack_00000008;
        in_stack_00000050 = in_stack_00000018;
        while (uVar13 = FUN_02ce9cdc(&stack0x00000040,*(undefined8 *)puVar8),
              plVar11 = in_stack_00000050, (uVar13 & 1) != 0) {
          if (*(long *)(unaff_x19 + 0x60) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          uVar13 = FUN_02b6b4d8(*(long *)(unaff_x19 + 0x60),in_stack_00000050,*(undefined8 *)puVar3)
          ;
          if ((uVar13 & 1) == 0) {
            lVar12 = *(long *)(unaff_x19 + 0x50);
            if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            lVar15 = *(long *)(lVar12 + 0x10);
            lVar17 = *(long *)puVar10;
            *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
            if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            uVar2 = *(uint *)(lVar12 + 0x18);
            if (uVar2 < *(uint *)(lVar15 + 0x18)) {
              *(uint *)(lVar12 + 0x18) = uVar2 + 1;
              puVar16 = (undefined8 *)(lVar15 + (long)(int)uVar2 * 8 + 0x20);
              *puVar16 = plVar11;
              thunk_FUN_01f51358(puVar16,plVar11);
            }
            else {
              FUN_030f2bb4(lVar12,plVar11,
                           *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
            }
          }
        }
        FUN_02ce9cd8(&stack0x00000040,*(undefined8 *)puVar6);
        puVar3 = Method_Oculus_Voice_Dictation_AppDictationExperience_OnStopped__;
        puVar5 = 
        Method_Oculus_Voice_Dictation_AppDictationExperience_OnAudioDurationTrackerFinished__;
        if (*(long *)(unaff_x19 + 0x50) != 0) {
          FUN_030f35d0(&stack0x00000008,*(long *)(unaff_x19 + 0x50),
                       *(undefined8 *)
                        Method_Oculus_Voice_Dictation_AppDictationExperience_OnStopped__);
          in_stack_00000028 = in_stack_00000010;
          in_stack_00000020 = in_stack_00000008;
          in_stack_00000030 = in_stack_00000018;
          while (uVar13 = FUN_02c7ab6c(&stack0x00000020,*(undefined8 *)puVar7),
                plVar11 = in_stack_00000030, (uVar13 & 1) != 0) {
            if (*plVar1 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            lVar12 = FUN_02b6b264(*plVar1,in_stack_00000030,*(undefined8 *)puVar4);
            if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            (**(code **)(*plVar11 + 0x1b8))(plVar11);
          }
          FUN_02c7ab68(&stack0x00000020,*(undefined8 *)puVar5);
          if (*(long *)(unaff_x19 + 0x48) != 0) {
            FUN_030f35d0(&stack0x00000008,*(long *)(unaff_x19 + 0x48),*(undefined8 *)puVar3);
            in_stack_00000028 = in_stack_00000010;
            in_stack_00000020 = in_stack_00000008;
            in_stack_00000030 = in_stack_00000018;
            while (uVar13 = FUN_02c7ab6c(&stack0x00000020,*(undefined8 *)puVar7),
                  plVar11 = in_stack_00000030, (uVar13 & 1) != 0) {
              if (*(long *)(unaff_x19 + 0x60) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              lVar12 = FUN_02b6b264(*(long *)(unaff_x19 + 0x60),in_stack_00000030,
                                    *(undefined8 *)puVar4);
              if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              (**(code **)(*plVar11 + 0x1b8))(plVar11);
            }
            FUN_02c7ab68(&stack0x00000020,*(undefined8 *)puVar5);
            if (*(long *)(unaff_x19 + 0x58) != 0) {
              FUN_030f35d0(&stack0x00000008,*(long *)(unaff_x19 + 0x58),*(undefined8 *)puVar3);
              in_stack_00000028 = in_stack_00000010;
              in_stack_00000020 = in_stack_00000008;
              in_stack_00000030 = in_stack_00000018;
              while( true ) {
                uVar13 = FUN_02c7ab6c(&stack0x00000020,*(undefined8 *)puVar7);
                plVar11 = in_stack_00000030;
                if ((uVar13 & 1) == 0) {
                  FUN_02c7ab68(&stack0x00000020,*(undefined8 *)puVar5);
                  uVar18 = *(undefined8 *)(unaff_x19 + 0x60);
                  uVar14 = thunk_FUN_01f117cc(*(undefined8 *)
                                               Method_UnityEngine_AndroidJavaObject__Call__);
                  FUN_02b6ab48(uVar14,uVar18,*(undefined8 *)Method_AppDeeplinkUI_LaunchOtherApp__);
                  *(undefined8 *)(unaff_x19 + 0x68) = uVar14;
                  thunk_FUN_01f51358(plVar1,uVar14);
                  return;
                }
                if (*(long *)(unaff_x19 + 0x60) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a3c();
                }
                lVar12 = FUN_02b6b264(*(long *)(unaff_x19 + 0x60),in_stack_00000030,
                                      *(undefined8 *)puVar4);
                if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a3c();
                }
                if (*plVar1 == 0) break;
                lVar12 = FUN_02b6b264(*plVar1,plVar11,*(undefined8 *)puVar4);
                if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a3c();
                }
                if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a3c();
                }
                (**(code **)(*plVar11 + 0x1b8))(plVar11);
              }
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


