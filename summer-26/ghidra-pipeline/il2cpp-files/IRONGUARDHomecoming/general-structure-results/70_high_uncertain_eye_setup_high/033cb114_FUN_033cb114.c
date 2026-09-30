/*
FUNCTION_NAME: FUN_033cb114
ENTRY_POINT: 033cb114
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_033cb114(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  puVar4 = Method_Oculus_Platform_Models_HttpTransferUpdate__ctor__;
  puVar3 = Method_UnityEngine_UIElements_BaseField_UxmlTraits<int>__ctor__;
  puVar2 = Method_UnityEngine_UIElements_BaseField_UxmlTraits<Enum>_Init__;
  if ((DAT_048324b9 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_BaseField_UxmlTraits<Vector2Int>__ctor__);
    thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_BaseField_UxmlTraits<int>__ctor__);
    thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_BaseField_UxmlTraits<Enum>_Init__);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Models_HttpTransferUpdate__ctor__);
    thunk_FUN_01efb3a4(
                      Method_System_Runtime_InteropServices_Marshal_PtrToStructure<UnityTls_unitytls_interface_struct>__
                      );
    thunk_FUN_01efb3a4(
                      Method_System_Runtime_InteropServices_Marshal_PtrToStructure<OVRPlugin_GUID>__
                      );
    DAT_048324b9 = 1;
  }
  *(undefined4 *)(param_1 + 0x98) = 10000;
  uVar5 = thunk_FUN_01f117cc(*(undefined8 *)puVar4);
  FUN_0339fd14(uVar5,0);
  *(undefined8 *)(param_1 + 0xa0) = uVar5;
  thunk_FUN_01f51358((undefined8 *)(param_1 + 0xa0),uVar5);
  *(undefined1 *)(param_1 + 0xa9) = 1;
  lVar6 = thunk_FUN_01f117cc(*(undefined8 *)puVar2);
  FUN_030f2380(lVar6,*(undefined8 *)puVar3);
  puVar2 = Method_UnityEngine_UIElements_BaseField_UxmlTraits<Vector2Int>__ctor__;
  if (lVar6 != 0) {
    uVar5 = *(undefined8 *)
             Method_System_Runtime_InteropServices_Marshal_PtrToStructure<UnityTls_unitytls_interface_struct>__
    ;
    lVar7 = *(long *)(lVar6 + 0x10);
    lVar8 = *(long *)Method_UnityEngine_UIElements_BaseField_UxmlTraits<Vector2Int>__ctor__;
    *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
    puVar3 = Method_System_Runtime_InteropServices_Marshal_PtrToStructure<OVRPlugin_GUID>__;
    if (lVar7 != 0) {
      uVar1 = *(uint *)(lVar6 + 0x18);
      if (uVar1 < *(uint *)(lVar7 + 0x18)) {
        *(uint *)(lVar6 + 0x18) = uVar1 + 1;
        *(undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar5;
        thunk_FUN_01f51358();
      }
      else {
        FUN_030f2bb4(lVar6,uVar5,*(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
      }
      uVar5 = *(undefined8 *)puVar3;
      lVar7 = *(long *)(lVar6 + 0x10);
      lVar8 = *(long *)puVar2;
      *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
      if (lVar7 != 0) {
        uVar1 = *(uint *)(lVar6 + 0x18);
        if (uVar1 < *(uint *)(lVar7 + 0x18)) {
          *(uint *)(lVar6 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar5;
          thunk_FUN_01f51358();
        }
        else {
          FUN_030f2bb4(lVar6,uVar5,*(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70)
                      );
        }
        *(long *)(param_1 + 0xb8) = lVar6;
        thunk_FUN_01f51358((long *)(param_1 + 0xb8),lVar6);
        FUN_040748ac(param_1,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


