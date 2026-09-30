/*
FUNCTION_NAME: FUN_060fd27c
ENTRY_POINT: 060fd27c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 133
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_10;paired_field_refs_with_eye_source;telemetry_or_network_hits_2;functionality_eye_api_context_without_clear_sink_hits_4
*/


void FUN_060fd27c(int *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 local_48;
  
  if ((DAT_06dc6538 & 1) == 0) {
    FUN_02d965b8(PTR_DAT_069fc218);
    FUN_02d965b8(Method_Unity_Netcode_FastBufferWriter_WriteValue<NetworkBatchHeader>__);
    FUN_02d965b8(OVRPlugin_SkeletonType_TypeInfo);
    FUN_02d965b8(OVRPlugin_OVRP_1_94_0_TypeInfo);
    FUN_02d965b8(Method_Unity_Netcode_FastBufferWriter_WriteValue<ushort>__);
    FUN_02d965b8(Method_Unity_Netcode_FastBufferWriter_WriteValue<uint>__);
    FUN_02d965b8(Method_Unity_Netcode_FastBufferWriter_WriteValue<ulong>__);
    FUN_02d965b8(
                Method_Unity_Netcode_FastBufferWriter_WriteValue<NetworkObject_SceneObject_TransformData>__
                );
    FUN_02d965b8(
                Method_Unity_Netcode_FastBufferWriter_WriteValueSafe<ForceNetworkSerializeByMemcpy<Guid>>__
                );
    DAT_06dc6538 = 1;
  }
  puVar2 = OVRPlugin_OVRP_1_94_0_TypeInfo;
  lVar11 = *(long *)(param_1 + 8);
  local_48 = 0;
  if (*param_1 == 0) {
    local_48 = *(undefined8 *)(param_1 + 0xc);
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    *param_1 = -1;
  }
  else {
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    if (*(long *)(lVar11 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    uVar4 = FUN_060f4bd4(*(long *)(lVar11 + 0x10),0);
    if (*(int *)(*(long *)PTR_DAT_069fc218 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    uVar5 = FUN_063052bc(0);
    if (*(long *)(lVar11 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    uVar6 = FUN_060f4b28(*(long *)(lVar11 + 0x10),0);
    uVar10 = *(undefined8 *)(param_1 + 10);
    uVar7 = thunk_FUN_02dd3144(*(undefined8 *)
                                Method_Unity_Netcode_FastBufferWriter_WriteValue<ushort>__);
    FUN_0611f780(uVar7,uVar4,uVar5,uVar6,uVar10,0);
    if (*(long *)(lVar11 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar8 = FUN_06120318(*(long *)(lVar11 + 0x18),uVar7,0,0);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    local_48 = FUN_0481d028(lVar8,*(undefined8 *)
                                   Method_Unity_Netcode_FastBufferWriter_WriteValueSafe<ForceNetworkSerializeByMemcpy<Guid>>__
                           );
    uVar9 = FUN_047e6248(&local_48,
                         *(undefined8 *)
                          Method_Unity_Netcode_FastBufferWriter_WriteValue<NetworkObject_SceneObject_TransformData>__
                        );
    if ((uVar9 & 1) == 0) {
      *param_1 = 0;
      *(undefined8 *)(param_1 + 0xc) = local_48;
      LeanTween__value(param_1 + 0xc,0);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      FUN_031f8838(param_1 + 2,&local_48,param_1,
                   *(undefined8 *)
                    Method_Unity_Netcode_FastBufferWriter_WriteValue<NetworkBatchHeader>__);
      return;
    }
  }
  lVar8 = FUN_047e6288(&local_48,
                       *(undefined8 *)Method_Unity_Netcode_FastBufferWriter_WriteValue<ulong>__);
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  uVar4 = *(undefined8 *)(lVar8 + 0x20);
  uVar9 = FUN_0536c9cc(uVar4,0);
  if ((uVar9 & 1) != 0) {
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    if (*(long *)(lVar11 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    uVar4 = FUN_060f4a7c(*(long *)(lVar11 + 0x10),0);
  }
  puVar3 = OVRPlugin_SkeletonType_TypeInfo;
  iVar1 = *(int *)(*(long *)puVar2 + 0xe4);
                    /* try { // try from 060fd4b0 to 061fd55f has its CatchHandler @ 060fd4b0
                       catch() { ... } // from try @ 060fd4b0 with catch @ 060fd4b0
                       catch() { ... } // from try @ 060fd56c with catch @ 060fd4b0
                       catch() { ... } // from try @ 060fd68c with catch @ 060fd4b0
                       catch() { ... } // from try @ 060fd6c8 with catch @ 060fd4b0 */
  *param_1 = -2;
  if (iVar1 == 0) {
    thunk_FUN_02df485c();
  }
  FUN_040b19d8(param_1 + 2,uVar4,*(undefined8 *)puVar3);
  return;
}


