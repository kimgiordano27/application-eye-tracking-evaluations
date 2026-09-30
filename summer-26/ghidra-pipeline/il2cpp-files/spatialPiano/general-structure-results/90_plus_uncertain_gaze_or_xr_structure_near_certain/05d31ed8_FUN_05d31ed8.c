/*
FUNCTION_NAME: FUN_05d31ed8
ENTRY_POINT: 05d31ed8
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 95
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_4;frame_or_lifecycle_behavior;functionality_gaze_retrieval_or_extraction
*/


void FUN_05d31ed8(long param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  undefined1 auStack_13c [108];
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  
  puVar3 = 
  Method_System_Runtime_InteropServices_Marshal_PtrToStructure<UnityTls_unitytls_interface_struct>__
  ;
  if ((DAT_06bc3779 & 1) == 0) {
    FUN_02f08768(PTR_DAT_067cf750);
    FUN_02f08768(Method_System_Runtime_InteropServices_Marshal_PtrToStructure<OVRPlugin_GUID>__);
    FUN_02f08768(Method_System_Runtime_InteropServices_Marshal_PtrToStructure<OVRPlugin_Mesh>__);
    FUN_02f08768(Method_System_Runtime_InteropServices_Marshal_SizeOf<IndirectDrawInfo>__);
    FUN_02f08768(Method_System_Runtime_InteropServices_Marshal_SizeOf<IndirectInstanceInfo>__);
    FUN_02f08768(Method_Newtonsoft_Json_Linq_JContainer_ValidateToken__);
    FUN_02f08768(Method_System_Runtime_InteropServices_Marshal_SizeOf<Matrix4x4>__);
    FUN_02f08768(Method_System_Runtime_InteropServices_Marshal_SizeOf<SHUpdatePacket>__);
    FUN_02f08768(
                Method_System_Runtime_InteropServices_Marshal_PtrToStructure<UnityTls_unitytls_interface_struct>__
                );
    FUN_02f08768(Method_System_Runtime_InteropServices_Marshal_SizeOf<float>__);
    DAT_06bc3779 = 1;
  }
  puVar4 = Method_System_Runtime_InteropServices_Marshal_SizeOf<IndirectInstanceInfo>__;
  puVar2 = PTR_DAT_067cf750;
  local_68 = 0;
  FUN_05116b38(param_1,0);
  lVar8 = *(long *)puVar3;
  uVar1 = *(undefined1 *)((long)param_2 + 9);
  *(undefined8 *)(param_1 + 0x18) = param_4;
  *(undefined8 *)(param_1 + 0x20) = param_3;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  uVar9 = FUN_05d321e0(uVar1,param_2);
  local_70 = 0;
  *(undefined8 *)(param_1 + 0x30) = uVar9;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  FUN_05d32598(&local_d0);
  memcpy((void *)(param_1 + 0x38),&local_d0,0x68);
  local_68 = *param_2;
  uVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
  FUN_05d2be48();
  *(undefined8 *)(param_1 + 0x28) = uVar9;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  FUN_05d1b14c((undefined8 *)(param_1 + 0xa0),param_4,0);
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  FUN_05d1ba60((undefined8 *)(param_1 + 0xe0),param_4,0);
  lVar8 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
  FUN_0611c470(lVar8,0);
  *(long *)(param_1 + 0xf0) = lVar8;
  puVar6 = Method_System_Runtime_InteropServices_Marshal_SizeOf<SHUpdatePacket>__;
  puVar5 = Method_System_Runtime_InteropServices_Marshal_SizeOf<Matrix4x4>__;
  puVar4 = Method_System_Runtime_InteropServices_Marshal_SizeOf<IndirectDrawInfo>__;
  puVar2 = Method_System_Runtime_InteropServices_Marshal_PtrToStructure<OVRPlugin_Mesh>__;
  puVar3 = Method_Newtonsoft_Json_Linq_JContainer_ValidateToken__;
  if (lVar8 != 0) {
    FUN_06113638(lVar8,*(undefined8 *)Method_System_Runtime_InteropServices_Marshal_SizeOf<float>__,
                 0);
    FUN_060bc3f8(auStack_13c,0);
    memcpy((void *)(param_1 + 0xf8),auStack_13c,0x6c);
    uVar10 = *param_2;
    uVar1 = *(undefined1 *)((long)param_2 + 9);
    local_68._4_4_ = (int)((ulong)uVar10 >> 0x20);
    iVar7 = local_68._4_4_;
    local_68 = uVar10;
    uVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
    FUN_05d21818(uVar9,iVar7 + (int)uVar10,uVar1,param_4,0);
    uVar11 = *(undefined4 *)((long)param_2 + 0xc);
    uVar10 = *(undefined8 *)puVar2;
    *(undefined8 *)(param_1 + 0x10) = uVar9;
    *(undefined4 *)(param_1 + 0x164) = uVar11;
    uVar9 = thunk_FUN_02f45270(uVar10);
    FUN_0612deb8(uVar9,param_1,*(undefined8 *)puVar6,0);
    uVar10 = *(undefined8 *)puVar2;
    *(undefined8 *)(param_1 + 0x168) = uVar9;
    uVar9 = thunk_FUN_02f45270(uVar10);
    FUN_0612deb8(uVar9,param_1,*(undefined8 *)puVar5,0);
    uVar10 = *(undefined8 *)puVar3;
    *(undefined8 *)(param_1 + 0x170) = uVar9;
    lVar8 = thunk_FUN_02f45270(uVar10);
    FUN_05116b38(lVar8,0);
    *(long *)(param_1 + 0x178) = lVar8;
    if (lVar8 != 0) {
      FUN_05d2de10(lVar8,param_4);
      if (*(char *)(param_2 + 2) == '\0') {
        uVar9 = 0;
      }
      else {
        uVar9 = thunk_FUN_02f45270(*(undefined8 *)
                                    Method_System_Runtime_InteropServices_Marshal_PtrToStructure<OVRPlugin_GUID>__
                                  );
        FUN_05d0c6c8(uVar9,0);
      }
      *(undefined8 *)(param_1 + 0x180) = uVar9;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


