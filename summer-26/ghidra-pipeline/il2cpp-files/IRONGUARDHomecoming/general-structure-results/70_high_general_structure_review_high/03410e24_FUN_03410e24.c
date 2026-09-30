/*
FUNCTION_NAME: FUN_03410e24
ENTRY_POINT: 03410e24
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_6;ray_or_cast_sink_hits_1;telemetry_or_network_hits_1
*/


long FUN_03410e24(long param_1,undefined8 param_2,undefined8 param_3,int param_4,uint param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 auVar7 [16];
  undefined1 auStack_290 [524];
  uint local_84;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if ((DAT_048326f3 & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_System_Text_RegularExpressions_GroupCollection_System_Collections_IList_Add__
                      );
    thunk_FUN_01efb3a4(Method_UnityEngine_Object_FindObjectOfType<TTSDiskCache>__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Object_FindObjectOfType<LocomotionController>__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_localPosition__
                      );
    thunk_FUN_01efb3a4(Method_UnityEngine_Object_FindObjectOfType<OVRCameraRig>__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Object_FindObjectOfType<OVRInputModule>__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Object_FindObjectOfType<OVRSceneManager>__);
    DAT_048326f3 = 1;
  }
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  if (param_4 < 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
    uVar4 = thunk_FUN_01f117cc();
    uVar5 = thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_BoundsField_<_ctor>b__10_1__);
    uVar3 = thunk_FUN_01efb3a4(
                              Method_OVRTriangleMesh_IOVRAnchorComponent<OVRTriangleMesh>_SetEnabledAsync__
                              );
    FUN_034f3578(uVar4,uVar5,uVar3,0);
    uVar5 = thunk_FUN_01efb3a4(Method_UnityEngine_Object_FindObjectsOfType<AudioListener>__);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar4,uVar5);
  }
  if (1 < param_5) {
    local_84 = param_5;
    uVar4 = thunk_FUN_01efb3a4(Method_UnityEngine_Object_FindObjectsOfType<Collider>__);
    uVar4 = thunk_FUN_01f113fc(uVar4,&local_84);
    uVar5 = thunk_FUN_01efb3a4(Method_UnityEngine_Object_FindObjectsOfType<DecalProjector>__);
    uVar4 = FUN_033f0c40(uVar5,uVar4,0);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
    uVar5 = thunk_FUN_01f117cc();
    FUN_034f6754(uVar5,uVar4,0);
    uVar4 = thunk_FUN_01efb3a4(Method_UnityEngine_Object_FindObjectsOfType<AudioListener>__);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar5,uVar4);
  }
  if ((param_4 == 0) || ((param_5 == 1 && (*(int *)(param_1 + 0x10) == 0)))) {
    lVar6 = *(long *)
             Method_System_Text_RegularExpressions_GroupCollection_System_Collections_IList_Add__;
    lVar2 = *(long *)(lVar6 + 0x38);
    if (lVar2 == 0) {
      FUN_01ecafa0(lVar6);
      lVar2 = *(long *)(lVar6 + 0x38);
    }
    lVar2 = *(long *)(lVar2 + 0x10);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01ecaf44();
    }
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    lVar2 = *(long *)(*(long *)(lVar6 + 0x38) + 0x10);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01ecaf44();
    }
    lVar2 = **(long **)(lVar2 + 0xb8);
  }
  else {
    if (param_4 != 1) {
      memset(auStack_290,0,0x200);
      FUN_0287e4a4(&local_80,auStack_290,0x80,
                   *(undefined8 *)Method_UnityEngine_Object_FindObjectOfType<OVRSceneManager>__);
      FUN_0341123c(param_1,param_2,param_3,&local_80);
      auVar7 = FUN_0287e544(&local_80,
                            *(undefined8 *)
                             Method_UnityEngine_Object_FindObjectOfType<OVRCameraRig>__);
      if (auVar7._8_4_ != 0) {
        if (param_5 == 1) {
          lVar2 = FUN_03411918();
        }
        else {
          lVar2 = FUN_03411710(param_1,auVar7._0_8_,auVar7._8_8_,0,0,1,param_4);
        }
        FUN_03415d4c(&local_80,
                     *(undefined8 *)Method_UnityEngine_Object_FindObjectOfType<OVRInputModule>__);
        goto LAB_03411048;
      }
    }
    lVar2 = FUN_01f08890(*(undefined8 *)
                          Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_localPosition__
                         ,1);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if (*(int *)(lVar2 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    *(long *)(lVar2 + 0x20) = param_1;
    thunk_FUN_01f51358((long *)(lVar2 + 0x20),param_1);
  }
LAB_03411048:
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


