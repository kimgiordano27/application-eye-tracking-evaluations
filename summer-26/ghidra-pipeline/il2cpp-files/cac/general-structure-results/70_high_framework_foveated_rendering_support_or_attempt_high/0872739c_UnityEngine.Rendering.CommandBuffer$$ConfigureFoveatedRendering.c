/*
FUNCTION_NAME: UnityEngine.Rendering.CommandBuffer$$ConfigureFoveatedRendering
ENTRY_POINT: 0872739c
PROGRAM: cac-libil2cpp.so
SCORE: 74
LABEL: framework_foveated_rendering_support_or_attempt_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_foveated_rendering_support_or_attempt
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: validity_gate;foveation_rendering;keyword_support;attempted_use;dynamic_foveation_possible
EVIDENCE: validity_or_gating_hits_4;strong_foveation_hits_2;eye_or_gaze_keyword_boost_only;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;negative_framework_support_context_without_confirmed_app_level_gaze_flow;framework_foveation_support_not_confirmed_dynamic_eye_tracking;functionality_foveated_rendering
*/


/* WARNING: Removing unreachable block (ram,0x0872768c) */
/* WARNING: Removing unreachable block (ram,0x087276b4) */
/* WARNING: Removing unreachable block (ram,0x087276bc) */
/* WARNING: Removing unreachable block (ram,0x087276e8) */
/* WARNING: Removing unreachable block (ram,0x087276f0) */
/* WARNING: Removing unreachable block (ram,0x087276fc) */
/* WARNING: Removing unreachable block (ram,0x08727704) */
/* WARNING: Removing unreachable block (ram,0x08727710) */
/* WARNING: Removing unreachable block (ram,0x08727754) */
/* WARNING: Removing unreachable block (ram,0x08727794) */
/* WARNING: Removing unreachable block (ram,0x087277a0) */
/* WARNING: Removing unreachable block (ram,0x087277a8) */
/* WARNING: Removing unreachable block (ram,0x087277b4) */
/* WARNING: Removing unreachable block (ram,0x087277c0) */
/* WARNING: Removing unreachable block (ram,0x0872780c) */
/* WARNING: Removing unreachable block (ram,0x0872782c) */
/* WARNING: Removing unreachable block (ram,0x0872783c) */
/* WARNING: Removing unreachable block (ram,0x08727840) */
/* WARNING: Removing unreachable block (ram,0x087279c8) */
/* WARNING: Removing unreachable block (ram,0x08727850) */
/* WARNING: Removing unreachable block (ram,0x087279c4) */
/* WARNING: Removing unreachable block (ram,0x0872785c) */
/* WARNING: Removing unreachable block (ram,0x08727878) */
/* WARNING: Removing unreachable block (ram,0x0872787c) */
/* WARNING: Removing unreachable block (ram,0x087278b8) */
/* WARNING: Removing unreachable block (ram,0x087278d0) */
/* WARNING: Removing unreachable block (ram,0x087278d8) */
/* WARNING: Removing unreachable block (ram,0x087278e4) */
/* WARNING: Removing unreachable block (ram,0x087278ec) */
/* WARNING: Removing unreachable block (ram,0x087278f8) */
/* WARNING: Removing unreachable block (ram,0x0872793c) */

