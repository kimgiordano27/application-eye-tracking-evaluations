/*
FUNCTION_NAME: OVRPlugin.OVRP_1_59_0$$.cctor
ENTRY_POINT: 02c53ca8
PROGRAM: sharks-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool OVRPlugin_OVRP_1_59_0___cctor(long param_1,uint param_2,ulong param_3)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  undefined4 uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 uVar11;
  undefined1 auVar12 [16];
  undefined4 uStack_68;
  undefined4 uStack_64;
  code *pcStack_60;
  
  if ((DAT_03a2614d & 1) == 0) {
    FUN_017fc350(PTR_DAT_037f6f10);
    DAT_03a2614d = 1;
  }
  puVar9 = PTR_DAT_037f6f10;
  if (*(int *)(param_1 + 0x38) < 1) {
                    /* try { // try from 02c53cec to 02d53cf7 has its CatchHandler @ 02c53d3c */
    if (*(long *)(param_1 + 0x30) != 0) {
      iVar2 = *(int *)(*(long *)(param_1 + 0x30) + 0x10);
      uVar1 = iVar2 + 1;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      *(int *)(param_1 + 0x38) = iVar2 >> 1;
      *(undefined4 *)(param_1 + 0x3c) = 0xffffffff;
                    /* try { // try from 02c53d14 to 02d53d1f has its CatchHandler @ 02c53d34 */
      return 2 < uVar1;
    }
LAB_02c53d5c:
                    /* WARNING: Subroutine does not return */
    FUN_017fc5a8();
  }
                    /* try { // try from 02c53d28 to 02d53d2b has its CatchHandler @ 02c53d40 */
                    /* try { // try from 02c53d2c to 02d53d2f has its CatchHandler @ 02c53d38 */
  if (*(int *)(*(long *)PTR_DAT_037f6f10 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
  }
  uVar5 = FUN_02b4ae98(param_2,0);
  if (((uVar5 & 1) != 0) && (-1 < *(int *)(param_1 + 0x38))) {
    if (*(long *)(param_1 + 0x30) == 0) goto LAB_02c53d5c;
    param_3 = 0;
    uVar4 = FUN_02a4b568(*(long *)(param_1 + 0x30),*(int *)(param_1 + 0x3c) + 1,0);
    lVar10 = *(long *)puVar9;
    if (*(int *)(lVar10 + 0xe0) == 0) {
      thunk_FUN_01843fdc(lVar10);
    }
    uVar5 = FUN_02b4afa8(uVar4,0);
    if ((uVar5 & 1) != 0) {
      uVar11 = *(undefined8 *)(param_1 + 0x30);
      iVar2 = *(int *)(param_1 + 0x3c);
      FUN_015d6ff8(uVar11);
      uVar4 = FUN_02a4b568(uVar11,iVar2 + 1,0);
      FUN_015d6960(*(undefined8 *)puVar9);
      param_3 = 0;
      uVar5 = FUN_02b4afd8(param_2,uVar4,0);
      uVar5 = FUN_02c530c0(uVar5,uVar5 & 0xffffffff);
    }
  }
  auVar12 = FUN_02c530c0(uVar5,param_2 & 0xffff);
  puVar9 = PTR_DAT_037f6f10;
  lVar10 = auVar12._0_8_;
  pcStack_60 = FUN_02c53de8;
  uVar5 = auVar12._8_8_ & 0xffffffff;
  if ((DAT_03a2614e & 1) == 0) {
    FUN_017fc350(PTR_DAT_037f6f10);
    DAT_03a2614e = 1;
  }
  if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
  }
  uVar6 = FUN_02b4ae98(uVar5,0);
  puVar3 = PTR_DAT_037f2f90;
  if ((uVar6 & 1) == 0) {
    uStack_64 = 0xd800;
    uVar11 = thunk_FUN_01851c08(PTR_DAT_037f2f90);
    uVar11 = thunk_FUN_018617ec(uVar11,&uStack_64);
    uStack_68 = 0xdbff;
    uVar7 = thunk_FUN_01851c08(puVar3);
    uVar7 = thunk_FUN_018617ec(uVar7,&uStack_68);
    uVar8 = thunk_FUN_01851c08(PTR_DAT_03800920);
    uVar11 = FUN_02a2f440(uVar8,uVar11,uVar7,0);
    thunk_FUN_01851c08(PTR_DAT_037f86c0);
    uVar7 = thunk_FUN_01861bbc();
    puVar9 = PTR_DAT_0380cb70;
  }
  else {
    if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
    uVar6 = FUN_02b4afa8(param_3 & 0xffffffff,0);
    puVar3 = PTR_DAT_037f2f90;
    if ((uVar6 & 1) != 0) {
      if (*(int *)(lVar10 + 0x38) < 1) {
        if (*(long *)(lVar10 + 0x30) != 0) {
          iVar2 = *(int *)(*(long *)(lVar10 + 0x30) + 0x10);
          *(int *)(lVar10 + 0x38) = iVar2;
          *(undefined4 *)(lVar10 + 0x3c) = 0xffffffff;
          return iVar2 != 0;
        }
      }
      else {
        FUN_015d6960(*(undefined8 *)puVar9);
        uVar5 = FUN_02b4afd8(uVar5,param_3 & 0xffffffff,0);
        FUN_02c530c0(uVar5,uVar5 & 0xffffffff);
      }
                    /* WARNING: Subroutine does not return */
      FUN_017fc5a8();
    }
    uStack_64 = 0xdc00;
    uVar11 = thunk_FUN_01851c08(PTR_DAT_037f2f90);
    uVar11 = thunk_FUN_018617ec(uVar11,&uStack_64);
    uStack_68 = 0xdfff;
    uVar7 = thunk_FUN_01851c08(puVar3);
    uVar7 = thunk_FUN_018617ec(uVar7,&uStack_68);
    uVar8 = thunk_FUN_01851c08(PTR_DAT_03800920);
    uVar11 = FUN_02a2f440(uVar8,uVar11,uVar7,0);
    thunk_FUN_01851c08(PTR_DAT_037f86c0);
    uVar7 = thunk_FUN_01861bbc();
    puVar9 = PTR_DAT_0380cb78;
  }
  uVar8 = thunk_FUN_01851c08(puVar9);
  FUN_02b40444(uVar7,uVar8,uVar11,0);
  uVar11 = thunk_FUN_01851c08(PTR_DAT_0380cc00);
                    /* WARNING: Subroutine does not return */
  FUN_017fc474(uVar7,uVar11);
}


