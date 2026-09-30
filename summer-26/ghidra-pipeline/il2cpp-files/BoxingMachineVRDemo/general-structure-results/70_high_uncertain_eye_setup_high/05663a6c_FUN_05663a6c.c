/*
FUNCTION_NAME: FUN_05663a6c
ENTRY_POINT: 05663a6c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_17;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_05663a6c(long param_1,int param_2,int param_3,long *param_4,long *param_5)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  int *piVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  
                    /* try { // try from 05663a78 to 05763a83 has its CatchHandler @ 056636ec */
                    /* try { // try from 05663a84 to 05763a8b has its CatchHandler @ 05663a8c */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 05663a10 with catch @ 05663a8c
                       catch(type#2 @ 00000000) { ... } // from try @ 05663a84 with catch @ 05663a8c
                        */
  if ((DAT_06b7f796 & 1) == 0) {
    FUN_02d6084c(System_Func<PointerEnterEvent>_TypeInfo);
    FUN_02d6084c(PTR_DAT_0675e238);
    FUN_02d6084c(PTR_DAT_067679f0);
    FUN_02d6084c(OVRTask<OVRResult<ulong,_OVRPlugin_Result>>_TypeInfo);
    FUN_02d6084c(System_Collections_Generic_List<InteractionTrigger>_TypeInfo);
    FUN_02d6084c(PTR_DAT_06763640);
    DAT_06b7f796 = 1;
  }
  uVar6 = FUN_05665c10(param_1);
  iVar3 = FUN_05665cb4(param_1);
  *param_4 = 0;
  thunk_FUN_02dd37b4(param_4,0);
  *param_5 = 0;
  thunk_FUN_02dd37b4(param_5,0);
  iVar4 = FUN_05662fe8(param_1,1);
  if (iVar4 != 0x23) {
    FUN_05667274(param_1,*(undefined4 *)(param_1 + 0x5c),*(undefined8 *)PTR_DAT_06763640,
                 *(undefined8 *)PTR_DAT_067679f0);
  }
  lVar7 = FUN_0566694c(param_1);
  if (param_2 == 0x22) {
    *param_5 = lVar7;
    thunk_FUN_02dd37b4(param_5);
    if (*param_5 == 0) goto LAB_05663f84;
    iVar4 = FUN_04e921f4(*param_5,0x23,0);
    if (-1 < iVar4) {
      if (*param_5 == 0) goto LAB_05663f84;
      uVar1 = *(uint *)(*param_5 + 0x10);
      iVar4 = *(int *)(param_1 + 0x5c);
      lVar7 = FUN_02d60934(*(undefined8 *)PTR_DAT_0675e238,2);
      lVar14 = *param_5;
      if (lVar14 == 0) goto LAB_05663f84;
      uVar5 = FUN_04e921f4(lVar14,0x23,0);
      uVar8 = FUN_04e9195c(lVar14,uVar5,0);
      if (lVar7 == 0) goto LAB_05663f84;
      if (*(int *)(lVar7 + 0x18) == 0) {
LAB_05663f88:
                    /* WARNING: Subroutine does not return */
        FUN_02d60af0();
      }
      *(undefined8 *)(lVar7 + 0x20) = uVar8;
      thunk_FUN_02dd37b4((undefined8 *)(lVar7 + 0x20),uVar8);
      if (*(uint *)(lVar7 + 0x18) < 2) goto LAB_05663f88;
      *(long *)(lVar7 + 0x28) = *param_5;
      thunk_FUN_02dd37b4();
      FUN_056673e8(param_1,iVar4 + ~uVar1,
                   *(undefined8 *)OVRTask<OVRResult<ulong,_OVRPlugin_Result>>_TypeInfo,lVar7);
    }
    if ((param_3 != 0x24) || (*(char *)(param_1 + 0x88) != '\0')) {
      return;
    }
    plVar13 = *(long **)(param_1 + 0x10);
    *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) + 1;
    if (plVar13 == (long *)0x0) {
LAB_05663f84:
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    lVar14 = *plVar13;
    lVar12 = *param_5;
    uVar8 = *(undefined8 *)(param_1 + 0x9c);
    uVar10 = (ulong)*(ushort *)(lVar14 + 0x12e);
    uVar6 = uVar6 & 0xffffffff | (ulong)(iVar3 - 6) << 0x20;
    lVar7 = *(long *)System_Func<PointerEnterEvent>_TypeInfo;
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == lVar7) goto LAB_05663f48;
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
  }
  else {
    *param_4 = lVar7;
    thunk_FUN_02dd37b4(param_4);
    iVar4 = FUN_05662638(param_1 + 0x30,*param_4);
    if (-1 < iVar4) {
      lVar7 = *param_4;
      if (lVar7 == 0) goto LAB_05663f84;
      FUN_056625bc(param_1,*(int *)(param_1 + 0x5c) + iVar4 + ~*(uint *)(lVar7 + 0x10),lVar7,iVar4);
    }
    if (param_3 != 0x24) {
      iVar3 = FUN_05662fe8(param_1,0);
      if (iVar3 == 0x23) {
LAB_05663d38:
        if (*(char *)(param_1 + 0x6c) == '\0') {
          uVar8 = FUN_04e938b4(0,*(undefined2 *)(param_1 + 0xa4),1,0);
          FUN_05665d64(param_1,*(undefined8 *)
                                System_Collections_Generic_List<InteractionTrigger>_TypeInfo,uVar8,
                       *(undefined4 *)(param_1 + 0x9c),*(undefined4 *)(param_1 + 0xa0));
        }
        lVar7 = FUN_0566694c(param_1);
        *param_5 = lVar7;
        thunk_FUN_02dd37b4(param_5,lVar7);
        return;
      }
      if (param_3 == 8) {
        return;
      }
LAB_05663f10:
      FUN_05667274(param_1,*(undefined4 *)(param_1 + 0x5c),*(undefined8 *)PTR_DAT_06763640,
                   *(undefined8 *)PTR_DAT_067679f0);
      return;
    }
    if (*(char *)(param_1 + 0x88) != '\0') {
      iVar3 = FUN_05662fe8(param_1,0);
      if (iVar3 == 0x23) goto LAB_05663d38;
      goto LAB_05663f10;
    }
    plVar13 = *(long **)(param_1 + 0x10);
    *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) + 1;
    puVar2 = System_Func<PointerEnterEvent>_TypeInfo;
    if (plVar13 == (long *)0x0) goto LAB_05663f84;
    lVar7 = *plVar13;
    lVar14 = *param_4;
    uVar8 = *(undefined8 *)(param_1 + 0x9c);
    uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
    uVar6 = uVar6 & 0xffffffff | (ulong)(iVar3 - 6) << 0x20;
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)System_Func<PointerEnterEvent>_TypeInfo) {
          puVar9 = (undefined8 *)(lVar7 + (long)(*piVar11 + 0x17) * 0x10 + 0x138);
          goto LAB_05663e38;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar9 = (undefined8 *)
             FUN_02d9a5d4(plVar13,*(long *)System_Func<PointerEnterEvent>_TypeInfo,0x17);
LAB_05663e38:
    (*(code *)*puVar9)(plVar13,lVar14,uVar6,uVar8,puVar9[1]);
    iVar3 = FUN_05662fe8(param_1,0);
    if (iVar3 != 0x23) goto LAB_05663f10;
    if (*(char *)(param_1 + 0x6c) == '\0') {
      uVar8 = FUN_04e938b4(0,*(undefined2 *)(param_1 + 0xa4),1,0);
      FUN_05665d64(param_1,*(undefined8 *)
                            System_Collections_Generic_List<InteractionTrigger>_TypeInfo,uVar8,
                   *(undefined4 *)(param_1 + 0x9c),*(undefined4 *)(param_1 + 0xa0));
    }
    lVar7 = FUN_0566694c(param_1);
    *param_5 = lVar7;
    thunk_FUN_02dd37b4(param_5,lVar7);
    plVar13 = *(long **)(param_1 + 0x10);
    *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) + 1;
    if (plVar13 == (long *)0x0) goto LAB_05663f84;
    lVar14 = *plVar13;
    lVar12 = *param_5;
    uVar8 = *(undefined8 *)(param_1 + 0x9c);
    lVar7 = *(long *)puVar2;
    uVar10 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == lVar7) goto LAB_05663f48;
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
  }
  puVar9 = (undefined8 *)FUN_02d9a5d4(plVar13,lVar7,0x16);
LAB_05663f58:
                    /* WARNING: Could not recover jumptable at 0x05663f80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar9)(plVar13,lVar12,uVar6,uVar8,puVar9[1]);
  return;
LAB_05663f48:
  puVar9 = (undefined8 *)(lVar14 + (long)(*piVar11 + 0x16) * 0x10 + 0x138);
  goto LAB_05663f58;
}


