/*
FUNCTION_NAME: PlayFab.Internal.PlayFabWebRequest$$SkipCertificateValidation
ENTRY_POINT: 0527ecf0
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_9;paired_field_refs_with_structure_only;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure;functionality_data_collection_or_telemetry_hits_2
*/


void PlayFab_Internal_PlayFabWebRequest__SkipCertificateValidation(long param_1)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  byte bVar6;
  int iVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulong uVar14;
  long lVar15;
  long *plVar16;
  long lVar17;
  long unaff_x19;
  long unaff_x20;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  undefined8 *puVar22;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined1 uStack0000000000000018;
  undefined1 uStack000000000000001c;
  long in_stack_00000020;
  long in_stack_00000028;
  long in_stack_00000030;
  long in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  
  FUN_02d4dc40(*(undefined8 *)(param_1 + 0x200));
  *(undefined1 *)(unaff_x20 + 0x4dd) = 1;
  puVar4 = PTR_DAT_06646bd0;
  lVar9 = *(long *)(unaff_x19 + 0x40);
  if (lVar9 == 0) goto LAB_0528009c;
  lVar19 = *(long *)(lVar9 + 0xb0);
  lVar10 = FUN_051bf5f4(lVar9,0);
  lVar18 = *(long *)puVar4;
  lVar9 = lVar10 / 1000;
  lVar17 = *(long *)(lVar18 + 0x38);
  if (lVar10 + 999U < 1999) {
    lVar9 = 1;
  }
  if (lVar17 == 0) {
    FUN_02d87268(lVar18);
    lVar17 = *(long *)(lVar18 + 0x38);
  }
  lVar10 = *(long *)(lVar17 + 0x10);
  if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_02d8720c();
  }
  if (*(int *)(lVar10 + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  lVar10 = *(long *)(*(long *)(lVar18 + 0x38) + 0x10);
  if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_02d8720c();
  }
  FUN_05f37c6c(**(undefined8 **)(lVar10 + 0xb8),0);
  lVar17 = *(long *)puVar4;
  cVar1 = *(char *)(unaff_x19 + 0x24);
  lVar10 = *(long *)(lVar17 + 0x38);
  if (lVar10 == 0) {
    FUN_02d87268(lVar17);
    lVar10 = *(long *)(lVar17 + 0x38);
  }
  lVar10 = *(long *)(lVar10 + 0x10);
  if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_02d8720c();
  }
  if (*(int *)(lVar10 + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  puVar3 = System_Net_Http_Headers_ElementTryParser<TransferCodingHeaderValue>_TypeInfo;
  lVar10 = *(long *)(*(long *)(lVar17 + 0x38) + 0x10);
  if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_02d8720c();
  }
  bVar6 = FUN_05f3756c(cVar1 != '\0',*(undefined8 *)puVar3,**(undefined8 **)(lVar10 + 0xb8),0);
  lVar17 = *(long *)puVar4;
  cVar1 = *(char *)(unaff_x19 + 0x22);
  *(byte *)(unaff_x19 + 0x24) = bVar6 & 1;
  lVar10 = *(long *)(lVar17 + 0x38);
  if (lVar10 == 0) {
    FUN_02d87268(lVar17);
    lVar10 = *(long *)(lVar17 + 0x38);
  }
  lVar10 = *(long *)(lVar10 + 0x10);
  if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_02d8720c();
  }
  if (*(int *)(lVar10 + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  puVar3 = System_EmptyArray<char>_TypeInfo;
  lVar10 = *(long *)(*(long *)(lVar17 + 0x38) + 0x10);
  if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_02d8720c();
  }
  bVar6 = FUN_05f3756c(cVar1 != '\0',*(undefined8 *)puVar3,**(undefined8 **)(lVar10 + 0xb8),0);
  lVar17 = *(long *)puVar4;
  cVar1 = *(char *)(unaff_x19 + 0x23);
  *(byte *)(unaff_x19 + 0x22) = bVar6 & 1;
  lVar10 = *(long *)(lVar17 + 0x38);
  if (lVar10 == 0) {
    FUN_02d87268(lVar17);
    lVar10 = *(long *)(lVar17 + 0x38);
  }
  lVar10 = *(long *)(lVar10 + 0x10);
  if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_02d8720c();
  }
  if (*(int *)(lVar10 + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  puVar3 = System_EmptyArray<Type>_TypeInfo;
  lVar10 = *(long *)(*(long *)(lVar17 + 0x38) + 0x10);
  if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_02d8720c();
  }
  bVar6 = FUN_05f3756c(cVar1 != '\0',*(undefined8 *)puVar3,**(undefined8 **)(lVar10 + 0xb8),0);
  lVar17 = *(long *)puVar4;
  cVar1 = *(char *)(unaff_x19 + 0x25);
  *(byte *)(unaff_x19 + 0x23) = bVar6 & 1;
  lVar10 = *(long *)(lVar17 + 0x38);
  if (lVar10 == 0) {
    FUN_02d87268(lVar17);
    lVar10 = *(long *)(lVar17 + 0x38);
  }
  lVar10 = *(long *)(lVar10 + 0x10);
  if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_02d8720c();
  }
  if (*(int *)(lVar10 + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  puVar3 = System_Collections_Generic_List<NativeSlice<ushort>>_TypeInfo;
  lVar10 = *(long *)(*(long *)(lVar17 + 0x38) + 0x10);
  if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_02d8720c();
  }
  bVar6 = FUN_05f3756c(cVar1 != '\0',*(undefined8 *)puVar3,**(undefined8 **)(lVar10 + 0xb8),0);
  *(byte *)(unaff_x19 + 0x25) = bVar6 & 1;
  FUN_05f381d0(0);
  puVar5 = System_Net_Http_Headers_ElementTryParser<TransferCodingWithQualityHeaderValue>_TypeInfo;
  puVar3 = System_Net_Http_Headers_ElementTryParser<string>_TypeInfo;
  if (lVar19 == 0) goto LAB_0528009c;
  uStack000000000000004c = FUN_051e02a4(lVar19,0);
  puVar2 = PTR_DAT_066462a0;
  uVar11 = thunk_FUN_02d8a270(*(undefined8 *)(PTR_DAT_066462a0 + 0x48),(long)&stack0x00000048 + 4);
  uStack0000000000000048 = FUN_051e028c(lVar19,0);
  uVar12 = thunk_FUN_02d8a270(*(undefined8 *)(puVar2 + 0x48),&stack0x00000048);
  in_stack_00000040._4_4_ = FUN_051e0264(lVar19,0);
  uVar13 = thunk_FUN_02d8a270(*(undefined8 *)(puVar2 + 0x48),(long)&stack0x00000040 + 4);
  lVar10 = FUN_04e81020(*(undefined8 *)puVar5,uVar11,uVar12,uVar13,0);
  in_stack_00000038 = lVar9;
  uVar11 = thunk_FUN_02d8a270(*(undefined8 *)(puVar2 + 0x68),&stack0x00000038);
  lVar17 = FUN_04e762a8(*(undefined8 *)puVar3,uVar11,0);
  iVar7 = FUN_051e02a4(lVar19,0);
  in_stack_00000030 = 0;
  if (lVar9 != 0) {
    in_stack_00000030 = (long)iVar7 / lVar9;
  }
  uVar11 = thunk_FUN_02d8a270(*(undefined8 *)(puVar2 + 0x68),&stack0x00000030);
  iVar7 = FUN_051e028c(lVar19,0);
  in_stack_00000028 = 0;
  if (lVar9 != 0) {
    in_stack_00000028 = (long)iVar7 / lVar9;
  }
  uVar12 = thunk_FUN_02d8a270(*(undefined8 *)(puVar2 + 0x68),&stack0x00000028);
  iVar7 = FUN_051e0264(lVar19,0);
  in_stack_00000020 = 0;
  if (lVar9 != 0) {
    in_stack_00000020 = (long)iVar7 / lVar9;
  }
  uVar13 = thunk_FUN_02d8a270(*(undefined8 *)(puVar2 + 0x68),&stack0x00000020);
  lVar9 = FUN_04e81020(*(undefined8 *)puVar5,uVar11,uVar12,uVar13,0);
  lVar20 = *(long *)puVar4;
  lVar18 = *(long *)(lVar20 + 0x38);
  if (lVar18 == 0) {
    FUN_02d87268(lVar20);
    lVar18 = *(long *)(lVar20 + 0x38);
  }
  lVar18 = *(long *)(lVar18 + 0x10);
  if ((*(ushort *)(lVar18 + 0x135) & 1) == 0) {
    lVar18 = FUN_02d8720c();
  }
  if (*(int *)(lVar18 + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  lVar18 = *(long *)(*(long *)(lVar20 + 0x38) + 0x10);
  if ((*(ushort *)(lVar18 + 0x135) & 1) == 0) {
    lVar18 = FUN_02d8720c();
  }
  FUN_05f36db0(lVar10,**(undefined8 **)(lVar18 + 0xb8),0);
  lVar20 = *(long *)puVar4;
  lVar18 = *(long *)(lVar20 + 0x38);
  if (lVar18 == 0) {
    FUN_02d87268(lVar20);
    lVar18 = *(long *)(lVar20 + 0x38);
  }
  lVar18 = *(long *)(lVar18 + 0x10);
  if ((*(ushort *)(lVar18 + 0x135) & 1) == 0) {
    lVar18 = FUN_02d8720c();
  }
  if (*(int *)(lVar18 + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  lVar18 = *(long *)(*(long *)(lVar20 + 0x38) + 0x10);
  if ((*(ushort *)(lVar18 + 0x135) & 1) == 0) {
    lVar18 = FUN_02d8720c();
  }
  FUN_05f36db0(lVar17,**(undefined8 **)(lVar18 + 0xb8),0);
  lVar20 = *(long *)puVar4;
  lVar18 = *(long *)(lVar20 + 0x38);
  if (lVar18 == 0) {
    FUN_02d87268(lVar20);
    lVar18 = *(long *)(lVar20 + 0x38);
  }
  lVar18 = *(long *)(lVar18 + 0x10);
  if ((*(ushort *)(lVar18 + 0x135) & 1) == 0) {
    lVar18 = FUN_02d8720c();
  }
  if (*(int *)(lVar18 + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  lVar18 = *(long *)(*(long *)(lVar20 + 0x38) + 0x10);
  if ((*(ushort *)(lVar18 + 0x135) & 1) == 0) {
    lVar18 = FUN_02d8720c();
  }
  FUN_05f36db0(lVar9,**(undefined8 **)(lVar18 + 0xb8),0);
  if (*(char *)(unaff_x19 + 0x24) == '\0') {
    uVar8 = 0;
  }
  else {
    lVar20 = *(long *)puVar4;
    lVar18 = *(long *)(lVar20 + 0x38);
    if (lVar18 == 0) {
      FUN_02d87268(lVar20);
      lVar18 = *(long *)(lVar20 + 0x38);
    }
    lVar18 = *(long *)(lVar18 + 0x10);
    if ((*(ushort *)(lVar18 + 0x135) & 1) == 0) {
      lVar18 = FUN_02d8720c();
    }
    if (*(int *)(lVar18 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    lVar18 = *(long *)(*(long *)(lVar20 + 0x38) + 0x10);
    if ((*(ushort *)(lVar18 + 0x135) & 1) == 0) {
      lVar18 = FUN_02d8720c();
    }
    FUN_05f37c6c(**(undefined8 **)(lVar18 + 0xb8),0);
    lVar20 = *(long *)puVar4;
    cVar1 = *(char *)(unaff_x19 + 0x21);
    lVar18 = *(long *)(lVar20 + 0x38);
    if (lVar18 == 0) {
      FUN_02d87268(lVar20);
      lVar18 = *(long *)(lVar20 + 0x38);
    }
    lVar18 = *(long *)(lVar18 + 0x10);
    if ((*(ushort *)(lVar18 + 0x135) & 1) == 0) {
      lVar18 = FUN_02d8720c();
    }
    if (*(int *)(lVar18 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    puVar3 = System_Net_Http_Headers_ElementTryParser<WarningHeaderValue>_TypeInfo;
    lVar18 = *(long *)(*(long *)(lVar20 + 0x38) + 0x10);
    if ((*(ushort *)(lVar18 + 0x135) & 1) == 0) {
      lVar18 = FUN_02d8720c();
    }
    bVar6 = FUN_05f3756c(cVar1 != '\0',*(undefined8 *)puVar3,**(undefined8 **)(lVar18 + 0xb8),0);
    lVar20 = *(long *)puVar4;
    *(byte *)(unaff_x19 + 0x21) = bVar6 & 1;
    lVar18 = *(long *)(lVar20 + 0x38);
    if (lVar18 == 0) {
      FUN_02d87268(lVar20);
      lVar18 = *(long *)(lVar20 + 0x38);
    }
    lVar18 = *(long *)(lVar18 + 0x10);
    if ((*(ushort *)(lVar18 + 0x135) & 1) == 0) {
      lVar18 = FUN_02d8720c();
    }
    if (*(int *)(lVar18 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    puVar3 = System_EmptyArray<CustomAttributeNamedArgument>_TypeInfo;
    lVar18 = *(long *)(*(long *)(lVar20 + 0x38) + 0x10);
    if ((*(ushort *)(lVar18 + 0x135) & 1) == 0) {
      lVar18 = FUN_02d8720c();
    }
    uVar14 = FUN_05f37104(*(undefined8 *)puVar3,**(undefined8 **)(lVar18 + 0xb8),0);
    if ((uVar14 & 1) != 0) {
      if (*(long *)(unaff_x19 + 0x40) == 0) goto LAB_0528009c;
      FUN_051bf7e8(*(long *)(unaff_x19 + 0x40),0);
      if (*(long *)(unaff_x19 + 0x40) == 0) goto LAB_0528009c;
      FUN_051bf610(*(long *)(unaff_x19 + 0x40),1,0);
    }
    lVar20 = *(long *)puVar4;
    lVar18 = *(long *)(lVar20 + 0x38);
    if (lVar18 == 0) {
      FUN_02d87268(lVar20);
      lVar18 = *(long *)(lVar20 + 0x38);
    }
    lVar18 = *(long *)(lVar18 + 0x10);
    if ((*(ushort *)(lVar18 + 0x135) & 1) == 0) {
      lVar18 = FUN_02d8720c();
    }
    if (*(int *)(lVar18 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    puVar3 = System_EmptyArray<byte>_TypeInfo;
    lVar18 = *(long *)(*(long *)(lVar20 + 0x38) + 0x10);
    if ((*(ushort *)(lVar18 + 0x135) & 1) == 0) {
      lVar18 = FUN_02d8720c();
    }
    uVar8 = FUN_05f37104(*(undefined8 *)puVar3,**(undefined8 **)(lVar18 + 0xb8),0);
    FUN_05f381d0(0);
  }
  if (*(char *)(unaff_x19 + 0x23) == '\0') {
    lVar15 = **(long **)(*(long *)(puVar2 + 0x90) + 0xb8);
    lVar18 = lVar15;
    lVar20 = lVar15;
  }
  else {
    lVar20 = *(long *)puVar4;
    lVar18 = *(long *)(lVar20 + 0x38);
    if (lVar18 == 0) {
      FUN_02d87268(lVar20);
      lVar18 = *(long *)(lVar20 + 0x38);
    }
    lVar18 = *(long *)(lVar18 + 0x10);
    if ((*(ushort *)(lVar18 + 0x135) & 1) == 0) {
      lVar18 = FUN_02d8720c();
    }
    if (*(int *)(lVar18 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    puVar3 = System_Collections_Generic_List<List<UIRenderDevice_AllocToUpdate>>_TypeInfo;
    lVar18 = *(long *)(*(long *)(lVar20 + 0x38) + 0x10);
    if ((*(ushort *)(lVar18 + 0x135) & 1) == 0) {
      lVar18 = FUN_02d8720c();
    }
    FUN_05f36f90(*(undefined8 *)puVar3,**(undefined8 **)(lVar18 + 0xb8),0);
    if (*(long *)(unaff_x19 + 0x40) == 0) goto LAB_0528009c;
    lVar18 = FUN_04e8052c(*(undefined8 *)
                           System_Net_Http_Headers_ElementTryParser<StringWithQualityHeaderValue>_TypeInfo
                          ,*(undefined8 *)(*(long *)(unaff_x19 + 0x40) + 0xa0),0);
    if (*(long *)(unaff_x19 + 0x40) == 0) goto LAB_0528009c;
    lVar15 = FUN_04e8052c(*(undefined8 *)
                           System_Dynamic_Utils_EmptyReadOnlyCollection<Expression>_TypeInfo,
                          *(undefined8 *)(*(long *)(unaff_x19 + 0x40) + 0xa8),0);
    lVar21 = *(long *)puVar4;
    lVar20 = *(long *)(lVar21 + 0x38);
    if (lVar20 == 0) {
      FUN_02d87268(lVar21);
      lVar20 = *(long *)(lVar21 + 0x38);
    }
    lVar20 = *(long *)(lVar20 + 0x10);
    if ((*(ushort *)(lVar20 + 0x135) & 1) == 0) {
      lVar20 = FUN_02d8720c();
    }
    if (*(int *)(lVar20 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    lVar20 = *(long *)(*(long *)(lVar21 + 0x38) + 0x10);
    if ((*(ushort *)(lVar20 + 0x135) & 1) == 0) {
      lVar20 = FUN_02d8720c();
    }
    FUN_05f36db0(lVar18,**(undefined8 **)(lVar20 + 0xb8),0);
    lVar21 = *(long *)puVar4;
    lVar20 = *(long *)(lVar21 + 0x38);
    if (lVar20 == 0) {
      FUN_02d87268(lVar21);
      lVar20 = *(long *)(lVar21 + 0x38);
    }
    lVar20 = *(long *)(lVar20 + 0x10);
    if ((*(ushort *)(lVar20 + 0x135) & 1) == 0) {
      lVar20 = FUN_02d8720c();
    }
    if (*(int *)(lVar20 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    lVar20 = *(long *)(*(long *)(lVar21 + 0x38) + 0x10);
    if ((*(ushort *)(lVar20 + 0x135) & 1) == 0) {
      lVar20 = FUN_02d8720c();
    }
    FUN_05f36db0(lVar15,**(undefined8 **)(lVar20 + 0xb8),0);
    lVar20 = **(long **)(*(long *)(puVar2 + 0x90) + 0xb8);
  }
  puVar3 = PTR_DAT_066463a0;
  puVar22 = (undefined8 *)PTR_DAT_066463a0;
  if (*(char *)(unaff_x19 + 0x22) != '\0') {
    lVar21 = *(long *)puVar4;
    lVar20 = *(long *)(lVar21 + 0x38);
    if (lVar20 == 0) {
      FUN_02d87268(lVar21);
      lVar20 = *(long *)(lVar21 + 0x38);
    }
    lVar20 = *(long *)(lVar20 + 0x10);
    if ((*(ushort *)(lVar20 + 0x135) & 1) == 0) {
      lVar20 = FUN_02d8720c();
    }
    if (*(int *)(lVar20 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    puVar5 = System_Collections_Generic_List<NativeSlice<Vertex>>_TypeInfo;
    lVar20 = *(long *)(*(long *)(lVar21 + 0x38) + 0x10);
    if ((*(ushort *)(lVar20 + 0x135) & 1) == 0) {
      lVar20 = FUN_02d8720c();
    }
    FUN_05f36f90(*(undefined8 *)puVar5,**(undefined8 **)(lVar20 + 0xb8),0);
    plVar16 = (long *)FUN_02d4dd2c(*(undefined8 *)puVar3,0xb);
    in_stack_00000038 = CONCAT44(in_stack_00000038._4_4_,*(undefined4 *)(lVar19 + 0x54));
    lVar20 = thunk_FUN_02d8a270(*(undefined8 *)(puVar2 + 0x48),&stack0x00000038);
    if (plVar16 == (long *)0x0) goto LAB_0528009c;
    if ((lVar20 != 0) &&
       (lVar21 = thunk_FUN_02d8a53c(lVar20,*(undefined8 *)(*plVar16 + 0x40)), lVar21 == 0))
    goto LAB_052800a0;
    if ((int)plVar16[3] == 0) goto LAB_05280098;
    plVar16[4] = lVar20;
    thunk_FUN_02dc1ef0(plVar16 + 4,lVar20);
    in_stack_00000030 = CONCAT44(in_stack_00000030._4_4_,*(undefined4 *)(lVar19 + 0x50));
    lVar20 = thunk_FUN_02d8a270(*(undefined8 *)(puVar2 + 0x48),&stack0x00000030);
    if ((lVar20 != 0) &&
       (lVar21 = thunk_FUN_02d8a53c(lVar20,*(undefined8 *)(*plVar16 + 0x40)), lVar21 == 0))
    goto LAB_052800a0;
    if ((*(uint *)(plVar16 + 3) & 0xfffffffe) == 0) goto LAB_05280098;
    plVar16[5] = lVar20;
    thunk_FUN_02dc1ef0(plVar16 + 5,lVar20);
    in_stack_00000028 = CONCAT44(in_stack_00000028._4_4_,*(undefined4 *)(lVar19 + 0x40));
    lVar20 = thunk_FUN_02d8a270(*(undefined8 *)(puVar2 + 0x48),&stack0x00000028);
    if ((lVar20 != 0) &&
       (lVar21 = thunk_FUN_02d8a53c(lVar20,*(undefined8 *)(*plVar16 + 0x40)), lVar21 == 0))
    goto LAB_052800a0;
    if (*(uint *)(plVar16 + 3) < 3) goto LAB_05280098;
    plVar16[6] = lVar20;
    thunk_FUN_02dc1ef0(plVar16 + 6,lVar20);
    uStack000000000000001c = *(undefined1 *)(lVar19 + 0x4c);
    lVar20 = thunk_FUN_02d8a270(*(undefined8 *)(puVar2 + 0x18),(long)&stack0x00000018 + 4);
    if ((lVar20 != 0) &&
       (lVar21 = thunk_FUN_02d8a53c(lVar20,*(undefined8 *)(*plVar16 + 0x40)), lVar21 == 0))
    goto LAB_052800a0;
    if ((*(uint *)(plVar16 + 3) & 0xfffffffc) == 0) goto LAB_05280098;
    plVar16[7] = lVar20;
    thunk_FUN_02dc1ef0(plVar16 + 7,lVar20);
    in_stack_00000020 = CONCAT44(in_stack_00000020._4_4_,*(undefined4 *)(lVar19 + 0x38));
    lVar20 = thunk_FUN_02d8a270(*(undefined8 *)(puVar2 + 0x48),&stack0x00000020);
    if ((lVar20 != 0) &&
       (lVar21 = thunk_FUN_02d8a53c(lVar20,*(undefined8 *)(*plVar16 + 0x40)), lVar21 == 0))
    goto LAB_052800a0;
    if (*(uint *)(plVar16 + 3) < 5) goto LAB_05280098;
    plVar16[8] = lVar20;
    thunk_FUN_02dc1ef0(plVar16 + 8,lVar20);
    uStack0000000000000018 = *(undefined1 *)(lVar19 + 0x3c);
    lVar19 = thunk_FUN_02d8a270(*(undefined8 *)(puVar2 + 0x18),&stack0x00000018);
    if ((lVar19 != 0) &&
       (lVar20 = thunk_FUN_02d8a53c(lVar19,*(undefined8 *)(*plVar16 + 0x40)), lVar20 == 0))
    goto LAB_052800a0;
    if (*(uint *)(plVar16 + 3) < 6) goto LAB_05280098;
    plVar16[9] = lVar19;
    thunk_FUN_02dc1ef0(plVar16 + 9,lVar19);
    if (*(long *)(unaff_x19 + 0x40) == 0) goto LAB_0528009c;
    uStack000000000000004c = FUN_051bf2d0(*(long *)(unaff_x19 + 0x40),0);
    lVar19 = thunk_FUN_02d8a270(*(undefined8 *)(puVar2 + 0x48),(long)&stack0x00000048 + 4);
    if ((lVar19 != 0) &&
       (lVar20 = thunk_FUN_02d8a53c(lVar19,*(undefined8 *)(*plVar16 + 0x40)), lVar20 == 0))
    goto LAB_052800a0;
    if (*(uint *)(plVar16 + 3) < 7) goto LAB_05280098;
    plVar16[10] = lVar19;
    thunk_FUN_02dc1ef0(plVar16 + 10,lVar19);
    if (*(long *)(unaff_x19 + 0x40) == 0) goto LAB_0528009c;
    uStack0000000000000048 = FUN_051bf2e8(*(long *)(unaff_x19 + 0x40),0);
    lVar19 = thunk_FUN_02d8a270(*(undefined8 *)(puVar2 + 0x48),&stack0x00000048);
    if ((lVar19 != 0) &&
       (lVar20 = thunk_FUN_02d8a53c(lVar19,*(undefined8 *)(*plVar16 + 0x40)), lVar20 == 0))
    goto LAB_052800a0;
    if ((*(uint *)(plVar16 + 3) & 0xfffffff8) == 0) goto LAB_05280098;
    plVar16[0xb] = lVar19;
    thunk_FUN_02dc1ef0(plVar16 + 0xb,lVar19);
    if (*(long *)(unaff_x19 + 0x40) == 0) goto LAB_0528009c;
    in_stack_00000040._4_4_ = FUN_051bf054(*(long *)(unaff_x19 + 0x40),0);
    lVar19 = thunk_FUN_02d8a270(*(undefined8 *)(puVar2 + 0x48),(long)&stack0x00000040 + 4);
    if ((lVar19 != 0) &&
       (lVar20 = thunk_FUN_02d8a53c(lVar19,*(undefined8 *)(*plVar16 + 0x40)), lVar20 == 0))
    goto LAB_052800a0;
    if (*(uint *)(plVar16 + 3) < 9) goto LAB_05280098;
    plVar16[0xc] = lVar19;
    thunk_FUN_02dc1ef0(plVar16 + 0xc,lVar19);
    if (*(long *)(unaff_x19 + 0x50) == 0) goto LAB_0528009c;
    uStack0000000000000014 = *(undefined4 *)(*(long *)(unaff_x19 + 0x50) + 0x4c);
    lVar19 = thunk_FUN_02d8a270(*(undefined8 *)(puVar2 + 0x48),(long)&stack0x00000010 + 4);
    if ((lVar19 != 0) &&
       (lVar20 = thunk_FUN_02d8a53c(lVar19,*(undefined8 *)(*plVar16 + 0x40)), lVar20 == 0))
    goto LAB_052800a0;
    if (*(uint *)(plVar16 + 3) < 10) goto LAB_05280098;
    plVar16[0xd] = lVar19;
    thunk_FUN_02dc1ef0(plVar16 + 0xd,lVar19);
    if (*(long *)(unaff_x19 + 0x50) == 0) goto LAB_0528009c;
    uStack0000000000000010 = *(undefined4 *)(*(long *)(unaff_x19 + 0x50) + 0x50);
    lVar19 = thunk_FUN_02d8a270(*(undefined8 *)(puVar2 + 0x48),&stack0x00000010);
    if ((lVar19 != 0) &&
       (lVar20 = thunk_FUN_02d8a53c(lVar19,*(undefined8 *)(*plVar16 + 0x40)), lVar20 == 0))
    goto LAB_052800a0;
    puVar3 = System_Collections_Generic_List<Tuple<Vector3,_float>>_TypeInfo;
    if (*(uint *)(plVar16 + 3) < 0xb) goto LAB_05280098;
    plVar16[0xe] = lVar19;
    thunk_FUN_02dc1ef0(plVar16 + 0xe,lVar19);
    lVar20 = FUN_04e81064(*(undefined8 *)puVar3,plVar16,0);
    lVar21 = *(long *)puVar4;
    lVar19 = *(long *)(lVar21 + 0x38);
    if (lVar19 == 0) {
      FUN_02d87268(lVar21);
      lVar19 = *(long *)(lVar21 + 0x38);
    }
    puVar22 = (undefined8 *)PTR_DAT_066463a0;
    lVar19 = *(long *)(lVar19 + 0x10);
    if ((*(ushort *)(lVar19 + 0x135) & 1) == 0) {
      lVar19 = FUN_02d8720c();
    }
    if (*(int *)(lVar19 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    lVar19 = *(long *)(*(long *)(lVar21 + 0x38) + 0x10);
    if ((*(ushort *)(lVar19 + 0x135) & 1) == 0) {
      lVar19 = FUN_02d8720c();
    }
    FUN_05f36db0(lVar20,**(undefined8 **)(lVar19 + 0xb8),0);
  }
  if (*(char *)(unaff_x19 + 0x25) != '\0') {
    lVar21 = *(long *)puVar4;
    lVar19 = *(long *)(lVar21 + 0x38);
    if (lVar19 == 0) {
      FUN_02d87268(lVar21);
      lVar19 = *(long *)(lVar21 + 0x38);
    }
    lVar19 = *(long *)(lVar19 + 0x10);
    if ((*(ushort *)(lVar19 + 0x135) & 1) == 0) {
      lVar19 = FUN_02d8720c();
    }
    if (*(int *)(lVar19 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    puVar3 = System_Collections_Generic_List<List<UIRenderDevice_AllocToFree>>_TypeInfo;
    lVar19 = *(long *)(*(long *)(lVar21 + 0x38) + 0x10);
    if ((*(ushort *)(lVar19 + 0x135) & 1) == 0) {
      lVar19 = FUN_02d8720c();
    }
    FUN_05f36f90(*(undefined8 *)puVar3,**(undefined8 **)(lVar19 + 0xb8),0);
    plVar16 = (long *)FUN_02d4dd2c(*puVar22,9);
    if (*(long *)(unaff_x19 + 0x50) == 0) goto LAB_0528009c;
    in_stack_00000038 =
         CONCAT44(in_stack_00000038._4_4_,*(undefined4 *)(*(long *)(unaff_x19 + 0x50) + 0x38));
    lVar19 = thunk_FUN_02d8a270(*(undefined8 *)(puVar2 + 0x48),&stack0x00000038);
    if (plVar16 == (long *)0x0) goto LAB_0528009c;
    if ((lVar19 != 0) &&
       (lVar21 = thunk_FUN_02d8a53c(lVar19,*(undefined8 *)(*plVar16 + 0x40)), lVar21 == 0))
    goto LAB_052800a0;
    if ((int)plVar16[3] == 0) goto LAB_05280098;
    plVar16[4] = lVar19;
    thunk_FUN_02dc1ef0(plVar16 + 4,lVar19);
    if (*(long *)(unaff_x19 + 0x48) == 0) goto LAB_0528009c;
    in_stack_00000030 =
         CONCAT44(in_stack_00000030._4_4_,*(undefined4 *)(*(long *)(unaff_x19 + 0x48) + 0xc0));
    lVar19 = thunk_FUN_02d8a270(*(undefined8 *)(puVar2 + 0x78),&stack0x00000030);
    if ((lVar19 != 0) &&
       (lVar21 = thunk_FUN_02d8a53c(lVar19,*(undefined8 *)(*plVar16 + 0x40)), lVar21 == 0))
    goto LAB_052800a0;
    if ((*(uint *)(plVar16 + 3) & 0xfffffffe) == 0) goto LAB_05280098;
    plVar16[5] = lVar19;
    thunk_FUN_02dc1ef0(plVar16 + 5,lVar19);
    if (*(long *)(unaff_x19 + 0x50) == 0) goto LAB_0528009c;
    in_stack_00000028 =
         CONCAT44(in_stack_00000028._4_4_,*(undefined4 *)(*(long *)(unaff_x19 + 0x50) + 0x28));
    lVar19 = thunk_FUN_02d8a270(*(undefined8 *)(puVar2 + 0x48),&stack0x00000028);
    if ((lVar19 != 0) &&
       (lVar21 = thunk_FUN_02d8a53c(lVar19,*(undefined8 *)(*plVar16 + 0x40)), lVar21 == 0))
    goto LAB_052800a0;
    if (*(uint *)(plVar16 + 3) < 3) goto LAB_05280098;
    plVar16[6] = lVar19;
    thunk_FUN_02dc1ef0(plVar16 + 6,lVar19);
    if (*(long *)(unaff_x19 + 0x48) == 0) goto LAB_0528009c;
    in_stack_00000020 =
         CONCAT44(in_stack_00000020._4_4_,*(undefined4 *)(*(long *)(unaff_x19 + 0x48) + 0xc4));
    lVar19 = thunk_FUN_02d8a270(*(undefined8 *)(puVar2 + 0x78),&stack0x00000020);
    if ((lVar19 != 0) &&
       (lVar21 = thunk_FUN_02d8a53c(lVar19,*(undefined8 *)(*plVar16 + 0x40)), lVar21 == 0))
    goto LAB_052800a0;
    if ((*(uint *)(plVar16 + 3) & 0xfffffffc) == 0) goto LAB_05280098;
    plVar16[7] = lVar19;
    thunk_FUN_02dc1ef0(plVar16 + 7,lVar19);
    if (*(long *)(unaff_x19 + 0x48) == 0) goto LAB_0528009c;
    uStack000000000000004c = *(undefined4 *)(*(long *)(unaff_x19 + 0x48) + 200);
    lVar19 = thunk_FUN_02d8a270(*(undefined8 *)(puVar2 + 0x78),(long)&stack0x00000048 + 4);
    if ((lVar19 != 0) &&
       (lVar21 = thunk_FUN_02d8a53c(lVar19,*(undefined8 *)(*plVar16 + 0x40)), lVar21 == 0))
    goto LAB_052800a0;
    if (*(uint *)(plVar16 + 3) < 5) goto LAB_05280098;
    plVar16[8] = lVar19;
    thunk_FUN_02dc1ef0(plVar16 + 8,lVar19);
    if (*(long *)(unaff_x19 + 0x50) == 0) goto LAB_0528009c;
    uStack0000000000000048 = *(undefined4 *)(*(long *)(unaff_x19 + 0x50) + 0x30);
    lVar19 = thunk_FUN_02d8a270(*(undefined8 *)(puVar2 + 0x48),&stack0x00000048);
    if ((lVar19 != 0) &&
       (lVar21 = thunk_FUN_02d8a53c(lVar19,*(undefined8 *)(*plVar16 + 0x40)), lVar21 == 0))
    goto LAB_052800a0;
    if (*(uint *)(plVar16 + 3) < 6) goto LAB_05280098;
    plVar16[9] = lVar19;
    thunk_FUN_02dc1ef0(plVar16 + 9,lVar19);
    if (*(long *)(unaff_x19 + 0x50) == 0) goto LAB_0528009c;
    in_stack_00000040._4_4_ = *(undefined4 *)(*(long *)(unaff_x19 + 0x50) + 0x2c);
    lVar19 = thunk_FUN_02d8a270(*(undefined8 *)(puVar2 + 0x48),(long)&stack0x00000040 + 4);
    if ((lVar19 != 0) &&
       (lVar21 = thunk_FUN_02d8a53c(lVar19,*(undefined8 *)(*plVar16 + 0x40)), lVar21 == 0))
    goto LAB_052800a0;
    if (*(uint *)(plVar16 + 3) < 7) goto LAB_05280098;
    plVar16[10] = lVar19;
    thunk_FUN_02dc1ef0(plVar16 + 10,lVar19);
    if (*(long *)(unaff_x19 + 0x50) == 0) goto LAB_0528009c;
    uStack0000000000000014 = FUN_05258dd0(*(long *)(unaff_x19 + 0x50),0);
    lVar19 = thunk_FUN_02d8a270(*(undefined8 *)(puVar2 + 0x48),(long)&stack0x00000010 + 4);
    if ((lVar19 != 0) &&
       (lVar21 = thunk_FUN_02d8a53c(lVar19,*(undefined8 *)(*plVar16 + 0x40)), lVar21 == 0))
    goto LAB_052800a0;
    if ((*(uint *)(plVar16 + 3) & 0xfffffff8) == 0) goto LAB_05280098;
    plVar16[0xb] = lVar19;
    thunk_FUN_02dc1ef0(plVar16 + 0xb,lVar19);
    if (*(long *)(unaff_x19 + 0x50) == 0) goto LAB_0528009c;
    uStack0000000000000010 = FUN_05258f1c(*(long *)(unaff_x19 + 0x50),0);
    lVar19 = thunk_FUN_02d8a270(*(undefined8 *)(puVar2 + 0x48),&stack0x00000010);
    if ((lVar19 != 0) &&
       (lVar21 = thunk_FUN_02d8a53c(lVar19,*(undefined8 *)(*plVar16 + 0x40)), lVar21 == 0))
    goto LAB_052800a0;
    puVar3 = System_Collections_Generic_List<ValueTuple<Action<object>,_object>>_TypeInfo;
    if (*(uint *)(plVar16 + 3) < 9) goto LAB_05280098;
    plVar16[0xc] = lVar19;
    thunk_FUN_02dc1ef0(plVar16 + 0xc,lVar19);
    uVar11 = FUN_04e81064(*(undefined8 *)puVar3,plVar16,0);
    lVar21 = *(long *)puVar4;
    lVar19 = *(long *)(lVar21 + 0x38);
    if (lVar19 == 0) {
      FUN_02d87268(lVar21);
      lVar19 = *(long *)(lVar21 + 0x38);
    }
    lVar19 = *(long *)(lVar19 + 0x10);
    if ((*(ushort *)(lVar19 + 0x135) & 1) == 0) {
      lVar19 = FUN_02d8720c();
    }
    if (*(int *)(lVar19 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    lVar19 = *(long *)(*(long *)(lVar21 + 0x38) + 0x10);
    if ((*(ushort *)(lVar19 + 0x135) & 1) == 0) {
      lVar19 = FUN_02d8720c();
    }
    FUN_05f36db0(uVar11,**(undefined8 **)(lVar19 + 0xb8),0);
  }
  if ((uVar8 & 1) == 0) {
LAB_05280034:
    puVar4 = PTR_DAT_06646bc8;
    if (*(int *)(*(long *)PTR_DAT_06646bc8 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    uVar14 = FUN_05f31478(0);
    if ((uVar14 & 1) != 0) {
      *(undefined4 *)(unaff_x19 + 0x34) = 0x42c80000;
    }
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    FUN_05f361c8(0);
    return;
  }
  plVar16 = (long *)FUN_02d4dd2c(*puVar22,6);
  if (plVar16 == (long *)0x0) {
LAB_0528009c:
                    /* WARNING: Subroutine does not return */
    FUN_02d4dee8();
  }
  if ((lVar10 != 0) &&
     (lVar19 = thunk_FUN_02d8a53c(lVar10,*(undefined8 *)(*plVar16 + 0x40)), lVar19 == 0)) {
LAB_052800a0:
    uVar11 = thunk_FUN_02d980e0();
                    /* WARNING: Subroutine does not return */
    FUN_02d4ddac(uVar11,0);
  }
  if ((int)plVar16[3] != 0) {
    plVar16[4] = lVar10;
    thunk_FUN_02dc1ef0(plVar16 + 4,lVar10);
    if ((lVar17 != 0) &&
       (lVar10 = thunk_FUN_02d8a53c(lVar17,*(undefined8 *)(*plVar16 + 0x40)), lVar10 == 0))
    goto LAB_052800a0;
    if ((*(uint *)(plVar16 + 3) & 0xfffffffe) != 0) {
      plVar16[5] = lVar17;
      thunk_FUN_02dc1ef0(plVar16 + 5,lVar17);
      if ((lVar9 != 0) &&
         (lVar10 = thunk_FUN_02d8a53c(lVar9,*(undefined8 *)(*plVar16 + 0x40)), lVar10 == 0))
      goto LAB_052800a0;
      if (2 < *(uint *)(plVar16 + 3)) {
        plVar16[6] = lVar9;
        thunk_FUN_02dc1ef0(plVar16 + 6,lVar9);
        if ((lVar18 != 0) &&
           (lVar9 = thunk_FUN_02d8a53c(lVar18,*(undefined8 *)(*plVar16 + 0x40)), lVar9 == 0))
        goto LAB_052800a0;
        if ((*(uint *)(plVar16 + 3) & 0xfffffffc) != 0) {
          plVar16[7] = lVar18;
          thunk_FUN_02dc1ef0(plVar16 + 7,lVar18);
          if ((lVar15 != 0) &&
             (lVar9 = thunk_FUN_02d8a53c(lVar15,*(undefined8 *)(*plVar16 + 0x40)), lVar9 == 0))
          goto LAB_052800a0;
          if (4 < *(uint *)(plVar16 + 3)) {
            plVar16[8] = lVar15;
            thunk_FUN_02dc1ef0(plVar16 + 8,lVar15);
            if ((lVar20 != 0) &&
               (lVar9 = thunk_FUN_02d8a53c(lVar20,*(undefined8 *)(*plVar16 + 0x40)), lVar9 == 0))
            goto LAB_052800a0;
            if (5 < *(uint *)(plVar16 + 3)) {
              plVar16[9] = lVar20;
              thunk_FUN_02dc1ef0(plVar16 + 9,lVar20);
              uVar11 = FUN_04e81064(*(undefined8 *)
                                     System_Net_Http_Headers_ElementTryParser<ViaHeaderValue>_TypeInfo
                                    ,plVar16,0);
              if (*(int *)(*(long *)PTR_DAT_06646730 + 0xe4) == 0) {
                thunk_FUN_02dabd98(*(long *)PTR_DAT_06646730);
              }
              FUN_05ea2238(uVar11,0);
              goto LAB_05280034;
            }
          }
        }
      }
    }
  }
LAB_05280098:
                    /* WARNING: Subroutine does not return */
  FUN_02d4def0();
}


