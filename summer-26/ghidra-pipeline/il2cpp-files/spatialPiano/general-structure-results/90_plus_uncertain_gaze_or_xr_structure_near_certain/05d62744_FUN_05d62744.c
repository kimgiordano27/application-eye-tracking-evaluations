/*
FUNCTION_NAME: FUN_05d62744
ENTRY_POINT: 05d62744
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 107
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05d62b64) */

void FUN_05d62744(long param_1,long param_2)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  int *piVar9;
  undefined8 uVar10;
  float fVar11;
  long local_48;
  
  if ((DAT_06bc3955 & 1) == 0) {
    FUN_02f08768(Method_UnityEngine_Object_FindAnyObjectByType<ARGestureInteractor>__);
    FUN_02f08768(Method_System_Net_Sockets_NetworkStream_set_WriteTimeout__);
    FUN_02f08768(
                Method_UnityEngine_TextCore_Text_FontAsset_InitializeLookup<MarkToBaseAdjustmentRecord>__
                );
    FUN_02f08768(PTR_DAT_067c91b0);
    FUN_02f08768(Method_UnityEngine_Object_FindAnyObjectByType<ARSession>__);
    FUN_02f08768(Method_UnityEngine_Object_FindAnyObjectByType<EventSystem>__);
    FUN_02f08768(Method_OVRSpatialAnchor_ShareAsync__);
    FUN_02f08768(Method_UnityEngine_Object_FindAnyObjectByType<OVRCameraRig>__);
    FUN_02f08768(Method_UnityEngine_Object_FindAnyObjectByType<OVRManager>__);
    FUN_02f08768(Method_OVRVirtualKeyboardInputFieldTextHandler_ProxyOnValueChanged__);
    FUN_02f08768(Method_Unity_Collections_DataStreamReader_CheckBits__);
    FUN_02f08768(Method_OVRVirtualKeyboardSampleControls_DestroyKeyboard__);
    FUN_02f08768(Method_UnityEngine_Object_FindAnyObjectByType<OVRSceneManager>__);
    DAT_06bc3955 = 1;
  }
  local_48 = 0;
  if (((*(long *)(param_1 + 0x138) != 0) &&
      (lVar3 = FUN_05d4c208(*(long *)(param_1 + 0x138),
                            *(undefined8 *)
                             Method_System_Net_Sockets_NetworkStream_set_WriteTimeout__), lVar3 != 0
      )) && (*(long *)(lVar3 + 0x1a0) != 0)) {
    uVar4 = FUN_05c35d3c(*(long *)(lVar3 + 0x1a0),0);
    if ((uVar4 & 1) == 0) {
      return;
    }
    if (*(int *)(*(long *)Method_Unity_Collections_DataStreamReader_CheckBits__ + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    fVar11 = (float)FUN_05c3c0ec(0);
    lVar5 = FUN_05d6a67c(lVar3,0);
    puVar2 = Method_UnityEngine_Object_FindAnyObjectByType<EventSystem>__;
    if (*(int *)(*(long *)Method_UnityEngine_Object_FindAnyObjectByType<EventSystem>__ + 0xe4) == 0)
    {
      thunk_FUN_02f6670c(*(long *)Method_UnityEngine_Object_FindAnyObjectByType<EventSystem>__);
    }
    if (DAT_06bc3979 == '\0') {
      FUN_02f08768(Method_UnityEngine_Object_FindAnyObjectByType<EventSystem>__);
      DAT_06bc3979 = '\x01';
    }
    lVar6 = *(long *)puVar2;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
      lVar6 = *(long *)puVar2;
    }
    puVar2 = Method_OVRSpatialAnchor_ShareAsync__;
    if (lVar5 != 0) {
      iVar1 = *(int *)(*(long *)Method_OVRSpatialAnchor_ShareAsync__ + 0xe4);
      *(bool *)(lVar5 + 0x747) = fVar11 == 1.0 || *(char *)(*(long *)(lVar6 + 0xb8) + 8) == '\0';
      if (iVar1 == 0) {
        thunk_FUN_02f6670c();
      }
      if (param_2 != 0) {
        plVar7 = (long *)FUN_03523990(param_2,*(undefined8 *)
                                               Method_UnityEngine_Object_FindAnyObjectByType<OVRSceneManager>__
                                      ,&local_48,
                                      *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x88),
                                      *(undefined8 *)
                                       Method_OVRVirtualKeyboardSampleControls_DestroyKeyboard__,
                                      0x469,*(undefined8 *)
                                             Method_UnityEngine_Object_FindAnyObjectByType<OVRCameraRig>__
                                     );
        if (local_48 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        *(long *)(local_48 + 0x10) = lVar3;
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        lVar3 = *plVar7;
        uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar4 != 0) {
          piVar9 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) ==
                *(long *)
                 Method_UnityEngine_TextCore_Text_FontAsset_InitializeLookup<MarkToBaseAdjustmentRecord>__
               ) {
              puVar8 = (undefined8 *)(lVar3 + (long)(*piVar9 + 0xc) * 0x10 + 0x138);
              goto LAB_05d629c4;
            }
            uVar4 = uVar4 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar4 != 0);
        }
        puVar8 = (undefined8 *)
                 FUN_02f421d0(plVar7,*(long *)
                                      Method_UnityEngine_TextCore_Text_FontAsset_InitializeLookup<MarkToBaseAdjustmentRecord>__
                              ,0xc);
