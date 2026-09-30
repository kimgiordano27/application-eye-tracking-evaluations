/*
FUNCTION_NAME: PlayFab.Internal.PlayFabWebRequest$$AcceptAllCertifications
ENTRY_POINT: 0527f350
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


void PlayFab_Internal_PlayFabWebRequest__AcceptAllCertifications(void)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  int in_w8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long lVar9;
  long unaff_x24;
  long lVar10;
  long unaff_x26;
  long lVar11;
  undefined8 *puVar12;
  long *unaff_x29;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined1 uStack0000000000000018;
  undefined1 uStack000000000000001c;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000028;
  undefined4 in_stack_00000030;
  undefined4 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  
  if (in_w8 == 0) {
    thunk_FUN_02dabd98();
  }
  puVar1 = System_EmptyArray<CustomAttributeNamedArgument>_TypeInfo;
  lVar4 = *(long *)(*(long *)(unaff_x24 + 0x38) + 0x10);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02d8720c();
  }
  uVar5 = FUN_05f37104(*(undefined8 *)puVar1,**(undefined8 **)(lVar4 + 0xb8),0);
  if ((uVar5 & 1) != 0) {
    if (*(long *)(unaff_x19 + 0x40) == 0) goto LAB_0528009c;
    FUN_051bf7e8(*(long *)(unaff_x19 + 0x40),0);
    if (*(long *)(unaff_x19 + 0x40) == 0) goto LAB_0528009c;
    FUN_051bf610(*(long *)(unaff_x19 + 0x40),1,0);
  }
  lVar10 = *unaff_x29;
  lVar4 = *(long *)(lVar10 + 0x38);
  if (lVar4 == 0) {
    FUN_02d87268(lVar10);
    lVar4 = *(long *)(lVar10 + 0x38);
  }
  lVar4 = *(long *)(lVar4 + 0x10);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02d8720c();
  }
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  puVar1 = System_EmptyArray<byte>_TypeInfo;
  lVar4 = *(long *)(*(long *)(lVar10 + 0x38) + 0x10);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02d8720c();
  }
  uVar3 = FUN_05f37104(*(undefined8 *)puVar1,**(undefined8 **)(lVar4 + 0xb8),0);
  FUN_05f381d0(0);
  if (*(char *)(unaff_x19 + 0x23) == '\0') {
    lVar6 = **(long **)(*(long *)(unaff_x26 + 0x90) + 0xb8);
    lVar4 = lVar6;
    lVar10 = lVar6;
  }
  else {
    lVar10 = *unaff_x29;
    lVar4 = *(long *)(lVar10 + 0x38);
    if (lVar4 == 0) {
      FUN_02d87268(lVar10);
      lVar4 = *(long *)(lVar10 + 0x38);
    }
    lVar4 = *(long *)(lVar4 + 0x10);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02d8720c();
    }
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    puVar1 = System_Collections_Generic_List<List<UIRenderDevice_AllocToUpdate>>_TypeInfo;
    lVar4 = *(long *)(*(long *)(lVar10 + 0x38) + 0x10);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02d8720c();
    }
    FUN_05f36f90(*(undefined8 *)puVar1,**(undefined8 **)(lVar4 + 0xb8),0);
    if (*(long *)(unaff_x19 + 0x40) == 0) goto LAB_0528009c;
    lVar4 = FUN_04e8052c(*(undefined8 *)
                          System_Net_Http_Headers_ElementTryParser<StringWithQualityHeaderValue>_TypeInfo
                         ,*(undefined8 *)(*(long *)(unaff_x19 + 0x40) + 0xa0),0);
    if (*(long *)(unaff_x19 + 0x40) == 0) goto LAB_0528009c;
    lVar6 = FUN_04e8052c(*(undefined8 *)
                          System_Dynamic_Utils_EmptyReadOnlyCollection<Expression>_TypeInfo,
                         *(undefined8 *)(*(long *)(unaff_x19 + 0x40) + 0xa8),0);
    lVar11 = *unaff_x29;
    lVar10 = *(long *)(lVar11 + 0x38);
    if (lVar10 == 0) {
      FUN_02d87268(lVar11);
      lVar10 = *(long *)(lVar11 + 0x38);
    }
    lVar10 = *(long *)(lVar10 + 0x10);
    if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_02d8720c();
    }
    if (*(int *)(lVar10 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    lVar10 = *(long *)(*(long *)(lVar11 + 0x38) + 0x10);
    if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_02d8720c();
    }
    FUN_05f36db0(lVar4,**(undefined8 **)(lVar10 + 0xb8),0);
    lVar11 = *unaff_x29;
    lVar10 = *(long *)(lVar11 + 0x38);
    if (lVar10 == 0) {
      FUN_02d87268(lVar11);
      lVar10 = *(long *)(lVar11 + 0x38);
    }
    lVar10 = *(long *)(lVar10 + 0x10);
    if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_02d8720c();
    }
    if (*(int *)(lVar10 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    lVar10 = *(long *)(*(long *)(lVar11 + 0x38) + 0x10);
    if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_02d8720c();
    }
    FUN_05f36db0(lVar6,**(undefined8 **)(lVar10 + 0xb8),0);
    lVar10 = **(long **)(*(long *)(unaff_x26 + 0x90) + 0xb8);
  }
  puVar1 = PTR_DAT_066463a0;
  puVar12 = (undefined8 *)PTR_DAT_066463a0;
  if (*(char *)(unaff_x19 + 0x22) != '\0') {
    lVar11 = *unaff_x29;
    lVar10 = *(long *)(lVar11 + 0x38);
    if (lVar10 == 0) {
      FUN_02d87268(lVar11);
      lVar10 = *(long *)(lVar11 + 0x38);
    }
    lVar10 = *(long *)(lVar10 + 0x10);
    if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_02d8720c();
    }
    if (*(int *)(lVar10 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    puVar2 = System_Collections_Generic_List<NativeSlice<Vertex>>_TypeInfo;
    lVar10 = *(long *)(*(long *)(lVar11 + 0x38) + 0x10);
    if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_02d8720c();
    }
    FUN_05f36f90(*(undefined8 *)puVar2,**(undefined8 **)(lVar10 + 0xb8),0);
    plVar7 = (long *)FUN_02d4dd2c(*(undefined8 *)puVar1,0xb);
    in_stack_00000038 = *(undefined4 *)(unaff_x23 + 0x54);
    lVar10 = thunk_FUN_02d8a270(*(undefined8 *)(unaff_x26 + 0x48),&stack0x00000038);
    if (plVar7 == (long *)0x0) goto LAB_0528009c;
    if ((lVar10 != 0) &&
       (lVar11 = thunk_FUN_02d8a53c(lVar10,*(undefined8 *)(*plVar7 + 0x40)), lVar11 == 0))
    goto LAB_052800a0;
    if ((int)plVar7[3] == 0) goto LAB_05280098;
    plVar7[4] = lVar10;
    thunk_FUN_02dc1ef0(plVar7 + 4,lVar10);
    in_stack_00000030 = *(undefined4 *)(unaff_x23 + 0x50);
    lVar10 = thunk_FUN_02d8a270(*(undefined8 *)(unaff_x26 + 0x48),&stack0x00000030);
    if ((lVar10 != 0) &&
       (lVar11 = thunk_FUN_02d8a53c(lVar10,*(undefined8 *)(*plVar7 + 0x40)), lVar11 == 0))
    goto LAB_052800a0;
    if ((*(uint *)(plVar7 + 3) & 0xfffffffe) == 0) goto LAB_05280098;
    plVar7[5] = lVar10;
    thunk_FUN_02dc1ef0(plVar7 + 5,lVar10);
    in_stack_00000028 = *(undefined4 *)(unaff_x23 + 0x40);
    lVar10 = thunk_FUN_02d8a270(*(undefined8 *)(unaff_x26 + 0x48),&stack0x00000028);
    if ((lVar10 != 0) &&
       (lVar11 = thunk_FUN_02d8a53c(lVar10,*(undefined8 *)(*plVar7 + 0x40)), lVar11 == 0))
    goto LAB_052800a0;
    if (*(uint *)(plVar7 + 3) < 3) goto LAB_05280098;
    plVar7[6] = lVar10;
    thunk_FUN_02dc1ef0(plVar7 + 6,lVar10);
    uStack000000000000001c = *(undefined1 *)(unaff_x23 + 0x4c);
    lVar10 = thunk_FUN_02d8a270(*(undefined8 *)(unaff_x26 + 0x18),(long)&stack0x00000018 + 4);
    if ((lVar10 != 0) &&
       (lVar11 = thunk_FUN_02d8a53c(lVar10,*(undefined8 *)(*plVar7 + 0x40)), lVar11 == 0))
    goto LAB_052800a0;
    if ((*(uint *)(plVar7 + 3) & 0xfffffffc) == 0) goto LAB_05280098;
    plVar7[7] = lVar10;
    thunk_FUN_02dc1ef0(plVar7 + 7,lVar10);
    in_stack_00000020 = *(undefined4 *)(unaff_x23 + 0x38);
    lVar10 = thunk_FUN_02d8a270(*(undefined8 *)(unaff_x26 + 0x48),&stack0x00000020);
    if ((lVar10 != 0) &&
       (lVar11 = thunk_FUN_02d8a53c(lVar10,*(undefined8 *)(*plVar7 + 0x40)), lVar11 == 0))
    goto LAB_052800a0;
    if (*(uint *)(plVar7 + 3) < 5) goto LAB_05280098;
    plVar7[8] = lVar10;
    thunk_FUN_02dc1ef0(plVar7 + 8,lVar10);
    uStack0000000000000018 = *(undefined1 *)(unaff_x23 + 0x3c);
    lVar10 = thunk_FUN_02d8a270(*(undefined8 *)(unaff_x26 + 0x18),&stack0x00000018);
    if ((lVar10 != 0) &&
       (lVar11 = thunk_FUN_02d8a53c(lVar10,*(undefined8 *)(*plVar7 + 0x40)), lVar11 == 0))
    goto LAB_052800a0;
    if (*(uint *)(plVar7 + 3) < 6) goto LAB_05280098;
    plVar7[9] = lVar10;
    thunk_FUN_02dc1ef0(plVar7 + 9,lVar10);
    if (*(long *)(unaff_x19 + 0x40) == 0) goto LAB_0528009c;
    uStack000000000000004c = FUN_051bf2d0(*(long *)(unaff_x19 + 0x40),0);
    lVar10 = thunk_FUN_02d8a270(*(undefined8 *)(unaff_x26 + 0x48),(long)&stack0x00000048 + 4);
    if ((lVar10 != 0) &&
       (lVar11 = thunk_FUN_02d8a53c(lVar10,*(undefined8 *)(*plVar7 + 0x40)), lVar11 == 0))
    goto LAB_052800a0;
    if (*(uint *)(plVar7 + 3) < 7) goto LAB_05280098;
    plVar7[10] = lVar10;
    thunk_FUN_02dc1ef0(plVar7 + 10,lVar10);
    if (*(long *)(unaff_x19 + 0x40) == 0) goto LAB_0528009c;
    uStack0000000000000048 = FUN_051bf2e8(*(long *)(unaff_x19 + 0x40),0);
    lVar10 = thunk_FUN_02d8a270(*(undefined8 *)(unaff_x26 + 0x48),&stack0x00000048);
    if ((lVar10 != 0) &&
       (lVar11 = thunk_FUN_02d8a53c(lVar10,*(undefined8 *)(*plVar7 + 0x40)), lVar11 == 0))
    goto LAB_052800a0;
    if ((*(uint *)(plVar7 + 3) & 0xfffffff8) == 0) goto LAB_05280098;
    plVar7[0xb] = lVar10;
    thunk_FUN_02dc1ef0(plVar7 + 0xb,lVar10);
    if (*(long *)(unaff_x19 + 0x40) == 0) goto LAB_0528009c;
    in_stack_00000040._4_4_ = FUN_051bf054(*(long *)(unaff_x19 + 0x40),0);
    lVar10 = thunk_FUN_02d8a270(*(undefined8 *)(unaff_x26 + 0x48),(long)&stack0x00000040 + 4);
    if ((lVar10 != 0) &&
       (lVar11 = thunk_FUN_02d8a53c(lVar10,*(undefined8 *)(*plVar7 + 0x40)), lVar11 == 0))
    goto LAB_052800a0;
    if (*(uint *)(plVar7 + 3) < 9) goto LAB_05280098;
    plVar7[0xc] = lVar10;
    thunk_FUN_02dc1ef0(plVar7 + 0xc,lVar10);
    if (*(long *)(unaff_x19 + 0x50) == 0) goto LAB_0528009c;
    uStack0000000000000014 = *(undefined4 *)(*(long *)(unaff_x19 + 0x50) + 0x4c);
    lVar10 = thunk_FUN_02d8a270(*(undefined8 *)(unaff_x26 + 0x48),(long)&stack0x00000010 + 4);
    if ((lVar10 != 0) &&
       (lVar11 = thunk_FUN_02d8a53c(lVar10,*(undefined8 *)(*plVar7 + 0x40)), lVar11 == 0))
    goto LAB_052800a0;
    if (*(uint *)(plVar7 + 3) < 10) goto LAB_05280098;
    plVar7[0xd] = lVar10;
    thunk_FUN_02dc1ef0(plVar7 + 0xd,lVar10);
    if (*(long *)(unaff_x19 + 0x50) == 0) goto LAB_0528009c;
    uStack0000000000000010 = *(undefined4 *)(*(long *)(unaff_x19 + 0x50) + 0x50);
    lVar10 = thunk_FUN_02d8a270(*(undefined8 *)(unaff_x26 + 0x48),&stack0x00000010);
    if ((lVar10 != 0) &&
       (lVar11 = thunk_FUN_02d8a53c(lVar10,*(undefined8 *)(*plVar7 + 0x40)), lVar11 == 0))
    goto LAB_052800a0;
    puVar1 = System_Collections_Generic_List<Tuple<Vector3,_float>>_TypeInfo;
    if (*(uint *)(plVar7 + 3) < 0xb) goto LAB_05280098;
    plVar7[0xe] = lVar10;
    thunk_FUN_02dc1ef0(plVar7 + 0xe,lVar10);
    lVar10 = FUN_04e81064(*(undefined8 *)puVar1,plVar7,0);
    lVar9 = *unaff_x29;
    lVar11 = *(long *)(lVar9 + 0x38);
    if (lVar11 == 0) {
      FUN_02d87268(lVar9);
      lVar11 = *(long *)(lVar9 + 0x38);
    }
    puVar12 = (undefined8 *)PTR_DAT_066463a0;
    lVar11 = *(long *)(lVar11 + 0x10);
    if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = FUN_02d8720c();
    }
    if (*(int *)(lVar11 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    lVar11 = *(long *)(*(long *)(lVar9 + 0x38) + 0x10);
    if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = FUN_02d8720c();
    }
    FUN_05f36db0(lVar10,**(undefined8 **)(lVar11 + 0xb8),0);
  }
  if (*(char *)(unaff_x19 + 0x25) != '\0') {
    lVar9 = *unaff_x29;
    lVar11 = *(long *)(lVar9 + 0x38);
    if (lVar11 == 0) {
      FUN_02d87268(lVar9);
      lVar11 = *(long *)(lVar9 + 0x38);
    }
    lVar11 = *(long *)(lVar11 + 0x10);
    if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = FUN_02d8720c();
    }
    if (*(int *)(lVar11 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    puVar1 = System_Collections_Generic_List<List<UIRenderDevice_AllocToFree>>_TypeInfo;
    lVar11 = *(long *)(*(long *)(lVar9 + 0x38) + 0x10);
    if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = FUN_02d8720c();
    }
    FUN_05f36f90(*(undefined8 *)puVar1,**(undefined8 **)(lVar11 + 0xb8),0);
    plVar7 = (long *)FUN_02d4dd2c(*puVar12,9);
    if (*(long *)(unaff_x19 + 0x50) == 0) goto LAB_0528009c;
    in_stack_00000038 = *(undefined4 *)(*(long *)(unaff_x19 + 0x50) + 0x38);
    lVar11 = thunk_FUN_02d8a270(*(undefined8 *)(unaff_x26 + 0x48),&stack0x00000038);
    if (plVar7 == (long *)0x0) goto LAB_0528009c;
    if ((lVar11 != 0) &&
       (lVar9 = thunk_FUN_02d8a53c(lVar11,*(undefined8 *)(*plVar7 + 0x40)), lVar9 == 0))
    goto LAB_052800a0;
    if ((int)plVar7[3] == 0) goto LAB_05280098;
    plVar7[4] = lVar11;
    thunk_FUN_02dc1ef0(plVar7 + 4,lVar11);
    if (*(long *)(unaff_x19 + 0x48) == 0) goto LAB_0528009c;
    in_stack_00000030 = *(undefined4 *)(*(long *)(unaff_x19 + 0x48) + 0xc0);
    lVar11 = thunk_FUN_02d8a270(*(undefined8 *)(unaff_x26 + 0x78),&stack0x00000030);
    if ((lVar11 != 0) &&
       (lVar9 = thunk_FUN_02d8a53c(lVar11,*(undefined8 *)(*plVar7 + 0x40)), lVar9 == 0))
    goto LAB_052800a0;
    if ((*(uint *)(plVar7 + 3) & 0xfffffffe) == 0) goto LAB_05280098;
    plVar7[5] = lVar11;
    thunk_FUN_02dc1ef0(plVar7 + 5,lVar11);
    if (*(long *)(unaff_x19 + 0x50) == 0) goto LAB_0528009c;
    in_stack_00000028 = *(undefined4 *)(*(long *)(unaff_x19 + 0x50) + 0x28);
    lVar11 = thunk_FUN_02d8a270(*(undefined8 *)(unaff_x26 + 0x48),&stack0x00000028);
    if ((lVar11 != 0) &&
       (lVar9 = thunk_FUN_02d8a53c(lVar11,*(undefined8 *)(*plVar7 + 0x40)), lVar9 == 0))
    goto LAB_052800a0;
    if (*(uint *)(plVar7 + 3) < 3) goto LAB_05280098;
    plVar7[6] = lVar11;
    thunk_FUN_02dc1ef0(plVar7 + 6,lVar11);
    if (*(long *)(unaff_x19 + 0x48) == 0) goto LAB_0528009c;
    in_stack_00000020 = *(undefined4 *)(*(long *)(unaff_x19 + 0x48) + 0xc4);
    lVar11 = thunk_FUN_02d8a270(*(undefined8 *)(unaff_x26 + 0x78),&stack0x00000020);
    if ((lVar11 != 0) &&
       (lVar9 = thunk_FUN_02d8a53c(lVar11,*(undefined8 *)(*plVar7 + 0x40)), lVar9 == 0))
    goto LAB_052800a0;
    if ((*(uint *)(plVar7 + 3) & 0xfffffffc) == 0) goto LAB_05280098;
    plVar7[7] = lVar11;
    thunk_FUN_02dc1ef0(plVar7 + 7,lVar11);
    if (*(long *)(unaff_x19 + 0x48) == 0) goto LAB_0528009c;
    uStack000000000000004c = *(undefined4 *)(*(long *)(unaff_x19 + 0x48) + 200);
    lVar11 = thunk_FUN_02d8a270(*(undefined8 *)(unaff_x26 + 0x78),(long)&stack0x00000048 + 4);
    if ((lVar11 != 0) &&
       (lVar9 = thunk_FUN_02d8a53c(lVar11,*(undefined8 *)(*plVar7 + 0x40)), lVar9 == 0))
    goto LAB_052800a0;
    if (*(uint *)(plVar7 + 3) < 5) goto LAB_05280098;
    plVar7[8] = lVar11;
    thunk_FUN_02dc1ef0(plVar7 + 8,lVar11);
    if (*(long *)(unaff_x19 + 0x50) == 0) goto LAB_0528009c;
    uStack0000000000000048 = *(undefined4 *)(*(long *)(unaff_x19 + 0x50) + 0x30);
    lVar11 = thunk_FUN_02d8a270(*(undefined8 *)(unaff_x26 + 0x48),&stack0x00000048);
    if ((lVar11 != 0) &&
       (lVar9 = thunk_FUN_02d8a53c(lVar11,*(undefined8 *)(*plVar7 + 0x40)), lVar9 == 0))
    goto LAB_052800a0;
    if (*(uint *)(plVar7 + 3) < 6) goto LAB_05280098;
    plVar7[9] = lVar11;
    thunk_FUN_02dc1ef0(plVar7 + 9,lVar11);
    if (*(long *)(unaff_x19 + 0x50) == 0) goto LAB_0528009c;
    in_stack_00000040._4_4_ = *(undefined4 *)(*(long *)(unaff_x19 + 0x50) + 0x2c);
    lVar11 = thunk_FUN_02d8a270(*(undefined8 *)(unaff_x26 + 0x48),(long)&stack0x00000040 + 4);
    if ((lVar11 != 0) &&
       (lVar9 = thunk_FUN_02d8a53c(lVar11,*(undefined8 *)(*plVar7 + 0x40)), lVar9 == 0))
    goto LAB_052800a0;
    if (*(uint *)(plVar7 + 3) < 7) goto LAB_05280098;
    plVar7[10] = lVar11;
    thunk_FUN_02dc1ef0(plVar7 + 10,lVar11);
    if (*(long *)(unaff_x19 + 0x50) == 0) goto LAB_0528009c;
    uStack0000000000000014 = FUN_05258dd0(*(long *)(unaff_x19 + 0x50),0);
    lVar11 = thunk_FUN_02d8a270(*(undefined8 *)(unaff_x26 + 0x48),(long)&stack0x00000010 + 4);
    if ((lVar11 != 0) &&
       (lVar9 = thunk_FUN_02d8a53c(lVar11,*(undefined8 *)(*plVar7 + 0x40)), lVar9 == 0))
    goto LAB_052800a0;
    if ((*(uint *)(plVar7 + 3) & 0xfffffff8) == 0) goto LAB_05280098;
    plVar7[0xb] = lVar11;
    thunk_FUN_02dc1ef0(plVar7 + 0xb,lVar11);
    if (*(long *)(unaff_x19 + 0x50) == 0) goto LAB_0528009c;
    uStack0000000000000010 = FUN_05258f1c(*(long *)(unaff_x19 + 0x50),0);
    lVar11 = thunk_FUN_02d8a270(*(undefined8 *)(unaff_x26 + 0x48),&stack0x00000010);
    if ((lVar11 != 0) &&
       (lVar9 = thunk_FUN_02d8a53c(lVar11,*(undefined8 *)(*plVar7 + 0x40)), lVar9 == 0))
    goto LAB_052800a0;
    puVar1 = System_Collections_Generic_List<ValueTuple<Action<object>,_object>>_TypeInfo;
    if (*(uint *)(plVar7 + 3) < 9) goto LAB_05280098;
    plVar7[0xc] = lVar11;
    thunk_FUN_02dc1ef0(plVar7 + 0xc,lVar11);
    uVar8 = FUN_04e81064(*(undefined8 *)puVar1,plVar7,0);
    lVar9 = *unaff_x29;
    lVar11 = *(long *)(lVar9 + 0x38);
    if (lVar11 == 0) {
      FUN_02d87268(lVar9);
      lVar11 = *(long *)(lVar9 + 0x38);
    }
    lVar11 = *(long *)(lVar11 + 0x10);
    if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = FUN_02d8720c();
    }
    if (*(int *)(lVar11 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    lVar11 = *(long *)(*(long *)(lVar9 + 0x38) + 0x10);
    if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = FUN_02d8720c();
    }
    FUN_05f36db0(uVar8,**(undefined8 **)(lVar11 + 0xb8),0);
  }
  if ((uVar3 & 1) == 0) {
LAB_05280034:
    puVar1 = PTR_DAT_06646bc8;
    if (*(int *)(*(long *)PTR_DAT_06646bc8 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    uVar5 = FUN_05f31478(0);
    if ((uVar5 & 1) != 0) {
      *(undefined4 *)(unaff_x19 + 0x34) = 0x42c80000;
    }
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    FUN_05f361c8(0);
    return;
  }
  plVar7 = (long *)FUN_02d4dd2c(*puVar12,6);
  if (plVar7 == (long *)0x0) {
LAB_0528009c:
                    /* WARNING: Subroutine does not return */
    FUN_02d4dee8();
  }
  if ((unaff_x21 != 0) &&
     (lVar11 = thunk_FUN_02d8a53c(unaff_x21,*(undefined8 *)(*plVar7 + 0x40)), lVar11 == 0)) {
LAB_052800a0:
    uVar8 = thunk_FUN_02d980e0();
                    /* WARNING: Subroutine does not return */
    FUN_02d4ddac(uVar8,0);
  }
  if ((int)plVar7[3] != 0) {
    plVar7[4] = unaff_x21;
    thunk_FUN_02dc1ef0(plVar7 + 4,unaff_x21);
    if ((unaff_x20 != 0) &&
       (lVar11 = thunk_FUN_02d8a53c(unaff_x20,*(undefined8 *)(*plVar7 + 0x40)), lVar11 == 0))
    goto LAB_052800a0;
    if ((*(uint *)(plVar7 + 3) & 0xfffffffe) != 0) {
      plVar7[5] = unaff_x20;
      thunk_FUN_02dc1ef0(plVar7 + 5,unaff_x20);
      if ((unaff_x22 != 0) &&
         (lVar11 = thunk_FUN_02d8a53c(unaff_x22,*(undefined8 *)(*plVar7 + 0x40)), lVar11 == 0))
      goto LAB_052800a0;
      if (2 < *(uint *)(plVar7 + 3)) {
        plVar7[6] = unaff_x22;
        thunk_FUN_02dc1ef0(plVar7 + 6,unaff_x22);
        if ((lVar4 != 0) &&
           (lVar11 = thunk_FUN_02d8a53c(lVar4,*(undefined8 *)(*plVar7 + 0x40)), lVar11 == 0))
        goto LAB_052800a0;
        if ((*(uint *)(plVar7 + 3) & 0xfffffffc) != 0) {
          plVar7[7] = lVar4;
          thunk_FUN_02dc1ef0(plVar7 + 7,lVar4);
          if ((lVar6 != 0) &&
             (lVar4 = thunk_FUN_02d8a53c(lVar6,*(undefined8 *)(*plVar7 + 0x40)), lVar4 == 0))
          goto LAB_052800a0;
          if (4 < *(uint *)(plVar7 + 3)) {
            plVar7[8] = lVar6;
            thunk_FUN_02dc1ef0(plVar7 + 8,lVar6);
            if ((lVar10 != 0) &&
               (lVar4 = thunk_FUN_02d8a53c(lVar10,*(undefined8 *)(*plVar7 + 0x40)), lVar4 == 0))
            goto LAB_052800a0;
            if (5 < *(uint *)(plVar7 + 3)) {
              plVar7[9] = lVar10;
              thunk_FUN_02dc1ef0(plVar7 + 9,lVar10);
              uVar8 = FUN_04e81064(*(undefined8 *)
                                    System_Net_Http_Headers_ElementTryParser<ViaHeaderValue>_TypeInfo
                                   ,plVar7,0);
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


