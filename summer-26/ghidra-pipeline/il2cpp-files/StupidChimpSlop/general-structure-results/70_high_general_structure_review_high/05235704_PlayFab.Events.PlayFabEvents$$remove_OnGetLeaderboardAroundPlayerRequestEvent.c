/*
FUNCTION_NAME: PlayFab.Events.PlayFabEvents$$remove_OnGetLeaderboardAroundPlayerRequestEvent
ENTRY_POINT: 05235704
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


void PlayFab_Events_PlayFabEvents__remove_OnGetLeaderboardAroundPlayerRequestEvent(ulong param_1)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x19;
  long unaff_x20;
  long lVar7;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long lVar8;
  long *unaff_x27;
  long lVar9;
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
  
  if ((param_1 & 1) != 0) {
    lVar2 = *unaff_x28;
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
      lVar2 = *unaff_x28;
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 8);
    if ((lVar2 == 0) || (lVar2 = *(long *)(lVar2 + 0x10), lVar2 == 0)) goto LAB_05236028;
    FUN_051bf7e8(lVar2,0);
    lVar2 = *(long *)(*(long *)(*unaff_x28 + 0xb8) + 8);
    if ((lVar2 == 0) || (lVar2 = *(long *)(lVar2 + 0x10), lVar2 == 0)) goto LAB_05236028;
    FUN_051bf610(lVar2,1,0);
  }
  lVar8 = *unaff_x27;
  lVar2 = *(long *)(lVar8 + 0x38);
  if (lVar2 == 0) {
    FUN_02d87268(lVar8);
    lVar2 = *(long *)(lVar8 + 0x38);
  }
  lVar2 = *(long *)(lVar2 + 0x10);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02d8720c();
  }
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  puVar1 = System_EmptyArray<byte>_TypeInfo;
  lVar2 = *(long *)(*(long *)(lVar8 + 0x38) + 0x10);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02d8720c();
  }
  uVar3 = FUN_05f37104(*(undefined8 *)puVar1,**(undefined8 **)(lVar2 + 0xb8),0);
  FUN_05f381d0(0);
  if (*(char *)(unaff_x19 + 0x23) == '\0') {
    lVar6 = **(long **)(*(long *)(unaff_x29 + 0x90) + 0xb8);
    lVar2 = lVar6;
    lVar8 = lVar6;
  }
  else {
    lVar8 = *unaff_x27;
    lVar2 = *(long *)(lVar8 + 0x38);
    if (lVar2 == 0) {
      FUN_02d87268(lVar8);
      lVar2 = *(long *)(lVar8 + 0x38);
    }
    lVar2 = *(long *)(lVar2 + 0x10);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02d8720c();
    }
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    puVar1 = System_EmptyArray<ParameterInfo>_TypeInfo;
    lVar2 = *(long *)(*(long *)(lVar8 + 0x38) + 0x10);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02d8720c();
    }
    FUN_05f36f90(*(undefined8 *)puVar1,**(undefined8 **)(lVar2 + 0xb8),0);
    lVar2 = *unaff_x28;
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
      lVar2 = *unaff_x28;
    }
    puVar1 = System_Net_Http_Headers_ElementTryParser<StringWithQualityHeaderValue>_TypeInfo;
    lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 8);
    if (((lVar2 == 0) || (lVar2 = *(long *)(lVar2 + 0x10), lVar2 == 0)) ||
       (plVar4 = *(long **)(lVar2 + 0xa0), plVar4 == (long *)0x0)) goto LAB_05236028;
    uVar5 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
    lVar6 = FUN_04e723e0(*(undefined8 *)puVar1,uVar5,0);
    puVar1 = System_Dynamic_Utils_EmptyReadOnlyCollection<Expression>_TypeInfo;
    lVar2 = *(long *)(*(long *)(*unaff_x28 + 0xb8) + 8);
    if (((lVar2 == 0) || (lVar2 = *(long *)(lVar2 + 0x10), lVar2 == 0)) ||
       (plVar4 = *(long **)(lVar2 + 0xa8), plVar4 == (long *)0x0)) goto LAB_05236028;
    uVar5 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
    lVar2 = FUN_04e723e0(*(undefined8 *)puVar1,uVar5,0);
    lVar9 = *unaff_x27;
    lVar8 = *(long *)(lVar9 + 0x38);
    if (lVar8 == 0) {
      FUN_02d87268(lVar9);
      lVar8 = *(long *)(lVar9 + 0x38);
    }
    lVar8 = *(long *)(lVar8 + 0x10);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_02d8720c();
    }
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    lVar8 = *(long *)(*(long *)(lVar9 + 0x38) + 0x10);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_02d8720c();
    }
    FUN_05f36db0(lVar6,**(undefined8 **)(lVar8 + 0xb8),0);
    lVar9 = *unaff_x27;
    lVar8 = *(long *)(lVar9 + 0x38);
    if (lVar8 == 0) {
      FUN_02d87268(lVar9);
      lVar8 = *(long *)(lVar9 + 0x38);
    }
    lVar8 = *(long *)(lVar8 + 0x10);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_02d8720c();
    }
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    lVar8 = *(long *)(*(long *)(lVar9 + 0x38) + 0x10);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_02d8720c();
    }
    FUN_05f36db0(lVar2,**(undefined8 **)(lVar8 + 0xb8),0);
    lVar8 = **(long **)(*(long *)(unaff_x29 + 0x90) + 0xb8);
  }
  if (*(char *)(unaff_x19 + 0x22) != '\0') {
    lVar9 = *unaff_x27;
    lVar8 = *(long *)(lVar9 + 0x38);
    if (lVar8 == 0) {
      FUN_02d87268(lVar9);
      lVar8 = *(long *)(lVar9 + 0x38);
    }
    lVar8 = *(long *)(lVar8 + 0x10);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_02d8720c();
    }
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    puVar1 = System_Net_Http_Headers_ElementTryParser<ProductHeaderValue>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar9 + 0x38) + 0x10);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_02d8720c();
    }
    FUN_05f36f90(*(undefined8 *)puVar1,**(undefined8 **)(lVar8 + 0xb8),0);
    plVar4 = (long *)FUN_02d4dd2c(*(undefined8 *)PTR_DAT_066463a0,9);
    in_stack_00000038 = *(undefined4 *)(unaff_x20 + 0x54);
    lVar8 = thunk_FUN_02d8a270(*(undefined8 *)(unaff_x29 + 0x48),&stack0x00000038);
    if (plVar4 == (long *)0x0) goto LAB_05236028;
    if ((lVar8 != 0) &&
       (lVar9 = thunk_FUN_02d8a53c(lVar8,*(undefined8 *)(*plVar4 + 0x40)), lVar9 == 0))
    goto LAB_05236030;
    if ((int)plVar4[3] == 0) goto LAB_0523602c;
    plVar4[4] = lVar8;
    thunk_FUN_02dc1ef0(plVar4 + 4,lVar8);
    in_stack_00000030 = *(undefined4 *)(unaff_x20 + 0x50);
    lVar8 = thunk_FUN_02d8a270(*(undefined8 *)(unaff_x29 + 0x48),&stack0x00000030);
    if ((lVar8 != 0) &&
       (lVar9 = thunk_FUN_02d8a53c(lVar8,*(undefined8 *)(*plVar4 + 0x40)), lVar9 == 0))
    goto LAB_05236030;
    if ((*(uint *)(plVar4 + 3) & 0xfffffffe) == 0) goto LAB_0523602c;
    plVar4[5] = lVar8;
    thunk_FUN_02dc1ef0(plVar4 + 5,lVar8);
    in_stack_00000028 = *(undefined4 *)(unaff_x20 + 0x40);
    lVar8 = thunk_FUN_02d8a270(*(undefined8 *)(unaff_x29 + 0x48),&stack0x00000028);
    if ((lVar8 != 0) &&
       (lVar9 = thunk_FUN_02d8a53c(lVar8,*(undefined8 *)(*plVar4 + 0x40)), lVar9 == 0))
    goto LAB_05236030;
    if (*(uint *)(plVar4 + 3) < 3) goto LAB_0523602c;
    plVar4[6] = lVar8;
    thunk_FUN_02dc1ef0(plVar4 + 6,lVar8);
    uStack000000000000001c = *(undefined1 *)(unaff_x20 + 0x4c);
    lVar8 = thunk_FUN_02d8a270(*(undefined8 *)(unaff_x29 + 0x18),(long)&stack0x00000018 + 4);
    if ((lVar8 != 0) &&
       (lVar9 = thunk_FUN_02d8a53c(lVar8,*(undefined8 *)(*plVar4 + 0x40)), lVar9 == 0))
    goto LAB_05236030;
    if ((*(uint *)(plVar4 + 3) & 0xfffffffc) == 0) goto LAB_0523602c;
    plVar4[7] = lVar8;
    thunk_FUN_02dc1ef0(plVar4 + 7,lVar8);
    in_stack_00000020 = *(undefined4 *)(unaff_x20 + 0x38);
    lVar8 = thunk_FUN_02d8a270(*(undefined8 *)(unaff_x29 + 0x48),&stack0x00000020);
    if ((lVar8 != 0) &&
       (lVar9 = thunk_FUN_02d8a53c(lVar8,*(undefined8 *)(*plVar4 + 0x40)), lVar9 == 0))
    goto LAB_05236030;
    if (*(uint *)(plVar4 + 3) < 5) goto LAB_0523602c;
    plVar4[8] = lVar8;
    thunk_FUN_02dc1ef0(plVar4 + 8,lVar8);
    uStack0000000000000018 = *(undefined1 *)(unaff_x20 + 0x3c);
    lVar8 = thunk_FUN_02d8a270(*(undefined8 *)(unaff_x29 + 0x18),&stack0x00000018);
    if ((lVar8 != 0) &&
       (lVar9 = thunk_FUN_02d8a53c(lVar8,*(undefined8 *)(*plVar4 + 0x40)), lVar9 == 0))
    goto LAB_05236030;
    if (*(uint *)(plVar4 + 3) < 6) goto LAB_0523602c;
    plVar4[9] = lVar8;
    thunk_FUN_02dc1ef0(plVar4 + 9,lVar8);
    lVar8 = *unaff_x28;
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
      lVar8 = *unaff_x28;
    }
    lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 8);
    if ((lVar8 == 0) || (lVar8 = *(long *)(lVar8 + 0x10), lVar8 == 0)) goto LAB_05236028;
    uStack000000000000004c = FUN_051bf2d0(lVar8,0);
    lVar8 = thunk_FUN_02d8a270(*(undefined8 *)(unaff_x29 + 0x48),(long)&stack0x00000048 + 4);
    if ((lVar8 != 0) &&
       (lVar9 = thunk_FUN_02d8a53c(lVar8,*(undefined8 *)(*plVar4 + 0x40)), lVar9 == 0))
    goto LAB_05236030;
    if (*(uint *)(plVar4 + 3) < 7) goto LAB_0523602c;
    plVar4[10] = lVar8;
    thunk_FUN_02dc1ef0(plVar4 + 10,lVar8);
    lVar8 = *(long *)(*(long *)(*unaff_x28 + 0xb8) + 8);
    if ((lVar8 == 0) || (lVar8 = *(long *)(lVar8 + 0x10), lVar8 == 0)) goto LAB_05236028;
    uStack0000000000000048 = FUN_051bf2e8(lVar8,0);
    lVar8 = thunk_FUN_02d8a270(*(undefined8 *)(unaff_x29 + 0x48),&stack0x00000048);
    if ((lVar8 != 0) &&
       (lVar9 = thunk_FUN_02d8a53c(lVar8,*(undefined8 *)(*plVar4 + 0x40)), lVar9 == 0))
    goto LAB_05236030;
    if ((*(uint *)(plVar4 + 3) & 0xfffffff8) == 0) goto LAB_0523602c;
    plVar4[0xb] = lVar8;
    thunk_FUN_02dc1ef0(plVar4 + 0xb,lVar8);
    lVar8 = *(long *)(*(long *)(*unaff_x28 + 0xb8) + 8);
    if ((lVar8 == 0) || (lVar8 = *(long *)(lVar8 + 0x10), lVar8 == 0)) goto LAB_05236028;
    in_stack_00000040._4_4_ = FUN_051bf054(lVar8,0);
    lVar8 = thunk_FUN_02d8a270(*(undefined8 *)(unaff_x29 + 0x48),(long)&stack0x00000040 + 4);
    if ((lVar8 != 0) &&
       (lVar9 = thunk_FUN_02d8a53c(lVar8,*(undefined8 *)(*plVar4 + 0x40)), lVar9 == 0))
    goto LAB_05236030;
    puVar1 = System_Dynamic_Utils_EmptyReadOnlyCollection<ParameterExpression>_TypeInfo;
    if (*(uint *)(plVar4 + 3) < 9) goto LAB_0523602c;
    plVar4[0xc] = lVar8;
    thunk_FUN_02dc1ef0(plVar4 + 0xc,lVar8);
    lVar8 = FUN_04e81064(*(undefined8 *)puVar1,plVar4,0);
    lVar7 = *unaff_x27;
    lVar9 = *(long *)(lVar7 + 0x38);
    if (lVar9 == 0) {
      FUN_02d87268(lVar7);
      lVar9 = *(long *)(lVar7 + 0x38);
    }
    lVar9 = *(long *)(lVar9 + 0x10);
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_02d8720c();
    }
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    lVar9 = *(long *)(*(long *)(lVar7 + 0x38) + 0x10);
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_02d8720c();
    }
    FUN_05f36db0(lVar8,**(undefined8 **)(lVar9 + 0xb8),0);
  }
  if ((uVar3 & 1) == 0) {
LAB_05235fc4:
    puVar1 = PTR_DAT_06646bc8;
    if (*(int *)(*(long *)PTR_DAT_06646bc8 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    uVar3 = FUN_05f31478(0);
    if ((uVar3 & 1) != 0) {
      *(undefined4 *)(unaff_x19 + 0x34) = 0x42c80000;
    }
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    FUN_05f361c8(0);
    return;
  }
  plVar4 = (long *)FUN_02d4dd2c(*(undefined8 *)PTR_DAT_066463a0,6);
  if (plVar4 == (long *)0x0) {
LAB_05236028:
                    /* WARNING: Subroutine does not return */
    FUN_02d4dee8();
  }
  if ((unaff_x22 != 0) &&
     (lVar9 = thunk_FUN_02d8a53c(unaff_x22,*(undefined8 *)(*plVar4 + 0x40)), lVar9 == 0)) {
LAB_05236030:
    uVar5 = thunk_FUN_02d980e0();
                    /* WARNING: Subroutine does not return */
    FUN_02d4ddac(uVar5,0);
  }
  if ((int)plVar4[3] != 0) {
    plVar4[4] = unaff_x22;
    thunk_FUN_02dc1ef0(plVar4 + 4,unaff_x22);
    if ((unaff_x21 != 0) &&
       (lVar9 = thunk_FUN_02d8a53c(unaff_x21,*(undefined8 *)(*plVar4 + 0x40)), lVar9 == 0))
    goto LAB_05236030;
    if ((*(uint *)(plVar4 + 3) & 0xfffffffe) != 0) {
      plVar4[5] = unaff_x21;
      thunk_FUN_02dc1ef0(plVar4 + 5,unaff_x21);
      if ((unaff_x23 != 0) && (lVar9 = thunk_FUN_02d8a53c(), lVar9 == 0)) goto LAB_05236030;
      if (2 < *(uint *)(plVar4 + 3)) {
        plVar4[6] = unaff_x23;
        thunk_FUN_02dc1ef0();
        if ((lVar6 != 0) &&
           (lVar9 = thunk_FUN_02d8a53c(lVar6,*(undefined8 *)(*plVar4 + 0x40)), lVar9 == 0))
        goto LAB_05236030;
        if ((*(uint *)(plVar4 + 3) & 0xfffffffc) != 0) {
          plVar4[7] = lVar6;
          thunk_FUN_02dc1ef0(plVar4 + 7,lVar6);
          if ((lVar2 != 0) &&
             (lVar6 = thunk_FUN_02d8a53c(lVar2,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0))
          goto LAB_05236030;
          if (4 < *(uint *)(plVar4 + 3)) {
            plVar4[8] = lVar2;
            thunk_FUN_02dc1ef0(plVar4 + 8,lVar2);
            if ((lVar8 != 0) &&
               (lVar2 = thunk_FUN_02d8a53c(lVar8,*(undefined8 *)(*plVar4 + 0x40)), lVar2 == 0))
            goto LAB_05236030;
            if (5 < *(uint *)(plVar4 + 3)) {
              plVar4[9] = lVar8;
              thunk_FUN_02dc1ef0(plVar4 + 9,lVar8);
              uVar5 = FUN_04e81064(*(undefined8 *)
                                    System_Net_Http_Headers_ElementTryParser<ViaHeaderValue>_TypeInfo
                                   ,plVar4,0);
              if (*(int *)(*(long *)PTR_DAT_06646730 + 0xe4) == 0) {
                thunk_FUN_02dabd98(*(long *)PTR_DAT_06646730);
              }
              FUN_05ea2238(uVar5,0);
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


