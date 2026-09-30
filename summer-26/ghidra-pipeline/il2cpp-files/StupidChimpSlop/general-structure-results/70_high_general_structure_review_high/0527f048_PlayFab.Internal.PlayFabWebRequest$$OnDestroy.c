/*
FUNCTION_NAME: PlayFab.Internal.PlayFabWebRequest$$OnDestroy
ENTRY_POINT: 0527f048
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_5;paired_field_refs_with_structure_only;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void PlayFab_Internal_PlayFabWebRequest__OnDestroy(void)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long *plVar15;
  long lVar16;
  long unaff_x19;
  undefined8 *unaff_x22;
  long unaff_x23;
  long lVar17;
  long lVar18;
  long unaff_x25;
  long unaff_x26;
  undefined8 *unaff_x27;
  long lVar19;
  undefined8 *puVar20;
  long *unaff_x29;
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
  
  lVar7 = FUN_04e81020();
  in_stack_00000038 = unaff_x25;
  uVar8 = thunk_FUN_02d8a270(*(undefined8 *)(unaff_x26 + 0x68),&stack0x00000038);
  lVar9 = FUN_04e762a8(*unaff_x22,uVar8,0);
  iVar5 = FUN_051e02a4();
  in_stack_00000030 = 0;
  if (unaff_x25 != 0) {
    in_stack_00000030 = (long)iVar5 / unaff_x25;
  }
  uVar8 = thunk_FUN_02d8a270(*(undefined8 *)(unaff_x26 + 0x68),&stack0x00000030);
  iVar5 = FUN_051e028c();
  in_stack_00000028 = 0;
  if (unaff_x25 != 0) {
    in_stack_00000028 = (long)iVar5 / unaff_x25;
  }
  uVar10 = thunk_FUN_02d8a270(*(undefined8 *)(unaff_x26 + 0x68),&stack0x00000028);
  iVar5 = FUN_051e0264();
  in_stack_00000020 = 0;
  if (unaff_x25 != 0) {
    in_stack_00000020 = (long)iVar5 / unaff_x25;
  }
  uVar11 = thunk_FUN_02d8a270(*(undefined8 *)(unaff_x26 + 0x68),&stack0x00000020);
  lVar12 = FUN_04e81020(*unaff_x27,uVar8,uVar10,uVar11,0);
  lVar18 = *unaff_x29;
  lVar16 = *(long *)(lVar18 + 0x38);
  if (lVar16 == 0) {
    FUN_02d87268(lVar18);
    lVar16 = *(long *)(lVar18 + 0x38);
  }
  lVar16 = *(long *)(lVar16 + 0x10);
  if ((*(ushort *)(lVar16 + 0x135) & 1) == 0) {
    lVar16 = FUN_02d8720c();
  }
  if (*(int *)(lVar16 + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  lVar16 = *(long *)(*(long *)(lVar18 + 0x38) + 0x10);
  if ((*(ushort *)(lVar16 + 0x135) & 1) == 0) {
    lVar16 = FUN_02d8720c();
  }
  FUN_05f36db0(lVar7,**(undefined8 **)(lVar16 + 0xb8),0);
  lVar18 = *unaff_x29;
  lVar16 = *(long *)(lVar18 + 0x38);
  if (lVar16 == 0) {
    FUN_02d87268(lVar18);
    lVar16 = *(long *)(lVar18 + 0x38);
  }
  lVar16 = *(long *)(lVar16 + 0x10);
  if ((*(ushort *)(lVar16 + 0x135) & 1) == 0) {
    lVar16 = FUN_02d8720c();
  }
  if (*(int *)(lVar16 + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  lVar16 = *(long *)(*(long *)(lVar18 + 0x38) + 0x10);
  if ((*(ushort *)(lVar16 + 0x135) & 1) == 0) {
    lVar16 = FUN_02d8720c();
  }
  FUN_05f36db0(lVar9,**(undefined8 **)(lVar16 + 0xb8),0);
  lVar18 = *unaff_x29;
  lVar16 = *(long *)(lVar18 + 0x38);
  if (lVar16 == 0) {
    FUN_02d87268(lVar18);
    lVar16 = *(long *)(lVar18 + 0x38);
  }
  lVar16 = *(long *)(lVar16 + 0x10);
  if ((*(ushort *)(lVar16 + 0x135) & 1) == 0) {
    lVar16 = FUN_02d8720c();
  }
  if (*(int *)(lVar16 + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  lVar16 = *(long *)(*(long *)(lVar18 + 0x38) + 0x10);
  if ((*(ushort *)(lVar16 + 0x135) & 1) == 0) {
    lVar16 = FUN_02d8720c();
  }
  FUN_05f36db0(lVar12,**(undefined8 **)(lVar16 + 0xb8),0);
  if (*(char *)(unaff_x19 + 0x24) == '\0') {
    uVar6 = 0;
  }
  else {
    lVar18 = *unaff_x29;
    lVar16 = *(long *)(lVar18 + 0x38);
    if (lVar16 == 0) {
      FUN_02d87268(lVar18);
      lVar16 = *(long *)(lVar18 + 0x38);
    }
    lVar16 = *(long *)(lVar16 + 0x10);
    if ((*(ushort *)(lVar16 + 0x135) & 1) == 0) {
      lVar16 = FUN_02d8720c();
    }
    if (*(int *)(lVar16 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    lVar16 = *(long *)(*(long *)(lVar18 + 0x38) + 0x10);
    if ((*(ushort *)(lVar16 + 0x135) & 1) == 0) {
      lVar16 = FUN_02d8720c();
    }
    FUN_05f37c6c(**(undefined8 **)(lVar16 + 0xb8),0);
    lVar18 = *unaff_x29;
    cVar1 = *(char *)(unaff_x19 + 0x21);
    lVar16 = *(long *)(lVar18 + 0x38);
    if (lVar16 == 0) {
      FUN_02d87268(lVar18);
      lVar16 = *(long *)(lVar18 + 0x38);
    }
    lVar16 = *(long *)(lVar16 + 0x10);
    if ((*(ushort *)(lVar16 + 0x135) & 1) == 0) {
      lVar16 = FUN_02d8720c();
    }
    if (*(int *)(lVar16 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    puVar2 = System_Net_Http_Headers_ElementTryParser<WarningHeaderValue>_TypeInfo;
    lVar16 = *(long *)(*(long *)(lVar18 + 0x38) + 0x10);
    if ((*(ushort *)(lVar16 + 0x135) & 1) == 0) {
      lVar16 = FUN_02d8720c();
    }
    bVar4 = FUN_05f3756c(cVar1 != '\0',*(undefined8 *)puVar2,**(undefined8 **)(lVar16 + 0xb8),0);
    lVar18 = *unaff_x29;
    *(byte *)(unaff_x19 + 0x21) = bVar4 & 1;
    lVar16 = *(long *)(lVar18 + 0x38);
    if (lVar16 == 0) {
      FUN_02d87268(lVar18);
      lVar16 = *(long *)(lVar18 + 0x38);
    }
    lVar16 = *(long *)(lVar16 + 0x10);
    if ((*(ushort *)(lVar16 + 0x135) & 1) == 0) {
      lVar16 = FUN_02d8720c();
    }
    if (*(int *)(lVar16 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    puVar2 = System_EmptyArray<CustomAttributeNamedArgument>_TypeInfo;
    lVar16 = *(long *)(*(long *)(lVar18 + 0x38) + 0x10);
    if ((*(ushort *)(lVar16 + 0x135) & 1) == 0) {
      lVar16 = FUN_02d8720c();
    }
    uVar13 = FUN_05f37104(*(undefined8 *)puVar2,**(undefined8 **)(lVar16 + 0xb8),0);
    if ((uVar13 & 1) != 0) {
      if (*(long *)(unaff_x19 + 0x40) == 0) goto LAB_0528009c;
      FUN_051bf7e8(*(long *)(unaff_x19 + 0x40),0);
      if (*(long *)(unaff_x19 + 0x40) == 0) goto LAB_0528009c;
      FUN_051bf610(*(long *)(unaff_x19 + 0x40),1,0);
    }
    lVar18 = *unaff_x29;
    lVar16 = *(long *)(lVar18 + 0x38);
    if (lVar16 == 0) {
      FUN_02d87268(lVar18);
      lVar16 = *(long *)(lVar18 + 0x38);
    }
    lVar16 = *(long *)(lVar16 + 0x10);
    if ((*(ushort *)(lVar16 + 0x135) & 1) == 0) {
      lVar16 = FUN_02d8720c();
    }
    if (*(int *)(lVar16 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    puVar2 = System_EmptyArray<byte>_TypeInfo;
    lVar16 = *(long *)(*(long *)(lVar18 + 0x38) + 0x10);
    if ((*(ushort *)(lVar16 + 0x135) & 1) == 0) {
      lVar16 = FUN_02d8720c();
    }
    uVar6 = FUN_05f37104(*(undefined8 *)puVar2,**(undefined8 **)(lVar16 + 0xb8),0);
    FUN_05f381d0(0);
  }
  if (*(char *)(unaff_x19 + 0x23) == '\0') {
    lVar14 = **(long **)(*(long *)(unaff_x26 + 0x90) + 0xb8);
    lVar16 = lVar14;
    lVar18 = lVar14;
  }
  else {
    lVar18 = *unaff_x29;
    lVar16 = *(long *)(lVar18 + 0x38);
    if (lVar16 == 0) {
      FUN_02d87268(lVar18);
      lVar16 = *(long *)(lVar18 + 0x38);
    }
    lVar16 = *(long *)(lVar16 + 0x10);
    if ((*(ushort *)(lVar16 + 0x135) & 1) == 0) {
      lVar16 = FUN_02d8720c();
    }
    if (*(int *)(lVar16 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    puVar2 = System_Collections_Generic_List<List<UIRenderDevice_AllocToUpdate>>_TypeInfo;
    lVar16 = *(long *)(*(long *)(lVar18 + 0x38) + 0x10);
    if ((*(ushort *)(lVar16 + 0x135) & 1) == 0) {
      lVar16 = FUN_02d8720c();
    }
    FUN_05f36f90(*(undefined8 *)puVar2,**(undefined8 **)(lVar16 + 0xb8),0);
    if (*(long *)(unaff_x19 + 0x40) == 0) goto LAB_0528009c;
    lVar16 = FUN_04e8052c(*(undefined8 *)
                           System_Net_Http_Headers_ElementTryParser<StringWithQualityHeaderValue>_TypeInfo
                          ,*(undefined8 *)(*(long *)(unaff_x19 + 0x40) + 0xa0),0);
    if (*(long *)(unaff_x19 + 0x40) == 0) goto LAB_0528009c;
    lVar14 = FUN_04e8052c(*(undefined8 *)
                           System_Dynamic_Utils_EmptyReadOnlyCollection<Expression>_TypeInfo,
                          *(undefined8 *)(*(long *)(unaff_x19 + 0x40) + 0xa8),0);
    lVar19 = *unaff_x29;
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
    lVar19 = *unaff_x29;
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
    FUN_05f36db0(lVar14,**(undefined8 **)(lVar18 + 0xb8),0);
    lVar18 = **(long **)(*(long *)(unaff_x26 + 0x90) + 0xb8);
  }
  puVar2 = PTR_DAT_066463a0;
  puVar20 = (undefined8 *)PTR_DAT_066463a0;
  if (*(char *)(unaff_x19 + 0x22) != '\0') {
    lVar19 = *unaff_x29;
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
    puVar3 = System_Collections_Generic_List<NativeSlice<Vertex>>_TypeInfo;
    lVar18 = *(long *)(*(long *)(lVar19 + 0x38) + 0x10);
    if ((*(ushort *)(lVar18 + 0x135) & 1) == 0) {
      lVar18 = FUN_02d8720c();
    }
    FUN_05f36f90(*(undefined8 *)puVar3,**(undefined8 **)(lVar18 + 0xb8),0);
    plVar15 = (long *)FUN_02d4dd2c(*(undefined8 *)puVar2,0xb);
    in_stack_00000038 = CONCAT44(in_stack_00000038._4_4_,*(undefined4 *)(unaff_x23 + 0x54));
    lVar18 = thunk_FUN_02d8a270(*(undefined8 *)(unaff_x26 + 0x48),&stack0x00000038);
    if (plVar15 == (long *)0x0) goto LAB_0528009c;
    if ((lVar18 != 0) &&
       (lVar19 = thunk_FUN_02d8a53c(lVar18,*(undefined8 *)(*plVar15 + 0x40)), lVar19 == 0))
    goto LAB_052800a0;
    if ((int)plVar15[3] == 0) goto LAB_05280098;
    plVar15[4] = lVar18;
    thunk_FUN_02dc1ef0(plVar15 + 4,lVar18);
    in_stack_00000030 = CONCAT44(in_stack_00000030._4_4_,*(undefined4 *)(unaff_x23 + 0x50));
    lVar18 = thunk_FUN_02d8a270(*(undefined8 *)(unaff_x26 + 0x48),&stack0x00000030);
    if ((lVar18 != 0) &&
       (lVar19 = thunk_FUN_02d8a53c(lVar18,*(undefined8 *)(*plVar15 + 0x40)), lVar19 == 0))
    goto LAB_052800a0;
    if ((*(uint *)(plVar15 + 3) & 0xfffffffe) == 0) goto LAB_05280098;
    plVar15[5] = lVar18;
    thunk_FUN_02dc1ef0(plVar15 + 5,lVar18);
    in_stack_00000028 = CONCAT44(in_stack_00000028._4_4_,*(undefined4 *)(unaff_x23 + 0x40));
    lVar18 = thunk_FUN_02d8a270(*(undefined8 *)(unaff_x26 + 0x48),&stack0x00000028);
    if ((lVar18 != 0) &&
       (lVar19 = thunk_FUN_02d8a53c(lVar18,*(undefined8 *)(*plVar15 + 0x40)), lVar19 == 0))
    goto LAB_052800a0;
    if (*(uint *)(plVar15 + 3) < 3) goto LAB_05280098;
    plVar15[6] = lVar18;
    thunk_FUN_02dc1ef0(plVar15 + 6,lVar18);
    uStack000000000000001c = *(undefined1 *)(unaff_x23 + 0x4c);
    lVar18 = thunk_FUN_02d8a270(*(undefined8 *)(unaff_x26 + 0x18),(long)&stack0x00000018 + 4);
    if ((lVar18 != 0) &&
       (lVar19 = thunk_FUN_02d8a53c(lVar18,*(undefined8 *)(*plVar15 + 0x40)), lVar19 == 0))
    goto LAB_052800a0;
    if ((*(uint *)(plVar15 + 3) & 0xfffffffc) == 0) goto LAB_05280098;
    plVar15[7] = lVar18;
    thunk_FUN_02dc1ef0(plVar15 + 7,lVar18);
    in_stack_00000020 = CONCAT44(in_stack_00000020._4_4_,*(undefined4 *)(unaff_x23 + 0x38));
    lVar18 = thunk_FUN_02d8a270(*(undefined8 *)(unaff_x26 + 0x48),&stack0x00000020);
    if ((lVar18 != 0) &&
       (lVar19 = thunk_FUN_02d8a53c(lVar18,*(undefined8 *)(*plVar15 + 0x40)), lVar19 == 0))
    goto LAB_052800a0;
    if (*(uint *)(plVar15 + 3) < 5) goto LAB_05280098;
    plVar15[8] = lVar18;
    thunk_FUN_02dc1ef0(plVar15 + 8,lVar18);
    uStack0000000000000018 = *(undefined1 *)(unaff_x23 + 0x3c);
    lVar18 = thunk_FUN_02d8a270(*(undefined8 *)(unaff_x26 + 0x18),&stack0x00000018);
    if ((lVar18 != 0) &&
       (lVar19 = thunk_FUN_02d8a53c(lVar18,*(undefined8 *)(*plVar15 + 0x40)), lVar19 == 0))
    goto LAB_052800a0;
    if (*(uint *)(plVar15 + 3) < 6) goto LAB_05280098;
    plVar15[9] = lVar18;
    thunk_FUN_02dc1ef0(plVar15 + 9,lVar18);
    if (*(long *)(unaff_x19 + 0x40) == 0) goto LAB_0528009c;
    uStack000000000000004c = FUN_051bf2d0(*(long *)(unaff_x19 + 0x40),0);
    lVar18 = thunk_FUN_02d8a270(*(undefined8 *)(unaff_x26 + 0x48),(long)&stack0x00000048 + 4);
    if ((lVar18 != 0) &&
       (lVar19 = thunk_FUN_02d8a53c(lVar18,*(undefined8 *)(*plVar15 + 0x40)), lVar19 == 0))
    goto LAB_052800a0;
    if (*(uint *)(plVar15 + 3) < 7) goto LAB_05280098;
    plVar15[10] = lVar18;
    thunk_FUN_02dc1ef0(plVar15 + 10,lVar18);
    if (*(long *)(unaff_x19 + 0x40) == 0) goto LAB_0528009c;
    uStack0000000000000048 = FUN_051bf2e8(*(long *)(unaff_x19 + 0x40),0);
    lVar18 = thunk_FUN_02d8a270(*(undefined8 *)(unaff_x26 + 0x48),&stack0x00000048);
    if ((lVar18 != 0) &&
       (lVar19 = thunk_FUN_02d8a53c(lVar18,*(undefined8 *)(*plVar15 + 0x40)), lVar19 == 0))
    goto LAB_052800a0;
    if ((*(uint *)(plVar15 + 3) & 0xfffffff8) == 0) goto LAB_05280098;
    plVar15[0xb] = lVar18;
    thunk_FUN_02dc1ef0(plVar15 + 0xb,lVar18);
    if (*(long *)(unaff_x19 + 0x40) == 0) goto LAB_0528009c;
    in_stack_00000040._4_4_ = FUN_051bf054(*(long *)(unaff_x19 + 0x40),0);
    lVar18 = thunk_FUN_02d8a270(*(undefined8 *)(unaff_x26 + 0x48),(long)&stack0x00000040 + 4);
    if ((lVar18 != 0) &&
       (lVar19 = thunk_FUN_02d8a53c(lVar18,*(undefined8 *)(*plVar15 + 0x40)), lVar19 == 0))
    goto LAB_052800a0;
    if (*(uint *)(plVar15 + 3) < 9) goto LAB_05280098;
    plVar15[0xc] = lVar18;
    thunk_FUN_02dc1ef0(plVar15 + 0xc,lVar18);
    if (*(long *)(unaff_x19 + 0x50) == 0) goto LAB_0528009c;
    uStack0000000000000014 = *(undefined4 *)(*(long *)(unaff_x19 + 0x50) + 0x4c);
    lVar18 = thunk_FUN_02d8a270(*(undefined8 *)(unaff_x26 + 0x48),(long)&stack0x00000010 + 4);
    if ((lVar18 != 0) &&
       (lVar19 = thunk_FUN_02d8a53c(lVar18,*(undefined8 *)(*plVar15 + 0x40)), lVar19 == 0))
    goto LAB_052800a0;
    if (*(uint *)(plVar15 + 3) < 10) goto LAB_05280098;
    plVar15[0xd] = lVar18;
    thunk_FUN_02dc1ef0(plVar15 + 0xd,lVar18);
    if (*(long *)(unaff_x19 + 0x50) == 0) goto LAB_0528009c;
    uStack0000000000000010 = *(undefined4 *)(*(long *)(unaff_x19 + 0x50) + 0x50);
    lVar18 = thunk_FUN_02d8a270(*(undefined8 *)(unaff_x26 + 0x48),&stack0x00000010);
    if ((lVar18 != 0) &&
       (lVar19 = thunk_FUN_02d8a53c(lVar18,*(undefined8 *)(*plVar15 + 0x40)), lVar19 == 0))
    goto LAB_052800a0;
    puVar2 = System_Collections_Generic_List<Tuple<Vector3,_float>>_TypeInfo;
    if (*(uint *)(plVar15 + 3) < 0xb) goto LAB_05280098;
    plVar15[0xe] = lVar18;
    thunk_FUN_02dc1ef0(plVar15 + 0xe,lVar18);
    lVar18 = FUN_04e81064(*(undefined8 *)puVar2,plVar15,0);
    lVar17 = *unaff_x29;
    lVar19 = *(long *)(lVar17 + 0x38);
    if (lVar19 == 0) {
      FUN_02d87268(lVar17);
      lVar19 = *(long *)(lVar17 + 0x38);
    }
    puVar20 = (undefined8 *)PTR_DAT_066463a0;
    lVar19 = *(long *)(lVar19 + 0x10);
    if ((*(ushort *)(lVar19 + 0x135) & 1) == 0) {
      lVar19 = FUN_02d8720c();
    }
    if (*(int *)(lVar19 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    lVar19 = *(long *)(*(long *)(lVar17 + 0x38) + 0x10);
    if ((*(ushort *)(lVar19 + 0x135) & 1) == 0) {
      lVar19 = FUN_02d8720c();
    }
    FUN_05f36db0(lVar18,**(undefined8 **)(lVar19 + 0xb8),0);
  }
  if (*(char *)(unaff_x19 + 0x25) != '\0') {
    lVar17 = *unaff_x29;
    lVar19 = *(long *)(lVar17 + 0x38);
    if (lVar19 == 0) {
      FUN_02d87268(lVar17);
      lVar19 = *(long *)(lVar17 + 0x38);
    }
    lVar19 = *(long *)(lVar19 + 0x10);
    if ((*(ushort *)(lVar19 + 0x135) & 1) == 0) {
      lVar19 = FUN_02d8720c();
    }
    if (*(int *)(lVar19 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    puVar2 = System_Collections_Generic_List<List<UIRenderDevice_AllocToFree>>_TypeInfo;
    lVar19 = *(long *)(*(long *)(lVar17 + 0x38) + 0x10);
    if ((*(ushort *)(lVar19 + 0x135) & 1) == 0) {
      lVar19 = FUN_02d8720c();
    }
    FUN_05f36f90(*(undefined8 *)puVar2,**(undefined8 **)(lVar19 + 0xb8),0);
    plVar15 = (long *)FUN_02d4dd2c(*puVar20,9);
    if (*(long *)(unaff_x19 + 0x50) == 0) goto LAB_0528009c;
    in_stack_00000038 =
         CONCAT44(in_stack_00000038._4_4_,*(undefined4 *)(*(long *)(unaff_x19 + 0x50) + 0x38));
    lVar19 = thunk_FUN_02d8a270(*(undefined8 *)(unaff_x26 + 0x48),&stack0x00000038);
    if (plVar15 == (long *)0x0) goto LAB_0528009c;
    if ((lVar19 != 0) &&
       (lVar17 = thunk_FUN_02d8a53c(lVar19,*(undefined8 *)(*plVar15 + 0x40)), lVar17 == 0))
    goto LAB_052800a0;
    if ((int)plVar15[3] == 0) goto LAB_05280098;
    plVar15[4] = lVar19;
    thunk_FUN_02dc1ef0(plVar15 + 4,lVar19);
    if (*(long *)(unaff_x19 + 0x48) == 0) goto LAB_0528009c;
    in_stack_00000030 =
         CONCAT44(in_stack_00000030._4_4_,*(undefined4 *)(*(long *)(unaff_x19 + 0x48) + 0xc0));
    lVar19 = thunk_FUN_02d8a270(*(undefined8 *)(unaff_x26 + 0x78),&stack0x00000030);
    if ((lVar19 != 0) &&
       (lVar17 = thunk_FUN_02d8a53c(lVar19,*(undefined8 *)(*plVar15 + 0x40)), lVar17 == 0))
    goto LAB_052800a0;
    if ((*(uint *)(plVar15 + 3) & 0xfffffffe) == 0) goto LAB_05280098;
    plVar15[5] = lVar19;
    thunk_FUN_02dc1ef0(plVar15 + 5,lVar19);
    if (*(long *)(unaff_x19 + 0x50) == 0) goto LAB_0528009c;
    in_stack_00000028 =
         CONCAT44(in_stack_00000028._4_4_,*(undefined4 *)(*(long *)(unaff_x19 + 0x50) + 0x28));
    lVar19 = thunk_FUN_02d8a270(*(undefined8 *)(unaff_x26 + 0x48),&stack0x00000028);
    if ((lVar19 != 0) &&
       (lVar17 = thunk_FUN_02d8a53c(lVar19,*(undefined8 *)(*plVar15 + 0x40)), lVar17 == 0))
    goto LAB_052800a0;
    if (*(uint *)(plVar15 + 3) < 3) goto LAB_05280098;
    plVar15[6] = lVar19;
    thunk_FUN_02dc1ef0(plVar15 + 6,lVar19);
    if (*(long *)(unaff_x19 + 0x48) == 0) goto LAB_0528009c;
    in_stack_00000020 =
         CONCAT44(in_stack_00000020._4_4_,*(undefined4 *)(*(long *)(unaff_x19 + 0x48) + 0xc4));
    lVar19 = thunk_FUN_02d8a270(*(undefined8 *)(unaff_x26 + 0x78),&stack0x00000020);
    if ((lVar19 != 0) &&
       (lVar17 = thunk_FUN_02d8a53c(lVar19,*(undefined8 *)(*plVar15 + 0x40)), lVar17 == 0))
    goto LAB_052800a0;
    if ((*(uint *)(plVar15 + 3) & 0xfffffffc) == 0) goto LAB_05280098;
    plVar15[7] = lVar19;
    thunk_FUN_02dc1ef0(plVar15 + 7,lVar19);
    if (*(long *)(unaff_x19 + 0x48) == 0) goto LAB_0528009c;
    uStack000000000000004c = *(undefined4 *)(*(long *)(unaff_x19 + 0x48) + 200);
    lVar19 = thunk_FUN_02d8a270(*(undefined8 *)(unaff_x26 + 0x78),(long)&stack0x00000048 + 4);
    if ((lVar19 != 0) &&
       (lVar17 = thunk_FUN_02d8a53c(lVar19,*(undefined8 *)(*plVar15 + 0x40)), lVar17 == 0))
    goto LAB_052800a0;
    if (*(uint *)(plVar15 + 3) < 5) goto LAB_05280098;
    plVar15[8] = lVar19;
    thunk_FUN_02dc1ef0(plVar15 + 8,lVar19);
    if (*(long *)(unaff_x19 + 0x50) == 0) goto LAB_0528009c;
    uStack0000000000000048 = *(undefined4 *)(*(long *)(unaff_x19 + 0x50) + 0x30);
    lVar19 = thunk_FUN_02d8a270(*(undefined8 *)(unaff_x26 + 0x48),&stack0x00000048);
    if ((lVar19 != 0) &&
       (lVar17 = thunk_FUN_02d8a53c(lVar19,*(undefined8 *)(*plVar15 + 0x40)), lVar17 == 0))
    goto LAB_052800a0;
    if (*(uint *)(plVar15 + 3) < 6) goto LAB_05280098;
    plVar15[9] = lVar19;
    thunk_FUN_02dc1ef0(plVar15 + 9,lVar19);
    if (*(long *)(unaff_x19 + 0x50) == 0) goto LAB_0528009c;
    in_stack_00000040._4_4_ = *(undefined4 *)(*(long *)(unaff_x19 + 0x50) + 0x2c);
    lVar19 = thunk_FUN_02d8a270(*(undefined8 *)(unaff_x26 + 0x48),(long)&stack0x00000040 + 4);
    if ((lVar19 != 0) &&
       (lVar17 = thunk_FUN_02d8a53c(lVar19,*(undefined8 *)(*plVar15 + 0x40)), lVar17 == 0))
    goto LAB_052800a0;
    if (*(uint *)(plVar15 + 3) < 7) goto LAB_05280098;
    plVar15[10] = lVar19;
    thunk_FUN_02dc1ef0(plVar15 + 10,lVar19);
    if (*(long *)(unaff_x19 + 0x50) == 0) goto LAB_0528009c;
    uStack0000000000000014 = FUN_05258dd0(*(long *)(unaff_x19 + 0x50),0);
    lVar19 = thunk_FUN_02d8a270(*(undefined8 *)(unaff_x26 + 0x48),(long)&stack0x00000010 + 4);
    if ((lVar19 != 0) &&
       (lVar17 = thunk_FUN_02d8a53c(lVar19,*(undefined8 *)(*plVar15 + 0x40)), lVar17 == 0))
    goto LAB_052800a0;
    if ((*(uint *)(plVar15 + 3) & 0xfffffff8) == 0) goto LAB_05280098;
    plVar15[0xb] = lVar19;
    thunk_FUN_02dc1ef0(plVar15 + 0xb,lVar19);
    if (*(long *)(unaff_x19 + 0x50) == 0) goto LAB_0528009c;
    uStack0000000000000010 = FUN_05258f1c(*(long *)(unaff_x19 + 0x50),0);
    lVar19 = thunk_FUN_02d8a270(*(undefined8 *)(unaff_x26 + 0x48),&stack0x00000010);
    if ((lVar19 != 0) &&
       (lVar17 = thunk_FUN_02d8a53c(lVar19,*(undefined8 *)(*plVar15 + 0x40)), lVar17 == 0))
    goto LAB_052800a0;
    puVar2 = System_Collections_Generic_List<ValueTuple<Action<object>,_object>>_TypeInfo;
    if (*(uint *)(plVar15 + 3) < 9) goto LAB_05280098;
    plVar15[0xc] = lVar19;
    thunk_FUN_02dc1ef0(plVar15 + 0xc,lVar19);
    uVar8 = FUN_04e81064(*(undefined8 *)puVar2,plVar15,0);
    lVar17 = *unaff_x29;
    lVar19 = *(long *)(lVar17 + 0x38);
    if (lVar19 == 0) {
      FUN_02d87268(lVar17);
      lVar19 = *(long *)(lVar17 + 0x38);
    }
    lVar19 = *(long *)(lVar19 + 0x10);
    if ((*(ushort *)(lVar19 + 0x135) & 1) == 0) {
      lVar19 = FUN_02d8720c();
    }
    if (*(int *)(lVar19 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    lVar19 = *(long *)(*(long *)(lVar17 + 0x38) + 0x10);
    if ((*(ushort *)(lVar19 + 0x135) & 1) == 0) {
      lVar19 = FUN_02d8720c();
    }
    FUN_05f36db0(uVar8,**(undefined8 **)(lVar19 + 0xb8),0);
  }
  if ((uVar6 & 1) == 0) {
LAB_05280034:
    puVar2 = PTR_DAT_06646bc8;
    if (*(int *)(*(long *)PTR_DAT_06646bc8 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    uVar13 = FUN_05f31478(0);
    if ((uVar13 & 1) != 0) {
      *(undefined4 *)(unaff_x19 + 0x34) = 0x42c80000;
    }
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    FUN_05f361c8(0);
    return;
  }
  plVar15 = (long *)FUN_02d4dd2c(*puVar20,6);
  if (plVar15 == (long *)0x0) {
LAB_0528009c:
                    /* WARNING: Subroutine does not return */
    FUN_02d4dee8();
  }
  if ((lVar7 != 0) &&
     (lVar19 = thunk_FUN_02d8a53c(lVar7,*(undefined8 *)(*plVar15 + 0x40)), lVar19 == 0)) {
LAB_052800a0:
    uVar8 = thunk_FUN_02d980e0();
                    /* WARNING: Subroutine does not return */
    FUN_02d4ddac(uVar8,0);
  }
  if ((int)plVar15[3] != 0) {
    plVar15[4] = lVar7;
    thunk_FUN_02dc1ef0(plVar15 + 4,lVar7);
    if ((lVar9 != 0) &&
       (lVar7 = thunk_FUN_02d8a53c(lVar9,*(undefined8 *)(*plVar15 + 0x40)), lVar7 == 0))
    goto LAB_052800a0;
    if ((*(uint *)(plVar15 + 3) & 0xfffffffe) != 0) {
      plVar15[5] = lVar9;
      thunk_FUN_02dc1ef0(plVar15 + 5,lVar9);
      if ((lVar12 != 0) &&
         (lVar7 = thunk_FUN_02d8a53c(lVar12,*(undefined8 *)(*plVar15 + 0x40)), lVar7 == 0))
      goto LAB_052800a0;
      if (2 < *(uint *)(plVar15 + 3)) {
        plVar15[6] = lVar12;
        thunk_FUN_02dc1ef0(plVar15 + 6,lVar12);
        if ((lVar16 != 0) &&
           (lVar7 = thunk_FUN_02d8a53c(lVar16,*(undefined8 *)(*plVar15 + 0x40)), lVar7 == 0))
        goto LAB_052800a0;
        if ((*(uint *)(plVar15 + 3) & 0xfffffffc) != 0) {
          plVar15[7] = lVar16;
          thunk_FUN_02dc1ef0(plVar15 + 7,lVar16);
          if ((lVar14 != 0) &&
             (lVar7 = thunk_FUN_02d8a53c(lVar14,*(undefined8 *)(*plVar15 + 0x40)), lVar7 == 0))
          goto LAB_052800a0;
          if (4 < *(uint *)(plVar15 + 3)) {
            plVar15[8] = lVar14;
            thunk_FUN_02dc1ef0(plVar15 + 8,lVar14);
            if ((lVar18 != 0) &&
               (lVar7 = thunk_FUN_02d8a53c(lVar18,*(undefined8 *)(*plVar15 + 0x40)), lVar7 == 0))
            goto LAB_052800a0;
            if (5 < *(uint *)(plVar15 + 3)) {
              plVar15[9] = lVar18;
              thunk_FUN_02dc1ef0(plVar15 + 9,lVar18);
              uVar8 = FUN_04e81064(*(undefined8 *)
                                    System_Net_Http_Headers_ElementTryParser<ViaHeaderValue>_TypeInfo
                                   ,plVar15,0);
              if (*(int *)(*(long *)PTR_DAT_06646730 + 0xe4) == 0) {
                thunk_FUN_02dabd98(*(long *)PTR_DAT_06646730);
              }
              FUN_05ea2238(uVar8,0);
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


