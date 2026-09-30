/*
FUNCTION_NAME: FUN_05a4b03c
ENTRY_POINT: 05a4b03c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 123
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_13;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_permission_setup
*/


void FUN_05a4b03c(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long *plVar12;
  long *plVar13;
  int iVar14;
  long *plVar15;
  
  puVar2 = PTR_DAT_06312520;
  if ((DAT_066d3e2e & 1) == 0) {
    FUN_02b3c81c(Method_Meta_XR_ImmersiveDebugger_UserInterface_Console_OnConsoleLineClicked__);
    FUN_02b3c81c(Method_Meta_XR_ImmersiveDebugger_UserInterface_Console_RegisterControl__);
    FUN_02b3c81c(Pico_Platform_Models_SpeechError_TypeInfo);
    FUN_02b3c81c(Method_Meta_XR_ImmersiveDebugger_UserInterface_Console_ToggleCollapseMode__);
    FUN_02b3c81c(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    FUN_02b3c81c(Method_System_Console_SetError__);
    FUN_02b3c81c(Method_System_Console_SetOut__);
    FUN_02b3c81c(Method_System_ConsoleCancelEventArgs__ctor__);
    FUN_02b3c81c(
                Method_UnityEngine_XR_Interaction_Toolkit_Inputs_Readers_XRInputDeviceValueReader<bool>_ReadBoolValue__
                );
    FUN_02b3c81c(Method_System_ConsoleKeyInfo__ctor__);
    FUN_02b3c81c(Method_Meta_XR_ImmersiveDebugger_Utils_ConsoleLogsCache_EnqueueLogEntry__);
    FUN_02b3c81c(Method_Meta_XR_ImmersiveDebugger_Utils_ConsoleLogsCache_OnApplicationQuitting__);
    FUN_02b3c81c(
                Method_UnityEngine_Rendering_ConstantBuffer_Push<ProbeReferenceVolume_CellStreamingScratchBufferLayout>__
                );
    FUN_02b3c81c(
                Method_UnityEngine_Rendering_ConstantBuffer_PushGlobal<ShaderVariablesProbeVolumes>__
                );
    FUN_02b3c81c(Method_UnityEngine_Rendering_ConstantBuffer_Set<STP_StpConstantBufferData>__);
    FUN_02b3c81c(System_Reflection_SignatureType_TypeInfo);
    FUN_02b3c81c(Method_UnityEngine_Rendering_ConstantBuffer_Set<Hammersley_Hammersley2dSeq16>__);
    FUN_02b3c81c(Method_UnityEngine_Rendering_ConstantBuffer_Set<Hammersley_Hammersley2dSeq256>__);
    FUN_02b3c81c(Method_UnityEngine_Rendering_ConstantBuffer_Set<Hammersley_Hammersley2dSeq32>__);
    FUN_02b3c81c(System_Reflection_SignaturePointerType_TypeInfo);
    FUN_02b3c81c(Method_UnityEngine_Rendering_ConstantBuffer_Set<Hammersley_Hammersley2dSeq64>__);
    FUN_02b3c81c(Method_UnityEngine_Component_GetComponentInParent<LocomotionSystem>__);
    FUN_02b3c81c(
                Method_UnityEngine_Rendering_ConstantBuffer_UpdateData<Hammersley_Hammersley2dSeq16>__
                );
    FUN_02b3c81c(
                Method_System_Text_RegularExpressions_CaptureCollection_System_Collections_Generic_IList<System_Text_RegularExpressions_Capture>_Insert__
                );
    FUN_02b3c81c(
                Method_UnityEngine_Rendering_ConstantBuffer_UpdateData<Hammersley_Hammersley2dSeq256>__
                );
    FUN_02b3c81c(PTR_DAT_06312520);
    FUN_02b3c81c(Method_System_Security_CodeAccessPermission_CheckPermissionState__);
    DAT_066d3e2e = 1;
  }
  uVar11 = *(undefined8 *)(param_1 + 0x88);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  uVar8 = FUN_05c8c45c(uVar11,0,0);
  if (((uVar8 & 1) != 0) &&
     (uVar8 = FUN_04c09ac4(*(undefined8 *)(param_1 + 0x18),0), (uVar8 & 1) != 0)) {
    FUN_05a4b698(param_1);
  }
  plVar13 = (long *)(param_1 + 0xa0);
  if (*plVar13 == 0) {
    lVar9 = thunk_FUN_02b79644(*(undefined8 *)
                                Method_UnityEngine_Rendering_ConstantBuffer_Set<Hammersley_Hammersley2dSeq256>__
                              );
    FUN_045ce6b8(lVar9,*(undefined8 *)
                        Method_UnityEngine_Rendering_ConstantBuffer_Push<ProbeReferenceVolume_CellStreamingScratchBufferLayout>__
                );
    *plVar13 = lVar9;
    thunk_FUN_02bb0e9c(plVar13,lVar9);
  }
  else {
    FUN_045cf5c0(*plVar13,*(undefined8 *)Method_System_ConsoleCancelEventArgs__ctor__);
  }
  plVar12 = (long *)(param_1 + 200);
  if (*plVar12 == 0) {
    lVar9 = thunk_FUN_02b79644(*(undefined8 *)
                                Method_UnityEngine_Rendering_ConstantBuffer_Set<Hammersley_Hammersley2dSeq64>__
                              );
    FUN_045e0318(lVar9,*(undefined8 *)
                        Method_UnityEngine_Rendering_ConstantBuffer_PushGlobal<ShaderVariablesProbeVolumes>__
                );
    *plVar12 = lVar9;
    thunk_FUN_02bb0e9c(plVar12,lVar9);
  }
  else {
    FUN_045e1240(*plVar12,*(undefined8 *)Method_System_Console_SetError__);
  }
  puVar6 = Method_UnityEngine_Rendering_ConstantBuffer_UpdateData<Hammersley_Hammersley2dSeq256>__;
  puVar5 = Method_Meta_XR_ImmersiveDebugger_Utils_ConsoleLogsCache_OnApplicationQuitting__;
  puVar4 = Method_System_ConsoleKeyInfo__ctor__;
  puVar3 = Method_Meta_XR_ImmersiveDebugger_UserInterface_Console_ToggleCollapseMode__;
  puVar2 = 
  Method_System_Text_RegularExpressions_CaptureCollection_System_Collections_Generic_IList<System_Text_RegularExpressions_Capture>_Insert__
  ;
  lVar9 = *(long *)(param_1 + 0xc0);
  if (lVar9 != 0) {
    iVar14 = 0;
    do {
      if (*(int *)(lVar9 + 0x18) <= iVar14) {
        plVar13 = (long *)(param_1 + 0x98);
        if (*plVar13 == 0) {
          lVar9 = thunk_FUN_02b79644(*(undefined8 *)System_Reflection_SignaturePointerType_TypeInfo)
          ;
          FUN_0444dc30(lVar9,*(undefined8 *)System_Reflection_SignatureType_TypeInfo);
          *plVar13 = lVar9;
          thunk_FUN_02bb0e9c(plVar13,lVar9);
        }
        else {
          FUN_0444eb38(*plVar13,*(undefined8 *)
                                 Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__
                      );
        }
        puVar3 = Method_UnityEngine_Rendering_ConstantBuffer_Set<Hammersley_Hammersley2dSeq16>__;
        plVar15 = (long *)(param_1 + 0xb8);
        if (*plVar15 == 0) {
          lVar9 = thunk_FUN_02b79644(*(undefined8 *)
                                      Method_UnityEngine_Rendering_ConstantBuffer_Set<Hammersley_Hammersley2dSeq32>__
                                    );
          FUN_045e0318(lVar9,*(undefined8 *)
                              Method_UnityEngine_Rendering_ConstantBuffer_Set<STP_StpConstantBufferData>__
                      );
          *plVar15 = lVar9;
          thunk_FUN_02bb0e9c(plVar15,lVar9);
        }
        else {
          FUN_045e1240(*plVar15,*(undefined8 *)Method_System_Console_SetOut__);
        }
        lVar9 = *(long *)(param_1 + 0xb0);
        if (lVar9 != 0) {
          iVar14 = 0;
          goto LAB_05a4b43c;
        }
        break;
      }
      lVar9 = FUN_037a6268(lVar9,iVar14,*(undefined8 *)puVar6);
      if (lVar9 == 0) break;
      uVar7 = FUN_05d3dd8c(lVar9,0);
      if (*plVar13 == 0) break;
      uVar8 = FUN_045cf62c(*plVar13,uVar7,*(undefined8 *)puVar4);
      if ((uVar8 & 1) == 0) {
        if (*plVar13 == 0) break;
        FUN_045cf440(*plVar13,uVar7,iVar14,*(undefined8 *)puVar3);
      }
      if (*plVar12 == 0) break;
      uVar8 = FUN_045e12ac(*plVar12,uVar7,*(undefined8 *)puVar5);
      if ((uVar8 & 1) == 0) {
        if (*plVar12 == 0) break;
        FUN_045e10b8(*plVar12,uVar7,lVar9,
                     *(undefined8 *)
                      Method_Meta_XR_ImmersiveDebugger_UserInterface_Console_OnConsoleLineClicked__)
        ;
      }
      lVar9 = *(long *)(param_1 + 0xc0);
      iVar14 = iVar14 + 1;
    } while (lVar9 != 0);
  }
  goto LAB_05a4b5a8;
LAB_05a4b43c:
  do {
    if (*(int *)(lVar9 + 0x18) <= iVar14) {
      *(undefined1 *)(param_1 + 0xe0) = 0;
      return;
    }
    lVar9 = FUN_037a6268(lVar9,iVar14,*(undefined8 *)puVar2);
    if (lVar9 != 0) {
      if (*plVar12 == 0) break;
      uVar7 = *(undefined4 *)(lVar9 + 0x28);
      uVar8 = FUN_045e12ac(*plVar12,uVar7,*(undefined8 *)puVar5);
      if ((uVar8 & 1) != 0) {
        if (*plVar12 == 0) break;
        uVar11 = FUN_045e1018(*plVar12,uVar7,*(undefined8 *)puVar3);
        *(undefined8 *)(lVar9 + 0x20) = uVar11;
        thunk_FUN_02bb0e9c();
        *(long *)(lVar9 + 0x18) = param_1;
        thunk_FUN_02bb0e9c((long *)(lVar9 + 0x18),param_1);
        if ((*(long *)(param_1 + 0xb0) == 0) ||
           (lVar10 = FUN_037a6268(*(long *)(param_1 + 0xb0),iVar14,*(undefined8 *)puVar2),
           lVar10 == 0)) break;
        uVar11 = *(undefined8 *)(lVar10 + 0x30);
        if (*(int *)(*(long *)Method_System_Security_CodeAccessPermission_CheckPermissionState__ +
                    0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        uVar7 = FUN_05a551f0(uVar11,0);
        if (*plVar13 == 0) break;
        uVar8 = FUN_0444eba4(*plVar13,uVar7,
                             *(undefined8 *)
                              Method_UnityEngine_XR_Interaction_Toolkit_Inputs_Readers_XRInputDeviceValueReader<bool>_ReadBoolValue__
                            );
        if ((uVar8 & 1) == 0) {
          if (*plVar13 == 0) break;
          FUN_0444e9b8(*plVar13,uVar7,iVar14,
                       *(undefined8 *)Pico_Platform_Models_SpeechError_TypeInfo);
        }
        if ((*(long *)(param_1 + 0xb0) == 0) ||
           (lVar10 = FUN_037a6268(*(long *)(param_1 + 0xb0),iVar14,*(undefined8 *)puVar2),
           lVar10 == 0)) break;
        iVar1 = *(int *)(lVar10 + 0x14);
        if (iVar1 != 0xfffe) {
          if (*plVar15 == 0) break;
          uVar8 = FUN_045e12ac(*plVar15,iVar1,
                               *(undefined8 *)
                                Method_Meta_XR_ImmersiveDebugger_Utils_ConsoleLogsCache_EnqueueLogEntry__
                              );
          if ((uVar8 & 1) == 0) {
            if (*plVar15 == 0) break;
            FUN_045e10b8(*plVar15,iVar1,lVar9,
                         *(undefined8 *)
                          Method_Meta_XR_ImmersiveDebugger_UserInterface_Console_RegisterControl__);
          }
        }
      }
    }
    lVar9 = *(long *)(param_1 + 0xb0);
    iVar14 = iVar14 + 1;
  } while (lVar9 != 0);
LAB_05a4b5a8:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


