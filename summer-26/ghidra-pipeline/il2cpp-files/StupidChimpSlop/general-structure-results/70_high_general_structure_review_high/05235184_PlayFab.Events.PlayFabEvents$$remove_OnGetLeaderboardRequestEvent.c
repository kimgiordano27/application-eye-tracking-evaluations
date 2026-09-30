/*
FUNCTION_NAME: PlayFab.Events.PlayFabEvents$$remove_OnGetLeaderboardRequestEvent
ENTRY_POINT: 05235184
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_10;telemetry_or_network_hits_2
*/


void PlayFab_Events_PlayFabEvents__remove_OnGetLeaderboardRequestEvent(ulong param_1,long param_2)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  byte bVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long unaff_x19;
  long unaff_x20;
  long lVar16;
  long lVar17;
  long lVar18;
  long unaff_x25;
  long *unaff_x27;
  long lVar19;
  long *unaff_x28;
  undefined1 uStack0000000000000018;
  undefined1 uStack000000000000001c;
  long in_stack_00000020;
  long in_stack_00000028;
  long in_stack_00000030;
  long in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  
  if ((param_1 & 1) == 0) {
    param_2 = FUN_02d8720c();
  }
  FUN_05f37c6c(**(undefined8 **)(param_2 + 0xb8),0);
  lVar17 = *unaff_x27;
  cVar1 = *(char *)(unaff_x19 + 0x24);
  lVar14 = *(long *)(lVar17 + 0x38);
  if (lVar14 == 0) {
    FUN_02d87268(lVar17);
    lVar14 = *(long *)(lVar17 + 0x38);
  }
  lVar14 = *(long *)(lVar14 + 0x10);
  if ((*(ushort *)(lVar14 + 0x135) & 1) == 0) {
    lVar14 = FUN_02d8720c();
  }
  if (*(int *)(lVar14 + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  puVar3 = System_Net_Http_Headers_ElementTryParser<TransferCodingHeaderValue>_TypeInfo;
  lVar14 = *(long *)(*(long *)(lVar17 + 0x38) + 0x10);
  if ((*(ushort *)(lVar14 + 0x135) & 1) == 0) {
    lVar14 = FUN_02d8720c();
  }
  bVar5 = FUN_05f3756c(cVar1 != '\0',*(undefined8 *)puVar3,**(undefined8 **)(lVar14 + 0xb8),0);
  lVar17 = *unaff_x27;
  cVar1 = *(char *)(unaff_x19 + 0x22);
  *(byte *)(unaff_x19 + 0x24) = bVar5 & 1;
  lVar14 = *(long *)(lVar17 + 0x38);
  if (lVar14 == 0) {
    FUN_02d87268(lVar17);
    lVar14 = *(long *)(lVar17 + 0x38);
  }
  lVar14 = *(long *)(lVar14 + 0x10);
  if ((*(ushort *)(lVar14 + 0x135) & 1) == 0) {
    lVar14 = FUN_02d8720c();
  }
  if (*(int *)(lVar14 + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  puVar3 = System_EmptyArray<char>_TypeInfo;
  lVar14 = *(long *)(*(long *)(lVar17 + 0x38) + 0x10);
  if ((*(ushort *)(lVar14 + 0x135) & 1) == 0) {
    lVar14 = FUN_02d8720c();
  }
  bVar5 = FUN_05f3756c(cVar1 != '\0',*(undefined8 *)puVar3,**(undefined8 **)(lVar14 + 0xb8),0);
  lVar17 = *unaff_x27;
  cVar1 = *(char *)(unaff_x19 + 0x23);
  *(byte *)(unaff_x19 + 0x22) = bVar5 & 1;
  lVar14 = *(long *)(lVar17 + 0x38);
  if (lVar14 == 0) {
    FUN_02d87268(lVar17);
    lVar14 = *(long *)(lVar17 + 0x38);
  }
  lVar14 = *(long *)(lVar14 + 0x10);
  if ((*(ushort *)(lVar14 + 0x135) & 1) == 0) {
    lVar14 = FUN_02d8720c();
  }
  if (*(int *)(lVar14 + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  puVar3 = System_EmptyArray<Type>_TypeInfo;
  lVar14 = *(long *)(*(long *)(lVar17 + 0x38) + 0x10);
  if ((*(ushort *)(lVar14 + 0x135) & 1) == 0) {
    lVar14 = FUN_02d8720c();
  }
  bVar5 = FUN_05f3756c(cVar1 != '\0',*(undefined8 *)puVar3,**(undefined8 **)(lVar14 + 0xb8),0);
  *(byte *)(unaff_x19 + 0x23) = bVar5 & 1;
  FUN_05f381d0(0);
  puVar4 = System_Net_Http_Headers_ElementTryParser<TransferCodingWithQualityHeaderValue>_TypeInfo;
  puVar3 = System_Net_Http_Headers_ElementTryParser<string>_TypeInfo;
  if (unaff_x20 == 0) goto LAB_05236028;
  uStack000000000000004c = FUN_051e02a4();
  puVar2 = PTR_DAT_066462a0;
  uVar7 = thunk_FUN_02d8a270(*(undefined8 *)(PTR_DAT_066462a0 + 0x48),(long)&stack0x00000048 + 4);
  uStack0000000000000048 = FUN_051e028c();
  uVar8 = thunk_FUN_02d8a270(*(undefined8 *)(puVar2 + 0x48),&stack0x00000048);
  in_stack_00000040._4_4_ = FUN_051e0264();
  uVar9 = thunk_FUN_02d8a270(*(undefined8 *)(puVar2 + 0x48),(long)&stack0x00000040 + 4);
  lVar14 = FUN_04e81020(*(undefined8 *)puVar4,uVar7,uVar8,uVar9,0);
  in_stack_00000038 = unaff_x25;
  uVar7 = thunk_FUN_02d8a270(*(undefined8 *)(puVar2 + 0x68),&stack0x00000038);
  lVar17 = FUN_04e762a8(*(undefined8 *)puVar3,uVar7,0);
  iVar6 = FUN_051e02a4();
  in_stack_00000030 = 0;
  if (unaff_x25 != 0) {
    in_stack_00000030 = (long)iVar6 / unaff_x25;
  }
  uVar7 = thunk_FUN_02d8a270(*(undefined8 *)(puVar2 + 0x68),&stack0x00000030);
  iVar6 = FUN_051e028c();
  in_stack_00000028 = 0;
  if (unaff_x25 != 0) {
    in_stack_00000028 = (long)iVar6 / unaff_x25;
  }
  uVar8 = thunk_FUN_02d8a270(*(undefined8 *)(puVar2 + 0x68),&stack0x00000028);
  iVar6 = FUN_051e0264();
  in_stack_00000020 = 0;
  if (unaff_x25 != 0) {
    in_stack_00000020 = (long)iVar6 / unaff_x25;
  }
  uVar9 = thunk_FUN_02d8a270(*(undefined8 *)(puVar2 + 0x68),&stack0x00000020);
  lVar10 = FUN_04e81020(*(undefined8 *)puVar4,uVar7,uVar8,uVar9,0);
  lVar18 = *unaff_x27;
  lVar15 = *(long *)(lVar18 + 0x38);
  if (lVar15 == 0) {
    FUN_02d87268(lVar18);
    lVar15 = *(long *)(lVar18 + 0x38);
  }
  lVar15 = *(long *)(lVar15 + 0x10);
  if ((*(ushort *)(lVar15 + 0x135) & 1) == 0) {
    lVar15 = FUN_02d8720c();
  }
  if (*(int *)(lVar15 + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  lVar15 = *(long *)(*(long *)(lVar18 + 0x38) + 0x10);
  if ((*(ushort *)(lVar15 + 0x135) & 1) == 0) {
    lVar15 = FUN_02d8720c();
  }
  FUN_05f36db0(lVar14,**(undefined8 **)(lVar15 + 0xb8),0);
  lVar18 = *unaff_x27;
  lVar15 = *(long *)(lVar18 + 0x38);
  if (lVar15 == 0) {
    FUN_02d87268(lVar18);
    lVar15 = *(long *)(lVar18 + 0x38);
  }
  lVar15 = *(long *)(lVar15 + 0x10);
  if ((*(ushort *)(lVar15 + 0x135) & 1) == 0) {
    lVar15 = FUN_02d8720c();
  }
  if (*(int *)(lVar15 + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  lVar15 = *(long *)(*(long *)(lVar18 + 0x38) + 0x10);
  if ((*(ushort *)(lVar15 + 0x135) & 1) == 0) {
    lVar15 = FUN_02d8720c();
  }
  FUN_05f36db0(lVar17,**(undefined8 **)(lVar15 + 0xb8),0);
  lVar18 = *unaff_x27;
  lVar15 = *(long *)(lVar18 + 0x38);
  if (lVar15 == 0) {
    FUN_02d87268(lVar18);
    lVar15 = *(long *)(lVar18 + 0x38);
  }
  lVar15 = *(long *)(lVar15 + 0x10);
  if ((*(ushort *)(lVar15 + 0x135) & 1) == 0) {
    lVar15 = FUN_02d8720c();
  }
  if (*(int *)(lVar15 + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  lVar15 = *(long *)(*(long *)(lVar18 + 0x38) + 0x10);
  if ((*(ushort *)(lVar15 + 0x135) & 1) == 0) {
    lVar15 = FUN_02d8720c();
  }
  FUN_05f36db0(lVar10,**(undefined8 **)(lVar15 + 0xb8),0);
  if (*(char *)(unaff_x19 + 0x24) == '\0') {
    uVar11 = 0;
  }
  else {
    lVar18 = *unaff_x27;
    lVar15 = *(long *)(lVar18 + 0x38);
    if (lVar15 == 0) {
      FUN_02d87268(lVar18);
      lVar15 = *(long *)(lVar18 + 0x38);
    }
    lVar15 = *(long *)(lVar15 + 0x10);
    if ((*(ushort *)(lVar15 + 0x135) & 1) == 0) {
      lVar15 = FUN_02d8720c();
    }
    if (*(int *)(lVar15 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    lVar15 = *(long *)(*(long *)(lVar18 + 0x38) + 0x10);
    if ((*(ushort *)(lVar15 + 0x135) & 1) == 0) {
      lVar15 = FUN_02d8720c();
    }
    FUN_05f37c6c(**(undefined8 **)(lVar15 + 0xb8),0);
    lVar18 = *unaff_x27;
    cVar1 = *(char *)(unaff_x19 + 0x21);
    lVar15 = *(long *)(lVar18 + 0x38);
    if (lVar15 == 0) {
      FUN_02d87268(lVar18);
      lVar15 = *(long *)(lVar18 + 0x38);
    }
    lVar15 = *(long *)(lVar15 + 0x10);
    if ((*(ushort *)(lVar15 + 0x135) & 1) == 0) {
      lVar15 = FUN_02d8720c();
    }
    if (*(int *)(lVar15 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    puVar3 = System_Net_Http_Headers_ElementTryParser<WarningHeaderValue>_TypeInfo;
    lVar15 = *(long *)(*(long *)(lVar18 + 0x38) + 0x10);
    if ((*(ushort *)(lVar15 + 0x135) & 1) == 0) {
      lVar15 = FUN_02d8720c();
    }
    bVar5 = FUN_05f3756c(cVar1 != '\0',*(undefined8 *)puVar3,**(undefined8 **)(lVar15 + 0xb8),0);
    lVar18 = *unaff_x27;
    *(byte *)(unaff_x19 + 0x21) = bVar5 & 1;
    lVar15 = *(long *)(lVar18 + 0x38);
    if (lVar15 == 0) {
      FUN_02d87268(lVar18);
      lVar15 = *(long *)(lVar18 + 0x38);
    }
    lVar15 = *(long *)(lVar15 + 0x10);
    if ((*(ushort *)(lVar15 + 0x135) & 1) == 0) {
      lVar15 = FUN_02d8720c();
    }
    if (*(int *)(lVar15 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    puVar3 = System_EmptyArray<CustomAttributeNamedArgument>_TypeInfo;
    lVar15 = *(long *)(*(long *)(lVar18 + 0x38) + 0x10);
    if ((*(ushort *)(lVar15 + 0x135) & 1) == 0) {
      lVar15 = FUN_02d8720c();
    }
    uVar11 = FUN_05f37104(*(undefined8 *)puVar3,**(undefined8 **)(lVar15 + 0xb8),0);
    if ((uVar11 & 1) != 0) {
      lVar15 = *unaff_x28;
      if (*(int *)(lVar15 + 0xe4) == 0) {
        thunk_FUN_02dabd98();
        lVar15 = *unaff_x28;
      }
      lVar15 = *(long *)(*(long *)(lVar15 + 0xb8) + 8);
      if ((lVar15 == 0) || (lVar15 = *(long *)(lVar15 + 0x10), lVar15 == 0)) goto LAB_05236028;
      FUN_051bf7e8(lVar15,0);
      lVar15 = *(long *)(*(long *)(*unaff_x28 + 0xb8) + 8);
      if ((lVar15 == 0) || (lVar15 = *(long *)(lVar15 + 0x10), lVar15 == 0)) goto LAB_05236028;
      FUN_051bf610(lVar15,1,0);
    }
    lVar18 = *unaff_x27;
    lVar15 = *(long *)(lVar18 + 0x38);
    if (lVar15 == 0) {
      FUN_02d87268(lVar18);
      lVar15 = *(long *)(lVar18 + 0x38);
    }
    lVar15 = *(long *)(lVar15 + 0x10);
    if ((*(ushort *)(lVar15 + 0x135) & 1) == 0) {
      lVar15 = FUN_02d8720c();
    }
    if (*(int *)(lVar15 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    puVar3 = System_EmptyArray<byte>_TypeInfo;
    lVar15 = *(long *)(*(long *)(lVar18 + 0x38) + 0x10);
    if ((*(ushort *)(lVar15 + 0x135) & 1) == 0) {
      lVar15 = FUN_02d8720c();
    }
    uVar11 = FUN_05f37104(*(undefined8 *)puVar3,**(undefined8 **)(lVar15 + 0xb8),0);
    uVar11 = uVar11 & 0xffffffff;
    FUN_05f381d0(0);
  }
  if (*(char *)(unaff_x19 + 0x23) == '\0') {
    lVar13 = **(long **)(*(long *)(puVar2 + 0x90) + 0xb8);
    lVar15 = lVar13;
    lVar18 = lVar13;
  }
  else {
    lVar18 = *unaff_x27;
    lVar15 = *(long *)(lVar18 + 0x38);
    if (lVar15 == 0) {
      FUN_02d87268(lVar18);
      lVar15 = *(long *)(lVar18 + 0x38);
    }
    lVar15 = *(long *)(lVar15 + 0x10);
    if ((*(ushort *)(lVar15 + 0x135) & 1) == 0) {
      lVar15 = FUN_02d8720c();
    }
    if (*(int *)(lVar15 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    puVar3 = System_EmptyArray<ParameterInfo>_TypeInfo;
    lVar15 = *(long *)(*(long *)(lVar18 + 0x38) + 0x10);
    if ((*(ushort *)(lVar15 + 0x135) & 1) == 0) {
      lVar15 = FUN_02d8720c();
    }
    FUN_05f36f90(*(undefined8 *)puVar3,**(undefined8 **)(lVar15 + 0xb8),0);
    lVar15 = *unaff_x28;
    if (*(int *)(lVar15 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
      lVar15 = *unaff_x28;
    }
    puVar3 = System_Net_Http_Headers_ElementTryParser<StringWithQualityHeaderValue>_TypeInfo;
    lVar15 = *(long *)(*(long *)(lVar15 + 0xb8) + 8);
    if (((lVar15 == 0) || (lVar15 = *(long *)(lVar15 + 0x10), lVar15 == 0)) ||
       (plVar12 = *(long **)(lVar15 + 0xa0), plVar12 == (long *)0x0)) goto LAB_05236028;
    uVar7 = (**(code **)(*plVar12 + 0x168))(plVar12,*(undefined8 *)(*plVar12 + 0x170));
    lVar13 = FUN_04e723e0(*(undefined8 *)puVar3,uVar7,0);
    puVar3 = System_Dynamic_Utils_EmptyReadOnlyCollection<Expression>_TypeInfo;
    lVar15 = *(long *)(*(long *)(*unaff_x28 + 0xb8) + 8);
    if (((lVar15 == 0) || (lVar15 = *(long *)(lVar15 + 0x10), lVar15 == 0)) ||
       (plVar12 = *(long **)(lVar15 + 0xa8), plVar12 == (long *)0x0)) goto LAB_05236028;
    uVar7 = (**(code **)(*plVar12 + 0x168))(plVar12,*(undefined8 *)(*plVar12 + 0x170));
    lVar15 = FUN_04e723e0(*(undefined8 *)puVar3,uVar7,0);
    lVar19 = *unaff_x27;
    lVar18 = *(long *)(lVar19 + 0x38);
    if (lVar18 == 0) {
      FUN_02d87268(lVar19);
      lVar18 = *(long *)(lVar19 + 0x38);
    }
    lVar18 = *(long *)(lVar18 + 0x10);
    if ((*(ushort *)(lVar18 + 0x135) & 1) == 0) {
      lVar18 = FUN_02d8720c();
    }
    if (*(int *)(lVar18 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    lVar18 = *(long *)(*(long *)(lVar19 + 0x38) + 0x10);
    if ((*(ushort *)(lVar18 + 0x135) & 1) == 0) {
      lVar18 = FUN_02d8720c();
    }
    FUN_05f36db0(lVar13,**(undefined8 **)(lVar18 + 0xb8),0);
    lVar19 = *unaff_x27;
    lVar18 = *(long *)(lVar19 + 0x38);
    if (lVar18 == 0) {
      FUN_02d87268(lVar19);
      lVar18 = *(long *)(lVar19 + 0x38);
    }
    lVar18 = *(long *)(lVar18 + 0x10);
    if ((*(ushort *)(lVar18 + 0x135) & 1) == 0) {
      lVar18 = FUN_02d8720c();
    }
    if (*(int *)(lVar18 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    lVar18 = *(long *)(*(long *)(lVar19 + 0x38) + 0x10);
    if ((*(ushort *)(lVar18 + 0x135) & 1) == 0) {
      lVar18 = FUN_02d8720c();
    }
    FUN_05f36db0(lVar15,**(undefined8 **)(lVar18 + 0xb8),0);
    lVar18 = **(long **)(*(long *)(puVar2 + 0x90) + 0xb8);
  }
  if (*(char *)(unaff_x19 + 0x22) != '\0') {
    lVar19 = *unaff_x27;
    lVar18 = *(long *)(lVar19 + 0x38);
    if (lVar18 == 0) {
      FUN_02d87268(lVar19);
      lVar18 = *(long *)(lVar19 + 0x38);
    }
    lVar18 = *(long *)(lVar18 + 0x10);
    if ((*(ushort *)(lVar18 + 0x135) & 1) == 0) {
      lVar18 = FUN_02d8720c();
    }
    if (*(int *)(lVar18 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    puVar3 = System_Net_Http_Headers_ElementTryParser<ProductHeaderValue>_TypeInfo;
    lVar18 = *(long *)(*(long *)(lVar19 + 0x38) + 0x10);
    if ((*(ushort *)(lVar18 + 0x135) & 1) == 0) {
      lVar18 = FUN_02d8720c();
    }
    FUN_05f36f90(*(undefined8 *)puVar3,**(undefined8 **)(lVar18 + 0xb8),0);
    plVar12 = (long *)FUN_02d4dd2c(*(undefined8 *)PTR_DAT_066463a0,9);
    in_stack_00000038 = CONCAT44(in_stack_00000038._4_4_,*(undefined4 *)(unaff_x20 + 0x54));
    lVar18 = thunk_FUN_02d8a270(*(undefined8 *)(puVar2 + 0x48),&stack0x00000038);
    if (plVar12 == (long *)0x0) goto LAB_05236028;
    if ((lVar18 != 0) &&
       (lVar19 = thunk_FUN_02d8a53c(lVar18,*(undefined8 *)(*plVar12 + 0x40)), lVar19 == 0))
    goto LAB_05236030;
    if ((int)plVar12[3] == 0) goto LAB_0523602c;
    plVar12[4] = lVar18;
    thunk_FUN_02dc1ef0(plVar12 + 4,lVar18);
    in_stack_00000030 = CONCAT44(in_stack_00000030._4_4_,*(undefined4 *)(unaff_x20 + 0x50));
    lVar18 = thunk_FUN_02d8a270(*(undefined8 *)(puVar2 + 0x48),&stack0x00000030);
    if ((lVar18 != 0) &&
       (lVar19 = thunk_FUN_02d8a53c(lVar18,*(undefined8 *)(*plVar12 + 0x40)), lVar19 == 0))
    goto LAB_05236030;
    if ((*(uint *)(plVar12 + 3) & 0xfffffffe) == 0) goto LAB_0523602c;
    plVar12[5] = lVar18;
    thunk_FUN_02dc1ef0(plVar12 + 5,lVar18);
    in_stack_00000028 = CONCAT44(in_stack_00000028._4_4_,*(undefined4 *)(unaff_x20 + 0x40));
    lVar18 = thunk_FUN_02d8a270(*(undefined8 *)(puVar2 + 0x48),&stack0x00000028);
    if ((lVar18 != 0) &&
       (lVar19 = thunk_FUN_02d8a53c(lVar18,*(undefined8 *)(*plVar12 + 0x40)), lVar19 == 0))
    goto LAB_05236030;
    if (*(uint *)(plVar12 + 3) < 3) goto LAB_0523602c;
    plVar12[6] = lVar18;
    thunk_FUN_02dc1ef0(plVar12 + 6,lVar18);
    uStack000000000000001c = *(undefined1 *)(unaff_x20 + 0x4c);
    lVar18 = thunk_FUN_02d8a270(*(undefined8 *)(puVar2 + 0x18),(long)&stack0x00000018 + 4);
    if ((lVar18 != 0) &&
       (lVar19 = thunk_FUN_02d8a53c(lVar18,*(undefined8 *)(*plVar12 + 0x40)), lVar19 == 0))
    goto LAB_05236030;
    if ((*(uint *)(plVar12 + 3) & 0xfffffffc) == 0) goto LAB_0523602c;
    plVar12[7] = lVar18;
    thunk_FUN_02dc1ef0(plVar12 + 7,lVar18);
    in_stack_00000020 = CONCAT44(in_stack_00000020._4_4_,*(undefined4 *)(unaff_x20 + 0x38));
    lVar18 = thunk_FUN_02d8a270(*(undefined8 *)(puVar2 + 0x48),&stack0x00000020);
    if ((lVar18 != 0) &&
       (lVar19 = thunk_FUN_02d8a53c(lVar18,*(undefined8 *)(*plVar12 + 0x40)), lVar19 == 0))
    goto LAB_05236030;
    if (*(uint *)(plVar12 + 3) < 5) goto LAB_0523602c;
    plVar12[8] = lVar18;
    thunk_FUN_02dc1ef0(plVar12 + 8,lVar18);
    uStack0000000000000018 = *(undefined1 *)(unaff_x20 + 0x3c);
    lVar18 = thunk_FUN_02d8a270(*(undefined8 *)(puVar2 + 0x18),&stack0x00000018);
    if ((lVar18 != 0) &&
       (lVar19 = thunk_FUN_02d8a53c(lVar18,*(undefined8 *)(*plVar12 + 0x40)), lVar19 == 0))
    goto LAB_05236030;
    if (*(uint *)(plVar12 + 3) < 6) goto LAB_0523602c;
    plVar12[9] = lVar18;
    thunk_FUN_02dc1ef0(plVar12 + 9,lVar18);
    lVar18 = *unaff_x28;
    if (*(int *)(lVar18 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
      lVar18 = *unaff_x28;
    }
    lVar18 = *(long *)(*(long *)(lVar18 + 0xb8) + 8);
    if ((lVar18 == 0) || (lVar18 = *(long *)(lVar18 + 0x10), lVar18 == 0)) goto LAB_05236028;
    uStack000000000000004c = FUN_051bf2d0(lVar18,0);
    lVar18 = thunk_FUN_02d8a270(*(undefined8 *)(puVar2 + 0x48),(long)&stack0x00000048 + 4);
    if ((lVar18 != 0) &&
       (lVar19 = thunk_FUN_02d8a53c(lVar18,*(undefined8 *)(*plVar12 + 0x40)), lVar19 == 0))
    goto LAB_05236030;
    if (*(uint *)(plVar12 + 3) < 7) goto LAB_0523602c;
    plVar12[10] = lVar18;
    thunk_FUN_02dc1ef0(plVar12 + 10,lVar18);
    lVar18 = *(long *)(*(long *)(*unaff_x28 + 0xb8) + 8);
    if ((lVar18 == 0) || (lVar18 = *(long *)(lVar18 + 0x10), lVar18 == 0)) goto LAB_05236028;
    uStack0000000000000048 = FUN_051bf2e8(lVar18,0);
    lVar18 = thunk_FUN_02d8a270(*(undefined8 *)(puVar2 + 0x48),&stack0x00000048);
    if ((lVar18 != 0) &&
       (lVar19 = thunk_FUN_02d8a53c(lVar18,*(undefined8 *)(*plVar12 + 0x40)), lVar19 == 0))
    goto LAB_05236030;
    if ((*(uint *)(plVar12 + 3) & 0xfffffff8) == 0) goto LAB_0523602c;
    plVar12[0xb] = lVar18;
    thunk_FUN_02dc1ef0(plVar12 + 0xb,lVar18);
    lVar18 = *(long *)(*(long *)(*unaff_x28 + 0xb8) + 8);
    if ((lVar18 == 0) || (lVar18 = *(long *)(lVar18 + 0x10), lVar18 == 0)) goto LAB_05236028;
    in_stack_00000040._4_4_ = FUN_051bf054(lVar18,0);
    lVar18 = thunk_FUN_02d8a270(*(undefined8 *)(puVar2 + 0x48),(long)&stack0x00000040 + 4);
    if ((lVar18 != 0) &&
       (lVar19 = thunk_FUN_02d8a53c(lVar18,*(undefined8 *)(*plVar12 + 0x40)), lVar19 == 0))
    goto LAB_05236030;
    puVar3 = System_Dynamic_Utils_EmptyReadOnlyCollection<ParameterExpression>_TypeInfo;
    if (*(uint *)(plVar12 + 3) < 9) goto LAB_0523602c;
    plVar12[0xc] = lVar18;
    thunk_FUN_02dc1ef0(plVar12 + 0xc,lVar18);
    lVar18 = FUN_04e81064(*(undefined8 *)puVar3,plVar12,0);
    lVar16 = *unaff_x27;
    lVar19 = *(long *)(lVar16 + 0x38);
    if (lVar19 == 0) {
      FUN_02d87268(lVar16);
      lVar19 = *(long *)(lVar16 + 0x38);
    }
    lVar19 = *(long *)(lVar19 + 0x10);
    if ((*(ushort *)(lVar19 + 0x135) & 1) == 0) {
      lVar19 = FUN_02d8720c();
    }
    if (*(int *)(lVar19 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    lVar19 = *(long *)(*(long *)(lVar16 + 0x38) + 0x10);
    if ((*(ushort *)(lVar19 + 0x135) & 1) == 0) {
      lVar19 = FUN_02d8720c();
    }
    FUN_05f36db0(lVar18,**(undefined8 **)(lVar19 + 0xb8),0);
  }
  if ((uVar11 & 1) == 0) {
LAB_05235fc4:
    puVar3 = PTR_DAT_06646bc8;
    if (*(int *)(*(long *)PTR_DAT_06646bc8 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    uVar11 = FUN_05f31478(0);
    if ((uVar11 & 1) != 0) {
      *(undefined4 *)(unaff_x19 + 0x34) = 0x42c80000;
    }
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    FUN_05f361c8(0);
    return;
  }
  plVar12 = (long *)FUN_02d4dd2c(*(undefined8 *)PTR_DAT_066463a0,6);
  if (plVar12 == (long *)0x0) {
LAB_05236028:
                    /* WARNING: Subroutine does not return */
    FUN_02d4dee8();
  }
  if ((lVar14 != 0) &&
     (lVar19 = thunk_FUN_02d8a53c(lVar14,*(undefined8 *)(*plVar12 + 0x40)), lVar19 == 0)) {
LAB_05236030:
    uVar7 = thunk_FUN_02d980e0();
                    /* WARNING: Subroutine does not return */
    FUN_02d4ddac(uVar7,0);
  }
  if ((int)plVar12[3] != 0) {
    plVar12[4] = lVar14;
    thunk_FUN_02dc1ef0(plVar12 + 4,lVar14);
    if ((lVar17 != 0) &&
       (lVar14 = thunk_FUN_02d8a53c(lVar17,*(undefined8 *)(*plVar12 + 0x40)), lVar14 == 0))
    goto LAB_05236030;
    if ((*(uint *)(plVar12 + 3) & 0xfffffffe) != 0) {
      plVar12[5] = lVar17;
      thunk_FUN_02dc1ef0(plVar12 + 5,lVar17);
      if ((lVar10 != 0) &&
         (lVar14 = thunk_FUN_02d8a53c(lVar10,*(undefined8 *)(*plVar12 + 0x40)), lVar14 == 0))
      goto LAB_05236030;
      if (2 < *(uint *)(plVar12 + 3)) {
        plVar12[6] = lVar10;
        thunk_FUN_02dc1ef0(plVar12 + 6,lVar10);
        if ((lVar13 != 0) &&
           (lVar14 = thunk_FUN_02d8a53c(lVar13,*(undefined8 *)(*plVar12 + 0x40)), lVar14 == 0))
        goto LAB_05236030;
        if ((*(uint *)(plVar12 + 3) & 0xfffffffc) != 0) {
          plVar12[7] = lVar13;
          thunk_FUN_02dc1ef0(plVar12 + 7,lVar13);
          if ((lVar15 != 0) &&
             (lVar14 = thunk_FUN_02d8a53c(lVar15,*(undefined8 *)(*plVar12 + 0x40)), lVar14 == 0))
          goto LAB_05236030;
          if (4 < *(uint *)(plVar12 + 3)) {
            plVar12[8] = lVar15;
            thunk_FUN_02dc1ef0(plVar12 + 8,lVar15);
            if ((lVar18 != 0) &&
               (lVar14 = thunk_FUN_02d8a53c(lVar18,*(undefined8 *)(*plVar12 + 0x40)), lVar14 == 0))
            goto LAB_05236030;
            if (5 < *(uint *)(plVar12 + 3)) {
              plVar12[9] = lVar18;
              thunk_FUN_02dc1ef0(plVar12 + 9,lVar18);
              uVar7 = FUN_04e81064(*(undefined8 *)
                                    System_Net_Http_Headers_ElementTryParser<ViaHeaderValue>_TypeInfo
                                   ,plVar12,0);
              if (*(int *)(*(long *)PTR_DAT_06646730 + 0xe4) == 0) {
                thunk_FUN_02dabd98(*(long *)PTR_DAT_06646730);
              }
              FUN_05ea2238(uVar7,0);
              goto LAB_05235fc4;
            }
          }
        }
      }
    }
  }
LAB_0523602c:
                    /* WARNING: Subroutine does not return */
  FUN_02d4def0();
}


