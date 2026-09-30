/*
FUNCTION_NAME: FUN_03479bd0
ENTRY_POINT: 03479bd0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_03479bd0(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  
  puVar7 = Method_System_RuntimeType_InvokeMember__;
  if ((DAT_04832a3e & 1) == 0) {
    thunk_FUN_01efb3a4(Method_UnityEngine_Component_GetComponent<TeleportInputHandlerHMD>__);
    thunk_FUN_01efb3a4(Method_System_RuntimeType_InvokeMember__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
    DAT_04832a3e = 1;
  }
  puVar2 = Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__;
  lVar8 = *(long *)(param_1 + 0x10);
  if (lVar8 == 0) {
    if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar10 = FUN_0345edfc(param_1,0);
    puVar11 = (undefined8 *)(param_1 + 0x38);
    *puVar11 = uVar10;
    thunk_FUN_01f51358(puVar11,uVar10);
    uVar4 = FUN_034b27d8(*puVar11,0,0);
    if ((uVar4 & 1) == 0) goto LAB_03479e24;
    uVar12 = *(undefined8 *)(param_1 + 0x20);
    uVar10 = FUN_0347a40c(param_1);
    uVar6 = thunk_FUN_01efb3a4(Method_Mono_Xml_SmallXmlParser_ReadContent__);
    puVar7 = Method_Mono_Xml_SmallXmlParser_ReadComment__;
LAB_0347a0ac:
    uVar5 = thunk_FUN_01efb3a4(puVar7);
  }
  else {
    if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    plVar3 = (long *)FUN_0345d76c(lVar8,0);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(*(long *)puVar2);
    }
    uVar4 = FUN_03582560(plVar3,0,0);
    lVar8 = *(long *)(param_1 + 0x18);
    if ((uVar4 & 1) != 0) {
      if (lVar8 == 0) {
        uVar12 = thunk_FUN_01efb3a4(
                                   Method_System_Nullable<InputControlScheme_MatchResult>_get_HasValue__
                                   );
      }
      else {
        uVar10 = thunk_FUN_01efb3a4(Method_System_Security_Cryptography_CryptoStream_get_Position__)
        ;
        uVar12 = thunk_FUN_01efb3a4(
                                   Method_UnityEngine_Rendering_VolumeParameter<Color>_op_Inequality__
                                   );
        uVar12 = FUN_0340ebc0(uVar10,lVar8,uVar12,0);
      }
      uVar10 = *(undefined8 *)(param_1 + 0x10);
      uVar6 = thunk_FUN_01efb3a4(Method_Mono_Xml_SmallXmlParser_ReadUntil__);
      puVar7 = Method_Mono_Xml_SmallXmlParser_SkipWhitespaces__;
      goto LAB_0347a0ac;
    }
    lVar8 = FUN_0347a4bc(uVar4,lVar8,plVar3);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(*(long *)puVar2);
    }
    uVar4 = FUN_03582560(lVar8,0,0);
    if ((uVar4 & 1) != 0) {
      uVar10 = thunk_FUN_01efb3a4(
                                 Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_localPosition__
                                 );
      uVar10 = FUN_01f08890(uVar10,5);
      FUN_01bc50c0();
      uVar12 = thunk_FUN_01efb3a4(Method_Mono_Xml_SmallXmlParser_ReadName__);
      FUN_01bc5408(uVar10,0,uVar12);
      uVar12 = *(undefined8 *)(param_1 + 0x18);
      FUN_01bc50c0(uVar10);
      FUN_01bc5408(uVar10,1,uVar12);
      FUN_01bc50c0(uVar10);
      uVar12 = thunk_FUN_01efb3a4(Method_Mono_Xml_SmallXmlParser_ReadReference__);
      FUN_01bc5408(uVar10,2,uVar12);
      FUN_01bc50c0(plVar3);
      uVar12 = (**(code **)(*plVar3 + 0x2e8))(plVar3,*(undefined8 *)(*plVar3 + 0x2f0));
      FUN_01bc50c0(uVar10);
      FUN_01bc5408(uVar10,3,uVar12);
      FUN_01bc50c0(uVar10);
      uVar12 = thunk_FUN_01efb3a4(
                                 Method_Oculus_Platform_Callback_SetNotificationCallback<NetSyncSessionsChangedNotification>__
                                 );
      FUN_01bc5408(uVar10,4,uVar12);
      uVar10 = FUN_0340efe8(uVar10,0);
      goto LAB_0347a0ec;
    }
    uVar10 = *(undefined8 *)(param_1 + 0x20);
    uVar12 = *(undefined8 *)(param_1 + 0x30);
    if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar10 = FUN_0345f0dc(lVar8,uVar10,uVar12,0);
    puVar11 = (undefined8 *)(param_1 + 0x38);
    *puVar11 = uVar10;
    thunk_FUN_01f51358(puVar11);
    uVar4 = FUN_034b27d8(*puVar11,0,0);
    if ((uVar4 & 1) != 0) {
      FUN_042afbbc(&Method_UnityEngine_UIElements_ScrollView_<_ctor>b__120_1__);
      return;
    }
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar4 = FUN_03583338(lVar8,plVar3,0);
    if ((uVar4 & 1) == 0) goto LAB_03479e24;
    if (lVar8 == 0) goto LAB_03479efc;
    uVar4 = FUN_03583944(lVar8,0);
    if ((uVar4 & 1) == 0) goto LAB_03479e24;
    if (plVar3 == (long *)0x0) goto LAB_03479efc;
    uVar4 = FUN_03583944(plVar3,0);
    if ((uVar4 & 1) != 0) {
LAB_03479e24:
      plVar9 = (long *)(param_1 + 0x38);
      plVar3 = (long *)*plVar9;
      if (plVar3 != (long *)0x0) {
        uVar4 = (**(code **)(*plVar3 + 0x308))(plVar3,*(undefined8 *)(*plVar3 + 0x310));
        if ((uVar4 & 1) == 0) {
          return;
        }
        plVar3 = (long *)*plVar9;
        if (plVar3 != (long *)0x0) {
          uVar4 = (**(code **)(*plVar3 + 0x338))(plVar3,*(undefined8 *)(*plVar3 + 0x340));
          if ((uVar4 & 1) == 0) {
            return;
          }
          lVar8 = FUN_0347a654(param_1);
          if (lVar8 == 0) {
            thunk_FUN_01efb3a4(
                              Method_System_Reflection_RuntimeMethodInfo_GetGenericMethodDefinition__
                              );
            uVar10 = thunk_FUN_01f117cc();
            uVar12 = thunk_FUN_01efb3a4(Method_Oculus_Interaction_SnapInteractor_<OnEnable>b__20_0__
                                       );
            FUN_03454990(uVar10,uVar12,0);
            uVar12 = thunk_FUN_01efb3a4(Method_Oculus_Interaction_SnapInteractable_<Start>b__16_0__)
            ;
                    /* WARNING: Subroutine does not return */
            FUN_01f08910(uVar10,uVar12);
          }
          plVar3 = *(long **)(param_1 + 0x38);
          uVar10 = FUN_0347a654(param_1);
          if (plVar3 != (long *)0x0) {
            lVar8 = *plVar3;
            bVar1 = *(byte *)(*(long *)
                               Method_UnityEngine_Component_GetComponent<TeleportInputHandlerHMD>__
                             + 0x130);
            if ((bVar1 <= *(byte *)(lVar8 + 0x130)) &&
               (*(long *)(*(long *)(lVar8 + 200) + (ulong)bVar1 * 8 + -8) ==
                *(long *)Method_UnityEngine_Component_GetComponent<TeleportInputHandlerHMD>__)) {
              lVar8 = (**(code **)(lVar8 + 0x408))(plVar3,uVar10,*(undefined8 *)(lVar8 + 0x410));
              *plVar9 = lVar8;
              thunk_FUN_01f51358(plVar9,lVar8);
              return;
            }
                    /* WARNING: Subroutine does not return */
            FUN_01f08cfc(plVar3);
          }
        }
      }
LAB_03479efc:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar10 = *puVar11;
    if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar10 = thunk_FUN_01ed1100(plVar3,uVar10,0);
    *puVar11 = uVar10;
    thunk_FUN_01f51358(puVar11,uVar10);
    uVar4 = FUN_034b27d8(*puVar11,0,0);
    if ((uVar4 & 1) == 0) goto LAB_03479e24;
    uVar12 = *(undefined8 *)(param_1 + 0x20);
    uVar5 = thunk_FUN_01efb3a4(Method_Mono_Xml_SmallXmlParser_ReadComment__);
    uVar6 = thunk_FUN_01efb3a4(Method_Mono_Xml_SmallXmlParser_ReadContent__);
    uVar10 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
  }
  uVar10 = FUN_0340eee0(uVar6,uVar12,uVar5,uVar10,0);
LAB_0347a0ec:
  thunk_FUN_01efb3a4(Method_System_Reflection_RuntimeMethodInfo_GetGenericMethodDefinition__);
  uVar12 = thunk_FUN_01f117cc();
  FUN_03454990(uVar12,uVar10,0);
  uVar10 = thunk_FUN_01efb3a4(Method_Oculus_Interaction_SnapInteractable_<Start>b__16_0__);
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar12,uVar10);
}


