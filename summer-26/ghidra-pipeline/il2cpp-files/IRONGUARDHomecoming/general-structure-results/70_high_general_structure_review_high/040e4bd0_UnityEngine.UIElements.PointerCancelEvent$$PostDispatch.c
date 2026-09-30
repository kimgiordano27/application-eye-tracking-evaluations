/*
FUNCTION_NAME: UnityEngine.UIElements.PointerCancelEvent$$PostDispatch
ENTRY_POINT: 040e4bd0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_11;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_20;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_10;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;negative_framework_namespace_without_eye_use_flow;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void UnityEngine_UIElements_PointerCancelEvent__PostDispatch(void)

{
  uint *puVar1;
  void *__src;
  long *plVar2;
  char *pcVar3;
  long *plVar4;
  uint uVar5;
  int iVar6;
  char cVar7;
  ushort uVar8;
  undefined2 uVar9;
  uint uVar10;
  undefined *puVar11;
  undefined *puVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  byte bVar19;
  byte bVar20;
  int iVar21;
  undefined4 uVar22;
  uint uVar23;
  uint uVar24;
  int iVar25;
  undefined4 uVar26;
  uint uVar27;
  uint uVar28;
  int iVar29;
  ulong uVar30;
  long lVar31;
  undefined8 uVar32;
  long lVar33;
  long *plVar34;
  ulong uVar35;
  undefined1 *puVar36;
  ulong uVar37;
  undefined1 uVar38;
  char cVar39;
  uint uVar40;
  uint uVar41;
  float *pfVar42;
  long lVar43;
  long lVar44;
  float *pfVar45;
  long lVar46;
  uint uVar47;
  float *pfVar48;
  float *pfVar49;
  long *plVar50;
  long *plVar51;
  long lVar52;
  long lVar53;
  uint uVar54;
  long lVar55;
  long unaff_x19;
  char cVar56;
  long *plVar57;
  long unaff_x21;
  uint uVar58;
  long unaff_x22;
  undefined8 uVar59;
  long *plVar60;
  long unaff_x23;
  long unaff_x25;
  long *plVar61;
  long lVar62;
  long *plVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  undefined8 uVar82;
  float fVar83;
  float fVar84;
  undefined8 uVar85;
  undefined4 uVar86;
  float fVar87;
  float fVar88;
  float fVar89;
  float fVar90;
  float fVar91;
  float fVar92;
  undefined8 uVar93;
  float fVar94;
  float fVar95;
  float fVar96;
  float fVar97;
  float fVar98;
  float fVar99;
  float fVar100;
  float fVar101;
  float fVar102;
  float fVar103;
  float fVar104;
  int iStack0000000000000030;
  uint uStack0000000000000094;
  float fStack00000000000000a8;
  int iStack00000000000000c4;
  float fStack00000000000000cc;
  float fStack00000000000000d0;
  float fStack00000000000000d4;
  float fStack00000000000000e0;
  float fStack00000000000000e4;
  float fStack00000000000000f4;
  undefined8 uStack0000000000000118;
  float fStack0000000000000120;
  float fStack0000000000000124;
  float fStack0000000000000128;
  float fStack000000000000012c;
  float fStack0000000000000144;
  undefined8 uStack0000000000000148;
  float fStack0000000000000158;
  float fStack000000000000015c;
  uint uStack0000000000000168;
  undefined4 uStack000000000000016c;
  float fStack0000000000000170;
  float fStack0000000000000174;
  int iStack0000000000000178;
  float fStack000000000000017c;
  long lStack00000000000001a8;
  float fStack00000000000001bc;
  int iStack00000000000001dc;
  undefined8 uVar105;
  long in_stack_00001638;
  
  *(undefined1 *)(unaff_x22 + 0x104) = 0;
  uVar105 = 0;
  *(undefined8 *)(unaff_x22 + 0x24) = 0;
  *(undefined8 *)(unaff_x22 + 0x1c) = 0;
  memset(&stack0x00000d38,0,0x398);
  memset(&stack0x000009a0,0,0x398);
  memset(&stack0x00000608,0,0x398);
  if (unaff_x21 == 0) goto thunk_FUN_01f08a3c;
  uVar59 = *(undefined8 *)(unaff_x21 + 0x40);
  pcVar3 = (char *)(unaff_x19 + 0x1578);
  if (*(int *)(*(long *)Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__ + 0xe0) == 0)
  {
    thunk_FUN_01ee6d7c();
  }
  puVar11 = Method_Unity_Collections_NativeArray<byte>_ToArray__;
  uVar30 = UnityEngine_UIElements_UIR_Implementation_UIRStylePainter__BuildEntryFromNativeMesh
                     (uVar59,0,0);
  if ((uVar30 & 1) == 0) {
    if (*(long *)(unaff_x21 + 0x40) == 0) goto thunk_FUN_01f08a3c;
    lVar31 = FUN_040d1ec8(*(long *)(unaff_x21 + 0x40),0);
    if (lVar31 != 0) {
      if (unaff_x25 != 0) {
        FUN_041002e8();
      }
      lVar31 = *(long *)(unaff_x19 + 0x20);
      if ((lVar31 != 0) && (*(long *)(lVar31 + 0x18) != 0)) {
        if ((int)*(long *)(lVar31 + 0x18) == 0) {
LAB_040ec2e4:
                    /* WARNING: Subroutine does not return */
          FUN_01f08a44();
        }
        if (*(int *)(lVar31 + 0x24) != 0) {
          plVar57 = (long *)(unaff_x19 + 0x68);
          *plVar57 = *(long *)(unaff_x21 + 0x40);
          thunk_FUN_01f51358(plVar57);
          plVar61 = (long *)(unaff_x19 + 0x70);
          *plVar61 = *(long *)(unaff_x21 + 0x48);
          thunk_FUN_01f51358(plVar61);
          *(undefined4 *)(unaff_x19 + 0x78) = 0;
          FUN_040dcf9c(*(undefined4 *)(unaff_x19 + 0xd8),&stack0x00000230,0,*plVar57,0,*plVar61,0);
          FUN_027b1268(unaff_x19 + 0x80,&stack0x000012a0,*(undefined8 *)PTR_DAT_04589460);
          plVar63 = (long *)(unaff_x19 + 0xe0);
          *plVar63 = *(long *)(unaff_x21 + 0x50);
          thunk_FUN_01f51358(plVar63);
          pfVar48 = (float *)(unaff_x19 + 0xec);
          fVar101 = *pfVar48;
          if (*(long *)(unaff_x21 + 0x40) == 0) {
thunk_FUN_01f08a3c:
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          iVar25 = *(int *)(unaff_x19 + 0xe8);
          iVar21 = FUN_040ced70(*(long *)(unaff_x21 + 0x40) + 0xb0,0);
          if (*(long *)(unaff_x21 + 0x40) == 0) goto thunk_FUN_01f08a3c;
          fVar64 = (float)FUN_040ced80(*(long *)(unaff_x21 + 0x40) + 0xb0,0);
          fVar89 = *(float *)(unaff_x19 + 0xec);
          cVar39 = *(char *)(unaff_x21 + 0xbd);
          *(undefined4 *)(unaff_x19 + 0xf0) = 0x3f800000;
          *(float *)(unaff_x19 + 0xf4) = fVar89;
          puVar11 = PTR_DAT_04589458;
          fVar84 = DAT_00c925a0;
          fVar70 = DAT_00c925a0;
          if (cVar39 != '\0') {
            fVar70 = 1.0;
          }
          FUN_027b1f5c(fVar89,unaff_x19 + 0xf8,*(undefined8 *)PTR_DAT_04589458);
          uVar23 = *(uint *)(unaff_x21 + 0x60);
          *(uint *)(unaff_x19 + 0x124) = uVar23;
          if ((uVar23 & 1) == 0) {
            uVar22 = *(undefined4 *)(unaff_x21 + 0xec);
          }
          else {
            uVar22 = 700;
          }
          *(undefined4 *)(unaff_x19 + 0x134) = uVar22;
          FUN_027b0c74(unaff_x19 + 0x138,uVar22,*(undefined8 *)PTR_DAT_04589470);
          FUN_04100694(unaff_x19 + 0x128,0);
          uVar22 = *(undefined4 *)(unaff_x21 + 0x70);
          *(undefined4 *)(unaff_x19 + 0x158) = uVar22;
          FUN_027b0c74(unaff_x19 + 0x160,uVar22,*(undefined8 *)PTR_DAT_04589450);
          *(undefined4 *)(unaff_x19 + 0x180) = 0;
          FUN_027b1f50(unaff_x19 + 0x188,*(undefined8 *)PTR_DAT_04589428);
          if (DAT_0482ee12 == '\0') {
            thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__);
            DAT_0482ee12 = '\x01';
          }
          pfVar42 = *(float **)
                     (*(long *)Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__ +
                     0xb8);
          fStack00000000000000d4 = *pfVar42;
          fStack00000000000000cc = pfVar42[1];
          fStack00000000000000d0 = pfVar42[2];
          uVar22 = FUN_01fdd4e0(*(undefined4 *)(unaff_x21 + 0x80),*(undefined4 *)(unaff_x21 + 0x84),
                                *(undefined4 *)(unaff_x21 + 0x88),*(undefined4 *)(unaff_x21 + 0x8c),
                                0);
          *(undefined4 *)(unaff_x19 + 0x1a8) = uVar22;
          *(undefined4 *)(unaff_x19 + 0x1ac) = uVar22;
          *(undefined4 *)(unaff_x19 + 0x1b0) = uVar22;
          *(undefined4 *)(unaff_x19 + 0x1b4) = uVar22;
          puVar12 = PTR_DAT_04589478;
          FUN_027afaf4(unaff_x19 + 0x1b8,uVar22,*(undefined8 *)PTR_DAT_04589478);
          FUN_027afaf4(unaff_x19 + 0x1d8,*(undefined4 *)(unaff_x19 + 0x1ac),*(undefined8 *)puVar12);
          FUN_027afaf4(unaff_x19 + 0x1f8,*(undefined4 *)(unaff_x19 + 0x1ac),*(undefined8 *)puVar12);
          uVar22 = *(undefined4 *)(unaff_x19 + 0x1ac);
          if (*(int *)(*(long *)PTR_DAT_045893e0 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          FUN_040fa594(0);
          FUN_040fa764(&stack0x00000230,uVar22,0);
          FUN_027b0098(unaff_x19 + 0x238,&stack0x000012a0,*(undefined8 *)PTR_DAT_04589440);
          *(undefined8 *)(unaff_x19 + 0x288) = 0;
          thunk_FUN_01f51358(unaff_x19 + 0x288,0);
          FUN_027b19d8(unaff_x19 + 0x290,0,*(undefined8 *)PTR_DAT_04589468);
          if (*(long *)(unaff_x19 + 0x68) == 0) goto thunk_FUN_01f08a3c;
          uVar23 = FUN_040d20c8(*(long *)(unaff_x19 + 0x68),0);
          *(uint *)(unaff_x19 + 0x19a4) = uVar23 & 0xff;
          FUN_027b0720(unaff_x19 + 0x268,uVar23 & 0xff,*(undefined8 *)PTR_DAT_04589448);
          FUN_027b0714(unaff_x19 + 0x2c0,*(undefined8 *)PTR_DAT_04589418);
          plVar60 = (long *)Method_Unity_Collections_NativeArray<byte>_ToArray__;
          if (DAT_0482ee10 == '\0') {
            thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__);
            DAT_0482ee10 = '\x01';
          }
          uVar22 = *(undefined4 *)
                    (*(long *)(*(long *)
                                Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__ +
                              0xb8) + 0x14);
          *(undefined8 *)(unaff_x19 + 0x19a8) =
               *(undefined8 *)
                (*(long *)(*(long *)Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__
                          + 0xb8) + 0xc);
          *(undefined4 *)(unaff_x19 + 0x19b0) = uVar22;
          if (DAT_0482ee0f == '\0') {
            thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchReportFlowResult>__ctor__);
            DAT_0482ee0f = '\x01';
          }
          uVar59 = **(undefined8 **)
                     (*(long *)Method_Oculus_Platform_Message<LaunchReportFlowResult>__ctor__ + 0xb8
                     );
          *(undefined8 *)(unaff_x19 + 0x19bc) =
               (*(undefined8 **)
                 (*(long *)Method_Oculus_Platform_Message<LaunchReportFlowResult>__ctor__ + 0xb8))
               [1];
          *(undefined8 *)(unaff_x19 + 0x19b4) = uVar59;
          *(undefined8 *)(unaff_x19 + 0x2e0) = DAT_00c8d9e8;
          if (*(long *)(unaff_x19 + 0x68) == 0) goto thunk_FUN_01f08a3c;
          FUN_040d1a24(&stack0x000012a0,*(long *)(unaff_x19 + 0x68),0);
          memcpy(&stack0x00001210,&stack0x000012a0,0x60);
          fVar65 = (float)FUN_040ced90(&stack0x00001210,0);
          if (*plVar57 == 0) goto thunk_FUN_01f08a3c;
          fVar66 = (float)FUN_040ceda0(*plVar57 + 0xb0,0);
          if (*plVar57 == 0) goto thunk_FUN_01f08a3c;
          puVar1 = (uint *)(unaff_x19 + 0x324);
          fVar67 = (float)FUN_040cede0(*plVar57 + 0xb0,0);
          *(undefined8 *)(unaff_x19 + 0x2f4) = 0;
          *(undefined8 *)(unaff_x19 + 0x2ec) = 0;
          *(undefined4 *)(unaff_x19 + 0x2fc) = 0;
          FUN_027b1f5c(0,unaff_x19 + 0x300,*(undefined8 *)puVar11);
          uVar93 = _UNK_00c922c8;
          uVar32 = _DAT_00c922c0;
          uVar59 = DAT_00c8dfe0;
          *(undefined1 *)(unaff_x19 + 800) = 0;
          puVar1[0] = 0;
          puVar1[1] = 0;
          *(undefined8 *)(unaff_x19 + 0x32c) = 0;
          *(undefined4 *)(unaff_x19 + 0x334) = 0;
          *(undefined4 *)(unaff_x19 + 0x15ac) = 0;
          *(undefined1 *)(unaff_x19 + 0x2e8) = 0;
          *(undefined4 *)(unaff_x19 + 0x19c4) = 0x80000000;
          *(undefined8 *)(unaff_x19 + 0x338) = uVar59;
          *(undefined8 *)(unaff_x19 + 0x348) = uVar93;
          *(undefined8 *)(unaff_x19 + 0x340) = uVar32;
          *(undefined4 *)(unaff_x19 + 0x350) = 0;
          if (unaff_x25 == 0) goto thunk_FUN_01f08a3c;
          plVar50 = (long *)(unaff_x25 + 0x50);
          if (*plVar50 == 0) goto thunk_FUN_01f08a3c;
          uVar47 = *(int *)(unaff_x21 + 0xf0) - 1;
          uVar23 = *(int *)(*plVar50 + 0x18) - 1;
          if ((int)uVar47 <= (int)uVar23) {
            uVar23 = uVar47;
          }
          uVar5 = 0;
          if (-1 < (int)uVar47) {
            uVar5 = uVar23;
          }
          FUN_04100580(unaff_x25,0);
          fVar68 = *(float *)(unaff_x21 + 0x28);
          fVar83 = *(float *)(unaff_x21 + 0x2c);
          fVar103 = *(float *)(unaff_x19 + 0x58);
          fVar87 = *(float *)(unaff_x19 + 0x5c);
          fVar69 = *(float *)(unaff_x21 + 0x34);
          pfVar42 = (float *)(unaff_x19 + 0x354);
          *pfVar42 = 0.0;
          *(undefined4 *)(unaff_x19 + 0x358) = 0;
          *(undefined4 *)(unaff_x19 + 0x35c) = 0xbf800000;
          puVar11 = PTR_DAT_045893f0;
          lVar31 = *(long *)PTR_DAT_045893f0;
          if (*(int *)(lVar31 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
            lVar31 = *(long *)puVar11;
          }
          *(undefined8 *)(unaff_x19 + 0x360) = **(undefined8 **)(lVar31 + 0xb8);
          *(undefined8 *)(unaff_x19 + 0x368) = *(undefined8 *)(*(long *)(lVar31 + 0xb8) + 8);
          FUN_04100404(unaff_x25,0);
          *(undefined4 *)(unaff_x19 + 0x378) = 0;
          *(undefined4 *)(unaff_x19 + 0x19c8) = 0;
          *(undefined8 *)(unaff_x19 + 0x370) = 0;
          fVar99 = 0.0;
          bVar16 = false;
          *(undefined2 *)(unaff_x19 + 0x37c) = 0;
          FUN_040fa56c(&stack0x00001288,0xffffffff,0,0);
          cVar39 = *(char *)(unaff_x21 + 0x78);
          FUN_040ef438();
          FUN_040ef438();
          __src = (void *)(unaff_x19 + 0xab0);
          FUN_040ef438();
          FUN_040ef438();
          FUN_040ef438();
          lVar31 = unaff_x19 + 0x15e8;
          FUN_027b2548(lVar31,*(undefined8 *)PTR_DAT_04589420);
          *(undefined1 *)(*(long *)(*(long *)PTR_DAT_045893f8 + 0xb8) + 8) = 0;
          fVar96 = DAT_00c9294c;
          fVar92 = DAT_00c924f4;
          lVar43 = *(long *)(unaff_x21 + 0x68);
          uVar23 = 0;
          lVar44 = *(long *)(unaff_x19 + 0x20);
          if (lVar44 == 0) goto thunk_FUN_01f08a3c;
          fVar65 = fVar65 - (fVar66 - fVar67);
          fVar66 = 0.0;
          if (fVar103 <= 0.0) {
            fVar103 = 0.0;
          }
          if (fVar87 <= 0.0) {
            fVar87 = 0.0;
          }
          fVar64 = (fVar101 / (float)iVar21) * fVar64 * fVar70;
          plVar2 = (long *)(unaff_x25 + 0x30);
          uVar47 = iVar25 - 1;
          plVar4 = (long *)(unaff_x19 + 0x1588);
          fVar103 = fVar103 + DAT_00c92318;
          fVar67 = fVar87 + DAT_00c92318;
          fVar70 = fVar70 * fVar89 * DAT_00c9294c;
          bVar13 = true;
          iStack0000000000000030 = 0;
          bVar18 = false;
          iStack00000000000001dc = 0;
          bVar20 = 1;
          fStack0000000000000174 = fVar103;
          fVar101 = fVar64;
          uVar27 = 0;
LAB_040e5588:
          if ((int)*(uint *)(lVar44 + 0x18) <= (int)uVar23) {
LAB_040e9624:
            if ((((*(char *)(unaff_x21 + 0xa8) != '\0') &&
                 (DAT_00c925e0 < *(float *)(unaff_x19 + 0x1598) - *(float *)(unaff_x19 + 0x159c)))
                && (fVar101 = *pfVar48, fVar101 < *(float *)(unaff_x21 + 0xb0))) &&
               (*(int *)(unaff_x19 + 0x15a0) < *(int *)(unaff_x19 + 0x15a4))) {
              fVar70 = *(float *)(unaff_x21 + 0x108);
              if (*(float *)(unaff_x19 + 0x1594) < fVar70 / 100.0) {
                *(undefined4 *)(unaff_x19 + 0x1594) = 0;
              }
              fVar84 = (*(float *)(unaff_x19 + 0x1598) - fVar101) * 0.5;
              if (fVar84 <= DAT_00c92764) {
                fVar84 = DAT_00c92764;
              }
              *(float *)(unaff_x19 + 0x159c) = fVar101;
              fVar84 = (fVar101 + fVar84) * 20.0 + 0.5;
              fVar101 = DAT_00c92a58;
              if (fVar84 != INFINITY) {
                fVar101 = (float)(int)fVar84 / 20.0;
              }
              if (fVar70 <= fVar101) {
                fVar101 = fVar70;
              }
LAB_040e96e4:
              *(float *)(unaff_x19 + 0xec) = fVar101;
              goto LAB_040e4eec;
            }
            *(undefined1 *)(unaff_x19 + 0x15a8) = 1;
            if (*(int *)(unaff_x19 + 0x15a4) <= *(int *)(unaff_x19 + 0x15a0)) {
              uVar105 = FUN_035683d0(unaff_x19 + 0x15a0,0);
              uVar59 = FUN_0357d06c(pfVar48,0);
              uVar105 = FUN_0340eee0(*(undefined8 *)PTR_DAT_04579ea0,uVar105,
                                     *(undefined8 *)PTR_DAT_04579e88,uVar59,0);
              if (*(int *)(*plVar60 + 0xe0) == 0) {
                thunk_FUN_01ee6d7c(*plVar60);
              }
              FUN_0403ea2c(uVar105,0);
            }
            plVar61 = (long *)PTR_DAT_04588f98;
            plVar57 = (long *)Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__;
            if ((*puVar1 == 0) || ((*puVar1 == 1 && (uVar27 == 3)))) {
              FUN_040f6b2c(1,unaff_x25,0);
              goto LAB_040e4eec;
            }
            lVar31 = *(long *)(unaff_x25 + 0x58);
            if (lVar31 == 0) goto thunk_FUN_01f08a3c;
            uVar23 = *(uint *)(unaff_x19 + 0x78);
            if (*(int *)(*(long *)PTR_DAT_04588f98 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            if (*(uint *)(lVar31 + 0x18) <= uVar23) goto LAB_040ec2e4;
            FUN_040de418(lVar31 + (long)(int)uVar23 * 0x50 + 0x20,0,0);
            if (DAT_0482ee12 == '\0') {
              thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__);
              DAT_0482ee12 = '\x01';
            }
            iVar25 = *(int *)(unaff_x21 + 0x70);
            fStack0000000000000158 = **(float **)(*plVar57 + 0xb8);
            uStack0000000000000148 = *(undefined8 *)(*(float **)(*plVar57 + 0xb8) + 1);
            lVar31 = *(long *)(unaff_x19 + 0x50);
            uStack0000000000000118 = uStack0000000000000148;
            fStack0000000000000120 = fStack0000000000000158;
            if (iVar25 < 0x421) {
              if (iVar25 < 0x205) {
                if (iVar25 < 0x109) {
                  if ((iVar25 - 0x101U < 8) && ((1 << (ulong)(iVar25 - 0x101U & 0x1f) & 0x8bU) != 0)
                     ) {
LAB_040e9a84:
                    if (lVar31 == 0) goto thunk_FUN_01f08a3c;
                    if (*(uint *)(lVar31 + 0x18) < 2) goto LAB_040ec2e4;
                    uVar105 = *(undefined8 *)(lVar31 + 0x30);
                    if (*(int *)(unaff_x21 + 0x74) == 5) {
                      lVar43 = *plVar50;
                      if (lVar43 == 0) goto thunk_FUN_01f08a3c;
                      if (*(uint *)(lVar43 + 0x18) <= uVar5) goto LAB_040ec2e4;
                      fVar101 = *(float *)(lVar43 + (long)(int)uVar5 * 0x14 + 0x28);
                    }
                    else {
                      fVar101 = *(float *)(unaff_x19 + 0x374);
                    }
                    fStack0000000000000120 = fVar68 + 0.0 + *(float *)(lVar31 + 0x2c);
                    fVar69 = (0.0 - fVar101) - fVar83;
                    goto LAB_040e9e24;
                  }
                }
                else if (iVar25 < 0x121) {
                  if ((iVar25 == 0x110) || (iVar25 == 0x120)) goto LAB_040e9a84;
                }
                else if ((iVar25 - 0x201U < 4) && (iVar25 - 0x201U != 2)) goto LAB_040e9d14;
              }
              else {
                if (iVar25 < 0x403) {
                  if (iVar25 < 0x211) {
                    if ((iVar25 == 0x208) || (iVar25 == 0x210)) goto LAB_040e9d14;
                    goto LAB_040e9e34;
                  }
                  if (iVar25 != 0x220) {
                    if (iVar25 - 0x401U < 2) goto LAB_040e9bc0;
                    goto LAB_040e9e34;
                  }
LAB_040e9d14:
                  if (lVar31 == 0) goto thunk_FUN_01f08a3c;
                  if ((*(int *)(lVar31 + 0x18) == 1) || (*(int *)(lVar31 + 0x18) == 0))
                  goto LAB_040ec2e4;
                  fStack0000000000000120 =
                       (*(float *)(lVar31 + 0x20) + *(float *)(lVar31 + 0x2c)) * 0.5;
                  uVar105 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar31 + 0x24) >> 0x20) +
                                     (float)((ulong)*(undefined8 *)(lVar31 + 0x30) >> 0x20)) * 0.5,
                                     ((float)*(undefined8 *)(lVar31 + 0x24) +
                                     (float)*(undefined8 *)(lVar31 + 0x30)) * 0.5);
                  if (*(int *)(unaff_x21 + 0x74) == 5) {
                    lVar31 = *plVar50;
                    if (lVar31 != 0) {
                      if (uVar5 < *(uint *)(lVar31 + 0x18)) {
                        lVar31 = lVar31 + (long)(int)uVar5 * 0x14;
                        fStack0000000000000120 = fVar68 + 0.0 + fStack0000000000000120;
                        fVar69 = ((fVar83 + *(float *)(lVar31 + 0x28) + *(float *)(lVar31 + 0x30)) -
                                 fVar69) * -0.5 + 0.0;
                        goto LAB_040e9e24;
                      }
                      goto LAB_040ec2e4;
                    }
                    goto thunk_FUN_01f08a3c;
                  }
                  fStack0000000000000120 = fVar68 + 0.0 + fStack0000000000000120;
                  fVar69 = ((fVar83 + *(float *)(unaff_x19 + 0x374) + fVar99) - fVar69) * -0.5 + 0.0
                  ;
                }
                else {
                  if (iVar25 < 0x409) {
                    if (iVar25 != 0x404) {
                      bVar16 = iVar25 == 0x408;
                      goto LAB_040e9bac;
                    }
                  }
                  else if (iVar25 != 0x410) {
                    bVar16 = iVar25 == 0x420;
LAB_040e9bac:
                    if (!bVar16) goto LAB_040e9e34;
                  }
LAB_040e9bc0:
                  if (lVar31 == 0) goto thunk_FUN_01f08a3c;
                  if (*(int *)(lVar31 + 0x18) == 0) goto LAB_040ec2e4;
                  uVar105 = *(undefined8 *)(lVar31 + 0x24);
                  if (*(int *)(unaff_x21 + 0x74) == 5) {
                    lVar43 = *plVar50;
                    if (lVar43 == 0) goto thunk_FUN_01f08a3c;
                    if (*(uint *)(lVar43 + 0x18) <= uVar5) goto LAB_040ec2e4;
                    fVar99 = *(float *)(lVar43 + (long)(int)uVar5 * 0x14 + 0x30);
                  }
                  fStack0000000000000120 = fVar68 + 0.0 + *(float *)(lVar31 + 0x20);
                  fVar69 = fVar69 + (0.0 - fVar99);
                }
LAB_040e9e24:
                uStack0000000000000118 =
                     CONCAT44((float)((ulong)uVar105 >> 0x20) + 0.0,(float)uVar105 + fVar69);
              }
            }
            else if (iVar25 < 0x1005) {
              if (iVar25 < 0x809) {
                if ((iVar25 - 0x801U < 8) && ((1 << (ulong)(iVar25 - 0x801U & 0x1f) & 0x8bU) != 0))
                {
LAB_040e99e8:
                  if (lVar31 != 0) {
                    if ((*(int *)(lVar31 + 0x18) != 1) && (*(int *)(lVar31 + 0x18) != 0)) {
                      uStack0000000000000118 =
                           CONCAT44(((float)((ulong)*(undefined8 *)(lVar31 + 0x24) >> 0x20) +
                                    (float)((ulong)*(undefined8 *)(lVar31 + 0x30) >> 0x20)) * 0.5 +
                                    0.0,((float)*(undefined8 *)(lVar31 + 0x24) +
                                        (float)*(undefined8 *)(lVar31 + 0x30)) * 0.5 + 0.0);
                      fStack0000000000000120 =
                           fVar68 + 0.0 +
                           (*(float *)(lVar31 + 0x20) + *(float *)(lVar31 + 0x2c)) * 0.5;
                      goto LAB_040e9e34;
                    }
                    goto LAB_040ec2e4;
                  }
                  goto thunk_FUN_01f08a3c;
                }
              }
              else if (iVar25 < 0x821) {
                if ((iVar25 == 0x810) || (iVar25 == 0x820)) goto LAB_040e99e8;
              }
              else if ((iVar25 - 0x1001U < 4) && (iVar25 - 0x1001U != 2)) goto LAB_040e9c7c;
            }
            else if (iVar25 < 0x2003) {
              if (iVar25 < 0x1011) {
                if ((iVar25 == 0x1008) || (iVar25 == 0x1010)) goto LAB_040e9c7c;
              }
              else {
                if (iVar25 == 0x1020) {
LAB_040e9c7c:
                  if (lVar31 != 0) {
                    if ((*(int *)(lVar31 + 0x18) != 1) && (*(int *)(lVar31 + 0x18) != 0)) {
                      uVar105 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar31 + 0x24) >> 0x20) +
                                         (float)((ulong)*(undefined8 *)(lVar31 + 0x30) >> 0x20)) *
                                         0.5,((float)*(undefined8 *)(lVar31 + 0x24) +
                                             (float)*(undefined8 *)(lVar31 + 0x30)) * 0.5);
                      fStack0000000000000120 =
                           fVar68 + 0.0 +
                           (*(float *)(lVar31 + 0x20) + *(float *)(lVar31 + 0x2c)) * 0.5;
                      fVar69 = 0.0 - ((fVar83 + *(float *)(unaff_x19 + 0x36c) +
                                      *(float *)(unaff_x19 + 0x364)) - fVar69) * 0.5;
                      goto LAB_040e9e24;
                    }
                    goto LAB_040ec2e4;
                  }
                  goto thunk_FUN_01f08a3c;
                }
                if (iVar25 - 0x2001U < 2) goto LAB_040e9b24;
              }
            }
            else {
              if (iVar25 < 0x2009) {
                if (iVar25 != 0x2004) {
                  iVar21 = 0x2008;
                  goto LAB_040e9b0c;
                }
              }
              else if (iVar25 != 0x2010) {
                iVar21 = 0x2020;
LAB_040e9b0c:
                if (iVar25 != iVar21) goto LAB_040e9e34;
              }
LAB_040e9b24:
              if (lVar31 == 0) goto thunk_FUN_01f08a3c;
              if ((*(int *)(lVar31 + 0x18) == 1) || (*(int *)(lVar31 + 0x18) == 0))
              goto LAB_040ec2e4;
              uStack0000000000000118 =
                   CONCAT44(((float)((ulong)*(undefined8 *)(lVar31 + 0x24) >> 0x20) +
                            (float)((ulong)*(undefined8 *)(lVar31 + 0x30) >> 0x20)) * 0.5 + 0.0,
                            ((float)*(undefined8 *)(lVar31 + 0x24) +
                            (float)*(undefined8 *)(lVar31 + 0x30)) * 0.5 +
                            (0.0 - ((*(float *)(unaff_x19 + 0x370) - fVar83) - fVar69) * 0.5));
              fStack0000000000000120 =
                   fVar68 + 0.0 + (*(float *)(lVar31 + 0x20) + *(float *)(lVar31 + 0x2c)) * 0.5;
            }
