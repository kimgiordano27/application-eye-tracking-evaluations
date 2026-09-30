/*
FUNCTION_NAME: UnityWebSocketSharp.CloseEventArgs$$.ctor
ENTRY_POINT: 06ed7650
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_20;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void UnityWebSocketSharp_CloseEventArgs___ctor(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined1 uVar11;
  undefined8 *puVar12;
  long unaff_x19;
  undefined8 uVar13;
  uint unaff_w21;
  
  puVar1 = PTR_DAT_084c7f00;
  if (param_1 == 0) goto LAB_06ed7a64;
  FUN_06fafb24(param_1,*(undefined8 *)PTR_DAT_084c7f38,0);
  lVar7 = *(long *)puVar1;
  uVar13 = *(undefined8 *)(unaff_x19 + 0xd0);
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
    lVar7 = *(long *)puVar1;
  }
  puVar2 = PTR_DAT_084c8918;
  uVar4 = FUN_067702f0(uVar13,*(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x10),0);
  if ((unaff_w21 & uVar4) == 1) {
    if (*(long *)(unaff_x19 + 0xe8) == 0) goto LAB_06ed7a64;
    uVar8 = FUN_06ed7a68();
    if ((uVar8 & 1) == 0) goto UnityWebSocketSharp_PayloadData__get_Code;
    if (*(long *)(unaff_x19 + 0x90) == 0) goto LAB_06ed7a64;
    FUN_06fafad0(*(long *)(unaff_x19 + 0x90),*(undefined8 *)puVar2,*(undefined8 *)PTR_DAT_084c89d8,0
                );
    uVar11 = 1;
  }
  else {
UnityWebSocketSharp_PayloadData__get_Code:
    if (*(long *)(unaff_x19 + 0x90) == 0) goto LAB_06ed7a64;
    FUN_06fafb24(*(long *)(unaff_x19 + 0x90),*(undefined8 *)puVar2,0);
    uVar11 = 0;
  }
  lVar7 = *(long *)(unaff_x19 + 0xe8);
  *(undefined1 *)(unaff_x19 + 0x124) = uVar11;
  if (lVar7 == 0) goto LAB_06ed7a64;
  if (*(char *)(lVar7 + 0x30) == '\0') {
    bVar3 = false;
    puVar12 = (undefined8 *)PTR_DAT_084c7ef0;
  }
  else {
    bVar3 = *(char *)(lVar7 + 0x32) == '\0';
    puVar12 = (undefined8 *)PTR_DAT_084d1870;
    if (!bVar3) {
      puVar12 = (undefined8 *)PTR_DAT_084c7ef0;
    }
  }
  if (*(long *)(unaff_x19 + 0x90) == 0) goto LAB_06ed7a64;
  uVar13 = *puVar12;
  puVar12 = (undefined8 *)PTR_DAT_084c7ef0;
  if (!bVar3) {
    puVar12 = (undefined8 *)PTR_DAT_084d1870;
  }
  FUN_06fafb24(*(long *)(unaff_x19 + 0x90),*puVar12,0);
  plVar9 = *(long **)(unaff_x19 + 0xe8);
  if (plVar9 == (long *)0x0) goto LAB_06ed7a64;
  uVar10 = (**(code **)(*plVar9 + 0x178))(plVar9,*(undefined8 *)(*plVar9 + 0x180));
  uVar8 = FUN_067702f0(uVar10,0,0);
  if ((uVar8 & 1) == 0) {
    lVar7 = *(long *)puVar1;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
      lVar7 = *(long *)puVar1;
    }
    uVar4 = FUN_067702f0(uVar10,*(undefined8 *)(*(long *)(lVar7 + 0xb8) + 8),0);
  }
  else {
    uVar4 = 1;
  }
  if (*(char *)(unaff_x19 + 0x98) == '\0') {
LAB_06ed7864:
    lVar7 = *(long *)puVar1;
    uVar10 = *(undefined8 *)(unaff_x19 + 0xc0);
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
      lVar7 = *(long *)puVar1;
    }
    uVar8 = FUN_067702f0(uVar10,*(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x10),0);
    if ((uVar8 & 1) != 0) {
      lVar7 = *(long *)(unaff_x19 + 0x90);
      puVar12 = (undefined8 *)PTR_DAT_0849bb10;
joined_r0x06ed784c:
      if (lVar7 == 0) goto LAB_06ed7a64;
      FUN_06fafad0(lVar7,uVar13,*puVar12,0);
    }
  }
  else {
    lVar7 = *(long *)puVar1;
    uVar10 = *(undefined8 *)(unaff_x19 + 0xc0);
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
      lVar7 = *(long *)puVar1;
    }
    uVar5 = FUN_067702f0(uVar10,*(undefined8 *)(*(long *)(lVar7 + 0xb8) + 8),0);
    if (((uVar4 | uVar5) & 1) != 0) {
      if (*(long *)(unaff_x19 + 0x90) == 0) goto LAB_06ed7a64;
      lVar7 = FUN_06f8dba8(*(long *)(unaff_x19 + 0x90),uVar13,0);
      if (lVar7 != 0) {
        if ((*(long *)(unaff_x19 + 0x90) == 0) ||
           (lVar7 = FUN_06f8dba8(*(long *)(unaff_x19 + 0x90),uVar13,0), lVar7 == 0))
        goto LAB_06ed7a64;
        iVar6 = FUN_065d254c(lVar7,*(undefined8 *)PTR_DAT_084d15e8,5,0);
        if (iVar6 != -1) goto LAB_06ed78b4;
      }
      lVar7 = *(long *)(unaff_x19 + 0x90);
      puVar12 = (undefined8 *)PTR_DAT_084d15e8;
      goto joined_r0x06ed784c;
    }
    if (*(char *)(unaff_x19 + 0x98) == '\0') goto LAB_06ed7864;
  }
LAB_06ed78b4:
  uVar13 = *(undefined8 *)(unaff_x19 + 0x160);
  if (*(int *)(*(long *)PTR_DAT_084acd28 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  uVar8 = FUN_06ec6ba4(uVar13,0,0);
  if ((uVar8 & 1) == 0) {
    if (*(long *)(unaff_x19 + 0x40) == 0) goto LAB_06ed7a64;
    uVar8 = FUN_06ec8b80(*(long *)(unaff_x19 + 0x40),0);
    lVar7 = *(long *)(unaff_x19 + 0x40);
    if ((uVar8 & 1) != 0) goto LAB_06ed7918;
UnityWebSocketSharp_ErrorEventArgs__get_Message:
    if (lVar7 == 0) goto LAB_06ed7a64;
    uVar13 = 0x84;
  }
  else {
    lVar7 = *(long *)(unaff_x19 + 0x160);
    if (*(char *)(unaff_x19 + 0x158) != '\0') goto UnityWebSocketSharp_ErrorEventArgs__get_Message;
LAB_06ed7918:
    if (lVar7 == 0) goto LAB_06ed7a64;
    uVar13 = 4;
  }
  uVar13 = FUN_06ecd72c(lVar7,uVar13,2,0);
  if (*(long *)(unaff_x19 + 0x90) == 0) goto LAB_06ed7a64;
  FUN_06fb0788(*(long *)(unaff_x19 + 0x90),*(undefined8 *)PTR_DAT_0848b560,uVar13,0);
  puVar1 = PTR_DAT_08486bc0;
  if (*(long *)(unaff_x19 + 0x78) != 0) {
    uVar13 = FUN_06fc20a0(*(long *)(unaff_x19 + 0x78),*(undefined8 *)(unaff_x19 + 0x40),0);
    uVar8 = FUN_065cc2f0(uVar13,*(undefined8 *)puVar1,0);
    lVar7 = *(long *)(unaff_x19 + 0x90);
    if ((uVar8 & 1) == 0) {
      if (lVar7 == 0) goto LAB_06ed7a64;
      FUN_06fafb24(lVar7,*(undefined8 *)PTR_DAT_084d1860,0);
    }
    else {
      if (lVar7 == 0) goto LAB_06ed7a64;
      FUN_06fafad0(lVar7,*(undefined8 *)PTR_DAT_084d1860,uVar13,0);
    }
  }
  lVar7 = 0;
  if ((*(uint *)(unaff_x19 + 0x134) & 1) != 0) {
    lVar7 = *(long *)PTR_DAT_084d1850;
  }
  plVar9 = (long *)PTR_DAT_084d1858;
  if (lVar7 != 0) {
    plVar9 = (long *)PTR_DAT_084d1868;
  }
  if ((*(uint *)(unaff_x19 + 0x134) & 2) != 0) {
    lVar7 = *plVar9;
  }
  if (lVar7 != 0) {
    if (*(long *)(unaff_x19 + 0x90) == 0) goto LAB_06ed7a64;
    FUN_06fafad0(*(long *)(unaff_x19 + 0x90),*(undefined8 *)PTR_DAT_084c8828,lVar7,0);
  }
  if ((*(char *)(unaff_x19 + 0xba) == '\0') && (*(char *)(unaff_x19 + 0xb9) != '\0')) {
    FUN_06ed7b04();
  }
  plVar9 = *(long **)(unaff_x19 + 0x90);
  if (plVar9 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x06ed7a4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar9 + 0x168))(plVar9,*(undefined8 *)(*plVar9 + 0x170));
    return;
  }
LAB_06ed7a64:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


