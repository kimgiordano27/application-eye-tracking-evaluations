/*
FUNCTION_NAME: FUN_06eb91cc
ENTRY_POINT: 06eb91cc
PROGRAM: vandalizer-libil2cpp.so
SCORE: 72
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_6;telemetry_or_network_hits_3;frame_or_lifecycle_behavior
*/


long * FUN_06eb91cc(long param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  undefined4 uVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  
  puVar4 = UnityEngine_XR_Hands_HandUpdatedEvent_TypeInfo;
  if ((DAT_07a582c5 & 1) == 0) {
    FUN_031f20f4(
                UnityEngine_XR_Interaction_Toolkit_Samples_Hands_HandsOneEuroFilterPostProcessor_TypeInfo
                );
    FUN_031f20f4(UnityEngine_XR_Hands_HandUpdatedEvent_TypeInfo);
    DAT_07a582c5 = 1;
  }
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  if (DAT_07a5860a == '\0') {
    FUN_031f20f4(UnityEngine_XR_Hands_HandUpdatedEvent_TypeInfo);
    DAT_07a5860a = '\x01';
  }
  lVar7 = *(long *)puVar4;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    lVar7 = *(long *)puVar4;
  }
  iVar1 = *(int *)(*(long *)(lVar7 + 0xb8) + 0x28);
  if (DAT_07a5860b == '\0') {
    FUN_031f20f4(puVar4);
    lVar7 = *(long *)puVar4;
    DAT_07a5860b = '\x01';
  }
  if (*(int *)(lVar7 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    lVar7 = *(long *)puVar4;
  }
  *(int *)(*(long *)(lVar7 + 0xb8) + 0x28) = iVar1 + 1;
  puVar3 = System_Collections_Generic_List<IDeserializationCallback>_var;
  if ((DAT_07a580a0 & 1) == 0) {
    FUN_031f20f4(System_Collections_Generic_List<IDeserializationCallback>_var);
    DAT_07a580a0 = 1;
  }
  if (*(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 8) == 0) goto LAB_06eb9460;
  uVar5 = FUN_06eafb28();
  if ((uVar5 | 4) == 0xc) {
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    plVar8 = (long *)FUN_06ebb7a4(param_3);
    if (plVar8 == (long *)0x0) goto LAB_06eb9460;
    plVar8[8] = param_1;
    thunk_FUN_0329bf60(plVar8 + 8,param_1);
    (**(code **)(*plVar8 + 0x1f8))(plVar8,param_1,*(undefined8 *)(*plVar8 + 0x200));
    if (param_2 != 0) {
      (**(code **)(*plVar8 + 0x208))(plVar8,param_2,*(undefined8 *)(*plVar8 + 0x210));
    }
    lVar7 = *(long *)puVar4;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      lVar7 = *(long *)puVar4;
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x10);
    if ((lVar7 == 0) || (lVar7 = *(long *)(lVar7 + 0x18), lVar7 == 0)) goto LAB_06eb9460;
    FUN_06ebb8dc(lVar7,plVar8);
  }
  else {
    lVar7 = *(long *)puVar4;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      lVar7 = *(long *)puVar4;
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x10);
    if ((lVar7 == 0) || (*(long *)(lVar7 + 0x18) == 0)) goto LAB_06eb9460;
    plVar8 = (long *)FUN_06ebb988();
    if (plVar8 == (long *)0x0) {
LAB_06eb9464:
      uVar10 = FUN_06eb06c0();
      FUN_02d65918();
      uVar6 = FUN_06eafb28(uVar10);
      local_58 = thunk_FUN_03257e30(PTR_DAT_075d9988);
      uStack_50 = 0xffffffffffffffff;
      local_48 = uVar6;
      uVar10 = FUN_05e37630(&local_58,0);
      uVar11 = thunk_FUN_03257e30(UnityEngine_XR_HapticCapabilities_TypeInfo);
      uVar10 = FUN_05c7e0d4(uVar11,uVar10,0);
      thunk_FUN_03257e30(UnityEngine_XR_OpenXR_Input_HapticControl_TypeInfo);
      uVar11 = thunk_FUN_0322f148();
      FUN_06ebbc4c(uVar11,uVar10);
      uVar10 = thunk_FUN_03257e30(
                                 UnityEngine_XR_Interaction_Toolkit_Inputs_Haptics_HapticControlActionManager_TypeInfo
                                 );
                    /* WARNING: Subroutine does not return */
      FUN_031f225c(uVar11,uVar10);
    }
    bVar2 = *(byte *)(*(long *)
                       UnityEngine_XR_Interaction_Toolkit_Samples_Hands_HandsOneEuroFilterPostProcessor_TypeInfo
                     + 0x130);
    if ((*(byte *)(*plVar8 + 0x130) < bVar2) ||
       (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar2 * 8 + -8) !=
        *(long *)
         UnityEngine_XR_Interaction_Toolkit_Samples_Hands_HandsOneEuroFilterPostProcessor_TypeInfo))
    goto LAB_06eb9464;
    *(undefined4 *)(plVar8 + 0xc) = 0;
  }
  lVar7 = *(long *)puVar4;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    lVar7 = *(long *)puVar4;
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x10);
  if ((lVar7 != 0) && (plVar9 = *(long **)(lVar7 + 0x20), plVar9 != (long *)0x0)) {
    (**(code **)(*plVar9 + 0x268))(plVar9,plVar8,*(undefined8 *)(*plVar9 + 0x270));
    lVar7 = *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x10);
    if (lVar7 != 0) {
      plVar9 = (long *)(lVar7 + 0x18);
      *plVar9 = (long)plVar8;
      thunk_FUN_0329bf60(plVar9,plVar8);
      return plVar8;
    }
  }
LAB_06eb9460:
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


