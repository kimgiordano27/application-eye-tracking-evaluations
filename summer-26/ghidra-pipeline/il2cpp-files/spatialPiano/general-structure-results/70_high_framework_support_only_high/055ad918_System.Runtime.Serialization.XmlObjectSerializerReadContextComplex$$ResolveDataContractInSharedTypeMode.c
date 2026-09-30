/*
FUNCTION_NAME: System.Runtime.Serialization.XmlObjectSerializerReadContextComplex$$ResolveDataContractInSharedTypeMode
ENTRY_POINT: 055ad918
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 80
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ray_interaction;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_6;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_1;telemetry_or_network_hits_3;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;negative_system_io_serialization_or_json_helper_without_gaze_flow;functionality_data_collection_or_telemetry_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x055ae090) */
/* WARNING: Removing unreachable block (ram,0x055ae054) */

void System_Runtime_Serialization_XmlObjectSerializerReadContextComplex__ResolveDataContractInSharedTypeMode
               (void)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined4 uVar10;
  long *plVar11;
  ulong uVar12;
  undefined8 uVar13;
  long *plVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  byte bVar19;
  int *piVar20;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *plVar21;
  
  FUN_02f08768();
  FUN_02f08768(Method_UnityEngine_Awaitable_Awaiter<XRResultStatus>_get_IsCompleted__);
  FUN_02f08768(Method_OVRTask_Awaiter<MRUK_LoadDeviceResult>_GetResult__);
  FUN_02f08768(Method_OVRTask_Awaiter<MRUK_LoadDeviceResult>_get_IsCompleted__);
  FUN_02f08768(Method_OVRTask_Awaiter<MRUKNativeFuncs_MrukResult>_GetResult__);
  FUN_02f08768(Method_OVRTask_Awaiter<MRUKNativeFuncs_MrukResult>_get_IsCompleted__);
  FUN_02f08768(Method_OVRTask_Awaiter<OVRPlugin_Result>_GetResult__);
  FUN_02f08768(Method_OVRTask_Awaiter<OVRPlugin_Result>_get_IsCompleted__);
  FUN_02f08768(Method_OVRTask_Awaiter<OVRSceneManager_LoadSceneModelResult>_GetResult__);
  FUN_02f08768(Method_OVRTask_Awaiter<OVRSceneManager_LoadSceneModelResult>_get_IsCompleted__);
  FUN_02f08768(Method_OVRTask_Awaiter<OVRAnchor_Tracker_AsyncLock>_GetResult__);
  FUN_02f08768(Method_OVRTask_Awaiter<OVRAnchor_Tracker_AsyncLock>_get_IsCompleted__);
  FUN_02f08768(
              Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAffordanceStateReceiver<Color>_Awake__
              );
  FUN_02f08768(
              Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAffordanceStateReceiver<Color>_CaptureInitialValue__
              );
  FUN_02f08768(
              Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAffordanceStateReceiver<Color>_GetCurrentValueForCapture__
              );
  FUN_02f08768(PTR_DAT_067cc628);
  FUN_02f08768(
              Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAffordanceStateReceiver<Color>_OnEnable__
              );
  FUN_02f08768(PTR_DAT_067cd6b8);
  FUN_02f08768(
              Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAffordanceStateReceiver<Color>_Start__
              );
  FUN_02f08768(PTR_DAT_067cd6c0);
  *(undefined1 *)(unaff_x21 + 0xb0d) = 1;
  puVar3 = 
  Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAffordanceStateReceiver<Color>_GetCurrentValueForCapture__
  ;
  if (unaff_x20 == 0) goto LAB_055ae068;
  plVar21 = *(long **)(unaff_x20 + 0x98);
  if (plVar21 == (long *)0x0) goto LAB_055adaa4;
  lVar17 = *plVar21;
  bVar19 = *(byte *)(lVar17 + 0x130);
  bVar1 = *(byte *)(*(long *)Method_OVRTask_Awaiter<OVRAnchor_Tracker_AsyncLock>_get_IsCompleted__ +
                   0x130);
  if ((bVar1 <= bVar19) &&
     (*(long *)(*(long *)(lVar17 + 200) + (ulong)bVar1 * 8 + -8) ==
      *(long *)Method_OVRTask_Awaiter<OVRAnchor_Tracker_AsyncLock>_get_IsCompleted__)) {
LAB_055ae06c:
    uVar13 = FUN_055677c4(0);
    uVar16 = thunk_FUN_02f6ef30(
                               Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAffordanceStateReceiver<Color>_get_affordanceTheme__
                               );
                    /* WARNING: Subroutine does not return */
    FUN_02f0888c(uVar13,uVar16);
  }
  bVar1 = *(byte *)(*(long *)
                     Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAffordanceStateReceiver<Color>_CaptureInitialValue__
                   + 0x130);
  if ((bVar1 <= bVar19) &&
     (*(long *)(*(long *)(lVar17 + 200) + (ulong)bVar1 * 8 + -8) ==
      *(long *)
       Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAffordanceStateReceiver<Color>_CaptureInitialValue__
     )) goto LAB_055ae06c;
  bVar1 = *(byte *)(*(long *)
                     Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAffordanceStateReceiver<Color>_Awake__
                   + 0x130);
  if ((bVar19 < bVar1) ||
     (*(long *)(*(long *)(lVar17 + 200) + (ulong)bVar1 * 8 + -8) !=
      *(long *)
       Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAffordanceStateReceiver<Color>_Awake__
     )) goto LAB_055adaa4;
  plVar11 = *(long **)(unaff_x20 + 0x60);
  if (plVar11 != (long *)0x0) {
    bVar19 = *(byte *)(*(long *)
                        Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAffordanceStateReceiver<Color>_GetCurrentValueForCapture__
                      + 0x130);
    if ((bVar19 <= *(byte *)(*plVar11 + 0x130)) &&
       (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar19 * 8 + -8) ==
        *(long *)
         Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAffordanceStateReceiver<Color>_GetCurrentValueForCapture__
       )) {
      lVar17 = FUN_0577ac88(plVar11,0);
      if (lVar17 == 0) goto LAB_055ae068;
      uVar12 = FUN_04f6dc3c(*(undefined8 *)(lVar17 + 0x18),*(undefined8 *)PTR_DAT_067cd6c0,0);
      if ((uVar12 & 1) == 0) goto LAB_055adbbc;
      plVar11 = *(long **)(unaff_x20 + 0x60);
      uVar13 = thunk_FUN_02f45270(*(undefined8 *)
                                   UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_CalculateScaleToFit_00000966_PostfixBurstDelegate_TypeInfo
                                 );
      if (plVar11 == (long *)0x0) {
LAB_055adb94:
        plVar11 = (long *)0x0;
      }
      else {
        bVar19 = *(byte *)(*(long *)puVar3 + 0x130);
        if (*(byte *)(*plVar11 + 0x130) < bVar19) goto LAB_055adb94;
        if (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar19 * 8 + -8) != *(long *)puVar3) {
          plVar11 = (long *)0x0;
        }
      }
      FUN_055ad7b0(uVar13,plVar11);
      *(undefined8 *)(unaff_x19 + 0x18) = uVar13;
    }
  }
