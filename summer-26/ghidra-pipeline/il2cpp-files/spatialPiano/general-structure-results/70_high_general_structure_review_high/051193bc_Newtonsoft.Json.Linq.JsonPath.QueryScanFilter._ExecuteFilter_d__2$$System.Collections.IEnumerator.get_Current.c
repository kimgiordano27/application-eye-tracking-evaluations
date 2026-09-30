/*
FUNCTION_NAME: Newtonsoft.Json.Linq.JsonPath.QueryScanFilter.<ExecuteFilter>d__2$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 051193bc
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 88
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_7;strong_file_logging_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


/* WARNING: Removing unreachable block (ram,0x0511967c) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8
Newtonsoft_Json_Linq_JsonPath_QueryScanFilter_<ExecuteFilter>d__2__System_Collections_IEnumerator_get_Current
          (long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  long lStack0000000000000018;
  undefined8 in_stack_00000028;
  
  if ((DAT_06bb9e13 & 1) == 0) {
    FUN_02f08768(UnityEngine_Rendering_GPUPrefixSum_SystemResources_var);
    FUN_02f08768(UnityEngine_Rendering_GPUSort_SupportResources_var);
    FUN_02f08768(UnityEngine_Rendering_GPUSort_SystemResources_var);
    FUN_02f08768(UnityEngine_XR_Interaction_Toolkit_AR_GestureTransformationUtility_Placement_var);
    FUN_02f08768(Unity_AppUI_UI_GridView_UxmlSerializedData_var);
    FUN_02f08768(System_Guid_GuidResult_var);
    FUN_02f08768(UnityEngine_InputSystem_HID_HID_HIDDeviceDescriptor_var);
    FUN_02f08768(UnityEngine_InputSystem_HID_HID_HIDDeviceDescriptorBuilder_var);
    DAT_06bb9e13 = 1;
  }
  puVar2 = UnityEngine_Rendering_GPUPrefixSum_SystemResources_var;
  lVar4 = 0x80;
  if ((param_4 & 1) == 0) {
    lVar4 = 0x40;
  }
  plVar6 = *(long **)(param_1 + lVar4);
  if (plVar6 == (long *)0x0) {
    return 0;
  }
  lVar4 = FUN_02f08780(*(undefined8 *)UnityEngine_Rendering_GPUPrefixSum_SystemResources_var);
  if ((param_4 & 1) == 0) {
    lStack0000000000000018 = *(long *)(lVar4 + 8);
    if (lStack0000000000000018 == 0) {
      lStack0000000000000018 = thunk_FUN_02f45270(*(undefined8 *)System_Guid_GuidResult_var);
      FUN_0492c420(lStack0000000000000018,
                   *(undefined8 *)
                    UnityEngine_XR_Interaction_Toolkit_AR_GestureTransformationUtility_Placement_var
                  );
      lVar4 = FUN_02f08780(*(undefined8 *)puVar2);
      *(long *)(lVar4 + 8) = lStack0000000000000018;
      goto LAB_051194f4;
    }
  }
  else {
    lStack0000000000000018 = *(long *)(lVar4 + 0x10);
    if (lStack0000000000000018 == 0) {
      lStack0000000000000018 = thunk_FUN_02f45270(*(undefined8 *)System_Guid_GuidResult_var);
      FUN_0492c420(lStack0000000000000018,
                   *(undefined8 *)
                    UnityEngine_XR_Interaction_Toolkit_AR_GestureTransformationUtility_Placement_var
                  );
      lVar4 = FUN_02f08780(*(undefined8 *)puVar2);
      *(long *)(lVar4 + 0x10) = lStack0000000000000018;
LAB_051194f4:
      FUN_02f08780(*(undefined8 *)puVar2);
      if (lStack0000000000000018 == 0) goto LAB_05119674;
    }
  }
  uVar5 = FUN_0492cf2c(lStack0000000000000018,param_2,
                       *(undefined8 *)UnityEngine_Rendering_GPUSort_SupportResources_var);
  if ((uVar5 & 1) == 0) {
    FUN_0492cd24(lStack0000000000000018,param_2,0,
                 *(undefined8 *)Unity_AppUI_UI_GridView_UxmlSerializedData_var);
    lVar4 = (**(code **)(*plVar6 + 0x1c8))(plVar6,*(undefined8 *)(*plVar6 + 0x1d0));
    puVar3 = UnityEngine_InputSystem_HID_HID_HIDDeviceDescriptorBuilder_var;
    puVar2 = UnityEngine_InputSystem_HID_HID_HIDDeviceDescriptor_var;
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    uVar1 = *(uint *)(lVar4 + 0x18);
    if (0 < (int)uVar1) {
      lVar8 = 0;
      do {
        if (uVar1 <= (uint)lVar8) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089d0();
        }
        plVar6 = *(long **)(lVar4 + 0x20 + lVar8 * 8);
        uVar7 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
        FUN_050e684c(uVar7,in_stack_00000028,param_3,0);
        if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        if (*plVar6 != *(long *)puVar3) {
                    /* WARNING: Subroutine does not return */
          FUN_02f08d48(plVar6);
        }
        uVar7 = (*(code *)plVar6[3])(plVar6[8],param_1,uVar7,plVar6[5]);
        uVar5 = FUN_0501e43c(uVar7,0,0);
        if ((uVar5 & 1) != 0) goto LAB_05119618;
        uVar1 = *(uint *)(lVar4 + 0x18);
        lVar8 = lVar8 + 1;
      } while ((int)lVar8 < (int)uVar1);
    }
    uVar7 = 0;
LAB_05119618:
    if (lStack0000000000000018 == 0) {
LAB_05119674:
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    FUN_0492e1b4(lStack0000000000000018,in_stack_00000028,
                 *(undefined8 *)UnityEngine_Rendering_GPUSort_SystemResources_var);
  }
  else {
    uVar7 = 0;
  }
  return uVar7;
}


