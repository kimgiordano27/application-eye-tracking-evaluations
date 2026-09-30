/*
FUNCTION_NAME: PlayFab.Events.PlayFabEvents$$add_OnGetLeaderboardAroundPlayerRequestEvent
ENTRY_POINT: 05235654
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


void PlayFab_Events_PlayFabEvents__add_OnGetLeaderboardAroundPlayerRequestEvent(void)

{
  undefined *puVar1;
  byte bVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  long unaff_x19;
  long unaff_x20;
  long lVar8;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long lVar9;
  int unaff_w25;
  long *unaff_x27;
  long lVar10;
  long *unaff_x28;
  long unaff_x29;
  undefined1 uStack0000000000000018;
  undefined1 uStack000000000000001c;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000028;
  undefined4 in_stack_00000030;
  undefined4 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  
  puVar1 = System_Net_Http_Headers_ElementTryParser<WarningHeaderValue>_TypeInfo;
  lVar3 = *(long *)(*(long *)(unaff_x24 + 0x38) + 0x10);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02d8720c();
  }
  bVar2 = FUN_05f3756c(unaff_w25 != 0,*(undefined8 *)puVar1,**(undefined8 **)(lVar3 + 0xb8),0);
  lVar9 = *unaff_x27;
  *(byte *)(unaff_x19 + 0x21) = bVar2 & 1;
  lVar3 = *(long *)(lVar9 + 0x38);
  if (lVar3 == 0) {
    FUN_02d87268(lVar9);
    lVar3 = *(long *)(lVar9 + 0x38);
  }
  lVar3 = *(long *)(lVar3 + 0x10);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02d8720c();
  }
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  puVar1 = System_EmptyArray<CustomAttributeNamedArgument>_TypeInfo;
  lVar3 = *(long *)(*(long *)(lVar9 + 0x38) + 0x10);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02d8720c();
  }
  uVar4 = FUN_05f37104(*(undefined8 *)puVar1,**(undefined8 **)(lVar3 + 0xb8),0);
  if ((uVar4 & 1) != 0) {
    lVar3 = *unaff_x28;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
      lVar3 = *unaff_x28;
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
    if ((lVar3 == 0) || (lVar3 = *(long *)(lVar3 + 0x10), lVar3 == 0)) goto LAB_05236028;
    FUN_051bf7e8(lVar3,0);
    lVar3 = *(long *)(*(long *)(*unaff_x28 + 0xb8) + 8);
    if ((lVar3 == 0) || (lVar3 = *(long *)(lVar3 + 0x10), lVar3 == 0)) goto LAB_05236028;
    FUN_051bf610(lVar3,1,0);
  }
  lVar9 = *unaff_x27;
  lVar3 = *(long *)(lVar9 + 0x38);
  if (lVar3 == 0) {
    FUN_02d87268(lVar9);
    lVar3 = *(long *)(lVar9 + 0x38);
  }
  lVar3 = *(long *)(lVar3 + 0x10);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02d8720c();
  }
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  puVar1 = System_EmptyArray<byte>_TypeInfo;
  lVar3 = *(long *)(*(long *)(lVar9 + 0x38) + 0x10);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02d8720c();
  }
  uVar4 = FUN_05f37104(*(undefined8 *)puVar1,**(undefined8 **)(lVar3 + 0xb8),0);
  FUN_05f381d0(0);
  if (*(char *)(unaff_x19 + 0x23) == '\0') {
    lVar7 = **(long **)(*(long *)(unaff_x29 + 0x90) + 0xb8);
    lVar3 = lVar7;
    lVar9 = lVar7;
  }
  else {
    lVar9 = *unaff_x27;
    lVar3 = *(long *)(lVar9 + 0x38);
    if (lVar3 == 0) {
      FUN_02d87268(lVar9);
      lVar3 = *(long *)(lVar9 + 0x38);
    }
    lVar3 = *(long *)(lVar3 + 0x10);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02d8720c();
    }
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    puVar1 = System_EmptyArray<ParameterInfo>_TypeInfo;
    lVar3 = *(long *)(*(long *)(lVar9 + 0x38) + 0x10);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02d8720c();
    }
    FUN_05f36f90(*(undefined8 *)puVar1,**(undefined8 **)(lVar3 + 0xb8),0);
    lVar3 = *unaff_x28;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
      lVar3 = *unaff_x28;
    }
    puVar1 = System_Net_Http_Headers_ElementTryParser<StringWithQualityHeaderValue>_TypeInfo;
    lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
    if (((lVar3 == 0) || (lVar3 = *(long *)(lVar3 + 0x10), lVar3 == 0)) ||
       (plVar5 = *(long **)(lVar3 + 0xa0), plVar5 == (long *)0x0)) goto LAB_05236028;
    uVar6 = (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
    lVar7 = FUN_04e723e0(*(undefined8 *)puVar1,uVar6,0);
    puVar1 = System_Dynamic_Utils_EmptyReadOnlyCollection<Expression>_TypeInfo;
    lVar3 = *(long *)(*(long *)(*unaff_x28 + 0xb8) + 8);
    if (((lVar3 == 0) || (lVar3 = *(long *)(lVar3 + 0x10), lVar3 == 0)) ||
       (plVar5 = *(long **)(lVar3 + 0xa8), plVar5 == (long *)0x0)) goto LAB_05236028;
    uVar6 = (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
    lVar3 = FUN_04e723e0(*(undefined8 *)puVar1,uVar6,0);
    lVar10 = *unaff_x27;
    lVar9 = *(long *)(lVar10 + 0x38);
    if (lVar9 == 0) {
      FUN_02d87268(lVar10);
      lVar9 = *(long *)(lVar10 + 0x38);
    }
    lVar9 = *(long *)(lVar9 + 0x10);
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_02d8720c();
    }
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    lVar9 = *(long *)(*(long *)(lVar10 + 0x38) + 0x10);
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_02d8720c();
    }
    FUN_05f36db0(lVar7,**(undefined8 **)(lVar9 + 0xb8),0);
    lVar10 = *unaff_x27;
    lVar9 = *(long *)(lVar10 + 0x38);
    if (lVar9 == 0) {
      FUN_02d87268(lVar10);
      lVar9 = *(long *)(lVar10 + 0x38);
    }
    lVar9 = *(long *)(lVar9 + 0x10);
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_02d8720c();
    }
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    lVar9 = *(long *)(*(long *)(lVar10 + 0x38) + 0x10);
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_02d8720c();
    }
    FUN_05f36db0(lVar3,**(undefined8 **)(lVar9 + 0xb8),0);
    lVar9 = **(long **)(*(long *)(unaff_x29 + 0x90) + 0xb8);
  }
  if (*(char *)(unaff_x19 + 0x22) != '\0') {
    lVar10 = *unaff_x27;
    lVar9 = *(long *)(lVar10 + 0x38);
    if (lVar9 == 0) {
      FUN_02d87268(lVar10);
      lVar9 = *(long *)(lVar10 + 0x38);
    }
    lVar9 = *(long *)(lVar9 + 0x10);
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_02d8720c();
    }
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    puVar1 = System_Net_Http_Headers_ElementTryParser<ProductHeaderValue>_TypeInfo;
    lVar9 = *(long *)(*(long *)(lVar10 + 0x38) + 0x10);
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_02d8720c();
    }
    FUN_05f36f90(*(undefined8 *)puVar1,**(undefined8 **)(lVar9 + 0xb8),0);
    plVar5 = (long *)FUN_02d4dd2c(*(undefined8 *)PTR_DAT_066463a0,9);
    in_stack_00000038 = *(undefined4 *)(unaff_x20 + 0x54);
    lVar9 = thunk_FUN_02d8a270(*(undefined8 *)(unaff_x29 + 0x48),&stack0x00000038);
    if (plVar5 == (long *)0x0) goto LAB_05236028;
    if ((lVar9 != 0) &&
       (lVar10 = thunk_FUN_02d8a53c(lVar9,*(undefined8 *)(*plVar5 + 0x40)), lVar10 == 0))
    goto LAB_05236030;
    if ((int)plVar5[3] == 0) goto LAB_0523602c;
    plVar5[4] = lVar9;
    thunk_FUN_02dc1ef0(plVar5 + 4,lVar9);
    in_stack_00000030 = *(undefined4 *)(unaff_x20 + 0x50);
    lVar9 = thunk_FUN_02d8a270(*(undefined8 *)(unaff_x29 + 0x48),&stack0x00000030);
    if ((lVar9 != 0) &&
       (lVar10 = thunk_FUN_02d8a53c(lVar9,*(undefined8 *)(*plVar5 + 0x40)), lVar10 == 0))
    goto LAB_05236030;
    if ((*(uint *)(plVar5 + 3) & 0xfffffffe) == 0) goto LAB_0523602c;
    plVar5[5] = lVar9;
    thunk_FUN_02dc1ef0(plVar5 + 5,lVar9);
    in_stack_00000028 = *(undefined4 *)(unaff_x20 + 0x40);
    lVar9 = thunk_FUN_02d8a270(*(undefined8 *)(unaff_x29 + 0x48),&stack0x00000028);
    if ((lVar9 != 0) &&
       (lVar10 = thunk_FUN_02d8a53c(lVar9,*(undefined8 *)(*plVar5 + 0x40)), lVar10 == 0))
    goto LAB_05236030;
    if (*(uint *)(plVar5 + 3) < 3) goto LAB_0523602c;
    plVar5[6] = lVar9;
    thunk_FUN_02dc1ef0(plVar5 + 6,lVar9);
    uStack000000000000001c = *(undefined1 *)(unaff_x20 + 0x4c);
    lVar9 = thunk_FUN_02d8a270(*(undefined8 *)(unaff_x29 + 0x18),(long)&stack0x00000018 + 4);
    if ((lVar9 != 0) &&
       (lVar10 = thunk_FUN_02d8a53c(lVar9,*(undefined8 *)(*plVar5 + 0x40)), lVar10 == 0))
    goto LAB_05236030;
    if ((*(uint *)(plVar5 + 3) & 0xfffffffc) == 0) goto LAB_0523602c;
    plVar5[7] = lVar9;
    thunk_FUN_02dc1ef0(plVar5 + 7,lVar9);
    in_stack_00000020 = *(undefined4 *)(unaff_x20 + 0x38);
    lVar9 = thunk_FUN_02d8a270(*(undefined8 *)(unaff_x29 + 0x48),&stack0x00000020);
    if ((lVar9 != 0) &&
       (lVar10 = thunk_FUN_02d8a53c(lVar9,*(undefined8 *)(*plVar5 + 0x40)), lVar10 == 0))
    goto LAB_05236030;
    if (*(uint *)(plVar5 + 3) < 5) goto LAB_0523602c;
    plVar5[8] = lVar9;
    thunk_FUN_02dc1ef0(plVar5 + 8,lVar9);
    uStack0000000000000018 = *(undefined1 *)(unaff_x20 + 0x3c);
    lVar9 = thunk_FUN_02d8a270(*(undefined8 *)(unaff_x29 + 0x18),&stack0x00000018);
    if ((lVar9 != 0) &&
       (lVar10 = thunk_FUN_02d8a53c(lVar9,*(undefined8 *)(*plVar5 + 0x40)), lVar10 == 0))
    goto LAB_05236030;
    if (*(uint *)(plVar5 + 3) < 6) goto LAB_0523602c;
    plVar5[9] = lVar9;
    thunk_FUN_02dc1ef0(plVar5 + 9,lVar9);
    lVar9 = *unaff_x28;
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
      lVar9 = *unaff_x28;
    }
    lVar9 = *(long *)(*(long *)(lVar9 + 0xb8) + 8);
    if ((lVar9 == 0) || (lVar9 = *(long *)(lVar9 + 0x10), lVar9 == 0)) goto LAB_05236028;
    uStack000000000000004c = FUN_051bf2d0(lVar9,0);
    lVar9 = thunk_FUN_02d8a270(*(undefined8 *)(unaff_x29 + 0x48),(long)&stack0x00000048 + 4);
    if ((lVar9 != 0) &&
       (lVar10 = thunk_FUN_02d8a53c(lVar9,*(undefined8 *)(*plVar5 + 0x40)), lVar10 == 0))
    goto LAB_05236030;
    if (*(uint *)(plVar5 + 3) < 7) goto LAB_0523602c;
    plVar5[10] = lVar9;
    thunk_FUN_02dc1ef0(plVar5 + 10,lVar9);
    lVar9 = *(long *)(*(long *)(*unaff_x28 + 0xb8) + 8);
    if ((lVar9 == 0) || (lVar9 = *(long *)(lVar9 + 0x10), lVar9 == 0)) goto LAB_05236028;
    uStack0000000000000048 = FUN_051bf2e8(lVar9,0);
    lVar9 = thunk_FUN_02d8a270(*(undefined8 *)(unaff_x29 + 0x48),&stack0x00000048);
    if ((lVar9 != 0) &&
       (lVar10 = thunk_FUN_02d8a53c(lVar9,*(undefined8 *)(*plVar5 + 0x40)), lVar10 == 0))
    goto LAB_05236030;
    if ((*(uint *)(plVar5 + 3) & 0xfffffff8) == 0) goto LAB_0523602c;
    plVar5[0xb] = lVar9;
    thunk_FUN_02dc1ef0(plVar5 + 0xb,lVar9);
    lVar9 = *(long *)(*(long *)(*unaff_x28 + 0xb8) + 8);
    if ((lVar9 == 0) || (lVar9 = *(long *)(lVar9 + 0x10), lVar9 == 0)) goto LAB_05236028;
    in_stack_00000040._4_4_ = FUN_051bf054(lVar9,0);
    lVar9 = thunk_FUN_02d8a270(*(undefined8 *)(unaff_x29 + 0x48),(long)&stack0x00000040 + 4);
    if ((lVar9 != 0) &&
       (lVar10 = thunk_FUN_02d8a53c(lVar9,*(undefined8 *)(*plVar5 + 0x40)), lVar10 == 0))
    goto LAB_05236030;
    puVar1 = System_Dynamic_Utils_EmptyReadOnlyCollection<ParameterExpression>_TypeInfo;
    if (*(uint *)(plVar5 + 3) < 9) goto LAB_0523602c;
    plVar5[0xc] = lVar9;
    thunk_FUN_02dc1ef0(plVar5 + 0xc,lVar9);
    lVar9 = FUN_04e81064(*(undefined8 *)puVar1,plVar5,0);
    lVar8 = *unaff_x27;
    lVar10 = *(long *)(lVar8 + 0x38);
    if (lVar10 == 0) {
      FUN_02d87268(lVar8);
      lVar10 = *(long *)(lVar8 + 0x38);
    }
    lVar10 = *(long *)(lVar10 + 0x10);
    if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_02d8720c();
    }
    if (*(int *)(lVar10 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    lVar10 = *(long *)(*(long *)(lVar8 + 0x38) + 0x10);
    if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_02d8720c();
    }
    FUN_05f36db0(lVar9,**(undefined8 **)(lVar10 + 0xb8),0);
  }
  if ((uVar4 & 1) == 0) {
LAB_05235fc4:
    puVar1 = PTR_DAT_06646bc8;
    if (*(int *)(*(long *)PTR_DAT_06646bc8 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    uVar4 = FUN_05f31478(0);
    if ((uVar4 & 1) != 0) {
      *(undefined4 *)(unaff_x19 + 0x34) = 0x42c80000;
    }
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    FUN_05f361c8(0);
    return;
  }
  plVar5 = (long *)FUN_02d4dd2c(*(undefined8 *)PTR_DAT_066463a0,6);
  if (plVar5 == (long *)0x0) {
LAB_05236028:
                    /* WARNING: Subroutine does not return */
    FUN_02d4dee8();
  }
  if ((unaff_x22 != 0) &&
     (lVar10 = thunk_FUN_02d8a53c(unaff_x22,*(undefined8 *)(*plVar5 + 0x40)), lVar10 == 0)) {
LAB_05236030:
    uVar6 = thunk_FUN_02d980e0();
                    /* WARNING: Subroutine does not return */
    FUN_02d4ddac(uVar6,0);
  }
  if ((int)plVar5[3] != 0) {
    plVar5[4] = unaff_x22;
    thunk_FUN_02dc1ef0(plVar5 + 4,unaff_x22);
    if ((unaff_x21 != 0) &&
       (lVar10 = thunk_FUN_02d8a53c(unaff_x21,*(undefined8 *)(*plVar5 + 0x40)), lVar10 == 0))
    goto LAB_05236030;
    if ((*(uint *)(plVar5 + 3) & 0xfffffffe) != 0) {
      plVar5[5] = unaff_x21;
      thunk_FUN_02dc1ef0(plVar5 + 5,unaff_x21);
      if ((unaff_x23 != 0) && (lVar10 = thunk_FUN_02d8a53c(), lVar10 == 0)) goto LAB_05236030;
      if (2 < *(uint *)(plVar5 + 3)) {
        plVar5[6] = unaff_x23;
        thunk_FUN_02dc1ef0();
        if ((lVar7 != 0) &&
           (lVar10 = thunk_FUN_02d8a53c(lVar7,*(undefined8 *)(*plVar5 + 0x40)), lVar10 == 0))
        goto LAB_05236030;
        if ((*(uint *)(plVar5 + 3) & 0xfffffffc) != 0) {
          plVar5[7] = lVar7;
          thunk_FUN_02dc1ef0(plVar5 + 7,lVar7);
          if ((lVar3 != 0) &&
             (lVar7 = thunk_FUN_02d8a53c(lVar3,*(undefined8 *)(*plVar5 + 0x40)), lVar7 == 0))
          goto LAB_05236030;
          if (4 < *(uint *)(plVar5 + 3)) {
            plVar5[8] = lVar3;
            thunk_FUN_02dc1ef0(plVar5 + 8,lVar3);
            if ((lVar9 != 0) &&
               (lVar3 = thunk_FUN_02d8a53c(lVar9,*(undefined8 *)(*plVar5 + 0x40)), lVar3 == 0))
            goto LAB_05236030;
            if (5 < *(uint *)(plVar5 + 3)) {
              plVar5[9] = lVar9;
              thunk_FUN_02dc1ef0(plVar5 + 9,lVar9);
              uVar6 = FUN_04e81064(*(undefined8 *)
                                    System_Net_Http_Headers_ElementTryParser<ViaHeaderValue>_TypeInfo
                                   ,plVar5,0);
              if (*(int *)(*(long *)PTR_DAT_06646730 + 0xe4) == 0) {
                thunk_FUN_02dabd98(*(long *)PTR_DAT_06646730);
              }
              FUN_05ea2238(uVar6,0);
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


