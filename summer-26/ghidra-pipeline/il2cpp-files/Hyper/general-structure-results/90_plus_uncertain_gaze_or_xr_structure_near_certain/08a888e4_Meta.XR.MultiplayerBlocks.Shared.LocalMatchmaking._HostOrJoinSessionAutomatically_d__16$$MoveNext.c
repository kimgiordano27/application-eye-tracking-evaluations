/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.LocalMatchmaking.<HostOrJoinSessionAutomatically>d__16$$MoveNext
ENTRY_POINT: 08a888e4
PROGRAM: Hyper-libil2cpp.so
SCORE: 92
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_13;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MultiplayerBlocks_Shared_LocalMatchmaking_<HostOrJoinSessionAutomatically>d__16__MoveNext
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  int *unaff_x19;
  long unaff_x20;
  long lVar13;
  long *plVar14;
  long lVar15;
  int iStack0000000000000008;
  int iStack000000000000000c;
  undefined8 in_stack_00000010;
  char in_stack_00000018;
  int in_stack_00000030;
  char in_stack_00000038;
  int in_stack_00000050;
  undefined4 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000098;
  
  FUN_04947ee4(*(undefined8 *)(param_1 + 0xb78));
  FUN_04947ee4(PTR_DAT_0ac54b80);
  FUN_04947ee4(PTR_DAT_0ac54b88);
  FUN_04947ee4(PTR_DAT_0ac4cd98);
  FUN_04947ee4(PTR_DAT_0ac46eb8);
  FUN_04947ee4(PTR_DAT_0ac53b10);
  FUN_04947ee4(PTR_DAT_0ac53688);
  FUN_04947ee4(PTR_DAT_0ac549a0);
  FUN_04947ee4(PTR_DAT_0ac549a8);
  FUN_04947ee4(PTR_DAT_0ac549b0);
  FUN_04947ee4(PTR_DAT_0ac09c40);
  FUN_04947ee4(PTR_DAT_0ac40270);
  FUN_04947ee4(PTR_DAT_0ac54b90);
  FUN_04947ee4(PTR_DAT_0ac548c8);
  FUN_04947ee4(PTR_DAT_0ac54b98);
  FUN_04947ee4(PTR_DAT_0ac54ba0);
  FUN_04947ee4(PTR_DAT_0ac54ba8);
  FUN_04947ee4(PTR_DAT_0ac54bb0);
  FUN_04947ee4(PTR_DAT_0ac09810);
  FUN_04947ee4(PTR_DAT_0ac46ed8);
  *(undefined1 *)(unaff_x20 + 0x697) = 1;
  lVar13 = *(long *)(unaff_x19 + 10);
  in_stack_00000098 = 0;
  in_stack_00000088 = 0;
  in_stack_00000080 = 0;
  if (*unaff_x19 == 0) {
    in_stack_00000098 = *(undefined8 *)(unaff_x19 + 0x14);
    unaff_x19[0x14] = 0;
    unaff_x19[0x15] = 0;
    *unaff_x19 = -1;
LAB_08a88c14:
    uVar6 = FUN_07684508(&stack0x00000098,*(undefined8 *)PTR_DAT_0ac549a0);
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    *(undefined8 *)(lVar13 + 0x168) = uVar6;
    thunk_FUN_049ee3d8(lVar13 + 0x168);
    *(undefined1 *)(lVar13 + 0x17c) = 0;
LAB_08a88c40:
    lVar10 = *(long *)(lVar13 + 0x168);
    if ((((lVar10 == 0) || (*(long *)(lVar13 + 0x188) == 0)) ||
        (lVar15 = *(long *)(*(long *)(lVar13 + 0x188) + 0x18), lVar15 == 0)) ||
       (*(int *)(lVar15 + 0x18) < 2)) goto LAB_08a88de8;
    uVar6 = FUN_05b6aadc(lVar15,*(undefined8 *)PTR_DAT_0ac54b48);
    if (*(int *)(*(long *)PTR_DAT_0ac40270 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    uVar7 = FUN_05b70868(lVar15,*(undefined8 *)PTR_DAT_0ac54b58);
    uVar8 = FUN_08a7d9b4(lVar13);
    puVar1 = PTR_DAT_0ac09c40;
    if (*(int *)(*(long *)PTR_DAT_0ac09c40 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    uVar11 = FUN_08d93650(uVar8,uVar7,0);
    if ((uVar11 & 1) != 0) goto LAB_08a88de8;
    uVar7 = FUN_08a7d9b4(lVar13);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    uVar11 = FUN_08d9362c(uVar7,uVar6,0);
    if ((uVar11 & 1) != 0) goto LAB_08a88de8;
    bVar3 = FUN_08a8066c(lVar13);
    bVar4 = FUN_08a80754(lVar13);
    if ((bVar3 & (bVar4 ^ 0xff) & 1) != 0) goto LAB_08a88de8;
    if ((bVar3 & 1) == 0) {
      uVar6 = FUN_08a7d9b4(lVar13);
      FUN_08a4d718(&stack0x00000010,lVar15,uVar6,0);
      iVar5 = 0;
      if (in_stack_00000018 != '\0') {
        iVar5 = in_stack_00000030;
      }
      if (in_stack_00000038 != '\0') {
        iVar5 = in_stack_00000050;
      }
    }
    else {
      iVar5 = *(int *)(lVar10 + 0x48);
    }
    puVar1 = PTR_DAT_0ac54b68;
    unaff_x19[0xe] = iVar5;
    uVar6 = FUN_05b84390(lVar15,iVar5,*(undefined8 *)puVar1);
    uVar6 = FUN_05b84838(uVar6,100,*(undefined8 *)PTR_DAT_0ac54b70);
    puVar1 = PTR_DAT_0ac548c8;
    lVar10 = *(long *)PTR_DAT_0ac548c8;
    if (*(int *)(lVar10 + 0xe4) == 0) {
      thunk_FUN_049a583c();
      lVar10 = *(long *)puVar1;
    }
    puVar9 = *(undefined8 **)(lVar10 + 0xb8);
    lVar15 = puVar9[1];
    if (lVar15 == 0) {
      if (*(int *)(lVar10 + 0xe4) == 0) {
        thunk_FUN_049a583c();
        puVar9 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
      }
      uVar7 = *puVar9;
      lVar15 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac54b80);
      FUN_06416d84(lVar15,uVar7,*(undefined8 *)PTR_DAT_0ac54b90,0);
      plVar14 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
      *plVar14 = lVar15;
      thunk_FUN_049ee3d8(plVar14,lVar15);
    }
    uVar6 = FUN_05b7d188(uVar6,lVar15,*(undefined8 *)PTR_DAT_0ac54b60);
    lVar10 = FUN_05b85c68(uVar6,*(undefined8 *)PTR_DAT_0ac54b78);
    plVar14 = (long *)(unaff_x19 + 0x10);
    *plVar14 = lVar10;
    thunk_FUN_049ee3d8(plVar14);
    lVar10 = *plVar14;
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    uVar6 = *(undefined8 *)PTR_DAT_0ac54b38;
    unaff_x19[0x12] = unaff_x19[0xe] + *(int *)(lVar10 + 0x18);
    *(byte *)(unaff_x19 + 0x13) = (bVar3 ^ 0xff) & 1;
    uVar11 = FUN_05b4f550(lVar10,uVar6);
    if ((uVar11 & 1) == 0) goto LAB_08a88de8;
    lVar15 = *(long *)(lVar13 + 0x140);
    lVar10 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac54b88);
    FUN_08a3f034(lVar10,0);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    *(long *)(lVar10 + 0x10) = *plVar14;
    thunk_FUN_049ee3d8();
    *(int *)(lVar10 + 0x1c) = unaff_x19[0x12];
    *(char *)(lVar10 + 0x18) = (char)unaff_x19[0x13];
    if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    lVar10 = FUN_08a3d2f0(lVar15,lVar10,*(undefined8 *)(unaff_x19 + 0xc),0);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    in_stack_00000098 = FUN_07764808(lVar10,*(undefined8 *)PTR_DAT_0ac549b0);
    uVar11 = FUN_076844c8(&stack0x00000098,*(undefined8 *)PTR_DAT_0ac549a8);
    if ((uVar11 & 1) == 0) {
      *unaff_x19 = 1;
      *(undefined8 *)(unaff_x19 + 0x14) = in_stack_00000098;
      thunk_FUN_049ee3d8(unaff_x19 + 0x14,0);
      FUN_05a6f734(unaff_x19 + 2,&stack0x00000098);
      return;
    }
  }
  else {
    if (*unaff_x19 != 1) {
      if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      iVar5 = FUN_08a7d750(lVar13);
      if (iVar5 != 4) goto LAB_08a88de8;
      if (*(char *)(lVar13 + 0x17c) != '\0') {
        lVar10 = FUN_08a7f190(lVar13,*(undefined8 *)(unaff_x19 + 0xc));
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0494818c();
        }
        in_stack_00000098 = FUN_07764808(lVar10,*(undefined8 *)PTR_DAT_0ac549b0);
        uVar11 = FUN_076844c8(&stack0x00000098,*(undefined8 *)PTR_DAT_0ac549a8);
        if ((uVar11 & 1) == 0) {
          *unaff_x19 = 0;
          *(undefined8 *)(unaff_x19 + 0x14) = in_stack_00000098;
          thunk_FUN_049ee3d8(unaff_x19 + 0x14,0);
          FUN_05a6f734(unaff_x19 + 2,&stack0x00000098);
          return;
        }
        goto LAB_08a88c14;
      }
      goto LAB_08a88c40;
    }
    in_stack_00000098 = *(undefined8 *)(unaff_x19 + 0x14);
    unaff_x19[0x14] = 0;
    unaff_x19[0x15] = 0;
    *unaff_x19 = -1;
  }
  uVar6 = FUN_07684508(&stack0x00000098,*(undefined8 *)PTR_DAT_0ac549a0);
  if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  *(undefined8 *)(lVar13 + 0x168) = uVar6;
  thunk_FUN_049ee3d8(lVar13 + 0x168);
  puVar1 = PTR_DAT_0ac46eb8;
  if (*(int *)(*(long *)PTR_DAT_0ac46eb8 + 0xe4) == 0) {
    thunk_FUN_049a583c();
  }
  if (DAT_0b32acf7 == '\0') {
    FUN_04947ee4(PTR_DAT_0ac46eb8);
    DAT_0b32acf7 = '\x01';
  }
  lVar13 = *(long *)puVar1;
  if (*(int *)(lVar13 + 0xe4) == 0) {
    thunk_FUN_049a583c();
    lVar13 = *(long *)puVar1;
  }
  puVar1 = PTR_DAT_0ac09758;
  iStack000000000000000c = unaff_x19[0xe];
  plVar14 = (long *)**(undefined8 **)(lVar13 + 0xb8);
  uVar6 = thunk_FUN_04983b98(*(undefined8 *)(PTR_DAT_0ac09758 + 0x48),(long)&stack0x00000008 + 4);
  in_stack_00000088 =
       FUN_05b69a38(*(undefined8 *)(unaff_x19 + 0x10),*(undefined8 *)PTR_DAT_0ac54b40);
  in_stack_00000010 = FUN_08a3f054(&stack0x00000088,0);
  puVar2 = PTR_DAT_0ac09c40;
  uVar7 = thunk_FUN_04983b98(*(undefined8 *)PTR_DAT_0ac09c40,&stack0x00000010);
  uVar6 = FUN_08bda628(*(undefined8 *)PTR_DAT_0ac54bb0,uVar6,uVar7,0);
  iStack0000000000000008 = unaff_x19[0x12];
  uVar7 = thunk_FUN_04983b98(*(undefined8 *)(puVar1 + 0x48),&stack0x00000008);
  in_stack_00000088 =
       FUN_05b6f604(*(undefined8 *)(unaff_x19 + 0x10),*(undefined8 *)PTR_DAT_0ac54b50);
  FUN_08a3f054(&stack0x00000088,0);
  uVar8 = thunk_FUN_04983b98(*(undefined8 *)puVar2);
  uVar7 = FUN_08bda628(*(undefined8 *)PTR_DAT_0ac54ba8,uVar7,uVar8,0);
  puVar9 = (undefined8 *)PTR_DAT_0ac09810;
  if ((char)unaff_x19[0x13] != '\0') {
    puVar9 = (undefined8 *)PTR_DAT_0ac54b98;
  }
  uVar6 = FUN_08bda228(*(undefined8 *)PTR_DAT_0ac54ba0,uVar6,uVar7,*puVar9,0);
  if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  lVar13 = *plVar14;
  uVar11 = (ulong)*(ushort *)(lVar13 + 0x12e);
  if (uVar11 != 0) {
    piVar12 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_0ac46ed8) {
        puVar9 = (undefined8 *)(lVar13 + (long)*piVar12 * 0x10 + 0x138);
        goto LAB_08a88dd8;
      }
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar11 != 0);
  }
  puVar9 = (undefined8 *)FUN_04980e68(plVar14,*(long *)PTR_DAT_0ac46ed8,0);
LAB_08a88dd8:
  (*(code *)*puVar9)(plVar14,uVar6,puVar9[1]);
LAB_08a88de8:
  piVar12 = unaff_x19 + 0x10;
  piVar12[0] = 0;
  piVar12[1] = 0;
  *unaff_x19 = -2;
  thunk_FUN_049ee3d8(piVar12,0);
  FUN_08c7f6c8(unaff_x19 + 2,0);
  return;
}


