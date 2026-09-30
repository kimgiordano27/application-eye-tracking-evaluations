/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.Locomotion.Teleportation.TeleportationAnchor$$RequestTeleportFromEditorValidate
ENTRY_POINT: 0612f5c4
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 76
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_11;paired_field_refs_with_structure_only;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;negative_framework_namespace_without_eye_use_flow;functionality_data_collection_or_telemetry_hits_2
*/


void UnityEngine_XR_Interaction_Toolkit_Locomotion_Teleportation_TeleportationAnchor__RequestTeleportFromEditorValidate
               (long param_1)

{
  bool bVar1;
  long *plVar2;
  long *plVar3;
  int iVar4;
  undefined2 uVar5;
  uint uVar6;
  uint uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  bool bVar10;
  bool bVar11;
  float fVar12;
  undefined *puVar13;
  undefined *puVar14;
  bool bVar15;
  bool bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  undefined4 uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  int iVar28;
  int iVar29;
  ulong uVar30;
  long lVar31;
  long lVar32;
  undefined8 uVar33;
  long lVar34;
  ulong uVar35;
  undefined8 uVar36;
  undefined1 uVar37;
  char cVar38;
  float *pfVar39;
  undefined4 *puVar40;
  long *plVar41;
  undefined8 *puVar42;
  code *pcVar43;
  uint uVar44;
  float *pfVar45;
  int iVar46;
  uint uVar47;
  long lVar48;
  long lVar49;
  long *unaff_x19;
  long lVar50;
  ulong uVar51;
  int *piVar52;
  long *unaff_x21;
  uint uVar53;
  long unaff_x23;
  undefined8 *unaff_x25;
  uint uVar54;
  long *plVar55;
  long *plVar56;
  ulong uVar57;
  int iVar58;
  ushort uVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  undefined8 uVar73;
  undefined1 auVar74 [16];
  float fVar75;
  float fVar76;
  undefined8 uVar77;
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  float fVar80;
  float fVar81;
  float fVar82;
  undefined4 uVar83;
  float fVar84;
  float fVar85;
  float fVar86;
  float fVar87;
  float fVar88;
  float fVar89;
  float fVar90;
  float fVar91;
  float fVar92;
  float fVar93;
  float fVar94;
  int iStack0000000000000020;
  uint uStack0000000000000048;
  float fStack0000000000000054;
  float fStack000000000000006c;
  float fStack0000000000000070;
  float fStack0000000000000074;
  float fStack0000000000000078;
  undefined4 uStack000000000000007c;
  float fStack0000000000000094;
  float fStack0000000000000098;
  float fStack000000000000009c;
  float fStack00000000000000ac;
  float fStack00000000000000b0;
  float fStack00000000000000cc;
  float fStack00000000000000d0;
  float fStack00000000000000d8;
  int iStack00000000000000dc;
  float fStack00000000000000f0;
  float fStack00000000000000f4;
  float fStack0000000000000100;
  float fStack0000000000000104;
  float fStack000000000000011c;
  float fStack0000000000000120;
  float fStack0000000000000124;
  float fStack0000000000000134;
  float fStack0000000000000138;
  float fStack000000000000013c;
  float fStack000000000000016c;
  float fStack0000000000000170;
  float fStack0000000000000174;
  float fStack0000000000000190;
  undefined8 in_stack_000001a8;
  float fStack00000000000001b0;
  float fStack00000000000001b4;
  float in_stack_000001b8;
  undefined8 in_stack_000001c0;
  undefined8 in_stack_000001c8;
  float in_stack_000001d0;
  undefined8 in_stack_000001e0;
  undefined8 in_stack_000001e8;
  uint in_stack_000001f0;
  float in_stack_0000112c;
  float in_stack_00001138;
  float in_stack_00001144;
  float in_stack_00001150;
  float in_stack_0000115c;
  float in_stack_00001168;
  uint in_stack_0000124c;
  uint uVar95;
  undefined4 in_stack_00001280;
  float in_stack_00001284;
  float in_stack_00001288;
  float in_stack_0000128c;
  float in_stack_00001290;
  uint uVar96;
  undefined8 in_stack_00001298;
  char in_stack_000012a4;
  float fVar97;
  uint uVar98;
  undefined8 in_stack_000012b0;
  undefined8 in_stack_000012b8;
  undefined4 in_stack_000012c4;
  undefined8 in_stack_000012c8;
  undefined8 in_stack_000012d0;
  undefined8 in_stack_000012d8;
  undefined8 in_stack_000012e8;
  
  lVar50 = unaff_x19[0x1f];
  if (*(int *)(param_1 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  plVar55 = (long *)PTR_DAT_069fb930;
  uVar30 = FUN_06350670(lVar50,0,0);
  if ((uVar30 & 1) == 0) {
    if (unaff_x19[0x1f] == 0) goto LAB_0613705c;
                    /* try { // try from 0612f604 to 0622f613 has its CatchHandler @ 0612f614 */
    lVar50 = FUN_0615ad34(unaff_x19[0x1f],0);
    if (lVar50 != 0) {
      if (unaff_x19[0x74] != 0) {
        FUN_061a8440(unaff_x19[0x74],0);
      }
      lVar50 = unaff_x19[0x91];
      if ((lVar50 != 0) && (*(long *)(lVar50 + 0x18) != 0)) {
        if ((int)*(long *)(lVar50 + 0x18) == 0) goto LAB_0613719c;
        if (*(int *)(lVar50 + 0x24) != 0) {
          unaff_x19[0x20] = unaff_x19[0x1f];
          LeanTween__value(unaff_x19 + 0x20);
          unaff_x19[0x23] = unaff_x19[0x22];
          LeanTween__value(unaff_x19 + 0x23);
          plVar41 = (long *)Method_System_HashCode_Combine<ulong,_int>__;
          uVar20 = 0;
          *(undefined4 *)(unaff_x19 + 0x24) = 0;
          if (*(int *)(*plVar41 + 0xe4) == 0) {
            thunk_FUN_02df485c(*plVar41,0);
            uVar20 = (undefined4)unaff_x19[0x24];
          }
          in_stack_000001f0 = 0;
          in_stack_000001e8 = 0;
          in_stack_000001e0 = 0;
          FUN_0614041c(&stack0x000001e0,uVar20,unaff_x19[0x20],0,unaff_x19[0x23],0);
          puVar13 = Method_System_HashCode_Combine<int,_int>__;
          lVar50 = *(long *)(*plVar41 + 0xb8);
          *(undefined8 *)(unaff_x23 + 0x148) = 0;
          *(undefined8 *)(unaff_x23 + 0x140) = 0;
          uVar36 = *(undefined8 *)puVar13;
          *(undefined8 *)(unaff_x23 + 0x128) = in_stack_000001e8;
          *(undefined8 *)(unaff_x23 + 0x120) = in_stack_000001e0;
          *(undefined8 *)(unaff_x23 + 0x138) = 0;
          *(ulong *)(unaff_x23 + 0x130) = (ulong)in_stack_000001f0;
          FUN_047e0f64(lVar50 + 0x10,&stack0x000012b0,uVar36);
          plVar2 = unaff_x19 + 0xd6;
          unaff_x19[0xd6] = unaff_x19[0x39];
          LeanTween__value();
          lVar50 = unaff_x19[0x7e];
          if (*(int *)(*unaff_x21 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          uVar30 = FUN_0634eb94(lVar50,0,0);
          if ((uVar30 & 1) != 0) {
            if (unaff_x19[0x7e] == 0) goto LAB_0613705c;
            FUN_061a1ff4(unaff_x19[0x7e],0);
          }
          if (unaff_x19[0x1f] != 0) {
            lVar50 = unaff_x19[0x94];
            fVar86 = *(float *)((long)unaff_x19 + 0x20c);
            fVar60 = (float)FUN_063ecbd8(unaff_x19[0x1f] + 0x28,0);
            if (unaff_x19[0x1f] != 0) {
              fVar61 = (float)FUN_063ecbe0(unaff_x19[0x1f] + 0x28,0);
              puVar13 = Method_System_HashCode_Combine<string,_Texture2D>__;
              fVar76 = DAT_010fd060;
              bVar16 = *(char *)((long)unaff_x19 + 0x33e) != '\0';
              fVar80 = DAT_010fd060;
              if (bVar16) {
                fVar80 = 1.0;
              }
              fVar61 = (fVar86 / fVar60) * fVar61;
              fVar60 = fVar61 * DAT_010fd060;
              if (bVar16) {
                fVar60 = fVar61;
              }
              fVar86 = *(float *)((long)unaff_x19 + 0x20c);
              *(undefined4 *)((long)unaff_x19 + 0x43c) = 0x3f800000;
              uVar36 = *(undefined8 *)puVar13;
              *(float *)(unaff_x19 + 0x42) = fVar86;
              FUN_047e1d10(unaff_x19 + 0x43,uVar36);
              *(uint *)((long)unaff_x19 + 0x284) = *(uint *)(unaff_x19 + 0x50);
              puVar14 = Method_System_HashCode_Combine<string,_string>__;
              if ((*(uint *)(unaff_x19 + 0x50) & 1) == 0) {
                uVar20 = (undefined4)unaff_x19[0x47];
              }
              else {
                uVar20 = 700;
              }
              *(undefined4 *)((long)unaff_x19 + 0x23c) = uVar20;
              FUN_047e0934(unaff_x19 + 0x48,uVar20,*(undefined8 *)puVar14);
              FUN_061a9b04(unaff_x19 + 0x51,0);
              uVar36 = *(undefined8 *)
                        Method_System_HashCode_Combine<ReadOnlyList<string>,_ReadOnlyList<string>>__
              ;
              *(undefined4 *)(unaff_x19 + 0x54) = *(undefined4 *)((long)unaff_x19 + 0x294);
              FUN_047e0934(unaff_x19 + 0x55,*(undefined4 *)((long)unaff_x19 + 0x294),uVar36);
              puVar14 = Method_System_HashCode_Add<FontAsset>__;
              *(undefined4 *)((long)unaff_x19 + 0x634) = 0;
              FUN_047e1d04(unaff_x19 + 199,*(undefined8 *)puVar14);
              if (DAT_06db4c71 == '\0') {
                FUN_02d965b8(PTR_DAT_069fb978);
                DAT_06db4c71 = '\x01';
              }
              pfVar39 = *(float **)(*(long *)PTR_DAT_069fb978 + 0xb8);
              fStack0000000000000074 = *pfVar39;
              fStack000000000000006c = pfVar39[1];
              fStack0000000000000070 = pfVar39[2];
              uVar20 = FUN_02ea7f18((int)unaff_x19[0x29],*(undefined4 *)((long)unaff_x19 + 0x14c),
                                    (int)unaff_x19[0x2a],*(undefined4 *)((long)unaff_x19 + 0x154),0)
              ;
              puVar14 = Method_System_HashCode_Combine<int,_bool>__;
              *(undefined4 *)((long)unaff_x19 + 0x144) = uVar20;
              *(undefined4 *)(unaff_x19 + 0xa0) = uVar20;
              uVar36 = *(undefined8 *)puVar14;
              *(undefined4 *)(unaff_x19 + 0x2b) = uVar20;
              *(undefined4 *)((long)unaff_x19 + 0x15c) = uVar20;
              FUN_047df698(unaff_x19 + 0xa1,uVar20,uVar36);
              FUN_047df698(unaff_x19 + 0xa5,(int)unaff_x19[0xa0],*(undefined8 *)puVar14);
              FUN_047df698(unaff_x19 + 0xa9,(int)unaff_x19[0xa0],*(undefined8 *)puVar14);
              lVar32 = unaff_x19[0xa0];
              if (*(int *)(*(long *)Method_UnityEngine_Hash128_Append<Vector2Int>__ + 0xe4) == 0) {
                thunk_FUN_02df485c();
              }
              if (DAT_06dc6716 == '\0') {
                FUN_02d965b8(Method_UnityEngine_Hash128_Append<Vector2Int>__);
                DAT_06dc6716 = '\x01';
              }
              puVar14 = Method_UnityEngine_Hash128_Append<Vector2Int>__;
              lVar31 = *(long *)Method_UnityEngine_Hash128_Append<Vector2Int>__;
              if (*(int *)(lVar31 + 0xe4) == 0) {
                thunk_FUN_02df485c();
                lVar31 = *(long *)puVar14;
              }
              puVar40 = *(undefined4 **)(lVar31 + 0xb8);
              in_stack_000001e0 = 0;
              in_stack_000001e8 = 0;
              in_stack_000001f0 = 0;
              FUN_06152bf0(*puVar40,puVar40[1],puVar40[2],puVar40[3],&stack0x000001e0,(int)lVar32,0)
              ;
              uVar53 = in_stack_000001f0;
              puVar14 = Method_System_HashCode_Add<TextSettings>__;
              *(undefined8 *)(unaff_x23 + 0x128) = in_stack_000001e8;
              *(undefined8 *)(unaff_x23 + 0x120) = in_stack_000001e0;
              FUN_047dfc90(unaff_x19 + 0xad,&stack0x000012b0,*(undefined8 *)puVar14);
              unaff_x19[0xb3] = 0;
              LeanTween__value(unaff_x19 + 0xb3,0);
              FUN_047e171c(unaff_x19 + 0xb4,0,
                           *(undefined8 *)Method_System_HashCode_Combine<sbyte,_sbyte>__);
              if (unaff_x19[0x20] != 0) {
                bVar18 = *(byte *)(unaff_x19[0x20] + 0x1b0);
                uVar36 = *(undefined8 *)Method_System_HashCode_Combine<long,_long>__;
                *(uint *)(unaff_x19 + 0xc1) = (uint)bVar18;
                FUN_047e0378(unaff_x19 + 0xbd,bVar18,uVar36);
                FUN_047e036c(unaff_x19 + 0xc2,*(undefined8 *)Method_System_HashCode_Add<Rect>__);
                if (DAT_06db4dff == '\0') {
                  FUN_02d965b8(PTR_DAT_069fb978);
                  DAT_06db4dff = '\x01';
                }
                cVar38 = DAT_06db4d49;
                uVar20 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_069fb978 + 0xb8) + 0x14);
                *(undefined8 *)((long)unaff_x19 + 0x47c) =
                     *(undefined8 *)(*(long *)(*(long *)PTR_DAT_069fb978 + 0xb8) + 0xc);
                *(undefined4 *)((long)unaff_x19 + 0x484) = uVar20;
                if (cVar38 == '\0') {
                  FUN_02d965b8(PTR_DAT_069fc390);
                  DAT_06db4d49 = '\x01';
                }
                auVar78 = **(undefined1 (**) [16])(*(long *)PTR_DAT_069fc390 + 0xb8);
                *(undefined4 *)((long)unaff_x19 + 0x4ec) = 0;
                *(undefined4 *)((long)unaff_x19 + 0x2ec) = 0xc6fffe00;
                *(long *)((long)unaff_x19 + 0x474) = auVar78._8_8_;
                *(undefined8 *)((long)unaff_x19 + 0x46c) = auVar78._0_8_;
                if (unaff_x19[0x20] != 0) {
                  fVar61 = (float)FUN_063ecc00(unaff_x19[0x20] + 0x28,0);
                  if (unaff_x19[0x20] != 0) {
                    fVar62 = (float)FUN_063ecc08(unaff_x19[0x20] + 0x28,0);
                    if (unaff_x19[0x20] != 0) {
                      fVar63 = (float)FUN_063ecc38(unaff_x19[0x20] + 0x28,0);
                      *(undefined4 *)(unaff_x19 + 0xcb) = 0;
                      *(undefined8 *)((long)unaff_x19 + 0x2d4) = 0;
                      unaff_x19[0x88] = 0;
                      FUN_047e1d10(ZEXT816(0),unaff_x19 + 0x89,*(undefined8 *)puVar13);
                      *(undefined4 *)((long)unaff_x19 + 0x4a4) = 0;
                      *(undefined1 *)(unaff_x19 + 0x8d) = 0;
                      *(undefined8 *)((long)unaff_x19 + 0x4ac) = 0;
                      lVar32 = *plVar41;
                      *(undefined4 *)(unaff_x19 + 0x95) = *(undefined4 *)((long)unaff_x19 + 0x35c);
                      *(undefined4 *)((long)unaff_x19 + 0x4b4) = 0;
                      if (*(int *)(lVar32 + 0xe4) == 0) {
                        thunk_FUN_02df485c();
                        lVar32 = *plVar41;
                      }
                      uVar36 = *(undefined8 *)(*(long *)(lVar32 + 0xb8) + 0x1730);
                      *(undefined8 *)((long)unaff_x19 + 0x4e4) = 0;
                      *(undefined4 *)((long)unaff_x19 + 0x314) = 0xffffffff;
                      uVar36 = NEON_rev64(uVar36,4);
                      *(undefined4 *)(unaff_x19 + 0x98) = 0;
                      *(undefined1 *)(unaff_x19 + 0x5e) = 0;
                      unaff_x19[0x97] = 0;
                      *(undefined4 *)((long)unaff_x19 + 0x32c) = 0x80000000;
                      *(undefined8 *)((long)unaff_x19 + 0x4dc) = uVar36;
                      puVar13 = 
                      Method_UnityEngine_XR_Interaction_Toolkit_UI_BodyUI_HandMenu_OnMenuHidden__;
                      if (unaff_x19[0x66] != 0) {
                        uVar21 = FUN_0408b858(unaff_x19[0x66],0x6b65726e,
                                              *(undefined8 *)
                                               Method_UnityEngine_XR_Interaction_Toolkit_UI_BodyUI_HandMenu_OnMenuHidden__
                                             );
                        if (unaff_x19[0x66] != 0) {
                          uVar22 = FUN_0408b858(unaff_x19[0x66],0x6d61726b,*(undefined8 *)puVar13);
                          if (unaff_x19[0x66] != 0) {
                            uVar23 = FUN_0408b858(unaff_x19[0x66],0x6d6b6d6b,*(undefined8 *)puVar13)
                            ;
                            lVar32 = unaff_x19[0x74];
                            *(undefined4 *)((long)unaff_x19 + 0x4c4) = 0;
                            if ((lVar32 != 0) && (*(long *)(lVar32 + 0x58) != 0)) {
                              uVar6 = (int)unaff_x19[0x6e] - 1;
                              uVar7 = *(int *)(*(long *)(lVar32 + 0x58) + 0x18) - 1;
                              uVar95 = uVar6;
                              if ((int)uVar7 <= (int)uVar6) {
                                uVar95 = uVar7;
                              }
                              uVar7 = 0;
                              if (-1 < (int)uVar6) {
                                uVar7 = uVar95;
                              }
                              FUN_061a8a5c(lVar32,0);
                              lVar32 = *plVar41;
                              *(undefined4 *)(unaff_x19 + 0x73) = 0xbf800000;
                              fVar75 = *(float *)((long)unaff_x19 + 0x37c);
                              fVar93 = *(float *)(unaff_x19 + 0x72);
                              fVar91 = *(float *)((long)unaff_x19 + 0x394);
                              unaff_x19[0x71] = 0;
                              fVar64 = *(float *)(unaff_x19 + 0x6f);
                              fVar65 = *(float *)((long)unaff_x19 + 900);
                              if (*(int *)(lVar32 + 0xe4) == 0) {
                                thunk_FUN_02df485c();
                                lVar32 = *plVar41;
                              }
                              unaff_x19[0x9e] = *(long *)(*(long *)(lVar32 + 0xb8) + 0x1720);
                              unaff_x19[0x9f] = *(long *)(*(long *)(lVar32 + 0xb8) + 0x1728);
                              if (unaff_x19[0x74] != 0) {
                                FUN_061a88d0(unaff_x19[0x74],0);
                                *(undefined4 *)(unaff_x19 + 0x9a) = 0;
                                *(undefined4 *)(unaff_x19 + 0x9b) = 0;
                                fVar97 = 0.0;
                                *(undefined1 *)(unaff_x23 + 0x114) = 0;
                                unaff_x19[0x99] = 0;
                                *(undefined1 *)((long)unaff_x19 + 0x374) = 0;
                                *(undefined1 *)((long)unaff_x19 + 0x309) = 0;
                                UnityEngine_XR_Interaction_Toolkit_Inputs_Simulation_XRInteractionSimulator__ClearControllerButtonInput
                                          (&stack0x00001298,0xffffffff,0,0);
                                FUN_061840e4();
                                FUN_061840e4();
                                FUN_061840e4();
                                FUN_061840e4();
                                FUN_061840e4();
                                FUN_047e2338(*(long *)(*plVar41 + 0xb8) + 0x1338,
                                             *(undefined8 *)Method_System_HashCode_Add<int>__);
                                fVar12 = DAT_010fcf5c;
                                fVar82 = DAT_010fce24;
                                lVar32 = unaff_x19[0x91];
                                uVar95 = 0;
                                if (lVar32 != 0) {
                                  iVar58 = 0;
                                  if (fVar93 <= 0.0) {
                                    fVar93 = 0.0;
                                  }
                                  fVar61 = fVar61 - (fVar62 - fVar63);
                                  if (fVar91 <= 0.0) {
                                    fVar91 = 0.0;
                                  }
                                  plVar3 = unaff_x19 + 0xcc;
                                  fVar80 = fVar80 * fVar86 * DAT_010fcf5c;
                                  iStack0000000000000020 = 0;
                                  uVar6 = (int)lVar50 - 1;
                                  bVar19 = 0;
                                  fVar89 = 0.0;
                                  fVar93 = fVar93 + DAT_010fd0fc;
                                  fVar63 = fVar91 + DAT_010fd0fc;
                                  auVar78 = ZEXT416((uint)DAT_010fce24);
                                  bVar16 = true;
                                  bVar18 = 1;
                                  fVar86 = fVar93;
                                  fVar62 = fVar60;
                                  fStack0000000000000134 = fVar93;
                                  uVar98 = 0;
LAB_0612ff1c:
                                  fVar67 = 1.0;
                                  if ((int)*(uint *)(lVar32 + 0x18) <= (int)uVar95) {
LAB_06134474:
                                    if ((char)unaff_x19[0x4c] == '\0') {
LAB_0613453c:
                                      iVar58 = *(int *)((long)unaff_x19 + 0x26c);
                                      iVar28 = (int)unaff_x19[0x4e];
                                    }
                                    else {
                                      fVar86 = *(float *)((long)unaff_x19 + 0x264);
                                      auVar78 = ZEXT416((uint)DAT_010fd030);
                                      if (fVar86 - *(float *)(unaff_x19 + 0x4d) <= DAT_010fd030)
                                      goto LAB_0613453c;
                                      fVar60 = *(float *)((long)unaff_x19 + 0x20c);
                                      fVar76 = *(float *)((long)unaff_x19 + 0x27c);
                                      auVar78 = ZEXT416((uint)fVar76);
                                      iVar58 = *(int *)((long)unaff_x19 + 0x26c);
                                      iVar28 = (int)unaff_x19[0x4e];
                                      if ((fVar60 < fVar76) && (iVar58 < iVar28)) {
                                        if (*(float *)(unaff_x19 + 0x60) <
                                            *(float *)((long)unaff_x19 + 0x2fc) / 100.0) {
                                          *(undefined4 *)(unaff_x19 + 0x60) = 0;
                                        }
                                        fVar80 = DAT_010fcf54;
                                        *(float *)(unaff_x19 + 0x4d) = fVar60;
                                        fVar86 = (fVar86 - fVar60) * 0.5;
                                        if (fVar86 <= fVar80) {
                                          fVar86 = fVar80;
                                        }
                                        fVar86 = (fVar60 + fVar86) * 20.0 + 0.5;
                                        fVar60 = DAT_010fd008;
                                        if (fVar86 != INFINITY) {
                                          fVar60 = (float)(int)fVar86 / 20.0;
                                        }
                                        if (fVar76 <= fVar60) {
                                          fVar60 = fVar76;
                                        }
LAB_06134534:
                                        *(float *)((long)unaff_x19 + 0x20c) = fVar60;
                                        return;
                                      }
                                    }
                                    *(undefined1 *)((long)unaff_x19 + 0x274) = 1;
                                    if (iVar28 <= iVar58) {
                                      uVar36 = FUN_054e5768((long)unaff_x19 + 0x26c,0);
                                      uVar33 = FUN_054fabf8((long)unaff_x19 + 0x20c,0);
                                      uVar36 = FUN_0536dcdc(*(undefined8 *)
                                                                                                                          
                                                  Method_System_HashCode_Combine<uint,_NativeArray<CAPI_ovrAvatar2Transform>,_NativeArray<CAPI_ovrAvatar2Transform>,_NativeArray<int>,_NativeArray<CAPI_ovrAvatar2NodeId>>__
                                                  ,uVar36,*(undefined8 *)
                                                                                                                      
                                                  Method_System_HashCode_Combine<string,_AssemblyVersion,_string,_string>__
                                                  ,uVar33,0);
                                      if (*(int *)(*plVar55 + 0xe4) == 0) {
                                        thunk_FUN_02df485c(*plVar55);
                                      }
                                      FUN_0630b598(uVar36,0);
                                    }
                                    if ((*(int *)((long)unaff_x19 + 0x4a4) == 0) ||
                                       ((*(int *)((long)unaff_x19 + 0x4a4) == 1 && (uVar98 == 3))))
                                    {
                                      (**(code **)(*unaff_x19 + 0x958))();
                                      goto LAB_061345f8;
                                    }
                                    lVar50 = *plVar41;
                                    if (*(int *)(lVar50 + 0xe4) == 0) {
                                      thunk_FUN_02df485c();
                                      lVar50 = *plVar41;
                                    }
                                    lVar50 = **(long **)(lVar50 + 0xb8);
                                    if (lVar50 == 0) goto LAB_0613705c;
                                    if (*(uint *)(lVar50 + 0x18) <= *(uint *)(unaff_x19 + 0xd4))
                                    goto LAB_0613719c;
                                    iVar58 = *(int *)(lVar50 + (long)(int)*(uint *)(unaff_x19 + 0xd4
                                                                                   ) * 0x38 + 0x54)
                                             << 2;
                                    if ((unaff_x19[0x74] == 0) ||
                                       (lVar50 = *(long *)(unaff_x19[0x74] + 0x60), lVar50 == 0))
                                    goto LAB_0613705c;
                                    if (*(int *)(*(long *)Method_UnityEngine_Hash128_Append<bool>__
                                                + 0xe4) == 0) {
                                      thunk_FUN_02df485c();
                                    }
                                    if (*(int *)(lVar50 + 0x18) == 0) goto LAB_0613719c;
                                    FUN_0619c804(lVar50 + 0x20,0,0);
                                    fStack00000000000000b0 = (float)FUN_02ffcdb8(0);
                                    iVar28 = (int)unaff_x19[0x53];
                                    lVar50 = unaff_x19[0xee];
                                    fStack00000000000000ac = fVar86;
                                    if (iVar28 < 0x401) {
                                      if (iVar28 == 0x100) {
                                        if ((int)unaff_x19[0x62] == 5) {
                                          if (lVar50 == 0) goto LAB_0613705c;
                                          if ((*(uint *)(lVar50 + 0x18) & 0xfffffffe) == 0)
                                          goto LAB_0613719c;
                                          if ((unaff_x19[0x74] == 0) ||
                                             (lVar32 = *(long *)(unaff_x19[0x74] + 0x58),
                                             lVar32 == 0)) goto LAB_0613705c;
                                          if (*(uint *)(lVar32 + 0x18) <= uVar7) goto LAB_0613719c;
                                          fVar60 = *(float *)(lVar32 + (long)(int)uVar7 * 0x14 +
                                                             0x28);
                                        }
                                        else {
                                          if (lVar50 == 0) goto LAB_0613705c;
                                          if ((*(uint *)(lVar50 + 0x18) & 0xfffffffe) == 0)
                                          goto LAB_0613719c;
                                          fVar60 = *(float *)((long)unaff_x19 + 0x4cc);
                                        }
                                        fStack00000000000000ac = *(float *)(lVar50 + 0x34);
                                        fVar65 = (0.0 - fVar60) - fVar75;
                                        fVar86 = *(float *)(lVar50 + 0x2c);
                                        fVar60 = *(float *)(lVar50 + 0x30);
LAB_061349f4:
                                        fVar86 = fVar64 + 0.0 + fVar86;
                                        fVar60 = fVar60 + fVar65;
                                      }
                                      else {
                                        if (iVar28 != 0x200) {
                                          if (iVar28 != 0x400) goto LAB_06134a08;
                                          if ((int)unaff_x19[0x62] == 5) {
                                            if (lVar50 == 0) goto LAB_0613705c;
                                            if (*(int *)(lVar50 + 0x18) == 0) goto LAB_0613719c;
                                            if ((unaff_x19[0x74] == 0) ||
                                               (lVar32 = *(long *)(unaff_x19[0x74] + 0x58),
                                               lVar32 == 0)) goto LAB_0613705c;
                                            if (*(uint *)(lVar32 + 0x18) <= uVar7)
                                            goto LAB_0613719c;
                                            fVar97 = *(float *)(lVar32 + (long)(int)uVar7 * 0x14 +
                                                               0x30);
                                          }
                                          else {
                                            if (lVar50 == 0) goto LAB_0613705c;
                                            if (*(int *)(lVar50 + 0x18) == 0) goto LAB_0613719c;
                                          }
                                          fStack00000000000000ac = *(float *)(lVar50 + 0x28);
                                          fVar65 = fVar65 + (0.0 - fVar97);
                                          fVar86 = *(float *)(lVar50 + 0x20);
                                          fVar60 = *(float *)(lVar50 + 0x24);
                                          goto LAB_061349f4;
                                        }
                                        if ((int)unaff_x19[0x62] != 5) {
                                          if (lVar50 != 0) {
                                            if ((*(int *)(lVar50 + 0x18) != 1) &&
                                               (*(int *)(lVar50 + 0x18) != 0)) {
                                              fVar60 = *(float *)((long)unaff_x19 + 0x4cc);
                                              goto LAB_06134928;
                                            }
                                            goto LAB_0613719c;
                                          }
                                          goto LAB_0613705c;
                                        }
                                        if (lVar50 == 0) goto LAB_0613705c;
                                        if ((*(int *)(lVar50 + 0x18) == 1) ||
                                           (*(int *)(lVar50 + 0x18) == 0)) goto LAB_0613719c;
                                        if ((unaff_x19[0x74] == 0) ||
                                           (lVar32 = *(long *)(unaff_x19[0x74] + 0x58), lVar32 == 0)
                                           ) goto LAB_0613705c;
                                        if (*(uint *)(lVar32 + 0x18) <= uVar7) goto LAB_0613719c;
                                        lVar32 = lVar32 + (long)(int)uVar7 * 0x14;
                                        fStack00000000000000ac =
                                             (*(float *)(lVar50 + 0x28) + *(float *)(lVar50 + 0x34))
                                             * 0.5;
                                        fVar86 = fVar64 + 0.0 +
                                                 ((float)*(undefined8 *)(lVar50 + 0x20) +
                                                 (float)*(undefined8 *)(lVar50 + 0x2c)) * 0.5;
                                        fVar60 = (0.0 - ((fVar75 + *(float *)(lVar32 + 0x28) +
                                                         *(float *)(lVar32 + 0x30)) - fVar65) * 0.5)
                                                 + ((float)((ulong)*(undefined8 *)(lVar50 + 0x20) >>
                                                           0x20) +
                                                   (float)((ulong)*(undefined8 *)(lVar50 + 0x2c) >>
                                                          0x20)) * 0.5;
                                      }
                                      fStack00000000000000ac = fStack00000000000000ac + 0.0;
                                      auVar78 = ZEXT416((uint)fVar60);
                                      fStack00000000000000b0 = fVar86;
                                    }
                                    else if (iVar28 == 0x800) {
                                      if (lVar50 == 0) goto LAB_0613705c;
                                      if ((*(int *)(lVar50 + 0x18) == 1) ||
                                         (*(int *)(lVar50 + 0x18) == 0)) goto LAB_0613719c;
                                      fVar86 = (*(float *)(lVar50 + 0x28) +
                                               *(float *)(lVar50 + 0x34)) * 0.5;
                                      fStack00000000000000ac = fVar86 + 0.0;
                                      auVar78 = ZEXT416((uint)(((float)((ulong)*(undefined8 *)
                                                                                (lVar50 + 0x20) >>
                                                                       0x20) +
                                                               (float)((ulong)*(undefined8 *)
                                                                               (lVar50 + 0x2c) >>
                                                                      0x20)) * 0.5 + 0.0));
                                      fStack00000000000000b0 =
                                           ((float)*(undefined8 *)(lVar50 + 0x20) +
                                           (float)*(undefined8 *)(lVar50 + 0x2c)) * 0.5 +
                                           fVar64 + 0.0;
                                    }
                                    else {
                                      if (iVar28 == 0x1000) {
                                        if (lVar50 == 0) goto LAB_0613705c;
                                        if ((*(int *)(lVar50 + 0x18) == 1) ||
                                           (*(int *)(lVar50 + 0x18) == 0)) goto LAB_0613719c;
                                        fVar60 = *(float *)((long)unaff_x19 + 0x4fc);
                                        fVar97 = *(float *)((long)unaff_x19 + 0x4f4);
LAB_06134928:
                                        fVar75 = fVar75 + fVar60 + fVar97;
                                      }
                                      else {
                                        if (iVar28 != 0x2000) goto LAB_06134a08;
                                        if (lVar50 == 0) goto LAB_0613705c;
                                        if ((*(int *)(lVar50 + 0x18) == 1) ||
                                           (*(int *)(lVar50 + 0x18) == 0)) goto LAB_0613719c;
                                        fVar75 = *(float *)(unaff_x19 + 0x9a) - fVar75;
                                      }
                                      fVar86 = fVar64 + 0.0;
                                      auVar78._0_4_ =
                                           ((float)*(undefined8 *)(lVar50 + 0x24) +
                                           (float)*(undefined8 *)(lVar50 + 0x30)) * 0.5 +
                                           (0.0 - (fVar75 - fVar65) * 0.5);
                                      auVar78._4_4_ =
                                           ((float)((ulong)*(undefined8 *)(lVar50 + 0x24) >> 0x20) +
                                           (float)((ulong)*(undefined8 *)(lVar50 + 0x30) >> 0x20)) *
                                           0.5 + 0.0;
                                      auVar78._8_8_ = 0;
                                      fStack00000000000000ac = auVar78._4_4_;
                                      fStack00000000000000b0 =
                                           fVar86 + (*(float *)(lVar50 + 0x20) +
                                                    *(float *)(lVar50 + 0x2c)) * 0.5;
                                    }
LAB_06134a08:
                                    auVar74 = auVar78;
                                    fStack0000000000000100 = (float)FUN_02ffcdb8(0);
                                    auVar79 = auVar74;
                                    FUN_02ffcdb8(0);
                                    lVar50 = FUN_06141a60();
                                    if (lVar50 != 0) {
                                      FUN_0635fd58(lVar50,0);
                                      *(float *)((long)unaff_x19 + 0x6fc) = auVar79._0_4_;
                                      uStack000000000000007c =
                                           FUN_02ea7f18(ZEXT816(0x3f800000),ZEXT816(0x3f800000),
                                                        0x3f800000,0x3f800000,0);
                                      FUN_02ea7f18(ZEXT816(0x3f800000),ZEXT816(0x3f800000),
                                                   0x3f800000,0x3f800000,0);
                                      if (*(int *)(*(long *)
                                                  Method_UnityEngine_Hash128_Append<Vector2Int>__ +
                                                  0xe4) == 0) {
                                        thunk_FUN_02df485c(*(long *)
                                                  Method_UnityEngine_Hash128_Append<Vector2Int>__);
                                      }
                                      FUN_061371d8(0);
                                      FUN_06152bf0(&stack0x00001280,0x4000ffff,0);
                                      if (*(int *)(*plVar41 + 0xe4) == 0) {
                                        thunk_FUN_02df485c();
                                      }
                                      lVar50 = unaff_x19[0x74];
                                      if (lVar50 != 0) {
                                        iVar28 = *(int *)((long)unaff_x19 + 0x4a4);
                                        if (iVar28 < 1) {
                                          iStack00000000000000dc = 0;
                                          iVar46 = 0;
                                          goto LAB_06136c20;
                                        }
                                        lVar50 = *(long *)(lVar50 + 0x38);
                                        if (lVar50 != 0) {
                                          fStack0000000000000190 = auVar78._0_4_;
                                          fVar76 = 0.0;
                                          bVar11 = false;
                                          uVar21 = 0;
                                          uVar53 = 0;
                                          lVar32 = lVar50 + 0x20;
                                          fStack0000000000000120 =
                                               *(float *)(*(long *)(*plVar41 + 0xb8) + 0x1730);
                                          bVar15 = false;
                                          bVar10 = false;
                                          iStack00000000000000dc = 0;
                                          fStack0000000000000104 = auVar74._0_4_;
                                          uStack0000000000000048 = 0;
                                          bVar16 = false;
                                          iVar46 = 0;
                                          fStack0000000000000054 = 0.0;
                                          fStack000000000000011c = 0.0;
                                          fStack000000000000013c = 0.0;
                                          fStack000000000000009c = 0.0;
                                          fStack0000000000000078 = 0.0;
                                          uVar22 = 0;
                                          fStack0000000000000094 = fStack0000000000000074;
                                          fStack0000000000000098 = fStack000000000000006c;
                                          fStack00000000000000cc = fStack0000000000000074;
                                          fStack00000000000000d8 = fStack0000000000000074;
                                          fStack00000000000000f0 = fVar86;
                                          fStack00000000000000f4 = fStack000000000000006c;
                                          fStack00000000000000d0 = fStack000000000000006c;
                                          fVar60 = fStack0000000000000070;
                                          goto LAB_06134b8c;
                                        }
                                      }
                                    }
                                    goto LAB_0613705c;
                                  }
                                  if (*(uint *)(lVar32 + 0x18) <= uVar95) goto LAB_0613719c;
                                  uVar24 = *(uint *)(lVar32 + (long)(int)uVar95 * 0x10 + 0x24);
                                  if (uVar24 == 0) goto LAB_06134474;
                                  if (5 < iVar58) {
                                    uVar36 = FUN_05504f24(&stack0x000012ac,0);
                                    uVar33 = FUN_054e5768(&stack0x00001278,0);
                                    uVar36 = FUN_0536dcdc(*(undefined8 *)
                                                                                                                      
                                                  Method_System_HashCode_Combine<float,_float,_float,_float>__
                                                  ,uVar36,*(undefined8 *)
                                                                                                                      
                                                  Method_System_HashCode_Combine<ushort,_ushort,_ushort,_ushort>__
                                                  ,uVar33,0);
                                    if (*(int *)(*plVar55 + 0xe4) == 0) {
                                      thunk_FUN_02df485c(*plVar55);
                                    }
                                    FUN_0630bbe4(uVar36,0);
                                    in_stack_00001298 =
                                         CONCAT44(3,*(undefined4 *)((long)unaff_x19 + 0x4a4));
                                  }
                                  if (uVar24 != 0x1a) {
                                    if ((uVar24 == 0x3c) &&
                                       (*(char *)((long)unaff_x19 + 0x33a) != '\0')) {
                                      *(undefined1 *)((long)unaff_x19 + 0x469) = 1;
                                      *(undefined4 *)((long)unaff_x19 + 0x65c) = 0;
                                      uVar30 = FUN_0617e944();
                                      if (((uVar30 & 1) != 0) &&
                                         (uVar95 = in_stack_0000124c,
                                         *(int *)((long)unaff_x19 + 0x65c) == 0)) goto LAB_06133f74;
                                    }
                                    else {
                                      if ((unaff_x19[0x74] == 0) ||
                                         (lVar32 = *(long *)(unaff_x19[0x74] + 0x38), lVar32 == 0))
                                      goto LAB_0613705c;
                                      if (*(uint *)(lVar32 + 0x18) <=
                                          *(uint *)((long)unaff_x19 + 0x4a4)) goto LAB_0613719c;
                                      lVar32 = lVar32 + (long)(int)*(uint *)((long)unaff_x19 + 0x4a4
                                                                            ) * 0x178;
                                      *(undefined4 *)((long)unaff_x19 + 0x65c) =
                                           *(undefined4 *)(lVar32 + 0x20);
                                      *(undefined4 *)(unaff_x19 + 0x24) =
                                           *(undefined4 *)(lVar32 + 0x50);
                                      unaff_x19[0x20] = *(long *)(lVar32 + 0x40);
                                      LeanTween__value(unaff_x19 + 0x20);
                                    }
                                    if ((unaff_x19[0x74] == 0) ||
                                       (lVar32 = *(long *)(unaff_x19[0x74] + 0x38), lVar32 == 0))
                                    goto LAB_0613705c;
                                    uVar98 = *(uint *)((long)unaff_x19 + 0x4a4);
                                    if (*(uint *)(lVar32 + 0x18) <= uVar98) goto LAB_0613719c;
                                    lVar31 = lVar32 + 0x20;
                                    uVar96 = (uint)in_stack_00001298;
                                    lVar48 = unaff_x19[0x24];
                                    cVar38 = *(char *)(lVar31 + (long)(int)uVar98 * 0x178 + 0x34);
                                    *(undefined1 *)((long)unaff_x19 + 0x469) = 0;
                                    uVar25 = uVar98;
                                    if (uVar96 == uVar98) {
                                      uVar24 = (uint)((ulong)in_stack_00001298 >> 0x20);
                                      *(undefined4 *)((long)unaff_x19 + 0x65c) = 0;
                                      if (uVar24 == 0x2026) {
                                        *(long *)(lVar31 + (long)(int)uVar98 * 0x178 + 0x10) =
                                             unaff_x19[0xcd];
                                        LeanTween__value();
                                        if ((unaff_x19[0x74] == 0) ||
                                           (lVar32 = *(long *)(unaff_x19[0x74] + 0x38), lVar32 == 0)
                                           ) goto LAB_0613705c;
                                        if (*(uint *)(lVar32 + 0x18) <=
                                            *(uint *)((long)unaff_x19 + 0x4a4)) goto LAB_0613719c;
                                        lVar32 = lVar32 + (long)(int)*(uint *)((long)unaff_x19 +
                                                                              0x4a4) * 0x178;
                                        *(long *)(lVar32 + 0x40) = unaff_x19[0xce];
                                        *(undefined4 *)(lVar32 + 0x20) = 0;
                                        LeanTween__value();
                                        if ((unaff_x19[0x74] == 0) ||
                                           (lVar32 = *(long *)(unaff_x19[0x74] + 0x38), lVar32 == 0)
                                           ) goto LAB_0613705c;
                                        if (*(uint *)(lVar32 + 0x18) <=
                                            *(uint *)((long)unaff_x19 + 0x4a4)) goto LAB_0613719c;
                                        *(long *)(lVar32 + (long)(int)*(uint *)((long)unaff_x19 +
                                                                               0x4a4) * 0x178 + 0x48
                                                 ) = unaff_x19[0xcf];
                                        LeanTween__value();
                                        if ((unaff_x19[0x74] == 0) ||
                                           (lVar32 = *(long *)(unaff_x19[0x74] + 0x38), lVar32 == 0)
                                           ) goto LAB_0613705c;
                                        if (*(uint *)(lVar32 + 0x18) <=
                                            *(uint *)((long)unaff_x19 + 0x4a4)) goto LAB_0613719c;
                                        *(int *)(lVar32 + (long)(int)*(uint *)((long)unaff_x19 +
                                                                              0x4a4) * 0x178 + 0x50)
                                             = (int)unaff_x19[0xd0];
                                        puVar13 = Method_System_HashCode_Combine<ulong,_int>__;
                                        lVar32 = *(long *)
                                                  Method_System_HashCode_Combine<ulong,_int>__;
                                        if (*(int *)(lVar32 + 0xe4) == 0) {
                                          thunk_FUN_02df485c();
                                          lVar32 = *(long *)puVar13;
                                        }
                                        lVar32 = **(long **)(lVar32 + 0xb8);
                                        if (lVar32 == 0) goto LAB_0613705c;
                                        if (*(uint *)(lVar32 + 0x18) <= *(uint *)(unaff_x19 + 0xd4))
                                        goto LAB_0613719c;
                                        lVar32 = lVar32 + (long)(int)*(uint *)(unaff_x19 + 0xd4) *
                                                          0x38;
                                        *(int *)(lVar32 + 0x54) = *(int *)(lVar32 + 0x54) + 1;
                                        *(undefined1 *)(unaff_x19 + 0x65) = 1;
                                        in_stack_00001298 =
                                             CONCAT44(3,*(uint *)((long)unaff_x19 + 0x4a4) + 1);
                                        uVar25 = *(uint *)((long)unaff_x19 + 0x4a4);
                                      }
                                      else if (uVar24 == 3) {
                                        if ((unaff_x19[0x20] == 0) ||
                                           (lVar34 = FUN_0615ad34(unaff_x19[0x20],0), lVar34 == 0))
                                        goto LAB_0613705c;
                                        uVar36 = FUN_04f94af4(lVar34,3,*(undefined8 *)
                                                                                                                                                
                                                  Method_UnityEngine_XR_Interaction_Toolkit_UI_BodyUI_HandMenu_<OnEnable>b__80_3__
                                                  );
                                        if (*(uint *)(lVar32 + 0x18) <= uVar98) goto LAB_0613719c;
                                        *(undefined8 *)(lVar31 + (long)(int)uVar98 * 0x178 + 0x10) =
                                             uVar36;
                                        LeanTween__value();
                                        *(undefined1 *)(unaff_x19 + 0x65) = 1;
                                        uVar25 = *(uint *)((long)unaff_x19 + 0x4a4);
                                      }
                                    }
                                    plVar41 = (long *)Method_System_HashCode_Combine<ulong,_int>__;
                                    if (((int)uVar25 < *(int *)((long)unaff_x19 + 0x35c)) &&
                                       (uVar24 != 3)) {
                                      if ((unaff_x19[0x74] == 0) ||
                                         (lVar32 = *(long *)(unaff_x19[0x74] + 0x38), lVar32 == 0))
                                      goto LAB_0613705c;
                                      if (*(uint *)(lVar32 + 0x18) <= uVar25) goto LAB_0613719c;
                                      lVar32 = lVar32 + (long)(int)uVar25 * 0x178;
                                      *(undefined1 *)(lVar32 + 400) = 0;
                                      *(undefined2 *)(lVar32 + 0x24) = 0x200b;
                                      *(undefined4 *)(lVar32 + 0x5c) = 0;
                                      *(uint *)((long)unaff_x19 + 0x4a4) = uVar25 + 1;
                                    }
                                    else {
                                      iVar28 = *(int *)((long)unaff_x19 + 0x65c);
                                      if (iVar28 == 0) {
                                        uVar25 = *(uint *)((long)unaff_x19 + 0x284);
                                        if ((uVar25 >> 4 & 1) == 0) {
                                          if ((uVar25 >> 3 & 1) == 0) {
                                            fStack0000000000000138 = 1.0;
                                            if ((uVar25 >> 5 & 1) != 0) {
                                              if (*(int *)(*(long *)(PTR_DAT_069fb9c0 + 0x88) + 0xe4
                                                          ) == 0) {
                                                thunk_FUN_02df485c();
                                              }
                                              uVar30 = FUN_054585ac(uVar24,0);
                                              if ((uVar30 & 1) != 0) {
                                                if (*(int *)(*(long *)(PTR_DAT_069fb9c0 + 0x88) +
                                                            0xe4) == 0) {
                                                  thunk_FUN_02df485c();
                                                }
                                                uVar24 = FUN_05458834(uVar24,0);
                                                fStack0000000000000138 = fVar82;
                                                goto LAB_061308e8;
                                              }
                                            }
                                          }
                                          else {
                                            if (*(int *)(*(long *)(PTR_DAT_069fb9c0 + 0x88) + 0xe4)
                                                == 0) {
                                              thunk_FUN_02df485c();
                                            }
                                            uVar30 = FUN_0545850c(uVar24,0);
                                            fStack0000000000000138 = 1.0;
                                            if ((uVar30 & 1) != 0) {
                                              if (*(int *)(*(long *)(PTR_DAT_069fb9c0 + 0x88) + 0xe4
                                                          ) == 0) {
                                                thunk_FUN_02df485c();
                                              }
                                              uVar24 = FUN_054589ac(uVar24,0);
                                              goto LAB_061308e8;
                                            }
                                          }
                                        }
                                        else {
                                          if (*(int *)(*(long *)(PTR_DAT_069fb9c0 + 0x88) + 0xe4) ==
                                              0) {
                                            thunk_FUN_02df485c();
                                          }
                                          uVar30 = FUN_054585ac(uVar24,0);
                                          fStack0000000000000138 = 1.0;
                                          if ((uVar30 & 1) != 0) {
                                            if (*(int *)(*(long *)(PTR_DAT_069fb9c0 + 0x88) + 0xe4)
                                                == 0) {
                                              thunk_FUN_02df485c();
                                            }
                                            uVar24 = FUN_05458834(uVar24,0);
LAB_061308e8:
                                            uVar24 = uVar24 & 0xffff;
                                          }
                                        }
                                        iVar28 = *(int *)((long)unaff_x19 + 0x65c);
                                        if (iVar28 != 0) goto LAB_061302bc;
LAB_061308f8:
                                        if ((unaff_x19[0x74] == 0) ||
                                           (lVar32 = *(long *)(unaff_x19[0x74] + 0x38), lVar32 == 0)
                                           ) goto LAB_0613705c;
                                        if (*(uint *)(lVar32 + 0x18) <=
                                            *(uint *)((long)unaff_x19 + 0x4a4)) goto LAB_0613719c;
                                        *plVar3 = *(long *)(lVar32 + (long)(int)*(uint *)((long)
                                                  unaff_x19 + 0x4a4) * 0x178 + 0x30);
                                        LeanTween__value(plVar3);
                                        plVar41 = (long *)
                                                  Method_System_HashCode_Combine<ulong,_int>__;
                                        if (*plVar3 == 0) goto LAB_06133f74;
                                        if ((unaff_x19[0x74] == 0) ||
                                           (lVar32 = *(long *)(unaff_x19[0x74] + 0x38), lVar32 == 0)
                                           ) goto LAB_0613705c;
                                        if (*(uint *)(lVar32 + 0x18) <=
                                            *(uint *)((long)unaff_x19 + 0x4a4)) goto LAB_0613719c;
                                        unaff_x19[0x20] =
                                             *(long *)(lVar32 + (long)(int)*(uint *)((long)unaff_x19
                                                                                    + 0x4a4) * 0x178
                                                      + 0x40);
                                        LeanTween__value(unaff_x19 + 0x20);
                                        if ((unaff_x19[0x74] == 0) ||
                                           (lVar32 = *(long *)(unaff_x19[0x74] + 0x38), lVar32 == 0)
                                           ) goto LAB_0613705c;
                                        if (*(uint *)(lVar32 + 0x18) <=
                                            *(uint *)((long)unaff_x19 + 0x4a4)) goto LAB_0613719c;
                                        unaff_x19[0x23] =
                                             *(long *)(lVar32 + (long)(int)*(uint *)((long)unaff_x19
                                                                                    + 0x4a4) * 0x178
                                                      + 0x48);
                                        LeanTween__value(unaff_x19 + 0x23);
                                        if ((unaff_x19[0x74] == 0) ||
                                           (lVar32 = *(long *)(unaff_x19[0x74] + 0x38), lVar32 == 0)
                                           ) goto LAB_0613705c;
                                        uVar26 = *(uint *)((long)unaff_x19 + 0x4a4);
                                        uVar25 = *(uint *)(lVar32 + 0x18);
                                        if (uVar25 <= uVar26) goto LAB_0613719c;
                                        *(undefined4 *)(unaff_x19 + 0x24) =
                                             *(undefined4 *)
                                              (lVar32 + 0x20 + (long)(int)uVar26 * 0x178 + 0x30);
                                        if (uVar96 == uVar98) {
                                          lVar31 = unaff_x19[0x91];
                                          if (lVar31 == 0) goto LAB_0613705c;
                                          if (*(uint *)(lVar31 + 0x18) <= uVar95) goto LAB_0613719c;
                                          if ((*(int *)(lVar31 + (long)(int)uVar95 * 0x10 + 0x24) !=
                                               10) || (uVar26 == *(uint *)(unaff_x19 + 0x95)))
                                          goto 
                                          UnityEngine_XR_Interaction_Toolkit_Locomotion_Teleportation_TeleportationProvider__set_forwardTransformation
                                          ;
                                          if (uVar25 <= uVar26 - 1) goto LAB_0613719c;
                                          lVar31 = unaff_x19[0x20];
                                          if (lVar31 == 0) goto LAB_0613705c;
                                          fVar86 = *(float *)(lVar32 + 0x20 +
                                                              (long)(int)(uVar26 - 1) * 0x178 + 0x38
                                                             );
                                        }
                                        else {

                                          UnityEngine_XR_Interaction_Toolkit_Locomotion_Teleportation_TeleportationProvider__set_forwardTransformation
                                          :
                                          lVar31 = unaff_x19[0x20];
                                          if (lVar31 == 0) goto LAB_0613705c;
                                          fVar86 = *(float *)(unaff_x19 + 0x42);
                                        }
                                        fVar89 = (float)FUN_063ecbd8(lVar31 + 0x28,0);
                                        if (unaff_x19[0x20] == 0) goto LAB_0613705c;
                                        fVar70 = (float)FUN_063ecbe0(unaff_x19[0x20] + 0x28,0);
                                        fVar66 = fVar76;
                                        if (*(char *)((long)unaff_x19 + 0x33e) != '\0') {
                                          fVar66 = fVar67;
                                        }
                                        if (uVar96 == uVar98) {
                                          fStack0000000000000124 = 0.0;
                                          fVar68 = 0.0;
                                          if (uVar24 != 0x2026) goto LAB_06130a78;
                                        }
                                        else {
LAB_06130a78:
                                          if (unaff_x19[0x20] == 0) goto LAB_0613705c;
                                          fVar68 = (float)FUN_063ecc08(unaff_x19[0x20] + 0x28,0);
                                          if (unaff_x19[0x20] == 0) goto LAB_0613705c;
                                          fStack0000000000000124 =
                                               (float)FUN_063ecc38(unaff_x19[0x20] + 0x28,0);
                                        }
                                        lVar32 = unaff_x19[0xcc];
                                        if ((lVar32 == 0) || (*(long *)(lVar32 + 0x20) == 0))
                                        goto LAB_0613705c;
                                        fVar92 = *(float *)((long)unaff_x19 + 0x43c);
                                        fVar67 = *(float *)(lVar32 + 0x2c);
                                        fVar62 = (float)FUN_063ed0d8(*(long *)(lVar32 + 0x20),0);
                                        if (unaff_x19[0x20] == 0) goto LAB_0613705c;
                                        fVar69 = (float)FUN_063ecc30(unaff_x19[0x20] + 0x28,0);
                                        if (unaff_x19[0x20] == 0) goto LAB_0613705c;
                                        fVar94 = *(float *)((long)unaff_x19 + 0x43c);
                                        fStack000000000000016c =
                                             (float)FUN_063ecbe0(unaff_x19[0x20] + 0x28,0);
                                        lVar32 = unaff_x19[0x74];
                                        if ((lVar32 == 0) ||
                                           (lVar31 = *(long *)(lVar32 + 0x38), lVar31 == 0))
                                        goto LAB_0613705c;
                                        if (*(uint *)(lVar31 + 0x18) <=
                                            *(uint *)((long)unaff_x19 + 0x4a4)) goto LAB_0613719c;
                                        lVar31 = lVar31 + (long)(int)*(uint *)((long)unaff_x19 +
                                                                              0x4a4) * 0x178;
                                        *(undefined4 *)(lVar31 + 0x20) = 0;
                                        fVar66 = ((fStack0000000000000138 * fVar86) / fVar89) *
                                                 fVar70 * fVar66;
                                        fVar62 = fVar66 * fVar92 * fVar67 * fVar62;
                                        fStack000000000000016c =
                                             fVar66 * fVar69 * fVar94 * fStack000000000000016c;
                                        *(float *)(lVar31 + 0x15c) = fVar62;
                                        uVar25 = *(uint *)(unaff_x19 + 0x24);
                                        if (uVar25 == 0) {
                                          fVar89 = *(float *)(unaff_x19 + 0xc6);
                                        }
                                        else {
                                          lVar31 = unaff_x19[0xe4];
                                          if (lVar31 == 0) goto LAB_0613705c;
                                          if (*(uint *)(lVar31 + 0x18) <= uVar25) goto LAB_0613719c;
                                          lVar31 = *(long *)(lVar31 + (long)(int)uVar25 * 8 + 0x20);
                                          if (lVar31 == 0) goto LAB_0613705c;
                                          fVar89 = *(float *)(lVar31 + 0x54);
                                        }
LAB_06130bac:
                                        fVar67 = 0.0;
                                        if (uVar24 != 3 && uVar24 != 0xad) {
                                          fVar67 = fVar62;
                                        }
                                      }
                                      else {
                                        fStack0000000000000138 = 1.0;
                                        if (iVar28 == 0) goto LAB_061308f8;
LAB_061302bc:
                                        if (iVar28 == 1) {
                                          lVar32 = FUN_06177770();
                                          if ((lVar32 != 0) &&
                                             (lVar32 = *(long *)(lVar32 + 0x38), lVar32 != 0)) {
                                            if (*(uint *)(lVar32 + 0x18) <=
                                                *(uint *)((long)unaff_x19 + 0x4a4))
                                            goto LAB_0613719c;
                                            plVar55 = *(long **)(lVar32 + (long)(int)*(uint *)((long
                                                  )unaff_x19 + 0x4a4) * 0x178 + 0x30);
                                            if (plVar55 != (long *)0x0) {
                                              bVar17 = *(byte *)(*(long *)
                                                  Method_System_Security_Cryptography_HashAlgorithm_ComputeHash__
                                                  + 0x130);
                                              if ((*(byte *)(*plVar55 + 0x130) < bVar17) ||
                                                 (*(long *)(*(long *)(*plVar55 + 200) +
                                                            (ulong)bVar17 * 8 + -8) !=
                                                  *(long *)
                                                  Method_System_Security_Cryptography_HashAlgorithm_ComputeHash__
                                                 )) {
                    /* WARNING: Subroutine does not return */
                                                FUN_02d96be0(plVar55);
                                              }
                                              plVar41 = (long *)plVar55[3];
                                              if (plVar41 == (long *)0x0) {
                                                plVar41 = (long *)0x0;
                                                *plVar2 = 0;
                                              }
                                              else {
                                                lVar32 = *(long *)
                                                  Method_System_Security_Cryptography_HashAlgorithm_ComputeHash__
                                                ;
                                                bVar17 = *(byte *)(lVar32 + 0x130);
                                                if (*(byte *)(*plVar41 + 0x130) < bVar17) {
                                                  plVar56 = (long *)0x0;
                                                }
                                                else {
                                                  plVar56 = plVar41;
                                                  if (*(long *)(*(long *)(*plVar41 + 200) +
                                                                (ulong)bVar17 * 8 + -8) != lVar32) {
                                                    plVar56 = (long *)0x0;
                                                  }
                                                }
                                                *plVar2 = (long)plVar56;
                                                if (*(byte *)(*plVar41 + 0x130) < bVar17) {
                                                  plVar41 = (long *)0x0;
                                                }
                                                else if (*(long *)(*(long *)(*plVar41 + 200) +
                                                                   (ulong)bVar17 * 8 + -8) != lVar32
                                                        ) {
                                                  plVar41 = (long *)0x0;
                                                }
                                              }
                                              LeanTween__value(plVar2,plVar41);
                                              lVar32 = plVar55[5];
                                              *(int *)((long)unaff_x19 + 0x6bc) = (int)lVar32;
                                              puVar13 = Method_System_HashCode_Combine<ulong,_int>__
                                              ;
                                              if (uVar24 == 0x3c) {
                                                uVar24 = (int)lVar32 + 0xe000;
                                              }
                                              else {
                                                lVar32 = *(long *)
                                                  Method_System_HashCode_Combine<ulong,_int>__;
                                                if (*(int *)(lVar32 + 0xe4) == 0) {
                                                  thunk_FUN_02df485c();
                                                  lVar32 = *(long *)puVar13;
                                                }
                                                *(undefined4 *)((long)unaff_x19 + 0x1d4) =
                                                     *(undefined4 *)
                                                      (*(long *)(lVar32 + 0xb8) + 0x68);
                                              }
                                              if (unaff_x19[0x20] != 0) {
                                                fVar62 = *(float *)(unaff_x19 + 0x42);
                                                memmove(&stack0x000011e0,
                                                        (void *)(unaff_x19[0x20] + 0x28),0x60);
                                                fVar86 = (float)FUN_063ecbd8(&stack0x000011e0,0);
                                                if (unaff_x19[0x20] != 0) {
                                                  memmove(&stack0x000011e0,
                                                          (void *)(unaff_x19[0x20] + 0x28),0x60);
                                                  fVar66 = (float)FUN_063ecbe0(&stack0x000011e0,0);
                                                  fVar89 = fVar76;
                                                  if (*(char *)((long)unaff_x19 + 0x33e) != '\0') {
                                                    fVar89 = fVar67;
                                                  }
                                                  if (unaff_x19[0xd6] == 0) goto LAB_0613705c;
                                                  fVar89 = (fVar62 / fVar86) * fVar66 * fVar89;
                                                  fVar86 = (float)FUN_063ecbd8(unaff_x19[0xd6] +
                                                                               0x28,0);
                                                  fVar62 = *(float *)(unaff_x19 + 0x42);
                                                  if (fVar86 <= 0.0) {
                                                    if (unaff_x19[0x20] == 0) goto LAB_0613705c;
                                                    fVar86 = (float)FUN_063ecbd8(unaff_x19[0x20] +
                                                                                 0x28,0);
                                                    if (unaff_x19[0x20] == 0) goto LAB_0613705c;
                                                    fVar66 = (float)FUN_063ecbe0(unaff_x19[0x20] +
                                                                                 0x28,0);
                                                    fStack0000000000000124 = fVar76;
                                                    if (*(char *)((long)unaff_x19 + 0x33e) != '\0')
                                                    {
                                                      fStack0000000000000124 = fVar67;
                                                    }
                                                    if (unaff_x19[0x20] == 0) goto LAB_0613705c;
                                                    fVar67 = (float)FUN_063ecc08(unaff_x19[0x20] +
                                                                                 0x28,0);
                                                    if (plVar55[4] == 0) goto LAB_0613705c;
                                                    FUN_063ed09c(&stack0x000012b0,plVar55[4],0);
                                                    fVar70 = (float)FUN_063ececc(&stack0x000011c0,0)
                                                    ;
                                                    if (plVar55[4] == 0) goto LAB_0613705c;
                                                    fVar69 = *(float *)((long)plVar55 + 0x2c);
                                                    fVar92 = (float)FUN_063ed0d8(plVar55[4],0);
                                                    if (unaff_x19[0x20] == 0) goto LAB_0613705c;
                                                    fVar68 = (float)FUN_063ecc08(unaff_x19[0x20] +
                                                                                 0x28,0);
                                                    if (unaff_x19[0x20] == 0) goto LAB_0613705c;
                                                    fVar94 = (float)FUN_063ecc30(unaff_x19[0x20] +
                                                                                 0x28,0);
                                                    if (unaff_x19[0x20] == 0) goto LAB_0613705c;
                                                    fVar71 = *(float *)((long)unaff_x19 + 0x43c);
                                                    fStack000000000000016c =
                                                         (float)FUN_063ecbe0(unaff_x19[0x20] + 0x28,
                                                                             0);
                                                    if (unaff_x19[0x20] == 0) goto LAB_0613705c;
                                                    fStack0000000000000124 =
                                                         (fVar62 / fVar86) * fVar66 *
                                                         fStack0000000000000124;
                                                    fVar62 = fStack0000000000000124 *
                                                             (fVar67 / fVar70) * fVar69 * fVar92;
                                                    fStack0000000000000124 =
                                                         fStack0000000000000124 / fVar62;
                                                    fStack000000000000016c =
                                                         fVar89 * fVar94 * fVar71 *
                                                         fStack000000000000016c;
                                                    fVar68 = fStack0000000000000124 * fVar68;
                                                    fVar86 = (float)FUN_063ecc38(unaff_x19[0x20] +
                                                                                 0x28,0);
                                                    fStack0000000000000124 =
                                                         fStack0000000000000124 * fVar86;
                                                  }
                                                  else {
                                                    if (*plVar2 == 0) goto LAB_0613705c;
                                                    fVar86 = (float)FUN_063ecbd8(*plVar2 + 0x28,0);
                                                    if (*plVar2 == 0) goto LAB_0613705c;
                                                    fVar66 = (float)FUN_063ecbe0(*plVar2 + 0x28,0);
                                                    if (plVar55[4] == 0) goto LAB_0613705c;
                                                    fVar92 = *(float *)((long)plVar55 + 0x2c);
                                                    fVar70 = fVar76;
                                                    if (*(char *)((long)unaff_x19 + 0x33e) != '\0')
                                                    {
                                                      fVar70 = fVar67;
                                                    }
                                                    fVar67 = (float)FUN_063ed0d8(plVar55[4],0);
                                                    if (unaff_x19[0xd6] == 0) goto LAB_0613705c;
                                                    fVar68 = (float)FUN_063ecc08(unaff_x19[0xd6] +
                                                                                 0x28,0);
                                                    if (*plVar2 == 0) goto LAB_0613705c;
                                                    fVar69 = (float)FUN_063ecc30(*plVar2 + 0x28,0);
                                                    if (*plVar2 == 0) goto LAB_0613705c;
                                                    fVar94 = *(float *)((long)unaff_x19 + 0x43c);
                                                    fStack000000000000016c =
                                                         (float)FUN_063ecbe0(*plVar2 + 0x28,0);
                                                    if (unaff_x19[0xd6] == 0) goto LAB_0613705c;
                                                    fStack000000000000016c =
                                                         fVar89 * fVar69 * fVar94 *
                                                         fStack000000000000016c;
                                                    fVar62 = (fVar62 / fVar86) * fVar66 * fVar70 *
                                                             fVar92 * fVar67;
                                                    fStack0000000000000124 =
                                                         (float)FUN_063ecc38(unaff_x19[0xd6] + 0x28,
                                                                             0);
                                                  }
                                                  unaff_x19[0xcc] = (long)plVar55;
                                                  LeanTween__value(plVar3,plVar55);
                                                  if ((unaff_x19[0x74] != 0) &&
                                                     (lVar32 = *(long *)(unaff_x19[0x74] + 0x38),
                                                     lVar32 != 0)) {
                                                    if (*(uint *)(lVar32 + 0x18) <=
                                                        *(uint *)((long)unaff_x19 + 0x4a4))
                                                    goto LAB_0613719c;
                                                    lVar32 = lVar32 + (long)(int)*(uint *)((long)
                                                  unaff_x19 + 0x4a4) * 0x178;
                                                  *(long *)(lVar32 + 0x40) = unaff_x19[0x20];
                                                  *(undefined4 *)(lVar32 + 0x20) = 1;
                                                  *(float *)(lVar32 + 0x15c) = fVar62;
                                                  LeanTween__value();
                                                  lVar32 = unaff_x19[0x74];
                                                  if ((lVar32 != 0) &&
                                                     (lVar31 = *(long *)(lVar32 + 0x38), lVar31 != 0
                                                     )) {
                                                    if (*(uint *)((long)unaff_x19 + 0x4a4) <
                                                        *(uint *)(lVar31 + 0x18)) {
                                                      fVar89 = 0.0;
                                                      *(int *)(lVar31 + (long)(int)*(uint *)((long)
                                                  unaff_x19 + 0x4a4) * 0x178 + 0x50) =
                                                       (int)unaff_x19[0x24];
                                                  *(int *)(unaff_x19 + 0x24) = (int)lVar48;
                                                  goto LAB_06130bac;
                                                  }
                                                  goto LAB_0613719c;
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                          goto LAB_0613705c;
                                        }
                                        lVar32 = unaff_x19[0x74];
                                        fVar67 = 0.0;
                                        if (uVar24 != 3 && uVar24 != 0xad) {
                                          fVar67 = fVar62;
                                        }
                                        fStack000000000000016c = 0.0;
                                        if (lVar32 == 0) goto LAB_0613705c;
                                        fVar68 = 0.0;
                                        fStack0000000000000124 = 0.0;
                                      }
                                      lVar32 = *(long *)(lVar32 + 0x38);
                                      if (lVar32 == 0) goto LAB_0613705c;
                                      if (*(uint *)(lVar32 + 0x18) <=
                                          *(uint *)((long)unaff_x19 + 0x4a4)) goto LAB_0613719c;
                                      lVar32 = lVar32 + (long)(int)*(uint *)((long)unaff_x19 + 0x4a4
                                                                            ) * 0x178;
                                      *(short *)(lVar32 + 0x24) = (short)uVar24;
                                      *(int *)(lVar32 + 0x58) = (int)unaff_x19[0x42];
                                      *(int *)(lVar32 + 0x160) = (int)unaff_x19[0xa0];
                                      if ((unaff_x19[0x74] == 0) ||
                                         (lVar32 = *(long *)(unaff_x19[0x74] + 0x38), lVar32 == 0))
                                      goto LAB_0613705c;
                                      if (*(uint *)(lVar32 + 0x18) <=
                                          *(uint *)((long)unaff_x19 + 0x4a4)) goto LAB_0613719c;
                                      *(int *)(lVar32 + (long)(int)*(uint *)((long)unaff_x19 + 0x4a4
                                                                            ) * 0x178 + 0x164) =
                                           (int)unaff_x19[0x2b];
                                      if ((unaff_x19[0x74] == 0) ||
                                         (lVar32 = *(long *)(unaff_x19[0x74] + 0x38), lVar32 == 0))
                                      goto LAB_0613705c;
                                      if (*(uint *)(lVar32 + 0x18) <=
                                          *(uint *)((long)unaff_x19 + 0x4a4)) goto LAB_0613719c;
                                      *(undefined4 *)
                                       (lVar32 + (long)(int)*(uint *)((long)unaff_x19 + 0x4a4) *
                                                 0x178 + 0x16c) =
                                           *(undefined4 *)((long)unaff_x19 + 0x15c);
                                      if ((unaff_x19[0x74] == 0) ||
                                         (lVar32 = *(long *)(unaff_x19[0x74] + 0x38), lVar32 == 0))
                                      goto LAB_0613705c;
                                      if (*(uint *)(lVar32 + 0x18) <=
                                          *(uint *)((long)unaff_x19 + 0x4a4)) goto LAB_0613719c;
                                      lVar32 = lVar32 + (long)(int)*(uint *)((long)unaff_x19 + 0x4a4
                                                                            ) * 0x178;
                                      auVar78 = *(undefined1 (*) [16])(unaff_x19 + 0x2c);
                                      *(int *)(lVar32 + 0x188) = (int)unaff_x19[0x2e];
                                      *(long *)(lVar32 + 0x180) = auVar78._8_8_;
                                      *(long *)(lVar32 + 0x178) = auVar78._0_8_;
                                      if ((unaff_x19[0x74] == 0) ||
                                         (lVar32 = *(long *)(unaff_x19[0x74] + 0x38), lVar32 == 0))
                                      goto LAB_0613705c;
                                      if (*(uint *)(lVar32 + 0x18) <=
                                          *(uint *)((long)unaff_x19 + 0x4a4)) goto LAB_0613719c;
                                      lVar32 = lVar32 + (long)(int)*(uint *)((long)unaff_x19 + 0x4a4
                                                                            ) * 0x178;
                                      lVar31 = *(long *)(lVar32 + 0x38);
                                      *(undefined4 *)(lVar32 + 0x18c) =
                                           *(undefined4 *)((long)unaff_x19 + 0x284);
                                      if (lVar31 == 0) {
                                        if ((*plVar3 == 0) ||
                                           (lVar32 = *(long *)(*plVar3 + 0x20), lVar32 == 0))
                                        goto LAB_0613705c;
                                        FUN_063ed09c(&stack0x000012b0,lVar32,0);
                                        unaff_x25[1] = in_stack_000012b8;
                                        *unaff_x25 = in_stack_000012b0;
                                      }
                                      else {
                                        FUN_063ed09c(&stack0x000005a0,lVar31,0);
                                      }
                                      if (uVar24 >> 0x10 == 0) {
                                        if (*(int *)(*(long *)(PTR_DAT_069fb9c0 + 0x88) + 0xe4) == 0
                                           ) {
                                          thunk_FUN_02df485c();
                                        }
                                        uVar25 = FUN_05455f40(uVar24,0);
                                        uVar25 = uVar25 & 1;
                                      }
                                      else {
                                        uVar25 = 0;
                                      }
                                      fVar66 = *(float *)(unaff_x19 + 0x5a);
                                      if (((uVar21 & 1) != 0) &&
                                         (*(int *)((long)unaff_x19 + 0x65c) == 0)) {
                                        if (*plVar3 == 0) goto LAB_0613705c;
                                        iVar28 = *(int *)((long)unaff_x19 + 0x4a4);
                                        uVar26 = *(uint *)(*plVar3 + 0x28);
                                        if (iVar28 < (int)uVar6) {
                                          if ((unaff_x19[0x74] == 0) ||
                                             (lVar32 = *(long *)(unaff_x19[0x74] + 0x38),
                                             lVar32 == 0)) goto LAB_0613705c;
                                          uVar27 = iVar28 + 1;
                                          if (*(uint *)(lVar32 + 0x18) <= uVar27) goto LAB_0613719c;
                                          if (*(int *)(lVar32 + 0x20 + (long)(int)uVar27 * 0x178) ==
                                              0) {
                                            lVar32 = *(long *)(lVar32 + 0x20 +
                                                               (long)(int)uVar27 * 0x178 + 0x10);
                                            if ((((lVar32 == 0) || (unaff_x19[0x20] == 0)) ||
                                                (lVar31 = *(long *)(unaff_x19[0x20] + 0x178),
                                                lVar31 == 0)) ||
                                               (lVar31 = *(long *)(lVar31 + 0x40), lVar31 == 0))
                                            goto LAB_0613705c;
                                            uVar30 = FUN_04f7a520(lVar31,uVar26 | *(int *)(lVar32 + 
                                                  0x28) << 0x10,&stack0x00001190,
                                                  *(undefined8 *)
                                                                                                      
                                                  Method_UnityEngine_XR_Interaction_Toolkit_UI_BodyUI_HandMenu_<OnEnable>b__80_0__
                                                  );
                                            if ((uVar30 & 1) != 0) {
                                              FUN_063f178c(&stack0x000012b0,&stack0x00001190,0);
                                              unaff_x25[0x17b] = in_stack_000012b8;
                                              unaff_x25[0x17a] = in_stack_000012b0;
                                              FUN_063f15e0(&stack0x00001170,0);
                                              uVar30 = FUN_063f17c8(&stack0x00001190,0);
                                              if ((uVar30 & 0x100) != 0) {
                                                fVar66 = 0.0;
                                              }
                                            }
                                          }
                                          iVar28 = *(int *)((long)unaff_x19 + 0x4a4);
                                        }
                                        if (0 < iVar28) {
                                          if ((unaff_x19[0x74] == 0) ||
                                             (lVar32 = *(long *)(unaff_x19[0x74] + 0x38),
                                             lVar32 == 0)) goto LAB_0613705c;
                                          if (*(uint *)(lVar32 + 0x18) <= iVar28 - 1U)
                                          goto LAB_0613719c;
                                          lVar32 = *(long *)(lVar32 + (ulong)(iVar28 - 1U) * 0x178 +
                                                            0x30);
                                          if (lVar32 == 0) goto LAB_0613705c;
                                          uVar27 = *(uint *)(lVar32 + 0x28);
                                          lVar32 = FUN_06177770();
                                          if ((lVar32 == 0) ||
                                             (lVar32 = *(long *)(lVar32 + 0x38), lVar32 == 0))
                                          goto LAB_0613705c;
                                          uVar44 = *(int *)((long)unaff_x19 + 0x4a4) - 1;
                                          if (*(uint *)(lVar32 + 0x18) <= uVar44) goto LAB_0613719c;
                                          if (*(int *)(lVar32 + (long)(int)uVar44 * 0x178 + 0x20) ==
                                              0) {
                                            if (((unaff_x19[0x20] == 0) ||
                                                (lVar32 = *(long *)(unaff_x19[0x20] + 0x178),
                                                lVar32 == 0)) ||
                                               (lVar32 = *(long *)(lVar32 + 0x40), lVar32 == 0))
                                            goto LAB_0613705c;
                                            uVar30 = FUN_04f7a520(lVar32,uVar27 | uVar26 << 0x10,
                                                                  &stack0x00001190,
                                                                  *(undefined8 *)
                                                                                                                                      
                                                  Method_UnityEngine_XR_Interaction_Toolkit_UI_BodyUI_HandMenu_<OnEnable>b__80_0__
                                                  );
                                            if ((uVar30 & 1) != 0) {
                                              FUN_063f17b4(&stack0x000012b0,&stack0x00001190,0);
                                              unaff_x25[0x17b] = in_stack_000012b8;
                                              unaff_x25[0x17a] = in_stack_000012b0;
                                              FUN_063f15e0(&stack0x00001170,0);
                                              FUN_063f1440(0);
                                              uVar30 = FUN_063f17c8(&stack0x00001190,0);
                                              if ((uVar30 & 0x100) != 0) {
                                                fVar66 = 0.0;
                                              }
                                            }
                                          }
                                        }
                                      }
                                      if ((unaff_x19[0x74] == 0) ||
                                         (lVar32 = *(long *)(unaff_x19[0x74] + 0x38), lVar32 == 0))
                                      goto LAB_0613705c;
                                      uVar26 = *(uint *)((long)unaff_x19 + 0x4a4);
                                      uVar20 = FUN_063f141c(&stack0x00001250,0);
                                      if (*(uint *)(lVar32 + 0x18) <= uVar26) goto LAB_0613719c;
                                      *(undefined4 *)(lVar32 + (long)(int)uVar26 * 0x178 + 0x154) =
                                           uVar20;
                                      if (*(int *)(*(long *)Method_System_HashCode_Add<Color>__ +
                                                  0xe4) == 0) {
                                        thunk_FUN_02df485c();
                                      }
                                      uVar30 = FUN_061a92c4(uVar24,0);
                                      plVar55 = (long *)PTR_DAT_069feab8;
                                      uVar26 = *(uint *)((long)unaff_x19 + 0x4a4);
                                      uVar51 = (ulong)uVar26;
                                      if ((uVar30 & 1) == 0) {
                                        if (0 < (int)uVar26) {
                                          if ((((uVar22 & 1) == 0) ||
                                              (uVar27 = *(uint *)((long)unaff_x19 + 0x32c),
                                              uVar27 == 0x80000000)) || (uVar27 != uVar26 - 1)) {
                                            if ((uVar23 & 1) == 0) {
                                              bVar15 = false;
                                            }
                                            else {
                                              lVar32 = uVar51 * 0x178 + 0x144;
                                              uVar57 = uVar51;
                                              do {
                                                uVar57 = uVar57 - 1;
                                                iVar28 = (int)uVar51;
                                                uVar26 = iVar28 - 1;
                                                uVar51 = (ulong)uVar26;
                                                if ((iVar28 < 1) ||
                                                   (uVar57 == *(uint *)((long)unaff_x19 + 0x32c))) {
                                                  bVar15 = false;
                                                  goto LAB_06131650;
                                                }
                                                if ((unaff_x19[0x74] == 0) ||
                                                   (lVar31 = *(long *)(unaff_x19[0x74] + 0x38),
                                                   lVar31 == 0)) goto LAB_0613705c;
                                                if (*(uint *)(lVar31 + 0x18) <= uVar57)
                                                goto LAB_0613719c;
                                                lVar31 = *(long *)(lVar31 + lVar32 + -0x28c);
                                                if ((lVar31 == 0) ||
                                                   (lVar31 = *(long *)(lVar31 + 0x20), lVar31 == 0))
                                                goto LAB_0613705c;
                                                uVar27 = FUN_063ed08c(lVar31,0);
                                                if ((*plVar3 == 0) ||
                                                   (((unaff_x19[0x20] == 0 ||
                                                     (lVar31 = *(long *)(unaff_x19[0x20] + 0x178),
                                                     lVar31 == 0)) ||
                                                    (lVar31 = *(long *)(lVar31 + 0x50), lVar31 == 0)
                                                    ))) goto LAB_0613705c;
                                                uVar35 = FUN_04f8f4b4(lVar31,uVar27 | *(int *)(*
                                                  plVar3 + 0x28) << 0x10,&stack0x00001140,
                                                  *(undefined8 *)
                                                                                                      
                                                  Method_UnityEngine_XR_Interaction_Toolkit_UI_BodyUI_HandMenu_<OnEnable>b__80_2__
                                                  );
                                                lVar32 = lVar32 + -0x178;
                                              } while ((uVar35 & 1) == 0);
                                              if ((unaff_x19[0x74] == 0) ||
                                                 (lVar31 = *(long *)(unaff_x19[0x74] + 0x38),
                                                 lVar31 == 0)) goto LAB_0613705c;
                                              if (*(uint *)(lVar31 + 0x18) <= uVar26)
                                              goto LAB_0613719c;
                                              FUN_063f1404(((*(float *)(lVar31 + lVar32 + -0xc) -
                                                            *(float *)(unaff_x19 + 0xcb)) / fVar67 +
                                                           in_stack_00001144) - in_stack_00001150,
                                                           in_stack_00001144,in_stack_00001150,
                                                           &stack0x00001250,0);
                                              FUN_063f1414(&stack0x00001250,0);
                                              bVar15 = true;
                                              fVar66 = 0.0;
                                            }
LAB_06131650:
                                            plVar55 = (long *)PTR_DAT_069feab8;
                                            if ((uVar22 & 1) != 0) {
                                              uVar26 = *(uint *)((long)unaff_x19 + 0x32c);
                                              if (uVar26 == 0x80000000) {
                                                bVar15 = true;
                                              }
                                              if (!bVar15) {
                                                if ((unaff_x19[0x74] == 0) ||
                                                   (lVar32 = *(long *)(unaff_x19[0x74] + 0x38),
                                                   lVar32 == 0)) goto LAB_0613705c;
                                                if (*(uint *)(lVar32 + 0x18) <= uVar26)
                                                goto LAB_0613719c;
                                                lVar32 = *(long *)(lVar32 + (long)(int)uVar26 *
                                                                            0x178 + 0x30);
                                                if ((lVar32 == 0) ||
                                                   (lVar32 = *(long *)(lVar32 + 0x20), lVar32 == 0))
                                                goto LAB_0613705c;
                                                uVar26 = FUN_063ed08c(lVar32,0);
                                                if ((*plVar3 == 0) ||
                                                   (((unaff_x19[0x20] == 0 ||
                                                     (lVar32 = *(long *)(unaff_x19[0x20] + 0x178),
                                                     lVar32 == 0)) ||
                                                    (lVar32 = *(long *)(lVar32 + 0x48), lVar32 == 0)
                                                    ))) goto LAB_0613705c;
                                                uVar51 = FUN_04f88174(lVar32,uVar26 | *(int *)(*
                                                  plVar3 + 0x28) << 0x10,&stack0x00001128,
                                                  *(undefined8 *)
                                                                                                      
                                                  Method_UnityEngine_XR_Interaction_Toolkit_UI_BodyUI_HandMenu_<OnEnable>b__80_1__
                                                  );
                                                if ((uVar51 & 1) != 0) {
                                                  if ((unaff_x19[0x74] != 0) &&
                                                     (lVar32 = *(long *)(unaff_x19[0x74] + 0x38),
                                                     lVar32 != 0)) {
                                                    if (*(uint *)((long)unaff_x19 + 0x32c) <
                                                        *(uint *)(lVar32 + 0x18)) {
                                                      FUN_063f1404((in_stack_0000112c +
                                                                   (*(float *)(lVar32 + (long)(int)*
                                                  (uint *)((long)unaff_x19 + 0x32c) * 0x178 + 0x138)
                                                  - *(float *)(unaff_x19 + 0xcb)) / fVar67) -
                                                  in_stack_00001138,in_stack_0000112c,
                                                  in_stack_00001138,&stack0x00001250,0);
                                                  goto LAB_0613174c;
                                                  }
                                                  goto LAB_0613719c;
                                                  }
                                                  goto LAB_0613705c;
                                                }
                                              }
                                            }
                                          }
                                          else {
                                            if ((unaff_x19[0x74] == 0) ||
                                               (lVar32 = *(long *)(unaff_x19[0x74] + 0x38),
                                               lVar32 == 0)) goto LAB_0613705c;
                                            if (*(uint *)(lVar32 + 0x18) <= uVar27)
                                            goto LAB_0613719c;
                                            lVar32 = *(long *)(lVar32 + (long)(int)uVar27 * 0x178 +
                                                              0x30);
                                            if ((lVar32 == 0) ||
                                               (lVar32 = *(long *)(lVar32 + 0x20), lVar32 == 0))
                                            goto LAB_0613705c;
                                            uVar26 = FUN_063ed08c(lVar32,0);
                                            if ((*plVar3 == 0) ||
                                               (((unaff_x19[0x20] == 0 ||
                                                 (lVar32 = *(long *)(unaff_x19[0x20] + 0x178),
                                                 lVar32 == 0)) ||
                                                (lVar32 = *(long *)(lVar32 + 0x48), lVar32 == 0))))
                                            goto LAB_0613705c;
                                            uVar51 = FUN_04f88174(lVar32,uVar26 | *(int *)(*plVar3 +
                                                                                          0x28) <<
                                                                                  0x10,
                                                                  &stack0x00001158,
                                                                  *(undefined8 *)
                                                                                                                                      
                                                  Method_UnityEngine_XR_Interaction_Toolkit_UI_BodyUI_HandMenu_<OnEnable>b__80_1__
                                                  );
                                            if ((uVar51 & 1) != 0) {
                                              if ((unaff_x19[0x74] == 0) ||
                                                 (lVar32 = *(long *)(unaff_x19[0x74] + 0x38),
                                                 lVar32 == 0)) goto LAB_0613705c;
                                              if (*(uint *)(lVar32 + 0x18) <=
                                                  *(uint *)((long)unaff_x19 + 0x32c))
                                              goto LAB_0613719c;
                                              FUN_063f1404((in_stack_0000115c +
                                                           (*(float *)(lVar32 + (long)(int)*(uint *)
                                                  ((long)unaff_x19 + 0x32c) * 0x178 + 0x138) -
                                                  *(float *)(unaff_x19 + 0xcb)) / fVar67) -
                                                  in_stack_00001168,in_stack_0000115c,
                                                  in_stack_00001168,&stack0x00001250,0);
LAB_0613174c:
                                              FUN_063f1414(&stack0x00001250,0);
                                              fVar66 = 0.0;
                                            }
                                          }
                                        }
                                      }
                                      else {
                                        *(uint *)((long)unaff_x19 + 0x32c) = uVar26;
                                      }
                                      fVar86 = (float)
                                                  UnityEngine_UIElements_UIR_CommandList__ApplyBatchProps
                                                            (&stack0x00001250,0);
                                      fVar70 = (float)
                                                  UnityEngine_UIElements_UIR_CommandList__ApplyBatchProps
                                                            (&stack0x00001250,0);
                                      if ((char)unaff_x19[0x1e] != '\0') {
                                        fVar69 = *(float *)(unaff_x19 + 0xcb);
                                        fVar92 = (float)FUN_063ecee4(&stack0x00001260,0);
                                        fVar69 = fVar69 - fVar67 * fVar92 * (1.0 - *(float *)(
                                                  unaff_x19 + 0x60));
                                        *(float *)(unaff_x19 + 0xcb) = fVar69;
                                        if ((uVar25 != 0) || (uVar24 == 0x200b)) {
                                          *(float *)(unaff_x19 + 0xcb) =
                                               fVar69 - fVar80 * *(float *)(unaff_x19 + 0x5c);
                                        }
                                      }
                                      fVar69 = *(float *)(unaff_x19 + 0x5b);
                                      fVar92 = 0.0;
                                      if (fVar69 != 0.0) {
                                        if (((*(char *)((long)unaff_x19 + 0x2dc) == '\0') ||
                                            (0x3a < uVar24)) ||
                                           (fVar92 = 0.25,
                                           (1L << ((ulong)uVar24 & 0x3f) & 0x400500000000000U) == 0)
                                           ) {
                                          fVar92 = 0.5;
                                        }
                                        fVar94 = (float)FUN_063ecec4(&stack0x00001260,0);
                                        fVar71 = (float)FUN_063eced4(&stack0x00001260,0);
                                        fVar92 = (1.0 - *(float *)(unaff_x19 + 0x60)) *
                                                 (fVar69 * fVar92 - fVar67 * (fVar94 * 0.5 + fVar71)
                                                 );
                                        *(float *)(unaff_x19 + 0xcb) =
                                             fVar92 + *(float *)(unaff_x19 + 0xcb);
                                      }
                                      if (((cVar38 == '\0') &&
                                          (*(int *)((long)unaff_x19 + 0x65c) == 0)) &&
                                         ((*(byte *)((long)unaff_x19 + 0x284) & 1) != 0)) {
                                        lVar32 = unaff_x19[0x23];
                                        if (*(int *)(*(long *)PTR_DAT_069fb990 + 0xe4) == 0) {
                                          thunk_FUN_02df485c();
                                        }
                                        uVar51 = FUN_0634eb94(lVar32,0,0);
                                        fVar94 = 0.0;
                                        if ((uVar51 & 1) != 0) {
                                          lVar32 = unaff_x19[0x23];
                                          if (*(int *)(*plVar55 + 0xe4) == 0) {
                                            thunk_FUN_02df485c();
                                          }
                                          if (lVar32 == 0) goto LAB_0613705c;
                                          uVar51 = FUN_0631f7c0(lVar32,*(undefined4 *)
                                                                        (*(long *)(*plVar55 + 0xb8)
                                                                        + 0x6c),0);
                                          if ((uVar51 & 1) != 0) {
                                            lVar32 = unaff_x19[0x23];
                                            if (*(int *)(*plVar55 + 0xe4) == 0) {
                                              thunk_FUN_02df485c();
                                            }
                                            if (lVar32 == 0) goto LAB_0613705c;
                                            fVar69 = (float)thunk_FUN_06321abc(lVar32,*(undefined4 *
                                                                                       )(*(long *)(*
                                                  plVar55 + 0xb8) + 0x6c),0);
                                            if ((unaff_x19[0x20] == 0) || (unaff_x19[0x23] == 0))
                                            goto LAB_0613705c;
                                            fVar71 = *(float *)(unaff_x19[0x20] + 0x1a8);
                                            fVar94 = (float)thunk_FUN_06321abc(unaff_x19[0x23],
                                                                               *(undefined4 *)
                                                                                (*(long *)(*plVar55 
                                                  + 0xb8) + 0xe4),0);
                                            fVar94 = fVar94 * fVar69 * fVar71 * 0.25;
                                            if (fVar69 < fVar89 + fVar94) {
                                              fVar89 = fVar69 - fVar94;
                                            }
                                          }
                                        }
                                        if (unaff_x19[0x20] == 0) goto LAB_0613705c;
                                        fStack00000000000000f0 = *(float *)(unaff_x19[0x20] + 0x1ac)
                                        ;
                                      }
                                      else {
                                        lVar32 = unaff_x19[0x23];
                                        if (*(int *)(*(long *)PTR_DAT_069fb990 + 0xe4) == 0) {
                                          thunk_FUN_02df485c();
                                        }
                                        uVar51 = FUN_0634eb94(lVar32,0,0);
                                        fStack00000000000000f0 = 0.0;
                                        if ((uVar51 & 1) != 0) {
                                          lVar32 = unaff_x19[0x23];
                                          if (*(int *)(*plVar55 + 0xe4) == 0) {
                                            thunk_FUN_02df485c();
                                          }
                                          if (lVar32 == 0) goto LAB_0613705c;
                                          uVar51 = FUN_0631f7c0(lVar32,*(undefined4 *)
                                                                        (*(long *)(*plVar55 + 0xb8)
                                                                        + 0x6c),0);
                                          if ((uVar51 & 1) != 0) {
                                            lVar32 = unaff_x19[0x23];
                                            if (*(int *)(*plVar55 + 0xe4) == 0) {
                                              thunk_FUN_02df485c();
                                            }
                                            if (lVar32 == 0) goto LAB_0613705c;
                                            uVar51 = FUN_0631f7c0(lVar32,*(undefined4 *)
                                                                          (*(long *)(*plVar55 + 0xb8
                                                                                    ) + 0xe4),0);
                                            if ((uVar51 & 1) != 0) {
                                              lVar32 = unaff_x19[0x23];
                                              if (*(int *)(*plVar55 + 0xe4) == 0) {
                                                thunk_FUN_02df485c();
                                              }
                                              if (lVar32 != 0) {
                                                fVar69 = (float)thunk_FUN_06321abc(lVar32,*(
                                                  undefined4 *)(*(long *)(*plVar55 + 0xb8) + 0x6c),0
                                                  );
                                                if ((unaff_x19[0x20] != 0) && (unaff_x19[0x23] != 0)
                                                   ) {
                                                  fVar71 = *(float *)(unaff_x19[0x20] + 0x1a0);
                                                  fVar94 = (float)thunk_FUN_06321abc(unaff_x19[0x23]
                                                                                     ,*(undefined4 *
                                                                                       )(*(long *)(*
                                                  plVar55 + 0xb8) + 0xe4),0);
                                                  fVar94 = fVar94 * fVar69 * fVar71 * 0.25;
                                                  if (fVar69 < fVar89 + fVar94) {
                                                    fVar89 = fVar69 - fVar94;
                                                  }
                                                  goto LAB_06131780;
                                                }
                                              }
                                              goto LAB_0613705c;
                                            }
                                          }
                                        }
                                        fVar94 = 0.0;
                                      }
LAB_06131780:
                                      fVar84 = *(float *)(unaff_x19 + 0xcb);
                                      fVar69 = (float)FUN_063eced4(&stack0x00001260,0);
                                      fVar87 = *(float *)((long)unaff_x19 + 0x47c);
                                      fVar71 = (float)FUN_063f13fc(&stack0x00001250,0);
                                      fVar84 = fVar84 + (1.0 - *(float *)(unaff_x19 + 0x60)) *
                                                        fVar67 * (fVar71 + ((fVar69 * fVar87 -
                                                                            fVar89) - fVar94));
                                      fVar69 = (float)FUN_063ecedc(&stack0x00001260,0);
                                      fVar71 = (float)
                                                  UnityEngine_UIElements_UIR_CommandList__ApplyBatchProps
                                                            (&stack0x00001250,0);
                                      fStack0000000000000170 =
                                           *(float *)((long)unaff_x19 + 0x634) +
                                           ((fStack000000000000016c +
                                            fVar67 * (fVar89 + fVar69 + fVar71)) -
                                           *(float *)((long)unaff_x19 + 0x4ec));
                                      fVar69 = (float)FUN_063ececc(&stack0x00001260,0);
                                      fVar69 = fStack0000000000000170 -
                                               fVar67 * (fVar89 + fVar89 + fVar69);
                                      fVar71 = (float)FUN_063ecec4(&stack0x00001260,0);
                                      fVar71 = fVar84 + (1.0 - *(float *)(unaff_x19 + 0x60)) *
                                                        fVar67 * (fVar94 + fVar94 +
                                                                 fVar89 + fVar89 +
                                                                 fVar71 * *(float *)((long)unaff_x19
                                                                                    + 0x47c));
                                      fVar87 = fVar84;
                                      fVar85 = fVar71;
                                      if (((*(int *)((long)unaff_x19 + 0x65c) == 0) &&
                                          (cVar38 == '\0')) &&
                                         ((*(byte *)((long)unaff_x19 + 0x284) >> 1 & 1) != 0)) {
                                        if (unaff_x19[0x20] == 0) goto LAB_0613705c;
                                        lVar32 = unaff_x19[0xc1];
                                        fVar87 = (float)FUN_063ecc10(unaff_x19[0x20] + 0x28,0);
                                        if (unaff_x19[0x20] == 0) goto LAB_0613705c;
                                        fVar81 = (float)FUN_063ecc30(unaff_x19[0x20] + 0x28,0);
                                        if (unaff_x19[0x20] == 0) goto LAB_0613705c;
                                        fVar88 = *(float *)((long)unaff_x19 + 0x43c);
                                        fVar90 = *(float *)((long)unaff_x19 + 0x634);
                                        fVar85 = (float)(int)lVar32 * fVar12;
                                        fVar72 = (float)FUN_063ecbe0(unaff_x19[0x20] + 0x28,0);
                                        fVar72 = fVar72 * fVar88 * (fVar87 - (fVar81 + fVar90)) *
                                                                   0.5;
                                        fVar87 = (float)FUN_063ecedc(&stack0x00001260,0);
                                        fVar90 = fVar85 * fVar67 * ((fVar94 + fVar89 + fVar87) -
                                                                   fVar72);
                                        fVar81 = (float)FUN_063ecedc(&stack0x00001260,0);
                                        fVar88 = (float)FUN_063ececc(&stack0x00001260,0);
                                        fStack0000000000000170 = fStack0000000000000170 + 0.0;
                                        fVar69 = fVar69 + 0.0;
                                        fVar87 = fVar84 + fVar90;
                                        fVar85 = fVar85 * fVar67 * ((((fVar81 - fVar88) - fVar89) -
                                                                    fVar94) - fVar72);
                                        fVar84 = fVar84 + fVar85;
                                        fVar85 = fVar71 + fVar85;
                                        fVar71 = fVar71 + fVar90;
                                      }
                                      uVar33 = *(undefined8 *)((long)unaff_x19 + 0x46c);
                                      uVar36 = *(undefined8 *)((long)unaff_x19 + 0x474);
                                      if (DAT_06db4d49 == '\0') {
                                        FUN_02d965b8(PTR_DAT_069fc390);
                                        DAT_06db4d49 = '\x01';
                                      }
                                      uVar73 = **(undefined8 **)(*(long *)PTR_DAT_069fc390 + 0xb8);
                                      uVar77 = (*(undefined8 **)(*(long *)PTR_DAT_069fc390 + 0xb8))
                                               [1];
                                      if (DAT_010fd090 <
                                          (float)((ulong)uVar36 >> 0x20) *
                                          (float)((ulong)uVar77 >> 0x20) +
                                          (float)uVar36 * (float)uVar77 +
                                          (float)uVar33 * (float)uVar73 +
                                          (float)((ulong)uVar33 >> 0x20) *
                                          (float)((ulong)uVar73 >> 0x20)) {
                                        fVar94 = 0.0;
                                        auVar79._4_12_ = SUB1612(ZEXT816(0),4);
                                        auVar79._0_4_ = fVar69;
                                        uVar33 = auVar79._0_8_;
                                        uVar51 = (ulong)(uint)fStack0000000000000170;
                                        uVar36 = uVar33;
                                      }
                                      else {
                                        FUN_0633d1c8(&stack0x000012b0,
                                                     *(undefined4 *)((long)unaff_x19 + 0x46c),
                                                     (int)unaff_x19[0x8e],
                                                     *(undefined4 *)((long)unaff_x19 + 0x474),
                                                     (int)unaff_x19[0x8f],0);
                                        fVar85 = (fVar71 + fVar84) * 0.5;
                                        fVar81 = (fVar69 + fStack0000000000000170) * 0.5;
                                        unaff_x25[0x16b] = in_stack_000012c8;
                                        unaff_x25[0x16a] = CONCAT44(in_stack_000012c4,uVar53);
                                        unaff_x25[0x169] = in_stack_000012b8;
                                        unaff_x25[0x168] = in_stack_000012b0;
                                        unaff_x25[0x16d] = in_stack_000012d8;
                                        unaff_x25[0x16c] = in_stack_000012d0;
                                        fVar94 = 0.0;
                                        unaff_x25[0x16f] = in_stack_000012e8;
                                        unaff_x25[0x16e] = 0;
                                        auVar78 = ZEXT416((uint)(fStack0000000000000170 - fVar81));
                                        fVar87 = (float)FUN_0633d0c8(&stack0x000010e0,0);
                                        fVar87 = fVar85 + fVar87;
                                        fVar71 = 0.0;
                                        uVar51 = CONCAT44(fVar94 + 0.0,fVar81 + auVar78._0_4_);
                                        auVar78 = ZEXT416((uint)(fVar69 - fVar81));
                                        fVar84 = (float)FUN_0633d0c8(&stack0x000010e0,0);
                                        fVar84 = fVar85 + fVar84;
                                        fVar94 = 0.0;
                                        uVar33 = CONCAT44(fVar71 + 0.0,fVar81 + auVar78._0_4_);
                                        auVar78 = ZEXT416((uint)(fStack0000000000000170 - fVar81));
                                        fVar71 = (float)FUN_0633d0c8(&stack0x000010e0,0);
                                        fVar71 = fVar85 + fVar71;
                                        fVar72 = 0.0;
                                        fStack0000000000000170 = fVar81 + auVar78._0_4_;
                                        fVar94 = fVar94 + 0.0;
                                        auVar78 = ZEXT416((uint)(fVar69 - fVar81));
                                        fVar69 = (float)FUN_0633d0c8(&stack0x000010e0,0);
                                        fVar85 = fVar85 + fVar69;
                                        uVar36 = CONCAT44(fVar72 + 0.0,fVar81 + auVar78._0_4_);
                                      }
                                      if ((unaff_x19[0x74] == 0) ||
                                         (lVar32 = *(long *)(unaff_x19[0x74] + 0x38), lVar32 == 0))
                                      goto LAB_0613705c;
                                      if (*(uint *)(lVar32 + 0x18) <=
                                          *(uint *)((long)unaff_x19 + 0x4a4)) goto LAB_0613719c;
                                      lVar32 = lVar32 + (long)(int)*(uint *)((long)unaff_x19 + 0x4a4
                                                                            ) * 0x178;
                                      *(float *)(lVar32 + 0x114) = fVar84;
                                      *(undefined8 *)(lVar32 + 0x118) = uVar33;
                                      if ((unaff_x19[0x74] == 0) ||
                                         (lVar32 = *(long *)(unaff_x19[0x74] + 0x38), lVar32 == 0))
                                      goto LAB_0613705c;
                                      if (*(uint *)(lVar32 + 0x18) <=
                                          *(uint *)((long)unaff_x19 + 0x4a4)) goto LAB_0613719c;
                                      lVar32 = lVar32 + (long)(int)*(uint *)((long)unaff_x19 + 0x4a4
                                                                            ) * 0x178;
                                      *(float *)(lVar32 + 0x108) = fVar87;
                                      *(ulong *)(lVar32 + 0x10c) = uVar51;
                                      if ((unaff_x19[0x74] == 0) ||
                                         (lVar32 = *(long *)(unaff_x19[0x74] + 0x38), lVar32 == 0))
                                      goto LAB_0613705c;
                                      if (*(uint *)(lVar32 + 0x18) <=
                                          *(uint *)((long)unaff_x19 + 0x4a4)) goto LAB_0613719c;
                                      lVar32 = lVar32 + (long)(int)*(uint *)((long)unaff_x19 + 0x4a4
                                                                            ) * 0x178;
                                      *(float *)(lVar32 + 0x120) = fVar71;
                                      *(ulong *)(lVar32 + 0x124) =
                                           CONCAT44(fVar94,fStack0000000000000170);
                                      if ((unaff_x19[0x74] == 0) ||
                                         (lVar32 = *(long *)(unaff_x19[0x74] + 0x38), lVar32 == 0))
                                      goto LAB_0613705c;
                                      if (*(uint *)(lVar32 + 0x18) <=
                                          *(uint *)((long)unaff_x19 + 0x4a4)) goto LAB_0613719c;
                                      lVar32 = lVar32 + (long)(int)*(uint *)((long)unaff_x19 + 0x4a4
                                                                            ) * 0x178;
                                      *(float *)(lVar32 + 300) = fVar85;
                                      *(undefined8 *)(lVar32 + 0x130) = uVar36;
                                      if ((unaff_x19[0x74] == 0) ||
                                         (lVar32 = *(long *)(unaff_x19[0x74] + 0x38), lVar32 == 0))
                                      goto LAB_0613705c;
                                      uVar26 = *(uint *)((long)unaff_x19 + 0x4a4);
                                      fVar94 = *(float *)(unaff_x19 + 0xcb);
                                      fVar69 = (float)FUN_063f13fc(&stack0x00001250,0);
                                      if (*(uint *)(lVar32 + 0x18) <= uVar26) goto LAB_0613719c;
                                      *(float *)(lVar32 + (long)(int)uVar26 * 0x178 + 0x138) =
                                           fVar94 + fVar67 * fVar69;
                                      if ((unaff_x19[0x74] == 0) ||
                                         (lVar32 = *(long *)(unaff_x19[0x74] + 0x38), lVar32 == 0))
                                      goto LAB_0613705c;
                                      uVar26 = *(uint *)((long)unaff_x19 + 0x4a4);
                                      fVar94 = *(float *)((long)unaff_x19 + 0x4ec);
                                      fVar87 = *(float *)((long)unaff_x19 + 0x634);
                                      fVar69 = (float)
                                                  UnityEngine_UIElements_UIR_CommandList__ApplyBatchProps
                                                            (&stack0x00001250,0);
                                      if (*(uint *)(lVar32 + 0x18) <= uVar26) goto LAB_0613719c;
                                      *(float *)(lVar32 + (long)(int)uVar26 * 0x178 + 0x144) =
                                           (fStack000000000000016c - fVar94) + fVar87 +
                                           fVar67 * fVar69;
                                      if ((unaff_x19[0x74] == 0) ||
                                         (lVar32 = *(long *)(unaff_x19[0x74] + 0x38), lVar32 == 0))
                                      goto LAB_0613705c;
                                      uVar26 = *(uint *)((long)unaff_x19 + 0x4a4);
                                      if (*(uint *)(lVar32 + 0x18) <= uVar26) goto LAB_0613719c;
                                      lVar32 = lVar32 + 0x20;
                                      *(float *)(lVar32 + (long)(int)uVar26 * 0x178 + 0x138) =
                                           (fVar71 - fVar84) / ((float)uVar51 - (float)uVar33);
                                      fVar86 = fVar67 * (fVar68 + fVar86);
                                      if (*(int *)((long)unaff_x19 + 0x65c) == 0) {
                                        fVar86 = fVar86 / fStack0000000000000138;
                                        fVar70 = (fVar67 * (fStack0000000000000124 + fVar70)) /
                                                 fStack0000000000000138;
                                      }
                                      else {
                                        fVar70 = fVar67 * (fStack0000000000000124 + fVar70);
                                      }
                                      fVar69 = *(float *)((long)unaff_x19 + 0x634);
                                      uVar27 = *(uint *)(unaff_x19 + 0x95);
                                      if ((uVar25 == 0) || (uVar26 == uVar27)) {
                                        fVar86 = fVar86 + fVar69;
                                        fVar70 = fVar70 + fVar69;
                                        fVar68 = fVar86;
                                        fVar94 = fVar70;
                                        if (fVar69 != 0.0) {
                                          fVar68 = (fVar86 - fVar69) /
                                                   *(float *)((long)unaff_x19 + 0x43c);
                                          fVar94 = (fVar70 - fVar69) /
                                                   *(float *)((long)unaff_x19 + 0x43c);
                                          if (fVar68 <= fVar86) {
                                            fVar68 = fVar86;
                                          }
                                          if (fVar70 <= fVar94) {
                                            fVar94 = fVar70;
                                          }
                                        }
                                        lVar32 = lVar32 + (long)(int)uVar26 * 0x178;
                                        fVar69 = fVar68;
                                        if (fVar68 <= *(float *)((long)unaff_x19 + 0x4dc)) {
                                          fVar69 = *(float *)((long)unaff_x19 + 0x4dc);
                                        }
                                        fVar71 = fVar94;
                                        if (*(float *)(unaff_x19 + 0x9c) <= fVar94) {
                                          fVar71 = *(float *)(unaff_x19 + 0x9c);
                                        }
                                        *(float *)((long)unaff_x19 + 0x4dc) = fVar69;
                                        *(float *)(unaff_x19 + 0x9c) = fVar71;
                                        *(float *)(lVar32 + 300) = fVar68;
                                        *(float *)(lVar32 + 0x130) = fVar94;
                                        fVar68 = *(float *)((long)unaff_x19 + 0x4ec);
                                        *(float *)(lVar32 + 0x120) = fVar86 - fVar68;
                                        *(float *)((long)unaff_x19 + 0x4d4) = fVar86 - fVar68;
                                        *(float *)(lVar32 + 0x128) = fVar70 - fVar68;
                                        *(float *)(unaff_x19 + 0x9b) = fVar70 - fVar68;
                                        if (((int)unaff_x19[0x97] == 0) ||
                                           (*(char *)((long)unaff_x19 + 0x374) != '\0')) {
                                          *(float *)((long)unaff_x19 + 0x4cc) = fVar69;
                                          if (unaff_x19[0x20] == 0) goto LAB_0613705c;
                                          fVar70 = *(float *)(unaff_x19 + 0x9a);
                                          fVar69 = (float)FUN_063ecc10(unaff_x19[0x20] + 0x28,0);
                                          fStack0000000000000138 =
                                               (fVar67 * fVar69) / fStack0000000000000138;
                                          if (fVar70 <= fStack0000000000000138) {
                                            fVar70 = fStack0000000000000138;
                                          }
                                          fVar68 = *(float *)((long)unaff_x19 + 0x4ec);
                                          *(float *)(unaff_x19 + 0x9a) = fVar70;
                                        }
                                        if (fVar68 == 0.0) {
                                          fVar70 = *(float *)(unaff_x19 + 0x99);
                                          if (*(float *)(unaff_x19 + 0x99) <= fVar86) {
                                            fVar70 = fVar86;
                                          }
                                          *(float *)(unaff_x19 + 0x99) = fVar70;
                                        }
                                      }
                                      else {
                                        lVar32 = lVar32 + (long)(int)uVar26 * 0x178;
                                        uVar36 = *(undefined8 *)((long)unaff_x19 + 0x4dc);
                                        *(undefined8 *)(lVar32 + 300) = uVar36;
                                        fVar68 = *(float *)((long)unaff_x19 + 0x4ec);
                                        fVar86 = (float)uVar36 - fVar68;
                                        fVar70 = (float)((ulong)uVar36 >> 0x20) - fVar68;
                                        *(float *)(lVar32 + 0x120) = fVar86;
                                        *(float *)(lVar32 + 0x128) = fVar70;
                                        *(ulong *)((long)unaff_x19 + 0x4d4) =
                                             CONCAT44(fVar70,fVar86);
                                      }
                                      lVar32 = unaff_x19[0x74];
                                      if ((lVar32 == 0) ||
                                         (lVar31 = *(long *)(lVar32 + 0x38), lVar31 == 0))
                                      goto LAB_0613705c;
                                      uVar44 = *(uint *)((long)unaff_x19 + 0x4a4);
                                      if (*(uint *)(lVar31 + 0x18) <= uVar44) goto LAB_0613719c;
                                      lVar31 = lVar31 + (long)(int)uVar44 * 0x178;
                                      *(undefined1 *)(lVar31 + 400) = 0;
                                      uVar54 = *(uint *)(unaff_x19 + 0x54);
                                      if ((((uVar24 == 9) ||
                                           ((uVar24 == 0x200b || uVar25 != 0 &&
                                            ((*(uint *)((long)unaff_x19 + 0x304) & 0xfffffffe) == 2)
                                            ))) || ((uVar25 == 0 &&
                                                    (((uVar24 != 3 && (uVar24 != 0x200b)) &&
                                                     (uVar24 != 0xad)))))) ||
                                         ((uVar24 == 0xad && bVar19 == 0 ||
                                          (*(int *)((long)unaff_x19 + 0x65c) == 1)))) {
                                        *(undefined1 *)(lVar31 + 400) = 1;
                                        pfVar45 = (float *)((long)unaff_x19 + 0x38c);
                                        pfVar39 = (float *)(unaff_x19 + 0x71);
                                        if (uVar96 == uVar98) {
                                          lVar32 = *(long *)(lVar32 + 0x50);
                                          if (lVar32 == 0) goto LAB_0613705c;
                                          if (*(uint *)(lVar32 + 0x18) <=
                                              *(uint *)(unaff_x19 + 0x97)) goto LAB_0613719c;
                                          lVar32 = lVar32 + (long)(int)*(uint *)(unaff_x19 + 0x97) *
                                                            0x60;
                                          pfVar39 = (float *)(lVar32 + 100);
                                          pfVar45 = (float *)(lVar32 + 0x68);
                                        }
                                        fVar69 = *pfVar39;
                                        fVar68 = *pfVar45;
                                        fVar86 = *(float *)(unaff_x19 + 0x73);
                                        fVar70 = 0.0;
                                        fVar94 = *(float *)(unaff_x19 + 0xcb);
                                        fStack0000000000000134 = (fVar93 - fVar69) - fVar68;
                                        bVar15 = true;
                                        if ((fVar86 <= fStack0000000000000134) &&
                                           (bVar15 = false, !NAN(fVar86))) {
                                          bVar15 = fVar86 == -1.0;
                                        }
                                        if (!bVar15) {
                                          fStack0000000000000134 = fVar86;
                                        }
                                        fVar71 = 0.0;
                                        if ((char)unaff_x19[0x1e] == '\0') {
                                          fVar71 = (float)FUN_063ecee4(&stack0x00001260,0);
                                        }
                                        fVar87 = *(float *)((long)unaff_x19 + 0x4ec);
                                        fVar86 = fVar62;
                                        if (uVar24 != 0xad) {
                                          fVar86 = fVar67;
                                        }
                                        fVar62 = *(float *)(unaff_x19 + 0x60);
                                        auVar78 = ZEXT416((uint)fVar62);
                                        if ((0.0 < fVar87) && ((char)unaff_x19[0x5e] == '\0')) {
                                          fVar70 = *(float *)((long)unaff_x19 + 0x4dc) -
                                                   *(float *)((long)unaff_x19 + 0x4e4);
                                        }
                                        iVar28 = *(int *)((long)unaff_x19 + 0x4a4);
                                        fVar70 = (*(float *)((long)unaff_x19 + 0x4cc) -
                                                 (*(float *)(unaff_x19 + 0x9c) - fVar87)) + fVar70;
                                        if (fVar63 < fVar70) {
                                          if (*(int *)((long)unaff_x19 + 0x314) == -1) {
                                            *(int *)((long)unaff_x19 + 0x314) = iVar28;
                                          }
                                          plVar41 = (long *)
                                                  Method_System_HashCode_Combine<ulong,_int>__;
                                          fVar85 = DAT_010fcf54;
                                          if ((char)unaff_x19[0x4c] != '\0') {
                                            if (0.0 < fVar87) {
                                              fVar87 = *(float *)((long)unaff_x19 + 0x2f4);
                                              if ((fVar87 < *(float *)(unaff_x19 + 0x5d)) &&
                                                 (*(int *)((long)unaff_x19 + 0x26c) <
                                                  (int)unaff_x19[0x4e])) {
                                                fVar60 = *(float *)(unaff_x19 + 0x5d) +
                                                         ((fVar91 - fVar70) /
                                                         (float)(int)unaff_x19[0x97]) / fVar60;
                                                if (fVar60 <= fVar87) {
                                                  fVar60 = fVar87;
                                                }
                                                goto LAB_06137088;
                                              }
                                            }
                                            fVar70 = *(float *)((long)unaff_x19 + 0x20c);
                                            fVar87 = *(float *)(unaff_x19 + 0x4f);
                                            if ((fVar87 < fVar70) &&
                                               (*(int *)((long)unaff_x19 + 0x26c) <
                                                (int)unaff_x19[0x4e])) {
                                              *(float *)((long)unaff_x19 + 0x264) = fVar70;
                                              fVar60 = (fVar70 - *(float *)(unaff_x19 + 0x4d)) * 0.5
                                              ;
                                              if (fVar60 <= fVar85) {
                                                fVar60 = fVar85;
                                              }
                                              fVar86 = (fVar70 - fVar60) * 20.0 + 0.5;
                                              fVar60 = DAT_010fd008;
                                              if (fVar86 != INFINITY) {
                                                fVar60 = (float)(int)fVar86 / 20.0;
                                              }
                                              if (fVar60 <= fVar87) {
                                                fVar60 = fVar87;
                                              }
                                              *(float *)((long)unaff_x19 + 0x20c) = fVar60;
                                              return;
                                            }
                                          }
                                          iVar46 = (int)unaff_x19[0x62];
                                          if (iVar46 < 5) {
                                            if (iVar46 == 1) {
                                              lVar32 = *(long *)
                                                  Method_System_HashCode_Combine<ulong,_int>__;
                                              if (*(int *)(lVar32 + 0xe4) == 0) {
                                                thunk_FUN_02df485c();
                                                lVar32 = *plVar41;
                                              }
                                              plVar55 = (long *)PTR_DAT_069fb930;
                                              lVar31 = *(long *)(lVar32 + 0xb8);
                                              if (*(int *)(lVar31 + 0x1708) == 0) {
LAB_06132760:
                                                plVar55 = (long *)PTR_DAT_069fb930;
                                                *(undefined8 *)((long)unaff_x19 + 0x4a4) = 0;
                                                fVar62 = fVar67;
                                                uVar95 = 0xffffffff;
                                                in_stack_00001298 = DAT_010fbcf8;
                                              }
                                              else {
                                                if (*(int *)(lVar32 + 0xe4) == 0) {
                                                  thunk_FUN_02df485c();
                                                  lVar31 = *(long *)(*plVar41 + 0xb8);
                                                }
                                                FUN_047e2610(&stack0x000012b0,lVar31 + 0x1338,
                                                             *(undefined8 *)
                                                                                                                            
                                                  Method_System_HashCode_Add<RenderedText>__);
                                                memcpy(&stack0x00000d28,&stack0x000012b0,0x3b8);
LAB_0613272c:
                                                iVar28 = FUN_06183d40();
                                                uVar95 = iVar28 - 1;
                                                iVar58 = iVar58 + 1;
                                                iVar28 = *(int *)((long)unaff_x19 + 0x4a4) + -1;
                                                *(int *)((long)unaff_x19 + 0x4a4) = iVar28;
                                                uVar20 = 0x2026;
LAB_06132758:
                                                fVar62 = fVar67;
                                                in_stack_00001298 = CONCAT44(uVar20,iVar28);
                                              }
                                              goto LAB_06133f74;
                                            }
                                            if (iVar46 != 3) goto LAB_06132224;
                                            if (*(int *)(*(long *)
                                                  Method_System_HashCode_Combine<ulong,_int>__ +
                                                  0xe4) == 0) {
                                              thunk_FUN_02df485c();
                                            }
LAB_061323c4:
                                            uVar95 = FUN_06183d40();
                                          }
                                          else {
                                            if (iVar46 == 5) {
                                              if (((int)uVar95 < 0) || (iVar28 == 0)) {
                                                *(undefined4 *)((long)unaff_x19 + 0x4a4) = 0;
                                                uVar95 = 0xffffffff;
                                                plVar41 = (long *)
                                                  Method_System_HashCode_Combine<ulong,_int>__;
                                                plVar55 = (long *)PTR_DAT_069fb930;
                                                fVar62 = fVar67;
                                                in_stack_00001298 = DAT_010fbcf8;
                                              }
                                              else {
                                                auVar78 = ZEXT416((uint)fVar63);
                                                if (fVar63 < *(float *)((long)unaff_x19 + 0x4dc) -
                                                             *(float *)(unaff_x19 + 0x9c)) {
                                                  if (*(int *)(*(long *)
                                                  Method_System_HashCode_Combine<ulong,_int>__ +
                                                  0xe4) == 0) {
                                                    thunk_FUN_02df485c();
                                                  }
                                                  goto LAB_061323c4;
                                                }
                                                if (*(int *)(*(long *)
                                                  Method_System_HashCode_Combine<ulong,_int>__ +
                                                  0xe4) == 0) {
                                                  thunk_FUN_02df485c();
                                                }
                                                plVar55 = (long *)PTR_DAT_069fb930;
                                                uVar95 = FUN_06183d40();
                                                *(undefined1 *)((long)unaff_x19 + 0x374) = 1;
                                                *(undefined4 *)(unaff_x19 + 0x95) =
                                                     *(undefined4 *)((long)unaff_x19 + 0x4a4);
                                                uVar36 = *(undefined8 *)
                                                          (*(long *)(*plVar41 + 0xb8) + 0x1730);
                                                *(float *)(unaff_x19 + 0xcb) =
                                                     *(float *)((long)unaff_x19 + 0x444) + 0.0;
                                                *(undefined4 *)((long)unaff_x19 + 0x4e4) = 0;
                                                uVar36 = NEON_rev64(uVar36,4);
                                                auVar78 = ZEXT816(0);
                                                *(int *)(unaff_x19 + 0x97) =
                                                     (int)unaff_x19[0x97] + 1;
                                                *(undefined4 *)((long)unaff_x19 + 0x4ec) = 0;
                                                unaff_x19[0x99] = 0;
                                                *(undefined8 *)((long)unaff_x19 + 0x4dc) = uVar36;
                                                *(int *)((long)unaff_x19 + 0x4c4) =
                                                     *(int *)((long)unaff_x19 + 0x4c4) + 1;
                                                fVar62 = fVar67;
                                              }
                                              goto LAB_06133f74;
                                            }
                                            if (iVar46 != 6) goto LAB_06132224;
                                            if (*(int *)(*(long *)
                                                  Method_System_HashCode_Combine<ulong,_int>__ +
                                                  0xe4) == 0) {
                                              thunk_FUN_02df485c();
                                            }
                                            uVar95 = FUN_06183d40();
                                            lVar32 = unaff_x19[99];
                                            if (*(int *)(*(long *)PTR_DAT_069fb990 + 0xe4) == 0) {
                                              thunk_FUN_02df485c();
                                            }
                                            uVar30 = FUN_0634eb94(lVar32,0,0);
                                            if ((uVar30 & 1) != 0) {
                                              plVar55 = (long *)unaff_x19[99];
                                              uVar36 = (**(code **)(*unaff_x19 + 0x548))();
                                              if (plVar55 == (long *)0x0) goto LAB_0613705c;
                                              (**(code **)(*plVar55 + 0x558))
                                                        (plVar55,uVar36,
                                                         *(undefined8 *)(*plVar55 + 0x560));
                                              lVar32 = unaff_x19[99];
                                              if (lVar32 == 0) goto LAB_0613705c;
                                              *(int *)(lVar32 + 0x438) = (int)unaff_x19[0x87];
                                              FUN_0617757c(lVar32,*(undefined4 *)
                                                                   ((long)unaff_x19 + 0x4a4),0);
                                              plVar55 = (long *)unaff_x19[99];
                                              if (plVar55 == (long *)0x0) goto LAB_0613705c;
                                              (**(code **)(*plVar55 + 0x7d8))
                                                        (plVar55,0,0,
                                                         *(undefined8 *)(*plVar55 + 0x7e0));
                                              *(undefined1 *)(unaff_x19 + 0x65) = 1;
                                            }
                                          }
                                          plVar55 = (long *)PTR_DAT_069fb930;
                                          fVar62 = fVar67;
                                          in_stack_00001298 = CONCAT44(3,iVar28);
                                          goto LAB_06133f74;
                                        }
LAB_06132224:
                                        plVar41 = (long *)
                                                  Method_System_HashCode_Combine<ulong,_int>__;
                                        plVar55 = (long *)PTR_DAT_069fb930;
                                        if ((uVar30 & 1) != 0) {
                                          fVar70 = 1.0;
                                          if ((uVar54 & 0x18) != 0) {
                                            fVar70 = DAT_010fd188;
                                          }
                                          fVar94 = ABS(fVar94) + fVar71 * (1.0 - fVar62) * fVar86;
                                          if (fVar70 * fStack0000000000000134 < fVar94) {
                                            if (((*(int *)((long)unaff_x19 + 0x304) != 0) &&
                                                (*(int *)((long)unaff_x19 + 0x304) != 3)) &&
                                               (iVar28 != (int)unaff_x19[0x95])) {
                                              if (*(int *)(*(long *)
                                                  Method_System_HashCode_Combine<ulong,_int>__ +
                                                  0xe4) == 0) {
                                                thunk_FUN_02df485c();
                                              }
                                              uVar95 = FUN_06183d40();
                                              if (*(float *)((long)unaff_x19 + 0x2ec) ==
                                                  DAT_010fcd2c) {
                                                lVar32 = unaff_x19[0x74];
                                                if ((lVar32 == 0) ||
                                                   (lVar31 = *(long *)(lVar32 + 0x38), lVar31 == 0))
                                                goto LAB_0613705c;
                                                if (*(uint *)(lVar31 + 0x18) <=
                                                    *(uint *)((long)unaff_x19 + 0x4a4))
                                                goto LAB_0613719c;
                                                fVar62 = *(float *)((long)unaff_x19 + 0x4ec);
                                                fVar86 = 0.0;
                                                if ((0.0 < fVar62) &&
                                                   ((char)unaff_x19[0x5e] == '\0')) {
                                                  fVar86 = *(float *)((long)unaff_x19 + 0x4dc) -
                                                           *(float *)((long)unaff_x19 + 0x4e4);
                                                }
                                                fVar71 = fVar80 * *(float *)((long)unaff_x19 + 0x2e4
                                                                            ) +
                                                         *(float *)(lVar31 + (long)(int)*(uint *)((
                                                  long)unaff_x19 + 0x4a4) * 0x178 + 0x14c) +
                                                  (fVar86 - *(float *)(unaff_x19 + 0x9c)) +
                                                  fVar60 * (fVar61 + *(float *)(unaff_x19 + 0x5d));
                                              }
                                              else {
                                                lVar32 = unaff_x19[0x74];
                                                *(undefined1 *)(unaff_x19 + 0x5e) = 1;
                                                if (lVar32 == 0) goto LAB_0613705c;
                                                fVar71 = *(float *)((long)unaff_x19 + 0x2ec) +
                                                         fVar80 * *(float *)((long)unaff_x19 + 0x2e4
                                                                            );
                                                fVar62 = *(float *)((long)unaff_x19 + 0x4ec);
                                              }
                                              puVar13 = Method_System_HashCode_Combine<ulong,_int>__
                                              ;
                                              lVar32 = *(long *)(lVar32 + 0x38);
                                              if (lVar32 == 0) goto LAB_0613705c;
                                              uVar44 = *(uint *)((long)unaff_x19 + 0x4a4);
                                              if ((*(uint *)(lVar32 + 0x18) <= uVar44) ||
                                                 (uVar47 = uVar44 - 1,
                                                 *(uint *)(lVar32 + 0x18) <= uVar47))
                                              goto LAB_0613719c;
                                              fVar86 = *(float *)((long)unaff_x19 + 0x4cc);
                                              lVar32 = lVar32 + 0x20;
                                              fVar87 = *(float *)(lVar32 + (long)(int)uVar44 * 0x178
                                                                 + 0x130);
                                              auVar78 = ZEXT416((uint)fVar87);
                                              fVar87 = (fVar71 + fVar86 + fVar62) - fVar87;
                                              if ((*(short *)(lVar32 + (long)(int)uVar47 * 0x178 + 4
                                                             ) == 0xad && bVar19 == 0) &&
                                                 (((int)unaff_x19[0x62] == 0 || (fVar87 < fVar63))))
                                              {
                                                bVar19 = 0;
                                                uVar95 = uVar95 - 1;
                                                *(uint *)((long)unaff_x19 + 0x4a4) = uVar47;
                                                plVar41 = (long *)
                                                  Method_System_HashCode_Combine<ulong,_int>__;
                                                plVar55 = (long *)PTR_DAT_069fb930;
                                                fVar62 = fVar67;
                                                in_stack_00001298 = CONCAT44(0x2d,uVar47);
                                                goto LAB_06133f74;
                                              }
                                              if (*(short *)(lVar32 + (long)(int)uVar44 * 0x178 + 4)
                                                  == 0xad) {
                                                bVar19 = 1;
                                                plVar41 = (long *)
                                                  Method_System_HashCode_Combine<ulong,_int>__;
                                                plVar55 = (long *)PTR_DAT_069fb930;
                                                fVar62 = fVar67;
                                              }
                                              else {
                                                if ((char)unaff_x19[0x4c] != '\0' &&
                                                    ((bVar18 ^ 0xff) & 1) == 0) {
                                                  fVar71 = *(float *)((long)unaff_x19 + 0x2fc) /
                                                           100.0;
                                                  fVar62 = *(float *)(unaff_x19 + 0x60);
                                                  if ((fVar62 < fVar71) &&
                                                     (*(int *)((long)unaff_x19 + 0x26c) <
                                                      (int)unaff_x19[0x4e])) goto LAB_061370f4;
                                                  fVar62 = *(float *)((long)unaff_x19 + 0x20c);
                                                  fVar71 = *(float *)(unaff_x19 + 0x4f);
                                                  auVar78 = ZEXT416((uint)fVar71);
                                                  if ((fVar71 < fVar62) &&
                                                     (*(int *)((long)unaff_x19 + 0x26c) <
                                                      (int)unaff_x19[0x4e])) goto LAB_0613713c;
                                                }
                                                lVar32 = *(long *)
                                                  Method_System_HashCode_Combine<ulong,_int>__;
                                                if (*(int *)(lVar32 + 0xe4) == 0) {
                                                  thunk_FUN_02df485c();
                                                  lVar32 = *(long *)puVar13;
                                                }
                                                if (((bVar18 != 0) &&
                                                    (iVar46 = *(int *)(*(long *)(lVar32 + 0xb8) +
                                                                      0xf80), iVar46 != -1)) &&
                                                   (iVar46 != iStack0000000000000020)) {
                                                  if (*(int *)(lVar32 + 0xe4) == 0) {
                                                    thunk_FUN_02df485c();
                                                  }
                                                  uVar95 = FUN_06183d40();
                                                  if ((unaff_x19[0x74] == 0) ||
                                                     (lVar32 = *(long *)(unaff_x19[0x74] + 0x38),
                                                     lVar32 == 0)) goto LAB_0613705c;
                                                  uVar44 = *(int *)((long)unaff_x19 + 0x4a4) - 1;
                                                  if (*(uint *)(lVar32 + 0x18) <= uVar44)
                                                  goto LAB_0613719c;
                                                  iStack0000000000000020 = iVar46;
                                                  if (*(short *)(lVar32 + (long)(int)uVar44 * 0x178
                                                                + 0x24) == 0xad) {
                                                    uVar95 = uVar95 - 1;
                                                    bVar19 = 0;
                                                    *(uint *)((long)unaff_x19 + 0x4a4) = uVar44;
                                                    plVar41 = (long *)
                                                  Method_System_HashCode_Combine<ulong,_int>__;
                                                  plVar55 = (long *)PTR_DAT_069fb930;
                                                  fVar62 = fVar67;
                                                  in_stack_00001298 = CONCAT44(0x2d,uVar44);
                                                  goto LAB_06133f74;
                                                  }
                                                }
                                                if (fVar87 <= fVar63) {
                                                  auVar78 = ZEXT416((uint)fVar67);
                                                  fVar86 = fVar80;
                                                  FUN_0618480c();
                                                  bVar19 = 0;
                                                  bVar18 = 1;
                                                  bVar16 = true;
                                                  plVar41 = (long *)
                                                  Method_System_HashCode_Combine<ulong,_int>__;
                                                  plVar55 = (long *)PTR_DAT_069fb930;
                                                  fVar62 = fVar67;
                                                }
                                                else {
                                                  if (*(int *)((long)unaff_x19 + 0x314) == -1) {
                                                    *(undefined4 *)((long)unaff_x19 + 0x314) =
                                                         *(undefined4 *)((long)unaff_x19 + 0x4a4);
                                                  }
                                                  plVar55 = (long *)PTR_DAT_069fb930;
                                                  if ((char)unaff_x19[0x4c] != '\0') {
                                                    fVar62 = *(float *)((long)unaff_x19 + 0x2f4);
                                                    if ((fVar62 < *(float *)(unaff_x19 + 0x5d)) &&
                                                       (*(int *)((long)unaff_x19 + 0x26c) <
                                                        (int)unaff_x19[0x4e])) {
                                                      fVar60 = *(float *)(unaff_x19 + 0x5d) +
                                                               ((fVar91 - fVar87) /
                                                               (float)((int)unaff_x19[0x97] + 1)) /
                                                               fVar60;
                                                      if (fVar60 <= fVar62) {
                                                        fVar60 = fVar62;
                                                      }
LAB_06137088:
                                                      *(float *)(unaff_x19 + 0x5d) = fVar60;
                                                      return;
                                                    }
                                                    fVar71 = *(float *)((long)unaff_x19 + 0x2fc) /
                                                             100.0;
                                                    fVar62 = *(float *)(unaff_x19 + 0x60);
                                                    if ((fVar62 < fVar71) &&
                                                       (*(int *)((long)unaff_x19 + 0x26c) <
                                                        (int)unaff_x19[0x4e])) {
LAB_061370f4:
                                                      fVar60 = fVar94;
                                                      if (0.0 < fVar62) {
                                                        fVar60 = fVar94 / (1.0 - fVar62);
                                                      }
                                                      fVar62 = fVar62 + (fVar94 - fVar70 * (
                                                  fStack0000000000000134 + DAT_010fcf90)) / fVar60;
                                                  if (fVar71 <= fVar62) {
                                                    fVar62 = fVar71;
                                                  }
                                                  *(float *)(unaff_x19 + 0x60) = fVar62;
                                                  return;
                                                  }
                                                  fVar62 = *(float *)((long)unaff_x19 + 0x20c);
                                                  fVar71 = *(float *)(unaff_x19 + 0x4f);
                                                  auVar78 = ZEXT416((uint)fVar71);
                                                  if ((fVar71 < fVar62) &&
                                                     (*(int *)((long)unaff_x19 + 0x26c) <
                                                      (int)unaff_x19[0x4e])) goto LAB_0613713c;
                                                  }
                                                  iVar46 = (int)unaff_x19[0x62];
                                                  bVar19 = 0;
                                                  if (iVar46 < 3) {
                                                    if (iVar46 != 0) {
                                                      if (iVar46 == 1) {
                                                        lVar32 = *(long *)
                                                  Method_System_HashCode_Combine<ulong,_int>__;
                                                  if (*(int *)(lVar32 + 0xe4) == 0) {
                                                    thunk_FUN_02df485c();
                                                    lVar32 = *(long *)
                                                  Method_System_HashCode_Combine<ulong,_int>__;
                                                  }
                                                  in_stack_00001298 = DAT_010fbcf8;
                                                  lVar31 = *(long *)(lVar32 + 0xb8);
                                                  if (*(int *)(lVar31 + 0x1708) == 0) {
                                                    uVar95 = 0xffffffff;
                                                    *(undefined8 *)((long)unaff_x19 + 0x4a4) = 0;
                                                    goto LAB_06134460;
                                                  }
                                                  if (*(int *)(lVar32 + 0xe4) == 0) {
                                                    thunk_FUN_02df485c();
                                                    lVar31 = *(long *)(*(long *)
                                                  Method_System_HashCode_Combine<ulong,_int>__ +
                                                  0xb8);
                                                  }
                                                  FUN_047e2610(&stack0x000012b0,lVar31 + 0x1338,
                                                               *(undefined8 *)
                                                                                                                                
                                                  Method_System_HashCode_Add<RenderedText>__);
                                                  memcpy(&stack0x00000970,&stack0x000012b0,0x3b8);
                                                  iVar28 = FUN_06183d40();
                                                  uVar95 = iVar28 - 1;
                                                  iVar58 = iVar58 + 1;
                                                  iVar28 = *(int *)((long)unaff_x19 + 0x4a4) + -1;
                                                  *(int *)((long)unaff_x19 + 0x4a4) = iVar28;
                                                  uVar20 = 0x2026;
                                                  goto LAB_06134414;
                                                  }
                                                  if (iVar46 != 2) goto LAB_06132e4c;
                                                  }
LAB_06132d24:
                                                  auVar78 = ZEXT416((uint)fVar67);
                                                  fVar86 = fVar80;
                                                  FUN_0618480c();
                                                  bVar19 = 0;
                                                  bVar18 = 1;
                                                  bVar16 = true;
                                                  plVar41 = (long *)
                                                  Method_System_HashCode_Combine<ulong,_int>__;
                                                  fVar62 = fVar67;
                                                  }
                                                  else if (iVar46 < 5) {
                                                    if (iVar46 != 3) {
                                                      if (iVar46 == 4) goto LAB_06132d24;
                                                      goto LAB_06132e4c;
                                                    }
                                                    if (*(int *)(*(long *)
                                                  Method_System_HashCode_Combine<ulong,_int>__ +
                                                  0xe4) == 0) {
                                                    thunk_FUN_02df485c();
                                                  }
                                                  uVar95 = FUN_06183d40();
                                                  uVar20 = 3;
LAB_06134414:
                                                  in_stack_00001298 = CONCAT44(uVar20,iVar28);
LAB_06134460:
                                                  bVar19 = 0;
                                                  plVar41 = (long *)
                                                  Method_System_HashCode_Combine<ulong,_int>__;
                                                  plVar55 = (long *)PTR_DAT_069fb930;
                                                  fVar62 = fVar67;
                                                  }
                                                  else {
                                                    if (iVar46 != 5) {
                                                      if (iVar46 != 6) goto LAB_06132e4c;
                                                      lVar32 = unaff_x19[99];
                                                      if (*(int *)(*(long *)PTR_DAT_069fb990 + 0xe4)
                                                          == 0) {
                                                        thunk_FUN_02df485c();
                                                      }
                                                      uVar30 = FUN_0634eb94(lVar32,0,0);
                                                      if ((uVar30 & 1) != 0) {
                                                        plVar55 = (long *)unaff_x19[99];
                                                        uVar36 = (**(code **)(*unaff_x19 + 0x548))()
                                                        ;
                                                        if (plVar55 == (long *)0x0)
                                                        goto LAB_0613705c;
                                                        (**(code **)(*plVar55 + 0x558))
                                                                  (plVar55,uVar36,
                                                                   *(undefined8 *)(*plVar55 + 0x560)
                                                                  );
                                                        lVar32 = unaff_x19[99];
                                                        if (lVar32 == 0) goto LAB_0613705c;
                                                        *(int *)(lVar32 + 0x438) =
                                                             (int)unaff_x19[0x87];
                                                        FUN_0617757c(lVar32,*(undefined4 *)
                                                                             ((long)unaff_x19 +
                                                                             0x4a4),0);
                                                        plVar55 = (long *)unaff_x19[99];
                                                        if (plVar55 == (long *)0x0)
                                                        goto LAB_0613705c;
                                                        (**(code **)(*plVar55 + 0x7d8))
                                                                  (plVar55,0,0,
                                                                   *(undefined8 *)(*plVar55 + 0x7e0)
                                                                  );
                                                        *(undefined1 *)(unaff_x19 + 0x65) = 1;
                                                      }
                                                      in_stack_00001298 =
                                                           CONCAT44(3,*(undefined4 *)
                                                                       ((long)unaff_x19 + 0x4a4));
                                                      goto LAB_06134460;
                                                    }
                                                    auVar78 = ZEXT416((uint)fVar67);
                                                    bVar18 = 1;
                                                    *(undefined1 *)((long)unaff_x19 + 0x374) = 1;
                                                    fVar86 = fVar80;
                                                    FUN_0618480c();
                                                    bVar19 = 0;
                                                    *(undefined4 *)((long)unaff_x19 + 0x4e4) = 0;
                                                    *(undefined4 *)((long)unaff_x19 + 0x4ec) = 0;
                                                    *(int *)((long)unaff_x19 + 0x4c4) =
                                                         *(int *)((long)unaff_x19 + 0x4c4) + 1;
                                                    unaff_x19[0x99] = 0;
                                                    bVar16 = true;
                                                    plVar41 = (long *)
                                                  Method_System_HashCode_Combine<ulong,_int>__;
                                                  plVar55 = (long *)PTR_DAT_069fb930;
                                                  fVar62 = fVar67;
                                                  }
                                                }
                                              }
                                              goto LAB_06133f74;
                                            }
                                            if (((char)unaff_x19[0x4c] != '\0') &&
                                               (*(int *)((long)unaff_x19 + 0x26c) <
                                                (int)unaff_x19[0x4e])) {
                                              fVar86 = 100.0;
                                              fVar71 = *(float *)((long)unaff_x19 + 0x2fc) / 100.0;
                                              if (fVar62 < fVar71) goto LAB_061370f4;
                                              fVar62 = *(float *)((long)unaff_x19 + 0x20c);
                                              fVar71 = *(float *)(unaff_x19 + 0x4f);
                                              auVar78 = ZEXT416((uint)fVar71);
                                              if (fVar71 < fVar62) {
LAB_0613713c:
                                                fVar60 = DAT_010fcf54;
                                                *(float *)((long)unaff_x19 + 0x264) = fVar62;
                                                fVar86 = (fVar62 - *(float *)(unaff_x19 + 0x4d)) *
                                                         0.5;
                                                if (fVar86 <= fVar60) {
                                                  fVar86 = fVar60;
                                                }
                                                fVar86 = (fVar62 - fVar86) * 20.0 + 0.5;
                                                fVar60 = DAT_010fd008;
                                                if (fVar86 != INFINITY) {
                                                  fVar60 = (float)(int)fVar86 / 20.0;
                                                }
                                                if (fVar60 <= fVar71) {
                                                  fVar60 = fVar71;
                                                }
                                                goto LAB_06134534;
                                              }
                                            }
                                            iVar46 = (int)unaff_x19[0x62];
                                            if (iVar46 == 1) {
                                              lVar32 = *(long *)
                                                  Method_System_HashCode_Combine<ulong,_int>__;
                                              if (*(int *)(lVar32 + 0xe4) == 0) {
                                                thunk_FUN_02df485c();
                                                lVar32 = *plVar41;
                                              }
                                              plVar55 = (long *)PTR_DAT_069fb930;
                                              lVar31 = *(long *)(lVar32 + 0xb8);
                                              if (*(int *)(lVar31 + 0x1708) == 0) goto LAB_06132760;
                                              if (*(int *)(lVar32 + 0xe4) == 0) {
                                                thunk_FUN_02df485c();
                                                lVar31 = *(long *)(*plVar41 + 0xb8);
                                              }
                                              FUN_047e2610(&stack0x000012b0,lVar31 + 0x1338,
                                                           *(undefined8 *)
                                                                                                                        
                                                  Method_System_HashCode_Add<RenderedText>__);
                                              memcpy(&stack0x000005b8,&stack0x000012b0,0x3b8);
                                              goto LAB_0613272c;
                                            }
                                            if (iVar46 == 6) {
                                              if (*(int *)(*(long *)
                                                  Method_System_HashCode_Combine<ulong,_int>__ +
                                                  0xe4) == 0) {
                                                thunk_FUN_02df485c();
                                              }
                                              uVar95 = FUN_06183d40();
                                              lVar32 = unaff_x19[99];
                                              if (*(int *)(*(long *)PTR_DAT_069fb990 + 0xe4) == 0) {
                                                thunk_FUN_02df485c();
                                              }
                                              uVar30 = FUN_0634eb94(lVar32,0,0);
                                              if ((uVar30 & 1) != 0) {
                                                plVar56 = (long *)unaff_x19[99];
                                                uVar36 = (**(code **)(*unaff_x19 + 0x548))();
                                                if (plVar56 == (long *)0x0) goto LAB_0613705c;
                                                (**(code **)(*plVar56 + 0x558))
                                                          (plVar56,uVar36,
                                                           *(undefined8 *)(*plVar56 + 0x560));
                                                lVar32 = unaff_x19[99];
                                                if (lVar32 == 0) goto LAB_0613705c;
                                                *(int *)(lVar32 + 0x438) = (int)unaff_x19[0x87];
                                                FUN_0617757c(lVar32,*(undefined4 *)
                                                                     ((long)unaff_x19 + 0x4a4),0);
                                                plVar56 = (long *)unaff_x19[99];
                                                if (plVar56 == (long *)0x0) goto LAB_0613705c;
                                                (**(code **)(*plVar56 + 0x7d8))
                                                          (plVar56,0,0,
                                                           *(undefined8 *)(*plVar56 + 0x7e0));
                                                *(undefined1 *)(unaff_x19 + 0x65) = 1;
                                              }
                                              iVar28 = *(int *)((long)unaff_x19 + 0x4a4);
                                              uVar20 = 3;
                                              goto LAB_06132758;
                                            }
                                            if (iVar46 == 3) {
                                              if (*(int *)(*(long *)
                                                  Method_System_HashCode_Combine<ulong,_int>__ +
                                                  0xe4) == 0) {
                                                thunk_FUN_02df485c();
                                              }
                                              goto LAB_061323c4;
                                            }
                                          }
                                        }
LAB_06132e4c:
                                        plVar55 = (long *)PTR_DAT_069fb930;
                                        if (uVar25 == 0) {
                                          if (uVar24 == 0xad) {
                                            if ((unaff_x19[0x74] == 0) ||
                                               (lVar32 = *(long *)(unaff_x19[0x74] + 0x38),
                                               lVar32 == 0)) goto LAB_0613705c;
                                            if (*(uint *)(lVar32 + 0x18) <=
                                                *(uint *)((long)unaff_x19 + 0x4a4))
                                            goto LAB_0613719c;
                                            *(undefined1 *)
                                             (lVar32 + (long)(int)*(uint *)((long)unaff_x19 + 0x4a4)
                                                       * 0x178 + 400) = 0;
                                          }
                                          else {
                                            if (*(int *)((long)unaff_x19 + 0x65c) == 1) {
                                              (**(code **)(*unaff_x19 + 0x8c8))();
                                            }
                                            else if (*(int *)((long)unaff_x19 + 0x65c) == 0) {
                                              (**(code **)(*unaff_x19 + 0x8b8))();
                                            }
                                            if (bVar16) {
                                              *(undefined4 *)((long)unaff_x19 + 0x4ac) =
                                                   *(undefined4 *)((long)unaff_x19 + 0x4a4);
                                            }
                                            *(undefined4 *)((long)unaff_x19 + 0x4b4) =
                                                 *(undefined4 *)((long)unaff_x19 + 0x4a4);
                                            *(int *)((long)unaff_x19 + 0x4bc) =
                                                 *(int *)((long)unaff_x19 + 0x4bc) + 1;
                                            if ((unaff_x19[0x74] == 0) ||
                                               (lVar32 = *(long *)(unaff_x19[0x74] + 0x50),
                                               lVar32 == 0)) goto LAB_0613705c;
                                            if (*(uint *)(lVar32 + 0x18) <=
                                                *(uint *)(unaff_x19 + 0x97)) goto LAB_0613719c;
                                            bVar16 = false;
                                            lVar32 = lVar32 + (long)(int)*(uint *)(unaff_x19 + 0x97)
                                                              * 0x60;
                                            *(float *)(lVar32 + 100) = fVar69;
                                            *(float *)(lVar32 + 0x68) = fVar68;
                                          }
                                        }
                                        else {
                                          lVar32 = unaff_x19[0x74];
                                          if ((lVar32 == 0) ||
                                             (lVar31 = *(long *)(lVar32 + 0x38), lVar31 == 0))
                                          goto LAB_0613705c;
                                          uVar44 = *(uint *)((long)unaff_x19 + 0x4a4);
                                          if (*(uint *)(lVar31 + 0x18) <= uVar44) goto LAB_0613719c;
                                          *(undefined1 *)(lVar31 + (long)(int)uVar44 * 0x178 + 400)
                                               = 0;
                                          *(uint *)((long)unaff_x19 + 0x4b4) = uVar44;
                                          lVar31 = *(long *)(lVar32 + 0x50);
                                          if (lVar31 == 0) goto LAB_0613705c;
                                          uVar44 = *(uint *)(lVar31 + 0x18);
                                          if (uVar44 <= *(uint *)(unaff_x19 + 0x97))
                                          goto LAB_0613719c;
                                          lVar31 = lVar31 + 0x20;
                                          lVar48 = lVar31 + (long)(int)*(uint *)(unaff_x19 + 0x97) *
                                                            0x60;
                                          iVar28 = *(int *)(lVar48 + 0xc) + 1;
                                          *(int *)(lVar48 + 0xc) = iVar28;
                                          uVar47 = *(uint *)(unaff_x19 + 0x97);
                                          *(int *)(unaff_x19 + 0x98) = iVar28;
                                          if (uVar44 <= uVar47) goto LAB_0613719c;
                                          lVar48 = lVar31 + (long)(int)uVar47 * 0x60;
                                          *(float *)(lVar48 + 0x44) = fVar69;
                                          *(float *)(lVar48 + 0x48) = fVar68;
                                          *(int *)(lVar32 + 0x20) = *(int *)(lVar32 + 0x20) + 1;
                                          if (uVar24 == 0xa0) {
                                            *(int *)(lVar31 + (long)(int)uVar47 * 0x60) =
                                                 *(int *)(lVar31 + (long)(int)uVar47 * 0x60) + 1;
                                          }
                                        }
                                      }
                                      else {
                                        if (((uVar24 & 0xfffffffe) == 10) &&
                                           ((int)unaff_x19[0x62] == 6)) {
                                          fVar62 = 0.0;
                                          if ((0.0 < fVar68) && ((char)unaff_x19[0x5e] == '\0')) {
                                            fVar62 = *(float *)((long)unaff_x19 + 0x4dc) -
                                                     *(float *)((long)unaff_x19 + 0x4e4);
                                          }
                                          fVar86 = *(float *)((long)unaff_x19 + 0x4cc);
                                          auVar78 = ZEXT416((uint)fVar63);
                                          if (fVar63 < (fVar86 - (*(float *)(unaff_x19 + 0x9c) -
                                                                 fVar68)) + fVar62) {
                                            if (*(int *)((long)unaff_x19 + 0x314) == -1) {
                                              *(uint *)((long)unaff_x19 + 0x314) = uVar44;
                                            }
                                            plVar41 = (long *)
                                                  Method_System_HashCode_Combine<ulong,_int>__;
                                            plVar55 = (long *)PTR_DAT_069fb930;
                                            if (*(int *)(*(long *)
                                                  Method_System_HashCode_Combine<ulong,_int>__ +
                                                  0xe4) == 0) {
                                              thunk_FUN_02df485c();
                                            }
                                            uVar95 = FUN_06183d40();
                                            lVar32 = unaff_x19[99];
                                            if (*(int *)(*(long *)PTR_DAT_069fb990 + 0xe4) == 0) {
                                              thunk_FUN_02df485c();
                                            }
                                            uVar30 = FUN_0634eb94(lVar32,0,0);
                                            if ((uVar30 & 1) != 0) {
                                              plVar56 = (long *)unaff_x19[99];
                                              uVar36 = (**(code **)(*unaff_x19 + 0x548))();
                                              if (plVar56 == (long *)0x0) goto LAB_0613705c;
                                              (**(code **)(*plVar56 + 0x558))
                                                        (plVar56,uVar36,
                                                         *(undefined8 *)(*plVar56 + 0x560));
                                              lVar32 = unaff_x19[99];
                                              if (lVar32 == 0) goto LAB_0613705c;
                                              *(int *)(lVar32 + 0x438) = (int)unaff_x19[0x87];
                                              FUN_0617757c(lVar32,*(undefined4 *)
                                                                   ((long)unaff_x19 + 0x4a4),0);
                                              plVar56 = (long *)unaff_x19[99];
                                              if (plVar56 == (long *)0x0) goto LAB_0613705c;
                                              (**(code **)(*plVar56 + 0x7d8))
                                                        (plVar56,0,0,
                                                         *(undefined8 *)(*plVar56 + 0x7e0));
                                              *(undefined1 *)(unaff_x19 + 0x65) = 1;
                                            }
                                            in_stack_00001298 = CONCAT44(3,uVar44);
                                            fVar62 = fVar67;
                                            goto LAB_06133f74;
                                          }
                                        }
                                        if ((((uVar24 - 0x2007 < 0x23) &&
                                             ((1L << ((ulong)(uVar24 - 0x2007) & 0x3f) &
                                              0x600000001U) != 0)) || (uVar24 - 10 < 2)) ||
                                           (uVar24 == 0xa0)) {
                                          plVar55 = (long *)PTR_DAT_069fb930;
                                          if (uVar24 == 0xad) goto LAB_06132fe4;
LAB_061328fc:
                                          plVar55 = (long *)PTR_DAT_069fb930;
                                          if ((uVar24 == 0x200b) || (uVar24 == 0x2060))
                                          goto LAB_06132fe4;
                                          lVar32 = unaff_x19[0x74];
                                          if ((lVar32 == 0) ||
                                             (lVar31 = *(long *)(lVar32 + 0x50), lVar31 == 0))
                                          goto LAB_0613705c;
                                          if (*(uint *)(lVar31 + 0x18) <=
                                              *(uint *)(unaff_x19 + 0x97)) goto LAB_0613719c;
                                          lVar31 = lVar31 + (long)(int)*(uint *)(unaff_x19 + 0x97) *
                                                            0x60;
                                          *(int *)(lVar31 + 0x2c) = *(int *)(lVar31 + 0x2c) + 1;
                                          *(int *)(lVar32 + 0x20) = *(int *)(lVar32 + 0x20) + 1;
                                        }
                                        else {
                                          if (*(int *)(*(long *)(PTR_DAT_069fb9c0 + 0x88) + 0xe4) ==
                                              0) {
                                            thunk_FUN_02df485c();
                                          }
                                          uVar30 = FUN_054594b0(uVar24,0);
                                          if (((uVar30 & 1) != 0) && (uVar24 != 0xad))
                                          goto LAB_061328fc;
                                        }
                                        plVar55 = (long *)PTR_DAT_069fb930;
                                        if (uVar24 == 0xa0) {
                                          if ((unaff_x19[0x74] == 0) ||
                                             (lVar32 = *(long *)(unaff_x19[0x74] + 0x50),
                                             lVar32 == 0)) goto LAB_0613705c;
                                          if (*(uint *)(lVar32 + 0x18) <=
                                              *(uint *)(unaff_x19 + 0x97)) goto LAB_0613719c;
                                          lVar32 = lVar32 + (long)(int)*(uint *)(unaff_x19 + 0x97) *
                                                            0x60;
                                          *(int *)(lVar32 + 0x20) = *(int *)(lVar32 + 0x20) + 1;
                                        }
                                      }
LAB_06132fe4:
                                      if (((int)unaff_x19[0x62] == 1) &&
                                         ((uVar96 != uVar98 || (uVar24 == 0x2d)))) {
                                        if (unaff_x19[0xce] == 0) goto LAB_0613705c;
                                        fVar62 = *(float *)(unaff_x19 + 0x42);
                                        fVar86 = (float)FUN_063ecbd8(unaff_x19[0xce] + 0x28,0);
                                        if (unaff_x19[0xce] == 0) goto LAB_0613705c;
                                        fVar69 = (float)FUN_063ecbe0(unaff_x19[0xce] + 0x28,0);
                                        lVar32 = unaff_x19[0xcd];
                                        fVar70 = fVar76;
                                        if (*(char *)((long)unaff_x19 + 0x33e) != '\0') {
                                          fVar70 = 1.0;
                                        }
                                        if ((lVar32 == 0) || (*(long *)(lVar32 + 0x20) == 0))
                                        goto LAB_0613705c;
                                        fVar94 = *(float *)((long)unaff_x19 + 0x43c);
                                        fVar71 = *(float *)(lVar32 + 0x2c);
                                        fVar68 = (float)FUN_063ed0d8(*(long *)(lVar32 + 0x20),0);
                                        lVar32 = unaff_x19[0x71];
                                        fVar68 = (fVar62 / fVar86) * fVar69 * fVar70 * fVar94 *
                                                 fVar71 * fVar68;
                                        if ((uVar24 == 10) &&
                                           (*(int *)((long)unaff_x19 + 0x4a4) !=
                                            (int)unaff_x19[0x95])) {
                                          if ((unaff_x19[0x74] == 0) ||
                                             (lVar32 = *(long *)(unaff_x19[0x74] + 0x38),
                                             lVar32 == 0)) goto LAB_0613705c;
                                          uVar44 = *(int *)((long)unaff_x19 + 0x4a4) - 1;
                                          if (*(uint *)(lVar32 + 0x18) <= uVar44) goto LAB_0613719c;
                                          if (unaff_x19[0xce] == 0) goto LAB_0613705c;
                                          fVar62 = *(float *)(lVar32 + (long)(int)uVar44 * 0x178 +
                                                             0x58);
                                          fVar86 = (float)FUN_063ecbd8(unaff_x19[0xce] + 0x28,0);
                                          if (unaff_x19[0xce] == 0) goto LAB_0613705c;
                                          fVar69 = (float)FUN_063ecbe0(unaff_x19[0xce] + 0x28,0);
                                          lVar32 = unaff_x19[0xcd];
                                          fVar70 = fVar76;
                                          if (*(char *)((long)unaff_x19 + 0x33e) != '\0') {
                                            fVar70 = 1.0;
                                          }
                                          if ((lVar32 == 0) || (*(long *)(lVar32 + 0x20) == 0))
                                          goto LAB_0613705c;
                                          fVar94 = *(float *)((long)unaff_x19 + 0x43c);
                                          fVar71 = *(float *)(lVar32 + 0x2c);
                                          fVar68 = (float)FUN_063ed0d8(*(long *)(lVar32 + 0x20),0);
                                          if ((unaff_x19[0x74] == 0) ||
                                             (lVar32 = *(long *)(unaff_x19[0x74] + 0x50),
                                             lVar32 == 0)) goto LAB_0613705c;
                                          if (*(uint *)(lVar32 + 0x18) <=
                                              *(uint *)(unaff_x19 + 0x97)) goto LAB_0613719c;
                                          lVar32 = *(long *)(lVar32 + (long)(int)*(uint *)(unaff_x19
                                                                                          + 0x97) *
                                                                      0x60 + 100);
                                          fVar68 = (fVar62 / fVar86) * fVar69 * fVar70 * fVar94 *
                                                   fVar71 * fVar68;
                                        }
                                        fVar62 = *(float *)((long)unaff_x19 + 0x4ec);
                                        fVar86 = 0.0;
                                        fVar70 = 0.0;
                                        if ((0.0 < fVar62) && ((char)unaff_x19[0x5e] == '\0')) {
                                          fVar70 = *(float *)((long)unaff_x19 + 0x4dc) -
                                                   *(float *)((long)unaff_x19 + 0x4e4);
                                        }
                                        fVar69 = *(float *)((long)unaff_x19 + 0x4cc);
                                        fVar94 = *(float *)(unaff_x19 + 0x9c);
                                        fVar71 = *(float *)(unaff_x19 + 0xcb);
                                        fStack0000000000000170 = (float)lVar32;
                                        fStack0000000000000174 = (float)((ulong)lVar32 >> 0x20);
                                        if ((char)unaff_x19[0x1e] == '\0') {
                                          if ((unaff_x19[0xcd] == 0) ||
                                             (lVar32 = *(long *)(unaff_x19[0xcd] + 0x20),
                                             lVar32 == 0)) goto LAB_0613705c;
                                          FUN_063ed09c(&stack0x000012b0,lVar32,0);
                                          fVar86 = (float)FUN_063ecee4(&stack0x000011c0,0);
                                        }
                                        puVar13 = Method_System_HashCode_Combine<ulong,_int>__;
                                        fVar87 = *(float *)(unaff_x19 + 0x73);
                                        fStack0000000000000174 =
                                             (fVar93 - fStack0000000000000170) -
                                             fStack0000000000000174;
                                        bVar15 = true;
                                        if ((fVar87 <= fStack0000000000000174) &&
                                           (bVar15 = false, !NAN(fVar87))) {
                                          bVar15 = fVar87 == -1.0;
                                        }
                                        if (!bVar15) {
                                          fStack0000000000000174 = fVar87;
                                        }
                                        fVar87 = 1.0;
                                        if ((uVar54 & 0x18) != 0) {
                                          fVar87 = DAT_010fd188;
                                        }
                                        if ((ABS(fVar71) +
                                             fVar68 * fVar86 * (1.0 - *(float *)(unaff_x19 + 0x60))
                                             < fVar87 * fStack0000000000000174) &&
                                           ((fVar69 - (fVar94 - fVar62)) + fVar70 < fVar63)) {
                                          if (*(int *)(*(long *)
                                                  Method_System_HashCode_Combine<ulong,_int>__ +
                                                  0xe4) == 0) {
                                            thunk_FUN_02df485c();
                                          }
                                          FUN_061840e4();
                                          lVar32 = *(long *)(*(long *)puVar13 + 0xb8);
                                          memcpy(&stack0x000012b0,(void *)(lVar32 + 0x810),0x3b8);
                                          FUN_047e2524(lVar32 + 0x1338,&stack0x000012b0,
                                                       *(undefined8 *)
                                                        Method_System_HashCode_Add<float>__);
                                        }
                                      }
                                      lVar32 = unaff_x19[0x74];
                                      if ((lVar32 == 0) ||
                                         (lVar31 = *(long *)(lVar32 + 0x38), lVar31 == 0))
                                      goto LAB_0613705c;
                                      if (*(uint *)(lVar31 + 0x18) <=
                                          *(uint *)((long)unaff_x19 + 0x4a4)) goto LAB_0613719c;
                                      lVar31 = lVar31 + (long)(int)*(uint *)((long)unaff_x19 + 0x4a4
                                                                            ) * 0x178;
                                      uVar44 = *(uint *)(unaff_x19 + 0x97);
                                      *(uint *)(lVar31 + 0x5c) = uVar44;
                                      *(undefined4 *)(lVar31 + 0x60) =
                                           *(undefined4 *)((long)unaff_x19 + 0x4c4);
                                      if ((uVar96 == uVar98) ||
                                         ((uVar24 < 0xe &&
                                          ((1 << (ulong)(uVar24 & 0x1f) & 0x2c00U) != 0)))) {
                                        lVar31 = *(long *)(lVar32 + 0x50);
                                        if (lVar31 == 0) goto LAB_0613705c;
                                        if (*(uint *)(lVar31 + 0x18) <= uVar44) goto LAB_0613719c;
                                        if (*(int *)(lVar31 + (long)(int)uVar44 * 0x60 + 0x24) == 1)
                                        goto LAB_06133378;
                                      }
                                      else {
LAB_06133378:
                                        lVar32 = *(long *)(lVar32 + 0x50);
                                        if (lVar32 == 0) goto LAB_0613705c;
                                        if (*(uint *)(lVar32 + 0x18) <= uVar44) goto LAB_0613719c;
                                        *(int *)(lVar32 + (long)(int)uVar44 * 0x60 + 0x6c) =
                                             (int)unaff_x19[0x54];
                                      }
                                      if (uVar24 == 9) {
                                        if (unaff_x19[0x20] == 0) goto LAB_0613705c;
                                        fVar86 = (float)FUN_063ecc80(unaff_x19[0x20] + 0x28,0);
                                        if (unaff_x19[0x20] == 0) goto LAB_0613705c;
                                        fVar62 = (float)NEON_ucvtf((uint)*(byte *)(unaff_x19[0x20] +
                                                                                  0x1b1));
                                        fVar92 = *(float *)(unaff_x19 + 0xcb);
                                        auVar78 = ZEXT416((uint)fVar92);
                                        fVar70 = fVar67 * fVar86 * fVar62;
                                        if ((char)unaff_x19[0x1e] == '\0') {
                                          fVar86 = fVar70 * (float)(int)(fVar92 / fVar70);
                                          fVar62 = fVar86;
                                          if (fVar86 <= fVar92) {
                                            fVar62 = fVar70 + fVar92;
                                          }
                                        }
                                        else {
                                          fVar86 = fVar70 * (float)(int)(fVar92 / fVar70);
                                          fVar62 = fVar86;
                                          if (fVar92 <= fVar86) {
                                            fVar62 = fVar92 - fVar70;
                                          }
                                        }
LAB_061335cc:
                                        *(float *)(unaff_x19 + 0xcb) = fVar62;
                                      }
                                      else {
                                        fVar62 = *(float *)(unaff_x19 + 0x5b);
                                        if (fVar62 == 0.0) {
                                          fVar62 = *(float *)(unaff_x19 + 0xcb);
                                          if ((char)unaff_x19[0x1e] == '\0') {
                                            fVar92 = (float)FUN_063ecee4(&stack0x00001260,0);
                                            fVar68 = *(float *)((long)unaff_x19 + 0x47c);
                                            fVar69 = (float)FUN_063f141c(&stack0x00001250,0);
                                            if (unaff_x19[0x20] != 0) {
                                              fVar86 = *(float *)(unaff_x19 + 0x60);
                                              fVar70 = 1.0 - fVar86;
                                              fVar62 = fVar62 + fVar70 * (*(float *)((long)unaff_x19
                                                                                    + 0x2d4) +
                                                                         fVar67 * (fVar92 * fVar68 +
                                                                                  fVar69) +
                                                                         fVar80 * (
                                                  fStack00000000000000f0 +
                                                  fVar66 + *(float *)(unaff_x19[0x20] + 0x1a4)));
                                              *(float *)(unaff_x19 + 0xcb) = fVar62;
                                              goto joined_r0x06133508;
                                            }
                                            goto LAB_0613705c;
                                          }
                                          fVar70 = (float)FUN_063f141c(&stack0x00001250,0);
                                          if (unaff_x19[0x20] == 0) goto LAB_0613705c;
                                          fVar86 = *(float *)(unaff_x19 + 0x60);
                                          auVar78 = ZEXT416((uint)(1.0 - fVar86));
                                          fVar62 = fVar62 - (1.0 - fVar86) *
                                                            (*(float *)((long)unaff_x19 + 0x2d4) +
                                                            fVar67 * fVar70 +
                                                            fVar80 * (fStack00000000000000f0 +
                                                                     fVar66 + *(float *)(unaff_x19[
                                                  0x20] + 0x1a4)));
                                          *(float *)(unaff_x19 + 0xcb) = fVar62;
                                          if ((uVar25 != 0) || (uVar24 == 0x200b)) {
                                            auVar78 = ZEXT416((uint)(fVar80 * *(float *)(unaff_x19 +
                                                                                        0x5c)));
                                            fVar86 = fVar80;
                                            fVar62 = fVar62 - fVar80 * *(float *)(unaff_x19 + 0x5c);
                                            goto LAB_061335cc;
                                          }
                                        }
                                        else {
                                          if (((*(char *)((long)unaff_x19 + 0x2dc) != '\0') &&
                                              (uVar24 < 0x3b)) &&
                                             ((1L << ((ulong)uVar24 & 0x3f) & 0x400500000000000U) !=
                                              0)) {
                                            fVar62 = fVar62 * 0.5;
                                          }
                                          if (unaff_x19[0x20] == 0) goto LAB_0613705c;
                                          fVar86 = *(float *)(unaff_x19 + 0x60);
                                          fVar70 = *(float *)(unaff_x19 + 0xcb);
                                          fVar62 = fVar70 + (1.0 - fVar86) *
                                                            (*(float *)((long)unaff_x19 + 0x2d4) +
                                                            (fVar62 - fVar92) +
                                                            fVar80 * (fVar66 + *(float *)(unaff_x19[
                                                  0x20] + 0x1a4)));
                                          *(float *)(unaff_x19 + 0xcb) = fVar62;
joined_r0x06133508:
                                          if ((uVar25 != 0) ||
                                             (auVar78 = ZEXT416((uint)fVar70), uVar24 == 0x200b)) {
                                            auVar78 = ZEXT416((uint)(fVar80 * *(float *)(unaff_x19 +
                                                                                        0x5c)));
                                            fVar86 = fVar80;
                                            fVar62 = fVar62 + fVar80 * *(float *)(unaff_x19 + 0x5c);
                                            goto LAB_061335cc;
                                          }
                                        }
                                      }
                                      lVar32 = unaff_x19[0x74];
                                      if ((lVar32 == 0) ||
                                         (lVar31 = *(long *)(lVar32 + 0x38), lVar31 == 0))
                                      goto LAB_0613705c;
                                      uVar44 = *(uint *)((long)unaff_x19 + 0x4a4);
                                      if (*(uint *)(lVar31 + 0x18) <= uVar44) goto LAB_0613719c;
                                      *(float *)(lVar31 + (long)(int)uVar44 * 0x178 + 0x13c) =
                                           fVar62;
                                      if (uVar24 == 0xd) {
                                        *(float *)(unaff_x19 + 0xcb) =
                                             *(float *)((long)unaff_x19 + 0x444) + 0.0;
                                      }
                                      if (((int)unaff_x19[0x62] == 5) &&
                                         (((0xd < uVar24 ||
                                           ((1 << (ulong)(uVar24 & 0x1f) & 0x2c00U) == 0)) &&
                                          (1 < uVar24 - 0x2028)))) {
                                        lVar31 = *(long *)(lVar32 + 0x58);
                                        if (lVar31 == 0) goto LAB_0613705c;
                                        iVar28 = *(int *)((long)unaff_x19 + 0x4c4) + 1;
                                        if (*(int *)(lVar31 + 0x18) < iVar28) {
                                          if (*(int *)(*(long *)Method_System_HashCode_Add<bool>__ +
                                                      0xe4) == 0) {
                                            thunk_FUN_02df485c();
                                          }
                                          FUN_0383ef5c((long *)(lVar32 + 0x58),iVar28,1,
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Security_Cryptography_HashAlgorithm_ValidateTransformBlock__
                                                  );
                                          lVar32 = unaff_x19[0x74];
                                          if (lVar32 == 0) goto LAB_0613705c;
                                        }
                                        plVar55 = (long *)PTR_DAT_069fb930;
                                        lVar31 = *(long *)(lVar32 + 0x58);
                                        if (lVar31 == 0) goto LAB_0613705c;
                                        uVar54 = *(uint *)((long)unaff_x19 + 0x4c4);
                                        if (*(uint *)(lVar31 + 0x18) <= uVar54) goto LAB_0613719c;
                                        lVar31 = lVar31 + 0x20;
                                        lVar48 = lVar31 + (long)(int)uVar54 * 0x14;
                                        *(int *)(lVar48 + 8) = (int)unaff_x19[0x99];
                                        fVar70 = *(float *)(lVar48 + 0x10);
                                        auVar78 = ZEXT416((uint)fVar70);
                                        fVar62 = *(float *)(unaff_x19 + 0x9b);
                                        if (fVar70 <= *(float *)(unaff_x19 + 0x9b)) {
                                          fVar62 = fVar70;
                                        }
                                        *(float *)(lVar48 + 0x10) = fVar62;
                                        if (*(char *)((long)unaff_x19 + 0x374) != '\0') {
                                          *(undefined1 *)((long)unaff_x19 + 0x374) = 0;
                                          *(undefined4 *)(lVar31 + (long)(int)uVar54 * 0x14) =
                                               *(undefined4 *)((long)unaff_x19 + 0x4a4);
                                        }
                                        uVar44 = *(uint *)((long)unaff_x19 + 0x4a4);
                                        *(uint *)(lVar31 + (long)(int)uVar54 * 0x14 + 4) = uVar44;
                                      }
                                      uVar54 = uVar24;
                                      if (((uVar24 < 0xc) &&
                                          ((1 << (ulong)(uVar24 & 0x1f) & 0xc08U) != 0)) ||
                                         ((uVar24 - 0x2028 < 2 ||
                                          ((uVar24 == 0x2d && uVar96 == uVar98 || (uVar44 == uVar6))
                                          )))) {
                                        if (0.0 < *(float *)((long)unaff_x19 + 0x4ec)) {
                                          fVar86 = *(float *)((long)unaff_x19 + 0x4dc);
                                          fVar62 = *(float *)((long)unaff_x19 + 0x4e4);
                                          if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                                            thunk_FUN_02df485c();
                                          }
                                          fVar86 = fVar86 - fVar62;
                                          if (((fVar12 < ABS(fVar86)) &&
                                              ((char)unaff_x19[0x5e] == '\0')) &&
                                             (*(char *)((long)unaff_x19 + 0x374) == '\0')) {
                                            FUN_061844a0();
                                            puVar13 = Method_System_HashCode_Combine<ulong,_int>__;
                                            lVar32 = *(long *)
                                                  Method_System_HashCode_Combine<ulong,_int>__;
                                            *(float *)(unaff_x19 + 0x9b) =
                                                 *(float *)(unaff_x19 + 0x9b) - fVar86;
                                            *(float *)((long)unaff_x19 + 0x4ec) =
                                                 fVar86 + *(float *)((long)unaff_x19 + 0x4ec);
                                            if (*(int *)(lVar32 + 0xe4) == 0) {
                                              thunk_FUN_02df485c();
                                              lVar32 = *(long *)puVar13;
                                            }
                                            lVar31 = *(long *)(lVar32 + 0xb8);
                                            if (*(int *)(lVar31 + 0x838) == (int)unaff_x19[0x97]) {
                                              if (*(int *)(lVar32 + 0xe4) == 0) {
                                                thunk_FUN_02df485c();
                                                lVar31 = *(long *)(*(long *)
                                                  Method_System_HashCode_Combine<ulong,_int>__ +
                                                  0xb8);
                                              }
                                              FUN_047e2610(&stack0x000001e0,lVar31 + 0x1338,
                                                           *(undefined8 *)
                                                                                                                        
                                                  Method_System_HashCode_Add<RenderedText>__);
                                              puVar13 = Method_System_HashCode_Combine<ulong,_int>__
                                              ;
                                              lVar32 = *(long *)
                                                  Method_System_HashCode_Combine<ulong,_int>__;
                                              memcpy((void *)(*(long *)(lVar32 + 0xb8) + 0x810),
                                                     &stack0x000001e0,0x3b8);
                                              LeanTween__value(*(long *)(lVar32 + 0xb8) + 0x8a8,0);
                                              lVar32 = *(long *)(*(long *)puVar13 + 0xb8);
                                              *(float *)(lVar32 + 0x848) =
                                                   fVar86 + *(float *)(lVar32 + 0x848);
                                              *(float *)(lVar32 + 0x894) =
                                                   fVar86 + *(float *)(lVar32 + 0x894);
                                              memcpy(&stack0x000012b0,(void *)(lVar32 + 0x810),0x3b8
                                                    );
                                              FUN_047e2524(lVar32 + 0x1338,&stack0x000012b0,
                                                           *(undefined8 *)
                                                            Method_System_HashCode_Add<float>__);
                                            }
                                          }
                                        }
                                        fVar70 = *(float *)((long)unaff_x19 + 0x4ec);
                                        *(undefined1 *)((long)unaff_x19 + 0x374) = 0;
                                        fVar62 = *(float *)(unaff_x19 + 0x9c) - fVar70;
                                        fVar86 = *(float *)(unaff_x19 + 0x9b);
                                        if (fVar62 <= *(float *)(unaff_x19 + 0x9b)) {
                                          fVar86 = fVar62;
                                        }
                                        fVar92 = *(float *)((long)unaff_x19 + 0x4dc);
                                        *(float *)(unaff_x19 + 0x9b) = fVar86;
                                        if (in_stack_000012a4 == '\0') {
                                          fVar97 = fVar86;
                                        }
                                        if ((*(char *)((long)unaff_x19 + 0x36c) != '\0') &&
                                           (((int)unaff_x19[0x6c] <=
                                             *(int *)((long)unaff_x19 + 0x4a4) ||
                                            ((int)unaff_x19[0x6d] <= (int)unaff_x19[0x97])))) {
                                          in_stack_000012a4 = '\x01';
                                        }
                                        lVar32 = unaff_x19[0x74];
                                        if ((lVar32 == 0) ||
                                           (lVar31 = *(long *)(lVar32 + 0x50), lVar31 == 0))
                                        goto LAB_0613705c;
                                        if (*(uint *)(lVar31 + 0x18) <= *(uint *)(unaff_x19 + 0x97))
                                        goto LAB_0613719c;
                                        lVar31 = lVar31 + (long)(int)*(uint *)(unaff_x19 + 0x97) *
                                                          0x60;
                                        iVar46 = (int)unaff_x19[0x95];
                                        *(int *)(lVar31 + 0x38) = iVar46;
                                        iVar28 = iVar46;
                                        if (iVar46 <= *(int *)((long)unaff_x19 + 0x4ac)) {
                                          iVar28 = *(int *)((long)unaff_x19 + 0x4ac);
                                        }
                                        *(int *)((long)unaff_x19 + 0x4ac) = iVar28;
                                        *(int *)(lVar31 + 0x3c) = iVar28;
                                        iVar4 = *(int *)((long)unaff_x19 + 0x4a4);
                                        *(int *)(unaff_x19 + 0x96) = iVar4;
                                        *(int *)(lVar31 + 0x40) = iVar4;
                                        iVar29 = *(int *)((long)unaff_x19 + 0x4ac);
                                        if (iVar28 <= *(int *)((long)unaff_x19 + 0x4b4)) {
                                          iVar29 = *(int *)((long)unaff_x19 + 0x4b4);
                                        }
                                        *(int *)((long)unaff_x19 + 0x4b4) = iVar29;
                                        *(int *)(lVar31 + 0x44) = iVar29;
                                        *(int *)(lVar31 + 0x24) = (iVar4 - iVar46) + 1;
                                        iVar28 = *(int *)((long)unaff_x19 + 0x4bc);
                                        *(int *)(lVar31 + 0x28) = iVar28;
                                        *(int *)(lVar31 + 0x30) = (iVar29 - (iVar46 + iVar28)) + 1;
                                        lVar32 = *(long *)(lVar32 + 0x38);
                                        if (lVar32 == 0) goto LAB_0613705c;
                                        if (*(uint *)(lVar32 + 0x18) <=
                                            *(uint *)((long)unaff_x19 + 0x4ac)) goto LAB_0613719c;
                                        *(undefined4 *)(lVar31 + 0x70) =
                                             *(undefined4 *)
                                              (lVar32 + (long)(int)*(uint *)((long)unaff_x19 + 0x4ac
                                                                            ) * 0x178 + 0x114);
                                        *(float *)(lVar31 + 0x74) = fVar62;
                                        lVar32 = unaff_x19[0x74];
                                        if ((lVar32 == 0) ||
                                           (lVar31 = *(long *)(lVar32 + 0x50), lVar31 == 0))
                                        goto LAB_0613705c;
                                        if (*(uint *)(lVar31 + 0x18) <= *(uint *)(unaff_x19 + 0x97))
                                        goto LAB_0613719c;
                                        lVar32 = *(long *)(lVar32 + 0x38);
                                        if (lVar32 == 0) goto LAB_0613705c;
                                        if (*(uint *)(lVar32 + 0x18) <=
                                            *(uint *)((long)unaff_x19 + 0x4b4)) goto LAB_0613719c;
                                        fVar92 = fVar92 - fVar70;
                                        auVar78 = ZEXT416((uint)fVar92);
                                        lVar31 = lVar31 + 0x20 +
                                                 (long)(int)*(uint *)(unaff_x19 + 0x97) * 0x60;
                                        uVar20 = *(undefined4 *)
                                                  (lVar32 + (long)(int)*(uint *)((long)unaff_x19 +
                                                                                0x4b4) * 0x178 +
                                                  0x120);
                                        *(float *)(lVar31 + 0x5c) = fVar92;
                                        *(undefined4 *)(lVar31 + 0x58) = uVar20;
                                        lVar32 = unaff_x19[0x74];
                                        if ((lVar32 == 0) ||
                                           (lVar31 = *(long *)(lVar32 + 0x50), lVar31 == 0))
                                        goto LAB_0613705c;
                                        uVar44 = *(uint *)(unaff_x19 + 0x97);
                                        if (*(uint *)(lVar31 + 0x18) <= uVar44) goto LAB_0613719c;
                                        lVar31 = lVar31 + 0x20;
                                        lVar48 = lVar31 + (long)(int)uVar44 * 0x60;
                                        *(float *)(lVar48 + 0x28) =
                                             *(float *)(lVar48 + 0x58) - fVar67 * fVar89;
                                        *(float *)(lVar48 + 0x40) = fStack0000000000000134;
                                        if (*(int *)(lVar48 + 4) == 1) {
                                          *(int *)(lVar31 + (long)(int)uVar44 * 0x60 + 0x4c) =
                                               (int)unaff_x19[0x54];
                                        }
                                        if ((unaff_x19[0x20] == 0) ||
                                           (lVar48 = *(long *)(lVar32 + 0x38), lVar48 == 0))
                                        goto LAB_0613705c;
                                        uVar47 = *(uint *)((long)unaff_x19 + 0x4b4);
                                        if (*(uint *)(lVar48 + 0x18) <= uVar47) goto LAB_0613719c;
                                        if ((*(char *)(lVar48 + 0x20 + (long)(int)uVar47 * 0x178 +
                                                      0x170) == '\0') &&
                                           (uVar47 = *(uint *)(unaff_x19 + 0x96),
                                           *(uint *)(lVar48 + 0x18) <= uVar47)) goto LAB_0613719c;
                                        lVar31 = lVar31 + (long)(int)uVar44 * 0x60;
                                        fVar66 = (1.0 - *(float *)(unaff_x19 + 0x60)) *
                                                 (*(float *)((long)unaff_x19 + 0x2d4) +
                                                 fVar80 * (fStack00000000000000f0 +
                                                          fVar66 + *(float *)(unaff_x19[0x20] +
                                                                             0x1a4)));
                                        fVar86 = -fVar66;
                                        if ((char)unaff_x19[0x1e] != '\0') {
                                          fVar86 = fVar66;
                                        }
                                        *(float *)(lVar31 + 0x3c) =
                                             *(float *)(lVar48 + 0x20 + (long)(int)uVar47 * 0x178 +
                                                       0x11c) + fVar86;
                                        fVar86 = 0.0 - *(float *)((long)unaff_x19 + 0x4ec);
                                        *(float *)(lVar31 + 0x2c) =
                                             fVar60 * fVar61 + (fVar92 - fVar62);
                                        *(float *)(lVar31 + 0x30) = fVar92;
                                        *(float *)(lVar31 + 0x34) = fVar86;
                                        *(float *)(lVar31 + 0x38) = fVar62;
                                        plVar41 = (long *)
                                                  Method_System_HashCode_Combine<ulong,_int>__;
                                        if ((((uVar24 & 0xfffffffe) == 10) ||
                                            (uVar96 == uVar98 && uVar24 == 0x2d)) ||
                                           (uVar24 - 0x2028 < 2)) {
                                          if (*(int *)(*(long *)
                                                  Method_System_HashCode_Combine<ulong,_int>__ +
                                                  0xe4) == 0) {
                                            thunk_FUN_02df485c();
                                          }
                                          FUN_061840e4();
                                          *(undefined8 *)((long)unaff_x19 + 0x4bc) = 0;
                                          iVar28 = (int)unaff_x19[0x97] + 1;
                                          lVar32 = unaff_x19[0x74];
                                          *(int *)(unaff_x19 + 0x97) = iVar28;
                                          *(int *)(unaff_x19 + 0x95) =
                                               *(int *)((long)unaff_x19 + 0x4a4) + 1;
                                          if ((lVar32 != 0) && (*(long *)(lVar32 + 0x50) != 0)) {
                                            if (*(int *)(*(long *)(lVar32 + 0x50) + 0x18) <= iVar28)
                                            {
                                              FUN_0618465c();
                                              lVar32 = unaff_x19[0x74];
                                              if (lVar32 == 0) goto LAB_0613705c;
                                            }
                                            lVar32 = *(long *)(lVar32 + 0x38);
                                            if (lVar32 != 0) {
                                              if (*(uint *)((long)unaff_x19 + 0x4a4) <
                                                  *(uint *)(lVar32 + 0x18)) {
                                                fVar62 = *(float *)(lVar32 + (long)(int)*(uint *)((
                                                  long)unaff_x19 + 0x4a4) * 0x178 + 0x14c);
                                                if (*(float *)((long)unaff_x19 + 0x2ec) ==
                                                    DAT_010fcd2c) {
                                                  if ((uVar24 == 0x2029) ||
                                                     (fVar86 = 0.0, uVar24 == 10)) {
                                                    fVar86 = *(float *)(unaff_x19 + 0x5f);
                                                  }
                                                  uVar37 = 0;
                                                  fVar86 = fVar62 + (0.0 - *(float *)(unaff_x19 +
                                                                                     0x9c)) +
                                                           fVar60 * (fVar61 + *(float *)(unaff_x19 +
                                                                                        0x5d)) +
                                                           fVar80 * (*(float *)((long)unaff_x19 +
                                                                               0x2e4) + fVar86) +
                                                           *(float *)((long)unaff_x19 + 0x4ec);
                                                }
                                                else {
                                                  if ((uVar24 == 0x2029) ||
                                                     (fVar86 = 0.0, uVar24 == 10)) {
                                                    fVar86 = *(float *)(unaff_x19 + 0x5f);
                                                  }
                                                  uVar37 = 1;
                                                  fVar86 = *(float *)((long)unaff_x19 + 0x4ec) +
                                                           *(float *)((long)unaff_x19 + 0x2ec) +
                                                           fVar80 * (*(float *)((long)unaff_x19 +
                                                                               0x2e4) + fVar86);
                                                }
                                                lVar32 = *plVar41;
                                                *(float *)((long)unaff_x19 + 0x4ec) = fVar86;
                                                *(undefined1 *)(unaff_x19 + 0x5e) = uVar37;
                                                if (*(int *)(lVar32 + 0xe4) == 0) {
                                                  thunk_FUN_02df485c();
                                                  lVar32 = *plVar41;
                                                }
                                                fVar86 = *(float *)((long)unaff_x19 + 0x444);
                                                uVar36 = *(undefined8 *)
                                                          (*(long *)(lVar32 + 0xb8) + 0x1730);
                                                *(float *)((long)unaff_x19 + 0x4e4) = fVar62;
                                                auVar78._0_8_ = NEON_rev64(uVar36,4);
                                                auVar78._8_8_ = 0;
                                                *(ulong *)((long)unaff_x19 + 0x4dc) = auVar78._0_8_;
                                                *(float *)(unaff_x19 + 0xcb) =
                                                     *(float *)(unaff_x19 + 0x88) + 0.0 + fVar86;
                                                FUN_061840e4();
                                                FUN_061840e4();
                                                *(int *)((long)unaff_x19 + 0x4a4) =
                                                     *(int *)((long)unaff_x19 + 0x4a4) + 1;
                                                bVar18 = 1;
                                                bVar16 = true;
                                                fVar62 = fVar67;
                                                goto LAB_06133f74;
                                              }
                                              goto LAB_0613719c;
                                            }
                                          }
                                          goto LAB_0613705c;
                                        }
                                        if (uVar24 == 3) {
                                          if (unaff_x19[0x91] == 0) goto LAB_0613705c;
                                          uVar95 = (uint)*(undefined8 *)(unaff_x19[0x91] + 0x18);
                                          uVar54 = 3;
                                        }
                                      }
                                      plVar41 = (long *)Method_System_HashCode_Combine<ulong,_int>__
                                      ;
                                      lVar32 = *(long *)(lVar32 + 0x38);
                                      if (lVar32 == 0) goto LAB_0613705c;
                                      uVar96 = *(uint *)((long)unaff_x19 + 0x4a4);
                                      uVar98 = *(uint *)(lVar32 + 0x18);
                                      if (uVar98 <= uVar96) goto LAB_0613719c;
                                      lVar32 = lVar32 + 0x20;
                                      if (*(char *)(lVar32 + (long)(int)uVar96 * 0x178 + 0x170) !=
                                          '\0') {
                                        lVar31 = lVar32 + (long)(int)uVar96 * 0x178;
                                        auVar74 = *(undefined1 (*) [16])(unaff_x19 + 0x9e);
                                        auVar79 = NEON_ext(auVar74,auVar74,8,1);
                                        uVar36 = *(undefined8 *)(lVar31 + 0xf4);
                                        fVar86 = (float)uVar36;
                                        uVar33 = *(undefined8 *)(lVar31 + 0x100);
                                        fVar62 = (float)uVar33;
                                        fVar66 = (float)((ulong)uVar33 >> 0x20);
                                        auVar78._0_4_ = (float)-(uint)(auVar74._0_4_ < fVar86);
                                        auVar78._4_4_ =
                                             (float)-(uint)(auVar74._4_4_ <
                                                           (float)((ulong)uVar36 >> 0x20));
                                        auVar78._8_4_ = -(uint)(fVar62 < auVar79._0_4_);
                                        auVar78._12_4_ = -(uint)(fVar66 < auVar79._4_4_);
                                        auVar8._8_4_ = fVar62;
                                        auVar8._0_8_ = uVar36;
                                        auVar8._12_4_ = fVar66;
                                        auVar74 = auVar74 ^ (auVar74 ^ auVar8) & ~auVar78;
                                        unaff_x19[0x9f] = auVar74._8_8_;
                                        unaff_x19[0x9e] = auVar74._0_8_;
                                      }
                                      if (((*(int *)((long)unaff_x19 + 0x304) != 3) &&
                                          (*(int *)((long)unaff_x19 + 0x304) != 0)) ||
                                         ((*(uint *)(unaff_x19 + 0x62) < 7 &&
                                          ((1 << (ulong)(*(uint *)(unaff_x19 + 0x62) & 0x1f) & 0x4aU
                                           ) != 0)))) {
                                        if ((((uVar25 == 0) && (uVar54 != 0x2d)) &&
                                            (uVar54 != 0x200b)) && (uVar54 != 0xad)) {
                                          if (*(char *)((long)unaff_x19 + 0x309) == '\0')
                                          goto LAB_06133fe0;
LAB_06133e60:
                                          if (bVar18 == 0) {
                                            bVar18 = 0;
                                          }
                                          else {
                                            bVar15 = (bool)((uVar25 == 0 || uVar24 == 0xa0) &
                                                            (uVar24 != 0xad | bVar19) ^ 1);
LAB_06133e98:
                                            bVar18 = 1;
LAB_06133ea0:
                                            if (*(int *)(*plVar41 + 0xe4) == 0) {
                                              thunk_FUN_02df485c();
                                            }
                                            FUN_061840e4();
                                            if (bVar15 != false) goto LAB_06133ed4;
                                          }
                                        }
                                        else {
                                          if (*(char *)((long)unaff_x19 + 0x309) != '\0')
                                          goto LAB_06133e60;
                                          if ((int)uVar54 < 0x2007) {
                                            if (uVar54 == 0x2d) {
                                              if (0 < (int)uVar96) {
                                                if (uVar98 <= uVar96 - 1) goto LAB_0613719c;
                                                uVar5 = *(undefined2 *)
                                                         (lVar32 + (ulong)(uVar96 - 1) * 0x178 + 4);
                                                if (*(int *)(*(long *)(PTR_DAT_069fb9c0 + 0x88) +
                                                            0xe4) == 0) {
                                                  thunk_FUN_02df485c();
                                                }
                                                uVar30 = FUN_05455f40(uVar5,0);
                                                if ((uVar30 & 1) != 0) {
                                                  if ((unaff_x19[0x74] == 0) ||
                                                     (lVar32 = *(long *)(unaff_x19[0x74] + 0x38),
                                                     lVar32 == 0)) goto LAB_0613705c;
                                                  uVar98 = *(int *)((long)unaff_x19 + 0x4a4) - 1;
                                                  if (*(uint *)(lVar32 + 0x18) <= uVar98)
                                                  goto LAB_0613719c;
                                                  if (*(int *)(lVar32 + (long)(int)uVar98 * 0x178 +
                                                              0x5c) == (int)unaff_x19[0x97])
                                                  goto LAB_06133f34;
                                                }
                                              }
                                            }
                                            else if (uVar54 == 0xa0) goto LAB_06133fe0;
LAB_06134268:
                                            lVar32 = *plVar41;
                                            if (*(int *)(lVar32 + 0xe4) == 0) {
                                              thunk_FUN_02df485c();
                                              lVar32 = *plVar41;
                                            }
                                            bVar18 = 0;
                                            bVar15 = false;
                                            *(undefined4 *)(*(long *)(lVar32 + 0xb8) + 0xf80) =
                                                 0xffffffff;
                                            goto LAB_06133ea0;
                                          }
                                          if (((0x28 < uVar54 - 0x2007) ||
                                              ((1L << ((ulong)(uVar54 - 0x2007) & 0x3f) &
                                               0x10000000401U) == 0)) && (uVar54 != 0x2060))
                                          goto LAB_06134268;
LAB_06133fe0:
                                          if (*(int *)(*(long *)Method_System_HashCode_Add<Color>__
                                                      + 0xe4) == 0) {
                                            thunk_FUN_02df485c();
                                          }
                                          uVar30 = FUN_061a94f4(uVar54,0);
                                          if ((uVar30 & 1) == 0) {
LAB_0613402c:
                                            if (*(int *)(*(long *)
                                                  Method_System_HashCode_Add<Color>__ + 0xe4) == 0)
                                            {
                                              thunk_FUN_02df485c();
                                            }
                                            uVar30 = FUN_061a9550(uVar24,0);
                                            if ((uVar30 & 1) != 0) goto LAB_06134058;
                                            if ((*(char *)((long)unaff_x19 + 0x309) != '\0') ||
                                               (uVar98 = *(int *)((long)unaff_x19 + 0x4a4) + 1,
                                               (int)lVar50 <= (int)uVar98)) goto LAB_06133e60;
                                            if ((unaff_x19[0x74] != 0) &&
                                               (lVar32 = *(long *)(unaff_x19[0x74] + 0x38),
                                               lVar32 != 0)) {
                                              if (uVar98 < *(uint *)(lVar32 + 0x18)) {
                                                uVar5 = *(undefined2 *)
                                                         (lVar32 + (long)(int)uVar98 * 0x178 + 0x24)
                                                ;
                                                if (*(int *)(*(long *)
                                                  Method_System_HashCode_Add<Color>__ + 0xe4) == 0)
                                                {
                                                  thunk_FUN_02df485c();
                                                }
                                                uVar30 = FUN_061a9550(uVar5,0);
                                                if ((uVar30 & 1) == 0) goto LAB_06133e60;
LAB_06134298:
                                                bVar15 = false;
                                                goto LAB_06133ea0;
                                              }
                                              goto LAB_0613719c;
                                            }
                                            goto LAB_0613705c;
                                          }
                                          if (*(int *)(*(long *)
                                                  Method_System_Security_Cryptography_HashAlgorithm_ComputeHash__
                                                  + 0xe4) == 0) {
                                            thunk_FUN_02df485c();
                                          }
                                          uVar30 = FUN_0619f994(0);
                                          if ((uVar30 & 1) != 0) goto LAB_0613402c;
LAB_06134058:
                                          if (*(int *)(*(long *)
                                                  Method_System_Security_Cryptography_HashAlgorithm_ComputeHash__
                                                  + 0xe4) == 0) {
                                            thunk_FUN_02df485c();
                                          }
                                          lVar32 = 
                                                  UnityEngine_XR_Interaction_Toolkit_Inputs_Simulation_XRDeviceSimulator__get_hmdTrackingState
                                                            (0);
                                          if ((lVar32 == 0) || (*(long *)(lVar32 + 0x10) == 0))
                                          goto LAB_0613705c;
                                          uVar30 = FUN_03c2db5c(*(long *)(lVar32 + 0x10),uVar24,
                                                                *(undefined8 *)
                                                                                                                                  
                                                  Method_UnityEngine_XR_Interaction_Toolkit_UI_BodyUI_HandMenu_OnInputModeChanged__
                                                  );
                                          if ((int)uVar6 <= *(int *)((long)unaff_x19 + 0x4a4)) {
                                            if ((uVar30 & 1) == 0) {
                                              bVar18 = 0;
                                              goto LAB_06134298;
                                            }
LAB_061341c4:
                                            bVar15 = uVar25 != 0;
                                            if (uVar26 != uVar27 || ((bVar18 ^ 0xff) & 1) != 0)
                                            goto LAB_06133f34;
                                            goto LAB_06133e98;
                                          }
                                          if (*(int *)(*(long *)
                                                  Method_System_Security_Cryptography_HashAlgorithm_ComputeHash__
                                                  + 0xe4) == 0) {
                                            thunk_FUN_02df485c();
                                          }
                                          lVar32 = 
                                                  UnityEngine_XR_Interaction_Toolkit_Inputs_Simulation_XRDeviceSimulator__get_hmdTrackingState
                                                            (0);
                                          if (((lVar32 == 0) || (unaff_x19[0x74] == 0)) ||
                                             (lVar31 = *(long *)(unaff_x19[0x74] + 0x38),
                                             lVar31 == 0)) goto LAB_0613705c;
                                          uVar98 = *(int *)((long)unaff_x19 + 0x4a4) + 1;
                                          if (*(uint *)(lVar31 + 0x18) <= uVar98) goto LAB_0613719c;
                                          if (*(long *)(lVar32 + 0x18) == 0) goto LAB_0613705c;
                                          bVar17 = FUN_03c2db5c(*(long *)(lVar32 + 0x18),
                                                                *(undefined2 *)
                                                                 (lVar31 + (long)(int)uVar98 * 0x178
                                                                 + 0x24),*(undefined8 *)
                                                                                                                                                    
                                                  Method_UnityEngine_XR_Interaction_Toolkit_UI_BodyUI_HandMenu_OnInputModeChanged__
                                                  );
                                          if ((uVar30 & 1) != 0) goto LAB_061341c4;
                                          bVar18 = bVar17 & bVar18;
                                          bVar15 = (bool)(bVar18 & uVar25 != 0);
                                          if ((bVar18 != 0) || (((bVar17 ^ 1) & 1) != 0))
                                          goto LAB_06133ea0;
                                          bVar18 = 0;
                                          if (bVar15 == false) goto LAB_06133f34;
LAB_06133ed4:
                                          if (*(int *)(*plVar41 + 0xe4) == 0) {
                                            thunk_FUN_02df485c();
                                          }
                                          FUN_061840e4();
                                        }
                                      }
LAB_06133f34:
                                      if (*(int *)(*plVar41 + 0xe4) == 0) {
                                        thunk_FUN_02df485c();
                                      }
                                      FUN_061840e4();
                                      *(int *)((long)unaff_x19 + 0x4a4) =
                                           *(int *)((long)unaff_x19 + 0x4a4) + 1;
                                      fVar62 = fVar67;
                                    }
                                  }
LAB_06133f74:
                                  lVar32 = unaff_x19[0x91];
                                  uVar95 = uVar95 + 1;
                                  uVar98 = uVar24;
                                  if (lVar32 == 0) goto LAB_0613705c;
                                  goto LAB_0612ff1c;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          goto LAB_0613705c;
        }
      }
      (**(code **)(*unaff_x19 + 0x958))();
      puVar13 = Method_System_HashCode_Combine<float,_float,_float>__;
      *(undefined4 *)(unaff_x19 + 0x83) = 0;
      *(undefined4 *)((long)unaff_x19 + 0x424) = 0;
      if (*(int *)(*(long *)puVar13 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      FUN_06150bd0();
      *(undefined1 *)((long)unaff_x19 + 0x274) = 1;
      return;
    }
  }
  puVar13 = 
  Method_System_HashCode_Combine<CAPI_ovrAvatar2Vector3f,_CAPI_ovrAvatar2Quatf,_CAPI_ovrAvatar2Vector3f>__
  ;
  FUN_063540b8();
  uVar36 = FUN_054e5768(&stack0x0000127c,0);
  uVar36 = FUN_05362cb4(*(undefined8 *)puVar13,uVar36,0);
  if (*(int *)(*plVar55 + 0xe4) == 0) {
    thunk_FUN_02df485c(*plVar55);
  }
  FUN_06309d28(uVar36,0);
  *(undefined1 *)((long)unaff_x19 + 0x274) = 1;
  return;
LAB_06134b8c:
  if (*(uint *)(lVar50 + 0x18) <= uVar53) goto LAB_0613719c;
  uVar30 = (ulong)uVar53;
  piVar52 = (int *)(lVar32 + uVar30 * 0x178);
  lVar31 = *(long *)(piVar52 + 8);
  uVar59 = *(ushort *)(piVar52 + 1);
  if (*(int *)(*(long *)(PTR_DAT_069fb9c0 + 0x88) + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  uVar23 = (uint)uVar59;
  bVar18 = FUN_05455f40(uVar59,0);
  if (*(uint *)(lVar50 + 0x18) <= uVar53) goto LAB_0613719c;
  if ((unaff_x19[0x74] == 0) || (lVar48 = *(long *)(unaff_x19[0x74] + 0x50), lVar48 == 0))
  goto LAB_0613705c;
  uVar95 = *(uint *)(lVar32 + uVar30 * 0x178 + 0x3c);
  if (*(uint *)(lVar48 + 0x18) <= uVar95) goto LAB_0613719c;
  lVar48 = lVar48 + (long)(int)uVar95 * 0x60;
  iVar28 = *(int *)(lVar48 + 0x28);
  iVar29 = *(int *)(lVar48 + 0x2c);
  uVar6 = *(uint *)(lVar48 + 0x40);
  uVar98 = *(uint *)(lVar48 + 0x44);
  fVar63 = *(float *)(lVar48 + 0x58);
  fVar86 = *(float *)(lVar48 + 0x5c);
  uVar24 = *(uint *)(lVar48 + 0x6c);
  fVar93 = *(float *)(lVar48 + 0x60);
  fVar75 = *(float *)(lVar48 + 100);
  iVar4 = *(int *)(lVar48 + 0x20);
  fVar65 = *(float *)(lVar48 + 0x70);
  fVar64 = *(float *)(lVar48 + 0x74);
  fVar62 = *(float *)(lVar48 + 0x50);
  fVar61 = *(float *)(lVar48 + 0x78);
  fVar80 = *(float *)(lVar48 + 0x7c);
  if ((int)uVar24 < 9) {
    if ((int)uVar24 < 3) {
      if (uVar24 == 1) {
        if ((char)unaff_x19[0x1e] == '\0') {
          fStack0000000000000100 = fVar75 + 0.0;
        }
        else {
          fStack0000000000000100 = 0.0 - fVar86;
        }
        fStack00000000000000f0 = 0.0;
        fStack0000000000000104 = 0.0;
      }
      else if (uVar24 == 2) {
        fStack0000000000000100 = (fVar75 + fVar93 * 0.5) - fVar86 * 0.5;
LAB_06134e88:
        fStack0000000000000104 = 0.0;
        fStack00000000000000f0 = 0.0;
      }
      else {
LAB_06134d58:
        uVar59 = NEON_umaxv(CONCAT26(-(ushort)(uVar59 == (ushort)((ulong)DAT_010fc910 >> 0x30)),
                                     CONCAT24(-(ushort)(uVar59 ==
                                                       (ushort)((ulong)DAT_010fc910 >> 0x20)),
                                              CONCAT22(-(ushort)(uVar59 ==
                                                                (ushort)((ulong)DAT_010fc910 >> 0x10
                                                                        )),
                                                       -(ushort)(uVar59 == (ushort)DAT_010fc910)))),
                            2);
        if (((((uVar59 & 1) == 0) && (uVar23 != 3)) && (uVar24 == 8)) &&
           ((int)uVar53 <= (int)uVar98)) goto LAB_06134d98;
      }
    }
    else if (uVar24 != 3) {
      if (uVar24 != 4) goto LAB_06134d58;
      fStack00000000000000f0 = 0.0;
      if ((char)unaff_x19[0x1e] != '\0') {
        fVar86 = 0.0;
      }
      fStack0000000000000100 = (fVar93 + fVar75) - fVar86;
      fStack0000000000000104 = 0.0;
    }
  }
  else if (uVar24 == 0x10) {
    if ((int)uVar53 <= (int)uVar98) {
      if (uVar23 < 0xad) {
        if ((uVar23 != 3) && (uVar23 != 10)) goto LAB_06134d98;
      }
      else if ((uVar23 != 0xad) && ((uVar23 != 0x200b && (uVar23 != 0x2060)))) {
LAB_06134d98:
        if (*(uint *)(lVar50 + 0x18) <= uVar6) goto LAB_0613719c;
        uVar5 = *(undefined2 *)(lVar32 + (long)(int)uVar6 * 0x178 + 4);
        if (*(int *)(*(long *)(PTR_DAT_069fb9c0 + 0x88) + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        uVar51 = FUN_054591ec(uVar5,0);
        if ((uVar51 & 1) == 0) {
          bVar1 = (int)uVar95 < (int)unaff_x19[0x97];
        }
        else {
          bVar1 = false;
        }
        if ((!bVar1 && (uVar24 >> 4 & 1) == 0) && (fVar86 <= fVar93)) {
          fStack0000000000000100 = -0.0;
          if ((char)unaff_x19[0x1e] != '\0') {
            fStack0000000000000100 = fVar93;
          }
          fStack0000000000000100 = fVar75 + fStack0000000000000100;
          goto LAB_06134e88;
        }
        if (((uVar53 == 0) || (uVar95 != uVar22)) || (uVar53 == *(uint *)((long)unaff_x19 + 0x35c)))
        {
          fStack0000000000000100 = -0.0;
          if ((char)unaff_x19[0x1e] != '\0') {
            fStack0000000000000100 = fVar93;
          }
          if (*(int *)(*(long *)(PTR_DAT_069fb9c0 + 0x88) + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          fStack0000000000000100 = fVar75 + fStack0000000000000100;
          uStack0000000000000048 = FUN_054594b0(uVar23,0);
          fStack0000000000000104 = 0.0;
          fStack00000000000000f0 = 0.0;
        }
        else {
          cVar38 = (char)unaff_x19[0x1e];
          iVar29 = (iVar29 - iVar4) - (uStack0000000000000048 & 1);
          fVar75 = -fVar86;
          if (cVar38 != '\0') {
            fVar75 = fVar86;
          }
          if (iVar29 < 1) {
            fVar86 = 1.0;
            iVar29 = 1;
          }
          else {
            fVar86 = *(float *)((long)unaff_x19 + 0x30c);
          }
          if (uVar23 == 9) {
LAB_06136b4c:
            fVar86 = ((fVar93 + fVar75) * (1.0 - fVar86)) / (float)iVar29;
            if (cVar38 == '\0') {
              fStack0000000000000100 = fStack0000000000000100 + fVar86;
              fStack0000000000000104 = fStack0000000000000104 + 0.0;
              fStack00000000000000f0 = fStack00000000000000f0 + 0.0;
            }
            else {
              fStack0000000000000100 = fStack0000000000000100 - fVar86;
            }
          }
          else {
            if (uVar23 != 0xa0) {
              if (*(int *)(*(long *)(PTR_DAT_069fb9c0 + 0x88) + 0xe4) == 0) {
                thunk_FUN_02df485c();
              }
              uVar51 = FUN_054594b0(uVar23,0);
              cVar38 = (char)unaff_x19[0x1e];
              if ((uVar51 & 1) != 0) goto LAB_06136b4c;
            }
            fVar86 = ((fVar93 + fVar75) * fVar86) /
                     (float)(int)((iVar4 - ((uStack0000000000000048 ^ 0xffffffff) & 1)) + iVar28);
            if (cVar38 == '\0') {
              fStack0000000000000100 = fStack0000000000000100 + fVar86;
              fStack0000000000000104 = fStack0000000000000104 + 0.0;
              fStack00000000000000f0 = fStack00000000000000f0 + 0.0;
            }
            else {
              fStack0000000000000100 = fStack0000000000000100 - fVar86;
            }
          }
        }
      }
    }
  }
  else if (uVar24 == 0x20) {
    fStack0000000000000100 = (fVar75 + fVar93 * 0.5) - (fVar65 + fVar61) * 0.5;
    fStack00000000000000f0 = 0.0;
    fStack0000000000000104 = 0.0;
  }
  uVar24 = (uint)*(undefined8 *)(lVar50 + 0x18);
  if (uVar24 <= uVar53) goto LAB_0613719c;
  lVar48 = lVar32 + uVar30 * 0x178;
  fVar86 = fStack00000000000000b0 + fStack0000000000000100;
  fVar93 = fStack0000000000000190 + fStack0000000000000104;
  fVar75 = fStack00000000000000ac + fStack00000000000000f0;
  plVar55 = (long *)Method_System_HashCode_Combine<ulong,_int>__;
  if (*(char *)(lVar48 + 0x170) == '\0') goto LAB_061356c0;
  iVar28 = *piVar52;
  if (iVar28 == 0) {
    fVar76 = fmodf(*(float *)((long)unaff_x19 + 0x34c) * (float)(int)uVar95,1.0);
    iVar29 = *(int *)((long)unaff_x19 + 0x344);
    if (iVar29 < 2) {
      if (iVar29 == 0) {
        lVar34 = lVar32 + uVar30 * 0x178;
        *(undefined4 *)(lVar34 + 100) = 0;
        *(undefined4 *)(lVar34 + 0x8c) = 0;
        *(undefined4 *)(lVar34 + 0xb4) = 0x3f800000;
        *(undefined4 *)(lVar34 + 0xdc) = 0x3f800000;
      }
      else if (iVar29 == 1) {
        lVar34 = lVar32 + uVar30 * 0x178;
        fVar80 = *(float *)(lVar34 + 0x48);
        pfVar39 = (float *)(lVar34 + 100);
        if (*(int *)((long)unaff_x19 + 0x29c) == 0x208) {
          lVar34 = lVar32 + uVar30 * 0x178;
          fVar61 = *(float *)(lVar34 + 0x70);
          *pfVar39 = fVar76 + ((fStack0000000000000100 + fVar80) - *(float *)(unaff_x19 + 0x9e)) /
                              (*(float *)(unaff_x19 + 0x9f) - *(float *)(unaff_x19 + 0x9e));
          *(float *)(lVar34 + 0x8c) =
               fVar76 + ((fStack0000000000000100 + fVar61) - *(float *)(unaff_x19 + 0x9e)) /
                        (*(float *)(unaff_x19 + 0x9f) - *(float *)(unaff_x19 + 0x9e));
          *(float *)(lVar34 + 0xb4) =
               fVar76 + ((fStack0000000000000100 + *(float *)(lVar34 + 0x98)) -
                        *(float *)(unaff_x19 + 0x9e)) /
                        (*(float *)(unaff_x19 + 0x9f) - *(float *)(unaff_x19 + 0x9e));
          *(float *)(lVar34 + 0xdc) =
               fVar76 + ((fStack0000000000000100 + *(float *)(lVar34 + 0xc0)) -
                        *(float *)(unaff_x19 + 0x9e)) /
                        (*(float *)(unaff_x19 + 0x9f) - *(float *)(unaff_x19 + 0x9e));
        }
        else {
          lVar34 = lVar32 + uVar30 * 0x178;
          fVar61 = fVar61 - fVar65;
          fVar64 = *(float *)(lVar34 + 0x70);
          fVar91 = *(float *)(lVar34 + 0x98);
          fVar82 = *(float *)(lVar34 + 0xc0);
          *pfVar39 = fVar76 + (fVar80 - fVar65) / fVar61;
          *(float *)(lVar34 + 0x8c) = fVar76 + (fVar64 - fVar65) / fVar61;
          *(float *)(lVar34 + 0xb4) = fVar76 + (fVar91 - fVar65) / fVar61;
          *(float *)(lVar34 + 0xdc) = fVar76 + (fVar82 - fVar65) / fVar61;
        }
      }
    }
    else if (iVar29 == 2) {
      lVar34 = lVar32 + uVar30 * 0x178;
      *(float *)(lVar34 + 100) =
           fVar76 + ((fStack0000000000000100 + *(float *)(lVar34 + 0x48)) -
                    *(float *)(unaff_x19 + 0x9e)) /
                    (*(float *)(unaff_x19 + 0x9f) - *(float *)(unaff_x19 + 0x9e));
      *(float *)(lVar34 + 0x8c) =
           fVar76 + ((fStack0000000000000100 + *(float *)(lVar34 + 0x70)) -
                    *(float *)(unaff_x19 + 0x9e)) /
                    (*(float *)(unaff_x19 + 0x9f) - *(float *)(unaff_x19 + 0x9e));
      *(float *)(lVar34 + 0xb4) =
           fVar76 + ((fStack0000000000000100 + *(float *)(lVar34 + 0x98)) -
                    *(float *)(unaff_x19 + 0x9e)) /
                    (*(float *)(unaff_x19 + 0x9f) - *(float *)(unaff_x19 + 0x9e));
      *(float *)(lVar34 + 0xdc) =
           fVar76 + ((fStack0000000000000100 + *(float *)(lVar34 + 0xc0)) -
                    *(float *)(unaff_x19 + 0x9e)) /
                    (*(float *)(unaff_x19 + 0x9f) - *(float *)(unaff_x19 + 0x9e));
    }
    else if (iVar29 == 3) {
      iVar29 = (int)unaff_x19[0x69];
      if (iVar29 < 2) {
        if (iVar29 == 0) {
          lVar34 = lVar32 + uVar30 * 0x178;
          *(undefined4 *)(lVar34 + 0x68) = 0;
          *(undefined4 *)(lVar34 + 0x90) = 0x3f800000;
          *(undefined4 *)(lVar34 + 0xb8) = 0;
          *(undefined4 *)(lVar34 + 0xe0) = 0x3f800000;
        }
        else if (iVar29 == 1) {
          lVar34 = lVar32 + uVar30 * 0x178;
          fVar80 = fVar80 - fVar64;
          fVar61 = (*(float *)(lVar34 + 0x74) - fVar64) / fVar80;
          fVar80 = fVar76 + (*(float *)(lVar34 + 0x4c) - fVar64) / fVar80;
          *(float *)(lVar34 + 0x68) = fVar80;
          *(float *)(lVar34 + 0xb8) = fVar80;
          goto LAB_061352bc;
        }
      }
      else if (iVar29 == 2) {
        lVar34 = lVar32 + uVar30 * 0x178;
        fVar80 = fVar76 + (*(float *)(lVar34 + 0x4c) - *(float *)((long)unaff_x19 + 0x4f4)) /
                          (*(float *)((long)unaff_x19 + 0x4fc) - *(float *)((long)unaff_x19 + 0x4f4)
                          );
        *(float *)(lVar34 + 0x68) = fVar80;
        fVar61 = *(float *)((long)unaff_x19 + 0x4f4);
        fVar64 = *(float *)((long)unaff_x19 + 0x4fc);
        *(float *)(lVar34 + 0xb8) = fVar80;
        fVar61 = (*(float *)(lVar34 + 0x74) - fVar61) / (fVar64 - fVar61);
LAB_061352bc:
        *(float *)(lVar34 + 0x90) = fVar76 + fVar61;
        *(float *)(lVar34 + 0xe0) = fVar76 + fVar61;
      }
      else if (iVar29 == 3) {
        if (*(int *)(*(long *)PTR_DAT_069fb930 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        FUN_0630b598(*(undefined8 *)
                      Method_System_HashCode_Combine<Vector4,_Vector4,_Vector4,_SHCoefficients>__,0)
        ;
        uVar24 = (uint)*(undefined8 *)(lVar50 + 0x18);
      }
      if (uVar24 <= uVar53) goto LAB_0613719c;
      lVar34 = lVar32 + uVar30 * 0x178;
      fVar64 = *(float *)(lVar34 + 0x138);
      fVar61 = (1.0 - (*(float *)(lVar34 + 0x68) + *(float *)(lVar34 + 0x90)) * fVar64) * 0.5;
      fVar80 = fVar76 + *(float *)(lVar34 + 0x68) * fVar64 + fVar61;
      fVar76 = fVar76 + fVar61 + *(float *)(lVar34 + 0x90) * fVar64;
      *(float *)(lVar34 + 100) = fVar80;
      *(float *)(lVar34 + 0x8c) = fVar80;
      *(float *)(lVar34 + 0xb4) = fVar76;
      *(float *)(lVar34 + 0xdc) = fVar76;
    }
    iVar29 = (int)unaff_x19[0x69];
    if (iVar29 < 2) {
      if (iVar29 == 0) {
        if (uVar24 <= uVar53) goto LAB_0613719c;
        lVar34 = lVar32 + uVar30 * 0x178;
        *(undefined4 *)(lVar34 + 0x68) = 0;
        *(undefined4 *)(lVar34 + 0x90) = 0x3f800000;
        *(undefined4 *)(lVar34 + 0xb8) = 0x3f800000;
        *(undefined4 *)(lVar34 + 0xe0) = 0;
      }
      else if (iVar29 == 1) {
        if (uVar53 < uVar24) {
          lVar34 = lVar32 + uVar30 * 0x178;
          fVar62 = fVar62 - fVar63;
          fVar76 = (*(float *)(lVar34 + 0x4c) - fVar63) / fVar62;
          fVar62 = (*(float *)(lVar34 + 0x74) - fVar63) / fVar62;
          *(float *)(lVar34 + 0x68) = fVar76;
          goto LAB_06135434;
        }
        goto LAB_0613719c;
      }
    }
    else if (iVar29 == 2) {
      if (uVar24 <= uVar53) goto LAB_0613719c;
      lVar34 = lVar32 + uVar30 * 0x178;
      fVar76 = (*(float *)(lVar34 + 0x4c) - *(float *)((long)unaff_x19 + 0x4f4)) /
               (*(float *)((long)unaff_x19 + 0x4fc) - *(float *)((long)unaff_x19 + 0x4f4));
      *(float *)(lVar34 + 0x68) = fVar76;
      fVar62 = (*(float *)(lVar34 + 0x74) - *(float *)((long)unaff_x19 + 0x4f4)) /
               (*(float *)((long)unaff_x19 + 0x4fc) - *(float *)((long)unaff_x19 + 0x4f4));
LAB_06135434:
      *(float *)(lVar34 + 0x90) = fVar62;
      *(float *)(lVar34 + 0xb8) = fVar62;
      *(float *)(lVar34 + 0xe0) = fVar76;
    }
    else if (iVar29 == 3) {
      if (uVar24 <= uVar53) goto LAB_0613719c;
      lVar34 = lVar32 + uVar30 * 0x178;
      fVar61 = *(float *)(lVar34 + 0x138);
      fVar80 = (1.0 - (*(float *)(lVar34 + 100) + *(float *)(lVar34 + 0xb4)) / fVar61) * 0.5;
      fVar76 = *(float *)(lVar34 + 100) / fVar61 + fVar80;
      fVar80 = fVar80 + *(float *)(lVar34 + 0xb4) / fVar61;
      *(float *)(lVar34 + 0x68) = fVar76;
      *(float *)(lVar34 + 0xe0) = fVar76;
      *(float *)(lVar34 + 0x90) = fVar80;
      *(float *)(lVar34 + 0xb8) = fVar80;
    }
    if (uVar24 <= uVar53) goto LAB_0613719c;
    lVar34 = lVar32 + uVar30 * 0x178;
    fVar76 = ABS(auVar79._0_4_) * *(float *)(lVar34 + 0x13c) * (1.0 - *(float *)(unaff_x19 + 0x60));
    if ((*(char *)(lVar34 + 0x34) == '\0') &&
       ((*(byte *)(lVar32 + uVar30 * 0x178 + 0x16c) & 1) != 0)) {
      fVar76 = -fVar76;
    }
    lVar34 = lVar32 + uVar30 * 0x178;
    *(float *)(lVar34 + 0x60) = fVar76;
    *(float *)(lVar34 + 0x88) = fVar76;
    *(float *)(lVar34 + 0xb0) = fVar76;
    *(float *)(lVar34 + 0xd8) = fVar76;
  }
  plVar55 = (long *)Method_System_HashCode_Combine<ulong,_int>__;
  if (((int)uVar53 < (int)unaff_x19[0x6c]) &&
     (iStack00000000000000dc < *(int *)((long)unaff_x19 + 0x364))) {
    if (((int)unaff_x19[0x6d] <= (int)uVar95) || ((int)unaff_x19[0x62] == 5)) {
      if (((int)uVar95 < (int)unaff_x19[0x6d]) && ((int)unaff_x19[0x62] == 5)) {
        if (uVar53 < uVar24) {
          if (*(uint *)(lVar32 + uVar30 * 0x178 + 0x40) == uVar7) {
            lVar48 = lVar32 + uVar30 * 0x178;
            *(ulong *)(lVar48 + 0x48) =
                 CONCAT44(fVar93 + (float)((ulong)*(undefined8 *)(lVar48 + 0x48) >> 0x20),
                          fVar86 + (float)*(undefined8 *)(lVar48 + 0x48));
            *(float *)(lVar48 + 0x50) = fVar75 + *(float *)(lVar48 + 0x50);
            *(ulong *)(lVar48 + 0x70) =
                 CONCAT44(fVar93 + (float)((ulong)*(undefined8 *)(lVar48 + 0x70) >> 0x20),
                          fVar86 + (float)*(undefined8 *)(lVar48 + 0x70));
            *(float *)(lVar48 + 0x78) = fVar75 + *(float *)(lVar48 + 0x78);
            *(ulong *)(lVar48 + 0x98) =
                 CONCAT44(fVar93 + (float)((ulong)*(undefined8 *)(lVar48 + 0x98) >> 0x20),
                          fVar86 + (float)*(undefined8 *)(lVar48 + 0x98));
            *(float *)(lVar48 + 0xa0) = fVar75 + *(float *)(lVar48 + 0xa0);
            *(ulong *)(lVar48 + 0xc0) =
                 CONCAT44(fVar93 + (float)((ulong)*(undefined8 *)(lVar48 + 0xc0) >> 0x20),
                          fVar86 + (float)*(undefined8 *)(lVar48 + 0xc0));
            *(float *)(lVar48 + 200) = fVar75 + *(float *)(lVar48 + 200);
            plVar55 = (long *)Method_System_HashCode_Combine<ulong,_int>__;
            goto LAB_06135658;
          }
          goto LAB_06135588;
        }
        goto LAB_0613719c;
      }
      goto LAB_06135588;
    }
    if (uVar24 <= uVar53) goto LAB_0613719c;
    lVar48 = lVar32 + uVar30 * 0x178;
    *(ulong *)(lVar48 + 0x48) =
         CONCAT44(fVar93 + (float)((ulong)*(undefined8 *)(lVar48 + 0x48) >> 0x20),
                  fVar86 + (float)*(undefined8 *)(lVar48 + 0x48));
    *(float *)(lVar48 + 0x50) = fVar75 + *(float *)(lVar48 + 0x50);
    *(ulong *)(lVar48 + 0x70) =
         CONCAT44(fVar93 + (float)((ulong)*(undefined8 *)(lVar48 + 0x70) >> 0x20),
                  fVar86 + (float)*(undefined8 *)(lVar48 + 0x70));
    *(float *)(lVar48 + 0x78) = fVar75 + *(float *)(lVar48 + 0x78);
    *(ulong *)(lVar48 + 0x98) =
         CONCAT44(fVar93 + (float)((ulong)*(undefined8 *)(lVar48 + 0x98) >> 0x20),
                  fVar86 + (float)*(undefined8 *)(lVar48 + 0x98));
    *(float *)(lVar48 + 0xa0) = fVar75 + *(float *)(lVar48 + 0xa0);
    *(ulong *)(lVar48 + 0xc0) =
         CONCAT44(fVar93 + (float)((ulong)*(undefined8 *)(lVar48 + 0xc0) >> 0x20),
                  fVar86 + (float)*(undefined8 *)(lVar48 + 0xc0));
    *(float *)(lVar48 + 200) = fVar75 + *(float *)(lVar48 + 200);
  }
  else {
LAB_06135588:
    if (uVar24 <= uVar53) goto LAB_0613719c;
    if (DAT_06db4c71 == '\0') {
      FUN_02d965b8(PTR_DAT_069fb978);
      uVar24 = *(uint *)(lVar50 + 0x18);
      DAT_06db4c71 = '\x01';
    }
    puVar13 = PTR_DAT_069fb978;
    uVar20 = *(undefined4 *)(*(undefined8 **)(*(long *)PTR_DAT_069fb978 + 0xb8) + 1);
    *(undefined8 *)(lVar32 + uVar30 * 0x178 + 0x48) =
         **(undefined8 **)(*(long *)PTR_DAT_069fb978 + 0xb8);
    *(undefined4 *)(lVar32 + uVar30 * 0x178 + 0x50) = uVar20;
    if (uVar24 <= uVar53) goto LAB_0613719c;
    lVar34 = lVar32 + uVar30 * 0x178;
    uVar20 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar13 + 0xb8) + 1);
    *(undefined8 *)(lVar34 + 0x70) = **(undefined8 **)(*(long *)puVar13 + 0xb8);
    *(undefined4 *)(lVar34 + 0x78) = uVar20;
    uVar20 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar13 + 0xb8) + 1);
    *(undefined8 *)(lVar34 + 0x98) = **(undefined8 **)(*(long *)puVar13 + 0xb8);
    *(undefined4 *)(lVar34 + 0xa0) = uVar20;
    uVar36 = **(undefined8 **)(*(long *)puVar13 + 0xb8);
    uVar20 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar13 + 0xb8) + 1);
    *(undefined1 *)(lVar48 + 0x170) = 0;
    *(undefined8 *)(lVar34 + 0xc0) = uVar36;
    *(undefined4 *)(lVar34 + 200) = uVar20;
    plVar55 = (long *)Method_System_HashCode_Combine<ulong,_int>__;
  }
LAB_06135658:
  iVar29 = FUN_06318350(0);
  *(bool *)((long)unaff_x19 + 0x174) = iVar29 == 1;
  if (iVar28 == 0) {
    puVar42 = (undefined8 *)(*unaff_x19 + 0x8d8);
  }
  else {
    if (iVar28 != 1) goto LAB_061356c0;
    puVar42 = (undefined8 *)(*unaff_x19 + 0x8f8);
  }
  (*(code *)*puVar42)();
LAB_061356c0:
  if ((unaff_x19[0x74] == 0) || (lVar48 = *(long *)(unaff_x19[0x74] + 0x38), lVar48 == 0))
  goto LAB_0613705c;
  if (*(uint *)(lVar48 + 0x18) <= uVar53) goto LAB_0613719c;
  lVar48 = lVar48 + uVar30 * 0x178;
  uVar36 = *(undefined8 *)(lVar48 + 0x114);
  *(float *)(lVar48 + 0x11c) = fVar75 + *(float *)(lVar48 + 0x11c);
  *(undefined8 *)(lVar48 + 0x114) =
       CONCAT44(fVar93 + (float)((ulong)uVar36 >> 0x20),fVar86 + (float)uVar36);
  if ((unaff_x19[0x74] == 0) || (lVar48 = *(long *)(unaff_x19[0x74] + 0x38), lVar48 == 0))
  goto LAB_0613705c;
  if (*(uint *)(lVar48 + 0x18) <= uVar53) goto LAB_0613719c;
  lVar48 = lVar48 + uVar30 * 0x178;
  *(ulong *)(lVar48 + 0x108) =
       CONCAT44(fVar93 + (float)((ulong)*(undefined8 *)(lVar48 + 0x108) >> 0x20),
                fVar86 + (float)*(undefined8 *)(lVar48 + 0x108));
  *(float *)(lVar48 + 0x110) = fVar75 + *(float *)(lVar48 + 0x110);
  if ((unaff_x19[0x74] == 0) || (lVar48 = *(long *)(unaff_x19[0x74] + 0x38), lVar48 == 0))
  goto LAB_0613705c;
  if (*(uint *)(lVar48 + 0x18) <= uVar53) goto LAB_0613719c;
  lVar48 = lVar48 + uVar30 * 0x178;
  *(ulong *)(lVar48 + 0x120) =
       CONCAT44(fVar93 + (float)((ulong)*(undefined8 *)(lVar48 + 0x120) >> 0x20),
                fVar86 + (float)*(undefined8 *)(lVar48 + 0x120));
  *(float *)(lVar48 + 0x128) = fVar75 + *(float *)(lVar48 + 0x128);
  if ((unaff_x19[0x74] == 0) || (lVar48 = *(long *)(unaff_x19[0x74] + 0x38), lVar48 == 0))
  goto LAB_0613705c;
  if (*(uint *)(lVar48 + 0x18) <= uVar53) goto LAB_0613719c;
  lVar48 = lVar48 + uVar30 * 0x178;
  uVar36 = *(undefined8 *)(lVar48 + 300);
  *(float *)(lVar48 + 0x134) = fVar75 + *(float *)(lVar48 + 0x134);
  *(undefined8 *)(lVar48 + 300) =
       CONCAT44(fVar93 + (float)((ulong)uVar36 >> 0x20),fVar86 + (float)uVar36);
  lVar48 = unaff_x19[0x74];
  if ((lVar48 == 0) || (lVar34 = *(long *)(lVar48 + 0x38), lVar34 == 0)) goto LAB_0613705c;
  uVar24 = *(uint *)(lVar34 + 0x18);
  if (uVar24 <= uVar53) goto LAB_0613719c;
  lVar49 = lVar34 + 0x20 + uVar30 * 0x178;
  uVar36 = *(undefined8 *)(lVar49 + 0x118);
  auVar74._0_8_ = CONCAT44(fVar86 + (float)((ulong)uVar36 >> 0x20),fVar86 + (float)uVar36);
  auVar74._8_4_ = fVar93 + (float)*(undefined8 *)(lVar49 + 0x120);
  auVar74._12_4_ = fVar93 + (float)((ulong)*(undefined8 *)(lVar49 + 0x120) >> 0x20);
  *(float *)(lVar49 + 0x128) = fVar93 + *(float *)(lVar49 + 0x128);
  *(long *)(lVar49 + 0x120) = auVar74._8_8_;
  *(undefined8 *)(lVar49 + 0x118) = auVar74._0_8_;
  if (uVar95 == uVar22) {
    uVar22 = *(int *)((long)unaff_x19 + 0x4a4) - 1;
    if (uVar53 == uVar22) goto LAB_061358cc;
  }
  else {
    lVar48 = *(long *)(lVar48 + 0x50);
    if (lVar48 == 0) goto LAB_0613705c;
    if (*(uint *)(lVar48 + 0x18) <= uVar22) goto LAB_0613719c;
    lVar49 = lVar48 + 0x20 + (long)(int)uVar22 * 0x60;
    fVar80 = fVar93 + *(float *)(lVar49 + 0x38);
    *(ulong *)(lVar49 + 0x30) =
         CONCAT44(fVar93 + (float)((ulong)*(undefined8 *)(lVar49 + 0x30) >> 0x20),
                  fVar93 + (float)*(undefined8 *)(lVar49 + 0x30));
    *(float *)(lVar49 + 0x38) = fVar80;
    *(float *)(lVar49 + 0x3c) = fVar86 + *(float *)(lVar49 + 0x3c);
    if (uVar24 <= *(uint *)(lVar49 + 0x18)) goto LAB_0613719c;
    lVar48 = lVar48 + 0x20 + (long)(int)uVar22 * 0x60;
    uVar20 = *(undefined4 *)(lVar34 + 0x20 + (long)(int)*(uint *)(lVar49 + 0x18) * 0x178 + 0xf4);
    *(float *)(lVar48 + 0x54) = fVar80;
    *(undefined4 *)(lVar48 + 0x50) = uVar20;
    lVar48 = unaff_x19[0x74];
    if ((lVar48 == 0) || (lVar34 = *(long *)(lVar48 + 0x50), lVar34 == 0)) goto LAB_0613705c;
    if (*(uint *)(lVar34 + 0x18) <= uVar22) goto LAB_0613719c;
    lVar48 = *(long *)(lVar48 + 0x38);
    if (lVar48 == 0) goto LAB_0613705c;
    uVar24 = *(uint *)(lVar34 + 0x20 + (long)(int)uVar22 * 0x60 + 0x24);
    if (*(uint *)(lVar48 + 0x18) <= uVar24) goto LAB_0613719c;
    lVar34 = lVar34 + 0x20 + (long)(int)uVar22 * 0x60;
    *(undefined4 *)(lVar34 + 0x58) = *(undefined4 *)(lVar48 + (long)(int)uVar24 * 0x178 + 0x120);
    *(undefined4 *)(lVar34 + 0x5c) = *(undefined4 *)(lVar34 + 0x30);
    uVar22 = *(int *)((long)unaff_x19 + 0x4a4) - 1;
LAB_061358cc:
    if (uVar53 == uVar22) {
      lVar48 = unaff_x19[0x74];
      if ((lVar48 == 0) || (lVar34 = *(long *)(lVar48 + 0x50), lVar34 == 0)) goto LAB_0613705c;
      if (*(uint *)(lVar34 + 0x18) <= uVar95) goto LAB_0613719c;
      lVar49 = lVar34 + 0x20 + (long)(int)uVar95 * 0x60;
      fVar80 = fVar93 + *(float *)(lVar49 + 0x38);
      *(ulong *)(lVar49 + 0x30) =
           CONCAT44(fVar93 + (float)((ulong)*(undefined8 *)(lVar49 + 0x30) >> 0x20),
                    fVar93 + (float)*(undefined8 *)(lVar49 + 0x30));
      *(float *)(lVar49 + 0x38) = fVar80;
      *(float *)(lVar49 + 0x3c) = fVar86 + *(float *)(lVar49 + 0x3c);
      lVar48 = *(long *)(lVar48 + 0x38);
      if (lVar48 == 0) goto LAB_0613705c;
      uVar22 = *(uint *)(lVar34 + 0x20 + (long)(int)uVar95 * 0x60 + 0x18);
      if (*(uint *)(lVar48 + 0x18) <= uVar22) goto LAB_0613719c;
      *(undefined4 *)(lVar49 + 0x50) = *(undefined4 *)(lVar48 + (long)(int)uVar22 * 0x178 + 0x114);
      *(float *)(lVar49 + 0x54) = fVar80;
      lVar48 = unaff_x19[0x74];
      if ((lVar48 == 0) || (lVar34 = *(long *)(lVar48 + 0x50), lVar34 == 0)) goto LAB_0613705c;
      if (*(uint *)(lVar34 + 0x18) <= uVar95) goto LAB_0613719c;
      lVar48 = *(long *)(lVar48 + 0x38);
      if (lVar48 == 0) goto LAB_0613705c;
      uVar22 = *(uint *)(lVar34 + 0x20 + (long)(int)uVar95 * 0x60 + 0x24);
      if (*(uint *)(lVar48 + 0x18) <= uVar22) goto LAB_0613719c;
      lVar34 = lVar34 + 0x20 + (long)(int)uVar95 * 0x60;
      *(undefined4 *)(lVar34 + 0x58) = *(undefined4 *)(lVar48 + (long)(int)uVar22 * 0x178 + 0x120);
      *(undefined4 *)(lVar34 + 0x5c) = *(undefined4 *)(lVar34 + 0x30);
    }
  }
  if (*(int *)(*(long *)(PTR_DAT_069fb9c0 + 0x88) + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  uVar51 = FUN_05458704(uVar23,0);
  if (((((uVar51 & 1) == 0) && (1 < uVar23 - 0x2010)) && (uVar23 != 0xad)) && (uVar23 != 0x2d)) {
    if (bVar16) {
      if (((uVar53 != 0) && ((int)uVar53 < (int)(*(uint *)(lVar50 + 0x18) - 1))) &&
         (((int)uVar53 < *(int *)((long)unaff_x19 + 0x4a4) &&
          ((uVar23 == 0x2019 || (uVar23 == 0x27)))))) {
        if (*(uint *)(lVar50 + 0x18) <= uVar53 - 1) goto LAB_0613719c;
        uVar5 = *(undefined2 *)(lVar32 + (ulong)(uVar53 - 1) * 0x178 + 4);
        if (*(int *)(*(long *)(PTR_DAT_069fb9c0 + 0x88) + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        uVar51 = FUN_05458704(uVar5,0);
        if ((uVar51 & 1) != 0) {
          if (*(uint *)(lVar50 + 0x18) <= uVar53 + 1) goto LAB_0613719c;
          uVar5 = *(undefined2 *)(lVar32 + (ulong)(uVar53 + 1) * 0x178 + 4);
          if (*(int *)(*(long *)(PTR_DAT_069fb9c0 + 0x88) + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          uVar51 = FUN_05458704(uVar5,0);
          if ((uVar51 & 1) != 0) goto LAB_06135bc0;
        }
      }
LAB_06136938:
      if (uVar53 == *(int *)((long)unaff_x19 + 0x4a4) - 1U) {
        if (*(int *)(*(long *)(PTR_DAT_069fb9c0 + 0x88) + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        uVar51 = FUN_05458704(uVar23,0);
        uVar22 = uVar53;
        if ((uVar51 & 1) == 0) goto LAB_06136974;
      }
      else {
LAB_06136974:
        uVar22 = uVar53 - 1;
      }
      lVar48 = unaff_x19[0x74];
      if (lVar48 != 0) {
        lVar34 = *(long *)(lVar48 + 0x40);
        if (lVar34 != 0) {
          uVar24 = *(uint *)(lVar48 + 0x24);
          iVar28 = *(int *)(lVar34 + 0x18);
          if (iVar28 < (int)(uVar24 + 1)) {
            if (*(int *)(*(long *)Method_System_HashCode_Add<bool>__ + 0xe4) == 0) {
              thunk_FUN_02df485c();
            }
            FUN_0383ec94((long *)(lVar48 + 0x40),iVar28 + 1,
                         *(undefined8 *)Method_System_Security_Cryptography_HashAlgorithm_get_Hash__
                        );
            lVar48 = unaff_x19[0x74];
            if (lVar48 == 0) goto LAB_0613705c;
          }
          lVar48 = *(long *)(lVar48 + 0x40);
          if (lVar48 != 0) {
            if (uVar24 < *(uint *)(lVar48 + 0x18)) {
              lVar48 = lVar48 + (long)(int)uVar24 * 0x18;
              *(long **)(lVar48 + 0x20) = unaff_x19;
              *(uint *)(lVar48 + 0x28) = uVar21;
              *(uint *)(lVar48 + 0x2c) = uVar22;
              *(uint *)(lVar48 + 0x30) = (uVar22 - uVar21) + 1;
              LeanTween__value();
              lVar48 = unaff_x19[0x74];
              if (lVar48 != 0) {
                lVar34 = *(long *)(lVar48 + 0x50);
                *(int *)(lVar48 + 0x24) = *(int *)(lVar48 + 0x24) + 1;
                if (lVar34 != 0) {
                  if (uVar95 < *(uint *)(lVar34 + 0x18)) {
                    bVar16 = false;
                    goto LAB_06135ad4;
                  }
                  goto LAB_0613719c;
                }
              }
              goto LAB_0613705c;
            }
            goto LAB_0613719c;
          }
        }
      }
      goto LAB_0613705c;
    }
    if (uVar53 == 0) {
      if (*(int *)(*(long *)(PTR_DAT_069fb9c0 + 0x88) + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      bVar19 = FUN_0545865c(uVar23,0);
      if ((((uVar23 == 0x200b | bVar19 ^ 0xff | bVar18) & 1) != 0) ||
         (*(int *)((long)unaff_x19 + 0x4a4) == 1)) goto LAB_06136938;
    }
    bVar16 = false;
  }
  else {
    if (!bVar16) {
      uVar21 = uVar53;
    }
    if (uVar53 != *(int *)((long)unaff_x19 + 0x4a4) - 1U) {
LAB_06135bc0:
      bVar16 = true;
      goto LAB_06135bc8;
    }
    lVar48 = unaff_x19[0x74];
    if (lVar48 == 0) goto LAB_0613705c;
    lVar34 = *(long *)(lVar48 + 0x40);
    if (lVar34 == 0) goto LAB_0613705c;
    uVar22 = *(uint *)(lVar48 + 0x24);
    iVar28 = *(int *)(lVar34 + 0x18);
    if (iVar28 < (int)(uVar22 + 1)) {
      if (*(int *)(*(long *)Method_System_HashCode_Add<bool>__ + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      FUN_0383ec94((long *)(lVar48 + 0x40),iVar28 + 1,
                   *(undefined8 *)Method_System_Security_Cryptography_HashAlgorithm_get_Hash__);
      lVar48 = unaff_x19[0x74];
      if (lVar48 == 0) goto LAB_0613705c;
    }
    lVar48 = *(long *)(lVar48 + 0x40);
    if (lVar48 == 0) goto LAB_0613705c;
    if (*(uint *)(lVar48 + 0x18) <= uVar22) goto LAB_0613719c;
    lVar48 = lVar48 + (long)(int)uVar22 * 0x18;
    *(long **)(lVar48 + 0x20) = unaff_x19;
    *(uint *)(lVar48 + 0x28) = uVar21;
    *(uint *)(lVar48 + 0x2c) = uVar53;
    *(uint *)(lVar48 + 0x30) = (uVar53 - uVar21) + 1;
    LeanTween__value();
    lVar48 = unaff_x19[0x74];
    if (lVar48 == 0) goto LAB_0613705c;
    lVar34 = *(long *)(lVar48 + 0x50);
    *(int *)(lVar48 + 0x24) = *(int *)(lVar48 + 0x24) + 1;
    if (lVar34 == 0) goto LAB_0613705c;
    if (*(uint *)(lVar34 + 0x18) <= uVar95) goto LAB_0613719c;
    bVar16 = true;
LAB_06135ad4:
    lVar34 = lVar34 + (long)(int)uVar95 * 0x60;
    iStack00000000000000dc = iStack00000000000000dc + 1;
    *(int *)(lVar34 + 0x34) = *(int *)(lVar34 + 0x34) + 1;
  }
LAB_06135bc8:
  lVar48 = unaff_x19[0x74];
  if ((lVar48 == 0) || (lVar34 = *(long *)(lVar48 + 0x38), lVar34 == 0)) goto LAB_0613705c;
  if (*(uint *)(lVar34 + 0x18) <= uVar53) goto LAB_0613719c;
  lVar49 = lVar34 + 0x20;
  if ((*(byte *)(lVar49 + uVar30 * 0x178 + 0x16c) >> 2 & 1) == 0) {
    if (bVar15) {
      if (*(uint *)(lVar34 + 0x18) <= (uint)((long)(int)uVar53 + -1)) goto LAB_0613719c;
      lVar49 = lVar49 + ((long)(int)uVar53 + -1) * 0x178;
      lVar34 = *unaff_x19;
      uVar20 = *(undefined4 *)(lVar49 + 0x100);
      uVar83 = *(undefined4 *)(lVar49 + 0x13c);
LAB_06135e74:
      pcVar43 = *(code **)(lVar34 + 0x908);
LAB_06135eac:
      (*pcVar43)(fStack0000000000000074,fStack000000000000006c,fStack0000000000000070,uVar20,
                 fStack0000000000000120,0,fStack0000000000000078,uVar83);
      lVar48 = *plVar55;
      if (*(int *)(lVar48 + 0xe4) == 0) {
        thunk_FUN_02df485c();
        lVar48 = *plVar55;
      }
      fStack000000000000013c = 0.0;
      fStack000000000000011c = 0.0;
      fStack0000000000000120 = *(float *)(*(long *)(lVar48 + 0xb8) + 0x1730);
    }
    bVar15 = false;
  }
  else {
    lVar34 = lVar49 + uVar30 * 0x178;
    *(int *)(lVar34 + 0x148) = iVar58;
    iVar28 = *(int *)(lVar34 + 0x40);
    if ((((int)unaff_x19[0x6c] < (int)uVar53) || ((int)unaff_x19[0x6d] < (int)uVar95)) ||
       (((int)unaff_x19[0x62] == 5 && (iVar28 + 1 != (int)unaff_x19[0x6e])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar18 & 1) == 0 && uVar23 != 0x200b) {
      fVar86 = *(float *)(lVar49 + uVar30 * 0x178 + 0x13c);
      if (fStack000000000000013c <= fVar86) {
        fStack000000000000013c = fVar86;
      }
      if (fStack000000000000011c <= ABS(fVar76)) {
        fStack000000000000011c = ABS(fVar76);
      }
      if (iVar28 != iVar46) {
        if (*(int *)(*plVar55 + 0xe4) == 0) {
          thunk_FUN_02df485c();
          lVar48 = unaff_x19[0x74];
          if (lVar48 == 0) goto LAB_0613705c;
          lVar34 = *(long *)(*plVar55 + 0xb8);
        }
        else {
          lVar34 = *(long *)(*plVar55 + 0xb8);
        }
        fStack0000000000000120 = *(float *)(lVar34 + 0x1730);
      }
      lVar48 = *(long *)(lVar48 + 0x38);
      if (lVar48 == 0) goto LAB_0613705c;
      if (*(uint *)(lVar48 + 0x18) <= uVar53) goto LAB_0613719c;
      if (unaff_x19[0x1f] == 0) goto LAB_0613705c;
      fVar80 = *(float *)(lVar48 + uVar30 * 0x178 + 0x144);
      fVar86 = (float)FUN_063ecc60(unaff_x19[0x1f] + 0x28,0);
      fVar80 = fVar80 + fStack000000000000013c * fVar86;
      iVar46 = iVar28;
      if (fVar80 <= fStack0000000000000120) {
        fStack0000000000000120 = fVar80;
      }
    }
    if (!bVar15) {
      bVar15 = false;
      if ((bVar1) && ((int)uVar53 <= (int)uVar98)) {
        if ((uVar23 & 0xfffe) == 10) goto LAB_06135ee8;
        if (uVar23 != 0xd) {
          if (uVar53 == uVar98) {
            if (*(int *)(*(long *)(PTR_DAT_069fb9c0 + 0x88) + 0xe4) == 0) {
              thunk_FUN_02df485c();
            }
            uVar51 = FUN_054594b0(uVar23,0);
            if ((uVar51 & 1) != 0) goto LAB_06135dc8;
          }
          if ((unaff_x19[0x74] != 0) && (lVar48 = *(long *)(unaff_x19[0x74] + 0x38), lVar48 != 0)) {
            if (uVar53 < *(uint *)(lVar48 + 0x18)) {
              lVar48 = lVar48 + uVar30 * 0x178;
              fStack0000000000000078 = *(float *)(lVar48 + 0x15c);
              fVar86 = fVar76;
              fVar80 = fStack0000000000000078;
              if (fStack000000000000013c != 0.0) {
                fVar86 = fStack000000000000011c;
                fVar80 = fStack000000000000013c;
              }
              fStack000000000000013c = fVar80;
              fStack0000000000000070 = 0.0;
              fStack0000000000000074 = *(float *)(lVar48 + 0x114);
              uStack000000000000007c = *(undefined4 *)(lVar48 + 0x164);
              fStack000000000000006c = fStack0000000000000120;
              fStack000000000000011c = fVar86;
              goto LAB_06135e34;
            }
            goto LAB_0613719c;
          }
          goto LAB_0613705c;
        }
      }
LAB_06135dc8:
      bVar15 = false;
      goto LAB_06135ee8;
    }
LAB_06135e34:
    if (*(int *)((long)unaff_x19 + 0x4a4) == 1) {
      if ((unaff_x19[0x74] != 0) && (lVar48 = *(long *)(unaff_x19[0x74] + 0x38), lVar48 != 0)) {
        if (uVar53 < *(uint *)(lVar48 + 0x18)) {
          lVar48 = lVar48 + uVar30 * 0x178;
LAB_06135e68:
          lVar34 = *unaff_x19;
          uVar20 = *(undefined4 *)(lVar48 + 0x120);
          uVar83 = *(undefined4 *)(lVar48 + 0x15c);
          goto LAB_06135e74;
        }
        goto LAB_0613719c;
      }
      goto LAB_0613705c;
    }
    if ((uVar53 == uVar6) || ((int)uVar98 <= (int)uVar53)) {
      lVar48 = unaff_x19[0x74];
      if ((bVar18 & 1) == 0 && uVar23 != 0x200b) {
        if ((lVar48 == 0) || (lVar48 = *(long *)(lVar48 + 0x38), lVar48 == 0)) goto LAB_0613705c;
        if (*(uint *)(lVar48 + 0x18) <= uVar53) goto LAB_0613719c;
        lVar48 = lVar48 + uVar30 * 0x178;
      }
      else {
        if ((lVar48 == 0) || (lVar48 = *(long *)(lVar48 + 0x38), lVar48 == 0)) goto LAB_0613705c;
        if (*(uint *)(lVar48 + 0x18) <= uVar98) goto LAB_0613719c;
        lVar48 = lVar48 + (long)(int)uVar98 * 0x178;
      }
      uVar20 = *(undefined4 *)(lVar48 + 0x120);
      uVar83 = *(undefined4 *)(lVar48 + 0x15c);
      pcVar43 = *(code **)(*unaff_x19 + 0x908);
      goto LAB_06135eac;
    }
    if (!bVar1) {
      if ((unaff_x19[0x74] != 0) && (lVar48 = *(long *)(unaff_x19[0x74] + 0x38), lVar48 != 0)) {
        if ((uint)((long)(int)uVar53 + -1) < *(uint *)(lVar48 + 0x18)) {
          lVar48 = lVar48 + ((long)(int)uVar53 + -1) * 0x178;
          goto LAB_06135e68;
        }
        goto LAB_0613719c;
      }
      goto LAB_0613705c;
    }
    if ((int)uVar53 < *(int *)((long)unaff_x19 + 0x4a4) + -1) {
      if ((unaff_x19[0x74] == 0) || (lVar48 = *(long *)(unaff_x19[0x74] + 0x38), lVar48 == 0))
      goto LAB_0613705c;
      if (*(uint *)(lVar48 + 0x18) <= uVar53 + 1) goto LAB_0613719c;
      uVar51 = FUN_06151678(uStack000000000000007c,
                            *(undefined4 *)(lVar48 + (ulong)(uVar53 + 1) * 0x178 + 0x164),0);
      if ((uVar51 & 1) == 0) {
        if ((unaff_x19[0x74] != 0) && (lVar48 = *(long *)(unaff_x19[0x74] + 0x38), lVar48 != 0)) {
          if (uVar53 < *(uint *)(lVar48 + 0x18)) {
            lVar48 = lVar48 + uVar30 * 0x178;
            uVar20 = *(undefined4 *)(lVar48 + 0x120);
            uVar83 = *(undefined4 *)(lVar48 + 0x15c);
            pcVar43 = *(code **)(*unaff_x19 + 0x908);
            goto LAB_06135eac;
          }
          goto LAB_0613719c;
        }
        goto LAB_0613705c;
      }
      bVar15 = true;
    }
    else {
      bVar15 = true;
    }
  }
LAB_06135ee8:
  if ((unaff_x19[0x74] == 0) || (lVar48 = *(long *)(unaff_x19[0x74] + 0x38), lVar48 == 0))
  goto LAB_0613705c;
  if (*(uint *)(lVar48 + 0x18) <= uVar53) goto LAB_0613719c;
  if (lVar31 == 0) goto LAB_0613705c;
  uVar22 = *(uint *)(lVar48 + uVar30 * 0x178 + 0x18c);
  fVar86 = (float)FUN_063ecc70(lVar31 + 0x28,0);
  if ((uVar22 >> 6 & 1) == 0) {
    if (bVar10) {
      if ((unaff_x19[0x74] == 0) || (lVar31 = *(long *)(unaff_x19[0x74] + 0x38), lVar31 == 0))
      goto LAB_0613705c;
      if (*(uint *)(lVar31 + 0x18) <= (uint)((long)(int)uVar53 + -1)) goto LAB_0613719c;
      lVar31 = lVar31 + ((long)(int)uVar53 + -1) * 0x178;
LAB_06136194:
      fVar80 = *(float *)(lVar31 + 0x144);
      lVar48 = *unaff_x19;
      uVar20 = *(undefined4 *)(lVar31 + 0x120);
LAB_06136414:
      (**(code **)(lVar48 + 0x908))
                (fStack0000000000000094,fStack0000000000000098,fVar60,uVar20,
                 fStack000000000000009c * fVar86 + fVar80,0,fStack000000000000009c,
                 fStack000000000000009c);
    }
LAB_06136450:
    bVar10 = false;
  }
  else {
    lVar48 = unaff_x19[0x74];
    if ((lVar48 == 0) || (lVar34 = *(long *)(lVar48 + 0x38), lVar34 == 0)) goto LAB_0613705c;
    if (*(uint *)(lVar34 + 0x18) <= uVar53) goto LAB_0613719c;
    *(int *)(lVar34 + 0x20 + uVar30 * 0x178 + 0x150) = iVar58;
    if ((((int)unaff_x19[0x6c] < (int)uVar53) || ((int)unaff_x19[0x6d] < (int)uVar95)) ||
       (((int)unaff_x19[0x62] == 5 &&
        (*(int *)(lVar34 + 0x20 + uVar30 * 0x178 + 0x40) + 1 != (int)unaff_x19[0x6e])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (((((bool)(bVar10 | bVar1 ^ 1U)) || ((int)uVar98 < (int)uVar53)) || ((uVar23 & 0xfffe) == 10)
        ) || (uVar23 == 0xd)) {
LAB_06136024:
      if (!bVar10) goto LAB_06136450;
    }
    else {
      if (uVar53 == uVar98) {
        if (*(int *)(*(long *)(PTR_DAT_069fb9c0 + 0x88) + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        uVar51 = FUN_054594b0(uVar23,0);
        if ((uVar51 & 1) != 0) goto LAB_06136024;
        lVar48 = unaff_x19[0x74];
        if (lVar48 == 0) goto LAB_0613705c;
      }
      lVar48 = *(long *)(lVar48 + 0x38);
      if (lVar48 == 0) goto LAB_0613705c;
      if (*(uint *)(lVar48 + 0x18) <= uVar53) goto LAB_0613719c;
      lVar48 = lVar48 + uVar30 * 0x178;
      fStack000000000000009c = *(float *)(lVar48 + 0x15c);
      fStack0000000000000098 = fVar86 * fStack000000000000009c + *(float *)(lVar48 + 0x144);
      fVar60 = 0.0;
      fStack0000000000000054 = *(float *)(lVar48 + 0x58);
      fStack0000000000000094 = *(float *)(lVar48 + 0x114);
    }
    iVar28 = *(int *)((long)unaff_x19 + 0x4a4);
    if (iVar28 == 1) {
LAB_06136168:
      if ((unaff_x19[0x74] != 0) && (lVar31 = *(long *)(unaff_x19[0x74] + 0x38), lVar31 != 0)) {
        if (uVar53 < *(uint *)(lVar31 + 0x18)) {
          lVar31 = lVar31 + uVar30 * 0x178;
          goto LAB_06136194;
        }
        goto LAB_0613719c;
      }
      goto LAB_0613705c;
    }
    if (uVar53 == uVar6) {
      lVar31 = unaff_x19[0x74];
      if ((uVar23 != 0x200b & (bVar18 ^ 0xff)) == 0) goto LAB_061361cc;
LAB_061363d8:
      if ((lVar31 != 0) && (lVar31 = *(long *)(lVar31 + 0x38), lVar31 != 0)) {
        if (uVar53 < *(uint *)(lVar31 + 0x18)) {
          lVar31 = lVar31 + uVar30 * 0x178;
LAB_061363f8:
          fVar80 = *(float *)(lVar31 + 0x144);
          lVar48 = *unaff_x19;
          uVar20 = *(undefined4 *)(lVar31 + 0x120);
          goto LAB_06136414;
        }
        goto LAB_0613719c;
      }
      goto LAB_0613705c;
    }
    if ((int)uVar53 < iVar28) {
      if ((unaff_x19[0x74] != 0) && (lVar48 = *(long *)(unaff_x19[0x74] + 0x38), lVar48 != 0)) {
        if (uVar53 + 1 < *(uint *)(lVar48 + 0x18)) {
          if (*(float *)(lVar48 + (ulong)(uVar53 + 1) * 0x178 + 0x58) == fStack0000000000000054) {
            if (*(int *)(*(long *)
                          Method_UnityEngine_XR_Interaction_Toolkit_UI_BodyUI_HandMenu_OnMenuVisible__
                        + 0xe4) == 0) {
              thunk_FUN_02df485c();
            }
            uVar51 = FUN_06151b7c(0);
            if ((uVar51 & 1) != 0) {
              iVar28 = *(int *)((long)unaff_x19 + 0x4a4);
              goto 
              UnityEngine_XR_Interaction_Toolkit_Locomotion_Comfort_VignetteParameters__set_vignetteColor
              ;
            }
          }
          lVar31 = unaff_x19[0x74];
          if ((int)uVar53 <= (int)uVar98) goto LAB_061363d8;
LAB_061361cc:
          if ((lVar31 != 0) && (lVar31 = *(long *)(lVar31 + 0x38), lVar31 != 0)) {
            if (uVar98 < *(uint *)(lVar31 + 0x18)) {
              lVar31 = lVar31 + (long)(int)uVar98 * 0x178;
              goto LAB_061363f8;
            }
            goto LAB_0613719c;
          }
          goto LAB_0613705c;
        }
        goto LAB_0613719c;
      }
      goto LAB_0613705c;
    }
UnityEngine_XR_Interaction_Toolkit_Locomotion_Comfort_VignetteParameters__set_vignetteColor:
    if ((int)uVar53 < iVar28) {
      iVar28 = FUN_063540b8(lVar31,0);
      if (*(uint *)(lVar50 + 0x18) <= uVar53 + 1) goto LAB_0613719c;
      lVar31 = *(long *)(lVar32 + (ulong)(uVar53 + 1) * 0x178 + 0x20);
      if (lVar31 == 0) goto LAB_0613705c;
      iVar29 = FUN_063540b8(lVar31,0);
      if (iVar28 != iVar29) goto LAB_06136168;
    }
    if (!bVar1) {
      if ((unaff_x19[0x74] != 0) && (lVar31 = *(long *)(unaff_x19[0x74] + 0x38), lVar31 != 0)) {
        if ((uint)((long)(int)uVar53 + -1) < *(uint *)(lVar31 + 0x18)) {
          lVar31 = lVar31 + ((long)(int)uVar53 + -1) * 0x178;
          goto LAB_06136194;
        }
        goto LAB_0613719c;
      }
      goto LAB_0613705c;
    }
    bVar10 = true;
  }
  if ((unaff_x19[0x74] == 0) || (lVar31 = *(long *)(unaff_x19[0x74] + 0x38), lVar31 == 0))
  goto LAB_0613705c;
  uVar22 = (uint)*(undefined8 *)(lVar31 + 0x18);
  if (uVar22 <= uVar53) goto LAB_0613719c;
  if ((*(byte *)(lVar31 + 0x20 + uVar30 * 0x178 + 0x16d) >> 1 & 1) == 0) {
    if (bVar11) {
      (**(code **)(*unaff_x19 + 0x918))();
    }
LAB_06136564:
    bVar11 = false;
  }
  else {
    if ((((int)unaff_x19[0x6c] < (int)uVar53) || ((int)unaff_x19[0x6d] < (int)uVar95)) ||
       (((int)unaff_x19[0x62] == 5 &&
        (*(int *)(lVar31 + 0x20 + uVar30 * 0x178 + 0x40) + 1 != (int)unaff_x19[0x6e])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar11) {
      if ((((!bVar1) || ((int)uVar98 < (int)uVar53)) || ((uVar23 & 0xfffe) == 10)) ||
         (uVar23 == 0xd)) goto LAB_06136564;
      if (uVar53 == uVar98) {
        if (*(int *)(*(long *)(PTR_DAT_069fb9c0 + 0x88) + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        uVar51 = FUN_054594b0(uVar23,0);
        if ((uVar51 & 1) != 0) goto LAB_06136564;
      }
      lVar48 = *plVar55;
      if (*(int *)(lVar48 + 0xe4) == 0) {
        thunk_FUN_02df485c();
        lVar48 = *plVar55;
      }
      if ((unaff_x19[0x74] == 0) || (lVar31 = *(long *)(unaff_x19[0x74] + 0x38), lVar31 == 0))
      goto LAB_0613705c;
      uVar22 = (uint)*(undefined8 *)(lVar31 + 0x18);
      if (uVar22 <= uVar53) goto LAB_0613719c;
      lVar34 = *(long *)(lVar48 + 0xb8);
      lVar48 = lVar31 + uVar30 * 0x178;
      fStack00000000000000cc = *(float *)(lVar34 + 0x1728);
      fStack00000000000000d0 = *(float *)(lVar34 + 0x172c);
      in_stack_00001290 = *(float *)(lVar48 + 0x188);
      fStack00000000000000d8 = *(float *)(lVar34 + 0x1720);
      fStack00000000000000f4 = *(float *)(lVar34 + 0x1724);
      auVar78 = *(undefined1 (*) [16])(lVar48 + 0x178);
      in_stack_00001288 = auVar78._8_4_;
      in_stack_0000128c = auVar78._12_4_;
      in_stack_00001280 = auVar78._0_4_;
      in_stack_00001284 = auVar78._4_4_;
    }
    if (uVar22 <= uVar53) goto LAB_0613719c;
    lVar31 = lVar31 + uVar30 * 0x178;
    in_stack_000001c0 = CONCAT44(in_stack_00001284,in_stack_00001280);
    auVar9._8_4_ = in_stack_00001288;
    auVar9._0_8_ = in_stack_000001c0;
    auVar9._12_4_ = in_stack_0000128c;
    lVar48 = 0x118;
    if ((bVar18 & 1) == 0) {
      lVar48 = 0xf4;
    }
    fVar63 = *(float *)(lVar31 + 0x180);
    fVar93 = *(float *)(lVar31 + 0x184);
    fVar64 = *(float *)(lVar31 + 0x188);
    uVar36 = *(undefined8 *)(lVar31 + 0x178);
    fVar65 = *(float *)(lVar31 + 0x120);
    fVar86 = *(float *)(lVar31 + 0x13c);
    fVar62 = *(float *)(lVar31 + 0x140);
    fVar61 = *(float *)(lVar31 + 0x148);
    fVar80 = *(float *)(lVar31 + lVar48 + 0x20);
    in_stack_000001c8 = auVar9._8_8_;
    in_stack_000001a8 = uVar36;
    fStack00000000000001b0 = fVar63;
    fStack00000000000001b4 = fVar93;
    in_stack_000001b8 = fVar64;
    in_stack_000001d0 = in_stack_00001290;
    uVar30 = FUN_06152ca0(&stack0x000001c0,&stack0x000001a8,0);
    if ((uVar30 & 1) == 0) {
      if ((bVar18 & 1) == 0) {
        fVar86 = fVar65;
      }
      if (*(int *)(*(long *)Method_UnityEngine_Hash128_Append<Vector2Int>__ + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      fVar80 = fVar80 - in_stack_00001284;
      if (fVar80 <= fStack00000000000000d8) {
        fStack00000000000000d8 = fVar80;
      }
      if (fStack00000000000000cc <= fVar86 + in_stack_00001288) {
        fStack00000000000000cc = fVar86 + in_stack_00001288;
      }
      if (*(int *)(*(long *)Method_UnityEngine_Hash128_Append<Vector2Int>__ + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      fVar61 = fVar61 - in_stack_00001290;
      fVar62 = fVar62 + in_stack_0000128c;
      if (fVar61 <= fStack00000000000000f4) {
        fStack00000000000000f4 = fVar61;
      }
      if (fStack00000000000000d0 <= fVar62) {
        fStack00000000000000d0 = fVar62;
      }
    }
    else {
      if (*(int *)(*(long *)Method_UnityEngine_Hash128_Append<Vector2Int>__ + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      fStack00000000000000d8 = (fVar80 + (fStack00000000000000cc - in_stack_00001288)) * 0.5;
      (**(code **)(*unaff_x19 + 0x918))();
      if (*(int *)(*(long *)Method_UnityEngine_Hash128_Append<Vector2Int>__ + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      if ((bVar18 & 1) == 0) {
        fVar86 = fVar65;
      }
      if (*(int *)(*(long *)Method_UnityEngine_Hash128_Append<Vector2Int>__ + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      fStack00000000000000f4 = fVar61 - fVar64;
      in_stack_00001280 = (undefined4)uVar36;
      in_stack_00001284 = (float)((ulong)uVar36 >> 0x20);
      fStack00000000000000cc = fVar63 + fVar86;
      in_stack_00001288 = fVar63;
      in_stack_0000128c = fVar93;
      in_stack_00001290 = fVar64;
      fStack00000000000000d0 = fVar62 + fVar93;
    }
    if (((*(int *)((long)unaff_x19 + 0x4a4) == 1) || (uVar53 == uVar6)) ||
       (((int)uVar98 <= (int)uVar53 || (!bVar1)))) {
      (**(code **)(*unaff_x19 + 0x918))();
      bVar11 = false;
    }
    else {
      bVar11 = true;
    }
  }
  iVar28 = *(int *)((long)unaff_x19 + 0x4a4);
  uVar53 = uVar53 + 1;
  uVar22 = uVar95;
  if (iVar28 <= (int)uVar53) goto LAB_06136c08;
  goto LAB_06134b8c;
LAB_06136c08:
  lVar50 = unaff_x19[0x74];
  if (lVar50 != 0) {
    iVar46 = uVar95 + 1;
LAB_06136c20:
    puVar13 = Method_UnityEngine_Hash128_Append<bool>__;
    lVar32 = *(long *)(lVar50 + 0x60);
    if (lVar32 != 0) {
      if (*(uint *)(lVar32 + 0x18) <= *(uint *)(unaff_x19 + 0xd4)) {
LAB_0613719c:
                    /* WARNING: Subroutine does not return */
        FUN_02d96868();
      }
      *(int *)(lVar32 + (long)(int)*(uint *)(unaff_x19 + 0xd4) * 0x50 + 0x28) = iVar58;
      *(int *)(lVar50 + 0x18) = iVar28;
      lVar32 = unaff_x19[0xd7];
      *(int *)(lVar50 + 0x2c) = iVar46;
      if (iVar28 < 1 || iStack00000000000000dc == 0) {
        iStack00000000000000dc = 1;
      }
      *(int *)(lVar50 + 0x1c) = (int)lVar32;
      *(int *)(lVar50 + 0x24) = iStack00000000000000dc;
      *(int *)(lVar50 + 0x30) = *(int *)((long)unaff_x19 + 0x4c4) + 1;
      if (((int)unaff_x19[0x6a] != 0xff) ||
         (uVar30 = (**(code **)(*unaff_x19 + 0x1c8))(), (uVar30 & 1) == 0)) {
LAB_061345f8:
        if (*(int *)(*(long *)Method_System_HashCode_Combine<float,_float,_float>__ + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        FUN_06150bd0();
        return;
      }
      lVar50 = unaff_x19[0xde];
      if (lVar50 != 0) {
        (**(code **)(lVar50 + 0x18))
                  (*(undefined8 *)(lVar50 + 0x40),unaff_x19[0x74],*(undefined8 *)(lVar50 + 0x28));
      }
      if (*(int *)((long)unaff_x19 + 0x354) != 0) {
        if ((unaff_x19[0x74] == 0) || (lVar50 = *(long *)(unaff_x19[0x74] + 0x60), lVar50 == 0))
        goto LAB_0613705c;
        if (*(int *)(*(long *)puVar13 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        if (*(int *)(lVar50 + 0x18) == 0) goto LAB_0613719c;
        FUN_0619ca50(lVar50 + 0x20,1,0);
      }
      if (unaff_x19[0x7b] != 0) {
        FUN_0632a884(unaff_x19[0x7b],0);
        if ((unaff_x19[0x74] != 0) && (lVar50 = *(long *)(unaff_x19[0x74] + 0x60), lVar50 != 0)) {
          if (*(int *)(lVar50 + 0x18) == 0) goto LAB_0613719c;
          if (unaff_x19[0x7b] != 0) {
            FUN_063281f8(unaff_x19[0x7b],*(undefined8 *)(lVar50 + 0x30),0);
            if ((unaff_x19[0x74] != 0) && (lVar50 = *(long *)(unaff_x19[0x74] + 0x60), lVar50 != 0))
            {
              if (*(int *)(lVar50 + 0x18) == 0) goto LAB_0613719c;
              if (unaff_x19[0x7b] != 0) {
                FUN_0632924c(unaff_x19[0x7b],0,*(undefined8 *)(lVar50 + 0x48),0);
                if ((unaff_x19[0x74] != 0) &&
                   (lVar50 = *(long *)(unaff_x19[0x74] + 0x60), lVar50 != 0)) {
                  if (*(int *)(lVar50 + 0x18) == 0) goto LAB_0613719c;
                  if (unaff_x19[0x7b] != 0) {
                    FUN_063284a8(unaff_x19[0x7b],*(undefined8 *)(lVar50 + 0x50),0);
                    if ((unaff_x19[0x74] != 0) &&
                       (lVar50 = *(long *)(unaff_x19[0x74] + 0x60), lVar50 != 0)) {
                      if (*(int *)(lVar50 + 0x18) == 0) goto LAB_0613719c;
                      if (unaff_x19[0x7b] != 0) {
                        FUN_06328668(unaff_x19[0x7b],*(undefined8 *)(lVar50 + 0x58),0);
                        if (unaff_x19[0x7b] != 0) {
                          FUN_0632a644(unaff_x19[0x7b],0);
                          lVar50 = unaff_x19[0x74];
                          if (lVar50 != 0) {
                            lVar31 = 0;
                            lVar32 = 0;
                            do {
                              uVar30 = lVar32 + 1;
                              if ((long)*(int *)(lVar50 + 0x34) <= (long)uVar30) goto LAB_061345f8;
                              lVar50 = *(long *)(lVar50 + 0x60);
                              if (lVar50 == 0) break;
                              if (*(int *)(*(long *)puVar13 + 0xe4) == 0) {
                                thunk_FUN_02df485c();
                              }
                              if (*(uint *)(lVar50 + 0x18) <= uVar30) goto LAB_0613719c;
                              FUN_0619c92c(lVar50 + lVar31 + 0x70,0);
                              lVar50 = unaff_x19[0xe4];
                              if (lVar50 == 0) break;
                              if (*(uint *)(lVar50 + 0x18) <= uVar30) goto LAB_0613719c;
                              uVar36 = *(undefined8 *)(lVar50 + lVar32 * 8 + 0x28);
                              if (*(int *)(*(long *)PTR_DAT_069fb990 + 0xe4) == 0) {
                                thunk_FUN_02df485c();
                              }
                              uVar51 = FUN_06350670(uVar36,0,0);
                              if ((uVar51 & 1) == 0) {
                                if (*(int *)((long)unaff_x19 + 0x354) != 0) {
                                  if ((unaff_x19[0x74] == 0) ||
                                     (lVar50 = *(long *)(unaff_x19[0x74] + 0x60), lVar50 == 0))
                                  break;
                                  if (*(int *)(*(long *)puVar13 + 0xe4) == 0) {
                                    thunk_FUN_02df485c();
                                  }
                                  if (*(uint *)(lVar50 + 0x18) <= uVar30) goto LAB_0613719c;
                                  FUN_0619ca50(lVar50 + lVar31 + 0x70,1,0);
                                }
                                lVar50 = unaff_x19[0xe4];
                                if (lVar50 == 0) break;
                                if (*(uint *)(lVar50 + 0x18) <= uVar30) goto LAB_0613719c;
                                lVar50 = *(long *)(lVar50 + lVar32 * 8 + 0x28);
                                if (lVar50 == 0) break;
                                lVar50 = FUN_061a5b08(lVar50,0);
                                if ((unaff_x19[0x74] == 0) ||
                                   (lVar48 = *(long *)(unaff_x19[0x74] + 0x60), lVar48 == 0)) break;
                                if (*(uint *)(lVar48 + 0x18) <= uVar30) goto LAB_0613719c;
                                if (lVar50 == 0) break;
                                FUN_063281f8(lVar50,*(undefined8 *)(lVar48 + lVar31 + 0x80),0);
                                lVar50 = unaff_x19[0xe4];
                                if (lVar50 == 0) break;
                                if (*(uint *)(lVar50 + 0x18) <= uVar30) goto LAB_0613719c;
                                lVar50 = *(long *)(lVar50 + lVar32 * 8 + 0x28);
                                if (lVar50 == 0) break;
                                lVar50 = FUN_061a5b08(lVar50,0);
                                if ((unaff_x19[0x74] == 0) ||
                                   (lVar48 = *(long *)(unaff_x19[0x74] + 0x60), lVar48 == 0)) break;
                                if (*(uint *)(lVar48 + 0x18) <= uVar30) goto LAB_0613719c;
                                if (lVar50 == 0) break;
                                FUN_0632924c(lVar50,0,*(undefined8 *)(lVar48 + lVar31 + 0x98),0);
                                lVar50 = unaff_x19[0xe4];
                                if (lVar50 == 0) break;
                                if (*(uint *)(lVar50 + 0x18) <= uVar30) goto LAB_0613719c;
                                lVar50 = *(long *)(lVar50 + lVar32 * 8 + 0x28);
                                if (lVar50 == 0) break;
                                lVar50 = FUN_061a5b08(lVar50,0);
                                if ((unaff_x19[0x74] == 0) ||
                                   (lVar48 = *(long *)(unaff_x19[0x74] + 0x60), lVar48 == 0)) break;
                                if (*(uint *)(lVar48 + 0x18) <= uVar30) goto LAB_0613719c;
                                if (lVar50 == 0) break;
                                FUN_063284a8(lVar50,*(undefined8 *)(lVar48 + lVar31 + 0xa0),0);
                                lVar50 = unaff_x19[0xe4];
                                if (lVar50 == 0) break;
                                if (*(uint *)(lVar50 + 0x18) <= uVar30) goto LAB_0613719c;
                                lVar50 = *(long *)(lVar50 + lVar32 * 8 + 0x28);
                                if (lVar50 == 0) break;
                                lVar50 = FUN_061a5b08(lVar50,0);
                                if ((unaff_x19[0x74] == 0) ||
                                   (lVar48 = *(long *)(unaff_x19[0x74] + 0x60), lVar48 == 0)) break;
                                if (*(uint *)(lVar48 + 0x18) <= uVar30) goto LAB_0613719c;
                                if (lVar50 == 0) break;
                                FUN_06328668(lVar50,*(undefined8 *)(lVar48 + lVar31 + 0xa8),0);
                                lVar50 = unaff_x19[0xe4];
                                if (lVar50 == 0) break;
                                if (*(uint *)(lVar50 + 0x18) <= uVar30) goto LAB_0613719c;
                                lVar50 = *(long *)(lVar50 + lVar32 * 8 + 0x28);
                                if ((lVar50 == 0) || (lVar50 = FUN_061a5b08(lVar50,0), lVar50 == 0))
                                break;
                                FUN_0632a644(lVar50,0);
                              }
                              lVar50 = unaff_x19[0x74];
                              lVar32 = lVar32 + 1;
                              lVar31 = lVar31 + 0x50;
                            } while (lVar50 != 0);
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_0613705c:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