LAB_05d629c4:
        (*(code *)*puVar8)(plVar7,1,puVar8[1]);
        puVar2 = Method_OVRVirtualKeyboardInputFieldTextHandler_ProxyOnValueChanged__;
        lVar3 = *(long *)Method_OVRVirtualKeyboardInputFieldTextHandler_ProxyOnValueChanged__;
        if (*(int *)(lVar3 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
          lVar3 = *(long *)puVar2;
        }
        puVar8 = *(undefined8 **)(lVar3 + 0xb8);
        lVar5 = puVar8[4];
        if (lVar5 == 0) {
          if (*(int *)(lVar3 + 0xe4) == 0) {
            thunk_FUN_02f6670c();
            puVar8 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
          }
          uVar10 = *puVar8;
          lVar5 = thunk_FUN_02f45270(*(undefined8 *)
                                      Method_UnityEngine_Object_FindAnyObjectByType<ARGestureInteractor>__
                                    );
          FUN_04237db8(lVar5,uVar10,
                       *(undefined8 *)Method_UnityEngine_Object_FindAnyObjectByType<OVRManager>__,0)
          ;
          *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x20) = lVar5;
        }
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        lVar3 = *plVar7;
        lVar6 = *(long *)Method_UnityEngine_Object_FindAnyObjectByType<ARSession>__;
        uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar4 != 0) {
          piVar9 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)(lVar6 + 0x20)) {
              lVar3 = lVar3 + (long)(int)(*piVar9 + (uint)*(ushort *)(lVar6 + 0x50)) * 0x10 + 0x138;
              goto LAB_05d62ab0;
            }
            uVar4 = uVar4 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar4 != 0);
        }
        lVar3 = FUN_02f421d0(plVar7);
LAB_05d62ab0:
        lVar3 = thunk_FUN_02f2742c(*(undefined8 *)(lVar3 + 8),lVar6);
        (**(code **)(lVar3 + 8))(plVar7,lVar5,lVar3);
        if (plVar7 == (long *)0x0) {
          return;
        }
        lVar3 = *plVar7;
        uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar4 != 0) {
          piVar9 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_067c91b0) {
              puVar8 = (undefined8 *)(lVar3 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_05d62b34;
            }
            uVar4 = uVar4 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar4 != 0);
        }
        puVar8 = (undefined8 *)FUN_02f421d0(plVar7,*(long *)PTR_DAT_067c91b0,0);
LAB_05d62b34:
        (*(code *)*puVar8)(plVar7,puVar8[1]);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