int UnityEngine_Rendering_CommandBuffer__ConfigureFoveatedRendering(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  void *__ptr;
  void *__ptr_00;
  long lVar5;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long *unaff_x23;
  long lVar6;
  long unaff_x24;
  undefined4 uStack0000000000000004;
  undefined4 uStack000000000000000c;
  undefined4 uStack0000000000000034;
  undefined4 uStack000000000000003c;
  
  FUN_03f13384(*(undefined8 *)(param_1 + 0x68));
  FUN_03f13384(PTR_DAT_0910cc50);
  FUN_03f13384(PTR_DAT_091a14b0);
  FUN_03f13384(PTR_DAT_091262c8);
  FUN_03f13384(PTR_DAT_091a14b8);
  FUN_03f13384(PTR_DAT_0911f098);
  FUN_03f13384(PTR_DAT_091a0e90);
  FUN_03f13384(PTR_DAT_091a14c0);
  FUN_03f13384(PTR_DAT_091a14c8);
  FUN_03f13384(PTR_DAT_091a14d0);
  FUN_03f13384(PTR_DAT_091a1028);
  FUN_03f13384(PTR_DAT_091262e0);
  FUN_03f13384(PTR_DAT_0910c808);
  FUN_03f13384(PTR_DAT_09117cd8);
  *(undefined1 *)(unaff_x24 + 0x9c8) = 1;
  lVar6 = *unaff_x23;
  lVar5 = *(long *)(lVar6 + 0x38);
  uStack000000000000003c = 0;
  uStack0000000000000034 = 0;
  uStack000000000000000c = 0;
  uStack0000000000000004 = 0;
  if (lVar5 == 0) {
    FUN_03f4b2bc(lVar6);
    lVar5 = *(long *)(lVar6 + 0x38);
  }
  lVar5 = *(long *)(lVar5 + 0x10);
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_03f4b260();
  }
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_03f6fea8();
  }
  puVar2 = PTR_DAT_0919c380;
  lVar5 = *(long *)(*(long *)(lVar6 + 0x38) + 0x10);
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_03f4b260();
  }
  *unaff_x20 = **(undefined8 **)(lVar5 + 0xb8);
  thunk_FUN_03f86000();
  lVar6 = *(long *)puVar2;
  lVar5 = *(long *)(lVar6 + 0x38);
  if (lVar5 == 0) {
    FUN_03f4b2bc(lVar6);
    lVar5 = *(long *)(lVar6 + 0x38);
  }
  lVar5 = *(long *)(lVar5 + 0x10);
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_03f4b260();
  }
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_03f6fea8();
  }
  puVar2 = PTR_DAT_091a0e90;
  lVar5 = *(long *)(*(long *)(lVar6 + 0x38) + 0x10);
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_03f4b260();
  }
  *unaff_x19 = **(undefined8 **)(lVar5 + 0xb8);
  thunk_FUN_03f86000();
  uStack000000000000003c = 0;
  uStack0000000000000034 = 0;
  uStack0000000000000004 = 0;
  uStack000000000000000c = 0;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_03f6fea8();
  }
  iVar3 = FUN_087241c0();
  if (iVar3 == 0) {
    lVar5 = *(long *)(PTR_DAT_0910b550 + 0x40);
    if (*(int *)(*(long *)(PTR_DAT_0910b550 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    uVar4 = FUN_074c4a14(lVar5 + 0x20,0);
    puVar1 = PTR_DAT_0911f098;
    if (*(int *)(*(long *)PTR_DAT_0911f098 + 0xe4) == 0) {
      thunk_FUN_03f6fea8(*(long *)PTR_DAT_0911f098);
    }
    thunk_FUN_03f1db0c(uVar4,0);
    __ptr = (void *)FUN_073cc7f4(0,0);
    uVar4 = FUN_074c4a14(*(undefined8 *)PTR_DAT_091a14c0,0);
    thunk_FUN_03f1db0c(uVar4,0);
    __ptr_00 = (void *)FUN_073cc7f4(0,0);
    lVar5 = *(long *)puVar2;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_03f6fea8(lVar5);
    }
    iVar3 = FUN_087241c0();
    if (iVar3 == 0) {
      uVar4 = FUN_03f13470(*(undefined8 *)PTR_DAT_091262e0,0);
      *unaff_x20 = uVar4;
      thunk_FUN_03f86000();
      uVar4 = FUN_03f13470(*(undefined8 *)PTR_DAT_0910c808,0);
      *unaff_x19 = uVar4;
      thunk_FUN_03f86000();
    }
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    free(__ptr);
    free(__ptr_00);
  }
  return iVar3;
}


