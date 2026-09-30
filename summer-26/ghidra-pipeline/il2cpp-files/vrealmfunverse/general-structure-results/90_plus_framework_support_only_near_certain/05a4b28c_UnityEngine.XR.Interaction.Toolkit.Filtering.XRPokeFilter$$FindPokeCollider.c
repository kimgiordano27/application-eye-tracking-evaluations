/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.Filtering.XRPokeFilter$$FindPokeCollider
ENTRY_POINT: 05a4b28c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 152
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: permission_setup;gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ray_interaction;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_6;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_permission_setup;functionality_gaze_interaction_hits_2
*/


void UnityEngine_XR_Interaction_Toolkit_Filtering_XRPokeFilter__FindPokeCollider(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long *plVar12;
  int iVar13;
  long unaff_x22;
  long *plVar14;
  
  FUN_045e0318();
  *unaff_x20 = unaff_x22;
  thunk_FUN_02bb0e9c();
  puVar6 = Method_UnityEngine_Rendering_ConstantBuffer_UpdateData<Hammersley_Hammersley2dSeq256>__;
  puVar5 = Method_Meta_XR_ImmersiveDebugger_Utils_ConsoleLogsCache_OnApplicationQuitting__;
  puVar4 = Method_System_ConsoleKeyInfo__ctor__;
  puVar3 = Method_Meta_XR_ImmersiveDebugger_UserInterface_Console_ToggleCollapseMode__;
  puVar2 = 
  Method_System_Text_RegularExpressions_CaptureCollection_System_Collections_Generic_IList<System_Text_RegularExpressions_Capture>_Insert__
  ;
  lVar8 = *(long *)(unaff_x19 + 0xc0);
  if (lVar8 != 0) {
                    /* try { // try from 05a4b2bc to 05b4b2c7 has its CatchHandler @ 05a4b548 */
    iVar13 = 0;
    do {
                    /* try { // try from 05a4b2dc to 05b4b2eb has its CatchHandler @ 05a4b54c */
      if (*(int *)(lVar8 + 0x18) <= iVar13) {
        plVar12 = (long *)(unaff_x19 + 0x98);
        if (*plVar12 == 0) {
          lVar8 = thunk_FUN_02b79644(*(undefined8 *)System_Reflection_SignaturePointerType_TypeInfo)
          ;
          FUN_0444dc30(lVar8,*(undefined8 *)System_Reflection_SignatureType_TypeInfo);
          *plVar12 = lVar8;
          thunk_FUN_02bb0e9c(plVar12,lVar8);
        }
        else {
          FUN_0444eb38(*plVar12,*(undefined8 *)
                                 Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__
                      );
        }
        puVar3 = Method_UnityEngine_Rendering_ConstantBuffer_Set<Hammersley_Hammersley2dSeq16>__;
        plVar14 = (long *)(unaff_x19 + 0xb8);
        if (*plVar14 == 0) {
          lVar8 = thunk_FUN_02b79644(*(undefined8 *)
                                      Method_UnityEngine_Rendering_ConstantBuffer_Set<Hammersley_Hammersley2dSeq32>__
                                    );
          FUN_045e0318(lVar8,*(undefined8 *)
                              Method_UnityEngine_Rendering_ConstantBuffer_Set<STP_StpConstantBufferData>__
                      );
          *plVar14 = lVar8;
          thunk_FUN_02bb0e9c(plVar14,lVar8);
        }
        else {
          FUN_045e1240(*plVar14,*(undefined8 *)Method_System_Console_SetOut__);
        }
        lVar8 = *(long *)(unaff_x19 + 0xb0);
        if (lVar8 != 0) {
          iVar13 = 0;
          goto LAB_05a4b43c;
        }
        break;
      }
      lVar8 = FUN_037a6268(lVar8,iVar13,*(undefined8 *)puVar6);
      if (lVar8 == 0) break;
      uVar7 = FUN_05d3dd8c(lVar8,0);
                    /* try { // try from 05a4b300 to 05b4b30f has its CatchHandler @ 05a4b548 */
      if (*unaff_x21 == 0) break;
      uVar9 = FUN_045cf62c(*unaff_x21,uVar7,*(undefined8 *)puVar4);
      if ((uVar9 & 1) == 0) {
        if (*unaff_x21 == 0) break;
        FUN_045cf440(*unaff_x21,uVar7,iVar13,*(undefined8 *)puVar3);
      }
      if (*unaff_x20 == 0) break;
      uVar9 = FUN_045e12ac(*unaff_x20,uVar7,*(undefined8 *)puVar5);
      if ((uVar9 & 1) == 0) {
        if (*unaff_x20 == 0) break;
        FUN_045e10b8(*unaff_x20,uVar7,lVar8,
                     *(undefined8 *)
                      Method_Meta_XR_ImmersiveDebugger_UserInterface_Console_OnConsoleLineClicked__)
        ;
      }
      lVar8 = *(long *)(unaff_x19 + 0xc0);
      iVar13 = iVar13 + 1;
    } while (lVar8 != 0);
  }
  goto LAB_05a4b5a8;
LAB_05a4b43c:
  do {
    if (*(int *)(lVar8 + 0x18) <= iVar13) {
      *(undefined1 *)(unaff_x19 + 0xe0) = 0;
      return;
    }
    lVar8 = FUN_037a6268(lVar8,iVar13,*(undefined8 *)puVar2);
    if (lVar8 != 0) {
      if (*unaff_x20 == 0) break;
      uVar7 = *(undefined4 *)(lVar8 + 0x28);
      uVar9 = FUN_045e12ac(*unaff_x20,uVar7,*(undefined8 *)puVar5);
      if ((uVar9 & 1) != 0) {
        if (*unaff_x20 == 0) break;
        uVar10 = FUN_045e1018(*unaff_x20,uVar7,*(undefined8 *)puVar3);
        *(undefined8 *)(lVar8 + 0x20) = uVar10;
        thunk_FUN_02bb0e9c();
        *(long *)(lVar8 + 0x18) = unaff_x19;
        thunk_FUN_02bb0e9c();
        if ((*(long *)(unaff_x19 + 0xb0) == 0) ||
           (lVar11 = FUN_037a6268(*(long *)(unaff_x19 + 0xb0),iVar13,*(undefined8 *)puVar2),
           lVar11 == 0)) break;
        uVar10 = *(undefined8 *)(lVar11 + 0x30);
        if (*(int *)(*(long *)Method_System_Security_CodeAccessPermission_CheckPermissionState__ +
                    0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        uVar7 = FUN_05a551f0(uVar10,0);
        if (*plVar12 == 0) break;
        uVar9 = FUN_0444eba4(*plVar12,uVar7,
                             *(undefined8 *)
                              Method_UnityEngine_XR_Interaction_Toolkit_Inputs_Readers_XRInputDeviceValueReader<bool>_ReadBoolValue__
                            );
        if ((uVar9 & 1) == 0) {
          if (*plVar12 == 0) break;
          FUN_0444e9b8(*plVar12,uVar7,iVar13,
                       *(undefined8 *)Pico_Platform_Models_SpeechError_TypeInfo);
        }
        if ((*(long *)(unaff_x19 + 0xb0) == 0) ||
           (lVar11 = FUN_037a6268(*(long *)(unaff_x19 + 0xb0),iVar13,*(undefined8 *)puVar2),
           lVar11 == 0)) break;
        iVar1 = *(int *)(lVar11 + 0x14);
        if (iVar1 != 0xfffe) {
          if (*plVar14 == 0) break;
          uVar9 = FUN_045e12ac(*plVar14,iVar1,
                               *(undefined8 *)
                                Method_Meta_XR_ImmersiveDebugger_Utils_ConsoleLogsCache_EnqueueLogEntry__
                              );
          if ((uVar9 & 1) == 0) {
            if (*plVar14 == 0) break;
            FUN_045e10b8(*plVar14,iVar1,lVar8,
                         *(undefined8 *)
                          Method_Meta_XR_ImmersiveDebugger_UserInterface_Console_RegisterControl__);
          }
        }
      }
    }
    lVar8 = *(long *)(unaff_x19 + 0xb0);
    iVar13 = iVar13 + 1;
  } while (lVar8 != 0);
LAB_05a4b5a8:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


