/*
FUNCTION_NAME: FUN_03411be0
ENTRY_POINT: 03411be0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


long FUN_03411be0(long param_1,long param_2,long param_3,int param_4,uint param_5)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auStack_4b0 [512];
  undefined1 auStack_2b0 [524];
  uint local_a4;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if ((DAT_048326f4 & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_System_Text_RegularExpressions_GroupCollection_System_Collections_IList_Add__
                      );
    thunk_FUN_01efb3a4(Method_UnityEngine_Object_FindObjectOfType<TTSDiskCache>__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Object_FindObjectsOfType<DistanceGrabber>__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Object_FindObjectOfType<LocomotionController>__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_localPosition__
                      );
    thunk_FUN_01efb3a4(Method_UnityEngine_Object_FindObjectOfType<OVRCameraRig>__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Object_FindObjectOfType<OVRInputModule>__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Object_FindObjectOfType<OVRSceneManager>__);
    DAT_048326f4 = 1;
  }
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  if (param_4 < 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
    uVar5 = thunk_FUN_01f117cc();
    uVar6 = thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_BoundsField_<_ctor>b__10_1__);
    uVar4 = thunk_FUN_01efb3a4(
                              Method_OVRTriangleMesh_IOVRAnchorComponent<OVRTriangleMesh>_SetEnabledAsync__
                              );
    FUN_034f3578(uVar5,uVar6,uVar4,0);
    uVar6 = thunk_FUN_01efb3a4(
                              Method_UnityEngine_Object_FindObjectsOfType<InteractableToolsInputRouter>__
                              );
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar5,uVar6);
  }
  if (1 < param_5) {
    local_a4 = param_5;
    uVar5 = thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__)
    ;
    uVar5 = thunk_FUN_01f113fc(uVar5,&local_a4);
    uVar6 = thunk_FUN_01efb3a4(Method_UnityEngine_Object_FindObjectsOfType<DecalProjector>__);
    uVar5 = FUN_033f0c40(uVar6,uVar5,0);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
    uVar6 = thunk_FUN_01f117cc();
    FUN_034f6754(uVar6,uVar5,0);
    uVar5 = thunk_FUN_01efb3a4(
                              Method_UnityEngine_Object_FindObjectsOfType<InteractableToolsInputRouter>__
                              );
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar6,uVar5);
  }
  if ((param_2 == 0) && ((param_3 == 0 || (*(long *)(param_3 + 0x18) == 0)))) {
    auVar8 = FUN_026d07c4(0,*(undefined8 *)
                             Method_UnityEngine_Object_FindObjectsOfType<DistanceGrabber>__);
    lVar3 = FUN_03410e24(param_1,auVar8._0_8_,auVar8._8_8_,param_4,param_5);
  }
  else if ((param_4 == 0) || ((param_5 == 1 && (*(int *)(param_1 + 0x10) == 0)))) {
    lVar7 = *(long *)
             Method_System_Text_RegularExpressions_GroupCollection_System_Collections_IList_Add__;
    lVar3 = *(long *)(lVar7 + 0x38);
    if (lVar3 == 0) {
      FUN_01ecafa0(lVar7);
      lVar3 = *(long *)(lVar7 + 0x38);
    }
    lVar3 = *(long *)(lVar3 + 0x10);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01ecaf44();
    }
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    lVar3 = *(long *)(*(long *)(lVar7 + 0x38) + 0x10);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01ecaf44();
    }
    lVar3 = **(long **)(lVar3 + 0xb8);
  }
  else {
    if (param_4 != 1) {
      if (param_2 == 0) {
        memset(auStack_2b0,0,0x200);
        puVar2 = Method_UnityEngine_Object_FindObjectOfType<OVRSceneManager>__;
        FUN_0287e4a4(&local_80,auStack_2b0,0x80,
                     *(undefined8 *)Method_UnityEngine_Object_FindObjectOfType<OVRSceneManager>__);
        memset(auStack_4b0,0,0x200);
        FUN_0287e4a4(&local_a0,auStack_4b0,0x80,*(undefined8 *)puVar2);
        FUN_0341218c(param_1,param_3,&local_80,&local_a0);
        puVar2 = Method_UnityEngine_Object_FindObjectOfType<OVRCameraRig>__;
        auVar8 = FUN_0287e544(&local_80,
                              *(undefined8 *)
                               Method_UnityEngine_Object_FindObjectOfType<OVRCameraRig>__);
        auVar9 = FUN_0287e544(&local_a0,*(undefined8 *)puVar2);
        if (auVar8._8_4_ != 0) {
          if (param_5 == 1) {
            lVar3 = FUN_03411918();
          }
          else {
            lVar3 = FUN_03411710(param_1,auVar8._0_8_,auVar8._8_8_,auVar9._0_8_,auVar9._8_8_,0,
                                 param_4);
          }
          puVar2 = Method_UnityEngine_Object_FindObjectOfType<OVRInputModule>__;
          FUN_03415d4c(&local_80,
                       *(undefined8 *)Method_UnityEngine_Object_FindObjectOfType<OVRInputModule>__);
          FUN_03415d4c(&local_a0,*(undefined8 *)puVar2);
          goto LAB_03411dc4;
        }
      }
      else if (*(int *)(param_2 + 0x10) != 0) {
        lVar3 = FUN_03411fd0(param_1,param_2,param_4,param_5);
        goto LAB_03411dc4;
      }
    }
    lVar3 = FUN_01f08890(*(undefined8 *)
                          Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_localPosition__
                         ,1);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if (*(int *)(lVar3 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    *(long *)(lVar3 + 0x20) = param_1;
    thunk_FUN_01f51358((long *)(lVar3 + 0x20),param_1);
  }
LAB_03411dc4:
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar3;
}


