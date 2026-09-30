/*
FUNCTION_NAME: PlayFab.Events.PlayFabEvents$$add_OnGetLeaderboardAroundCharacterRequestEvent
ENTRY_POINT: 05235394
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


void PlayFab_Events_PlayFabEvents__add_OnGetLeaderboardAroundCharacterRequestEvent
               (undefined4 param_1)

{
  char cVar1;
  undefined *puVar2;
  byte bVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  long unaff_x19;
  long unaff_x20;
  long lVar15;
  undefined8 *unaff_x23;
  long lVar16;
  long unaff_x25;
  undefined8 *unaff_x26;
  long *unaff_x27;
  long lVar17;
  long *unaff_x28;
  long unaff_x29;
  undefined1 uStack0000000000000018;
  undefined1 uStack000000000000001c;
  long in_stack_00000020;
  long in_stack_00000028;
  long in_stack_00000030;
  long in_stack_00000038;
  undefined4 uStack0000000000000044;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  
  uStack0000000000000044 = param_1;
  thunk_FUN_02d8a270(*(undefined8 *)(unaff_x29 + 0x48),&stack0x00000044);
  lVar5 = FUN_04e81020(*unaff_x26);
  in_stack_00000038 = unaff_x25;
  uVar6 = thunk_FUN_02d8a270(*(undefined8 *)(unaff_x29 + 0x68),&stack0x00000038);
  lVar7 = FUN_04e762a8(*unaff_x23,uVar6,0);
                    /* try { // try from 052353f0 to 053353f3 has its CatchHandler @ 05235404 */
                    /* try { // try from 052353f4 to 053353f7 has its CatchHandler @ 052353fc */
                    /* catch(type#1 @ 06204328) { ... } // from try @ 05235350 with catch @ 052353f8
                       try { // try from 052353f8 to 05335423 has its CatchHandler @ 05235234 */
  iVar4 = FUN_051e02a4();
                    /* catch(type#1 @ 06204328) { ... } // from try @ 052353f4 with catch @ 052353fc
                        */
                    /* catch(type#1 @ 06204328) { ... } // from try @ 05235330 with catch @ 05235400
                        */
                    /* catch(type#1 @ 06204328) { ... } // from try @ 05235314 with catch @ 05235404
                       catch(type#1 @ 06204328) { ... } // from try @ 052353f0 with catch @ 05235404
                        */
                    /* catch(type#1 @ 06204328) { ... } // from try @ 052352fc with catch @ 05235408
                        */
  in_stack_00000030 = 0;
  if (unaff_x25 != 0) {
    in_stack_00000030 = (long)iVar4 / unaff_x25;
  }
  uVar6 = thunk_FUN_02d8a270(*(undefined8 *)(unaff_x29 + 0x68),&stack0x00000030);
  iVar4 = FUN_051e028c();
                    /* try { // try from 05235424 to 05335427 has its CatchHandler @ 05235434 */
  in_stack_00000028 = 0;
  if (unaff_x25 != 0) {
    in_stack_00000028 = (long)iVar4 / unaff_x25;
  }
                    /* catch() { ... } // from try @ 05235424 with catch @ 05235434 */
                    /* try { // try from 05235438 to 0533543f has its CatchHandler @ 05235448 */
  uVar8 = thunk_FUN_02d8a270(*(undefined8 *)(unaff_x29 + 0x68),&stack0x00000028);
                    /* try { // try from 05235440 to 0533544b has its CatchHandler @ 05235234 */
  iVar4 = FUN_051e0264();
  in_stack_00000020 = 0;
  if (unaff_x25 != 0) {
    in_stack_00000020 = (long)iVar4 / unaff_x25;
  }
  uVar9 = thunk_FUN_02d8a270(*(undefined8 *)(unaff_x29 + 0x68),&stack0x00000020);
  lVar10 = FUN_04e81020(*unaff_x26,uVar6,uVar8,uVar9,0);
  lVar16 = *unaff_x27;
  lVar14 = *(long *)(lVar16 + 0x38);
  if (lVar14 == 0) {
    FUN_02d87268(lVar16);
    lVar14 = *(long *)(lVar16 + 0x38);
  }
  lVar14 = *(long *)(lVar14 + 0x10);
  if ((*(ushort *)(lVar14 + 0x135) & 1) == 0) {
    lVar14 = FUN_02d8720c();
  }
  if (*(int *)(lVar14 + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  lVar14 = *(long *)(*(long *)(lVar16 + 0x38) + 0x10);
  if ((*(ushort *)(lVar14 + 0x135) & 1) == 0) {
    lVar14 = FUN_02d8720c();
  }
  FUN_05f36db0(lVar5,**(undefined8 **)(lVar14 + 0xb8),0);
  lVar16 = *unaff_x27;
  lVar14 = *(long *)(lVar16 + 0x38);
  if (lVar14 == 0) {
    FUN_02d87268(lVar16);
    lVar14 = *(long *)(lVar16 + 0x38);
  }
  lVar14 = *(long *)(lVar14 + 0x10);
  if ((*(ushort *)(lVar14 + 0x135) & 1) == 0) {
    lVar14 = FUN_02d8720c();
  }
  if (*(int *)(lVar14 + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  lVar14 = *(long *)(*(long *)(lVar16 + 0x38) + 0x10);
  if ((*(ushort *)(lVar14 + 0x135) & 1) == 0) {
    lVar14 = FUN_02d8720c();
  }
  FUN_05f36db0(lVar7,**(undefined8 **)(lVar14 + 0xb8),0);
  lVar16 = *unaff_x27;
  lVar14 = *(long *)(lVar16 + 0x38);
  if (lVar14 == 0) {
    FUN_02d87268(lVar16);
    lVar14 = *(long *)(lVar16 + 0x38);
  }
  lVar14 = *(long *)(lVar14 + 0x10);
  if ((*(ushort *)(lVar14 + 0x135) & 1) == 0) {
    lVar14 = FUN_02d8720c();
  }
  if (*(int *)(lVar14 + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  lVar14 = *(long *)(*(long *)(lVar16 + 0x38) + 0x10);
  if ((*(ushort *)(lVar14 + 0x135) & 1) == 0) {
    lVar14 = FUN_02d8720c();
  }
  FUN_05f36db0(lVar10,**(undefined8 **)(lVar14 + 0xb8),0);
  if (*(char *)(unaff_x19 + 0x24) == '\0') {
    uVar11 = 0;
  }
  else {
    lVar16 = *unaff_x27;
    lVar14 = *(long *)(lVar16 + 0x38);
    if (lVar14 == 0) {
      FUN_02d87268(lVar16);
      lVar14 = *(long *)(lVar16 + 0x38);
    }
    lVar14 = *(long *)(lVar14 + 0x10);
    if ((*(ushort *)(lVar14 + 0x135) & 1) == 0) {
      lVar14 = FUN_02d8720c();
    }
    if (*(int *)(lVar14 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    lVar14 = *(long *)(*(long *)(lVar16 + 0x38) + 0x10);
    if ((*(ushort *)(lVar14 + 0x135) & 1) == 0) {
      lVar14 = FUN_02d8720c();
    }
    FUN_05f37c6c(**(undefined8 **)(lVar14 + 0xb8),0);
    lVar16 = *unaff_x27;
    cVar1 = *(char *)(unaff_x19 + 0x21);
    lVar14 = *(long *)(lVar16 + 0x38);
    if (lVar14 == 0) {
      FUN_02d87268(lVar16);
      lVar14 = *(long *)(lVar16 + 0x38);
    }
    lVar14 = *(long *)(lVar14 + 0x10);
    if ((*(ushort *)(lVar14 + 0x135) & 1) == 0) {
      lVar14 = FUN_02d8720c();
    }
    if (*(int *)(lVar14 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    puVar2 = System_Net_Http_Headers_ElementTryParser<WarningHeaderValue>_TypeInfo;
    lVar14 = *(long *)(*(long *)(lVar16 + 0x38) + 0x10);
    if ((*(ushort *)(lVar14 + 0x135) & 1) == 0) {
      lVar14 = FUN_02d8720c();
    }
    bVar3 = FUN_05f3756c(cVar1 != '\0',*(undefined8 *)puVar2,**(undefined8 **)(lVar14 + 0xb8),0);
    lVar16 = *unaff_x27;
    *(byte *)(unaff_x19 + 0x21) = bVar3 & 1;
    lVar14 = *(long *)(lVar16 + 0x38);
    if (lVar14 == 0) {
      FUN_02d87268(lVar16);
      lVar14 = *(long *)(lVar16 + 0x38);
    }
    lVar14 = *(long *)(lVar14 + 0x10);
    if ((*(ushort *)(lVar14 + 0x135) & 1) == 0) {
      lVar14 = FUN_02d8720c();
    }
    if (*(int *)(lVar14 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    puVar2 = System_EmptyArray<CustomAttributeNamedArgument>_TypeInfo;
    lVar14 = *(long *)(*(long *)(lVar16 + 0x38) + 0x10);
    if ((*(ushort *)(lVar14 + 0x135) & 1) == 0) {
      lVar14 = FUN_02d8720c();
    }
    uVar11 = FUN_05f37104(*(undefined8 *)puVar2,**(undefined8 **)(lVar14 + 0xb8),0);
    if ((uVar11 & 1) != 0) {
      lVar14 = *unaff_x28;
      if (*(int *)(lVar14 + 0xe4) == 0) {
        thunk_FUN_02dabd98();
        lVar14 = *unaff_x28;
      }
      lVar14 = *(long *)(*(long *)(lVar14 + 0xb8) + 8);
      if ((lVar14 == 0) || (lVar14 = *(long *)(lVar14 + 0x10), lVar14 == 0)) goto LAB_05236028;
      FUN_051bf7e8(lVar14,0);
      lVar14 = *(long *)(*(long *)(*unaff_x28 + 0xb8) + 8);
      if ((lVar14 == 0) || (lVar14 = *(long *)(lVar14 + 0x10), lVar14 == 0)) goto LAB_05236028;
      FUN_051bf610(lVar14,1,0);
    }
    lVar16 = *unaff_x27;
    lVar14 = *(long *)(lVar16 + 0x38);
    if (lVar14 == 0) {
      FUN_02d87268(lVar16);
      lVar14 = *(long *)(lVar16 + 0x38);
    }
    lVar14 = *(long *)(lVar14 + 0x10);
    if ((*(ushort *)(lVar14 + 0x135) & 1) == 0) {
      lVar14 = FUN_02d8720c();
    }
    if (*(int *)(lVar14 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    puVar2 = System_EmptyArray<byte>_TypeInfo;
    lVar14 = *(long *)(*(long *)(lVar16 + 0x38) + 0x10);
    if ((*(ushort *)(lVar14 + 0x135) & 1) == 0) {
      lVar14 = FUN_02d8720c();
    }
    uVar11 = FUN_05f37104(*(undefined8 *)puVar2,**(undefined8 **)(lVar14 + 0xb8),0);
    uVar11 = uVar11 & 0xffffffff;
    FUN_05f381d0(0);
  }
  if (*(char *)(unaff_x19 + 0x23) == '\0') {
    lVar13 = **(long **)(*(long *)(unaff_x29 + 0x90) + 0xb8);
    lVar14 = lVar13;
    lVar16 = lVar13;
  }
  else {
    lVar16 = *unaff_x27;
    lVar14 = *(long *)(lVar16 + 0x38);
    if (lVar14 == 0) {
      FUN_02d87268(lVar16);
      lVar14 = *(long *)(lVar16 + 0x38);
    }
    lVar14 = *(long *)(lVar14 + 0x10);
    if ((*(ushort *)(lVar14 + 0x135) & 1) == 0) {
      lVar14 = FUN_02d8720c();
    }
    if (*(int *)(lVar14 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    puVar2 = System_EmptyArray<ParameterInfo>_TypeInfo;
    lVar14 = *(long *)(*(long *)(lVar16 + 0x38) + 0x10);
    if ((*(ushort *)(lVar14 + 0x135) & 1) == 0) {
      lVar14 = FUN_02d8720c();
    }
    FUN_05f36f90(*(undefined8 *)puVar2,**(undefined8 **)(lVar14 + 0xb8),0);
    lVar14 = *unaff_x28;
    if (*(int *)(lVar14 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
      lVar14 = *unaff_x28;
    }
    puVar2 = System_Net_Http_Headers_ElementTryParser<StringWithQualityHeaderValue>_TypeInfo;
    lVar14 = *(long *)(*(long *)(lVar14 + 0xb8) + 8);
    if (((lVar14 == 0) || (lVar14 = *(long *)(lVar14 + 0x10), lVar14 == 0)) ||
       (plVar12 = *(long **)(lVar14 + 0xa0), plVar12 == (long *)0x0)) goto LAB_05236028;
    uVar6 = (**(code **)(*plVar12 + 0x168))(plVar12,*(undefined8 *)(*plVar12 + 0x170));
    lVar13 = FUN_04e723e0(*(undefined8 *)puVar2,uVar6,0);
    puVar2 = System_Dynamic_Utils_EmptyReadOnlyCollection<Expression>_TypeInfo;
    lVar14 = *(long *)(*(long *)(*unaff_x28 + 0xb8) + 8);
    if (((lVar14 == 0) || (lVar14 = *(long *)(lVar14 + 0x10), lVar14 == 0)) ||
       (plVar12 = *(long **)(lVar14 + 0xa8), plVar12 == (long *)0x0)) goto LAB_05236028;
    uVar6 = (**(code **)(*plVar12 + 0x168))(plVar12,*(undefined8 *)(*plVar12 + 0x170));
    lVar14 = FUN_04e723e0(*(undefined8 *)puVar2,uVar6,0);
    lVar17 = *unaff_x27;
    lVar16 = *(long *)(lVar17 + 0x38);
    if (lVar16 == 0) {
      FUN_02d87268(lVar17);
      lVar16 = *(long *)(lVar17 + 0x38);
    }
    lVar16 = *(long *)(lVar16 + 0x10);
    if ((*(ushort *)(lVar16 + 0x135) & 1) == 0) {
      lVar16 = FUN_02d8720c();
    }
    if (*(int *)(lVar16 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    lVar16 = *(long *)(*(long *)(lVar17 + 0x38) + 0x10);
    if ((*(ushort *)(lVar16 + 0x135) & 1) == 0) {
      lVar16 = FUN_02d8720c();
    }
    FUN_05f36db0(lVar13,**(undefined8 **)(lVar16 + 0xb8),0);
    lVar17 = *unaff_x27;
    lVar16 = *(long *)(lVar17 + 0x38);
    if (lVar16 == 0) {
      FUN_02d87268(lVar17);
      lVar16 = *(long *)(lVar17 + 0x38);
    }
    lVar16 = *(long *)(lVar16 + 0x10);
    if ((*(ushort *)(lVar16 + 0x135) & 1) == 0) {
      lVar16 = FUN_02d8720c();
    }
    if (*(int *)(lVar16 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    lVar16 = *(long *)(*(long *)(lVar17 + 0x38) + 0x10);
    if ((*(ushort *)(lVar16 + 0x135) & 1) == 0) {
      lVar16 = FUN_02d8720c();
    }
    FUN_05f36db0(lVar14,**(undefined8 **)(lVar16 + 0xb8),0);
    lVar16 = **(long **)(*(long *)(unaff_x29 + 0x90) + 0xb8);
  }
  if (*(char *)(unaff_x19 + 0x22) != '\0') {
    lVar17 = *unaff_x27;
    lVar16 = *(long *)(lVar17 + 0x38);
    if (lVar16 == 0) {
      FUN_02d87268(lVar17);
      lVar16 = *(long *)(lVar17 + 0x38);
    }
    lVar16 = *(long *)(lVar16 + 0x10);
    if ((*(ushort *)(lVar16 + 0x135) & 1) == 0) {
      lVar16 = FUN_02d8720c();
    }
    if (*(int *)(lVar16 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    puVar2 = System_Net_Http_Headers_ElementTryParser<ProductHeaderValue>_TypeInfo;
    lVar16 = *(long *)(*(long *)(lVar17 + 0x38) + 0x10);
    if ((*(ushort *)(lVar16 + 0x135) & 1) == 0) {
      lVar16 = FUN_02d8720c();
    }
    FUN_05f36f90(*(undefined8 *)puVar2,**(undefined8 **)(lVar16 + 0xb8),0);
    plVar12 = (long *)FUN_02d4dd2c(*(undefined8 *)PTR_DAT_066463a0,9);
    in_stack_00000038 = CONCAT44(in_stack_00000038._4_4_,*(undefined4 *)(unaff_x20 + 0x54));
    lVar16 = thunk_FUN_02d8a270(*(undefined8 *)(unaff_x29 + 0x48),&stack0x00000038);
    if (plVar12 == (long *)0x0) goto LAB_05236028;
    if ((lVar16 != 0) &&
       (lVar17 = thunk_FUN_02d8a53c(lVar16,*(undefined8 *)(*plVar12 + 0x40)), lVar17 == 0))
    goto LAB_05236030;
    if ((int)plVar12[3] == 0) goto LAB_0523602c;
    plVar12[4] = lVar16;
    thunk_FUN_02dc1ef0(plVar12 + 4,lVar16);
    in_stack_00000030 = CONCAT44(in_stack_00000030._4_4_,*(undefined4 *)(unaff_x20 + 0x50));
    lVar16 = thunk_FUN_02d8a270(*(undefined8 *)(unaff_x29 + 0x48),&stack0x00000030);
    if ((lVar16 != 0) &&
       (lVar17 = thunk_FUN_02d8a53c(lVar16,*(undefined8 *)(*plVar12 + 0x40)), lVar17 == 0))
    goto LAB_05236030;
    if ((*(uint *)(plVar12 + 3) & 0xfffffffe) == 0) goto LAB_0523602c;
    plVar12[5] = lVar16;
    thunk_FUN_02dc1ef0(plVar12 + 5,lVar16);
    in_stack_00000028 = CONCAT44(in_stack_00000028._4_4_,*(undefined4 *)(unaff_x20 + 0x40));
    lVar16 = thunk_FUN_02d8a270(*(undefined8 *)(unaff_x29 + 0x48),&stack0x00000028);
    if ((lVar16 != 0) &&
       (lVar17 = thunk_FUN_02d8a53c(lVar16,*(undefined8 *)(*plVar12 + 0x40)), lVar17 == 0))
    goto LAB_05236030;
    if (*(uint *)(plVar12 + 3) < 3) goto LAB_0523602c;
    plVar12[6] = lVar16;
    thunk_FUN_02dc1ef0(plVar12 + 6,lVar16);
    uStack000000000000001c = *(undefined1 *)(unaff_x20 + 0x4c);
    lVar16 = thunk_FUN_02d8a270(*(undefined8 *)(unaff_x29 + 0x18),(long)&stack0x00000018 + 4);
    if ((lVar16 != 0) &&
       (lVar17 = thunk_FUN_02d8a53c(lVar16,*(undefined8 *)(*plVar12 + 0x40)), lVar17 == 0))
    goto LAB_05236030;
    if ((*(uint *)(plVar12 + 3) & 0xfffffffc) == 0) goto LAB_0523602c;
    plVar12[7] = lVar16;
    thunk_FUN_02dc1ef0(plVar12 + 7,lVar16);
    in_stack_00000020 = CONCAT44(in_stack_00000020._4_4_,*(undefined4 *)(unaff_x20 + 0x38));
    lVar16 = thunk_FUN_02d8a270(*(undefined8 *)(unaff_x29 + 0x48),&stack0x00000020);
    if ((lVar16 != 0) &&
       (lVar17 = thunk_FUN_02d8a53c(lVar16,*(undefined8 *)(*plVar12 + 0x40)), lVar17 == 0))
    goto LAB_05236030;
    if (*(uint *)(plVar12 + 3) < 5) goto LAB_0523602c;
    plVar12[8] = lVar16;
    thunk_FUN_02dc1ef0(plVar12 + 8,lVar16);
    uStack0000000000000018 = *(undefined1 *)(unaff_x20 + 0x3c);
    lVar16 = thunk_FUN_02d8a270(*(undefined8 *)(unaff_x29 + 0x18),&stack0x00000018);
    if ((lVar16 != 0) &&
       (lVar17 = thunk_FUN_02d8a53c(lVar16,*(undefined8 *)(*plVar12 + 0x40)), lVar17 == 0))
    goto LAB_05236030;
    if (*(uint *)(plVar12 + 3) < 6) goto LAB_0523602c;
    plVar12[9] = lVar16;
    thunk_FUN_02dc1ef0(plVar12 + 9,lVar16);
    lVar16 = *unaff_x28;
    if (*(int *)(lVar16 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
      lVar16 = *unaff_x28;
    }
    lVar16 = *(long *)(*(long *)(lVar16 + 0xb8) + 8);
    if ((lVar16 == 0) || (lVar16 = *(long *)(lVar16 + 0x10), lVar16 == 0)) goto LAB_05236028;
    uStack000000000000004c = FUN_051bf2d0(lVar16,0);
    lVar16 = thunk_FUN_02d8a270(*(undefined8 *)(unaff_x29 + 0x48),(long)&stack0x00000048 + 4);
    if ((lVar16 != 0) &&
       (lVar17 = thunk_FUN_02d8a53c(lVar16,*(undefined8 *)(*plVar12 + 0x40)), lVar17 == 0))
    goto LAB_05236030;
    if (*(uint *)(plVar12 + 3) < 7) goto LAB_0523602c;
    plVar12[10] = lVar16;
    thunk_FUN_02dc1ef0(plVar12 + 10,lVar16);
    lVar16 = *(long *)(*(long *)(*unaff_x28 + 0xb8) + 8);
    if ((lVar16 == 0) || (lVar16 = *(long *)(lVar16 + 0x10), lVar16 == 0)) goto LAB_05236028;
    uStack0000000000000048 = FUN_051bf2e8(lVar16,0);
    lVar16 = thunk_FUN_02d8a270(*(undefined8 *)(unaff_x29 + 0x48),&stack0x00000048);
    if ((lVar16 != 0) &&
       (lVar17 = thunk_FUN_02d8a53c(lVar16,*(undefined8 *)(*plVar12 + 0x40)), lVar17 == 0))
    goto LAB_05236030;
    if ((*(uint *)(plVar12 + 3) & 0xfffffff8) == 0) goto LAB_0523602c;
    plVar12[0xb] = lVar16;
    thunk_FUN_02dc1ef0(plVar12 + 0xb,lVar16);
    lVar16 = *(long *)(*(long *)(*unaff_x28 + 0xb8) + 8);
    if ((lVar16 == 0) || (lVar16 = *(long *)(lVar16 + 0x10), lVar16 == 0)) goto LAB_05236028;
    uStack0000000000000044 = FUN_051bf054(lVar16,0);
    lVar16 = thunk_FUN_02d8a270(*(undefined8 *)(unaff_x29 + 0x48),&stack0x00000044);
    if ((lVar16 != 0) &&
       (lVar17 = thunk_FUN_02d8a53c(lVar16,*(undefined8 *)(*plVar12 + 0x40)), lVar17 == 0))
    goto LAB_05236030;
    puVar2 = System_Dynamic_Utils_EmptyReadOnlyCollection<ParameterExpression>_TypeInfo;
    if (*(uint *)(plVar12 + 3) < 9) goto LAB_0523602c;
    plVar12[0xc] = lVar16;
    thunk_FUN_02dc1ef0(plVar12 + 0xc,lVar16);
    lVar16 = FUN_04e81064(*(undefined8 *)puVar2,plVar12,0);
    lVar15 = *unaff_x27;
    lVar17 = *(long *)(lVar15 + 0x38);
    if (lVar17 == 0) {
      FUN_02d87268(lVar15);
      lVar17 = *(long *)(lVar15 + 0x38);
    }
    lVar17 = *(long *)(lVar17 + 0x10);
    if ((*(ushort *)(lVar17 + 0x135) & 1) == 0) {
      lVar17 = FUN_02d8720c();
    }
    if (*(int *)(lVar17 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    lVar17 = *(long *)(*(long *)(lVar15 + 0x38) + 0x10);
    if ((*(ushort *)(lVar17 + 0x135) & 1) == 0) {
      lVar17 = FUN_02d8720c();
    }
    FUN_05f36db0(lVar16,**(undefined8 **)(lVar17 + 0xb8),0);
  }
  if ((uVar11 & 1) == 0) {
LAB_05235fc4:
    puVar2 = PTR_DAT_06646bc8;
    if (*(int *)(*(long *)PTR_DAT_06646bc8 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    uVar11 = FUN_05f31478(0);
    if ((uVar11 & 1) != 0) {
      *(undefined4 *)(unaff_x19 + 0x34) = 0x42c80000;
    }
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
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
  if ((lVar5 != 0) &&
     (lVar17 = thunk_FUN_02d8a53c(lVar5,*(undefined8 *)(*plVar12 + 0x40)), lVar17 == 0)) {
LAB_05236030:
    uVar6 = thunk_FUN_02d980e0();
                    /* WARNING: Subroutine does not return */
    FUN_02d4ddac(uVar6,0);
  }
  if ((int)plVar12[3] != 0) {
    plVar12[4] = lVar5;
    thunk_FUN_02dc1ef0(plVar12 + 4,lVar5);
    if ((lVar7 != 0) &&
       (lVar5 = thunk_FUN_02d8a53c(lVar7,*(undefined8 *)(*plVar12 + 0x40)), lVar5 == 0))
    goto LAB_05236030;
    if ((*(uint *)(plVar12 + 3) & 0xfffffffe) != 0) {
      plVar12[5] = lVar7;
      thunk_FUN_02dc1ef0(plVar12 + 5,lVar7);
      if ((lVar10 != 0) &&
         (lVar5 = thunk_FUN_02d8a53c(lVar10,*(undefined8 *)(*plVar12 + 0x40)), lVar5 == 0))
      goto LAB_05236030;
      if (2 < *(uint *)(plVar12 + 3)) {
        plVar12[6] = lVar10;
        thunk_FUN_02dc1ef0(plVar12 + 6,lVar10);
        if ((lVar13 != 0) &&
           (lVar5 = thunk_FUN_02d8a53c(lVar13,*(undefined8 *)(*plVar12 + 0x40)), lVar5 == 0))
        goto LAB_05236030;
        if ((*(uint *)(plVar12 + 3) & 0xfffffffc) != 0) {
          plVar12[7] = lVar13;
          thunk_FUN_02dc1ef0(plVar12 + 7,lVar13);
          if ((lVar14 != 0) &&
             (lVar5 = thunk_FUN_02d8a53c(lVar14,*(undefined8 *)(*plVar12 + 0x40)), lVar5 == 0))
          goto LAB_05236030;
          if (4 < *(uint *)(plVar12 + 3)) {
            plVar12[8] = lVar14;
            thunk_FUN_02dc1ef0(plVar12 + 8,lVar14);
            if ((lVar16 != 0) &&
               (lVar5 = thunk_FUN_02d8a53c(lVar16,*(undefined8 *)(*plVar12 + 0x40)), lVar5 == 0))
            goto LAB_05236030;
            if (5 < *(uint *)(plVar12 + 3)) {
              plVar12[9] = lVar16;
              thunk_FUN_02dc1ef0(plVar12 + 9,lVar16);
              uVar6 = FUN_04e81064(*(undefined8 *)
                                    System_Net_Http_Headers_ElementTryParser<ViaHeaderValue>_TypeInfo
                                   ,plVar12,0);
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


