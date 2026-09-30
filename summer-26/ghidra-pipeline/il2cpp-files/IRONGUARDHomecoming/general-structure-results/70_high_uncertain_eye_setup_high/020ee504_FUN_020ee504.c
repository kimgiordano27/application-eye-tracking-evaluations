/*
FUNCTION_NAME: FUN_020ee504
ENTRY_POINT: 020ee504
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_10;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_020ee504(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  
  puVar9 = Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Append<int>__;
  puVar8 = Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Append<InputControlScheme>__;
  puVar7 = Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Append<InputBinding>__;
  puVar6 = Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Append<InputActionMap>__;
  puVar5 = Method_System_Array_FindIndex<OVRPlugin_BoneCapsule>__;
  puVar4 = Method_System_Array_FindIndex<string>__;
  puVar3 = Method_Unity_Collections_NativeArray<BoneWeight>__ctor__;
  puVar2 = Method_Unity_Collections_NativeArray<BezierKnot>_GetEnumerator__;
  puVar1 = Method_UnityEngine_UIElements_MouseEventBase<MouseOutEvent>__ctor__;
  if ((DAT_0482fadc & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<BezierKnot>_GetEnumerator__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Append<InternedString>__
                      );
    thunk_FUN_01efb3a4(Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Append<string>__);
    thunk_FUN_01efb3a4(Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Append<int>__);
    thunk_FUN_01efb3a4(Method_System_Array_FindIndex<OVRPlugin_BoneCapsule>__);
    thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_BaseField_UxmlTraits<int>__ctor__);
    thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_MouseEventBase<MouseOutEvent>_GetPooled__);
    thunk_FUN_01efb3a4(Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Append<InputBinding>__)
    ;
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<BoneWeight>__ctor__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Append<InputActionMap>__
                      );
    thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_MouseEventBase<MouseOutEvent>__ctor__);
    thunk_FUN_01efb3a4(Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Append<Vector2>__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Append<InputControlScheme_DeviceRequirement>__
                      );
    thunk_FUN_01efb3a4(Method_System_Array_FindIndex<string>__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Append<InputControlScheme>__
                      );
    thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_BaseField_UxmlTraits<Enum>_Init__);
    DAT_0482fadc = 1;
  }
  uVar10 = thunk_FUN_01f117cc(*(undefined8 *)puVar6);
  FUN_030f2380(uVar10,*(undefined8 *)puVar7);
  *(undefined8 *)(param_1 + 0x20) = uVar10;
  thunk_FUN_01f51358((undefined8 *)(param_1 + 0x20),uVar10);
  uVar10 = thunk_FUN_01f117cc(*(undefined8 *)puVar6);
  FUN_030f2380(uVar10,*(undefined8 *)puVar7);
  *(undefined8 *)(param_1 + 0x28) = uVar10;
  thunk_FUN_01f51358((undefined8 *)(param_1 + 0x28),uVar10);
  uVar10 = thunk_FUN_01f117cc(*(undefined8 *)puVar6);
  FUN_030f2380(uVar10,*(undefined8 *)puVar7);
  *(undefined8 *)(param_1 + 0x30) = uVar10;
  thunk_FUN_01f51358((undefined8 *)(param_1 + 0x30),uVar10);
  uVar10 = thunk_FUN_01f117cc(*(undefined8 *)puVar6);
  FUN_030f2380(uVar10,*(undefined8 *)puVar7);
  *(undefined8 *)(param_1 + 0x38) = uVar10;
  thunk_FUN_01f51358((undefined8 *)(param_1 + 0x38),uVar10);
  uVar10 = thunk_FUN_01f117cc(*(undefined8 *)puVar6);
  FUN_030f2380(uVar10,*(undefined8 *)puVar7);
  *(undefined8 *)(param_1 + 0x40) = uVar10;
  thunk_FUN_01f51358((undefined8 *)(param_1 + 0x40),uVar10);
  uVar10 = thunk_FUN_01f117cc(*(undefined8 *)puVar6);
  FUN_030f2380(uVar10,*(undefined8 *)puVar7);
  *(undefined8 *)(param_1 + 0x48) = uVar10;
  thunk_FUN_01f51358((undefined8 *)(param_1 + 0x48),uVar10);
  uVar10 = thunk_FUN_01f117cc(*(undefined8 *)puVar3);
  FUN_030ba0b0(uVar10,*(undefined8 *)puVar2);
  *(undefined8 *)(param_1 + 0x50) = uVar10;
  thunk_FUN_01f51358((undefined8 *)(param_1 + 0x50),uVar10);
  uVar10 = thunk_FUN_01f117cc(*(undefined8 *)puVar4);
  FUN_030f2380(uVar10,*(undefined8 *)puVar5);
  *(undefined8 *)(param_1 + 0x58) = uVar10;
  thunk_FUN_01f51358((undefined8 *)(param_1 + 0x58),uVar10);
  uVar10 = thunk_FUN_01f117cc(*(undefined8 *)puVar3);
  FUN_030ba0b0(uVar10,*(undefined8 *)puVar2);
  *(undefined8 *)(param_1 + 0x60) = uVar10;
  thunk_FUN_01f51358((undefined8 *)(param_1 + 0x60),uVar10);
  uVar10 = thunk_FUN_01f117cc(*(undefined8 *)puVar8);
  FUN_03182108(uVar10,*(undefined8 *)puVar9);
  *(undefined8 *)(param_1 + 0x68) = uVar10;
  thunk_FUN_01f51358((undefined8 *)(param_1 + 0x68),uVar10);
  uVar10 = thunk_FUN_01f117cc(*(undefined8 *)puVar1);
  FUN_030f2380(uVar10,*(undefined8 *)
                       Method_UnityEngine_UIElements_MouseEventBase<MouseOutEvent>_GetPooled__);
  *(undefined8 *)(param_1 + 0x70) = uVar10;
  thunk_FUN_01f51358((undefined8 *)(param_1 + 0x70),uVar10);
  uVar10 = thunk_FUN_01f117cc(*(undefined8 *)puVar4);
  FUN_030f2380(uVar10,*(undefined8 *)puVar5);
  *(undefined8 *)(param_1 + 0x78) = uVar10;
  thunk_FUN_01f51358((undefined8 *)(param_1 + 0x78),uVar10);
  uVar10 = thunk_FUN_01f117cc(*(undefined8 *)
                               Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Append<Vector2>__
                             );
  FUN_030f2380(uVar10,*(undefined8 *)
                       Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Append<string>__);
  *(undefined8 *)(param_1 + 0x80) = uVar10;
  thunk_FUN_01f51358((undefined8 *)(param_1 + 0x80),uVar10);
  uVar10 = thunk_FUN_01f117cc(*(undefined8 *)puVar3);
  FUN_030ba0b0(uVar10,*(undefined8 *)puVar2);
  *(undefined8 *)(param_1 + 0x88) = uVar10;
  thunk_FUN_01f51358((undefined8 *)(param_1 + 0x88),uVar10);
  uVar10 = thunk_FUN_01f117cc(*(undefined8 *)
                               Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Append<InputControlScheme_DeviceRequirement>__
                             );
  FUN_030f2380(uVar10,*(undefined8 *)
                       Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Append<InternedString>__
              );
  *(undefined8 *)(param_1 + 0x90) = uVar10;
  thunk_FUN_01f51358((undefined8 *)(param_1 + 0x90),uVar10);
  uVar10 = thunk_FUN_01f117cc(*(undefined8 *)puVar3);
  FUN_030ba0b0(uVar10,*(undefined8 *)puVar2);
  *(undefined8 *)(param_1 + 0x98) = uVar10;
  thunk_FUN_01f51358((undefined8 *)(param_1 + 0x98),uVar10);
  uVar10 = thunk_FUN_01f117cc(*(undefined8 *)puVar8);
  FUN_03182108(uVar10,*(undefined8 *)puVar9);
  *(undefined8 *)(param_1 + 0xa0) = uVar10;
  thunk_FUN_01f51358((undefined8 *)(param_1 + 0xa0),uVar10);
  uVar10 = thunk_FUN_01f117cc(*(undefined8 *)
                               Method_UnityEngine_UIElements_BaseField_UxmlTraits<Enum>_Init__);
  FUN_030f2380(uVar10,*(undefined8 *)Method_UnityEngine_UIElements_BaseField_UxmlTraits<int>__ctor__
              );
  *(undefined8 *)(param_1 + 0xa8) = uVar10;
  thunk_FUN_01f51358((undefined8 *)(param_1 + 0xa8),uVar10);
  uVar10 = thunk_FUN_01f117cc(*(undefined8 *)puVar3);
  FUN_030ba0b0(uVar10,*(undefined8 *)puVar2);
  *(undefined8 *)(param_1 + 0xb0) = uVar10;
  thunk_FUN_01f51358((undefined8 *)(param_1 + 0xb0),uVar10);
  thunk_FUN_0406f928(param_1,0);
  return;
}