LAB_055adbbc:
  plVar11 = plVar21 + 10;
  if (*plVar11 != 0) {
    uVar12 = thunk_FUN_04f6d944(*(undefined8 *)(*plVar11 + 0x18),*(undefined8 *)PTR_DAT_067cd6c0,0);
    plVar14 = (long *)*plVar11;
    if ((uVar12 & 1) == 0) {
      if (plVar14 == (long *)0x0) goto LAB_055ae068;
      lVar17 = (**(code **)(*plVar14 + 0x168))(plVar14,*(undefined8 *)(*plVar14 + 0x170));
    }
    else {
      if (plVar14 == (long *)0x0) goto LAB_055ae068;
      lVar17 = plVar14[2];
    }
    lVar18 = *(long *)(unaff_x19 + 0x18);
    *(long *)(unaff_x19 + 0x10) = lVar17;
    if (((lVar18 != 0) && (*(long *)(lVar18 + 0x28) != 0)) &&
       (0 < *(int *)(*(long *)(lVar18 + 0x28) + 0x10))) {
      plVar11 = (long *)(lVar18 + 0x20);
    }
    *(long *)(unaff_x19 + 0x20) = *plVar11;
    if ((lVar17 == 0) || (*(int *)(lVar17 + 0x10) == 0)) {
      if (plVar21[0xb] == 0) goto LAB_055ae068;
      lVar17 = *(long *)(plVar21[0xb] + 0x50);
      *(undefined8 *)(unaff_x19 + 0x20) = 0;
      *(long *)(unaff_x19 + 0x10) = lVar17;
    }
    uVar12 = thunk_FUN_04f6d944(lVar17,*(undefined8 *)
                                        Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAffordanceStateReceiver<Color>_Start__
                                ,0);
    if ((uVar12 & 1) != 0) {
      *(undefined8 *)(unaff_x19 + 0x10) = *(undefined8 *)PTR_DAT_067cd6b8;
    }
    if (plVar21[0xc] != 0) {
      lVar17 = FUN_057715f4(plVar21[0xc],0);
      puVar9 = Method_OVRTask_Awaiter<OVRAnchor_Tracker_AsyncLock>_GetResult__;
      puVar8 = Method_OVRTask_Awaiter<OVRSceneManager_LoadSceneModelResult>_GetResult__;
      puVar7 = Method_OVRTask_Awaiter<OVRPlugin_Result>_get_IsCompleted__;
      puVar6 = Method_OVRTask_Awaiter<OVRPlugin_Result>_GetResult__;
      puVar5 = Method_OVRTask_Awaiter<MRUKNativeFuncs_MrukResult>_get_IsCompleted__;
      puVar4 = Method_OVRTask_Awaiter<MRUKNativeFuncs_MrukResult>_GetResult__;
      puVar3 = Method_UnityEngine_Awaitable_Awaiter<XRResultStatus>_get_IsCompleted__;
      while( true ) {
        if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        uVar12 = FUN_057718f4(lVar17,0);
        puVar2 = PTR_DAT_067c91b0;
        if ((uVar12 & 1) == 0) break;
        if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        plVar21 = (long *)FUN_05771994(lVar17,0);
        if (plVar21 != (long *)0x0) {
          lVar18 = *plVar21;
          bVar19 = *(byte *)(lVar18 + 0x130);
          bVar1 = *(byte *)(*(long *)Method_OVRTask_Awaiter<MRUK_LoadDeviceResult>_GetResult__ +
                           0x130);
          if ((bVar19 < bVar1) ||
             (*(long *)(*(long *)(lVar18 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)Method_OVRTask_Awaiter<MRUK_LoadDeviceResult>_GetResult__)) {
                    /* WARNING: Subroutine does not return */
            FUN_02f08d48(plVar21);
          }
          bVar1 = *(byte *)(*(long *)Method_OVRTask_Awaiter<MRUK_LoadDeviceResult>_get_IsCompleted__
                           + 0x130);
          if ((bVar1 <= bVar19) &&
             (*(long *)(*(long *)(lVar18 + 200) + (ulong)bVar1 * 8 + -8) ==
              *(long *)Method_OVRTask_Awaiter<MRUK_LoadDeviceResult>_get_IsCompleted__)) {
            lVar18 = plVar21[10];
            if (*(int *)(*(long *)PTR_DAT_067c9fd0 + 0xe4) == 0) {
              thunk_FUN_02f6670c();
            }
            uVar10 = FUN_05060698(lVar18,0,0);
            *(undefined4 *)(unaff_x19 + 0x30) = uVar10;
            lVar18 = *plVar21;
            bVar19 = *(byte *)(lVar18 + 0x130);
          }
          bVar1 = *(byte *)(*(long *)
                             Method_OVRTask_Awaiter<OVRSceneManager_LoadSceneModelResult>_get_IsCompleted__
                           + 0x130);
          if ((bVar1 <= bVar19) &&
             (*(long *)(*(long *)(lVar18 + 200) + (ulong)bVar1 * 8 + -8) ==
              *(long *)
               Method_OVRTask_Awaiter<OVRSceneManager_LoadSceneModelResult>_get_IsCompleted__)) {
            lVar18 = plVar21[10];
            if (*(int *)(*(long *)PTR_DAT_067c9fd0 + 0xe4) == 0) {
              thunk_FUN_02f6670c();
            }
            uVar10 = FUN_05060698(lVar18,0,0);
            *(undefined4 *)(unaff_x19 + 0x34) = uVar10;
            lVar18 = *plVar21;
            bVar19 = *(byte *)(lVar18 + 0x130);
          }
          bVar1 = *(byte *)(*(long *)puVar6 + 0x130);
          if ((bVar1 <= bVar19) &&
             (*(long *)(*(long *)(lVar18 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)puVar6)) {
            lVar18 = plVar21[10];
            if (*(int *)(*(long *)PTR_DAT_067c9fd0 + 0xe4) == 0) {
              thunk_FUN_02f6670c();
            }
            uVar10 = FUN_05060698(lVar18,0,0);
            *(undefined4 *)(unaff_x19 + 0x38) = uVar10;
            lVar18 = *plVar21;
            bVar19 = *(byte *)(lVar18 + 0x130);
          }
          bVar1 = *(byte *)(*(long *)puVar9 + 0x130);
          if ((bVar1 <= bVar19) &&
             (*(long *)(*(long *)(lVar18 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)puVar9)) {
            *(long *)(unaff_x19 + 0x40) = plVar21[10];
            lVar18 = *plVar21;
            bVar19 = *(byte *)(lVar18 + 0x130);
          }
          bVar1 = *(byte *)(*(long *)puVar3 + 0x130);
          if ((bVar1 <= bVar19) &&
             (*(long *)(*(long *)(lVar18 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)puVar3)) {
            uVar12 = FUN_04f6ebb4(*(undefined8 *)(unaff_x19 + 0x70),0);
            if ((uVar12 & 1) == 0) {
              lVar18 = FUN_04f6f6b4(*(undefined8 *)(unaff_x19 + 0x70),
                                    *(undefined8 *)PTR_DAT_067cc628,plVar21[10],0);
            }
            else {
              lVar18 = plVar21[10];
            }
            *(long *)(unaff_x19 + 0x70) = lVar18;
            lVar18 = *plVar21;
            bVar19 = *(byte *)(lVar18 + 0x130);
          }
          bVar1 = *(byte *)(*(long *)puVar7 + 0x130);
          if ((bVar1 <= bVar19) &&
             (*(long *)(*(long *)(lVar18 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)puVar7)) {
            *(long *)(unaff_x19 + 0x60) = plVar21[10];
            lVar18 = *plVar21;
            bVar19 = *(byte *)(lVar18 + 0x130);
          }
          bVar1 = *(byte *)(*(long *)puVar8 + 0x130);
          if ((bVar1 <= bVar19) &&
             (*(long *)(*(long *)(lVar18 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)puVar8)) {
            *(long *)(unaff_x19 + 0x68) = plVar21[10];
            lVar18 = *plVar21;
            bVar19 = *(byte *)(lVar18 + 0x130);
          }
          bVar1 = *(byte *)(*(long *)puVar4 + 0x130);
          if ((bVar1 <= bVar19) &&
             (*(long *)(*(long *)(lVar18 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)puVar4)) {
            *(long *)(unaff_x19 + 0x50) = plVar21[10];
            lVar18 = *plVar21;
            bVar19 = *(byte *)(lVar18 + 0x130);
          }
          bVar1 = *(byte *)(*(long *)puVar5 + 0x130);
          if ((bVar1 <= bVar19) &&
             (*(long *)(*(long *)(lVar18 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)puVar5)) {
            *(long *)(unaff_x19 + 0x58) = plVar21[10];
          }
        }
      }
      plVar21 = (long *)thunk_FUN_02f45174(lVar17,*(undefined8 *)PTR_DAT_067c91b0);
      if (plVar21 != (long *)0x0) {
        lVar17 = *plVar21;
        uVar12 = (ulong)*(ushort *)(lVar17 + 0x12e);
        if (uVar12 != 0) {
          piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
          do {
            if (*(long *)(piVar20 + -2) == *(long *)puVar2) {
              puVar15 = (undefined8 *)(lVar17 + (long)*piVar20 * 0x10 + 0x138);
              goto LAB_055ae03c;
            }
            uVar12 = uVar12 - 1;
            piVar20 = piVar20 + 4;
          } while (uVar12 != 0);
        }
        puVar15 = (undefined8 *)FUN_02f421d0(plVar21,*(long *)puVar2,0);
LAB_055ae03c:
        (*(code *)*puVar15)(plVar21,puVar15[1]);
      }
LAB_055adaa4:
      if (*(int *)(*(long *)
                    UnityEngine_XR_Interaction_Toolkit_UI_CanvasOptimizer_CanvasState_GraphicRaycasterSettings_TypeInfo
                  + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      lVar17 = FUN_055b68ec();
      if (lVar17 != 0) {
        *(long *)(unaff_x19 + 0x48) = lVar17;
      }
      return;
    }
  }
LAB_055ae068:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


