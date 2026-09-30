/*
FUNCTION_NAME: OVRManager$$remove_AudioOutChanged
ENTRY_POINT: 03664394
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 99
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_8;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__remove_AudioOutChanged(void)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  int iVar4;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar5;
  ulong unaff_x21;
  undefined8 *puVar6;
  ulong unaff_x23;
  undefined8 uVar7;
  float fVar8;
  undefined8 uVar9;
  
  thunk_FUN_01efb3a4();
  thunk_FUN_01efb3a4(Method_System_Collections_ListDictionaryInternal_NodeEnumerator_Reset__);
  thunk_FUN_01efb3a4(Method_System_Collections_ListDictionaryInternal_NodeEnumerator_get_Entry__);
  thunk_FUN_01efb3a4(Method_System_Collections_ListDictionaryInternal_NodeEnumerator_get_Key__);
  thunk_FUN_01efb3a4(Method_Unity_VisualScripting_LessThanOrEqualHandler_<>c_<_ctor>b__0_98__);
  thunk_FUN_01efb3a4(Method_System_Collections_ListDictionaryInternal_NodeEnumerator_get_Value__);
  thunk_FUN_01efb3a4(
                    Method_System_Collections_ListDictionaryInternal_NodeKeyValueCollection_System_Collections_ICollection_CopyTo__
                    );
  thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_Internal_ColumnMover_OnPointerCancel__);
  thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__);
  *(undefined1 *)(unaff_x20 + 0xd15) = 1;
  if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar5 = *(undefined8 *)(unaff_x19 + 0x50);
  if ((unaff_x23 & 1) != 0) {
    *(undefined1 *)(unaff_x19 + 0xf8) = 1;
    if (DAT_0482ee9c == '\0') {
      thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<float4>_Dispose__);
      DAT_0482ee9c = '\x01';
    }
    uVar9 = **(undefined8 **)
              (*(long *)Method_Unity_Collections_NativeArray<float4>_Dispose__ + 0xb8);
    *(undefined2 *)(unaff_x19 + 0x144) = 1;
    *(undefined8 *)(unaff_x19 + 0x10c) = uVar9;
    *(undefined8 *)(unaff_x19 + 0x114) = *(undefined8 *)(unaff_x19 + 0x104);
    memcpy((void *)(unaff_x19 + 0xa0),(void *)(unaff_x19 + 0x50),0x50);
    thunk_FUN_01f51358((void *)(unaff_x19 + 0xa0),0);
    FUN_04291688();
    puVar1 = Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__;
    uVar9 = *(undefined8 *)(unaff_x19 + 0x20);
    if (*(int *)(*(long *)Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__ + 0xe0) ==
        0) {
      thunk_FUN_01ee6d7c();
    }
    uVar3 = FUN_04073094(uVar9,uVar5,0);
    if ((uVar3 & 1) != 0) {
      FUN_0428f708();
      *(undefined8 *)(unaff_x19 + 0x20) = uVar5;
      thunk_FUN_01f51358((undefined8 *)(unaff_x19 + 0x20),uVar5);
    }
    puVar2 = Method_UnityEngine_UIElements_Internal_ColumnMover_OnPointerCancel__;
    if (*(int *)(*(long *)Method_UnityEngine_UIElements_Internal_ColumnMover_OnPointerCancel__ +
                0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    if (DAT_04833e09 == '\0') {
      thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_Internal_ColumnMover_OnPointerCancel__);
      DAT_04833e09 = '\x01';
    }
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar9 = FUN_023107ac(uVar5);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(*(long *)puVar1);
    }
    uVar3 = UnityEngine_UIElements_UIR_Implementation_UIRStylePainter__BuildEntryFromNativeMesh
                      (uVar9,0,0);
    if ((uVar3 & 1) != 0) {
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar9 = FUN_02310a68(uVar5,*(undefined8 *)
                                  Method_System_Collections_ListDictionaryInternal_NodeKeyValueCollection_System_Collections_ICollection_CopyTo__
                          );
    }
    fVar8 = (float)FUN_0407a364(0);
    uVar7 = *(undefined8 *)(unaff_x19 + 0x30);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar3 = UnityEngine_UIElements_UIR_Implementation_UIRStylePainter__BuildEntryFromNativeMesh
                      (uVar9,uVar7,0);
    if ((uVar3 & 1) == 0) {
      *(undefined4 *)(unaff_x19 + 0x138) = 1;
    }
    else {
      if (DAT_00c92aac <= fVar8 - *(float *)(unaff_x19 + 0x134)) {
        iVar4 = 1;
      }
      else {
        iVar4 = *(int *)(unaff_x19 + 0x138) + 1;
      }
      *(int *)(unaff_x19 + 0x138) = iVar4;
      *(float *)(unaff_x19 + 0x134) = fVar8;
    }
    FUN_0428a224();
    *(undefined8 *)(unaff_x19 + 0x38) = uVar5;
    thunk_FUN_01f51358((undefined8 *)(unaff_x19 + 0x38),uVar5);
    *(float *)(unaff_x19 + 0x134) = fVar8;
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar9 = FUN_02310a68(uVar5,*(undefined8 *)
                                Method_System_Collections_ListDictionaryInternal_NodeEnumerator_get_Value__
                        );
    puVar6 = (undefined8 *)(unaff_x19 + 0x40);
    *puVar6 = uVar9;
    thunk_FUN_01f51358(puVar6,uVar9);
    uVar9 = *puVar6;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar3 = FUN_04073094(uVar9,0,0);
    if ((uVar3 & 1) != 0) {
      uVar9 = *puVar6;
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      if (DAT_04833e0a == '\0') {
        thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_Internal_ColumnMover_OnPointerCancel__);
        DAT_04833e0a = '\x01';
      }
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      FUN_0230ff8c(uVar9);
    }
  }
  puVar1 = Method_UnityEngine_UIElements_Internal_ColumnMover_OnPointerCancel__;
  if ((unaff_x21 & 1) != 0) {
    uVar9 = *(undefined8 *)(unaff_x19 + 0x28);
    if (*(int *)(*(long *)Method_UnityEngine_UIElements_Internal_ColumnMover_OnPointerCancel__ +
                0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    if (DAT_04833e0b == '\0') {
      thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_Internal_ColumnMover_OnPointerCancel__);
      DAT_04833e0b = '\x01';
    }
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    FUN_0230ff8c(uVar9);
    uVar9 = FUN_02310a68(uVar5,*(undefined8 *)
                                Method_System_Collections_ListDictionaryInternal_NodeKeyValueCollection_System_Collections_ICollection_CopyTo__
                        );
    puVar2 = Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__;
    uVar7 = *(undefined8 *)(unaff_x19 + 0x28);
    if (*(int *)(*(long *)Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__ + 0xe0) ==
        0) {
      thunk_FUN_01ee6d7c(*(long *)Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__);
    }
    uVar3 = UnityEngine_UIElements_UIR_Implementation_UIRStylePainter__BuildEntryFromNativeMesh
                      (uVar7,uVar9,0);
    if (((uVar3 & 1) != 0) && (*(char *)(unaff_x19 + 0xf8) != '\0')) {
      uVar9 = *(undefined8 *)(unaff_x19 + 0x28);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      if (DAT_04833e0c == '\0') {
        thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_Internal_ColumnMover_OnPointerCancel__);
        DAT_04833e0c = '\x01';
      }
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      FUN_0230ff8c(uVar9);
    }
    puVar6 = (undefined8 *)(unaff_x19 + 0x40);
    uVar9 = *puVar6;
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar3 = FUN_04073094(uVar9,0,0);
    if (((uVar3 & 1) != 0) && (*(char *)(unaff_x19 + 0x145) != '\0')) {
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      if (DAT_04833e0d == '\0') {
        thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_Internal_ColumnMover_OnPointerCancel__);
        DAT_04833e0d = '\x01';
      }
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      FUN_023107ac(uVar5);
    }
    *(undefined1 *)(unaff_x19 + 0xf8) = 0;
    FUN_0428a224();
    *(undefined8 *)(unaff_x19 + 0x38) = 0;
    thunk_FUN_01f51358((undefined8 *)(unaff_x19 + 0x38),0);
    uVar5 = *(undefined8 *)(unaff_x19 + 0x40);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar3 = FUN_04073094(uVar5,0,0);
    if (((uVar3 & 1) != 0) && (*(char *)(unaff_x19 + 0x145) != '\0')) {
      uVar5 = *puVar6;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      if (DAT_04833e0e == '\0') {
        thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_Internal_ColumnMover_OnPointerCancel__);
        DAT_04833e0e = '\x01';
      }
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      FUN_0230ff8c(uVar5);
    }
    *(undefined1 *)(unaff_x19 + 0x145) = 0;
    *(undefined8 *)(unaff_x19 + 0x40) = 0;
    thunk_FUN_01f51358(puVar6,0);
    uVar5 = *(undefined8 *)(unaff_x19 + 0x20);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    if (DAT_04833e0f == '\0') {
      thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_Internal_ColumnMover_OnPointerCancel__);
      DAT_04833e0f = '\x01';
    }
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    FUN_023107ac(uVar5);
    *(undefined8 *)(unaff_x19 + 0x20) = 0;
    thunk_FUN_01f51358((undefined8 *)(unaff_x19 + 0x20),0);
    return;
  }
  return;
}


