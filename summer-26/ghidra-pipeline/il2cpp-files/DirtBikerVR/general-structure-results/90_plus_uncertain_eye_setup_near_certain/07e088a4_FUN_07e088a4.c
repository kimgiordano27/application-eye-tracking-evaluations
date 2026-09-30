/*
FUNCTION_NAME: FUN_07e088a4
ENTRY_POINT: 07e088a4
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_07e088a4(long *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  char cVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long local_b8;
  long lStack_b0;
  long local_a8;
  long lStack_a0;
  long local_98;
  long lStack_90;
  long local_88;
  undefined1 auStack_80 [80];
  undefined8 local_30;
  undefined8 local_28;
  
  if ((DAT_0899a3fc & 1) == 0) {
    FUN_03a8a718(PTR_DAT_084974d0);
    FUN_03a8a718(UnityEngine_UIElements_RepeatButton_UxmlFactory_TypeInfo);
    FUN_03a8a718(OVRPlugin_OverlayShape_TypeInfo);
    FUN_03a8a718(RootMotion_Demos_ResetInteractionObject_<ResetObject>d__7_TypeInfo);
    FUN_03a8a718(UnityEngine_UIElements_ResolvedStyleAccessPropertyBag_AlignContentProperty_TypeInfo
                );
    FUN_03a8a718(PTR_DAT_084916a0);
    DAT_0899a3fc = 1;
  }
  cVar4 = DAT_0897581b;
  puVar2 = OVRPlugin_OverlayShape_TypeInfo;
  local_30 = 0;
  local_28 = 0;
  *(undefined4 *)((long)param_1 + 0x9c) = 0xffffffff;
  if (cVar4 == '\0') {
    FUN_03a8a718(PTR_DAT_0848d6e8);
    DAT_0897581b = '\x01';
  }
  lVar5 = *(long *)puVar2;
  lVar7 = *(long *)PTR_DAT_0848d6e8;
  lVar8 = *(long *)(lVar7 + 0xb8);
  lVar11 = *(long *)(lVar8 + 0x60);
  lVar10 = *(long *)(lVar8 + 0x78);
  lVar9 = *(long *)(lVar8 + 0x70);
  lVar15 = *(long *)(lVar8 + 0x48);
  lVar14 = *(long *)(lVar8 + 0x40);
  lVar13 = *(long *)(lVar8 + 0x58);
  lVar12 = *(long *)(lVar8 + 0x50);
  param_1[0x1f] = *(long *)(lVar8 + 0x68);
  param_1[0x1e] = lVar11;
  param_1[0x21] = lVar10;
  param_1[0x20] = lVar9;
  param_1[0x1b] = lVar15;
  param_1[0x1a] = lVar14;
  param_1[0x1d] = lVar13;
  param_1[0x1c] = lVar12;
  lVar7 = *(long *)(lVar7 + 0xb8);
  lVar10 = *(long *)(lVar7 + 0x60);
  lVar9 = *(long *)(lVar7 + 0x78);
  lVar8 = *(long *)(lVar7 + 0x70);
  lVar14 = *(long *)(lVar7 + 0x48);
  lVar13 = *(long *)(lVar7 + 0x40);
  lVar12 = *(long *)(lVar7 + 0x58);
  lVar11 = *(long *)(lVar7 + 0x50);
  param_1[0x27] = *(long *)(lVar7 + 0x68);
  param_1[0x26] = lVar10;
  param_1[0x29] = lVar9;
  param_1[0x28] = lVar8;
  param_1[0x23] = lVar14;
  param_1[0x22] = lVar13;
  param_1[0x25] = lVar12;
  param_1[0x24] = lVar11;
  puVar2 = UnityEngine_UIElements_ResolvedStyleAccessPropertyBag_AlignContentProperty_TypeInfo;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  puVar3 = UnityEngine_UIElements_RepeatButton_UxmlFactory_TypeInfo;
  FUN_07ea214c(auStack_80,0);
  memcpy(param_1 + 0x33,auStack_80,0x50);
  thunk_FUN_03afed3c(param_1 + 0x33,0);
  lVar5 = *(long *)puVar2;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
    lVar5 = *(long *)puVar2;
  }
  puVar2 = PTR_DAT_084916a0;
  param_1[0x3d] = **(long **)(lVar5 + 0xb8);
  thunk_FUN_03afed3c(param_1 + 0x3d);
  *(undefined4 *)(param_1 + 0x3e) = 0;
  *(undefined4 *)(param_1 + 0x3f) = 0;
  param_1[0x55] = 0;
  param_1[0x4a] = 0;
  param_1[0x49] = 0;
  thunk_FUN_03afed3c(param_1 + 0x55,0);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  puVar3 = RootMotion_Demos_ResetInteractionObject_<ResetObject>d__7_TypeInfo;
  FUN_07f40970(param_1,0);
  lVar5 = *(long *)puVar2;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
    lVar5 = *(long *)puVar2;
  }
  param_1[0x53] = *(long *)(*(long *)(lVar5 + 0xb8) + 0xd50);
  thunk_FUN_03afed3c(param_1 + 0x53);
  iVar1 = **(int **)(*(long *)puVar2 + 0xb8) + 1;
  **(int **)(*(long *)puVar2 + 0xb8) = iVar1;
  *(int *)((long)param_1 + 500) = iVar1;
  local_88 = 0;
  FUN_07e13e74(&local_88,param_1,0);
  param_1[0x4d] = local_88;
  thunk_FUN_03afed3c(param_1 + 0x4d,0);
  param_1[8] = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
  thunk_FUN_03afed3c();
  FUN_07e049a8(param_1,0x7003f);
  FUN_07e08bd0(param_1,1);
  (**(code **)(*param_1 + 0x248))(param_1,0,*(undefined8 *)(*param_1 + 0x250));
  FUN_07e08530(param_1,**(undefined8 **)(*(long *)(PTR_DAT_08486760 + 0x90) + 0xb8));
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  lVar5 = FUN_07e9c424(0);
  puVar2 = PTR_DAT_084974d0;
  if (lVar5 != 0) {
    FUN_07e9d2bc(&local_b8,lVar5,0);
    param_1[0x2e] = lStack_b0;
    param_1[0x2d] = local_b8;
    param_1[0x30] = lStack_a0;
    param_1[0x2f] = local_a8;
    param_1[0x32] = lStack_90;
    param_1[0x31] = local_98;
    FUN_07e05140(param_1,0);
    uVar6 = thunk_FUN_03a9a6e8(param_1,0);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_03ae8be4(*(long *)puVar2);
    }
    FUN_07e6224c(uVar6,(long)&local_28 + 4,&local_28,(long)&local_30 + 4,&local_30,0);
    *(undefined4 *)(param_1 + 0x48) = local_30._4_4_;
    *(uint *)((long)param_1 + 0x244) = (uint)local_28 | (uint)local_30 | local_28._4_4_;
    FUN_07e08c70(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


