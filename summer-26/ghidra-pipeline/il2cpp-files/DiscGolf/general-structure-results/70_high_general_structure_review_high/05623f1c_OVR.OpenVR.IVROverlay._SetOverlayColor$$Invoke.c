/*
FUNCTION_NAME: OVR.OpenVR.IVROverlay._SetOverlayColor$$Invoke
ENTRY_POINT: 05623f1c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_13;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void OVR_OpenVR_IVROverlay__SetOverlayColor__Invoke(void)

{
  int iVar1;
  undefined1 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long unaff_x19;
  long unaff_x20;
  undefined4 uVar11;
  
  FUN_02d965b8();
  FUN_02d965b8(System_Func<NetworkObject,_bool>_TypeInfo);
  FUN_02d965b8(System_Func<OVRBone,_bool>_TypeInfo);
  FUN_02d965b8(System_Func<OVRTelemetryMarker,_OVRTelemetryMarker>_TypeInfo);
  FUN_02d965b8(System_Func<object,_bool>_TypeInfo);
  FUN_02d965b8(System_Func<object,_IDeserializable>_TypeInfo);
  FUN_02d965b8(System_Func<object,_IDeserializable>_TypeInfo);
  FUN_02d965b8(System_Func<object,_IDeserializable>_TypeInfo);
  FUN_02d965b8(System_Func<object,_int>_TypeInfo);
  FUN_02d965b8(PTR_DAT_06a0e888);
  FUN_02d965b8(System_Func<object,_object>_TypeInfo);
  FUN_02d965b8(System_Func<object,_string>_TypeInfo);
  FUN_02d965b8(System_Func<object,_Type>_TypeInfo);
  FUN_02d965b8(System_Func<Object,_InstanceHandle>_TypeInfo);
  FUN_02d965b8(
              System_Func<OvrAvatarComputeSkinningVertexBuffer,_IEnumerator<OvrTime_SliceStep>>_TypeInfo
              );
  *(undefined1 *)(unaff_x20 + 0xa7d) = 1;
  puVar3 = System_Func<object,_Type>_TypeInfo;
  if (*(long *)(unaff_x19 + 0xe0) == 0) {
    lVar8 = 0;
    if (*(long *)(unaff_x19 + 0xe8) != 0) {
LAB_05624078:
      lVar7 = thunk_FUN_02dd3144(*(undefined8 *)puVar3);
      FUN_0568e2a4(lVar7,0);
      lVar10 = *(long *)(unaff_x19 + 0xe8);
      if ((lVar10 == 0) || (lVar7 == 0)) goto LAB_0562442c;
      *(undefined8 *)(lVar7 + 0x10) = *(undefined8 *)(lVar10 + 0x10);
      LeanTween__value();
      lVar10 = *(long *)(unaff_x19 + 0xe8);
      if (lVar10 == 0) goto LAB_0562442c;
      *(undefined8 *)(lVar7 + 0x18) = *(undefined8 *)(lVar10 + 0x28);
      LeanTween__value();
      if (lVar8 == 0) {
        lVar8 = thunk_FUN_02dd3144(*(undefined8 *)System_Func<object,_string>_TypeInfo);
        FUN_0568e69c(0,lVar8,0,lVar7,0);
      }
      else {
        uVar11 = *(undefined4 *)(unaff_x19 + 0x10c);
        lVar10 = thunk_FUN_02dd3144(*(undefined8 *)System_Func<object,_string>_TypeInfo);
        FUN_0568e69c(uVar11,lVar10,lVar8,lVar7,0);
        lVar8 = lVar10;
      }
      if (lVar8 != 0) goto LAB_056240f8;
    }
  }
  else {
    lVar7 = thunk_FUN_02dd3144(*(undefined8 *)System_Func<object,_Type>_TypeInfo);
    FUN_0568e2a4(lVar7,0);
    if ((*(long *)(unaff_x19 + 0xe0) == 0) || (lVar7 == 0)) goto LAB_0562442c;
    *(undefined8 *)(lVar7 + 0x10) = *(undefined8 *)(*(long *)(unaff_x19 + 0xe0) + 0x10);
    LeanTween__value();
    if (*(long *)(unaff_x19 + 0xe0) == 0) goto LAB_0562442c;
    *(undefined8 *)(lVar7 + 0x18) = *(undefined8 *)(*(long *)(unaff_x19 + 0xe0) + 0x28);
    LeanTween__value();
    lVar8 = lVar7;
    if (*(long *)(unaff_x19 + 0xe8) != 0) goto LAB_05624078;
    lVar8 = thunk_FUN_02dd3144(*(undefined8 *)System_Func<object,_string>_TypeInfo);
    FUN_0568e69c(0,lVar8,lVar7,0,0);
    if (lVar8 == 0) goto OVR_OpenVR_IVROverlay__GetOverlayAlpha___ctor;
LAB_056240f8:
    puVar6 = System_Func<object,_object>_TypeInfo;
    puVar5 = System_Func<NativeInputUpdateType,_bool>_TypeInfo;
    puVar4 = System_Func<NamedValue,_string>_TypeInfo;
    puVar3 = System_Func<NameAndParameters,_string>_TypeInfo;
    iVar1 = *(int *)(unaff_x19 + 0x128);
    uVar9 = *(undefined8 *)System_Func<object,_object>_TypeInfo;
    *(undefined1 *)(lVar8 + 0x3c) = *(undefined1 *)(unaff_x19 + 0xf8);
    uVar2 = *(undefined1 *)(unaff_x19 + 0xd9);
    *(bool *)(lVar8 + 0x3d) = iVar1 != 0;
    *(undefined1 *)(lVar8 + 0x3f) = uVar2;
    uVar9 = thunk_FUN_02dd3144(uVar9);
    FUN_0568e7f4();
    *(undefined8 *)(lVar8 + 0x40) = uVar9;
    LeanTween__value((undefined8 *)(lVar8 + 0x40),uVar9);
    uVar9 = thunk_FUN_02dd3144(*(undefined8 *)puVar6);
    FUN_0568e7f4();
    *(undefined8 *)(lVar8 + 0x48) = uVar9;
    LeanTween__value((undefined8 *)(lVar8 + 0x48),uVar9);
    uVar9 = thunk_FUN_02dd3144(*(undefined8 *)puVar4);
    FUN_0568e9a4();
    *(undefined8 *)(lVar8 + 0x50) = uVar9;
    LeanTween__value((undefined8 *)(lVar8 + 0x50),uVar9);
    uVar9 = thunk_FUN_02dd3144(*(undefined8 *)puVar5);
    FUN_0568eb08();
    *(undefined8 *)(lVar8 + 0x58) = uVar9;
    LeanTween__value((undefined8 *)(lVar8 + 0x58),uVar9);
    uVar9 = thunk_FUN_02dd3144(*(undefined8 *)puVar3);
    FUN_0568ec40();
    *(undefined8 *)(lVar8 + 0x60) = uVar9;
    LeanTween__value((undefined8 *)(lVar8 + 0x60),uVar9);
    uVar9 = thunk_FUN_02dd3144(*(undefined8 *)System_Func<MethodInfo,_bool>_TypeInfo);
    FUN_0568ed18();
    *(undefined8 *)(lVar8 + 0x68) = uVar9;
    LeanTween__value((undefined8 *)(lVar8 + 0x68),uVar9);
    uVar9 = thunk_FUN_02dd3144(*(undefined8 *)System_Func<MeshFilter,_bool>_TypeInfo);
    FUN_0568eea4();
    *(undefined8 *)(lVar8 + 0x70) = uVar9;
    LeanTween__value((undefined8 *)(lVar8 + 0x70),uVar9);
    uVar9 = thunk_FUN_02dd3144(*(undefined8 *)System_Func<MemberReferenceMap,_int>_TypeInfo);
    FUN_0568efe8();
    *(undefined8 *)(lVar8 + 0x78) = uVar9;
    LeanTween__value((undefined8 *)(lVar8 + 0x78),uVar9);
    *(undefined8 *)(lVar8 + 0x80) = *(undefined8 *)(unaff_x19 + 0x188);
    LeanTween__value();
  }
OVR_OpenVR_IVROverlay__GetOverlayAlpha___ctor:
  puVar3 = PTR_DAT_06a0e888;
  lVar7 = *(long *)(*(long *)PTR_DAT_06a0e888 + 0x20);
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_02dcfd18();
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_02dcfd18();
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 8);
  if (lVar7 != 0) {
    FUN_05687764(lVar7,*(undefined8 *)(unaff_x19 + 0x28),lVar8,0);
    lVar7 = *(long *)(*(long *)puVar3 + 0x20);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_02dcfd18();
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_02dcfd18();
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 8);
    if (lVar7 != 0) {
      lVar7 = *(long *)(lVar7 + 0x228);
      uVar9 = thunk_FUN_02dd3144(*(undefined8 *)System_Func<Object,_InstanceHandle>_TypeInfo);
      FUN_0494dca4();
      if (lVar7 != 0) {
        FUN_04953be4(lVar7,uVar9,
                     *(undefined8 *)
                      System_Func<OvrAvatarComputeSkinningVertexBuffer,_IEnumerator<OvrTime_SliceStep>>_TypeInfo
                    );
        *(undefined1 *)(unaff_x19 + 200) = 1;
        return;
      }
    }
  }
LAB_0562442c:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


