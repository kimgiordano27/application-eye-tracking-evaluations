/*
FUNCTION_NAME: FUN_05e5a6dc
ENTRY_POINT: 05e5a6dc
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_15;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_6
*/


void FUN_05e5a6dc(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  if ((DAT_066dc619 & 1) == 0) {
    FUN_02b3c81c(Method_OVRPlugin_<>c_<_cctor>b__810_138__);
    FUN_02b3c81c(Method_OVRPlugin_<>c_<_cctor>b__810_139__);
    FUN_02b3c81c(Method_OVRPlugin_<>c_<_cctor>b__810_14__);
    DAT_066dc619 = 1;
  }
  if (param_3 == 0) goto LAB_05e5a93c;
  lVar9 = *(long *)(param_3 + 0x108);
  *(long *)(param_1 + 0x18) = param_3;
  thunk_FUN_02bb0e9c((long *)(param_1 + 0x18),param_3);
  *(long *)(param_1 + 0x20) = param_4;
  thunk_FUN_02bb0e9c((long *)(param_1 + 0x20),param_4);
  if (*(long *)(param_1 + 0x10) == 0) goto LAB_05e5a93c;
  FUN_05e59cd8(*(long *)(param_1 + 0x10),param_2);
  lVar5 = *(long *)(param_1 + 0x10);
  if ((lVar5 == 0) || (*(long *)(lVar5 + 0x20) == 0)) goto LAB_05e5a93c;
  if (*(int *)(*(long *)(lVar5 + 0x20) + 0x18) == 0) {
    if (param_4 == 0) goto LAB_05e5a93c;
    plVar10 = (long *)(param_4 + 0xa8);
    if (*plVar10 != 0) {
      if (lVar9 == 0) goto LAB_05e5a93c;
      FUN_05e77974(lVar9,*plVar10,0);
      *plVar10 = 0;
      thunk_FUN_02bb0e9c(plVar10,0);
      lVar5 = *(long *)(param_1 + 0x10);
      if (lVar5 == 0) goto LAB_05e5a93c;
    }
  }
  if (*(long *)(lVar5 + 0x28) == 0) goto LAB_05e5a93c;
  if (*(int *)(*(long *)(lVar5 + 0x28) + 0x18) == 0) {
    if (param_4 == 0) goto LAB_05e5a93c;
    plVar10 = (long *)(param_4 + 0xb0);
    if (*plVar10 != 0) {
      if (lVar9 == 0) goto LAB_05e5a93c;
      FUN_05e77974(lVar9,*plVar10,0);
      *plVar10 = 0;
      thunk_FUN_02bb0e9c(plVar10,0);
    }
  }
  else if (param_4 == 0) goto LAB_05e5a93c;
  if ((*(byte *)(param_4 + 0x68) >> 3 & 1) != 0) {
    FUN_05e7786c(param_3,param_4,0);
  }
  FUN_05e6dc04(param_3,param_4,0);
  plVar10 = (long *)Method_OVRPlugin_<>c_<_cctor>b__810_14__;
  lVar9 = *(long *)(param_4 + 0x20);
  if (lVar9 == 0) {
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(undefined4 *)(param_1 + 0x38) = 0;
LAB_05e5a870:
    lVar9 = *plVar10;
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      lVar9 = *plVar10;
    }
    puVar6 = (undefined8 *)(*(long *)(lVar9 + 0xb8) + 0x110);
  }
  else {
    uVar1 = *(undefined4 *)(lVar9 + 0xa0);
    uVar2 = *(uint *)(param_4 + 0x68);
    *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(lVar9 + 0xa4);
    *(undefined4 *)(param_1 + 0x38) = uVar1;
    plVar10 = (long *)Method_OVRPlugin_<>c_<_cctor>b__810_14__;
    if ((uVar2 & 1) != 0) goto LAB_05e5a870;
    puVar6 = (undefined8 *)(lVar9 + 0x100);
  }
  iVar3 = *(int *)(param_1 + 0x2c);
  uVar7 = *puVar6;
  *(undefined8 *)(param_1 + 0x48) = uVar7;
  *(int *)(param_1 + 0x3c) = iVar3;
  *(int *)(param_1 + 0x30) = iVar3 + 1;
  uVar8 = *(undefined8 *)(param_4 + 0x100);
  *(int *)(param_1 + 0x28) = iVar3;
  cVar4 = DAT_066c7526;
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x40) = uVar7;
  *(undefined8 *)(param_1 + 0x50) = uVar8;
  *(undefined1 *)(param_1 + 0x68) = 0;
  if (cVar4 == '\0') {
    FUN_02b3c81c(PTR_DAT_0631ec40);
    DAT_066c7526 = '\x01';
  }
  lVar9 = *(long *)(*(long *)PTR_DAT_0631ec40 + 0xb8);
  uVar8 = *(undefined8 *)(lVar9 + 0x48);
  uVar7 = *(undefined8 *)(lVar9 + 0x40);
  uVar14 = *(undefined8 *)(lVar9 + 0x58);
  uVar13 = *(undefined8 *)(lVar9 + 0x50);
  uVar16 = *(undefined8 *)(lVar9 + 0x68);
  uVar15 = *(undefined8 *)(lVar9 + 0x60);
  uVar12 = *(undefined8 *)(lVar9 + 0x78);
  uVar11 = *(undefined8 *)(lVar9 + 0x70);
  *(undefined4 *)(param_1 + 0xb4) = 0;
  *(undefined8 *)(param_1 + 0x74) = uVar8;
  *(undefined8 *)(param_1 + 0x6c) = uVar7;
  *(undefined8 *)(param_1 + 0xa4) = uVar12;
  *(undefined8 *)(param_1 + 0x9c) = uVar11;
  *(undefined8 *)(param_1 + 0x94) = uVar16;
  *(undefined8 *)(param_1 + 0x8c) = uVar15;
  *(undefined8 *)(param_1 + 0x84) = uVar14;
  *(undefined8 *)(param_1 + 0x7c) = uVar13;
  if (*(long *)(param_1 + 0x60) != 0) {
    FUN_03f0cbd8(*(long *)(param_1 + 0x60),*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__810_139__)
    ;
    *(undefined1 *)(param_1 + 0x58) = 0;
    return;
  }
LAB_05e5a93c:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


