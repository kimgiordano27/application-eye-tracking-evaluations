/*
FUNCTION_NAME: PlayFab.Events.PlayFabEvents$$remove_OnGetLeaderboardAroundCharacterRequestEvent
ENTRY_POINT: 05235444
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_6;telemetry_or_network_hits_2
*/


void PlayFab_Events_PlayFabEvents__remove_OnGetLeaderboardAroundCharacterRequestEvent
               (undefined8 param_1)

{
  char cVar1;
  undefined *puVar2;
  byte bVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long unaff_x19;
  long unaff_x20;
  long lVar11;
  long unaff_x21;
  long unaff_x22;
  long lVar12;
  long unaff_x25;
  undefined8 *unaff_x26;
  long *unaff_x27;
  long lVar13;
  long *unaff_x28;
  long unaff_x29;
  undefined1 uStack0000000000000018;
  undefined1 uStack000000000000001c;
  long in_stack_00000020;
  undefined4 in_stack_00000028;
  undefined4 in_stack_00000030;
  undefined4 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  
                    /* catch(type#2 @ 00000000) { ... } // from try @ 05235438 with catch @ 05235448
                        */
  iVar4 = FUN_051e0264(param_1,0);
  in_stack_00000020 = 0;
  if (unaff_x25 != 0) {
    in_stack_00000020 = (long)iVar4 / unaff_x25;
  }
  thunk_FUN_02d8a270(*(undefined8 *)(unaff_x29 + 0x68),&stack0x00000020);
  lVar5 = FUN_04e81020(*unaff_x26);
  lVar12 = *unaff_x27;
  lVar10 = *(long *)(lVar12 + 0x38);
  if (lVar10 == 0) {
    FUN_02d87268(lVar12);
    lVar10 = *(long *)(lVar12 + 0x38);
  }
  lVar10 = *(long *)(lVar10 + 0x10);
  if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_02d8720c();
  }
  if (*(int *)(lVar10 + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  if ((*(ushort *)(*(long *)(*(long *)(lVar12 + 0x38) + 0x10) + 0x135) & 1) == 0) {
    FUN_02d8720c();
  }
  FUN_05f36db0();
  lVar12 = *unaff_x27;
  lVar10 = *(long *)(lVar12 + 0x38);
  if (lVar10 == 0) {
    FUN_02d87268(lVar12);
    lVar10 = *(long *)(lVar12 + 0x38);
  }
  lVar10 = *(long *)(lVar10 + 0x10);
  if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_02d8720c();
  }
  if (*(int *)(lVar10 + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  if ((*(ushort *)(*(long *)(*(long *)(lVar12 + 0x38) + 0x10) + 0x135) & 1) == 0) {
    FUN_02d8720c();
  }
  FUN_05f36db0();
  lVar12 = *unaff_x27;
  lVar10 = *(long *)(lVar12 + 0x38);
  if (lVar10 == 0) {
    FUN_02d87268(lVar12);
    lVar10 = *(long *)(lVar12 + 0x38);
  }
  lVar10 = *(long *)(lVar10 + 0x10);
  if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_02d8720c();
  }
  if (*(int *)(lVar10 + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  lVar10 = *(long *)(*(long *)(lVar12 + 0x38) + 0x10);
  if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_02d8720c();
  }
  FUN_05f36db0(lVar5,**(undefined8 **)(lVar10 + 0xb8),0);
  if (*(char *)(unaff_x19 + 0x24) == '\0') {
    uVar6 = 0;
  }
  else {
    lVar12 = *unaff_x27;
    lVar10 = *(long *)(lVar12 + 0x38);
    if (lVar10 == 0) {
      FUN_02d87268(lVar12);
      lVar10 = *(long *)(lVar12 + 0x38);
    }
    lVar10 = *(long *)(lVar10 + 0x10);
    if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_02d8720c();
    }
    if (*(int *)(lVar10 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    lVar10 = *(long *)(*(long *)(lVar12 + 0x38) + 0x10);
    if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_02d8720c();
    }
    FUN_05f37c6c(**(undefined8 **)(lVar10 + 0xb8),0);
    lVar12 = *unaff_x27;
    cVar1 = *(char *)(unaff_x19 + 0x21);
    lVar10 = *(long *)(lVar12 + 0x38);
    if (lVar10 == 0) {
      FUN_02d87268(lVar12);
      lVar10 = *(long *)(lVar12 + 0x38);
    }
    lVar10 = *(long *)(lVar10 + 0x10);
    if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_02d8720c();
    }
    if (*(int *)(lVar10 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    puVar2 = System_Net_Http_Headers_ElementTryParser<WarningHeaderValue>_TypeInfo;
    lVar10 = *(long *)(*(long *)(lVar12 + 0x38) + 0x10);
    if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_02d8720c();
    }
    bVar3 = FUN_05f3756c(cVar1 != '\0',*(undefined8 *)puVar2,**(undefined8 **)(lVar10 + 0xb8),0);
    lVar12 = *unaff_x27;
    *(byte *)(unaff_x19 + 0x21) = bVar3 & 1;
    lVar10 = *(long *)(lVar12 + 0x38);
    if (lVar10 == 0) {
      FUN_02d87268(lVar12);
      lVar10 = *(long *)(lVar12 + 0x38);
    }
    lVar10 = *(long *)(lVar10 + 0x10);
    if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_02d8720c();
    }
    if (*(int *)(lVar10 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    puVar2 = System_EmptyArray<CustomAttributeNamedArgument>_TypeInfo;
    lVar10 = *(long *)(*(long *)(lVar12 + 0x38) + 0x10);
    if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_02d8720c();
    }
    uVar6 = FUN_05f37104(*(undefined8 *)puVar2,**(undefined8 **)(lVar10 + 0xb8),0);
    if ((uVar6 & 1) != 0) {
      lVar10 = *unaff_x28;
      if (*(int *)(lVar10 + 0xe4) == 0) {
        thunk_FUN_02dabd98();
        lVar10 = *unaff_x28;
      }
      lVar10 = *(long *)(*(long *)(lVar10 + 0xb8) + 8);
      if ((lVar10 == 0) || (lVar10 = *(long *)(lVar10 + 0x10), lVar10 == 0)) goto LAB_05236028;
      FUN_051bf7e8(lVar10,0);
      lVar10 = *(long *)(*(long *)(*unaff_x28 + 0xb8) + 8);
      if ((lVar10 == 0) || (lVar10 = *(long *)(lVar10 + 0x10), lVar10 == 0)) goto LAB_05236028;
      FUN_051bf610(lVar10,1,0);
    }
    lVar12 = *unaff_x27;
    lVar10 = *(long *)(lVar12 + 0x38);
    if (lVar10 == 0) {
      FUN_02d87268(lVar12);
      lVar10 = *(long *)(lVar12 + 0x38);
    }
    lVar10 = *(long *)(lVar10 + 0x10);
    if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_02d8720c();
    }
    if (*(int *)(lVar10 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    puVar2 = System_EmptyArray<byte>_TypeInfo;
    lVar10 = *(long *)(*(long *)(lVar12 + 0x38) + 0x10);
    if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_02d8720c();
    }
    uVar6 = FUN_05f37104(*(undefined8 *)puVar2,**(undefined8 **)(lVar10 + 0xb8),0);
    uVar6 = uVar6 & 0xffffffff;
    FUN_05f381d0(0);
  }
  if (*(char *)(unaff_x19 + 0x23) == '\0') {
    lVar9 = **(long **)(*(long *)(unaff_x29 + 0x90) + 0xb8);
    lVar10 = lVar9;
    lVar12 = lVar9;
  }
  else {
    lVar12 = *unaff_x27;
    lVar10 = *(long *)(lVar12 + 0x38);
    if (lVar10 == 0) {
      FUN_02d87268(lVar12);
      lVar10 = *(long *)(lVar12 + 0x38);
    }
    lVar10 = *(long *)(lVar10 + 0x10);
    if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_02d8720c();
    }
    if (*(int *)(lVar10 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    puVar2 = System_EmptyArray<ParameterInfo>_TypeInfo;
    lVar10 = *(long *)(*(long *)(lVar12 + 0x38) + 0x10);
    if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_02d8720c();
    }
    FUN_05f36f90(*(undefined8 *)puVar2,**(undefined8 **)(lVar10 + 0xb8),0);
    lVar10 = *unaff_x28;
    if (*(int *)(lVar10 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
      lVar10 = *unaff_x28;
    }
    puVar2 = System_Net_Http_Headers_ElementTryParser<StringWithQualityHeaderValue>_TypeInfo;
    lVar10 = *(long *)(*(long *)(lVar10 + 0xb8) + 8);
    if (((lVar10 == 0) || (lVar10 = *(long *)(lVar10 + 0x10), lVar10 == 0)) ||
       (plVar7 = *(long **)(lVar10 + 0xa0), plVar7 == (long *)0x0)) goto LAB_05236028;
    uVar8 = (**(code **)(*plVar7 + 0x168))(plVar7,*(undefined8 *)(*plVar7 + 0x170));
    lVar9 = FUN_04e723e0(*(undefined8 *)puVar2,uVar8,0);
    puVar2 = System_Dynamic_Utils_EmptyReadOnlyCollection<Expression>_TypeInfo;
    lVar10 = *(long *)(*(long *)(*unaff_x28 + 0xb8) + 8);
    if (((lVar10 == 0) || (lVar10 = *(long *)(lVar10 + 0x10), lVar10 == 0)) ||
       (plVar7 = *(long **)(lVar10 + 0xa8), plVar7 == (long *)0x0)) goto LAB_05236028;
    uVar8 = (**(code **)(*plVar7 + 0x168))(plVar7,*(undefined8 *)(*plVar7 + 0x170));
    lVar10 = FUN_04e723e0(*(undefined8 *)puVar2,uVar8,0);
    lVar13 = *unaff_x27;
    lVar12 = *(long *)(lVar13 + 0x38);
    if (lVar12 == 0) {
      FUN_02d87268(lVar13);
      lVar12 = *(long *)(lVar13 + 0x38);
    }
    lVar12 = *(long *)(lVar12 + 0x10);
    if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = FUN_02d8720c();
    }
    if (*(int *)(lVar12 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    lVar12 = *(long *)(*(long *)(lVar13 + 0x38) + 0x10);
    if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = FUN_02d8720c();
    }
    FUN_05f36db0(lVar9,**(undefined8 **)(lVar12 + 0xb8),0);
    lVar13 = *unaff_x27;
    lVar12 = *(long *)(lVar13 + 0x38);
    if (lVar12 == 0) {
      FUN_02d87268(lVar13);
      lVar12 = *(long *)(lVar13 + 0x38);
    }
    lVar12 = *(long *)(lVar12 + 0x10);
    if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = FUN_02d8720c();
    }
    if (*(int *)(lVar12 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    lVar12 = *(long *)(*(long *)(lVar13 + 0x38) + 0x10);
    if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = FUN_02d8720c();
    }
    FUN_05f36db0(lVar10,**(undefined8 **)(lVar12 + 0xb8),0);
    lVar12 = **(long **)(*(long *)(unaff_x29 + 0x90) + 0xb8);
  }
  if (*(char *)(unaff_x19 + 0x22) != '\0') {
    lVar13 = *unaff_x27;
    lVar12 = *(long *)(lVar13 + 0x38);
    if (lVar12 == 0) {
      FUN_02d87268(lVar13);
      lVar12 = *(long *)(lVar13 + 0x38);
    }
    lVar12 = *(long *)(lVar12 + 0x10);
    if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = FUN_02d8720c();
    }
    if (*(int *)(lVar12 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    puVar2 = System_Net_Http_Headers_ElementTryParser<ProductHeaderValue>_TypeInfo;
    lVar12 = *(long *)(*(long *)(lVar13 + 0x38) + 0x10);
    if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = FUN_02d8720c();
    }
    FUN_05f36f90(*(undefined8 *)puVar2,**(undefined8 **)(lVar12 + 0xb8),0);
    plVar7 = (long *)FUN_02d4dd2c(*(undefined8 *)PTR_DAT_066463a0,9);
    in_stack_00000038 = *(undefined4 *)(unaff_x20 + 0x54);
    lVar12 = thunk_FUN_02d8a270(*(undefined8 *)(unaff_x29 + 0x48),&stack0x00000038);
    if (plVar7 == (long *)0x0) goto LAB_05236028;
    if ((lVar12 != 0) &&
       (lVar13 = thunk_FUN_02d8a53c(lVar12,*(undefined8 *)(*plVar7 + 0x40)), lVar13 == 0))
    goto LAB_05236030;
    if ((int)plVar7[3] == 0) goto LAB_0523602c;
    plVar7[4] = lVar12;
    thunk_FUN_02dc1ef0(plVar7 + 4,lVar12);
    in_stack_00000030 = *(undefined4 *)(unaff_x20 + 0x50);
    lVar12 = thunk_FUN_02d8a270(*(undefined8 *)(unaff_x29 + 0x48),&stack0x00000030);
    if ((lVar12 != 0) &&
       (lVar13 = thunk_FUN_02d8a53c(lVar12,*(undefined8 *)(*plVar7 + 0x40)), lVar13 == 0))
    goto LAB_05236030;
    if ((*(uint *)(plVar7 + 3) & 0xfffffffe) == 0) goto LAB_0523602c;
    plVar7[5] = lVar12;
    thunk_FUN_02dc1ef0(plVar7 + 5,lVar12);
    in_stack_00000028 = *(undefined4 *)(unaff_x20 + 0x40);
    lVar12 = thunk_FUN_02d8a270(*(undefined8 *)(unaff_x29 + 0x48),&stack0x00000028);
    if ((lVar12 != 0) &&
       (lVar13 = thunk_FUN_02d8a53c(lVar12,*(undefined8 *)(*plVar7 + 0x40)), lVar13 == 0))
    goto LAB_05236030;
    if (*(uint *)(plVar7 + 3) < 3) goto LAB_0523602c;
    plVar7[6] = lVar12;
    thunk_FUN_02dc1ef0(plVar7 + 6,lVar12);
    uStack000000000000001c = *(undefined1 *)(unaff_x20 + 0x4c);
    lVar12 = thunk_FUN_02d8a270(*(undefined8 *)(unaff_x29 + 0x18),(long)&stack0x00000018 + 4);
    if ((lVar12 != 0) &&
       (lVar13 = thunk_FUN_02d8a53c(lVar12,*(undefined8 *)(*plVar7 + 0x40)), lVar13 == 0))
    goto LAB_05236030;
    if ((*(uint *)(plVar7 + 3) & 0xfffffffc) == 0) goto LAB_0523602c;
    plVar7[7] = lVar12;
    thunk_FUN_02dc1ef0(plVar7 + 7,lVar12);
    in_stack_00000020 = CONCAT44(in_stack_00000020._4_4_,*(undefined4 *)(unaff_x20 + 0x38));
    lVar12 = thunk_FUN_02d8a270(*(undefined8 *)(unaff_x29 + 0x48),&stack0x00000020);
    if ((lVar12 != 0) &&
       (lVar13 = thunk_FUN_02d8a53c(lVar12,*(undefined8 *)(*plVar7 + 0x40)), lVar13 == 0))
    goto LAB_05236030;
    if (*(uint *)(plVar7 + 3) < 5) goto LAB_0523602c;
    plVar7[8] = lVar12;
    thunk_FUN_02dc1ef0(plVar7 + 8,lVar12);
    uStack0000000000000018 = *(undefined1 *)(unaff_x20 + 0x3c);
    lVar12 = thunk_FUN_02d8a270(*(undefined8 *)(unaff_x29 + 0x18),&stack0x00000018);
    if ((lVar12 != 0) &&
       (lVar13 = thunk_FUN_02d8a53c(lVar12,*(undefined8 *)(*plVar7 + 0x40)), lVar13 == 0))
    goto LAB_05236030;
    if (*(uint *)(plVar7 + 3) < 6) goto LAB_0523602c;
    plVar7[9] = lVar12;
    thunk_FUN_02dc1ef0(plVar7 + 9,lVar12);
    lVar12 = *unaff_x28;
    if (*(int *)(lVar12 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
      lVar12 = *unaff_x28;
    }
    lVar12 = *(long *)(*(long *)(lVar12 + 0xb8) + 8);
    if ((lVar12 == 0) || (lVar12 = *(long *)(lVar12 + 0x10), lVar12 == 0)) goto LAB_05236028;
    uStack000000000000004c = FUN_051bf2d0(lVar12,0);
    lVar12 = thunk_FUN_02d8a270(*(undefined8 *)(unaff_x29 + 0x48),(long)&stack0x00000048 + 4);
    if ((lVar12 != 0) &&
       (lVar13 = thunk_FUN_02d8a53c(lVar12,*(undefined8 *)(*plVar7 + 0x40)), lVar13 == 0))
    goto LAB_05236030;
    if (*(uint *)(plVar7 + 3) < 7) goto LAB_0523602c;
    plVar7[10] = lVar12;
    thunk_FUN_02dc1ef0(plVar7 + 10,lVar12);
    lVar12 = *(long *)(*(long *)(*unaff_x28 + 0xb8) + 8);
    if ((lVar12 == 0) || (lVar12 = *(long *)(lVar12 + 0x10), lVar12 == 0)) goto LAB_05236028;
    uStack0000000000000048 = FUN_051bf2e8(lVar12,0);
    lVar12 = thunk_FUN_02d8a270(*(undefined8 *)(unaff_x29 + 0x48),&stack0x00000048);
    if ((lVar12 != 0) &&
       (lVar13 = thunk_FUN_02d8a53c(lVar12,*(undefined8 *)(*plVar7 + 0x40)), lVar13 == 0))
    goto LAB_05236030;
    if ((*(uint *)(plVar7 + 3) & 0xfffffff8) == 0) goto LAB_0523602c;
    plVar7[0xb] = lVar12;
    thunk_FUN_02dc1ef0(plVar7 + 0xb,lVar12);
    lVar12 = *(long *)(*(long *)(*unaff_x28 + 0xb8) + 8);
    if ((lVar12 == 0) || (lVar12 = *(long *)(lVar12 + 0x10), lVar12 == 0)) goto LAB_05236028;
    in_stack_00000040._4_4_ = FUN_051bf054(lVar12,0);
    lVar12 = thunk_FUN_02d8a270(*(undefined8 *)(unaff_x29 + 0x48),(long)&stack0x00000040 + 4);
    if ((lVar12 != 0) &&
       (lVar13 = thunk_FUN_02d8a53c(lVar12,*(undefined8 *)(*plVar7 + 0x40)), lVar13 == 0))
    goto LAB_05236030;
    puVar2 = System_Dynamic_Utils_EmptyReadOnlyCollection<ParameterExpression>_TypeInfo;
    if (*(uint *)(plVar7 + 3) < 9) goto LAB_0523602c;
    plVar7[0xc] = lVar12;
    thunk_FUN_02dc1ef0(plVar7 + 0xc,lVar12);
    lVar12 = FUN_04e81064(*(undefined8 *)puVar2,plVar7,0);
    lVar11 = *unaff_x27;
    lVar13 = *(long *)(lVar11 + 0x38);
    if (lVar13 == 0) {
      FUN_02d87268(lVar11);
      lVar13 = *(long *)(lVar11 + 0x38);
    }
    lVar13 = *(long *)(lVar13 + 0x10);
    if ((*(ushort *)(lVar13 + 0x135) & 1) == 0) {
      lVar13 = FUN_02d8720c();
    }
    if (*(int *)(lVar13 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    lVar13 = *(long *)(*(long *)(lVar11 + 0x38) + 0x10);
    if ((*(ushort *)(lVar13 + 0x135) & 1) == 0) {
      lVar13 = FUN_02d8720c();
    }
    FUN_05f36db0(lVar12,**(undefined8 **)(lVar13 + 0xb8),0);
  }
  if ((uVar6 & 1) == 0) {
LAB_05235fc4:
    puVar2 = PTR_DAT_06646bc8;
    if (*(int *)(*(long *)PTR_DAT_06646bc8 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    uVar6 = FUN_05f31478(0);
    if ((uVar6 & 1) != 0) {
      *(undefined4 *)(unaff_x19 + 0x34) = 0x42c80000;
    }
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    FUN_05f361c8(0);
    return;
  }
  plVar7 = (long *)FUN_02d4dd2c(*(undefined8 *)PTR_DAT_066463a0,6);
  if (plVar7 == (long *)0x0) {
LAB_05236028:
                    /* WARNING: Subroutine does not return */
    FUN_02d4dee8();
  }
  if ((unaff_x22 != 0) &&
     (lVar13 = thunk_FUN_02d8a53c(unaff_x22,*(undefined8 *)(*plVar7 + 0x40)), lVar13 == 0)) {
LAB_05236030:
    uVar8 = thunk_FUN_02d980e0();
                    /* WARNING: Subroutine does not return */
    FUN_02d4ddac(uVar8,0);
  }
  if ((int)plVar7[3] != 0) {
    plVar7[4] = unaff_x22;
    thunk_FUN_02dc1ef0(plVar7 + 4,unaff_x22);
    if ((unaff_x21 != 0) &&
       (lVar13 = thunk_FUN_02d8a53c(unaff_x21,*(undefined8 *)(*plVar7 + 0x40)), lVar13 == 0))
    goto LAB_05236030;
    if ((*(uint *)(plVar7 + 3) & 0xfffffffe) != 0) {
      plVar7[5] = unaff_x21;
      thunk_FUN_02dc1ef0(plVar7 + 5,unaff_x21);
      if ((lVar5 != 0) &&
         (lVar13 = thunk_FUN_02d8a53c(lVar5,*(undefined8 *)(*plVar7 + 0x40)), lVar13 == 0))
      goto LAB_05236030;
      if (2 < *(uint *)(plVar7 + 3)) {
        plVar7[6] = lVar5;
        thunk_FUN_02dc1ef0(plVar7 + 6,lVar5);
        if ((lVar9 != 0) &&
           (lVar5 = thunk_FUN_02d8a53c(lVar9,*(undefined8 *)(*plVar7 + 0x40)), lVar5 == 0))
        goto LAB_05236030;
        if ((*(uint *)(plVar7 + 3) & 0xfffffffc) != 0) {
          plVar7[7] = lVar9;
          thunk_FUN_02dc1ef0(plVar7 + 7,lVar9);
          if ((lVar10 != 0) &&
             (lVar5 = thunk_FUN_02d8a53c(lVar10,*(undefined8 *)(*plVar7 + 0x40)), lVar5 == 0))
          goto LAB_05236030;
          if (4 < *(uint *)(plVar7 + 3)) {
            plVar7[8] = lVar10;
            thunk_FUN_02dc1ef0(plVar7 + 8,lVar10);
            if ((lVar12 != 0) &&
               (lVar5 = thunk_FUN_02d8a53c(lVar12,*(undefined8 *)(*plVar7 + 0x40)), lVar5 == 0))
            goto LAB_05236030;
            if (5 < *(uint *)(plVar7 + 3)) {
              plVar7[9] = lVar12;
              thunk_FUN_02dc1ef0(plVar7 + 9,lVar12);
              uVar8 = FUN_04e81064(*(undefined8 *)
                                    System_Net_Http_Headers_ElementTryParser<ViaHeaderValue>_TypeInfo
                                   ,plVar7,0);
              if (*(int *)(*(long *)PTR_DAT_06646730 + 0xe4) == 0) {
                thunk_FUN_02dabd98(*(long *)PTR_DAT_06646730);
              }
              FUN_05ea2238(uVar8,0);
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


