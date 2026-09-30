/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.Filtering.XRPokeFilter$$FindPokeInteractable
ENTRY_POINT: 05a4b1f8
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 89
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: permission_setup
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_6;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_permission_setup
*/


void UnityEngine_XR_Interaction_Toolkit_Filtering_XRPokeFilter__FindPokeInteractable(void)

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
  long *plVar12;
  long *plVar13;
  int iVar14;
  long *plVar15;
  
  plVar13 = (long *)(unaff_x19 + 0xa0);
  if (*plVar13 == 0) {
                    /* try { // try from 05a4b218 to 05b4b223 has its CatchHandler @ 05a4b504 */
    lVar8 = thunk_FUN_02b79644(*(undefined8 *)
                                Method_UnityEngine_Rendering_ConstantBuffer_Set<Hammersley_Hammersley2dSeq256>__
                              );
    FUN_045ce6b8(lVar8,*(undefined8 *)
                        Method_UnityEngine_Rendering_ConstantBuffer_Push<ProbeReferenceVolume_CellStreamingScratchBufferLayout>__
                );
    *plVar13 = lVar8;
    thunk_FUN_02bb0e9c(plVar13,lVar8);
  }
  else {
                    /* try { // try from 05a4b208 to 05b4b20b has its CatchHandler @ 05a4b4f4 */
    FUN_045cf5c0(*plVar13,*(undefined8 *)Method_System_ConsoleCancelEventArgs__ctor__);
  }
  plVar12 = (long *)(unaff_x19 + 200);
  if (*plVar12 == 0) {
                    /* try { // try from 05a4b274 to 05b4b283 has its CatchHandler @ 05a4b500 */
    lVar8 = thunk_FUN_02b79644(*(undefined8 *)
                                Method_UnityEngine_Rendering_ConstantBuffer_Set<Hammersley_Hammersley2dSeq64>__
                              );
    FUN_045e0318(lVar8,*(undefined8 *)
                        Method_UnityEngine_Rendering_ConstantBuffer_PushGlobal<ShaderVariablesProbeVolumes>__
                );
    *plVar12 = lVar8;
    thunk_FUN_02bb0e9c(plVar12,lVar8);
  }
  else {
                    /* try { // try from 05a4b260 to 05b4b26b has its CatchHandler @ 05a4b54c */
    FUN_045e1240(*plVar12,*(undefined8 *)Method_System_Console_SetError__);
  }
  puVar6 = Method_UnityEngine_Rendering_ConstantBuffer_UpdateData<Hammersley_Hammersley2dSeq256>__;
  puVar5 = Method_Meta_XR_ImmersiveDebugger_Utils_ConsoleLogsCache_OnApplicationQuitting__;
  puVar4 = Method_System_ConsoleKeyInfo__ctor__;
  puVar3 = Method_Meta_XR_ImmersiveDebugger_UserInterface_Console_ToggleCollapseMode__;
  puVar2 = 
  Method_System_Text_RegularExpressions_CaptureCollection_System_Collections_Generic_IList<System_Text_RegularExpressions_Capture>_Insert__
  ;
  lVar8 = *(long *)(unaff_x19 + 0xc0);
  if (lVar8 != 0) {
    iVar14 = 0;
    do {
      if (*(int *)(lVar8 + 0x18) <= iVar14) {
        plVar13 = (long *)(unaff_x19 + 0x98);
        if (*plVar13 == 0) {
          lVar8 = thunk_FUN_02b79644(*(undefined8 *)System_Reflection_SignaturePointerType_TypeInfo)
          ;
          FUN_0444dc30(lVar8,*(undefined8 *)System_Reflection_SignatureType_TypeInfo);
          *plVar13 = lVar8;
          thunk_FUN_02bb0e9c(plVar13,lVar8);
        }
        else {
          FUN_0444eb38(*plVar13,*(undefined8 *)
                                 Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__
                      );
        }
        puVar3 = Method_UnityEngine_Rendering_ConstantBuffer_Set<Hammersley_Hammersley2dSeq16>__;
        plVar15 = (long *)(unaff_x19 + 0xb8);
        if (*plVar15 == 0) {
          lVar8 = thunk_FUN_02b79644(*(undefined8 *)
                                      Method_UnityEngine_Rendering_ConstantBuffer_Set<Hammersley_Hammersley2dSeq32>__
                                    );
          FUN_045e0318(lVar8,*(undefined8 *)
                              Method_UnityEngine_Rendering_ConstantBuffer_Set<STP_StpConstantBufferData>__
                      );
          *plVar15 = lVar8;
          thunk_FUN_02bb0e9c(plVar15,lVar8);
        }
        else {
          FUN_045e1240(*plVar15,*(undefined8 *)Method_System_Console_SetOut__);
        }
        lVar8 = *(long *)(unaff_x19 + 0xb0);
        if (lVar8 != 0) {
          iVar14 = 0;
          goto LAB_05a4b43c;
        }
        break;
      }
      lVar8 = FUN_037a6268(lVar8,iVar14,*(undefined8 *)puVar6);
      if (lVar8 == 0) break;
      uVar7 = FUN_05d3dd8c(lVar8,0);
      if (*plVar13 == 0) break;
      uVar9 = FUN_045cf62c(*plVar13,uVar7,*(undefined8 *)puVar4);
      if ((uVar9 & 1) == 0) {
        if (*plVar13 == 0) break;
        FUN_045cf440(*plVar13,uVar7,iVar14,*(undefined8 *)puVar3);
      }
      if (*plVar12 == 0) break;
      uVar9 = FUN_045e12ac(*plVar12,uVar7,*(undefined8 *)puVar5);
      if ((uVar9 & 1) == 0) {
        if (*plVar12 == 0) break;
        FUN_045e10b8(*plVar12,uVar7,lVar8,
                     *(undefined8 *)
                      Method_Meta_XR_ImmersiveDebugger_UserInterface_Console_OnConsoleLineClicked__)
        ;
      }
      lVar8 = *(long *)(unaff_x19 + 0xc0);
      iVar14 = iVar14 + 1;
    } while (lVar8 != 0);
  }
  goto LAB_05a4b5a8;