LAB_040e9e34:
            uVar22 = FUN_01fdd4e0(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
            FUN_01fdd4e0(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
            if (*(int *)(*(long *)PTR_DAT_045893e0 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c(*(long *)PTR_DAT_045893e0);
            }
            FUN_040fa594(0);
            FUN_040fa764(&stack0x00001270,0x4000ffff,0);
            fVar101 = DAT_00c92980;
            uVar23 = *puVar1;
            if ((int)uVar23 < 1) {
              iVar21 = 0;
              iVar25 = 0;
              goto LAB_040ec0a0;
            }
            lVar31 = *plVar2;
            if (lVar31 != 0) {
              fStack0000000000000174 = 0.0;
              fVar89 = 0.0;
              fStack00000000000000a8 = 0.0;
              plVar61 = (long *)(unaff_x25 + 0x38);
              fStack00000000000000f4 = 0.0;
              fVar65 = 0.0;
              uVar35 = (ulong)&stack0x00001270 | 4;
              bVar18 = false;
              fVar66 = 0.0;
              fVar70 = 0.0;
              uVar30 = (ulong)&stack0x000005f0 | 4;
              bVar13 = false;
              bVar16 = false;
              iVar25 = 0;
              uStack0000000000000094 = 0;
              _uStack0000000000000168 = 0;
              iStack00000000000000c4 = 0;
              iStack0000000000000178 = 0;
              lStack00000000000001a8 = 0x2fc;
              fStack000000000000015c = DAT_00c92980;
              uVar47 = 0;
              uVar27 = 1;
              fStack00000000000000e0 = fStack00000000000000d0;
              fStack00000000000000e4 = fStack00000000000000cc;
              fStack0000000000000124 = fStack00000000000000d0;
              fStack0000000000000128 = fStack00000000000000d4;
              fStack000000000000012c = fStack00000000000000d4;
              fStack0000000000000144 = fStack00000000000000cc;
              fVar84 = fStack00000000000000cc;
              fVar64 = fStack00000000000000d4;
              goto LAB_040e9f88;
            }
            goto thunk_FUN_01f08a3c;
          }
          if (*(uint *)(lVar44 + 0x18) <= uVar23) goto LAB_040ec2e4;
          uVar24 = *(uint *)(lVar44 + (long)(int)uVar23 * 0x10 + 0x24);
          if (uVar24 == 0) goto LAB_040e9624;
          uVar32 = uVar105;
          if (5 < iStack00000000000001dc) {
            uVar105 = FUN_035870e0(&stack0x0000129c,0);
            uVar32 = FUN_035683d0(&stack0x0000120c,0);
            uVar105 = FUN_0340eee0(*(undefined8 *)PTR_DAT_04579e80,uVar105,
                                   *(undefined8 *)PTR_DAT_04579e90,uVar32,0);
            if (*(int *)(*plVar60 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c(*plVar60);
            }
            FUN_0403ed64(uVar105,0);
            uVar32 = CONCAT44(3,*puVar1);
          }
          uVar105 = uVar32;
          if (uVar24 == 0x1a) goto LAB_040e58d0;
          if ((uVar24 == 0x3c) && (*(char *)(unaff_x21 + 0xb5) != '\0')) {
            pcVar3[0] = '\x01';
            pcVar3[1] = '\x01';
            uVar30 = FUN_040efb00();
            if (((uVar30 & 1) != 0) && (uVar23 = 0, *pcVar3 == '\x01')) goto LAB_040e58d0;
          }
          else {
            lVar44 = *plVar2;
            if (lVar44 == 0) goto thunk_FUN_01f08a3c;
            if (*(uint *)(lVar44 + 0x18) <= *puVar1) goto LAB_040ec2e4;
            lVar44 = lVar44 + (long)(int)*puVar1 * 0x188;
            *pcVar3 = *(char *)(lVar44 + 0x28);
            *(undefined4 *)(unaff_x19 + 0x78) = *(undefined4 *)(lVar44 + 0x60);
            *(undefined8 *)(unaff_x19 + 0x68) = *(undefined8 *)(lVar44 + 0x40);
            thunk_FUN_01f51358(plVar57);
          }
          lVar44 = *plVar2;
          if (lVar44 == 0) goto thunk_FUN_01f08a3c;
          uVar27 = *(uint *)(unaff_x19 + 0x324);
          if (*(uint *)(lVar44 + 0x18) <= uVar27) goto LAB_040ec2e4;
          lVar62 = (long)(int)uVar27;
          uVar22 = *(undefined4 *)(unaff_x19 + 0x78);
          cVar56 = *(char *)(lVar44 + lVar62 * 0x188 + 100);
          *(undefined1 *)(unaff_x19 + 0x1579) = 0;
          if ((uint)uVar32 == uVar27) {
            uVar24 = (uint)((ulong)uVar32 >> 0x20);
            bVar17 = true;
            *pcVar3 = '\x01';
            if (uVar24 == 0x2026) {
              *(undefined8 *)(lVar44 + lVar62 * 0x188 + 0x30) = *(undefined8 *)(unaff_x19 + 0x1a00);
              thunk_FUN_01f51358();
              lVar44 = *plVar2;
              if (lVar44 == 0) goto thunk_FUN_01f08a3c;
              if (*(uint *)(lVar44 + 0x18) <= *(uint *)(unaff_x19 + 0x324)) goto LAB_040ec2e4;
              lVar44 = lVar44 + (long)(int)*(uint *)(unaff_x19 + 0x324) * 0x188;
              *(undefined1 *)(lVar44 + 0x28) = 1;
              *(undefined8 *)(lVar44 + 0x40) = *(undefined8 *)(unaff_x19 + 0x1a08);
              thunk_FUN_01f51358();
              lVar44 = *plVar2;
              if (lVar44 == 0) goto thunk_FUN_01f08a3c;
              if (*(uint *)(lVar44 + 0x18) <= *(uint *)(unaff_x19 + 0x324)) goto LAB_040ec2e4;
              *(undefined8 *)(lVar44 + (long)(int)*(uint *)(unaff_x19 + 0x324) * 0x188 + 0x58) =
                   *(undefined8 *)(unaff_x19 + 0x1a10);
              thunk_FUN_01f51358();
              lVar44 = *plVar2;
              if (lVar44 == 0) goto thunk_FUN_01f08a3c;
              uVar27 = *puVar1;
              if (*(uint *)(lVar44 + 0x18) <= uVar27) goto LAB_040ec2e4;
              bVar17 = true;
              *(undefined4 *)(lVar44 + (long)(int)uVar27 * 0x188 + 0x60) =
                   *(undefined4 *)(unaff_x19 + 0x1a18);
              *(undefined1 *)(*(long *)(*(long *)PTR_DAT_045893f8 + 0xb8) + 8) = 1;
              uVar32 = CONCAT44(3,uVar27 + 1);
            }
            else if (uVar24 == 3) {
              if ((*plVar57 == 0) || (lVar33 = FUN_040d1ec8(*plVar57,0), lVar33 == 0))
              goto thunk_FUN_01f08a3c;
              uVar105 = FUN_02bd6170(lVar33,3,*(undefined8 *)PTR_DAT_04588b38);
              if (*(uint *)(lVar44 + 0x18) <= uVar27) goto LAB_040ec2e4;
              *(undefined8 *)(lVar44 + lVar62 * 0x188 + 0x30) = uVar105;
              thunk_FUN_01f51358();
              bVar17 = true;
              *(undefined1 *)(*(long *)(*(long *)PTR_DAT_045893f8 + 0xb8) + 8) = 1;
              uVar27 = *puVar1;
            }
          }
          else {
            bVar17 = false;
          }
          uVar105 = uVar32;
          if (((int)uVar27 < *(int *)(unaff_x21 + 0xe4)) && (uVar24 != 3)) {
            lVar44 = *plVar2;
            if (lVar44 != 0) {
              if (uVar27 < *(uint *)(lVar44 + 0x18)) {
                lVar44 = lVar44 + (long)(int)uVar27 * 0x188;
                *(undefined1 *)(lVar44 + 0x1a0) = 0;
                *(undefined2 *)(lVar44 + 0x20) = 0x200b;
                *(undefined4 *)(lVar44 + 0x6c) = 0;
                *puVar1 = uVar27 + 1;
                goto LAB_040e58d0;
              }
              goto LAB_040ec2e4;
            }
            goto thunk_FUN_01f08a3c;
          }
          cVar7 = *pcVar3;
          if (cVar7 == '\x01') {
            uVar27 = *(uint *)(unaff_x19 + 0x124);
            if ((uVar27 >> 4 & 1) == 0) {
              if ((uVar27 >> 3 & 1) == 0) {
                fStack000000000000017c = 1.0;
                if ((uVar27 >> 5 & 1) != 0) {
                  if (*(int *)(*(long *)Method_System_IO_CStreamReader_Read__ + 0xe0) == 0) {
                    thunk_FUN_01ee6d7c();
                  }
                  uVar30 = FUN_034fc51c(uVar24,0);
                  if ((uVar30 & 1) != 0) {
                    if (*(int *)(*(long *)Method_System_IO_CStreamReader_Read__ + 0xe0) == 0) {
                      thunk_FUN_01ee6d7c();
                    }
                    uVar24 = FUN_034fc7fc(uVar24,0);
                    uVar24 = uVar24 & 0xffff;
                    fStack000000000000017c = fVar92;
                  }
                }
              }
              else {
                if (*(int *)(*(long *)Method_System_IO_CStreamReader_Read__ + 0xe0) == 0) {
                  thunk_FUN_01ee6d7c();
                }
                uVar30 = FUN_034fc460(uVar24,0);
                fStack000000000000017c = 1.0;
                if ((uVar30 & 1) != 0) {
                  if (*(int *)(*(long *)Method_System_IO_CStreamReader_Read__ + 0xe0) == 0) {
                    thunk_FUN_01ee6d7c();
                  }
                  uVar24 = FUN_034fc974(uVar24,0);
                  goto LAB_040e5a40;
                }
              }
            }
            else {
              if (*(int *)(*(long *)Method_System_IO_CStreamReader_Read__ + 0xe0) == 0) {
                thunk_FUN_01ee6d7c();
              }
              uVar30 = FUN_034fc51c(uVar24,0);
              fStack000000000000017c = 1.0;
              if ((uVar30 & 1) != 0) {
                if (*(int *)(*(long *)Method_System_IO_CStreamReader_Read__ + 0xe0) == 0) {
                  thunk_FUN_01ee6d7c();
                }
                uVar24 = FUN_034fc7fc(uVar24,0);
LAB_040e5a40:
                fStack000000000000017c = 1.0;
                uVar24 = uVar24 & 0xffff;
              }
            }
            cVar7 = *pcVar3;
          }
          else {
            fStack000000000000017c = 1.0;
          }
          if (cVar7 == '\x01') {
            lVar44 = *plVar2;
            if (lVar44 == 0) goto thunk_FUN_01f08a3c;
            if (*(uint *)(lVar44 + 0x18) <= *puVar1) goto LAB_040ec2e4;
            *plVar4 = *(long *)(lVar44 + (long)(int)*puVar1 * 0x188 + 0x30);
            thunk_FUN_01f51358(plVar4);
            if (*plVar4 == 0) goto LAB_040e58d0;
            lVar44 = *plVar2;
            if (lVar44 == 0) goto thunk_FUN_01f08a3c;
            if (*(uint *)(lVar44 + 0x18) <= *puVar1) goto LAB_040ec2e4;
            *plVar57 = *(long *)(lVar44 + (long)(int)*puVar1 * 0x188 + 0x40);
            thunk_FUN_01f51358(plVar57);
            lVar44 = *plVar2;
            if (lVar44 == 0) goto thunk_FUN_01f08a3c;
            if (*(uint *)(lVar44 + 0x18) <= *puVar1) goto LAB_040ec2e4;
            *plVar61 = *(long *)(lVar44 + (long)(int)*puVar1 * 0x188 + 0x58);
            thunk_FUN_01f51358();
            lVar44 = *plVar2;
            if (lVar44 == 0) goto thunk_FUN_01f08a3c;
            uVar28 = *puVar1;
            uVar27 = *(uint *)(lVar44 + 0x18);
            if (uVar27 <= uVar28) goto LAB_040ec2e4;
            *(undefined4 *)(unaff_x19 + 0x78) =
                 *(undefined4 *)(lVar44 + (long)(int)uVar28 * 0x188 + 0x60);
            if (bVar17) {
              lVar62 = *(long *)(unaff_x19 + 0x20);
              if (lVar62 == 0) goto thunk_FUN_01f08a3c;
              if (*(uint *)(lVar62 + 0x18) <= uVar23) goto LAB_040ec2e4;
              if ((*(int *)(lVar62 + (long)(int)uVar23 * 0x10 + 0x24) != 10) ||
                 (uVar28 == *(uint *)(unaff_x19 + 0x328))) goto LAB_040e5be0;
              if (uVar27 <= uVar28 - 1) goto LAB_040ec2e4;
              if (*plVar57 == 0) goto thunk_FUN_01f08a3c;
              fVar89 = *(float *)(lVar44 + (long)(int)(uVar28 - 1) * 0x188 + 0x68);
              iVar25 = FUN_040ced70(*plVar57 + 0xb0,0);
              lVar44 = *plVar57;
            }
            else {
LAB_040e5be0:
              if (*plVar57 == 0) goto thunk_FUN_01f08a3c;
              fVar89 = *(float *)(unaff_x19 + 0xf4);
              iVar25 = FUN_040ced70(*plVar57 + 0xb0,0);
              lVar44 = *(long *)(unaff_x19 + 0x68);
            }
            if (lVar44 == 0) goto thunk_FUN_01f08a3c;
            fVar66 = (float)FUN_040ced80(lVar44 + 0xb0,0);
            fVar75 = fVar84;
            if (*(char *)(unaff_x21 + 0xbd) != '\0') {
              fVar75 = 1.0;
            }
            fStack0000000000000170 = 0.0;
            fVar72 = 0.0;
            if (!(bool)(bVar17 & uVar24 == 0x2026)) {
              if (*plVar57 == 0) goto thunk_FUN_01f08a3c;
              fVar72 = (float)FUN_040ceda0(*plVar57 + 0xb0,0);
              if (*plVar57 == 0) goto thunk_FUN_01f08a3c;
              fStack0000000000000170 = (float)FUN_040cede0(*plVar57 + 0xb0,0);
            }
            lVar44 = *(long *)(unaff_x19 + 0x1588);
            if ((lVar44 == 0) || (*(long *)(lVar44 + 0x20) == 0)) goto thunk_FUN_01f08a3c;
            fVar98 = *(float *)(unaff_x19 + 0xf0);
            fVar71 = *(float *)(lVar44 + 0x2c);
            fVar101 = (float)FUN_040cf2c8(*(long *)(lVar44 + 0x20),0);
            if (*plVar57 == 0) goto thunk_FUN_01f08a3c;
            fVar73 = (float)FUN_040cedd0(*plVar57 + 0xb0,0);
            if (*plVar57 == 0) goto thunk_FUN_01f08a3c;
            fVar100 = *(float *)(unaff_x19 + 0xf0);
            fVar74 = (float)FUN_040ced80(*plVar57 + 0xb0,0);
            lVar44 = *plVar2;
            if (lVar44 == 0) goto thunk_FUN_01f08a3c;
            uVar27 = *(uint *)(unaff_x19 + 0x324);
            if (*(uint *)(lVar44 + 0x18) <= uVar27) goto LAB_040ec2e4;
            lVar62 = lVar44 + (long)(int)uVar27 * 0x188;
            fVar75 = ((fStack000000000000017c * fVar89) / (float)iVar25) * fVar66 * fVar75;
            fVar101 = fVar75 * fVar98 * fVar71 * fVar101;
            *(undefined1 *)(lVar62 + 0x28) = 1;
            *(float *)(lVar62 + 0x16c) = fVar101;
            fVar66 = *(float *)(unaff_x19 + 0xd8);
            fVar74 = fVar75 * fVar73 * fVar100 * fVar74;
LAB_040e6210:
            fVar89 = fVar101;
            if (uVar24 == 3 || uVar24 == 0xad) {
              fVar89 = 0.0;
            }
          }
          else {
            if (cVar7 == '\x02') {
              lVar44 = *plVar2;
              if (lVar44 != 0) {
                if (*(uint *)(lVar44 + 0x18) <= *puVar1) goto LAB_040ec2e4;
                plVar60 = *(long **)(lVar44 + (long)(int)*puVar1 * 0x188 + 0x30);
                if (plVar60 != (long *)0x0) {
                  bVar19 = *(byte *)(*(long *)PTR_DAT_045893e8 + 0x130);
                  if ((*(byte *)(*plVar60 + 0x130) < bVar19) ||
                     (*(long *)(*(long *)(*plVar60 + 200) + (ulong)bVar19 * 8 + -8) !=
                      *(long *)PTR_DAT_045893e8)) {
                    /* WARNING: Subroutine does not return */
                    FUN_01f08cfc(plVar60);
                  }
                  plVar34 = (long *)FUN_040dba78(plVar60,0);
                  if (plVar34 == (long *)0x0) {
                    plVar34 = (long *)0x0;
                    *plVar63 = 0;
                  }
                  else {
                    lVar44 = *(long *)PTR_DAT_04589018;
                    bVar19 = *(byte *)(lVar44 + 0x130);
                    if (*(byte *)(*plVar34 + 0x130) < bVar19) {
                      plVar51 = (long *)0x0;
                    }
                    else {
                      plVar51 = plVar34;
                      if (*(long *)(*(long *)(*plVar34 + 200) + (ulong)bVar19 * 8 + -8) != lVar44) {
                        plVar51 = (long *)0x0;
                      }
                    }
                    *plVar63 = (long)plVar51;
                    if (*(byte *)(*plVar34 + 0x130) < bVar19) {
                      plVar34 = (long *)0x0;
                    }
                    else if (*(long *)(*(long *)(*plVar34 + 200) + (ulong)bVar19 * 8 + -8) != lVar44
                            ) {
                      plVar34 = (long *)0x0;
                    }
                  }
                  thunk_FUN_01f51358(plVar63,plVar34);
                  iVar25 = FUN_040d30bc(plVar60,0);
                  *(int *)(unaff_x19 + 0x157c) = iVar25;
                  if (uVar24 == 0x3c) {
                    uVar24 = iVar25 + 0xe000;
                  }
                  else {
                    uVar26 = FUN_01fdd4e0(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
                    *(undefined4 *)(unaff_x19 + 0x1580) = uVar26;
                  }
                  if (*(long *)(unaff_x19 + 0x68) != 0) {
                    fVar101 = *(float *)(unaff_x19 + 0xf4);
                    FUN_040d1a24(&stack0x000012a0,*(long *)(unaff_x19 + 0x68),0);
                    memcpy(&stack0x00001210,&stack0x000012a0,0x60);
                    iVar25 = FUN_040ced70(&stack0x00001210,0);
                    if (*plVar57 != 0) {
                      FUN_040d1a24(&stack0x000012a0,*plVar57,0);
                      memcpy(&stack0x00001210,&stack0x000012a0,0x60);
                      fVar66 = (float)FUN_040ced80(&stack0x00001210,0);
                      fVar89 = fVar84;
                      if (*(char *)(unaff_x21 + 0xbd) != '\0') {
                        fVar89 = 1.0;
                      }
                      if (*plVar63 == 0) goto thunk_FUN_01f08a3c;
                      fVar89 = (fVar101 / (float)iVar25) * fVar66 * fVar89;
                      iVar25 = FUN_040ced70(*plVar63 + 0x48,0);
                      fVar101 = *(float *)(unaff_x19 + 0xf4);
                      if (iVar25 < 1) {
                        if (*plVar57 == 0) goto thunk_FUN_01f08a3c;
                        iVar25 = FUN_040ced70(*plVar57 + 0xb0,0);
                        if (*plVar57 == 0) goto thunk_FUN_01f08a3c;
                        fVar66 = (float)FUN_040ced80(*plVar57 + 0xb0,0);
                        fStack0000000000000170 = fVar84;
                        if (*(char *)(unaff_x21 + 0xbd) != '\0') {
                          fStack0000000000000170 = 1.0;
                        }
                        if (*plVar57 == 0) goto thunk_FUN_01f08a3c;
                        fVar75 = (float)FUN_040ceda0(*plVar57 + 0xb0,0);
                        if (plVar60[4] == 0) goto thunk_FUN_01f08a3c;
                        FUN_040cf28c(&stack0x000012a0,plVar60[4],0);
                        fVar98 = (float)FUN_040cf0bc(&stack0x000011c0,0);
                        if (plVar60[4] == 0) goto thunk_FUN_01f08a3c;
                        fVar71 = *(float *)((long)plVar60 + 0x2c);
                        fVar73 = (float)FUN_040cf2c8(plVar60[4],0);
                        if (*plVar57 == 0) goto thunk_FUN_01f08a3c;
                        fVar72 = (float)FUN_040ceda0(*plVar57 + 0xb0,0);
                        if (*plVar57 == 0) goto thunk_FUN_01f08a3c;
                        fVar100 = (float)FUN_040cedd0(*plVar57 + 0xb0,0);
                        if (*plVar57 == 0) goto thunk_FUN_01f08a3c;
                        fVar76 = *(float *)(unaff_x19 + 0xf0);
                        fVar74 = (float)FUN_040ced80(*plVar57 + 0xb0,0);
                        if (*(long *)(unaff_x19 + 0x68) == 0) goto thunk_FUN_01f08a3c;
                        fVar74 = fVar89 * fVar100 * fVar76 * fVar74;
                        fStack0000000000000170 =
                             (fVar101 / (float)iVar25) * fVar66 * fStack0000000000000170;
                        fVar101 = fStack0000000000000170 * (fVar75 / fVar98) * fVar71 * fVar73;
                        fStack0000000000000170 = fStack0000000000000170 / fVar101;
                        fVar72 = fStack0000000000000170 * fVar72;
                        fVar89 = (float)FUN_040cede0(*(long *)(unaff_x19 + 0x68) + 0xb0,0);
                        fStack0000000000000170 = fStack0000000000000170 * fVar89;
                      }
                      else {
                        if (*plVar63 == 0) goto thunk_FUN_01f08a3c;
                        iVar25 = FUN_040ced70(*plVar63 + 0x48,0);
                        if (*plVar63 == 0) goto thunk_FUN_01f08a3c;
                        fVar66 = (float)FUN_040ced80(*plVar63 + 0x48,0);
                        if (plVar60[4] == 0) goto thunk_FUN_01f08a3c;
                        fVar98 = *(float *)((long)plVar60 + 0x2c);
                        fVar75 = fVar84;
                        if (*(char *)(unaff_x21 + 0xbd) != '\0') {
                          fVar75 = 1.0;
                        }
                        fVar71 = (float)FUN_040cf2c8(plVar60[4],0);
                        if (*plVar63 == 0) goto thunk_FUN_01f08a3c;
                        fVar72 = (float)FUN_040ceda0(*plVar63 + 0x48,0);
                        if (*plVar63 == 0) goto thunk_FUN_01f08a3c;
                        fVar73 = (float)FUN_040cedd0(*plVar63 + 0x48,0);
                        if (*plVar63 == 0) goto thunk_FUN_01f08a3c;
                        fVar100 = *(float *)(unaff_x19 + 0xf0);
                        fVar74 = (float)FUN_040ced80(*plVar63 + 0x48,0);
                        if (*(long *)(unaff_x19 + 0xe0) == 0) goto thunk_FUN_01f08a3c;
                        fVar74 = fVar89 * fVar73 * fVar100 * fVar74;
                        fVar101 = (fVar101 / (float)iVar25) * fVar66 * fVar75 * fVar98 * fVar71;
                        fStack0000000000000170 =
                             (float)FUN_040cede0(*(long *)(unaff_x19 + 0xe0) + 0x48,0);
                      }
                      *plVar4 = (long)plVar60;
                      thunk_FUN_01f51358(plVar4,plVar60);
                      lVar44 = *plVar2;
                      if (lVar44 != 0) {
                        if (*(uint *)(lVar44 + 0x18) <= *puVar1) goto LAB_040ec2e4;
                        lVar44 = lVar44 + (long)(int)*puVar1 * 0x188;
                        *(undefined1 *)(lVar44 + 0x28) = 2;
                        *(float *)(lVar44 + 0x16c) = fVar101;
                        *(long *)(lVar44 + 0x48) = *plVar63;
                        thunk_FUN_01f51358();
                        lVar44 = *plVar2;
                        if (lVar44 != 0) {
                          if (*(uint *)(lVar44 + 0x18) <= *puVar1) goto LAB_040ec2e4;
                          *(long *)(lVar44 + (long)(int)*puVar1 * 0x188 + 0x40) = *plVar57;
                          thunk_FUN_01f51358();
                          lVar44 = *plVar2;
                          if (lVar44 != 0) {
                            uVar27 = *puVar1;
                            if (uVar27 < *(uint *)(lVar44 + 0x18)) {
                              *(undefined4 *)(lVar44 + (long)(int)uVar27 * 0x188 + 0x60) =
                                   *(undefined4 *)(unaff_x19 + 0x78);
                              *(undefined4 *)(unaff_x19 + 0x78) = uVar22;
                              fVar66 = 0.0;
                              goto LAB_040e6210;
                            }
                            goto LAB_040ec2e4;
                          }
                        }
                      }
                    }
                  }
                }
              }
              goto thunk_FUN_01f08a3c;
            }
            lVar44 = *plVar2;
            fVar89 = fVar101;
            if (uVar24 == 3 || uVar24 == 0xad) {
              fVar89 = 0.0;
            }
            fVar74 = 0.0;
            if (lVar44 == 0) goto thunk_FUN_01f08a3c;
            uVar27 = *puVar1;
            fVar72 = 0.0;
            fStack0000000000000170 = 0.0;
          }
          if (*(uint *)(lVar44 + 0x18) <= uVar27) goto LAB_040ec2e4;
          lVar44 = lVar44 + (long)(int)uVar27 * 0x188;
          *(short *)(lVar44 + 0x20) = (short)uVar24;
          *(undefined4 *)(lVar44 + 0x68) = *(undefined4 *)(unaff_x19 + 0xf4);
          *(undefined4 *)(lVar44 + 0x170) = *(undefined4 *)(unaff_x19 + 0x1ac);
          lVar44 = *plVar2;
          if (lVar44 == 0) goto thunk_FUN_01f08a3c;
          if (*(uint *)(lVar44 + 0x18) <= *(uint *)(unaff_x19 + 0x324)) goto LAB_040ec2e4;
          *(undefined4 *)(lVar44 + (long)(int)*(uint *)(unaff_x19 + 0x324) * 0x188 + 0x174) =
               *(undefined4 *)(unaff_x19 + 0x1b0);
          lVar44 = *plVar2;
          if (lVar44 == 0) goto thunk_FUN_01f08a3c;
          if (*(uint *)(lVar44 + 0x18) <= *(uint *)(unaff_x19 + 0x324)) goto LAB_040ec2e4;
          *(undefined4 *)(lVar44 + (long)(int)*(uint *)(unaff_x19 + 0x324) * 0x188 + 0x17c) =
               *(undefined4 *)(unaff_x19 + 0x1b4);
          lVar44 = *plVar2;
          if (lVar44 == 0) goto thunk_FUN_01f08a3c;
          uVar93 = *(undefined8 *)(unaff_x19 + 0x40);
          uVar105 = *(undefined8 *)(unaff_x19 + 0x38);
          if (*(uint *)(lVar44 + 0x18) <= *(uint *)(unaff_x19 + 0x324)) goto LAB_040ec2e4;
          lVar44 = lVar44 + (long)(int)*(uint *)(unaff_x19 + 0x324) * 0x188;
          *(undefined4 *)(lVar44 + 0x198) = *(undefined4 *)(unaff_x19 + 0x48);
          *(undefined8 *)(lVar44 + 400) = uVar93;
          *(undefined8 *)(lVar44 + 0x188) = uVar105;
          lVar44 = *plVar2;
          if (lVar44 == 0) goto thunk_FUN_01f08a3c;
          if (*(uint *)(lVar44 + 0x18) <= *puVar1) goto LAB_040ec2e4;
          lVar44 = lVar44 + (long)(int)*puVar1 * 0x188;
          lVar62 = *(long *)(lVar44 + 0x38);
          *(undefined4 *)(lVar44 + 0x19c) = *(undefined4 *)(unaff_x19 + 0x124);
          if ((lVar62 == 0) && ((*plVar4 == 0 || (lVar62 = *(long *)(*plVar4 + 0x20), lVar62 == 0)))
             ) goto thunk_FUN_01f08a3c;
          FUN_040cf28c(&stack0x000012a0,lVar62,0);
          if (uVar24 >> 0x10 == 0) {
            if (*(int *)(*(long *)Method_System_IO_CStreamReader_Read__ + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            uVar27 = FUN_034f9bb4(uVar24,0);
            uVar27 = uVar27 & 1;
          }
          else {
            uVar27 = 0;
          }
          uVar22 = 0;
          fVar75 = *(float *)(unaff_x21 + 0xc0);
          if (*(char *)(unaff_x21 + 0xb4) != '\0') {
            if (*plVar4 == 0) goto thunk_FUN_01f08a3c;
            uVar28 = *puVar1;
            uVar58 = *(uint *)(*plVar4 + 0x28);
            if ((int)uVar28 < (int)uVar47) {
              lVar44 = *plVar2;
              if (lVar44 == 0) goto thunk_FUN_01f08a3c;
              if (*(uint *)(lVar44 + 0x18) <= uVar28 + 1) goto LAB_040ec2e4;
              lVar44 = *(long *)(lVar44 + (long)(int)(uVar28 + 1) * 0x188 + 0x30);
              if ((((lVar44 == 0) || (*plVar57 == 0)) ||
                  (lVar62 = *(long *)(*plVar57 + 0x170), lVar62 == 0)) ||
                 (lVar62 = *(long *)(lVar62 + 0x40), lVar62 == 0)) goto thunk_FUN_01f08a3c;
              uVar30 = FUN_02bcba00(lVar62,uVar58 | *(int *)(lVar44 + 0x28) << 0x10,&stack0x00001190
                                    ,*(undefined8 *)PTR_DAT_045893c8);
              if ((uVar30 & 1) != 0) {
                FUN_040d159c(&stack0x000012a0,&stack0x00001190,0);
                uVar22 = FUN_040d1400(&stack0x00001170,0);
                uVar30 = FUN_040d15c4(&stack0x00001190,0);
                if ((uVar30 & 0x100) != 0) {
                  fVar75 = 0.0;
                }
              }
              uVar28 = *puVar1;
            }
            if (0 < (int)uVar28) {
              lVar44 = *plVar2;
              if (lVar44 == 0) goto thunk_FUN_01f08a3c;
              if (*(uint *)(lVar44 + 0x18) <= uVar28 - 1) goto LAB_040ec2e4;
              lVar44 = *(long *)(lVar44 + (ulong)(uVar28 - 1) * 0x188 + 0x30);
              if (((lVar44 == 0) || (*plVar57 == 0)) ||
                 ((lVar62 = *(long *)(*plVar57 + 0x170), lVar62 == 0 ||
                  (lVar62 = *(long *)(lVar62 + 0x40), lVar62 == 0)))) goto thunk_FUN_01f08a3c;
              uVar30 = FUN_02bcba00(lVar62,*(uint *)(lVar44 + 0x28) | uVar58 << 0x10,
                                    &stack0x00001190,*(undefined8 *)PTR_DAT_045893c8);
              if ((uVar30 & 1) != 0) {
                FUN_040d15b0(&stack0x000012a0,&stack0x00001190,0);
                FUN_040d1400(&stack0x00001170,0);
                FUN_040d1260(uVar22,0);
                uVar30 = FUN_040d15c4(&stack0x00001190,0);
                if ((uVar30 & 0x100) != 0) {
                  fVar75 = 0.0;
                }
              }
            }
          }
          lVar44 = *plVar2;
          if (lVar44 == 0) goto thunk_FUN_01f08a3c;
          uVar28 = *puVar1;
          uVar22 = FUN_040d1250(&stack0x000011e0,0);
          if (*(uint *)(lVar44 + 0x18) <= uVar28) goto LAB_040ec2e4;
          *(undefined4 *)(lVar44 + (long)(int)uVar28 * 0x188 + 0x160) = uVar22;
          if (*(int *)(*(long *)PTR_DAT_045893f0 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          uVar30 = FUN_040fe354(uVar24,0);
          uVar28 = *puVar1;
          if ((uVar30 & 1) == 0) {
            if ((uVar30 & 1) == 0 && 0 < (int)uVar28) {
              uVar58 = *(uint *)(unaff_x19 + 0x19c4);
              if ((uVar58 == 0x80000000) || (uVar58 != uVar28 - 1)) {
                do {
                  uVar58 = uVar28 - 1;
                  if (((int)uVar28 < 1) || (uVar58 == *(uint *)(unaff_x19 + 0x19c4))) {
                    uVar28 = *(uint *)(unaff_x19 + 0x19c4);
                    if (uVar28 == 0x80000000) goto LAB_040e6630;
                    lVar44 = *plVar2;
                    if (lVar44 == 0) goto thunk_FUN_01f08a3c;
                    if (*(uint *)(lVar44 + 0x18) <= uVar28) goto LAB_040ec2e4;
                    lVar44 = *(long *)(lVar44 + (long)(int)uVar28 * 0x188 + 0x30);
                    if ((lVar44 == 0) || (lVar44 = FUN_040e0298(lVar44,0), lVar44 == 0))
                    goto thunk_FUN_01f08a3c;
                    uVar28 = FUN_040cf27c(lVar44,0);
                    if (*plVar4 == 0) goto thunk_FUN_01f08a3c;
                    iVar25 = FUN_040d30bc(*plVar4,0);
                    if (((*plVar57 == 0) || (lVar44 = FUN_040d2040(*plVar57,0), lVar44 == 0)) ||
                       (*(long *)(lVar44 + 0x48) == 0)) goto thunk_FUN_01f08a3c;
                    uVar35 = FUN_02bd17c8(*(long *)(lVar44 + 0x48),uVar28 | iVar25 << 0x10,
                                          &stack0x00001118,*(undefined8 *)PTR_DAT_045893d8);
                    if ((uVar35 & 1) == 0) goto LAB_040e6630;
                    lVar44 = *plVar2;
                    if (lVar44 == 0) goto thunk_FUN_01f08a3c;
                    if (*(uint *)(lVar44 + 0x18) <= *(uint *)(unaff_x19 + 0x19c4))
                    goto LAB_040ec2e4;
                    fVar75 = *(float *)(lVar44 + (long)(int)*(uint *)(unaff_x19 + 0x19c4) * 0x188 +
                                       0x148);
                    fVar73 = *(float *)(unaff_x19 + 0x2f4);
                    FUN_040d1784(&stack0x00001118,0);
                    fVar98 = (float)FUN_040d175c(&stack0x00001150,0);
                    FUN_040d1794(&stack0x00001118,0);
                    fVar71 = (float)FUN_040d176c(&stack0x00001148,0);
                    FUN_040d1238(((fVar75 - fVar73) / fVar89 + fVar98) - fVar71,&stack0x000011e0,0);
                    FUN_040d1784(&stack0x00001118,0);
                    fVar75 = (float)FUN_040d1764(&stack0x00001150,0);
                    puVar36 = &stack0x00001118;
                    goto LAB_040e7bc8;
                  }
                  lVar44 = *plVar2;
                  if (lVar44 == 0) goto thunk_FUN_01f08a3c;
                  if (*(uint *)(lVar44 + 0x18) <= uVar58) goto LAB_040ec2e4;
                  lVar44 = *(long *)(lVar44 + (ulong)uVar58 * 0x188 + 0x30);
                  if ((lVar44 == 0) || (lVar44 = FUN_040e0298(lVar44,0), lVar44 == 0))
                  goto thunk_FUN_01f08a3c;
                  uVar28 = FUN_040cf27c(lVar44,0);
                  if (*plVar4 == 0) goto thunk_FUN_01f08a3c;
                  iVar25 = FUN_040d30bc(*plVar4,0);
                  if (((*plVar57 == 0) || (lVar44 = FUN_040d2040(*plVar57,0), lVar44 == 0)) ||
                     (*(long *)(lVar44 + 0x50) == 0)) goto thunk_FUN_01f08a3c;
                  uVar35 = FUN_02bd4878(*(long *)(lVar44 + 0x50),uVar28 | iVar25 << 0x10,
                                        &stack0x00001130,*(undefined8 *)PTR_DAT_045893d0);
                  uVar28 = uVar58;
                } while ((uVar35 & 1) == 0);
                lVar44 = *plVar2;
                if (lVar44 == 0) goto thunk_FUN_01f08a3c;
                if (*(uint *)(lVar44 + 0x18) <= uVar58) goto LAB_040ec2e4;
                fVar73 = *(float *)(unaff_x19 + 0x2e0);
                fVar100 = *(float *)(unaff_x19 + 0x180);
                lVar44 = lVar44 + (ulong)uVar58 * 0x188;
                fVar75 = *(float *)(unaff_x19 + 0x2f4);
                fVar76 = *(float *)(lVar44 + 0x148);
                fVar77 = *(float *)(lVar44 + 0x150);
                FUN_040d17a4(&stack0x00001130,0);
                fVar98 = (float)FUN_040d175c(&stack0x00001150,0);
                FUN_040d17b4(&stack0x00001130,0);
                fVar71 = (float)FUN_040d176c(&stack0x00001148,0);
                FUN_040d1238(((fVar76 - fVar75) / fVar89 + fVar98) - fVar71,&stack0x000011e0,0);
                FUN_040d17a4(&stack0x00001130,0);
                fVar75 = (float)FUN_040d1764(&stack0x00001150,0);
                FUN_040d17b4(&stack0x00001130,0);
                fVar98 = (float)FUN_040d1774(&stack0x00001148,0);
                FUN_040d1248(((fVar77 - ((fVar74 - fVar73) + fVar100)) / fVar89 + fVar75) - fVar98,
                             &stack0x000011e0,0);
                fVar75 = 0.0;
              }
              else {
                lVar44 = *plVar2;
                if (lVar44 == 0) goto thunk_FUN_01f08a3c;
                if (*(uint *)(lVar44 + 0x18) <= uVar58) goto LAB_040ec2e4;
                lVar44 = *(long *)(lVar44 + (long)(int)uVar58 * 0x188 + 0x30);
                if ((lVar44 == 0) || (lVar44 = FUN_040e0298(lVar44,0), lVar44 == 0))
                goto thunk_FUN_01f08a3c;
                uVar28 = FUN_040cf27c(lVar44,0);
                if (*plVar4 == 0) goto thunk_FUN_01f08a3c;
                iVar25 = FUN_040d30bc(*plVar4,0);
                if (((*plVar57 == 0) || (lVar44 = FUN_040d2040(*plVar57,0), lVar44 == 0)) ||
                   (*(long *)(lVar44 + 0x48) == 0)) goto thunk_FUN_01f08a3c;
                uVar35 = FUN_02bd17c8(*(long *)(lVar44 + 0x48),uVar28 | iVar25 << 0x10,
                                      &stack0x00001158,*(undefined8 *)PTR_DAT_045893d8);
                if ((uVar35 & 1) != 0) {
                  lVar44 = *plVar2;
                  if (lVar44 == 0) goto thunk_FUN_01f08a3c;
                  if (*(uint *)(lVar44 + 0x18) <= *(uint *)(unaff_x19 + 0x19c4)) goto LAB_040ec2e4;
                  fVar75 = *(float *)(lVar44 + (long)(int)*(uint *)(unaff_x19 + 0x19c4) * 0x188 +
                                     0x148);
                  fVar73 = *(float *)(unaff_x19 + 0x2f4);
                  FUN_040d1784(&stack0x00001158,0);
                  fVar98 = (float)FUN_040d175c(&stack0x00001150,0);
                  FUN_040d1794(&stack0x00001158,0);
                  fVar71 = (float)FUN_040d176c(&stack0x00001148,0);
                  FUN_040d1238(((fVar75 - fVar73) / fVar89 + fVar98) - fVar71,&stack0x000011e0,0);
                  FUN_040d1784(&stack0x00001158,0);
                  fVar75 = (float)FUN_040d1764(&stack0x00001150,0);
                  puVar36 = &stack0x00001158;
LAB_040e7bc8:
                  FUN_040d1794(puVar36,0);
                  fVar98 = (float)FUN_040d1774(&stack0x00001148,0);
                  FUN_040d1248(fVar75 - fVar98,&stack0x000011e0,0);
                  fVar75 = 0.0;
                }
              }
            }
          }
          else {
            *(uint *)(unaff_x19 + 0x19c4) = uVar28;
          }
LAB_040e6630:
          fVar98 = (float)FUN_040d1240(&stack0x000011e0,0);
          fVar71 = (float)FUN_040d1240(&stack0x000011e0,0);
          if (*(char *)(unaff_x21 + 0xb6) != '\0') {
            fVar100 = *(float *)(unaff_x19 + 0x2f4);
            fVar73 = (float)FUN_040cf0d4(&stack0x000011f0,0);
            fVar100 = fVar100 - fVar89 * fVar73 * (1.0 - *(float *)(unaff_x19 + 0x1594));
            *(float *)(unaff_x19 + 0x2f4) = fVar100;
            if ((uVar27 != 0) || (uVar24 == 0x200b)) {
              *(float *)(unaff_x19 + 0x2f4) = fVar100 - fVar70 * *(float *)(unaff_x21 + 0xc4);
            }
          }
          fVar73 = *(float *)(unaff_x19 + 0x2f0);
          if (fVar73 == 0.0) {
            fVar73 = 0.0;
          }
          else {
            fVar100 = (float)FUN_040cf0b4(&stack0x000011f0,0);
            fVar76 = (float)FUN_040cf0c4(&stack0x000011f0,0);
            fVar73 = (1.0 - *(float *)(unaff_x19 + 0x1594)) *
                     (fVar73 * 0.5 - fVar89 * (fVar100 * 0.5 + fVar76));
            *(float *)(unaff_x19 + 0x2f4) = *(float *)(unaff_x19 + 0x2f4) + fVar73;
          }
          uVar28 = 0;
          if ((cVar56 == '\0') && (*pcVar3 == '\x01')) {
            uVar28 = *(uint *)(unaff_x19 + 0x124) & 1;
          }
          lVar44 = *plVar61;
          if (*(int *)(*(long *)Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__ +
                      0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          uVar35 = FUN_04073094(lVar44,0,0);
          puVar11 = PTR_DAT_04588b50;
          if (uVar28 == 0) {
            fVar100 = 0.0;
            if ((uVar35 & 1) != 0) {
              lVar44 = *plVar61;
              if (*(int *)(*(long *)PTR_DAT_04588b50 + 0xe0) == 0) {
                thunk_FUN_01ee6d7c();
              }
              if (lVar44 == 0) goto thunk_FUN_01f08a3c;
              uVar35 = FUN_0404e8a4(lVar44,*(undefined4 *)
                                            (*(long *)(*(long *)puVar11 + 0xb8) + 0x6c),0);
              if ((uVar35 & 1) != 0) {
                lVar44 = *plVar61;
                if (*(int *)(*(long *)puVar11 + 0xe0) == 0) {
                  thunk_FUN_01ee6d7c();
                }
                if (lVar44 == 0) goto thunk_FUN_01f08a3c;
                uVar35 = FUN_0404e8a4(lVar44,*(undefined4 *)
                                              (*(long *)(*(long *)puVar11 + 0xb8) + 0xe4),0);
                if ((uVar35 & 1) != 0) {
                  lVar44 = *plVar61;
                  if (*(int *)(*(long *)puVar11 + 0xe0) == 0) {
                    thunk_FUN_01ee6d7c();
                  }
                  if (lVar44 != 0) {
                    fVar76 = (float)UnityEngine_UIElements_VisualElementFocusRing__SortAndFlattenScopeLists
                                              (lVar44,*(undefined4 *)
                                                       (*(long *)(*(long *)puVar11 + 0xb8) + 0x6c),0
                                              );
                    plVar60 = (long *)Method_Unity_Collections_NativeArray<byte>_ToArray__;
                    if ((*plVar57 != 0) && (*plVar61 != 0)) {
                      fVar90 = *(float *)(*plVar57 + 0x188);
                      fVar77 = (float)UnityEngine_UIElements_VisualElementFocusRing__SortAndFlattenScopeLists
                                                (*plVar61,*(undefined4 *)
                                                           (*(long *)(*(long *)puVar11 + 0xb8) +
                                                           0xe4),0);
                      fVar77 = fVar77 * fVar76 * fVar90 * 0.25;
                      if (fVar76 < fVar66 + fVar77) {
                        fVar66 = fVar76 - fVar77;
                      }
                      goto LAB_040e69b0;
                    }
                  }
                  goto thunk_FUN_01f08a3c;
                }
              }
            }
            fVar77 = 0.0;
            plVar60 = (long *)Method_Unity_Collections_NativeArray<byte>_ToArray__;
          }
          else {
            fVar77 = 0.0;
            plVar60 = (long *)Method_Unity_Collections_NativeArray<byte>_ToArray__;
            if ((uVar35 & 1) != 0) {
              lVar44 = *plVar61;
              if (*(int *)(*(long *)PTR_DAT_04588b50 + 0xe0) == 0) {
                thunk_FUN_01ee6d7c();
              }
              if (lVar44 == 0) goto thunk_FUN_01f08a3c;
              uVar35 = FUN_0404e8a4(lVar44,*(undefined4 *)
                                            (*(long *)(*(long *)puVar11 + 0xb8) + 0x6c),0);
              plVar60 = (long *)Method_Unity_Collections_NativeArray<byte>_ToArray__;
              if ((uVar35 & 1) != 0) {
                lVar44 = *plVar61;
                if (*(int *)(*(long *)puVar11 + 0xe0) == 0) {
                  thunk_FUN_01ee6d7c();
                }
                if (lVar44 == 0) goto thunk_FUN_01f08a3c;
                fVar100 = (float)UnityEngine_UIElements_VisualElementFocusRing__SortAndFlattenScopeLists
                                           (lVar44,*(undefined4 *)
                                                    (*(long *)(*(long *)puVar11 + 0xb8) + 0x6c),0);
                if (*plVar57 == 0) goto thunk_FUN_01f08a3c;
                fVar76 = (float)FUN_040d20a8(*plVar57,0);
                plVar60 = (long *)Method_Unity_Collections_NativeArray<byte>_ToArray__;
                if (*plVar61 == 0) goto thunk_FUN_01f08a3c;
                fVar77 = (float)UnityEngine_UIElements_VisualElementFocusRing__SortAndFlattenScopeLists
                                          (*plVar61,*(undefined4 *)
                                                     (*(long *)(*(long *)puVar11 + 0xb8) + 0xe4),0);
                fVar77 = fVar100 * fVar76 * 0.25 * fVar77;
                if (fVar100 < fVar66 + fVar77) {
                  fVar66 = fVar100 - fVar77;
                }
              }
            }
            if (*plVar57 == 0) goto thunk_FUN_01f08a3c;
            fVar100 = (float)FUN_040d20b8(*plVar57,0);
          }
LAB_040e69b0:
          fVar90 = *(float *)(unaff_x19 + 0x2f4);
          fVar76 = (float)FUN_040cf0c4(&stack0x000011f0,0);
          fVar94 = *(float *)(unaff_x19 + 0x19a8);
          fVar78 = (float)FUN_040d1230(&stack0x000011e0,0);
          fVar90 = fVar90 + (1.0 - *(float *)(unaff_x19 + 0x1594)) *
                            fVar89 * (fVar78 + ((fVar76 * fVar94 - fVar66) - fVar77));
          fVar76 = (float)FUN_040cf0cc(&stack0x000011f0,0);
          fVar78 = (float)FUN_040d1240(&stack0x000011e0,0);
          fVar95 = *(float *)(unaff_x19 + 0x180) +
                   ((fVar74 + fVar89 * (fVar66 + fVar76 + fVar78)) - *(float *)(unaff_x19 + 0x2e0));
          fVar76 = (float)FUN_040cf0bc(&stack0x000011f0,0);
          fVar76 = fVar95 - fVar89 * (fVar66 + fVar66 + fVar76);
          fVar78 = (float)FUN_040cf0b4(&stack0x000011f0,0);
          fVar78 = fVar90 + (1.0 - *(float *)(unaff_x19 + 0x1594)) *
                            fVar89 * (fVar77 + fVar77 +
                                     fVar66 + fVar66 + fVar78 * *(float *)(unaff_x19 + 0x19a8));
          fStack00000000000001bc = fVar90;
          fVar94 = fVar78;
          if (((cVar56 == '\0') && (*pcVar3 == '\x01')) &&
             ((*(byte *)(unaff_x19 + 0x124) >> 1 & 1) != 0)) {
            if (*(long *)(unaff_x19 + 0x68) == 0) goto thunk_FUN_01f08a3c;
            iVar25 = *(int *)(unaff_x19 + 0x19a4);
            fVar81 = (float)FUN_040cedb0(*(long *)(unaff_x19 + 0x68) + 0xb0,0);
            if (*plVar57 == 0) goto thunk_FUN_01f08a3c;
            fVar79 = (float)FUN_040cedd0(*plVar57 + 0xb0,0);
            if (*plVar57 == 0) goto thunk_FUN_01f08a3c;
            fVar80 = *(float *)(unaff_x19 + 0xf0);
            fVar91 = *(float *)(unaff_x19 + 0x180);
            fVar94 = (float)iVar25 * fVar96;
            fVar104 = (float)FUN_040ced80(*plVar57 + 0xb0,0);
            fVar104 = fVar104 * fVar80 * (fVar81 - (fVar79 + fVar91)) * 0.5;
            fVar81 = (float)FUN_040cf0cc(&stack0x000011f0,0);
            fVar80 = fVar94 * fVar89 * ((fVar77 + fVar66 + fVar81) - fVar104);
            fVar81 = (float)FUN_040cf0cc(&stack0x000011f0,0);
            fVar79 = (float)FUN_040cf0bc(&stack0x000011f0,0);
            fVar95 = fVar95 + 0.0;
            fVar76 = fVar76 + 0.0;
            fVar94 = fVar94 * fVar89 * ((((fVar81 - fVar79) - fVar66) - fVar77) - fVar104);
            fStack00000000000001bc = fVar90 + fVar94;
            fVar94 = fVar78 + fVar94;
            fVar90 = fVar90 + fVar80;
            fVar78 = fVar78 + fVar80;
          }
          uVar105 = *(undefined8 *)(unaff_x19 + 0x19b4);
          uVar93 = *(undefined8 *)(unaff_x19 + 0x19bc);
          if (DAT_0482ee0f == '\0') {
            thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchReportFlowResult>__ctor__);
            DAT_0482ee0f = '\x01';
          }
          uVar82 = **(undefined8 **)
                     (*(long *)Method_Oculus_Platform_Message<LaunchReportFlowResult>__ctor__ + 0xb8
                     );
          uVar85 = (*(undefined8 **)
                     (*(long *)Method_Oculus_Platform_Message<LaunchReportFlowResult>__ctor__ + 0xb8
                     ))[1];
          fVar81 = 0.0;
          if (DAT_00c926ec <
              (float)((ulong)uVar93 >> 0x20) * (float)((ulong)uVar85 >> 0x20) +
              (float)uVar93 * (float)uVar85 +
              (float)uVar105 * (float)uVar82 +
              (float)((ulong)uVar105 >> 0x20) * (float)((ulong)uVar82 >> 0x20)) {
            fVar88 = 0.0;
            fVar91 = 0.0;
            fVar80 = 0.0;
            fVar79 = fVar95;
            fVar104 = fVar76;
          }
          else {
            FUN_04065230(&stack0x000012a0,*(undefined4 *)(unaff_x19 + 0x19b4),
                         *(undefined4 *)(unaff_x19 + 0x19b8),*(undefined4 *)(unaff_x19 + 0x19bc),
                         *(undefined4 *)(unaff_x19 + 0x19c0),0);
            fVar97 = (fVar78 + fStack00000000000001bc) * 0.5;
            fVar102 = (fVar76 + fVar95) * 0.5;
            fVar95 = fVar95 - fVar102;
            fVar80 = 0.0;
            fVar79 = fVar95;
            fVar90 = (float)FUN_04065130(fVar90 - fVar97,&stack0x000010d0,0);
            fVar90 = fVar97 + fVar90;
            fVar80 = fVar80 + 0.0;
            fVar104 = fVar76 - fVar102;
            fVar91 = 0.0;
            fVar76 = fVar104;
            fStack00000000000001bc =
                 (float)FUN_04065130(fStack00000000000001bc - fVar97,&stack0x000010d0,0);
            fStack00000000000001bc = fVar97 + fStack00000000000001bc;
            fVar76 = fVar102 + fVar76;
            fVar91 = fVar91 + 0.0;
            fVar88 = 0.0;
            fVar78 = (float)FUN_04065130(fVar78 - fVar97,&stack0x000010d0,0);
            fVar78 = fVar97 + fVar78;
            fVar95 = fVar102 + fVar95;
            fVar88 = fVar88 + 0.0;
            fVar81 = 0.0;
            fVar94 = (float)FUN_04065130(fVar94 - fVar97,&stack0x000010d0,0);
            fVar94 = fVar97 + fVar94;
            fVar81 = fVar81 + 0.0;
            fVar79 = fVar102 + fVar79;
            fVar104 = fVar102 + fVar104;
          }
          lVar44 = *plVar2;
          if (lVar44 == 0) goto thunk_FUN_01f08a3c;
          if (*(uint *)(lVar44 + 0x18) <= *puVar1) goto LAB_040ec2e4;
          lVar44 = lVar44 + (long)(int)*puVar1 * 0x188;
          *(float *)(lVar44 + 0x128) = fVar76;
          *(float *)(lVar44 + 300) = fVar91;
          *(float *)(lVar44 + 0x124) = fStack00000000000001bc;
          lVar44 = *plVar2;
          if (lVar44 == 0) goto thunk_FUN_01f08a3c;
          if (*(uint *)(lVar44 + 0x18) <= *puVar1) goto LAB_040ec2e4;
          lVar44 = lVar44 + (long)(int)*puVar1 * 0x188;
          *(float *)(lVar44 + 0x118) = fVar90;
          *(float *)(lVar44 + 0x11c) = fVar79;
          *(float *)(lVar44 + 0x120) = fVar80;
          lVar44 = *plVar2;
          if (lVar44 == 0) goto thunk_FUN_01f08a3c;
          if (*(uint *)(lVar44 + 0x18) <= *puVar1) goto LAB_040ec2e4;
          lVar44 = lVar44 + (long)(int)*puVar1 * 0x188;
          *(float *)(lVar44 + 0x130) = fVar78;
          *(float *)(lVar44 + 0x134) = fVar95;
          *(float *)(lVar44 + 0x138) = fVar88;
          lVar44 = *plVar2;
          if (lVar44 == 0) goto thunk_FUN_01f08a3c;
          if (*(uint *)(lVar44 + 0x18) <= *puVar1) goto LAB_040ec2e4;
          lVar44 = lVar44 + (long)(int)*puVar1 * 0x188;
          *(float *)(lVar44 + 0x13c) = fVar94;
          *(float *)(lVar44 + 0x140) = fVar104;
          *(float *)(lVar44 + 0x144) = fVar81;
          lVar44 = *plVar2;
          if (lVar44 == 0) goto thunk_FUN_01f08a3c;
          uVar28 = *puVar1;
          fVar94 = *(float *)(unaff_x19 + 0x2f4);
          fVar90 = (float)FUN_040d1230(&stack0x000011e0,0);
          if (*(uint *)(lVar44 + 0x18) <= uVar28) goto LAB_040ec2e4;
          *(float *)(lVar44 + (long)(int)uVar28 * 0x188 + 0x148) = fVar94 + fVar89 * fVar90;
          lVar44 = *plVar2;
          if (lVar44 == 0) goto thunk_FUN_01f08a3c;
          uVar28 = *puVar1;
          fVar95 = *(float *)(unaff_x19 + 0x2e0);
          fVar94 = *(float *)(unaff_x19 + 0x180);
          fVar90 = (float)FUN_040d1240(&stack0x000011e0,0);
          if (*(uint *)(lVar44 + 0x18) <= uVar28) goto LAB_040ec2e4;
          *(float *)(lVar44 + (long)(int)uVar28 * 0x188 + 0x150) =
               (fVar74 - fVar95) + fVar94 + fVar89 * fVar90;
          lVar44 = *plVar2;
          if (lVar44 == 0) goto thunk_FUN_01f08a3c;
          uVar28 = *puVar1;
          lVar62 = (long)(int)uVar28;
          if (*(uint *)(lVar44 + 0x18) <= uVar28) goto LAB_040ec2e4;
          *(float *)(lVar44 + lVar62 * 0x188 + 0x168) =
               (fVar78 - fStack00000000000001bc) / (fVar79 - fVar76);
          fVar72 = fVar89 * (fVar72 + fVar98);
          if (*pcVar3 == '\x01') {
            fVar72 = fVar72 / fStack000000000000017c;
            fVar98 = (fVar89 * (fStack0000000000000170 + fVar71)) / fStack000000000000017c;
          }
          else {
            fVar98 = fVar89 * (fStack0000000000000170 + fVar71);
          }
          uVar58 = *(uint *)(unaff_x19 + 0x328);
          fVar71 = *(float *)(unaff_x19 + 0x180);
          bVar14 = uVar28 == uVar58;
          bVar15 = uVar27 == 0;
          fVar72 = fVar71 + fVar72;
          if (bVar15 || bVar14) {
            fVar98 = fVar71 + fVar98;
            fVar74 = fVar72;
            fVar76 = fVar98;
            if (fVar71 != 0.0) {
              fVar74 = (fVar72 - fVar71) / *(float *)(unaff_x19 + 0xf0);
              fVar76 = (fVar98 - fVar71) / *(float *)(unaff_x19 + 0xf0);
              if (fVar74 <= fVar72) {
                fVar74 = fVar72;
              }
              if (fVar98 <= fVar76) {
                fVar76 = fVar98;
              }
            }
            lVar33 = lVar44 + lVar62 * 0x188;
            fVar71 = fVar74;
            if (fVar74 <= *(float *)(unaff_x19 + 0x338)) {
              fVar71 = *(float *)(unaff_x19 + 0x338);
            }
            fVar90 = fVar76;
            if (*(float *)(unaff_x19 + 0x33c) <= fVar76) {
              fVar90 = *(float *)(unaff_x19 + 0x33c);
            }
            *(float *)(unaff_x19 + 0x338) = fVar71;
            *(float *)(unaff_x19 + 0x33c) = fVar90;
            *(float *)(lVar33 + 0x158) = fVar74;
            *(float *)(lVar33 + 0x15c) = fVar76;
            fVar74 = *(float *)(unaff_x19 + 0x2e0);
            fVar76 = fVar72 - fVar74;
          }
          else {
            fVar71 = *(float *)(unaff_x19 + 0x338);
            lVar33 = lVar44 + lVar62 * 0x188;
            *(float *)(lVar33 + 0x158) = fVar71;
            fVar98 = *(float *)(unaff_x19 + 0x33c);
            *(float *)(lVar33 + 0x15c) = fVar98;
            fVar74 = *(float *)(unaff_x19 + 0x2e0);
            fVar76 = fVar71 - fVar74;
          }
          *(float *)(lVar33 + 0x14c) = fVar76;
          *(float *)(lVar44 + lVar62 * 0x188 + 0x154) = fVar98 - fVar74;
          *(float *)(unaff_x19 + 0x378) = fVar98 - fVar74;
          if ((*(int *)(unaff_x19 + 0x340) == 0) || (*(char *)(unaff_x19 + 0x37c) != '\0')) {
            if (bVar15 || bVar14) {
              *(float *)(unaff_x19 + 0x374) = fVar71;
              if (*(long *)(unaff_x19 + 0x68) == 0) goto thunk_FUN_01f08a3c;
              fVar98 = *(float *)(unaff_x19 + 0x370);
              fVar71 = (float)FUN_040cedb0(*(long *)(unaff_x19 + 0x68) + 0xb0,0);
              fVar74 = *(float *)(unaff_x19 + 0x2e0);
              fStack000000000000017c = (fVar89 * fVar71) / fStack000000000000017c;
              if (fVar98 <= fStack000000000000017c) {
                fVar98 = fStack000000000000017c;
              }
              *(float *)(unaff_x19 + 0x370) = fVar98;
              if (fVar74 == 0.0) goto LAB_040e7440;
            }
          }
          else if ((bVar15 || bVar14) && fVar74 == 0.0) {
LAB_040e7440:
            fVar98 = *(float *)(unaff_x19 + 0x19c8);
            if (*(float *)(unaff_x19 + 0x19c8) <= fVar72) {
              fVar98 = fVar72;
            }
            *(float *)(unaff_x19 + 0x19c8) = fVar98;
          }
          lVar44 = *plVar2;
          if (lVar44 == 0) goto thunk_FUN_01f08a3c;
          uVar40 = *puVar1;
          if (*(uint *)(lVar44 + 0x18) <= uVar40) goto LAB_040ec2e4;
          lVar44 = lVar44 + (long)(int)uVar40 * 0x188;
          *(undefined1 *)(lVar44 + 0x1a0) = 0;
          uVar54 = *(uint *)(unaff_x19 + 0x158) & 0x18;
          if ((uVar24 == 9) ||
             ((((uVar27 == 0 && (uVar24 != 3)) && ((uVar24 != 0x200b && (uVar24 != 0xad)))) ||
              (((bool)(uVar24 == 0xad & (bVar18 ^ 1U)) || (*pcVar3 == '\x02')))))) {
            *(undefined1 *)(lVar44 + 0x1a0) = 1;
            pfVar45 = (float *)(unaff_x19 + 0x358);
            pfVar49 = pfVar42;
            if (bVar17) {
              lVar44 = *(long *)(unaff_x25 + 0x48);
              if (lVar44 == 0) goto thunk_FUN_01f08a3c;
              if (*(uint *)(lVar44 + 0x18) <= *(uint *)(unaff_x19 + 0x340)) goto LAB_040ec2e4;
              lVar44 = lVar44 + (long)(int)*(uint *)(unaff_x19 + 0x340) * 0x60;
              pfVar49 = (float *)(lVar44 + 100);
              pfVar45 = (float *)(lVar44 + 0x68);
            }
            fVar71 = *pfVar49;
            fVar98 = *pfVar45;
            fVar72 = *(float *)(unaff_x19 + 0x35c);
            fVar76 = *(float *)(unaff_x19 + 0x2f4);
            fStack0000000000000174 = (fVar103 - fVar71) - fVar98;
            bVar14 = true;
            if ((fVar72 <= fStack0000000000000174) && (bVar14 = false, !NAN(fVar72))) {
              bVar14 = fVar72 == -1.0;
            }
            if (!bVar14) {
              fStack0000000000000174 = fVar72;
            }
            fVar72 = 0.0;
            fVar90 = 0.0;
            if (*(char *)(unaff_x21 + 0xb6) == '\0') {
              fVar90 = (float)FUN_040cf0d4(&stack0x000011f0,0);
              fVar74 = *(float *)(unaff_x19 + 0x2e0);
            }
            fVar78 = *(float *)(unaff_x19 + 0x1594);
            fVar94 = *(float *)(unaff_x19 + 0x33c);
            if (uVar24 != 0xad) {
              fVar101 = fVar89;
            }
            if ((0.0 < fVar74) && (fVar72 = 0.0, *(char *)(unaff_x19 + 0x2e8) == '\0')) {
              fVar72 = *(float *)(unaff_x19 + 0x338) - *(float *)(unaff_x19 + 0x15ac);
            }
            uVar40 = *puVar1;
            fVar72 = (*(float *)(unaff_x19 + 0x374) - (fVar94 - fVar74)) + fVar72;
            if (fVar72 <= fVar67) goto switchD_040e7710_caseD_2;
            if (*(int *)(unaff_x19 + 0x34c) == -1) {
              *(uint *)(unaff_x19 + 0x34c) = uVar40;
            }
            uVar105 = DAT_00c8e018;
            if (*(char *)(unaff_x21 + 0xa8) != '\0') {
              fVar95 = *(float *)(unaff_x21 + 0xd0);
              if (((*(float *)(unaff_x19 + 0x15b0) <= fVar95) || (fVar74 <= 0.0)) ||
                 (*(int *)(unaff_x19 + 0x15a4) <= *(int *)(unaff_x19 + 0x15a0))) {
                fVar74 = *pfVar48;
                fVar72 = *(float *)(unaff_x21 + 0xac);
                if ((fVar74 <= fVar72) ||
                   (*(int *)(unaff_x19 + 0x15a4) <= *(int *)(unaff_x19 + 0x15a0)))
                goto LAB_040e76ec;
                fVar101 = (fVar74 - *(float *)(unaff_x19 + 0x159c)) * 0.5;
                if (fVar101 <= DAT_00c92764) {
                  fVar101 = DAT_00c92764;
                }
                fVar70 = (fVar74 - fVar101) * 20.0 + 0.5;
                fVar101 = DAT_00c92a58;
                if (fVar70 != INFINITY) {
                  fVar101 = (float)(int)fVar70 / 20.0;
                }
                if (fVar101 <= fVar72) {
                  fVar101 = fVar72;
                }
                *(float *)(unaff_x19 + 0x1598) = fVar74;
                goto LAB_040e96e4;
              }
              fVar101 = *(float *)(unaff_x19 + 0x15b0) +
                        ((fVar87 - fVar72) / (float)*(int *)(unaff_x19 + 0x340)) / fVar64;
              if (fVar101 <= fVar95) {
                fVar101 = fVar95;
              }
LAB_040ec194:
              *(float *)(unaff_x19 + 0x15b0) = fVar101;
              goto LAB_040e4eec;
            }
LAB_040e76ec:
            switch(*(undefined4 *)(unaff_x21 + 0x74)) {
            case 1:
              if (*(int *)(unaff_x19 + 0x340) < 1) goto switchD_040e7710_caseD_2;
              iVar25 = FUN_027b23ec(lVar31,*(undefined8 *)PTR_DAT_04589480);
              uVar105 = DAT_00c8e018;
              if (iVar25 == 0) {
                uVar23 = 0xffffffff;
                puVar1[0] = 0;
                puVar1[1] = 0;
                fVar101 = fVar89;
              }
              else {
                FUN_027b2888(&stack0x000012a0,lVar31,*(undefined8 *)PTR_DAT_04589430);
                memcpy(&stack0x00000d38,&stack0x000012a0,0x398);
                iVar25 = FUN_040ef794();
                uVar23 = iVar25 - 1;
                iVar25 = *(int *)(unaff_x19 + 0x324) + -1;
                *(int *)(unaff_x19 + 0x324) = iVar25;
                uVar105 = CONCAT44(0x2026,iVar25);
                iStack00000000000001dc = iStack00000000000001dc + 1;
                fVar101 = fVar89;
              }
              break;
            default:
switchD_040e7710_caseD_2:
              if ((uVar30 & 1) == 0) {
LAB_040e780c:
                if (uVar27 == 0) {
                  if (uVar24 != 0xad) {
                    if (*pcVar3 == '\x02') {
                      FUN_040f4f28();
                    }
                    else if (*pcVar3 == '\x01') {
                      FUN_040f43bc(fVar66,fVar77);
                    }
                    if (bVar13) {
                      *(uint *)(unaff_x19 + 0x330) = *puVar1;
                    }
                    *(uint *)(unaff_x19 + 0x334) = *puVar1;
                    *(int *)(unaff_x19 + 0x344) = *(int *)(unaff_x19 + 0x344) + 1;
                    lVar44 = *(long *)(unaff_x25 + 0x48);
                    if (lVar44 != 0) {
                      if (*(uint *)(unaff_x19 + 0x340) < *(uint *)(lVar44 + 0x18)) {
                        lVar44 = lVar44 + (long)(int)*(uint *)(unaff_x19 + 0x340) * 0x60;
                        bVar13 = false;
                        *(float *)(lVar44 + 100) = fVar71;
                        *(float *)(lVar44 + 0x68) = fVar98;
                        goto LAB_040e7ea4;
                      }
                      goto LAB_040ec2e4;
                    }
                    goto thunk_FUN_01f08a3c;
                  }
                  lVar44 = *plVar2;
                  if (lVar44 == 0) goto thunk_FUN_01f08a3c;
                  if (*(uint *)(lVar44 + 0x18) <= uVar40) goto LAB_040ec2e4;
                  *(undefined1 *)(lVar44 + (long)(int)uVar40 * 0x188 + 0x1a0) = 0;
                }
                else {
                  lVar44 = *plVar2;
                  if (lVar44 == 0) goto thunk_FUN_01f08a3c;
                  if (*(uint *)(lVar44 + 0x18) <= uVar40) goto LAB_040ec2e4;
                  *(undefined1 *)(lVar44 + (long)(int)uVar40 * 0x188 + 0x1a0) = 0;
                  *(uint *)(unaff_x19 + 0x334) = uVar40;
                  lVar44 = *(long *)(unaff_x25 + 0x48);
                  if (lVar44 == 0) goto thunk_FUN_01f08a3c;
                  uVar40 = *(uint *)(lVar44 + 0x18);
                  if (uVar40 <= *(uint *)(unaff_x19 + 0x340)) goto LAB_040ec2e4;
                  lVar62 = lVar44 + (long)(int)*(uint *)(unaff_x19 + 0x340) * 0x60;
                  iVar25 = *(int *)(lVar62 + 0x2c) + 1;
                  *(int *)(lVar62 + 0x2c) = iVar25;
                  *(int *)(unaff_x19 + 0x348) = iVar25;
                  if (uVar40 <= *(uint *)(unaff_x19 + 0x340)) goto LAB_040ec2e4;
                  lVar44 = lVar44 + (long)(int)*(uint *)(unaff_x19 + 0x340) * 0x60;
                  *(float *)(lVar44 + 100) = fVar71;
                  *(float *)(lVar44 + 0x68) = fVar98;
                  *(int *)(unaff_x25 + 0x18) = *(int *)(unaff_x25 + 0x18) + 1;
                }
                goto LAB_040e7ea4;
              }
              fVar72 = ABS(fVar76) + fVar90 * (1.0 - fVar78) * fVar101;
              fVar101 = 1.0;
              if (uVar54 != 0) {
                fVar101 = DAT_00c926dc;
              }
              if (fVar72 <= fVar101 * fStack0000000000000174) goto LAB_040e780c;
              if ((cVar39 == '\0') || (uVar40 == *(uint *)(unaff_x19 + 0x328))) {
                if ((*(char *)(unaff_x21 + 0xa8) == '\0') ||
                   (*(int *)(unaff_x19 + 0x15a4) <= *(int *)(unaff_x19 + 0x15a0))) {
LAB_040e791c:
                  iVar25 = *(int *)(unaff_x21 + 0x74);
                  if (iVar25 == 1) {
                    iVar25 = FUN_027b23ec(lVar31,*(undefined8 *)PTR_DAT_04589480);
                    uVar105 = DAT_00c8e018;
                    if (iVar25 == 0) {
                      uVar23 = 0xffffffff;
                      puVar1[0] = 0;
                      puVar1[1] = 0;
                      fVar101 = fVar89;
                    }
                    else {
                      FUN_027b2888(&stack0x000012a0,lVar31,*(undefined8 *)PTR_DAT_04589430);
                      memcpy(&stack0x00000608,&stack0x000012a0,0x398);
                      iVar25 = FUN_040ef794();
                      uVar23 = iVar25 - 1;
                      iVar25 = *(int *)(unaff_x19 + 0x324) + -1;
                      *(int *)(unaff_x19 + 0x324) = iVar25;
                      iStack00000000000001dc = iStack00000000000001dc + 1;
                      uVar105 = CONCAT44(0x2026,iVar25);
                      fVar101 = fVar89;
                    }
                    break;
                  }
                  if (iVar25 == 6) {
                    uVar23 = FUN_040ef794();
                    uVar40 = *(uint *)(unaff_x19 + 0x324);
                  }
                  else {
                    if (iVar25 != 3) goto LAB_040e780c;
                    uVar23 = FUN_040ef794();
                  }
                  goto LAB_040e9008;
                }
                fVar74 = *(float *)(unaff_x21 + 0x108) / 100.0;
                if (fVar74 <= fVar78) {
                  fVar74 = *(float *)(unaff_x21 + 0xac);
                  fVar76 = *pfVar48;
                  if (fVar76 <= fVar74) goto LAB_040e791c;
LAB_040ec200:
                  fVar101 = (fVar76 - *(float *)(unaff_x19 + 0x159c)) * 0.5;
                  if (fVar101 <= DAT_00c92764) {
                    fVar101 = DAT_00c92764;
                  }
                  *(float *)(unaff_x19 + 0x1598) = fVar76;
                  fVar70 = (fVar76 - fVar101) * 20.0 + 0.5;
                  fVar101 = DAT_00c92a58;
                  if (fVar70 != INFINITY) {
                    fVar101 = (float)(int)fVar70 / 20.0;
                  }
                  if (fVar101 <= fVar74) {
                    fVar101 = fVar74;
                  }
                  goto LAB_040e96e4;
                }
                fVar70 = fVar72 / (1.0 - fVar78);
                if (fVar78 <= 0.0) {
                  fVar70 = fVar72;
                }
                fVar78 = fVar78 + (fVar72 - fVar101 * (fStack0000000000000174 + DAT_00c928e4)) /
                                  fVar70;
LAB_040ec290:
                if (fVar74 <= fVar78) {
                  fVar78 = fVar74;
                }
                *(float *)(unaff_x19 + 0x1594) = fVar78;
                goto LAB_040e4eec;
              }
              uVar23 = FUN_040ef794();
              if (*(float *)(unaff_x19 + 0x2e4) == DAT_00c927ac) {
                lVar44 = *plVar2;
                if (lVar44 == 0) goto thunk_FUN_01f08a3c;
                uVar41 = *puVar1;
                if (*(uint *)(lVar44 + 0x18) <= uVar41) goto LAB_040ec2e4;
                fVar76 = *(float *)(unaff_x19 + 0x2e0);
                fVar74 = 0.0;
                if ((0.0 < fVar76) && (fVar74 = 0.0, *(char *)(unaff_x19 + 0x2e8) == '\0')) {
                  fVar74 = *(float *)(unaff_x19 + 0x338) - *(float *)(unaff_x19 + 0x15ac);
                }
                fVar74 = fVar70 * *(float *)(unaff_x21 + 200) +
                         *(float *)(lVar44 + (long)(int)uVar41 * 0x188 + 0x158) +
                         (fVar74 - *(float *)(unaff_x19 + 0x33c)) +
                         fVar64 * (fVar65 + *(float *)(unaff_x19 + 0x15b0));
              }
              else {
                fVar74 = *(float *)(unaff_x21 + 200);
                *(undefined1 *)(unaff_x19 + 0x2e8) = 1;
                lVar44 = *plVar2;
                if (lVar44 == 0) goto thunk_FUN_01f08a3c;
                fVar76 = *(float *)(unaff_x19 + 0x2e0);
                uVar41 = *(uint *)(unaff_x19 + 0x324);
                fVar74 = *(float *)(unaff_x19 + 0x2e4) + fVar70 * fVar74;
              }
              if ((*(uint *)(lVar44 + 0x18) <= uVar41) ||
                 (uVar10 = uVar41 - 1, *(uint *)(lVar44 + 0x18) <= uVar10)) goto LAB_040ec2e4;
              fVar90 = (fVar74 + *(float *)(unaff_x19 + 0x374) + fVar76) -
                       *(float *)(lVar44 + (long)(int)uVar41 * 0x188 + 0x15c);
              if ((!bVar18 && *(short *)(lVar44 + (long)(int)uVar10 * 0x188 + 0x20) == 0xad) &&
                 ((fVar90 < fVar67 || (*(int *)(unaff_x21 + 0x74) == 0)))) {
                uVar23 = uVar23 - 1;
                bVar18 = false;
                *puVar1 = uVar10;
                uVar105 = CONCAT44(0x2d,uVar10);
                fVar101 = fVar89;
                break;
              }
              if (*(short *)(lVar44 + (long)(int)uVar41 * 0x188 + 0x20) == 0xad) {
                bVar18 = true;
                uVar105 = uVar32;
                fVar101 = fVar89;
                break;
              }
              if ((bVar20 & *(byte *)(unaff_x21 + 0xa8)) != 0) {
                fVar78 = *(float *)(unaff_x19 + 0x1594);
                fVar74 = *(float *)(unaff_x21 + 0x108) / 100.0;
                if ((fVar74 <= fVar78) ||
                   (*(int *)(unaff_x19 + 0x15a4) <= *(int *)(unaff_x19 + 0x15a0))) {
                  fVar76 = *pfVar48;
                  fVar74 = *(float *)(unaff_x21 + 0xac);
                  if ((fVar74 < fVar76) &&
                     (*(int *)(unaff_x19 + 0x15a0) < *(int *)(unaff_x19 + 0x15a4)))
                  goto LAB_040ec200;
                  goto LAB_040e91b4;
                }
LAB_040ec2a4:
                fVar70 = fVar72;
                if (0.0 < fVar78) {
                  fVar70 = fVar72 / (1.0 - fVar78);
                }
                fVar78 = fVar78 + (fVar72 - fVar101 * (fStack0000000000000174 + DAT_00c928e4)) /
                                  fVar70;
                goto LAB_040ec290;
              }
LAB_040e91b4:
              iVar25 = *(int *)(unaff_x19 + 0x11e0);
              if ((iVar25 != iStack0000000000000030) && ((bVar20 & iVar25 != -1) != 0)) {
                uVar23 = FUN_040ef794();
                plVar60 = (long *)Method_Unity_Collections_NativeArray<byte>_ToArray__;
                lVar44 = *(long *)(unaff_x25 + 0x30);
                if (lVar44 == 0) goto thunk_FUN_01f08a3c;
                uVar41 = *puVar1;
                uVar10 = uVar41 - 1;
                if (*(uint *)(lVar44 + 0x18) <= uVar10) goto LAB_040ec2e4;
                iStack0000000000000030 = iVar25;
                if (*(short *)(lVar44 + (long)(int)uVar10 * 0x188 + 0x20) == 0xad) {
                  uVar23 = uVar23 - 1;
                  bVar18 = false;
                  *puVar1 = uVar10;
                  uVar105 = CONCAT44(0x2d,uVar10);
                  fVar101 = fVar89;
                  break;
                }
              }
              if (fVar90 <= fVar67) {
                FUN_040f9ccc(fVar64,fVar89,fVar70,fVar100,fVar75,fStack0000000000000174,fVar65);
                bVar20 = 1;
                bVar18 = false;
                bVar13 = true;
                uVar105 = uVar32;
                fVar101 = fVar89;
                break;
              }
              if (*(int *)(unaff_x19 + 0x34c) == -1) {
                *(uint *)(unaff_x19 + 0x34c) = uVar41;
              }
              if (*(char *)(unaff_x21 + 0xa8) != '\0') {
                fVar74 = *(float *)(unaff_x21 + 0xd0);
                if ((fVar74 < *(float *)(unaff_x19 + 0x15b0)) &&
                   (*(int *)(unaff_x19 + 0x15a0) < *(int *)(unaff_x19 + 0x15a4))) {
                  fVar101 = *(float *)(unaff_x19 + 0x15b0) +
                            ((fVar87 - fVar90) / (float)(*(int *)(unaff_x19 + 0x340) + 1)) / fVar64;
                  if (fVar101 <= fVar74) {
                    fVar101 = fVar74;
                  }
                  goto LAB_040ec194;
                }
                fVar78 = *(float *)(unaff_x19 + 0x1594);
                fVar74 = *(float *)(unaff_x21 + 0x108) / 100.0;
                if ((fVar78 < fVar74) &&
                   (*(int *)(unaff_x19 + 0x15a0) < *(int *)(unaff_x19 + 0x15a4))) goto LAB_040ec2a4;
                fVar76 = *pfVar48;
                fVar74 = *(float *)(unaff_x21 + 0xac);
                if ((fVar74 < fVar76) &&
                   (*(int *)(unaff_x19 + 0x15a0) < *(int *)(unaff_x19 + 0x15a4))) goto LAB_040ec200;
              }
              switch(*(undefined4 *)(unaff_x21 + 0x74)) {
              case 0:
              case 2:
              case 4:
                FUN_040f9ccc(fVar64,fVar89,fVar70,fVar100,fVar75,fStack0000000000000174,fVar65);
                break;
              case 1:
                iVar25 = FUN_027b23ec(lVar31,*(undefined8 *)PTR_DAT_04589480);
                uVar105 = DAT_00c8e018;
                if (iVar25 == 0) {
                  bVar18 = false;
                  puVar1[0] = 0;
                  puVar1[1] = 0;
                  uVar23 = 0xffffffff;
                  fVar101 = fVar89;
                }
                else {
                  FUN_027b2888(&stack0x000012a0,lVar31,*(undefined8 *)PTR_DAT_04589430);
                  memcpy(&stack0x000009a0,&stack0x000012a0,0x398);
                  iVar21 = FUN_040ef794();
                  bVar18 = false;
                  iVar25 = *(int *)(unaff_x19 + 0x324) + -1;
                  *(int *)(unaff_x19 + 0x324) = iVar25;
                  iStack00000000000001dc = iStack00000000000001dc + 1;
                  uVar23 = iVar21 - 1;
                  uVar105 = CONCAT44(0x2026,iVar25);
                  fVar101 = fVar89;
                }
                goto LAB_040e58d0;
              case 3:
                uVar23 = FUN_040ef794();
                bVar18 = false;
                goto LAB_040e9008;
              case 5:
                *(undefined1 *)(unaff_x19 + 0x37c) = 1;
                FUN_040f9ccc(fVar64,fVar89,fVar70,fVar100,fVar75,fStack0000000000000174,fVar65);
                *(undefined4 *)(unaff_x19 + 0x15ac) = 0;
                *(undefined4 *)(unaff_x19 + 0x2e0) = 0;
                *(undefined4 *)(unaff_x19 + 0x374) = 0;
                *(undefined4 *)(unaff_x19 + 0x19c8) = 0;
                *(int *)(unaff_x19 + 0x350) = *(int *)(unaff_x19 + 0x350) + 1;
                break;
              case 6:
                bVar18 = false;
                uVar40 = uVar41;
LAB_040e9008:
                uVar105 = CONCAT44(3,uVar40);
                fVar101 = fVar89;
                goto LAB_040e58d0;
              default:
                bVar18 = false;
                uVar40 = uVar41;
                goto LAB_040e780c;
              }
              bVar18 = false;
LAB_040e8b8c:
              bVar20 = 1;
              bVar13 = true;
              uVar105 = uVar32;
              fVar101 = fVar89;
              break;
            case 3:
              uVar23 = FUN_040ef794();
              uVar105 = CONCAT44((int)((ulong)uVar32 >> 0x20),uVar40);
              fVar101 = fVar89;
              break;
            case 5:
              if (uVar40 == 0 || (int)uVar23 < 0) {
                uVar23 = 0xffffffff;
                *puVar1 = 0;
                fVar101 = fVar89;
              }
              else {
                fVar101 = *(float *)(unaff_x19 + 0x338);
                uVar23 = FUN_040ef794();
                if (fVar67 < fVar101 - fVar94) goto UnityEngine_UIElements_FocusController___ctor;
                *(undefined4 *)(unaff_x19 + 0x328) = *(undefined4 *)(unaff_x19 + 0x324);
                *(undefined8 *)(unaff_x19 + 0x338) = uVar59;
                *(int *)(unaff_x19 + 0x340) = *(int *)(unaff_x19 + 0x340) + 1;
                *(undefined1 *)(unaff_x19 + 0x37c) = 1;
                *(undefined4 *)(unaff_x19 + 0x15ac) = 0;
                *(undefined4 *)(unaff_x19 + 0x2e0) = 0;
                *(undefined4 *)(unaff_x19 + 0x374) = 0;
                *(undefined4 *)(unaff_x19 + 0x19c8) = 0;
                *(float *)(unaff_x19 + 0x2f4) = *(float *)(unaff_x19 + 0x2fc) + 0.0;
                *(int *)(unaff_x19 + 0x350) = *(int *)(unaff_x19 + 0x350) + 1;
                uVar105 = uVar32;
                fVar101 = fVar89;
              }
              break;
            case 6:
              uVar23 = FUN_040ef794();
              uVar105 = CONCAT44(3,uVar40);
              fVar101 = fVar89;
            }
LAB_040e58d0:
            uVar23 = uVar23 + 1;
            lVar44 = *(long *)(unaff_x19 + 0x20);
            uVar27 = uVar24;
            if (lVar44 == 0) goto thunk_FUN_01f08a3c;
            goto LAB_040e5588;
          }
          if (((uVar24 & 0xfffffffe) == 10) && (*(int *)(unaff_x21 + 0x74) == 6)) {
            fVar101 = 0.0;
            if ((0.0 < fVar74) && (fVar101 = 0.0, *(char *)(unaff_x19 + 0x2e8) == '\0')) {
              fVar101 = *(float *)(unaff_x19 + 0x338) - *(float *)(unaff_x19 + 0x15ac);
            }
            if (fVar67 < (*(float *)(unaff_x19 + 0x374) - (*(float *)(unaff_x19 + 0x33c) - fVar74))
                         + fVar101) {
              if (*(int *)(unaff_x19 + 0x34c) == -1) {
                *(uint *)(unaff_x19 + 0x34c) = uVar40;
              }
              uVar23 = FUN_040ef794();
UnityEngine_UIElements_FocusController___ctor:
              uVar105 = CONCAT44(3,uVar40);
              fVar101 = fVar89;
              goto LAB_040e58d0;
            }
          }
          if ((((uVar24 - 0x2007 < 0x23) &&
               ((1L << ((ulong)(uVar24 - 0x2007) & 0x3f) & 0x600000001U) != 0)) || (uVar24 - 10 < 2)
              ) || (uVar24 == 0xa0)) {
LAB_040e7d20:
            if ((uVar24 == 0xad) || (uVar24 == 0x200b)) goto LAB_040e7ea4;
            if (uVar24 != 0x2060) {
              lVar44 = *(long *)(unaff_x25 + 0x48);
              if (lVar44 != 0) {
                if (*(uint *)(unaff_x19 + 0x340) < *(uint *)(lVar44 + 0x18)) {
                  lVar44 = lVar44 + (long)(int)*(uint *)(unaff_x19 + 0x340) * 0x60;
                  *(int *)(lVar44 + 0x2c) = *(int *)(lVar44 + 0x2c) + 1;
                  *(int *)(unaff_x25 + 0x18) = *(int *)(unaff_x25 + 0x18) + 1;
                  goto LAB_040e7d80;
                }
                goto LAB_040ec2e4;
              }
              goto thunk_FUN_01f08a3c;
            }
          }
          else {
            if (*(int *)(*(long *)Method_System_IO_CStreamReader_Read__ + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            uVar30 = FUN_034fd62c(uVar24,0);
            if ((uVar30 & 1) != 0) goto LAB_040e7d20;
          }
LAB_040e7d80:
          if (uVar24 == 0xa0) {
            lVar44 = *(long *)(unaff_x25 + 0x48);
            if (lVar44 == 0) goto thunk_FUN_01f08a3c;
            if (*(uint *)(lVar44 + 0x18) <= *(uint *)(unaff_x19 + 0x340)) goto LAB_040ec2e4;
            lVar44 = lVar44 + (long)(int)*(uint *)(unaff_x19 + 0x340) * 0x60;
            *(int *)(lVar44 + 0x20) = *(int *)(lVar44 + 0x20) + 1;
          }
LAB_040e7ea4:
          bVar14 = *(int *)(unaff_x21 + 0x74) == 1;
          if (bVar14 && bVar17) {
            bVar14 = uVar24 == 0x2d;
          }
          if (bVar14) {
            if (*(long *)(unaff_x19 + 0x1a08) == 0) goto thunk_FUN_01f08a3c;
            fVar101 = *(float *)(unaff_x19 + 0xf4);
            iVar25 = FUN_040ced70(*(long *)(unaff_x19 + 0x1a08) + 0xb0,0);
            if (*(long *)(unaff_x19 + 0x1a08) == 0) goto thunk_FUN_01f08a3c;
            fVar98 = (float)FUN_040ced80(*(long *)(unaff_x19 + 0x1a08) + 0xb0,0);
            lVar44 = *(long *)(unaff_x19 + 0x1a00);
            fVar72 = fVar84;
            if (*(char *)(unaff_x21 + 0xbd) != '\0') {
              fVar72 = 1.0;
            }
            if ((lVar44 == 0) || (*(long *)(lVar44 + 0x20) == 0)) goto thunk_FUN_01f08a3c;
            fVar74 = *(float *)(unaff_x19 + 0xf0);
            fVar77 = *(float *)(lVar44 + 0x2c);
            fVar71 = (float)FUN_040cf2c8(*(long *)(lVar44 + 0x20),0);
            fVar76 = *pfVar42;
            fVar71 = fVar74 * (fVar101 / (float)iVar25) * fVar98 * fVar72 * fVar77 * fVar71;
            fVar101 = *(float *)(unaff_x19 + 0x358);
            if ((uVar24 == 10) && (*(int *)(unaff_x19 + 0x324) != *(int *)(unaff_x19 + 0x328))) {
              lVar44 = *plVar2;
              if (lVar44 == 0) goto thunk_FUN_01f08a3c;
              uVar40 = *(int *)(unaff_x19 + 0x324) - 1;
              if (*(uint *)(lVar44 + 0x18) <= uVar40) goto LAB_040ec2e4;
              if (*(long *)(unaff_x19 + 0x1a08) == 0) goto thunk_FUN_01f08a3c;
              fVar72 = *(float *)(lVar44 + (long)(int)uVar40 * 0x188 + 0x68);
              iVar25 = FUN_040ced70(*(long *)(unaff_x19 + 0x1a08) + 0xb0,0);
              if (*(long *)(unaff_x19 + 0x1a08) == 0) goto thunk_FUN_01f08a3c;
              fVar74 = (float)FUN_040ced80(*(long *)(unaff_x19 + 0x1a08) + 0xb0,0);
              lVar44 = *(long *)(unaff_x19 + 0x1a00);
              fVar98 = fVar84;
              if (*(char *)(unaff_x21 + 0xbd) != '\0') {
                fVar98 = 1.0;
              }
              if ((lVar44 == 0) || (*(long *)(lVar44 + 0x20) == 0)) goto thunk_FUN_01f08a3c;
              fVar77 = *(float *)(unaff_x19 + 0xf0);
              fVar90 = *(float *)(lVar44 + 0x2c);
              fVar71 = (float)FUN_040cf2c8(*(long *)(lVar44 + 0x20),0);
              lVar44 = *(long *)(unaff_x25 + 0x48);
              if (lVar44 == 0) goto thunk_FUN_01f08a3c;
              if (*(uint *)(lVar44 + 0x18) <= *(uint *)(unaff_x19 + 0x340)) goto LAB_040ec2e4;
              lVar44 = lVar44 + (long)(int)*(uint *)(unaff_x19 + 0x340) * 0x60;
              fVar76 = *(float *)(lVar44 + 100);
              fVar101 = *(float *)(lVar44 + 0x68);
              fVar71 = fVar77 * (fVar72 / (float)iVar25) * fVar74 * fVar98 * fVar90 * fVar71;
            }
            fVar98 = *(float *)(unaff_x19 + 0x2f4);
            fVar72 = 0.0;
            if (*(char *)(unaff_x21 + 0xb6) == '\0') {
              if ((*(long *)(unaff_x19 + 0x1a00) == 0) ||
                 (lVar44 = *(long *)(*(long *)(unaff_x19 + 0x1a00) + 0x20), lVar44 == 0))
              goto thunk_FUN_01f08a3c;
              FUN_040cf28c(&stack0x000012a0,lVar44,0);
              fVar72 = (float)FUN_040cf0d4(&stack0x000011c0,0);
            }
            fVar74 = *(float *)(unaff_x19 + 0x35c);
            fVar101 = (fVar103 - fVar76) - fVar101;
            bVar14 = true;
            if ((fVar74 <= fVar101) && (bVar14 = false, !NAN(fVar74))) {
              bVar14 = fVar74 == -1.0;
            }
            if (!bVar14) {
              fVar101 = fVar74;
            }
            fVar74 = 1.0;
            if (uVar54 != 0) {
              fVar74 = DAT_00c926dc;
            }
            if (ABS(fVar98) + fVar71 * fVar72 * (1.0 - *(float *)(unaff_x19 + 0x1594)) <
                fVar74 * fVar101) {
              FUN_040ef438();
              uVar105 = *(undefined8 *)PTR_DAT_04589438;
              memcpy(&stack0x000012a0,__src,0x398);
              FUN_027b2770(lVar31,&stack0x000012a0,uVar105);
            }
          }
          lVar44 = *plVar2;
          if (lVar44 == 0) goto thunk_FUN_01f08a3c;
          if (*(uint *)(lVar44 + 0x18) <= *puVar1) goto LAB_040ec2e4;
          uVar40 = *(uint *)(unaff_x19 + 0x340);
          lVar44 = lVar44 + (long)(int)*puVar1 * 0x188;
          *(uint *)(lVar44 + 0x6c) = uVar40;
          *(undefined4 *)(lVar44 + 0x70) = *(undefined4 *)(unaff_x19 + 0x350);
          if ((bVar17) || ((uVar24 < 0xe && ((1 << (ulong)(uVar24 & 0x1f) & 0x2c00U) != 0)))) {
            lVar44 = *(long *)(unaff_x25 + 0x48);
            if (lVar44 == 0) goto thunk_FUN_01f08a3c;
            if (*(uint *)(lVar44 + 0x18) <= uVar40) goto LAB_040ec2e4;
            if (*(int *)(lVar44 + (long)(int)uVar40 * 0x60 + 0x24) == 1) goto LAB_040e81fc;
          }
          else {
            lVar44 = *(long *)(unaff_x25 + 0x48);
            if (lVar44 == 0) goto thunk_FUN_01f08a3c;
LAB_040e81fc:
            if (*(uint *)(lVar44 + 0x18) <= uVar40) goto LAB_040ec2e4;
            *(undefined4 *)(lVar44 + (long)(int)uVar40 * 0x60 + 0x6c) =
                 *(undefined4 *)(unaff_x19 + 0x158);
          }
          if (uVar24 != 0x200b) {
            if (uVar24 == 9) {
              if (*plVar57 == 0) goto thunk_FUN_01f08a3c;
              fVar101 = (float)FUN_040cee68(*plVar57 + 0xb0,0);
              if (*plVar57 == 0) goto thunk_FUN_01f08a3c;
              bVar19 = FUN_040d20d8(*plVar57,0);
              fVar72 = *(float *)(unaff_x19 + 0x2f4);
              fVar98 = fVar89 * fVar101 * (float)bVar19;
              fVar101 = fVar98 * (float)(int)(fVar72 / fVar98);
              if (fVar101 <= fVar72) {
                fVar101 = fVar72 + fVar98;
              }
              *(float *)(unaff_x19 + 0x2f4) = fVar101;
            }
            else {
              fVar101 = *(float *)(unaff_x19 + 0x2f0);
              if (fVar101 == 0.0) {
                fVar72 = *(float *)(unaff_x19 + 0x2f4);
                if (*(char *)(unaff_x21 + 0xb6) == '\0') {
                  fVar101 = (float)FUN_040cf0d4(&stack0x000011f0,0);
                  fVar71 = *(float *)(unaff_x19 + 0x19a8);
                  fVar98 = (float)FUN_040d1250(&stack0x000011e0,0);
                  if (*(long *)(unaff_x19 + 0x68) != 0) {
                    fVar73 = (float)FUN_040d2098(*(long *)(unaff_x19 + 0x68),0);
                    fVar72 = fVar72 + (1.0 - *(float *)(unaff_x19 + 0x1594)) *
                                      (*(float *)(unaff_x19 + 0x2ec) +
                                      fVar89 * (fVar101 * fVar71 + fVar98) +
                                      fVar70 * (fVar100 + fVar75 + fVar73));
                    goto LAB_040e82f4;
                  }
                  goto thunk_FUN_01f08a3c;
                }
                fVar101 = (float)FUN_040d1250(&stack0x000011e0,0);
                if (*plVar57 == 0) goto thunk_FUN_01f08a3c;
                fVar98 = (float)FUN_040d2098(*plVar57,0);
                fVar72 = fVar72 - (1.0 - *(float *)(unaff_x19 + 0x1594)) *
                                  (*(float *)(unaff_x19 + 0x2ec) +
                                  fVar89 * fVar101 + fVar70 * (fVar100 + fVar75 + fVar98));
                *(float *)(unaff_x19 + 0x2f4) = fVar72;
                if ((uVar27 == 0) && (uVar24 != 0x200b)) goto LAB_040e83c4;
                fVar72 = fVar72 - fVar70 * *(float *)(unaff_x21 + 0xc4);
              }
              else {
                if (*plVar57 == 0) goto thunk_FUN_01f08a3c;
                fVar72 = *(float *)(unaff_x19 + 0x2f4);
                fVar98 = (float)FUN_040d2098(*plVar57,0);
                fVar72 = fVar72 + (1.0 - *(float *)(unaff_x19 + 0x1594)) *
                                  (*(float *)(unaff_x19 + 0x2ec) +
                                  (fVar101 - fVar73) + fVar70 * (fVar75 + fVar98));
LAB_040e82f4:
                *(float *)(unaff_x19 + 0x2f4) = fVar72;
                if ((uVar27 == 0) && (uVar24 != 0x200b)) goto LAB_040e83c4;
                fVar72 = fVar72 + fVar70 * *(float *)(unaff_x21 + 0xc4);
              }
              *(float *)(unaff_x19 + 0x2f4) = fVar72;
            }
          }
LAB_040e83c4:
          lVar44 = *plVar2;
          if (lVar44 == 0) goto thunk_FUN_01f08a3c;
          uVar40 = *puVar1;
          if (*(uint *)(lVar44 + 0x18) <= uVar40) goto LAB_040ec2e4;
          *(undefined4 *)(lVar44 + (long)(int)uVar40 * 0x188 + 0x164) =
               *(undefined4 *)(unaff_x19 + 0x2f4);
          if (uVar24 == 0xd) {
            *(float *)(unaff_x19 + 0x2f4) = *(float *)(unaff_x19 + 0x2fc) + 0.0;
          }
          if ((*(int *)(unaff_x21 + 0x74) == 5) &&
             (((0xd < uVar24 || ((1 << (ulong)(uVar24 & 0x1f) & 0x2c00U) == 0)) &&
              (1 < uVar24 - 0x2028)))) {
            lVar44 = *plVar50;
            if (lVar44 == 0) goto thunk_FUN_01f08a3c;
            uVar54 = *(uint *)(unaff_x19 + 0x350);
            if (*(int *)(lVar44 + 0x18) < (int)(uVar54 + 1)) {
              if (*(int *)(*(long *)PTR_DAT_04589410 + 0xe0) == 0) {
                thunk_FUN_01ee6d7c();
              }
              FUN_02421ccc(plVar50,uVar54 + 1,1,*(undefined8 *)PTR_DAT_04589400);
              lVar44 = *plVar50;
              if (lVar44 == 0) goto thunk_FUN_01f08a3c;
              uVar54 = *(uint *)(unaff_x19 + 0x350);
            }
            if (*(uint *)(lVar44 + 0x18) <= uVar54) goto LAB_040ec2e4;
            lVar62 = lVar44 + (long)(int)uVar54 * 0x14;
            *(undefined4 *)(lVar62 + 0x28) = *(undefined4 *)(unaff_x19 + 0x19c8);
            fVar101 = *(float *)(unaff_x19 + 0x378);
            if (*(float *)(lVar62 + 0x30) <= *(float *)(unaff_x19 + 0x378)) {
              fVar101 = *(float *)(lVar62 + 0x30);
            }
            *(float *)(lVar62 + 0x30) = fVar101;
            if (*(char *)(unaff_x19 + 0x37c) != '\0') {
              *(undefined1 *)(unaff_x19 + 0x37c) = 0;
              *(undefined4 *)(lVar44 + (long)(int)uVar54 * 0x14 + 0x20) =
                   *(undefined4 *)(unaff_x19 + 0x324);
            }
            uVar40 = *puVar1;
            *(uint *)(lVar44 + (long)(int)uVar54 * 0x14 + 0x24) = uVar40;
          }
          if (((uVar24 < 0xc) && ((1 << (ulong)(uVar24 & 0x1f) & 0xc08U) != 0)) ||
             ((uVar24 - 0x2028 < 2 || (((bool)(bVar17 & uVar24 == 0x2d) || (uVar40 == uVar47)))))) {
            if (0.0 < *(float *)(unaff_x19 + 0x2e0)) {
              fVar101 = *(float *)(unaff_x19 + 0x338);
              fVar72 = *(float *)(unaff_x19 + 0x15ac);
              if (*(int *)(*(long *)Method_Oculus_Platform_Message<LeaderboardList>__ctor__ + 0xe0)
                  == 0) {
                thunk_FUN_01ee6d7c();
              }
              fVar101 = fVar101 - fVar72;
              if (((fVar96 < ABS(fVar101)) && (*(char *)(unaff_x19 + 0x2e8) == '\0')) &&
                 (*(char *)(unaff_x19 + 0x37c) != '\x01')) {
                uVar22 = *(undefined4 *)(unaff_x19 + 0x328);
                uVar26 = *(undefined4 *)(unaff_x19 + 0x324);
                if (*(int *)(*(long *)PTR_DAT_045893f0 + 0xe0) == 0) {
                  thunk_FUN_01ee6d7c();
                }
                FUN_040fdcc4(fVar101,uVar22,uVar26,unaff_x25,0);
                *(float *)(unaff_x19 + 0x378) = *(float *)(unaff_x19 + 0x378) - fVar101;
                *(float *)(unaff_x19 + 0x2e0) = fVar101 + *(float *)(unaff_x19 + 0x2e0);
                plVar60 = (long *)Method_Unity_Collections_NativeArray<byte>_ToArray__;
                if (*(int *)(unaff_x19 + 0xad8) == *(int *)(unaff_x19 + 0x340)) {
                  FUN_027b2888(&stack0x000012a0,lVar31,*(undefined8 *)PTR_DAT_04589430);
                  memcpy(&stack0x00000230,&stack0x000012a0,0x398);
                  memcpy(__src,&stack0x00000230,0x398);
                  thunk_FUN_01f51358(unaff_x19 + 0xb28,0);
                  *(float *)(unaff_x19 + 0xaf0) = fVar101 + *(float *)(unaff_x19 + 0xaf0);
                  *(float *)(unaff_x19 + 0xb24) = fVar101 + *(float *)(unaff_x19 + 0xb24);
                  uVar105 = *(undefined8 *)PTR_DAT_04589438;
                  memcpy(&stack0x000012a0,__src,0x398);
                  FUN_027b2770(lVar31,&stack0x000012a0,uVar105);
                }
              }
            }
            fVar72 = *(float *)(unaff_x19 + 0x2e0);
            *(undefined1 *)(unaff_x19 + 0x37c) = 0;
            fVar98 = *(float *)(unaff_x19 + 0x33c) - fVar72;
            fVar101 = *(float *)(unaff_x19 + 0x378);
            if (fVar98 <= *(float *)(unaff_x19 + 0x378)) {
              fVar101 = fVar98;
            }
            *(float *)(unaff_x19 + 0x378) = fVar101;
            fVar71 = *(float *)(unaff_x19 + 0x338);
            if (!bVar16) {
              fVar99 = fVar101;
            }
            if ((*(char *)(unaff_x21 + 0xe8) != '\0') &&
               ((*(int *)(unaff_x21 + 0xd8) <= (int)*puVar1 ||
                (*(int *)(unaff_x21 + 0xe0) <= *(int *)(unaff_x19 + 0x340))))) {
              bVar16 = true;
            }
            lVar44 = *(long *)(unaff_x25 + 0x48);
            if (lVar44 == 0) goto thunk_FUN_01f08a3c;
            uVar40 = *(uint *)(unaff_x19 + 0x340);
            if (*(uint *)(lVar44 + 0x18) <= uVar40) goto LAB_040ec2e4;
            iVar25 = *(int *)(unaff_x19 + 0x328);
            lVar62 = lVar44 + (long)(int)uVar40 * 0x60;
            *(int *)(lVar62 + 0x38) = iVar25;
            uVar54 = *(uint *)(unaff_x19 + 0x328);
            if (iVar25 <= (int)*(uint *)(unaff_x19 + 0x330)) {
              uVar54 = *(uint *)(unaff_x19 + 0x330);
            }
            *(uint *)(unaff_x19 + 0x330) = uVar54;
            *(uint *)(lVar62 + 0x3c) = uVar54;
            iVar29 = *(int *)(unaff_x19 + 0x324);
            *(int *)(unaff_x19 + 0x32c) = iVar29;
            *(int *)(lVar62 + 0x40) = iVar29;
            iVar21 = *(int *)(unaff_x19 + 0x330);
            if ((int)uVar54 <= *(int *)(unaff_x19 + 0x334)) {
              iVar21 = *(int *)(unaff_x19 + 0x334);
            }
            *(int *)(unaff_x19 + 0x334) = iVar21;
            *(int *)(lVar62 + 0x44) = iVar21;
            *(int *)(lVar62 + 0x24) = (iVar29 - iVar25) + 1;
            *(undefined4 *)(lVar62 + 0x28) = *(undefined4 *)(unaff_x19 + 0x344);
            *(undefined4 *)(lVar62 + 0x30) = *(undefined4 *)(unaff_x19 + 0x348);
            lVar62 = *plVar2;
            if (lVar62 == 0) goto thunk_FUN_01f08a3c;
            if (*(uint *)(lVar62 + 0x18) <= uVar54) goto LAB_040ec2e4;
            uVar22 = *(undefined4 *)(lVar62 + (long)(int)uVar54 * 0x188 + 0x124);
            lVar44 = lVar44 + (long)(int)uVar40 * 0x60;
            *(float *)(lVar44 + 0x74) = fVar98;
            *(undefined4 *)(lVar44 + 0x70) = uVar22;
            lVar44 = *(long *)(unaff_x25 + 0x48);
            if (lVar44 == 0) goto thunk_FUN_01f08a3c;
            if (*(uint *)(lVar44 + 0x18) <= *(uint *)(unaff_x19 + 0x340)) goto LAB_040ec2e4;
            lVar62 = *plVar2;
            if (lVar62 == 0) goto thunk_FUN_01f08a3c;
            if (*(uint *)(lVar62 + 0x18) <= *(uint *)(unaff_x19 + 0x334)) goto LAB_040ec2e4;
            uVar22 = *(undefined4 *)
                      (lVar62 + (long)(int)*(uint *)(unaff_x19 + 0x334) * 0x188 + 0x130);
            fVar71 = fVar71 - fVar72;
            lVar44 = lVar44 + (long)(int)*(uint *)(unaff_x19 + 0x340) * 0x60;
            *(float *)(lVar44 + 0x7c) = fVar71;
            *(undefined4 *)(lVar44 + 0x78) = uVar22;
            lVar44 = *(long *)(unaff_x25 + 0x48);
            if (lVar44 == 0) goto thunk_FUN_01f08a3c;
            uVar40 = *(uint *)(unaff_x19 + 0x340);
            if (*(uint *)(lVar44 + 0x18) <= uVar40) goto LAB_040ec2e4;
            lVar62 = lVar44 + (long)(int)uVar40 * 0x60;
            *(float *)(lVar62 + 0x48) = *(float *)(lVar62 + 0x78) - fVar89 * fVar66;
            *(float *)(lVar62 + 0x60) = fStack0000000000000174;
            if (*(int *)(lVar62 + 0x24) == 1) {
              *(undefined4 *)(lVar44 + (long)(int)uVar40 * 0x60 + 0x6c) =
                   *(undefined4 *)(unaff_x19 + 0x158);
            }
            if (*plVar57 == 0) goto thunk_FUN_01f08a3c;
            fVar101 = (float)FUN_040d2098(*plVar57,0);
            lVar44 = *plVar2;
            if (lVar44 == 0) goto thunk_FUN_01f08a3c;
            lVar62 = (long)(int)*(uint *)(unaff_x19 + 0x334);
            if (*(uint *)(lVar44 + 0x18) <= *(uint *)(unaff_x19 + 0x334)) goto LAB_040ec2e4;
            lVar33 = *(long *)(unaff_x25 + 0x48);
            if (lVar33 == 0) goto thunk_FUN_01f08a3c;
            uVar40 = *(uint *)(unaff_x19 + 0x340);
            if (((*(char *)(lVar44 + lVar62 * 0x188 + 0x1a0) == '\0') &&
                (lVar62 = (long)(int)*(uint *)(unaff_x19 + 0x32c),
                *(uint *)(lVar44 + 0x18) <= *(uint *)(unaff_x19 + 0x32c))) ||
               (uVar54 = (uint)*(undefined8 *)(lVar33 + 0x18), uVar54 <= uVar40)) goto LAB_040ec2e4;
            fVar75 = (1.0 - *(float *)(unaff_x19 + 0x1594)) *
                     (*(float *)(unaff_x19 + 0x2ec) + fVar70 * (fVar100 + fVar75 + fVar101));
            fVar101 = -fVar75;
            if (*(char *)(unaff_x21 + 0xb6) != '\0') {
              fVar101 = fVar75;
            }
            *(float *)(lVar33 + (long)(int)uVar40 * 0x60 + 0x5c) =
                 *(float *)(lVar44 + lVar62 * 0x188 + 0x164) + fVar101;
            if (uVar54 <= uVar40) goto LAB_040ec2e4;
            lVar33 = lVar33 + (long)(int)uVar40 * 0x60;
            *(float *)(lVar33 + 0x54) = 0.0 - *(float *)(unaff_x19 + 0x2e0);
            *(float *)(lVar33 + 0x58) = fVar98;
            *(float *)(lVar33 + 0x4c) = fVar64 * fVar65 + (fVar71 - fVar98);
            *(float *)(lVar33 + 0x50) = fVar71;
            if (0x2c < (int)uVar24) {
              if ((uVar24 - 0x2028 < 2) || (uVar24 == 0x2d)) goto LAB_040e89b0;
              goto LAB_040e8bc4;
            }
            if (uVar24 - 10 < 2) {
LAB_040e89b0:
              FUN_040ef438();
              uVar27 = *(uint *)(unaff_x19 + 0x324);
              iVar25 = *(int *)(unaff_x19 + 0x340) + 1;
              *(int *)(unaff_x19 + 0x340) = iVar25;
              *(uint *)(unaff_x19 + 0x328) = uVar27 + 1;
              *(undefined8 *)(unaff_x19 + 0x344) = 0;
              if (*(long *)(unaff_x25 + 0x48) != 0) {
                if (*(int *)(*(long *)(unaff_x25 + 0x48) + 0x18) <= iVar25) {
                  if (*(int *)(*(long *)PTR_DAT_045893f0 + 0xe0) == 0) {
                    thunk_FUN_01ee6d7c();
                  }
                  FUN_040fde44(iVar25,unaff_x25,0);
                  uVar27 = *puVar1;
                }
                lVar44 = *plVar2;
                if (lVar44 != 0) {
                  if (uVar27 < *(uint *)(lVar44 + 0x18)) {
                    fVar101 = *(float *)(lVar44 + (long)(int)uVar27 * 0x188 + 0x158);
                    if (*(float *)(unaff_x19 + 0x2e4) == DAT_00c927ac) {
                      if ((uVar24 == 0x2029) || (fVar75 = 0.0, uVar24 == 10)) {
                        fVar75 = *(float *)(unaff_x21 + 0xcc);
                      }
                      uVar38 = 0;
                      fVar75 = fVar101 + (0.0 - *(float *)(unaff_x19 + 0x33c)) +
                               fVar64 * (fVar65 + *(float *)(unaff_x19 + 0x15b0)) +
                               fVar70 * (*(float *)(unaff_x21 + 200) + fVar75) +
                               *(float *)(unaff_x19 + 0x2e0);
                    }
                    else {
                      if ((uVar24 == 0x2029) || (fVar75 = 0.0, uVar24 == 10)) {
                        fVar75 = *(float *)(unaff_x21 + 0xcc);
                      }
                      uVar38 = 1;
                      fVar75 = *(float *)(unaff_x19 + 0x2e0) +
                               *(float *)(unaff_x19 + 0x2e4) +
                               fVar70 * (*(float *)(unaff_x21 + 200) + fVar75);
                    }
                    *(float *)(unaff_x19 + 0x2e0) = fVar75;
                    *(float *)(unaff_x19 + 0x15ac) = fVar101;
                    *(undefined1 *)(unaff_x19 + 0x2e8) = uVar38;
                    *(undefined8 *)(unaff_x19 + 0x338) = uVar59;
                    *(float *)(unaff_x19 + 0x2f4) =
                         *(float *)(unaff_x19 + 0x2f8) + 0.0 + *(float *)(unaff_x19 + 0x2fc);
                    FUN_040ef438();
                    FUN_040ef438();
                    *(int *)(unaff_x19 + 0x324) = *(int *)(unaff_x19 + 0x324) + 1;
                    goto LAB_040e8b8c;
                  }
                  goto LAB_040ec2e4;
                }
              }
              goto thunk_FUN_01f08a3c;
            }
            if (uVar24 == 3) {
              if (*(long *)(unaff_x19 + 0x20) != 0) {
                uVar23 = (uint)*(undefined8 *)(*(long *)(unaff_x19 + 0x20) + 0x18);
                goto LAB_040e8bc4;
              }
              goto thunk_FUN_01f08a3c;
            }
          }
          else {
            lVar44 = *plVar2;
            if (lVar44 == 0) goto thunk_FUN_01f08a3c;
          }
LAB_040e8bc4:
          uVar40 = *puVar1;
          if (*(uint *)(lVar44 + 0x18) <= uVar40) goto LAB_040ec2e4;
          if (*(char *)(lVar44 + (long)(int)uVar40 * 0x188 + 0x1a0) != '\0') {
            lVar44 = lVar44 + (long)(int)uVar40 * 0x188;
            uVar30 = *(ulong *)(unaff_x19 + 0x360);
            uVar35 = *(ulong *)(lVar44 + 0x124);
            *(ulong *)(unaff_x19 + 0x360) =
                 uVar30 ^ (uVar30 ^ uVar35) &
                          ~CONCAT44(-(uint)((float)(uVar30 >> 0x20) < (float)(uVar35 >> 0x20)),
                                    -(uint)((float)uVar30 < (float)uVar35));
            uVar30 = *(ulong *)(unaff_x19 + 0x368);
            uVar35 = *(ulong *)(lVar44 + 0x130);
            *(ulong *)(unaff_x19 + 0x368) =
                 uVar30 ^ (uVar30 ^ uVar35) &
                          ~CONCAT44(-(uint)((float)(uVar35 >> 0x20) < (float)(uVar30 >> 0x20)),
                                    -(uint)((float)uVar35 < (float)uVar30));
          }
          if ((cVar39 != '\0') ||
             ((*(uint *)(unaff_x21 + 0x74) < 7 &&
              ((1 << (ulong)(*(uint *)(unaff_x21 + 0x74) & 0x1f) & 0x4aU) != 0)))) {
            if ((uVar27 == 0) && (((uVar24 != 0x2d && (uVar24 != 0x200b)) && (uVar24 != 0xad)))) {
              if (*(char *)(unaff_x19 + 0x37d) == '\0') {
LAB_040e8cd4:
                if (*(int *)(*(long *)PTR_DAT_045893f0 + 0xe0) == 0) {
                  thunk_FUN_01ee6d7c();
                }
                uVar30 = FUN_040fe670(uVar24,0);
                if ((uVar30 & 1) == 0) {
LAB_040e8d1c:
                  if (*(int *)(*(long *)PTR_DAT_045893f0 + 0xe0) == 0) {
                    thunk_FUN_01ee6d7c();
                  }
                  uVar30 = FUN_040fe6e0(uVar24,0);
                  if ((uVar30 & 1) == 0) goto LAB_040e8e04;
                  if (lVar43 == 0) goto thunk_FUN_01f08a3c;
                }
                else {
                  if ((lVar43 == 0) || (lVar44 = FUN_04101164(lVar43,0), lVar44 == 0))
                  goto thunk_FUN_01f08a3c;
                  if (*(char *)(lVar44 + 0x28) != '\0') goto LAB_040e8d1c;
                }
                lVar44 = FUN_04101164(lVar43,0);
                if ((lVar44 == 0) || (lVar44 = FUN_0410356c(lVar44,0), lVar44 == 0))
                goto thunk_FUN_01f08a3c;
                uVar30 = FUN_02eed3b4(lVar44,uVar24,*(undefined8 *)PTR_DAT_0457a818);
                if ((int)*puVar1 < (int)uVar47) {
                  lVar44 = FUN_04101164(lVar43,0);
                  if (lVar44 == 0) goto thunk_FUN_01f08a3c;
                  lVar44 = FUN_0410386c(lVar44,0);
                  lVar62 = *plVar2;
                  if (lVar62 == 0) goto thunk_FUN_01f08a3c;
                  if (*(uint *)(lVar62 + 0x18) <= *puVar1 + 1) goto LAB_040ec2e4;
                  if (lVar44 == 0) goto thunk_FUN_01f08a3c;
                  uVar35 = FUN_02eed3b4(lVar44,*(undefined2 *)
                                                (lVar62 + (long)(int)(*puVar1 + 1) * 0x188 + 0x20),
                                        *(undefined8 *)PTR_DAT_0457a818);
                  if ((uVar30 & 1) != 0)
                  goto UnityEngine_UIElements_FocusController__GetFocusableParentForPointerEvent;
                  if ((uVar35 & 1) == 0) goto LAB_040e930c;
                  if (bVar20 == 0) goto LAB_040e8e8c;
                }
                else {
                  if ((uVar30 & 1) == 0) {
LAB_040e930c:
                    FUN_040ef438();
                    bVar20 = 0;
                    goto LAB_040e8e9c;
                  }
UnityEngine_UIElements_FocusController__GetFocusableParentForPointerEvent:
                  if (uVar28 != uVar58 || ((bVar20 ^ 0xff) & 1) != 0) goto LAB_040e8e9c;
                }
                if (uVar27 != 0) {
                  FUN_040ef438();
                }
              }
              else {
LAB_040e8e04:
                if (bVar20 == 0) {
LAB_040e8e8c:
                  bVar20 = 0;
                  goto LAB_040e8e9c;
                }
                if ((uVar27 != 0 && uVar24 != 0xa0) || (!bVar18 && uVar24 == 0xad)) {
                  FUN_040ef438();
                }
              }
              FUN_040ef438();
              bVar20 = 1;
            }
            else {
              if (*(char *)(unaff_x19 + 0x37d) == '\x01') goto LAB_040e8e04;
              if (((uVar24 - 0x2007 < 0x29) &&
                  ((1L << ((ulong)(uVar24 - 0x2007) & 0x3f) & 0x10000000401U) != 0)) ||
                 ((uVar24 == 0xa0 || (uVar24 == 0x2060)))) goto LAB_040e8cd4;
              FUN_040ef438();
              bVar20 = 0;
              *(undefined4 *)(unaff_x19 + 0x11e0) = 0xffffffff;
            }
          }
LAB_040e8e9c:
          FUN_040ef438();
          *(int *)(unaff_x19 + 0x324) = *(int *)(unaff_x19 + 0x324) + 1;
          uVar105 = uVar32;
          fVar101 = fVar89;
          goto LAB_040e58d0;
        }
      }
      FUN_040f6b2c(1);
      *(undefined8 *)(unaff_x19 + 0x60) = 0;
      *(undefined1 *)(unaff_x19 + 0x15a8) = 1;
      goto LAB_040e4eec;
    }
  }
  puVar12 = PTR_DAT_04589488;
  if (*(int *)(*(long *)puVar11 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  FUN_0403f2cc(*(undefined8 *)puVar12,0);
  *(undefined1 *)(unaff_x19 + 0x15a8) = 1;
  goto LAB_040e4eec;
LAB_040e9f88:
  do {
    uVar23 = uVar27 - 1;
    if (*(uint *)(lVar31 + 0x18) <= uVar23) goto LAB_040ec2e4;
    lVar62 = (long)(int)uVar23;
    lVar43 = lVar31 + lVar62 * 0x188;
    lVar44 = *(long *)(lVar43 + 0x40);
    uVar8 = *(ushort *)(lVar43 + 0x20);
    if (*(int *)(*(long *)Method_System_IO_CStreamReader_Read__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    bVar20 = FUN_034f9bb4(uVar8,0);
    if (*(uint *)(lVar31 + 0x18) <= uVar23) goto LAB_040ec2e4;
    lVar43 = *(long *)(unaff_x25 + 0x48);
    uVar24 = (uint)uVar8;
    if (lVar43 == 0) goto thunk_FUN_01f08a3c;
    uVar28 = *(uint *)(lVar31 + lVar62 * 0x188 + 0x6c);
    if (*(uint *)(lVar43 + 0x18) <= uVar28) goto LAB_040ec2e4;
    lVar33 = (long)(int)uVar28;
    lVar43 = lVar43 + lVar33 * 0x60;
    uVar40 = *(uint *)(lVar43 + 0x40);
    uVar58 = *(uint *)(lVar43 + 0x6c);
    iVar6 = *(int *)(lVar43 + 0x20);
    iVar21 = *(int *)(lVar43 + 0x28);
    iVar29 = *(int *)(lVar43 + 0x2c);
    uVar54 = *(uint *)(lVar43 + 0x44);
    lVar52 = (long)(int)uVar54;
    fVar83 = *(float *)(lVar43 + 0x50);
    fVar87 = *(float *)(lVar43 + 0x58);
    fVar67 = *(float *)(lVar43 + 0x5c);
    fVar68 = *(float *)(lVar43 + 0x60);
    fVar96 = *(float *)(lVar43 + 100);
    fVar92 = *(float *)(lVar43 + 0x70);
    fVar99 = *(float *)(lVar43 + 0x74);
    fVar69 = *(float *)(lVar43 + 0x78);
    fVar103 = *(float *)(lVar43 + 0x7c);
    if ((int)uVar58 < 0x421) {
      if ((int)uVar58 < 0x209) {
        if ((int)uVar58 < 0x111) {
          switch(uVar58) {
          case 0x101:
            goto switchD_040ea0e0_caseD_1001;
          case 0x102:
            goto switchD_040ea0e0_caseD_1002;
          case 0x103:
          case 0x105:
          case 0x106:
          case 0x107:
            break;
          case 0x104:
            goto switchD_040ea0e0_caseD_1004;
          case 0x108:
            goto switchD_040ea0e0_caseD_1008;
          default:
            if (uVar58 == 0x110) goto switchD_040ea0e0_caseD_1008;
          }
        }
        else {
          switch(uVar58) {
          case 0x201:
            goto switchD_040ea0e0_caseD_1001;
          case 0x202:
            goto switchD_040ea0e0_caseD_1002;
          case 0x203:
          case 0x205:
          case 0x206:
          case 0x207:
            break;
          case 0x204:
            goto switchD_040ea0e0_caseD_1004;
          case 0x208:
            goto switchD_040ea0e0_caseD_1008;
          default:
            if (uVar58 == 0x120) goto LAB_040ea244;
          }
        }
      }
      else if ((int)uVar58 < 0x405) {
        if ((int)uVar58 < 0x401) {
          if (uVar58 == 0x210) goto switchD_040ea0e0_caseD_1008;
          if (uVar58 == 0x220) goto LAB_040ea244;
        }
        else {
          if (uVar58 == 0x401) goto switchD_040ea0e0_caseD_1001;
          if (uVar58 == 0x402) goto switchD_040ea0e0_caseD_1002;
          if (uVar58 == 0x404) goto switchD_040ea0e0_caseD_1004;
        }
      }
      else {
        if ((uVar58 == 0x408) || (uVar58 == 0x410)) goto switchD_040ea0e0_caseD_1008;
        if (uVar58 == 0x420) goto LAB_040ea244;
      }
      goto switchD_040ea0e0_caseD_1003;
    }
    if (0x1008 < (int)uVar58) {
      if ((int)uVar58 < 0x2005) {
        if (0x2000 < (int)uVar58) {
          if (uVar58 == 0x2001) goto switchD_040ea0e0_caseD_1001;
          if (uVar58 == 0x2002) goto switchD_040ea0e0_caseD_1002;
          if (uVar58 == 0x2004) goto switchD_040ea0e0_caseD_1004;
          goto switchD_040ea0e0_caseD_1003;
        }
        if (uVar58 != 0x1010) {
          uVar41 = 0x1020;
          goto LAB_040ea204;
        }
      }
      else if ((uVar58 != 0x2008) && (uVar58 != 0x2010)) {
        uVar41 = 0x2020;
LAB_040ea204:
        if (uVar58 != uVar41) goto switchD_040ea0e0_caseD_1003;
LAB_040ea244:
        fVar67 = fVar92 + fVar69;
        goto LAB_040ea258;
      }
      goto switchD_040ea0e0_caseD_1008;
    }
    if ((int)uVar58 < 0x811) {
      switch(uVar58) {
      case 0x801:
        goto switchD_040ea0e0_caseD_1001;
      case 0x802:
        goto switchD_040ea0e0_caseD_1002;
      case 0x803:
      case 0x805:
      case 0x806:
      case 0x807:
        break;
      case 0x804:
        goto switchD_040ea0e0_caseD_1004;
      case 0x808:
switchD_040ea0e0_caseD_1008:
        if ((int)uVar23 <= (int)uVar54) {
          if (uVar24 < 0xad) {
            if ((uVar24 != 3) && (uVar24 != 10)) goto LAB_040ea4f0;
          }
          else if ((uVar24 != 0xad) && ((uVar24 != 0x200b && (uVar24 != 0x2060)))) {
LAB_040ea4f0:
            if (*(uint *)(lVar31 + 0x18) <= uVar40) goto LAB_040ec2e4;
            uVar9 = *(undefined2 *)(lVar31 + (long)(int)uVar40 * 0x188 + 0x20);
            if (*(int *)(*(long *)Method_System_IO_CStreamReader_Read__ + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
              plVar57 = (long *)Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__;
            }
            uVar37 = FUN_034fd1a8(uVar9,0);
            if ((uVar37 & 1) == 0) {
              bVar17 = (int)uVar28 < *(int *)(unaff_x19 + 0x340);
            }
            else {
              bVar17 = false;
            }
            if ((fVar67 <= fVar68) && (!bVar17 && (uVar58 >> 4 & 1) == 0)) {
              fStack0000000000000158 = fVar96;
              if (*(char *)(unaff_x21 + 0xb6) != '\0') {
                fStack0000000000000158 = fVar68 + fVar96;
              }
              goto LAB_040ea25c;
            }
            if ((uVar27 == 1) || (uVar28 != uVar47)) {
              cVar39 = *(char *)(unaff_x21 + 0xb6);
            }
            else {
              cVar39 = *(char *)(unaff_x21 + 0xb6);
              if (uVar23 != *(uint *)(unaff_x21 + 0xe4)) {
                iVar29 = (iVar29 - iVar6) - (uStack0000000000000094 & 1);
                fVar96 = -fVar67;
                if (cVar39 != '\0') {
                  fVar96 = fVar67;
                }
                if (iVar29 < 1) {
                  fVar67 = 1.0;
                }
                else {
                  fVar67 = *(float *)(unaff_x21 + 0x7c);
                }
                if (iVar29 < 2) {
                  iVar29 = 1;
                }
                fVar68 = fVar68 + fVar96;
                if (uVar24 == 9) {
LAB_040ec014:
                  if (cVar39 != '\0') {
                    fVar68 = fVar68 * (1.0 - fVar67);
                    fVar96 = (float)iVar29;
FUN_040ec050:
                    fStack0000000000000158 = fStack0000000000000158 - fVar68 / fVar96;
                    break;
                  }
                  fVar96 = (float)iVar29;
                  fVar68 = fVar68 * (1.0 - fVar67);
                }
                else {
                  if (uVar24 != 0xa0) {
                    if (*(int *)(*(long *)Method_System_IO_CStreamReader_Read__ + 0xe0) == 0) {
                      thunk_FUN_01ee6d7c();
                    }
                    uVar37 = FUN_034fd62c(uVar24,0);
                    cVar39 = *(char *)(unaff_x21 + 0xb6);
                    if ((uVar37 & 1) != 0) goto LAB_040ec014;
                  }
                  fVar68 = fVar68 * fVar67;
                  fVar96 = (float)(int)((iVar6 - (~uStack0000000000000094 & 1)) + iVar21);
                  if (cVar39 != '\0') goto FUN_040ec050;
                }
                fStack0000000000000158 = fStack0000000000000158 + fVar68 / fVar96;
                uStack0000000000000148 =
                     CONCAT44((float)((ulong)uStack0000000000000148 >> 0x20) + 0.0,
                              (float)uStack0000000000000148 + 0.0);
                break;
              }
            }
            fStack0000000000000158 = fVar96;
            if (cVar39 != '\0') {
              fStack0000000000000158 = fVar68 + fVar96;
            }
            if (*(int *)(*(long *)Method_System_IO_CStreamReader_Read__ + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            uStack0000000000000094 = FUN_034fd62c(uVar24,0);
            uStack0000000000000148 = 0;
          }
        }
        break;
      default:
        if (uVar58 == 0x810) goto switchD_040ea0e0_caseD_1008;
      }
    }
    else {
      switch(uVar58) {
      case 0x1001:
switchD_040ea0e0_caseD_1001:
        if (*(char *)(unaff_x21 + 0xb6) == '\0') {
          fStack0000000000000158 = fVar96 + 0.0;
        }
        else {
          fStack0000000000000158 = 0.0 - fVar67;
        }
        break;
      case 0x1002:
switchD_040ea0e0_caseD_1002:
LAB_040ea258:
        fStack0000000000000158 = (fVar96 + fVar68 * 0.5) - fVar67 * 0.5;
        break;
      case 0x1003:
      case 0x1005:
      case 0x1006:
      case 0x1007:
        goto switchD_040ea0e0_caseD_1003;
      case 0x1004:
switchD_040ea0e0_caseD_1004:
        fStack0000000000000158 = (fVar68 + fVar96) - fVar67;
        if (*(char *)(unaff_x21 + 0xb6) != '\0') {
          fStack0000000000000158 = fVar68 + fVar96;
        }
        break;
      case 0x1008:
        goto switchD_040ea0e0_caseD_1008;
      default:
        if (uVar58 == 0x820) goto LAB_040ea244;
        goto switchD_040ea0e0_caseD_1003;
      }
LAB_040ea25c:
      uStack0000000000000148 = 0;
    }
switchD_040ea0e0_caseD_1003:
    uVar58 = (uint)*(undefined8 *)(lVar31 + 0x18);
    if (uVar58 <= uVar23) goto LAB_040ec2e4;
    lVar43 = lVar31 + lVar62 * 0x188;
    fVar96 = fStack0000000000000120 + fStack0000000000000158;
    fVar67 = (float)uStack0000000000000118 + (float)uStack0000000000000148;
    fVar68 = (float)((ulong)uStack0000000000000118 >> 0x20) +
             (float)((ulong)uStack0000000000000148 >> 0x20);
    if (*(char *)(lVar43 + 0x1a0) == '\0') goto LAB_040eaaf8;
    cVar39 = *(char *)(lVar31 + lVar62 * 0x188 + 0x28);
    if (cVar39 != '\x01') goto UnityEngine_UIElements_PanelSettings__set_scale;
    fVar66 = fmodf(*(float *)(unaff_x21 + 0xfc) * (float)(int)uVar28,1.0);
    plVar57 = (long *)Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__;
    switch(*(undefined4 *)(unaff_x21 + 0xf4)) {
    case 0:
      fVar66 = 1.0;
      lVar46 = lVar31 + lVar62 * 0x188;
      *(undefined4 *)(lVar46 + 0xbc) = 0;
      *(undefined4 *)(lVar46 + 0x94) = 0;
      *(undefined4 *)(lVar46 + 0xe4) = 0x3f800000;
      break;
    case 1:
      fVar103 = *(float *)(lVar31 + lVar62 * 0x188 + 0xa0);
      if (*(int *)(unaff_x21 + 0x70) == 0x208) {
        lVar46 = lVar31 + lVar62 * 0x188;
        fVar69 = (fStack0000000000000158 + fVar103) - *(float *)(unaff_x19 + 0x360);
        fVar103 = *(float *)(unaff_x19 + 0x368) - *(float *)(unaff_x19 + 0x360);
        goto LAB_040ea408;
      }
      lVar46 = lVar31 + lVar62 * 0x188;
      fVar69 = fVar69 - fVar92;
      *(float *)(lVar46 + 0xbc) = fVar66 + (fVar103 - fVar92) / fVar69;
      *(float *)(lVar46 + 0x94) = fVar66 + (*(float *)(lVar46 + 0x78) - fVar92) / fVar69;
      *(float *)(lVar46 + 0xe4) = fVar66 + (*(float *)(lVar46 + 200) - fVar92) / fVar69;
      fVar66 = fVar66 + (*(float *)(lVar46 + 0xf0) - fVar92) / fVar69;
      break;
    case 2:
      lVar46 = lVar31 + lVar62 * 0x188;
      fVar103 = *(float *)(unaff_x19 + 0x368) - *(float *)(unaff_x19 + 0x360);
      fVar69 = (fStack0000000000000158 + *(float *)(lVar46 + 0xa0)) - *(float *)(unaff_x19 + 0x360);
LAB_040ea408:
      *(float *)(lVar46 + 0xbc) = fVar66 + fVar69 / fVar103;
      *(float *)(lVar46 + 0x94) =
           fVar66 + ((fStack0000000000000158 + *(float *)(lVar46 + 0x78)) -
                    *(float *)(unaff_x19 + 0x360)) /
                    (*(float *)(unaff_x19 + 0x368) - *(float *)(unaff_x19 + 0x360));
      *(float *)(lVar46 + 0xe4) =
           fVar66 + ((fStack0000000000000158 + *(float *)(lVar46 + 200)) -
                    *(float *)(unaff_x19 + 0x360)) /
                    (*(float *)(unaff_x19 + 0x368) - *(float *)(unaff_x19 + 0x360));
      fVar66 = fVar66 + ((fStack0000000000000158 + *(float *)(lVar46 + 0xf0)) -
                        *(float *)(unaff_x19 + 0x360)) /
                        (*(float *)(unaff_x19 + 0x368) - *(float *)(unaff_x19 + 0x360));
      break;
    case 3:
      switch(*(undefined4 *)(unaff_x21 + 0xf8)) {
      case 0:
        lVar46 = lVar31 + lVar62 * 0x188;
        *(undefined4 *)(lVar46 + 0xc0) = 0;
        *(undefined4 *)(lVar46 + 0x98) = 0x3f800000;
        *(undefined4 *)(lVar46 + 0xe8) = 0;
        *(undefined4 *)(lVar46 + 0x110) = 0x3f800000;
        break;
      case 1:
        fVar103 = fVar103 - fVar99;
        lVar46 = lVar31 + lVar62 * 0x188;
        fVar69 = fVar66 + (*(float *)(lVar46 + 0xa4) - fVar99) / fVar103;
        fVar103 = fVar66 + (*(float *)(lVar46 + 0x7c) - fVar99) / fVar103;
        *(float *)(lVar46 + 0xc0) = fVar69;
        *(float *)(lVar46 + 0x98) = fVar103;
        *(float *)(lVar46 + 0xe8) = fVar69;
        *(float *)(lVar46 + 0x110) = fVar103;
        break;
      case 2:
        lVar46 = lVar31 + lVar62 * 0x188;
        fVar69 = fVar66 + (*(float *)(lVar46 + 0xa4) - *(float *)(unaff_x19 + 0x364)) /
                          (*(float *)(unaff_x19 + 0x36c) - *(float *)(unaff_x19 + 0x364));
        *(float *)(lVar46 + 0xc0) = fVar69;
        fVar103 = *(float *)(unaff_x19 + 0x364);
        fVar92 = *(float *)(unaff_x19 + 0x36c);
        *(float *)(lVar46 + 0xe8) = fVar69;
        fVar69 = fVar66 + (*(float *)(lVar46 + 0x7c) - fVar103) / (fVar92 - fVar103);
        *(float *)(lVar46 + 0x98) = fVar69;
        *(float *)(lVar46 + 0x110) = fVar69;
        break;
      case 3:
        if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<byte>_ToArray__ + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        FUN_0403ea2c(*(undefined8 *)PTR_DAT_04579e98,0);
        uVar58 = (uint)*(undefined8 *)(lVar31 + 0x18);
      }
      if (uVar58 <= uVar23) goto LAB_040ec2e4;
      lVar46 = lVar31 + lVar62 * 0x188;
      fVar69 = *(float *)(lVar46 + 0x168);
      fVar103 = (1.0 - (*(float *)(lVar46 + 0xc0) + *(float *)(lVar46 + 0x98)) * fVar69) * 0.5;
      fVar92 = fVar66 + *(float *)(lVar46 + 0xc0) * fVar69 + fVar103;
      fVar66 = fVar66 + *(float *)(lVar46 + 0x98) * fVar69 + fVar103;
      *(float *)(lVar46 + 0xbc) = fVar92;
      *(float *)(lVar46 + 0x94) = fVar92;
      *(float *)(lVar46 + 0xe4) = fVar66;
      break;
    default:
      goto switchD_040ea340_default;
    }
    *(float *)(lVar31 + lVar62 * 0x188 + 0x10c) = fVar66;
switchD_040ea340_default:
    switch(*(undefined4 *)(unaff_x21 + 0xf8)) {
    case 0:
      if (uVar58 <= uVar23) goto LAB_040ec2e4;
      lVar46 = lVar31 + lVar62 * 0x188;
      *(undefined4 *)(lVar46 + 0xc0) = 0;
      *(undefined4 *)(lVar46 + 0x98) = 0x3f800000;
      *(undefined4 *)(lVar46 + 0xe8) = 0x3f800000;
      *(undefined4 *)(lVar46 + 0x110) = 0;
      break;
    case 1:
      if (uVar23 < uVar58) {
        fVar83 = fVar83 - fVar87;
        lVar46 = lVar31 + lVar62 * 0x188;
        fVar66 = (*(float *)(lVar46 + 0xa4) - fVar87) / fVar83;
        fVar83 = (*(float *)(lVar46 + 0x7c) - fVar87) / fVar83;
        *(float *)(lVar46 + 0xc0) = fVar66;
        goto LAB_040ea7b8;
      }
      goto LAB_040ec2e4;
    case 2:
      if (uVar58 <= uVar23) goto LAB_040ec2e4;
      lVar46 = lVar31 + lVar62 * 0x188;
      fVar66 = (*(float *)(lVar46 + 0xa4) - *(float *)(unaff_x19 + 0x364)) /
               (*(float *)(unaff_x19 + 0x36c) - *(float *)(unaff_x19 + 0x364));
      *(float *)(lVar46 + 0xc0) = fVar66;
      fVar83 = (*(float *)(lVar46 + 0x7c) - *(float *)(unaff_x19 + 0x364)) /
               (*(float *)(unaff_x19 + 0x36c) - *(float *)(unaff_x19 + 0x364));
LAB_040ea7b8:
      *(float *)(lVar46 + 0x98) = fVar83;
      *(float *)(lVar46 + 0xe8) = fVar83;
      *(float *)(lVar46 + 0x110) = fVar66;
      break;
    case 3:
      if (uVar58 <= uVar23) goto LAB_040ec2e4;
      lVar46 = lVar31 + lVar62 * 0x188;
      fVar83 = *(float *)(lVar46 + 0x168);
      fVar69 = (1.0 - (*(float *)(lVar46 + 0xbc) + *(float *)(lVar46 + 0xe4)) / fVar83) * 0.5;
      fVar66 = *(float *)(lVar46 + 0xbc) / fVar83 + fVar69;
      fVar69 = *(float *)(lVar46 + 0xe4) / fVar83 + fVar69;
      *(float *)(lVar46 + 0xc0) = fVar66;
      *(float *)(lVar46 + 0x98) = fVar69;
      *(float *)(lVar46 + 0x110) = fVar66;
      *(float *)(lVar46 + 0xe8) = fVar69;
    }
    if (uVar58 <= uVar23) goto LAB_040ec2e4;
    lVar46 = lVar31 + lVar62 * 0x188;
    fVar66 = *(float *)(lVar46 + 0x16c) * (1.0 - *(float *)(unaff_x19 + 0x1594));
    if ((*(char *)(lVar46 + 100) == '\0') && ((*(byte *)(lVar31 + lVar62 * 0x188 + 0x19c) & 1) != 0)
       ) {
      fVar66 = -fVar66;
    }
    lVar46 = lVar31 + lVar62 * 0x188;
    *(float *)(lVar46 + 0xb8) = fVar66;
    *(float *)(lVar46 + 0x90) = fVar66;
    *(float *)(lVar46 + 0xe0) = fVar66;
    *(float *)(lVar46 + 0x108) = fVar66;
    *(undefined4 *)(lVar46 + 0xbc) = 0x3f800000;
    *(float *)(lVar46 + 0xc0) = fVar66;
    *(undefined4 *)(lVar46 + 0x94) = 0x3f800000;
    *(float *)(lVar46 + 0x98) = fVar66;
    *(undefined4 *)(lVar46 + 0xe4) = 0x3f800000;
    *(float *)(lVar46 + 0xe8) = fVar66;
    *(undefined4 *)(lVar46 + 0x10c) = 0x3f800000;
    *(float *)(lVar46 + 0x110) = fVar66;
UnityEngine_UIElements_PanelSettings__set_scale:
    if (((int)uVar23 < *(int *)(unaff_x21 + 0xd8)) && (iVar25 < *(int *)(unaff_x21 + 0xdc))) {
      if ((*(int *)(unaff_x21 + 0xe0) <= (int)uVar28) || (*(int *)(unaff_x21 + 0x74) == 5)) {
        if ((*(int *)(unaff_x21 + 0xe0) <= (int)uVar28) || (*(int *)(unaff_x21 + 0x74) != 5))
        goto UnityEngine_UIElements_PanelSettings__set_referenceResolution;
        if (uVar23 < uVar58) {
          bVar17 = *(uint *)(lVar31 + lVar62 * 0x188 + 0x70) == uVar5;
          goto LAB_040ea914;
        }
        goto LAB_040ec2e4;
      }
      if (uVar58 <= uVar23) goto LAB_040ec2e4;
UnityEngine_UIElements_PanelSettings__set_screenMatchMode:
      lVar43 = lVar31 + lVar62 * 0x188;
      *(ulong *)(lVar43 + 0xa0) =
           CONCAT44(fVar67 + (float)((ulong)*(undefined8 *)(lVar43 + 0xa0) >> 0x20),
                    fVar96 + (float)*(undefined8 *)(lVar43 + 0xa0));
      *(float *)(lVar43 + 0xa8) = fVar68 + *(float *)(lVar43 + 0xa8);
      *(ulong *)(lVar43 + 0x78) =
           CONCAT44(fVar67 + (float)((ulong)*(undefined8 *)(lVar43 + 0x78) >> 0x20),
                    fVar96 + (float)*(undefined8 *)(lVar43 + 0x78));
      *(float *)(lVar43 + 0x80) = fVar68 + *(float *)(lVar43 + 0x80);
      *(ulong *)(lVar43 + 200) =
           CONCAT44(fVar67 + (float)((ulong)*(undefined8 *)(lVar43 + 200) >> 0x20),
                    fVar96 + (float)*(undefined8 *)(lVar43 + 200));
      *(float *)(lVar43 + 0xd0) = fVar68 + *(float *)(lVar43 + 0xd0);
      *(ulong *)(lVar43 + 0xf0) =
           CONCAT44(fVar67 + (float)((ulong)*(undefined8 *)(lVar43 + 0xf0) >> 0x20),
                    fVar96 + (float)*(undefined8 *)(lVar43 + 0xf0));
      *(float *)(lVar43 + 0xf8) = fVar68 + *(float *)(lVar43 + 0xf8);
    }
    else {
UnityEngine_UIElements_PanelSettings__set_referenceResolution:
      bVar17 = false;
LAB_040ea914:
      if (uVar58 <= uVar23) goto LAB_040ec2e4;
      if (bVar17) goto UnityEngine_UIElements_PanelSettings__set_screenMatchMode;
      if (DAT_0482ee12 == '\0') {
        thunk_FUN_01efb3a4(plVar57);
        DAT_0482ee12 = '\x01';
        uVar58 = *(uint *)(lVar31 + 0x18);
      }
      uVar26 = *(undefined4 *)(*(undefined8 **)(*plVar57 + 0xb8) + 1);
      lVar46 = lVar31 + lVar62 * 0x188;
      *(undefined8 *)(lVar46 + 0xa0) = **(undefined8 **)(*plVar57 + 0xb8);
      *(undefined4 *)(lVar46 + 0xa8) = uVar26;
      if (uVar58 <= uVar23) goto LAB_040ec2e4;
      uVar26 = *(undefined4 *)(*(undefined8 **)(*plVar57 + 0xb8) + 1);
      lVar46 = lVar31 + lVar62 * 0x188;
      *(undefined8 *)(lVar46 + 0x78) = **(undefined8 **)(*plVar57 + 0xb8);
      *(undefined4 *)(lVar46 + 0x80) = uVar26;
      uVar26 = *(undefined4 *)(*(undefined8 **)(*plVar57 + 0xb8) + 1);
      *(undefined8 *)(lVar46 + 200) = **(undefined8 **)(*plVar57 + 0xb8);
      *(undefined4 *)(lVar46 + 0xd0) = uVar26;
      uVar26 = *(undefined4 *)(*(undefined8 **)(*plVar57 + 0xb8) + 1);
      *(undefined8 *)(lVar46 + 0xf0) = **(undefined8 **)(*plVar57 + 0xb8);
      *(undefined4 *)(lVar46 + 0xf8) = uVar26;
      *(undefined1 *)(lVar43 + 0x1a0) = 0;
    }
    iVar21 = FUN_0404a834(0);
    if (iVar21 == 1) {
      cVar56 = *(char *)(unaff_x21 + 0xa2);
    }
    else {
      cVar56 = '\0';
    }
    if (cVar39 == '\x01') {
      if (*(int *)(*(long *)PTR_DAT_045893f0 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      FUN_040fc9ec(uVar23,cVar56 != '\0',unaff_x21,unaff_x25,0);
    }
    else if (cVar39 == '\x02') {
      if (*(int *)(*(long *)PTR_DAT_045893f0 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      FUN_040fd424(uVar23,cVar56 != '\0',unaff_x21,unaff_x25,0);
    }
LAB_040eaaf8:
    lVar43 = *plVar2;
    if (lVar43 == 0) goto thunk_FUN_01f08a3c;
    if (*(uint *)(lVar43 + 0x18) <= uVar23) goto LAB_040ec2e4;
    lVar43 = lVar43 + lVar62 * 0x188;
    uVar105 = *(undefined8 *)(lVar43 + 0x124);
    *(undefined8 *)(lVar43 + 0x124) =
         CONCAT44(fVar67 + (float)((ulong)uVar105 >> 0x20),fVar96 + (float)uVar105);
    *(float *)(lVar43 + 300) = fVar68 + *(float *)(lVar43 + 300);
    lVar43 = *plVar2;
    if (lVar43 == 0) goto thunk_FUN_01f08a3c;
    if (*(uint *)(lVar43 + 0x18) <= uVar23) goto LAB_040ec2e4;
    lVar43 = lVar43 + lVar62 * 0x188;
    *(ulong *)(lVar43 + 0x118) =
         CONCAT44(fVar67 + (float)((ulong)*(undefined8 *)(lVar43 + 0x118) >> 0x20),
                  fVar96 + (float)*(undefined8 *)(lVar43 + 0x118));
    *(float *)(lVar43 + 0x120) = fVar68 + *(float *)(lVar43 + 0x120);
    lVar43 = *plVar2;
    if (lVar43 == 0) goto thunk_FUN_01f08a3c;
    if (*(uint *)(lVar43 + 0x18) <= uVar23) goto LAB_040ec2e4;
    lVar43 = lVar43 + lVar62 * 0x188;
    *(ulong *)(lVar43 + 0x130) =
         CONCAT44(fVar67 + (float)((ulong)*(undefined8 *)(lVar43 + 0x130) >> 0x20),
                  fVar96 + (float)*(undefined8 *)(lVar43 + 0x130));
    *(float *)(lVar43 + 0x138) = fVar68 + *(float *)(lVar43 + 0x138);
    lVar43 = *plVar2;
    if (lVar43 == 0) goto thunk_FUN_01f08a3c;
    if (*(uint *)(lVar43 + 0x18) <= uVar23) goto LAB_040ec2e4;
    lVar43 = lVar43 + lVar62 * 0x188;
    *(float *)(lVar43 + 0x13c) = fVar96 + *(float *)(lVar43 + 0x13c);
    *(ulong *)(lVar43 + 0x140) =
         CONCAT44(fVar68 + (float)((ulong)*(undefined8 *)(lVar43 + 0x140) >> 0x20),
                  fVar67 + (float)*(undefined8 *)(lVar43 + 0x140));
    lVar43 = *plVar2;
    if (lVar43 == 0) goto thunk_FUN_01f08a3c;
    uVar58 = *(uint *)(lVar43 + 0x18);
    if (uVar58 <= uVar23) goto LAB_040ec2e4;
    lVar46 = lVar43 + lVar62 * 0x188;
    *(float *)(lVar46 + 0x148) = fVar96 + *(float *)(lVar46 + 0x148);
    *(float *)(lVar46 + 0x164) = fVar96 + *(float *)(lVar46 + 0x164);
    *(float *)(lVar46 + 0x154) = fVar67 + *(float *)(lVar46 + 0x154);
    uVar105 = *(undefined8 *)(lVar46 + 0x14c);
    *(undefined8 *)(lVar46 + 0x14c) =
         CONCAT44(fVar67 + (float)((ulong)uVar105 >> 0x20),fVar67 + (float)uVar105);
    if (uVar28 == uVar47) {
      uVar47 = *puVar1 - 1;
      if (uVar23 == uVar47) goto LAB_040eacf0;
    }
    else {
      lVar46 = *(long *)(unaff_x25 + 0x48);
      if (lVar46 == 0) goto thunk_FUN_01f08a3c;
      if (*(uint *)(lVar46 + 0x18) <= uVar47) goto LAB_040ec2e4;
      lVar53 = (long)(int)uVar47;
      lVar55 = lVar46 + lVar53 * 0x60;
      fVar68 = fVar67 + *(float *)(lVar55 + 0x58);
      *(ulong *)(lVar55 + 0x50) =
           CONCAT44(fVar67 + (float)((ulong)*(undefined8 *)(lVar55 + 0x50) >> 0x20),
                    fVar67 + (float)*(undefined8 *)(lVar55 + 0x50));
      *(float *)(lVar55 + 0x58) = fVar68;
      *(float *)(lVar55 + 0x5c) = fVar96 + *(float *)(lVar55 + 0x5c);
      if (uVar58 <= *(uint *)(lVar55 + 0x38)) goto LAB_040ec2e4;
      uVar26 = *(undefined4 *)(lVar43 + (long)(int)*(uint *)(lVar55 + 0x38) * 0x188 + 0x124);
      lVar46 = lVar46 + lVar53 * 0x60;
      *(float *)(lVar46 + 0x74) = fVar68;
      *(undefined4 *)(lVar46 + 0x70) = uVar26;
      lVar43 = *(long *)(unaff_x25 + 0x48);
      if (lVar43 == 0) goto thunk_FUN_01f08a3c;
      if (*(uint *)(lVar43 + 0x18) <= uVar47) goto LAB_040ec2e4;
      lVar46 = *plVar2;
      if (lVar46 == 0) goto thunk_FUN_01f08a3c;
      uVar47 = *(uint *)(lVar43 + lVar53 * 0x60 + 0x44);
      if (*(uint *)(lVar46 + 0x18) <= uVar47) goto LAB_040ec2e4;
      lVar43 = lVar43 + lVar53 * 0x60;
      *(undefined4 *)(lVar43 + 0x78) = *(undefined4 *)(lVar46 + (long)(int)uVar47 * 0x188 + 0x130);
      *(undefined4 *)(lVar43 + 0x7c) = *(undefined4 *)(lVar43 + 0x50);
      uVar47 = *puVar1 - 1;
LAB_040eacf0:
      if (uVar23 == uVar47) {
        lVar43 = *(long *)(unaff_x25 + 0x48);
        if (lVar43 == 0) goto thunk_FUN_01f08a3c;
        if (*(uint *)(lVar43 + 0x18) <= uVar28) goto LAB_040ec2e4;
        lVar46 = lVar43 + lVar33 * 0x60;
        fVar68 = fVar67 + *(float *)(lVar46 + 0x58);
        *(ulong *)(lVar46 + 0x50) =
             CONCAT44(fVar67 + (float)((ulong)*(undefined8 *)(lVar46 + 0x50) >> 0x20),
                      fVar67 + (float)*(undefined8 *)(lVar46 + 0x50));
        *(float *)(lVar46 + 0x58) = fVar68;
        *(float *)(lVar46 + 0x5c) = fVar96 + *(float *)(lVar46 + 0x5c);
        lVar53 = *plVar2;
        if (lVar53 == 0) goto thunk_FUN_01f08a3c;
        if (*(uint *)(lVar53 + 0x18) <= *(uint *)(lVar46 + 0x38)) goto LAB_040ec2e4;
        uVar26 = *(undefined4 *)(lVar53 + (long)(int)*(uint *)(lVar46 + 0x38) * 0x188 + 0x124);
        lVar43 = lVar43 + lVar33 * 0x60;
        *(float *)(lVar43 + 0x74) = fVar68;
        *(undefined4 *)(lVar43 + 0x70) = uVar26;
        lVar43 = *(long *)(unaff_x25 + 0x48);
        if (lVar43 == 0) goto thunk_FUN_01f08a3c;
        if (*(uint *)(lVar43 + 0x18) <= uVar28) goto LAB_040ec2e4;
        lVar46 = *plVar2;
        if (lVar46 == 0) goto thunk_FUN_01f08a3c;
        uVar47 = *(uint *)(lVar43 + lVar33 * 0x60 + 0x44);
        if (*(uint *)(lVar46 + 0x18) <= uVar47) goto LAB_040ec2e4;
        lVar43 = lVar43 + lVar33 * 0x60;
        *(undefined4 *)(lVar43 + 0x78) = *(undefined4 *)(lVar46 + (long)(int)uVar47 * 0x188 + 0x130)
        ;
        *(undefined4 *)(lVar43 + 0x7c) = *(undefined4 *)(lVar43 + 0x50);
      }
    }
    if (*(int *)(*(long *)Method_System_IO_CStreamReader_Read__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar37 = FUN_034fc6b4(uVar24,0);
    if (((((uVar37 & 1) == 0) && (1 < uVar24 - 0x2010)) && (uVar24 != 0xad)) && (uVar24 != 0x2d)) {
      if ((_uStack0000000000000168 & 0x100000000) == 0) {
        if (uVar27 == 1) {
          if (*(int *)(*(long *)Method_System_IO_CStreamReader_Read__ + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          bVar19 = FUN_034fc5e8(uVar24,0);
          if (((uVar24 == 0x200b) || (((bVar20 | bVar19 ^ 1) & 1) != 0)) || (*puVar1 == 1))
          goto LAB_040eb71c;
        }
        uStack000000000000016c = 0;
      }
      else {
        if (((uVar27 != 1) && ((int)uVar23 < (int)(*(uint *)(lVar31 + 0x18) - 1))) &&
           (((int)uVar23 < (int)*puVar1 && ((uVar24 == 0x2019 || (uVar24 == 0x27)))))) {
          if (*(uint *)(lVar31 + 0x18) <= uVar27 - 2) goto LAB_040ec2e4;
          uVar9 = *(undefined2 *)(lVar31 + lStack00000000000001a8 + -0x464);
          if (*(int *)(*(long *)Method_System_IO_CStreamReader_Read__ + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          uVar37 = FUN_034fc6b4(uVar9,0);
          if ((uVar37 & 1) != 0) {
            if (*(uint *)(lVar31 + 0x18) <= uVar27) goto LAB_040ec2e4;
            uVar9 = *(undefined2 *)(lVar31 + lStack00000000000001a8 + -0x154);
            if (*(int *)(*(long *)Method_System_IO_CStreamReader_Read__ + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            uVar37 = FUN_034fc6b4(uVar9,0);
            if ((uVar37 & 1) != 0) goto LAB_040eaed8;
          }
        }
LAB_040eb71c:
        if (uVar23 == *puVar1 - 1) {
          if (*(int *)(*(long *)Method_System_IO_CStreamReader_Read__ + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          uVar37 = FUN_034fc6b4(uVar24,0);
          fStack0000000000000170 = (float)uVar23;
          if ((uVar37 & 1) == 0) goto LAB_040eb758;
        }
        else {
LAB_040eb758:
          fStack0000000000000170 = (float)(iStack0000000000000178 - 1);
        }
        lVar43 = *plVar61;
        if (lVar43 == 0) goto thunk_FUN_01f08a3c;
        uVar47 = *(uint *)(unaff_x25 + 0x1c);
        iVar21 = *(int *)(lVar43 + 0x18);
        if (iVar21 < (int)(uVar47 + 1)) {
          if (*(int *)(*(long *)PTR_DAT_04589410 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          FUN_02421b70(plVar61,iVar21 + 1,*(undefined8 *)PTR_DAT_04589408);
          lVar43 = *plVar61;
          if (lVar43 == 0) goto thunk_FUN_01f08a3c;
        }
        if (*(uint *)(lVar43 + 0x18) <= uVar47) goto LAB_040ec2e4;
        lVar43 = lVar43 + (long)(int)uVar47 * 0xc;
        *(uint *)(lVar43 + 0x20) = uStack0000000000000168;
        *(float *)(lVar43 + 0x24) = fStack0000000000000170;
        *(uint *)(lVar43 + 0x28) = ((int)fStack0000000000000170 - uStack0000000000000168) + 1;
        lVar43 = *(long *)(unaff_x25 + 0x48);
        *(int *)(unaff_x25 + 0x1c) = *(int *)(unaff_x25 + 0x1c) + 1;
        if (lVar43 == 0) goto thunk_FUN_01f08a3c;
        if (*(uint *)(lVar43 + 0x18) <= uVar28) goto LAB_040ec2e4;
        lVar43 = lVar43 + lVar33 * 0x60;
        uStack000000000000016c = 0;
        iVar25 = iVar25 + 1;
        *(int *)(lVar43 + 0x34) = *(int *)(lVar43 + 0x34) + 1;
      }
    }
    else {
      if ((_uStack0000000000000168 & 0x100000000) == 0) {
        uStack0000000000000168 = uVar23;
      }
      if (uVar23 == *puVar1 - 1) {
        lVar43 = *plVar61;
        if (lVar43 == 0) goto thunk_FUN_01f08a3c;
        uVar47 = *(uint *)(unaff_x25 + 0x1c);
        iVar21 = *(int *)(lVar43 + 0x18);
        if (iVar21 < (int)(uVar47 + 1)) {
          if (*(int *)(*(long *)PTR_DAT_04589410 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          FUN_02421b70(plVar61,iVar21 + 1,*(undefined8 *)PTR_DAT_04589408);
          lVar43 = *plVar61;
          if (lVar43 == 0) goto thunk_FUN_01f08a3c;
        }
        if (*(uint *)(lVar43 + 0x18) <= uVar47) goto LAB_040ec2e4;
        lVar43 = lVar43 + (long)(int)uVar47 * 0xc;
        *(uint *)(lVar43 + 0x20) = uStack0000000000000168;
        *(uint *)(lVar43 + 0x24) = uVar23;
        *(uint *)(lVar43 + 0x28) = uVar27 - uStack0000000000000168;
        lVar43 = *(long *)(unaff_x25 + 0x48);
        *(int *)(unaff_x25 + 0x1c) = *(int *)(unaff_x25 + 0x1c) + 1;
        if (lVar43 == 0) goto thunk_FUN_01f08a3c;
        if (*(uint *)(lVar43 + 0x18) <= uVar28) goto LAB_040ec2e4;
        lVar43 = lVar43 + lVar33 * 0x60;
        iVar25 = iVar25 + 1;
        *(int *)(lVar43 + 0x34) = *(int *)(lVar43 + 0x34) + 1;
      }
LAB_040eaed8:
      uStack000000000000016c = 1;
    }
    lVar43 = *plVar2;
    if (lVar43 == 0) goto thunk_FUN_01f08a3c;
    uVar47 = *(uint *)(lVar43 + 0x18);
    if (uVar47 <= uVar23) goto LAB_040ec2e4;
    if ((*(byte *)(lVar43 + lVar62 * 0x188 + 0x19c) >> 2 & 1) == 0) {
      if (bVar13) {
LAB_040eaf0c:
        if (uVar27 - 2 < uVar47) {
          uVar26 = *(undefined4 *)(lVar43 + lStack00000000000001a8 + -0x354);
          uVar86 = *(undefined4 *)(lVar43 + lStack00000000000001a8 + -0x318);
          goto LAB_040eb170;
        }
        goto LAB_040ec2e4;
      }
LAB_040eb0c8:
      bVar13 = false;
    }
    else {
      lVar33 = *(long *)(unaff_x19 + 0x15b8);
      if (lVar33 == 0) goto thunk_FUN_01f08a3c;
      if (*(uint *)(lVar33 + 0x18) <= *(uint *)(unaff_x19 + 0x1a38)) goto LAB_040ec2e4;
      iVar21 = *(int *)(lVar43 + lVar62 * 0x188 + 0x70);
      *(int *)(lVar43 + lVar62 * 0x188 + 0x178) =
           *(int *)(lVar33 + (long)(int)*(uint *)(unaff_x19 + 0x1a38) * 0x38 + 0x54) << 2;
      if ((*(int *)(unaff_x21 + 0xd8) < (int)uVar23) || (*(int *)(unaff_x21 + 0xe0) < (int)uVar28))
      {
        bVar17 = true;
      }
      else if (*(int *)(unaff_x21 + 0x74) == 5) {
        bVar17 = iVar21 + 1 != *(int *)(unaff_x21 + 0xf0);
      }
      else {
        bVar17 = false;
      }
      if (uVar24 != 0x200b && (bVar20 & 1) == 0) {
        fVar68 = *(float *)(lVar43 + lVar62 * 0x188 + 0x16c);
        if (fVar70 <= fVar68) {
          fVar70 = fVar68;
        }
        if (iVar21 != iStack00000000000000c4) {
          fStack000000000000015c = fVar101;
        }
        if (lVar44 == 0) goto thunk_FUN_01f08a3c;
        fVar68 = *(float *)(lVar43 + lVar62 * 0x188 + 0x150);
        if (fStack0000000000000174 <= ABS(fVar66)) {
          fStack0000000000000174 = ABS(fVar66);
        }
        FUN_040d1a24(&stack0x000012a0,lVar44,0);
        memcpy(&stack0x00001210,&stack0x000012a0,0x60);
        fVar69 = (float)FUN_040cee30(&stack0x00001210,0);
        fVar68 = fVar68 + fVar70 * fVar69;
        iStack00000000000000c4 = iVar21;
        if (fVar68 <= fStack000000000000015c) {
          fStack000000000000015c = fVar68;
        }
      }
      if ((((uVar24 == 0xd) || ((uVar24 & 0xfffe) == 10)) || ((int)uVar54 < (int)uVar23)) ||
         (bVar13 || bVar17)) {
LAB_040eb0bc:
        if (!bVar13) goto LAB_040eb0c8;
      }
      else {
        if (uVar23 == uVar54) {
          if (*(int *)(*(long *)Method_System_IO_CStreamReader_Read__ + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          uVar37 = FUN_034fd62c(uVar24,0);
          if ((uVar37 & 1) != 0) goto LAB_040eb0bc;
        }
        lVar43 = *plVar2;
        if (lVar43 == 0) goto thunk_FUN_01f08a3c;
        if (*(uint *)(lVar43 + 0x18) <= uVar23) goto LAB_040ec2e4;
        lVar43 = lVar43 + lVar62 * 0x188;
        fVar89 = *(float *)(lVar43 + 0x16c);
        fStack00000000000000d4 = *(float *)(lVar43 + 0x124);
        bVar13 = fVar70 != 0.0;
        uVar22 = *(undefined4 *)(lVar43 + 0x174);
        fVar68 = fVar89;
        if (bVar13) {
          fVar68 = fVar70;
        }
        fVar70 = fVar68;
        fStack00000000000000d0 = 0.0;
        fVar68 = fVar66;
        if (bVar13) {
          fVar68 = fStack0000000000000174;
        }
        fStack00000000000000cc = fStack000000000000015c;
        fStack0000000000000174 = fVar68;
      }
      if (*puVar1 == 1) {
        lVar43 = *plVar2;
        if (lVar43 == 0) goto thunk_FUN_01f08a3c;
        if (*(uint *)(lVar43 + 0x18) <= uVar23) goto LAB_040ec2e4;
        lVar43 = lVar43 + lVar62 * 0x188;
        uVar26 = *(undefined4 *)(lVar43 + 0x130);
        uVar86 = *(undefined4 *)(lVar43 + 0x16c);
LAB_040eb170:
        FUN_040f574c(fStack00000000000000d4,fStack00000000000000cc,fStack00000000000000d0,uVar26,
                     fStack000000000000015c,0,fVar89,uVar86);
      }
      else {
        if ((uVar23 == uVar40) || ((int)uVar54 <= (int)uVar23)) {
          lVar43 = *plVar2;
          if (lVar43 != 0) {
            lVar33 = lVar62;
            uVar47 = uVar23;
            if (uVar24 == 0x200b || (bVar20 & 1) != 0) {
              lVar33 = lVar52;
              uVar47 = uVar54;
            }
            if (uVar47 < *(uint *)(lVar43 + 0x18)) {
              lVar43 = lVar43 + lVar33 * 0x188;
              uVar26 = *(undefined4 *)(lVar43 + 0x130);
              uVar86 = *(undefined4 *)(lVar43 + 0x16c);
              goto LAB_040eb170;
            }
            goto LAB_040ec2e4;
          }
          goto thunk_FUN_01f08a3c;
        }
        if (bVar17) {
          lVar43 = *plVar2;
          if (lVar43 != 0) {
            uVar47 = *(uint *)(lVar43 + 0x18);
            goto LAB_040eaf0c;
          }
          goto thunk_FUN_01f08a3c;
        }
        if ((int)(*puVar1 - 1) <= (int)uVar23) {
LAB_040eb8d8:
          bVar13 = true;
          goto LAB_040eb1ac;
        }
        lVar43 = *plVar2;
        if (lVar43 == 0) goto thunk_FUN_01f08a3c;
        if (*(uint *)(lVar43 + 0x18) <= uVar27) goto LAB_040ec2e4;
        uVar37 = FUN_040d18fc(uVar22,*(undefined4 *)(lVar43 + lStack00000000000001a8),0);
        if ((uVar37 & 1) != 0) goto LAB_040eb8d8;
        lVar43 = *plVar2;
        if (lVar43 == 0) goto thunk_FUN_01f08a3c;
        if (*(uint *)(lVar43 + 0x18) <= uVar23) goto LAB_040ec2e4;
        lVar43 = lVar43 + lVar62 * 0x188;
        FUN_040f574c(fStack00000000000000d4,fStack00000000000000cc,fStack00000000000000d0,
                     *(undefined4 *)(lVar43 + 0x130),fStack000000000000015c,0,fVar89,
                     *(undefined4 *)(lVar43 + 0x16c));
      }
      fVar70 = 0.0;
      bVar13 = false;
      fStack000000000000015c = DAT_00c92980;
      fStack0000000000000174 = 0.0;
    }
LAB_040eb1ac:
    lVar43 = *plVar2;
    if (lVar43 == 0) goto thunk_FUN_01f08a3c;
    if (*(uint *)(lVar43 + 0x18) <= uVar23) goto LAB_040ec2e4;
    if (lVar44 == 0) goto thunk_FUN_01f08a3c;
    uVar47 = *(uint *)(lVar43 + lVar62 * 0x188 + 0x19c);
    FUN_040d1a24(&stack0x000012a0,lVar44,0);
    memcpy(&stack0x00001210,&stack0x000012a0,0x60);
    fVar68 = (float)FUN_040cee50(&stack0x00001210,0);
    if ((uVar47 >> 6 & 1) == 0) {
      if (bVar16) {
        lVar43 = *plVar2;
        if (lVar43 != 0) {
          if (uVar27 - 2 < *(uint *)(lVar43 + 0x18)) {
            fVar67 = *(float *)(lVar43 + lStack00000000000001a8 + -0x334);
            uVar26 = *(undefined4 *)(lVar43 + lStack00000000000001a8 + -0x354);
            goto LAB_040eb940;
          }
          goto LAB_040ec2e4;
        }
        goto thunk_FUN_01f08a3c;
      }
LAB_040eb334:
      bVar16 = false;
    }
    else {
      lVar43 = *plVar2;
      if ((lVar43 == 0) || (lVar33 = *(long *)(unaff_x19 + 0x15b8), lVar33 == 0))
      goto thunk_FUN_01f08a3c;
      if ((*(uint *)(lVar33 + 0x18) <= *(uint *)(unaff_x19 + 0x1a38)) ||
         (*(uint *)(lVar43 + 0x18) <= uVar23)) goto LAB_040ec2e4;
      *(int *)(lVar43 + lVar62 * 0x188 + 0x180) =
           *(int *)(lVar33 + (long)(int)*(uint *)(unaff_x19 + 0x1a38) * 0x38 + 0x54) << 2;
      if ((*(int *)(unaff_x21 + 0xd8) < (int)uVar23) || (*(int *)(unaff_x21 + 0xe0) < (int)uVar28))
      {
        bVar17 = true;
      }
      else if (*(int *)(unaff_x21 + 0x74) == 5) {
        bVar17 = *(int *)(lVar43 + lVar62 * 0x188 + 0x70) + 1 != *(int *)(unaff_x21 + 0xf0);
      }
      else {
        bVar17 = false;
      }
      if ((((uVar24 == 0xd) || ((uVar24 & 0xfffe) == 10)) || ((int)uVar54 < (int)uVar23)) ||
         (!(bool)(~bVar16 & (bVar17 ^ 1U)))) {
LAB_040eb32c:
        if (!bVar16) goto LAB_040eb334;
      }
      else {
        if (uVar23 == uVar54) {
          if (*(int *)(*(long *)Method_System_IO_CStreamReader_Read__ + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          uVar37 = FUN_034fd62c(uVar24,0);
          if ((uVar37 & 1) != 0) goto LAB_040eb32c;
          lVar43 = *plVar2;
          if (lVar43 == 0) goto thunk_FUN_01f08a3c;
        }
        if (*(uint *)(lVar43 + 0x18) <= uVar23) goto LAB_040ec2e4;
        lVar43 = lVar43 + lVar62 * 0x188;
        fStack00000000000000a8 = *(float *)(lVar43 + 0x68);
        fVar65 = *(float *)(lVar43 + 0x150);
        fVar64 = *(float *)(lVar43 + 0x124);
        fStack00000000000000f4 = *(float *)(lVar43 + 0x16c);
        fStack00000000000000e4 = fVar68 * fStack00000000000000f4 + fVar65;
        fStack00000000000000e0 = 0.0;
      }
      uVar47 = *puVar1;
      if (uVar47 == 1) {
LAB_040eb538:
        lVar33 = *plVar2;
        if (lVar33 == 0) goto thunk_FUN_01f08a3c;
        if (*(uint *)(lVar33 + 0x18) <= uVar23) goto LAB_040ec2e4;
        lVar33 = lVar33 + lVar62 * 0x188;
      }
      else {
        lVar43 = lVar62;
        if (uVar23 == uVar40) {
          lVar33 = *plVar2;
          if (lVar33 == 0) goto thunk_FUN_01f08a3c;
          uVar47 = uVar23;
          if ((uVar24 != 0x200b & (bVar20 ^ 1)) == 0) {
            lVar43 = lVar52;
            uVar47 = uVar54;
          }
          if (*(uint *)(lVar33 + 0x18) <= uVar47) goto LAB_040ec2e4;
        }
        else {
          if ((int)uVar47 <= (int)uVar23) {
LAB_040eb620:
            if ((int)uVar23 < (int)uVar47) {
              iVar21 = FUN_04076320(lVar44,0);
              if (*(uint *)(lVar31 + 0x18) <= uVar27) goto LAB_040ec2e4;
              lVar43 = *(long *)(lVar31 + lStack00000000000001a8 + -0x134);
              if (lVar43 == 0) goto thunk_FUN_01f08a3c;
              iVar29 = FUN_04076320(lVar43,0);
              if (iVar21 != iVar29) goto LAB_040eb538;
            }
            if (!bVar17) {
              bVar16 = true;
              goto LAB_040eb97c;
            }
            lVar43 = *plVar2;
            if (lVar43 != 0) {
              if (uVar27 - 2 < *(uint *)(lVar43 + 0x18)) {
                fVar67 = *(float *)(lVar43 + lStack00000000000001a8 + -0x334);
                uVar26 = *(undefined4 *)(lVar43 + lStack00000000000001a8 + -0x354);
                goto LAB_040eb940;
              }
              goto LAB_040ec2e4;
            }
            goto thunk_FUN_01f08a3c;
          }
          lVar33 = *plVar2;
          if (lVar33 == 0) goto thunk_FUN_01f08a3c;
          if (*(uint *)(lVar33 + 0x18) <= uVar27) goto LAB_040ec2e4;
          if (*(float *)(lVar33 + lStack00000000000001a8 + -0x10c) == fStack00000000000000a8) {
            fVar69 = *(float *)(lVar33 + lStack00000000000001a8 + -0x24);
            if (*(int *)(*(long *)PTR_DAT_045893f0 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            uVar37 = FUN_040fa99c(fVar67 + fVar69,fVar65,0);
            if ((uVar37 & 1) != 0) {
              uVar47 = *puVar1;
              goto LAB_040eb620;
            }
            lVar33 = *plVar2;
            if (lVar33 == 0) goto thunk_FUN_01f08a3c;
          }
          uVar47 = uVar23;
          if ((int)uVar54 < (int)uVar23) {
            lVar43 = lVar52;
            uVar47 = uVar54;
          }
          if (*(uint *)(lVar33 + 0x18) <= uVar47) goto LAB_040ec2e4;
        }
        lVar33 = lVar33 + lVar43 * 0x188;
      }
      fVar67 = *(float *)(lVar33 + 0x150);
      uVar26 = *(undefined4 *)(lVar33 + 0x130);
LAB_040eb940:
      FUN_040f574c(fVar64,fStack00000000000000e4,fStack00000000000000e0,uVar26,
                   fStack00000000000000f4 * fVar68 + fVar67,0,fStack00000000000000f4,
                   fStack00000000000000f4);
      bVar16 = false;
    }
LAB_040eb97c:
    lVar43 = *plVar2;
    if (lVar43 == 0) goto thunk_FUN_01f08a3c;
    uVar47 = (uint)*(undefined8 *)(lVar43 + 0x18);
    if (uVar47 <= uVar23) goto LAB_040ec2e4;
    if ((*(byte *)(lVar43 + lVar62 * 0x188 + 0x19d) >> 1 & 1) == 0) {
      if (bVar18) {
        FUN_040f65b0(fStack0000000000000128,fStack0000000000000144,fStack0000000000000124,
                     fStack000000000000012c,fVar84,fStack0000000000000124);
      }
LAB_040eba6c:
      bVar18 = false;
    }
    else {
      if ((*(int *)(unaff_x21 + 0xd8) < (int)uVar23) || (*(int *)(unaff_x21 + 0xe0) < (int)uVar28))
      {
        bVar17 = true;
      }
      else if (*(int *)(unaff_x21 + 0x74) == 5) {
        bVar17 = *(int *)(lVar43 + lVar62 * 0x188 + 0x70) + 1 != *(int *)(unaff_x21 + 0xf0);
      }
      else {
        bVar17 = false;
      }
      if (!bVar18) {
        if (((uVar24 == 0xd) || ((uVar24 & 0xfffe) == 10)) ||
           (((int)uVar54 < (int)uVar23 || (bVar17)))) goto LAB_040eba6c;
        if (uVar23 == uVar54) {
          if (*(int *)(*(long *)Method_System_IO_CStreamReader_Read__ + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          uVar37 = FUN_034fd62c(uVar24,0);
          if ((uVar37 & 1) != 0) goto LAB_040eba6c;
        }
        puVar11 = PTR_DAT_045893f0;
        lVar44 = *(long *)PTR_DAT_045893f0;
        if (*(int *)(lVar44 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
          lVar44 = *(long *)puVar11;
        }
        lVar43 = *plVar2;
        if (lVar43 == 0) goto thunk_FUN_01f08a3c;
        uVar47 = (uint)*(undefined8 *)(lVar43 + 0x18);
        if (uVar47 <= uVar23) goto LAB_040ec2e4;
        pfVar48 = *(float **)(lVar44 + 0xb8);
        fStack0000000000000128 = *pfVar48;
        fStack0000000000000144 = pfVar48[1];
        fStack000000000000012c = pfVar48[2];
        fVar84 = pfVar48[3];
        fStack0000000000000124 = 0.0;
      }
      if (uVar47 <= uVar23) goto LAB_040ec2e4;
      lVar43 = lVar43 + lVar62 * 0x188;
      fVar69 = *(float *)(lVar43 + 0x130);
      fVar87 = *(float *)(lVar43 + 0x124);
      fVar67 = *(float *)(lVar43 + 0x148);
      fVar83 = *(float *)(lVar43 + 0x14c);
      fVar103 = *(float *)(lVar43 + 0x154);
      fVar68 = *(float *)(lVar43 + 0x164);
      uVar37 = FUN_040fa868(&stack0x00000210,&stack0x000001f0,0);
      lVar43 = *(long *)PTR_DAT_045893e0;
      if ((uVar37 & 1) == 0) {
        if (*(int *)(lVar43 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c(lVar43);
        }
        fVar92 = (float)FUN_040fa574(uVar35,0);
        bVar18 = (bVar20 & 1) == 0;
        if (bVar18) {
          fVar67 = fVar87;
        }
        if (bVar18) {
          fVar68 = fVar69;
        }
        if (fVar67 - fVar92 <= fStack0000000000000128) {
          fStack0000000000000128 = fVar67 - fVar92;
        }
        fVar67 = (float)FUN_040fa57c(uVar35,0);
        if (fStack000000000000012c <= fVar68 + fVar67) {
          fStack000000000000012c = fVar68 + fVar67;
        }
        if (*(int *)(*(long *)PTR_DAT_045893e0 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        fVar67 = (float)FUN_040fa58c(uVar35,0);
        if (fVar103 - fVar67 <= fStack0000000000000144) {
          fStack0000000000000144 = fVar103 - fVar67;
        }
        fVar67 = (float)FUN_040fa584(uVar35,0);
        if (fVar84 <= fVar83 + fVar67) {
          fVar84 = fVar83 + fVar67;
        }
      }
      else {
        if (*(int *)(lVar43 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c(lVar43);
        }
        fVar92 = (float)FUN_040fa57c(uVar35,0);
        if ((bVar20 & 1) == 0) {
          fVar67 = fVar87;
        }
        if (fVar103 <= fStack0000000000000144) {
          fStack0000000000000144 = fVar103;
        }
        fVar67 = (fVar67 + (fStack000000000000012c - fVar92)) * 0.5;
        if (fVar84 <= fVar83) {
          fVar84 = fVar83;
        }
        FUN_040f65b0(fStack0000000000000128,fStack0000000000000144,fStack0000000000000124,fVar67,
                     fVar84,fStack0000000000000124);
        puVar11 = PTR_DAT_045893e0;
        if (*(int *)(*(long *)PTR_DAT_045893e0 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        fStack0000000000000144 = (float)FUN_040fa58c(uVar30,0);
        if (*(int *)(*(long *)puVar11 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        fStack0000000000000144 = fVar103 - fStack0000000000000144;
        fStack000000000000012c = (float)FUN_040fa57c(uVar30,0);
        fVar84 = (float)FUN_040fa584(uVar30,0);
        if ((bVar20 & 1) == 0) {
          fVar68 = fVar69;
        }
        fStack000000000000012c = fVar68 + fStack000000000000012c;
        fStack0000000000000124 = 0.0;
        fStack0000000000000128 = fVar67;
        fVar84 = fVar83 + fVar84;
      }
      if ((((*puVar1 == 1) || (uVar23 == uVar40)) || ((int)uVar54 <= (int)uVar23)) || (bVar17)) {
        FUN_040f65b0(fStack0000000000000128,fStack0000000000000144,fStack0000000000000124,
                     fStack000000000000012c,fVar84,fStack0000000000000124);
        bVar18 = false;
      }
      else {
        bVar18 = true;
      }
    }
    uVar23 = *puVar1;
    iStack0000000000000178 = iStack0000000000000178 + 1;
    lStack00000000000001a8 = lStack00000000000001a8 + 0x188;
    bVar17 = (int)uVar27 < (int)uVar23;
    uVar47 = uVar28;
    uVar27 = uVar27 + 1;
  } while (bVar17);
  iVar21 = uVar28 + 1;
  plVar61 = (long *)PTR_DAT_04588f98;
LAB_040ec0a0:
  *(uint *)(unaff_x25 + 0x10) = uVar23;
  uVar22 = *(undefined4 *)(unaff_x19 + 0x15c0);
  *(int *)(unaff_x25 + 0x24) = iVar21;
  if ((int)uVar23 < 1 || iVar25 == 0) {
    iVar25 = 1;
  }
  *(int *)(unaff_x25 + 0x1c) = iVar25;
  *(undefined4 *)(unaff_x25 + 0x14) = uVar22;
  *(int *)(unaff_x25 + 0x28) = *(int *)(unaff_x19 + 0x350) + 1;
  if (1 < *(int *)(unaff_x25 + 0x2c)) {
    uVar30 = 1;
    lVar31 = 0x70;
    do {
      lVar43 = *(long *)(unaff_x25 + 0x58);
      if (lVar43 == 0) goto thunk_FUN_01f08a3c;
      if (*(int *)(*plVar61 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      if (*(uint *)(lVar43 + 0x18) <= uVar30) goto LAB_040ec2e4;
      FUN_040de444(lVar43 + lVar31,0);
      if (*(int *)(unaff_x21 + 0x100) != 0) {
        lVar43 = *(long *)(unaff_x25 + 0x58);
        if (lVar43 == 0) goto thunk_FUN_01f08a3c;
        if (*(int *)(*plVar61 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        if (*(uint *)(lVar43 + 0x18) <= uVar30) goto LAB_040ec2e4;
        UnityEngine_UIElements_MouseMoveEvent___ctor(lVar43 + lVar31,1,0);
      }
      uVar30 = uVar30 + 1;
      lVar31 = lVar31 + 0x50;
    } while ((long)uVar30 < (long)*(int *)(unaff_x25 + 0x2c));
  }
LAB_040e4eec:
  if (*(long *)(unaff_x23 + 0x28) == in_stack_00001638) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


