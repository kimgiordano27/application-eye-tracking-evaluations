/*
FUNCTION_NAME: FUN_05d33330
ENTRY_POINT: 05d33330
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_05d33330(void)

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
  undefined *puVar10;
  undefined *puVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  undefined4 local_68;
  undefined4 local_64;
  
  puVar9 = Method_System_Runtime_InteropServices_Marshal_SecureStringGlobalAllocator__;
  puVar8 = Method_System_Runtime_InteropServices_Marshal_GetFunctionPointerForDelegate__;
  puVar7 = Method_System_Runtime_InteropServices_Marshal_GetDelegateForFunctionPointer__;
  puVar6 = Method_System_Runtime_InteropServices_Marshal_GetCustomMarshalerInstance__;
  puVar5 = Method_System_Runtime_InteropServices_Marshal_UnsafeAddrOfPinnedArrayElement<byte>__;
  puVar4 = Method_System_Runtime_InteropServices_Marshal_StructureToPtr<OVRNetwork_FrameHeader>__;
  puVar3 = Method_System_Runtime_InteropServices_Marshal_SizeOf<OVRPlugin_Mesh>__;
  puVar2 = Method_System_Runtime_InteropServices_Marshal_SizeOf<TransformUpdatePacket>__;
  puVar1 = PTR_DAT_067cb890;
  if ((DAT_06bc3783 & 1) == 0) {
    FUN_02f08768(PTR_DAT_067cb890);
    FUN_02f08768(Method_System_Runtime_InteropServices_Marshal_SizeOf<TransformUpdatePacket>__);
    FUN_02f08768(Method_System_Runtime_InteropServices_Marshal_SecureStringToBSTR__);
    FUN_02f08768(Method_System_Runtime_InteropServices_Marshal_SecureStringToGlobalAllocUnicode__);
    FUN_02f08768(
                Method_System_Runtime_InteropServices_Marshal_UnsafeAddrOfPinnedArrayElement<byte>__
                );
    FUN_02f08768(Method_System_Runtime_InteropServices_Marshal_SecureStringToUnicode__);
    FUN_02f08768(Method_System_Runtime_InteropServices_Marshal_SizeOf<OVRPlugin_Mesh>__);
    FUN_02f08768(
                Method_System_Runtime_InteropServices_Marshal_StructureToPtr<OVRNetwork_FrameHeader>__
                );
    FUN_02f08768(Method_System_Runtime_InteropServices_Marshal_SecureStringGlobalAllocator__);
    FUN_02f08768(Method_System_Runtime_InteropServices_Marshal_GetCustomMarshalerInstance__);
    FUN_02f08768(Method_System_Runtime_InteropServices_Marshal_GetDelegateForFunctionPointer__);
    FUN_02f08768(Method_System_MarshalByRefObject_CreateObjRef__);
    FUN_02f08768(Method_System_Runtime_InteropServices_Marshal_GetFunctionPointerForDelegate__);
    DAT_06bc3783 = 1;
  }
  puVar11 = Method_System_Runtime_InteropServices_Marshal_SecureStringToUnicode__;
  puVar10 = Method_System_Runtime_InteropServices_Marshal_SecureStringToBSTR__;
  uVar12 = FUN_060ba26c(*(undefined8 *)puVar3,0);
  uVar13 = *(undefined8 *)puVar4;
  **(undefined4 **)(*(long *)puVar2 + 0xb8) = uVar12;
  uVar12 = FUN_060ba26c(uVar13,0);
  uVar13 = *(undefined8 *)puVar5;
  *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 4) = uVar12;
  uVar12 = FUN_060ba26c(uVar13,0);
  uVar13 = *(undefined8 *)puVar6;
  *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 8) = uVar12;
  uVar12 = FUN_060ba26c(uVar13,0);
  uVar13 = *(undefined8 *)puVar7;
  *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0xc) = uVar12;
  uVar12 = FUN_060ba26c(uVar13,0);
  uVar13 = *(undefined8 *)puVar8;
  *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10) = uVar12;
  uVar12 = FUN_060ba26c(uVar13,0);
  uVar13 = *(undefined8 *)puVar9;
  *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x14) = uVar12;
  uVar12 = FUN_060ba26c(uVar13,0);
  puVar3 = Method_System_Runtime_InteropServices_Marshal_SecureStringToGlobalAllocUnicode__;
  *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x18) = uVar12;
  uVar12 = FUN_060ba26c(*(undefined8 *)puVar3,0);
  puVar3 = Method_System_MarshalByRefObject_CreateObjRef__;
  *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x1c) = uVar12;
  uVar12 = FUN_060ba26c(*(undefined8 *)puVar3,0);
  uVar13 = *(undefined8 *)puVar1;
  *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x20) = uVar12;
  uVar13 = FUN_02f0880c(uVar13,0x10);
  uVar14 = *(undefined8 *)puVar1;
  *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x28) = uVar13;
  uVar13 = FUN_02f0880c(uVar14,0x10);
  puVar1 = PTR_DAT_067c9338;
  uVar16 = 0;
  *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x30) = uVar13;
  while( true ) {
    lVar17 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x28);
    local_64 = (int)uVar16;
    uVar13 = thunk_FUN_02f44ec4(*(undefined8 *)(puVar1 + 0x48),&local_64);
    uVar13 = FUN_04f65e2c(*(undefined8 *)puVar10,uVar13,0);
    uVar12 = FUN_060ba26c(uVar13,0);
    if (lVar17 == 0) break;
    if (*(uint *)(lVar17 + 0x18) <= uVar16) {
LAB_05d33670:
                    /* WARNING: Subroutine does not return */
      FUN_02f089d0();
    }
    lVar15 = *(long *)(*(long *)puVar2 + 0xb8);
    *(undefined4 *)(lVar17 + uVar16 * 4 + 0x20) = uVar12;
    lVar17 = *(long *)(lVar15 + 0x30);
    local_68 = (int)uVar16;
    uVar13 = thunk_FUN_02f44ec4(*(undefined8 *)(puVar1 + 0x48),&local_68);
    uVar13 = FUN_04f65e2c(*(undefined8 *)puVar11,uVar13,0);
    uVar12 = FUN_060ba26c(uVar13,0);
    if (lVar17 == 0) break;
    if (*(uint *)(lVar17 + 0x18) <= uVar16) goto LAB_05d33670;
    lVar15 = uVar16 * 4;
    uVar16 = uVar16 + 1;
    *(undefined4 *)(lVar17 + lVar15 + 0x20) = uVar12;
    if (uVar16 == 0x10) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


