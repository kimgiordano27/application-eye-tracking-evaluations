/*
FUNCTION_NAME: FUN_05d80e00
ENTRY_POINT: 05d80e00
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;ui_interaction
EVIDENCE: weak_xr_or_state_hits_10;validity_or_gating_hits_11;ray_or_cast_sink_hits_4;ui_or_gameplay_sink_hits_2
*/


void FUN_05d80e00(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  char *pcVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined1 local_64 [4];
  
  puVar1 = PTR_DAT_067cdbd8;
  if ((DAT_06bc3a43 & 1) == 0) {
    FUN_02f08768(Method_System_IO_Path_InsecureGetFullPath__);
    FUN_02f08768(PTR_DAT_067cdbd8);
    FUN_02f08768(Method_System_IO_Path_IsPathRooted__);
    FUN_02f08768(Method_Newtonsoft_Json_Linq_JsonPath_PathFilter_GetTokenIndex__);
    FUN_02f08768(Method_UnityEngine_InputSystem_Pen_get_Item__);
    FUN_02f08768(Method_System_Net_Configuration_PerformanceCountersElement__ctor__);
    FUN_02f08768(Method_System_Net_Configuration_PerformanceCountersElement_get_Properties__);
    FUN_02f08768(Method_System_Security_PermissionSet_CopyTo__);
    FUN_02f08768(Method_UnityEngine_XR_Templates_MR_PermissionsManager_OnPermissionDenied__);
    FUN_02f08768(Method_UnityEngine_XR_Templates_MR_PermissionsManager_OnPermissionGranted__);
    FUN_02f08768(Method_UnityEngine_Events_PersistentCall_GetObjectCall__);
    FUN_02f08768(Method_UnityEngine_Physics_PhysXOnSceneContactModify__);
    FUN_02f08768(Method_UnityEngine_UIElements_PanelEventHandler_OnElementFocus__);
    FUN_02f08768(Method_Oculus_Interaction_PhysicsGrabbable_HandlePointerEventRaised__);
    DAT_06bc3a43 = 1;
  }
  local_64[0] = 0;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  lVar9 = FUN_05c74700(0);
  puVar8 = Method_Oculus_Interaction_PhysicsGrabbable_HandlePointerEventRaised__;
  puVar7 = Method_UnityEngine_Physics_PhysXOnSceneContactModify__;
  puVar6 = Method_UnityEngine_Events_PersistentCall_GetObjectCall__;
  puVar5 = Method_UnityEngine_XR_Templates_MR_PermissionsManager_OnPermissionGranted__;
  puVar4 = Method_UnityEngine_XR_Templates_MR_PermissionsManager_OnPermissionDenied__;
  puVar3 = Method_Newtonsoft_Json_Linq_JsonPath_PathFilter_GetTokenIndex__;
  puVar2 = Method_System_IO_Path_IsPathRooted__;
  puVar1 = Method_System_IO_Path_InsecureGetFullPath__;
  if ((lVar9 != 0) && (lVar9 = *(long *)(lVar9 + 0x10), lVar9 != 0)) {
    uVar10 = FUN_035eb4b0(lVar9,*(undefined8 *)
                                 Method_System_Net_Configuration_PerformanceCountersElement_get_Properties__
                         );
    uVar13 = *(undefined8 *)puVar5;
    *(undefined8 *)(param_1 + 0x1c0) = uVar10;
    uVar10 = FUN_035eb4b0(lVar9,uVar13);
    uVar13 = *(undefined8 *)puVar7;
    *(undefined8 *)(param_1 + 0x1c8) = uVar10;
    uVar10 = FUN_035eb4b0(lVar9,uVar13);
    uVar13 = *(undefined8 *)puVar6;
    *(undefined8 *)(param_1 + 0x1d0) = uVar10;
    uVar10 = FUN_035eb4b0(lVar9,uVar13);
    uVar13 = *(undefined8 *)puVar2;
    *(undefined8 *)(param_1 + 0x1d8) = uVar10;
    uVar10 = FUN_035eb4b0(lVar9,uVar13);
    uVar13 = *(undefined8 *)puVar4;
    *(undefined8 *)(param_1 + 0x1e0) = uVar10;
    uVar10 = FUN_035eb4b0(lVar9,uVar13);
    uVar13 = *(undefined8 *)puVar3;
    *(undefined8 *)(param_1 + 0x1e8) = uVar10;
    uVar10 = FUN_035eb4b0(lVar9,uVar13);
    uVar13 = *(undefined8 *)puVar8;
    *(undefined8 *)(param_1 + 0x1f0) = uVar10;
    uVar10 = FUN_035eb4b0(lVar9,uVar13);
    puVar2 = Method_System_Net_Configuration_PerformanceCountersElement__ctor__;
    *(undefined8 *)(param_1 + 0x1f8) = uVar10;
    uVar10 = FUN_035eb4b0(lVar9,*(undefined8 *)puVar2);
    puVar2 = Method_UnityEngine_InputSystem_Pen_get_Item__;
    *(undefined8 *)(param_1 + 0x200) = uVar10;
    uVar10 = FUN_035eb4b0(lVar9,*(undefined8 *)puVar2);
    puVar2 = Method_UnityEngine_UIElements_PanelEventHandler_OnElementFocus__;
    *(undefined8 *)(param_1 + 0x208) = uVar10;
    uVar10 = FUN_035eb4b0(lVar9,*(undefined8 *)puVar2);
    puVar2 = Method_System_Security_PermissionSet_CopyTo__;
    *(undefined8 *)(param_1 + 0x210) = uVar10;
    uVar10 = FUN_035eb4b0(lVar9,*(undefined8 *)puVar2);
    *(undefined8 *)(param_1 + 0x218) = uVar10;
    pcVar11 = (char *)FUN_05de276c(param_3 + 0x20,0);
    *(bool *)(param_1 + 599) = *pcVar11 != '\0';
    pcVar11 = (char *)FUN_05de27c8(param_3 + 0x20,0);
    *(bool *)(param_1 + 600) = *pcVar11 != '\0';
    pcVar11 = (char *)FUN_05de2824(param_3 + 0x20,0);
    *(bool *)(param_1 + 0x259) = *pcVar11 != '\0';
    puVar12 = (undefined8 *)FUN_05ddf250(param_3,0);
    uVar10 = *puVar12;
    if (*(char *)(param_1 + 0x254) == '\0') {
      lVar9 = *(long *)puVar1;
      if (*(int *)(lVar9 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
        lVar9 = *(long *)puVar1;
      }
      FUN_05c5cb48(local_64,uVar10,**(undefined8 **)(lVar9 + 0xb8),0);
      FUN_05d81bc8(param_1,uVar10,param_3);
    }
    else {
      lVar9 = *(long *)puVar1;
      if (*(int *)(lVar9 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
        lVar9 = *(long *)puVar1;
      }
      FUN_05c5cb48(local_64,uVar10,*(undefined8 *)(*(long *)(lVar9 + 0xb8) + 8),0);
      FUN_05d811f8(param_1,uVar10,param_3);
    }
    FUN_05c5cb50(local_64,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


