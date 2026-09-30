/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$ovrp_Media_UseMrcDebugCamera
ENTRY_POINT: 01a3fe3c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 81
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;paired_field_refs_with_eye_source;functionality_data_collection_or_telemetry_hits_1
*/


void OVRPlugin_OVRP_1_38_0__ovrp_Media_UseMrcDebugCamera
               (undefined1 param_1 [16],undefined1 param_2 [16])

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uVar6;
  long *unaff_x23;
  
  *(long *)(unaff_x20 + 0x374) = param_1._8_8_;
  *(long *)(unaff_x20 + 0x36c) = param_1._0_8_;
  *(long *)(unaff_x20 + 0x368) = param_2._8_8_;
  *(long *)(unaff_x20 + 0x360) = param_2._0_8_;
  *(undefined4 *)(unaff_x20 + 0x37c) = 0;
  *(long *)(unaff_x19 + 0x10) = unaff_x20;
  **(long **)(*unaff_x23 + 0xb8) = unaff_x19;
  lVar3 = thunk_FUN_00d62348(*unaff_x23);
  if (lVar3 != 0) {
    FUN_01a3f050();
    puVar2 = StringLiteral_2439;
    puVar1 = System_Runtime_Serialization_Formatters_Binary_MemberPrimitiveTyped_TypeInfo;
    if (**(long **)(*unaff_x23 + 0xb8) != 0) {
      uVar5 = *(undefined8 *)(**(long **)(*unaff_x23 + 0xb8) + 0x10);
      lVar4 = *(long *)StringLiteral_2439;
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar4 = *(long *)puVar2;
      }
      uVar6 = **(undefined8 **)(lVar4 + 0xb8);
      lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
      puVar2 = Method_UnityEngine_UIElements_UIR_UIRenderDevice_OnFlushPendingResources__;
      puVar1 = Method_System_Collections_Generic_List_Enumerator<SubtitleData>_MoveNext__;
      if (lVar4 != 0) {
        FUN_012d239c(lVar4,uVar6,
                     *(undefined8 *)
                      Method_System_Net_Sockets_Socket_TaskSocketAsyncEventArgs<int>_GetCompletionResponsibility__
                     ,0);
        uVar5 = FUN_010dcdb8(uVar5,lVar4,*(undefined8 *)puVar2);
        uVar5 = FUN_010df6b8(uVar5,*(undefined8 *)puVar1);
        *(undefined8 *)(lVar3 + 0x10) = uVar5;
        *(long *)(*(long *)(*unaff_x23 + 0xb8) + 8) = lVar3;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


