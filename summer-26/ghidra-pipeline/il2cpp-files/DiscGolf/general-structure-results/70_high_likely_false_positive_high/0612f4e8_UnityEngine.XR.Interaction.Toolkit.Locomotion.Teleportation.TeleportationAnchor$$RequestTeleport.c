/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.Locomotion.Teleportation.TeleportationAnchor$$RequestTeleport
ENTRY_POINT: 0612f4e8
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


void UnityEngine_XR_Interaction_Toolkit_Locomotion_Teleportation_TeleportationAnchor__RequestTeleport
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
  undefined *puVar12;
  undefined *puVar13;
  bool bVar14;
  bool bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  undefined4 uVar19;
  uint uVar20;
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
  long lVar33;
  ulong uVar34;
  undefined8 uVar35;
  undefined1 uVar36;
  char cVar37;
  float *pfVar38;
  undefined4 *puVar39;
  long *plVar40;
  undefined8 *puVar41;
  code *pcVar42;
  uint uVar43;
  float *pfVar44;
  int iVar45;
  uint uVar46;
  long lVar47;
  long lVar48;
  long *unaff_x19;
  long unaff_x20;
  long lVar49;
  ulong uVar50;
  int *piVar51;
  long *unaff_x21;
  uint uVar52;
  undefined8 *unaff_x23;
  undefined8 *unaff_x25;
  uint uVar53;
  long *plVar54;
  long *plVar55;
  ulong uVar56;
  int iVar57;
  ushort uVar58;
  float fVar59;
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
  undefined8 uVar72;
  undefined1 auVar73 [16];
  float fVar74;
  float fVar75;
  float fVar76;
  undefined8 uVar77;
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  float fVar80;
  float fVar81;
  float fVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  undefined4 uVar86;
  float fVar87;
  float fVar88;
  float fVar89;
  undefined8 uVar90;
  float fVar91;
  float fVar92;
  float fVar93;
  float fVar94;
  float fVar95;
  float fVar96;
  float fVar97;
  float fVar98;
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
  undefined4 uVar99;
  float fVar100;
  uint uVar101;
  undefined8 uVar102;
  char in_stack_000012a4;
  uint uVar103;
  undefined8 in_stack_000012b0;
  undefined8 in_stack_000012b8;
  undefined4 in_stack_000012c4;
  undefined8 in_stack_000012c8;
  undefined8 in_stack_000012d0;
  undefined8 in_stack_000012d8;
  undefined8 in_stack_000012e8;
  
                    /* catch() { ... } // from try @ 0612f2c8 with catch @ 0612f4e8 */
                    /* catch() { ... } // from try @ 0612f2b8 with catch @ 0612f4ec */
  FUN_02d965b8(*(undefined8 *)(param_1 + 0x660));
  *(undefined1 *)(unaff_x20 + 0x715) = 1;
  *(undefined1 *)((long)unaff_x23 + 0x114) = 0;
  uVar102 = 0;
  fVar82 = 0.0;
  fVar83 = 0.0;
  uVar99 = 0;
  fVar100 = 0.0;
  unaff_x23[0xb] = 0;
  unaff_x23[10] = 0;
  unaff_x23[0xd] = 0;
  unaff_x23[0xc] = 0;
  unaff_x23[0xf] = 0;
  unaff_x23[0xe] = 0;
  unaff_x23[0x11] = 0;
  unaff_x23[0x10] = 0;
  unaff_x23[0x13] = 0;
  unaff_x23[0x12] = 0;
  unaff_x23[0x15] = 0;
  unaff_x23[0x14] = 0;
  *(undefined8 *)((long)unaff_x23 + 0x24) = 0;
  *(undefined8 *)((long)unaff_x23 + 0x1c) = 0;
  unaff_x23[1] = 0;
  *unaff_x23 = 0;
  unaff_x23[3] = 0;
  unaff_x23[2] = 0;
  unaff_x25[0x16f] = 0;
  unaff_x25[0x16e] = 0;
  unaff_x25[0x16d] = 0;
  unaff_x25[0x16c] = 0;
  unaff_x25[0x16b] = 0;
  unaff_x25[0x16a] = 0;
  unaff_x25[0x169] = 0;
  unaff_x25[0x168] = 0;
  memset(&stack0x00000d28,0,0x3b8);
  memset(&stack0x00000970,0,0x3b8);
  memset(&stack0x000005b8,0,0x3b8);
  lVar49 = unaff_x19[0x1f];
  if (*(int *)(*unaff_x21 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  plVar54 = (long *)PTR_DAT_069fb930;
  uVar30 = FUN_06350670(lVar49,0,0);
  if ((uVar30 & 1) == 0) {
    if (unaff_x19[0x1f] == 0) goto LAB_0613705c;
    lVar49 = FUN_0615ad34(unaff_x19[0x1f],0);
    if (lVar49 != 0) {
      if (unaff_x19[0x74] != 0) {
        FUN_061a8440(unaff_x19[0x74],0);
      }
      lVar49 = unaff_x19[0x91];
      if ((lVar49 != 0) && (*(long *)(lVar49 + 0x18) != 0)) {
        if ((int)*(long *)(lVar49 + 0x18) == 0) goto LAB_0613719c;
        if (*(int *)(lVar49 + 0x24) != 0) {
          unaff_x19[0x20] = unaff_x19[0x1f];
          LeanTween__value(unaff_x19 + 0x20);
          unaff_x19[0x23] = unaff_x19[0x22];
          LeanTween__value(unaff_x19 + 0x23);
          plVar40 = (long *)Method_System_HashCode_Combine<ulong,_int>__;
          uVar19 = 0;
          *(undefined4 *)(unaff_x19 + 0x24) = 0;
          if (*(int *)(*plVar40 + 0xe4) == 0) {
            thunk_FUN_02df485c(*plVar40,0);
            uVar19 = (undefined4)unaff_x19[0x24];
          }
          in_stack_000001f0 = 0;
          in_stack_000001e8 = 0;
          in_stack_000001e0 = 0;
          FUN_0614041c(&stack0x000001e0,uVar19,unaff_x19[0x20],0,unaff_x19[0x23],0);
          puVar12 = Method_System_HashCode_Combine<int,_int>__;
          lVar49 = *(long *)(*plVar40 + 0xb8);
          unaff_x23[0x29] = 0;
          unaff_x23[0x28] = 0;
          uVar35 = *(undefined8 *)puVar12;
          unaff_x23[0x25] = in_stack_000001e8;
          unaff_x23[0x24] = in_stack_000001e0;
          unaff_x23[0x27] = 0;
          unaff_x23[0x26] = (ulong)in_stack_000001f0;
          FUN_047e0f64(lVar49 + 0x10,&stack0x000012b0,uVar35);
          plVar2 = unaff_x19 + 0xd6;
          unaff_x19[0xd6] = unaff_x19[0x39];
          LeanTween__value();
          lVar49 = unaff_x19[0x7e];
          if (*(int *)(*unaff_x21 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          uVar30 = FUN_0634eb94(lVar49,0,0);
          if ((uVar30 & 1) != 0) {
            if (unaff_x19[0x7e] == 0) goto LAB_0613705c;
            FUN_061a1ff4(unaff_x19[0x7e],0);
          }
          if (unaff_x19[0x1f] != 0) {
            lVar49 = unaff_x19[0x94];
            fVar89 = *(float *)((long)unaff_x19 + 0x20c);
            fVar59 = (float)FUN_063ecbd8(unaff_x19[0x1f] + 0x28,0);
            if (unaff_x19[0x1f] != 0) {
              fVar60 = (float)FUN_063ecbe0(unaff_x19[0x1f] + 0x28,0);
              puVar12 = Method_System_HashCode_Combine<string,_Texture2D>__;
              fVar75 = DAT_010fd060;
              bVar15 = *(char *)((long)unaff_x19 + 0x33e) != '\0';
              fVar80 = DAT_010fd060;
              if (bVar15) {
                fVar80 = 1.0;
              }
              fVar60 = (fVar89 / fVar59) * fVar60;
              fVar59 = fVar60 * DAT_010fd060;
              if (bVar15) {
                fVar59 = fVar60;
              }
              fVar89 = *(float *)((long)unaff_x19 + 0x20c);
              *(undefined4 *)((long)unaff_x19 + 0x43c) = 0x3f800000;
              uVar35 = *(undefined8 *)puVar12;
              *(float *)(unaff_x19 + 0x42) = fVar89;
              FUN_047e1d10(unaff_x19 + 0x43,uVar35);
              *(uint *)((long)unaff_x19 + 0x284) = *(uint *)(unaff_x19 + 0x50);
              puVar13 = Method_System_HashCode_Combine<string,_string>__;
              if ((*(uint *)(unaff_x19 + 0x50) & 1) == 0) {
                uVar19 = (undefined4)unaff_x19[0x47];
              }
              else {
                uVar19 = 700;
              }
              *(undefined4 *)((long)unaff_x19 + 0x23c) = uVar19;
              FUN_047e0934(unaff_x19 + 0x48,uVar19,*(undefined8 *)puVar13);
              FUN_061a9b04(unaff_x19 + 0x51,0);
              uVar35 = *(undefined8 *)
                        Method_System_HashCode_Combine<ReadOnlyList<string>,_ReadOnlyList<string>>__
              ;
              *(undefined4 *)(unaff_x19 + 0x54) = *(undefined4 *)((long)unaff_x19 + 0x294);
              FUN_047e0934(unaff_x19 + 0x55,*(undefined4 *)((long)unaff_x19 + 0x294),uVar35);
              puVar13 = Method_System_HashCode_Add<FontAsset>__;
              *(undefined4 *)((long)unaff_x19 + 0x634) = 0;
              FUN_047e1d04(unaff_x19 + 199,*(undefined8 *)puVar13);
              if (DAT_06db4c71 == '\0') {
                FUN_02d965b8(PTR_DAT_069fb978);
                DAT_06db4c71 = '\x01';
              }
              pfVar38 = *(float **)(*(long *)PTR_DAT_069fb978 + 0xb8);
              fStack0000000000000074 = *pfVar38;
              fStack000000000000006c = pfVar38[1];
              fStack0000000000000070 = pfVar38[2];
              uVar19 = FUN_02ea7f18((int)unaff_x19[0x29],*(undefined4 *)((long)unaff_x19 + 0x14c),
                                    (int)unaff_x19[0x2a],*(undefined4 *)((long)unaff_x19 + 0x154),0)
              ;
              puVar13 = Method_System_HashCode_Combine<int,_bool>__;
              *(undefined4 *)((long)unaff_x19 + 0x144) = uVar19;
              *(undefined4 *)(unaff_x19 + 0xa0) = uVar19;
              uVar35 = *(undefined8 *)puVar13;
              *(undefined4 *)(unaff_x19 + 0x2b) = uVar19;
              *(undefined4 *)((long)unaff_x19 + 0x15c) = uVar19;
              FUN_047df698(unaff_x19 + 0xa1,uVar19,uVar35);
              FUN_047df698(unaff_x19 + 0xa5,(int)unaff_x19[0xa0],*(undefined8 *)puVar13);
              FUN_047df698(unaff_x19 + 0xa9,(int)unaff_x19[0xa0],*(undefined8 *)puVar13);
              lVar32 = unaff_x19[0xa0];
              if (*(int *)(*(long *)Method_UnityEngine_Hash128_Append<Vector2Int>__ + 0xe4) == 0) {
                thunk_FUN_02df485c();
              }
              if (DAT_06dc6716 == '\0') {
                FUN_02d965b8(Method_UnityEngine_Hash128_Append<Vector2Int>__);
                DAT_06dc6716 = '\x01';
              }
              puVar13 = Method_UnityEngine_Hash128_Append<Vector2Int>__;
              lVar31 = *(long *)Method_UnityEngine_Hash128_Append<Vector2Int>__;
              if (*(int *)(lVar31 + 0xe4) == 0) {
                thunk_FUN_02df485c();
                lVar31 = *(long *)puVar13;
              }
              puVar39 = *(undefined4 **)(lVar31 + 0xb8);
              in_stack_000001e0 = 0;
              in_stack_000001e8 = 0;
              in_stack_000001f0 = 0;
              FUN_06152bf0(*puVar39,puVar39[1],puVar39[2],puVar39[3],&stack0x000001e0,(int)lVar32,0)
              ;
              uVar52 = in_stack_000001f0;
              puVar13 = Method_System_HashCode_Add<TextSettings>__;
              unaff_x23[0x25] = in_stack_000001e8;
              unaff_x23[0x24] = in_stack_000001e0;
              FUN_047dfc90(unaff_x19 + 0xad,&stack0x000012b0,*(undefined8 *)puVar13);
              unaff_x19[0xb3] = 0;
              LeanTween__value(unaff_x19 + 0xb3,0);
              FUN_047e171c(unaff_x19 + 0xb4,0,
                           *(undefined8 *)Method_System_HashCode_Combine<sbyte,_sbyte>__);
              if (unaff_x19[0x20] != 0) {
                bVar17 = *(byte *)(unaff_x19[0x20] + 0x1b0);
                uVar35 = *(undefined8 *)Method_System_HashCode_Combine<long,_long>__;
                *(uint *)(unaff_x19 + 0xc1) = (uint)bVar17;
                FUN_047e0378(unaff_x19 + 0xbd,bVar17,uVar35);
                FUN_047e036c(unaff_x19 + 0xc2,*(undefined8 *)Method_System_HashCode_Add<Rect>__);
                if (DAT_06db4dff == '\0') {
                  FUN_02d965b8(PTR_DAT_069fb978);
                  DAT_06db4dff = '\x01';
                }
                cVar37 = DAT_06db4d49;
                uVar19 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_069fb978 + 0xb8) + 0x14);
                *(undefined8 *)((long)unaff_x19 + 0x47c) =
                     *(undefined8 *)(*(long *)(*(long *)PTR_DAT_069fb978 + 0xb8) + 0xc);
                *(undefined4 *)((long)unaff_x19 + 0x484) = uVar19;
                if (cVar37 == '\0') {
                  FUN_02d965b8(PTR_DAT_069fc390);
                  DAT_06db4d49 = '\x01';
                }
                auVar78 = **(undefined1 (**) [16])(*(long *)PTR_DAT_069fc390 + 0xb8);
                *(undefined4 *)((long)unaff_x19 + 0x4ec) = 0;
                *(undefined4 *)((long)unaff_x19 + 0x2ec) = 0xc6fffe00;
                *(long *)((long)unaff_x19 + 0x474) = auVar78._8_8_;
                *(undefined8 *)((long)unaff_x19 + 0x46c) = auVar78._0_8_;
                if (unaff_x19[0x20] != 0) {
                  fVar60 = (float)FUN_063ecc00(unaff_x19[0x20] + 0x28,0);
                  if (unaff_x19[0x20] != 0) {
                    fVar61 = (float)FUN_063ecc08(unaff_x19[0x20] + 0x28,0);
                    if (unaff_x19[0x20] != 0) {
                      fVar62 = (float)FUN_063ecc38(unaff_x19[0x20] + 0x28,0);
                      *(undefined4 *)(unaff_x19 + 0xcb) = 0;
                      *(undefined8 *)((long)unaff_x19 + 0x2d4) = 0;
                      unaff_x19[0x88] = 0;
                      FUN_047e1d10(ZEXT816(0),unaff_x19 + 0x89,*(undefined8 *)puVar12);
                      *(undefined4 *)((long)unaff_x19 + 0x4a4) = 0;
                      *(undefined1 *)(unaff_x19 + 0x8d) = 0;
                      *(undefined8 *)((long)unaff_x19 + 0x4ac) = 0;
                      lVar32 = *plVar40;
                      *(undefined4 *)(unaff_x19 + 0x95) = *(undefined4 *)((long)unaff_x19 + 0x35c);
                      *(undefined4 *)((long)unaff_x19 + 0x4b4) = 0;
                      if (*(int *)(lVar32 + 0xe4) == 0) {
                        thunk_FUN_02df485c();
                        lVar32 = *plVar40;
                      }
                      uVar35 = *(undefined8 *)(*(long *)(lVar32 + 0xb8) + 0x1730);
                      *(undefined8 *)((long)unaff_x19 + 0x4e4) = 0;
                      *(undefined4 *)((long)unaff_x19 + 0x314) = 0xffffffff;
                      uVar35 = NEON_rev64(uVar35,4);
                      *(undefined4 *)(unaff_x19 + 0x98) = 0;
                      *(undefined1 *)(unaff_x19 + 0x5e) = 0;
                      unaff_x19[0x97] = 0;
                      *(undefined4 *)((long)unaff_x19 + 0x32c) = 0x80000000;
                      *(undefined8 *)((long)unaff_x19 + 0x4dc) = uVar35;
                      puVar12 = 
                      Method_UnityEngine_XR_Interaction_Toolkit_UI_BodyUI_HandMenu_OnMenuHidden__;
                      if (unaff_x19[0x66] != 0) {
                        uVar20 = FUN_0408b858(unaff_x19[0x66],0x6b65726e,
                                              *(undefined8 *)
                                               Method_UnityEngine_XR_Interaction_Toolkit_UI_BodyUI_HandMenu_OnMenuHidden__
                                             );
                        if (unaff_x19[0x66] != 0) {
                          uVar21 = FUN_0408b858(unaff_x19[0x66],0x6d61726b,*(undefined8 *)puVar12);
                          if (unaff_x19[0x66] != 0) {
                            uVar22 = FUN_0408b858(unaff_x19[0x66],0x6d6b6d6b,*(undefined8 *)puVar12)
                            ;
                            lVar32 = unaff_x19[0x74];
                            *(undefined4 *)((long)unaff_x19 + 0x4c4) = 0;
                            if ((lVar32 != 0) && (*(long *)(lVar32 + 0x58) != 0)) {
                              uVar6 = (int)unaff_x19[0x6e] - 1;
                              uVar7 = *(int *)(*(long *)(lVar32 + 0x58) + 0x18) - 1;
                              uVar27 = uVar6;
                              if ((int)uVar7 <= (int)uVar6) {
                                uVar27 = uVar7;
                              }
                              uVar7 = 0;
                              if (-1 < (int)uVar6) {
                                uVar7 = uVar27;
                              }
                              FUN_061a8a5c(lVar32,0);
                              lVar32 = *plVar40;
                              *(undefined4 *)(unaff_x19 + 0x73) = 0xbf800000;
                              fVar74 = *(float *)((long)unaff_x19 + 0x37c);
                              fVar97 = *(float *)(unaff_x19 + 0x72);
                              fVar95 = *(float *)((long)unaff_x19 + 0x394);
                              unaff_x19[0x71] = 0;
                              fVar63 = *(float *)(unaff_x19 + 0x6f);
                              fVar64 = *(float *)((long)unaff_x19 + 900);
                              if (*(int *)(lVar32 + 0xe4) == 0) {
                                thunk_FUN_02df485c();
                                lVar32 = *plVar40;
                              }
                              unaff_x19[0x9e] = *(long *)(*(long *)(lVar32 + 0xb8) + 0x1720);
                              unaff_x19[0x9f] = *(long *)(*(long *)(lVar32 + 0xb8) + 0x1728);
                              if (unaff_x19[0x74] != 0) {
                                FUN_061a88d0(unaff_x19[0x74],0);
                                *(undefined4 *)(unaff_x19 + 0x9a) = 0;
                                *(undefined4 *)(unaff_x19 + 0x9b) = 0;
                                fVar76 = 0.0;
                                *(undefined1 *)((long)unaff_x23 + 0x114) = 0;
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
                                FUN_047e2338(*(long *)(*plVar40 + 0xb8) + 0x1338,
                                             *(undefined8 *)Method_System_HashCode_Add<int>__);
                                fVar85 = DAT_010fcf5c;
                                fVar84 = DAT_010fce24;
                                lVar32 = unaff_x19[0x91];
                                uVar27 = 0;
                                if (lVar32 != 0) {
                                  iVar57 = 0;
                                  if (fVar97 <= 0.0) {
                                    fVar97 = 0.0;
                                  }
                                  fVar60 = fVar60 - (fVar61 - fVar62);
                                  if (fVar95 <= 0.0) {
                                    fVar95 = 0.0;
                                  }
                                  plVar3 = unaff_x19 + 0xcc;
                                  fVar80 = fVar80 * fVar89 * DAT_010fcf5c;
                                  iStack0000000000000020 = 0;
                                  uVar6 = (int)lVar49 - 1;
                                  bVar18 = 0;
                                  fVar93 = 0.0;
                                  fVar97 = fVar97 + DAT_010fd0fc;
                                  fVar62 = fVar95 + DAT_010fd0fc;
                                  auVar78 = ZEXT416((uint)DAT_010fce24);
                                  bVar15 = true;
                                  bVar17 = 1;
                                  fVar89 = fVar97;
                                  fVar61 = fVar59;
                                  fStack0000000000000134 = fVar97;
                                  uVar103 = 0;
LAB_0612ff1c:
                                  fVar66 = 1.0;
                                  if ((int)*(uint *)(lVar32 + 0x18) <= (int)uVar27) {
LAB_06134474:
                                    if ((char)unaff_x19[0x4c] == '\0') {
LAB_0613453c:
                                      iVar57 = *(int *)((long)unaff_x19 + 0x26c);
                                      iVar28 = (int)unaff_x19[0x4e];
                                    }
                                    else {
                                      fVar89 = *(float *)((long)unaff_x19 + 0x264);
                                      auVar78 = ZEXT416((uint)DAT_010fd030);
                                      if (fVar89 - *(float *)(unaff_x19 + 0x4d) <= DAT_010fd030)
                                      goto LAB_0613453c;
                                      fVar59 = *(float *)((long)unaff_x19 + 0x20c);
                                      fVar75 = *(float *)((long)unaff_x19 + 0x27c);
                                      auVar78 = ZEXT416((uint)fVar75);
                                      iVar57 = *(int *)((long)unaff_x19 + 0x26c);
                                      iVar28 = (int)unaff_x19[0x4e];
                                      if ((fVar59 < fVar75) && (iVar57 < iVar28)) {
                                        if (*(float *)(unaff_x19 + 0x60) <
                                            *(float *)((long)unaff_x19 + 0x2fc) / 100.0) {
                                          *(undefined4 *)(unaff_x19 + 0x60) = 0;
                                        }
                                        fVar82 = DAT_010fcf54;
                                        *(float *)(unaff_x19 + 0x4d) = fVar59;
                                        fVar83 = (fVar89 - fVar59) * 0.5;
                                        if (fVar83 <= fVar82) {
                                          fVar83 = fVar82;
                                        }
                                        fVar83 = (fVar59 + fVar83) * 20.0 + 0.5;
                                        fVar82 = DAT_010fd008;
                                        if (fVar83 != INFINITY) {
                                          fVar82 = (float)(int)fVar83 / 20.0;
                                        }
                                        if (fVar75 <= fVar82) {
                                          fVar82 = fVar75;
                                        }
LAB_06134534:
                                        *(float *)((long)unaff_x19 + 0x20c) = fVar82;
                                        return;
                                      }
                                    }
                                    *(undefined1 *)((long)unaff_x19 + 0x274) = 1;
                                    if (iVar28 <= iVar57) {
                                      uVar102 = FUN_054e5768((long)unaff_x19 + 0x26c,0);
                                      uVar35 = FUN_054fabf8((long)unaff_x19 + 0x20c,0);
                                      uVar102 = FUN_0536dcdc(*(undefined8 *)
                                                                                                                            
                                                  Method_System_HashCode_Combine<uint,_NativeArray<CAPI_ovrAvatar2Transform>,_NativeArray<CAPI_ovrAvatar2Transform>,_NativeArray<int>,_NativeArray<CAPI_ovrAvatar2NodeId>>__
                                                  ,uVar102,*(undefined8 *)
                                                                                                                        
                                                  Method_System_HashCode_Combine<string,_AssemblyVersion,_string,_string>__
                                                  ,uVar35,0);
                                      if (*(int *)(*plVar54 + 0xe4) == 0) {
                                        thunk_FUN_02df485c(*plVar54);
                                      }
                                      FUN_0630b598(uVar102,0);
                                    }
                                    if ((*(int *)((long)unaff_x19 + 0x4a4) == 0) ||
                                       ((*(int *)((long)unaff_x19 + 0x4a4) == 1 && (uVar103 == 3))))
                                    {
                                      (**(code **)(*unaff_x19 + 0x958))();
                                      goto LAB_061345f8;
                                    }
                                    lVar49 = *plVar40;
                                    if (*(int *)(lVar49 + 0xe4) == 0) {
                                      thunk_FUN_02df485c();
                                      lVar49 = *plVar40;
                                    }
                                    lVar49 = **(long **)(lVar49 + 0xb8);
                                    if (lVar49 == 0) goto LAB_0613705c;
                                    if (*(uint *)(lVar49 + 0x18) <= *(uint *)(unaff_x19 + 0xd4))
                                    goto LAB_0613719c;
                                    iVar57 = *(int *)(lVar49 + (long)(int)*(uint *)(unaff_x19 + 0xd4
                                                                                   ) * 0x38 + 0x54)
                                             << 2;
                                    fVar59 = 0.0;
                                    if ((unaff_x19[0x74] == 0) ||
                                       (lVar49 = *(long *)(unaff_x19[0x74] + 0x60), lVar49 == 0))
                                    goto LAB_0613705c;
                                    if (*(int *)(*(long *)Method_UnityEngine_Hash128_Append<bool>__
                                                + 0xe4) == 0) {
                                      thunk_FUN_02df485c();
                                    }
                                    if (*(int *)(lVar49 + 0x18) == 0) goto LAB_0613719c;
                                    FUN_0619c804(lVar49 + 0x20,0,0);
                                    fStack00000000000000b0 = (float)FUN_02ffcdb8(0);
                                    iVar28 = (int)unaff_x19[0x53];
                                    lVar49 = unaff_x19[0xee];
                                    fStack00000000000000ac = fVar89;
                                    if (iVar28 < 0x401) {
                                      if (iVar28 == 0x100) {
                                        if ((int)unaff_x19[0x62] == 5) {
                                          if (lVar49 == 0) goto LAB_0613705c;
                                          if ((*(uint *)(lVar49 + 0x18) & 0xfffffffe) == 0)
                                          goto LAB_0613719c;
                                          if ((unaff_x19[0x74] == 0) ||
                                             (lVar32 = *(long *)(unaff_x19[0x74] + 0x58),
                                             lVar32 == 0)) goto LAB_0613705c;
                                          if (*(uint *)(lVar32 + 0x18) <= uVar7) goto LAB_0613719c;
                                          fVar89 = *(float *)(lVar32 + (long)(int)uVar7 * 0x14 +
                                                             0x28);
                                        }
                                        else {
                                          if (lVar49 == 0) goto LAB_0613705c;
                                          if ((*(uint *)(lVar49 + 0x18) & 0xfffffffe) == 0)
                                          goto LAB_0613719c;
                                          fVar89 = *(float *)((long)unaff_x19 + 0x4cc);
                                        }
                                        fStack00000000000000ac = *(float *)(lVar49 + 0x34);
                                        fVar64 = (0.0 - fVar89) - fVar74;
                                        fVar89 = *(float *)(lVar49 + 0x2c);
                                        fVar75 = *(float *)(lVar49 + 0x30);
LAB_061349f4:
                                        fVar89 = fVar63 + 0.0 + fVar89;
                                        fVar75 = fVar75 + fVar64;
                                      }
                                      else {
                                        if (iVar28 != 0x200) {
                                          if (iVar28 != 0x400) goto LAB_06134a08;
                                          if ((int)unaff_x19[0x62] == 5) {
                                            if (lVar49 == 0) goto LAB_0613705c;
                                            if (*(int *)(lVar49 + 0x18) == 0) goto LAB_0613719c;
                                            if ((unaff_x19[0x74] == 0) ||
                                               (lVar32 = *(long *)(unaff_x19[0x74] + 0x58),
                                               lVar32 == 0)) goto LAB_0613705c;
                                            if (*(uint *)(lVar32 + 0x18) <= uVar7)
                                            goto LAB_0613719c;
                                            fVar76 = *(float *)(lVar32 + (long)(int)uVar7 * 0x14 +
                                                               0x30);
                                          }
                                          else {
                                            if (lVar49 == 0) goto LAB_0613705c;
                                            if (*(int *)(lVar49 + 0x18) == 0) goto LAB_0613719c;
                                          }
                                          fStack00000000000000ac = *(float *)(lVar49 + 0x28);
                                          fVar64 = fVar64 + (0.0 - fVar76);
                                          fVar89 = *(float *)(lVar49 + 0x20);
                                          fVar75 = *(float *)(lVar49 + 0x24);
                                          goto LAB_061349f4;
                                        }
                                        if ((int)unaff_x19[0x62] != 5) {
                                          if (lVar49 != 0) {
                                            if ((*(int *)(lVar49 + 0x18) != 1) &&
                                               (*(int *)(lVar49 + 0x18) != 0)) {
                                              fVar89 = *(float *)((long)unaff_x19 + 0x4cc);
                                              goto LAB_06134928;
                                            }
                                            goto LAB_0613719c;
                                          }
                                          goto LAB_0613705c;
                                        }
                                        if (lVar49 == 0) goto LAB_0613705c;
                                        if ((*(int *)(lVar49 + 0x18) == 1) ||
                                           (*(int *)(lVar49 + 0x18) == 0)) goto LAB_0613719c;
                                        if ((unaff_x19[0x74] == 0) ||
                                           (lVar32 = *(long *)(unaff_x19[0x74] + 0x58), lVar32 == 0)
                                           ) goto LAB_0613705c;
                                        if (*(uint *)(lVar32 + 0x18) <= uVar7) goto LAB_0613719c;
                                        lVar32 = lVar32 + (long)(int)uVar7 * 0x14;
                                        fStack00000000000000ac =
                                             (*(float *)(lVar49 + 0x28) + *(float *)(lVar49 + 0x34))
                                             * 0.5;
                                        fVar89 = fVar63 + 0.0 +
                                                 ((float)*(undefined8 *)(lVar49 + 0x20) +
                                                 (float)*(undefined8 *)(lVar49 + 0x2c)) * 0.5;
                                        fVar75 = (0.0 - ((fVar74 + *(float *)(lVar32 + 0x28) +
                                                         *(float *)(lVar32 + 0x30)) - fVar64) * 0.5)
                                                 + ((float)((ulong)*(undefined8 *)(lVar49 + 0x20) >>
                                                           0x20) +
                                                   (float)((ulong)*(undefined8 *)(lVar49 + 0x2c) >>
                                                          0x20)) * 0.5;
                                      }
                                      fStack00000000000000ac = fStack00000000000000ac + 0.0;
                                      auVar78 = ZEXT416((uint)fVar75);
                                      fStack00000000000000b0 = fVar89;
                                    }
                                    else if (iVar28 == 0x800) {
                                      if (lVar49 == 0) goto LAB_0613705c;
                                      if ((*(int *)(lVar49 + 0x18) == 1) ||
                                         (*(int *)(lVar49 + 0x18) == 0)) goto LAB_0613719c;
                                      fVar89 = (*(float *)(lVar49 + 0x28) +
                                               *(float *)(lVar49 + 0x34)) * 0.5;
                                      fStack00000000000000ac = fVar89 + 0.0;
                                      auVar78 = ZEXT416((uint)(((float)((ulong)*(undefined8 *)
                                                                                (lVar49 + 0x20) >>
                                                                       0x20) +
                                                               (float)((ulong)*(undefined8 *)
                                                                               (lVar49 + 0x2c) >>
                                                                      0x20)) * 0.5 + 0.0));
                                      fStack00000000000000b0 =
                                           ((float)*(undefined8 *)(lVar49 + 0x20) +
                                           (float)*(undefined8 *)(lVar49 + 0x2c)) * 0.5 +
                                           fVar63 + 0.0;
                                    }
                                    else {
                                      if (iVar28 == 0x1000) {
                                        if (lVar49 == 0) goto LAB_0613705c;
                                        if ((*(int *)(lVar49 + 0x18) == 1) ||
                                           (*(int *)(lVar49 + 0x18) == 0)) goto LAB_0613719c;
                                        fVar89 = *(float *)((long)unaff_x19 + 0x4fc);
                                        fVar76 = *(float *)((long)unaff_x19 + 0x4f4);
LAB_06134928:
                                        fVar74 = fVar74 + fVar89 + fVar76;
                                      }
                                      else {
                                        if (iVar28 != 0x2000) goto LAB_06134a08;
                                        if (lVar49 == 0) goto LAB_0613705c;
                                        if ((*(int *)(lVar49 + 0x18) == 1) ||
                                           (*(int *)(lVar49 + 0x18) == 0)) goto LAB_0613719c;
                                        fVar74 = *(float *)(unaff_x19 + 0x9a) - fVar74;
                                      }
                                      fVar89 = fVar63 + 0.0;
                                      auVar78._0_4_ =
                                           ((float)*(undefined8 *)(lVar49 + 0x24) +
                                           (float)*(undefined8 *)(lVar49 + 0x30)) * 0.5 +
                                           (0.0 - (fVar74 - fVar64) * 0.5);
                                      auVar78._4_4_ =
                                           ((float)((ulong)*(undefined8 *)(lVar49 + 0x24) >> 0x20) +
                                           (float)((ulong)*(undefined8 *)(lVar49 + 0x30) >> 0x20)) *
                                           0.5 + 0.0;
                                      auVar78._8_8_ = 0;
                                      fStack00000000000000ac = auVar78._4_4_;
                                      fStack00000000000000b0 =
                                           fVar89 + (*(float *)(lVar49 + 0x20) +
                                                    *(float *)(lVar49 + 0x2c)) * 0.5;
                                    }
LAB_06134a08:
                                    auVar73 = auVar78;
                                    fStack0000000000000100 = (float)FUN_02ffcdb8(0);
                                    auVar79 = auVar73;
                                    FUN_02ffcdb8(0);
                                    lVar49 = FUN_06141a60();
                                    if (lVar49 != 0) {
                                      FUN_0635fd58(lVar49,0);
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
                                      if (*(int *)(*plVar40 + 0xe4) == 0) {
                                        thunk_FUN_02df485c();
                                      }
                                      lVar49 = unaff_x19[0x74];
                                      if (lVar49 != 0) {
                                        iVar28 = *(int *)((long)unaff_x19 + 0x4a4);
                                        if (iVar28 < 1) {
                                          iStack00000000000000dc = 0;
                                          iVar45 = 0;
                                          goto LAB_06136c20;
                                        }
                                        lVar49 = *(long *)(lVar49 + 0x38);
                                        if (lVar49 != 0) {
                                          fStack0000000000000190 = auVar78._0_4_;
                                          fVar75 = 0.0;
                                          bVar11 = false;
                                          uVar20 = 0;
                                          uVar52 = 0;
                                          lVar32 = lVar49 + 0x20;
                                          fStack0000000000000120 =
                                               *(float *)(*(long *)(*plVar40 + 0xb8) + 0x1730);
                                          bVar14 = false;
                                          bVar10 = false;
                                          iStack00000000000000dc = 0;
                                          fStack0000000000000104 = auVar73._0_4_;
                                          uStack0000000000000048 = 0;
                                          bVar15 = false;
                                          iVar45 = 0;
                                          fStack0000000000000054 = 0.0;
                                          fStack000000000000011c = 0.0;
                                          fStack000000000000013c = 0.0;
                                          fStack000000000000009c = 0.0;
                                          fStack0000000000000078 = 0.0;
                                          uVar21 = 0;
                                          fStack0000000000000094 = fStack0000000000000074;
                                          fStack0000000000000098 = fStack000000000000006c;
                                          fStack00000000000000cc = fStack0000000000000074;
                                          fStack00000000000000d8 = fStack0000000000000074;
                                          fStack00000000000000f0 = fVar89;
                                          fStack00000000000000f4 = fStack000000000000006c;
                                          fStack00000000000000d0 = fStack000000000000006c;
                                          fVar89 = fStack0000000000000070;
                                          goto LAB_06134b8c;
                                        }
                                      }
                                    }
                                    goto LAB_0613705c;
                                  }
                                  if (*(uint *)(lVar32 + 0x18) <= uVar27) goto LAB_0613719c;
                                  uVar23 = *(uint *)(lVar32 + (long)(int)uVar27 * 0x10 + 0x24);
                                  if (uVar23 == 0) goto LAB_06134474;
                                  if (5 < iVar57) {
                                    uVar102 = FUN_05504f24(&stack0x000012ac,0);
                                    uVar35 = FUN_054e5768(&stack0x00001278,0);
                                    uVar102 = FUN_0536dcdc(*(undefined8 *)
                                                                                                                        
                                                  Method_System_HashCode_Combine<float,_float,_float,_float>__
                                                  ,uVar102,*(undefined8 *)
                                                                                                                        
                                                  Method_System_HashCode_Combine<ushort,_ushort,_ushort,_ushort>__
                                                  ,uVar35,0);
                                    if (*(int *)(*plVar54 + 0xe4) == 0) {
                                      thunk_FUN_02df485c(*plVar54);
                                    }
                                    FUN_0630bbe4(uVar102,0);
                                    uVar102 = CONCAT44(3,*(undefined4 *)((long)unaff_x19 + 0x4a4));
                                  }
                                  if (uVar23 != 0x1a) {
                                    uVar103 = uVar27;
                                    if ((uVar23 == 0x3c) &&
                                       (*(char *)((long)unaff_x19 + 0x33a) != '\0')) {
                                      *(undefined1 *)((long)unaff_x19 + 0x469) = 1;
                                      *(undefined4 *)((long)unaff_x19 + 0x65c) = 0;
                                      uVar30 = FUN_0617e944();
                                      if ((uVar30 & 1) != 0) {
                                        uVar27 = 0;
                                        uVar103 = 0;
                                        if (*(int *)((long)unaff_x19 + 0x65c) == 0)
                                        goto LAB_06133f74;
                                      }
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
                                    uVar27 = uVar103;
                                    if ((unaff_x19[0x74] == 0) ||
                                       (lVar32 = *(long *)(unaff_x19[0x74] + 0x38), lVar32 == 0))
                                    goto LAB_0613705c;
                                    uVar103 = *(uint *)((long)unaff_x19 + 0x4a4);
                                    if (*(uint *)(lVar32 + 0x18) <= uVar103) goto LAB_0613719c;
                                    lVar31 = lVar32 + 0x20;
                                    uVar101 = (uint)uVar102;
                                    lVar47 = unaff_x19[0x24];
                                    cVar37 = *(char *)(lVar31 + (long)(int)uVar103 * 0x178 + 0x34);
                                    *(undefined1 *)((long)unaff_x19 + 0x469) = 0;
                                    uVar24 = uVar103;
                                    if (uVar101 == uVar103) {
                                      uVar23 = (uint)((ulong)uVar102 >> 0x20);
                                      *(undefined4 *)((long)unaff_x19 + 0x65c) = 0;
                                      if (uVar23 == 0x2026) {
                                        *(long *)(lVar31 + (long)(int)uVar103 * 0x178 + 0x10) =
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
                                        puVar12 = Method_System_HashCode_Combine<ulong,_int>__;
                                        lVar32 = *(long *)
                                                  Method_System_HashCode_Combine<ulong,_int>__;
                                        if (*(int *)(lVar32 + 0xe4) == 0) {
                                          thunk_FUN_02df485c();
                                          lVar32 = *(long *)puVar12;
                                        }
                                        lVar32 = **(long **)(lVar32 + 0xb8);
                                        if (lVar32 == 0) goto LAB_0613705c;
                                        if (*(uint *)(lVar32 + 0x18) <= *(uint *)(unaff_x19 + 0xd4))
                                        goto LAB_0613719c;
                                        lVar32 = lVar32 + (long)(int)*(uint *)(unaff_x19 + 0xd4) *
                                                          0x38;
                                        *(int *)(lVar32 + 0x54) = *(int *)(lVar32 + 0x54) + 1;
                                        *(undefined1 *)(unaff_x19 + 0x65) = 1;
                                        uVar102 = CONCAT44(3,*(uint *)((long)unaff_x19 + 0x4a4) + 1)
                                        ;
                                        uVar24 = *(uint *)((long)unaff_x19 + 0x4a4);
                                      }
                                      else if (uVar23 == 3) {
                                        if ((unaff_x19[0x20] == 0) ||
                                           (lVar33 = FUN_0615ad34(unaff_x19[0x20],0), lVar33 == 0))
                                        goto LAB_0613705c;
                                        uVar35 = FUN_04f94af4(lVar33,3,*(undefined8 *)
                                                                                                                                                
                                                  Method_UnityEngine_XR_Interaction_Toolkit_UI_BodyUI_HandMenu_<OnEnable>b__80_3__
                                                  );
                                        if (*(uint *)(lVar32 + 0x18) <= uVar103) goto LAB_0613719c;
                                        *(undefined8 *)(lVar31 + (long)(int)uVar103 * 0x178 + 0x10)
                                             = uVar35;
                                        LeanTween__value();
                                        *(undefined1 *)(unaff_x19 + 0x65) = 1;
                                        uVar24 = *(uint *)((long)unaff_x19 + 0x4a4);
                                      }
                                    }
                                    plVar40 = (long *)Method_System_HashCode_Combine<ulong,_int>__;
                                    if (((int)uVar24 < *(int *)((long)unaff_x19 + 0x35c)) &&
                                       (uVar23 != 3)) {
                                      if ((unaff_x19[0x74] == 0) ||
                                         (lVar32 = *(long *)(unaff_x19[0x74] + 0x38), lVar32 == 0))
                                      goto LAB_0613705c;
                                      if (*(uint *)(lVar32 + 0x18) <= uVar24) goto LAB_0613719c;
                                      lVar32 = lVar32 + (long)(int)uVar24 * 0x178;
                                      *(undefined1 *)(lVar32 + 400) = 0;
                                      *(undefined2 *)(lVar32 + 0x24) = 0x200b;
                                      *(undefined4 *)(lVar32 + 0x5c) = 0;
                                      *(uint *)((long)unaff_x19 + 0x4a4) = uVar24 + 1;
                                    }
                                    else {
                                      iVar28 = *(int *)((long)unaff_x19 + 0x65c);
                                      if (iVar28 == 0) {
                                        uVar24 = *(uint *)((long)unaff_x19 + 0x284);
                                        if ((uVar24 >> 4 & 1) == 0) {
                                          if ((uVar24 >> 3 & 1) == 0) {
                                            fStack0000000000000138 = 1.0;
                                            if ((uVar24 >> 5 & 1) != 0) {
                                              if (*(int *)(*(long *)(PTR_DAT_069fb9c0 + 0x88) + 0xe4
                                                          ) == 0) {
                                                thunk_FUN_02df485c();
                                              }
                                              uVar30 = FUN_054585ac(uVar23,0);
                                              if ((uVar30 & 1) != 0) {
                                                if (*(int *)(*(long *)(PTR_DAT_069fb9c0 + 0x88) +
                                                            0xe4) == 0) {
                                                  thunk_FUN_02df485c();
                                                }
                                                uVar23 = FUN_05458834(uVar23,0);
                                                fStack0000000000000138 = fVar84;
                                                goto LAB_061308e8;
                                              }
                                            }
                                          }
                                          else {
                                            if (*(int *)(*(long *)(PTR_DAT_069fb9c0 + 0x88) + 0xe4)
                                                == 0) {
                                              thunk_FUN_02df485c();
                                            }
                                            uVar30 = FUN_0545850c(uVar23,0);
                                            fStack0000000000000138 = 1.0;
                                            if ((uVar30 & 1) != 0) {
                                              if (*(int *)(*(long *)(PTR_DAT_069fb9c0 + 0x88) + 0xe4
                                                          ) == 0) {
                                                thunk_FUN_02df485c();
                                              }
                                              uVar23 = FUN_054589ac(uVar23,0);
                                              goto LAB_061308e8;
                                            }
                                          }
                                        }
                                        else {
                                          if (*(int *)(*(long *)(PTR_DAT_069fb9c0 + 0x88) + 0xe4) ==
                                              0) {
                                            thunk_FUN_02df485c();
                                          }
                                          uVar30 = FUN_054585ac(uVar23,0);
                                          fStack0000000000000138 = 1.0;
                                          if ((uVar30 & 1) != 0) {
                                            if (*(int *)(*(long *)(PTR_DAT_069fb9c0 + 0x88) + 0xe4)
                                                == 0) {
                                              thunk_FUN_02df485c();
                                            }
                                            uVar23 = FUN_05458834(uVar23,0);
LAB_061308e8:
                                            uVar23 = uVar23 & 0xffff;
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
                                        plVar40 = (long *)
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
                                        uVar25 = *(uint *)((long)unaff_x19 + 0x4a4);
                                        uVar24 = *(uint *)(lVar32 + 0x18);
                                        if (uVar24 <= uVar25) goto LAB_0613719c;
                                        *(undefined4 *)(unaff_x19 + 0x24) =
                                             *(undefined4 *)
                                              (lVar32 + 0x20 + (long)(int)uVar25 * 0x178 + 0x30);
                                        if (uVar101 == uVar103) {
                                          lVar31 = unaff_x19[0x91];
                                          if (lVar31 == 0) goto LAB_0613705c;
                                          if (*(uint *)(lVar31 + 0x18) <= uVar27) goto LAB_0613719c;
                                          if ((*(int *)(lVar31 + (long)(int)uVar27 * 0x10 + 0x24) !=
                                               10) || (uVar25 == *(uint *)(unaff_x19 + 0x95)))
                                          goto 
                                          UnityEngine_XR_Interaction_Toolkit_Locomotion_Teleportation_TeleportationProvider__set_forwardTransformation
                                          ;
                                          if (uVar24 <= uVar25 - 1) goto LAB_0613719c;
                                          lVar31 = unaff_x19[0x20];
                                          if (lVar31 == 0) goto LAB_0613705c;
                                          fVar89 = *(float *)(lVar32 + 0x20 +
                                                              (long)(int)(uVar25 - 1) * 0x178 + 0x38
                                                             );
                                        }
                                        else {

                                          UnityEngine_XR_Interaction_Toolkit_Locomotion_Teleportation_TeleportationProvider__set_forwardTransformation
                                          :
                                          lVar31 = unaff_x19[0x20];
                                          if (lVar31 == 0) goto LAB_0613705c;
                                          fVar89 = *(float *)(unaff_x19 + 0x42);
                                        }
                                        fVar93 = (float)FUN_063ecbd8(lVar31 + 0x28,0);
                                        if (unaff_x19[0x20] == 0) goto LAB_0613705c;
                                        fVar69 = (float)FUN_063ecbe0(unaff_x19[0x20] + 0x28,0);
                                        fVar65 = fVar75;
                                        if (*(char *)((long)unaff_x19 + 0x33e) != '\0') {
                                          fVar65 = fVar66;
                                        }
                                        if (uVar101 == uVar103) {
                                          fStack0000000000000124 = 0.0;
                                          fVar67 = 0.0;
                                          if (uVar23 != 0x2026) goto LAB_06130a78;
                                        }
                                        else {
LAB_06130a78:
                                          if (unaff_x19[0x20] == 0) goto LAB_0613705c;
                                          fVar67 = (float)FUN_063ecc08(unaff_x19[0x20] + 0x28,0);
                                          if (unaff_x19[0x20] == 0) goto LAB_0613705c;
                                          fStack0000000000000124 =
                                               (float)FUN_063ecc38(unaff_x19[0x20] + 0x28,0);
                                        }
                                        lVar32 = unaff_x19[0xcc];
                                        if ((lVar32 == 0) || (*(long *)(lVar32 + 0x20) == 0))
                                        goto LAB_0613705c;
                                        fVar96 = *(float *)((long)unaff_x19 + 0x43c);
                                        fVar66 = *(float *)(lVar32 + 0x2c);
                                        fVar61 = (float)FUN_063ed0d8(*(long *)(lVar32 + 0x20),0);
                                        if (unaff_x19[0x20] == 0) goto LAB_0613705c;
                                        fVar68 = (float)FUN_063ecc30(unaff_x19[0x20] + 0x28,0);
                                        if (unaff_x19[0x20] == 0) goto LAB_0613705c;
                                        fVar98 = *(float *)((long)unaff_x19 + 0x43c);
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
                                        fVar65 = ((fStack0000000000000138 * fVar89) / fVar93) *
                                                 fVar69 * fVar65;
                                        fVar61 = fVar65 * fVar96 * fVar66 * fVar61;
                                        fStack000000000000016c =
                                             fVar65 * fVar68 * fVar98 * fStack000000000000016c;
                                        *(float *)(lVar31 + 0x15c) = fVar61;
                                        uVar24 = *(uint *)(unaff_x19 + 0x24);
                                        if (uVar24 == 0) {
                                          fVar93 = *(float *)(unaff_x19 + 0xc6);
                                        }
                                        else {
                                          lVar31 = unaff_x19[0xe4];
                                          if (lVar31 == 0) goto LAB_0613705c;
                                          if (*(uint *)(lVar31 + 0x18) <= uVar24) goto LAB_0613719c;
                                          lVar31 = *(long *)(lVar31 + (long)(int)uVar24 * 8 + 0x20);
                                          if (lVar31 == 0) goto LAB_0613705c;
                                          fVar93 = *(float *)(lVar31 + 0x54);
                                        }
LAB_06130bac:
                                        fVar66 = 0.0;
                                        if (uVar23 != 3 && uVar23 != 0xad) {
                                          fVar66 = fVar61;
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
                                            plVar54 = *(long **)(lVar32 + (long)(int)*(uint *)((long
                                                  )unaff_x19 + 0x4a4) * 0x178 + 0x30);
                                            if (plVar54 != (long *)0x0) {
                                              bVar16 = *(byte *)(*(long *)
                                                  Method_System_Security_Cryptography_HashAlgorithm_ComputeHash__
                                                  + 0x130);
                                              if ((*(byte *)(*plVar54 + 0x130) < bVar16) ||
                                                 (*(long *)(*(long *)(*plVar54 + 200) +
                                                            (ulong)bVar16 * 8 + -8) !=
                                                  *(long *)
                                                  Method_System_Security_Cryptography_HashAlgorithm_ComputeHash__
                                                 )) {
                    /* WARNING: Subroutine does not return */
                                                FUN_02d96be0(plVar54);
                                              }
                                              plVar40 = (long *)plVar54[3];
                                              if (plVar40 == (long *)0x0) {
                                                plVar40 = (long *)0x0;
                                                *plVar2 = 0;
                                              }
                                              else {
                                                lVar32 = *(long *)
                                                  Method_System_Security_Cryptography_HashAlgorithm_ComputeHash__
                                                ;
                                                bVar16 = *(byte *)(lVar32 + 0x130);
                                                if (*(byte *)(*plVar40 + 0x130) < bVar16) {
                                                  plVar55 = (long *)0x0;
                                                }
                                                else {
                                                  plVar55 = plVar40;
                                                  if (*(long *)(*(long *)(*plVar40 + 200) +
                                                                (ulong)bVar16 * 8 + -8) != lVar32) {
                                                    plVar55 = (long *)0x0;
                                                  }
                                                }
                                                *plVar2 = (long)plVar55;
                                                if (*(byte *)(*plVar40 + 0x130) < bVar16) {
                                                  plVar40 = (long *)0x0;
                                                }
                                                else if (*(long *)(*(long *)(*plVar40 + 200) +
                                                                   (ulong)bVar16 * 8 + -8) != lVar32
                                                        ) {
                                                  plVar40 = (long *)0x0;
                                                }
                                              }
                                              LeanTween__value(plVar2,plVar40);
                                              lVar32 = plVar54[5];
                                              *(int *)((long)unaff_x19 + 0x6bc) = (int)lVar32;
                                              puVar12 = Method_System_HashCode_Combine<ulong,_int>__
                                              ;
                                              if (uVar23 == 0x3c) {
                                                uVar23 = (int)lVar32 + 0xe000;
                                              }
                                              else {
                                                lVar32 = *(long *)
                                                  Method_System_HashCode_Combine<ulong,_int>__;
                                                if (*(int *)(lVar32 + 0xe4) == 0) {
                                                  thunk_FUN_02df485c();
                                                  lVar32 = *(long *)puVar12;
                                                }
                                                *(undefined4 *)((long)unaff_x19 + 0x1d4) =
                                                     *(undefined4 *)
                                                      (*(long *)(lVar32 + 0xb8) + 0x68);
                                              }
                                              if (unaff_x19[0x20] != 0) {
                                                fVar61 = *(float *)(unaff_x19 + 0x42);
                                                memmove(&stack0x000011e0,
                                                        (void *)(unaff_x19[0x20] + 0x28),0x60);
                                                fVar89 = (float)FUN_063ecbd8(&stack0x000011e0,0);
                                                if (unaff_x19[0x20] != 0) {
                                                  memmove(&stack0x000011e0,
                                                          (void *)(unaff_x19[0x20] + 0x28),0x60);
                                                  fVar65 = (float)FUN_063ecbe0(&stack0x000011e0,0);
                                                  fVar93 = fVar75;
                                                  if (*(char *)((long)unaff_x19 + 0x33e) != '\0') {
                                                    fVar93 = fVar66;
                                                  }
                                                  if (unaff_x19[0xd6] == 0) goto LAB_0613705c;
                                                  fVar93 = (fVar61 / fVar89) * fVar65 * fVar93;
                                                  fVar89 = (float)FUN_063ecbd8(unaff_x19[0xd6] +
                                                                               0x28,0);
                                                  fVar61 = *(float *)(unaff_x19 + 0x42);
                                                  if (fVar89 <= 0.0) {
                                                    if (unaff_x19[0x20] == 0) goto LAB_0613705c;
                                                    fVar89 = (float)FUN_063ecbd8(unaff_x19[0x20] +
                                                                                 0x28,0);
                                                    if (unaff_x19[0x20] == 0) goto LAB_0613705c;
                                                    fVar65 = (float)FUN_063ecbe0(unaff_x19[0x20] +
                                                                                 0x28,0);
                                                    fStack0000000000000124 = fVar75;
                                                    if (*(char *)((long)unaff_x19 + 0x33e) != '\0')
                                                    {
                                                      fStack0000000000000124 = fVar66;
                                                    }
                                                    if (unaff_x19[0x20] == 0) goto LAB_0613705c;
                                                    fVar66 = (float)FUN_063ecc08(unaff_x19[0x20] +
                                                                                 0x28,0);
                                                    if (plVar54[4] == 0) goto LAB_0613705c;
                                                    FUN_063ed09c(&stack0x000012b0,plVar54[4],0);
                                                    fVar69 = (float)FUN_063ececc(&stack0x000011c0,0)
                                                    ;
                                                    if (plVar54[4] == 0) goto LAB_0613705c;
                                                    fVar68 = *(float *)((long)plVar54 + 0x2c);
                                                    fVar96 = (float)FUN_063ed0d8(plVar54[4],0);
                                                    if (unaff_x19[0x20] == 0) goto LAB_0613705c;
                                                    fVar67 = (float)FUN_063ecc08(unaff_x19[0x20] +
                                                                                 0x28,0);
                                                    if (unaff_x19[0x20] == 0) goto LAB_0613705c;
                                                    fVar98 = (float)FUN_063ecc30(unaff_x19[0x20] +
                                                                                 0x28,0);
                                                    if (unaff_x19[0x20] == 0) goto LAB_0613705c;
                                                    fVar70 = *(float *)((long)unaff_x19 + 0x43c);
                                                    fStack000000000000016c =
                                                         (float)FUN_063ecbe0(unaff_x19[0x20] + 0x28,
                                                                             0);
                                                    if (unaff_x19[0x20] == 0) goto LAB_0613705c;
                                                    fStack0000000000000124 =
                                                         (fVar61 / fVar89) * fVar65 *
                                                         fStack0000000000000124;
                                                    fVar61 = fStack0000000000000124 *
                                                             (fVar66 / fVar69) * fVar68 * fVar96;
                                                    fStack0000000000000124 =
                                                         fStack0000000000000124 / fVar61;
                                                    fStack000000000000016c =
                                                         fVar93 * fVar98 * fVar70 *
                                                         fStack000000000000016c;
                                                    fVar67 = fStack0000000000000124 * fVar67;
                                                    fVar89 = (float)FUN_063ecc38(unaff_x19[0x20] +
                                                                                 0x28,0);
                                                    fStack0000000000000124 =
                                                         fStack0000000000000124 * fVar89;
                                                  }
                                                  else {
                                                    if (*plVar2 == 0) goto LAB_0613705c;
                                                    fVar89 = (float)FUN_063ecbd8(*plVar2 + 0x28,0);
                                                    if (*plVar2 == 0) goto LAB_0613705c;
                                                    fVar65 = (float)FUN_063ecbe0(*plVar2 + 0x28,0);
                                                    if (plVar54[4] == 0) goto LAB_0613705c;
                                                    fVar96 = *(float *)((long)plVar54 + 0x2c);
                                                    fVar69 = fVar75;
                                                    if (*(char *)((long)unaff_x19 + 0x33e) != '\0')
                                                    {
                                                      fVar69 = fVar66;
                                                    }
                                                    fVar66 = (float)FUN_063ed0d8(plVar54[4],0);
                                                    if (unaff_x19[0xd6] == 0) goto LAB_0613705c;
                                                    fVar67 = (float)FUN_063ecc08(unaff_x19[0xd6] +
                                                                                 0x28,0);
                                                    if (*plVar2 == 0) goto LAB_0613705c;
                                                    fVar68 = (float)FUN_063ecc30(*plVar2 + 0x28,0);
                                                    if (*plVar2 == 0) goto LAB_0613705c;
                                                    fVar98 = *(float *)((long)unaff_x19 + 0x43c);
                                                    fStack000000000000016c =
                                                         (float)FUN_063ecbe0(*plVar2 + 0x28,0);
                                                    if (unaff_x19[0xd6] == 0) goto LAB_0613705c;
                                                    fStack000000000000016c =
                                                         fVar93 * fVar68 * fVar98 *
                                                         fStack000000000000016c;
                                                    fVar61 = (fVar61 / fVar89) * fVar65 * fVar69 *
                                                             fVar96 * fVar66;
                                                    fStack0000000000000124 =
                                                         (float)FUN_063ecc38(unaff_x19[0xd6] + 0x28,
                                                                             0);
                                                  }
                                                  unaff_x19[0xcc] = (long)plVar54;
                                                  LeanTween__value(plVar3,plVar54);
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
                                                  *(float *)(lVar32 + 0x15c) = fVar61;
                                                  LeanTween__value();
                                                  lVar32 = unaff_x19[0x74];
                                                  if ((lVar32 != 0) &&
                                                     (lVar31 = *(long *)(lVar32 + 0x38), lVar31 != 0
                                                     )) {
                                                    if (*(uint *)((long)unaff_x19 + 0x4a4) <
                                                        *(uint *)(lVar31 + 0x18)) {
                                                      fVar93 = 0.0;
                                                      *(int *)(lVar31 + (long)(int)*(uint *)((long)
                                                  unaff_x19 + 0x4a4) * 0x178 + 0x50) =
                                                       (int)unaff_x19[0x24];
                                                  *(int *)(unaff_x19 + 0x24) = (int)lVar47;
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
                                        fVar66 = 0.0;
                                        if (uVar23 != 3 && uVar23 != 0xad) {
                                          fVar66 = fVar61;
                                        }
                                        fStack000000000000016c = 0.0;
                                        if (lVar32 == 0) goto LAB_0613705c;
                                        fVar67 = 0.0;
                                        fStack0000000000000124 = 0.0;
                                      }
                                      lVar32 = *(long *)(lVar32 + 0x38);
                                      if (lVar32 == 0) goto LAB_0613705c;
                                      if (*(uint *)(lVar32 + 0x18) <=
                                          *(uint *)((long)unaff_x19 + 0x4a4)) goto LAB_0613719c;
                                      lVar32 = lVar32 + (long)(int)*(uint *)((long)unaff_x19 + 0x4a4
                                                                            ) * 0x178;
                                      *(short *)(lVar32 + 0x24) = (short)uVar23;
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
                                      if (uVar23 >> 0x10 == 0) {
                                        if (*(int *)(*(long *)(PTR_DAT_069fb9c0 + 0x88) + 0xe4) == 0
                                           ) {
                                          thunk_FUN_02df485c();
                                        }
                                        uVar24 = FUN_05455f40(uVar23,0);
                                        uVar24 = uVar24 & 1;
                                      }
                                      else {
                                        uVar24 = 0;
                                      }
                                      fVar65 = *(float *)(unaff_x19 + 0x5a);
                                      if (((uVar20 & 1) != 0) &&
                                         (*(int *)((long)unaff_x19 + 0x65c) == 0)) {
                                        if (*plVar3 == 0) goto LAB_0613705c;
                                        iVar28 = *(int *)((long)unaff_x19 + 0x4a4);
                                        uVar25 = *(uint *)(*plVar3 + 0x28);
                                        if (iVar28 < (int)uVar6) {
                                          if ((unaff_x19[0x74] == 0) ||
                                             (lVar32 = *(long *)(unaff_x19[0x74] + 0x38),
                                             lVar32 == 0)) goto LAB_0613705c;
                                          uVar26 = iVar28 + 1;
                                          if (*(uint *)(lVar32 + 0x18) <= uVar26) goto LAB_0613719c;
                                          if (*(int *)(lVar32 + 0x20 + (long)(int)uVar26 * 0x178) ==
                                              0) {
                                            lVar32 = *(long *)(lVar32 + 0x20 +
                                                               (long)(int)uVar26 * 0x178 + 0x10);
                                            if ((((lVar32 == 0) || (unaff_x19[0x20] == 0)) ||
                                                (lVar31 = *(long *)(unaff_x19[0x20] + 0x178),
                                                lVar31 == 0)) ||
                                               (lVar31 = *(long *)(lVar31 + 0x40), lVar31 == 0))
                                            goto LAB_0613705c;
                                            uVar30 = FUN_04f7a520(lVar31,uVar25 | *(int *)(lVar32 + 
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
                                                fVar65 = 0.0;
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
                                          uVar26 = *(uint *)(lVar32 + 0x28);
                                          lVar32 = FUN_06177770();
                                          if ((lVar32 == 0) ||
                                             (lVar32 = *(long *)(lVar32 + 0x38), lVar32 == 0))
                                          goto LAB_0613705c;
                                          uVar43 = *(int *)((long)unaff_x19 + 0x4a4) - 1;
                                          if (*(uint *)(lVar32 + 0x18) <= uVar43) goto LAB_0613719c;
                                          if (*(int *)(lVar32 + (long)(int)uVar43 * 0x178 + 0x20) ==
                                              0) {
                                            if (((unaff_x19[0x20] == 0) ||
                                                (lVar32 = *(long *)(unaff_x19[0x20] + 0x178),
                                                lVar32 == 0)) ||
                                               (lVar32 = *(long *)(lVar32 + 0x40), lVar32 == 0))
                                            goto LAB_0613705c;
                                            uVar30 = FUN_04f7a520(lVar32,uVar26 | uVar25 << 0x10,
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
                                                fVar65 = 0.0;
                                              }
                                            }
                                          }
                                        }
                                      }
                                      if ((unaff_x19[0x74] == 0) ||
                                         (lVar32 = *(long *)(unaff_x19[0x74] + 0x38), lVar32 == 0))
                                      goto LAB_0613705c;
                                      uVar25 = *(uint *)((long)unaff_x19 + 0x4a4);
                                      uVar19 = FUN_063f141c(&stack0x00001250,0);
                                      if (*(uint *)(lVar32 + 0x18) <= uVar25) goto LAB_0613719c;
                                      *(undefined4 *)(lVar32 + (long)(int)uVar25 * 0x178 + 0x154) =
                                           uVar19;
                                      if (*(int *)(*(long *)Method_System_HashCode_Add<Color>__ +
                                                  0xe4) == 0) {
                                        thunk_FUN_02df485c();
                                      }
                                      uVar30 = FUN_061a92c4(uVar23,0);
                                      plVar54 = (long *)PTR_DAT_069feab8;
                                      uVar25 = *(uint *)((long)unaff_x19 + 0x4a4);
                                      uVar50 = (ulong)uVar25;
                                      if ((uVar30 & 1) == 0) {
                                        if (0 < (int)uVar25) {
                                          if ((((uVar21 & 1) == 0) ||
                                              (uVar26 = *(uint *)((long)unaff_x19 + 0x32c),
                                              uVar26 == 0x80000000)) || (uVar26 != uVar25 - 1)) {
                                            if ((uVar22 & 1) == 0) {
                                              bVar14 = false;
                                            }
                                            else {
                                              lVar32 = uVar50 * 0x178 + 0x144;
                                              uVar56 = uVar50;
                                              do {
                                                uVar56 = uVar56 - 1;
                                                iVar28 = (int)uVar50;
                                                uVar25 = iVar28 - 1;
                                                uVar50 = (ulong)uVar25;
                                                if ((iVar28 < 1) ||
                                                   (uVar56 == *(uint *)((long)unaff_x19 + 0x32c))) {
                                                  bVar14 = false;
                                                  goto LAB_06131650;
                                                }
                                                if ((unaff_x19[0x74] == 0) ||
                                                   (lVar31 = *(long *)(unaff_x19[0x74] + 0x38),
                                                   lVar31 == 0)) goto LAB_0613705c;
                                                if (*(uint *)(lVar31 + 0x18) <= uVar56)
                                                goto LAB_0613719c;
                                                lVar31 = *(long *)(lVar31 + lVar32 + -0x28c);
                                                if ((lVar31 == 0) ||
                                                   (lVar31 = *(long *)(lVar31 + 0x20), lVar31 == 0))
                                                goto LAB_0613705c;
                                                uVar26 = FUN_063ed08c(lVar31,0);
                                                if ((*plVar3 == 0) ||
                                                   (((unaff_x19[0x20] == 0 ||
                                                     (lVar31 = *(long *)(unaff_x19[0x20] + 0x178),
                                                     lVar31 == 0)) ||
                                                    (lVar31 = *(long *)(lVar31 + 0x50), lVar31 == 0)
                                                    ))) goto LAB_0613705c;
                                                uVar34 = FUN_04f8f4b4(lVar31,uVar26 | *(int *)(*
                                                  plVar3 + 0x28) << 0x10,&stack0x00001140,
                                                  *(undefined8 *)
                                                                                                      
                                                  Method_UnityEngine_XR_Interaction_Toolkit_UI_BodyUI_HandMenu_<OnEnable>b__80_2__
                                                  );
                                                lVar32 = lVar32 + -0x178;
                                              } while ((uVar34 & 1) == 0);
                                              if ((unaff_x19[0x74] == 0) ||
                                                 (lVar31 = *(long *)(unaff_x19[0x74] + 0x38),
                                                 lVar31 == 0)) goto LAB_0613705c;
                                              if (*(uint *)(lVar31 + 0x18) <= uVar25)
                                              goto LAB_0613719c;
                                              FUN_063f1404(((*(float *)(lVar31 + lVar32 + -0xc) -
                                                            *(float *)(unaff_x19 + 0xcb)) / fVar66 +
                                                           0.0) - 0.0,0,0,&stack0x00001250,0);
                                              FUN_063f1414(&stack0x00001250,0);
                                              bVar14 = true;
                                              fVar65 = 0.0;
                                            }
LAB_06131650:
                                            plVar54 = (long *)PTR_DAT_069feab8;
                                            if ((uVar21 & 1) != 0) {
                                              uVar25 = *(uint *)((long)unaff_x19 + 0x32c);
                                              if (uVar25 == 0x80000000) {
                                                bVar14 = true;
                                              }
                                              if (!bVar14) {
                                                if ((unaff_x19[0x74] == 0) ||
                                                   (lVar32 = *(long *)(unaff_x19[0x74] + 0x38),
                                                   lVar32 == 0)) goto LAB_0613705c;
                                                if (*(uint *)(lVar32 + 0x18) <= uVar25)
                                                goto LAB_0613719c;
                                                lVar32 = *(long *)(lVar32 + (long)(int)uVar25 *
                                                                            0x178 + 0x30);
                                                if ((lVar32 == 0) ||
                                                   (lVar32 = *(long *)(lVar32 + 0x20), lVar32 == 0))
                                                goto LAB_0613705c;
                                                uVar25 = FUN_063ed08c(lVar32,0);
                                                if ((*plVar3 == 0) ||
                                                   (((unaff_x19[0x20] == 0 ||
                                                     (lVar32 = *(long *)(unaff_x19[0x20] + 0x178),
                                                     lVar32 == 0)) ||
                                                    (lVar32 = *(long *)(lVar32 + 0x48), lVar32 == 0)
                                                    ))) goto LAB_0613705c;
                                                uVar50 = FUN_04f88174(lVar32,uVar25 | *(int *)(*
                                                  plVar3 + 0x28) << 0x10,&stack0x00001128,
                                                  *(undefined8 *)
                                                                                                      
                                                  Method_UnityEngine_XR_Interaction_Toolkit_UI_BodyUI_HandMenu_<OnEnable>b__80_1__
                                                  );
                                                if ((uVar50 & 1) != 0) {
                                                  if ((unaff_x19[0x74] != 0) &&
                                                     (lVar32 = *(long *)(unaff_x19[0x74] + 0x38),
                                                     lVar32 != 0)) {
                                                    if (*(uint *)((long)unaff_x19 + 0x32c) <
                                                        *(uint *)(lVar32 + 0x18)) {
                                                      FUN_063f1404(((*(float *)(lVar32 + (long)(int)
                                                  *(uint *)((long)unaff_x19 + 0x32c) * 0x178 + 0x138
                                                  ) - *(float *)(unaff_x19 + 0xcb)) / fVar66 + 0.0)
                                                  - 0.0,0,0,&stack0x00001250,0);
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
                                            if (*(uint *)(lVar32 + 0x18) <= uVar26)
                                            goto LAB_0613719c;
                                            lVar32 = *(long *)(lVar32 + (long)(int)uVar26 * 0x178 +
                                                              0x30);
                                            if ((lVar32 == 0) ||
                                               (lVar32 = *(long *)(lVar32 + 0x20), lVar32 == 0))
                                            goto LAB_0613705c;
                                            uVar25 = FUN_063ed08c(lVar32,0);
                                            if ((*plVar3 == 0) ||
                                               (((unaff_x19[0x20] == 0 ||
                                                 (lVar32 = *(long *)(unaff_x19[0x20] + 0x178),
                                                 lVar32 == 0)) ||
                                                (lVar32 = *(long *)(lVar32 + 0x48), lVar32 == 0))))
                                            goto LAB_0613705c;
                                            uVar50 = FUN_04f88174(lVar32,uVar25 | *(int *)(*plVar3 +
                                                                                          0x28) <<
                                                                                  0x10,
                                                                  &stack0x00001158,
                                                                  *(undefined8 *)
                                                                                                                                      
                                                  Method_UnityEngine_XR_Interaction_Toolkit_UI_BodyUI_HandMenu_<OnEnable>b__80_1__
                                                  );
                                            if ((uVar50 & 1) != 0) {
                                              if ((unaff_x19[0x74] == 0) ||
                                                 (lVar32 = *(long *)(unaff_x19[0x74] + 0x38),
                                                 lVar32 == 0)) goto LAB_0613705c;
                                              if (*(uint *)(lVar32 + 0x18) <=
                                                  *(uint *)((long)unaff_x19 + 0x32c))
                                              goto LAB_0613719c;
                                              FUN_063f1404(((*(float *)(lVar32 + (long)(int)*(uint *
                                                  )((long)unaff_x19 + 0x32c) * 0x178 + 0x138) -
                                                  *(float *)(unaff_x19 + 0xcb)) / fVar66 + 0.0) -
                                                  0.0,0,0,&stack0x00001250,0);
LAB_0613174c:
                                              FUN_063f1414(&stack0x00001250,0);
                                              fVar65 = 0.0;
                                            }
                                          }
                                        }
                                      }
                                      else {
                                        *(uint *)((long)unaff_x19 + 0x32c) = uVar25;
                                      }
                                      fVar89 = (float)
                                                  UnityEngine_UIElements_UIR_CommandList__ApplyBatchProps
                                                            (&stack0x00001250,0);
                                      fVar69 = (float)
                                                  UnityEngine_UIElements_UIR_CommandList__ApplyBatchProps
                                                            (&stack0x00001250,0);
                                      if ((char)unaff_x19[0x1e] != '\0') {
                                        fVar68 = *(float *)(unaff_x19 + 0xcb);
                                        fVar96 = (float)FUN_063ecee4(&stack0x00001260,0);
                                        fVar68 = fVar68 - fVar66 * fVar96 * (1.0 - *(float *)(
                                                  unaff_x19 + 0x60));
                                        *(float *)(unaff_x19 + 0xcb) = fVar68;
                                        if ((uVar24 != 0) || (uVar23 == 0x200b)) {
                                          *(float *)(unaff_x19 + 0xcb) =
                                               fVar68 - fVar80 * *(float *)(unaff_x19 + 0x5c);
                                        }
                                      }
                                      fVar68 = *(float *)(unaff_x19 + 0x5b);
                                      fVar96 = 0.0;
                                      if (fVar68 != 0.0) {
                                        if (((*(char *)((long)unaff_x19 + 0x2dc) == '\0') ||
                                            (0x3a < uVar23)) ||
                                           (fVar96 = 0.25,
                                           (1L << ((ulong)uVar23 & 0x3f) & 0x400500000000000U) == 0)
                                           ) {
                                          fVar96 = 0.5;
                                        }
                                        fVar98 = (float)FUN_063ecec4(&stack0x00001260,0);
                                        fVar70 = (float)FUN_063eced4(&stack0x00001260,0);
                                        fVar96 = (1.0 - *(float *)(unaff_x19 + 0x60)) *
                                                 (fVar68 * fVar96 - fVar66 * (fVar98 * 0.5 + fVar70)
                                                 );
                                        *(float *)(unaff_x19 + 0xcb) =
                                             fVar96 + *(float *)(unaff_x19 + 0xcb);
                                      }
                                      if (((cVar37 == '\0') &&
                                          (*(int *)((long)unaff_x19 + 0x65c) == 0)) &&
                                         ((*(byte *)((long)unaff_x19 + 0x284) & 1) != 0)) {
                                        lVar32 = unaff_x19[0x23];
                                        if (*(int *)(*(long *)PTR_DAT_069fb990 + 0xe4) == 0) {
                                          thunk_FUN_02df485c();
                                        }
                                        uVar50 = FUN_0634eb94(lVar32,0,0);
                                        fVar98 = 0.0;
                                        if ((uVar50 & 1) != 0) {
                                          lVar32 = unaff_x19[0x23];
                                          if (*(int *)(*plVar54 + 0xe4) == 0) {
                                            thunk_FUN_02df485c();
                                          }
                                          if (lVar32 == 0) goto LAB_0613705c;
                                          uVar50 = FUN_0631f7c0(lVar32,*(undefined4 *)
                                                                        (*(long *)(*plVar54 + 0xb8)
                                                                        + 0x6c),0);
                                          if ((uVar50 & 1) != 0) {
                                            lVar32 = unaff_x19[0x23];
                                            if (*(int *)(*plVar54 + 0xe4) == 0) {
                                              thunk_FUN_02df485c();
                                            }
                                            if (lVar32 == 0) goto LAB_0613705c;
                                            fVar68 = (float)thunk_FUN_06321abc(lVar32,*(undefined4 *
                                                                                       )(*(long *)(*
                                                  plVar54 + 0xb8) + 0x6c),0);
                                            if ((unaff_x19[0x20] == 0) || (unaff_x19[0x23] == 0))
                                            goto LAB_0613705c;
                                            fVar70 = *(float *)(unaff_x19[0x20] + 0x1a8);
                                            fVar98 = (float)thunk_FUN_06321abc(unaff_x19[0x23],
                                                                               *(undefined4 *)
                                                                                (*(long *)(*plVar54 
                                                  + 0xb8) + 0xe4),0);
                                            fVar98 = fVar98 * fVar68 * fVar70 * 0.25;
                                            if (fVar68 < fVar93 + fVar98) {
                                              fVar93 = fVar68 - fVar98;
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
                                        uVar50 = FUN_0634eb94(lVar32,0,0);
                                        fStack00000000000000f0 = 0.0;
                                        if ((uVar50 & 1) != 0) {
                                          lVar32 = unaff_x19[0x23];
                                          if (*(int *)(*plVar54 + 0xe4) == 0) {
                                            thunk_FUN_02df485c();
                                          }
                                          if (lVar32 == 0) goto LAB_0613705c;
                                          uVar50 = FUN_0631f7c0(lVar32,*(undefined4 *)
                                                                        (*(long *)(*plVar54 + 0xb8)
                                                                        + 0x6c),0);
                                          if ((uVar50 & 1) != 0) {
                                            lVar32 = unaff_x19[0x23];
                                            if (*(int *)(*plVar54 + 0xe4) == 0) {
                                              thunk_FUN_02df485c();
                                            }
                                            if (lVar32 == 0) goto LAB_0613705c;
                                            uVar50 = FUN_0631f7c0(lVar32,*(undefined4 *)
                                                                          (*(long *)(*plVar54 + 0xb8
                                                                                    ) + 0xe4),0);
                                            if ((uVar50 & 1) != 0) {
                                              lVar32 = unaff_x19[0x23];
                                              if (*(int *)(*plVar54 + 0xe4) == 0) {
                                                thunk_FUN_02df485c();
                                              }
                                              if (lVar32 != 0) {
                                                fVar68 = (float)thunk_FUN_06321abc(lVar32,*(
                                                  undefined4 *)(*(long *)(*plVar54 + 0xb8) + 0x6c),0
                                                  );
                                                if ((unaff_x19[0x20] != 0) && (unaff_x19[0x23] != 0)
                                                   ) {
                                                  fVar70 = *(float *)(unaff_x19[0x20] + 0x1a0);
                                                  fVar98 = (float)thunk_FUN_06321abc(unaff_x19[0x23]
                                                                                     ,*(undefined4 *
                                                                                       )(*(long *)(*
                                                  plVar54 + 0xb8) + 0xe4),0);
                                                  fVar98 = fVar98 * fVar68 * fVar70 * 0.25;
                                                  if (fVar68 < fVar93 + fVar98) {
                                                    fVar93 = fVar68 - fVar98;
                                                  }
                                                  goto LAB_06131780;
                                                }
                                              }
                                              goto LAB_0613705c;
                                            }
                                          }
                                        }
                                        fVar98 = 0.0;
                                      }
LAB_06131780:
                                      fVar87 = *(float *)(unaff_x19 + 0xcb);
                                      fVar68 = (float)FUN_063eced4(&stack0x00001260,0);
                                      fVar91 = *(float *)((long)unaff_x19 + 0x47c);
                                      fVar70 = (float)FUN_063f13fc(&stack0x00001250,0);
                                      fVar87 = fVar87 + (1.0 - *(float *)(unaff_x19 + 0x60)) *
                                                        fVar66 * (fVar70 + ((fVar68 * fVar91 -
                                                                            fVar93) - fVar98));
                                      fVar68 = (float)FUN_063ecedc(&stack0x00001260,0);
                                      fVar70 = (float)
                                                  UnityEngine_UIElements_UIR_CommandList__ApplyBatchProps
                                                            (&stack0x00001250,0);
                                      fStack0000000000000170 =
                                           *(float *)((long)unaff_x19 + 0x634) +
                                           ((fStack000000000000016c +
                                            fVar66 * (fVar93 + fVar68 + fVar70)) -
                                           *(float *)((long)unaff_x19 + 0x4ec));
                                      fVar68 = (float)FUN_063ececc(&stack0x00001260,0);
                                      fVar68 = fStack0000000000000170 -
                                               fVar66 * (fVar93 + fVar93 + fVar68);
                                      fVar70 = (float)FUN_063ecec4(&stack0x00001260,0);
                                      fVar70 = fVar87 + (1.0 - *(float *)(unaff_x19 + 0x60)) *
                                                        fVar66 * (fVar98 + fVar98 +
                                                                 fVar93 + fVar93 +
                                                                 fVar70 * *(float *)((long)unaff_x19
                                                                                    + 0x47c));
                                      fVar91 = fVar87;
                                      fVar88 = fVar70;
                                      if (((*(int *)((long)unaff_x19 + 0x65c) == 0) &&
                                          (cVar37 == '\0')) &&
                                         ((*(byte *)((long)unaff_x19 + 0x284) >> 1 & 1) != 0)) {
                                        if (unaff_x19[0x20] == 0) goto LAB_0613705c;
                                        lVar32 = unaff_x19[0xc1];
                                        fVar91 = (float)FUN_063ecc10(unaff_x19[0x20] + 0x28,0);
                                        if (unaff_x19[0x20] == 0) goto LAB_0613705c;
                                        fVar81 = (float)FUN_063ecc30(unaff_x19[0x20] + 0x28,0);
                                        if (unaff_x19[0x20] == 0) goto LAB_0613705c;
                                        fVar92 = *(float *)((long)unaff_x19 + 0x43c);
                                        fVar94 = *(float *)((long)unaff_x19 + 0x634);
                                        fVar88 = (float)(int)lVar32 * fVar85;
                                        fVar71 = (float)FUN_063ecbe0(unaff_x19[0x20] + 0x28,0);
                                        fVar71 = fVar71 * fVar92 * (fVar91 - (fVar81 + fVar94)) *
                                                                   0.5;
                                        fVar91 = (float)FUN_063ecedc(&stack0x00001260,0);
                                        fVar94 = fVar88 * fVar66 * ((fVar98 + fVar93 + fVar91) -
                                                                   fVar71);
                                        fVar81 = (float)FUN_063ecedc(&stack0x00001260,0);
                                        fVar92 = (float)FUN_063ececc(&stack0x00001260,0);
                                        fStack0000000000000170 = fStack0000000000000170 + 0.0;
                                        fVar68 = fVar68 + 0.0;
                                        fVar91 = fVar87 + fVar94;
                                        fVar88 = fVar88 * fVar66 * ((((fVar81 - fVar92) - fVar93) -
                                                                    fVar98) - fVar71);
                                        fVar87 = fVar87 + fVar88;
                                        fVar88 = fVar70 + fVar88;
                                        fVar70 = fVar70 + fVar94;
                                      }
                                      uVar90 = *(undefined8 *)((long)unaff_x19 + 0x46c);
                                      uVar35 = *(undefined8 *)((long)unaff_x19 + 0x474);
                                      if (DAT_06db4d49 == '\0') {
                                        FUN_02d965b8(PTR_DAT_069fc390);
                                        DAT_06db4d49 = '\x01';
                                      }
                                      uVar72 = **(undefined8 **)(*(long *)PTR_DAT_069fc390 + 0xb8);
                                      uVar77 = (*(undefined8 **)(*(long *)PTR_DAT_069fc390 + 0xb8))
                                               [1];
                                      if (DAT_010fd090 <
                                          (float)((ulong)uVar35 >> 0x20) *
                                          (float)((ulong)uVar77 >> 0x20) +
                                          (float)uVar35 * (float)uVar77 +
                                          (float)uVar90 * (float)uVar72 +
                                          (float)((ulong)uVar90 >> 0x20) *
                                          (float)((ulong)uVar72 >> 0x20)) {
                                        fVar98 = 0.0;
                                        auVar79._4_12_ = SUB1612(ZEXT816(0),4);
                                        auVar79._0_4_ = fVar68;
                                        uVar90 = auVar79._0_8_;
                                        uVar50 = (ulong)(uint)fStack0000000000000170;
                                        uVar35 = uVar90;
                                      }
                                      else {
                                        FUN_0633d1c8(&stack0x000012b0,
                                                     *(undefined4 *)((long)unaff_x19 + 0x46c),
                                                     (int)unaff_x19[0x8e],
                                                     *(undefined4 *)((long)unaff_x19 + 0x474),
                                                     (int)unaff_x19[0x8f],0);
                                        fVar88 = (fVar70 + fVar87) * 0.5;
                                        fVar81 = (fVar68 + fStack0000000000000170) * 0.5;
                                        unaff_x25[0x16b] = in_stack_000012c8;
                                        unaff_x25[0x16a] = CONCAT44(in_stack_000012c4,uVar52);
                                        unaff_x25[0x169] = in_stack_000012b8;
                                        unaff_x25[0x168] = in_stack_000012b0;
                                        unaff_x25[0x16d] = in_stack_000012d8;
                                        unaff_x25[0x16c] = in_stack_000012d0;
                                        fVar98 = 0.0;
                                        unaff_x25[0x16f] = in_stack_000012e8;
                                        unaff_x25[0x16e] = 0;
                                        auVar78 = ZEXT416((uint)(fStack0000000000000170 - fVar81));
                                        fVar91 = (float)FUN_0633d0c8(&stack0x000010e0,0);
                                        fVar91 = fVar88 + fVar91;
                                        fVar70 = 0.0;
                                        uVar50 = CONCAT44(fVar98 + 0.0,fVar81 + auVar78._0_4_);
                                        auVar78 = ZEXT416((uint)(fVar68 - fVar81));
                                        fVar87 = (float)FUN_0633d0c8(&stack0x000010e0,0);
                                        fVar87 = fVar88 + fVar87;
                                        fVar98 = 0.0;
                                        uVar90 = CONCAT44(fVar70 + 0.0,fVar81 + auVar78._0_4_);
                                        auVar78 = ZEXT416((uint)(fStack0000000000000170 - fVar81));
                                        fVar70 = (float)FUN_0633d0c8(&stack0x000010e0,0);
                                        fVar70 = fVar88 + fVar70;
                                        fVar71 = 0.0;
                                        fStack0000000000000170 = fVar81 + auVar78._0_4_;
                                        fVar98 = fVar98 + 0.0;
                                        auVar78 = ZEXT416((uint)(fVar68 - fVar81));
                                        fVar68 = (float)FUN_0633d0c8(&stack0x000010e0,0);
                                        fVar88 = fVar88 + fVar68;
                                        uVar35 = CONCAT44(fVar71 + 0.0,fVar81 + auVar78._0_4_);
                                      }
                                      if ((unaff_x19[0x74] == 0) ||
                                         (lVar32 = *(long *)(unaff_x19[0x74] + 0x38), lVar32 == 0))
                                      goto LAB_0613705c;
                                      if (*(uint *)(lVar32 + 0x18) <=
                                          *(uint *)((long)unaff_x19 + 0x4a4)) goto LAB_0613719c;
                                      lVar32 = lVar32 + (long)(int)*(uint *)((long)unaff_x19 + 0x4a4
                                                                            ) * 0x178;
                                      *(float *)(lVar32 + 0x114) = fVar87;
                                      *(undefined8 *)(lVar32 + 0x118) = uVar90;
                                      if ((unaff_x19[0x74] == 0) ||
                                         (lVar32 = *(long *)(unaff_x19[0x74] + 0x38), lVar32 == 0))
                                      goto LAB_0613705c;
                                      if (*(uint *)(lVar32 + 0x18) <=
                                          *(uint *)((long)unaff_x19 + 0x4a4)) goto LAB_0613719c;
                                      lVar32 = lVar32 + (long)(int)*(uint *)((long)unaff_x19 + 0x4a4
                                                                            ) * 0x178;
                                      *(float *)(lVar32 + 0x108) = fVar91;
                                      *(ulong *)(lVar32 + 0x10c) = uVar50;
                                      if ((unaff_x19[0x74] == 0) ||
                                         (lVar32 = *(long *)(unaff_x19[0x74] + 0x38), lVar32 == 0))
                                      goto LAB_0613705c;
                                      if (*(uint *)(lVar32 + 0x18) <=
                                          *(uint *)((long)unaff_x19 + 0x4a4)) goto LAB_0613719c;
                                      lVar32 = lVar32 + (long)(int)*(uint *)((long)unaff_x19 + 0x4a4
                                                                            ) * 0x178;
                                      *(float *)(lVar32 + 0x120) = fVar70;
                                      *(ulong *)(lVar32 + 0x124) =
                                           CONCAT44(fVar98,fStack0000000000000170);
                                      if ((unaff_x19[0x74] == 0) ||
                                         (lVar32 = *(long *)(unaff_x19[0x74] + 0x38), lVar32 == 0))
                                      goto LAB_0613705c;
                                      if (*(uint *)(lVar32 + 0x18) <=
                                          *(uint *)((long)unaff_x19 + 0x4a4)) goto LAB_0613719c;
                                      lVar32 = lVar32 + (long)(int)*(uint *)((long)unaff_x19 + 0x4a4
                                                                            ) * 0x178;
                                      *(float *)(lVar32 + 300) = fVar88;
                                      *(undefined8 *)(lVar32 + 0x130) = uVar35;
                                      if ((unaff_x19[0x74] == 0) ||
                                         (lVar32 = *(long *)(unaff_x19[0x74] + 0x38), lVar32 == 0))
                                      goto LAB_0613705c;
                                      uVar25 = *(uint *)((long)unaff_x19 + 0x4a4);
                                      fVar98 = *(float *)(unaff_x19 + 0xcb);
                                      fVar68 = (float)FUN_063f13fc(&stack0x00001250,0);
                                      if (*(uint *)(lVar32 + 0x18) <= uVar25) goto LAB_0613719c;
                                      *(float *)(lVar32 + (long)(int)uVar25 * 0x178 + 0x138) =
                                           fVar98 + fVar66 * fVar68;
                                      if ((unaff_x19[0x74] == 0) ||
                                         (lVar32 = *(long *)(unaff_x19[0x74] + 0x38), lVar32 == 0))
                                      goto LAB_0613705c;
                                      uVar25 = *(uint *)((long)unaff_x19 + 0x4a4);
                                      fVar98 = *(float *)((long)unaff_x19 + 0x4ec);
                                      fVar91 = *(float *)((long)unaff_x19 + 0x634);
                                      fVar68 = (float)
                                                  UnityEngine_UIElements_UIR_CommandList__ApplyBatchProps
                                                            (&stack0x00001250,0);
                                      if (*(uint *)(lVar32 + 0x18) <= uVar25) goto LAB_0613719c;
                                      *(float *)(lVar32 + (long)(int)uVar25 * 0x178 + 0x144) =
                                           (fStack000000000000016c - fVar98) + fVar91 +
                                           fVar66 * fVar68;
                                      if ((unaff_x19[0x74] == 0) ||
                                         (lVar32 = *(long *)(unaff_x19[0x74] + 0x38), lVar32 == 0))
                                      goto LAB_0613705c;
                                      uVar25 = *(uint *)((long)unaff_x19 + 0x4a4);
                                      if (*(uint *)(lVar32 + 0x18) <= uVar25) goto LAB_0613719c;
                                      lVar32 = lVar32 + 0x20;
                                      *(float *)(lVar32 + (long)(int)uVar25 * 0x178 + 0x138) =
                                           (fVar70 - fVar87) / ((float)uVar50 - (float)uVar90);
                                      fVar89 = fVar66 * (fVar67 + fVar89);
                                      if (*(int *)((long)unaff_x19 + 0x65c) == 0) {
                                        fVar89 = fVar89 / fStack0000000000000138;
                                        fVar69 = (fVar66 * (fStack0000000000000124 + fVar69)) /
                                                 fStack0000000000000138;
                                      }
                                      else {
                                        fVar69 = fVar66 * (fStack0000000000000124 + fVar69);
                                      }
                                      fVar68 = *(float *)((long)unaff_x19 + 0x634);
                                      uVar26 = *(uint *)(unaff_x19 + 0x95);
                                      if ((uVar24 == 0) || (uVar25 == uVar26)) {
                                        fVar89 = fVar89 + fVar68;
                                        fVar69 = fVar69 + fVar68;
                                        fVar67 = fVar89;
                                        fVar98 = fVar69;
                                        if (fVar68 != 0.0) {
                                          fVar67 = (fVar89 - fVar68) /
                                                   *(float *)((long)unaff_x19 + 0x43c);
                                          fVar98 = (fVar69 - fVar68) /
                                                   *(float *)((long)unaff_x19 + 0x43c);
                                          if (fVar67 <= fVar89) {
                                            fVar67 = fVar89;
                                          }
                                          if (fVar69 <= fVar98) {
                                            fVar98 = fVar69;
                                          }
                                        }
                                        lVar32 = lVar32 + (long)(int)uVar25 * 0x178;
                                        fVar68 = fVar67;
                                        if (fVar67 <= *(float *)((long)unaff_x19 + 0x4dc)) {
                                          fVar68 = *(float *)((long)unaff_x19 + 0x4dc);
                                        }
                                        fVar70 = fVar98;
                                        if (*(float *)(unaff_x19 + 0x9c) <= fVar98) {
                                          fVar70 = *(float *)(unaff_x19 + 0x9c);
                                        }
                                        *(float *)((long)unaff_x19 + 0x4dc) = fVar68;
                                        *(float *)(unaff_x19 + 0x9c) = fVar70;
                                        *(float *)(lVar32 + 300) = fVar67;
                                        *(float *)(lVar32 + 0x130) = fVar98;
                                        fVar67 = *(float *)((long)unaff_x19 + 0x4ec);
                                        *(float *)(lVar32 + 0x120) = fVar89 - fVar67;
                                        *(float *)((long)unaff_x19 + 0x4d4) = fVar89 - fVar67;
                                        *(float *)(lVar32 + 0x128) = fVar69 - fVar67;
                                        *(float *)(unaff_x19 + 0x9b) = fVar69 - fVar67;
                                        if (((int)unaff_x19[0x97] == 0) ||
                                           (*(char *)((long)unaff_x19 + 0x374) != '\0')) {
                                          *(float *)((long)unaff_x19 + 0x4cc) = fVar68;
                                          if (unaff_x19[0x20] == 0) goto LAB_0613705c;
                                          fVar69 = *(float *)(unaff_x19 + 0x9a);
                                          fVar68 = (float)FUN_063ecc10(unaff_x19[0x20] + 0x28,0);
                                          fStack0000000000000138 =
                                               (fVar66 * fVar68) / fStack0000000000000138;
                                          if (fVar69 <= fStack0000000000000138) {
                                            fVar69 = fStack0000000000000138;
                                          }
                                          fVar67 = *(float *)((long)unaff_x19 + 0x4ec);
                                          *(float *)(unaff_x19 + 0x9a) = fVar69;
                                        }
                                        if (fVar67 == 0.0) {
                                          fVar69 = *(float *)(unaff_x19 + 0x99);
                                          if (*(float *)(unaff_x19 + 0x99) <= fVar89) {
                                            fVar69 = fVar89;
                                          }
                                          *(float *)(unaff_x19 + 0x99) = fVar69;
                                        }
                                      }
                                      else {
                                        lVar32 = lVar32 + (long)(int)uVar25 * 0x178;
                                        uVar35 = *(undefined8 *)((long)unaff_x19 + 0x4dc);
                                        *(undefined8 *)(lVar32 + 300) = uVar35;
                                        fVar67 = *(float *)((long)unaff_x19 + 0x4ec);
                                        fVar89 = (float)uVar35 - fVar67;
                                        fVar69 = (float)((ulong)uVar35 >> 0x20) - fVar67;
                                        *(float *)(lVar32 + 0x120) = fVar89;
                                        *(float *)(lVar32 + 0x128) = fVar69;
                                        *(ulong *)((long)unaff_x19 + 0x4d4) =
                                             CONCAT44(fVar69,fVar89);
                                      }
                                      lVar32 = unaff_x19[0x74];
                                      if ((lVar32 == 0) ||
                                         (lVar31 = *(long *)(lVar32 + 0x38), lVar31 == 0))
                                      goto LAB_0613705c;
                                      uVar43 = *(uint *)((long)unaff_x19 + 0x4a4);
                                      if (*(uint *)(lVar31 + 0x18) <= uVar43) goto LAB_0613719c;
                                      lVar31 = lVar31 + (long)(int)uVar43 * 0x178;
                                      *(undefined1 *)(lVar31 + 400) = 0;
                                      uVar53 = *(uint *)(unaff_x19 + 0x54);
                                      if ((((uVar23 == 9) ||
                                           ((uVar23 == 0x200b || uVar24 != 0 &&
                                            ((*(uint *)((long)unaff_x19 + 0x304) & 0xfffffffe) == 2)
                                            ))) || ((uVar24 == 0 &&
                                                    (((uVar23 != 3 && (uVar23 != 0x200b)) &&
                                                     (uVar23 != 0xad)))))) ||
                                         ((uVar23 == 0xad && bVar18 == 0 ||
                                          (*(int *)((long)unaff_x19 + 0x65c) == 1)))) {
                                        *(undefined1 *)(lVar31 + 400) = 1;
                                        pfVar44 = (float *)((long)unaff_x19 + 0x38c);
                                        pfVar38 = (float *)(unaff_x19 + 0x71);
                                        if (uVar101 == uVar103) {
                                          lVar32 = *(long *)(lVar32 + 0x50);
                                          if (lVar32 == 0) goto LAB_0613705c;
                                          if (*(uint *)(lVar32 + 0x18) <=
                                              *(uint *)(unaff_x19 + 0x97)) goto LAB_0613719c;
                                          lVar32 = lVar32 + (long)(int)*(uint *)(unaff_x19 + 0x97) *
                                                            0x60;
                                          pfVar38 = (float *)(lVar32 + 100);
                                          pfVar44 = (float *)(lVar32 + 0x68);
                                        }
                                        fVar68 = *pfVar38;
                                        fVar67 = *pfVar44;
                                        fVar89 = *(float *)(unaff_x19 + 0x73);
                                        fVar69 = 0.0;
                                        fVar98 = *(float *)(unaff_x19 + 0xcb);
                                        fStack0000000000000134 = (fVar97 - fVar68) - fVar67;
                                        bVar14 = true;
                                        if ((fVar89 <= fStack0000000000000134) &&
                                           (bVar14 = false, !NAN(fVar89))) {
                                          bVar14 = fVar89 == -1.0;
                                        }
                                        if (!bVar14) {
                                          fStack0000000000000134 = fVar89;
                                        }
                                        fVar70 = 0.0;
                                        if ((char)unaff_x19[0x1e] == '\0') {
                                          fVar70 = (float)FUN_063ecee4(&stack0x00001260,0);
                                        }
                                        fVar91 = *(float *)((long)unaff_x19 + 0x4ec);
                                        fVar89 = fVar61;
                                        if (uVar23 != 0xad) {
                                          fVar89 = fVar66;
                                        }
                                        fVar61 = *(float *)(unaff_x19 + 0x60);
                                        auVar78 = ZEXT416((uint)fVar61);
                                        if ((0.0 < fVar91) && ((char)unaff_x19[0x5e] == '\0')) {
                                          fVar69 = *(float *)((long)unaff_x19 + 0x4dc) -
                                                   *(float *)((long)unaff_x19 + 0x4e4);
                                        }
                                        iVar28 = *(int *)((long)unaff_x19 + 0x4a4);
                                        fVar69 = (*(float *)((long)unaff_x19 + 0x4cc) -
                                                 (*(float *)(unaff_x19 + 0x9c) - fVar91)) + fVar69;
                                        if (fVar62 < fVar69) {
                                          if (*(int *)((long)unaff_x19 + 0x314) == -1) {
                                            *(int *)((long)unaff_x19 + 0x314) = iVar28;
                                          }
                                          plVar40 = (long *)
                                                  Method_System_HashCode_Combine<ulong,_int>__;
                                          fVar88 = DAT_010fcf54;
                                          if ((char)unaff_x19[0x4c] != '\0') {
                                            if (0.0 < fVar91) {
                                              fVar91 = *(float *)((long)unaff_x19 + 0x2f4);
                                              if ((fVar91 < *(float *)(unaff_x19 + 0x5d)) &&
                                                 (*(int *)((long)unaff_x19 + 0x26c) <
                                                  (int)unaff_x19[0x4e])) {
                                                fVar82 = *(float *)(unaff_x19 + 0x5d) +
                                                         ((fVar95 - fVar69) /
                                                         (float)(int)unaff_x19[0x97]) / fVar59;
                                                if (fVar82 <= fVar91) {
                                                  fVar82 = fVar91;
                                                }
                                                goto LAB_06137088;
                                              }
                                            }
                                            fVar69 = *(float *)((long)unaff_x19 + 0x20c);
                                            fVar91 = *(float *)(unaff_x19 + 0x4f);
                                            if ((fVar91 < fVar69) &&
                                               (*(int *)((long)unaff_x19 + 0x26c) <
                                                (int)unaff_x19[0x4e])) {
                                              *(float *)((long)unaff_x19 + 0x264) = fVar69;
                                              fVar82 = (fVar69 - *(float *)(unaff_x19 + 0x4d)) * 0.5
                                              ;
                                              if (fVar82 <= fVar88) {
                                                fVar82 = fVar88;
                                              }
                                              fVar83 = (fVar69 - fVar82) * 20.0 + 0.5;
                                              fVar82 = DAT_010fd008;
                                              if (fVar83 != INFINITY) {
                                                fVar82 = (float)(int)fVar83 / 20.0;
                                              }
                                              if (fVar82 <= fVar91) {
                                                fVar82 = fVar91;
                                              }
                                              *(float *)((long)unaff_x19 + 0x20c) = fVar82;
                                              return;
                                            }
                                          }
                                          iVar45 = (int)unaff_x19[0x62];
                                          if (iVar45 < 5) {
                                            if (iVar45 == 1) {
                                              lVar32 = *(long *)
                                                  Method_System_HashCode_Combine<ulong,_int>__;
                                              if (*(int *)(lVar32 + 0xe4) == 0) {
                                                thunk_FUN_02df485c();
                                                lVar32 = *plVar40;
                                              }
                                              plVar54 = (long *)PTR_DAT_069fb930;
                                              lVar31 = *(long *)(lVar32 + 0xb8);
                                              if (*(int *)(lVar31 + 0x1708) == 0) {
LAB_06132760:
                                                plVar54 = (long *)PTR_DAT_069fb930;
                                                *(undefined8 *)((long)unaff_x19 + 0x4a4) = 0;
                                                uVar27 = 0xffffffff;
                                                fVar61 = fVar66;
                                                uVar102 = DAT_010fbcf8;
                                              }
                                              else {
                                                if (*(int *)(lVar32 + 0xe4) == 0) {
                                                  thunk_FUN_02df485c();
                                                  lVar31 = *(long *)(*plVar40 + 0xb8);
                                                }
                                                FUN_047e2610(&stack0x000012b0,lVar31 + 0x1338,
                                                             *(undefined8 *)
                                                                                                                            
                                                  Method_System_HashCode_Add<RenderedText>__);
                                                memcpy(&stack0x00000d28,&stack0x000012b0,0x3b8);
LAB_0613272c:
                                                iVar28 = FUN_06183d40();
                                                uVar27 = iVar28 - 1;
                                                iVar57 = iVar57 + 1;
                                                iVar28 = *(int *)((long)unaff_x19 + 0x4a4) + -1;
                                                *(int *)((long)unaff_x19 + 0x4a4) = iVar28;
                                                uVar19 = 0x2026;
LAB_06132758:
                                                fVar61 = fVar66;
                                                uVar102 = CONCAT44(uVar19,iVar28);
                                              }
                                              goto LAB_06133f74;
                                            }
                                            if (iVar45 != 3) goto LAB_06132224;
                                            if (*(int *)(*(long *)
                                                  Method_System_HashCode_Combine<ulong,_int>__ +
                                                  0xe4) == 0) {
                                              thunk_FUN_02df485c();
                                            }
LAB_061323c4:
                                            uVar27 = FUN_06183d40();
                                          }
                                          else {
                                            if (iVar45 == 5) {
                                              if (((int)uVar27 < 0) || (iVar28 == 0)) {
                                                *(undefined4 *)((long)unaff_x19 + 0x4a4) = 0;
                                                uVar27 = 0xffffffff;
                                                plVar40 = (long *)
                                                  Method_System_HashCode_Combine<ulong,_int>__;
                                                plVar54 = (long *)PTR_DAT_069fb930;
                                                fVar61 = fVar66;
                                                uVar102 = DAT_010fbcf8;
                                              }
                                              else {
                                                auVar78 = ZEXT416((uint)fVar62);
                                                if (fVar62 < *(float *)((long)unaff_x19 + 0x4dc) -
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
                                                plVar54 = (long *)PTR_DAT_069fb930;
                                                uVar27 = FUN_06183d40();
                                                *(undefined1 *)((long)unaff_x19 + 0x374) = 1;
                                                *(undefined4 *)(unaff_x19 + 0x95) =
                                                     *(undefined4 *)((long)unaff_x19 + 0x4a4);
                                                uVar35 = *(undefined8 *)
                                                          (*(long *)(*plVar40 + 0xb8) + 0x1730);
                                                *(float *)(unaff_x19 + 0xcb) =
                                                     *(float *)((long)unaff_x19 + 0x444) + 0.0;
                                                *(undefined4 *)((long)unaff_x19 + 0x4e4) = 0;
                                                uVar35 = NEON_rev64(uVar35,4);
                                                auVar78 = ZEXT816(0);
                                                *(int *)(unaff_x19 + 0x97) =
                                                     (int)unaff_x19[0x97] + 1;
                                                *(undefined4 *)((long)unaff_x19 + 0x4ec) = 0;
                                                unaff_x19[0x99] = 0;
                                                *(undefined8 *)((long)unaff_x19 + 0x4dc) = uVar35;
                                                *(int *)((long)unaff_x19 + 0x4c4) =
                                                     *(int *)((long)unaff_x19 + 0x4c4) + 1;
                                                fVar61 = fVar66;
                                              }
                                              goto LAB_06133f74;
                                            }
                                            if (iVar45 != 6) goto LAB_06132224;
                                            if (*(int *)(*(long *)
                                                  Method_System_HashCode_Combine<ulong,_int>__ +
                                                  0xe4) == 0) {
                                              thunk_FUN_02df485c();
                                            }
                                            uVar27 = FUN_06183d40();
                                            lVar32 = unaff_x19[99];
                                            if (*(int *)(*(long *)PTR_DAT_069fb990 + 0xe4) == 0) {
                                              thunk_FUN_02df485c();
                                            }
                                            uVar30 = FUN_0634eb94(lVar32,0,0);
                                            if ((uVar30 & 1) != 0) {
                                              plVar54 = (long *)unaff_x19[99];
                                              uVar102 = (**(code **)(*unaff_x19 + 0x548))();
                                              if (plVar54 == (long *)0x0) goto LAB_0613705c;
                                              (**(code **)(*plVar54 + 0x558))
                                                        (plVar54,uVar102,
                                                         *(undefined8 *)(*plVar54 + 0x560));
                                              lVar32 = unaff_x19[99];
                                              if (lVar32 == 0) goto LAB_0613705c;
                                              *(int *)(lVar32 + 0x438) = (int)unaff_x19[0x87];
                                              FUN_0617757c(lVar32,*(undefined4 *)
                                                                   ((long)unaff_x19 + 0x4a4),0);
                                              plVar54 = (long *)unaff_x19[99];
                                              if (plVar54 == (long *)0x0) goto LAB_0613705c;
                                              (**(code **)(*plVar54 + 0x7d8))
                                                        (plVar54,0,0,
                                                         *(undefined8 *)(*plVar54 + 0x7e0));
                                              *(undefined1 *)(unaff_x19 + 0x65) = 1;
                                            }
                                          }
                                          plVar54 = (long *)PTR_DAT_069fb930;
                                          fVar61 = fVar66;
                                          uVar102 = CONCAT44(3,iVar28);
                                          goto LAB_06133f74;
                                        }
LAB_06132224:
                                        plVar40 = (long *)
                                                  Method_System_HashCode_Combine<ulong,_int>__;
                                        plVar54 = (long *)PTR_DAT_069fb930;
                                        if ((uVar30 & 1) != 0) {
                                          fVar69 = 1.0;
                                          if ((uVar53 & 0x18) != 0) {
                                            fVar69 = DAT_010fd188;
                                          }
                                          fVar98 = ABS(fVar98) + fVar70 * (1.0 - fVar61) * fVar89;
                                          if (fVar69 * fStack0000000000000134 < fVar98) {
                                            if (((*(int *)((long)unaff_x19 + 0x304) != 0) &&
                                                (*(int *)((long)unaff_x19 + 0x304) != 3)) &&
                                               (iVar28 != (int)unaff_x19[0x95])) {
                                              if (*(int *)(*(long *)
                                                  Method_System_HashCode_Combine<ulong,_int>__ +
                                                  0xe4) == 0) {
                                                thunk_FUN_02df485c();
                                              }
                                              uVar27 = FUN_06183d40();
                                              if (*(float *)((long)unaff_x19 + 0x2ec) ==
                                                  DAT_010fcd2c) {
                                                lVar32 = unaff_x19[0x74];
                                                if ((lVar32 == 0) ||
                                                   (lVar31 = *(long *)(lVar32 + 0x38), lVar31 == 0))
                                                goto LAB_0613705c;
                                                if (*(uint *)(lVar31 + 0x18) <=
                                                    *(uint *)((long)unaff_x19 + 0x4a4))
                                                goto LAB_0613719c;
                                                fVar61 = *(float *)((long)unaff_x19 + 0x4ec);
                                                fVar89 = 0.0;
                                                if ((0.0 < fVar61) &&
                                                   ((char)unaff_x19[0x5e] == '\0')) {
                                                  fVar89 = *(float *)((long)unaff_x19 + 0x4dc) -
                                                           *(float *)((long)unaff_x19 + 0x4e4);
                                                }
                                                fVar70 = fVar80 * *(float *)((long)unaff_x19 + 0x2e4
                                                                            ) +
                                                         *(float *)(lVar31 + (long)(int)*(uint *)((
                                                  long)unaff_x19 + 0x4a4) * 0x178 + 0x14c) +
                                                  (fVar89 - *(float *)(unaff_x19 + 0x9c)) +
                                                  fVar59 * (fVar60 + *(float *)(unaff_x19 + 0x5d));
                                              }
                                              else {
                                                lVar32 = unaff_x19[0x74];
                                                *(undefined1 *)(unaff_x19 + 0x5e) = 1;
                                                if (lVar32 == 0) goto LAB_0613705c;
                                                fVar70 = *(float *)((long)unaff_x19 + 0x2ec) +
                                                         fVar80 * *(float *)((long)unaff_x19 + 0x2e4
                                                                            );
                                                fVar61 = *(float *)((long)unaff_x19 + 0x4ec);
                                              }
                                              puVar12 = Method_System_HashCode_Combine<ulong,_int>__
                                              ;
                                              lVar32 = *(long *)(lVar32 + 0x38);
                                              if (lVar32 == 0) goto LAB_0613705c;
                                              uVar43 = *(uint *)((long)unaff_x19 + 0x4a4);
                                              if ((*(uint *)(lVar32 + 0x18) <= uVar43) ||
                                                 (uVar46 = uVar43 - 1,
                                                 *(uint *)(lVar32 + 0x18) <= uVar46))
                                              goto LAB_0613719c;
                                              fVar89 = *(float *)((long)unaff_x19 + 0x4cc);
                                              lVar32 = lVar32 + 0x20;
                                              fVar91 = *(float *)(lVar32 + (long)(int)uVar43 * 0x178
                                                                 + 0x130);
                                              auVar78 = ZEXT416((uint)fVar91);
                                              fVar91 = (fVar70 + fVar89 + fVar61) - fVar91;
                                              if ((*(short *)(lVar32 + (long)(int)uVar46 * 0x178 + 4
                                                             ) == 0xad && bVar18 == 0) &&
                                                 (((int)unaff_x19[0x62] == 0 || (fVar91 < fVar62))))
                                              {
                                                bVar18 = 0;
                                                uVar27 = uVar27 - 1;
                                                *(uint *)((long)unaff_x19 + 0x4a4) = uVar46;
                                                plVar40 = (long *)
                                                  Method_System_HashCode_Combine<ulong,_int>__;
                                                plVar54 = (long *)PTR_DAT_069fb930;
                                                fVar61 = fVar66;
                                                uVar102 = CONCAT44(0x2d,uVar46);
                                                goto LAB_06133f74;
                                              }
                                              if (*(short *)(lVar32 + (long)(int)uVar43 * 0x178 + 4)
                                                  == 0xad) {
                                                bVar18 = 1;
                                                plVar40 = (long *)
                                                  Method_System_HashCode_Combine<ulong,_int>__;
                                                plVar54 = (long *)PTR_DAT_069fb930;
                                                fVar61 = fVar66;
                                              }
                                              else {
                                                if ((char)unaff_x19[0x4c] != '\0' &&
                                                    ((bVar17 ^ 0xff) & 1) == 0) {
                                                  fVar70 = *(float *)((long)unaff_x19 + 0x2fc) /
                                                           100.0;
                                                  fVar61 = *(float *)(unaff_x19 + 0x60);
                                                  if ((fVar61 < fVar70) &&
                                                     (*(int *)((long)unaff_x19 + 0x26c) <
                                                      (int)unaff_x19[0x4e])) goto LAB_061370f4;
                                                  fVar61 = *(float *)((long)unaff_x19 + 0x20c);
                                                  fVar70 = *(float *)(unaff_x19 + 0x4f);
                                                  auVar78 = ZEXT416((uint)fVar70);
                                                  if ((fVar70 < fVar61) &&
                                                     (*(int *)((long)unaff_x19 + 0x26c) <
                                                      (int)unaff_x19[0x4e])) goto LAB_0613713c;
                                                }
                                                lVar32 = *(long *)
                                                  Method_System_HashCode_Combine<ulong,_int>__;
                                                if (*(int *)(lVar32 + 0xe4) == 0) {
                                                  thunk_FUN_02df485c();
                                                  lVar32 = *(long *)puVar12;
                                                }
                                                if (((bVar17 != 0) &&
                                                    (iVar45 = *(int *)(*(long *)(lVar32 + 0xb8) +
                                                                      0xf80), iVar45 != -1)) &&
                                                   (iVar45 != iStack0000000000000020)) {
                                                  if (*(int *)(lVar32 + 0xe4) == 0) {
                                                    thunk_FUN_02df485c();
                                                  }
                                                  uVar27 = FUN_06183d40();
                                                  if ((unaff_x19[0x74] == 0) ||
                                                     (lVar32 = *(long *)(unaff_x19[0x74] + 0x38),
                                                     lVar32 == 0)) goto LAB_0613705c;
                                                  uVar43 = *(int *)((long)unaff_x19 + 0x4a4) - 1;
                                                  if (*(uint *)(lVar32 + 0x18) <= uVar43)
                                                  goto LAB_0613719c;
                                                  iStack0000000000000020 = iVar45;
                                                  if (*(short *)(lVar32 + (long)(int)uVar43 * 0x178
                                                                + 0x24) == 0xad) {
                                                    uVar27 = uVar27 - 1;
                                                    bVar18 = 0;
                                                    *(uint *)((long)unaff_x19 + 0x4a4) = uVar43;
                                                    plVar40 = (long *)
                                                  Method_System_HashCode_Combine<ulong,_int>__;
                                                  plVar54 = (long *)PTR_DAT_069fb930;
                                                  fVar61 = fVar66;
                                                  uVar102 = CONCAT44(0x2d,uVar43);
                                                  goto LAB_06133f74;
                                                  }
                                                }
                                                if (fVar91 <= fVar62) {
                                                  auVar78 = ZEXT416((uint)fVar66);
                                                  fVar89 = fVar80;
                                                  FUN_0618480c();
                                                  bVar18 = 0;
                                                  bVar17 = 1;
                                                  bVar15 = true;
                                                  plVar40 = (long *)
                                                  Method_System_HashCode_Combine<ulong,_int>__;
                                                  plVar54 = (long *)PTR_DAT_069fb930;
                                                  fVar61 = fVar66;
                                                }
                                                else {
                                                  if (*(int *)((long)unaff_x19 + 0x314) == -1) {
                                                    *(undefined4 *)((long)unaff_x19 + 0x314) =
                                                         *(undefined4 *)((long)unaff_x19 + 0x4a4);
                                                  }
                                                  plVar54 = (long *)PTR_DAT_069fb930;
                                                  if ((char)unaff_x19[0x4c] != '\0') {
                                                    fVar61 = *(float *)((long)unaff_x19 + 0x2f4);
                                                    if ((fVar61 < *(float *)(unaff_x19 + 0x5d)) &&
                                                       (*(int *)((long)unaff_x19 + 0x26c) <
                                                        (int)unaff_x19[0x4e])) {
                                                      fVar82 = *(float *)(unaff_x19 + 0x5d) +
                                                               ((fVar95 - fVar91) /
                                                               (float)((int)unaff_x19[0x97] + 1)) /
                                                               fVar59;
                                                      if (fVar82 <= fVar61) {
                                                        fVar82 = fVar61;
                                                      }
LAB_06137088:
                                                      *(float *)(unaff_x19 + 0x5d) = fVar82;
                                                      return;
                                                    }
                                                    fVar70 = *(float *)((long)unaff_x19 + 0x2fc) /
                                                             100.0;
                                                    fVar61 = *(float *)(unaff_x19 + 0x60);
                                                    if ((fVar61 < fVar70) &&
                                                       (*(int *)((long)unaff_x19 + 0x26c) <
                                                        (int)unaff_x19[0x4e])) {
LAB_061370f4:
                                                      fVar82 = fVar98;
                                                      if (0.0 < fVar61) {
                                                        fVar82 = fVar98 / (1.0 - fVar61);
                                                      }
                                                      fVar61 = fVar61 + (fVar98 - fVar69 * (
                                                  fStack0000000000000134 + DAT_010fcf90)) / fVar82;
                                                  if (fVar70 <= fVar61) {
                                                    fVar61 = fVar70;
                                                  }
                                                  *(float *)(unaff_x19 + 0x60) = fVar61;
                                                  return;
                                                  }
                                                  fVar61 = *(float *)((long)unaff_x19 + 0x20c);
                                                  fVar70 = *(float *)(unaff_x19 + 0x4f);
                                                  auVar78 = ZEXT416((uint)fVar70);
                                                  if ((fVar70 < fVar61) &&
                                                     (*(int *)((long)unaff_x19 + 0x26c) <
                                                      (int)unaff_x19[0x4e])) goto LAB_0613713c;
                                                  }
                                                  iVar45 = (int)unaff_x19[0x62];
                                                  bVar18 = 0;
                                                  if (iVar45 < 3) {
                                                    if (iVar45 != 0) {
                                                      if (iVar45 == 1) {
                                                        lVar32 = *(long *)
                                                  Method_System_HashCode_Combine<ulong,_int>__;
                                                  if (*(int *)(lVar32 + 0xe4) == 0) {
                                                    thunk_FUN_02df485c();
                                                    lVar32 = *(long *)
                                                  Method_System_HashCode_Combine<ulong,_int>__;
                                                  }
                                                  uVar102 = DAT_010fbcf8;
                                                  lVar31 = *(long *)(lVar32 + 0xb8);
                                                  if (*(int *)(lVar31 + 0x1708) == 0) {
                                                    uVar27 = 0xffffffff;
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
                                                  uVar27 = iVar28 - 1;
                                                  iVar57 = iVar57 + 1;
                                                  iVar28 = *(int *)((long)unaff_x19 + 0x4a4) + -1;
                                                  *(int *)((long)unaff_x19 + 0x4a4) = iVar28;
                                                  uVar19 = 0x2026;
                                                  goto LAB_06134414;
                                                  }
                                                  if (iVar45 != 2) goto LAB_06132e4c;
                                                  }
LAB_06132d24:
                                                  auVar78 = ZEXT416((uint)fVar66);
                                                  fVar89 = fVar80;
                                                  FUN_0618480c();
                                                  bVar18 = 0;
                                                  bVar17 = 1;
                                                  bVar15 = true;
                                                  plVar40 = (long *)
                                                  Method_System_HashCode_Combine<ulong,_int>__;
                                                  fVar61 = fVar66;
                                                  }
                                                  else if (iVar45 < 5) {
                                                    if (iVar45 != 3) {
                                                      if (iVar45 == 4) goto LAB_06132d24;
                                                      goto LAB_06132e4c;
                                                    }
                                                    if (*(int *)(*(long *)
                                                  Method_System_HashCode_Combine<ulong,_int>__ +
                                                  0xe4) == 0) {
                                                    thunk_FUN_02df485c();
                                                  }
                                                  uVar27 = FUN_06183d40();
                                                  uVar19 = 3;
LAB_06134414:
                                                  uVar102 = CONCAT44(uVar19,iVar28);
LAB_06134460:
                                                  bVar18 = 0;
                                                  plVar40 = (long *)
                                                  Method_System_HashCode_Combine<ulong,_int>__;
                                                  plVar54 = (long *)PTR_DAT_069fb930;
                                                  fVar61 = fVar66;
                                                  }
                                                  else {
                                                    if (iVar45 != 5) {
                                                      if (iVar45 != 6) goto LAB_06132e4c;
                                                      lVar32 = unaff_x19[99];
                                                      if (*(int *)(*(long *)PTR_DAT_069fb990 + 0xe4)
                                                          == 0) {
                                                        thunk_FUN_02df485c();
                                                      }
                                                      uVar30 = FUN_0634eb94(lVar32,0,0);
                                                      if ((uVar30 & 1) != 0) {
                                                        plVar54 = (long *)unaff_x19[99];
                                                        uVar102 = (**(code **)(*unaff_x19 + 0x548))
                                                                            ();
                                                        if (plVar54 == (long *)0x0)
                                                        goto LAB_0613705c;
                                                        (**(code **)(*plVar54 + 0x558))
                                                                  (plVar54,uVar102,
                                                                   *(undefined8 *)(*plVar54 + 0x560)
                                                                  );
                                                        lVar32 = unaff_x19[99];
                                                        if (lVar32 == 0) goto LAB_0613705c;
                                                        *(int *)(lVar32 + 0x438) =
                                                             (int)unaff_x19[0x87];
                                                        FUN_0617757c(lVar32,*(undefined4 *)
                                                                             ((long)unaff_x19 +
                                                                             0x4a4),0);
                                                        plVar54 = (long *)unaff_x19[99];
                                                        if (plVar54 == (long *)0x0)
                                                        goto LAB_0613705c;
                                                        (**(code **)(*plVar54 + 0x7d8))
                                                                  (plVar54,0,0,
                                                                   *(undefined8 *)(*plVar54 + 0x7e0)
                                                                  );
                                                        *(undefined1 *)(unaff_x19 + 0x65) = 1;
                                                      }
                                                      uVar102 = CONCAT44(3,*(undefined4 *)
                                                                            ((long)unaff_x19 + 0x4a4
                                                                            ));
                                                      goto LAB_06134460;
                                                    }
                                                    auVar78 = ZEXT416((uint)fVar66);
                                                    bVar17 = 1;
                                                    *(undefined1 *)((long)unaff_x19 + 0x374) = 1;
                                                    fVar89 = fVar80;
                                                    FUN_0618480c();
                                                    bVar18 = 0;
                                                    *(undefined4 *)((long)unaff_x19 + 0x4e4) = 0;
                                                    *(undefined4 *)((long)unaff_x19 + 0x4ec) = 0;
                                                    *(int *)((long)unaff_x19 + 0x4c4) =
                                                         *(int *)((long)unaff_x19 + 0x4c4) + 1;
                                                    unaff_x19[0x99] = 0;
                                                    bVar15 = true;
                                                    plVar40 = (long *)
                                                  Method_System_HashCode_Combine<ulong,_int>__;
                                                  plVar54 = (long *)PTR_DAT_069fb930;
                                                  fVar61 = fVar66;
                                                  }
                                                }
                                              }
                                              goto LAB_06133f74;
                                            }
                                            if (((char)unaff_x19[0x4c] != '\0') &&
                                               (*(int *)((long)unaff_x19 + 0x26c) <
                                                (int)unaff_x19[0x4e])) {
                                              fVar89 = 100.0;
                                              fVar70 = *(float *)((long)unaff_x19 + 0x2fc) / 100.0;
                                              if (fVar61 < fVar70) goto LAB_061370f4;
                                              fVar61 = *(float *)((long)unaff_x19 + 0x20c);
                                              fVar70 = *(float *)(unaff_x19 + 0x4f);
                                              auVar78 = ZEXT416((uint)fVar70);
                                              if (fVar70 < fVar61) {
LAB_0613713c:
                                                fVar82 = DAT_010fcf54;
                                                *(float *)((long)unaff_x19 + 0x264) = fVar61;
                                                fVar83 = (fVar61 - *(float *)(unaff_x19 + 0x4d)) *
                                                         0.5;
                                                if (fVar83 <= fVar82) {
                                                  fVar83 = fVar82;
                                                }
                                                fVar83 = (fVar61 - fVar83) * 20.0 + 0.5;
                                                fVar82 = DAT_010fd008;
                                                if (fVar83 != INFINITY) {
                                                  fVar82 = (float)(int)fVar83 / 20.0;
                                                }
                                                if (fVar82 <= fVar70) {
                                                  fVar82 = fVar70;
                                                }
                                                goto LAB_06134534;
                                              }
                                            }
                                            iVar45 = (int)unaff_x19[0x62];
                                            if (iVar45 == 1) {
                                              lVar32 = *(long *)
                                                  Method_System_HashCode_Combine<ulong,_int>__;
                                              if (*(int *)(lVar32 + 0xe4) == 0) {
                                                thunk_FUN_02df485c();
                                                lVar32 = *plVar40;
                                              }
                                              plVar54 = (long *)PTR_DAT_069fb930;
                                              lVar31 = *(long *)(lVar32 + 0xb8);
                                              if (*(int *)(lVar31 + 0x1708) == 0) goto LAB_06132760;
                                              if (*(int *)(lVar32 + 0xe4) == 0) {
                                                thunk_FUN_02df485c();
                                                lVar31 = *(long *)(*plVar40 + 0xb8);
                                              }
                                              FUN_047e2610(&stack0x000012b0,lVar31 + 0x1338,
                                                           *(undefined8 *)
                                                                                                                        
                                                  Method_System_HashCode_Add<RenderedText>__);
                                              memcpy(&stack0x000005b8,&stack0x000012b0,0x3b8);
                                              goto LAB_0613272c;
                                            }
                                            if (iVar45 == 6) {
                                              if (*(int *)(*(long *)
                                                  Method_System_HashCode_Combine<ulong,_int>__ +
                                                  0xe4) == 0) {
                                                thunk_FUN_02df485c();
                                              }
                                              uVar27 = FUN_06183d40();
                                              lVar32 = unaff_x19[99];
                                              if (*(int *)(*(long *)PTR_DAT_069fb990 + 0xe4) == 0) {
                                                thunk_FUN_02df485c();
                                              }
                                              uVar30 = FUN_0634eb94(lVar32,0,0);
                                              if ((uVar30 & 1) != 0) {
                                                plVar55 = (long *)unaff_x19[99];
                                                uVar102 = (**(code **)(*unaff_x19 + 0x548))();
                                                if (plVar55 == (long *)0x0) goto LAB_0613705c;
                                                (**(code **)(*plVar55 + 0x558))
                                                          (plVar55,uVar102,
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
                                              iVar28 = *(int *)((long)unaff_x19 + 0x4a4);
                                              uVar19 = 3;
                                              goto LAB_06132758;
                                            }
                                            if (iVar45 == 3) {
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
                                        plVar54 = (long *)PTR_DAT_069fb930;
                                        if (uVar24 == 0) {
                                          if (uVar23 == 0xad) {
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
                                            if (bVar15) {
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
                                            bVar15 = false;
                                            lVar32 = lVar32 + (long)(int)*(uint *)(unaff_x19 + 0x97)
                                                              * 0x60;
                                            *(float *)(lVar32 + 100) = fVar68;
                                            *(float *)(lVar32 + 0x68) = fVar67;
                                          }
                                        }
                                        else {
                                          lVar32 = unaff_x19[0x74];
                                          if ((lVar32 == 0) ||
                                             (lVar31 = *(long *)(lVar32 + 0x38), lVar31 == 0))
                                          goto LAB_0613705c;
                                          uVar43 = *(uint *)((long)unaff_x19 + 0x4a4);
                                          if (*(uint *)(lVar31 + 0x18) <= uVar43) goto LAB_0613719c;
                                          *(undefined1 *)(lVar31 + (long)(int)uVar43 * 0x178 + 400)
                                               = 0;
                                          *(uint *)((long)unaff_x19 + 0x4b4) = uVar43;
                                          lVar31 = *(long *)(lVar32 + 0x50);
                                          if (lVar31 == 0) goto LAB_0613705c;
                                          uVar43 = *(uint *)(lVar31 + 0x18);
                                          if (uVar43 <= *(uint *)(unaff_x19 + 0x97))
                                          goto LAB_0613719c;
                                          lVar31 = lVar31 + 0x20;
                                          lVar47 = lVar31 + (long)(int)*(uint *)(unaff_x19 + 0x97) *
                                                            0x60;
                                          iVar28 = *(int *)(lVar47 + 0xc) + 1;
                                          *(int *)(lVar47 + 0xc) = iVar28;
                                          uVar46 = *(uint *)(unaff_x19 + 0x97);
                                          *(int *)(unaff_x19 + 0x98) = iVar28;
                                          if (uVar43 <= uVar46) goto LAB_0613719c;
                                          lVar47 = lVar31 + (long)(int)uVar46 * 0x60;
                                          *(float *)(lVar47 + 0x44) = fVar68;
                                          *(float *)(lVar47 + 0x48) = fVar67;
                                          *(int *)(lVar32 + 0x20) = *(int *)(lVar32 + 0x20) + 1;
                                          if (uVar23 == 0xa0) {
                                            *(int *)(lVar31 + (long)(int)uVar46 * 0x60) =
                                                 *(int *)(lVar31 + (long)(int)uVar46 * 0x60) + 1;
                                          }
                                        }
                                      }
                                      else {
                                        if (((uVar23 & 0xfffffffe) == 10) &&
                                           ((int)unaff_x19[0x62] == 6)) {
                                          fVar61 = 0.0;
                                          if ((0.0 < fVar67) && ((char)unaff_x19[0x5e] == '\0')) {
                                            fVar61 = *(float *)((long)unaff_x19 + 0x4dc) -
                                                     *(float *)((long)unaff_x19 + 0x4e4);
                                          }
                                          fVar89 = *(float *)((long)unaff_x19 + 0x4cc);
                                          auVar78 = ZEXT416((uint)fVar62);
                                          if (fVar62 < (fVar89 - (*(float *)(unaff_x19 + 0x9c) -
                                                                 fVar67)) + fVar61) {
                                            if (*(int *)((long)unaff_x19 + 0x314) == -1) {
                                              *(uint *)((long)unaff_x19 + 0x314) = uVar43;
                                            }
                                            plVar40 = (long *)
                                                  Method_System_HashCode_Combine<ulong,_int>__;
                                            plVar54 = (long *)PTR_DAT_069fb930;
                                            if (*(int *)(*(long *)
                                                  Method_System_HashCode_Combine<ulong,_int>__ +
                                                  0xe4) == 0) {
                                              thunk_FUN_02df485c();
                                            }
                                            uVar27 = FUN_06183d40();
                                            lVar32 = unaff_x19[99];
                                            if (*(int *)(*(long *)PTR_DAT_069fb990 + 0xe4) == 0) {
                                              thunk_FUN_02df485c();
                                            }
                                            uVar30 = FUN_0634eb94(lVar32,0,0);
                                            if ((uVar30 & 1) != 0) {
                                              plVar55 = (long *)unaff_x19[99];
                                              uVar102 = (**(code **)(*unaff_x19 + 0x548))();
                                              if (plVar55 == (long *)0x0) goto LAB_0613705c;
                                              (**(code **)(*plVar55 + 0x558))
                                                        (plVar55,uVar102,
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
                                            uVar102 = CONCAT44(3,uVar43);
                                            fVar61 = fVar66;
                                            goto LAB_06133f74;
                                          }
                                        }
                                        if ((((uVar23 - 0x2007 < 0x23) &&
                                             ((1L << ((ulong)(uVar23 - 0x2007) & 0x3f) &
                                              0x600000001U) != 0)) || (uVar23 - 10 < 2)) ||
                                           (uVar23 == 0xa0)) {
                                          plVar54 = (long *)PTR_DAT_069fb930;
                                          if (uVar23 == 0xad) goto LAB_06132fe4;
LAB_061328fc:
                                          plVar54 = (long *)PTR_DAT_069fb930;
                                          if ((uVar23 == 0x200b) || (uVar23 == 0x2060))
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
                                          uVar30 = FUN_054594b0(uVar23,0);
                                          if (((uVar30 & 1) != 0) && (uVar23 != 0xad))
                                          goto LAB_061328fc;
                                        }
                                        plVar54 = (long *)PTR_DAT_069fb930;
                                        if (uVar23 == 0xa0) {
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
                                         ((uVar101 != uVar103 || (uVar23 == 0x2d)))) {
                                        if (unaff_x19[0xce] == 0) goto LAB_0613705c;
                                        fVar61 = *(float *)(unaff_x19 + 0x42);
                                        fVar89 = (float)FUN_063ecbd8(unaff_x19[0xce] + 0x28,0);
                                        if (unaff_x19[0xce] == 0) goto LAB_0613705c;
                                        fVar68 = (float)FUN_063ecbe0(unaff_x19[0xce] + 0x28,0);
                                        lVar32 = unaff_x19[0xcd];
                                        fVar69 = fVar75;
                                        if (*(char *)((long)unaff_x19 + 0x33e) != '\0') {
                                          fVar69 = 1.0;
                                        }
                                        if ((lVar32 == 0) || (*(long *)(lVar32 + 0x20) == 0))
                                        goto LAB_0613705c;
                                        fVar98 = *(float *)((long)unaff_x19 + 0x43c);
                                        fVar70 = *(float *)(lVar32 + 0x2c);
                                        fVar67 = (float)FUN_063ed0d8(*(long *)(lVar32 + 0x20),0);
                                        lVar32 = unaff_x19[0x71];
                                        fVar67 = (fVar61 / fVar89) * fVar68 * fVar69 * fVar98 *
                                                 fVar70 * fVar67;
                                        if ((uVar23 == 10) &&
                                           (*(int *)((long)unaff_x19 + 0x4a4) !=
                                            (int)unaff_x19[0x95])) {
                                          if ((unaff_x19[0x74] == 0) ||
                                             (lVar32 = *(long *)(unaff_x19[0x74] + 0x38),
                                             lVar32 == 0)) goto LAB_0613705c;
                                          uVar43 = *(int *)((long)unaff_x19 + 0x4a4) - 1;
                                          if (*(uint *)(lVar32 + 0x18) <= uVar43) goto LAB_0613719c;
                                          if (unaff_x19[0xce] == 0) goto LAB_0613705c;
                                          fVar61 = *(float *)(lVar32 + (long)(int)uVar43 * 0x178 +
                                                             0x58);
                                          fVar89 = (float)FUN_063ecbd8(unaff_x19[0xce] + 0x28,0);
                                          if (unaff_x19[0xce] == 0) goto LAB_0613705c;
                                          fVar68 = (float)FUN_063ecbe0(unaff_x19[0xce] + 0x28,0);
                                          lVar32 = unaff_x19[0xcd];
                                          fVar69 = fVar75;
                                          if (*(char *)((long)unaff_x19 + 0x33e) != '\0') {
                                            fVar69 = 1.0;
                                          }
                                          if ((lVar32 == 0) || (*(long *)(lVar32 + 0x20) == 0))
                                          goto LAB_0613705c;
                                          fVar98 = *(float *)((long)unaff_x19 + 0x43c);
                                          fVar70 = *(float *)(lVar32 + 0x2c);
                                          fVar67 = (float)FUN_063ed0d8(*(long *)(lVar32 + 0x20),0);
                                          if ((unaff_x19[0x74] == 0) ||
                                             (lVar32 = *(long *)(unaff_x19[0x74] + 0x50),
                                             lVar32 == 0)) goto LAB_0613705c;
                                          if (*(uint *)(lVar32 + 0x18) <=
                                              *(uint *)(unaff_x19 + 0x97)) goto LAB_0613719c;
                                          lVar32 = *(long *)(lVar32 + (long)(int)*(uint *)(unaff_x19
                                                                                          + 0x97) *
                                                                      0x60 + 100);
                                          fVar67 = (fVar61 / fVar89) * fVar68 * fVar69 * fVar98 *
                                                   fVar70 * fVar67;
                                        }
                                        fVar61 = *(float *)((long)unaff_x19 + 0x4ec);
                                        fVar89 = 0.0;
                                        fVar69 = 0.0;
                                        if ((0.0 < fVar61) && ((char)unaff_x19[0x5e] == '\0')) {
                                          fVar69 = *(float *)((long)unaff_x19 + 0x4dc) -
                                                   *(float *)((long)unaff_x19 + 0x4e4);
                                        }
                                        fVar68 = *(float *)((long)unaff_x19 + 0x4cc);
                                        fVar98 = *(float *)(unaff_x19 + 0x9c);
                                        fVar70 = *(float *)(unaff_x19 + 0xcb);
                                        fStack0000000000000170 = (float)lVar32;
                                        fStack0000000000000174 = (float)((ulong)lVar32 >> 0x20);
                                        if ((char)unaff_x19[0x1e] == '\0') {
                                          if ((unaff_x19[0xcd] == 0) ||
                                             (lVar32 = *(long *)(unaff_x19[0xcd] + 0x20),
                                             lVar32 == 0)) goto LAB_0613705c;
                                          FUN_063ed09c(&stack0x000012b0,lVar32,0);
                                          fVar89 = (float)FUN_063ecee4(&stack0x000011c0,0);
                                        }
                                        puVar12 = Method_System_HashCode_Combine<ulong,_int>__;
                                        fVar91 = *(float *)(unaff_x19 + 0x73);
                                        fStack0000000000000174 =
                                             (fVar97 - fStack0000000000000170) -
                                             fStack0000000000000174;
                                        bVar14 = true;
                                        if ((fVar91 <= fStack0000000000000174) &&
                                           (bVar14 = false, !NAN(fVar91))) {
                                          bVar14 = fVar91 == -1.0;
                                        }
                                        if (!bVar14) {
                                          fStack0000000000000174 = fVar91;
                                        }
                                        fVar91 = 1.0;
                                        if ((uVar53 & 0x18) != 0) {
                                          fVar91 = DAT_010fd188;
                                        }
                                        if ((ABS(fVar70) +
                                             fVar67 * fVar89 * (1.0 - *(float *)(unaff_x19 + 0x60))
                                             < fVar91 * fStack0000000000000174) &&
                                           ((fVar68 - (fVar98 - fVar61)) + fVar69 < fVar62)) {
                                          if (*(int *)(*(long *)
                                                  Method_System_HashCode_Combine<ulong,_int>__ +
                                                  0xe4) == 0) {
                                            thunk_FUN_02df485c();
                                          }
                                          FUN_061840e4();
                                          lVar32 = *(long *)(*(long *)puVar12 + 0xb8);
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
                                      uVar43 = *(uint *)(unaff_x19 + 0x97);
                                      *(uint *)(lVar31 + 0x5c) = uVar43;
                                      *(undefined4 *)(lVar31 + 0x60) =
                                           *(undefined4 *)((long)unaff_x19 + 0x4c4);
                                      if ((uVar101 == uVar103) ||
                                         ((uVar23 < 0xe &&
                                          ((1 << (ulong)(uVar23 & 0x1f) & 0x2c00U) != 0)))) {
                                        lVar31 = *(long *)(lVar32 + 0x50);
                                        if (lVar31 == 0) goto LAB_0613705c;
                                        if (*(uint *)(lVar31 + 0x18) <= uVar43) goto LAB_0613719c;
                                        if (*(int *)(lVar31 + (long)(int)uVar43 * 0x60 + 0x24) == 1)
                                        goto LAB_06133378;
                                      }
                                      else {
LAB_06133378:
                                        lVar32 = *(long *)(lVar32 + 0x50);
                                        if (lVar32 == 0) goto LAB_0613705c;
                                        if (*(uint *)(lVar32 + 0x18) <= uVar43) goto LAB_0613719c;
                                        *(int *)(lVar32 + (long)(int)uVar43 * 0x60 + 0x6c) =
                                             (int)unaff_x19[0x54];
                                      }
                                      if (uVar23 == 9) {
                                        if (unaff_x19[0x20] == 0) goto LAB_0613705c;
                                        fVar89 = (float)FUN_063ecc80(unaff_x19[0x20] + 0x28,0);
                                        if (unaff_x19[0x20] == 0) goto LAB_0613705c;
                                        fVar61 = (float)NEON_ucvtf((uint)*(byte *)(unaff_x19[0x20] +
                                                                                  0x1b1));
                                        fVar96 = *(float *)(unaff_x19 + 0xcb);
                                        auVar78 = ZEXT416((uint)fVar96);
                                        fVar69 = fVar66 * fVar89 * fVar61;
                                        if ((char)unaff_x19[0x1e] == '\0') {
                                          fVar89 = fVar69 * (float)(int)(fVar96 / fVar69);
                                          fVar61 = fVar89;
                                          if (fVar89 <= fVar96) {
                                            fVar61 = fVar69 + fVar96;
                                          }
                                        }
                                        else {
                                          fVar89 = fVar69 * (float)(int)(fVar96 / fVar69);
                                          fVar61 = fVar89;
                                          if (fVar96 <= fVar89) {
                                            fVar61 = fVar96 - fVar69;
                                          }
                                        }
LAB_061335cc:
                                        *(float *)(unaff_x19 + 0xcb) = fVar61;
                                      }
                                      else {
                                        fVar61 = *(float *)(unaff_x19 + 0x5b);
                                        if (fVar61 == 0.0) {
                                          fVar61 = *(float *)(unaff_x19 + 0xcb);
                                          if ((char)unaff_x19[0x1e] == '\0') {
                                            fVar96 = (float)FUN_063ecee4(&stack0x00001260,0);
                                            fVar67 = *(float *)((long)unaff_x19 + 0x47c);
                                            fVar68 = (float)FUN_063f141c(&stack0x00001250,0);
                                            if (unaff_x19[0x20] != 0) {
                                              fVar89 = *(float *)(unaff_x19 + 0x60);
                                              fVar69 = 1.0 - fVar89;
                                              fVar61 = fVar61 + fVar69 * (*(float *)((long)unaff_x19
                                                                                    + 0x2d4) +
                                                                         fVar66 * (fVar96 * fVar67 +
                                                                                  fVar68) +
                                                                         fVar80 * (
                                                  fStack00000000000000f0 +
                                                  fVar65 + *(float *)(unaff_x19[0x20] + 0x1a4)));
                                              *(float *)(unaff_x19 + 0xcb) = fVar61;
                                              goto joined_r0x06133508;
                                            }
                                            goto LAB_0613705c;
                                          }
                                          fVar69 = (float)FUN_063f141c(&stack0x00001250,0);
                                          if (unaff_x19[0x20] == 0) goto LAB_0613705c;
                                          fVar89 = *(float *)(unaff_x19 + 0x60);
                                          auVar78 = ZEXT416((uint)(1.0 - fVar89));
                                          fVar61 = fVar61 - (1.0 - fVar89) *
                                                            (*(float *)((long)unaff_x19 + 0x2d4) +
                                                            fVar66 * fVar69 +
                                                            fVar80 * (fStack00000000000000f0 +
                                                                     fVar65 + *(float *)(unaff_x19[
                                                  0x20] + 0x1a4)));
                                          *(float *)(unaff_x19 + 0xcb) = fVar61;
                                          if ((uVar24 != 0) || (uVar23 == 0x200b)) {
                                            auVar78 = ZEXT416((uint)(fVar80 * *(float *)(unaff_x19 +
                                                                                        0x5c)));
                                            fVar89 = fVar80;
                                            fVar61 = fVar61 - fVar80 * *(float *)(unaff_x19 + 0x5c);
                                            goto LAB_061335cc;
                                          }
                                        }
                                        else {
                                          if (((*(char *)((long)unaff_x19 + 0x2dc) != '\0') &&
                                              (uVar23 < 0x3b)) &&
                                             ((1L << ((ulong)uVar23 & 0x3f) & 0x400500000000000U) !=
                                              0)) {
                                            fVar61 = fVar61 * 0.5;
                                          }
                                          if (unaff_x19[0x20] == 0) goto LAB_0613705c;
                                          fVar89 = *(float *)(unaff_x19 + 0x60);
                                          fVar69 = *(float *)(unaff_x19 + 0xcb);
                                          fVar61 = fVar69 + (1.0 - fVar89) *
                                                            (*(float *)((long)unaff_x19 + 0x2d4) +
                                                            (fVar61 - fVar96) +
                                                            fVar80 * (fVar65 + *(float *)(unaff_x19[
                                                  0x20] + 0x1a4)));
                                          *(float *)(unaff_x19 + 0xcb) = fVar61;
joined_r0x06133508:
                                          if ((uVar24 != 0) ||
                                             (auVar78 = ZEXT416((uint)fVar69), uVar23 == 0x200b)) {
                                            auVar78 = ZEXT416((uint)(fVar80 * *(float *)(unaff_x19 +
                                                                                        0x5c)));
                                            fVar89 = fVar80;
                                            fVar61 = fVar61 + fVar80 * *(float *)(unaff_x19 + 0x5c);
                                            goto LAB_061335cc;
                                          }
                                        }
                                      }
                                      lVar32 = unaff_x19[0x74];
                                      if ((lVar32 == 0) ||
                                         (lVar31 = *(long *)(lVar32 + 0x38), lVar31 == 0))
                                      goto LAB_0613705c;
                                      uVar43 = *(uint *)((long)unaff_x19 + 0x4a4);
                                      if (*(uint *)(lVar31 + 0x18) <= uVar43) goto LAB_0613719c;
                                      *(float *)(lVar31 + (long)(int)uVar43 * 0x178 + 0x13c) =
                                           fVar61;
                                      if (uVar23 == 0xd) {
                                        *(float *)(unaff_x19 + 0xcb) =
                                             *(float *)((long)unaff_x19 + 0x444) + 0.0;
                                      }
                                      if (((int)unaff_x19[0x62] == 5) &&
                                         (((0xd < uVar23 ||
                                           ((1 << (ulong)(uVar23 & 0x1f) & 0x2c00U) == 0)) &&
                                          (1 < uVar23 - 0x2028)))) {
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
                                        plVar54 = (long *)PTR_DAT_069fb930;
                                        lVar31 = *(long *)(lVar32 + 0x58);
                                        if (lVar31 == 0) goto LAB_0613705c;
                                        uVar53 = *(uint *)((long)unaff_x19 + 0x4c4);
                                        if (*(uint *)(lVar31 + 0x18) <= uVar53) goto LAB_0613719c;
                                        lVar31 = lVar31 + 0x20;
                                        lVar47 = lVar31 + (long)(int)uVar53 * 0x14;
                                        *(int *)(lVar47 + 8) = (int)unaff_x19[0x99];
                                        fVar69 = *(float *)(lVar47 + 0x10);
                                        auVar78 = ZEXT416((uint)fVar69);
                                        fVar61 = *(float *)(unaff_x19 + 0x9b);
                                        if (fVar69 <= *(float *)(unaff_x19 + 0x9b)) {
                                          fVar61 = fVar69;
                                        }
                                        *(float *)(lVar47 + 0x10) = fVar61;
                                        if (*(char *)((long)unaff_x19 + 0x374) != '\0') {
                                          *(undefined1 *)((long)unaff_x19 + 0x374) = 0;
                                          *(undefined4 *)(lVar31 + (long)(int)uVar53 * 0x14) =
                                               *(undefined4 *)((long)unaff_x19 + 0x4a4);
                                        }
                                        uVar43 = *(uint *)((long)unaff_x19 + 0x4a4);
                                        *(uint *)(lVar31 + (long)(int)uVar53 * 0x14 + 4) = uVar43;
                                      }
                                      uVar53 = uVar23;
                                      if (((uVar23 < 0xc) &&
                                          ((1 << (ulong)(uVar23 & 0x1f) & 0xc08U) != 0)) ||
                                         ((uVar23 - 0x2028 < 2 ||
                                          ((uVar23 == 0x2d && uVar101 == uVar103 ||
                                           (uVar43 == uVar6)))))) {
                                        if (0.0 < *(float *)((long)unaff_x19 + 0x4ec)) {
                                          fVar89 = *(float *)((long)unaff_x19 + 0x4dc);
                                          fVar61 = *(float *)((long)unaff_x19 + 0x4e4);
                                          if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                                            thunk_FUN_02df485c();
                                          }
                                          fVar89 = fVar89 - fVar61;
                                          if (((fVar85 < ABS(fVar89)) &&
                                              ((char)unaff_x19[0x5e] == '\0')) &&
                                             (*(char *)((long)unaff_x19 + 0x374) == '\0')) {
                                            FUN_061844a0();
                                            puVar12 = Method_System_HashCode_Combine<ulong,_int>__;
                                            lVar32 = *(long *)
                                                  Method_System_HashCode_Combine<ulong,_int>__;
                                            *(float *)(unaff_x19 + 0x9b) =
                                                 *(float *)(unaff_x19 + 0x9b) - fVar89;
                                            *(float *)((long)unaff_x19 + 0x4ec) =
                                                 fVar89 + *(float *)((long)unaff_x19 + 0x4ec);
                                            if (*(int *)(lVar32 + 0xe4) == 0) {
                                              thunk_FUN_02df485c();
                                              lVar32 = *(long *)puVar12;
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
                                              puVar12 = Method_System_HashCode_Combine<ulong,_int>__
                                              ;
                                              lVar32 = *(long *)
                                                  Method_System_HashCode_Combine<ulong,_int>__;
                                              memcpy((void *)(*(long *)(lVar32 + 0xb8) + 0x810),
                                                     &stack0x000001e0,0x3b8);
                                              LeanTween__value(*(long *)(lVar32 + 0xb8) + 0x8a8,0);
                                              lVar32 = *(long *)(*(long *)puVar12 + 0xb8);
                                              *(float *)(lVar32 + 0x848) =
                                                   fVar89 + *(float *)(lVar32 + 0x848);
                                              *(float *)(lVar32 + 0x894) =
                                                   fVar89 + *(float *)(lVar32 + 0x894);
                                              memcpy(&stack0x000012b0,(void *)(lVar32 + 0x810),0x3b8
                                                    );
                                              FUN_047e2524(lVar32 + 0x1338,&stack0x000012b0,
                                                           *(undefined8 *)
                                                            Method_System_HashCode_Add<float>__);
                                            }
                                          }
                                        }
                                        fVar69 = *(float *)((long)unaff_x19 + 0x4ec);
                                        *(undefined1 *)((long)unaff_x19 + 0x374) = 0;
                                        fVar61 = *(float *)(unaff_x19 + 0x9c) - fVar69;
                                        fVar89 = *(float *)(unaff_x19 + 0x9b);
                                        if (fVar61 <= *(float *)(unaff_x19 + 0x9b)) {
                                          fVar89 = fVar61;
                                        }
                                        fVar96 = *(float *)((long)unaff_x19 + 0x4dc);
                                        *(float *)(unaff_x19 + 0x9b) = fVar89;
                                        if (in_stack_000012a4 == '\0') {
                                          fVar76 = fVar89;
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
                                        iVar45 = (int)unaff_x19[0x95];
                                        *(int *)(lVar31 + 0x38) = iVar45;
                                        iVar28 = iVar45;
                                        if (iVar45 <= *(int *)((long)unaff_x19 + 0x4ac)) {
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
                                        *(int *)(lVar31 + 0x24) = (iVar4 - iVar45) + 1;
                                        iVar28 = *(int *)((long)unaff_x19 + 0x4bc);
                                        *(int *)(lVar31 + 0x28) = iVar28;
                                        *(int *)(lVar31 + 0x30) = (iVar29 - (iVar45 + iVar28)) + 1;
                                        lVar32 = *(long *)(lVar32 + 0x38);
                                        if (lVar32 == 0) goto LAB_0613705c;
                                        if (*(uint *)(lVar32 + 0x18) <=
                                            *(uint *)((long)unaff_x19 + 0x4ac)) goto LAB_0613719c;
                                        *(undefined4 *)(lVar31 + 0x70) =
                                             *(undefined4 *)
                                              (lVar32 + (long)(int)*(uint *)((long)unaff_x19 + 0x4ac
                                                                            ) * 0x178 + 0x114);
                                        *(float *)(lVar31 + 0x74) = fVar61;
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
                                        fVar96 = fVar96 - fVar69;
                                        auVar78 = ZEXT416((uint)fVar96);
                                        lVar31 = lVar31 + 0x20 +
                                                 (long)(int)*(uint *)(unaff_x19 + 0x97) * 0x60;
                                        uVar19 = *(undefined4 *)
                                                  (lVar32 + (long)(int)*(uint *)((long)unaff_x19 +
                                                                                0x4b4) * 0x178 +
                                                  0x120);
                                        *(float *)(lVar31 + 0x5c) = fVar96;
                                        *(undefined4 *)(lVar31 + 0x58) = uVar19;
                                        lVar32 = unaff_x19[0x74];
                                        if ((lVar32 == 0) ||
                                           (lVar31 = *(long *)(lVar32 + 0x50), lVar31 == 0))
                                        goto LAB_0613705c;
                                        uVar43 = *(uint *)(unaff_x19 + 0x97);
                                        if (*(uint *)(lVar31 + 0x18) <= uVar43) goto LAB_0613719c;
                                        lVar31 = lVar31 + 0x20;
                                        lVar47 = lVar31 + (long)(int)uVar43 * 0x60;
                                        *(float *)(lVar47 + 0x28) =
                                             *(float *)(lVar47 + 0x58) - fVar66 * fVar93;
                                        *(float *)(lVar47 + 0x40) = fStack0000000000000134;
                                        if (*(int *)(lVar47 + 4) == 1) {
                                          *(int *)(lVar31 + (long)(int)uVar43 * 0x60 + 0x4c) =
                                               (int)unaff_x19[0x54];
                                        }
                                        if ((unaff_x19[0x20] == 0) ||
                                           (lVar47 = *(long *)(lVar32 + 0x38), lVar47 == 0))
                                        goto LAB_0613705c;
                                        uVar46 = *(uint *)((long)unaff_x19 + 0x4b4);
                                        if (*(uint *)(lVar47 + 0x18) <= uVar46) goto LAB_0613719c;
                                        if ((*(char *)(lVar47 + 0x20 + (long)(int)uVar46 * 0x178 +
                                                      0x170) == '\0') &&
                                           (uVar46 = *(uint *)(unaff_x19 + 0x96),
                                           *(uint *)(lVar47 + 0x18) <= uVar46)) goto LAB_0613719c;
                                        lVar31 = lVar31 + (long)(int)uVar43 * 0x60;
                                        fVar65 = (1.0 - *(float *)(unaff_x19 + 0x60)) *
                                                 (*(float *)((long)unaff_x19 + 0x2d4) +
                                                 fVar80 * (fStack00000000000000f0 +
                                                          fVar65 + *(float *)(unaff_x19[0x20] +
                                                                             0x1a4)));
                                        fVar89 = -fVar65;
                                        if ((char)unaff_x19[0x1e] != '\0') {
                                          fVar89 = fVar65;
                                        }
                                        *(float *)(lVar31 + 0x3c) =
                                             *(float *)(lVar47 + 0x20 + (long)(int)uVar46 * 0x178 +
                                                       0x11c) + fVar89;
                                        fVar89 = 0.0 - *(float *)((long)unaff_x19 + 0x4ec);
                                        *(float *)(lVar31 + 0x2c) =
                                             fVar59 * fVar60 + (fVar96 - fVar61);
                                        *(float *)(lVar31 + 0x30) = fVar96;
                                        *(float *)(lVar31 + 0x34) = fVar89;
                                        *(float *)(lVar31 + 0x38) = fVar61;
                                        plVar40 = (long *)
                                                  Method_System_HashCode_Combine<ulong,_int>__;
                                        if ((((uVar23 & 0xfffffffe) == 10) ||
                                            (uVar101 == uVar103 && uVar23 == 0x2d)) ||
                                           (uVar23 - 0x2028 < 2)) {
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
                                                fVar61 = *(float *)(lVar32 + (long)(int)*(uint *)((
                                                  long)unaff_x19 + 0x4a4) * 0x178 + 0x14c);
                                                if (*(float *)((long)unaff_x19 + 0x2ec) ==
                                                    DAT_010fcd2c) {
                                                  if ((uVar23 == 0x2029) ||
                                                     (fVar89 = 0.0, uVar23 == 10)) {
                                                    fVar89 = *(float *)(unaff_x19 + 0x5f);
                                                  }
                                                  uVar36 = 0;
                                                  fVar89 = fVar61 + (0.0 - *(float *)(unaff_x19 +
                                                                                     0x9c)) +
                                                           fVar59 * (fVar60 + *(float *)(unaff_x19 +
                                                                                        0x5d)) +
                                                           fVar80 * (*(float *)((long)unaff_x19 +
                                                                               0x2e4) + fVar89) +
                                                           *(float *)((long)unaff_x19 + 0x4ec);
                                                }
                                                else {
                                                  if ((uVar23 == 0x2029) ||
                                                     (fVar89 = 0.0, uVar23 == 10)) {
                                                    fVar89 = *(float *)(unaff_x19 + 0x5f);
                                                  }
                                                  uVar36 = 1;
                                                  fVar89 = *(float *)((long)unaff_x19 + 0x4ec) +
                                                           *(float *)((long)unaff_x19 + 0x2ec) +
                                                           fVar80 * (*(float *)((long)unaff_x19 +
                                                                               0x2e4) + fVar89);
                                                }
                                                lVar32 = *plVar40;
                                                *(float *)((long)unaff_x19 + 0x4ec) = fVar89;
                                                *(undefined1 *)(unaff_x19 + 0x5e) = uVar36;
                                                if (*(int *)(lVar32 + 0xe4) == 0) {
                                                  thunk_FUN_02df485c();
                                                  lVar32 = *plVar40;
                                                }
                                                fVar89 = *(float *)((long)unaff_x19 + 0x444);
                                                uVar35 = *(undefined8 *)
                                                          (*(long *)(lVar32 + 0xb8) + 0x1730);
                                                *(float *)((long)unaff_x19 + 0x4e4) = fVar61;
                                                auVar78._0_8_ = NEON_rev64(uVar35,4);
                                                auVar78._8_8_ = 0;
                                                *(ulong *)((long)unaff_x19 + 0x4dc) = auVar78._0_8_;
                                                *(float *)(unaff_x19 + 0xcb) =
                                                     *(float *)(unaff_x19 + 0x88) + 0.0 + fVar89;
                                                FUN_061840e4();
                                                FUN_061840e4();
                                                *(int *)((long)unaff_x19 + 0x4a4) =
                                                     *(int *)((long)unaff_x19 + 0x4a4) + 1;
                                                bVar17 = 1;
                                                bVar15 = true;
                                                fVar61 = fVar66;
                                                goto LAB_06133f74;
                                              }
                                              goto LAB_0613719c;
                                            }
                                          }
                                          goto LAB_0613705c;
                                        }
                                        if (uVar23 == 3) {
                                          if (unaff_x19[0x91] == 0) goto LAB_0613705c;
                                          uVar27 = (uint)*(undefined8 *)(unaff_x19[0x91] + 0x18);
                                          uVar53 = 3;
                                        }
                                      }
                                      plVar40 = (long *)Method_System_HashCode_Combine<ulong,_int>__
                                      ;
                                      lVar32 = *(long *)(lVar32 + 0x38);
                                      if (lVar32 == 0) goto LAB_0613705c;
                                      uVar101 = *(uint *)((long)unaff_x19 + 0x4a4);
                                      uVar103 = *(uint *)(lVar32 + 0x18);
                                      if (uVar103 <= uVar101) goto LAB_0613719c;
                                      lVar32 = lVar32 + 0x20;
                                      if (*(char *)(lVar32 + (long)(int)uVar101 * 0x178 + 0x170) !=
                                          '\0') {
                                        lVar31 = lVar32 + (long)(int)uVar101 * 0x178;
                                        auVar73 = *(undefined1 (*) [16])(unaff_x19 + 0x9e);
                                        auVar79 = NEON_ext(auVar73,auVar73,8,1);
                                        uVar35 = *(undefined8 *)(lVar31 + 0xf4);
                                        fVar89 = (float)uVar35;
                                        uVar90 = *(undefined8 *)(lVar31 + 0x100);
                                        fVar61 = (float)uVar90;
                                        fVar65 = (float)((ulong)uVar90 >> 0x20);
                                        auVar78._0_4_ = (float)-(uint)(auVar73._0_4_ < fVar89);
                                        auVar78._4_4_ =
                                             (float)-(uint)(auVar73._4_4_ <
                                                           (float)((ulong)uVar35 >> 0x20));
                                        auVar78._8_4_ = -(uint)(fVar61 < auVar79._0_4_);
                                        auVar78._12_4_ = -(uint)(fVar65 < auVar79._4_4_);
                                        auVar8._8_4_ = fVar61;
                                        auVar8._0_8_ = uVar35;
                                        auVar8._12_4_ = fVar65;
                                        auVar73 = auVar73 ^ (auVar73 ^ auVar8) & ~auVar78;
                                        unaff_x19[0x9f] = auVar73._8_8_;
                                        unaff_x19[0x9e] = auVar73._0_8_;
                                      }
                                      if (((*(int *)((long)unaff_x19 + 0x304) != 3) &&
                                          (*(int *)((long)unaff_x19 + 0x304) != 0)) ||
                                         ((*(uint *)(unaff_x19 + 0x62) < 7 &&
                                          ((1 << (ulong)(*(uint *)(unaff_x19 + 0x62) & 0x1f) & 0x4aU
                                           ) != 0)))) {
                                        if ((((uVar24 == 0) && (uVar53 != 0x2d)) &&
                                            (uVar53 != 0x200b)) && (uVar53 != 0xad)) {
                                          if (*(char *)((long)unaff_x19 + 0x309) == '\0')
                                          goto LAB_06133fe0;
LAB_06133e60:
                                          if (bVar17 == 0) {
                                            bVar17 = 0;
                                          }
                                          else {
                                            bVar14 = (bool)((uVar24 == 0 || uVar23 == 0xa0) &
                                                            (uVar23 != 0xad | bVar18) ^ 1);
LAB_06133e98:
                                            bVar17 = 1;
LAB_06133ea0:
                                            if (*(int *)(*plVar40 + 0xe4) == 0) {
                                              thunk_FUN_02df485c();
                                            }
                                            FUN_061840e4();
                                            if (bVar14 != false) goto LAB_06133ed4;
                                          }
                                        }
                                        else {
                                          if (*(char *)((long)unaff_x19 + 0x309) != '\0')
                                          goto LAB_06133e60;
                                          if ((int)uVar53 < 0x2007) {
                                            if (uVar53 == 0x2d) {
                                              if (0 < (int)uVar101) {
                                                if (uVar103 <= uVar101 - 1) goto LAB_0613719c;
                                                uVar5 = *(undefined2 *)
                                                         (lVar32 + (ulong)(uVar101 - 1) * 0x178 + 4)
                                                ;
                                                if (*(int *)(*(long *)(PTR_DAT_069fb9c0 + 0x88) +
                                                            0xe4) == 0) {
                                                  thunk_FUN_02df485c();
                                                }
                                                uVar30 = FUN_05455f40(uVar5,0);
                                                if ((uVar30 & 1) != 0) {
                                                  if ((unaff_x19[0x74] == 0) ||
                                                     (lVar32 = *(long *)(unaff_x19[0x74] + 0x38),
                                                     lVar32 == 0)) goto LAB_0613705c;
                                                  uVar103 = *(int *)((long)unaff_x19 + 0x4a4) - 1;
                                                  if (*(uint *)(lVar32 + 0x18) <= uVar103)
                                                  goto LAB_0613719c;
                                                  if (*(int *)(lVar32 + (long)(int)uVar103 * 0x178 +
                                                              0x5c) == (int)unaff_x19[0x97])
                                                  goto LAB_06133f34;
                                                }
                                              }
                                            }
                                            else if (uVar53 == 0xa0) goto LAB_06133fe0;
LAB_06134268:
                                            lVar32 = *plVar40;
                                            if (*(int *)(lVar32 + 0xe4) == 0) {
                                              thunk_FUN_02df485c();
                                              lVar32 = *plVar40;
                                            }
                                            bVar17 = 0;
                                            bVar14 = false;
                                            *(undefined4 *)(*(long *)(lVar32 + 0xb8) + 0xf80) =
                                                 0xffffffff;
                                            goto LAB_06133ea0;
                                          }
                                          if (((0x28 < uVar53 - 0x2007) ||
                                              ((1L << ((ulong)(uVar53 - 0x2007) & 0x3f) &
                                               0x10000000401U) == 0)) && (uVar53 != 0x2060))
                                          goto LAB_06134268;
LAB_06133fe0:
                                          if (*(int *)(*(long *)Method_System_HashCode_Add<Color>__
                                                      + 0xe4) == 0) {
                                            thunk_FUN_02df485c();
                                          }
                                          uVar30 = FUN_061a94f4(uVar53,0);
                                          if ((uVar30 & 1) == 0) {
LAB_0613402c:
                                            if (*(int *)(*(long *)
                                                  Method_System_HashCode_Add<Color>__ + 0xe4) == 0)
                                            {
                                              thunk_FUN_02df485c();
                                            }
                                            uVar30 = FUN_061a9550(uVar23,0);
                                            if ((uVar30 & 1) != 0) goto LAB_06134058;
                                            if ((*(char *)((long)unaff_x19 + 0x309) != '\0') ||
                                               (uVar103 = *(int *)((long)unaff_x19 + 0x4a4) + 1,
                                               (int)lVar49 <= (int)uVar103)) goto LAB_06133e60;
                                            if ((unaff_x19[0x74] != 0) &&
                                               (lVar32 = *(long *)(unaff_x19[0x74] + 0x38),
                                               lVar32 != 0)) {
                                              if (uVar103 < *(uint *)(lVar32 + 0x18)) {
                                                uVar5 = *(undefined2 *)
                                                         (lVar32 + (long)(int)uVar103 * 0x178 + 0x24
                                                         );
                                                if (*(int *)(*(long *)
                                                  Method_System_HashCode_Add<Color>__ + 0xe4) == 0)
                                                {
                                                  thunk_FUN_02df485c();
                                                }
                                                uVar30 = FUN_061a9550(uVar5,0);
                                                if ((uVar30 & 1) == 0) goto LAB_06133e60;
LAB_06134298:
                                                bVar14 = false;
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
                                          uVar30 = FUN_03c2db5c(*(long *)(lVar32 + 0x10),uVar23,
                                                                *(undefined8 *)
                                                                                                                                  
                                                  Method_UnityEngine_XR_Interaction_Toolkit_UI_BodyUI_HandMenu_OnInputModeChanged__
                                                  );
                                          if ((int)uVar6 <= *(int *)((long)unaff_x19 + 0x4a4)) {
                                            if ((uVar30 & 1) == 0) {
                                              bVar17 = 0;
                                              goto LAB_06134298;
                                            }
LAB_061341c4:
                                            bVar14 = uVar24 != 0;
                                            if (uVar25 != uVar26 || ((bVar17 ^ 0xff) & 1) != 0)
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
                                          uVar103 = *(int *)((long)unaff_x19 + 0x4a4) + 1;
                                          if (*(uint *)(lVar31 + 0x18) <= uVar103)
                                          goto LAB_0613719c;
                                          if (*(long *)(lVar32 + 0x18) == 0) goto LAB_0613705c;
                                          bVar16 = FUN_03c2db5c(*(long *)(lVar32 + 0x18),
                                                                *(undefined2 *)
                                                                 (lVar31 + (long)(int)uVar103 *
                                                                           0x178 + 0x24),
                                                                *(undefined8 *)
                                                                                                                                  
                                                  Method_UnityEngine_XR_Interaction_Toolkit_UI_BodyUI_HandMenu_OnInputModeChanged__
                                                  );
                                          if ((uVar30 & 1) != 0) goto LAB_061341c4;
                                          bVar17 = bVar16 & bVar17;
                                          bVar14 = (bool)(bVar17 & uVar24 != 0);
                                          if ((bVar17 != 0) || (((bVar16 ^ 1) & 1) != 0))
                                          goto LAB_06133ea0;
                                          bVar17 = 0;
                                          if (bVar14 == false) goto LAB_06133f34;
LAB_06133ed4:
                                          if (*(int *)(*plVar40 + 0xe4) == 0) {
                                            thunk_FUN_02df485c();
                                          }
                                          FUN_061840e4();
                                        }
                                      }
LAB_06133f34:
                                      if (*(int *)(*plVar40 + 0xe4) == 0) {
                                        thunk_FUN_02df485c();
                                      }
                                      FUN_061840e4();
                                      *(int *)((long)unaff_x19 + 0x4a4) =
                                           *(int *)((long)unaff_x19 + 0x4a4) + 1;
                                      fVar61 = fVar66;
                                    }
                                  }
LAB_06133f74:
                                  lVar32 = unaff_x19[0x91];
                                  uVar27 = uVar27 + 1;
                                  uVar103 = uVar23;
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
      puVar12 = Method_System_HashCode_Combine<float,_float,_float>__;
      *(undefined4 *)(unaff_x19 + 0x83) = 0;
      *(undefined4 *)((long)unaff_x19 + 0x424) = 0;
      if (*(int *)(*(long *)puVar12 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      FUN_06150bd0();
      *(undefined1 *)((long)unaff_x19 + 0x274) = 1;
      return;
    }
  }
  puVar12 = 
  Method_System_HashCode_Combine<CAPI_ovrAvatar2Vector3f,_CAPI_ovrAvatar2Quatf,_CAPI_ovrAvatar2Vector3f>__
  ;
  FUN_063540b8();
  uVar102 = FUN_054e5768(&stack0x0000127c,0);
  uVar102 = FUN_05362cb4(*(undefined8 *)puVar12,uVar102,0);
  if (*(int *)(*plVar54 + 0xe4) == 0) {
    thunk_FUN_02df485c(*plVar54);
  }
  FUN_06309d28(uVar102,0);
  *(undefined1 *)((long)unaff_x19 + 0x274) = 1;
  return;
LAB_06134b8c:
  if (*(uint *)(lVar49 + 0x18) <= uVar52) goto LAB_0613719c;
  uVar30 = (ulong)uVar52;
  piVar51 = (int *)(lVar32 + uVar30 * 0x178);
  lVar31 = *(long *)(piVar51 + 8);
  uVar58 = *(ushort *)(piVar51 + 1);
  if (*(int *)(*(long *)(PTR_DAT_069fb9c0 + 0x88) + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  uVar22 = (uint)uVar58;
  bVar17 = FUN_05455f40(uVar58,0);
  if (*(uint *)(lVar49 + 0x18) <= uVar52) goto LAB_0613719c;
  if ((unaff_x19[0x74] == 0) || (lVar47 = *(long *)(unaff_x19[0x74] + 0x50), lVar47 == 0))
  goto LAB_0613705c;
  uVar27 = *(uint *)(lVar32 + uVar30 * 0x178 + 0x3c);
  if (*(uint *)(lVar47 + 0x18) <= uVar27) goto LAB_0613719c;
  lVar47 = lVar47 + (long)(int)uVar27 * 0x60;
  iVar28 = *(int *)(lVar47 + 0x28);
  iVar29 = *(int *)(lVar47 + 0x2c);
  uVar6 = *(uint *)(lVar47 + 0x40);
  uVar103 = *(uint *)(lVar47 + 0x44);
  fVar97 = *(float *)(lVar47 + 0x58);
  fVar80 = *(float *)(lVar47 + 0x5c);
  uVar23 = *(uint *)(lVar47 + 0x6c);
  fVar63 = *(float *)(lVar47 + 0x60);
  fVar95 = *(float *)(lVar47 + 100);
  iVar4 = *(int *)(lVar47 + 0x20);
  fVar74 = *(float *)(lVar47 + 0x70);
  fVar64 = *(float *)(lVar47 + 0x74);
  fVar62 = *(float *)(lVar47 + 0x50);
  fVar61 = *(float *)(lVar47 + 0x78);
  fVar60 = *(float *)(lVar47 + 0x7c);
  if ((int)uVar23 < 9) {
    if ((int)uVar23 < 3) {
      if (uVar23 == 1) {
        if ((char)unaff_x19[0x1e] == '\0') {
          fStack0000000000000100 = fVar95 + 0.0;
        }
        else {
          fStack0000000000000100 = 0.0 - fVar80;
        }
        fStack00000000000000f0 = 0.0;
        fStack0000000000000104 = 0.0;
      }
      else if (uVar23 == 2) {
        fStack0000000000000100 = (fVar95 + fVar63 * 0.5) - fVar80 * 0.5;
LAB_06134e88:
        fStack0000000000000104 = 0.0;
        fStack00000000000000f0 = 0.0;
      }
      else {
LAB_06134d58:
        uVar58 = NEON_umaxv(CONCAT26(-(ushort)(uVar58 == (ushort)((ulong)DAT_010fc910 >> 0x30)),
                                     CONCAT24(-(ushort)(uVar58 ==
                                                       (ushort)((ulong)DAT_010fc910 >> 0x20)),
                                              CONCAT22(-(ushort)(uVar58 ==
                                                                (ushort)((ulong)DAT_010fc910 >> 0x10
                                                                        )),
                                                       -(ushort)(uVar58 == (ushort)DAT_010fc910)))),
                            2);
        if (((((uVar58 & 1) == 0) && (uVar22 != 3)) && (uVar23 == 8)) &&
           ((int)uVar52 <= (int)uVar103)) goto LAB_06134d98;
      }
    }
    else if (uVar23 != 3) {
      if (uVar23 != 4) goto LAB_06134d58;
      fStack00000000000000f0 = 0.0;
      if ((char)unaff_x19[0x1e] != '\0') {
        fVar80 = 0.0;
      }
      fStack0000000000000100 = (fVar63 + fVar95) - fVar80;
      fStack0000000000000104 = 0.0;
    }
  }
  else if (uVar23 == 0x10) {
    if ((int)uVar52 <= (int)uVar103) {
      if (uVar22 < 0xad) {
        if ((uVar22 != 3) && (uVar22 != 10)) goto LAB_06134d98;
      }
      else if ((uVar22 != 0xad) && ((uVar22 != 0x200b && (uVar22 != 0x2060)))) {
LAB_06134d98:
        if (*(uint *)(lVar49 + 0x18) <= uVar6) goto LAB_0613719c;
        uVar5 = *(undefined2 *)(lVar32 + (long)(int)uVar6 * 0x178 + 4);
        if (*(int *)(*(long *)(PTR_DAT_069fb9c0 + 0x88) + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        uVar50 = FUN_054591ec(uVar5,0);
        if ((uVar50 & 1) == 0) {
          bVar1 = (int)uVar27 < (int)unaff_x19[0x97];
        }
        else {
          bVar1 = false;
        }
        if ((!bVar1 && (uVar23 >> 4 & 1) == 0) && (fVar80 <= fVar63)) {
          fStack0000000000000100 = -0.0;
          if ((char)unaff_x19[0x1e] != '\0') {
            fStack0000000000000100 = fVar63;
          }
          fStack0000000000000100 = fVar95 + fStack0000000000000100;
          goto LAB_06134e88;
        }
        if (((uVar52 == 0) || (uVar27 != uVar21)) || (uVar52 == *(uint *)((long)unaff_x19 + 0x35c)))
        {
          fStack0000000000000100 = -0.0;
          if ((char)unaff_x19[0x1e] != '\0') {
            fStack0000000000000100 = fVar63;
          }
          if (*(int *)(*(long *)(PTR_DAT_069fb9c0 + 0x88) + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          fStack0000000000000100 = fVar95 + fStack0000000000000100;
          uStack0000000000000048 = FUN_054594b0(uVar22,0);
          fStack0000000000000104 = 0.0;
          fStack00000000000000f0 = 0.0;
        }
        else {
          cVar37 = (char)unaff_x19[0x1e];
          iVar29 = (iVar29 - iVar4) - (uStack0000000000000048 & 1);
          fVar95 = -fVar80;
          if (cVar37 != '\0') {
            fVar95 = fVar80;
          }
          if (iVar29 < 1) {
            fVar80 = 1.0;
            iVar29 = 1;
          }
          else {
            fVar80 = *(float *)((long)unaff_x19 + 0x30c);
          }
          if (uVar22 == 9) {
LAB_06136b4c:
            fVar80 = ((fVar63 + fVar95) * (1.0 - fVar80)) / (float)iVar29;
            if (cVar37 == '\0') {
              fStack0000000000000100 = fStack0000000000000100 + fVar80;
              fStack0000000000000104 = fStack0000000000000104 + 0.0;
              fStack00000000000000f0 = fStack00000000000000f0 + 0.0;
            }
            else {
              fStack0000000000000100 = fStack0000000000000100 - fVar80;
            }
          }
          else {
            if (uVar22 != 0xa0) {
              if (*(int *)(*(long *)(PTR_DAT_069fb9c0 + 0x88) + 0xe4) == 0) {
                thunk_FUN_02df485c();
              }
              uVar50 = FUN_054594b0(uVar22,0);
              cVar37 = (char)unaff_x19[0x1e];
              if ((uVar50 & 1) != 0) goto LAB_06136b4c;
            }
            fVar80 = ((fVar63 + fVar95) * fVar80) /
                     (float)(int)((iVar4 - ((uStack0000000000000048 ^ 0xffffffff) & 1)) + iVar28);
            if (cVar37 == '\0') {
              fStack0000000000000100 = fStack0000000000000100 + fVar80;
              fStack0000000000000104 = fStack0000000000000104 + 0.0;
              fStack00000000000000f0 = fStack00000000000000f0 + 0.0;
            }
            else {
              fStack0000000000000100 = fStack0000000000000100 - fVar80;
            }
          }
        }
      }
    }
  }
  else if (uVar23 == 0x20) {
    fStack0000000000000100 = (fVar95 + fVar63 * 0.5) - (fVar74 + fVar61) * 0.5;
    fStack00000000000000f0 = 0.0;
    fStack0000000000000104 = 0.0;
  }
  uVar23 = (uint)*(undefined8 *)(lVar49 + 0x18);
  if (uVar23 <= uVar52) goto LAB_0613719c;
  lVar47 = lVar32 + uVar30 * 0x178;
  fVar80 = fStack00000000000000b0 + fStack0000000000000100;
  fVar63 = fStack0000000000000190 + fStack0000000000000104;
  fVar95 = fStack00000000000000ac + fStack00000000000000f0;
  plVar54 = (long *)Method_System_HashCode_Combine<ulong,_int>__;
  if (*(char *)(lVar47 + 0x170) == '\0') goto LAB_061356c0;
  iVar28 = *piVar51;
  if (iVar28 == 0) {
    fVar75 = fmodf(*(float *)((long)unaff_x19 + 0x34c) * (float)(int)uVar27,1.0);
    iVar29 = *(int *)((long)unaff_x19 + 0x344);
    if (iVar29 < 2) {
      if (iVar29 == 0) {
        lVar33 = lVar32 + uVar30 * 0x178;
        *(undefined4 *)(lVar33 + 100) = 0;
        *(undefined4 *)(lVar33 + 0x8c) = 0;
        *(undefined4 *)(lVar33 + 0xb4) = 0x3f800000;
        *(undefined4 *)(lVar33 + 0xdc) = 0x3f800000;
      }
      else if (iVar29 == 1) {
        lVar33 = lVar32 + uVar30 * 0x178;
        fVar60 = *(float *)(lVar33 + 0x48);
        pfVar38 = (float *)(lVar33 + 100);
        if (*(int *)((long)unaff_x19 + 0x29c) == 0x208) {
          lVar33 = lVar32 + uVar30 * 0x178;
          fVar61 = *(float *)(lVar33 + 0x70);
          *pfVar38 = fVar75 + ((fStack0000000000000100 + fVar60) - *(float *)(unaff_x19 + 0x9e)) /
                              (*(float *)(unaff_x19 + 0x9f) - *(float *)(unaff_x19 + 0x9e));
          *(float *)(lVar33 + 0x8c) =
               fVar75 + ((fStack0000000000000100 + fVar61) - *(float *)(unaff_x19 + 0x9e)) /
                        (*(float *)(unaff_x19 + 0x9f) - *(float *)(unaff_x19 + 0x9e));
          *(float *)(lVar33 + 0xb4) =
               fVar75 + ((fStack0000000000000100 + *(float *)(lVar33 + 0x98)) -
                        *(float *)(unaff_x19 + 0x9e)) /
                        (*(float *)(unaff_x19 + 0x9f) - *(float *)(unaff_x19 + 0x9e));
          *(float *)(lVar33 + 0xdc) =
               fVar75 + ((fStack0000000000000100 + *(float *)(lVar33 + 0xc0)) -
                        *(float *)(unaff_x19 + 0x9e)) /
                        (*(float *)(unaff_x19 + 0x9f) - *(float *)(unaff_x19 + 0x9e));
        }
        else {
          lVar33 = lVar32 + uVar30 * 0x178;
          fVar61 = fVar61 - fVar74;
          fVar64 = *(float *)(lVar33 + 0x70);
          fVar84 = *(float *)(lVar33 + 0x98);
          fVar85 = *(float *)(lVar33 + 0xc0);
          *pfVar38 = fVar75 + (fVar60 - fVar74) / fVar61;
          *(float *)(lVar33 + 0x8c) = fVar75 + (fVar64 - fVar74) / fVar61;
          *(float *)(lVar33 + 0xb4) = fVar75 + (fVar84 - fVar74) / fVar61;
          *(float *)(lVar33 + 0xdc) = fVar75 + (fVar85 - fVar74) / fVar61;
        }
      }
    }
    else if (iVar29 == 2) {
      lVar33 = lVar32 + uVar30 * 0x178;
      *(float *)(lVar33 + 100) =
           fVar75 + ((fStack0000000000000100 + *(float *)(lVar33 + 0x48)) -
                    *(float *)(unaff_x19 + 0x9e)) /
                    (*(float *)(unaff_x19 + 0x9f) - *(float *)(unaff_x19 + 0x9e));
      *(float *)(lVar33 + 0x8c) =
           fVar75 + ((fStack0000000000000100 + *(float *)(lVar33 + 0x70)) -
                    *(float *)(unaff_x19 + 0x9e)) /
                    (*(float *)(unaff_x19 + 0x9f) - *(float *)(unaff_x19 + 0x9e));
      *(float *)(lVar33 + 0xb4) =
           fVar75 + ((fStack0000000000000100 + *(float *)(lVar33 + 0x98)) -
                    *(float *)(unaff_x19 + 0x9e)) /
                    (*(float *)(unaff_x19 + 0x9f) - *(float *)(unaff_x19 + 0x9e));
      *(float *)(lVar33 + 0xdc) =
           fVar75 + ((fStack0000000000000100 + *(float *)(lVar33 + 0xc0)) -
                    *(float *)(unaff_x19 + 0x9e)) /
                    (*(float *)(unaff_x19 + 0x9f) - *(float *)(unaff_x19 + 0x9e));
    }
    else if (iVar29 == 3) {
      iVar29 = (int)unaff_x19[0x69];
      if (iVar29 < 2) {
        if (iVar29 == 0) {
          lVar33 = lVar32 + uVar30 * 0x178;
          *(undefined4 *)(lVar33 + 0x68) = 0;
          *(undefined4 *)(lVar33 + 0x90) = 0x3f800000;
          *(undefined4 *)(lVar33 + 0xb8) = 0;
          *(undefined4 *)(lVar33 + 0xe0) = 0x3f800000;
        }
        else if (iVar29 == 1) {
          lVar33 = lVar32 + uVar30 * 0x178;
          fVar60 = fVar60 - fVar64;
          fVar61 = (*(float *)(lVar33 + 0x74) - fVar64) / fVar60;
          fVar60 = fVar75 + (*(float *)(lVar33 + 0x4c) - fVar64) / fVar60;
          *(float *)(lVar33 + 0x68) = fVar60;
          *(float *)(lVar33 + 0xb8) = fVar60;
          goto LAB_061352bc;
        }
      }
      else if (iVar29 == 2) {
        lVar33 = lVar32 + uVar30 * 0x178;
        fVar60 = fVar75 + (*(float *)(lVar33 + 0x4c) - *(float *)((long)unaff_x19 + 0x4f4)) /
                          (*(float *)((long)unaff_x19 + 0x4fc) - *(float *)((long)unaff_x19 + 0x4f4)
                          );
        *(float *)(lVar33 + 0x68) = fVar60;
        fVar61 = *(float *)((long)unaff_x19 + 0x4f4);
        fVar64 = *(float *)((long)unaff_x19 + 0x4fc);
        *(float *)(lVar33 + 0xb8) = fVar60;
        fVar61 = (*(float *)(lVar33 + 0x74) - fVar61) / (fVar64 - fVar61);
LAB_061352bc:
        *(float *)(lVar33 + 0x90) = fVar75 + fVar61;
        *(float *)(lVar33 + 0xe0) = fVar75 + fVar61;
      }
      else if (iVar29 == 3) {
        if (*(int *)(*(long *)PTR_DAT_069fb930 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        FUN_0630b598(*(undefined8 *)
                      Method_System_HashCode_Combine<Vector4,_Vector4,_Vector4,_SHCoefficients>__,0)
        ;
        uVar23 = (uint)*(undefined8 *)(lVar49 + 0x18);
      }
      if (uVar23 <= uVar52) goto LAB_0613719c;
      lVar33 = lVar32 + uVar30 * 0x178;
      fVar64 = *(float *)(lVar33 + 0x138);
      fVar61 = (1.0 - (*(float *)(lVar33 + 0x68) + *(float *)(lVar33 + 0x90)) * fVar64) * 0.5;
      fVar60 = fVar75 + *(float *)(lVar33 + 0x68) * fVar64 + fVar61;
      fVar75 = fVar75 + fVar61 + *(float *)(lVar33 + 0x90) * fVar64;
      *(float *)(lVar33 + 100) = fVar60;
      *(float *)(lVar33 + 0x8c) = fVar60;
      *(float *)(lVar33 + 0xb4) = fVar75;
      *(float *)(lVar33 + 0xdc) = fVar75;
    }
    iVar29 = (int)unaff_x19[0x69];
    if (iVar29 < 2) {
      if (iVar29 == 0) {
        if (uVar23 <= uVar52) goto LAB_0613719c;
        lVar33 = lVar32 + uVar30 * 0x178;
        *(undefined4 *)(lVar33 + 0x68) = 0;
        *(undefined4 *)(lVar33 + 0x90) = 0x3f800000;
        *(undefined4 *)(lVar33 + 0xb8) = 0x3f800000;
        *(undefined4 *)(lVar33 + 0xe0) = 0;
      }
      else if (iVar29 == 1) {
        if (uVar52 < uVar23) {
          lVar33 = lVar32 + uVar30 * 0x178;
          fVar62 = fVar62 - fVar97;
          fVar75 = (*(float *)(lVar33 + 0x4c) - fVar97) / fVar62;
          fVar62 = (*(float *)(lVar33 + 0x74) - fVar97) / fVar62;
          *(float *)(lVar33 + 0x68) = fVar75;
          goto LAB_06135434;
        }
        goto LAB_0613719c;
      }
    }
    else if (iVar29 == 2) {
      if (uVar23 <= uVar52) goto LAB_0613719c;
      lVar33 = lVar32 + uVar30 * 0x178;
      fVar75 = (*(float *)(lVar33 + 0x4c) - *(float *)((long)unaff_x19 + 0x4f4)) /
               (*(float *)((long)unaff_x19 + 0x4fc) - *(float *)((long)unaff_x19 + 0x4f4));
      *(float *)(lVar33 + 0x68) = fVar75;
      fVar62 = (*(float *)(lVar33 + 0x74) - *(float *)((long)unaff_x19 + 0x4f4)) /
               (*(float *)((long)unaff_x19 + 0x4fc) - *(float *)((long)unaff_x19 + 0x4f4));
LAB_06135434:
      *(float *)(lVar33 + 0x90) = fVar62;
      *(float *)(lVar33 + 0xb8) = fVar62;
      *(float *)(lVar33 + 0xe0) = fVar75;
    }
    else if (iVar29 == 3) {
      if (uVar23 <= uVar52) goto LAB_0613719c;
      lVar33 = lVar32 + uVar30 * 0x178;
      fVar61 = *(float *)(lVar33 + 0x138);
      fVar60 = (1.0 - (*(float *)(lVar33 + 100) + *(float *)(lVar33 + 0xb4)) / fVar61) * 0.5;
      fVar75 = *(float *)(lVar33 + 100) / fVar61 + fVar60;
      fVar60 = fVar60 + *(float *)(lVar33 + 0xb4) / fVar61;
      *(float *)(lVar33 + 0x68) = fVar75;
      *(float *)(lVar33 + 0xe0) = fVar75;
      *(float *)(lVar33 + 0x90) = fVar60;
      *(float *)(lVar33 + 0xb8) = fVar60;
    }
    if (uVar23 <= uVar52) goto LAB_0613719c;
    lVar33 = lVar32 + uVar30 * 0x178;
    fVar75 = ABS(auVar79._0_4_) * *(float *)(lVar33 + 0x13c) * (1.0 - *(float *)(unaff_x19 + 0x60));
    if ((*(char *)(lVar33 + 0x34) == '\0') &&
       ((*(byte *)(lVar32 + uVar30 * 0x178 + 0x16c) & 1) != 0)) {
      fVar75 = -fVar75;
    }
    lVar33 = lVar32 + uVar30 * 0x178;
    *(float *)(lVar33 + 0x60) = fVar75;
    *(float *)(lVar33 + 0x88) = fVar75;
    *(float *)(lVar33 + 0xb0) = fVar75;
    *(float *)(lVar33 + 0xd8) = fVar75;
  }
  plVar54 = (long *)Method_System_HashCode_Combine<ulong,_int>__;
  if (((int)uVar52 < (int)unaff_x19[0x6c]) &&
     (iStack00000000000000dc < *(int *)((long)unaff_x19 + 0x364))) {
    if (((int)unaff_x19[0x6d] <= (int)uVar27) || ((int)unaff_x19[0x62] == 5)) {
      if (((int)uVar27 < (int)unaff_x19[0x6d]) && ((int)unaff_x19[0x62] == 5)) {
        if (uVar52 < uVar23) {
          if (*(uint *)(lVar32 + uVar30 * 0x178 + 0x40) == uVar7) {
            lVar47 = lVar32 + uVar30 * 0x178;
            *(ulong *)(lVar47 + 0x48) =
                 CONCAT44(fVar63 + (float)((ulong)*(undefined8 *)(lVar47 + 0x48) >> 0x20),
                          fVar80 + (float)*(undefined8 *)(lVar47 + 0x48));
            *(float *)(lVar47 + 0x50) = fVar95 + *(float *)(lVar47 + 0x50);
            *(ulong *)(lVar47 + 0x70) =
                 CONCAT44(fVar63 + (float)((ulong)*(undefined8 *)(lVar47 + 0x70) >> 0x20),
                          fVar80 + (float)*(undefined8 *)(lVar47 + 0x70));
            *(float *)(lVar47 + 0x78) = fVar95 + *(float *)(lVar47 + 0x78);
            *(ulong *)(lVar47 + 0x98) =
                 CONCAT44(fVar63 + (float)((ulong)*(undefined8 *)(lVar47 + 0x98) >> 0x20),
                          fVar80 + (float)*(undefined8 *)(lVar47 + 0x98));
            *(float *)(lVar47 + 0xa0) = fVar95 + *(float *)(lVar47 + 0xa0);
            *(ulong *)(lVar47 + 0xc0) =
                 CONCAT44(fVar63 + (float)((ulong)*(undefined8 *)(lVar47 + 0xc0) >> 0x20),
                          fVar80 + (float)*(undefined8 *)(lVar47 + 0xc0));
            *(float *)(lVar47 + 200) = fVar95 + *(float *)(lVar47 + 200);
            plVar54 = (long *)Method_System_HashCode_Combine<ulong,_int>__;
            goto LAB_06135658;
          }
          goto LAB_06135588;
        }
        goto LAB_0613719c;
      }
      goto LAB_06135588;
    }
    if (uVar23 <= uVar52) goto LAB_0613719c;
    lVar47 = lVar32 + uVar30 * 0x178;
    *(ulong *)(lVar47 + 0x48) =
         CONCAT44(fVar63 + (float)((ulong)*(undefined8 *)(lVar47 + 0x48) >> 0x20),
                  fVar80 + (float)*(undefined8 *)(lVar47 + 0x48));
    *(float *)(lVar47 + 0x50) = fVar95 + *(float *)(lVar47 + 0x50);
    *(ulong *)(lVar47 + 0x70) =
         CONCAT44(fVar63 + (float)((ulong)*(undefined8 *)(lVar47 + 0x70) >> 0x20),
                  fVar80 + (float)*(undefined8 *)(lVar47 + 0x70));
    *(float *)(lVar47 + 0x78) = fVar95 + *(float *)(lVar47 + 0x78);
    *(ulong *)(lVar47 + 0x98) =
         CONCAT44(fVar63 + (float)((ulong)*(undefined8 *)(lVar47 + 0x98) >> 0x20),
                  fVar80 + (float)*(undefined8 *)(lVar47 + 0x98));
    *(float *)(lVar47 + 0xa0) = fVar95 + *(float *)(lVar47 + 0xa0);
    *(ulong *)(lVar47 + 0xc0) =
         CONCAT44(fVar63 + (float)((ulong)*(undefined8 *)(lVar47 + 0xc0) >> 0x20),
                  fVar80 + (float)*(undefined8 *)(lVar47 + 0xc0));
    *(float *)(lVar47 + 200) = fVar95 + *(float *)(lVar47 + 200);
  }
  else {
LAB_06135588:
    if (uVar23 <= uVar52) goto LAB_0613719c;
    if (DAT_06db4c71 == '\0') {
      FUN_02d965b8(PTR_DAT_069fb978);
      uVar23 = *(uint *)(lVar49 + 0x18);
      DAT_06db4c71 = '\x01';
    }
    puVar12 = PTR_DAT_069fb978;
    uVar19 = *(undefined4 *)(*(undefined8 **)(*(long *)PTR_DAT_069fb978 + 0xb8) + 1);
    *(undefined8 *)(lVar32 + uVar30 * 0x178 + 0x48) =
         **(undefined8 **)(*(long *)PTR_DAT_069fb978 + 0xb8);
    *(undefined4 *)(lVar32 + uVar30 * 0x178 + 0x50) = uVar19;
    if (uVar23 <= uVar52) goto LAB_0613719c;
    lVar33 = lVar32 + uVar30 * 0x178;
    uVar19 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar12 + 0xb8) + 1);
    *(undefined8 *)(lVar33 + 0x70) = **(undefined8 **)(*(long *)puVar12 + 0xb8);
    *(undefined4 *)(lVar33 + 0x78) = uVar19;
    uVar19 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar12 + 0xb8) + 1);
    *(undefined8 *)(lVar33 + 0x98) = **(undefined8 **)(*(long *)puVar12 + 0xb8);
    *(undefined4 *)(lVar33 + 0xa0) = uVar19;
    uVar102 = **(undefined8 **)(*(long *)puVar12 + 0xb8);
    uVar19 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar12 + 0xb8) + 1);
    *(undefined1 *)(lVar47 + 0x170) = 0;
    *(undefined8 *)(lVar33 + 0xc0) = uVar102;
    *(undefined4 *)(lVar33 + 200) = uVar19;
    plVar54 = (long *)Method_System_HashCode_Combine<ulong,_int>__;
  }
LAB_06135658:
  iVar29 = FUN_06318350(0);
  *(bool *)((long)unaff_x19 + 0x174) = iVar29 == 1;
  if (iVar28 == 0) {
    puVar41 = (undefined8 *)(*unaff_x19 + 0x8d8);
  }
  else {
    if (iVar28 != 1) goto LAB_061356c0;
    puVar41 = (undefined8 *)(*unaff_x19 + 0x8f8);
  }
  (*(code *)*puVar41)();
LAB_061356c0:
  if ((unaff_x19[0x74] == 0) || (lVar47 = *(long *)(unaff_x19[0x74] + 0x38), lVar47 == 0))
  goto LAB_0613705c;
  if (*(uint *)(lVar47 + 0x18) <= uVar52) goto LAB_0613719c;
  lVar47 = lVar47 + uVar30 * 0x178;
  uVar102 = *(undefined8 *)(lVar47 + 0x114);
  *(float *)(lVar47 + 0x11c) = fVar95 + *(float *)(lVar47 + 0x11c);
  *(undefined8 *)(lVar47 + 0x114) =
       CONCAT44(fVar63 + (float)((ulong)uVar102 >> 0x20),fVar80 + (float)uVar102);
  if ((unaff_x19[0x74] == 0) || (lVar47 = *(long *)(unaff_x19[0x74] + 0x38), lVar47 == 0))
  goto LAB_0613705c;
  if (*(uint *)(lVar47 + 0x18) <= uVar52) goto LAB_0613719c;
  lVar47 = lVar47 + uVar30 * 0x178;
  *(ulong *)(lVar47 + 0x108) =
       CONCAT44(fVar63 + (float)((ulong)*(undefined8 *)(lVar47 + 0x108) >> 0x20),
                fVar80 + (float)*(undefined8 *)(lVar47 + 0x108));
  *(float *)(lVar47 + 0x110) = fVar95 + *(float *)(lVar47 + 0x110);
  if ((unaff_x19[0x74] == 0) || (lVar47 = *(long *)(unaff_x19[0x74] + 0x38), lVar47 == 0))
  goto LAB_0613705c;
  if (*(uint *)(lVar47 + 0x18) <= uVar52) goto LAB_0613719c;
  lVar47 = lVar47 + uVar30 * 0x178;
  *(ulong *)(lVar47 + 0x120) =
       CONCAT44(fVar63 + (float)((ulong)*(undefined8 *)(lVar47 + 0x120) >> 0x20),
                fVar80 + (float)*(undefined8 *)(lVar47 + 0x120));
  *(float *)(lVar47 + 0x128) = fVar95 + *(float *)(lVar47 + 0x128);
  if ((unaff_x19[0x74] == 0) || (lVar47 = *(long *)(unaff_x19[0x74] + 0x38), lVar47 == 0))
  goto LAB_0613705c;
  if (*(uint *)(lVar47 + 0x18) <= uVar52) goto LAB_0613719c;
  lVar47 = lVar47 + uVar30 * 0x178;
  uVar102 = *(undefined8 *)(lVar47 + 300);
  *(float *)(lVar47 + 0x134) = fVar95 + *(float *)(lVar47 + 0x134);
  *(undefined8 *)(lVar47 + 300) =
       CONCAT44(fVar63 + (float)((ulong)uVar102 >> 0x20),fVar80 + (float)uVar102);
  lVar47 = unaff_x19[0x74];
  if ((lVar47 == 0) || (lVar33 = *(long *)(lVar47 + 0x38), lVar33 == 0)) goto LAB_0613705c;
  uVar23 = *(uint *)(lVar33 + 0x18);
  if (uVar23 <= uVar52) goto LAB_0613719c;
  lVar48 = lVar33 + 0x20 + uVar30 * 0x178;
  uVar102 = *(undefined8 *)(lVar48 + 0x118);
  auVar73._0_8_ = CONCAT44(fVar80 + (float)((ulong)uVar102 >> 0x20),fVar80 + (float)uVar102);
  auVar73._8_4_ = fVar63 + (float)*(undefined8 *)(lVar48 + 0x120);
  auVar73._12_4_ = fVar63 + (float)((ulong)*(undefined8 *)(lVar48 + 0x120) >> 0x20);
  *(float *)(lVar48 + 0x128) = fVar63 + *(float *)(lVar48 + 0x128);
  *(long *)(lVar48 + 0x120) = auVar73._8_8_;
  *(undefined8 *)(lVar48 + 0x118) = auVar73._0_8_;
  if (uVar27 == uVar21) {
    uVar21 = *(int *)((long)unaff_x19 + 0x4a4) - 1;
    if (uVar52 == uVar21) goto LAB_061358cc;
  }
  else {
    lVar47 = *(long *)(lVar47 + 0x50);
    if (lVar47 == 0) goto LAB_0613705c;
    if (*(uint *)(lVar47 + 0x18) <= uVar21) goto LAB_0613719c;
    lVar48 = lVar47 + 0x20 + (long)(int)uVar21 * 0x60;
    fVar60 = fVar63 + *(float *)(lVar48 + 0x38);
    *(ulong *)(lVar48 + 0x30) =
         CONCAT44(fVar63 + (float)((ulong)*(undefined8 *)(lVar48 + 0x30) >> 0x20),
                  fVar63 + (float)*(undefined8 *)(lVar48 + 0x30));
    *(float *)(lVar48 + 0x38) = fVar60;
    *(float *)(lVar48 + 0x3c) = fVar80 + *(float *)(lVar48 + 0x3c);
    if (uVar23 <= *(uint *)(lVar48 + 0x18)) goto LAB_0613719c;
    lVar47 = lVar47 + 0x20 + (long)(int)uVar21 * 0x60;
    uVar19 = *(undefined4 *)(lVar33 + 0x20 + (long)(int)*(uint *)(lVar48 + 0x18) * 0x178 + 0xf4);
    *(float *)(lVar47 + 0x54) = fVar60;
    *(undefined4 *)(lVar47 + 0x50) = uVar19;
    lVar47 = unaff_x19[0x74];
    if ((lVar47 == 0) || (lVar33 = *(long *)(lVar47 + 0x50), lVar33 == 0)) goto LAB_0613705c;
    if (*(uint *)(lVar33 + 0x18) <= uVar21) goto LAB_0613719c;
    lVar47 = *(long *)(lVar47 + 0x38);
    if (lVar47 == 0) goto LAB_0613705c;
    uVar23 = *(uint *)(lVar33 + 0x20 + (long)(int)uVar21 * 0x60 + 0x24);
    if (*(uint *)(lVar47 + 0x18) <= uVar23) goto LAB_0613719c;
    lVar33 = lVar33 + 0x20 + (long)(int)uVar21 * 0x60;
    *(undefined4 *)(lVar33 + 0x58) = *(undefined4 *)(lVar47 + (long)(int)uVar23 * 0x178 + 0x120);
    *(undefined4 *)(lVar33 + 0x5c) = *(undefined4 *)(lVar33 + 0x30);
    uVar21 = *(int *)((long)unaff_x19 + 0x4a4) - 1;
LAB_061358cc:
    if (uVar52 == uVar21) {
      lVar47 = unaff_x19[0x74];
      if ((lVar47 == 0) || (lVar33 = *(long *)(lVar47 + 0x50), lVar33 == 0)) goto LAB_0613705c;
      if (*(uint *)(lVar33 + 0x18) <= uVar27) goto LAB_0613719c;
      lVar48 = lVar33 + 0x20 + (long)(int)uVar27 * 0x60;
      fVar60 = fVar63 + *(float *)(lVar48 + 0x38);
      *(ulong *)(lVar48 + 0x30) =
           CONCAT44(fVar63 + (float)((ulong)*(undefined8 *)(lVar48 + 0x30) >> 0x20),
                    fVar63 + (float)*(undefined8 *)(lVar48 + 0x30));
      *(float *)(lVar48 + 0x38) = fVar60;
      *(float *)(lVar48 + 0x3c) = fVar80 + *(float *)(lVar48 + 0x3c);
      lVar47 = *(long *)(lVar47 + 0x38);
      if (lVar47 == 0) goto LAB_0613705c;
      uVar21 = *(uint *)(lVar33 + 0x20 + (long)(int)uVar27 * 0x60 + 0x18);
      if (*(uint *)(lVar47 + 0x18) <= uVar21) goto LAB_0613719c;
      *(undefined4 *)(lVar48 + 0x50) = *(undefined4 *)(lVar47 + (long)(int)uVar21 * 0x178 + 0x114);
      *(float *)(lVar48 + 0x54) = fVar60;
      lVar47 = unaff_x19[0x74];
      if ((lVar47 == 0) || (lVar33 = *(long *)(lVar47 + 0x50), lVar33 == 0)) goto LAB_0613705c;
      if (*(uint *)(lVar33 + 0x18) <= uVar27) goto LAB_0613719c;
      lVar47 = *(long *)(lVar47 + 0x38);
      if (lVar47 == 0) goto LAB_0613705c;
      uVar21 = *(uint *)(lVar33 + 0x20 + (long)(int)uVar27 * 0x60 + 0x24);
      if (*(uint *)(lVar47 + 0x18) <= uVar21) goto LAB_0613719c;
      lVar33 = lVar33 + 0x20 + (long)(int)uVar27 * 0x60;
      *(undefined4 *)(lVar33 + 0x58) = *(undefined4 *)(lVar47 + (long)(int)uVar21 * 0x178 + 0x120);
      *(undefined4 *)(lVar33 + 0x5c) = *(undefined4 *)(lVar33 + 0x30);
    }
  }
  if (*(int *)(*(long *)(PTR_DAT_069fb9c0 + 0x88) + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  uVar50 = FUN_05458704(uVar22,0);
  if (((((uVar50 & 1) == 0) && (1 < uVar22 - 0x2010)) && (uVar22 != 0xad)) && (uVar22 != 0x2d)) {
    if (bVar15) {
      if (((uVar52 != 0) && ((int)uVar52 < (int)(*(uint *)(lVar49 + 0x18) - 1))) &&
         (((int)uVar52 < *(int *)((long)unaff_x19 + 0x4a4) &&
          ((uVar22 == 0x2019 || (uVar22 == 0x27)))))) {
        if (*(uint *)(lVar49 + 0x18) <= uVar52 - 1) goto LAB_0613719c;
        uVar5 = *(undefined2 *)(lVar32 + (ulong)(uVar52 - 1) * 0x178 + 4);
        if (*(int *)(*(long *)(PTR_DAT_069fb9c0 + 0x88) + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        uVar50 = FUN_05458704(uVar5,0);
        if ((uVar50 & 1) != 0) {
          if (*(uint *)(lVar49 + 0x18) <= uVar52 + 1) goto LAB_0613719c;
          uVar5 = *(undefined2 *)(lVar32 + (ulong)(uVar52 + 1) * 0x178 + 4);
          if (*(int *)(*(long *)(PTR_DAT_069fb9c0 + 0x88) + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          uVar50 = FUN_05458704(uVar5,0);
          if ((uVar50 & 1) != 0) goto LAB_06135bc0;
        }
      }
LAB_06136938:
      if (uVar52 == *(int *)((long)unaff_x19 + 0x4a4) - 1U) {
        if (*(int *)(*(long *)(PTR_DAT_069fb9c0 + 0x88) + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        uVar50 = FUN_05458704(uVar22,0);
        uVar21 = uVar52;
        if ((uVar50 & 1) == 0) goto LAB_06136974;
      }
      else {
LAB_06136974:
        uVar21 = uVar52 - 1;
      }
      lVar47 = unaff_x19[0x74];
      if (lVar47 != 0) {
        lVar33 = *(long *)(lVar47 + 0x40);
        if (lVar33 != 0) {
          uVar23 = *(uint *)(lVar47 + 0x24);
          iVar28 = *(int *)(lVar33 + 0x18);
          if (iVar28 < (int)(uVar23 + 1)) {
            if (*(int *)(*(long *)Method_System_HashCode_Add<bool>__ + 0xe4) == 0) {
              thunk_FUN_02df485c();
            }
            FUN_0383ec94((long *)(lVar47 + 0x40),iVar28 + 1,
                         *(undefined8 *)Method_System_Security_Cryptography_HashAlgorithm_get_Hash__
                        );
            lVar47 = unaff_x19[0x74];
            if (lVar47 == 0) goto LAB_0613705c;
          }
          lVar47 = *(long *)(lVar47 + 0x40);
          if (lVar47 != 0) {
            if (uVar23 < *(uint *)(lVar47 + 0x18)) {
              lVar47 = lVar47 + (long)(int)uVar23 * 0x18;
              *(long **)(lVar47 + 0x20) = unaff_x19;
              *(uint *)(lVar47 + 0x28) = uVar20;
              *(uint *)(lVar47 + 0x2c) = uVar21;
              *(uint *)(lVar47 + 0x30) = (uVar21 - uVar20) + 1;
              LeanTween__value();
              lVar47 = unaff_x19[0x74];
              if (lVar47 != 0) {
                lVar33 = *(long *)(lVar47 + 0x50);
                *(int *)(lVar47 + 0x24) = *(int *)(lVar47 + 0x24) + 1;
                if (lVar33 != 0) {
                  if (uVar27 < *(uint *)(lVar33 + 0x18)) {
                    bVar15 = false;
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
    if (uVar52 == 0) {
      if (*(int *)(*(long *)(PTR_DAT_069fb9c0 + 0x88) + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      bVar18 = FUN_0545865c(uVar22,0);
      if ((((uVar22 == 0x200b | bVar18 ^ 0xff | bVar17) & 1) != 0) ||
         (*(int *)((long)unaff_x19 + 0x4a4) == 1)) goto LAB_06136938;
    }
    bVar15 = false;
  }
  else {
    if (!bVar15) {
      uVar20 = uVar52;
    }
    if (uVar52 != *(int *)((long)unaff_x19 + 0x4a4) - 1U) {
LAB_06135bc0:
      bVar15 = true;
      goto LAB_06135bc8;
    }
    lVar47 = unaff_x19[0x74];
    if (lVar47 == 0) goto LAB_0613705c;
    lVar33 = *(long *)(lVar47 + 0x40);
    if (lVar33 == 0) goto LAB_0613705c;
    uVar21 = *(uint *)(lVar47 + 0x24);
    iVar28 = *(int *)(lVar33 + 0x18);
    if (iVar28 < (int)(uVar21 + 1)) {
      if (*(int *)(*(long *)Method_System_HashCode_Add<bool>__ + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      FUN_0383ec94((long *)(lVar47 + 0x40),iVar28 + 1,
                   *(undefined8 *)Method_System_Security_Cryptography_HashAlgorithm_get_Hash__);
      lVar47 = unaff_x19[0x74];
      if (lVar47 == 0) goto LAB_0613705c;
    }
    lVar47 = *(long *)(lVar47 + 0x40);
    if (lVar47 == 0) goto LAB_0613705c;
    if (*(uint *)(lVar47 + 0x18) <= uVar21) goto LAB_0613719c;
    lVar47 = lVar47 + (long)(int)uVar21 * 0x18;
    *(long **)(lVar47 + 0x20) = unaff_x19;
    *(uint *)(lVar47 + 0x28) = uVar20;
    *(uint *)(lVar47 + 0x2c) = uVar52;
    *(uint *)(lVar47 + 0x30) = (uVar52 - uVar20) + 1;
    LeanTween__value();
    lVar47 = unaff_x19[0x74];
    if (lVar47 == 0) goto LAB_0613705c;
    lVar33 = *(long *)(lVar47 + 0x50);
    *(int *)(lVar47 + 0x24) = *(int *)(lVar47 + 0x24) + 1;
    if (lVar33 == 0) goto LAB_0613705c;
    if (*(uint *)(lVar33 + 0x18) <= uVar27) goto LAB_0613719c;
    bVar15 = true;
LAB_06135ad4:
    lVar33 = lVar33 + (long)(int)uVar27 * 0x60;
    iStack00000000000000dc = iStack00000000000000dc + 1;
    *(int *)(lVar33 + 0x34) = *(int *)(lVar33 + 0x34) + 1;
  }
LAB_06135bc8:
  lVar47 = unaff_x19[0x74];
  if ((lVar47 == 0) || (lVar33 = *(long *)(lVar47 + 0x38), lVar33 == 0)) goto LAB_0613705c;
  if (*(uint *)(lVar33 + 0x18) <= uVar52) goto LAB_0613719c;
  lVar48 = lVar33 + 0x20;
  if ((*(byte *)(lVar48 + uVar30 * 0x178 + 0x16c) >> 2 & 1) == 0) {
    if (bVar14) {
      if (*(uint *)(lVar33 + 0x18) <= (uint)((long)(int)uVar52 + -1)) goto LAB_0613719c;
      lVar48 = lVar48 + ((long)(int)uVar52 + -1) * 0x178;
      lVar33 = *unaff_x19;
      uVar19 = *(undefined4 *)(lVar48 + 0x100);
      uVar86 = *(undefined4 *)(lVar48 + 0x13c);
LAB_06135e74:
      pcVar42 = *(code **)(lVar33 + 0x908);
LAB_06135eac:
      (*pcVar42)(fStack0000000000000074,fStack000000000000006c,fStack0000000000000070,uVar19,
                 fStack0000000000000120,0,fStack0000000000000078,uVar86);
      lVar47 = *plVar54;
      if (*(int *)(lVar47 + 0xe4) == 0) {
        thunk_FUN_02df485c();
        lVar47 = *plVar54;
      }
      fStack000000000000013c = 0.0;
      fStack000000000000011c = 0.0;
      fStack0000000000000120 = *(float *)(*(long *)(lVar47 + 0xb8) + 0x1730);
    }
    bVar14 = false;
  }
  else {
    lVar33 = lVar48 + uVar30 * 0x178;
    *(int *)(lVar33 + 0x148) = iVar57;
    iVar28 = *(int *)(lVar33 + 0x40);
    if ((((int)unaff_x19[0x6c] < (int)uVar52) || ((int)unaff_x19[0x6d] < (int)uVar27)) ||
       (((int)unaff_x19[0x62] == 5 && (iVar28 + 1 != (int)unaff_x19[0x6e])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar17 & 1) == 0 && uVar22 != 0x200b) {
      fVar80 = *(float *)(lVar48 + uVar30 * 0x178 + 0x13c);
      if (fStack000000000000013c <= fVar80) {
        fStack000000000000013c = fVar80;
      }
      if (fStack000000000000011c <= ABS(fVar75)) {
        fStack000000000000011c = ABS(fVar75);
      }
      if (iVar28 != iVar45) {
        if (*(int *)(*plVar54 + 0xe4) == 0) {
          thunk_FUN_02df485c();
          lVar47 = unaff_x19[0x74];
          if (lVar47 == 0) goto LAB_0613705c;
          lVar33 = *(long *)(*plVar54 + 0xb8);
        }
        else {
          lVar33 = *(long *)(*plVar54 + 0xb8);
        }
        fStack0000000000000120 = *(float *)(lVar33 + 0x1730);
      }
      lVar47 = *(long *)(lVar47 + 0x38);
      if (lVar47 == 0) goto LAB_0613705c;
      if (*(uint *)(lVar47 + 0x18) <= uVar52) goto LAB_0613719c;
      if (unaff_x19[0x1f] == 0) goto LAB_0613705c;
      fVar60 = *(float *)(lVar47 + uVar30 * 0x178 + 0x144);
      fVar80 = (float)FUN_063ecc60(unaff_x19[0x1f] + 0x28,0);
      fVar60 = fVar60 + fStack000000000000013c * fVar80;
      iVar45 = iVar28;
      if (fVar60 <= fStack0000000000000120) {
        fStack0000000000000120 = fVar60;
      }
    }
    if (!bVar14) {
      bVar14 = false;
      if ((bVar1) && ((int)uVar52 <= (int)uVar103)) {
        if ((uVar22 & 0xfffe) == 10) goto LAB_06135ee8;
        if (uVar22 != 0xd) {
          if (uVar52 == uVar103) {
            if (*(int *)(*(long *)(PTR_DAT_069fb9c0 + 0x88) + 0xe4) == 0) {
              thunk_FUN_02df485c();
            }
            uVar50 = FUN_054594b0(uVar22,0);
            if ((uVar50 & 1) != 0) goto LAB_06135dc8;
          }
          if ((unaff_x19[0x74] != 0) && (lVar47 = *(long *)(unaff_x19[0x74] + 0x38), lVar47 != 0)) {
            if (uVar52 < *(uint *)(lVar47 + 0x18)) {
              lVar47 = lVar47 + uVar30 * 0x178;
              fStack0000000000000078 = *(float *)(lVar47 + 0x15c);
              fVar80 = fVar75;
              fVar60 = fStack0000000000000078;
              if (fStack000000000000013c != 0.0) {
                fVar80 = fStack000000000000011c;
                fVar60 = fStack000000000000013c;
              }
              fStack000000000000013c = fVar60;
              fStack0000000000000070 = 0.0;
              fStack0000000000000074 = *(float *)(lVar47 + 0x114);
              uStack000000000000007c = *(undefined4 *)(lVar47 + 0x164);
              fStack000000000000006c = fStack0000000000000120;
              fStack000000000000011c = fVar80;
              goto LAB_06135e34;
            }
            goto LAB_0613719c;
          }
          goto LAB_0613705c;
        }
      }
LAB_06135dc8:
      bVar14 = false;
      goto LAB_06135ee8;
    }
LAB_06135e34:
    if (*(int *)((long)unaff_x19 + 0x4a4) == 1) {
      if ((unaff_x19[0x74] != 0) && (lVar47 = *(long *)(unaff_x19[0x74] + 0x38), lVar47 != 0)) {
        if (uVar52 < *(uint *)(lVar47 + 0x18)) {
          lVar47 = lVar47 + uVar30 * 0x178;
LAB_06135e68:
          lVar33 = *unaff_x19;
          uVar19 = *(undefined4 *)(lVar47 + 0x120);
          uVar86 = *(undefined4 *)(lVar47 + 0x15c);
          goto LAB_06135e74;
        }
        goto LAB_0613719c;
      }
      goto LAB_0613705c;
    }
    if ((uVar52 == uVar6) || ((int)uVar103 <= (int)uVar52)) {
      lVar47 = unaff_x19[0x74];
      if ((bVar17 & 1) == 0 && uVar22 != 0x200b) {
        if ((lVar47 == 0) || (lVar47 = *(long *)(lVar47 + 0x38), lVar47 == 0)) goto LAB_0613705c;
        if (*(uint *)(lVar47 + 0x18) <= uVar52) goto LAB_0613719c;
        lVar47 = lVar47 + uVar30 * 0x178;
      }
      else {
        if ((lVar47 == 0) || (lVar47 = *(long *)(lVar47 + 0x38), lVar47 == 0)) goto LAB_0613705c;
        if (*(uint *)(lVar47 + 0x18) <= uVar103) goto LAB_0613719c;
        lVar47 = lVar47 + (long)(int)uVar103 * 0x178;
      }
      uVar19 = *(undefined4 *)(lVar47 + 0x120);
      uVar86 = *(undefined4 *)(lVar47 + 0x15c);
      pcVar42 = *(code **)(*unaff_x19 + 0x908);
      goto LAB_06135eac;
    }
    if (!bVar1) {
      if ((unaff_x19[0x74] != 0) && (lVar47 = *(long *)(unaff_x19[0x74] + 0x38), lVar47 != 0)) {
        if ((uint)((long)(int)uVar52 + -1) < *(uint *)(lVar47 + 0x18)) {
          lVar47 = lVar47 + ((long)(int)uVar52 + -1) * 0x178;
          goto LAB_06135e68;
        }
        goto LAB_0613719c;
      }
      goto LAB_0613705c;
    }
    if ((int)uVar52 < *(int *)((long)unaff_x19 + 0x4a4) + -1) {
      if ((unaff_x19[0x74] == 0) || (lVar47 = *(long *)(unaff_x19[0x74] + 0x38), lVar47 == 0))
      goto LAB_0613705c;
      if (*(uint *)(lVar47 + 0x18) <= uVar52 + 1) goto LAB_0613719c;
      uVar50 = FUN_06151678(uStack000000000000007c,
                            *(undefined4 *)(lVar47 + (ulong)(uVar52 + 1) * 0x178 + 0x164),0);
      if ((uVar50 & 1) == 0) {
        if ((unaff_x19[0x74] != 0) && (lVar47 = *(long *)(unaff_x19[0x74] + 0x38), lVar47 != 0)) {
          if (uVar52 < *(uint *)(lVar47 + 0x18)) {
            lVar47 = lVar47 + uVar30 * 0x178;
            uVar19 = *(undefined4 *)(lVar47 + 0x120);
            uVar86 = *(undefined4 *)(lVar47 + 0x15c);
            pcVar42 = *(code **)(*unaff_x19 + 0x908);
            goto LAB_06135eac;
          }
          goto LAB_0613719c;
        }
        goto LAB_0613705c;
      }
      bVar14 = true;
    }
    else {
      bVar14 = true;
    }
  }
LAB_06135ee8:
  if ((unaff_x19[0x74] == 0) || (lVar47 = *(long *)(unaff_x19[0x74] + 0x38), lVar47 == 0))
  goto LAB_0613705c;
  if (*(uint *)(lVar47 + 0x18) <= uVar52) goto LAB_0613719c;
  if (lVar31 == 0) goto LAB_0613705c;
  uVar21 = *(uint *)(lVar47 + uVar30 * 0x178 + 0x18c);
  fVar80 = (float)FUN_063ecc70(lVar31 + 0x28,0);
  if ((uVar21 >> 6 & 1) == 0) {
    if (bVar10) {
      if ((unaff_x19[0x74] == 0) || (lVar31 = *(long *)(unaff_x19[0x74] + 0x38), lVar31 == 0))
      goto LAB_0613705c;
      if (*(uint *)(lVar31 + 0x18) <= (uint)((long)(int)uVar52 + -1)) goto LAB_0613719c;
      lVar31 = lVar31 + ((long)(int)uVar52 + -1) * 0x178;
LAB_06136194:
      fVar60 = *(float *)(lVar31 + 0x144);
      lVar47 = *unaff_x19;
      uVar19 = *(undefined4 *)(lVar31 + 0x120);
LAB_06136414:
      (**(code **)(lVar47 + 0x908))
                (fStack0000000000000094,fStack0000000000000098,fVar89,uVar19,
                 fStack000000000000009c * fVar80 + fVar60,0,fStack000000000000009c,
                 fStack000000000000009c);
    }
LAB_06136450:
    bVar10 = false;
  }
  else {
    lVar47 = unaff_x19[0x74];
    if ((lVar47 == 0) || (lVar33 = *(long *)(lVar47 + 0x38), lVar33 == 0)) goto LAB_0613705c;
    if (*(uint *)(lVar33 + 0x18) <= uVar52) goto LAB_0613719c;
    *(int *)(lVar33 + 0x20 + uVar30 * 0x178 + 0x150) = iVar57;
    if ((((int)unaff_x19[0x6c] < (int)uVar52) || ((int)unaff_x19[0x6d] < (int)uVar27)) ||
       (((int)unaff_x19[0x62] == 5 &&
        (*(int *)(lVar33 + 0x20 + uVar30 * 0x178 + 0x40) + 1 != (int)unaff_x19[0x6e])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (((((bool)(bVar10 | bVar1 ^ 1U)) || ((int)uVar103 < (int)uVar52)) ||
        ((uVar22 & 0xfffe) == 10)) || (uVar22 == 0xd)) {
LAB_06136024:
      if (!bVar10) goto LAB_06136450;
    }
    else {
      if (uVar52 == uVar103) {
        if (*(int *)(*(long *)(PTR_DAT_069fb9c0 + 0x88) + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        uVar50 = FUN_054594b0(uVar22,0);
        if ((uVar50 & 1) != 0) goto LAB_06136024;
        lVar47 = unaff_x19[0x74];
        if (lVar47 == 0) goto LAB_0613705c;
      }
      lVar47 = *(long *)(lVar47 + 0x38);
      if (lVar47 == 0) goto LAB_0613705c;
      if (*(uint *)(lVar47 + 0x18) <= uVar52) goto LAB_0613719c;
      lVar47 = lVar47 + uVar30 * 0x178;
      fStack000000000000009c = *(float *)(lVar47 + 0x15c);
      fStack0000000000000098 = fVar80 * fStack000000000000009c + *(float *)(lVar47 + 0x144);
      fVar89 = 0.0;
      fStack0000000000000054 = *(float *)(lVar47 + 0x58);
      fStack0000000000000094 = *(float *)(lVar47 + 0x114);
    }
    iVar28 = *(int *)((long)unaff_x19 + 0x4a4);
    if (iVar28 == 1) {
LAB_06136168:
      if ((unaff_x19[0x74] != 0) && (lVar31 = *(long *)(unaff_x19[0x74] + 0x38), lVar31 != 0)) {
        if (uVar52 < *(uint *)(lVar31 + 0x18)) {
          lVar31 = lVar31 + uVar30 * 0x178;
          goto LAB_06136194;
        }
        goto LAB_0613719c;
      }
      goto LAB_0613705c;
    }
    if (uVar52 == uVar6) {
      lVar31 = unaff_x19[0x74];
      if ((uVar22 != 0x200b & (bVar17 ^ 0xff)) == 0) goto LAB_061361cc;
LAB_061363d8:
      if ((lVar31 != 0) && (lVar31 = *(long *)(lVar31 + 0x38), lVar31 != 0)) {
        if (uVar52 < *(uint *)(lVar31 + 0x18)) {
          lVar31 = lVar31 + uVar30 * 0x178;
LAB_061363f8:
          fVar60 = *(float *)(lVar31 + 0x144);
          lVar47 = *unaff_x19;
          uVar19 = *(undefined4 *)(lVar31 + 0x120);
          goto LAB_06136414;
        }
        goto LAB_0613719c;
      }
      goto LAB_0613705c;
    }
    if ((int)uVar52 < iVar28) {
      if ((unaff_x19[0x74] != 0) && (lVar47 = *(long *)(unaff_x19[0x74] + 0x38), lVar47 != 0)) {
        if (uVar52 + 1 < *(uint *)(lVar47 + 0x18)) {
          if (*(float *)(lVar47 + (ulong)(uVar52 + 1) * 0x178 + 0x58) == fStack0000000000000054) {
            if (*(int *)(*(long *)
                          Method_UnityEngine_XR_Interaction_Toolkit_UI_BodyUI_HandMenu_OnMenuVisible__
                        + 0xe4) == 0) {
              thunk_FUN_02df485c();
            }
            uVar50 = FUN_06151b7c(0);
            if ((uVar50 & 1) != 0) {
              iVar28 = *(int *)((long)unaff_x19 + 0x4a4);
              goto 
              UnityEngine_XR_Interaction_Toolkit_Locomotion_Comfort_VignetteParameters__set_vignetteColor
              ;
            }
          }
          lVar31 = unaff_x19[0x74];
          if ((int)uVar52 <= (int)uVar103) goto LAB_061363d8;
LAB_061361cc:
          if ((lVar31 != 0) && (lVar31 = *(long *)(lVar31 + 0x38), lVar31 != 0)) {
            if (uVar103 < *(uint *)(lVar31 + 0x18)) {
              lVar31 = lVar31 + (long)(int)uVar103 * 0x178;
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
    if ((int)uVar52 < iVar28) {
      iVar28 = FUN_063540b8(lVar31,0);
      if (*(uint *)(lVar49 + 0x18) <= uVar52 + 1) goto LAB_0613719c;
      lVar31 = *(long *)(lVar32 + (ulong)(uVar52 + 1) * 0x178 + 0x20);
      if (lVar31 == 0) goto LAB_0613705c;
      iVar29 = FUN_063540b8(lVar31,0);
      if (iVar28 != iVar29) goto LAB_06136168;
    }
    if (!bVar1) {
      if ((unaff_x19[0x74] != 0) && (lVar31 = *(long *)(unaff_x19[0x74] + 0x38), lVar31 != 0)) {
        if ((uint)((long)(int)uVar52 + -1) < *(uint *)(lVar31 + 0x18)) {
          lVar31 = lVar31 + ((long)(int)uVar52 + -1) * 0x178;
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
  uVar21 = (uint)*(undefined8 *)(lVar31 + 0x18);
  if (uVar21 <= uVar52) goto LAB_0613719c;
  if ((*(byte *)(lVar31 + 0x20 + uVar30 * 0x178 + 0x16d) >> 1 & 1) == 0) {
    if (bVar11) {
      (**(code **)(*unaff_x19 + 0x918))();
    }
LAB_06136564:
    bVar11 = false;
  }
  else {
    if ((((int)unaff_x19[0x6c] < (int)uVar52) || ((int)unaff_x19[0x6d] < (int)uVar27)) ||
       (((int)unaff_x19[0x62] == 5 &&
        (*(int *)(lVar31 + 0x20 + uVar30 * 0x178 + 0x40) + 1 != (int)unaff_x19[0x6e])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar11) {
      if ((((!bVar1) || ((int)uVar103 < (int)uVar52)) || ((uVar22 & 0xfffe) == 10)) ||
         (uVar22 == 0xd)) goto LAB_06136564;
      if (uVar52 == uVar103) {
        if (*(int *)(*(long *)(PTR_DAT_069fb9c0 + 0x88) + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        uVar50 = FUN_054594b0(uVar22,0);
        if ((uVar50 & 1) != 0) goto LAB_06136564;
      }
      lVar47 = *plVar54;
      if (*(int *)(lVar47 + 0xe4) == 0) {
        thunk_FUN_02df485c();
        lVar47 = *plVar54;
      }
      if ((unaff_x19[0x74] == 0) || (lVar31 = *(long *)(unaff_x19[0x74] + 0x38), lVar31 == 0))
      goto LAB_0613705c;
      uVar21 = (uint)*(undefined8 *)(lVar31 + 0x18);
      if (uVar21 <= uVar52) goto LAB_0613719c;
      lVar33 = *(long *)(lVar47 + 0xb8);
      lVar47 = lVar31 + uVar30 * 0x178;
      fStack00000000000000cc = *(float *)(lVar33 + 0x1728);
      fStack00000000000000d0 = *(float *)(lVar33 + 0x172c);
      fVar59 = *(float *)(lVar47 + 0x188);
      fStack00000000000000d8 = *(float *)(lVar33 + 0x1720);
      fStack00000000000000f4 = *(float *)(lVar33 + 0x1724);
      auVar78 = *(undefined1 (*) [16])(lVar47 + 0x178);
      fVar82 = auVar78._8_4_;
      fVar83 = auVar78._12_4_;
      uVar99 = auVar78._0_4_;
      fVar100 = auVar78._4_4_;
    }
    if (uVar21 <= uVar52) goto LAB_0613719c;
    lVar31 = lVar31 + uVar30 * 0x178;
    in_stack_000001c0 = CONCAT44(fVar100,uVar99);
    auVar9._8_4_ = fVar82;
    auVar9._0_8_ = in_stack_000001c0;
    auVar9._12_4_ = fVar83;
    lVar47 = 0x118;
    if ((bVar17 & 1) == 0) {
      lVar47 = 0xf4;
    }
    fVar97 = *(float *)(lVar31 + 0x180);
    fVar63 = *(float *)(lVar31 + 0x184);
    fVar64 = *(float *)(lVar31 + 0x188);
    uVar102 = *(undefined8 *)(lVar31 + 0x178);
    fVar74 = *(float *)(lVar31 + 0x120);
    fVar80 = *(float *)(lVar31 + 0x13c);
    fVar62 = *(float *)(lVar31 + 0x140);
    fVar61 = *(float *)(lVar31 + 0x148);
    fVar60 = *(float *)(lVar31 + lVar47 + 0x20);
    in_stack_000001c8 = auVar9._8_8_;
    in_stack_000001a8 = uVar102;
    fStack00000000000001b0 = fVar97;
    fStack00000000000001b4 = fVar63;
    in_stack_000001b8 = fVar64;
    in_stack_000001d0 = fVar59;
    uVar30 = FUN_06152ca0(&stack0x000001c0,&stack0x000001a8,0);
    if ((uVar30 & 1) == 0) {
      if ((bVar17 & 1) == 0) {
        fVar80 = fVar74;
      }
      if (*(int *)(*(long *)Method_UnityEngine_Hash128_Append<Vector2Int>__ + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      fVar60 = fVar60 - fVar100;
      if (fVar60 <= fStack00000000000000d8) {
        fStack00000000000000d8 = fVar60;
      }
      if (fStack00000000000000cc <= fVar80 + fVar82) {
        fStack00000000000000cc = fVar80 + fVar82;
      }
      if (*(int *)(*(long *)Method_UnityEngine_Hash128_Append<Vector2Int>__ + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      fVar61 = fVar61 - fVar59;
      fVar62 = fVar62 + fVar83;
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
      fStack00000000000000d8 = (fVar60 + (fStack00000000000000cc - fVar82)) * 0.5;
      (**(code **)(*unaff_x19 + 0x918))();
      if (*(int *)(*(long *)Method_UnityEngine_Hash128_Append<Vector2Int>__ + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      if ((bVar17 & 1) == 0) {
        fVar80 = fVar74;
      }
      if (*(int *)(*(long *)Method_UnityEngine_Hash128_Append<Vector2Int>__ + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      fStack00000000000000f4 = fVar61 - fVar64;
      uVar99 = (undefined4)uVar102;
      fVar100 = (float)((ulong)uVar102 >> 0x20);
      fStack00000000000000cc = fVar97 + fVar80;
      fVar82 = fVar97;
      fVar83 = fVar63;
      fVar59 = fVar64;
      fStack00000000000000d0 = fVar62 + fVar63;
    }
    if (((*(int *)((long)unaff_x19 + 0x4a4) == 1) || (uVar52 == uVar6)) ||
       (((int)uVar103 <= (int)uVar52 || (!bVar1)))) {
      (**(code **)(*unaff_x19 + 0x918))();
      bVar11 = false;
    }
    else {
      bVar11 = true;
    }
  }
  iVar28 = *(int *)((long)unaff_x19 + 0x4a4);
  uVar52 = uVar52 + 1;
  uVar21 = uVar27;
  if (iVar28 <= (int)uVar52) goto LAB_06136c08;
  goto LAB_06134b8c;
LAB_06136c08:
  lVar49 = unaff_x19[0x74];
  if (lVar49 != 0) {
    iVar45 = uVar27 + 1;
LAB_06136c20:
    puVar12 = Method_UnityEngine_Hash128_Append<bool>__;
    lVar32 = *(long *)(lVar49 + 0x60);
    if (lVar32 != 0) {
      if (*(uint *)(lVar32 + 0x18) <= *(uint *)(unaff_x19 + 0xd4)) {
LAB_0613719c:
                    /* WARNING: Subroutine does not return */
        FUN_02d96868();
      }
      *(int *)(lVar32 + (long)(int)*(uint *)(unaff_x19 + 0xd4) * 0x50 + 0x28) = iVar57;
      *(int *)(lVar49 + 0x18) = iVar28;
      lVar32 = unaff_x19[0xd7];
      *(int *)(lVar49 + 0x2c) = iVar45;
      if (iVar28 < 1 || iStack00000000000000dc == 0) {
        iStack00000000000000dc = 1;
      }
      *(int *)(lVar49 + 0x1c) = (int)lVar32;
      *(int *)(lVar49 + 0x24) = iStack00000000000000dc;
      *(int *)(lVar49 + 0x30) = *(int *)((long)unaff_x19 + 0x4c4) + 1;
      if (((int)unaff_x19[0x6a] != 0xff) ||
         (uVar30 = (**(code **)(*unaff_x19 + 0x1c8))(), (uVar30 & 1) == 0)) {
LAB_061345f8:
        if (*(int *)(*(long *)Method_System_HashCode_Combine<float,_float,_float>__ + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        FUN_06150bd0();
        return;
      }
      lVar49 = unaff_x19[0xde];
      if (lVar49 != 0) {
        (**(code **)(lVar49 + 0x18))
                  (*(undefined8 *)(lVar49 + 0x40),unaff_x19[0x74],*(undefined8 *)(lVar49 + 0x28));
      }
      if (*(int *)((long)unaff_x19 + 0x354) != 0) {
        if ((unaff_x19[0x74] == 0) || (lVar49 = *(long *)(unaff_x19[0x74] + 0x60), lVar49 == 0))
        goto LAB_0613705c;
        if (*(int *)(*(long *)puVar12 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        if (*(int *)(lVar49 + 0x18) == 0) goto LAB_0613719c;
        FUN_0619ca50(lVar49 + 0x20,1,0);
      }
      if (unaff_x19[0x7b] != 0) {
        FUN_0632a884(unaff_x19[0x7b],0);
        if ((unaff_x19[0x74] != 0) && (lVar49 = *(long *)(unaff_x19[0x74] + 0x60), lVar49 != 0)) {
          if (*(int *)(lVar49 + 0x18) == 0) goto LAB_0613719c;
          if (unaff_x19[0x7b] != 0) {
            FUN_063281f8(unaff_x19[0x7b],*(undefined8 *)(lVar49 + 0x30),0);
            if ((unaff_x19[0x74] != 0) && (lVar49 = *(long *)(unaff_x19[0x74] + 0x60), lVar49 != 0))
            {
              if (*(int *)(lVar49 + 0x18) == 0) goto LAB_0613719c;
              if (unaff_x19[0x7b] != 0) {
                FUN_0632924c(unaff_x19[0x7b],0,*(undefined8 *)(lVar49 + 0x48),0);
                if ((unaff_x19[0x74] != 0) &&
                   (lVar49 = *(long *)(unaff_x19[0x74] + 0x60), lVar49 != 0)) {
                  if (*(int *)(lVar49 + 0x18) == 0) goto LAB_0613719c;
                  if (unaff_x19[0x7b] != 0) {
                    FUN_063284a8(unaff_x19[0x7b],*(undefined8 *)(lVar49 + 0x50),0);
                    if ((unaff_x19[0x74] != 0) &&
                       (lVar49 = *(long *)(unaff_x19[0x74] + 0x60), lVar49 != 0)) {
                      if (*(int *)(lVar49 + 0x18) == 0) goto LAB_0613719c;
                      if (unaff_x19[0x7b] != 0) {
                        FUN_06328668(unaff_x19[0x7b],*(undefined8 *)(lVar49 + 0x58),0);
                        if (unaff_x19[0x7b] != 0) {
                          FUN_0632a644(unaff_x19[0x7b],0);
                          lVar49 = unaff_x19[0x74];
                          if (lVar49 != 0) {
                            lVar31 = 0;
                            lVar32 = 0;
                            do {
                              uVar30 = lVar32 + 1;
                              if ((long)*(int *)(lVar49 + 0x34) <= (long)uVar30) goto LAB_061345f8;
                              lVar49 = *(long *)(lVar49 + 0x60);
                              if (lVar49 == 0) break;
                              if (*(int *)(*(long *)puVar12 + 0xe4) == 0) {
                                thunk_FUN_02df485c();
                              }
                              if (*(uint *)(lVar49 + 0x18) <= uVar30) goto LAB_0613719c;
                              FUN_0619c92c(lVar49 + lVar31 + 0x70,0);
                              lVar49 = unaff_x19[0xe4];
                              if (lVar49 == 0) break;
                              if (*(uint *)(lVar49 + 0x18) <= uVar30) goto LAB_0613719c;
                              uVar102 = *(undefined8 *)(lVar49 + lVar32 * 8 + 0x28);
                              if (*(int *)(*(long *)PTR_DAT_069fb990 + 0xe4) == 0) {
                                thunk_FUN_02df485c();
                              }
                              uVar50 = FUN_06350670(uVar102,0,0);
                              if ((uVar50 & 1) == 0) {
                                if (*(int *)((long)unaff_x19 + 0x354) != 0) {
                                  if ((unaff_x19[0x74] == 0) ||
                                     (lVar49 = *(long *)(unaff_x19[0x74] + 0x60), lVar49 == 0))
                                  break;
                                  if (*(int *)(*(long *)puVar12 + 0xe4) == 0) {
                                    thunk_FUN_02df485c();
                                  }
                                  if (*(uint *)(lVar49 + 0x18) <= uVar30) goto LAB_0613719c;
                                  FUN_0619ca50(lVar49 + lVar31 + 0x70,1,0);
                                }
                                lVar49 = unaff_x19[0xe4];
                                if (lVar49 == 0) break;
                                if (*(uint *)(lVar49 + 0x18) <= uVar30) goto LAB_0613719c;
                                lVar49 = *(long *)(lVar49 + lVar32 * 8 + 0x28);
                                if (lVar49 == 0) break;
                                lVar49 = FUN_061a5b08(lVar49,0);
                                if ((unaff_x19[0x74] == 0) ||
                                   (lVar47 = *(long *)(unaff_x19[0x74] + 0x60), lVar47 == 0)) break;
                                if (*(uint *)(lVar47 + 0x18) <= uVar30) goto LAB_0613719c;
                                if (lVar49 == 0) break;
                                FUN_063281f8(lVar49,*(undefined8 *)(lVar47 + lVar31 + 0x80),0);
                                lVar49 = unaff_x19[0xe4];
                                if (lVar49 == 0) break;
                                if (*(uint *)(lVar49 + 0x18) <= uVar30) goto LAB_0613719c;
                                lVar49 = *(long *)(lVar49 + lVar32 * 8 + 0x28);
                                if (lVar49 == 0) break;
                                lVar49 = FUN_061a5b08(lVar49,0);
                                if ((unaff_x19[0x74] == 0) ||
                                   (lVar47 = *(long *)(unaff_x19[0x74] + 0x60), lVar47 == 0)) break;
                                if (*(uint *)(lVar47 + 0x18) <= uVar30) goto LAB_0613719c;
                                if (lVar49 == 0) break;
                                FUN_0632924c(lVar49,0,*(undefined8 *)(lVar47 + lVar31 + 0x98),0);
                                lVar49 = unaff_x19[0xe4];
                                if (lVar49 == 0) break;
                                if (*(uint *)(lVar49 + 0x18) <= uVar30) goto LAB_0613719c;
                                lVar49 = *(long *)(lVar49 + lVar32 * 8 + 0x28);
                                if (lVar49 == 0) break;
                                lVar49 = FUN_061a5b08(lVar49,0);
                                if ((unaff_x19[0x74] == 0) ||
                                   (lVar47 = *(long *)(unaff_x19[0x74] + 0x60), lVar47 == 0)) break;
                                if (*(uint *)(lVar47 + 0x18) <= uVar30) goto LAB_0613719c;
                                if (lVar49 == 0) break;
                                FUN_063284a8(lVar49,*(undefined8 *)(lVar47 + lVar31 + 0xa0),0);
                                lVar49 = unaff_x19[0xe4];
                                if (lVar49 == 0) break;
                                if (*(uint *)(lVar49 + 0x18) <= uVar30) goto LAB_0613719c;
                                lVar49 = *(long *)(lVar49 + lVar32 * 8 + 0x28);
                                if (lVar49 == 0) break;
                                lVar49 = FUN_061a5b08(lVar49,0);
                                if ((unaff_x19[0x74] == 0) ||
                                   (lVar47 = *(long *)(unaff_x19[0x74] + 0x60), lVar47 == 0)) break;
                                if (*(uint *)(lVar47 + 0x18) <= uVar30) goto LAB_0613719c;
                                if (lVar49 == 0) break;
                                FUN_06328668(lVar49,*(undefined8 *)(lVar47 + lVar31 + 0xa8),0);
                                lVar49 = unaff_x19[0xe4];
                                if (lVar49 == 0) break;
                                if (*(uint *)(lVar49 + 0x18) <= uVar30) goto LAB_0613719c;
                                lVar49 = *(long *)(lVar49 + lVar32 * 8 + 0x28);
                                if ((lVar49 == 0) || (lVar49 = FUN_061a5b08(lVar49,0), lVar49 == 0))
                                break;
                                FUN_0632a644(lVar49,0);
                              }
                              lVar49 = unaff_x19[0x74];
                              lVar32 = lVar32 + 1;
                              lVar31 = lVar31 + 0x50;
                            } while (lVar49 != 0);
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


