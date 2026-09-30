/*
FUNCTION_NAME: FUN_03698ce8
ENTRY_POINT: 03698ce8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_03698ce8(undefined4 param_1,ulong param_2,ulong param_3,undefined8 param_4,long param_5)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  float fVar5;
  ulong uVar6;
  float fVar7;
  ulong uVar8;
  ulong uVar9;
  float fVar10;
  ulong uVar11;
  undefined8 uVar12;
  uint local_90;
  uint uStack_8c;
  uint local_88;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  puVar1 = Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__;
  uVar8 = param_2;
  uVar9 = param_3;
  uVar12 = param_4;
  if ((DAT_04833f07 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__);
    thunk_FUN_01efb3a4(Method_OVRPlugin_FovfPair_get_Item__);
    DAT_04833f07 = 1;
  }
  local_50 = 0;
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uVar4 = *(undefined8 *)(param_5 + 0x30);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar2 = UnityEngine_UIElements_UIR_Implementation_UIRStylePainter__BuildEntryFromNativeMesh
                    (uVar4,0,0);
  if ((uVar2 & 1) != 0) {
    return;
  }
  lVar3 = *(long *)(param_5 + 0x30);
  if (lVar3 != 0) {
    *(undefined4 *)(lVar3 + 0x58) = param_1;
    *(int *)(lVar3 + 0x5c) = (int)param_2;
    *(int *)(lVar3 + 0x60) = (int)param_3;
    *(int *)(lVar3 + 100) = (int)param_4;
    uVar4 = *(undefined8 *)(param_5 + 0x38);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar2 = FUN_04073094(uVar4,0,0);
    if ((uVar2 & 1) == 0) {
      if (*(long *)(param_5 + 0x20) == 0) goto LAB_03698e94;
      FUN_03695c0c(&local_90,*(long *)(param_5 + 0x20),0);
      uVar6 = (ulong)local_90;
      uVar8 = (ulong)uStack_8c;
      uVar2 = (ulong)local_88;
    }
    else {
      if (*(long *)(param_5 + 0x38) == 0) goto LAB_03698e94;
      uVar6 = FUN_0407d3c8(*(long *)(param_5 + 0x38),0);
      uVar2 = uVar9;
    }
    fVar10 = (float)uVar9;
    lVar3 = *(long *)(param_5 + 0x20);
    if (lVar3 != 0) {
      local_50 = *(undefined8 *)(lVar3 + 0x168);
      uStack_68 = *(undefined8 *)(lVar3 + 0x150);
      local_70 = *(undefined8 *)(lVar3 + 0x148);
      uStack_58 = *(undefined8 *)(lVar3 + 0x160);
      uVar4 = *(undefined8 *)(lVar3 + 0x158);
      uStack_60 = uVar4;
      if (*(int *)(*(long *)Method_OVRPlugin_FovfPair_get_Item__ + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      fVar7 = (float)uVar4;
      fVar5 = (float)FUN_03694cd0(&local_70,0);
      uVar9 = (ulong)(uint)(fVar7 - (float)uVar8);
      uVar11 = (ulong)(uint)(fVar10 - (float)uVar2);
      uVar4 = FUN_0406761c(fVar5 - (float)uVar6,uVar9,uVar11,0);
      if (*(long *)(param_5 + 0x30) != 0) {
        FUN_03637e30(uVar6,uVar8,uVar2,uVar4,uVar9,uVar11,uVar12,*(long *)(param_5 + 0x30),0);
        return;
      }
    }
  }
LAB_03698e94:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