LAB_05a4b43c:
  do {
    if (*(int *)(lVar8 + 0x18) <= iVar14) {
      *(undefined1 *)(unaff_x19 + 0xe0) = 0;
      return;
    }
    lVar8 = FUN_037a6268(lVar8,iVar14,*(undefined8 *)puVar2);
    if (lVar8 != 0) {
      if (*plVar12 == 0) break;
      uVar7 = *(undefined4 *)(lVar8 + 0x28);
      uVar9 = FUN_045e12ac(*plVar12,uVar7,*(undefined8 *)puVar5);
      if ((uVar9 & 1) != 0) {
        if (*plVar12 == 0) break;
        uVar10 = FUN_045e1018(*plVar12,uVar7,*(undefined8 *)puVar3);
        *(undefined8 *)(lVar8 + 0x20) = uVar10;
        thunk_FUN_02bb0e9c();
        *(long *)(lVar8 + 0x18) = unaff_x19;
        thunk_FUN_02bb0e9c();
        if ((*(long *)(unaff_x19 + 0xb0) == 0) ||
           (lVar11 = FUN_037a6268(*(long *)(unaff_x19 + 0xb0),iVar14,*(undefined8 *)puVar2),
           lVar11 == 0)) break;
        uVar10 = *(undefined8 *)(lVar11 + 0x30);
        if (*(int *)(*(long *)Method_System_Security_CodeAccessPermission_CheckPermissionState__ +
                    0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        uVar7 = FUN_05a551f0(uVar10,0);
        if (*plVar13 == 0) break;
        uVar9 = FUN_0444eba4(*plVar13,uVar7,
                             *(undefined8 *)
                              Method_UnityEngine_XR_Interaction_Toolkit_Inputs_Readers_XRInputDeviceValueReader<bool>_ReadBoolValue__
                            );
        if ((uVar9 & 1) == 0) {
          if (*plVar13 == 0) break;
          FUN_0444e9b8(*plVar13,uVar7,iVar14,
                       *(undefined8 *)Pico_Platform_Models_SpeechError_TypeInfo);
        }
        if ((*(long *)(unaff_x19 + 0xb0) == 0) ||
           (lVar11 = FUN_037a6268(*(long *)(unaff_x19 + 0xb0),iVar14,*(undefined8 *)puVar2),
           lVar11 == 0)) break;
        iVar1 = *(int *)(lVar11 + 0x14);
        if (iVar1 != 0xfffe) {
          if (*plVar15 == 0) break;
          uVar9 = FUN_045e12ac(*plVar15,iVar1,
                               *(undefined8 *)
                                Method_Meta_XR_ImmersiveDebugger_Utils_ConsoleLogsCache_EnqueueLogEntry__
                              );
          if ((uVar9 & 1) == 0) {
            if (*plVar15 == 0) break;
            FUN_045e10b8(*plVar15,iVar1,lVar8,
                         *(undefined8 *)
                          Method_Meta_XR_ImmersiveDebugger_UserInterface_Console_RegisterControl__);
          }
        }
      }
    }
    lVar8 = *(long *)(unaff_x19 + 0xb0);
    iVar14 = iVar14 + 1;
  } while (lVar8 != 0);
LAB_05a4b5a8:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


