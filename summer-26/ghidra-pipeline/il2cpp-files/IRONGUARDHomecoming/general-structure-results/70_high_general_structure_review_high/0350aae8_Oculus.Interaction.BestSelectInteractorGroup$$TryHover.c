/*
FUNCTION_NAME: Oculus.Interaction.BestSelectInteractorGroup$$TryHover
ENTRY_POINT: 0350aae8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_3;ray_or_cast_sink_hits_1;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_9;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Oculus_Interaction_BestSelectInteractorGroup__TryHover(long param_1,long *param_2)

{
  short sVar1;
  undefined *puVar2;
  short sVar3;
  undefined4 uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  
  puVar2 = Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_SerializeMember<Texture2D>__;
  if ((DAT_04832fb9 & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_SerializeMember<Texture2D>__
                      );
    DAT_04832fb9 = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  if (DAT_04833019 == '\0') {
    thunk_FUN_01efb3a4(
                      Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_SerializeMember<Texture2D>__
                      );
    DAT_04833019 = '\x01';
  }
  lVar5 = *(long *)puVar2;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar5 = *(long *)puVar2;
  }
  if (**(char **)(lVar5 + 0xb8) == '\0') {
    uVar6 = FUN_0350b468(param_1);
    if ((uVar6 & 1) == 0) {
      if (param_2 != (long *)0x0) {
        plVar10 = (long *)(param_1 + 0x78);
        if (param_2 == (long *)*plVar10) {
          return;
        }
        lVar5 = FUN_0350b50c(param_1);
        if (lVar5 != 0) {
          lVar11 = 0;
          do {
            if (*(int *)(lVar5 + 0x18) <= (int)(uint)lVar11) {
              thunk_FUN_01efb3a4(
                                Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__
                                );
              uVar9 = thunk_FUN_01f117cc();
              uVar7 = thunk_FUN_01efb3a4(
                                        Method_UnityEngine_Component_GetComponentsInChildren<DebugUIHandlerWidget>__
                                        );
              uVar8 = thunk_FUN_01efb3a4(
                                        Method_Unity_VisualScripting_FullSerializer_Internal_fsVersionManager_VerifyConstructors__
                                        );
              FUN_034f3578(uVar9,uVar7,uVar8,0);
              goto LAB_0350ae20;
            }
            lVar5 = FUN_0350b50c(param_1);
            if (lVar5 == 0) break;
            if (*(uint *)(lVar5 + 0x18) <= (uint)lVar11) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a44();
            }
            sVar1 = *(short *)(lVar5 + lVar11 * 2 + 0x20);
            sVar3 = (**(code **)(*param_2 + 0x1a8))(param_2,*(undefined8 *)(*param_2 + 0x1b0));
            if (sVar1 == sVar3) {
              if (*plVar10 != 0) {
                *(undefined8 *)(param_1 + 0x120) = 0;
                thunk_FUN_01f51358(param_1 + 0x120,0);
                *(undefined8 *)(param_1 + 0x128) = 0;
                thunk_FUN_01f51358(param_1 + 0x128,0);
                *(undefined8 *)(param_1 + 0x130) = 0;
                thunk_FUN_01f51358(param_1 + 0x130,0);
                *(undefined8 *)(param_1 + 0x68) = 0;
                thunk_FUN_01f51358((undefined8 *)(param_1 + 0x68),0);
                *(undefined8 *)(param_1 + 0xa0) = 0;
                thunk_FUN_01f51358((undefined8 *)(param_1 + 0xa0),0);
                *(undefined8 *)(param_1 + 0x90) = 0;
                thunk_FUN_01f51358((undefined8 *)(param_1 + 0x90),0);
                *(undefined8 *)(param_1 + 0x98) = 0;
                thunk_FUN_01f51358((undefined8 *)(param_1 + 0x98),0);
                *(undefined8 *)(param_1 + 0xb0) = 0;
                thunk_FUN_01f51358((undefined8 *)(param_1 + 0xb0),0);
                *(undefined8 *)(param_1 + 0xa8) = 0;
                thunk_FUN_01f51358((undefined8 *)(param_1 + 0xa8),0);
                *(undefined8 *)(param_1 + 0xb8) = 0;
                thunk_FUN_01f51358((undefined8 *)(param_1 + 0xb8),0);
                *(undefined8 *)(param_1 + 0xc0) = 0;
                thunk_FUN_01f51358((undefined8 *)(param_1 + 0xc0),0);
                *(undefined8 *)(param_1 + 200) = 0;
                thunk_FUN_01f51358((undefined8 *)(param_1 + 200),0);
                *(undefined4 *)(param_1 + 0x144) = 0xffffffff;
                *(undefined8 *)(param_1 + 0x100) = 0;
                thunk_FUN_01f51358(param_1 + 0x100,0);
                *(undefined8 *)(param_1 + 0x108) = 0;
                thunk_FUN_01f51358(param_1 + 0x108,0);
                *(undefined8 *)(param_1 + 0xf8) = 0;
                thunk_FUN_01f51358((undefined8 *)(param_1 + 0xf8),0);
                *(undefined8 *)(param_1 + 0x70) = 0;
                thunk_FUN_01f51358((undefined8 *)(param_1 + 0x70),0);
                *(undefined8 *)(param_1 + 0xd0) = 0;
                thunk_FUN_01f51358((undefined8 *)(param_1 + 0xd0),0);
                *(undefined8 *)(param_1 + 0xd8) = 0;
                thunk_FUN_01f51358((undefined8 *)(param_1 + 0xd8),0);
                *(undefined8 *)(param_1 + 0xe0) = 0;
                thunk_FUN_01f51358((undefined8 *)(param_1 + 0xe0),0);
                *(undefined8 *)(param_1 + 0x88) = 0;
                thunk_FUN_01f51358((undefined8 *)(param_1 + 0x88),0);
                *(undefined8 *)(param_1 + 0x50) = 0;
                thunk_FUN_01f51358((undefined8 *)(param_1 + 0x50),0);
                *(undefined8 *)(param_1 + 0x58) = 0;
                thunk_FUN_01f51358((undefined8 *)(param_1 + 0x58),0);
                *(undefined8 *)(param_1 + 0x48) = 0;
                thunk_FUN_01f51358((undefined8 *)(param_1 + 0x48),0);
                *(undefined8 *)(param_1 + 0x158) = 0;
                thunk_FUN_01f51358(param_1 + 0x158,0);
                *(undefined4 *)(param_1 + 0x144) = 0xffffffff;
              }
              *plVar10 = (long)param_2;
              thunk_FUN_01f51358(plVar10,param_2);
              plVar10 = (long *)*plVar10;
              if (plVar10 != (long *)0x0) {
                uVar9 = *(undefined8 *)(param_1 + 0x10);
                uVar4 = (**(code **)(*plVar10 + 0x1a8))(plVar10,*(undefined8 *)(*plVar10 + 0x1b0));
                FUN_0350a90c(param_1,uVar9,uVar4);
                return;
              }
              break;
            }
            lVar5 = FUN_0350b50c(param_1);
            lVar11 = lVar11 + 1;
          } while (lVar5 != 0);
        }
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
      uVar9 = thunk_FUN_01f117cc();
      uVar7 = thunk_FUN_01efb3a4(
                                Method_UnityEngine_Component_GetComponentsInChildren<DebugUIHandlerWidget>__
                                );
      uVar8 = thunk_FUN_01efb3a4(
                                Method_UnityEngine_Splines_SplineUtility_ConvertIndexUnit<SplinePath<Spline>>__
                                );
      FUN_034f7d10(uVar9,uVar7,uVar8,0);
    }
    else {
      thunk_FUN_01efb3a4(Method_Unity_VisualScripting_MoveTowards<float>__ctor__);
      uVar9 = thunk_FUN_01f117cc();
      uVar7 = thunk_FUN_01efb3a4(Method_UnityEngine_InputSystem_PlayerInput_remove_onDeviceLost__);
      FUN_0356adc8(uVar9,uVar7,0);
    }
  }
  else {
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_EventBus_Trigger<Collider>__);
    uVar9 = thunk_FUN_01f117cc();
    FUN_0357b574(uVar9,0);
  }
LAB_0350ae20:
  uVar7 = thunk_FUN_01efb3a4(
                            Method_Unity_VisualScripting_FullSerializer_Internal_fsVersionManager_VerifyUniqueVersionStrings__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar9,uVar7);
}


