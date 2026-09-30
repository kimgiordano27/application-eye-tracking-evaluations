/*
FUNCTION_NAME: UnityEngine.UIElements.DynamicAtlas$$set_minAtlasSize
ENTRY_POINT: 0401f060
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 166
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0401f7a4) */

undefined8
UnityEngine_UIElements_DynamicAtlas__set_minAtlasSize
          (long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  int *piVar9;
  long *unaff_x19;
  long *unaff_x20;
  undefined8 uVar10;
  long lVar11;
  long *unaff_x25;
  long *unaff_x26;
  
  uVar4 = (**(code **)(param_1 + 0x948))(param_2,param_3,*(undefined8 *)(param_1 + 0x950));
  puVar6 = (undefined8 *)PTR_DAT_04586010;
  if ((uVar4 & 1) == 0) {
    uVar10 = *(undefined8 *)
              Method_System_Runtime_Remoting_Channels_CADSerializer_DeserializeMessage__;
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    FUN_03579868(uVar10,0);
    uVar4 = (**(code **)(*unaff_x19 + 0x948))();
    puVar6 = (undefined8 *)PTR_DAT_04585ff8;
    if ((uVar4 & 1) == 0) {
      uVar10 = *(undefined8 *)Method_Oculus_Platform_CAPI_DictionaryToOVRKeyValuePairs__;
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      FUN_03579868(uVar10,0);
      uVar4 = (**(code **)(*unaff_x19 + 0x948))();
      puVar1 = Method_UnityEngine_TextCore_Text_TextProcessingStack<Color32>_Remove__;
      if ((uVar4 & 1) == 0) {
        uVar10 = *(undefined8 *)
                  Method_System_Globalization_CalendarData_InitializeAbbreviatedEraNames__;
        if (*(int *)(*unaff_x25 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        plVar5 = (long *)FUN_03579868(uVar10,0);
        if (*(int *)(*unaff_x26 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c(*unaff_x26);
        }
        if (plVar5 != (long *)0x0) {
          uVar4 = (**(code **)(*plVar5 + 0x2a8))(plVar5);
          if ((uVar4 & 1) == 0) {
            lVar8 = FUN_01f08890(*(undefined8 *)
                                  Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_localPosition__
                                 ,6);
            if (lVar8 != 0) {
              if (*(int *)(lVar8 + 0x18) != 0) {
                *(undefined8 *)(lVar8 + 0x20) = *(undefined8 *)PTR_DAT_04586008;
                thunk_FUN_01f51358((undefined8 *)(lVar8 + 0x20));
                uVar10 = (**(code **)(*unaff_x19 + 0x168))();
                if (1 < *(uint *)(lVar8 + 0x18)) {
                  *(undefined8 *)(lVar8 + 0x28) = uVar10;
                  thunk_FUN_01f51358((undefined8 *)(lVar8 + 0x28),uVar10);
                  uVar10 = thunk_FUN_01efb3a4(PTR_DAT_04586030);
                  if (2 < *(uint *)(lVar8 + 0x18)) {
                    *(undefined8 *)(lVar8 + 0x30) = uVar10;
                    thunk_FUN_01f51358((undefined8 *)(lVar8 + 0x30),uVar10);
                    uVar10 = (**(code **)(*unaff_x20 + 0x168))();
                    if (3 < *(uint *)(lVar8 + 0x18)) {
                      *(undefined8 *)(lVar8 + 0x38) = uVar10;
                      thunk_FUN_01f51358((undefined8 *)(lVar8 + 0x38),uVar10);
                      uVar10 = thunk_FUN_01efb3a4(
                                                 Method_System_Security_Cryptography_X509Certificates_X509Extension_CopyFrom__
                                                 );
                      if (4 < *(uint *)(lVar8 + 0x18)) {
                        *(undefined8 *)(lVar8 + 0x40) = uVar10;
                        thunk_FUN_01f51358();
                        puVar1 = PTR_DAT_04583f10;
                        if (unaff_x19 != unaff_x20) {
                          puVar1 = Method_DebugUISample_<Start>b__2_0__;
                        }
                        uVar10 = thunk_FUN_01efb3a4(puVar1);
                        FUN_01bc50c0(lVar8);
                        FUN_01bc5408(lVar8,5,uVar10);
                        uVar10 = FUN_0340efe8(lVar8,0);
                        thunk_FUN_01efb3a4(
                                          Method_Oculus_Platform_Message<AssetFileDeleteResult>_get_Data__
                                          );
                        uVar7 = thunk_FUN_01f117cc();
                        Oculus_Interaction_Input_SyntheticHand__SetJointFreedom(uVar7,uVar10,0);
                        uVar10 = thunk_FUN_01efb3a4(PTR_DAT_04586028);
                    /* WARNING: Subroutine does not return */
                        FUN_01f08910(uVar7,uVar10);
                      }
                    }
                  }
                }
              }
                    /* WARNING: Subroutine does not return */
              FUN_01f08a44();
            }
          }
          else {
            iVar3 = (**(code **)(*unaff_x19 + 0x448))();
            if (iVar3 != 1) {
              thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<AssetFileDeleteResult>_get_Data__);
              uVar10 = thunk_FUN_01f117cc();
              uVar7 = thunk_FUN_01efb3a4(PTR_DAT_04586020);
              Oculus_Interaction_Input_SyntheticHand__SetJointFreedom(uVar10,uVar7,0);
              uVar7 = thunk_FUN_01efb3a4(PTR_DAT_04586028);
                    /* WARNING: Subroutine does not return */
              FUN_01f08910(uVar10,uVar7);
            }
            plVar5 = (long *)thunk_FUN_01f117cc(*(undefined8 *)
                                                 Method_System_Collections_Generic_Stack<Matrix4x4>_Clear__
                                               );
            FUN_03416d98(plVar5,0);
            if (plVar5 != (long *)0x0) {
              FUN_03419060(plVar5,0x5b,0);
              (**(code **)(*unaff_x19 + 0x438))();
              uVar10 = FUN_0401ec54();
              FUN_03418748(plVar5,uVar10,0);
                    /* WARNING: Could not recover jumptable at 0x0401f6f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              uVar10 = (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
              return uVar10;
            }
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      puVar6 = (undefined8 *)PTR_DAT_04585fe0;
      if (unaff_x19 != unaff_x20) {
        bVar2 = *(byte *)(*(long *)
                           Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<PointerMoveEvent>__
                         + 0x130);
        if ((*(byte *)(*unaff_x20 + 0x130) < bVar2) ||
           (*(long *)(*(long *)(*unaff_x20 + 200) + (ulong)bVar2 * 8 + -8) !=
            *(long *)
             Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<PointerMoveEvent>__
           )) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08cfc();
        }
        lVar11 = *(long *)Method_UnityEngine_TextCore_Text_TextProcessingStack<Color32>_Remove__;
        lVar8 = *(long *)(lVar11 + 0x38);
        if (lVar8 == 0) {
          FUN_01ecafa0(lVar11);
          lVar8 = *(long *)(lVar11 + 0x38);
        }
        lVar8 = *(long *)(lVar8 + 0x10);
        if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
          lVar8 = FUN_01ecaf44();
        }
        if (*(int *)(lVar8 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        if ((*(byte *)(*(long *)(*(long *)(lVar11 + 0x38) + 0x10) + 0x135) & 1) == 0) {
          FUN_01ecaf44();
        }
        plVar5 = (long *)FUN_021580ac();
        lVar11 = *(long *)puVar1;
        lVar8 = *(long *)(lVar11 + 0x38);
        if (lVar8 == 0) {
          FUN_01ecafa0(lVar11);
          lVar8 = *(long *)(lVar11 + 0x38);
        }
        lVar8 = *(long *)(lVar8 + 0x10);
        if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
          lVar8 = FUN_01ecaf44();
        }
        if (*(int *)(lVar8 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        lVar8 = *(long *)(*(long *)(lVar11 + 0x38) + 0x10);
        if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
          lVar8 = FUN_01ecaf44();
        }
        if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar10 = FUN_021580ac(plVar5,*(undefined8 *)PTR_DAT_04585ff0,**(undefined8 **)(lVar8 + 0xb8)
                              ,*(undefined8 *)PTR_DAT_04585fd0);
        uVar10 = FUN_0340ebc0(*(undefined8 *)
                               Method_System_Runtime_CompilerServices_StrongBox<int>__ctor__,uVar10,
                              *(undefined8 *)StringLiteral_7756,0);
        lVar8 = *plVar5;
        uVar4 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar4 != 0) {
          piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) ==
                *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
              puVar6 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_0401f5ec;
            }
            uVar4 = uVar4 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar4 != 0);
        }
        puVar6 = (undefined8 *)
                 FUN_01ecb238(plVar5,*(long *)
                                      Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                              ,0);
LAB_0401f5ec:
        (*(code *)*puVar6)(plVar5,puVar6[1]);
        return uVar10;
      }
    }
  }
  return *puVar6;
}


