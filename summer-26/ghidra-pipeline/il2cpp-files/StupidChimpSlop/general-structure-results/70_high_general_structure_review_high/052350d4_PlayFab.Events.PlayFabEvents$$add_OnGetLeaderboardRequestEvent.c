/*
FUNCTION_NAME: PlayFab.Events.PlayFabEvents$$add_OnGetLeaderboardRequestEvent
ENTRY_POINT: 052350d4
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 88
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_10;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


void PlayFab_Events_PlayFabEvents__add_OnGetLeaderboardRequestEvent(void)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  byte bVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong uVar13;
  long *plVar14;
  long lVar15;
  undefined1 in_w8;
  long lVar16;
  long unaff_x19;
  long unaff_x20;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
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
  
  *(undefined1 *)(unaff_x20 + 0x1f1) = in_w8;
  lVar8 = *unaff_x28;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_02dabd98();
    lVar8 = *unaff_x28;
  }
  puVar3 = PTR_DAT_06646bd0;
  lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 8);
  if ((lVar8 != 0) && (lVar8 = *(long *)(lVar8 + 0x10), lVar8 != 0)) {
    lVar17 = *(long *)(lVar8 + 0xb0);
    lVar9 = FUN_051bf5f4(lVar8,0);
    lVar18 = *(long *)puVar3;
    lVar8 = lVar9 / 1000;
    lVar16 = *(long *)(lVar18 + 0x38);
    if (lVar9 + 999U < 1999) {
      lVar8 = 1;
    }
    if (lVar16 == 0) {
      FUN_02d87268(lVar18);
      lVar16 = *(long *)(lVar18 + 0x38);
    }
    lVar9 = *(long *)(lVar16 + 0x10);
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_02d8720c();
    }
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    lVar9 = *(long *)(*(long *)(lVar18 + 0x38) + 0x10);
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_02d8720c();
    }
    FUN_05f37c6c(**(undefined8 **)(lVar9 + 0xb8),0);
    lVar16 = *(long *)puVar3;
    cVar1 = *(char *)(unaff_x19 + 0x24);
    lVar9 = *(long *)(lVar16 + 0x38);
    if (lVar9 == 0) {
      FUN_02d87268(lVar16);
      lVar9 = *(long *)(lVar16 + 0x38);
    }
    lVar9 = *(long *)(lVar9 + 0x10);
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_02d8720c();
    }
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    puVar4 = System_Net_Http_Headers_ElementTryParser<TransferCodingHeaderValue>_TypeInfo;
    lVar9 = *(long *)(*(long *)(lVar16 + 0x38) + 0x10);
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_02d8720c();
    }
    bVar6 = FUN_05f3756c(cVar1 != '\0',*(undefined8 *)puVar4,**(undefined8 **)(lVar9 + 0xb8),0);
    lVar16 = *(long *)puVar3;
    cVar1 = *(char *)(unaff_x19 + 0x22);
    *(byte *)(unaff_x19 + 0x24) = bVar6 & 1;
    lVar9 = *(long *)(lVar16 + 0x38);
    if (lVar9 == 0) {
      FUN_02d87268(lVar16);
      lVar9 = *(long *)(lVar16 + 0x38);
    }
    lVar9 = *(long *)(lVar9 + 0x10);
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_02d8720c();
    }
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    puVar4 = System_EmptyArray<char>_TypeInfo;
    lVar9 = *(long *)(*(long *)(lVar16 + 0x38) + 0x10);
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_02d8720c();
    }
    bVar6 = FUN_05f3756c(cVar1 != '\0',*(undefined8 *)puVar4,**(undefined8 **)(lVar9 + 0xb8),0);
    lVar16 = *(long *)puVar3;
    cVar1 = *(char *)(unaff_x19 + 0x23);
    *(byte *)(unaff_x19 + 0x22) = bVar6 & 1;
    lVar9 = *(long *)(lVar16 + 0x38);
    if (lVar9 == 0) {
      FUN_02d87268(lVar16);
      lVar9 = *(long *)(lVar16 + 0x38);
    }
    lVar9 = *(long *)(lVar9 + 0x10);
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_02d8720c();
    }
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    puVar4 = System_EmptyArray<Type>_TypeInfo;
    lVar9 = *(long *)(*(long *)(lVar16 + 0x38) + 0x10);
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_02d8720c();
    }
    bVar6 = FUN_05f3756c(cVar1 != '\0',*(undefined8 *)puVar4,**(undefined8 **)(lVar9 + 0xb8),0);
    *(byte *)(unaff_x19 + 0x23) = bVar6 & 1;
    FUN_05f381d0(0);
    puVar5 = System_Net_Http_Headers_ElementTryParser<TransferCodingWithQualityHeaderValue>_TypeInfo
    ;
    puVar4 = System_Net_Http_Headers_ElementTryParser<string>_TypeInfo;
    if (lVar17 == 0) goto LAB_05236028;
    uStack000000000000004c = FUN_051e02a4(lVar17,0);
    puVar2 = PTR_DAT_066462a0;
    uVar10 = thunk_FUN_02d8a270(*(undefined8 *)(PTR_DAT_066462a0 + 0x48),(long)&stack0x00000048 + 4)
    ;
    uStack0000000000000048 = FUN_051e028c(lVar17,0);
    uVar11 = thunk_FUN_02d8a270(*(undefined8 *)(puVar2 + 0x48),&stack0x00000048);
    in_stack_00000040._4_4_ = FUN_051e0264(lVar17,0);
    uVar12 = thunk_FUN_02d8a270(*(undefined8 *)(puVar2 + 0x48),(long)&stack0x00000040 + 4);
    lVar9 = FUN_04e81020(*(undefined8 *)puVar5,uVar10,uVar11,uVar12,0);
    in_stack_00000038 = lVar8;
    uVar10 = thunk_FUN_02d8a270(*(undefined8 *)(puVar2 + 0x68),&stack0x00000038);
    lVar16 = FUN_04e762a8(*(undefined8 *)puVar4,uVar10,0);
    iVar7 = FUN_051e02a4(lVar17,0);
    in_stack_00000030 = 0;
    if (lVar8 != 0) {
      in_stack_00000030 = (long)iVar7 / lVar8;
    }
    uVar10 = thunk_FUN_02d8a270(*(undefined8 *)(puVar2 + 0x68),&stack0x00000030);
    iVar7 = FUN_051e028c(lVar17,0);
    in_stack_00000028 = 0;
    if (lVar8 != 0) {
      in_stack_00000028 = (long)iVar7 / lVar8;
    }
    uVar11 = thunk_FUN_02d8a270(*(undefined8 *)(puVar2 + 0x68),&stack0x00000028);
    iVar7 = FUN_051e0264(lVar17,0);
    in_stack_00000020 = 0;
    if (lVar8 != 0) {
      in_stack_00000020 = (long)iVar7 / lVar8;
    }
    uVar12 = thunk_FUN_02d8a270(*(undefined8 *)(puVar2 + 0x68),&stack0x00000020);
    lVar8 = FUN_04e81020(*(undefined8 *)puVar5,uVar10,uVar11,uVar12,0);
    lVar19 = *(long *)puVar3;
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
    FUN_05f36db0(lVar9,**(undefined8 **)(lVar18 + 0xb8),0);
    lVar19 = *(long *)puVar3;
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
    FUN_05f36db0(lVar16,**(undefined8 **)(lVar18 + 0xb8),0);
    lVar19 = *(long *)puVar3;
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
    FUN_05f36db0(lVar8,**(undefined8 **)(lVar18 + 0xb8),0);
    if (*(char *)(unaff_x19 + 0x24) == '\0') {
      uVar13 = 0;
    }
    else {
      lVar19 = *(long *)puVar3;
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
      FUN_05f37c6c(**(undefined8 **)(lVar18 + 0xb8),0);
      lVar19 = *(long *)puVar3;
      cVar1 = *(char *)(unaff_x19 + 0x21);
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
      puVar4 = System_Net_Http_Headers_ElementTryParser<WarningHeaderValue>_TypeInfo;
      lVar18 = *(long *)(*(long *)(lVar19 + 0x38) + 0x10);
      if ((*(ushort *)(lVar18 + 0x135) & 1) == 0) {
        lVar18 = FUN_02d8720c();
      }
      bVar6 = FUN_05f3756c(cVar1 != '\0',*(undefined8 *)puVar4,**(undefined8 **)(lVar18 + 0xb8),0);
      lVar19 = *(long *)puVar3;
      *(byte *)(unaff_x19 + 0x21) = bVar6 & 1;
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
      puVar4 = System_EmptyArray<CustomAttributeNamedArgument>_TypeInfo;
      lVar18 = *(long *)(*(long *)(lVar19 + 0x38) + 0x10);
      if ((*(ushort *)(lVar18 + 0x135) & 1) == 0) {
        lVar18 = FUN_02d8720c();
      }
      uVar13 = FUN_05f37104(*(undefined8 *)puVar4,**(undefined8 **)(lVar18 + 0xb8),0);
      if ((uVar13 & 1) != 0) {
        lVar18 = *unaff_x28;
        if (*(int *)(lVar18 + 0xe4) == 0) {
          thunk_FUN_02dabd98();
          lVar18 = *unaff_x28;
        }
        lVar18 = *(long *)(*(long *)(lVar18 + 0xb8) + 8);
        if ((lVar18 == 0) || (lVar18 = *(long *)(lVar18 + 0x10), lVar18 == 0)) goto LAB_05236028;
        FUN_051bf7e8(lVar18,0);
        lVar18 = *(long *)(*(long *)(*unaff_x28 + 0xb8) + 8);
        if ((lVar18 == 0) || (lVar18 = *(long *)(lVar18 + 0x10), lVar18 == 0)) goto LAB_05236028;
        FUN_051bf610(lVar18,1,0);
      }
      lVar19 = *(long *)puVar3;
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
      puVar4 = System_EmptyArray<byte>_TypeInfo;
      lVar18 = *(long *)(*(long *)(lVar19 + 0x38) + 0x10);
      if ((*(ushort *)(lVar18 + 0x135) & 1) == 0) {
        lVar18 = FUN_02d8720c();
      }
      uVar13 = FUN_05f37104(*(undefined8 *)puVar4,**(undefined8 **)(lVar18 + 0xb8),0);
      uVar13 = uVar13 & 0xffffffff;
      FUN_05f381d0(0);
    }
    if (*(char *)(unaff_x19 + 0x23) == '\0') {
      lVar15 = **(long **)(*(long *)(puVar2 + 0x90) + 0xb8);
      lVar18 = lVar15;
      lVar19 = lVar15;
    }
    else {
      lVar19 = *(long *)puVar3;
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
      puVar4 = System_EmptyArray<ParameterInfo>_TypeInfo;
      lVar18 = *(long *)(*(long *)(lVar19 + 0x38) + 0x10);
      if ((*(ushort *)(lVar18 + 0x135) & 1) == 0) {
        lVar18 = FUN_02d8720c();
      }
      FUN_05f36f90(*(undefined8 *)puVar4,**(undefined8 **)(lVar18 + 0xb8),0);
      lVar18 = *unaff_x28;
      if (*(int *)(lVar18 + 0xe4) == 0) {
        thunk_FUN_02dabd98();
        lVar18 = *unaff_x28;
      }
      puVar4 = System_Net_Http_Headers_ElementTryParser<StringWithQualityHeaderValue>_TypeInfo;
      lVar18 = *(long *)(*(long *)(lVar18 + 0xb8) + 8);
      if (((lVar18 == 0) || (lVar18 = *(long *)(lVar18 + 0x10), lVar18 == 0)) ||
         (plVar14 = *(long **)(lVar18 + 0xa0), plVar14 == (long *)0x0)) goto LAB_05236028;
      uVar10 = (**(code **)(*plVar14 + 0x168))(plVar14,*(undefined8 *)(*plVar14 + 0x170));
      lVar15 = FUN_04e723e0(*(undefined8 *)puVar4,uVar10,0);
      puVar4 = System_Dynamic_Utils_EmptyReadOnlyCollection<Expression>_TypeInfo;
      lVar18 = *(long *)(*(long *)(*unaff_x28 + 0xb8) + 8);
      if (((lVar18 == 0) || (lVar18 = *(long *)(lVar18 + 0x10), lVar18 == 0)) ||
         (plVar14 = *(long **)(lVar18 + 0xa8), plVar14 == (long *)0x0)) goto LAB_05236028;
      uVar10 = (**(code **)(*plVar14 + 0x168))(plVar14,*(undefined8 *)(*plVar14 + 0x170));
      lVar18 = FUN_04e723e0(*(undefined8 *)puVar4,uVar10,0);
      lVar20 = *(long *)puVar3;
      lVar19 = *(long *)(lVar20 + 0x38);
      if (lVar19 == 0) {
        FUN_02d87268(lVar20);
        lVar19 = *(long *)(lVar20 + 0x38);
      }
      lVar19 = *(long *)(lVar19 + 0x10);
      if ((*(ushort *)(lVar19 + 0x135) & 1) == 0) {
        lVar19 = FUN_02d8720c();
      }
      if (*(int *)(lVar19 + 0xe4) == 0) {
        thunk_FUN_02dabd98();
      }
      lVar19 = *(long *)(*(long *)(lVar20 + 0x38) + 0x10);
      if ((*(ushort *)(lVar19 + 0x135) & 1) == 0) {
        lVar19 = FUN_02d8720c();
      }
      FUN_05f36db0(lVar15,**(undefined8 **)(lVar19 + 0xb8),0);
      lVar20 = *(long *)puVar3;
      lVar19 = *(long *)(lVar20 + 0x38);
      if (lVar19 == 0) {
        FUN_02d87268(lVar20);
        lVar19 = *(long *)(lVar20 + 0x38);
      }
      lVar19 = *(long *)(lVar19 + 0x10);
      if ((*(ushort *)(lVar19 + 0x135) & 1) == 0) {
        lVar19 = FUN_02d8720c();
      }
      if (*(int *)(lVar19 + 0xe4) == 0) {
        thunk_FUN_02dabd98();
      }
      lVar19 = *(long *)(*(long *)(lVar20 + 0x38) + 0x10);
      if ((*(ushort *)(lVar19 + 0x135) & 1) == 0) {
        lVar19 = FUN_02d8720c();
      }
      FUN_05f36db0(lVar18,**(undefined8 **)(lVar19 + 0xb8),0);
      lVar19 = **(long **)(*(long *)(puVar2 + 0x90) + 0xb8);
    }
    if (*(char *)(unaff_x19 + 0x22) != '\0') {
      lVar20 = *(long *)puVar3;
      lVar19 = *(long *)(lVar20 + 0x38);
      if (lVar19 == 0) {
        FUN_02d87268(lVar20);
        lVar19 = *(long *)(lVar20 + 0x38);
      }
      lVar19 = *(long *)(lVar19 + 0x10);
      if ((*(ushort *)(lVar19 + 0x135) & 1) == 0) {
        lVar19 = FUN_02d8720c();
      }
      if (*(int *)(lVar19 + 0xe4) == 0) {
        thunk_FUN_02dabd98();
      }
      puVar4 = System_Net_Http_Headers_ElementTryParser<ProductHeaderValue>_TypeInfo;
      lVar19 = *(long *)(*(long *)(lVar20 + 0x38) + 0x10);
      if ((*(ushort *)(lVar19 + 0x135) & 1) == 0) {
        lVar19 = FUN_02d8720c();
      }
      FUN_05f36f90(*(undefined8 *)puVar4,**(undefined8 **)(lVar19 + 0xb8),0);
      plVar14 = (long *)FUN_02d4dd2c(*(undefined8 *)PTR_DAT_066463a0,9);
      in_stack_00000038 = CONCAT44(in_stack_00000038._4_4_,*(undefined4 *)(lVar17 + 0x54));
      lVar19 = thunk_FUN_02d8a270(*(undefined8 *)(puVar2 + 0x48),&stack0x00000038);
      if (plVar14 == (long *)0x0) goto LAB_05236028;
      if ((lVar19 != 0) &&
         (lVar20 = thunk_FUN_02d8a53c(lVar19,*(undefined8 *)(*plVar14 + 0x40)), lVar20 == 0))
      goto LAB_05236030;
      if ((int)plVar14[3] == 0) goto LAB_0523602c;
      plVar14[4] = lVar19;
      thunk_FUN_02dc1ef0(plVar14 + 4,lVar19);
      in_stack_00000030 = CONCAT44(in_stack_00000030._4_4_,*(undefined4 *)(lVar17 + 0x50));
      lVar19 = thunk_FUN_02d8a270(*(undefined8 *)(puVar2 + 0x48),&stack0x00000030);
      if ((lVar19 != 0) &&
         (lVar20 = thunk_FUN_02d8a53c(lVar19,*(undefined8 *)(*plVar14 + 0x40)), lVar20 == 0))
      goto LAB_05236030;
      if ((*(uint *)(plVar14 + 3) & 0xfffffffe) == 0) goto LAB_0523602c;
      plVar14[5] = lVar19;
      thunk_FUN_02dc1ef0(plVar14 + 5,lVar19);
      in_stack_00000028 = CONCAT44(in_stack_00000028._4_4_,*(undefined4 *)(lVar17 + 0x40));
      lVar19 = thunk_FUN_02d8a270(*(undefined8 *)(puVar2 + 0x48),&stack0x00000028);
      if ((lVar19 != 0) &&
         (lVar20 = thunk_FUN_02d8a53c(lVar19,*(undefined8 *)(*plVar14 + 0x40)), lVar20 == 0))
      goto LAB_05236030;
      if (*(uint *)(plVar14 + 3) < 3) goto LAB_0523602c;
      plVar14[6] = lVar19;
      thunk_FUN_02dc1ef0(plVar14 + 6,lVar19);
      uStack000000000000001c = *(undefined1 *)(lVar17 + 0x4c);
      lVar19 = thunk_FUN_02d8a270(*(undefined8 *)(puVar2 + 0x18),(long)&stack0x00000018 + 4);
      if ((lVar19 != 0) &&
         (lVar20 = thunk_FUN_02d8a53c(lVar19,*(undefined8 *)(*plVar14 + 0x40)), lVar20 == 0))
      goto LAB_05236030;
      if ((*(uint *)(plVar14 + 3) & 0xfffffffc) == 0) goto LAB_0523602c;
      plVar14[7] = lVar19;
      thunk_FUN_02dc1ef0(plVar14 + 7,lVar19);
      in_stack_00000020 = CONCAT44(in_stack_00000020._4_4_,*(undefined4 *)(lVar17 + 0x38));
      lVar19 = thunk_FUN_02d8a270(*(undefined8 *)(puVar2 + 0x48),&stack0x00000020);
      if ((lVar19 != 0) &&
         (lVar20 = thunk_FUN_02d8a53c(lVar19,*(undefined8 *)(*plVar14 + 0x40)), lVar20 == 0))
      goto LAB_05236030;
      if (*(uint *)(plVar14 + 3) < 5) goto LAB_0523602c;
      plVar14[8] = lVar19;
      thunk_FUN_02dc1ef0(plVar14 + 8,lVar19);
      uStack0000000000000018 = *(undefined1 *)(lVar17 + 0x3c);
      lVar17 = thunk_FUN_02d8a270(*(undefined8 *)(puVar2 + 0x18),&stack0x00000018);
      if ((lVar17 != 0) &&
         (lVar19 = thunk_FUN_02d8a53c(lVar17,*(undefined8 *)(*plVar14 + 0x40)), lVar19 == 0))
      goto LAB_05236030;
      if (*(uint *)(plVar14 + 3) < 6) goto LAB_0523602c;
      plVar14[9] = lVar17;
      thunk_FUN_02dc1ef0(plVar14 + 9,lVar17);
      lVar17 = *unaff_x28;
      if (*(int *)(lVar17 + 0xe4) == 0) {
        thunk_FUN_02dabd98();
        lVar17 = *unaff_x28;
      }
      lVar17 = *(long *)(*(long *)(lVar17 + 0xb8) + 8);
      if ((lVar17 == 0) || (lVar17 = *(long *)(lVar17 + 0x10), lVar17 == 0)) goto LAB_05236028;
      uStack000000000000004c = FUN_051bf2d0(lVar17,0);
      lVar17 = thunk_FUN_02d8a270(*(undefined8 *)(puVar2 + 0x48),(long)&stack0x00000048 + 4);
      if ((lVar17 != 0) &&
         (lVar19 = thunk_FUN_02d8a53c(lVar17,*(undefined8 *)(*plVar14 + 0x40)), lVar19 == 0))
      goto LAB_05236030;
      if (*(uint *)(plVar14 + 3) < 7) goto LAB_0523602c;
      plVar14[10] = lVar17;
      thunk_FUN_02dc1ef0(plVar14 + 10,lVar17);
      lVar17 = *(long *)(*(long *)(*unaff_x28 + 0xb8) + 8);
      if ((lVar17 == 0) || (lVar17 = *(long *)(lVar17 + 0x10), lVar17 == 0)) goto LAB_05236028;
      uStack0000000000000048 = FUN_051bf2e8(lVar17,0);
      lVar17 = thunk_FUN_02d8a270(*(undefined8 *)(puVar2 + 0x48),&stack0x00000048);
      if ((lVar17 != 0) &&
         (lVar19 = thunk_FUN_02d8a53c(lVar17,*(undefined8 *)(*plVar14 + 0x40)), lVar19 == 0))
      goto LAB_05236030;
      if ((*(uint *)(plVar14 + 3) & 0xfffffff8) == 0) goto LAB_0523602c;
      plVar14[0xb] = lVar17;
      thunk_FUN_02dc1ef0(plVar14 + 0xb,lVar17);
      lVar17 = *(long *)(*(long *)(*unaff_x28 + 0xb8) + 8);
      if ((lVar17 == 0) || (lVar17 = *(long *)(lVar17 + 0x10), lVar17 == 0)) goto LAB_05236028;
      in_stack_00000040._4_4_ = FUN_051bf054(lVar17,0);
      lVar17 = thunk_FUN_02d8a270(*(undefined8 *)(puVar2 + 0x48),(long)&stack0x00000040 + 4);
      if ((lVar17 != 0) &&
         (lVar19 = thunk_FUN_02d8a53c(lVar17,*(undefined8 *)(*plVar14 + 0x40)), lVar19 == 0))
      goto LAB_05236030;
      puVar4 = System_Dynamic_Utils_EmptyReadOnlyCollection<ParameterExpression>_TypeInfo;
      if (*(uint *)(plVar14 + 3) < 9) goto LAB_0523602c;
      plVar14[0xc] = lVar17;
      thunk_FUN_02dc1ef0(plVar14 + 0xc,lVar17);
      lVar19 = FUN_04e81064(*(undefined8 *)puVar4,plVar14,0);
      lVar20 = *(long *)puVar3;
      lVar17 = *(long *)(lVar20 + 0x38);
      if (lVar17 == 0) {
        FUN_02d87268(lVar20);
        lVar17 = *(long *)(lVar20 + 0x38);
      }
      lVar17 = *(long *)(lVar17 + 0x10);
      if ((*(ushort *)(lVar17 + 0x135) & 1) == 0) {
        lVar17 = FUN_02d8720c();
      }
      if (*(int *)(lVar17 + 0xe4) == 0) {
        thunk_FUN_02dabd98();
      }
      lVar17 = *(long *)(*(long *)(lVar20 + 0x38) + 0x10);
      if ((*(ushort *)(lVar17 + 0x135) & 1) == 0) {
        lVar17 = FUN_02d8720c();
      }
      FUN_05f36db0(lVar19,**(undefined8 **)(lVar17 + 0xb8),0);
    }
    if ((uVar13 & 1) == 0) {
LAB_05235fc4:
      puVar3 = PTR_DAT_06646bc8;
      if (*(int *)(*(long *)PTR_DAT_06646bc8 + 0xe4) == 0) {
        thunk_FUN_02dabd98();
      }
      uVar13 = FUN_05f31478(0);
      if ((uVar13 & 1) != 0) {
        *(undefined4 *)(unaff_x19 + 0x34) = 0x42c80000;
      }
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_02dabd98();
      }
      FUN_05f361c8(0);
      return;
    }
    plVar14 = (long *)FUN_02d4dd2c(*(undefined8 *)PTR_DAT_066463a0,6);
    if (plVar14 != (long *)0x0) {
      if ((lVar9 != 0) &&
         (lVar17 = thunk_FUN_02d8a53c(lVar9,*(undefined8 *)(*plVar14 + 0x40)), lVar17 == 0)) {
LAB_05236030:
        uVar10 = thunk_FUN_02d980e0();
                    /* WARNING: Subroutine does not return */
        FUN_02d4ddac(uVar10,0);
      }
      if ((int)plVar14[3] != 0) {
        plVar14[4] = lVar9;
        thunk_FUN_02dc1ef0(plVar14 + 4,lVar9);
        if ((lVar16 != 0) &&
           (lVar9 = thunk_FUN_02d8a53c(lVar16,*(undefined8 *)(*plVar14 + 0x40)), lVar9 == 0))
        goto LAB_05236030;
        if ((*(uint *)(plVar14 + 3) & 0xfffffffe) != 0) {
          plVar14[5] = lVar16;
          thunk_FUN_02dc1ef0(plVar14 + 5,lVar16);
          if ((lVar8 != 0) &&
             (lVar9 = thunk_FUN_02d8a53c(lVar8,*(undefined8 *)(*plVar14 + 0x40)), lVar9 == 0))
          goto LAB_05236030;
          if (2 < *(uint *)(plVar14 + 3)) {
            plVar14[6] = lVar8;
            thunk_FUN_02dc1ef0(plVar14 + 6,lVar8);
            if ((lVar15 != 0) &&
               (lVar8 = thunk_FUN_02d8a53c(lVar15,*(undefined8 *)(*plVar14 + 0x40)), lVar8 == 0))
            goto LAB_05236030;
            if ((*(uint *)(plVar14 + 3) & 0xfffffffc) != 0) {
              plVar14[7] = lVar15;
              thunk_FUN_02dc1ef0(plVar14 + 7,lVar15);
              if ((lVar18 != 0) &&
                 (lVar8 = thunk_FUN_02d8a53c(lVar18,*(undefined8 *)(*plVar14 + 0x40)), lVar8 == 0))
              goto LAB_05236030;
              if (4 < *(uint *)(plVar14 + 3)) {
                plVar14[8] = lVar18;
                thunk_FUN_02dc1ef0(plVar14 + 8,lVar18);
                if ((lVar19 != 0) &&
                   (lVar8 = thunk_FUN_02d8a53c(lVar19,*(undefined8 *)(*plVar14 + 0x40)), lVar8 == 0)
                   ) goto LAB_05236030;
                if (5 < *(uint *)(plVar14 + 3)) {
                  plVar14[9] = lVar19;
                  thunk_FUN_02dc1ef0(plVar14 + 9,lVar19);
                  uVar10 = FUN_04e81064(*(undefined8 *)
                                         System_Net_Http_Headers_ElementTryParser<ViaHeaderValue>_TypeInfo
                                        ,plVar14,0);
                  if (*(int *)(*(long *)PTR_DAT_06646730 + 0xe4) == 0) {
                    thunk_FUN_02dabd98(*(long *)PTR_DAT_06646730);
                  }
                  FUN_05ea2238(uVar10,0);
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
  }
LAB_05236028:
                    /* WARNING: Subroutine does not return */
  FUN_02d4dee8();
}


