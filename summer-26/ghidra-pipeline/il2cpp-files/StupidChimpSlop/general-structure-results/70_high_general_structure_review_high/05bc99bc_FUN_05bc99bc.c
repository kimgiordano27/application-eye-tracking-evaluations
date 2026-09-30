/*
FUNCTION_NAME: FUN_05bc99bc
ENTRY_POINT: 05bc99bc
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_21;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_6;paired_field_refs_with_structure_only;telemetry_or_network_hits_4;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_05bc99bc(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  byte bVar6;
  undefined2 uVar7;
  uint uVar8;
  bool bVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  bool bVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined8 uVar17;
  int *piVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  undefined8 *puVar22;
  int iVar23;
  int iVar24;
  long lVar25;
  long *plVar26;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  long local_a0 [8];
  
  if ((DAT_06a574e8 & 1) == 0) {
    FUN_02d4dc40(
                Method_UnityEngine_InputSystem_InputControlScheme_FindControlSchemeForDevices<InputControlList<InputDevice>,_ReadOnlyArray<InputControlScheme>>__
                );
    FUN_02d4dc40(
                Method_UnityEngine_InputSystem_InputDevice_ExecuteCommand<QueryCanRunInBackground>__
                );
    FUN_02d4dc40(
                Method_UnityEngine_InputSystem_InputDevice_ExecuteCommand<QueryEnabledStateCommand>__
                );
    FUN_02d4dc40(Method_UnityEngine_InputSystem_InputDevice_ExecuteCommand<QueryKeyNameCommand>__);
    FUN_02d4dc40(Method_System_Security_Cryptography_DSASignatureFormatter_SetKey__);
    FUN_02d4dc40(Method_System_Net_DelegatedStream_BeginWrite__);
    FUN_02d4dc40(
                Method_UnityEngine_InputSystem_InputDevice_ExecuteCommand<QueryKeyboardLayoutCommand>__
                );
    FUN_02d4dc40(
                Method_UnityEngine_InputSystem_InputDevice_ExecuteCommand<QueryPairedUserAccountCommand>__
                );
    FUN_02d4dc40(
                Method_UnityEngine_InputSystem_InputDevice_ExecuteCommand<QuerySamplingFrequencyCommand>__
                );
    FUN_02d4dc40(Method_System_DelegateSerializationHolder_GetObjectData__);
    FUN_02d4dc40(Method_UnityEngine_InputSystem_InputDevice_ExecuteCommand<RequestResetCommand>__);
    FUN_02d4dc40(Method_UnityEngine_InputSystem_InputDevice_ExecuteCommand<RequestSyncCommand>__);
    FUN_02d4dc40(
                Method_UnityEngine_InputSystem_InputDevice_ExecuteCommand<InitiateUserAccountPairingCommand>__
                );
    FUN_02d4dc40(
                Method_UnityEngine_InputSystem_InputDevice_ExecuteCommand<SendBufferedHapticCommand>__
                );
    FUN_02d4dc40(
                Method_UnityEngine_InputSystem_InputDevice_ExecuteCommand<SendHapticImpulseCommand>__
                );
    FUN_02d4dc40(
                Method_UnityEngine_InputSystem_InputDevice_ExecuteCommand<SetIMECursorPositionCommand>__
                );
    DAT_06a574e8 = 1;
  }
  puVar10 = Method_System_DelegateSerializationHolder_GetObjectData__;
  local_a0[6] = 0;
  local_a0[7] = 0;
  local_a0[4] = 0;
  local_a0[5] = 0;
  lVar19 = *param_1;
  local_a0[2] = 0;
  local_a0[3] = 0;
  local_a0[0] = 0;
  local_a0[1] = 0;
  local_a8 = 0;
  if ((*(ushort *)
        (*(long *)(*(long *)
                    Method_UnityEngine_InputSystem_InputDevice_ExecuteCommand<InitiateUserAccountPairingCommand>__
                  + 0x20) + 0x135) & 1) == 0) {
    FUN_02d8720c();
  }
  FUN_0386e888(local_a0 + 6,*(undefined4 *)(lVar19 + 8),2,1,*(undefined8 *)puVar10);
  lVar19 = *param_1;
  if ((*(ushort *)
        (*(long *)(*(long *)
                    Method_UnityEngine_InputSystem_InputDevice_ExecuteCommand<InitiateUserAccountPairingCommand>__
                  + 0x20) + 0x135) & 1) == 0) {
    FUN_02d8720c();
  }
  FUN_0386e888(local_a0 + 4,*(undefined4 *)(lVar19 + 8),2,1,*(undefined8 *)puVar10);
  lVar19 = *param_1;
  if ((*(ushort *)
        (*(long *)(*(long *)
                    Method_UnityEngine_InputSystem_InputDevice_ExecuteCommand<InitiateUserAccountPairingCommand>__
                  + 0x20) + 0x135) & 1) == 0) {
    FUN_02d8720c();
  }
  puVar12 = Method_UnityEngine_InputSystem_InputDevice_ExecuteCommand<RequestResetCommand>__;
  puVar11 = 
  Method_UnityEngine_InputSystem_InputControlScheme_FindControlSchemeForDevices<InputControlList<InputDevice>,_ReadOnlyArray<InputControlScheme>>__
  ;
  FUN_0386e888(local_a0 + 2,*(undefined4 *)(lVar19 + 8),2,1,*(undefined8 *)puVar10);
  lVar19 = *param_1;
  if ((*(ushort *)
        (*(long *)(*(long *)
                    Method_UnityEngine_InputSystem_InputDevice_ExecuteCommand<InitiateUserAccountPairingCommand>__
                  + 0x20) + 0x135) & 1) == 0) {
    FUN_02d8720c();
  }
  FUN_038a5c6c(local_a0,*(undefined4 *)(lVar19 + 8),2,1,*(undefined8 *)puVar12);
  lVar19 = thunk_FUN_02d8a638(*(undefined8 *)puVar11);
  FUN_05044d4c(lVar19,0);
  puVar13 = Method_UnityEngine_InputSystem_InputDevice_ExecuteCommand<SendBufferedHapticCommand>__;
  puVar12 = Method_UnityEngine_InputSystem_InputDevice_ExecuteCommand<RequestSyncCommand>__;
  if (lVar19 != 0) {
    uVar17 = *(undefined8 *)puVar10;
    *(undefined8 *)(lVar19 + 0x10) = *param_2;
    local_b8 = 0;
    uStack_b0 = 0;
    FUN_0386e888(&local_b8,2,4,1,uVar17);
    uVar17 = *(undefined8 *)puVar10;
    *(undefined8 *)(lVar19 + 0x20) = uStack_b0;
    *(undefined8 *)(lVar19 + 0x18) = local_b8;
    local_c8 = 0;
    uStack_c0 = 0;
    FUN_0386e888(&local_c8,2,4,1,uVar17);
    lVar20 = 0;
    iVar24 = 0;
    *(undefined8 *)(lVar19 + 0x30) = uStack_c0;
    *(undefined8 *)(lVar19 + 0x28) = local_c8;
    bVar14 = true;
    do {
      bVar9 = bVar14;
      *(int *)(*(long *)(lVar19 + 0x18) + lVar20 * 4) = iVar24;
      local_a8 = *param_2;
      iVar24 = *(int *)((long)param_2 + lVar20 * 4) + iVar24;
      uVar15 = FUN_05bd8dcc(&local_a8,lVar20,0);
      *(undefined4 *)(*(long *)(lVar19 + 0x28) + lVar20 * 4) = uVar15;
      lVar20 = 1;
      bVar14 = false;
    } while (bVar9);
    if ((DAT_06a574df & 1) == 0) {
      FUN_02d4dc40(
                  Method_UnityEngine_InputSystem_InputControlScheme_FindControlSchemeForDevices<InputControlList<InputDevice>,_ReadOnlyArray<InputControlScheme>>__
                  );
      DAT_06a574df = 1;
    }
    piVar18 = *(int **)(*(long *)puVar11 + 0xb8);
    iVar24 = *piVar18 + 1;
    *piVar18 = iVar24;
    puVar11 = 
    Method_UnityEngine_InputSystem_InputDevice_ExecuteCommand<InitiateUserAccountPairingCommand>__;
    *(undefined4 *)(lVar19 + 0x40) = 0;
    *(int *)(lVar19 + 0x44) = iVar24;
    lVar20 = *param_1;
    if ((*(byte *)(*(long *)(*(long *)puVar11 + 0x20) + 0x135) & 1) == 0) {
      FUN_02d8720c();
    }
    local_b8 = 0;
    uStack_b0 = 0;
    FUN_0387b380(&local_b8,*(undefined4 *)(lVar20 + 8),4,1,
                 *(undefined8 *)
                  Method_UnityEngine_InputSystem_InputDevice_ExecuteCommand<QueryKeyboardLayoutCommand>__
                );
    puVar11 = 
    Method_UnityEngine_InputSystem_InputDevice_ExecuteCommand<InitiateUserAccountPairingCommand>__;
    *(undefined8 *)(lVar19 + 0x88) = uStack_b0;
    *(undefined8 *)(lVar19 + 0x80) = local_b8;
    lVar20 = *param_1;
    if ((*(ushort *)(*(long *)(*(long *)puVar11 + 0x20) + 0x135) & 1) == 0) {
      FUN_02d8720c();
    }
    local_c8 = 0;
    uStack_c0 = 0;
    FUN_03860ddc(&local_c8,*(undefined4 *)(lVar20 + 8),4,1,
                 *(undefined8 *)
                  Method_UnityEngine_InputSystem_InputDevice_ExecuteCommand<QuerySamplingFrequencyCommand>__
                );
    puVar11 = 
    Method_UnityEngine_InputSystem_InputDevice_ExecuteCommand<InitiateUserAccountPairingCommand>__;
    *(undefined8 *)(lVar19 + 0x78) = uStack_c0;
    *(undefined8 *)(lVar19 + 0x70) = local_c8;
    lVar20 = *param_1;
    if ((*(ushort *)(*(long *)(*(long *)puVar11 + 0x20) + 0x135) & 1) == 0) {
      FUN_02d8720c();
    }
    uVar15 = *(undefined4 *)(lVar20 + 8);
    uVar16 = FUN_058e48a8(4,0);
    local_d8 = 0;
    uStack_d0 = 0;
    FUN_039241f0(&local_d8,uVar15,uVar16,
                 *(undefined8 *)
                  Method_UnityEngine_InputSystem_InputDevice_ExecuteCommand<SendHapticImpulseCommand>__
                );
    puVar11 = 
    Method_UnityEngine_InputSystem_InputDevice_ExecuteCommand<InitiateUserAccountPairingCommand>__;
    *(undefined8 *)(lVar19 + 0xa8) = uStack_d0;
    *(undefined8 *)(lVar19 + 0xa0) = local_d8;
    lVar20 = *param_1;
    if ((*(ushort *)(*(long *)(*(long *)puVar11 + 0x20) + 0x135) & 1) == 0) {
      FUN_02d8720c();
    }
    local_e8 = 0;
    uStack_e0 = 0;
    FUN_0386e888(&local_e8,*(undefined4 *)(lVar20 + 8),4,1,*(undefined8 *)puVar10);
    uVar21 = 0;
    iVar24 = 0;
    iVar23 = 0x40;
    lVar20 = 0xc;
    *(undefined8 *)(lVar19 + 0x98) = uStack_e0;
    *(undefined8 *)(lVar19 + 0x90) = local_e8;
    while( true ) {
      lVar25 = *param_1;
      if ((*(ushort *)
            (*(long *)(*(long *)
                        Method_UnityEngine_InputSystem_InputDevice_ExecuteCommand<InitiateUserAccountPairingCommand>__
                      + 0x20) + 0x135) & 1) == 0) {
        FUN_02d8720c();
      }
      puVar10 = Method_System_Security_Cryptography_DSASignatureFormatter_SetKey__;
      if ((long)*(int *)(lVar25 + 8) <= (long)uVar21) break;
      plVar26 = (long *)*param_1;
      if ((*(ushort *)(*(long *)(*(long *)puVar12 + 0x20) + 0x135) & 1) == 0) {
        FUN_02d8720c();
      }
      puVar22 = (undefined8 *)(lVar20 + *plVar26);
      puVar1 = (undefined8 *)(*(long *)(lVar19 + 0x70) + lVar20);
      uVar15 = *(undefined4 *)((long)puVar22 + -0xc);
      iVar2 = *(int *)(puVar22 + -1);
      bVar5 = *(byte *)((long)puVar22 + -3);
      uVar7 = *(undefined2 *)((long)puVar22 + -2);
      uVar17 = *puVar22;
      bVar6 = *(byte *)((long)puVar22 + -4);
      *(undefined4 *)((long)puVar1 + -0xc) = uVar15;
      *(int *)(puVar1 + -1) = iVar2;
      iVar4 = (int)uVar17;
      *(byte *)((long)puVar1 + -4) = bVar6;
      *(byte *)((long)puVar1 + -3) = bVar5;
      *(undefined2 *)((long)puVar1 + -2) = uVar7;
      *puVar1 = uVar17;
      iVar3 = *(int *)(*(long *)(lVar19 + 0x28) + (long)iVar4 * 4);
      iVar4 = *(int *)(*(long *)(lVar19 + 0x18) + (long)iVar4 * 4);
      if ((bVar5 & 1) == 0) {
        iVar3 = 1;
      }
      *(ulong *)(local_a0[0] + uVar21 * 8) = CONCAT44(iVar3 + iVar4,iVar4);
      uVar8 = iVar23 - iVar4 * iVar2;
      *(uint *)(*(long *)(lVar19 + 0x90) + uVar21 * 4) = uVar8;
      *(ulong *)(*(long *)(lVar19 + 0x80) + uVar21 * 8) =
           CONCAT44(uVar8 | (uint)bVar6 << 0x1f,uVar15);
      *(uint *)(local_a0[4] + uVar21 * 4) = uVar8;
      *(int *)(local_a0[2] + uVar21 * 4) = iVar2;
      FUN_039243e4(lVar19 + 0xa0,uVar15,uVar21 & 0xffffffff,*(undefined8 *)puVar13);
      if ((bVar5 & 1) != 0) {
        *(int *)(local_a0[6] + (long)iVar24 * 4) = (int)uVar21;
        iVar24 = iVar24 + 1;
      }
      iVar23 = iVar23 + iVar3 * iVar2;
      uVar21 = uVar21 + 1;
      lVar20 = lVar20 + 0x14;
    }
    *(int *)(lVar19 + 0x38) = iVar23;
    lVar20 = thunk_FUN_02d8a638(*(undefined8 *)puVar10);
    iVar3 = iVar23 + 3;
    if (-1 < iVar23) {
      iVar3 = iVar23;
    }
    FUN_05eb7e1c(lVar20,0x20,iVar3 >> 2,4,0);
    plVar26 = (long *)(lVar19 + 0x48);
    *plVar26 = lVar20;
    thunk_FUN_02dc1ef0(plVar26,lVar20);
    lVar20 = *plVar26;
    local_b8 = 0;
    uStack_b0 = 0;
    FUN_038a7dc8(&local_b8,4,2,1,
                 *(undefined8 *)
                  Method_UnityEngine_InputSystem_InputDevice_ExecuteCommand<QueryPairedUserAccountCommand>__
                );
    if (lVar20 != 0) {
      FUN_032392cc(lVar20,local_b8,uStack_b0,0,0,4,
                   *(undefined8 *)
                    Method_UnityEngine_InputSystem_InputDevice_ExecuteCommand<QueryKeyNameCommand>__
                  );
      uVar17 = thunk_FUN_02d8a638(*(undefined8 *)puVar10);
      FUN_05eb7e1c(uVar17,0x20,iVar24,4,0);
      puVar22 = (undefined8 *)(lVar19 + 0x50);
      *puVar22 = uVar17;
      thunk_FUN_02dc1ef0(puVar22,uVar17);
      FUN_061fdd70(*puVar22);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d4dee8();
}


