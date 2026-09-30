/*
FUNCTION_NAME: Unity.VisualScripting.SubtractionHandler.<>c$$<.ctor>b__0_47
ENTRY_POINT: 036a86b8
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_21;validity_or_gating_hits_21;telemetry_or_network_hits_11
*/


void Unity_VisualScripting_SubtractionHandler_<>c__<_ctor>b__0_47(void)

{
  bool bVar1;
  long *plVar2;
  uint *puVar3;
  long *plVar4;
  long *plVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  byte bVar9;
  ushort uVar10;
  undefined2 uVar11;
  uint uVar12;
  bool bVar13;
  bool bVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  bool bVar18;
  bool bVar19;
  int iVar20;
  undefined4 uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  uint uVar28;
  ulong uVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  undefined8 uVar33;
  ulong uVar34;
  long lVar35;
  ulong uVar36;
  undefined8 uVar37;
  undefined1 uVar38;
  char cVar39;
  float *pfVar40;
  undefined4 *puVar41;
  long lVar42;
  float *pfVar43;
  code *pcVar44;
  uint uVar45;
  uint uVar46;
  long lVar47;
  long lVar48;
  long lVar49;
  long lVar50;
  long *unaff_x19;
  long *unaff_x21;
  long *plVar51;
  long *unaff_x22;
  long *plVar52;
  long *plVar53;
  long lVar54;
  undefined1 *unaff_x29;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  uint uVar67;
  float fVar68;
  float fVar69;
  undefined4 uVar70;
  ulong uVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  ulong uVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  float fVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  float fVar86;
  float fVar87;
  float fVar88;
  float fVar89;
  uint uStack000000000000002c;
  int iStack0000000000000034;
  ulong uStack0000000000000040;
  float fStack000000000000004c;
  int iStack0000000000000074;
  float fStack0000000000000078;
  float fStack000000000000007c;
  float fStack0000000000000094;
  float fStack00000000000000a0;
  float fStack00000000000000a4;
  float fStack00000000000000c4;
  undefined8 uStack00000000000000c8;
  float fStack00000000000000d0;
  float fStack00000000000000d4;
  float fStack00000000000000e4;
  float fStack00000000000000e8;
  float fStack00000000000000ec;
  undefined8 uStack00000000000000f8;
  float fStack000000000000010c;
  float fStack0000000000000110;
  float fStack0000000000000114;
  float fStack0000000000000124;
  float fStack000000000000012c;
  float fStack0000000000000138;
  float fStack000000000000013c;
  float fStack0000000000000174;
  int iStack000000000000018c;
  undefined8 in_stack_00000198;
  float fStack00000000000001a0;
  float fStack00000000000001a4;
  float in_stack_000001a8;
  undefined8 in_stack_000001b0;
  undefined8 in_stack_000001b8;
  float in_stack_000001c0;
  undefined8 in_stack_000001d0;
  undefined8 in_stack_000001d8;
  undefined4 uStack00000000000001e0;
  undefined8 in_stack_000001e8;
  long in_stack_00000fb8;
  uint in_stack_0000104c;
  uint uVar90;
  undefined8 in_stack_00001070;
  undefined8 in_stack_00001078;
  float in_stack_00001080;
  undefined8 in_stack_00001088;
  float fVar91;
  
  uVar29 = FUN_03922f24();
  if ((uVar29 & 1) == 0) {
    if (unaff_x19[0x1f] == 0) goto LAB_036afadc;
    lVar30 = FUN_036c835c(unaff_x19[0x1f],0);
    if (lVar30 != 0) {
      if (unaff_x19[0x6d] != 0) {
        UnityEngine_XR_Interaction_Toolkit_XRControllerRecorder__set_visitEachFrame
                  (unaff_x19[0x6d],0);
      }
      lVar30 = unaff_x19[0x8f];
      if ((lVar30 != 0) && (*(long *)(lVar30 + 0x18) != 0)) {
        if ((int)*(long *)(lVar30 + 0x18) == 0) goto LAB_036afbe8;
        if (*(int *)(lVar30 + 0x20) != 0) {
          plVar53 = unaff_x19 + 0x20;
          unaff_x19[0x20] = unaff_x19[0x1f];
          thunk_FUN_01b4f09c(plVar53);
          plVar51 = unaff_x19 + 0x23;
          unaff_x19[0x23] = unaff_x19[0x22];
          thunk_FUN_01b4f09c();
          *(undefined4 *)(unaff_x19 + 0x24) = 0;
          puVar15 = PTR_DAT_03d9c920;
          uVar21 = 0;
          if (*(int *)(*(long *)PTR_DAT_03d9c920 + 0xe0) == 0) {
            thunk_FUN_01ac7298(*(long *)PTR_DAT_03d9c920,0);
            uVar21 = (undefined4)unaff_x19[0x24];
          }
          in_stack_000001e8 = 0;
          _uStack00000000000001e0 = 0;
          in_stack_000001d8 = 0;
          in_stack_000001d0 = 0;
          FUN_036b0978((int)unaff_x19[0xc3],&stack0x000001d0,uVar21,unaff_x19[0x20],0,
                       unaff_x19[0x23],0);
          lVar30 = *(long *)(*(long *)puVar15 + 0xb8);
          uVar37 = *(undefined8 *)PTR_DAT_03d9c8e8;
          *(undefined8 *)(unaff_x29 + 0xe8) = in_stack_000001d8;
          *(undefined8 *)(unaff_x29 + 0xe0) = in_stack_000001d0;
          *(undefined8 *)(unaff_x29 + 0xf8) = in_stack_000001e8;
          *(ulong *)(unaff_x29 + 0xf0) = _uStack00000000000001e0;
          *(undefined8 *)(unaff_x29 + 0x108) = 0;
          *(undefined8 *)(unaff_x29 + 0x100) = 0;
          FUN_02177948(lVar30 + 0x10,&stack0x000010a0,uVar37);
          plVar2 = unaff_x19 + 0xd3;
          unaff_x19[0xd3] = unaff_x19[0x36];
          thunk_FUN_01b4f09c(plVar2);
          lVar30 = unaff_x19[0x77];
          if (*(int *)(*unaff_x22 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          uVar29 = FUN_0391f968(lVar30,0,0);
          if ((uVar29 & 1) != 0) {
            if (unaff_x19[0x77] == 0) goto LAB_036afadc;
            FUN_036fdbcc(unaff_x19[0x77],0);
          }
          if (unaff_x19[0x1f] != 0) {
            lVar30 = unaff_x19[0x92];
            fVar88 = *(float *)((long)unaff_x19 + 0x1e4);
            iVar20 = FUN_0396ac24(unaff_x19[0x1f] + 0x50,0);
            if (unaff_x19[0x1f] != 0) {
              fVar55 = (float)FUN_0396ac34(unaff_x19[0x1f] + 0x50,0);
              fVar81 = *(float *)((long)unaff_x19 + 0x1e4);
              *(undefined4 *)((long)unaff_x19 + 0x404) = 0x3f800000;
              *(float *)(unaff_x19 + 0x3d) = fVar81;
              puVar17 = PTR_DAT_03d9c908;
              fVar75 = DAT_00b55290;
              fVar61 = DAT_00b55290;
              if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
                fVar61 = 1.0;
              }
              FUN_021786ec(fVar81,unaff_x19 + 0x3e,*(undefined8 *)PTR_DAT_03d9c908);
              *(uint *)((long)unaff_x19 + 0x25c) = *(uint *)(unaff_x19 + 0x4b);
              if ((*(uint *)(unaff_x19 + 0x4b) & 1) == 0) {
                uVar21 = (undefined4)unaff_x19[0x42];
              }
              else {
                uVar21 = 700;
              }
              *(undefined4 *)((long)unaff_x19 + 0x214) = uVar21;
              FUN_02177328(unaff_x19 + 0x43,uVar21,*(undefined8 *)PTR_DAT_03d9c900);
              FUN_0370516c(unaff_x19 + 0x4c,0);
              *(undefined4 *)(unaff_x19 + 0x4f) = *(undefined4 *)((long)unaff_x19 + 0x26c);
              FUN_02177328(unaff_x19 + 0x50,*(undefined4 *)((long)unaff_x19 + 0x26c),
                           *(undefined8 *)PTR_DAT_03d9c8d8);
              *(undefined4 *)((long)unaff_x19 + 0x61c) = 0;
              FUN_021786e0(unaff_x19 + 0xc4,*(undefined8 *)PTR_DAT_03d9c8a8);
              if (DAT_03fed257 == '\0') {
                thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
                DAT_03fed257 = '\x01';
              }
              pfVar40 = *(float **)
                         (*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
              fStack00000000000000d4 = *pfVar40;
              fStack0000000000000078 = pfVar40[1];
              fStack000000000000007c = pfVar40[2];
              uVar21 = FUN_01bd7168((int)unaff_x19[0x29],*(undefined4 *)((long)unaff_x19 + 0x14c),
                                    (int)unaff_x19[0x2a],*(undefined4 *)((long)unaff_x19 + 0x154),0)
              ;
              *(undefined4 *)((long)unaff_x19 + 0x144) = uVar21;
              *(undefined4 *)((long)unaff_x19 + 0x4ec) = uVar21;
              *(undefined4 *)(unaff_x19 + 0x2b) = uVar21;
              *(undefined4 *)((long)unaff_x19 + 0x15c) = uVar21;
              puVar16 = PTR_DAT_03d9c8e0;
              FUN_021760c4(unaff_x19 + 0x9e,uVar21,*(undefined8 *)PTR_DAT_03d9c8e0);
              FUN_021760c4(unaff_x19 + 0xa2,*(undefined4 *)((long)unaff_x19 + 0x4ec),
                           *(undefined8 *)puVar16);
              FUN_021760c4(unaff_x19 + 0xa6,*(undefined4 *)((long)unaff_x19 + 0x4ec),
                           *(undefined8 *)puVar16);
              puVar16 = PTR_DAT_03d9c888;
              uVar21 = *(undefined4 *)((long)unaff_x19 + 0x4ec);
              if (*(int *)(*(long *)PTR_DAT_03d9c888 + 0xe0) == 0) {
                thunk_FUN_01ac7298();
              }
              if (DAT_03ff747c == '\0') {
                thunk_FUN_01ad9084(PTR_DAT_03d9c888);
                DAT_03ff747c = '\x01';
              }
              lVar31 = *(long *)puVar16;
              if (*(int *)(lVar31 + 0xe0) == 0) {
                thunk_FUN_01ac7298();
                lVar31 = *(long *)puVar16;
              }
              puVar41 = *(undefined4 **)(lVar31 + 0xb8);
              in_stack_000001d0 = 0;
              in_stack_000001d8 = 0;
              _uStack00000000000001e0 = _uStack00000000000001e0 & 0xffffffff00000000;
              FUN_036c214c(*puVar41,puVar41[1],puVar41[2],puVar41[3],&stack0x000001d0,uVar21,0);
              uVar37 = *(undefined8 *)PTR_DAT_03d9c8d0;
              *(undefined8 *)(unaff_x29 + 0xe8) = in_stack_000001d8;
              *(undefined8 *)(unaff_x29 + 0xe0) = in_stack_000001d0;
              FUN_021766a4(unaff_x19 + 0xaa,&stack0x000010a0,uVar37);
              unaff_x19[0xb0] = 0;
              thunk_FUN_01b4f09c(unaff_x19 + 0xb0,0);
              FUN_02178130(unaff_x19 + 0xb1,0,*(undefined8 *)PTR_DAT_03d9c8f8);
              if (unaff_x19[0x20] != 0) {
                bVar9 = *(byte *)(unaff_x19[0x20] + 0x1b8);
                *(uint *)(unaff_x19 + 0xbe) = (uint)bVar9;
                FUN_02176d9c(unaff_x19 + 0xba,bVar9,*(undefined8 *)PTR_DAT_03d9c8f0);
                FUN_02176d90(unaff_x19 + 0xbf,*(undefined8 *)PTR_DAT_03d9c8b8);
                *(undefined1 *)((long)unaff_x19 + 0x474) = 0;
                *(undefined4 *)(unaff_x19 + 0x9b) = 0;
                *(undefined4 *)(unaff_x19 + 0x58) = 0xc6fffe00;
                if (unaff_x19[0x20] != 0) {
                  fVar56 = (float)FUN_0396ac44(unaff_x19[0x20] + 0x50,0);
                  if (*plVar53 != 0) {
                    fVar57 = (float)FUN_0396ac54(*plVar53 + 0x50,0);
                    if (*plVar53 != 0) {
                      fVar58 = (float)FUN_0396ac94(*plVar53 + 0x50,0);
                      *(undefined8 *)((long)unaff_x19 + 0x2ac) = 0;
                      *(undefined4 *)(unaff_x19 + 200) = 0;
                      unaff_x19[0x81] = 0;
                      FUN_021786ec(0,unaff_x19 + 0x82,*(undefined8 *)puVar17);
                      *(undefined1 *)(unaff_x19 + 0x86) = 0;
                      *(undefined4 *)((long)unaff_x19 + 0x494) = 0;
                      *(undefined4 *)(unaff_x19 + 0x93) = *(undefined4 *)((long)unaff_x19 + 0x324);
                      *(undefined8 *)((long)unaff_x19 + 0x49c) = 0;
                      *(undefined4 *)((long)unaff_x19 + 0x4a4) = 0;
                      lVar31 = *(long *)puVar15;
                      if (*(int *)(lVar31 + 0xe0) == 0) {
                        thunk_FUN_01ac7298();
                        lVar31 = *(long *)puVar15;
                      }
                      lVar32 = unaff_x19[0x6d];
                      uVar37 = *(undefined8 *)(*(long *)(lVar31 + 0xb8) + 0x15a8);
                      unaff_x19[0x95] = 0;
                      unaff_x19[0x9a] = 0;
                      *(undefined1 *)((long)unaff_x19 + 0x2c4) = 0;
                      lVar31 = NEON_rev64(uVar37,4);
                      *(undefined4 *)((long)unaff_x19 + 0x2e4) = 0xffffffff;
                      unaff_x19[0x99] = lVar31;
                      *(undefined4 *)(unaff_x19 + 0x96) = 0;
                      if ((lVar32 != 0) && (*(long *)(lVar32 + 0x58) != 0)) {
                        uVar28 = (int)unaff_x19[0x67] - 1;
                        uVar90 = *(int *)(*(long *)(lVar32 + 0x58) + 0x18) - 1;
                        if ((int)uVar28 <= (int)uVar90) {
                          uVar90 = uVar28;
                        }
                        uVar6 = 0;
                        if (-1 < (int)uVar28) {
                          uVar6 = uVar90;
                        }
                        FUN_03704968(lVar32,0);
                        fVar59 = *(float *)(unaff_x19 + 0x68);
                        *(undefined4 *)(unaff_x19 + 0x6c) = 0xbf800000;
                        fVar72 = *(float *)((long)unaff_x19 + 0x344);
                        unaff_x19[0x6a] = 0;
                        lVar31 = *(long *)puVar15;
                        fVar60 = *(float *)((long)unaff_x19 + 0x34c);
                        fVar89 = *(float *)(unaff_x19 + 0x6b);
                        fVar78 = *(float *)((long)unaff_x19 + 0x35c);
                        if (*(int *)(lVar31 + 0xe0) == 0) {
                          thunk_FUN_01ac7298();
                          lVar31 = *(long *)puVar15;
                        }
                        *(undefined8 *)((long)unaff_x19 + 0x4dc) =
                             *(undefined8 *)(*(long *)(lVar31 + 0xb8) + 0x1598);
                        *(undefined8 *)((long)unaff_x19 + 0x4e4) =
                             *(undefined8 *)(*(long *)(lVar31 + 0xb8) + 0x15a0);
                        if (unaff_x19[0x6d] != 0) {
                          FUN_037047d8(unaff_x19[0x6d],0);
                          *(undefined4 *)((long)unaff_x19 + 0x4bc) = 0;
                          *(undefined4 *)((long)unaff_x19 + 0x4c4) = 0;
                          *(undefined8 *)((long)unaff_x19 + 0x4b4) = 0;
                          fVar91 = 0.0;
                          bVar13 = false;
                          *(undefined1 *)((long)unaff_x19 + 0x33c) = 0;
                          *(undefined1 *)((long)unaff_x19 + 0x2da) = 0;
                          FUN_03703ae0(&stack0x00001088,0xffffffff,0,0);
                          FUN_036ed2b4();
                          FUN_036ed2b4();
                          FUN_036ed2b4();
                          FUN_036ed2b4();
                          FUN_036ed2b4();
                          FUN_02178cec(*(long *)(*(long *)puVar15 + 0xb8) + 0x11f0,
                                       *(undefined8 *)PTR_DAT_03d9c8b0);
                          fVar80 = DAT_00b555a8;
                          fVar77 = DAT_00b5521c;
                          uVar90 = 0;
                          lVar31 = unaff_x19[0x8f];
                          if (lVar31 != 0) {
                            puVar3 = (uint *)((long)unaff_x19 + 0x494);
                            plVar4 = unaff_x19 + 0xc9;
                            uVar28 = (int)lVar30 - 1;
                            lVar30 = (long)unaff_x19 + 0x434;
                            fVar56 = fVar56 - (fVar57 - fVar58);
                            fStack0000000000000174 = 0.0;
                            if (fVar89 <= 0.0) {
                              fVar89 = 0.0;
                            }
                            if (fVar78 <= 0.0) {
                              fVar78 = 0.0;
                            }
                            fVar88 = (fVar88 / (float)iVar20) * fVar55 * fVar61;
                            uVar29 = (ulong)(uint)fVar88;
                            plVar5 = unaff_x19 + 0x6d;
                            fVar89 = fVar89 + DAT_00b55080;
                            uVar71 = (ulong)(uint)fVar89;
                            fVar55 = fVar78 + DAT_00b55080;
                            fVar61 = fVar81 * DAT_00b555a8 * fVar61;
                            bVar19 = true;
                            iStack0000000000000034 = 0;
                            bVar14 = false;
                            iStack000000000000018c = 0;
                            bVar9 = 1;
                            fStack000000000000010c = fVar89;
                            uVar23 = 0;
LAB_036a8f0c:
                            fVar81 = (float)uVar29;
                            if ((int)*(uint *)(lVar31 + 0x18) <= (int)uVar90) {
LAB_036acbd8:
                              fVar88 = (float)uVar71;
                              if (((char)unaff_x19[0x47] != '\0') &&
                                 (fVar88 = DAT_00b552b8,
                                 DAT_00b552b8 <
                                 *(float *)((long)unaff_x19 + 0x23c) - *(float *)(unaff_x19 + 0x48))
                                 ) {
                                fVar88 = *(float *)((long)unaff_x19 + 0x1e4);
                                fVar61 = *(float *)((long)unaff_x19 + 0x254);
                                if ((fVar88 < fVar61) &&
                                   (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
                                  if (*(float *)((long)unaff_x19 + 0x2d4) <
                                      *(float *)(unaff_x19 + 0x5a) / 100.0) {
                                    *(undefined4 *)((long)unaff_x19 + 0x2d4) = 0;
                                  }
                                  fVar75 = (*(float *)((long)unaff_x19 + 0x23c) - fVar88) * 0.5;
                                  if (fVar75 <= DAT_00b55428) {
                                    fVar75 = DAT_00b55428;
                                  }
                                  *(float *)(unaff_x19 + 0x48) = fVar88;
                                  fVar75 = (fVar88 + fVar75) * 20.0 + 0.5;
                                  fVar88 = DAT_00b556b4;
                                  if (fVar75 != INFINITY) {
                                    fVar88 = (float)(int)fVar75 / 20.0;
                                  }
                                  if (fVar61 <= fVar88) {
                                    fVar88 = fVar61;
                                  }
LAB_036acc94:
                                  *(float *)((long)unaff_x19 + 0x1e4) = fVar88;
                                  return;
                                }
                              }
                              *(undefined1 *)((long)unaff_x19 + 0x24c) = 1;
                              puVar15 = 
                              Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                              ;
                              if ((int)unaff_x19[0x49] <= *(int *)((long)unaff_x19 + 0x244)) {
                                uVar37 = FUN_0303de64((long)unaff_x19 + 0x244,0);
                                uVar33 = FUN_03052638((long)unaff_x19 + 0x1e4,0);
                                uVar37 = FUN_02ee6d10(*(undefined8 *)PTR_DAT_03d9c950,uVar37,
                                                      *(undefined8 *)PTR_DAT_03d9c938,uVar33,0);
                                if (*(int *)(*(long *)
                                              Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                                            + 0xe0) == 0) {
                                  thunk_FUN_01ac7298(*(long *)
                                                  Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                                                  );
                                }
                                FUN_038f2acc(uVar37,0);
                              }
                              puVar17 = PTR_DAT_03d9c920;
                              if ((*puVar3 == 0) || ((*puVar3 == 1 && (uVar23 == 3)))) {
                                (**(code **)(*unaff_x19 + 0x948))();
                                goto LAB_036acd60;
                              }
                              lVar30 = *(long *)PTR_DAT_03d9c920;
                              if (*(int *)(lVar30 + 0xe0) == 0) {
                                thunk_FUN_01ac7298();
                                lVar30 = *(long *)puVar17;
                              }
                              plVar53 = (long *)
                                        Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_69__
                              ;
                              lVar30 = **(long **)(lVar30 + 0xb8);
                              if (lVar30 == 0) goto LAB_036afadc;
                              if (*(uint *)(lVar30 + 0x18) <= *(uint *)(unaff_x19 + 0xd1))
                              goto LAB_036afbe8;
                              iVar20 = *(int *)(lVar30 + (long)(int)*(uint *)(unaff_x19 + 0xd1) *
                                                         0x38 + 0x54) << 2;
                              if ((*plVar5 == 0) ||
                                 (lVar30 = *(long *)(*plVar5 + 0x60), lVar30 == 0))
                              goto LAB_036afadc;
                              if (*(int *)(*(long *)
                                            Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_69__
                                          + 0xe0) == 0) {
                                thunk_FUN_01ac7298();
                              }
                              if (*(int *)(lVar30 + 0x18) == 0) goto LAB_036afbe8;
                              FUN_036fa40c(lVar30 + 0x20,0,0);
                              if (DAT_03fed257 == '\0') {
                                thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__)
                                ;
                                DAT_03fed257 = '\x01';
                              }
                              iVar25 = (int)unaff_x19[0x4e];
                              fStack000000000000010c =
                                   **(float **)
                                     (*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ +
                                     0xb8);
                              uStack00000000000000f8 =
                                   *(undefined8 *)
                                    (*(float **)
                                      (*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ +
                                      0xb8) + 1);
                              lVar30 = unaff_x19[0xe3];
                              uStack00000000000000c8 = uStack00000000000000f8;
                              fStack00000000000000d0 = fStack000000000000010c;
                              if (iVar25 < 0x401) {
                                if (iVar25 == 0x100) {
                                  if (lVar30 == 0) goto LAB_036afadc;
                                  if (*(uint *)(lVar30 + 0x18) < 2) goto LAB_036afbe8;
                                  uVar37 = *(undefined8 *)(lVar30 + 0x30);
                                  if ((int)unaff_x19[0x5c] == 5) {
                                    if ((*plVar5 == 0) ||
                                       (lVar31 = *(long *)(*plVar5 + 0x58), lVar31 == 0))
                                    goto LAB_036afadc;
                                    if (*(uint *)(lVar31 + 0x18) <= uVar6) goto LAB_036afbe8;
                                    fVar88 = *(float *)(lVar31 + (long)(int)uVar6 * 0x14 + 0x28);
                                  }
                                  else {
                                    fVar88 = *(float *)(unaff_x19 + 0x97);
                                  }
                                  fStack00000000000000d0 = fVar59 + 0.0 + *(float *)(lVar30 + 0x2c);
                                  fVar88 = (0.0 - fVar88) - fVar72;
                                }
                                else if (iVar25 == 0x200) {
                                  if (lVar30 == 0) goto LAB_036afadc;
                                  if ((*(int *)(lVar30 + 0x18) == 1) ||
                                     (*(int *)(lVar30 + 0x18) == 0)) goto LAB_036afbe8;
                                  fStack00000000000000d0 =
                                       (*(float *)(lVar30 + 0x20) + *(float *)(lVar30 + 0x2c)) * 0.5
                                  ;
                                  uVar37 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar30 + 0x24)
                                                            >> 0x20) +
                                                    (float)((ulong)*(undefined8 *)(lVar30 + 0x30) >>
                                                           0x20)) * 0.5,
                                                    ((float)*(undefined8 *)(lVar30 + 0x24) +
                                                    (float)*(undefined8 *)(lVar30 + 0x30)) * 0.5);
                                  if ((int)unaff_x19[0x5c] == 5) {
                                    if ((*plVar5 == 0) ||
                                       (lVar30 = *(long *)(*plVar5 + 0x58), lVar30 == 0))
                                    goto LAB_036afadc;
                                    if (*(uint *)(lVar30 + 0x18) <= uVar6) goto LAB_036afbe8;
                                    lVar30 = lVar30 + (long)(int)uVar6 * 0x14;
                                    fStack00000000000000d0 = fVar59 + 0.0 + fStack00000000000000d0;
                                    fVar88 = ((fVar72 + *(float *)(lVar30 + 0x28) +
                                              *(float *)(lVar30 + 0x30)) - fVar60) * -0.5 + 0.0;
                                  }
                                  else {
                                    fStack00000000000000d0 = fVar59 + 0.0 + fStack00000000000000d0;
                                    fVar88 = ((fVar72 + *(float *)(unaff_x19 + 0x97) + fVar91) -
                                             fVar60) * -0.5 + 0.0;
                                  }
                                }
                                else {
                                  if (iVar25 != 0x400) goto LAB_036ad288;
                                  if (lVar30 == 0) goto LAB_036afadc;
                                  if (*(int *)(lVar30 + 0x18) == 0) goto LAB_036afbe8;
                                  uVar37 = *(undefined8 *)(lVar30 + 0x24);
                                  if ((int)unaff_x19[0x5c] == 5) {
                                    if ((*plVar5 == 0) ||
                                       (lVar31 = *(long *)(*plVar5 + 0x58), lVar31 == 0))
                                    goto LAB_036afadc;
                                    if (*(uint *)(lVar31 + 0x18) <= uVar6) goto LAB_036afbe8;
                                    fVar91 = *(float *)(lVar31 + (long)(int)uVar6 * 0x14 + 0x30);
                                  }
                                  fStack00000000000000d0 = fVar59 + 0.0 + *(float *)(lVar30 + 0x20);
                                  fVar88 = fVar60 + (0.0 - fVar91);
                                }
LAB_036ad278:
                                uStack00000000000000c8 =
                                     CONCAT44((float)((ulong)uVar37 >> 0x20) + 0.0,
                                              (float)uVar37 + fVar88);
                              }
                              else if (iVar25 == 0x800) {
                                if (lVar30 == 0) goto LAB_036afadc;
                                if ((*(int *)(lVar30 + 0x18) == 1) || (*(int *)(lVar30 + 0x18) == 0)
                                   ) goto LAB_036afbe8;
                                fVar88 = fVar59 + 0.0 +
                                         (*(float *)(lVar30 + 0x20) + *(float *)(lVar30 + 0x2c)) *
                                         0.5;
                                uStack00000000000000c8 =
                                     CONCAT44(((float)((ulong)*(undefined8 *)(lVar30 + 0x24) >> 0x20
                                                      ) +
                                              (float)((ulong)*(undefined8 *)(lVar30 + 0x30) >> 0x20)
                                              ) * 0.5 + 0.0,
                                              ((float)*(undefined8 *)(lVar30 + 0x24) +
                                              (float)*(undefined8 *)(lVar30 + 0x30)) * 0.5 + 0.0);
                                fStack00000000000000d0 = fVar88;
                              }
                              else {
                                if (iVar25 == 0x1000) {
                                  if (lVar30 != 0) {
                                    if ((*(int *)(lVar30 + 0x18) != 1) &&
                                       (*(int *)(lVar30 + 0x18) != 0)) {
                                      uVar37 = CONCAT44(((float)((ulong)*(undefined8 *)
                                                                         (lVar30 + 0x24) >> 0x20) +
                                                        (float)((ulong)*(undefined8 *)
                                                                        (lVar30 + 0x30) >> 0x20)) *
                                                        0.5,((float)*(undefined8 *)(lVar30 + 0x24) +
                                                            (float)*(undefined8 *)(lVar30 + 0x30)) *
                                                            0.5);
                                      fStack00000000000000d0 =
                                           fVar59 + 0.0 +
                                           (*(float *)(lVar30 + 0x20) + *(float *)(lVar30 + 0x2c)) *
                                           0.5;
                                      fVar88 = 0.0 - ((fVar72 + *(float *)(unaff_x19 + 0x9d) +
                                                      *(float *)(unaff_x19 + 0x9c)) - fVar60) * 0.5;
                                      goto LAB_036ad278;
                                    }
                                    goto LAB_036afbe8;
                                  }
                                  goto LAB_036afadc;
                                }
                                if (iVar25 == 0x2000) {
                                  if (lVar30 == 0) goto LAB_036afadc;
                                  if ((*(int *)(lVar30 + 0x18) == 1) ||
                                     (*(int *)(lVar30 + 0x18) == 0)) goto LAB_036afbe8;
                                  fVar88 = 0.0 - ((*(float *)((long)unaff_x19 + 0x4bc) - fVar72) -
                                                 fVar60) * 0.5;
                                  uStack00000000000000c8 =
                                       CONCAT44(((float)((ulong)*(undefined8 *)(lVar30 + 0x24) >>
                                                        0x20) +
                                                (float)((ulong)*(undefined8 *)(lVar30 + 0x30) >>
                                                       0x20)) * 0.5 + 0.0,
                                                ((float)*(undefined8 *)(lVar30 + 0x24) +
                                                (float)*(undefined8 *)(lVar30 + 0x30)) * 0.5 +
                                                fVar88);
                                  fStack00000000000000d0 =
                                       fVar59 + 0.0 +
                                       (*(float *)(lVar30 + 0x20) + *(float *)(lVar30 + 0x2c)) * 0.5
                                  ;
                                }
                              }
LAB_036ad288:
                              if (unaff_x19[0xe5] != 0) {
                                uVar37 = FUN_03afb088(unaff_x19[0xe5],0);
                                if (*(int *)(*(long *)puVar15 + 0xe0) == 0) {
                                  thunk_FUN_01ac7298(*(long *)puVar15);
                                }
                                uVar29 = FUN_03922f24(uVar37,0,0);
                                lVar30 = FUN_036dfed8();
                                if (lVar30 != 0) {
                                  FUN_0392a7f0(lVar30,0);
                                  *(float *)(unaff_x19 + 0xe2) = fVar88;
                                  if (unaff_x19[0xe5] != 0) {
                                    iVar25 = FUN_03afa68c(unaff_x19[0xe5],0);
                                    if (unaff_x19[0xe5] != 0) {
                                      fVar61 = (float)FUN_03afa7e4(unaff_x19[0xe5],0);
                                      uVar21 = FUN_01bd7168(0x3f800000,0x3f800000,0x3f800000,
                                                            0x3f800000,0);
                                      FUN_01bd7168(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
                                      if (*(int *)(*(long *)PTR_DAT_03d9c888 + 0xe0) == 0) {
                                        thunk_FUN_01ac7298(*(long *)PTR_DAT_03d9c888);
                                      }
                                      if (DAT_03ff747c == '\0') {
                                        thunk_FUN_01ad9084(PTR_DAT_03d9c888);
                                        DAT_03ff747c = '\x01';
                                      }
                                      puVar15 = PTR_DAT_03d9c888;
                                      lVar30 = *(long *)PTR_DAT_03d9c888;
                                      if (*(int *)(lVar30 + 0xe0) == 0) {
                                        thunk_FUN_01ac7298();
                                        lVar30 = *(long *)puVar15;
                                      }
                                      puVar41 = *(undefined4 **)(lVar30 + 0xb8);
                                      uVar71 = (ulong)(uint)puVar41[1];
                                      uVar34 = (ulong)(uint)puVar41[2];
                                      uVar76 = (ulong)(uint)puVar41[3];
                                      FUN_036c214c(*puVar41,uVar71,uVar34,uVar76,&stack0x00001070,
                                                   0x4000ffff,0);
                                      if (*(int *)(*(long *)PTR_DAT_03d9c920 + 0xe0) == 0) {
                                        thunk_FUN_01ac7298();
                                      }
                                      lVar30 = *plVar5;
                                      if (lVar30 != 0) {
                                        uVar90 = *puVar3;
                                        if ((int)uVar90 < 1) {
                                          fStack00000000000000e4 = 0.0;
                                          iVar20 = 0;
                                          goto LAB_036af524;
                                        }
                                        lVar30 = *(long *)(lVar30 + 0x38);
                                        fVar88 = ABS(fVar88);
                                        fVar75 = 1.0;
                                        if ((uVar29 & 1) == 0) {
                                          fVar75 = fVar88;
                                        }
                                        if (lVar30 != 0) {
                                          bVar19 = false;
                                          bVar14 = false;
                                          _fStack0000000000000138 = 0;
                                          bVar13 = false;
                                          fStack00000000000000e4 = 0.0;
                                          uStack000000000000002c = 0;
                                          fStack0000000000000174 = 0.0;
                                          iStack0000000000000074 = 0;
                                          lVar31 = 0x2e0;
                                          fVar59 = 0.0;
                                          fVar55 = 0.0;
                                          fStack0000000000000114 =
                                               *(float *)(*(long *)(*(long *)PTR_DAT_03d9c920 + 0xb8
                                                                   ) + 0x15a8);
                                          fStack0000000000000110 = 0.0;
                                          fStack0000000000000094 = 0.0;
                                          fStack000000000000004c = 0.0;
                                          fVar58 = 0.0;
                                          uStack0000000000000040 = 0;
                                          uVar28 = 1;
                                          fStack00000000000000a0 = fStack000000000000007c;
                                          fStack00000000000000a4 = fStack0000000000000078;
                                          fStack00000000000000c4 = fStack000000000000007c;
                                          fStack00000000000000e8 = fStack00000000000000d4;
                                          fStack00000000000000ec = fStack0000000000000078;
                                          fVar81 = fStack0000000000000078;
                                          fVar56 = fStack00000000000000d4;
                                          fVar57 = fStack00000000000000d4;
                                          uVar23 = 0;
                                          goto LAB_036ad4b0;
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                              goto LAB_036afadc;
                            }
                            if (*(uint *)(lVar31 + 0x18) <= uVar90) goto LAB_036afbe8;
                            uVar22 = *(uint *)(lVar31 + (long)(int)uVar90 * 0xc + 0x20);
                            if (uVar22 == 0) goto LAB_036acbd8;
                            if (5 < iStack000000000000018c) {
                              uVar37 = FUN_0303de64(&stack0x0000109c,0);
                              uVar33 = FUN_0303de64(&stack0x00001068,0);
                              uVar37 = FUN_02ee6d10(*(undefined8 *)PTR_DAT_03d9c930,uVar37,
                                                    *(undefined8 *)PTR_DAT_03d9c940,uVar33,0);
                              if (*(int *)(*(long *)
                                            Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                                          + 0xe0) == 0) {
                                thunk_FUN_01ac7298(*(long *)
                                                  Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                                                  );
                              }
                              FUN_038f2e04(uVar37,0);
                              in_stack_00001088 = CONCAT44(3,*puVar3);
                            }
                            if ((*(char *)((long)unaff_x19 + 0x302) == '\0') || (uVar22 != 0x3c)) {
                              if ((*plVar5 == 0) ||
                                 (lVar31 = *(long *)(*plVar5 + 0x38), lVar31 == 0))
                              goto LAB_036afadc;
                              if (*(uint *)(lVar31 + 0x18) <= *puVar3) goto LAB_036afbe8;
                              lVar31 = lVar31 + (long)(int)*puVar3 * 0x178;
                              *(undefined4 *)((long)unaff_x19 + 0x644) =
                                   *(undefined4 *)(lVar31 + 0x2c);
                              *(undefined4 *)(unaff_x19 + 0x24) = *(undefined4 *)(lVar31 + 0x58);
                              unaff_x19[0x20] = *(long *)(lVar31 + 0x38);
                              thunk_FUN_01b4f09c(plVar53);
LAB_036a9064:
                              if ((unaff_x19[0x6d] == 0) ||
                                 (lVar31 = *(long *)(unaff_x19[0x6d] + 0x38), lVar31 == 0))
                              goto LAB_036afadc;
                              uVar23 = *puVar3;
                              if (*(uint *)(lVar31 + 0x18) <= uVar23) goto LAB_036afbe8;
                              lVar54 = (long)(int)uVar23;
                              cVar39 = *(char *)(lVar31 + lVar54 * 0x178 + 0x5c);
                              *(undefined1 *)((long)unaff_x19 + 0x431) = 0;
                              lVar32 = unaff_x19[0x24];
                              if ((uint)in_stack_00001088 == uVar23) {
                                uVar22 = (uint)((ulong)in_stack_00001088 >> 0x20);
                                *(undefined4 *)((long)unaff_x19 + 0x644) = 0;
                                if (uVar22 == 0x2026) {
                                  *(long *)(lVar31 + lVar54 * 0x178 + 0x30) = unaff_x19[0xca];
                                  thunk_FUN_01b4f09c();
                                  if ((unaff_x19[0x6d] == 0) ||
                                     (lVar31 = *(long *)(unaff_x19[0x6d] + 0x38), lVar31 == 0))
                                  goto LAB_036afadc;
                                  if (*(uint *)(lVar31 + 0x18) <= *puVar3) goto LAB_036afbe8;
                                  lVar31 = lVar31 + (long)(int)*puVar3 * 0x178;
                                  *(undefined4 *)(lVar31 + 0x2c) = 0;
                                  *(long *)(lVar31 + 0x38) = unaff_x19[0xcb];
                                  thunk_FUN_01b4f09c();
                                  if ((unaff_x19[0x6d] == 0) ||
                                     (lVar31 = *(long *)(unaff_x19[0x6d] + 0x38), lVar31 == 0))
                                  goto LAB_036afadc;
                                  if (*(uint *)(lVar31 + 0x18) <= *puVar3) goto LAB_036afbe8;
                                  *(long *)(lVar31 + (long)(int)*puVar3 * 0x178 + 0x50) =
                                       unaff_x19[0xcc];
                                  thunk_FUN_01b4f09c();
                                  if ((*plVar5 == 0) ||
                                     (lVar31 = *(long *)(*plVar5 + 0x38), lVar31 == 0))
                                  goto LAB_036afadc;
                                  uVar23 = *puVar3;
                                  if (*(uint *)(lVar31 + 0x18) <= uVar23) goto LAB_036afbe8;
                                  bVar1 = true;
                                  *(int *)(lVar31 + (long)(int)uVar23 * 0x178 + 0x58) =
                                       (int)unaff_x19[0xcd];
                                  *(undefined1 *)(unaff_x19 + 0x5f) = 1;
                                  in_stack_00001088 = CONCAT44(3,uVar23 + 1);
                                }
                                else if (uVar22 == 3) {
                                  if ((*plVar53 == 0) ||
                                     (lVar35 = FUN_036c835c(*plVar53,0), lVar35 == 0))
                                  goto LAB_036afadc;
                                  uVar37 = FUN_0262f3a4(lVar35,3,*(undefined8 *)PTR_DAT_03d9c870);
                                  if (*(uint *)(lVar31 + 0x18) <= uVar23) goto LAB_036afbe8;
                                  *(undefined8 *)(lVar31 + lVar54 * 0x178 + 0x30) = uVar37;
                                  thunk_FUN_01b4f09c();
                                  uVar23 = *(uint *)((long)unaff_x19 + 0x494);
                                  bVar1 = true;
                                  *(undefined1 *)(unaff_x19 + 0x5f) = 1;
                                }
                                else {
                                  bVar1 = true;
                                }
                              }
                              else {
                                bVar1 = false;
                              }
                              if (((int)uVar23 < *(int *)((long)unaff_x19 + 0x324)) && (uVar22 != 3)
                                 ) {
                                if ((*plVar5 == 0) ||
                                   (lVar31 = *(long *)(*plVar5 + 0x38), lVar31 == 0))
                                goto LAB_036afadc;
                                if (*(uint *)(lVar31 + 0x18) <= uVar23) goto LAB_036afbe8;
                                lVar31 = lVar31 + (long)(int)uVar23 * 0x178;
                                *(undefined1 *)(lVar31 + 0x194) = 0;
                                *(undefined2 *)(lVar31 + 0x20) = 0x200b;
                                *(undefined4 *)(lVar31 + 100) = 0;
                                *puVar3 = uVar23 + 1;
                              }
                              else {
                                iVar20 = *(int *)((long)unaff_x19 + 0x644);
                                if (iVar20 == 0) {
                                  uVar23 = *(uint *)((long)unaff_x19 + 0x25c);
                                  if ((uVar23 >> 4 & 1) == 0) {
                                    if ((uVar23 >> 3 & 1) == 0) {
                                      fVar57 = 1.0;
                                      if ((uVar23 >> 5 & 1) != 0) {
                                        if (*(int *)(*(long *)
                                                  Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                                                  + 0xe0) == 0) {
                                          thunk_FUN_01ac7298();
                                        }
                                        uVar34 = FUN_02fdd9e8(uVar22,0);
                                        if ((uVar34 & 1) != 0) {
                                          if (*(int *)(*(long *)
                                                  Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                                                  + 0xe0) == 0) {
                                            thunk_FUN_01ac7298();
                                          }
                                          uVar22 = FUN_02fddc48(uVar22,0);
                                          uVar22 = uVar22 & 0xffff;
                                          fVar57 = fVar77;
                                        }
                                      }
                                    }
                                    else {
                                      if (*(int *)(*(long *)
                                                  Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                                                  + 0xe0) == 0) {
                                        thunk_FUN_01ac7298();
                                      }
                                      uVar34 = FUN_02fdd92c(uVar22,0);
                                      fVar57 = 1.0;
                                      if ((uVar34 & 1) != 0) {
                                        if (*(int *)(*(long *)
                                                  Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                                                  + 0xe0) == 0) {
                                          thunk_FUN_01ac7298();
                                        }
                                        uVar22 = FUN_02fdddc0(uVar22,0);
                                        goto LAB_036a9658;
                                      }
                                    }
                                  }
                                  else {
                                    if (*(int *)(*(long *)
                                                  Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                                                + 0xe0) == 0) {
                                      thunk_FUN_01ac7298();
                                    }
                                    uVar34 = FUN_02fdd9e8(uVar22,0);
                                    fVar57 = 1.0;
                                    if ((uVar34 & 1) != 0) {
                                      if (*(int *)(*(long *)
                                                  Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                                                  + 0xe0) == 0) {
                                        thunk_FUN_01ac7298();
                                      }
                                      uVar22 = FUN_02fddc48(uVar22,0);
LAB_036a9658:
                                      fVar57 = 1.0;
                                      uVar22 = uVar22 & 0xffff;
                                    }
                                  }
                                  iVar20 = *(int *)((long)unaff_x19 + 0x644);
                                  if (iVar20 != 0) goto LAB_036a9280;
LAB_036a9668:
                                  if ((*plVar5 == 0) ||
                                     (lVar31 = *(long *)(*plVar5 + 0x38), lVar31 == 0))
                                  goto LAB_036afadc;
                                  if (*(uint *)(lVar31 + 0x18) <= *puVar3) goto LAB_036afbe8;
                                  *plVar4 = *(long *)(lVar31 + (long)(int)*puVar3 * 0x178 + 0x30);
                                  thunk_FUN_01b4f09c(plVar4);
                                  if (*plVar4 == 0) goto LAB_036a9250;
                                  if ((*plVar5 == 0) ||
                                     (lVar31 = *(long *)(*plVar5 + 0x38), lVar31 == 0))
                                  goto LAB_036afadc;
                                  if (*(uint *)(lVar31 + 0x18) <= *puVar3) goto LAB_036afbe8;
                                  *plVar53 = *(long *)(lVar31 + (long)(int)*puVar3 * 0x178 + 0x38);
                                  thunk_FUN_01b4f09c(plVar53);
                                  if ((*plVar5 == 0) ||
                                     (lVar31 = *(long *)(*plVar5 + 0x38), lVar31 == 0))
                                  goto LAB_036afadc;
                                  if (*(uint *)(lVar31 + 0x18) <= *puVar3) goto LAB_036afbe8;
                                  *plVar51 = *(long *)(lVar31 + (long)(int)*puVar3 * 0x178 + 0x50);
                                  thunk_FUN_01b4f09c();
                                  if ((*plVar5 == 0) ||
                                     (lVar31 = *(long *)(*plVar5 + 0x38), lVar31 == 0))
                                  goto LAB_036afadc;
                                  uVar67 = *puVar3;
                                  uVar23 = *(uint *)(lVar31 + 0x18);
                                  if (uVar23 <= uVar67) goto LAB_036afbe8;
                                  *(undefined4 *)(unaff_x19 + 0x24) =
                                       *(undefined4 *)(lVar31 + (long)(int)uVar67 * 0x178 + 0x58);
                                  if (bVar1) {
                                    lVar32 = unaff_x19[0x8f];
                                    if (lVar32 == 0) goto LAB_036afadc;
                                    if (*(uint *)(lVar32 + 0x18) <= uVar90) goto LAB_036afbe8;
                                    if ((*(int *)(lVar32 + (long)(int)uVar90 * 0xc + 0x20) != 10) ||
                                       (uVar67 == *(uint *)(unaff_x19 + 0x93))) goto LAB_036a9778;
                                    if (uVar23 <= uVar67 - 1) goto LAB_036afbe8;
                                    if (*plVar53 == 0) goto LAB_036afadc;
                                    fVar58 = *(float *)(lVar31 + (long)(int)(uVar67 - 1) * 0x178 +
                                                       0x60);
                                    iVar20 = FUN_0396ac24(*plVar53 + 0x50,0);
                                    lVar31 = *plVar53;
                                  }
                                  else {
LAB_036a9778:
                                    if (*plVar53 == 0) goto LAB_036afadc;
                                    fVar58 = *(float *)(unaff_x19 + 0x3d);
                                    iVar20 = FUN_0396ac24(*plVar53 + 0x50,0);
                                    lVar31 = unaff_x19[0x20];
                                  }
                                  if (lVar31 == 0) goto LAB_036afadc;
                                  fVar82 = (float)FUN_0396ac34(lVar31 + 0x50,0);
                                  fVar62 = fVar75;
                                  if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
                                    fVar62 = 1.0;
                                  }
                                  fVar85 = 0.0;
                                  fVar64 = 0.0;
                                  if (!(bool)(bVar1 & uVar22 == 0x2026)) {
                                    if (*plVar53 == 0) goto LAB_036afadc;
                                    fVar64 = (float)FUN_0396ac54(*plVar53 + 0x50,0);
                                    if (*plVar53 == 0) goto LAB_036afadc;
                                    fVar85 = (float)FUN_0396ac94(*plVar53 + 0x50,0);
                                  }
                                  lVar31 = unaff_x19[0xc9];
                                  if ((lVar31 == 0) || (*(long *)(lVar31 + 0x20) == 0))
                                  goto LAB_036afadc;
                                  fVar63 = *(float *)((long)unaff_x19 + 0x404);
                                  fVar65 = *(float *)(lVar31 + 0x2c);
                                  fVar81 = (float)FUN_0396b17c(*(long *)(lVar31 + 0x20),0);
                                  if (*plVar53 == 0) goto LAB_036afadc;
                                  fVar86 = (float)FUN_0396ac84(*plVar53 + 0x50,0);
                                  if (*plVar53 == 0) goto LAB_036afadc;
                                  fVar83 = *(float *)((long)unaff_x19 + 0x404);
                                  fVar66 = (float)FUN_0396ac34(*plVar53 + 0x50,0);
                                  lVar31 = unaff_x19[0x6d];
                                  if ((lVar31 == 0) ||
                                     (lVar32 = *(long *)(lVar31 + 0x38), lVar32 == 0))
                                  goto LAB_036afadc;
                                  if (*(uint *)(lVar32 + 0x18) <= *puVar3) goto LAB_036afbe8;
                                  lVar32 = lVar32 + (long)(int)*puVar3 * 0x178;
                                  *(undefined4 *)(lVar32 + 0x2c) = 0;
                                  fVar62 = ((fVar57 * fVar58) / (float)iVar20) * fVar82 * fVar62;
                                  fVar81 = fVar62 * fVar63 * fVar65 * fVar81;
                                  *(float *)(lVar32 + 0x160) = fVar81;
                                  uVar23 = *(uint *)(unaff_x19 + 0x24);
                                  fVar66 = fVar62 * fVar86 * fVar83 * fVar66;
                                  fStack000000000000012c = fVar85;
                                  if (uVar23 == 0) {
                                    fStack0000000000000174 = *(float *)(unaff_x19 + 0xc3);
                                  }
                                  else {
                                    lVar32 = unaff_x19[0xe1];
                                    if (lVar32 == 0) goto LAB_036afadc;
                                    if (*(uint *)(lVar32 + 0x18) <= uVar23) goto LAB_036afbe8;
                                    lVar32 = *(long *)(lVar32 + (long)(int)uVar23 * 8 + 0x20);
                                    if (lVar32 == 0) goto LAB_036afadc;
                                    fStack0000000000000174 = *(float *)(lVar32 + 0x10c);
                                  }
FUN_036a9b34:
                                  unaff_x29 = &stack0x00000fc0;
                                  fVar58 = 0.0;
                                  if (uVar22 != 3 && uVar22 != 0xad) {
                                    fVar58 = fVar81;
                                  }
                                }
                                else {
                                  fVar57 = 1.0;
                                  if (iVar20 == 0) goto LAB_036a9668;
LAB_036a9280:
                                  if (iVar20 == 1) {
                                    if ((*plVar5 == 0) ||
                                       (lVar31 = *(long *)(*plVar5 + 0x38), lVar31 == 0))
                                    goto LAB_036afadc;
                                    if (*(uint *)(lVar31 + 0x18) <= *puVar3) goto LAB_036afbe8;
                                    *plVar2 = *(long *)(lVar31 + (long)(int)*puVar3 * 0x178 + 0x40);
                                    thunk_FUN_01b4f09c();
                                    if ((*plVar5 == 0) ||
                                       (lVar31 = *(long *)(*plVar5 + 0x38), lVar31 == 0))
                                    goto LAB_036afadc;
                                    if (*(uint *)(lVar31 + 0x18) <= *puVar3) goto LAB_036afbe8;
                                    *(undefined4 *)((long)unaff_x19 + 0x6a4) =
                                         *(undefined4 *)(lVar31 + (long)(int)*puVar3 * 0x178 + 0x48)
                                    ;
                                    if ((unaff_x19[0xd3] == 0) ||
                                       (lVar31 = FUN_036fe7c0(unaff_x19[0xd3],0), lVar31 == 0))
                                    goto LAB_036afadc;
                                    lVar31 = FUN_02b59714(lVar31,*(undefined4 *)
                                                                  ((long)unaff_x19 + 0x6a4),
                                                          *(undefined8 *)PTR_DAT_03d9c878);
                                    puVar15 = PTR_DAT_03d9c920;
                                    if (lVar31 == 0) {
                                      unaff_x29 = &stack0x00000fc0;
                                      goto LAB_036a9250;
                                    }
                                    if (uVar22 == 0x3c) {
                                      uVar22 = *(int *)((long)unaff_x19 + 0x6a4) + 0xe000;
                                    }
                                    else {
                                      lVar54 = *(long *)PTR_DAT_03d9c920;
                                      if (*(int *)(lVar54 + 0xe0) == 0) {
                                        thunk_FUN_01ac7298();
                                        lVar54 = *(long *)puVar15;
                                      }
                                      *(undefined4 *)((long)unaff_x19 + 0x1bc) =
                                           *(undefined4 *)(*(long *)(lVar54 + 0xb8) + 0x68);
                                    }
                                    if (unaff_x19[0x20] == 0) goto LAB_036afadc;
                                    fVar81 = *(float *)(unaff_x19 + 0x3d);
                                    memmove(&stack0x00000fe0,(void *)(unaff_x19[0x20] + 0x50),0x60);
                                    iVar20 = FUN_0396ac24(&stack0x00000fe0,0);
                                    if (*plVar53 == 0) goto LAB_036afadc;
                                    memmove(&stack0x00000fe0,(void *)(*plVar53 + 0x50),0x60);
                                    fVar62 = (float)FUN_0396ac34(&stack0x00000fe0,0);
                                    fVar58 = fVar75;
                                    if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
                                      fVar58 = 1.0;
                                    }
                                    if (unaff_x19[0xd3] == 0) goto LAB_036afadc;
                                    fVar58 = (fVar81 / (float)iVar20) * fVar62 * fVar58;
                                    iVar20 = FUN_0396ac24(unaff_x19[0xd3] + 0x48,0);
                                    fVar81 = *(float *)(unaff_x19 + 0x3d);
                                    if (iVar20 < 1) {
                                      if (*plVar53 == 0) goto LAB_036afadc;
                                      iVar20 = FUN_0396ac24(*plVar53 + 0x50,0);
                                      if (*plVar53 == 0) goto LAB_036afadc;
                                      fVar82 = (float)FUN_0396ac34(*plVar53 + 0x50,0);
                                      fVar62 = fVar75;
                                      if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
                                        fVar62 = 1.0;
                                      }
                                      if (unaff_x19[0x20] == 0) goto LAB_036afadc;
                                      fVar85 = (float)FUN_0396ac54(unaff_x19[0x20] + 0x50,0);
                                      if (*(long *)(lVar31 + 0x20) == 0) goto LAB_036afadc;
                                      FUN_0396b140(&stack0x000010a0,*(long *)(lVar31 + 0x20),0);
                                      fVar63 = (float)FUN_0396af70(&stack0x00000fc0,0);
                                      if (*(long *)(lVar31 + 0x20) == 0) goto LAB_036afadc;
                                      fVar86 = *(float *)(lVar31 + 0x2c);
                                      fVar65 = (float)FUN_0396b17c(*(long *)(lVar31 + 0x20),0);
                                      if (*plVar53 == 0) goto LAB_036afadc;
                                      fVar64 = (float)FUN_0396ac54(*plVar53 + 0x50,0);
                                      if (*plVar53 == 0) goto LAB_036afadc;
                                      fVar83 = (float)FUN_0396ac84(*plVar53 + 0x50,0);
                                      if (*plVar53 == 0) goto LAB_036afadc;
                                      fVar68 = *(float *)((long)unaff_x19 + 0x404);
                                      fVar66 = (float)FUN_0396ac34(*plVar53 + 0x50,0);
                                      if (unaff_x19[0x20] == 0) goto LAB_036afadc;
                                      fVar66 = fVar58 * fVar83 * fVar68 * fVar66;
                                      fVar62 = (fVar81 / (float)iVar20) * fVar82 * fVar62;
                                      fVar81 = fVar62 * (fVar85 / fVar63) * fVar86 * fVar65;
                                      fVar62 = fVar62 / fVar81;
                                      fVar64 = fVar62 * fVar64;
                                      fVar58 = (float)FUN_0396ac94(unaff_x19[0x20] + 0x50,0);
                                      fVar62 = fVar62 * fVar58;
                                    }
                                    else {
                                      if (*plVar2 == 0) goto LAB_036afadc;
                                      iVar20 = FUN_0396ac24(*plVar2 + 0x48,0);
                                      if (*plVar2 == 0) goto LAB_036afadc;
                                      fVar62 = (float)FUN_0396ac34(*plVar2 + 0x48,0);
                                      if (*(long *)(lVar31 + 0x20) == 0) goto LAB_036afadc;
                                      fVar85 = *(float *)(lVar31 + 0x2c);
                                      fVar82 = fVar75;
                                      if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
                                        fVar82 = 1.0;
                                      }
                                      fVar63 = (float)FUN_0396b17c(*(long *)(lVar31 + 0x20),0);
                                      if (unaff_x19[0xd3] == 0) goto LAB_036afadc;
                                      fVar64 = (float)FUN_0396ac54(unaff_x19[0xd3] + 0x48,0);
                                      if (*plVar2 == 0) goto LAB_036afadc;
                                      fVar65 = (float)FUN_0396ac84(*plVar2 + 0x48,0);
                                      if (*plVar2 == 0) goto LAB_036afadc;
                                      fVar86 = *(float *)((long)unaff_x19 + 0x404);
                                      fVar66 = (float)FUN_0396ac34(*plVar2 + 0x48,0);
                                      if (unaff_x19[0xd3] == 0) goto LAB_036afadc;
                                      fVar66 = fVar58 * fVar65 * fVar86 * fVar66;
                                      fVar81 = (fVar81 / (float)iVar20) * fVar62 * fVar82 *
                                               fVar85 * fVar63;
                                      fVar62 = (float)FUN_0396ac94(unaff_x19[0xd3] + 0x48,0);
                                    }
                                    *plVar4 = lVar31;
                                    thunk_FUN_01b4f09c(plVar4,lVar31);
                                    if ((*plVar5 != 0) &&
                                       (lVar31 = *(long *)(*plVar5 + 0x38), lVar31 != 0)) {
                                      if (*(uint *)(lVar31 + 0x18) <= *puVar3) goto LAB_036afbe8;
                                      lVar31 = lVar31 + (long)(int)*puVar3 * 0x178;
                                      *(undefined4 *)(lVar31 + 0x2c) = 1;
                                      *(float *)(lVar31 + 0x160) = fVar81;
                                      *(long *)(lVar31 + 0x40) = *plVar2;
                                      thunk_FUN_01b4f09c();
                                      if ((*plVar5 != 0) &&
                                         (lVar31 = *(long *)(*plVar5 + 0x38), lVar31 != 0)) {
                                        if (*(uint *)(lVar31 + 0x18) <= *puVar3) goto LAB_036afbe8;
                                        *(long *)(lVar31 + (long)(int)*puVar3 * 0x178 + 0x38) =
                                             *plVar53;
                                        thunk_FUN_01b4f09c();
                                        lVar31 = *plVar5;
                                        if ((lVar31 != 0) &&
                                           (lVar54 = *(long *)(lVar31 + 0x38), lVar54 != 0)) {
                                          if (*puVar3 < *(uint *)(lVar54 + 0x18)) {
                                            fStack0000000000000174 = 0.0;
                                            *(int *)(lVar54 + (long)(int)*puVar3 * 0x178 + 0x58) =
                                                 (int)unaff_x19[0x24];
                                            *(int *)(unaff_x19 + 0x24) = (int)lVar32;
                                            fStack000000000000012c = fVar62;
                                            goto FUN_036a9b34;
                                          }
                                          goto LAB_036afbe8;
                                        }
                                      }
                                    }
                                    goto LAB_036afadc;
                                  }
                                  lVar31 = *plVar5;
                                  fVar58 = 0.0;
                                  if (uVar22 != 3 && uVar22 != 0xad) {
                                    fVar58 = fVar81;
                                  }
                                  fVar66 = 0.0;
                                  if (lVar31 == 0) goto LAB_036afadc;
                                  fVar64 = 0.0;
                                  fStack000000000000012c = 0.0;
                                }
                                lVar31 = *(long *)(lVar31 + 0x38);
                                if (lVar31 == 0) goto LAB_036afadc;
                                if (*(uint *)(lVar31 + 0x18) <= *puVar3) goto LAB_036afbe8;
                                lVar31 = lVar31 + (long)(int)*puVar3 * 0x178;
                                *(short *)(lVar31 + 0x20) = (short)uVar22;
                                *(int *)(lVar31 + 0x60) = (int)unaff_x19[0x3d];
                                *(undefined4 *)(lVar31 + 0x164) =
                                     *(undefined4 *)((long)unaff_x19 + 0x4ec);
                                if ((unaff_x19[0x6d] == 0) ||
                                   (lVar31 = *(long *)(unaff_x19[0x6d] + 0x38), lVar31 == 0))
                                goto LAB_036afadc;
                                if (*(uint *)(lVar31 + 0x18) <= *puVar3) goto LAB_036afbe8;
                                *(int *)(lVar31 + (long)(int)*puVar3 * 0x178 + 0x168) =
                                     (int)unaff_x19[0x2b];
                                if ((unaff_x19[0x6d] == 0) ||
                                   (lVar31 = *(long *)(unaff_x19[0x6d] + 0x38), lVar31 == 0))
                                goto LAB_036afadc;
                                if (*(uint *)(lVar31 + 0x18) <= *puVar3) goto LAB_036afbe8;
                                *(undefined4 *)(lVar31 + (long)(int)*puVar3 * 0x178 + 0x170) =
                                     *(undefined4 *)((long)unaff_x19 + 0x15c);
                                if ((unaff_x19[0x6d] == 0) ||
                                   (lVar31 = *(long *)(unaff_x19[0x6d] + 0x38), lVar31 == 0))
                                goto LAB_036afadc;
                                uVar23 = *puVar3;
                                FUN_02176564(&stack0x000001d0,unaff_x19 + 0xaa,
                                             *(undefined8 *)PTR_DAT_03d9c918);
                                *(undefined8 *)(unaff_x29 + 0xe8) = in_stack_000001d8;
                                *(undefined8 *)(unaff_x29 + 0xe0) = in_stack_000001d0;
                                if (*(uint *)(lVar31 + 0x18) <= uVar23) goto LAB_036afbe8;
                                uVar33 = *(undefined8 *)(unaff_x29 + 0xe8);
                                uVar37 = *(undefined8 *)(unaff_x29 + 0xe0);
                                lVar31 = lVar31 + (long)(int)uVar23 * 0x178;
                                *(undefined4 *)(lVar31 + 0x18c) = uStack00000000000001e0;
                                *(undefined8 *)(lVar31 + 0x184) = uVar33;
                                *(undefined8 *)(lVar31 + 0x17c) = uVar37;
                                if ((*plVar5 == 0) ||
                                   (lVar31 = *(long *)(*plVar5 + 0x38), lVar31 == 0))
                                goto LAB_036afadc;
                                if (*(uint *)(lVar31 + 0x18) <= *puVar3) goto LAB_036afbe8;
                                *(undefined4 *)(lVar31 + (long)(int)*puVar3 * 0x178 + 400) =
                                     *(undefined4 *)((long)unaff_x19 + 0x25c);
                                if ((unaff_x19[0xc9] == 0) ||
                                   (lVar31 = *(long *)(unaff_x19[0xc9] + 0x20), lVar31 == 0))
                                goto LAB_036afadc;
                                FUN_0396b140(&stack0x000001d0,lVar31,0);
                                puVar15 = StringLiteral_455;
                                *(undefined8 *)(unaff_x29 + 0x98) = in_stack_000001d8;
                                *(undefined8 *)(unaff_x29 + 0x90) = in_stack_000001d0;
                                if ((int)uVar22 < 0x10000) {
                                  if (*(int *)(*(long *)
                                                Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                                              + 0xe0) == 0) {
                                    thunk_FUN_01ac7298();
                                  }
                                  uVar23 = FUN_02fdb080(uVar22,0);
                                  uVar23 = uVar23 & 1;
                                }
                                else {
                                  uVar23 = 0;
                                }
                                uVar67 = *(uint *)(unaff_x19 + 0x55);
                                *(undefined4 *)((long)unaff_x19 + 0x2fc) = 0;
                                if (*(char *)((long)unaff_x19 + 0x2f9) == '\0') {
                                  _fStack0000000000000138 = (ulong)uVar67 << 0x20;
                                  fVar82 = 0.0;
                                  fVar62 = 0.0;
                                }
                                else {
                                  if (*plVar4 == 0) goto LAB_036afadc;
                                  uVar24 = *puVar3;
                                  uVar7 = *(uint *)(*plVar4 + 0x28);
                                  if ((int)uVar24 < (int)uVar28) {
                                    if ((*plVar5 == 0) ||
                                       (lVar31 = *(long *)(*plVar5 + 0x38), lVar31 == 0))
                                    goto LAB_036afadc;
                                    if (*(uint *)(lVar31 + 0x18) <= uVar24 + 1) goto LAB_036afbe8;
                                    lVar31 = *(long *)(lVar31 + (long)(int)(uVar24 + 1) * 0x178 +
                                                      0x30);
                                    if ((((lVar31 == 0) || (*plVar53 == 0)) ||
                                        (lVar32 = *(long *)(*plVar53 + 0x128), lVar32 == 0)) ||
                                       (lVar32 = *(long *)(lVar32 + 0x18), lVar32 == 0))
                                    goto LAB_036afadc;
                                    uVar29 = FUN_02630bd0(lVar32,uVar7 | *(int *)(lVar31 + 0x28) <<
                                                                         0x10,&stack0x00000fb8,
                                                          *(undefined8 *)PTR_DAT_03d9c868);
                                    uVar21 = 0;
                                    if ((uVar29 & 1) == 0) {
                                      _fStack0000000000000138 = (ulong)uVar67 << 0x20;
                                      fVar82 = 0.0;
                                      fVar62 = 0.0;
                                    }
                                    else {
                                      if (in_stack_00000fb8 == 0) goto LAB_036afadc;
                                      uVar21 = *(undefined4 *)(in_stack_00000fb8 + 0x20);
                                      fVar62 = *(float *)(in_stack_00000fb8 + 0x14);
                                      fVar82 = *(float *)(in_stack_00000fb8 + 0x18);
                                      if ((*(byte *)(in_stack_00000fb8 + 0x39) & 1) != 0) {
                                        uVar67 = 0;
                                      }
                                      _fStack0000000000000138 =
                                           CONCAT44(uVar67,*(undefined4 *)(in_stack_00000fb8 + 0x1c)
                                                   );
                                    }
                                    uVar24 = *puVar3;
                                  }
                                  else {
                                    uVar21 = 0;
                                    _fStack0000000000000138 = (ulong)uVar67 << 0x20;
                                    fVar82 = 0.0;
                                    fVar62 = 0.0;
                                  }
                                  if (0 < (int)uVar24) {
                                    if ((*plVar5 == 0) ||
                                       (lVar31 = *(long *)(*plVar5 + 0x38), lVar31 == 0))
                                    goto LAB_036afadc;
                                    if (*(uint *)(lVar31 + 0x18) <= uVar24 - 1) goto LAB_036afbe8;
                                    lVar31 = *(long *)(lVar31 + (ulong)(uVar24 - 1) * 0x178 + 0x30);
                                    if (((lVar31 == 0) || (*plVar53 == 0)) ||
                                       ((lVar32 = *(long *)(*plVar53 + 0x128), lVar32 == 0 ||
                                        (lVar32 = *(long *)(lVar32 + 0x18), lVar32 == 0))))
                                    goto LAB_036afadc;
                                    uVar29 = FUN_02630bd0(lVar32,*(uint *)(lVar31 + 0x28) |
                                                                 uVar7 << 0x10,&stack0x00000fb8,
                                                          *(undefined8 *)PTR_DAT_03d9c868);
                                    if ((uVar29 & 1) != 0) {
                                      if (in_stack_00000fb8 == 0) goto LAB_036afadc;
                                      uVar70 = (undefined4)_fStack0000000000000138;
                                      fVar62 = (float)FUN_036d2d10(fVar62,fVar82,
                                                                   _fStack0000000000000138 &
                                                                   0xffffffff,uVar21,
                                                                   *(undefined4 *)
                                                                    (in_stack_00000fb8 + 0x28),
                                                                   *(undefined4 *)
                                                                    (in_stack_00000fb8 + 0x2c),
                                                                   *(undefined4 *)
                                                                    (in_stack_00000fb8 + 0x30),
                                                                   *(undefined4 *)
                                                                    (in_stack_00000fb8 + 0x34),0);
                                      if (in_stack_00000fb8 == 0) goto LAB_036afadc;
                                      if ((*(byte *)(in_stack_00000fb8 + 0x39) & 1) != 0) {
                                        fStack000000000000013c = 0.0;
                                      }
                                      _fStack0000000000000138 =
                                           CONCAT44(fStack000000000000013c,uVar70);
                                    }
                                  }
                                  *(float *)((long)unaff_x19 + 0x2fc) = fStack0000000000000138;
                                }
                                if ((char)unaff_x19[0x1e] != '\0') {
                                  fVar63 = *(float *)(unaff_x19 + 200);
                                  fVar85 = (float)FUN_0396af88(&stack0x00001050,0);
                                  fVar63 = fVar63 - fVar58 * fVar85 * (1.0 - *(float *)((long)
                                                  unaff_x19 + 0x2d4));
                                  *(float *)(unaff_x19 + 200) = fVar63;
                                  if ((uVar22 == 0x200b) || (uVar23 != 0)) {
                                    *(float *)(unaff_x19 + 200) =
                                         fVar63 - fVar61 * *(float *)((long)unaff_x19 + 0x2b4);
                                  }
                                }
                                fVar63 = *(float *)(unaff_x19 + 0x56);
                                fVar85 = 0.0;
                                if (fVar63 != 0.0) {
                                  fVar85 = (float)FUN_0396af68(&stack0x00001050,0);
                                  fVar65 = (float)FUN_0396af78(&stack0x00001050,0);
                                  fVar85 = (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                                           (fVar63 * 0.5 - fVar58 * (fVar85 * 0.5 + fVar65));
                                  *(float *)(unaff_x19 + 200) = *(float *)(unaff_x19 + 200) + fVar85
                                  ;
                                }
                                if (((*(int *)((long)unaff_x19 + 0x644) == 0) && (cVar39 == '\0'))
                                   && ((*(byte *)((long)unaff_x19 + 0x25c) & 1) != 0)) {
                                  lVar31 = *plVar51;
                                  if (*(int *)(*(long *)
                                                Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                                              + 0xe0) == 0) {
                                    thunk_FUN_01ac7298();
                                  }
                                  uVar29 = FUN_0391f968(lVar31,0,0);
                                  fVar65 = 0.0;
                                  if ((uVar29 & 1) != 0) {
                                    lVar31 = *plVar51;
                                    if (*(int *)(*(long *)puVar15 + 0xe0) == 0) {
                                      thunk_FUN_01ac7298();
                                    }
                                    if (lVar31 == 0) goto LAB_036afadc;
                                    uVar29 = FUN_038ffa04(lVar31,*(undefined4 *)
                                                                  (*(long *)(*(long *)puVar15 + 0xb8
                                                                            ) + 0x54),0);
                                    fVar65 = 0.0;
                                    if ((uVar29 & 1) != 0) {
                                      lVar31 = *plVar51;
                                      if (*(int *)(*(long *)puVar15 + 0xe0) == 0) {
                                        thunk_FUN_01ac7298();
                                      }
                                      if (lVar31 == 0) goto LAB_036afadc;
                                      fVar63 = (float)FUN_03900954(lVar31,*(undefined4 *)
                                                                           (*(long *)(*(long *)
                                                  puVar15 + 0xb8) + 0x54),0);
                                      if ((*plVar53 == 0) || (*plVar51 == 0)) goto LAB_036afadc;
                                      fVar86 = *(float *)(*plVar53 + 0x1b0);
                                      fVar65 = (float)FUN_03900954(*plVar51,*(undefined4 *)
                                                                             (*(long *)(*(long *)
                                                  puVar15 + 0xb8) + 0xcc),0);
                                      fVar65 = fVar65 * fVar63 * fVar86 * 0.25;
                                      if (fVar63 < fStack0000000000000174 + fVar65) {
                                        fStack0000000000000174 = fVar63 - fVar65;
                                      }
                                    }
                                  }
                                  if (*plVar53 == 0) goto LAB_036afadc;
                                  fStack00000000000000e4 = *(float *)(*plVar53 + 0x1b4);
                                }
                                else {
                                  lVar31 = *plVar51;
                                  if (*(int *)(*(long *)
                                                Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                                              + 0xe0) == 0) {
                                    thunk_FUN_01ac7298();
                                  }
                                  uVar29 = FUN_0391f968(lVar31,0,0);
                                  fStack00000000000000e4 = 0.0;
                                  if ((uVar29 & 1) != 0) {
                                    lVar31 = *plVar51;
                                    if (*(int *)(*(long *)puVar15 + 0xe0) == 0) {
                                      thunk_FUN_01ac7298();
                                    }
                                    if (lVar31 == 0) goto LAB_036afadc;
                                    uVar29 = FUN_038ffa04(lVar31,*(undefined4 *)
                                                                  (*(long *)(*(long *)puVar15 + 0xb8
                                                                            ) + 0x54),0);
                                    if ((uVar29 & 1) != 0) {
                                      lVar31 = *plVar51;
                                      if (*(int *)(*(long *)puVar15 + 0xe0) == 0) {
                                        thunk_FUN_01ac7298();
                                      }
                                      if (lVar31 == 0) goto LAB_036afadc;
                                      uVar29 = FUN_038ffa04(lVar31,*(undefined4 *)
                                                                    (*(long *)(*(long *)puVar15 +
                                                                              0xb8) + 0xcc),0);
                                      if ((uVar29 & 1) != 0) {
                                        lVar31 = *plVar51;
                                        if (*(int *)(*(long *)puVar15 + 0xe0) == 0) {
                                          thunk_FUN_01ac7298();
                                        }
                                        if (lVar31 != 0) {
                                          fVar63 = (float)FUN_03900954(lVar31,*(undefined4 *)
                                                                               (*(long *)(*(long *)
                                                  puVar15 + 0xb8) + 0x54),0);
                                          if ((*plVar53 != 0) && (*plVar51 != 0)) {
                                            fVar86 = *(float *)(*plVar53 + 0x1a8);
                                            fVar65 = (float)FUN_03900954(*plVar51,*(undefined4 *)
                                                                                   (*(long *)(*(long
                                                                                                *)
                                                  puVar15 + 0xb8) + 0xcc),0);
                                            fVar65 = fVar65 * fVar63 * fVar86 * 0.25;
                                            if (fVar63 < fStack0000000000000174 + fVar65) {
                                              fStack0000000000000174 = fVar63 - fVar65;
                                            }
                                            goto LAB_036aa254;
                                          }
                                        }
                                        goto LAB_036afadc;
                                      }
                                    }
                                  }
                                  fVar65 = 0.0;
                                }
LAB_036aa254:
                                fStack0000000000000124 = *(float *)(unaff_x19 + 200);
                                fVar63 = (float)FUN_0396af78(&stack0x00001050,0);
                                fStack0000000000000124 =
                                     fStack0000000000000124 +
                                     (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                                     fVar58 * (fVar62 + ((fVar63 - fStack0000000000000174) - fVar65)
                                              );
                                fVar62 = (float)FUN_0396af80(&stack0x00001050,0);
                                fVar86 = *(float *)((long)unaff_x19 + 0x61c) +
                                         ((fVar66 + fVar58 * (fVar82 + fStack0000000000000174 +
                                                                       fVar62)) -
                                         *(float *)(unaff_x19 + 0x9b));
                                fVar62 = (float)FUN_0396af70(&stack0x00001050,0);
                                fVar83 = fVar86 - fVar58 * (fStack0000000000000174 +
                                                            fStack0000000000000174 + fVar62);
                                fVar62 = (float)FUN_0396af68(&stack0x00001050,0);
                                fVar63 = fStack0000000000000124 +
                                         (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                                         fVar58 * (fVar65 + fVar65 +
                                                  fStack0000000000000174 + fStack0000000000000174 +
                                                  fVar62);
                                fVar62 = fStack0000000000000124;
                                fVar82 = fVar63;
                                if (((*(int *)((long)unaff_x19 + 0x644) == 0) && (cVar39 == '\0'))
                                   && ((*(byte *)((long)unaff_x19 + 0x25c) >> 1 & 1) != 0)) {
                                  fVar68 = (float)(int)unaff_x19[0xbe] * fVar80;
                                  fVar62 = (float)FUN_0396af80(&stack0x00001050,0);
                                  fVar79 = fVar68 * fVar58 * (fVar65 + fStack0000000000000174 +
                                                                       fVar62);
                                  fVar62 = (float)FUN_0396af80(&stack0x00001050,0);
                                  fVar82 = (float)FUN_0396af70(&stack0x00001050,0);
                                  fVar86 = fVar86 + 0.0;
                                  fVar83 = fVar83 + 0.0;
                                  fVar74 = fStack0000000000000124 + fVar79;
                                  fVar68 = fVar68 * fVar58 * (((fVar62 - fVar82) -
                                                              fStack0000000000000174) - fVar65);
                                  fVar82 = fVar63 + fVar68;
                                  fVar69 = (fVar79 - fVar68) * 0.5;
                                  fStack0000000000000124 =
                                       (fStack0000000000000124 + fVar68) - fVar69;
                                  fVar63 = (fVar63 + fVar79) - fVar69;
                                  fVar62 = fVar74 - fVar69;
                                  fVar82 = fVar82 - fVar69;
                                }
                                if (*(char *)((long)unaff_x19 + 0x474) == '\0') {
                                  fVar68 = 0.0;
                                  fVar69 = 0.0;
                                  fVar79 = 0.0;
                                  fStack0000000000000110 = 0.0;
                                  fVar74 = fVar83;
                                  fStack0000000000000114 = fVar86;
                                }
                                else {
                                  thunk_FUN_03910e24(lVar30,0);
                                  fVar87 = (fVar83 + fVar86) * 0.5;
                                  fVar84 = (fVar63 + fStack0000000000000124) * 0.5;
                                  fVar86 = fVar86 - fVar87;
                                  fStack0000000000000110 = 0.0;
                                  fVar73 = fVar86;
                                  fVar62 = (float)FUN_03911ddc(fVar62 - fVar84,lVar30,0);
                                  fVar62 = fVar84 + fVar62;
                                  fStack0000000000000110 = fStack0000000000000110 + 0.0;
                                  fVar83 = fVar83 - fVar87;
                                  fVar68 = 0.0;
                                  fVar74 = fVar83;
                                  fStack0000000000000124 =
                                       (float)FUN_03911ddc(fStack0000000000000124 - fVar84,lVar30,0)
                                  ;
                                  fStack0000000000000124 = fVar84 + fStack0000000000000124;
                                  fVar68 = fVar68 + 0.0;
                                  fVar79 = 0.0;
                                  fVar63 = (float)FUN_03911ddc(fVar63 - fVar84,lVar30,0);
                                  fVar63 = fVar84 + fVar63;
                                  fVar86 = fVar87 + fVar86;
                                  fVar79 = fVar79 + 0.0;
                                  fVar69 = 0.0;
                                  fVar82 = (float)FUN_03911ddc(fVar82 - fVar84,lVar30,0);
                                  fVar82 = fVar84 + fVar82;
                                  fVar83 = fVar87 + fVar83;
                                  fVar69 = fVar69 + 0.0;
                                  fVar74 = fVar87 + fVar74;
                                  fStack0000000000000114 = fVar87 + fVar73;
                                }
                                if (*plVar5 == 0) goto LAB_036afadc;
                                lVar31 = *(long *)(*plVar5 + 0x38);
                                uVar29 = (ulong)(uint)fVar58;
                                if (lVar31 == 0) goto LAB_036afadc;
                                if (*(uint *)(lVar31 + 0x18) <= *puVar3) goto LAB_036afbe8;
                                lVar31 = lVar31 + (long)(int)*puVar3 * 0x178;
                                *(float *)(lVar31 + 0x11c) = fStack0000000000000124;
                                *(float *)(lVar31 + 0x120) = fVar74;
                                *(float *)(lVar31 + 0x124) = fVar68;
                                if ((*plVar5 == 0) ||
                                   (lVar31 = *(long *)(*plVar5 + 0x38), lVar31 == 0))
                                goto LAB_036afadc;
                                if (*(uint *)(lVar31 + 0x18) <= *puVar3) goto LAB_036afbe8;
                                lVar31 = lVar31 + (long)(int)*puVar3 * 0x178;
                                *(float *)(lVar31 + 0x110) = fVar62;
                                *(float *)(lVar31 + 0x114) = fStack0000000000000114;
                                *(float *)(lVar31 + 0x118) = fStack0000000000000110;
                                if ((*plVar5 == 0) ||
                                   (lVar31 = *(long *)(*plVar5 + 0x38), lVar31 == 0))
                                goto LAB_036afadc;
                                if (*(uint *)(lVar31 + 0x18) <= *puVar3) goto LAB_036afbe8;
                                lVar31 = lVar31 + (long)(int)*puVar3 * 0x178;
                                *(float *)(lVar31 + 0x128) = fVar63;
                                *(float *)(lVar31 + 300) = fVar86;
                                *(float *)(lVar31 + 0x130) = fVar79;
                                if ((*plVar5 == 0) ||
                                   (lVar31 = *(long *)(*plVar5 + 0x38), lVar31 == 0))
                                goto LAB_036afadc;
                                if (*(uint *)(lVar31 + 0x18) <= *puVar3) goto LAB_036afbe8;
                                lVar31 = lVar31 + (long)(int)*puVar3 * 0x178;
                                *(float *)(lVar31 + 0x134) = fVar82;
                                *(float *)(lVar31 + 0x138) = fVar83;
                                *(float *)(lVar31 + 0x13c) = fVar69;
                                if ((*plVar5 == 0) ||
                                   (lVar31 = *(long *)(*plVar5 + 0x38), lVar31 == 0))
                                goto LAB_036afadc;
                                uVar67 = *puVar3;
                                lVar32 = (long)(int)uVar67;
                                if (*(uint *)(lVar31 + 0x18) <= uVar67) goto LAB_036afbe8;
                                lVar54 = lVar31 + lVar32 * 0x178;
                                *(int *)(lVar54 + 0x140) = (int)unaff_x19[200];
                                fVar82 = *(float *)(unaff_x19 + 0x9b);
                                uVar71 = (ulong)(uint)fVar82;
                                fVar62 = *(float *)((long)unaff_x19 + 0x61c);
                                *(float *)(lVar54 + 0x15c) =
                                     (fVar63 - fStack0000000000000124) /
                                     (fStack0000000000000114 - fVar74);
                                *(float *)(lVar54 + 0x14c) = (fVar66 - fVar82) + fVar62;
                                fVar64 = fVar64 * fVar58;
                                if (*(int *)((long)unaff_x19 + 0x644) == 0) {
                                  fVar64 = fVar64 / fVar57;
                                  fStack000000000000012c =
                                       (fStack000000000000012c * fVar58) / fVar57;
                                }
                                else {
                                  fStack000000000000012c = fStack000000000000012c * fVar58;
                                }
                                uVar7 = *(uint *)(unaff_x19 + 0x93);
                                if ((uVar23 == 0) || (uVar67 == uVar7)) {
                                  fStack000000000000012c = fVar62 + fStack000000000000012c;
                                  fVar64 = fVar62 + fVar64;
                                  fVar86 = fStack000000000000012c;
                                  fVar63 = fVar64;
                                  if (fVar62 != 0.0) {
                                    fVar63 = (fVar64 - fVar62) / *(float *)((long)unaff_x19 + 0x404)
                                    ;
                                    fVar86 = (fStack000000000000012c - fVar62) /
                                             *(float *)((long)unaff_x19 + 0x404);
                                    if (fVar63 <= fVar64) {
                                      fVar63 = fVar64;
                                    }
                                    if (fStack000000000000012c <= fVar86) {
                                      fVar86 = fStack000000000000012c;
                                    }
                                  }
                                  lVar31 = lVar31 + lVar32 * 0x178;
                                  fVar62 = fVar63;
                                  if (fVar63 <= *(float *)(unaff_x19 + 0x99)) {
                                    fVar62 = *(float *)(unaff_x19 + 0x99);
                                  }
                                  fVar66 = fVar86;
                                  if (*(float *)((long)unaff_x19 + 0x4cc) <= fVar86) {
                                    fVar66 = *(float *)((long)unaff_x19 + 0x4cc);
                                  }
                                  *(float *)((long)unaff_x19 + 0x4cc) = fVar66;
                                  *(float *)(unaff_x19 + 0x99) = fVar62;
                                  *(float *)(lVar31 + 0x154) = fVar63;
                                  *(float *)(lVar31 + 0x158) = fVar86;
                                  *(float *)(lVar31 + 0x148) = fVar64 - fVar82;
                                  *(float *)(unaff_x19 + 0x98) = fVar64 - fVar82;
                                  *(float *)(lVar31 + 0x150) = fStack000000000000012c - fVar82;
                                  *(float *)((long)unaff_x19 + 0x4c4) =
                                       fStack000000000000012c - fVar82;
                                  if (((int)unaff_x19[0x95] == 0) ||
                                     (*(char *)((long)unaff_x19 + 0x33c) != '\0')) {
                                    *(float *)(unaff_x19 + 0x97) = fVar62;
                                    if (unaff_x19[0x20] == 0) goto LAB_036afadc;
                                    fVar62 = *(float *)((long)unaff_x19 + 0x4bc);
                                    fVar82 = (float)FUN_0396ac64(unaff_x19[0x20] + 0x50,0);
                                    fVar57 = (fVar58 * fVar82) / fVar57;
                                    uVar71 = (ulong)*(uint *)(unaff_x19 + 0x9b);
                                    if (fVar62 <= fVar57) {
                                      fVar62 = fVar57;
                                    }
                                    *(float *)((long)unaff_x19 + 0x4bc) = fVar62;
                                  }
                                  if ((float)uVar71 == 0.0) {
                                    fVar57 = *(float *)((long)unaff_x19 + 0x4b4);
                                    if (*(float *)((long)unaff_x19 + 0x4b4) <= fVar64) {
                                      fVar57 = fVar64;
                                    }
                                    *(float *)((long)unaff_x19 + 0x4b4) = fVar57;
                                  }
                                }
                                else {
                                  fVar57 = *(float *)(unaff_x19 + 0x99);
                                  lVar31 = lVar31 + lVar32 * 0x178;
                                  *(float *)(lVar31 + 0x154) = fVar57;
                                  fVar62 = *(float *)((long)unaff_x19 + 0x4cc);
                                  fVar57 = fVar57 - fVar82;
                                  *(float *)(lVar31 + 0x148) = fVar57;
                                  *(float *)(lVar31 + 0x158) = fVar62;
                                  *(float *)(unaff_x19 + 0x98) = fVar57;
                                  fVar62 = fVar62 - fVar82;
                                  *(float *)(lVar31 + 0x150) = fVar62;
                                  *(float *)((long)unaff_x19 + 0x4c4) = fVar62;
                                }
                                lVar31 = *plVar5;
                                if ((lVar31 == 0) ||
                                   (lVar32 = *(long *)(lVar31 + 0x38), lVar32 == 0))
                                goto LAB_036afadc;
                                uVar24 = *puVar3;
                                if (*(uint *)(lVar32 + 0x18) <= uVar24) goto LAB_036afbe8;
                                lVar32 = lVar32 + (long)(int)uVar24 * 0x178;
                                *(undefined1 *)(lVar32 + 0x194) = 0;
                                uVar45 = *(uint *)(unaff_x19 + 0x4f);
                                if ((uVar22 == 9) ||
                                   (((((uVar23 == 0 && (uVar22 != 3)) && (uVar22 != 0x200b)) &&
                                     (uVar22 != 0xad)) ||
                                    (((bool)(uVar22 == 0xad & (bVar14 ^ 1U)) ||
                                     (*(int *)((long)unaff_x19 + 0x644) == 1)))))) {
                                  *(undefined1 *)(lVar32 + 0x194) = 1;
                                  pfVar43 = (float *)((long)unaff_x19 + 0x354);
                                  pfVar40 = (float *)(unaff_x19 + 0x6a);
                                  if (bVar1) {
                                    lVar31 = *(long *)(lVar31 + 0x50);
                                    if (lVar31 == 0) goto LAB_036afadc;
                                    if (*(uint *)(lVar31 + 0x18) <= *(uint *)(unaff_x19 + 0x95))
                                    goto LAB_036afbe8;
                                    lVar31 = lVar31 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
                                    pfVar40 = (float *)(lVar31 + 0x60);
                                    pfVar43 = (float *)(lVar31 + 100);
                                  }
                                  fVar62 = *pfVar40;
                                  fVar82 = *pfVar43;
                                  fVar57 = *(float *)(unaff_x19 + 0x6c);
                                  fVar64 = *(float *)(unaff_x19 + 200);
                                  fStack000000000000010c = (fVar89 - fVar62) - fVar82;
                                  bVar18 = true;
                                  if ((fVar57 <= fStack000000000000010c) &&
                                     (bVar18 = false, !NAN(fVar57))) {
                                    bVar18 = fVar57 == -1.0;
                                  }
                                  if (!bVar18) {
                                    fStack000000000000010c = fVar57;
                                  }
                                  fVar57 = 0.0;
                                  if ((char)unaff_x19[0x1e] == '\0') {
                                    fVar57 = (float)FUN_0396af88(&stack0x00001050,0);
                                    uVar71 = (ulong)*(uint *)(unaff_x19 + 0x9b);
                                  }
                                  fVar63 = *(float *)((long)unaff_x19 + 0x2d4);
                                  fVar86 = *(float *)((long)unaff_x19 + 0x4cc);
                                  if (uVar22 != 0xad) {
                                    fVar81 = fVar58;
                                  }
                                  fVar83 = (float)uVar71;
                                  fVar66 = 0.0;
                                  if ((0.0 < fVar83) &&
                                     (fVar66 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
                                    fVar66 = *(float *)(unaff_x19 + 0x99) -
                                             *(float *)(unaff_x19 + 0x9a);
                                  }
                                  uVar24 = *puVar3;
                                  fVar66 = (*(float *)(unaff_x19 + 0x97) - (fVar86 - fVar83)) +
                                           fVar66;
                                  if (fVar55 < fVar66) {
                                    if (*(int *)((long)unaff_x19 + 0x2e4) == -1) {
                                      *(uint *)((long)unaff_x19 + 0x2e4) = uVar24;
                                    }
                                    puVar15 = PTR_DAT_03d9c920;
                                    uVar37 = DAT_00b92750;
                                    if ((char)unaff_x19[0x47] != '\0') {
                                      fVar68 = *(float *)(unaff_x19 + 0x59);
                                      if (((fVar68 < *(float *)((long)unaff_x19 + 700)) &&
                                          (0.0 < fVar83)) &&
                                         (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49]))
                                      {
                                        fVar88 = *(float *)((long)unaff_x19 + 700) +
                                                 ((fVar78 - fVar66) / (float)(int)unaff_x19[0x95]) /
                                                 fVar88;
                                        if (fVar88 <= fVar68) {
                                          fVar88 = fVar68;
                                        }
                                        goto LAB_036ad184;
                                      }
                                      fVar83 = *(float *)((long)unaff_x19 + 0x1e4);
                                      fVar66 = *(float *)(unaff_x19 + 0x4a);
                                      uVar71 = (ulong)(uint)fVar66;
                                      if ((fVar66 < fVar83) &&
                                         (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49]))
                                      {
                                        fVar88 = (fVar83 - *(float *)(unaff_x19 + 0x48)) * 0.5;
                                        if (fVar88 <= DAT_00b55428) {
                                          fVar88 = DAT_00b55428;
                                        }
                                        fVar61 = (fVar83 - fVar88) * 20.0 + 0.5;
                                        *(float *)((long)unaff_x19 + 0x23c) = fVar83;
                                        fVar88 = DAT_00b556b4;
                                        if (fVar61 != INFINITY) {
                                          fVar88 = (float)(int)fVar61 / 20.0;
                                        }
                                        if (fVar88 <= fVar66) {
                                          fVar88 = fVar66;
                                        }
                                        goto LAB_036acc94;
                                      }
                                    }
                                    switch((int)unaff_x19[0x5c]) {
                                    case 1:
                                      lVar31 = *(long *)PTR_DAT_03d9c920;
                                      if (*(int *)(lVar31 + 0xe0) == 0) {
                                        thunk_FUN_01ac7298();
                                        lVar31 = *(long *)puVar15;
                                      }
                                      lVar32 = *(long *)(lVar31 + 0xb8);
                                      if (*(int *)(lVar32 + 0x1580) == 0) {
LAB_036acbbc:
                                        in_stack_00001088 = DAT_00b92750;
                                        unaff_x29 = &stack0x00000fc0;
                                        puVar3[0] = 0;
                                        puVar3[1] = 0;
                                        uVar90 = 0xffffffff;
                                      }
                                      else {
                                        if (*(int *)(lVar31 + 0xe0) == 0) {
                                          thunk_FUN_01ac7298();
                                          lVar32 = *(long *)(*(long *)PTR_DAT_03d9c920 + 0xb8);
                                        }
                                        FUN_0217900c(&stack0x000010a0,lVar32 + 0x11f0,
                                                     *(undefined8 *)PTR_DAT_03d9c8c0);
                                        memcpy(&stack0x00000c40,&stack0x000010a0,0x378);
LAB_036ab014:
                                        iVar20 = FUN_036ecf20();
LAB_036ab020:
                                        unaff_x29 = &stack0x00000fc0;
                                        iVar25 = *(int *)((long)unaff_x19 + 0x494) + -1;
                                        *(int *)((long)unaff_x19 + 0x494) = iVar25;
                                        in_stack_00001088 = CONCAT44(0x2026,iVar25);
                                        iStack000000000000018c = iStack000000000000018c + 1;
                                        uVar90 = iVar20 - 1;
                                      }
                                      goto LAB_036a9250;
                                    default:
                                      goto switchD_036aaa24_caseD_2;
                                    case 3:
                                      if (*(int *)(*(long *)PTR_DAT_03d9c920 + 0xe0) == 0) {
                                        thunk_FUN_01ac7298();
                                      }
LAB_036aabc0:
                                      uVar90 = FUN_036ecf20();
                                      break;
                                    case 5:
                                      if ((uVar24 != 0) && (-1 < (int)uVar90)) {
                                        fVar81 = *(float *)(unaff_x19 + 0x99);
                                        unaff_x29 = &stack0x00000fc0;
                                        if (*(int *)(*(long *)PTR_DAT_03d9c920 + 0xe0) == 0) {
                                          thunk_FUN_01ac7298();
                                        }
                                        uVar90 = FUN_036ecf20();
                                        if (fVar81 - fVar86 <= fVar55) {
                                          *(undefined1 *)((long)unaff_x19 + 0x33c) = 1;
                                          *(undefined4 *)(unaff_x19 + 0x93) =
                                               *(undefined4 *)((long)unaff_x19 + 0x494);
                                          uVar71 = *(ulong *)(*(long *)(*(long *)PTR_DAT_03d9c920 +
                                                                       0xb8) + 0x15a8);
                                          *(float *)(unaff_x19 + 200) =
                                               *(float *)((long)unaff_x19 + 0x40c) + 0.0;
                                          *(undefined4 *)(unaff_x19 + 0x9a) = 0;
                                          lVar31 = NEON_rev64(uVar71,4);
                                          unaff_x19[0x99] = lVar31;
                                          *(undefined4 *)(unaff_x19 + 0x9b) = 0;
                                          *(undefined8 *)((long)unaff_x19 + 0x4b4) = 0;
                                          *(int *)(unaff_x19 + 0x95) = (int)unaff_x19[0x95] + 1;
                                          *(int *)(unaff_x19 + 0x96) = (int)unaff_x19[0x96] + 1;
                                          goto LAB_036a9250;
                                        }
                                        break;
                                      }
                                      uVar90 = 0xffffffff;
                                      *puVar3 = 0;
                                      in_stack_00001088 = uVar37;
                                      goto LAB_036ab538;
                                    case 6:
                                      if (*(int *)(*(long *)PTR_DAT_03d9c920 + 0xe0) == 0) {
                                        thunk_FUN_01ac7298();
                                      }
                                      uVar90 = FUN_036ecf20();
                                      lVar31 = unaff_x19[0x5d];
                                      if (*(int *)(*(long *)
                                                  Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                                                  + 0xe0) == 0) {
                                        thunk_FUN_01ac7298(*(long *)
                                                  Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                                                  );
                                      }
                                      uVar34 = FUN_0391f968(lVar31,0,0);
                                      if ((uVar34 & 1) != 0) {
                                        plVar52 = (long *)unaff_x19[0x5d];
                                        uVar37 = (**(code **)(*unaff_x19 + 0x548))();
                                        if (plVar52 == (long *)0x0) goto LAB_036afadc;
                                        (**(code **)(*plVar52 + 0x558))
                                                  (plVar52,uVar37,*(undefined8 *)(*plVar52 + 0x560))
                                        ;
                                        lVar31 = unaff_x19[0x5d];
                                        if (lVar31 == 0) goto LAB_036afadc;
                                        *(int *)(lVar31 + 0x400) = (int)unaff_x19[0x80];
                                        FUN_036dfca8(lVar31,*(undefined4 *)((long)unaff_x19 + 0x494)
                                                     ,0);
                                        plVar52 = (long *)unaff_x19[0x5d];
                                        if (plVar52 == (long *)0x0) goto LAB_036afadc;
                                        (**(code **)(*plVar52 + 0x7d8))
                                                  (plVar52,0,0,*(undefined8 *)(*plVar52 + 0x7e0));
                                        *(undefined1 *)(unaff_x19 + 0x5f) = 1;
                                      }
                                    }
LAB_036aad90:
                                    unaff_x29 = &stack0x00000fc0;
                                    in_stack_00001088 = CONCAT44(3,uVar24);
                                    goto LAB_036a9250;
                                  }
switchD_036aaa24_caseD_2:
                                  puVar15 = PTR_DAT_03d9c920;
                                  fVar86 = 1.0 - fVar63;
                                  uVar71 = (ulong)(uint)fVar86;
                                  fVar57 = ABS(fVar64) + fVar57 * fVar86 * fVar81;
                                  fVar81 = 1.0;
                                  if ((uVar45 & 0x18) != 0) {
                                    fVar81 = DAT_00b55374;
                                  }
                                  fVar64 = fVar81 * fStack000000000000010c;
                                  if (fVar64 < fVar57) {
                                    if (((char)unaff_x19[0x5b] == '\0') ||
                                       (uVar24 == *(uint *)(unaff_x19 + 0x93))) {
                                      if (((char)unaff_x19[0x47] != '\0') &&
                                         (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49]))
                                      {
                                        fVar64 = *(float *)(unaff_x19 + 0x5a) / 100.0;
                                        if (fVar63 < fVar64) {
                                          fVar88 = fVar57 / fVar86;
                                          if (fVar63 <= 0.0) {
                                            fVar88 = fVar57;
                                          }
                                          fVar63 = fVar63 + (fVar57 - fVar81 * (
                                                  fStack000000000000010c + DAT_00b5556c)) / fVar88;
                                          goto LAB_036afb6c;
                                        }
                                        fVar63 = *(float *)((long)unaff_x19 + 0x1e4);
                                        uVar71 = (ulong)(uint)fVar63;
                                        fVar64 = *(float *)(unaff_x19 + 0x4a);
                                        if (fVar63 <= fVar64) goto LAB_036aab40;
LAB_036afae0:
                                        fVar88 = (fVar63 - *(float *)(unaff_x19 + 0x48)) * 0.5;
                                        if (fVar88 <= DAT_00b55428) {
                                          fVar88 = DAT_00b55428;
                                        }
                                        *(float *)((long)unaff_x19 + 0x23c) = fVar63;
                                        fVar61 = (fVar63 - fVar88) * 20.0 + 0.5;
                                        fVar88 = DAT_00b556b4;
                                        if (fVar61 != INFINITY) {
                                          fVar88 = (float)(int)fVar61 / 20.0;
                                        }
                                        if (fVar88 <= fVar64) {
                                          fVar88 = fVar64;
                                        }
                                        goto LAB_036acc94;
                                      }
LAB_036aab40:
                                      iVar20 = (int)unaff_x19[0x5c];
                                      if (iVar20 == 1) {
                                        lVar31 = *(long *)PTR_DAT_03d9c920;
                                        if (*(int *)(lVar31 + 0xe0) == 0) {
                                          thunk_FUN_01ac7298();
                                          lVar31 = *(long *)puVar15;
                                        }
                                        lVar32 = *(long *)(lVar31 + 0xb8);
                                        if (*(int *)(lVar32 + 0x1580) == 0) goto LAB_036acbbc;
                                        if (*(int *)(lVar31 + 0xe0) == 0) {
                                          thunk_FUN_01ac7298();
                                          lVar32 = *(long *)(*(long *)PTR_DAT_03d9c920 + 0xb8);
                                        }
                                        FUN_0217900c(&stack0x000010a0,lVar32 + 0x11f0,
                                                     *(undefined8 *)PTR_DAT_03d9c8c0);
                                        memcpy(&stack0x00000550,&stack0x000010a0,0x378);
                                        goto LAB_036ab014;
                                      }
                                      if (iVar20 != 6) {
                                        if (iVar20 == 3) {
                                          if (*(int *)(*(long *)PTR_DAT_03d9c920 + 0xe0) == 0) {
                                            thunk_FUN_01ac7298();
                                          }
                                          goto LAB_036aabc0;
                                        }
                                        goto LAB_036ab54c;
                                      }
                                      if (*(int *)(*(long *)PTR_DAT_03d9c920 + 0xe0) == 0) {
                                        thunk_FUN_01ac7298();
                                      }
                                      uVar90 = FUN_036ecf20();
                                      lVar31 = unaff_x19[0x5d];
                                      if (*(int *)(*(long *)
                                                  Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                                                  + 0xe0) == 0) {
                                        thunk_FUN_01ac7298(*(long *)
                                                  Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                                                  );
                                      }
                                      uVar34 = FUN_0391f968(lVar31,0,0);
                                      if ((uVar34 & 1) != 0) {
                                        plVar52 = (long *)unaff_x19[0x5d];
                                        uVar37 = (**(code **)(*unaff_x19 + 0x548))();
                                        if (plVar52 == (long *)0x0) goto LAB_036afadc;
                                        (**(code **)(*plVar52 + 0x558))
                                                  (plVar52,uVar37,*(undefined8 *)(*plVar52 + 0x560))
                                        ;
                                        lVar31 = unaff_x19[0x5d];
                                        if (lVar31 == 0) goto LAB_036afadc;
                                        *(int *)(lVar31 + 0x400) = (int)unaff_x19[0x80];
                                        FUN_036dfca8(lVar31,*(undefined4 *)((long)unaff_x19 + 0x494)
                                                     ,0);
                                        plVar52 = (long *)unaff_x19[0x5d];
                                        if (plVar52 == (long *)0x0) goto LAB_036afadc;
                                        (**(code **)(*plVar52 + 0x7d8))
                                                  (plVar52,0,0,*(undefined8 *)(*plVar52 + 0x7e0));
                                        *(undefined1 *)(unaff_x19 + 0x5f) = 1;
                                      }
LAB_036ab13c:
                                      unaff_x29 = &stack0x00000fc0;
                                      in_stack_00001088 = CONCAT44(3,*puVar3);
                                      goto LAB_036a9250;
                                    }
                                    if (*(int *)(*(long *)PTR_DAT_03d9c920 + 0xe0) == 0) {
                                      thunk_FUN_01ac7298();
                                    }
                                    uVar90 = FUN_036ecf20();
                                    if (*(float *)(unaff_x19 + 0x58) == DAT_00b55468) {
                                      lVar31 = *plVar5;
                                      if ((lVar31 == 0) ||
                                         (lVar32 = *(long *)(lVar31 + 0x38), lVar32 == 0))
                                      goto LAB_036afadc;
                                      if (*(uint *)(lVar32 + 0x18) <= *puVar3) goto LAB_036afbe8;
                                      fVar64 = *(float *)(unaff_x19 + 0x9b);
                                      fVar63 = 0.0;
                                      if ((0.0 < fVar64) &&
                                         (fVar63 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0'))
                                      {
                                        fVar63 = *(float *)(unaff_x19 + 0x99) -
                                                 *(float *)(unaff_x19 + 0x9a);
                                      }
                                      fVar63 = fVar61 * *(float *)(unaff_x19 + 0x57) +
                                               *(float *)(lVar32 + (long)(int)*puVar3 * 0x178 +
                                                         0x154) +
                                               (fVar63 - *(float *)((long)unaff_x19 + 0x4cc)) +
                                               fVar88 * (fVar56 + *(float *)((long)unaff_x19 + 700))
                                      ;
                                    }
                                    else {
                                      lVar31 = unaff_x19[0x6d];
                                      *(undefined1 *)((long)unaff_x19 + 0x2c4) = 1;
                                      if (lVar31 == 0) goto LAB_036afadc;
                                      fVar64 = *(float *)(unaff_x19 + 0x9b);
                                      fVar63 = *(float *)(unaff_x19 + 0x58) +
                                               fVar61 * *(float *)(unaff_x19 + 0x57);
                                    }
                                    puVar15 = PTR_DAT_03d9c920;
                                    lVar31 = *(long *)(lVar31 + 0x38);
                                    if (lVar31 == 0) goto LAB_036afadc;
                                    uVar46 = *(uint *)((long)unaff_x19 + 0x494);
                                    if ((*(uint *)(lVar31 + 0x18) <= uVar46) ||
                                       (uVar12 = uVar46 - 1, *(uint *)(lVar31 + 0x18) <= uVar12))
                                    goto LAB_036afbe8;
                                    uVar71 = (ulong)(uint)(fVar63 + *(float *)(unaff_x19 + 0x97));
                                    fVar86 = (fVar63 + *(float *)(unaff_x19 + 0x97) + fVar64) -
                                             *(float *)(lVar31 + (long)(int)uVar46 * 0x178 + 0x158);
                                    if ((bVar14 || *(short *)(lVar31 + (long)(int)uVar12 * 0x178 +
                                                             0x20) != 0xad) ||
                                       ((fVar55 <= fVar86 && ((int)unaff_x19[0x5c] != 0)))) {
                                      if (*(short *)(lVar31 + (long)(int)uVar46 * 0x178 + 0x20) ==
                                          0xad) {
                                        bVar14 = true;
                                      }
                                      else {
                                        if ((bVar9 & *(byte *)(unaff_x19 + 0x47)) != 0) {
                                          fVar63 = *(float *)((long)unaff_x19 + 0x2d4);
                                          fVar64 = *(float *)(unaff_x19 + 0x5a) / 100.0;
                                          if ((fVar64 <= fVar63) ||
                                             ((int)unaff_x19[0x49] <=
                                              *(int *)((long)unaff_x19 + 0x244))) {
                                            fVar63 = *(float *)((long)unaff_x19 + 0x1e4);
                                            uVar71 = (ulong)(uint)fVar63;
                                            fVar64 = *(float *)(unaff_x19 + 0x4a);
                                            if ((fVar64 < fVar63) &&
                                               (*(int *)((long)unaff_x19 + 0x244) <
                                                (int)unaff_x19[0x49])) goto LAB_036afae0;
                                            goto LAB_036ab340;
                                          }
LAB_036afb7c:
                                          fVar88 = fVar57;
                                          if (0.0 < fVar63) {
                                            fVar88 = fVar57 / (1.0 - fVar63);
                                          }
                                          fVar63 = fVar63 + (fVar57 - fVar81 * (
                                                  fStack000000000000010c + DAT_00b5556c)) / fVar88;
LAB_036afb6c:
                                          if (fVar64 <= fVar63) {
                                            fVar63 = fVar64;
                                          }
                                          *(float *)((long)unaff_x19 + 0x2d4) = fVar63;
                                          return;
                                        }
LAB_036ab340:
                                        lVar31 = *(long *)PTR_DAT_03d9c920;
                                        if (*(int *)(lVar31 + 0xe0) == 0) {
                                          thunk_FUN_01ac7298();
                                          lVar31 = *(long *)puVar15;
                                        }
                                        iVar20 = *(int *)(*(long *)(lVar31 + 0xb8) + 0xe78);
                                        if (((iVar20 != iStack0000000000000034) && (iVar20 != -1))
                                           && (bVar9 == 1)) {
                                          if (*(int *)(lVar31 + 0xe0) == 0) {
                                            thunk_FUN_01ac7298();
                                          }
                                          uVar90 = FUN_036ecf20();
                                          if ((unaff_x19[0x6d] == 0) ||
                                             (lVar31 = *(long *)(unaff_x19[0x6d] + 0x38),
                                             lVar31 == 0)) goto LAB_036afadc;
                                          uVar46 = *puVar3 - 1;
                                          if (*(uint *)(lVar31 + 0x18) <= uVar46) goto LAB_036afbe8;
                                          iStack0000000000000034 = iVar20;
                                          if (*(short *)(lVar31 + (long)(int)uVar46 * 0x178 + 0x20)
                                              == 0xad) {
                                            uVar90 = uVar90 - 1;
                                            bVar14 = false;
                                            *puVar3 = uVar46;
                                            in_stack_00001088 = CONCAT44(0x2d,uVar46);
                                            goto LAB_036ab538;
                                          }
                                        }
                                        if (fVar86 <= fVar55) {
switchD_036ab4e4_caseD_0:
                                          uVar71 = uVar29;
                                          FUN_036ed998(fVar88,uVar29,fVar61,
                                                       *(undefined4 *)((long)unaff_x19 + 0x2fc),
                                                       fStack00000000000000e4,fStack000000000000013c
                                                       ,fStack000000000000010c,fVar56);
                                        }
                                        else {
                                          if (*(int *)((long)unaff_x19 + 0x2e4) == -1) {
                                            *(undefined4 *)((long)unaff_x19 + 0x2e4) =
                                                 *(undefined4 *)((long)unaff_x19 + 0x494);
                                          }
                                          fVar64 = fVar55;
                                          if ((char)unaff_x19[0x47] != '\0') {
                                            fVar64 = *(float *)(unaff_x19 + 0x59);
                                            if ((fVar64 < *(float *)((long)unaff_x19 + 700)) &&
                                               (*(int *)((long)unaff_x19 + 0x244) <
                                                (int)unaff_x19[0x49])) {
                                              fVar88 = *(float *)((long)unaff_x19 + 700) +
                                                       ((fVar78 - fVar86) /
                                                       (float)((int)unaff_x19[0x95] + 1)) / fVar88;
                                              if (fVar88 <= fVar64) {
                                                fVar88 = fVar64;
                                              }
LAB_036ad184:
                                              *(float *)((long)unaff_x19 + 700) = fVar88;
                                              return;
                                            }
                                            fVar63 = *(float *)((long)unaff_x19 + 0x2d4);
                                            fVar64 = *(float *)(unaff_x19 + 0x5a) / 100.0;
                                            if ((fVar63 < fVar64) &&
                                               (*(int *)((long)unaff_x19 + 0x244) <
                                                (int)unaff_x19[0x49])) goto LAB_036afb7c;
                                            fVar63 = *(float *)((long)unaff_x19 + 0x1e4);
                                            uVar71 = (ulong)(uint)fVar63;
                                            fVar64 = *(float *)(unaff_x19 + 0x4a);
                                            if ((fVar64 < fVar63) &&
                                               (*(int *)((long)unaff_x19 + 0x244) <
                                                (int)unaff_x19[0x49])) goto LAB_036afae0;
                                          }
                                          switch((int)unaff_x19[0x5c]) {
                                          case 0:
                                          case 2:
                                          case 4:
                                            goto switchD_036ab4e4_caseD_0;
                                          case 1:
                                            lVar31 = *(long *)PTR_DAT_03d9c920;
                                            if (*(int *)(lVar31 + 0xe0) == 0) {
                                              thunk_FUN_01ac7298();
                                              lVar31 = *(long *)PTR_DAT_03d9c920;
                                            }
                                            lVar32 = *(long *)(lVar31 + 0xb8);
                                            if (*(int *)(lVar32 + 0x1580) == 0) {
                                              bVar14 = false;
                                              goto LAB_036acbbc;
                                            }
                                            if (*(int *)(lVar31 + 0xe0) == 0) {
                                              thunk_FUN_01ac7298();
                                              lVar32 = *(long *)(*(long *)PTR_DAT_03d9c920 + 0xb8);
                                            }
                                            FUN_0217900c(&stack0x000010a0,lVar32 + 0x11f0,
                                                         *(undefined8 *)PTR_DAT_03d9c8c0);
                                            memcpy(&stack0x000008c8,&stack0x000010a0,0x378);
                                            iVar20 = FUN_036ecf20();
                                            bVar14 = false;
                                            goto LAB_036ab020;
                                          case 3:
                                            if (*(int *)(*(long *)PTR_DAT_03d9c920 + 0xe0) == 0) {
                                              thunk_FUN_01ac7298();
                                            }
                                            uVar90 = FUN_036ecf20();
                                            bVar14 = false;
                                            goto LAB_036aad90;
                                          case 5:
                                            *(undefined1 *)((long)unaff_x19 + 0x33c) = 1;
                                            uVar71 = uVar29;
                                            FUN_036ed998(fVar88,uVar29,fVar61,
                                                         *(undefined4 *)((long)unaff_x19 + 0x2fc),
                                                         fStack00000000000000e4,
                                                         fStack000000000000013c,
                                                         fStack000000000000010c,fVar56);
                                            *(undefined4 *)(unaff_x19 + 0x9a) = 0;
                                            *(undefined4 *)(unaff_x19 + 0x9b) = 0;
                                            *(undefined8 *)((long)unaff_x19 + 0x4b4) = 0;
                                            *(int *)(unaff_x19 + 0x96) = (int)unaff_x19[0x96] + 1;
                                            break;
                                          case 6:
                                            lVar31 = unaff_x19[0x5d];
                                            if (*(int *)(*(long *)
                                                  Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                                                  + 0xe0) == 0) {
                                              thunk_FUN_01ac7298();
                                            }
                                            uVar34 = FUN_0391f968(lVar31,0,0);
                                            if ((uVar34 & 1) != 0) {
                                              plVar52 = (long *)unaff_x19[0x5d];
                                              uVar37 = (**(code **)(*unaff_x19 + 0x548))();
                                              if (plVar52 == (long *)0x0) goto LAB_036afadc;
                                              (**(code **)(*plVar52 + 0x558))
                                                        (plVar52,uVar37,
                                                         *(undefined8 *)(*plVar52 + 0x560));
                                              lVar31 = unaff_x19[0x5d];
                                              if (lVar31 == 0) goto LAB_036afadc;
                                              *(int *)(lVar31 + 0x400) = (int)unaff_x19[0x80];
                                              FUN_036dfca8(lVar31,*(undefined4 *)
                                                                   ((long)unaff_x19 + 0x494),0);
                                              plVar52 = (long *)unaff_x19[0x5d];
                                              if (plVar52 == (long *)0x0) goto LAB_036afadc;
                                              (**(code **)(*plVar52 + 0x7d8))
                                                        (plVar52,0,0,
                                                         *(undefined8 *)(*plVar52 + 0x7e0));
                                              *(undefined1 *)(unaff_x19 + 0x5f) = 1;
                                            }
                                            bVar14 = false;
                                            goto LAB_036ab13c;
                                          default:
                                            bVar14 = false;
                                            goto LAB_036ab54c;
                                          }
                                        }
                                        bVar9 = 1;
                                        bVar14 = false;
                                        bVar19 = true;
                                      }
                                    }
                                    else {
                                      uVar90 = uVar90 - 1;
                                      bVar14 = false;
                                      *puVar3 = uVar12;
                                      in_stack_00001088 = CONCAT44(0x2d,uVar12);
                                    }
LAB_036ab538:
                                    unaff_x29 = &stack0x00000fc0;
                                    goto LAB_036a9250;
                                  }
LAB_036ab54c:
                                  if (uVar22 != 0xad) {
                                    if (uVar22 == 9) {
                                      lVar31 = *plVar5;
                                      if ((lVar31 != 0) &&
                                         (lVar32 = *(long *)(lVar31 + 0x38), lVar32 != 0)) {
                                        uVar24 = *puVar3;
                                        if (*(uint *)(lVar32 + 0x18) <= uVar24) goto LAB_036afbe8;
                                        *(undefined1 *)(lVar32 + (long)(int)uVar24 * 0x178 + 0x194)
                                             = 0;
                                        *(uint *)((long)unaff_x19 + 0x4a4) = uVar24;
                                        lVar32 = *(long *)(lVar31 + 0x50);
                                        if (lVar32 != 0) {
                                          if (*(uint *)(unaff_x19 + 0x95) < *(uint *)(lVar32 + 0x18)
                                             ) {
                                            lVar32 = lVar32 + (long)(int)*(uint *)(unaff_x19 + 0x95)
                                                              * 0x5c;
                                            *(int *)(lVar32 + 0x2c) = *(int *)(lVar32 + 0x2c) + 1;
                                            goto LAB_036ab5c8;
                                          }
                                          goto LAB_036afbe8;
                                        }
                                      }
                                    }
                                    else {
                                      if (*(int *)((long)unaff_x19 + 0x644) == 1) {
                                        (**(code **)(*unaff_x19 + 0x8c8))(fVar64,fVar65);
                                      }
                                      else if (*(int *)((long)unaff_x19 + 0x644) == 0) {
                                        (**(code **)(*unaff_x19 + 0x8b8))(fStack0000000000000174);
                                      }
                                      if (bVar19) {
                                        *(uint *)((long)unaff_x19 + 0x49c) = *puVar3;
                                      }
                                      *(uint *)((long)unaff_x19 + 0x4a4) = *puVar3;
                                      *(int *)((long)unaff_x19 + 0x4ac) =
                                           *(int *)((long)unaff_x19 + 0x4ac) + 1;
                                      if ((unaff_x19[0x6d] != 0) &&
                                         (lVar31 = *(long *)(unaff_x19[0x6d] + 0x50), lVar31 != 0))
                                      {
                                        if (*(uint *)(unaff_x19 + 0x95) < *(uint *)(lVar31 + 0x18))
                                        {
                                          lVar31 = lVar31 + (long)(int)*(uint *)(unaff_x19 + 0x95) *
                                                            0x5c;
                                          bVar19 = false;
                                          *(float *)(lVar31 + 0x60) = fVar62;
                                          *(float *)(lVar31 + 100) = fVar82;
                                          goto LAB_036ab6c0;
                                        }
                                        goto LAB_036afbe8;
                                      }
                                    }
                                    goto LAB_036afadc;
                                  }
                                  if ((*plVar5 == 0) ||
                                     (lVar31 = *(long *)(*plVar5 + 0x38), lVar31 == 0))
                                  goto LAB_036afadc;
                                  if (*(uint *)(lVar31 + 0x18) <= *puVar3) goto LAB_036afbe8;
                                  *(undefined1 *)(lVar31 + (long)(int)*puVar3 * 0x178 + 0x194) = 0;
                                }
                                else {
                                  if (((uVar22 & 0xfffffffe) == 10) && ((int)unaff_x19[0x5c] == 6))
                                  {
                                    fVar57 = (float)uVar71;
                                    fVar81 = 0.0;
                                    if ((0.0 < fVar57) &&
                                       (fVar81 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
                                      fVar81 = *(float *)(unaff_x19 + 0x99) -
                                               *(float *)(unaff_x19 + 0x9a);
                                    }
                                    uVar71 = (ulong)(uint)fVar55;
                                    if (fVar55 < (*(float *)(unaff_x19 + 0x97) -
                                                 (*(float *)((long)unaff_x19 + 0x4cc) - fVar57)) +
                                                 fVar81) {
                                      if (*(int *)((long)unaff_x19 + 0x2e4) == -1) {
                                        *(uint *)((long)unaff_x19 + 0x2e4) = uVar24;
                                      }
                                      if (*(int *)(*(long *)PTR_DAT_03d9c920 + 0xe0) == 0) {
                                        thunk_FUN_01ac7298();
                                      }
                                      uVar90 = FUN_036ecf20();
                                      lVar31 = unaff_x19[0x5d];
                                      if (*(int *)(*(long *)
                                                  Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                                                  + 0xe0) == 0) {
                                        thunk_FUN_01ac7298(*(long *)
                                                  Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                                                  );
                                      }
                                      uVar34 = FUN_0391f968(lVar31,0,0);
                                      if ((uVar34 & 1) != 0) {
                                        plVar52 = (long *)unaff_x19[0x5d];
                                        uVar37 = (**(code **)(*unaff_x19 + 0x548))();
                                        if (plVar52 != (long *)0x0) {
                                          (**(code **)(*plVar52 + 0x558))
                                                    (plVar52,uVar37,
                                                     *(undefined8 *)(*plVar52 + 0x560));
                                          lVar31 = unaff_x19[0x5d];
                                          if (lVar31 != 0) {
                                            *(int *)(lVar31 + 0x400) = (int)unaff_x19[0x80];
                                            FUN_036dfca8(lVar31,*(undefined4 *)
                                                                 ((long)unaff_x19 + 0x494),0);
                                            plVar52 = (long *)unaff_x19[0x5d];
                                            if (plVar52 != (long *)0x0) {
                                              (**(code **)(*plVar52 + 0x7d8))
                                                        (plVar52,0,0,
                                                         *(undefined8 *)(*plVar52 + 0x7e0));
                                              *(undefined1 *)(unaff_x19 + 0x5f) = 1;
                                              goto LAB_036aad90;
                                            }
                                          }
                                        }
                                        goto LAB_036afadc;
                                      }
                                      goto LAB_036aad90;
                                    }
                                  }
                                  if ((((uVar22 - 0x2007 < 0x23) &&
                                       ((1L << ((ulong)(uVar22 - 0x2007) & 0x3f) & 0x600000001U) !=
                                        0)) || (uVar22 - 10 < 2)) || (uVar22 == 0xa0)) {
LAB_036ab188:
                                    if (((uVar22 != 0xad) && (uVar22 != 0x200b)) &&
                                       (uVar22 != 0x2060)) {
                                      lVar31 = *plVar5;
                                      if ((lVar31 == 0) ||
                                         (lVar32 = *(long *)(lVar31 + 0x50), lVar32 == 0))
                                      goto LAB_036afadc;
                                      if (*(uint *)(lVar32 + 0x18) <= *(uint *)(unaff_x19 + 0x95))
                                      goto LAB_036afbe8;
                                      lVar32 = lVar32 + (long)(int)*(uint *)(unaff_x19 + 0x95) *
                                                        0x5c;
                                      *(int *)(lVar32 + 0x2c) = *(int *)(lVar32 + 0x2c) + 1;
                                      *(int *)(lVar31 + 0x20) = *(int *)(lVar31 + 0x20) + 1;
                                    }
                                  }
                                  else {
                                    if (*(int *)(*(long *)
                                                  Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                                                + 0xe0) == 0) {
                                      thunk_FUN_01ac7298();
                                    }
                                    uVar29 = FUN_02fdea78(uVar22,0);
                                    if ((uVar29 & 1) != 0) goto LAB_036ab188;
                                  }
                                  if (uVar22 == 0xa0) {
                                    if ((*plVar5 == 0) ||
                                       (lVar31 = *(long *)(*plVar5 + 0x50), lVar31 == 0))
                                    goto LAB_036afadc;
                                    if (*(uint *)(lVar31 + 0x18) <= *(uint *)(unaff_x19 + 0x95))
                                    goto LAB_036afbe8;
                                    lVar31 = lVar31 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
LAB_036ab5c8:
                                    *(int *)(lVar31 + 0x20) = *(int *)(lVar31 + 0x20) + 1;
                                  }
                                }
LAB_036ab6c0:
                                if (((int)unaff_x19[0x5c] == 1) && ((uVar22 == 0x2d || (!bVar1)))) {
                                  if (unaff_x19[0xcb] == 0) goto LAB_036afadc;
                                  fVar81 = *(float *)(unaff_x19 + 0x3d);
                                  iVar20 = FUN_0396ac24(unaff_x19[0xcb] + 0x50,0);
                                  if (unaff_x19[0xcb] == 0) goto LAB_036afadc;
                                  fVar62 = (float)FUN_0396ac34(unaff_x19[0xcb] + 0x50,0);
                                  lVar31 = unaff_x19[0xca];
                                  fVar57 = fVar75;
                                  if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
                                    fVar57 = 1.0;
                                  }
                                  if ((lVar31 == 0) || (*(long *)(lVar31 + 0x20) == 0))
                                  goto LAB_036afadc;
                                  fVar64 = *(float *)((long)unaff_x19 + 0x404);
                                  fVar65 = *(float *)(lVar31 + 0x2c);
                                  fVar82 = (float)FUN_0396b17c(*(long *)(lVar31 + 0x20),0);
                                  fVar63 = *(float *)(unaff_x19 + 0x6a);
                                  fVar82 = fVar64 * (fVar81 / (float)iVar20) * fVar62 * fVar57 *
                                           fVar65 * fVar82;
                                  fVar81 = *(float *)((long)unaff_x19 + 0x354);
                                  if ((uVar22 == 10) &&
                                     (*(int *)((long)unaff_x19 + 0x494) != (int)unaff_x19[0x93])) {
                                    if ((*plVar5 == 0) ||
                                       (lVar31 = *(long *)(*plVar5 + 0x38), lVar31 == 0))
                                    goto LAB_036afadc;
                                    uVar24 = *(int *)((long)unaff_x19 + 0x494) - 1;
                                    if (*(uint *)(lVar31 + 0x18) <= uVar24) goto LAB_036afbe8;
                                    if (unaff_x19[0xcb] == 0) goto LAB_036afadc;
                                    fVar57 = *(float *)(lVar31 + (long)(int)uVar24 * 0x178 + 0x60);
                                    iVar20 = FUN_0396ac24(unaff_x19[0xcb] + 0x50,0);
                                    if (unaff_x19[0xcb] == 0) goto LAB_036afadc;
                                    fVar64 = (float)FUN_0396ac34(unaff_x19[0xcb] + 0x50,0);
                                    lVar31 = unaff_x19[0xca];
                                    fVar62 = fVar75;
                                    if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
                                      fVar62 = 1.0;
                                    }
                                    if ((lVar31 == 0) || (*(long *)(lVar31 + 0x20) == 0))
                                    goto LAB_036afadc;
                                    fVar65 = *(float *)((long)unaff_x19 + 0x404);
                                    fVar86 = *(float *)(lVar31 + 0x2c);
                                    fVar82 = (float)FUN_0396b17c(*(long *)(lVar31 + 0x20),0);
                                    if ((*plVar5 == 0) ||
                                       (lVar31 = *(long *)(*plVar5 + 0x50), lVar31 == 0))
                                    goto LAB_036afadc;
                                    if (*(uint *)(lVar31 + 0x18) <= *(uint *)(unaff_x19 + 0x95))
                                    goto LAB_036afbe8;
                                    lVar31 = lVar31 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
                                    fVar63 = *(float *)(lVar31 + 0x60);
                                    fVar81 = *(float *)(lVar31 + 100);
                                    fVar82 = fVar65 * (fVar57 / (float)iVar20) * fVar64 * fVar62 *
                                             fVar86 * fVar82;
                                  }
                                  fVar64 = *(float *)(unaff_x19 + 0x9b);
                                  fVar57 = 0.0;
                                  fVar62 = 0.0;
                                  if ((0.0 < fVar64) &&
                                     (fVar62 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
                                    fVar62 = *(float *)(unaff_x19 + 0x99) -
                                             *(float *)(unaff_x19 + 0x9a);
                                  }
                                  fVar86 = *(float *)(unaff_x19 + 0x97);
                                  fVar66 = *(float *)((long)unaff_x19 + 0x4cc);
                                  fVar65 = *(float *)(unaff_x19 + 200);
                                  if ((char)unaff_x19[0x1e] == '\0') {
                                    if ((unaff_x19[0xca] == 0) ||
                                       (lVar31 = *(long *)(unaff_x19[0xca] + 0x20), lVar31 == 0))
                                    goto LAB_036afadc;
                                    FUN_0396b140(&stack0x000010a0,lVar31,0);
                                    fVar57 = (float)FUN_0396af88(&stack0x00000fc0,0);
                                  }
                                  puVar15 = PTR_DAT_03d9c920;
                                  fVar83 = *(float *)(unaff_x19 + 0x6c);
                                  fVar81 = (fVar89 - fVar63) - fVar81;
                                  bVar18 = true;
                                  if ((fVar83 <= fVar81) && (bVar18 = false, !NAN(fVar83))) {
                                    bVar18 = fVar83 == -1.0;
                                  }
                                  if (!bVar18) {
                                    fVar81 = fVar83;
                                  }
                                  fVar63 = 1.0;
                                  if ((uVar45 & 0x18) != 0) {
                                    fVar63 = DAT_00b55374;
                                  }
                                  if (((fVar86 - (fVar66 - fVar64)) + fVar62 < fVar55) &&
                                     (ABS(fVar65) +
                                      fVar82 * fVar57 * (1.0 - *(float *)((long)unaff_x19 + 0x2d4))
                                      < fVar63 * fVar81)) {
                                    if (*(int *)(*(long *)PTR_DAT_03d9c920 + 0xe0) == 0) {
                                      thunk_FUN_01ac7298();
                                    }
                                    FUN_036ed2b4();
                                    lVar31 = *(long *)(*(long *)puVar15 + 0xb8);
                                    uVar37 = *(undefined8 *)PTR_DAT_03d9c8c8;
                                    memcpy(&stack0x000010a0,(void *)(lVar31 + 0x788),0x378);
                                    FUN_02178ef4(lVar31 + 0x11f0,&stack0x000010a0,uVar37);
                                  }
                                }
                                lVar31 = *plVar5;
                                if (lVar31 == 0) goto LAB_036afadc;
                                lVar32 = *(long *)(lVar31 + 0x38);
                                uVar29 = (ulong)(uint)fVar58;
                                if (lVar32 == 0) goto LAB_036afadc;
                                if (*(uint *)(lVar32 + 0x18) <= *puVar3) goto LAB_036afbe8;
                                uVar24 = *(uint *)(unaff_x19 + 0x95);
                                lVar32 = lVar32 + (long)(int)*puVar3 * 0x178;
                                *(uint *)(lVar32 + 100) = uVar24;
                                *(int *)(lVar32 + 0x68) = (int)unaff_x19[0x96];
                                if ((bVar1) ||
                                   ((uVar22 < 0xe && ((1 << (ulong)(uVar22 & 0x1f) & 0x2c00U) != 0))
                                   )) {
                                  lVar31 = *(long *)(lVar31 + 0x50);
                                  if (lVar31 == 0) goto LAB_036afadc;
                                  if (*(uint *)(lVar31 + 0x18) <= uVar24) goto LAB_036afbe8;
                                  if (*(int *)(lVar31 + (long)(int)uVar24 * 0x5c + 0x24) == 1)
                                  goto LAB_036aba84;
                                }
                                else {
                                  lVar31 = *(long *)(lVar31 + 0x50);
                                  if (lVar31 == 0) goto LAB_036afadc;
LAB_036aba84:
                                  if (*(uint *)(lVar31 + 0x18) <= uVar24) goto LAB_036afbe8;
                                  *(int *)(lVar31 + (long)(int)uVar24 * 0x5c + 0x68) =
                                       (int)unaff_x19[0x4f];
                                }
                                if (uVar22 == 9) {
                                  if (*plVar53 == 0) goto LAB_036afadc;
                                  fVar81 = (float)FUN_0396ad1c(*plVar53 + 0x50,0);
                                  if (*plVar53 == 0) goto LAB_036afadc;
                                  fVar62 = *(float *)(unaff_x19 + 200);
                                  fVar57 = (float)NEON_ucvtf((uint)*(byte *)(*plVar53 + 0x1b9));
                                  fVar81 = fVar58 * fVar81 * fVar57;
                                  fVar57 = fVar81 * (float)(int)(fVar62 / fVar81);
                                  uVar71 = (ulong)(uint)fVar57;
                                  if (fVar57 <= fVar62) {
                                    fVar57 = fVar62 + fVar81;
                                  }
LAB_036abca4:
                                  *(float *)(unaff_x19 + 200) = fVar57;
                                }
                                else if (*(float *)(unaff_x19 + 0x56) == 0.0) {
                                  if ((char)unaff_x19[0x1e] == '\0') {
                                    if (*(char *)((long)unaff_x19 + 0x474) == '\0') {
                                      fVar62 = 1.0;
                                    }
                                    else {
                                      fVar62 = (float)thunk_FUN_03910e24(lVar30,0);
                                    }
                                    fVar57 = *(float *)(unaff_x19 + 200);
                                    fVar82 = (float)FUN_0396af88(&stack0x00001050,0);
                                    if (unaff_x19[0x20] != 0) {
                                      fVar81 = 1.0 - *(float *)((long)unaff_x19 + 0x2d4);
                                      fVar57 = fVar57 + fVar81 * (*(float *)((long)unaff_x19 + 0x2ac
                                                                            ) +
                                                                 fVar58 * (fStack0000000000000138 +
                                                                          fVar62 * fVar82) +
                                                                 fVar61 * (fStack00000000000000e4 +
                                                                          fStack000000000000013c +
                                                                          *(float *)(unaff_x19[0x20]
                                                                                    + 0x1ac)));
                                      *(float *)(unaff_x19 + 200) = fVar57;
                                      goto joined_r0x036abbe8;
                                    }
                                    goto LAB_036afadc;
                                  }
                                  if (*plVar53 == 0) goto LAB_036afadc;
                                  fVar57 = (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                                           (*(float *)((long)unaff_x19 + 0x2ac) +
                                           fVar58 * fStack0000000000000138 +
                                           fVar61 * (fStack00000000000000e4 +
                                                    fStack000000000000013c +
                                                    *(float *)(*plVar53 + 0x1ac)));
                                  uVar71 = (ulong)(uint)fVar57;
                                  fVar57 = *(float *)(unaff_x19 + 200) - fVar57;
                                  *(float *)(unaff_x19 + 200) = fVar57;
                                  if ((uVar22 == 0x200b) || (uVar23 != 0)) {
                                    fVar81 = fVar61 * *(float *)((long)unaff_x19 + 0x2b4);
                                    uVar71 = (ulong)(uint)fVar81;
                                    fVar57 = fVar57 - fVar81;
                                    goto LAB_036abca4;
                                  }
                                }
                                else {
                                  if (*plVar53 == 0) goto LAB_036afadc;
                                  fVar81 = *(float *)(unaff_x19 + 200);
                                  fVar57 = fVar81 + (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                                                    (*(float *)((long)unaff_x19 + 0x2ac) +
                                                    (*(float *)(unaff_x19 + 0x56) - fVar85) +
                                                    fVar61 * (fStack000000000000013c +
                                                             *(float *)(*plVar53 + 0x1ac)));
                                  *(float *)(unaff_x19 + 200) = fVar57;
joined_r0x036abbe8:
                                  if ((uVar22 == 0x200b) ||
                                     (uVar71 = (ulong)(uint)fVar81, uVar23 != 0)) {
                                    fVar81 = fVar61 * *(float *)((long)unaff_x19 + 0x2b4);
                                    uVar71 = (ulong)(uint)fVar81;
                                    fVar57 = fVar57 + fVar81;
                                    goto LAB_036abca4;
                                  }
                                }
                                lVar31 = *plVar5;
                                if ((lVar31 == 0) ||
                                   (lVar32 = *(long *)(lVar31 + 0x38), lVar32 == 0))
                                goto LAB_036afadc;
                                uVar24 = *puVar3;
                                uVar45 = (uint)*(undefined8 *)(lVar32 + 0x18);
                                if (uVar45 <= uVar24) goto LAB_036afbe8;
                                *(float *)(lVar32 + (long)(int)uVar24 * 0x178 + 0x144) = fVar57;
                                uVar46 = uVar22;
                                if ((int)uVar22 < 0xd) {
                                  if ((uVar22 - 10 < 2) || (uVar22 == 3)) goto LAB_036abd48;
LAB_036abd2c:
                                  if (((bool)(bVar1 & uVar22 == 0x2d)) || (uVar24 == uVar28))
                                  goto LAB_036abd48;
                                }
                                else {
                                  if (1 < uVar22 - 0x2028) {
                                    if (uVar22 != 0xd) goto LAB_036abd2c;
                                    uVar71 = 0;
                                    *(float *)(unaff_x19 + 200) =
                                         *(float *)((long)unaff_x19 + 0x40c) + 0.0;
                                    if (uVar24 != uVar28) goto LAB_036ac2f4;
                                  }
LAB_036abd48:
                                  if (0.0 < *(float *)(unaff_x19 + 0x9b)) {
                                    fVar81 = *(float *)(unaff_x19 + 0x99);
                                    fVar57 = *(float *)(unaff_x19 + 0x9a);
                                    if (*(int *)(*(long *)
                                                  Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__
                                                + 0xe0) == 0) {
                                      thunk_FUN_01ac7298();
                                    }
                                    fVar81 = fVar81 - fVar57;
                                    if (((fVar80 < ABS(fVar81)) &&
                                        (*(char *)((long)unaff_x19 + 0x2c4) == '\0')) &&
                                       (*(char *)((long)unaff_x19 + 0x33c) == '\0')) {
                                      FUN_036ed624(fVar81);
                                      *(float *)((long)unaff_x19 + 0x4c4) =
                                           *(float *)((long)unaff_x19 + 0x4c4) - fVar81;
                                      *(float *)(unaff_x19 + 0x9b) =
                                           fVar81 + *(float *)(unaff_x19 + 0x9b);
                                      puVar15 = PTR_DAT_03d9c920;
                                      lVar31 = *(long *)PTR_DAT_03d9c920;
                                      if (*(int *)(lVar31 + 0xe0) == 0) {
                                        thunk_FUN_01ac7298();
                                        lVar31 = *(long *)puVar15;
                                      }
                                      lVar32 = *(long *)(lVar31 + 0xb8);
                                      if (*(int *)(lVar32 + 0x7ac) == (int)unaff_x19[0x95]) {
                                        if (*(int *)(lVar31 + 0xe0) == 0) {
                                          thunk_FUN_01ac7298();
                                          lVar32 = *(long *)(*(long *)PTR_DAT_03d9c920 + 0xb8);
                                        }
                                        FUN_0217900c(&stack0x000010a0,lVar32 + 0x11f0,
                                                     *(undefined8 *)PTR_DAT_03d9c8c0);
                                        memcpy(&stack0x000001d0,&stack0x000010a0,0x378);
                                        puVar15 = PTR_DAT_03d9c920;
                                        lVar31 = *(long *)PTR_DAT_03d9c920;
                                        memcpy((void *)(*(long *)(lVar31 + 0xb8) + 0x788),
                                               &stack0x000001d0,0x378);
                                        thunk_FUN_01b4f09c(*(long *)(lVar31 + 0xb8) + 0x818,0);
                                        lVar31 = *(long *)(*(long *)puVar15 + 0xb8);
                                        *(float *)(lVar31 + 0x7bc) =
                                             fVar81 + *(float *)(lVar31 + 0x7bc);
                                        *(float *)(lVar31 + 0x800) =
                                             fVar81 + *(float *)(lVar31 + 0x800);
                                        uVar37 = *(undefined8 *)PTR_DAT_03d9c8c8;
                                        memcpy(&stack0x000010a0,(void *)(lVar31 + 0x788),0x378);
                                        FUN_02178ef4(lVar31 + 0x11f0,&stack0x000010a0,uVar37);
                                      }
                                    }
                                  }
                                  unaff_x29 = &stack0x00000fc0;
                                  fVar62 = *(float *)(unaff_x19 + 0x9b);
                                  *(undefined1 *)((long)unaff_x19 + 0x33c) = 0;
                                  fVar57 = *(float *)((long)unaff_x19 + 0x4cc) - fVar62;
                                  fVar81 = *(float *)((long)unaff_x19 + 0x4c4);
                                  if (fVar57 <= *(float *)((long)unaff_x19 + 0x4c4)) {
                                    fVar81 = fVar57;
                                  }
                                  *(float *)((long)unaff_x19 + 0x4c4) = fVar81;
                                  fVar82 = *(float *)(unaff_x19 + 0x99);
                                  if (!bVar13) {
                                    fVar91 = fVar81;
                                  }
                                  if ((*(char *)((long)unaff_x19 + 0x334) != '\0') &&
                                     (((int)unaff_x19[0x65] <= *(int *)((long)unaff_x19 + 0x494) ||
                                      ((int)unaff_x19[0x66] <= (int)unaff_x19[0x95])))) {
                                    bVar13 = true;
                                  }
                                  lVar31 = *plVar5;
                                  if ((lVar31 == 0) ||
                                     (lVar32 = *(long *)(lVar31 + 0x50), lVar32 == 0))
                                  goto LAB_036afadc;
                                  uVar24 = *(uint *)(unaff_x19 + 0x95);
                                  if (*(uint *)(lVar32 + 0x18) <= uVar24) goto LAB_036afbe8;
                                  lVar54 = unaff_x19[0x93];
                                  lVar35 = lVar32 + (long)(int)uVar24 * 0x5c;
                                  *(int *)(lVar35 + 0x34) = (int)lVar54;
                                  uVar45 = *(uint *)(unaff_x19 + 0x93);
                                  if ((int)lVar54 <= (int)*(uint *)((long)unaff_x19 + 0x49c)) {
                                    uVar45 = *(uint *)((long)unaff_x19 + 0x49c);
                                  }
                                  *(uint *)((long)unaff_x19 + 0x49c) = uVar45;
                                  *(uint *)(lVar35 + 0x38) = uVar45;
                                  *(undefined4 *)(unaff_x19 + 0x94) =
                                       *(undefined4 *)((long)unaff_x19 + 0x494);
                                  *(undefined4 *)(lVar35 + 0x3c) =
                                       *(undefined4 *)((long)unaff_x19 + 0x494);
                                  iVar20 = *(int *)((long)unaff_x19 + 0x49c);
                                  if ((int)uVar45 <= *(int *)((long)unaff_x19 + 0x4a4)) {
                                    iVar20 = *(int *)((long)unaff_x19 + 0x4a4);
                                  }
                                  *(int *)((long)unaff_x19 + 0x4a4) = iVar20;
                                  *(int *)(lVar35 + 0x40) = iVar20;
                                  *(int *)(lVar35 + 0x24) =
                                       (*(int *)(lVar35 + 0x3c) - *(int *)(lVar35 + 0x34)) + 1;
                                  *(undefined4 *)(lVar35 + 0x28) =
                                       *(undefined4 *)((long)unaff_x19 + 0x4ac);
                                  lVar31 = *(long *)(lVar31 + 0x38);
                                  if (lVar31 == 0) goto LAB_036afadc;
                                  if (*(uint *)(lVar31 + 0x18) <= uVar45) goto LAB_036afbe8;
                                  uVar21 = *(undefined4 *)
                                            (lVar31 + (long)(int)uVar45 * 0x178 + 0x11c);
                                  lVar32 = lVar32 + (long)(int)uVar24 * 0x5c;
                                  *(float *)(lVar32 + 0x70) = fVar57;
                                  *(undefined4 *)(lVar32 + 0x6c) = uVar21;
                                  lVar31 = *plVar5;
                                  if ((lVar31 == 0) ||
                                     (lVar32 = *(long *)(lVar31 + 0x50), lVar32 == 0))
                                  goto LAB_036afadc;
                                  if (*(uint *)(lVar32 + 0x18) <= *(uint *)(unaff_x19 + 0x95))
                                  goto LAB_036afbe8;
                                  lVar31 = *(long *)(lVar31 + 0x38);
                                  if (lVar31 == 0) goto LAB_036afadc;
                                  if (*(uint *)(lVar31 + 0x18) <= *(uint *)((long)unaff_x19 + 0x4a4)
                                     ) goto LAB_036afbe8;
                                  fVar82 = fVar82 - fVar62;
                                  uVar71 = (ulong)(uint)fVar82;
                                  lVar32 = lVar32 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
                                  *(undefined4 *)(lVar32 + 0x74) =
                                       *(undefined4 *)
                                        (lVar31 + (long)(int)*(uint *)((long)unaff_x19 + 0x4a4) *
                                                  0x178 + 0x128);
                                  *(float *)(lVar32 + 0x78) = fVar82;
                                  lVar31 = *plVar5;
                                  if ((lVar31 == 0) ||
                                     (lVar54 = *(long *)(lVar31 + 0x50), lVar54 == 0))
                                  goto LAB_036afadc;
                                  lVar35 = (long)(int)*(uint *)(unaff_x19 + 0x95);
                                  if (*(uint *)(lVar54 + 0x18) <= *(uint *)(unaff_x19 + 0x95))
                                  goto LAB_036afbe8;
                                  lVar32 = lVar54 + lVar35 * 0x5c;
                                  *(float *)(lVar32 + 0x44) =
                                       *(float *)(lVar32 + 0x74) - fVar58 * fStack0000000000000174;
                                  *(float *)(lVar32 + 0x5c) = fStack000000000000010c;
                                  if (*(int *)(lVar32 + 0x24) == 1) {
                                    *(int *)(lVar54 + lVar35 * 0x5c + 0x68) = (int)unaff_x19[0x4f];
                                  }
                                  if ((*plVar53 == 0) ||
                                     (lVar32 = *(long *)(lVar31 + 0x38), lVar32 == 0))
                                  goto LAB_036afadc;
                                  lVar48 = (long)(int)*(uint *)((long)unaff_x19 + 0x4a4);
                                  uVar45 = (uint)*(undefined8 *)(lVar32 + 0x18);
                                  if (uVar45 <= *(uint *)((long)unaff_x19 + 0x4a4))
                                  goto LAB_036afbe8;
                                  if ((*(char *)(lVar32 + lVar48 * 0x178 + 0x194) == '\0') &&
                                     (lVar48 = (long)(int)*(uint *)(unaff_x19 + 0x94),
                                     uVar45 <= *(uint *)(unaff_x19 + 0x94))) goto LAB_036afbe8;
                                  lVar54 = lVar54 + lVar35 * 0x5c;
                                  fVar58 = (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                                           (fVar61 * (fStack00000000000000e4 +
                                                     fStack000000000000013c +
                                                     *(float *)(*plVar53 + 0x1ac)) -
                                           *(float *)((long)unaff_x19 + 0x2ac));
                                  fVar81 = -fVar58;
                                  if ((char)unaff_x19[0x1e] != '\0') {
                                    fVar81 = fVar58;
                                  }
                                  *(float *)(lVar54 + 0x58) =
                                       *(float *)(lVar32 + lVar48 * 0x178 + 0x144) + fVar81;
                                  *(float *)(lVar54 + 0x50) = 0.0 - *(float *)(unaff_x19 + 0x9b);
                                  *(float *)(lVar54 + 0x54) = fVar57;
                                  *(float *)(lVar54 + 0x48) = fVar88 * fVar56 + (fVar82 - fVar57);
                                  *(float *)(lVar54 + 0x4c) = fVar82;
                                  if ((int)uVar22 < 0x2d) {
                                    if (uVar22 - 10 < 2) {
LAB_036ac1c4:
                                      if (*(int *)(*(long *)PTR_DAT_03d9c920 + 0xe0) == 0) {
                                        thunk_FUN_01ac7298();
                                      }
                                      FUN_036ed2b4();
                                      lVar31 = unaff_x19[0x6d];
                                      *(undefined4 *)((long)unaff_x19 + 0x4ac) = 0;
                                      iVar20 = (int)unaff_x19[0x95] + 1;
                                      *(int *)(unaff_x19 + 0x95) = iVar20;
                                      *(int *)(unaff_x19 + 0x93) =
                                           *(int *)((long)unaff_x19 + 0x494) + 1;
                                      if ((lVar31 != 0) && (*(long *)(lVar31 + 0x50) != 0)) {
                                        if (*(int *)(*(long *)(lVar31 + 0x50) + 0x18) <= iVar20) {
                                          FUN_036ed7dc();
                                          lVar31 = unaff_x19[0x6d];
                                          if (lVar31 == 0) goto LAB_036afadc;
                                        }
                                        lVar31 = *(long *)(lVar31 + 0x38);
                                        if (lVar31 != 0) {
                                          if (*puVar3 < *(uint *)(lVar31 + 0x18)) {
                                            fVar81 = *(float *)(lVar31 + (long)(int)*puVar3 * 0x178
                                                               + 0x154);
                                            if (*(float *)(unaff_x19 + 0x58) == DAT_00b55468) {
                                              if ((uVar22 == 0x2029) || (fVar57 = 0.0, uVar22 == 10)
                                                 ) {
                                                fVar57 = *(float *)((long)unaff_x19 + 0x2cc);
                                              }
                                              uVar38 = 0;
                                              fVar57 = fVar81 + (0.0 - *(float *)((long)unaff_x19 +
                                                                                 0x4cc)) +
                                                       fVar88 * (fVar56 + *(float *)((long)unaff_x19
                                                                                    + 700)) +
                                                       fVar61 * (*(float *)(unaff_x19 + 0x57) +
                                                                fVar57) +
                                                       *(float *)(unaff_x19 + 0x9b);
                                            }
                                            else {
                                              if ((uVar22 == 0x2029) || (fVar57 = 0.0, uVar22 == 10)
                                                 ) {
                                                fVar57 = *(float *)((long)unaff_x19 + 0x2cc);
                                              }
                                              uVar38 = 1;
                                              fVar57 = *(float *)(unaff_x19 + 0x9b) +
                                                       *(float *)(unaff_x19 + 0x58) +
                                                       fVar61 * (*(float *)(unaff_x19 + 0x57) +
                                                                fVar57);
                                            }
                                            *(float *)(unaff_x19 + 0x9b) = fVar57;
                                            *(undefined1 *)((long)unaff_x19 + 0x2c4) = uVar38;
                                            puVar15 = PTR_DAT_03d9c920;
                                            lVar31 = *(long *)PTR_DAT_03d9c920;
                                            if (*(int *)(lVar31 + 0xe0) == 0) {
                                              thunk_FUN_01ac7298();
                                              lVar31 = *(long *)puVar15;
                                            }
                                            uVar37 = *(undefined8 *)
                                                      (*(long *)(lVar31 + 0xb8) + 0x15a8);
                                            *(float *)(unaff_x19 + 0x9a) = fVar81;
                                            uVar71 = NEON_rev64(uVar37,4);
                                            unaff_x19[0x99] = uVar71;
                                            *(float *)(unaff_x19 + 200) =
                                                 *(float *)(unaff_x19 + 0x81) + 0.0 +
                                                 *(float *)((long)unaff_x19 + 0x40c);
                                            FUN_036ed2b4();
                                            FUN_036ed2b4();
                                            bVar9 = 1;
                                            *(int *)((long)unaff_x19 + 0x494) =
                                                 *(int *)((long)unaff_x19 + 0x494) + 1;
                                            bVar19 = true;
                                            goto LAB_036a9250;
                                          }
                                          goto LAB_036afbe8;
                                        }
                                      }
                                      goto LAB_036afadc;
                                    }
                                    if (uVar22 == 3) {
                                      if (unaff_x19[0x8f] == 0) goto LAB_036afadc;
                                      uVar90 = (uint)*(undefined8 *)(unaff_x19[0x8f] + 0x18);
                                      uVar46 = 3;
                                    }
                                  }
                                  else if ((uVar22 - 0x2028 < 2) || (uVar22 == 0x2d))
                                  goto LAB_036ac1c4;
                                }
LAB_036ac2f4:
                                uVar24 = *puVar3;
                                if (uVar45 <= uVar24) goto LAB_036afbe8;
                                if (*(char *)(lVar32 + (long)(int)uVar24 * 0x178 + 0x194) != '\0') {
                                  lVar32 = lVar32 + (long)(int)uVar24 * 0x178;
                                  uVar34 = *(ulong *)(lVar32 + 0x11c);
                                  uVar71 = *(ulong *)((long)unaff_x19 + 0x4dc);
                                  *(ulong *)((long)unaff_x19 + 0x4dc) =
                                       uVar71 ^ (uVar71 ^ uVar34) &
                                                ~CONCAT44(-(uint)((float)(uVar71 >> 0x20) <
                                                                 (float)(uVar34 >> 0x20)),
                                                          -(uint)((float)uVar71 < (float)uVar34));
                                  uVar34 = *(ulong *)((long)unaff_x19 + 0x4e4);
                                  uVar71 = *(ulong *)(lVar32 + 0x128);
                                  *(ulong *)((long)unaff_x19 + 0x4e4) =
                                       uVar34 ^ (uVar34 ^ uVar71) &
                                                ~CONCAT44(-(uint)((float)(uVar71 >> 0x20) <
                                                                 (float)(uVar34 >> 0x20)),
                                                          -(uint)((float)uVar71 < (float)uVar34));
                                }
                                if (((int)unaff_x19[0x5c] == 5) &&
                                   ((0xd < uVar46 || ((1 << (ulong)(uVar46 & 0x1f) & 0x2c00U) == 0))
                                   )) {
                                  lVar32 = *(long *)(lVar31 + 0x58);
                                  if (lVar32 == 0) goto LAB_036afadc;
                                  iVar20 = (int)unaff_x19[0x96] + 1;
                                  if (*(int *)(lVar32 + 0x18) < iVar20) {
                                    if (*(int *)(*(long *)PTR_DAT_03d9c8a0 + 0xe0) == 0) {
                                      thunk_FUN_01ac7298();
                                    }
                                    FUN_01f52e84((long *)(lVar31 + 0x58),iVar20,1,
                                                 *(undefined8 *)PTR_DAT_03d9c890);
                                    lVar31 = *plVar5;
                                    if (lVar31 == 0) goto LAB_036afadc;
                                  }
                                  lVar32 = *(long *)(lVar31 + 0x58);
                                  if (lVar32 == 0) goto LAB_036afadc;
                                  uVar45 = *(uint *)(unaff_x19 + 0x96);
                                  lVar54 = (long)(int)uVar45;
                                  uVar24 = *(uint *)(lVar32 + 0x18);
                                  if (uVar24 <= uVar45) goto LAB_036afbe8;
                                  lVar35 = lVar32 + lVar54 * 0x14;
                                  fVar57 = *(float *)(lVar35 + 0x30);
                                  uVar71 = (ulong)(uint)fVar57;
                                  *(undefined4 *)(lVar35 + 0x28) =
                                       *(undefined4 *)((long)unaff_x19 + 0x4b4);
                                  fVar81 = *(float *)((long)unaff_x19 + 0x4c4);
                                  if (fVar57 <= *(float *)((long)unaff_x19 + 0x4c4)) {
                                    fVar81 = fVar57;
                                  }
                                  *(float *)(lVar35 + 0x30) = fVar81;
                                  uVar46 = *(uint *)((long)unaff_x19 + 0x494);
                                  if (uVar46 == 0 && uVar45 == 0) {
                                    *(uint *)(lVar32 + (ulong)uVar45 * 0x14 + 0x20) = uVar46;
                                  }
                                  else {
                                    uVar12 = uVar46 - 1;
                                    if (0 < (int)uVar46) {
                                      lVar31 = *(long *)(lVar31 + 0x38);
                                      if (lVar31 == 0) goto LAB_036afadc;
                                      if (*(uint *)(lVar31 + 0x18) <= uVar12) goto LAB_036afbe8;
                                      if (uVar45 != *(uint *)(lVar31 + (ulong)uVar12 * 0x178 + 0x68)
                                         ) {
                                        if (uVar45 - 1 < uVar24) {
                                          *(uint *)(lVar32 + 0x20 + (long)(int)(uVar45 - 1) * 0x14 +
                                                   4) = uVar12;
                                          *(uint *)(lVar32 + 0x20 + lVar54 * 0x14) = uVar46;
                                          goto LAB_036ac564;
                                        }
                                        goto LAB_036afbe8;
                                      }
                                    }
                                    if (uVar46 == uVar28) {
                                      *(uint *)(lVar32 + lVar54 * 0x14 + 0x24) = uVar28;
                                    }
                                  }
                                }
LAB_036ac564:
                                puVar15 = PTR_DAT_03d9c920;
                                unaff_x29 = &stack0x00000fc0;
                                if (((char)unaff_x19[0x5b] == '\0') &&
                                   ((6 < *(uint *)(unaff_x19 + 0x5c) ||
                                    ((1 << (ulong)(*(uint *)(unaff_x19 + 0x5c) & 0x1f) & 0x4aU) == 0
                                    )))) goto LAB_036ac920;
                                if ((uVar23 == 0) &&
                                   (((uVar22 != 0x2d && (uVar22 != 0x200b)) && (uVar22 != 0xad)))) {
                                  if (*(char *)((long)unaff_x19 + 0x2da) == '\0') {
LAB_036ac660:
                                    if (((((0x2bfd < uVar22 - 0xac01) && (0xfd < uVar22 - 0x1101))
                                         && (0x1d < uVar22 - 0xa961)) ||
                                        (uVar34 = FUN_036fbce8(0), (uVar34 & 1) != 0)) &&
                                       ((((0xed < uVar22 - 0xff01 && (0x1d < uVar22 - 0xfe31)) &&
                                         (0x717d < uVar22 - 0x2e81)) && (0x1fd < uVar22 - 0xf901))))
                                    goto LAB_036ac6e8;
                                    lVar31 = FUN_036fbb7c(0);
                                    if ((lVar31 == 0) || (*(long *)(lVar31 + 0x10) == 0))
                                    goto LAB_036afadc;
                                    uVar24 = FUN_0254f914(*(long *)(lVar31 + 0x10),uVar22,
                                                          *(undefined8 *)PTR_DAT_03d9c860);
                                    if ((int)uVar28 <= (int)*puVar3) {
                                      if ((uVar24 & 1) == 0) {
LAB_036ac8e4:
                                        if (*(int *)(*(long *)PTR_DAT_03d9c920 + 0xe0) == 0) {
                                          thunk_FUN_01ac7298();
                                        }
                                        FUN_036ed2b4();
                                        goto LAB_036ac91c;
                                      }
LAB_036ac84c:
                                      if (uVar67 != uVar7 || ((bVar9 ^ 0xff) & 1) != 0)
                                      goto LAB_036ac920;
                                      if (uVar23 != 0) goto LAB_036ac868;
                                      goto LAB_036ac8a0;
                                    }
                                    lVar31 = FUN_036fbb7c(0);
                                    if (((lVar31 == 0) || (*plVar5 == 0)) ||
                                       (lVar32 = *(long *)(*plVar5 + 0x38), lVar32 == 0))
                                    goto LAB_036afadc;
                                    if (*(uint *)(lVar32 + 0x18) <= *puVar3 + 1) goto LAB_036afbe8;
                                    if (*(long *)(lVar31 + 0x18) == 0) goto LAB_036afadc;
                                    uVar34 = FUN_0254f914(*(long *)(lVar31 + 0x18),
                                                          *(undefined2 *)
                                                           (lVar32 + (long)(int)(*puVar3 + 1) *
                                                                     0x178 + 0x20),
                                                          *(undefined8 *)PTR_DAT_03d9c860);
                                    if ((uVar24 & 1) != 0) goto LAB_036ac84c;
                                    if ((uVar34 & 1) == 0) goto LAB_036ac8e4;
                                    if (bVar9 == 0) goto LAB_036ac91c;
                                    if (uVar23 != 0) {
                                      if (*(int *)(*(long *)PTR_DAT_03d9c920 + 0xe0) == 0) {
                                        thunk_FUN_01ac7298();
                                      }
                                      FUN_036ed2b4();
                                    }
                                    if (*(int *)(*(long *)PTR_DAT_03d9c920 + 0xe0) == 0) {
                                      thunk_FUN_01ac7298();
                                    }
                                    FUN_036ed2b4();
                                  }
                                  else {
                                    if (bVar9 == 0) goto LAB_036ac91c;
LAB_036ac6f8:
                                    if (!bVar14 && uVar22 == 0xad) goto LAB_036ac868;
LAB_036ac8a0:
                                    if (*(int *)(*(long *)PTR_DAT_03d9c920 + 0xe0) == 0) {
                                      thunk_FUN_01ac7298();
                                    }
                                    FUN_036ed2b4();
                                  }
                                  bVar9 = 1;
                                }
                                else if (*(char *)((long)unaff_x19 + 0x2da) == '\x01') {
LAB_036ac6e8:
                                  if (bVar9 != 0) {
                                    if (uVar23 == 0) goto LAB_036ac6f8;
LAB_036ac868:
                                    if (*(int *)(*(long *)PTR_DAT_03d9c920 + 0xe0) == 0) {
                                      thunk_FUN_01ac7298();
                                    }
                                    FUN_036ed2b4();
                                    goto LAB_036ac8a0;
                                  }
LAB_036ac91c:
                                  bVar9 = 0;
                                }
                                else {
                                  if (((uVar22 - 0x2007 < 0x29) &&
                                      ((1L << ((ulong)(uVar22 - 0x2007) & 0x3f) & 0x10000000401U) !=
                                       0)) || ((uVar22 == 0xa0 || (uVar22 == 0x2060))))
                                  goto LAB_036ac660;
                                  if (*(int *)(*(long *)PTR_DAT_03d9c920 + 0xe0) == 0) {
                                    thunk_FUN_01ac7298();
                                  }
                                  FUN_036ed2b4();
                                  bVar9 = 0;
                                  *(undefined4 *)(*(long *)(*(long *)puVar15 + 0xb8) + 0xe78) =
                                       0xffffffff;
                                }
LAB_036ac920:
                                if (*(int *)(*(long *)PTR_DAT_03d9c920 + 0xe0) == 0) {
                                  thunk_FUN_01ac7298();
                                }
                                FUN_036ed2b4();
                                *(int *)((long)unaff_x19 + 0x494) =
                                     *(int *)((long)unaff_x19 + 0x494) + 1;
                              }
                            }
                            else {
                              *(undefined1 *)((long)unaff_x19 + 0x431) = 1;
                              *(undefined4 *)((long)unaff_x19 + 0x644) = 0;
                              uVar34 = FUN_036e7318();
                              if (((uVar34 & 1) == 0) ||
                                 (uVar90 = in_stack_0000104c, *(int *)((long)unaff_x19 + 0x644) != 0
                                 )) goto LAB_036a9064;
                            }
LAB_036a9250:
                            uVar90 = uVar90 + 1;
                            lVar31 = unaff_x19[0x8f];
                            uVar23 = uVar22;
                            if (lVar31 == 0) goto LAB_036afadc;
                            goto LAB_036a8f0c;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          goto LAB_036afadc;
        }
      }
      (**(code **)(*unaff_x19 + 0x948))();
      *(undefined4 *)(unaff_x19 + 0x7c) = 0;
      *(undefined4 *)((long)unaff_x19 + 0x3ec) = 0;
      if (*(int *)(*(long *)Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_45__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      FUN_036c03d8();
      goto LAB_036a8938;
    }
  }
  puVar15 = PTR_DAT_03d9c928;
  FUN_03922ce0();
  uVar37 = FUN_0303de64(&stack0x0000106c,0);
  uVar37 = FUN_02edd6e8(*(undefined8 *)puVar15,uVar37,0);
  if (*(int *)(*unaff_x21 + 0xe0) == 0) {
    thunk_FUN_01ac7298(*unaff_x21);
  }
  FUN_038f336c(uVar37,0);
LAB_036a8938:
  *(undefined1 *)((long)unaff_x19 + 0x24c) = 1;
  return;
LAB_036ad4b0:
  uVar90 = uVar28 - 1;
  if (*(uint *)(lVar30 + 0x18) <= uVar90) goto LAB_036afbe8;
  if ((*plVar5 == 0) || (lVar32 = *(long *)(*plVar5 + 0x50), lVar32 == 0)) goto LAB_036afadc;
  lVar35 = (long)(int)uVar90;
  lVar54 = lVar30 + lVar35 * 0x178;
  uVar22 = *(uint *)(lVar54 + 100);
  if (*(uint *)(lVar32 + 0x18) <= uVar22) goto LAB_036afbe8;
  lVar50 = (long)(int)uVar22;
  lVar32 = lVar32 + lVar50 * 0x5c;
  lVar48 = *(long *)(lVar54 + 0x38);
  uVar10 = *(ushort *)(lVar54 + 0x20);
  uVar7 = *(uint *)(lVar32 + 0x3c);
  uVar67 = *(uint *)(lVar32 + 0x68);
  iVar8 = *(int *)(lVar32 + 0x20);
  iVar26 = *(int *)(lVar32 + 0x28);
  iVar27 = *(int *)(lVar32 + 0x2c);
  uVar24 = *(uint *)(lVar32 + 0x40);
  lVar54 = (long)(int)uVar24;
  fVar89 = *(float *)(lVar32 + 0x4c);
  fVar77 = *(float *)(lVar32 + 0x54);
  fVar60 = *(float *)(lVar32 + 0x58);
  fVar62 = *(float *)(lVar32 + 0x5c);
  fVar80 = *(float *)(lVar32 + 0x60);
  fVar91 = *(float *)(lVar32 + 0x6c);
  fVar82 = *(float *)(lVar32 + 0x70);
  fVar72 = *(float *)(lVar32 + 0x74);
  fVar78 = *(float *)(lVar32 + 0x78);
  uVar45 = (uint)uVar10;
  if ((int)uVar67 < 9) {
    switch(uVar67) {
    case 1:
      if ((char)unaff_x19[0x1e] == '\0') {
        fStack000000000000010c = fVar80 + 0.0;
      }
      else {
        fStack000000000000010c = 0.0 - fVar60;
      }
      break;
    case 2:
LAB_036ad650:
      fStack000000000000010c = (fVar80 + fVar62 * 0.5) - fVar60 * 0.5;
      break;
    default:
      goto switchD_036ad590_caseD_3;
    case 4:
      fStack000000000000010c = (fVar62 + fVar80) - fVar60;
      if ((char)unaff_x19[0x1e] != '\0') {
        fStack000000000000010c = fVar62 + fVar80;
      }
      break;
    case 8:
      goto switchD_036ad590_caseD_8;
    }
LAB_036ad6c0:
    uStack00000000000000f8 = 0;
  }
  else if (uVar67 == 0x10) {
switchD_036ad590_caseD_8:
    if (uVar10 < 0xad) {
      if ((uVar10 != 3) && (uVar10 != 10)) goto LAB_036ad5e4;
    }
    else if ((uVar10 != 0xad) && ((uVar10 != 0x200b && (uVar10 != 0x2060)))) {
LAB_036ad5e4:
      if (*(uint *)(lVar30 + 0x18) <= uVar7) goto LAB_036afbe8;
      uVar11 = *(undefined2 *)(lVar30 + (long)(int)uVar7 * 0x178 + 0x20);
      if (*(int *)(*(long *)
                    Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                  + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar29 = FUN_02fde5f4(uVar11,0);
      if ((uVar29 & 1) == 0) {
        bVar1 = (int)uVar22 < (int)unaff_x19[0x95];
      }
      else {
        bVar1 = false;
      }
      if ((fVar60 <= fVar62) && (!bVar1 && uVar67 >> 4 == 0)) {
        fStack000000000000010c = fVar80;
        if ((char)unaff_x19[0x1e] != '\0') {
          fStack000000000000010c = fVar62 + fVar80;
        }
        goto LAB_036ad6c0;
      }
      if (((uVar28 == 1) || (uVar22 != uVar23)) || (uVar90 == *(uint *)((long)unaff_x19 + 0x324))) {
        fStack000000000000010c = fVar80;
        if ((char)unaff_x19[0x1e] != '\0') {
          fStack000000000000010c = fVar62 + fVar80;
        }
        if (*(int *)(*(long *)
                      Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uStack000000000000002c = FUN_02fdea78(uVar45,0);
        uStack00000000000000f8 = 0;
      }
      else {
        cVar39 = (char)unaff_x19[0x1e];
        fVar80 = -fVar60;
        if (cVar39 != '\0') {
          fVar80 = fVar60;
        }
        if (*(uint *)(lVar30 + 0x18) <= uVar7) goto LAB_036afbe8;
        iVar27 = (int)*(char *)(lVar30 + (long)(int)uVar7 * 0x178 + 0x194) +
                 (-iVar8 - (uStack000000000000002c & 1)) + iVar27 + -1;
        if (iVar27 < 1) {
          fVar60 = 1.0;
          iVar27 = 1;
        }
        else {
          fVar60 = *(float *)((long)unaff_x19 + 0x2dc);
        }
        if (uVar45 == 9) {
LAB_036af498:
          fVar60 = 1.0 - fVar60;
        }
        else {
          if (uVar45 != 0xa0) {
            if (*(int *)(*(long *)
                          Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                        + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            uVar29 = FUN_02fdea78(uVar45,0);
            cVar39 = (char)unaff_x19[0x1e];
            if ((uVar29 & 1) != 0) goto LAB_036af498;
          }
          iVar27 = (iVar8 - (~uStack000000000000002c & 1)) + iVar26;
        }
        fVar60 = ((fVar62 + fVar80) * fVar60) / (float)iVar27;
        if (cVar39 == '\0') {
          fStack000000000000010c = fStack000000000000010c + fVar60;
          uStack00000000000000f8 =
               CONCAT44((float)((ulong)uStack00000000000000f8 >> 0x20) + 0.0,
                        (float)uStack00000000000000f8 + 0.0);
        }
        else {
          fStack000000000000010c = fStack000000000000010c - fVar60;
        }
      }
    }
  }
  else if (uVar67 == 0x20) {
    fVar60 = fVar91 + fVar72;
    goto LAB_036ad650;
  }
switchD_036ad590_caseD_3:
  uVar67 = (uint)*(undefined8 *)(lVar30 + 0x18);
  if (uVar67 <= uVar90) goto LAB_036afbe8;
  lVar32 = lVar30 + lVar35 * 0x178;
  fVar62 = fStack00000000000000d0 + fStack000000000000010c;
  fVar60 = (float)uStack00000000000000c8 + (float)uStack00000000000000f8;
  fVar80 = (float)((ulong)uStack00000000000000c8 >> 0x20) +
           (float)((ulong)uStack00000000000000f8 >> 0x20);
  if (*(char *)(lVar32 + 0x194) == '\0') goto LAB_036adf70;
  iVar26 = *(int *)(lVar30 + lVar35 * 0x178 + 0x2c);
  if (iVar26 != 0) goto LAB_036add84;
  fVar59 = fmodf(*(float *)((long)unaff_x19 + 0x314) * (float)(int)uVar22,1.0);
  switch(*(undefined4 *)((long)unaff_x19 + 0x30c)) {
  case 0:
    lVar42 = lVar30 + lVar35 * 0x178;
    *(undefined4 *)(lVar42 + 0x84) = 0;
    *(undefined4 *)(lVar42 + 0xac) = 0;
    *(undefined4 *)(lVar42 + 0xd4) = 0x3f800000;
    fVar59 = 1.0;
    break;
  case 1:
    fVar78 = *(float *)(lVar30 + lVar35 * 0x178 + 0x70);
    if (*(int *)((long)unaff_x19 + 0x274) == 0x208) {
      lVar42 = lVar30 + lVar35 * 0x178;
      fVar72 = (fStack000000000000010c + fVar78) - *(float *)((long)unaff_x19 + 0x4dc);
      fVar78 = *(float *)((long)unaff_x19 + 0x4e4) - *(float *)((long)unaff_x19 + 0x4dc);
      goto LAB_036ad804;
    }
    lVar42 = lVar30 + lVar35 * 0x178;
    fVar72 = fVar72 - fVar91;
    *(float *)(lVar42 + 0x84) = fVar59 + (fVar78 - fVar91) / fVar72;
    *(float *)(lVar42 + 0xac) = fVar59 + (*(float *)(lVar42 + 0x98) - fVar91) / fVar72;
    *(float *)(lVar42 + 0xd4) = fVar59 + (*(float *)(lVar42 + 0xc0) - fVar91) / fVar72;
    fVar59 = fVar59 + (*(float *)(lVar42 + 0xe8) - fVar91) / fVar72;
    break;
  case 2:
    lVar42 = lVar30 + lVar35 * 0x178;
    fVar78 = *(float *)((long)unaff_x19 + 0x4e4) - *(float *)((long)unaff_x19 + 0x4dc);
    fVar72 = (fStack000000000000010c + *(float *)(lVar42 + 0x70)) -
             *(float *)((long)unaff_x19 + 0x4dc);
LAB_036ad804:
    *(float *)(lVar42 + 0x84) = fVar59 + fVar72 / fVar78;
    *(float *)(lVar42 + 0xac) =
         fVar59 + ((fStack000000000000010c + *(float *)(lVar42 + 0x98)) -
                  *(float *)((long)unaff_x19 + 0x4dc)) /
                  (*(float *)((long)unaff_x19 + 0x4e4) - *(float *)((long)unaff_x19 + 0x4dc));
    *(float *)(lVar42 + 0xd4) =
         fVar59 + ((fStack000000000000010c + *(float *)(lVar42 + 0xc0)) -
                  *(float *)((long)unaff_x19 + 0x4dc)) /
                  (*(float *)((long)unaff_x19 + 0x4e4) - *(float *)((long)unaff_x19 + 0x4dc));
    fVar59 = fVar59 + ((fStack000000000000010c + *(float *)(lVar42 + 0xe8)) -
                      *(float *)((long)unaff_x19 + 0x4dc)) /
                      (*(float *)((long)unaff_x19 + 0x4e4) - *(float *)((long)unaff_x19 + 0x4dc));
    break;
  case 3:
    switch((int)unaff_x19[0x62]) {
    case 0:
      lVar42 = lVar30 + lVar35 * 0x178;
      *(undefined4 *)(lVar42 + 0x88) = 0;
      *(undefined4 *)(lVar42 + 0xb0) = 0x3f800000;
      *(undefined4 *)(lVar42 + 0xd8) = 0;
      *(undefined4 *)(lVar42 + 0x100) = 0x3f800000;
      break;
    case 1:
      lVar42 = lVar30 + lVar35 * 0x178;
      fVar78 = fVar78 - fVar82;
      fVar72 = fVar59 + (*(float *)(lVar42 + 0x74) - fVar82) / fVar78;
      fVar78 = fVar59 + (*(float *)(lVar42 + 0x9c) - fVar82) / fVar78;
      *(float *)(lVar42 + 0x88) = fVar72;
      *(float *)(lVar42 + 0xb0) = fVar78;
      *(float *)(lVar42 + 0xd8) = fVar72;
      *(float *)(lVar42 + 0x100) = fVar78;
      break;
    case 2:
      lVar42 = lVar30 + lVar35 * 0x178;
      fVar72 = fVar59 + (*(float *)(lVar42 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
                        (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
      *(float *)(lVar42 + 0x88) = fVar72;
      fVar78 = *(float *)(unaff_x19 + 0x9c);
      fVar91 = *(float *)(unaff_x19 + 0x9d);
      *(float *)(lVar42 + 0xd8) = fVar72;
      fVar72 = fVar59 + (*(float *)(lVar42 + 0x9c) - fVar78) / (fVar91 - fVar78);
      *(float *)(lVar42 + 0xb0) = fVar72;
      *(float *)(lVar42 + 0x100) = fVar72;
      break;
    case 3:
      if (*(int *)(*(long *)
                    Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                  + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      FUN_038f2acc(*(undefined8 *)PTR_DAT_03d9c948,0);
      uVar67 = (uint)*(undefined8 *)(lVar30 + 0x18);
    }
    if (uVar67 <= uVar90) goto LAB_036afbe8;
    lVar42 = lVar30 + lVar35 * 0x178;
    fVar72 = *(float *)(lVar42 + 0x15c);
    fVar78 = (1.0 - (*(float *)(lVar42 + 0x88) + *(float *)(lVar42 + 0xb0)) * fVar72) * 0.5;
    fVar91 = fVar59 + *(float *)(lVar42 + 0x88) * fVar72 + fVar78;
    fVar59 = fVar59 + fVar78 + *(float *)(lVar42 + 0xb0) * fVar72;
    *(float *)(lVar42 + 0x84) = fVar91;
    *(float *)(lVar42 + 0xac) = fVar91;
    *(float *)(lVar42 + 0xd4) = fVar59;
    break;
  default:
    goto switchD_036ad764_default;
  }
  *(float *)(lVar30 + lVar35 * 0x178 + 0xfc) = fVar59;
switchD_036ad764_default:
  switch((int)unaff_x19[0x62]) {
  case 0:
    if (uVar67 <= uVar90) goto LAB_036afbe8;
    lVar42 = lVar30 + lVar35 * 0x178;
    *(undefined4 *)(lVar42 + 0x88) = 0;
    *(undefined4 *)(lVar42 + 0xb0) = 0x3f800000;
    *(undefined4 *)(lVar42 + 0xd8) = 0x3f800000;
    *(undefined4 *)(lVar42 + 0x100) = 0;
    break;
  case 1:
    if (uVar90 < uVar67) {
      lVar42 = lVar30 + lVar35 * 0x178;
      fVar89 = fVar89 - fVar77;
      fVar59 = (*(float *)(lVar42 + 0x74) - fVar77) / fVar89;
      fVar89 = (*(float *)(lVar42 + 0x9c) - fVar77) / fVar89;
      *(float *)(lVar42 + 0x88) = fVar59;
      goto LAB_036adb68;
    }
    goto LAB_036afbe8;
  case 2:
    if (uVar67 <= uVar90) goto LAB_036afbe8;
    lVar42 = lVar30 + lVar35 * 0x178;
    fVar59 = (*(float *)(lVar42 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
             (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
    *(float *)(lVar42 + 0x88) = fVar59;
    fVar89 = (*(float *)(lVar42 + 0x9c) - *(float *)(unaff_x19 + 0x9c)) /
             (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
LAB_036adb68:
    *(float *)(lVar42 + 0xb0) = fVar89;
    *(float *)(lVar42 + 0xd8) = fVar89;
    *(float *)(lVar42 + 0x100) = fVar59;
    break;
  case 3:
    if (uVar67 <= uVar90) goto LAB_036afbe8;
    lVar42 = lVar30 + lVar35 * 0x178;
    fVar89 = *(float *)(lVar42 + 0x15c);
    fVar72 = (1.0 - (*(float *)(lVar42 + 0x84) + *(float *)(lVar42 + 0xd4)) / fVar89) * 0.5;
    fVar59 = *(float *)(lVar42 + 0x84) / fVar89 + fVar72;
    fVar72 = fVar72 + *(float *)(lVar42 + 0xd4) / fVar89;
    *(float *)(lVar42 + 0x88) = fVar59;
    *(float *)(lVar42 + 0xb0) = fVar72;
    *(float *)(lVar42 + 0x100) = fVar59;
    *(float *)(lVar42 + 0xd8) = fVar72;
  }
  if (uVar67 <= uVar90) goto LAB_036afbe8;
  lVar42 = lVar30 + lVar35 * 0x178;
  fVar59 = *(float *)(lVar42 + 0x160) * (1.0 - *(float *)((long)unaff_x19 + 0x2d4));
  if ((*(char *)(lVar42 + 0x5c) == '\0') && ((*(byte *)(lVar30 + lVar35 * 0x178 + 400) & 1) != 0)) {
    fVar59 = -fVar59;
  }
  fVar72 = fVar88;
  if (((iVar25 == 2) || (fVar72 = fVar75, iVar25 == 1)) || (fVar72 = fVar88 / fVar61, iVar25 == 0))
  {
    fVar59 = fVar72 * fVar59;
  }
  lVar42 = lVar30 + lVar35 * 0x178;
  fVar89 = *(float *)(lVar42 + 0x88);
  fVar78 = *(float *)(lVar42 + 0x84);
  fVar72 = -2.1474836e+09;
  if (fVar78 != INFINITY) {
    fVar72 = (float)(int)fVar78;
  }
  fVar91 = *(float *)(lVar42 + 0xd4);
  fVar82 = *(float *)(lVar42 + 0xd8);
  fVar77 = -2.1474836e+09;
  if (fVar89 != INFINITY) {
    fVar77 = (float)(int)fVar89;
  }
  uVar70 = FUN_036f2b00(fVar78 - fVar72,fVar89 - fVar77);
  *(undefined4 *)(lVar42 + 0x84) = uVar70;
  if (*(uint *)(lVar30 + 0x18) <= uVar90) goto LAB_036afbe8;
  fVar82 = fVar82 - fVar77;
  *(float *)(lVar42 + 0x88) = fVar59;
  uVar70 = FUN_036f2b00(fVar78 - fVar72,fVar82);
  *(undefined4 *)(lVar30 + lVar35 * 0x178 + 0xac) = uVar70;
  if (*(uint *)(lVar30 + 0x18) <= uVar90) goto LAB_036afbe8;
  fVar91 = fVar91 - fVar72;
  *(float *)(lVar30 + lVar35 * 0x178 + 0xb0) = fVar59;
  fVar72 = (float)FUN_036f2b00(fVar91,fVar82);
  *(float *)(lVar42 + 0xd4) = fVar72;
  if (*(uint *)(lVar30 + 0x18) <= uVar90) goto LAB_036afbe8;
  *(float *)(lVar42 + 0xd8) = fVar59;
  uVar70 = FUN_036f2b00(fVar91,fVar89 - fVar77);
  *(undefined4 *)(lVar30 + lVar35 * 0x178 + 0xfc) = uVar70;
  uVar67 = (uint)*(undefined8 *)(lVar30 + 0x18);
  if (uVar67 <= uVar90) goto LAB_036afbe8;
  *(float *)(lVar30 + lVar35 * 0x178 + 0x100) = fVar59;
LAB_036add84:
  if (((int)uVar90 < (int)unaff_x19[0x65]) &&
     ((int)fStack00000000000000e4 < *(int *)((long)unaff_x19 + 0x32c))) {
    if (((int)uVar22 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] != 5)) {
      if (uVar67 <= uVar90) goto LAB_036afbe8;
      lVar32 = lVar30 + lVar35 * 0x178;
      *(ulong *)(lVar32 + 0x70) =
           CONCAT44(fVar60 + (float)((ulong)*(undefined8 *)(lVar32 + 0x70) >> 0x20),
                    fVar62 + (float)*(undefined8 *)(lVar32 + 0x70));
      *(float *)(lVar32 + 0x78) = fVar80 + *(float *)(lVar32 + 0x78);
      *(ulong *)(lVar32 + 0x98) =
           CONCAT44(fVar60 + (float)((ulong)*(undefined8 *)(lVar32 + 0x98) >> 0x20),
                    fVar62 + (float)*(undefined8 *)(lVar32 + 0x98));
      *(float *)(lVar32 + 0xa0) = fVar80 + *(float *)(lVar32 + 0xa0);
      *(ulong *)(lVar32 + 0xc0) =
           CONCAT44(fVar60 + (float)((ulong)*(undefined8 *)(lVar32 + 0xc0) >> 0x20),
                    fVar62 + (float)*(undefined8 *)(lVar32 + 0xc0));
      *(float *)(lVar32 + 200) = fVar80 + *(float *)(lVar32 + 200);
      *(ulong *)(lVar32 + 0xe8) =
           CONCAT44(fVar60 + (float)((ulong)*(undefined8 *)(lVar32 + 0xe8) >> 0x20),
                    fVar62 + (float)*(undefined8 *)(lVar32 + 0xe8));
      *(float *)(lVar32 + 0xf0) = fVar80 + *(float *)(lVar32 + 0xf0);
      goto LAB_036adf28;
    }
    if (((int)uVar22 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] == 5)) {
      if (uVar90 < uVar67) {
        if (*(uint *)(lVar30 + lVar35 * 0x178 + 0x68) == uVar6) {
          lVar32 = lVar30 + lVar35 * 0x178;
          *(ulong *)(lVar32 + 0x70) =
               CONCAT44(fVar60 + (float)((ulong)*(undefined8 *)(lVar32 + 0x70) >> 0x20),
                        fVar62 + (float)*(undefined8 *)(lVar32 + 0x70));
          *(float *)(lVar32 + 0x78) = fVar80 + *(float *)(lVar32 + 0x78);
          *(ulong *)(lVar32 + 0x98) =
               CONCAT44(fVar60 + (float)((ulong)*(undefined8 *)(lVar32 + 0x98) >> 0x20),
                        fVar62 + (float)*(undefined8 *)(lVar32 + 0x98));
          *(float *)(lVar32 + 0xa0) = fVar80 + *(float *)(lVar32 + 0xa0);
          *(ulong *)(lVar32 + 0xc0) =
               CONCAT44(fVar60 + (float)((ulong)*(undefined8 *)(lVar32 + 0xc0) >> 0x20),
                        fVar62 + (float)*(undefined8 *)(lVar32 + 0xc0));
          *(float *)(lVar32 + 200) = fVar80 + *(float *)(lVar32 + 200);
          *(ulong *)(lVar32 + 0xe8) =
               CONCAT44(fVar60 + (float)((ulong)*(undefined8 *)(lVar32 + 0xe8) >> 0x20),
                        fVar62 + (float)*(undefined8 *)(lVar32 + 0xe8));
          *(float *)(lVar32 + 0xf0) = fVar80 + *(float *)(lVar32 + 0xf0);
          goto LAB_036adf28;
        }
        goto LAB_036ade64;
      }
      goto LAB_036afbe8;
    }
  }
LAB_036ade64:
  if (uVar67 <= uVar90) goto LAB_036afbe8;
  if (DAT_03fed257 == '\0') {
    thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
    DAT_03fed257 = '\x01';
    uVar67 = *(uint *)(lVar30 + 0x18);
  }
  puVar15 = Method_Mono_Security_PKCS7_EncryptedData__ctor__;
  uVar70 = *(undefined4 *)
            (*(undefined8 **)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8) + 1)
  ;
  lVar42 = lVar30 + lVar35 * 0x178;
  *(undefined8 *)(lVar42 + 0x70) =
       **(undefined8 **)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
  *(undefined4 *)(lVar42 + 0x78) = uVar70;
  if (uVar67 <= uVar90) goto LAB_036afbe8;
  uVar70 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar15 + 0xb8) + 1);
  lVar42 = lVar30 + lVar35 * 0x178;
  *(undefined8 *)(lVar42 + 0x98) = **(undefined8 **)(*(long *)puVar15 + 0xb8);
  *(undefined4 *)(lVar42 + 0xa0) = uVar70;
  uVar70 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar15 + 0xb8) + 1);
  *(undefined8 *)(lVar42 + 0xc0) = **(undefined8 **)(*(long *)puVar15 + 0xb8);
  *(undefined4 *)(lVar42 + 200) = uVar70;
  uVar70 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar15 + 0xb8) + 1);
  *(undefined8 *)(lVar42 + 0xe8) = **(undefined8 **)(*(long *)puVar15 + 0xb8);
  *(undefined4 *)(lVar42 + 0xf0) = uVar70;
  *(undefined1 *)(lVar32 + 0x194) = 0;
LAB_036adf28:
  if (iVar26 == 0) {
    pcVar44 = *(code **)(*unaff_x19 + 0x8d8);
LAB_036adf54:
    (*pcVar44)();
  }
  else if (iVar26 == 1) {
    pcVar44 = *(code **)(*unaff_x19 + 0x8f8);
    goto LAB_036adf54;
  }
LAB_036adf70:
  if ((*plVar5 == 0) || (lVar32 = *(long *)(*plVar5 + 0x38), lVar32 == 0)) goto LAB_036afadc;
  if (*(uint *)(lVar32 + 0x18) <= uVar90) goto LAB_036afbe8;
  lVar32 = lVar32 + lVar35 * 0x178;
  uVar37 = *(undefined8 *)(lVar32 + 0x11c);
  *(undefined8 *)(lVar32 + 0x11c) =
       CONCAT44(fVar60 + (float)((ulong)uVar37 >> 0x20),fVar62 + (float)uVar37);
  *(float *)(lVar32 + 0x124) = fVar80 + *(float *)(lVar32 + 0x124);
  if ((*plVar5 == 0) || (lVar32 = *(long *)(*plVar5 + 0x38), lVar32 == 0)) goto LAB_036afadc;
  if (*(uint *)(lVar32 + 0x18) <= uVar90) goto LAB_036afbe8;
  lVar32 = lVar32 + lVar35 * 0x178;
  *(ulong *)(lVar32 + 0x110) =
       CONCAT44(fVar60 + (float)((ulong)*(undefined8 *)(lVar32 + 0x110) >> 0x20),
                fVar62 + (float)*(undefined8 *)(lVar32 + 0x110));
  *(float *)(lVar32 + 0x118) = fVar80 + *(float *)(lVar32 + 0x118);
  if ((*plVar5 == 0) || (lVar32 = *(long *)(*plVar5 + 0x38), lVar32 == 0)) goto LAB_036afadc;
  if (*(uint *)(lVar32 + 0x18) <= uVar90) goto LAB_036afbe8;
  lVar32 = lVar32 + lVar35 * 0x178;
  *(ulong *)(lVar32 + 0x128) =
       CONCAT44(fVar60 + (float)((ulong)*(undefined8 *)(lVar32 + 0x128) >> 0x20),
                fVar62 + (float)*(undefined8 *)(lVar32 + 0x128));
  *(float *)(lVar32 + 0x130) = fVar80 + *(float *)(lVar32 + 0x130);
  if ((*plVar5 == 0) || (lVar32 = *(long *)(*plVar5 + 0x38), lVar32 == 0)) goto LAB_036afadc;
  if (*(uint *)(lVar32 + 0x18) <= uVar90) goto LAB_036afbe8;
  lVar32 = lVar32 + lVar35 * 0x178;
  *(float *)(lVar32 + 0x134) = fVar62 + *(float *)(lVar32 + 0x134);
  *(ulong *)(lVar32 + 0x138) =
       CONCAT44(fVar80 + (float)((ulong)*(undefined8 *)(lVar32 + 0x138) >> 0x20),
                fVar60 + (float)*(undefined8 *)(lVar32 + 0x138));
  lVar32 = *plVar5;
  if ((lVar32 == 0) || (lVar42 = *(long *)(lVar32 + 0x38), lVar42 == 0)) goto LAB_036afadc;
  uVar67 = *(uint *)(lVar42 + 0x18);
  if (uVar67 <= uVar90) goto LAB_036afbe8;
  lVar47 = lVar42 + lVar35 * 0x178;
  uVar71 = CONCAT44(fVar62 + (float)((ulong)*(undefined8 *)(lVar47 + 0x140) >> 0x20),
                    fVar62 + (float)*(undefined8 *)(lVar47 + 0x140));
  fVar72 = fVar60 + *(float *)(lVar47 + 0x150);
  uVar34 = (ulong)(uint)fVar72;
  uVar76 = CONCAT44(fVar60 + (float)((ulong)*(undefined8 *)(lVar47 + 0x148) >> 0x20),
                    fVar60 + (float)*(undefined8 *)(lVar47 + 0x148));
  *(float *)(lVar47 + 0x150) = fVar72;
  *(ulong *)(lVar47 + 0x140) = uVar71;
  *(ulong *)(lVar47 + 0x148) = uVar76;
  if (uVar22 == uVar23) {
    uVar23 = *puVar3 - 1;
    if (uVar90 == uVar23) goto LAB_036ae17c;
  }
  else {
    lVar32 = *(long *)(lVar32 + 0x50);
    if (lVar32 == 0) goto LAB_036afadc;
    if (*(uint *)(lVar32 + 0x18) <= uVar23) goto LAB_036afbe8;
    lVar47 = (long)(int)uVar23;
    lVar49 = lVar32 + lVar47 * 0x5c;
    uVar76 = (ulong)(uint)*(float *)(lVar49 + 0x58);
    fVar72 = fVar60 + *(float *)(lVar49 + 0x54);
    uVar71 = (ulong)(uint)fVar72;
    fVar89 = fVar62 + *(float *)(lVar49 + 0x58);
    uVar34 = (ulong)(uint)fVar89;
    *(ulong *)(lVar49 + 0x4c) =
         CONCAT44(fVar60 + (float)((ulong)*(undefined8 *)(lVar49 + 0x4c) >> 0x20),
                  fVar60 + (float)*(undefined8 *)(lVar49 + 0x4c));
    *(float *)(lVar49 + 0x54) = fVar72;
    *(float *)(lVar49 + 0x58) = fVar89;
    if (uVar67 <= *(uint *)(lVar49 + 0x34)) goto LAB_036afbe8;
    uVar70 = *(undefined4 *)(lVar42 + (long)(int)*(uint *)(lVar49 + 0x34) * 0x178 + 0x11c);
    lVar32 = lVar32 + lVar47 * 0x5c;
    *(float *)(lVar32 + 0x70) = fVar72;
    *(undefined4 *)(lVar32 + 0x6c) = uVar70;
    lVar32 = *plVar5;
    if ((lVar32 == 0) || (lVar42 = *(long *)(lVar32 + 0x50), lVar42 == 0)) goto LAB_036afadc;
    if (*(uint *)(lVar42 + 0x18) <= uVar23) goto LAB_036afbe8;
    lVar32 = *(long *)(lVar32 + 0x38);
    if (lVar32 == 0) goto LAB_036afadc;
    uVar23 = *(uint *)(lVar42 + lVar47 * 0x5c + 0x40);
    if (*(uint *)(lVar32 + 0x18) <= uVar23) goto LAB_036afbe8;
    lVar42 = lVar42 + lVar47 * 0x5c;
    *(undefined4 *)(lVar42 + 0x74) = *(undefined4 *)(lVar32 + (long)(int)uVar23 * 0x178 + 0x128);
    *(undefined4 *)(lVar42 + 0x78) = *(undefined4 *)(lVar42 + 0x4c);
    uVar23 = *puVar3 - 1;
LAB_036ae17c:
    if (uVar90 == uVar23) {
      lVar32 = *plVar5;
      if ((lVar32 == 0) || (lVar42 = *(long *)(lVar32 + 0x50), lVar42 == 0)) goto LAB_036afadc;
      if (*(uint *)(lVar42 + 0x18) <= uVar22) goto LAB_036afbe8;
      lVar47 = lVar42 + lVar50 * 0x5c;
      uVar76 = (ulong)(uint)*(float *)(lVar47 + 0x58);
      uVar71 = CONCAT44(fVar60 + (float)((ulong)*(undefined8 *)(lVar47 + 0x4c) >> 0x20),
                        fVar60 + (float)*(undefined8 *)(lVar47 + 0x4c));
      fVar72 = fVar60 + *(float *)(lVar47 + 0x54);
      fVar62 = fVar62 + *(float *)(lVar47 + 0x58);
      uVar34 = (ulong)(uint)fVar62;
      *(ulong *)(lVar47 + 0x4c) = uVar71;
      *(float *)(lVar47 + 0x54) = fVar72;
      *(float *)(lVar47 + 0x58) = fVar62;
      lVar32 = *(long *)(lVar32 + 0x38);
      if (lVar32 == 0) goto LAB_036afadc;
      if (*(uint *)(lVar32 + 0x18) <= *(uint *)(lVar47 + 0x34)) goto LAB_036afbe8;
      uVar70 = *(undefined4 *)(lVar32 + (long)(int)*(uint *)(lVar47 + 0x34) * 0x178 + 0x11c);
      lVar42 = lVar42 + lVar50 * 0x5c;
      *(float *)(lVar42 + 0x70) = fVar72;
      *(undefined4 *)(lVar42 + 0x6c) = uVar70;
      lVar32 = *plVar5;
      if ((lVar32 == 0) || (lVar42 = *(long *)(lVar32 + 0x50), lVar42 == 0)) goto LAB_036afadc;
      if (*(uint *)(lVar42 + 0x18) <= uVar22) goto LAB_036afbe8;
      lVar32 = *(long *)(lVar32 + 0x38);
      if (lVar32 == 0) goto LAB_036afadc;
      uVar23 = *(uint *)(lVar42 + lVar50 * 0x5c + 0x40);
      if (*(uint *)(lVar32 + 0x18) <= uVar23) goto LAB_036afbe8;
      lVar42 = lVar42 + lVar50 * 0x5c;
      *(undefined4 *)(lVar42 + 0x74) = *(undefined4 *)(lVar32 + (long)(int)uVar23 * 0x178 + 0x128);
      *(undefined4 *)(lVar42 + 0x78) = *(undefined4 *)(lVar42 + 0x4c);
    }
  }
  if (*(int *)(*(long *)
                Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
              + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar29 = FUN_02fddb80(uVar45,0);
  if (((((uVar29 & 1) == 0) && (1 < uVar45 - 0x2010)) && (uVar45 != 0xad)) && (uVar45 != 0x2d)) {
    if (bVar14) {
      if (((uVar28 != 1) && ((int)uVar90 < (int)(*(uint *)(lVar30 + 0x18) - 1))) &&
         (((int)uVar90 < (int)*puVar3 && ((uVar45 == 0x2019 || (uVar45 == 0x27)))))) {
        if (*(uint *)(lVar30 + 0x18) <= uVar28 - 2) goto LAB_036afbe8;
        uVar11 = *(undefined2 *)(lVar30 + lVar31 + -0x438);
        if (*(int *)(*(long *)
                      Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar29 = FUN_02fddb80(uVar11,0);
        if ((uVar29 & 1) != 0) {
          if (*(uint *)(lVar30 + 0x18) <= uVar28) goto LAB_036afbe8;
          uVar11 = *(undefined2 *)(lVar30 + lVar31 + -0x148);
          if (*(int *)(*(long *)
                        Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                      + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          uVar29 = FUN_02fddb80(uVar11,0);
          if ((uVar29 & 1) != 0) goto LAB_036ae3a0;
        }
      }
    }
    else {
      if (uVar28 != 1) {
LAB_036aeea4:
        bVar14 = false;
        goto LAB_036ae3a8;
      }
      if (*(int *)(*(long *)
                    Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                  + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar29 = FUN_02fddab4(uVar45,0);
      if ((uVar29 & 1) != 0) {
        if (*(int *)(*(long *)
                      Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar29 = FUN_02fdb080(uVar45,0);
        if (((uVar45 != 0x200b) && ((uVar29 & 1) == 0)) && (*puVar3 != 1)) goto LAB_036aeea4;
      }
    }
    if (uVar90 == *puVar3 - 1) {
      if (*(int *)(*(long *)
                    Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                  + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar29 = FUN_02fddb80(uVar45,0);
      iVar26 = (int)fStack0000000000000138;
      if ((uVar29 & 1) == 0) goto LAB_036ae6a8;
    }
    else {
LAB_036ae6a8:
      iVar26 = uVar28 - 2;
    }
    lVar32 = *plVar5;
    if (lVar32 == 0) goto LAB_036afadc;
    lVar42 = *(long *)(lVar32 + 0x40);
    if (lVar42 == 0) goto LAB_036afadc;
    uVar23 = *(uint *)(lVar32 + 0x24);
    iVar27 = *(int *)(lVar42 + 0x18);
    if (iVar27 < (int)(uVar23 + 1)) {
      if (*(int *)(*(long *)PTR_DAT_03d9c8a0 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      FUN_01f52be8((long *)(lVar32 + 0x40),iVar27 + 1,*(undefined8 *)PTR_DAT_03d9c898);
      lVar32 = *plVar5;
      if (lVar32 == 0) goto LAB_036afadc;
    }
    lVar32 = *(long *)(lVar32 + 0x40);
    if (lVar32 == 0) goto LAB_036afadc;
    if (*(uint *)(lVar32 + 0x18) <= uVar23) goto LAB_036afbe8;
    lVar32 = lVar32 + (long)(int)uVar23 * 0x18;
    *(long **)(lVar32 + 0x20) = unaff_x19;
    *(float *)(lVar32 + 0x28) = fStack0000000000000174;
    *(int *)(lVar32 + 0x2c) = iVar26;
    *(int *)(lVar32 + 0x30) = (iVar26 - (int)fStack0000000000000174) + 1;
    thunk_FUN_01b4f09c();
    lVar32 = unaff_x19[0x6d];
    if (lVar32 == 0) goto LAB_036afadc;
    lVar42 = *(long *)(lVar32 + 0x50);
    *(int *)(lVar32 + 0x24) = *(int *)(lVar32 + 0x24) + 1;
    if (lVar42 == 0) goto LAB_036afadc;
    if (*(uint *)(lVar42 + 0x18) <= uVar22) goto LAB_036afbe8;
    lVar42 = lVar42 + lVar50 * 0x5c;
    bVar14 = false;
    fStack00000000000000e4 = (float)((int)fStack00000000000000e4 + 1);
    *(int *)(lVar42 + 0x30) = *(int *)(lVar42 + 0x30) + 1;
  }
  else {
    if (!bVar14) {
      fStack0000000000000174 = (float)uVar90;
    }
    if (uVar90 == *puVar3 - 1) {
      lVar32 = *plVar5;
      if (lVar32 == 0) goto LAB_036afadc;
      lVar42 = *(long *)(lVar32 + 0x40);
      if (lVar42 == 0) goto LAB_036afadc;
      uVar23 = *(uint *)(lVar32 + 0x24);
      iVar26 = *(int *)(lVar42 + 0x18);
      if (iVar26 < (int)(uVar23 + 1)) {
        if (*(int *)(*(long *)PTR_DAT_03d9c8a0 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        FUN_01f52be8((long *)(lVar32 + 0x40),iVar26 + 1,*(undefined8 *)PTR_DAT_03d9c898);
        lVar32 = *plVar5;
        if (lVar32 == 0) goto LAB_036afadc;
      }
      lVar32 = *(long *)(lVar32 + 0x40);
      if (lVar32 == 0) goto LAB_036afadc;
      if (*(uint *)(lVar32 + 0x18) <= uVar23) goto LAB_036afbe8;
      lVar32 = lVar32 + (long)(int)uVar23 * 0x18;
      *(long **)(lVar32 + 0x20) = unaff_x19;
      *(float *)(lVar32 + 0x28) = fStack0000000000000174;
      *(uint *)(lVar32 + 0x2c) = uVar90;
      *(uint *)(lVar32 + 0x30) = uVar28 - (int)fStack0000000000000174;
      thunk_FUN_01b4f09c();
      lVar32 = unaff_x19[0x6d];
      if (lVar32 == 0) goto LAB_036afadc;
      lVar42 = *(long *)(lVar32 + 0x50);
      *(int *)(lVar32 + 0x24) = *(int *)(lVar32 + 0x24) + 1;
      if (lVar42 == 0) goto LAB_036afadc;
      if (*(uint *)(lVar42 + 0x18) <= uVar22) goto LAB_036afbe8;
      lVar42 = lVar42 + lVar50 * 0x5c;
      fStack00000000000000e4 = (float)((int)fStack00000000000000e4 + 1);
      *(int *)(lVar42 + 0x30) = *(int *)(lVar42 + 0x30) + 1;
    }
LAB_036ae3a0:
    bVar14 = true;
  }
LAB_036ae3a8:
  if ((*plVar5 == 0) || (lVar32 = *(long *)(*plVar5 + 0x38), lVar32 == 0)) goto LAB_036afadc;
  uVar23 = *(uint *)(lVar32 + 0x18);
  if (uVar23 <= uVar90) goto LAB_036afbe8;
  if ((*(byte *)(lVar32 + lVar35 * 0x178 + 400) >> 2 & 1) == 0) {
    if (bVar19) {
LAB_036ae3d8:
      if (uVar23 <= uVar28 - 2) goto LAB_036afbe8;
      lVar50 = *unaff_x19;
      uVar23 = *(uint *)(lVar32 + lVar31 + -0x330);
      uVar70 = *(undefined4 *)(lVar32 + lVar31 + -0x2f8);
LAB_036ae924:
      pcVar44 = *(code **)(lVar50 + 0x908);
LAB_036ae92c:
      uVar76 = (ulong)uVar23;
      uVar71 = (ulong)(uint)fStack0000000000000078;
      uVar34 = (ulong)(uint)fStack000000000000007c;
      (*pcVar44)(fVar57,uVar71,uVar34,uVar76,fStack0000000000000114,0,fStack0000000000000094,uVar70)
      ;
      puVar15 = PTR_DAT_03d9c920;
      lVar32 = *(long *)PTR_DAT_03d9c920;
      if (*(int *)(lVar32 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar32 = *(long *)puVar15;
      }
LAB_036ae980:
      bVar19 = false;
      fVar55 = 0.0;
      fStack0000000000000114 = *(float *)(*(long *)(lVar32 + 0xb8) + 0x15a8);
      fStack0000000000000110 = 0.0;
    }
    else {
LAB_036ae88c:
      bVar19 = false;
    }
  }
  else {
    lVar32 = lVar32 + lVar35 * 0x178;
    iVar26 = *(int *)(lVar32 + 0x68);
    *(int *)(lVar32 + 0x16c) = iVar20;
    if ((((int)unaff_x19[0x65] < (int)uVar90) || ((int)unaff_x19[0x66] < (int)uVar22)) ||
       (((int)unaff_x19[0x5c] == 5 && (iVar26 + 1 != (int)unaff_x19[0x67])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (*(int *)(*(long *)
                  Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar29 = FUN_02fdb080(uVar45,0);
    if ((uVar45 != 0x200b) && ((uVar29 & 1) == 0)) {
      lVar32 = *plVar5;
      if ((lVar32 == 0) || (lVar50 = *(long *)(lVar32 + 0x38), lVar50 == 0)) goto LAB_036afadc;
      if (*(uint *)(lVar50 + 0x18) <= uVar90) goto LAB_036afbe8;
      fVar72 = *(float *)(lVar50 + lVar35 * 0x178 + 0x160);
      if (fVar55 <= fVar72) {
        fVar55 = fVar72;
      }
      if (fStack0000000000000110 <= ABS(fVar59)) {
        fStack0000000000000110 = ABS(fVar59);
      }
      if (iVar26 != iStack0000000000000074) {
        if (*(int *)(*(long *)PTR_DAT_03d9c920 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          lVar32 = *plVar5;
          if (lVar32 == 0) goto LAB_036afadc;
          lVar50 = *(long *)(*(long *)PTR_DAT_03d9c920 + 0xb8);
        }
        else {
          lVar50 = *(long *)(*(long *)PTR_DAT_03d9c920 + 0xb8);
        }
        fStack0000000000000114 = *(float *)(lVar50 + 0x15a8);
      }
      lVar32 = *(long *)(lVar32 + 0x38);
      if (lVar32 == 0) goto LAB_036afadc;
      if (*(uint *)(lVar32 + 0x18) <= uVar90) goto LAB_036afbe8;
      if (unaff_x19[0x1f] == 0) goto LAB_036afadc;
      fVar89 = *(float *)(lVar32 + lVar35 * 0x178 + 0x14c);
      fVar72 = (float)FUN_0396ace4(unaff_x19[0x1f] + 0x50,0);
      fVar89 = fVar89 + fVar55 * fVar72;
      if (fVar89 <= fStack0000000000000114) {
        fStack0000000000000114 = fVar89;
      }
      uVar71 = (ulong)(uint)fStack0000000000000114;
      iStack0000000000000074 = iVar26;
    }
    if (!bVar19) {
      bVar19 = false;
      if ((((uVar45 == 0xd) || ((uVar45 & 0xfffe) == 10)) || ((int)uVar24 < (int)uVar90)) ||
         ((bool)(bVar1 ^ 1))) goto LAB_036ae99c;
      if (uVar90 == uVar24) {
        if (*(int *)(*(long *)
                      Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar29 = FUN_02fdea78(uVar45,0);
        if ((uVar29 & 1) != 0) goto LAB_036ae88c;
      }
      if ((*plVar5 == 0) || (lVar32 = *(long *)(*plVar5 + 0x38), lVar32 == 0)) goto LAB_036afadc;
      if (*(uint *)(lVar32 + 0x18) <= uVar90) goto LAB_036afbe8;
      lVar32 = lVar32 + lVar35 * 0x178;
      fStack0000000000000094 = *(float *)(lVar32 + 0x160);
      fVar57 = *(float *)(lVar32 + 0x11c);
      uVar34 = (ulong)(uint)fVar57;
      bVar19 = fVar55 != 0.0;
      fVar72 = fStack0000000000000094;
      if (bVar19) {
        fVar72 = fVar55;
      }
      fVar55 = fVar72;
      uVar21 = *(undefined4 *)(lVar32 + 0x168);
      fStack000000000000007c = 0.0;
      fVar72 = fVar59;
      if (bVar19) {
        fVar72 = fStack0000000000000110;
      }
      uVar71 = (ulong)(uint)fVar72;
      fStack0000000000000078 = fStack0000000000000114;
      fStack0000000000000110 = fVar72;
    }
    if (*puVar3 == 1) {
      if ((*plVar5 != 0) && (lVar32 = *(long *)(*plVar5 + 0x38), lVar32 != 0)) {
        if (uVar90 < *(uint *)(lVar32 + 0x18)) {
          lVar32 = lVar32 + lVar35 * 0x178;
          lVar50 = *unaff_x19;
          uVar23 = *(uint *)(lVar32 + 0x128);
          uVar70 = *(undefined4 *)(lVar32 + 0x160);
          goto LAB_036ae924;
        }
        goto LAB_036afbe8;
      }
      goto LAB_036afadc;
    }
    if ((uVar90 == uVar7) || ((int)uVar24 <= (int)uVar90)) {
      if (*(int *)(*(long *)
                    Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                  + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar29 = FUN_02fdb080(uVar45,0);
      if ((*plVar5 != 0) && (lVar32 = *(long *)(*plVar5 + 0x38), lVar32 != 0)) {
        lVar50 = lVar35;
        uVar23 = uVar90;
        if (uVar45 == 0x200b || (uVar29 & 1) != 0) {
          lVar50 = lVar54;
          uVar23 = uVar24;
        }
        if (uVar23 < *(uint *)(lVar32 + 0x18)) {
          lVar32 = lVar32 + lVar50 * 0x178;
          uVar23 = *(uint *)(lVar32 + 0x128);
          uVar70 = *(undefined4 *)(lVar32 + 0x160);
          pcVar44 = *(code **)(*unaff_x19 + 0x908);
          goto LAB_036ae92c;
        }
        goto LAB_036afbe8;
      }
      goto LAB_036afadc;
    }
    if (!bVar1) {
      if ((*plVar5 != 0) && (lVar32 = *(long *)(*plVar5 + 0x38), lVar32 != 0)) {
        uVar23 = *(uint *)(lVar32 + 0x18);
        goto LAB_036ae3d8;
      }
      goto LAB_036afadc;
    }
    if ((int)uVar90 < (int)(*puVar3 - 1)) {
      if ((*plVar5 == 0) || (lVar32 = *(long *)(*plVar5 + 0x38), lVar32 == 0)) goto LAB_036afadc;
      if (*(uint *)(lVar32 + 0x18) <= uVar28) goto LAB_036afbe8;
      uVar29 = FUN_036c0e18(uVar21,*(undefined4 *)(lVar32 + lVar31),0);
      if ((uVar29 & 1) == 0) {
        if ((*plVar5 != 0) && (lVar32 = *(long *)(*plVar5 + 0x38), lVar32 != 0)) {
          if (uVar90 < *(uint *)(lVar32 + 0x18)) {
            lVar32 = lVar32 + lVar35 * 0x178;
            uVar76 = (ulong)*(uint *)(lVar32 + 0x128);
            uVar34 = (ulong)(uint)fStack000000000000007c;
            uVar71 = (ulong)(uint)fStack0000000000000078;
            (**(code **)(*unaff_x19 + 0x908))
                      (fVar57,uVar71,uVar34,uVar76,fStack0000000000000114,0,fStack0000000000000094,
                       *(undefined4 *)(lVar32 + 0x160));
            puVar15 = PTR_DAT_03d9c920;
            lVar32 = *(long *)PTR_DAT_03d9c920;
            if (*(int *)(lVar32 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
              lVar32 = *(long *)puVar15;
            }
            goto LAB_036ae980;
          }
          goto LAB_036afbe8;
        }
        goto LAB_036afadc;
      }
    }
    bVar19 = true;
  }
LAB_036ae99c:
  if ((*plVar5 == 0) || (lVar32 = *(long *)(*plVar5 + 0x38), lVar32 == 0)) goto LAB_036afadc;
  if (*(uint *)(lVar32 + 0x18) <= uVar90) goto LAB_036afbe8;
  if (lVar48 == 0) goto LAB_036afadc;
  uVar23 = *(uint *)(lVar32 + lVar35 * 0x178 + 400);
  fVar72 = (float)FUN_0396ad04(lVar48 + 0x50,0);
  if ((uVar23 >> 6 & 1) == 0) {
    if ((_fStack0000000000000138 & 0x100000000) != 0) {
      if ((*plVar5 == 0) || (lVar32 = *(long *)(*plVar5 + 0x38), lVar32 == 0)) goto LAB_036afadc;
      if (*(uint *)(lVar32 + 0x18) <= uVar28 - 2) goto LAB_036afbe8;
      uVar23 = *(uint *)(lVar32 + lVar31 + -0x330);
      fVar60 = *(float *)(lVar32 + lVar31 + -0x30c);
      pcVar44 = *(code **)(*unaff_x19 + 0x908);
LAB_036aef4c:
      uVar76 = (ulong)uVar23;
      uVar71 = (ulong)(uint)fStack00000000000000a4;
      uVar34 = (ulong)(uint)fStack00000000000000a0;
      (*pcVar44)(fVar56,uVar71,uVar34,uVar76,fVar58 * fVar72 + fVar60,0,fVar58,fVar58);
    }
LAB_036aef80:
    _fStack0000000000000138 = _fStack0000000000000138 & 0xffffffff;
  }
  else {
    lVar32 = *plVar5;
    if ((lVar32 == 0) || (lVar50 = *(long *)(lVar32 + 0x38), lVar50 == 0)) goto LAB_036afadc;
    if (*(uint *)(lVar50 + 0x18) <= uVar90) goto LAB_036afbe8;
    *(int *)(lVar50 + lVar35 * 0x178 + 0x174) = iVar20;
    if ((((int)unaff_x19[0x65] < (int)uVar90) || ((int)unaff_x19[0x66] < (int)uVar22)) ||
       (((int)unaff_x19[0x5c] == 5 &&
        (*(int *)(lVar50 + lVar35 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x67])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((((uVar45 == 0xd) || ((uVar45 & 0xfffe) == 10)) || ((int)uVar24 < (int)uVar90)) ||
       ((_fStack0000000000000138 & 0x100000000) != 0 || !bVar1)) {
LAB_036aeb20:
      if ((_fStack0000000000000138 & 0x100000000) == 0) goto LAB_036aef80;
    }
    else {
      if (uVar90 == uVar24) {
        if (*(int *)(*(long *)
                      Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar29 = FUN_02fdea78(uVar45,0);
        if ((uVar29 & 1) != 0) goto LAB_036aeb20;
        lVar32 = *plVar5;
        if (lVar32 == 0) goto LAB_036afadc;
      }
      lVar32 = *(long *)(lVar32 + 0x38);
      if (lVar32 == 0) goto LAB_036afadc;
      if (*(uint *)(lVar32 + 0x18) <= uVar90) goto LAB_036afbe8;
      lVar32 = lVar32 + lVar35 * 0x178;
      fStack000000000000004c = *(float *)(lVar32 + 0x60);
      fStack00000000000000a4 = *(float *)(lVar32 + 0x14c);
      uVar71 = (ulong)(uint)fStack00000000000000a4;
      fVar56 = *(float *)(lVar32 + 0x11c);
      uVar34 = (ulong)(uint)fVar56;
      fVar58 = *(float *)(lVar32 + 0x160);
      uStack0000000000000040 = (ulong)(uint)fStack00000000000000a4;
      fStack00000000000000a4 = fVar72 * fVar58 + fStack00000000000000a4;
      fStack00000000000000a0 = 0.0;
    }
    uVar23 = *puVar3;
    if (uVar23 == 1) {
LAB_036aec60:
      if ((*plVar5 != 0) && (lVar32 = *(long *)(*plVar5 + 0x38), lVar32 != 0)) {
        if (uVar90 < *(uint *)(lVar32 + 0x18)) {
          lVar32 = lVar32 + lVar35 * 0x178;
          lVar54 = *unaff_x19;
          uVar23 = *(uint *)(lVar32 + 0x128);
          fVar60 = *(float *)(lVar32 + 0x14c);
LAB_036aec8c:
          pcVar44 = *(code **)(lVar54 + 0x908);
          goto LAB_036aef4c;
        }
        goto LAB_036afbe8;
      }
      goto LAB_036afadc;
    }
    if (uVar90 == uVar7) {
      if (*(int *)(*(long *)
                    Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                  + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar29 = FUN_02fdb080(uVar45,0);
      if ((*plVar5 != 0) && (lVar32 = *(long *)(*plVar5 + 0x38), lVar32 != 0)) {
        uVar23 = *(uint *)(lVar32 + 0x18);
        if (uVar45 == 0x200b || (uVar29 & 1) != 0) {
          if (uVar23 <= uVar24) goto LAB_036afbe8;
        }
        else {
LAB_036aef20:
          lVar54 = lVar35;
          if (uVar23 <= uVar90) goto LAB_036afbe8;
        }
LAB_036aef28:
        lVar32 = lVar32 + lVar54 * 0x178;
        fVar60 = *(float *)(lVar32 + 0x14c);
        uVar23 = *(uint *)(lVar32 + 0x128);
        pcVar44 = *(code **)(*unaff_x19 + 0x908);
        goto LAB_036aef4c;
      }
      goto LAB_036afadc;
    }
    if ((int)uVar90 < (int)uVar23) {
      lVar32 = *plVar5;
      if ((lVar32 != 0) && (lVar50 = *(long *)(lVar32 + 0x38), lVar50 != 0)) {
        if (uVar28 < *(uint *)(lVar50 + 0x18)) {
          if (*(float *)(lVar50 + lVar31 + -0x108) == fStack000000000000004c) {
            fVar89 = *(float *)(lVar50 + lVar31 + -0x1c);
            if (*(int *)(*(long *)PTR_DAT_03d9c880 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            uVar71 = uStack0000000000000040;
            uVar29 = FUN_036c122c(fVar60 + fVar89,uStack0000000000000040,0);
            if ((uVar29 & 1) != 0) {
              uVar23 = *puVar3;
              goto LAB_036aed7c;
            }
            lVar32 = *plVar5;
            if (lVar32 == 0) goto LAB_036afadc;
          }
          lVar32 = *(long *)(lVar32 + 0x38);
          if (lVar32 != 0) {
            uVar23 = *(uint *)(lVar32 + 0x18);
            if ((int)uVar90 <= (int)uVar24) goto LAB_036aef20;
            if (uVar24 < uVar23) goto LAB_036aef28;
            goto LAB_036afbe8;
          }
          goto LAB_036afadc;
        }
        goto LAB_036afbe8;
      }
      goto LAB_036afadc;
    }
LAB_036aed7c:
    if ((int)uVar90 < (int)uVar23) {
      iVar26 = FUN_03922ce0(lVar48,0);
      if (*(uint *)(lVar30 + 0x18) <= uVar28) goto LAB_036afbe8;
      lVar32 = *(long *)(lVar30 + lVar31 + -0x130);
      if (lVar32 == 0) goto LAB_036afadc;
      iVar27 = FUN_03922ce0(lVar32,0);
      if (iVar26 != iVar27) goto LAB_036aec60;
    }
    if (!bVar1) {
      if ((*plVar5 != 0) && (lVar32 = *(long *)(*plVar5 + 0x38), lVar32 != 0)) {
        if (uVar28 - 2 < *(uint *)(lVar32 + 0x18)) {
          lVar54 = *unaff_x19;
          uVar23 = *(uint *)(lVar32 + lVar31 + -0x330);
          fVar60 = *(float *)(lVar32 + lVar31 + -0x30c);
          goto LAB_036aec8c;
        }
        goto LAB_036afbe8;
      }
      goto LAB_036afadc;
    }
    _fStack0000000000000138 = CONCAT44(1,fStack0000000000000138);
  }
  if ((*plVar5 == 0) || (lVar32 = *(long *)(*plVar5 + 0x38), lVar32 == 0)) goto LAB_036afadc;
  uVar23 = (uint)*(undefined8 *)(lVar32 + 0x18);
  if (uVar23 <= uVar90) goto LAB_036afbe8;
  if ((*(byte *)(lVar32 + lVar35 * 0x178 + 0x191) >> 1 & 1) == 0) {
    if (bVar13) {
      uVar34 = (ulong)(uint)fStack00000000000000c4;
      uVar71 = (ulong)(uint)fStack00000000000000ec;
      uVar76 = (ulong)(uint)fStack00000000000000d4;
      (**(code **)(*unaff_x19 + 0x918))(fStack00000000000000e8,uVar71,uVar34,uVar76,fVar81,uVar34);
    }
LAB_036aefe8:
    bVar13 = false;
  }
  else {
    if ((((int)unaff_x19[0x65] < (int)uVar90) || ((int)unaff_x19[0x66] < (int)uVar22)) ||
       (((int)unaff_x19[0x5c] == 5 &&
        (*(int *)(lVar32 + lVar35 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x67])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar13) {
      if ((((uVar45 == 0xd) || ((uVar45 & 0xfffe) == 10)) || ((int)uVar24 < (int)uVar90)) ||
         (!bVar1)) goto LAB_036aefe8;
      if (uVar90 == uVar24) {
        if (*(int *)(*(long *)
                      Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar29 = FUN_02fdea78(uVar45,0);
        if ((uVar29 & 1) != 0) goto LAB_036aefe8;
      }
      puVar15 = PTR_DAT_03d9c920;
      lVar54 = *(long *)PTR_DAT_03d9c920;
      if (*(int *)(lVar54 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar54 = *(long *)puVar15;
      }
      if ((*plVar5 == 0) || (lVar32 = *(long *)(*plVar5 + 0x38), lVar32 == 0)) goto LAB_036afadc;
      uVar23 = (uint)*(undefined8 *)(lVar32 + 0x18);
      if (uVar23 <= uVar90) goto LAB_036afbe8;
      lVar54 = *(long *)(lVar54 + 0xb8);
      lVar48 = lVar32 + lVar35 * 0x178;
      in_stack_00001078 = *(undefined8 *)(lVar48 + 0x184);
      in_stack_00001070 = *(undefined8 *)(lVar48 + 0x17c);
      fStack00000000000000e8 = *(float *)(lVar54 + 0x1598);
      fStack00000000000000ec = *(float *)(lVar54 + 0x159c);
      in_stack_00001080 = *(float *)(lVar48 + 0x18c);
      fStack00000000000000d4 = *(float *)(lVar54 + 0x15a0);
      fVar81 = *(float *)(lVar54 + 0x15a4);
      fStack00000000000000c4 = 0.0;
    }
    if (uVar23 <= uVar90) goto LAB_036afbe8;
    lVar32 = lVar32 + lVar35 * 0x178;
    fVar72 = *(float *)(lVar32 + 0x128);
    fVar77 = *(float *)(lVar32 + 0x188);
    uVar33 = *(undefined8 *)(lVar32 + 0x17c);
    fVar91 = *(float *)(lVar32 + 0x184);
    uVar37 = *(undefined8 *)(lVar32 + 0x184);
    fVar80 = *(float *)(lVar32 + 0x18c);
    fVar60 = *(float *)(lVar32 + 0x11c);
    fVar89 = *(float *)(lVar32 + 0x148);
    fVar78 = *(float *)(lVar32 + 0x150);
    in_stack_00000198 = uVar33;
    fStack00000000000001a0 = fVar91;
    fStack00000000000001a4 = fVar77;
    in_stack_000001a8 = fVar80;
    in_stack_000001b0 = in_stack_00001070;
    in_stack_000001b8 = in_stack_00001078;
    in_stack_000001c0 = in_stack_00001080;
    uVar29 = FUN_036c2228(&stack0x000001b0,&stack0x00000198,0);
    lVar32 = *(long *)PTR_DAT_03d9c888;
    if ((uVar29 & 1) == 0) {
      if (*(int *)(lVar32 + 0xe0) == 0) {
        thunk_FUN_01ac7298(lVar32);
      }
      fVar72 = fVar72 + (float)in_stack_00001078;
      uVar34 = (ulong)(uint)fVar72;
      fVar60 = fVar60 - (float)((ulong)in_stack_00001070 >> 0x20);
      fVar89 = fVar89 + (float)((ulong)in_stack_00001078 >> 0x20);
      uVar76 = (ulong)(uint)fVar89;
      if (fVar60 <= fStack00000000000000e8) {
        fStack00000000000000e8 = fVar60;
      }
      if (fVar78 - in_stack_00001080 <= fStack00000000000000ec) {
        fStack00000000000000ec = fVar78 - in_stack_00001080;
      }
      if (fStack00000000000000d4 <= fVar72) {
        fStack00000000000000d4 = fVar72;
      }
      uVar71 = (ulong)(uint)fStack00000000000000d4;
      if (fVar81 <= fVar89) {
        fVar81 = fVar89;
      }
    }
    else {
      if (*(int *)(lVar32 + 0xe0) == 0) {
        thunk_FUN_01ac7298(lVar32);
      }
      fVar60 = (fVar60 + (fStack00000000000000d4 - (float)in_stack_00001078)) * 0.5;
      uVar76 = (ulong)(uint)fVar60;
      if (fVar78 <= fStack00000000000000ec) {
        fStack00000000000000ec = fVar78;
      }
      uVar71 = (ulong)(uint)fStack00000000000000ec;
      uVar34 = (ulong)(uint)fStack00000000000000c4;
      if (fVar81 <= fVar89) {
        fVar81 = fVar89;
      }
      (**(code **)(*unaff_x19 + 0x918))(fStack00000000000000e8,uVar71,uVar34,uVar76,fVar81,uVar34);
      fStack00000000000000ec = fVar78 - fVar80;
      fStack00000000000000d4 = fVar72 + fVar91;
      fStack00000000000000c4 = 0.0;
      fStack00000000000000e8 = fVar60;
      in_stack_00001070 = uVar33;
      in_stack_00001078 = uVar37;
      in_stack_00001080 = fVar80;
      fVar81 = fVar89 + fVar77;
    }
    if (((*puVar3 == 1) || (uVar90 == uVar7)) || (((int)uVar24 <= (int)uVar90 || (!bVar1)))) {
      uVar34 = (ulong)(uint)fStack00000000000000c4;
      uVar71 = (ulong)(uint)fStack00000000000000ec;
      uVar76 = (ulong)(uint)fStack00000000000000d4;
      (**(code **)(*unaff_x19 + 0x918))(fStack00000000000000e8,uVar71,uVar34,uVar76,fVar81,uVar34);
      bVar13 = false;
    }
    else {
      bVar13 = true;
    }
  }
  uVar90 = *puVar3;
  lVar31 = lVar31 + 0x178;
  _fStack0000000000000138 = CONCAT44(fStack000000000000013c,(int)fStack0000000000000138 + 1);
  bVar1 = (int)uVar90 <= (int)uVar28;
  uVar28 = uVar28 + 1;
  uVar23 = uVar22;
  if (bVar1) goto LAB_036af4fc;
  goto LAB_036ad4b0;
LAB_036af4fc:
  lVar30 = *plVar5;
  if (lVar30 != 0) {
    iVar20 = uVar22 + 1;
    plVar53 = (long *)Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_69__;
LAB_036af524:
    *(uint *)(lVar30 + 0x18) = uVar90;
    lVar31 = unaff_x19[0xd4];
    *(int *)(lVar30 + 0x2c) = iVar20;
    if ((int)uVar90 < 1 || fStack00000000000000e4 == 0.0) {
      fStack00000000000000e4 = 1.4013e-45;
    }
    *(int *)(lVar30 + 0x1c) = (int)lVar31;
    *(float *)(lVar30 + 0x24) = fStack00000000000000e4;
    *(int *)(lVar30 + 0x30) = (int)unaff_x19[0x96] + 1;
    if (((int)unaff_x19[99] != 0xff) ||
       (uVar29 = (**(code **)(*unaff_x19 + 0x1c8))(), (uVar29 & 1) == 0)) {
LAB_036acd60:
      if (*(int *)(*(long *)Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_45__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      FUN_036c03d8();
      return;
    }
    lVar30 = unaff_x19[0xdf];
    if (lVar30 != 0) {
      (**(code **)(lVar30 + 0x18))
                (*(undefined8 *)(lVar30 + 0x40),*plVar5,*(undefined8 *)(lVar30 + 0x28));
    }
    if (unaff_x19[0xe5] == 0) goto LAB_036afadc;
    iVar20 = FUN_03afacb8(unaff_x19[0xe5],0);
    if (iVar20 != 0x19) {
      lVar30 = unaff_x19[0xe5];
      if (lVar30 == 0) goto LAB_036afadc;
      uVar90 = FUN_03afacb8(lVar30,0);
      FUN_03afacf4(lVar30,uVar90 | 0x19,0);
    }
    if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
      if ((*plVar5 == 0) || (lVar30 = *(long *)(*plVar5 + 0x60), lVar30 == 0)) goto LAB_036afadc;
      if (*(int *)(*plVar53 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      if (*(int *)(lVar30 + 0x18) == 0) goto LAB_036afbe8;
      FUN_036fa678(lVar30 + 0x20,1,0);
    }
    if (unaff_x19[0x74] != 0) {
      FUN_03904fd4(unaff_x19[0x74],0);
      if ((unaff_x19[0x6d] != 0) && (lVar30 = *(long *)(unaff_x19[0x6d] + 0x60), lVar30 != 0)) {
        if (*(int *)(lVar30 + 0x18) == 0) {
LAB_036afbe8:
                    /* WARNING: Subroutine does not return */
          FUN_01b48180();
        }
        if (unaff_x19[0x74] != 0) {
          FUN_0390262c(unaff_x19[0x74],*(undefined8 *)(lVar30 + 0x30),0);
          if ((unaff_x19[0x6d] != 0) && (lVar30 = *(long *)(unaff_x19[0x6d] + 0x60), lVar30 != 0)) {
            if (*(int *)(lVar30 + 0x18) == 0) goto LAB_036afbe8;
            if (unaff_x19[0x74] != 0) {
              FUN_03902830(unaff_x19[0x74],*(undefined8 *)(lVar30 + 0x48),0);
              if ((unaff_x19[0x6d] != 0) &&
                 (lVar30 = *(long *)(unaff_x19[0x6d] + 0x60), lVar30 != 0)) {
                if (*(int *)(lVar30 + 0x18) == 0) goto LAB_036afbe8;
                if (unaff_x19[0x74] != 0) {
                  FUN_039028dc(unaff_x19[0x74],*(undefined8 *)(lVar30 + 0x50),0);
                  if ((unaff_x19[0x6d] != 0) &&
                     (lVar30 = *(long *)(unaff_x19[0x6d] + 0x60), lVar30 != 0)) {
                    if (*(int *)(lVar30 + 0x18) == 0) goto LAB_036afbe8;
                    if (unaff_x19[0x74] != 0) {
                      FUN_03902a3c(unaff_x19[0x74],*(undefined8 *)(lVar30 + 0x58),0);
                      if (unaff_x19[0x74] != 0) {
                        FUN_03904ddc(unaff_x19[0x74],0);
                        if (unaff_x19[0xe4] != 0) {
                          FUN_03af8c9c(unaff_x19[0xe4],unaff_x19[0x74],0);
                          if (unaff_x19[0xe4] != 0) {
                            uVar37 = FUN_03af892c(unaff_x19[0xe4],0);
                            if (unaff_x19[0xe4] != 0) {
                              uVar90 = FUN_03af8794(unaff_x19[0xe4],0);
                              lVar30 = *plVar5;
                              if (lVar30 != 0) {
                                lVar32 = 0;
                                lVar31 = 0;
                                do {
                                  uVar29 = lVar31 + 1;
                                  if ((long)*(int *)(lVar30 + 0x34) <= (long)uVar29)
                                  goto LAB_036acd60;
                                  lVar30 = *(long *)(lVar30 + 0x60);
                                  if (lVar30 == 0) break;
                                  if (*(int *)(*plVar53 + 0xe0) == 0) {
                                    thunk_FUN_01ac7298();
                                  }
                                  if (*(uint *)(lVar30 + 0x18) <= uVar29) goto LAB_036afbe8;
                                  FUN_036fa544(lVar30 + lVar32 + 0x70,0);
                                  lVar30 = unaff_x19[0xe1];
                                  if (lVar30 == 0) break;
                                  if (*(uint *)(lVar30 + 0x18) <= uVar29) goto LAB_036afbe8;
                                  uVar33 = *(undefined8 *)(lVar30 + lVar31 * 8 + 0x28);
                                  if (*(int *)(*(long *)
                                                Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                                              + 0xe0) == 0) {
                                    thunk_FUN_01ac7298();
                                  }
                                  uVar36 = FUN_03922f24(uVar33,0,0);
                                  if ((uVar36 & 1) == 0) {
                                    if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
                                      if ((*plVar5 == 0) ||
                                         (lVar30 = *(long *)(*plVar5 + 0x60), lVar30 == 0)) break;
                                      if (*(int *)(*plVar53 + 0xe0) == 0) {
                                        thunk_FUN_01ac7298();
                                      }
                                      if (*(uint *)(lVar30 + 0x18) <= uVar29) goto LAB_036afbe8;
                                      FUN_036fa678(lVar30 + lVar32 + 0x70,1,0);
                                    }
                                    lVar30 = unaff_x19[0xe1];
                                    if (lVar30 == 0) break;
                                    if (*(uint *)(lVar30 + 0x18) <= uVar29) goto LAB_036afbe8;
                                    lVar30 = *(long *)(lVar30 + lVar31 * 8 + 0x28);
                                    if (lVar30 == 0) break;
                                    lVar30 = FUN_03702ba4(lVar30,0);
                                    if ((*plVar5 == 0) ||
                                       (lVar54 = *(long *)(*plVar5 + 0x60), lVar54 == 0)) break;
                                    if (*(uint *)(lVar54 + 0x18) <= uVar29) goto LAB_036afbe8;
                                    if (lVar30 == 0) break;
                                    FUN_0390262c(lVar30,*(undefined8 *)(lVar54 + lVar32 + 0x80),0);
                                    lVar30 = unaff_x19[0xe1];
                                    if (lVar30 == 0) break;
                                    if (*(uint *)(lVar30 + 0x18) <= uVar29) goto LAB_036afbe8;
                                    lVar30 = *(long *)(lVar30 + lVar31 * 8 + 0x28);
                                    if (lVar30 == 0) break;
                                    lVar30 = FUN_03702ba4(lVar30,0);
                                    if ((*plVar5 == 0) ||
                                       (lVar54 = *(long *)(*plVar5 + 0x60), lVar54 == 0)) break;
                                    if (*(uint *)(lVar54 + 0x18) <= uVar29) goto LAB_036afbe8;
                                    if (lVar30 == 0) break;
                                    FUN_03902830(lVar30,*(undefined8 *)(lVar54 + lVar32 + 0x98),0);
                                    lVar30 = unaff_x19[0xe1];
                                    if (lVar30 == 0) break;
                                    if (*(uint *)(lVar30 + 0x18) <= uVar29) goto LAB_036afbe8;
                                    lVar30 = *(long *)(lVar30 + lVar31 * 8 + 0x28);
                                    if (lVar30 == 0) break;
                                    lVar30 = FUN_03702ba4(lVar30,0);
                                    if ((*plVar5 == 0) ||
                                       (lVar54 = *(long *)(*plVar5 + 0x60), lVar54 == 0)) break;
                                    if (*(uint *)(lVar54 + 0x18) <= uVar29) goto LAB_036afbe8;
                                    if (lVar30 == 0) break;
                                    FUN_039028dc(lVar30,*(undefined8 *)(lVar54 + lVar32 + 0xa0),0);
                                    lVar30 = unaff_x19[0xe1];
                                    if (lVar30 == 0) break;
                                    if (*(uint *)(lVar30 + 0x18) <= uVar29) goto LAB_036afbe8;
                                    lVar30 = *(long *)(lVar30 + lVar31 * 8 + 0x28);
                                    if (lVar30 == 0) break;
                                    lVar30 = FUN_03702ba4(lVar30,0);
                                    if ((*plVar5 == 0) ||
                                       (lVar54 = *(long *)(*plVar5 + 0x60), lVar54 == 0)) break;
                                    if (*(uint *)(lVar54 + 0x18) <= uVar29) goto LAB_036afbe8;
                                    if (lVar30 == 0) break;
                                    FUN_03902a3c(lVar30,*(undefined8 *)(lVar54 + lVar32 + 0xa8),0);
                                    lVar30 = unaff_x19[0xe1];
                                    if (lVar30 == 0) break;
                                    if (*(uint *)(lVar30 + 0x18) <= uVar29) goto LAB_036afbe8;
                                    lVar30 = *(long *)(lVar30 + lVar31 * 8 + 0x28);
                                    if ((lVar30 == 0) ||
                                       (lVar30 = FUN_03702ba4(lVar30,0), lVar30 == 0)) break;
                                    FUN_03904ddc(lVar30,0);
                                    lVar30 = unaff_x19[0xe1];
                                    if (lVar30 == 0) break;
                                    if (*(uint *)(lVar30 + 0x18) <= uVar29) goto LAB_036afbe8;
                                    lVar30 = *(long *)(lVar30 + lVar31 * 8 + 0x28);
                                    if (lVar30 == 0) break;
                                    lVar30 = FUN_039add2c(lVar30,0);
                                    lVar54 = unaff_x19[0xe1];
                                    if (lVar54 == 0) break;
                                    if (*(uint *)(lVar54 + 0x18) <= uVar29) goto LAB_036afbe8;
                                    lVar54 = *(long *)(lVar54 + lVar31 * 8 + 0x28);
                                    if ((lVar54 == 0) ||
                                       (uVar33 = FUN_03702ba4(lVar54,0), lVar30 == 0)) break;
                                    FUN_03af8c9c(lVar30,uVar33,0);
                                    lVar30 = unaff_x19[0xe1];
                                    if (lVar30 == 0) break;
                                    if (*(uint *)(lVar30 + 0x18) <= uVar29) goto LAB_036afbe8;
                                    lVar30 = *(long *)(lVar30 + lVar31 * 8 + 0x28);
                                    if ((lVar30 == 0) ||
                                       (lVar30 = FUN_039add2c(lVar30,0), lVar30 == 0)) break;
                                    FUN_03af8894(uVar37,uVar71,uVar34,uVar76,lVar30,0);
                                    lVar30 = unaff_x19[0xe1];
                                    if (lVar30 == 0) break;
                                    if (*(uint *)(lVar30 + 0x18) <= uVar29) goto LAB_036afbe8;
                                    lVar30 = *(long *)(lVar30 + lVar31 * 8 + 0x28);
                                    if ((lVar30 == 0) ||
                                       (lVar30 = FUN_039add2c(lVar30,0), lVar30 == 0)) break;
                                    FUN_03af87d0(lVar30,uVar90 & 1,0);
                                    lVar30 = unaff_x19[0xe1];
                                    if (lVar30 == 0) break;
                                    if (*(uint *)(lVar30 + 0x18) <= uVar29) goto LAB_036afbe8;
                                    plVar51 = *(long **)(lVar30 + lVar31 * 8 + 0x28);
                                    uVar28 = (**(code **)(*unaff_x19 + 0x2b8))();
                                    if (plVar51 == (long *)0x0) break;
                                    (**(code **)(*plVar51 + 0x2c8))
                                              (plVar51,uVar28 & 1,*(undefined8 *)(*plVar51 + 0x2d0))
                                    ;
                                  }
                                  lVar30 = *plVar5;
                                  lVar31 = lVar31 + 1;
                                  lVar32 = lVar32 + 0x50;
                                } while (lVar30 != 0);
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
    }
  }
LAB_036afadc:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


