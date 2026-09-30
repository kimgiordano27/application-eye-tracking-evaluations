/*
FUNCTION_NAME: Unity.VisualScripting.AdditionHandler.<>c$$<.ctor>b__0_92
ENTRY_POINT: 067d61e4
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 133
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;data_collection_or_telemetry;possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_7;weak_xr_or_state_hits_11;validity_or_gating_hits_21;paired_field_refs_with_eye_source;telemetry_or_network_hits_2;functionality_permission_setup;functionality_data_collection_or_telemetry_hits_2;functionality_possible_biometrics_hits_14
*/


void Unity_VisualScripting_AdditionHandler_<>c__<_ctor>b__0_92(void)

{
  long *plVar1;
  long *plVar2;
  uint *puVar3;
  long *plVar4;
  long *plVar5;
  uint uVar6;
  int iVar7;
  byte bVar8;
  undefined2 uVar9;
  uint uVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  undefined *puVar14;
  undefined *puVar15;
  bool bVar16;
  bool bVar17;
  int iVar18;
  undefined4 uVar19;
  uint uVar20;
  int iVar21;
  uint uVar22;
  uint uVar23;
  int iVar24;
  ulong uVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  undefined8 uVar29;
  ulong uVar30;
  long lVar31;
  undefined8 uVar32;
  undefined1 uVar33;
  char cVar34;
  int in_w8;
  uint uVar35;
  float *pfVar36;
  undefined4 *puVar37;
  uint uVar38;
  float *pfVar39;
  code *pcVar40;
  uint uVar41;
  uint uVar42;
  long lVar43;
  long lVar44;
  long lVar45;
  long lVar46;
  long *unaff_x19;
  uint uVar47;
  long *unaff_x22;
  long unaff_x24;
  long *plVar48;
  long *plVar49;
  long lVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
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
  undefined4 uVar65;
  ulong uVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  undefined4 uVar71;
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
  float fVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  uint uStack000000000000002c;
  int iStack0000000000000054;
  float fStack0000000000000064;
  float fStack0000000000000068;
  float fStack000000000000006c;
  float fStack000000000000008c;
  float fStack0000000000000098;
  float fStack000000000000009c;
  undefined8 uStack00000000000000b0;
  float fStack00000000000000b8;
  float fStack00000000000000bc;
  float fStack00000000000000cc;
  float fStack00000000000000dc;
  float fStack00000000000000e0;
  float fStack00000000000000e4;
  undefined8 uStack00000000000000f0;
  float fStack00000000000000fc;
  float fStack0000000000000100;
  float fStack0000000000000104;
  float fStack0000000000000118;
  float fStack000000000000011c;
  float fStack0000000000000120;
  float fStack0000000000000124;
  float fStack0000000000000134;
  float fStack000000000000016c;
  float fStack000000000000017c;
  undefined8 in_stack_00000188;
  float fStack0000000000000190;
  float fStack0000000000000194;
  float in_stack_00000198;
  undefined8 in_stack_000001a0;
  undefined8 in_stack_000001a8;
  float in_stack_000001b0;
  undefined8 in_stack_000001c0;
  undefined8 in_stack_000001c8;
  undefined4 uStack00000000000001d0;
  undefined8 in_stack_000001d8;
  undefined8 in_stack_000001e0;
  undefined8 in_stack_000001e8;
  long in_stack_00000fa8;
  uint in_stack_0000103c;
  uint uVar86;
  undefined8 in_stack_00001060;
  undefined8 in_stack_00001068;
  float in_stack_00001070;
  undefined8 in_stack_00001078;
  float fVar87;
  
  if (in_w8 == 0) {
    thunk_FUN_032cd7c0();
  }
  puVar14 = PTR_DAT_072798f8;
  uVar25 = FUN_06bece64();
  if ((uVar25 & 1) == 0) {
    if (unaff_x19[0x1f] == 0) goto LAB_067dd33c;
    lVar26 = FUN_067fd3b4(unaff_x19[0x1f],0);
    if (lVar26 != 0) {
      if (unaff_x19[0x6d] != 0) {
        FUN_06839390(unaff_x19[0x6d],0);
      }
      lVar26 = unaff_x19[0x8f];
      if ((lVar26 != 0) && (*(long *)(lVar26 + 0x18) != 0)) {
        if ((int)*(long *)(lVar26 + 0x18) == 0) goto LAB_067dd448;
        if (*(int *)(lVar26 + 0x20) != 0) {
          plVar49 = unaff_x19 + 0x20;
          unaff_x19[0x20] = unaff_x19[0x1f];
          thunk_FUN_0333a630(plVar49);
          plVar1 = unaff_x19 + 0x23;
          unaff_x19[0x23] = unaff_x19[0x22];
          thunk_FUN_0333a630();
          *(undefined4 *)(unaff_x19 + 0x24) = 0;
          puVar14 = 
          Method_System_Collections_Generic_HashSet<OvrAvatarShaderNameUtils_KnownShader>_Add__;
          uVar19 = 0;
          if (*(int *)(*(long *)
                        Method_System_Collections_Generic_HashSet<OvrAvatarShaderNameUtils_KnownShader>_Add__
                      + 0xe0) == 0) {
            thunk_FUN_032cd7c0(*(long *)
                                Method_System_Collections_Generic_HashSet<OvrAvatarShaderNameUtils_KnownShader>_Add__
                               ,0);
            uVar19 = (undefined4)unaff_x19[0x24];
          }
          in_stack_000001d8 = 0;
          _uStack00000000000001d0 = 0;
          in_stack_000001e8 = 0;
          in_stack_000001e0 = 0;
          in_stack_000001c8 = 0;
          in_stack_000001c0 = 0;
          FUN_067e59d0((int)unaff_x19[0xc3],&stack0x000001c0,uVar19,unaff_x19[0x20],0,
                       unaff_x19[0x23],0);
          lVar26 = *(long *)(*(long *)puVar14 + 0xb8);
          uVar32 = *(undefined8 *)
                    Method_System_Collections_Generic_HashSet<OVRManager_EventListener>_GetEnumerator__
          ;
          *(undefined8 *)(unaff_x24 + 0xe8) = in_stack_000001c8;
          *(undefined8 *)(unaff_x24 + 0xe0) = in_stack_000001c0;
          *(undefined8 *)(unaff_x24 + 0xf8) = in_stack_000001d8;
          *(ulong *)(unaff_x24 + 0xf0) = _uStack00000000000001d0;
          *(undefined8 *)(unaff_x24 + 0x108) = in_stack_000001e8;
          *(undefined8 *)(unaff_x24 + 0x100) = in_stack_000001e0;
          FUN_04a0e820(lVar26 + 0x10,&stack0x00001090,uVar32);
          plVar2 = unaff_x19 + 0xd3;
          unaff_x19[0xd3] = unaff_x19[0x36];
          thunk_FUN_0333a630(plVar2);
          lVar26 = unaff_x19[0x77];
          if (*(int *)(*unaff_x22 + 0xe0) == 0) {
            thunk_FUN_032cd7c0();
          }
          uVar25 = FUN_06be9890(lVar26,0,0);
          if ((uVar25 & 1) != 0) {
            if (unaff_x19[0x77] == 0) goto LAB_067dd33c;
            FUN_06832c24(unaff_x19[0x77],0);
          }
          if (unaff_x19[0x1f] != 0) {
            lVar26 = unaff_x19[0x92];
            fVar84 = *(float *)((long)unaff_x19 + 0x1e4);
            iVar18 = FUN_06c5195c(unaff_x19[0x1f] + 0x50,0);
            if (unaff_x19[0x1f] != 0) {
              fVar51 = (float)FUN_06c5196c(unaff_x19[0x1f] + 0x50,0);
              fVar75 = *(float *)((long)unaff_x19 + 0x1e4);
              *(undefined4 *)((long)unaff_x19 + 0x404) = 0x3f800000;
              *(float *)(unaff_x19 + 0x3d) = fVar75;
              puVar14 = 
              Method_System_Collections_Generic_HashSet<OVRPlugin_SpaceComponentType>_Add__;
              fVar69 = DAT_013a0014;
              fVar57 = DAT_013a0014;
              if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
                fVar57 = 1.0;
              }
              FUN_04a0f5c4(fVar75,unaff_x19 + 0x3e,
                           *(undefined8 *)
                            Method_System_Collections_Generic_HashSet<OVRPlugin_SpaceComponentType>_Add__
                          );
              *(uint *)((long)unaff_x19 + 0x25c) = *(uint *)(unaff_x19 + 0x4b);
              if ((*(uint *)(unaff_x19 + 0x4b) & 1) == 0) {
                uVar19 = (undefined4)unaff_x19[0x42];
              }
              else {
                uVar19 = 700;
              }
              *(undefined4 *)((long)unaff_x19 + 0x214) = uVar19;
              FUN_04a0e200(unaff_x19 + 0x43,uVar19,
                           *(undefined8 *)
                            Method_System_Collections_Generic_HashSet<OVRPermissionsRequester_Permission>_Add__
                          );
              FUN_0683a1c4(unaff_x19 + 0x4c,0);
              *(undefined4 *)(unaff_x19 + 0x4f) = *(undefined4 *)((long)unaff_x19 + 0x26c);
              FUN_04a0e200(unaff_x19 + 0x50,*(undefined4 *)((long)unaff_x19 + 0x26c),
                           *(undefined8 *)
                            Method_System_Collections_Generic_HashSet<OVRManager_EventListener>__ctor__
                          );
              *(undefined4 *)((long)unaff_x19 + 0x61c) = 0;
              FUN_04a0f5b8(unaff_x19 + 0xc4,
                           *(undefined8 *)
                            Method_System_Collections_Generic_HashSet<CAPI_ovrAvatar2NodeId>_Contains__
                          );
              if (DAT_076cd829 == '\0') {
                thunk_FUN_032e1da0(PTR_DAT_072795b0);
                DAT_076cd829 = '\x01';
              }
              pfVar36 = *(float **)(*(long *)PTR_DAT_072795b0 + 0xb8);
              fStack000000000000006c = *pfVar36;
              fStack0000000000000064 = pfVar36[1];
              fStack0000000000000068 = pfVar36[2];
              uVar19 = FUN_05cb346c((int)unaff_x19[0x29],*(undefined4 *)((long)unaff_x19 + 0x14c),
                                    (int)unaff_x19[0x2a],*(undefined4 *)((long)unaff_x19 + 0x154),0)
              ;
              *(undefined4 *)((long)unaff_x19 + 0x144) = uVar19;
              *(undefined4 *)((long)unaff_x19 + 0x4ec) = uVar19;
              *(undefined4 *)(unaff_x19 + 0x2b) = uVar19;
              *(undefined4 *)((long)unaff_x19 + 0x15c) = uVar19;
              puVar15 = Method_System_Collections_Generic_HashSet<OVRManager_EventListener>_Add__;
              FUN_04a0cf9c(unaff_x19 + 0x9e,uVar19,
                           *(undefined8 *)
                            Method_System_Collections_Generic_HashSet<OVRManager_EventListener>_Add__
                          );
              FUN_04a0cf9c(unaff_x19 + 0xa2,*(undefined4 *)((long)unaff_x19 + 0x4ec),
                           *(undefined8 *)puVar15);
              FUN_04a0cf9c(unaff_x19 + 0xa6,*(undefined4 *)((long)unaff_x19 + 0x4ec),
                           *(undefined8 *)puVar15);
              puVar15 = Method_System_Collections_Generic_HashSet<CAPI_ovrAvatar2JointType>_Remove__
              ;
              uVar19 = *(undefined4 *)((long)unaff_x19 + 0x4ec);
              if (*(int *)(*(long *)
                            Method_System_Collections_Generic_HashSet<CAPI_ovrAvatar2JointType>_Remove__
                          + 0xe0) == 0) {
                thunk_FUN_032cd7c0();
              }
              if (DAT_076e0b47 == '\0') {
                thunk_FUN_032e1da0(
                                  Method_System_Collections_Generic_HashSet<CAPI_ovrAvatar2JointType>_Remove__
                                  );
                DAT_076e0b47 = '\x01';
              }
              lVar27 = *(long *)puVar15;
              if (*(int *)(lVar27 + 0xe0) == 0) {
                thunk_FUN_032cd7c0();
                lVar27 = *(long *)puVar15;
              }
              puVar37 = *(undefined4 **)(lVar27 + 0xb8);
              in_stack_000001c0 = 0;
              in_stack_000001c8 = 0;
              _uStack00000000000001d0 = _uStack00000000000001d0 & 0xffffffff00000000;
              FUN_067f71a4(*puVar37,puVar37[1],puVar37[2],puVar37[3],&stack0x000001c0,uVar19,0);
              uVar32 = *(undefined8 *)
                        Method_System_Collections_Generic_HashSet<OVRFaceExpressions_FaceExpression>_Contains__
              ;
              *(undefined8 *)(unaff_x24 + 0xe8) = in_stack_000001c8;
              *(undefined8 *)(unaff_x24 + 0xe0) = in_stack_000001c0;
              FUN_04a0d57c(unaff_x19 + 0xaa,&stack0x00001090,uVar32);
              unaff_x19[0xb0] = 0;
              thunk_FUN_0333a630(unaff_x19 + 0xb0,0);
              FUN_04a0f008(unaff_x19 + 0xb1,0,
                           *(undefined8 *)
                            Method_System_Collections_Generic_HashSet<OVRPermissionsRequester_Permission>__ctor__
                          );
              if (unaff_x19[0x20] != 0) {
                bVar8 = *(byte *)(unaff_x19[0x20] + 0x1b8);
                *(uint *)(unaff_x19 + 0xbe) = (uint)bVar8;
                FUN_04a0dc74(unaff_x19 + 0xba,bVar8,
                             *(undefined8 *)
                              Method_System_Collections_Generic_HashSet<OVRManager_EventListener>_Remove__
                            );
                FUN_04a0dc68(unaff_x19 + 0xbf,
                             *(undefined8 *)
                              Method_System_Collections_Generic_HashSet<OVRAnchor_TrackableType>_Contains__
                            );
                *(undefined1 *)((long)unaff_x19 + 0x474) = 0;
                *(undefined4 *)(unaff_x19 + 0x9b) = 0;
                *(undefined4 *)(unaff_x19 + 0x58) = 0xc6fffe00;
                if (unaff_x19[0x20] != 0) {
                  fVar52 = (float)FUN_06c5197c(unaff_x19[0x20] + 0x50,0);
                  if (*plVar49 != 0) {
                    fVar53 = (float)FUN_06c5198c(*plVar49 + 0x50,0);
                    if (*plVar49 != 0) {
                      fVar54 = (float)FUN_06c519cc(*plVar49 + 0x50,0);
                      *(undefined8 *)((long)unaff_x19 + 0x2ac) = 0;
                      *(undefined4 *)(unaff_x19 + 200) = 0;
                      unaff_x19[0x81] = 0;
                      FUN_04a0f5c4(0,unaff_x19 + 0x82,*(undefined8 *)puVar14);
                      *(undefined1 *)(unaff_x19 + 0x86) = 0;
                      *(undefined4 *)((long)unaff_x19 + 0x494) = 0;
                      *(undefined4 *)(unaff_x19 + 0x93) = *(undefined4 *)((long)unaff_x19 + 0x324);
                      *(undefined8 *)((long)unaff_x19 + 0x49c) = 0;
                      *(undefined4 *)((long)unaff_x19 + 0x4a4) = 0;
                      puVar14 = 
                      Method_System_Collections_Generic_HashSet<OvrAvatarShaderNameUtils_KnownShader>_Add__
                      ;
                      lVar27 = *(long *)
                                Method_System_Collections_Generic_HashSet<OvrAvatarShaderNameUtils_KnownShader>_Add__
                      ;
                      if (*(int *)(lVar27 + 0xe0) == 0) {
                        thunk_FUN_032cd7c0();
                        lVar27 = *(long *)puVar14;
                      }
                      lVar28 = unaff_x19[0x6d];
                      uVar32 = *(undefined8 *)(*(long *)(lVar27 + 0xb8) + 0x15a8);
                      unaff_x19[0x95] = 0;
                      unaff_x19[0x9a] = 0;
                      *(undefined1 *)((long)unaff_x19 + 0x2c4) = 0;
                      lVar27 = NEON_rev64(uVar32,4);
                      *(undefined4 *)((long)unaff_x19 + 0x2e4) = 0xffffffff;
                      unaff_x19[0x99] = lVar27;
                      *(undefined4 *)(unaff_x19 + 0x96) = 0;
                      if ((lVar28 != 0) && (*(long *)(lVar28 + 0x58) != 0)) {
                        uVar38 = (int)unaff_x19[0x67] - 1;
                        uVar86 = *(int *)(*(long *)(lVar28 + 0x58) + 0x18) - 1;
                        if ((int)uVar38 <= (int)uVar86) {
                          uVar86 = uVar38;
                        }
                        uVar6 = 0;
                        if (-1 < (int)uVar38) {
                          uVar6 = uVar86;
                        }
                        FUN_068399c0(lVar28,0);
                        fVar55 = *(float *)(unaff_x19 + 0x68);
                        *(undefined4 *)(unaff_x19 + 0x6c) = 0xbf800000;
                        fVar67 = *(float *)((long)unaff_x19 + 0x344);
                        unaff_x19[0x6a] = 0;
                        lVar27 = *(long *)puVar14;
                        fVar56 = *(float *)((long)unaff_x19 + 0x34c);
                        fVar85 = *(float *)(unaff_x19 + 0x6b);
                        fVar72 = *(float *)((long)unaff_x19 + 0x35c);
                        if (*(int *)(lVar27 + 0xe0) == 0) {
                          thunk_FUN_032cd7c0();
                          lVar27 = *(long *)puVar14;
                        }
                        *(undefined8 *)((long)unaff_x19 + 0x4dc) =
                             *(undefined8 *)(*(long *)(lVar27 + 0xb8) + 0x1598);
                        *(undefined8 *)((long)unaff_x19 + 0x4e4) =
                             *(undefined8 *)(*(long *)(lVar27 + 0xb8) + 0x15a0);
                        if (unaff_x19[0x6d] != 0) {
                          FUN_06839830(unaff_x19[0x6d],0);
                          *(undefined4 *)((long)unaff_x19 + 0x4bc) = 0;
                          *(undefined4 *)((long)unaff_x19 + 0x4c4) = 0;
                          *(undefined8 *)((long)unaff_x19 + 0x4b4) = 0;
                          fVar87 = 0.0;
                          bVar17 = false;
                          *(undefined1 *)((long)unaff_x19 + 0x33c) = 0;
                          *(undefined1 *)((long)unaff_x19 + 0x2da) = 0;
                          FUN_06838b38(&stack0x00001078,0xffffffff,0,0);
                          FUN_0682230c();
                          FUN_0682230c();
                          FUN_0682230c();
                          FUN_0682230c();
                          FUN_0682230c();
                          FUN_04a0fbc4(*(long *)(*(long *)puVar14 + 0xb8) + 0x11f0,
                                       *(undefined8 *)
                                        Method_System_Collections_Generic_HashSet<OVRAnchor_TrackableType>_Add__
                                      );
                          fVar80 = DAT_013a0604;
                          fVar76 = DAT_0139ff50;
                          uVar86 = 0;
                          lVar27 = unaff_x19[0x8f];
                          if (lVar27 != 0) {
                            puVar3 = (uint *)((long)unaff_x19 + 0x494);
                            plVar4 = unaff_x19 + 0xc9;
                            uVar38 = (int)lVar26 - 1;
                            lVar26 = (long)unaff_x19 + 0x434;
                            fVar52 = fVar52 - (fVar53 - fVar54);
                            fStack000000000000016c = 0.0;
                            if (fVar85 <= 0.0) {
                              fVar85 = 0.0;
                            }
                            if (fVar72 <= 0.0) {
                              fVar72 = 0.0;
                            }
                            fVar84 = (fVar84 / (float)iVar18) * fVar51 * fVar57;
                            uVar25 = (ulong)(uint)fVar84;
                            fVar85 = fVar85 + DAT_0139fcd0;
                            uVar66 = (ulong)(uint)fVar85;
                            fVar51 = fVar72 + DAT_0139fcd0;
                            fVar57 = fVar75 * DAT_013a0604 * fVar57;
                            uStack000000000000002c = 0;
                            bVar13 = false;
                            iVar18 = 0;
                            plVar5 = unaff_x19 + 0x6d;
                            bVar12 = true;
                            bVar8 = 1;
                            fStack0000000000000100 = fVar85;
                            uVar22 = 0;
LAB_067d6a30:
                            fVar75 = (float)uVar25;
                            if ((int)*(uint *)(lVar27 + 0x18) <= (int)uVar86) {
LAB_067da694:
                              fVar84 = (float)uVar66;
                              if (((char)unaff_x19[0x47] != '\0') &&
                                 (fVar84 = DAT_013a007c,
                                 DAT_013a007c <
                                 *(float *)((long)unaff_x19 + 0x23c) - *(float *)(unaff_x19 + 0x48))
                                 ) {
                                fVar84 = *(float *)((long)unaff_x19 + 0x1e4);
                                fVar57 = *(float *)((long)unaff_x19 + 0x254);
                                if ((fVar84 < fVar57) &&
                                   (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
                                  if (*(float *)((long)unaff_x19 + 0x2d4) <
                                      *(float *)(unaff_x19 + 0x5a) / 100.0) {
                                    *(undefined4 *)((long)unaff_x19 + 0x2d4) = 0;
                                  }
                                  fVar69 = (*(float *)((long)unaff_x19 + 0x23c) - fVar84) * 0.5;
                                  if (fVar69 <= DAT_013a0300) {
                                    fVar69 = DAT_013a0300;
                                  }
                                  *(float *)(unaff_x19 + 0x48) = fVar84;
                                  fVar69 = (fVar84 + fVar69) * 20.0 + 0.5;
                                  fVar84 = DAT_013a07c8;
                                  if (fVar69 != INFINITY) {
                                    fVar84 = (float)(int)fVar69 / 20.0;
                                  }
                                  if (fVar57 <= fVar84) {
                                    fVar84 = fVar57;
                                  }
LAB_067da750:
                                  *(float *)((long)unaff_x19 + 0x1e4) = fVar84;
                                  return;
                                }
                              }
                              *(undefined1 *)((long)unaff_x19 + 0x24c) = 1;
                              if ((int)unaff_x19[0x49] <= *(int *)((long)unaff_x19 + 0x244)) {
                                uVar32 = FUN_05920f80((long)unaff_x19 + 0x244,0);
                                uVar29 = FUN_05935e28((long)unaff_x19 + 0x1e4,0);
                                uVar32 = FUN_057ab20c(*(undefined8 *)
                                                                                                              
                                                  Method_System_Linq_Expressions_Interpreter_HybridReferenceDictionary<LabelTarget,_LabelInfo>_ContainsKey__
                                                  ,uVar32,*(undefined8 *)
                                                                                                                      
                                                  Method_System_Collections_Generic_HashSet<OvrSkinningTypes_Handle>_Add__
                                                  ,uVar29,0);
                                if (*(int *)(*(long *)PTR_DAT_072798f8 + 0xe0) == 0) {
                                  thunk_FUN_032cd7c0(*(long *)PTR_DAT_072798f8);
                                }
                                FUN_06bb23f0(uVar32,0);
                              }
                              puVar14 = 
                              Method_System_Collections_Generic_HashSet<OvrAvatarShaderNameUtils_KnownShader>_Add__
                              ;
                              if ((*puVar3 == 0) || ((*puVar3 == 1 && (uVar22 == 3)))) {
                                (**(code **)(*unaff_x19 + 0x958))();
                                goto LAB_067da818;
                              }
                              lVar26 = *(long *)
                                        Method_System_Collections_Generic_HashSet<OvrAvatarShaderNameUtils_KnownShader>_Add__
                              ;
                              if (*(int *)(lVar26 + 0xe0) == 0) {
                                thunk_FUN_032cd7c0();
                                lVar26 = *(long *)puVar14;
                              }
                              plVar49 = (long *)PTR_DAT_072a6408;
                              lVar26 = **(long **)(lVar26 + 0xb8);
                              if (lVar26 == 0) goto LAB_067dd33c;
                              if (*(uint *)(lVar26 + 0x18) <= *(uint *)(unaff_x19 + 0xd1))
                              goto LAB_067dd448;
                              iVar18 = *(int *)(lVar26 + (long)(int)*(uint *)(unaff_x19 + 0xd1) *
                                                         0x38 + 0x54) << 2;
                              if ((*plVar5 == 0) ||
                                 (lVar26 = *(long *)(*plVar5 + 0x60), lVar26 == 0))
                              goto LAB_067dd33c;
                              if (*(int *)(*(long *)PTR_DAT_072a6408 + 0xe0) == 0) {
                                thunk_FUN_032cd7c0();
                              }
                              if (*(int *)(lVar26 + 0x18) == 0) goto LAB_067dd448;
                              FUN_0682f464(lVar26 + 0x20,0,0);
                              if (DAT_076cd829 == '\0') {
                                thunk_FUN_032e1da0(PTR_DAT_072795b0);
                                DAT_076cd829 = '\x01';
                              }
                              iVar21 = (int)unaff_x19[0x4e];
                              fStack00000000000000fc =
                                   **(float **)(*(long *)PTR_DAT_072795b0 + 0xb8);
                              uStack00000000000000f0 =
                                   *(undefined8 *)
                                    (*(float **)(*(long *)PTR_DAT_072795b0 + 0xb8) + 1);
                              lVar26 = unaff_x19[0xeb];
                              uStack00000000000000b0 = uStack00000000000000f0;
                              fStack00000000000000bc = fStack00000000000000fc;
                              if (iVar21 < 0x401) {
                                if (iVar21 == 0x100) {
                                  if (lVar26 == 0) goto LAB_067dd33c;
                                  if (*(uint *)(lVar26 + 0x18) < 2) goto LAB_067dd448;
                                  uVar32 = *(undefined8 *)(lVar26 + 0x30);
                                  if ((int)unaff_x19[0x5c] == 5) {
                                    if ((*plVar5 == 0) ||
                                       (lVar27 = *(long *)(*plVar5 + 0x58), lVar27 == 0))
                                    goto LAB_067dd33c;
                                    if (*(uint *)(lVar27 + 0x18) <= uVar6) goto LAB_067dd448;
                                    fVar84 = *(float *)(lVar27 + (long)(int)uVar6 * 0x14 + 0x28);
                                  }
                                  else {
                                    fVar84 = *(float *)(unaff_x19 + 0x97);
                                  }
                                  fStack00000000000000bc = fVar55 + 0.0 + *(float *)(lVar26 + 0x2c);
                                  fVar84 = (0.0 - fVar84) - fVar67;
                                }
                                else if (iVar21 == 0x200) {
                                  if (lVar26 == 0) goto LAB_067dd33c;
                                  if ((*(int *)(lVar26 + 0x18) == 1) ||
                                     (*(int *)(lVar26 + 0x18) == 0)) goto LAB_067dd448;
                                  fStack00000000000000bc =
                                       (*(float *)(lVar26 + 0x20) + *(float *)(lVar26 + 0x2c)) * 0.5
                                  ;
                                  uVar32 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar26 + 0x24)
                                                            >> 0x20) +
                                                    (float)((ulong)*(undefined8 *)(lVar26 + 0x30) >>
                                                           0x20)) * 0.5,
                                                    ((float)*(undefined8 *)(lVar26 + 0x24) +
                                                    (float)*(undefined8 *)(lVar26 + 0x30)) * 0.5);
                                  if ((int)unaff_x19[0x5c] == 5) {
                                    if ((*plVar5 == 0) ||
                                       (lVar26 = *(long *)(*plVar5 + 0x58), lVar26 == 0))
                                    goto LAB_067dd33c;
                                    if (*(uint *)(lVar26 + 0x18) <= uVar6) goto LAB_067dd448;
                                    lVar26 = lVar26 + (long)(int)uVar6 * 0x14;
                                    fStack00000000000000bc = fVar55 + 0.0 + fStack00000000000000bc;
                                    fVar84 = ((fVar67 + *(float *)(lVar26 + 0x28) +
                                              *(float *)(lVar26 + 0x30)) - fVar56) * -0.5 + 0.0;
                                  }
                                  else {
                                    fStack00000000000000bc = fVar55 + 0.0 + fStack00000000000000bc;
                                    fVar84 = ((fVar67 + *(float *)(unaff_x19 + 0x97) + fVar87) -
                                             fVar56) * -0.5 + 0.0;
                                  }
                                }
                                else {
                                  if (iVar21 != 0x400) goto LAB_067dad6c;
                                  if (lVar26 == 0) goto LAB_067dd33c;
                                  if (*(int *)(lVar26 + 0x18) == 0) goto LAB_067dd448;
                                  uVar32 = *(undefined8 *)(lVar26 + 0x24);
                                  if ((int)unaff_x19[0x5c] == 5) {
                                    if ((*plVar5 == 0) ||
                                       (lVar27 = *(long *)(*plVar5 + 0x58), lVar27 == 0))
                                    goto LAB_067dd33c;
                                    if (*(uint *)(lVar27 + 0x18) <= uVar6) goto LAB_067dd448;
                                    fVar87 = *(float *)(lVar27 + (long)(int)uVar6 * 0x14 + 0x30);
                                  }
                                  fStack00000000000000bc = fVar55 + 0.0 + *(float *)(lVar26 + 0x20);
                                  fVar84 = fVar56 + (0.0 - fVar87);
                                }
LAB_067dad5c:
                                uStack00000000000000b0 =
                                     CONCAT44((float)((ulong)uVar32 >> 0x20) + 0.0,
                                              (float)uVar32 + fVar84);
                              }
                              else if (iVar21 == 0x800) {
                                if (lVar26 == 0) goto LAB_067dd33c;
                                if ((*(int *)(lVar26 + 0x18) == 1) || (*(int *)(lVar26 + 0x18) == 0)
                                   ) goto LAB_067dd448;
                                fVar84 = fVar55 + 0.0 +
                                         (*(float *)(lVar26 + 0x20) + *(float *)(lVar26 + 0x2c)) *
                                         0.5;
                                uStack00000000000000b0 =
                                     CONCAT44(((float)((ulong)*(undefined8 *)(lVar26 + 0x24) >> 0x20
                                                      ) +
                                              (float)((ulong)*(undefined8 *)(lVar26 + 0x30) >> 0x20)
                                              ) * 0.5 + 0.0,
                                              ((float)*(undefined8 *)(lVar26 + 0x24) +
                                              (float)*(undefined8 *)(lVar26 + 0x30)) * 0.5 + 0.0);
                                fStack00000000000000bc = fVar84;
                              }
                              else {
                                if (iVar21 == 0x1000) {
                                  if (lVar26 != 0) {
                                    if ((*(int *)(lVar26 + 0x18) != 1) &&
                                       (*(int *)(lVar26 + 0x18) != 0)) {
                                      uVar32 = CONCAT44(((float)((ulong)*(undefined8 *)
                                                                         (lVar26 + 0x24) >> 0x20) +
                                                        (float)((ulong)*(undefined8 *)
                                                                        (lVar26 + 0x30) >> 0x20)) *
                                                        0.5,((float)*(undefined8 *)(lVar26 + 0x24) +
                                                            (float)*(undefined8 *)(lVar26 + 0x30)) *
                                                            0.5);
                                      fStack00000000000000bc =
                                           fVar55 + 0.0 +
                                           (*(float *)(lVar26 + 0x20) + *(float *)(lVar26 + 0x2c)) *
                                           0.5;
                                      fVar84 = 0.0 - ((fVar67 + *(float *)(unaff_x19 + 0x9d) +
                                                      *(float *)(unaff_x19 + 0x9c)) - fVar56) * 0.5;
                                      goto LAB_067dad5c;
                                    }
                                    goto LAB_067dd448;
                                  }
                                  goto LAB_067dd33c;
                                }
                                if (iVar21 == 0x2000) {
                                  if (lVar26 == 0) goto LAB_067dd33c;
                                  if ((*(int *)(lVar26 + 0x18) == 1) ||
                                     (*(int *)(lVar26 + 0x18) == 0)) goto LAB_067dd448;
                                  fVar84 = 0.0 - ((*(float *)((long)unaff_x19 + 0x4bc) - fVar67) -
                                                 fVar56) * 0.5;
                                  uStack00000000000000b0 =
                                       CONCAT44(((float)((ulong)*(undefined8 *)(lVar26 + 0x24) >>
                                                        0x20) +
                                                (float)((ulong)*(undefined8 *)(lVar26 + 0x30) >>
                                                       0x20)) * 0.5 + 0.0,
                                                ((float)*(undefined8 *)(lVar26 + 0x24) +
                                                (float)*(undefined8 *)(lVar26 + 0x30)) * 0.5 +
                                                fVar84);
                                  fStack00000000000000bc =
                                       fVar55 + 0.0 +
                                       (*(float *)(lVar26 + 0x20) + *(float *)(lVar26 + 0x2c)) * 0.5
                                  ;
                                }
                              }
LAB_067dad6c:
                              lVar26 = FUN_067e7008();
                              if (lVar26 != 0) {
                                FUN_06bf6348(lVar26,0);
                                *(float *)((long)unaff_x19 + 0x6e4) = fVar84;
                                uVar19 = FUN_05cb346c(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0)
                                ;
                                FUN_05cb346c(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
                                if (*(int *)(*(long *)
                                              Method_System_Collections_Generic_HashSet<CAPI_ovrAvatar2JointType>_Remove__
                                            + 0xe0) == 0) {
                                  thunk_FUN_032cd7c0(*(long *)
                                                  Method_System_Collections_Generic_HashSet<CAPI_ovrAvatar2JointType>_Remove__
                                                  );
                                }
                                if (DAT_076e0b47 == '\0') {
                                  thunk_FUN_032e1da0(
                                                  Method_System_Collections_Generic_HashSet<CAPI_ovrAvatar2JointType>_Remove__
                                                  );
                                  DAT_076e0b47 = '\x01';
                                }
                                puVar14 = 
                                Method_System_Collections_Generic_HashSet<CAPI_ovrAvatar2JointType>_Remove__
                                ;
                                lVar26 = *(long *)
                                          Method_System_Collections_Generic_HashSet<CAPI_ovrAvatar2JointType>_Remove__
                                ;
                                if (*(int *)(lVar26 + 0xe0) == 0) {
                                  thunk_FUN_032cd7c0();
                                  lVar26 = *(long *)puVar14;
                                }
                                puVar37 = *(undefined4 **)(lVar26 + 0xb8);
                                FUN_067f71a4(*puVar37,puVar37[1],puVar37[2],puVar37[3],
                                             &stack0x00001060,0x4000ffff,0);
                                if (*(int *)(*(long *)
                                              Method_System_Collections_Generic_HashSet<OvrAvatarShaderNameUtils_KnownShader>_Add__
                                            + 0xe0) == 0) {
                                  thunk_FUN_032cd7c0();
                                }
                                lVar26 = *plVar5;
                                if (lVar26 != 0) {
                                  uVar86 = *puVar3;
                                  if ((int)uVar86 < 1) {
                                    fStack00000000000000dc = 0.0;
                                    iVar18 = 0;
                                    goto LAB_067dcf3c;
                                  }
                                  lVar26 = *(long *)(lVar26 + 0x38);
                                  if (lVar26 != 0) {
                                    bVar17 = false;
                                    bVar11 = false;
                                    bVar12 = false;
                                    fStack0000000000000124 = 0.0;
                                    bVar13 = false;
                                    fStack00000000000000dc = 0.0;
                                    uStack000000000000002c = 0;
                                    fStack000000000000016c = 0.0;
                                    iStack0000000000000054 = 0;
                                    lVar27 = 0x2e0;
                                    fVar54 = 0.0;
                                    fVar57 = 0.0;
                                    fStack0000000000000104 =
                                         *(float *)(*(long *)(*(long *)
                                                  Method_System_Collections_Generic_HashSet<OvrAvatarShaderNameUtils_KnownShader>_Add__
                                                  + 0xb8) + 0x15a8);
                                    fStack0000000000000100 = 0.0;
                                    fVar51 = 0.0;
                                    fVar52 = 0.0;
                                    fVar75 = 0.0;
                                    fVar53 = 0.0;
                                    uVar38 = 0;
                                    uVar22 = 1;
                                    fStack000000000000008c = fStack0000000000000068;
                                    fStack0000000000000098 = fStack0000000000000064;
                                    fStack000000000000009c = fStack000000000000006c;
                                    fStack00000000000000b8 = fStack0000000000000068;
                                    fStack00000000000000cc = fStack000000000000006c;
                                    fStack00000000000000e0 = fStack000000000000006c;
                                    fStack00000000000000e4 = fStack0000000000000064;
                                    fVar69 = fStack0000000000000064;
                                    goto LAB_067daf08;
                                  }
                                }
                              }
                              goto LAB_067dd33c;
                            }
                            if (*(uint *)(lVar27 + 0x18) <= uVar86) goto LAB_067dd448;
                            uVar20 = *(uint *)(lVar27 + (long)(int)uVar86 * 0xc + 0x20);
                            if (uVar20 == 0) goto LAB_067da694;
                            if (5 < iVar18) {
                              uVar32 = FUN_05920f80(&stack0x0000108c,0);
                              uVar29 = FUN_05920f80(&stack0x00001058,0);
                              uVar32 = FUN_057ab20c(*(undefined8 *)
                                                                                                          
                                                  Method_System_Collections_Generic_HashSet<OvrSkinningTypes_Handle>__ctor__
                                                  ,uVar32,*(undefined8 *)
                                                                                                                      
                                                  Method_System_Collections_Generic_HashSet<OvrSkinningTypes_Handle>_get_Count__
                                                  ,uVar29,0);
                              if (*(int *)(*(long *)PTR_DAT_072798f8 + 0xe0) == 0) {
                                thunk_FUN_032cd7c0(*(long *)PTR_DAT_072798f8);
                              }
                              FUN_06bb2a00(uVar32,0);
                              in_stack_00001078 = CONCAT44(3,*puVar3);
                            }
                            if ((*(char *)((long)unaff_x19 + 0x302) == '\0') || (uVar20 != 0x3c)) {
                              if ((*plVar5 == 0) ||
                                 (lVar27 = *(long *)(*plVar5 + 0x38), lVar27 == 0))
                              goto LAB_067dd33c;
                              if (*(uint *)(lVar27 + 0x18) <= *puVar3) goto LAB_067dd448;
                              lVar27 = lVar27 + (long)(int)*puVar3 * 0x178;
                              *(undefined4 *)((long)unaff_x19 + 0x644) =
                                   *(undefined4 *)(lVar27 + 0x2c);
                              *(undefined4 *)(unaff_x19 + 0x24) = *(undefined4 *)(lVar27 + 0x58);
                              unaff_x19[0x20] = *(long *)(lVar27 + 0x38);
                              thunk_FUN_0333a630(plVar49);
LAB_067d6b88:
                              if ((unaff_x19[0x6d] == 0) ||
                                 (lVar27 = *(long *)(unaff_x19[0x6d] + 0x38), lVar27 == 0))
                              goto LAB_067dd33c;
                              uVar22 = *puVar3;
                              if (*(uint *)(lVar27 + 0x18) <= uVar22) goto LAB_067dd448;
                              lVar50 = (long)(int)uVar22;
                              cVar34 = *(char *)(lVar27 + lVar50 * 0x178 + 0x5c);
                              *(undefined1 *)((long)unaff_x19 + 0x431) = 0;
                              lVar28 = unaff_x19[0x24];
                              if ((uint)in_stack_00001078 == uVar22) {
                                uVar20 = (uint)((ulong)in_stack_00001078 >> 0x20);
                                *(undefined4 *)((long)unaff_x19 + 0x644) = 0;
                                if (uVar20 == 0x2026) {
                                  *(long *)(lVar27 + lVar50 * 0x178 + 0x30) = unaff_x19[0xca];
                                  thunk_FUN_0333a630();
                                  if ((unaff_x19[0x6d] == 0) ||
                                     (lVar27 = *(long *)(unaff_x19[0x6d] + 0x38), lVar27 == 0))
                                  goto LAB_067dd33c;
                                  if (*(uint *)(lVar27 + 0x18) <= *puVar3) goto LAB_067dd448;
                                  lVar27 = lVar27 + (long)(int)*puVar3 * 0x178;
                                  *(undefined4 *)(lVar27 + 0x2c) = 0;
                                  *(long *)(lVar27 + 0x38) = unaff_x19[0xcb];
                                  thunk_FUN_0333a630();
                                  if ((unaff_x19[0x6d] == 0) ||
                                     (lVar27 = *(long *)(unaff_x19[0x6d] + 0x38), lVar27 == 0))
                                  goto LAB_067dd33c;
                                  if (*(uint *)(lVar27 + 0x18) <= *puVar3) goto LAB_067dd448;
                                  *(long *)(lVar27 + (long)(int)*puVar3 * 0x178 + 0x50) =
                                       unaff_x19[0xcc];
                                  thunk_FUN_0333a630();
                                  if ((*plVar5 == 0) ||
                                     (lVar27 = *(long *)(*plVar5 + 0x38), lVar27 == 0))
                                  goto LAB_067dd33c;
                                  uVar22 = *puVar3;
                                  if (*(uint *)(lVar27 + 0x18) <= uVar22) goto LAB_067dd448;
                                  bVar11 = true;
                                  *(int *)(lVar27 + (long)(int)uVar22 * 0x178 + 0x58) =
                                       (int)unaff_x19[0xcd];
                                  *(undefined1 *)(unaff_x19 + 0x5f) = 1;
                                  in_stack_00001078 = CONCAT44(3,uVar22 + 1);
                                }
                                else if (uVar20 == 3) {
                                  if ((*plVar49 == 0) ||
                                     (lVar31 = FUN_067fd3b4(*plVar49,0), lVar31 == 0))
                                  goto LAB_067dd33c;
                                  uVar32 = FUN_0518817c(lVar31,3,*(undefined8 *)
                                                                                                                                    
                                                  Method_System_Collections_Generic_HashSet<CAPI_ovrAvatar2JointType>_Add__
                                                  );
                                  if (*(uint *)(lVar27 + 0x18) <= uVar22) goto LAB_067dd448;
                                  *(undefined8 *)(lVar27 + lVar50 * 0x178 + 0x30) = uVar32;
                                  thunk_FUN_0333a630();
                                  uVar22 = *(uint *)((long)unaff_x19 + 0x494);
                                  bVar11 = true;
                                  *(undefined1 *)(unaff_x19 + 0x5f) = 1;
                                }
                                else {
                                  bVar11 = true;
                                }
                              }
                              else {
                                bVar11 = false;
                              }
                              if (((int)uVar22 < *(int *)((long)unaff_x19 + 0x324)) && (uVar20 != 3)
                                 ) {
                                if ((*plVar5 == 0) ||
                                   (lVar27 = *(long *)(*plVar5 + 0x38), lVar27 == 0))
                                goto LAB_067dd33c;
                                if (*(uint *)(lVar27 + 0x18) <= uVar22) goto LAB_067dd448;
                                lVar27 = lVar27 + (long)(int)uVar22 * 0x178;
                                *(undefined1 *)(lVar27 + 0x194) = 0;
                                *(undefined2 *)(lVar27 + 0x20) = 0x200b;
                                *(undefined4 *)(lVar27 + 100) = 0;
                                *puVar3 = uVar22 + 1;
                              }
                              else {
                                iVar21 = *(int *)((long)unaff_x19 + 0x644);
                                if (iVar21 == 0) {
                                  uVar22 = *(uint *)((long)unaff_x19 + 0x25c);
                                  if ((uVar22 >> 4 & 1) == 0) {
                                    if ((uVar22 >> 3 & 1) == 0) {
                                      fVar53 = 1.0;
                                      if ((uVar22 >> 5 & 1) != 0) {
                                        if (*(int *)(*(long *)PTR_DAT_0727fa20 + 0xe0) == 0) {
                                          thunk_FUN_032cd7c0();
                                        }
                                        uVar30 = FUN_058a4af0(uVar20,0);
                                        if ((uVar30 & 1) != 0) {
                                          if (*(int *)(*(long *)PTR_DAT_0727fa20 + 0xe0) == 0) {
                                            thunk_FUN_032cd7c0();
                                          }
                                          uVar20 = FUN_058a4dd0(uVar20,0);
                                          uVar20 = uVar20 & 0xffff;
                                          fVar53 = fVar76;
                                        }
                                      }
                                    }
                                    else {
                                      if (*(int *)(*(long *)PTR_DAT_0727fa20 + 0xe0) == 0) {
                                        thunk_FUN_032cd7c0();
                                      }
                                      uVar30 = FUN_058a4a34(uVar20,0);
                                      fVar53 = 1.0;
                                      if ((uVar30 & 1) != 0) {
                                        if (*(int *)(*(long *)PTR_DAT_0727fa20 + 0xe0) == 0) {
                                          thunk_FUN_032cd7c0();
                                        }
                                        uVar20 = FUN_058a4f48(uVar20,0);
                                        goto LAB_067d7160;
                                      }
                                    }
                                  }
                                  else {
                                    if (*(int *)(*(long *)PTR_DAT_0727fa20 + 0xe0) == 0) {
                                      thunk_FUN_032cd7c0();
                                    }
                                    uVar30 = FUN_058a4af0(uVar20,0);
                                    fVar53 = 1.0;
                                    if ((uVar30 & 1) != 0) {
                                      if (*(int *)(*(long *)PTR_DAT_0727fa20 + 0xe0) == 0) {
                                        thunk_FUN_032cd7c0();
                                      }
                                      uVar20 = FUN_058a4dd0(uVar20,0);
LAB_067d7160:
                                      fVar53 = 1.0;
                                      uVar20 = uVar20 & 0xffff;
                                    }
                                  }
                                  iVar21 = *(int *)((long)unaff_x19 + 0x644);
                                  if (iVar21 != 0) goto LAB_067d6d94;
LAB_067d7170:
                                  if ((*plVar5 == 0) ||
                                     (lVar27 = *(long *)(*plVar5 + 0x38), lVar27 == 0))
                                  goto LAB_067dd33c;
                                  if (*(uint *)(lVar27 + 0x18) <= *puVar3) goto LAB_067dd448;
                                  *plVar4 = *(long *)(lVar27 + (long)(int)*puVar3 * 0x178 + 0x30);
                                  thunk_FUN_0333a630(plVar4);
                                  if (*plVar4 == 0) goto LAB_067d6d64;
                                  if ((*plVar5 == 0) ||
                                     (lVar27 = *(long *)(*plVar5 + 0x38), lVar27 == 0))
                                  goto LAB_067dd33c;
                                  if (*(uint *)(lVar27 + 0x18) <= *puVar3) goto LAB_067dd448;
                                  *plVar49 = *(long *)(lVar27 + (long)(int)*puVar3 * 0x178 + 0x38);
                                  thunk_FUN_0333a630(plVar49);
                                  if ((*plVar5 == 0) ||
                                     (lVar27 = *(long *)(*plVar5 + 0x38), lVar27 == 0))
                                  goto LAB_067dd33c;
                                  if (*(uint *)(lVar27 + 0x18) <= *puVar3) goto LAB_067dd448;
                                  *plVar1 = *(long *)(lVar27 + (long)(int)*puVar3 * 0x178 + 0x50);
                                  thunk_FUN_0333a630();
                                  if ((*plVar5 == 0) ||
                                     (lVar27 = *(long *)(*plVar5 + 0x38), lVar27 == 0))
                                  goto LAB_067dd33c;
                                  uVar47 = *puVar3;
                                  uVar22 = *(uint *)(lVar27 + 0x18);
                                  if (uVar22 <= uVar47) goto LAB_067dd448;
                                  *(undefined4 *)(unaff_x19 + 0x24) =
                                       *(undefined4 *)(lVar27 + (long)(int)uVar47 * 0x178 + 0x58);
                                  if (bVar11) {
                                    lVar28 = unaff_x19[0x8f];
                                    if (lVar28 == 0) goto LAB_067dd33c;
                                    if (*(uint *)(lVar28 + 0x18) <= uVar86) goto LAB_067dd448;
                                    if ((*(int *)(lVar28 + (long)(int)uVar86 * 0xc + 0x20) != 10) ||
                                       (uVar47 == *(uint *)(unaff_x19 + 0x93))) goto LAB_067d7280;
                                    if (uVar22 <= uVar47 - 1) goto LAB_067dd448;
                                    if (*plVar49 == 0) goto LAB_067dd33c;
                                    fVar54 = *(float *)(lVar27 + (long)(int)(uVar47 - 1) * 0x178 +
                                                       0x60);
                                    iVar21 = FUN_06c5195c(*plVar49 + 0x50,0);
                                    lVar27 = *plVar49;
                                  }
                                  else {
LAB_067d7280:
                                    if (*plVar49 == 0) goto LAB_067dd33c;
                                    fVar54 = *(float *)(unaff_x19 + 0x3d);
                                    iVar21 = FUN_06c5195c(*plVar49 + 0x50,0);
                                    lVar27 = unaff_x19[0x20];
                                  }
                                  if (lVar27 == 0) goto LAB_067dd33c;
                                  fVar73 = (float)FUN_06c5196c(lVar27 + 0x50,0);
                                  fVar58 = fVar69;
                                  if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
                                    fVar58 = 1.0;
                                  }
                                  uVar19 = 0;
                                  fStack0000000000000124 = 0.0;
                                  if (!(bool)(bVar11 & uVar20 == 0x2026)) {
                                    if (*plVar49 == 0) goto LAB_067dd33c;
                                    fStack0000000000000124 = (float)FUN_06c5198c(*plVar49 + 0x50,0);
                                    if (*plVar49 == 0) goto LAB_067dd33c;
                                    uVar19 = FUN_06c519cc(*plVar49 + 0x50,0);
                                  }
                                  lVar27 = unaff_x19[0xc9];
                                  if (lVar27 == 0) goto LAB_067dd33c;
                                  _fStack0000000000000120 = CONCAT44(fStack0000000000000124,uVar19);
                                  if (*(long *)(lVar27 + 0x20) == 0) goto LAB_067dd33c;
                                  fVar81 = *(float *)((long)unaff_x19 + 0x404);
                                  fVar59 = *(float *)(lVar27 + 0x2c);
                                  fVar75 = (float)FUN_06c51eb4(*(long *)(lVar27 + 0x20),0);
                                  if (*plVar49 == 0) goto LAB_067dd33c;
                                  fVar61 = (float)FUN_06c519bc(*plVar49 + 0x50,0);
                                  if (*plVar49 == 0) goto LAB_067dd33c;
                                  fVar82 = *(float *)((long)unaff_x19 + 0x404);
                                  fStack000000000000017c = (float)FUN_06c5196c(*plVar49 + 0x50,0);
                                  lVar27 = unaff_x19[0x6d];
                                  if ((lVar27 == 0) ||
                                     (lVar28 = *(long *)(lVar27 + 0x38), lVar28 == 0))
                                  goto LAB_067dd33c;
                                  if (*(uint *)(lVar28 + 0x18) <= *puVar3) goto LAB_067dd448;
                                  lVar28 = lVar28 + (long)(int)*puVar3 * 0x178;
                                  *(undefined4 *)(lVar28 + 0x2c) = 0;
                                  fVar58 = ((fVar53 * fVar54) / (float)iVar21) * fVar73 * fVar58;
                                  fVar75 = fVar58 * fVar81 * fVar59 * fVar75;
                                  *(float *)(lVar28 + 0x160) = fVar75;
                                  uVar22 = *(uint *)(unaff_x19 + 0x24);
                                  fStack000000000000017c =
                                       fVar58 * fVar61 * fVar82 * fStack000000000000017c;
                                  if (uVar22 == 0) {
                                    fStack000000000000016c = *(float *)(unaff_x19 + 0xc3);
                                  }
                                  else {
                                    lVar28 = unaff_x19[0xe1];
                                    if (lVar28 == 0) goto LAB_067dd33c;
                                    if (*(uint *)(lVar28 + 0x18) <= uVar22) goto LAB_067dd448;
                                    lVar28 = *(long *)(lVar28 + (long)(int)uVar22 * 8 + 0x20);
                                    if (lVar28 == 0) goto LAB_067dd33c;
                                    fStack000000000000016c = *(float *)(lVar28 + 0x54);
                                  }
LAB_067d7630:
                                  fVar54 = 0.0;
                                  if (uVar20 != 3 && uVar20 != 0xad) {
                                    fVar54 = fVar75;
                                  }
                                }
                                else {
                                  fVar53 = 1.0;
                                  if (iVar21 == 0) goto LAB_067d7170;
LAB_067d6d94:
                                  if (iVar21 == 1) {
                                    if ((*plVar5 == 0) ||
                                       (lVar27 = *(long *)(*plVar5 + 0x38), lVar27 == 0))
                                    goto LAB_067dd33c;
                                    if (*(uint *)(lVar27 + 0x18) <= *puVar3) goto LAB_067dd448;
                                    *plVar2 = *(long *)(lVar27 + (long)(int)*puVar3 * 0x178 + 0x40);
                                    thunk_FUN_0333a630();
                                    if ((*plVar5 == 0) ||
                                       (lVar27 = *(long *)(*plVar5 + 0x38), lVar27 == 0))
                                    goto LAB_067dd33c;
                                    if (*(uint *)(lVar27 + 0x18) <= *puVar3) goto LAB_067dd448;
                                    *(undefined4 *)((long)unaff_x19 + 0x6a4) =
                                         *(undefined4 *)(lVar27 + (long)(int)*puVar3 * 0x178 + 0x48)
                                    ;
                                    if ((unaff_x19[0xd3] == 0) ||
                                       (lVar27 = FUN_06833818(unaff_x19[0xd3],0), lVar27 == 0))
                                    goto LAB_067dd33c;
                                    lVar27 = FUN_041e29a8(lVar27,*(undefined4 *)
                                                                  ((long)unaff_x19 + 0x6a4),
                                                          *(undefined8 *)
                                                                                                                      
                                                  Method_System_Collections_Generic_HashSet<CAPI_ovrAvatar2JointType>_Clear__
                                                  );
                                    puVar14 = 
                                    Method_System_Collections_Generic_HashSet<OvrAvatarShaderNameUtils_KnownShader>_Add__
                                    ;
                                    if (lVar27 == 0) goto LAB_067d6d64;
                                    if (uVar20 == 0x3c) {
                                      uVar20 = *(int *)((long)unaff_x19 + 0x6a4) + 0xe000;
                                    }
                                    else {
                                      lVar50 = *(long *)
                                                Method_System_Collections_Generic_HashSet<OvrAvatarShaderNameUtils_KnownShader>_Add__
                                      ;
                                      if (*(int *)(lVar50 + 0xe0) == 0) {
                                        thunk_FUN_032cd7c0();
                                        lVar50 = *(long *)puVar14;
                                      }
                                      *(undefined4 *)((long)unaff_x19 + 0x1bc) =
                                           *(undefined4 *)(*(long *)(lVar50 + 0xb8) + 0x68);
                                    }
                                    if (unaff_x19[0x20] == 0) goto LAB_067dd33c;
                                    fVar75 = *(float *)(unaff_x19 + 0x3d);
                                    memmove(&stack0x00000fd0,(void *)(unaff_x19[0x20] + 0x50),0x60);
                                    iVar21 = FUN_06c5195c(&stack0x00000fd0,0);
                                    if (*plVar49 == 0) goto LAB_067dd33c;
                                    memmove(&stack0x00000fd0,(void *)(*plVar49 + 0x50),0x60);
                                    fVar58 = (float)FUN_06c5196c(&stack0x00000fd0,0);
                                    fVar54 = fVar69;
                                    if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
                                      fVar54 = 1.0;
                                    }
                                    if (unaff_x19[0xd3] == 0) goto LAB_067dd33c;
                                    fVar54 = (fVar75 / (float)iVar21) * fVar58 * fVar54;
                                    iVar21 = FUN_06c5195c(unaff_x19[0xd3] + 0x48,0);
                                    fVar75 = *(float *)(unaff_x19 + 0x3d);
                                    if (iVar21 < 1) {
                                      if (*plVar49 == 0) goto LAB_067dd33c;
                                      iVar21 = FUN_06c5195c(*plVar49 + 0x50,0);
                                      if (*plVar49 == 0) goto LAB_067dd33c;
                                      fVar73 = (float)FUN_06c5196c(*plVar49 + 0x50,0);
                                      fVar58 = fVar69;
                                      if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
                                        fVar58 = 1.0;
                                      }
                                      if (unaff_x19[0x20] == 0) goto LAB_067dd33c;
                                      fVar81 = (float)FUN_06c5198c(unaff_x19[0x20] + 0x50,0);
                                      if (*(long *)(lVar27 + 0x20) == 0) goto LAB_067dd33c;
                                      FUN_06c51e78(&stack0x00001090,*(long *)(lVar27 + 0x20),0);
                                      fVar59 = (float)FUN_06c51ca8(&stack0x00000fb0,0);
                                      if (*(long *)(lVar27 + 0x20) == 0) goto LAB_067dd33c;
                                      fVar82 = *(float *)(lVar27 + 0x2c);
                                      fVar61 = (float)FUN_06c51eb4(*(long *)(lVar27 + 0x20),0);
                                      if (*plVar49 == 0) goto LAB_067dd33c;
                                      fVar60 = (float)FUN_06c5198c(*plVar49 + 0x50,0);
                                      if (*plVar49 == 0) goto LAB_067dd33c;
                                      fVar78 = (float)FUN_06c519bc(*plVar49 + 0x50,0);
                                      if (*plVar49 == 0) goto LAB_067dd33c;
                                      fVar77 = *(float *)((long)unaff_x19 + 0x404);
                                      fStack000000000000017c =
                                           (float)FUN_06c5196c(*plVar49 + 0x50,0);
                                      if (unaff_x19[0x20] == 0) goto LAB_067dd33c;
                                      fStack000000000000017c =
                                           fVar54 * fVar78 * fVar77 * fStack000000000000017c;
                                      fVar58 = (fVar75 / (float)iVar21) * fVar73 * fVar58;
                                      fVar75 = fVar58 * (fVar81 / fVar59) * fVar82 * fVar61;
                                      fVar58 = fVar58 / fVar75;
                                      fVar60 = fVar58 * fVar60;
                                      fVar54 = (float)FUN_06c519cc(unaff_x19[0x20] + 0x50,0);
                                      fVar58 = fVar58 * fVar54;
                                    }
                                    else {
                                      if (*plVar2 == 0) goto LAB_067dd33c;
                                      iVar21 = FUN_06c5195c(*plVar2 + 0x48,0);
                                      if (*plVar2 == 0) goto LAB_067dd33c;
                                      fVar58 = (float)FUN_06c5196c(*plVar2 + 0x48,0);
                                      if (*(long *)(lVar27 + 0x20) == 0) goto LAB_067dd33c;
                                      fVar81 = *(float *)(lVar27 + 0x2c);
                                      fVar73 = fVar69;
                                      if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
                                        fVar73 = 1.0;
                                      }
                                      fVar59 = (float)FUN_06c51eb4(*(long *)(lVar27 + 0x20),0);
                                      if (unaff_x19[0xd3] == 0) goto LAB_067dd33c;
                                      fVar60 = (float)FUN_06c5198c(unaff_x19[0xd3] + 0x48,0);
                                      if (*plVar2 == 0) goto LAB_067dd33c;
                                      fVar61 = (float)FUN_06c519bc(*plVar2 + 0x48,0);
                                      if (*plVar2 == 0) goto LAB_067dd33c;
                                      fVar82 = *(float *)((long)unaff_x19 + 0x404);
                                      fStack000000000000017c = (float)FUN_06c5196c(*plVar2 + 0x48,0)
                                      ;
                                      if (unaff_x19[0xd3] == 0) goto LAB_067dd33c;
                                      fStack000000000000017c =
                                           fVar54 * fVar61 * fVar82 * fStack000000000000017c;
                                      fVar75 = (fVar75 / (float)iVar21) * fVar58 * fVar73 *
                                               fVar81 * fVar59;
                                      fVar58 = (float)FUN_06c519cc(unaff_x19[0xd3] + 0x48,0);
                                    }
                                    *plVar4 = lVar27;
                                    thunk_FUN_0333a630(plVar4,lVar27);
                                    if ((*plVar5 != 0) &&
                                       (lVar27 = *(long *)(*plVar5 + 0x38), lVar27 != 0)) {
                                      if (*(uint *)(lVar27 + 0x18) <= *puVar3) goto LAB_067dd448;
                                      lVar27 = lVar27 + (long)(int)*puVar3 * 0x178;
                                      *(undefined4 *)(lVar27 + 0x2c) = 1;
                                      *(float *)(lVar27 + 0x160) = fVar75;
                                      *(long *)(lVar27 + 0x40) = *plVar2;
                                      thunk_FUN_0333a630();
                                      if ((*plVar5 != 0) &&
                                         (lVar27 = *(long *)(*plVar5 + 0x38), lVar27 != 0)) {
                                        if (*(uint *)(lVar27 + 0x18) <= *puVar3) goto LAB_067dd448;
                                        *(long *)(lVar27 + (long)(int)*puVar3 * 0x178 + 0x38) =
                                             *plVar49;
                                        thunk_FUN_0333a630();
                                        lVar27 = *plVar5;
                                        if ((lVar27 != 0) &&
                                           (lVar50 = *(long *)(lVar27 + 0x38), lVar50 != 0)) {
                                          if (*puVar3 < *(uint *)(lVar50 + 0x18)) {
                                            _fStack0000000000000120 = CONCAT44(fVar60,fVar58);
                                            fStack000000000000016c = 0.0;
                                            *(int *)(lVar50 + (long)(int)*puVar3 * 0x178 + 0x58) =
                                                 (int)unaff_x19[0x24];
                                            *(int *)(unaff_x19 + 0x24) = (int)lVar28;
                                            goto LAB_067d7630;
                                          }
                                          goto LAB_067dd448;
                                        }
                                      }
                                    }
                                    goto LAB_067dd33c;
                                  }
                                  lVar27 = *plVar5;
                                  fVar54 = 0.0;
                                  if (uVar20 != 3 && uVar20 != 0xad) {
                                    fVar54 = fVar75;
                                  }
                                  fStack000000000000017c = 0.0;
                                  if (lVar27 == 0) goto LAB_067dd33c;
                                  _fStack0000000000000120 = 0;
                                }
                                lVar27 = *(long *)(lVar27 + 0x38);
                                if (lVar27 == 0) goto LAB_067dd33c;
                                if (*(uint *)(lVar27 + 0x18) <= *puVar3) goto LAB_067dd448;
                                lVar27 = lVar27 + (long)(int)*puVar3 * 0x178;
                                *(short *)(lVar27 + 0x20) = (short)uVar20;
                                *(int *)(lVar27 + 0x60) = (int)unaff_x19[0x3d];
                                *(undefined4 *)(lVar27 + 0x164) =
                                     *(undefined4 *)((long)unaff_x19 + 0x4ec);
                                if ((unaff_x19[0x6d] == 0) ||
                                   (lVar27 = *(long *)(unaff_x19[0x6d] + 0x38), lVar27 == 0))
                                goto LAB_067dd33c;
                                if (*(uint *)(lVar27 + 0x18) <= *puVar3) goto LAB_067dd448;
                                *(int *)(lVar27 + (long)(int)*puVar3 * 0x178 + 0x168) =
                                     (int)unaff_x19[0x2b];
                                if ((unaff_x19[0x6d] == 0) ||
                                   (lVar27 = *(long *)(unaff_x19[0x6d] + 0x38), lVar27 == 0))
                                goto LAB_067dd33c;
                                if (*(uint *)(lVar27 + 0x18) <= *puVar3) goto LAB_067dd448;
                                *(undefined4 *)(lVar27 + (long)(int)*puVar3 * 0x178 + 0x170) =
                                     *(undefined4 *)((long)unaff_x19 + 0x15c);
                                if ((unaff_x19[0x6d] == 0) ||
                                   (lVar27 = *(long *)(unaff_x19[0x6d] + 0x38), lVar27 == 0))
                                goto LAB_067dd33c;
                                uVar22 = *puVar3;
                                FUN_04a0d43c(&stack0x000001c0,unaff_x19 + 0xaa,
                                             *(undefined8 *)
                                              Method_System_Collections_Generic_HashSet<OvrAvatarShaderNameUtils_KnownShader>__ctor__
                                            );
                                if (*(uint *)(lVar27 + 0x18) <= uVar22) goto LAB_067dd448;
                                lVar27 = lVar27 + (long)(int)uVar22 * 0x178;
                                *(undefined4 *)(lVar27 + 0x18c) = uStack00000000000001d0;
                                *(undefined8 *)(lVar27 + 0x184) = in_stack_000001c8;
                                *(undefined8 *)(lVar27 + 0x17c) = in_stack_000001c0;
                                if ((*plVar5 == 0) ||
                                   (lVar27 = *(long *)(*plVar5 + 0x38), lVar27 == 0))
                                goto LAB_067dd33c;
                                if (*(uint *)(lVar27 + 0x18) <= *puVar3) goto LAB_067dd448;
                                *(undefined4 *)(lVar27 + (long)(int)*puVar3 * 0x178 + 400) =
                                     *(undefined4 *)((long)unaff_x19 + 0x25c);
                                if ((unaff_x19[0xc9] == 0) ||
                                   (lVar27 = *(long *)(unaff_x19[0xc9] + 0x20), lVar27 == 0))
                                goto LAB_067dd33c;
                                FUN_06c51e78(&stack0x000001c0,lVar27,0);
                                if ((int)uVar20 < 0x10000) {
                                  if (*(int *)(*(long *)PTR_DAT_0727fa20 + 0xe0) == 0) {
                                    thunk_FUN_032cd7c0();
                                  }
                                  uVar22 = FUN_058a1fe4(uVar20,0);
                                  uVar22 = uVar22 & 1;
                                }
                                else {
                                  uVar22 = 0;
                                }
                                fStack0000000000000134 = *(float *)(unaff_x19 + 0x55);
                                *(undefined4 *)((long)unaff_x19 + 0x2fc) = 0;
                                if (*(char *)((long)unaff_x19 + 0x2f9) == '\0') {
                                  fVar58 = 0.0;
                                  fVar81 = 0.0;
                                  fVar73 = 0.0;
                                }
                                else {
                                  if (*plVar4 == 0) goto LAB_067dd33c;
                                  uVar35 = *puVar3;
                                  uVar47 = *(uint *)(*plVar4 + 0x28);
                                  if ((int)uVar35 < (int)uVar38) {
                                    if ((*plVar5 == 0) ||
                                       (lVar27 = *(long *)(*plVar5 + 0x38), lVar27 == 0))
                                    goto LAB_067dd33c;
                                    if (*(uint *)(lVar27 + 0x18) <= uVar35 + 1) goto LAB_067dd448;
                                    lVar27 = *(long *)(lVar27 + (long)(int)(uVar35 + 1) * 0x178 +
                                                      0x30);
                                    if ((((lVar27 == 0) || (*plVar49 == 0)) ||
                                        (lVar28 = *(long *)(*plVar49 + 0x128), lVar28 == 0)) ||
                                       (lVar28 = *(long *)(lVar28 + 0x18), lVar28 == 0))
                                    goto LAB_067dd33c;
                                    uVar25 = FUN_05189ccc(lVar28,uVar47 | *(int *)(lVar27 + 0x28) <<
                                                                          0x10,&stack0x00000fa8,
                                                          *(undefined8 *)
                                                                                                                      
                                                  Method_System_Collections_Generic_HashSet<CAPI_ovrAvatar2JointType>__ctor__
                                                  );
                                    uVar19 = 0;
                                    if ((uVar25 & 1) == 0) {
                                      fVar58 = 0.0;
                                      fVar81 = 0.0;
                                      fVar73 = 0.0;
                                    }
                                    else {
                                      if (in_stack_00000fa8 == 0) goto LAB_067dd33c;
                                      fVar58 = *(float *)(in_stack_00000fa8 + 0x1c);
                                      uVar19 = *(undefined4 *)(in_stack_00000fa8 + 0x20);
                                      fVar73 = *(float *)(in_stack_00000fa8 + 0x14);
                                      fVar81 = *(float *)(in_stack_00000fa8 + 0x18);
                                      if ((*(byte *)(in_stack_00000fa8 + 0x39) & 1) != 0) {
                                        fStack0000000000000134 = 0.0;
                                      }
                                    }
                                    uVar35 = *puVar3;
                                  }
                                  else {
                                    uVar19 = 0;
                                    fVar58 = 0.0;
                                    fVar81 = 0.0;
                                    fVar73 = 0.0;
                                  }
                                  if (0 < (int)uVar35) {
                                    if ((*plVar5 == 0) ||
                                       (lVar27 = *(long *)(*plVar5 + 0x38), lVar27 == 0))
                                    goto LAB_067dd33c;
                                    if (*(uint *)(lVar27 + 0x18) <= uVar35 - 1) goto LAB_067dd448;
                                    lVar27 = *(long *)(lVar27 + (ulong)(uVar35 - 1) * 0x178 + 0x30);
                                    if (((lVar27 == 0) || (*plVar49 == 0)) ||
                                       ((lVar28 = *(long *)(*plVar49 + 0x128), lVar28 == 0 ||
                                        (lVar28 = *(long *)(lVar28 + 0x18), lVar28 == 0))))
                                    goto LAB_067dd33c;
                                    uVar25 = FUN_05189ccc(lVar28,*(uint *)(lVar27 + 0x28) |
                                                                 uVar47 << 0x10,&stack0x00000fa8,
                                                          *(undefined8 *)
                                                                                                                      
                                                  Method_System_Collections_Generic_HashSet<CAPI_ovrAvatar2JointType>__ctor__
                                                  );
                                    if ((uVar25 & 1) != 0) {
                                      if ((in_stack_00000fa8 == 0) ||
                                         (fVar73 = (float)FUN_06807d68(fVar73,fVar81,fVar58,uVar19,
                                                                       *(undefined4 *)
                                                                        (in_stack_00000fa8 + 0x28),
                                                                       *(undefined4 *)
                                                                        (in_stack_00000fa8 + 0x2c),
                                                                       *(undefined4 *)
                                                                        (in_stack_00000fa8 + 0x30),
                                                                       *(undefined4 *)
                                                                        (in_stack_00000fa8 + 0x34),0
                                                                      ), in_stack_00000fa8 == 0))
                                      goto LAB_067dd33c;
                                      if ((*(byte *)(in_stack_00000fa8 + 0x39) & 1) != 0) {
                                        fStack0000000000000134 = 0.0;
                                      }
                                    }
                                  }
                                  *(float *)((long)unaff_x19 + 0x2fc) = fVar58;
                                }
                                if ((char)unaff_x19[0x1e] != '\0') {
                                  fVar61 = *(float *)(unaff_x19 + 200);
                                  fVar59 = (float)FUN_06c51cc0(&stack0x00001040,0);
                                  fVar61 = fVar61 - fVar54 * fVar59 * (1.0 - *(float *)((long)
                                                  unaff_x19 + 0x2d4));
                                  *(float *)(unaff_x19 + 200) = fVar61;
                                  if ((uVar20 == 0x200b) || (uVar22 != 0)) {
                                    *(float *)(unaff_x19 + 200) =
                                         fVar61 - fVar57 * *(float *)((long)unaff_x19 + 0x2b4);
                                  }
                                }
                                fVar61 = *(float *)(unaff_x19 + 0x56);
                                fVar59 = 0.0;
                                if (fVar61 != 0.0) {
                                  fVar59 = (float)FUN_06c51ca0(&stack0x00001040,0);
                                  fVar82 = (float)FUN_06c51cb0(&stack0x00001040,0);
                                  fVar59 = (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                                           (fVar61 * 0.5 - fVar54 * (fVar59 * 0.5 + fVar82));
                                  *(float *)(unaff_x19 + 200) = *(float *)(unaff_x19 + 200) + fVar59
                                  ;
                                }
                                if (((*(int *)((long)unaff_x19 + 0x644) == 0) && (cVar34 == '\0'))
                                   && ((*(byte *)((long)unaff_x19 + 0x25c) & 1) != 0)) {
                                  lVar27 = *plVar1;
                                  if (*(int *)(*(long *)PTR_DAT_072794f0 + 0xe0) == 0) {
                                    thunk_FUN_032cd7c0();
                                  }
                                  uVar25 = FUN_06be9890(lVar27,0,0);
                                  fVar82 = 0.0;
                                  if ((uVar25 & 1) != 0) {
                                    lVar27 = *plVar1;
                                    if (*(int *)(*(long *)
                                                  Method_System_Collections_Generic_HashSet<CAPI_ovrAvatar2JointType>_Contains__
                                                + 0xe0) == 0) {
                                      thunk_FUN_032cd7c0();
                                    }
                                    plVar48 = (long *)
                                              Method_System_Collections_Generic_HashSet<CAPI_ovrAvatar2JointType>_Contains__
                                    ;
                                    if (lVar27 == 0) goto LAB_067dd33c;
                                    uVar25 = FUN_06bc3e18(lVar27,*(undefined4 *)
                                                                  (*(long *)(*(long *)
                                                  Method_System_Collections_Generic_HashSet<CAPI_ovrAvatar2JointType>_Contains__
                                                  + 0xb8) + 0x54),0);
                                    fVar82 = 0.0;
                                    if ((uVar25 & 1) != 0) {
                                      lVar27 = *plVar1;
                                      if (*(int *)(*plVar48 + 0xe0) == 0) {
                                        thunk_FUN_032cd7c0();
                                        plVar48 = (long *)
                                                  Method_System_Collections_Generic_HashSet<CAPI_ovrAvatar2JointType>_Contains__
                                        ;
                                      }
                                      if (lVar27 == 0) goto LAB_067dd33c;
                                      fVar61 = (float)FUN_06bc5a24(lVar27,*(undefined4 *)
                                                                           (*(long *)(*plVar48 +
                                                                                     0xb8) + 0x54),0
                                                                  );
                                      if ((*plVar49 == 0) || (*plVar1 == 0)) goto LAB_067dd33c;
                                      fVar60 = *(float *)(*plVar49 + 0x1b0);
                                      fVar82 = (float)FUN_06bc5a24(*plVar1,*(undefined4 *)
                                                                            (*(long *)(*(long *)
                                                  Method_System_Collections_Generic_HashSet<CAPI_ovrAvatar2JointType>_Contains__
                                                  + 0xb8) + 0xcc),0);
                                      fVar82 = fVar82 * fVar61 * fVar60 * 0.25;
                                      if (fVar61 < fStack000000000000016c + fVar82) {
                                        fStack000000000000016c = fVar61 - fVar82;
                                      }
                                    }
                                  }
                                  if (*plVar49 == 0) goto LAB_067dd33c;
                                  fStack00000000000000dc = *(float *)(*plVar49 + 0x1b4);
                                }
                                else {
                                  lVar27 = *plVar1;
                                  if (*(int *)(*(long *)PTR_DAT_072794f0 + 0xe0) == 0) {
                                    thunk_FUN_032cd7c0();
                                  }
                                  uVar25 = FUN_06be9890(lVar27,0,0);
                                  fStack00000000000000dc = 0.0;
                                  if ((uVar25 & 1) != 0) {
                                    lVar27 = *plVar1;
                                    if (*(int *)(*(long *)
                                                  Method_System_Collections_Generic_HashSet<CAPI_ovrAvatar2JointType>_Contains__
                                                + 0xe0) == 0) {
                                      thunk_FUN_032cd7c0();
                                    }
                                    plVar48 = (long *)
                                              Method_System_Collections_Generic_HashSet<CAPI_ovrAvatar2JointType>_Contains__
                                    ;
                                    if (lVar27 == 0) goto LAB_067dd33c;
                                    uVar25 = FUN_06bc3e18(lVar27,*(undefined4 *)
                                                                  (*(long *)(*(long *)
                                                  Method_System_Collections_Generic_HashSet<CAPI_ovrAvatar2JointType>_Contains__
                                                  + 0xb8) + 0x54),0);
                                    if ((uVar25 & 1) != 0) {
                                      lVar27 = *plVar1;
                                      if (*(int *)(*plVar48 + 0xe0) == 0) {
                                        thunk_FUN_032cd7c0();
                                        plVar48 = (long *)
                                                  Method_System_Collections_Generic_HashSet<CAPI_ovrAvatar2JointType>_Contains__
                                        ;
                                      }
                                      if (lVar27 == 0) goto LAB_067dd33c;
                                      uVar25 = FUN_06bc3e18(lVar27,*(undefined4 *)
                                                                    (*(long *)(*plVar48 + 0xb8) +
                                                                    0xcc),0);
                                      if ((uVar25 & 1) != 0) {
                                        lVar27 = *plVar1;
                                        if (*(int *)(*plVar48 + 0xe0) == 0) {
                                          thunk_FUN_032cd7c0();
                                          plVar48 = (long *)
                                                  Method_System_Collections_Generic_HashSet<CAPI_ovrAvatar2JointType>_Contains__
                                          ;
                                        }
                                        if (lVar27 != 0) {
                                          fVar61 = (float)FUN_06bc5a24(lVar27,*(undefined4 *)
                                                                               (*(long *)(*plVar48 +
                                                                                         0xb8) +
                                                                               0x54),0);
                                          if ((*plVar49 != 0) && (*plVar1 != 0)) {
                                            fVar60 = *(float *)(*plVar49 + 0x1a8);
                                            fVar82 = (float)FUN_06bc5a24(*plVar1,*(undefined4 *)
                                                                                  (*(long *)(*(long 
                                                  *)
                                                  Method_System_Collections_Generic_HashSet<CAPI_ovrAvatar2JointType>_Contains__
                                                  + 0xb8) + 0xcc),0);
                                            fVar82 = fVar82 * fVar61 * fVar60 * 0.25;
                                            if (fVar61 < fStack000000000000016c + fVar82) {
                                              fStack000000000000016c = fVar61 - fVar82;
                                            }
                                            goto LAB_067d7da0;
                                          }
                                        }
                                        goto LAB_067dd33c;
                                      }
                                    }
                                  }
                                  fVar82 = 0.0;
                                }
LAB_067d7da0:
                                fVar77 = *(float *)(unaff_x19 + 200);
                                fVar61 = (float)FUN_06c51cb0(&stack0x00001040,0);
                                fVar77 = fVar77 + (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                                                  fVar54 * (fVar73 + ((fVar61 - 
                                                  fStack000000000000016c) - fVar82));
                                fVar73 = (float)FUN_06c51cb8(&stack0x00001040,0);
                                fVar60 = *(float *)((long)unaff_x19 + 0x61c) +
                                         ((fStack000000000000017c +
                                          fVar54 * (fVar81 + fStack000000000000016c + fVar73)) -
                                         *(float *)(unaff_x19 + 0x9b));
                                fVar73 = (float)FUN_06c51ca8(&stack0x00001040,0);
                                fVar78 = fVar60 - fVar54 * (fStack000000000000016c +
                                                            fStack000000000000016c + fVar73);
                                fVar73 = (float)FUN_06c51ca0(&stack0x00001040,0);
                                fVar61 = fVar77 + (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                                                  fVar54 * (fVar82 + fVar82 +
                                                           fStack000000000000016c +
                                                           fStack000000000000016c + fVar73);
                                fVar73 = fVar77;
                                fVar81 = fVar61;
                                if (((*(int *)((long)unaff_x19 + 0x644) == 0) && (cVar34 == '\0'))
                                   && ((*(byte *)((long)unaff_x19 + 0x25c) >> 1 & 1) != 0)) {
                                  fVar68 = (float)(int)unaff_x19[0xbe] * fVar80;
                                  fVar73 = (float)FUN_06c51cb8(&stack0x00001040,0);
                                  fVar64 = fVar68 * fVar54 * (fVar82 + fStack000000000000016c +
                                                                       fVar73);
                                  fVar73 = (float)FUN_06c51cb8(&stack0x00001040,0);
                                  fVar81 = (float)FUN_06c51ca8(&stack0x00001040,0);
                                  fVar60 = fVar60 + 0.0;
                                  fVar78 = fVar78 + 0.0;
                                  fVar63 = fVar77 + fVar64;
                                  fVar68 = fVar68 * fVar54 * (((fVar73 - fVar81) -
                                                              fStack000000000000016c) - fVar82);
                                  fVar81 = fVar61 + fVar68;
                                  fVar70 = (fVar64 - fVar68) * 0.5;
                                  fVar77 = (fVar77 + fVar68) - fVar70;
                                  fVar61 = (fVar61 + fVar64) - fVar70;
                                  fVar73 = fVar63 - fVar70;
                                  fVar81 = fVar81 - fVar70;
                                }
                                if (*(char *)((long)unaff_x19 + 0x474) == '\0') {
                                  fVar63 = 0.0;
                                  fVar64 = 0.0;
                                  fVar74 = 0.0;
                                  fStack0000000000000104 = 0.0;
                                  fVar70 = fVar78;
                                  fVar68 = fVar60;
                                  fStack0000000000000118 = fVar77;
                                  fStack000000000000011c = fVar73;
                                }
                                else {
                                  thunk_FUN_06bda068(lVar26,0);
                                  fVar83 = (fVar78 + fVar60) * 0.5;
                                  fVar79 = (fVar61 + fVar77) * 0.5;
                                  fVar60 = fVar60 - fVar83;
                                  fStack0000000000000104 = 0.0;
                                  fVar68 = fVar60;
                                  fVar62 = (float)FUN_06bdb690(fVar73 - fVar79,lVar26,0);
                                  fStack0000000000000104 = fStack0000000000000104 + 0.0;
                                  fVar78 = fVar78 - fVar83;
                                  fVar63 = 0.0;
                                  fVar73 = fVar78;
                                  fVar77 = (float)FUN_06bdb690(fVar77 - fVar79,lVar26,0);
                                  fVar63 = fVar63 + 0.0;
                                  fVar74 = 0.0;
                                  fVar61 = (float)FUN_06bdb690(fVar61 - fVar79,lVar26,0);
                                  fVar61 = fVar79 + fVar61;
                                  fVar60 = fVar83 + fVar60;
                                  fVar74 = fVar74 + 0.0;
                                  fVar64 = 0.0;
                                  fVar81 = (float)FUN_06bdb690(fVar81 - fVar79,lVar26,0);
                                  fVar81 = fVar79 + fVar81;
                                  fVar78 = fVar83 + fVar78;
                                  fVar64 = fVar64 + 0.0;
                                  fVar70 = fVar83 + fVar73;
                                  fVar68 = fVar83 + fVar68;
                                  fStack0000000000000118 = fVar79 + fVar77;
                                  fStack000000000000011c = fVar79 + fVar62;
                                }
                                if (*plVar5 == 0) goto LAB_067dd33c;
                                lVar27 = *(long *)(*plVar5 + 0x38);
                                uVar25 = (ulong)(uint)fVar54;
                                if (lVar27 == 0) goto LAB_067dd33c;
                                if (*(uint *)(lVar27 + 0x18) <= *puVar3) goto LAB_067dd448;
                                lVar27 = lVar27 + (long)(int)*puVar3 * 0x178;
                                *(float *)(lVar27 + 0x11c) = fStack0000000000000118;
                                *(float *)(lVar27 + 0x120) = fVar70;
                                *(float *)(lVar27 + 0x124) = fVar63;
                                if ((*plVar5 == 0) ||
                                   (lVar27 = *(long *)(*plVar5 + 0x38), lVar27 == 0))
                                goto LAB_067dd33c;
                                if (*(uint *)(lVar27 + 0x18) <= *puVar3) goto LAB_067dd448;
                                lVar27 = lVar27 + (long)(int)*puVar3 * 0x178;
                                *(float *)(lVar27 + 0x110) = fStack000000000000011c;
                                *(float *)(lVar27 + 0x114) = fVar68;
                                *(float *)(lVar27 + 0x118) = fStack0000000000000104;
                                if ((*plVar5 == 0) ||
                                   (lVar27 = *(long *)(*plVar5 + 0x38), lVar27 == 0))
                                goto LAB_067dd33c;
                                if (*(uint *)(lVar27 + 0x18) <= *puVar3) goto LAB_067dd448;
                                lVar27 = lVar27 + (long)(int)*puVar3 * 0x178;
                                *(float *)(lVar27 + 0x128) = fVar61;
                                *(float *)(lVar27 + 300) = fVar60;
                                *(float *)(lVar27 + 0x130) = fVar74;
                                if ((*plVar5 == 0) ||
                                   (lVar27 = *(long *)(*plVar5 + 0x38), lVar27 == 0))
                                goto LAB_067dd33c;
                                if (*(uint *)(lVar27 + 0x18) <= *puVar3) goto LAB_067dd448;
                                lVar27 = lVar27 + (long)(int)*puVar3 * 0x178;
                                *(float *)(lVar27 + 0x134) = fVar81;
                                *(float *)(lVar27 + 0x138) = fVar78;
                                *(float *)(lVar27 + 0x13c) = fVar64;
                                if ((*plVar5 == 0) ||
                                   (lVar27 = *(long *)(*plVar5 + 0x38), lVar27 == 0))
                                goto LAB_067dd33c;
                                uVar47 = *puVar3;
                                lVar28 = (long)(int)uVar47;
                                if (*(uint *)(lVar27 + 0x18) <= uVar47) goto LAB_067dd448;
                                lVar50 = lVar27 + lVar28 * 0x178;
                                *(int *)(lVar50 + 0x140) = (int)unaff_x19[200];
                                fVar81 = *(float *)(unaff_x19 + 0x9b);
                                uVar66 = (ulong)(uint)fVar81;
                                fVar73 = *(float *)((long)unaff_x19 + 0x61c);
                                *(float *)(lVar50 + 0x15c) =
                                     (fVar61 - fStack0000000000000118) / (fVar68 - fVar70);
                                *(float *)(lVar50 + 0x14c) =
                                     (fStack000000000000017c - fVar81) + fVar73;
                                fVar61 = fStack0000000000000124 * fVar54;
                                if (*(int *)((long)unaff_x19 + 0x644) == 0) {
                                  fVar61 = fVar61 / fVar53;
                                  fStack0000000000000120 =
                                       (fStack0000000000000120 * fVar54) / fVar53;
                                }
                                else {
                                  fStack0000000000000120 = fStack0000000000000120 * fVar54;
                                }
                                uVar35 = *(uint *)(unaff_x19 + 0x93);
                                if ((uVar22 == 0) || (uVar47 == uVar35)) {
                                  fStack0000000000000120 = fVar73 + fStack0000000000000120;
                                  fVar61 = fVar73 + fVar61;
                                  fVar78 = fStack0000000000000120;
                                  fVar60 = fVar61;
                                  if (fVar73 != 0.0) {
                                    fVar60 = (fVar61 - fVar73) / *(float *)((long)unaff_x19 + 0x404)
                                    ;
                                    fVar78 = (fStack0000000000000120 - fVar73) /
                                             *(float *)((long)unaff_x19 + 0x404);
                                    if (fVar60 <= fVar61) {
                                      fVar60 = fVar61;
                                    }
                                    if (fStack0000000000000120 <= fVar78) {
                                      fVar78 = fStack0000000000000120;
                                    }
                                  }
                                  lVar27 = lVar27 + lVar28 * 0x178;
                                  fVar73 = fVar60;
                                  if (fVar60 <= *(float *)(unaff_x19 + 0x99)) {
                                    fVar73 = *(float *)(unaff_x19 + 0x99);
                                  }
                                  fVar77 = fVar78;
                                  if (*(float *)((long)unaff_x19 + 0x4cc) <= fVar78) {
                                    fVar77 = *(float *)((long)unaff_x19 + 0x4cc);
                                  }
                                  *(float *)((long)unaff_x19 + 0x4cc) = fVar77;
                                  *(float *)(unaff_x19 + 0x99) = fVar73;
                                  *(float *)(lVar27 + 0x154) = fVar60;
                                  *(float *)(lVar27 + 0x158) = fVar78;
                                  *(float *)(lVar27 + 0x148) = fVar61 - fVar81;
                                  *(float *)(unaff_x19 + 0x98) = fVar61 - fVar81;
                                  *(float *)(lVar27 + 0x150) = fStack0000000000000120 - fVar81;
                                  *(float *)((long)unaff_x19 + 0x4c4) =
                                       fStack0000000000000120 - fVar81;
                                  if (((int)unaff_x19[0x95] == 0) ||
                                     (*(char *)((long)unaff_x19 + 0x33c) != '\0')) {
                                    *(float *)(unaff_x19 + 0x97) = fVar73;
                                    if (unaff_x19[0x20] == 0) goto LAB_067dd33c;
                                    fVar73 = *(float *)((long)unaff_x19 + 0x4bc);
                                    fVar81 = (float)FUN_06c5199c(unaff_x19[0x20] + 0x50,0);
                                    fVar53 = (fVar54 * fVar81) / fVar53;
                                    uVar66 = (ulong)*(uint *)(unaff_x19 + 0x9b);
                                    if (fVar73 <= fVar53) {
                                      fVar73 = fVar53;
                                    }
                                    *(float *)((long)unaff_x19 + 0x4bc) = fVar73;
                                  }
                                  if ((float)uVar66 == 0.0) {
                                    fVar53 = *(float *)((long)unaff_x19 + 0x4b4);
                                    if (*(float *)((long)unaff_x19 + 0x4b4) <= fVar61) {
                                      fVar53 = fVar61;
                                    }
                                    *(float *)((long)unaff_x19 + 0x4b4) = fVar53;
                                  }
                                }
                                else {
                                  fVar53 = *(float *)(unaff_x19 + 0x99);
                                  lVar27 = lVar27 + lVar28 * 0x178;
                                  *(float *)(lVar27 + 0x154) = fVar53;
                                  fVar73 = *(float *)((long)unaff_x19 + 0x4cc);
                                  fVar53 = fVar53 - fVar81;
                                  *(float *)(lVar27 + 0x148) = fVar53;
                                  *(float *)(lVar27 + 0x158) = fVar73;
                                  *(float *)(unaff_x19 + 0x98) = fVar53;
                                  fVar73 = fVar73 - fVar81;
                                  *(float *)(lVar27 + 0x150) = fVar73;
                                  *(float *)((long)unaff_x19 + 0x4c4) = fVar73;
                                }
                                lVar27 = *plVar5;
                                if ((lVar27 == 0) ||
                                   (lVar28 = *(long *)(lVar27 + 0x38), lVar28 == 0))
                                goto LAB_067dd33c;
                                uVar23 = *puVar3;
                                if (*(uint *)(lVar28 + 0x18) <= uVar23) goto LAB_067dd448;
                                lVar28 = lVar28 + (long)(int)uVar23 * 0x178;
                                *(undefined1 *)(lVar28 + 0x194) = 0;
                                uVar41 = *(uint *)(unaff_x19 + 0x4f);
                                if ((uVar20 == 9) ||
                                   (((((uVar22 == 0 && (uVar20 != 3)) && (uVar20 != 0x200b)) &&
                                     (uVar20 != 0xad)) ||
                                    (((bool)(uVar20 == 0xad & (bVar13 ^ 1U)) ||
                                     (*(int *)((long)unaff_x19 + 0x644) == 1)))))) {
                                  *(undefined1 *)(lVar28 + 0x194) = 1;
                                  pfVar39 = (float *)((long)unaff_x19 + 0x354);
                                  pfVar36 = (float *)(unaff_x19 + 0x6a);
                                  if (bVar11) {
                                    lVar27 = *(long *)(lVar27 + 0x50);
                                    if (lVar27 == 0) goto LAB_067dd33c;
                                    if (*(uint *)(lVar27 + 0x18) <= *(uint *)(unaff_x19 + 0x95))
                                    goto LAB_067dd448;
                                    lVar27 = lVar27 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
                                    pfVar36 = (float *)(lVar27 + 0x60);
                                    pfVar39 = (float *)(lVar27 + 100);
                                  }
                                  fVar73 = *pfVar36;
                                  fVar81 = *pfVar39;
                                  fVar53 = *(float *)(unaff_x19 + 0x6c);
                                  fVar61 = *(float *)(unaff_x19 + 200);
                                  fStack0000000000000100 = (fVar85 - fVar73) - fVar81;
                                  bVar16 = true;
                                  if ((fVar53 <= fStack0000000000000100) &&
                                     (bVar16 = false, !NAN(fVar53))) {
                                    bVar16 = fVar53 == -1.0;
                                  }
                                  if (!bVar16) {
                                    fStack0000000000000100 = fVar53;
                                  }
                                  fVar53 = 0.0;
                                  if ((char)unaff_x19[0x1e] == '\0') {
                                    fVar53 = (float)FUN_06c51cc0(&stack0x00001040,0);
                                    uVar66 = (ulong)*(uint *)(unaff_x19 + 0x9b);
                                  }
                                  fVar60 = *(float *)((long)unaff_x19 + 0x2d4);
                                  fVar78 = *(float *)((long)unaff_x19 + 0x4cc);
                                  if (uVar20 != 0xad) {
                                    fVar75 = fVar54;
                                  }
                                  fVar68 = (float)uVar66;
                                  fVar77 = 0.0;
                                  if ((0.0 < fVar68) &&
                                     (fVar77 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
                                    fVar77 = *(float *)(unaff_x19 + 0x99) -
                                             *(float *)(unaff_x19 + 0x9a);
                                  }
                                  uVar23 = *puVar3;
                                  fVar77 = (*(float *)(unaff_x19 + 0x97) - (fVar78 - fVar68)) +
                                           fVar77;
                                  if (fVar51 < fVar77) {
                                    if (*(int *)((long)unaff_x19 + 0x2e4) == -1) {
                                      *(uint *)((long)unaff_x19 + 0x2e4) = uVar23;
                                    }
                                    puVar14 = 
                                    Method_System_Collections_Generic_HashSet<OvrAvatarShaderNameUtils_KnownShader>_Add__
                                    ;
                                    uVar32 = DAT_0139e7e8;
                                    if ((char)unaff_x19[0x47] != '\0') {
                                      fVar63 = *(float *)(unaff_x19 + 0x59);
                                      if (((fVar63 < *(float *)((long)unaff_x19 + 700)) &&
                                          (0.0 < fVar68)) &&
                                         (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49]))
                                      {
                                        fVar84 = *(float *)((long)unaff_x19 + 700) +
                                                 ((fVar72 - fVar77) / (float)(int)unaff_x19[0x95]) /
                                                 fVar84;
                                        if (fVar84 <= fVar63) {
                                          fVar84 = fVar63;
                                        }
                                        goto LAB_067dac68;
                                      }
                                      fVar68 = *(float *)((long)unaff_x19 + 0x1e4);
                                      fVar77 = *(float *)(unaff_x19 + 0x4a);
                                      uVar66 = (ulong)(uint)fVar77;
                                      if ((fVar77 < fVar68) &&
                                         (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49]))
                                      {
                                        fVar84 = (fVar68 - *(float *)(unaff_x19 + 0x48)) * 0.5;
                                        if (fVar84 <= DAT_013a0300) {
                                          fVar84 = DAT_013a0300;
                                        }
                                        fVar57 = (fVar68 - fVar84) * 20.0 + 0.5;
                                        *(float *)((long)unaff_x19 + 0x23c) = fVar68;
                                        fVar84 = DAT_013a07c8;
                                        if (fVar57 != INFINITY) {
                                          fVar84 = (float)(int)fVar57 / 20.0;
                                        }
                                        if (fVar84 <= fVar77) {
                                          fVar84 = fVar77;
                                        }
                                        goto LAB_067da750;
                                      }
                                    }
                                    switch((int)unaff_x19[0x5c]) {
                                    case 1:
                                      lVar27 = *(long *)
                                                Method_System_Collections_Generic_HashSet<OvrAvatarShaderNameUtils_KnownShader>_Add__
                                      ;
                                      if (*(int *)(lVar27 + 0xe0) == 0) {
                                        thunk_FUN_032cd7c0();
                                        lVar27 = *(long *)puVar14;
                                      }
                                      lVar28 = *(long *)(lVar27 + 0xb8);
                                      if (*(int *)(lVar28 + 0x1580) == 0) {
LAB_067da678:
                                        in_stack_00001078 = DAT_0139e7e8;
                                        puVar3[0] = 0;
                                        puVar3[1] = 0;
                                        uVar86 = 0xffffffff;
                                      }
                                      else {
                                        if (*(int *)(lVar27 + 0xe0) == 0) {
                                          thunk_FUN_032cd7c0();
                                          lVar28 = *(long *)(*(long *)
                                                  Method_System_Collections_Generic_HashSet<OvrAvatarShaderNameUtils_KnownShader>_Add__
                                                  + 0xb8);
                                        }
                                        FUN_04a0fee4(&stack0x00001090,lVar28 + 0x11f0,
                                                     *(undefined8 *)
                                                                                                            
                                                  Method_System_Collections_Generic_HashSet<OVRFaceExpressions_FaceExpression>__ctor__
                                                  );
                                        memcpy(&stack0x00000c30,&stack0x00001090,0x378);
LAB_067d8b20:
                                        iVar21 = FUN_06821f78();
LAB_067d8b2c:
                                        iVar24 = *(int *)((long)unaff_x19 + 0x494) + -1;
                                        *(int *)((long)unaff_x19 + 0x494) = iVar24;
                                        iVar18 = iVar18 + 1;
                                        uVar86 = iVar21 - 1;
                                        in_stack_00001078 = CONCAT44(0x2026,iVar24);
                                      }
                                      goto LAB_067d6d64;
                                    default:
                                      goto switchD_067d8568_caseD_2;
                                    case 3:
                                      if (*(int *)(*(long *)
                                                  Method_System_Collections_Generic_HashSet<OvrAvatarShaderNameUtils_KnownShader>_Add__
                                                  + 0xe0) == 0) {
                                        thunk_FUN_032cd7c0();
                                      }
LAB_067d86ec:
                                      uVar86 = FUN_06821f78();
                                      break;
                                    case 5:
                                      if ((uVar23 == 0) || ((int)uVar86 < 0)) {
                                        *puVar3 = 0;
                                        uVar86 = 0xffffffff;
                                        in_stack_00001078 = uVar32;
                                      }
                                      else {
                                        fVar75 = *(float *)(unaff_x19 + 0x99);
                                        if (*(int *)(*(long *)
                                                  Method_System_Collections_Generic_HashSet<OvrAvatarShaderNameUtils_KnownShader>_Add__
                                                  + 0xe0) == 0) {
                                          thunk_FUN_032cd7c0();
                                        }
                                        uVar86 = FUN_06821f78();
                                        if (fVar51 < fVar75 - fVar78) break;
                                        *(undefined1 *)((long)unaff_x19 + 0x33c) = 1;
                                        *(undefined4 *)(unaff_x19 + 0x93) =
                                             *(undefined4 *)((long)unaff_x19 + 0x494);
                                        uVar66 = *(ulong *)(*(long *)(*(long *)
                                                  Method_System_Collections_Generic_HashSet<OvrAvatarShaderNameUtils_KnownShader>_Add__
                                                  + 0xb8) + 0x15a8);
                                        *(float *)(unaff_x19 + 200) =
                                             *(float *)((long)unaff_x19 + 0x40c) + 0.0;
                                        *(undefined4 *)(unaff_x19 + 0x9a) = 0;
                                        lVar27 = NEON_rev64(uVar66,4);
                                        unaff_x19[0x99] = lVar27;
                                        *(undefined4 *)(unaff_x19 + 0x9b) = 0;
                                        *(undefined8 *)((long)unaff_x19 + 0x4b4) = 0;
                                        *(int *)(unaff_x19 + 0x95) = (int)unaff_x19[0x95] + 1;
                                        *(int *)(unaff_x19 + 0x96) = (int)unaff_x19[0x96] + 1;
                                      }
                                      goto LAB_067d6d64;
                                    case 6:
                                      if (*(int *)(*(long *)
                                                  Method_System_Collections_Generic_HashSet<OvrAvatarShaderNameUtils_KnownShader>_Add__
                                                  + 0xe0) == 0) {
                                        thunk_FUN_032cd7c0();
                                      }
                                      uVar86 = FUN_06821f78();
                                      lVar27 = unaff_x19[0x5d];
                                      if (*(int *)(*(long *)PTR_DAT_072794f0 + 0xe0) == 0) {
                                        thunk_FUN_032cd7c0(*(long *)PTR_DAT_072794f0);
                                      }
                                      uVar30 = FUN_06be9890(lVar27,0,0);
                                      if ((uVar30 & 1) != 0) {
                                        plVar48 = (long *)unaff_x19[0x5d];
                                        uVar32 = (**(code **)(*unaff_x19 + 0x548))();
                                        if (plVar48 == (long *)0x0) goto LAB_067dd33c;
                                        (**(code **)(*plVar48 + 0x558))
                                                  (plVar48,uVar32,*(undefined8 *)(*plVar48 + 0x560))
                                        ;
                                        lVar27 = unaff_x19[0x5d];
                                        if (lVar27 == 0) goto LAB_067dd33c;
                                        *(int *)(lVar27 + 0x400) = (int)unaff_x19[0x80];
                                        FUN_06814d00(lVar27,*(undefined4 *)((long)unaff_x19 + 0x494)
                                                     ,0);
                                        plVar48 = (long *)unaff_x19[0x5d];
                                        if (plVar48 == (long *)0x0) goto LAB_067dd33c;
                                        (**(code **)(*plVar48 + 0x7d8))
                                                  (plVar48,0,0,*(undefined8 *)(*plVar48 + 0x7e0));
                                        *(undefined1 *)(unaff_x19 + 0x5f) = 1;
                                      }
                                    }
LAB_067d88ac:
                                    in_stack_00001078 = CONCAT44(3,uVar23);
                                    goto LAB_067d6d64;
                                  }
switchD_067d8568_caseD_2:
                                  puVar14 = 
                                  Method_System_Collections_Generic_HashSet<OvrAvatarShaderNameUtils_KnownShader>_Add__
                                  ;
                                  fVar78 = 1.0 - fVar60;
                                  uVar66 = (ulong)(uint)fVar78;
                                  fVar53 = ABS(fVar61) + fVar53 * fVar78 * fVar75;
                                  fVar75 = 1.0;
                                  if ((uVar41 & 0x18) != 0) {
                                    fVar75 = DAT_013a01c4;
                                  }
                                  fVar61 = fVar75 * fStack0000000000000100;
                                  if (fVar61 < fVar53) {
                                    if (((char)unaff_x19[0x5b] == '\0') ||
                                       (uVar23 == *(uint *)(unaff_x19 + 0x93))) {
                                      if (((char)unaff_x19[0x47] != '\0') &&
                                         (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49]))
                                      {
                                        fVar61 = *(float *)(unaff_x19 + 0x5a) / 100.0;
                                        if (fVar60 < fVar61) {
                                          fVar84 = fVar53 / fVar78;
                                          if (fVar60 <= 0.0) {
                                            fVar84 = fVar53;
                                          }
                                          fVar60 = fVar60 + (fVar53 - fVar75 * (
                                                  fStack0000000000000100 + DAT_013a055c)) / fVar84;
                                          goto LAB_067dd3cc;
                                        }
                                        fVar60 = *(float *)((long)unaff_x19 + 0x1e4);
                                        uVar66 = (ulong)(uint)fVar60;
                                        fVar61 = *(float *)(unaff_x19 + 0x4a);
                                        if (fVar60 <= fVar61) goto LAB_067d867c;
LAB_067dd340:
                                        fVar84 = (fVar60 - *(float *)(unaff_x19 + 0x48)) * 0.5;
                                        if (fVar84 <= DAT_013a0300) {
                                          fVar84 = DAT_013a0300;
                                        }
                                        *(float *)((long)unaff_x19 + 0x23c) = fVar60;
                                        fVar57 = (fVar60 - fVar84) * 20.0 + 0.5;
                                        fVar84 = DAT_013a07c8;
                                        if (fVar57 != INFINITY) {
                                          fVar84 = (float)(int)fVar57 / 20.0;
                                        }
                                        if (fVar84 <= fVar61) {
                                          fVar84 = fVar61;
                                        }
                                        goto LAB_067da750;
                                      }
LAB_067d867c:
                                      iVar21 = (int)unaff_x19[0x5c];
                                      if (iVar21 == 1) {
                                        lVar27 = *(long *)
                                                  Method_System_Collections_Generic_HashSet<OvrAvatarShaderNameUtils_KnownShader>_Add__
                                        ;
                                        if (*(int *)(lVar27 + 0xe0) == 0) {
                                          thunk_FUN_032cd7c0();
                                          lVar27 = *(long *)puVar14;
                                        }
                                        lVar28 = *(long *)(lVar27 + 0xb8);
                                        if (*(int *)(lVar28 + 0x1580) != 0) {
                                          if (*(int *)(lVar27 + 0xe0) == 0) {
                                            thunk_FUN_032cd7c0();
                                            lVar28 = *(long *)(*(long *)
                                                  Method_System_Collections_Generic_HashSet<OvrAvatarShaderNameUtils_KnownShader>_Add__
                                                  + 0xb8);
                                          }
                                          FUN_04a0fee4(&stack0x00001090,lVar28 + 0x11f0,
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Collections_Generic_HashSet<OVRFaceExpressions_FaceExpression>__ctor__
                                                  );
                                          memcpy(&stack0x00000540,&stack0x00001090,0x378);
                                          goto LAB_067d8b20;
                                        }
                                        goto LAB_067da678;
                                      }
                                      if (iVar21 != 6) {
                                        if (iVar21 == 3) {
                                          if (*(int *)(*(long *)
                                                  Method_System_Collections_Generic_HashSet<OvrAvatarShaderNameUtils_KnownShader>_Add__
                                                  + 0xe0) == 0) {
                                            thunk_FUN_032cd7c0();
                                          }
                                          goto LAB_067d86ec;
                                        }
                                        goto LAB_067d9048;
                                      }
                                      if (*(int *)(*(long *)
                                                  Method_System_Collections_Generic_HashSet<OvrAvatarShaderNameUtils_KnownShader>_Add__
                                                  + 0xe0) == 0) {
                                        thunk_FUN_032cd7c0();
                                      }
                                      uVar86 = FUN_06821f78();
                                      lVar27 = unaff_x19[0x5d];
                                      if (*(int *)(*(long *)PTR_DAT_072794f0 + 0xe0) == 0) {
                                        thunk_FUN_032cd7c0(*(long *)PTR_DAT_072794f0);
                                      }
                                      uVar30 = FUN_06be9890(lVar27,0,0);
                                      if ((uVar30 & 1) != 0) {
                                        plVar48 = (long *)unaff_x19[0x5d];
                                        uVar32 = (**(code **)(*unaff_x19 + 0x548))();
                                        if (plVar48 == (long *)0x0) goto LAB_067dd33c;
                                        (**(code **)(*plVar48 + 0x558))
                                                  (plVar48,uVar32,*(undefined8 *)(*plVar48 + 0x560))
                                        ;
                                        lVar27 = unaff_x19[0x5d];
                                        if (lVar27 == 0) goto LAB_067dd33c;
                                        *(int *)(lVar27 + 0x400) = (int)unaff_x19[0x80];
                                        FUN_06814d00(lVar27,*(undefined4 *)((long)unaff_x19 + 0x494)
                                                     ,0);
                                        plVar48 = (long *)unaff_x19[0x5d];
                                        if (plVar48 == (long *)0x0) goto LAB_067dd33c;
                                        (**(code **)(*plVar48 + 0x7d8))
                                                  (plVar48,0,0,*(undefined8 *)(*plVar48 + 0x7e0));
                                        *(undefined1 *)(unaff_x19 + 0x5f) = 1;
                                      }
LAB_067d8c40:
                                      in_stack_00001078 = CONCAT44(3,*puVar3);
                                    }
                                    else {
                                      if (*(int *)(*(long *)
                                                  Method_System_Collections_Generic_HashSet<OvrAvatarShaderNameUtils_KnownShader>_Add__
                                                  + 0xe0) == 0) {
                                        thunk_FUN_032cd7c0();
                                      }
                                      uVar86 = FUN_06821f78();
                                      if (*(float *)(unaff_x19 + 0x58) == DAT_013a0308) {
                                        lVar27 = *plVar5;
                                        if ((lVar27 == 0) ||
                                           (lVar28 = *(long *)(lVar27 + 0x38), lVar28 == 0))
                                        goto LAB_067dd33c;
                                        if (*(uint *)(lVar28 + 0x18) <= *puVar3) goto LAB_067dd448;
                                        fVar61 = *(float *)(unaff_x19 + 0x9b);
                                        fVar60 = 0.0;
                                        if ((0.0 < fVar61) &&
                                           (fVar60 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0'
                                           )) {
                                          fVar60 = *(float *)(unaff_x19 + 0x99) -
                                                   *(float *)(unaff_x19 + 0x9a);
                                        }
                                        fVar60 = fVar57 * *(float *)(unaff_x19 + 0x57) +
                                                 *(float *)(lVar28 + (long)(int)*puVar3 * 0x178 +
                                                           0x154) +
                                                 (fVar60 - *(float *)((long)unaff_x19 + 0x4cc)) +
                                                 fVar84 * (fVar52 + *(float *)((long)unaff_x19 + 700
                                                                              ));
                                      }
                                      else {
                                        lVar27 = unaff_x19[0x6d];
                                        *(undefined1 *)((long)unaff_x19 + 0x2c4) = 1;
                                        if (lVar27 == 0) goto LAB_067dd33c;
                                        fVar61 = *(float *)(unaff_x19 + 0x9b);
                                        fVar60 = *(float *)(unaff_x19 + 0x58) +
                                                 fVar57 * *(float *)(unaff_x19 + 0x57);
                                      }
                                      puVar14 = 
                                      Method_System_Collections_Generic_HashSet<OvrAvatarShaderNameUtils_KnownShader>_Add__
                                      ;
                                      lVar27 = *(long *)(lVar27 + 0x38);
                                      if (lVar27 == 0) goto LAB_067dd33c;
                                      uVar42 = *(uint *)((long)unaff_x19 + 0x494);
                                      if ((*(uint *)(lVar27 + 0x18) <= uVar42) ||
                                         (uVar10 = uVar42 - 1, *(uint *)(lVar27 + 0x18) <= uVar10))
                                      goto LAB_067dd448;
                                      uVar66 = (ulong)(uint)(fVar60 + *(float *)(unaff_x19 + 0x97));
                                      fVar78 = (fVar60 + *(float *)(unaff_x19 + 0x97) + fVar61) -
                                               *(float *)(lVar27 + (long)(int)uVar42 * 0x178 + 0x158
                                                         );
                                      if ((bVar13 || *(short *)(lVar27 + (long)(int)uVar10 * 0x178 +
                                                               0x20) != 0xad) ||
                                         ((fVar51 <= fVar78 && ((int)unaff_x19[0x5c] != 0)))) {
                                        if (*(short *)(lVar27 + (long)(int)uVar42 * 0x178 + 0x20) ==
                                            0xad) {
                                          bVar13 = true;
                                        }
                                        else {
                                          if ((bVar8 & *(byte *)(unaff_x19 + 0x47)) != 0) {
                                            fVar60 = *(float *)((long)unaff_x19 + 0x2d4);
                                            fVar61 = *(float *)(unaff_x19 + 0x5a) / 100.0;
                                            if ((fVar61 <= fVar60) ||
                                               ((int)unaff_x19[0x49] <=
                                                *(int *)((long)unaff_x19 + 0x244))) {
                                              fVar60 = *(float *)((long)unaff_x19 + 0x1e4);
                                              uVar66 = (ulong)(uint)fVar60;
                                              fVar61 = *(float *)(unaff_x19 + 0x4a);
                                              if ((fVar61 < fVar60) &&
                                                 (*(int *)((long)unaff_x19 + 0x244) <
                                                  (int)unaff_x19[0x49])) goto LAB_067dd340;
                                              goto LAB_067d8e34;
                                            }
LAB_067dd3dc:
                                            fVar84 = fVar53;
                                            if (0.0 < fVar60) {
                                              fVar84 = fVar53 / (1.0 - fVar60);
                                            }
                                            fVar60 = fVar60 + (fVar53 - fVar75 * (
                                                  fStack0000000000000100 + DAT_013a055c)) / fVar84;
LAB_067dd3cc:
                                            if (fVar61 <= fVar60) {
                                              fVar60 = fVar61;
                                            }
                                            *(float *)((long)unaff_x19 + 0x2d4) = fVar60;
                                            return;
                                          }
LAB_067d8e34:
                                          lVar27 = *(long *)
                                                  Method_System_Collections_Generic_HashSet<OvrAvatarShaderNameUtils_KnownShader>_Add__
                                          ;
                                          if (*(int *)(lVar27 + 0xe0) == 0) {
                                            thunk_FUN_032cd7c0();
                                            lVar27 = *(long *)puVar14;
                                          }
                                          iVar21 = *(int *)(*(long *)(lVar27 + 0xb8) + 0xe78);
                                          if (((iVar21 != uStack000000000000002c) && (iVar21 != -1))
                                             && (bVar8 == 1)) {
                                            if (*(int *)(lVar27 + 0xe0) == 0) {
                                              thunk_FUN_032cd7c0();
                                            }
                                            uVar86 = FUN_06821f78();
                                            if ((unaff_x19[0x6d] == 0) ||
                                               (lVar27 = *(long *)(unaff_x19[0x6d] + 0x38),
                                               lVar27 == 0)) goto LAB_067dd33c;
                                            uVar42 = *puVar3 - 1;
                                            if (*(uint *)(lVar27 + 0x18) <= uVar42)
                                            goto LAB_067dd448;
                                            uStack000000000000002c = iVar21;
                                            if (*(short *)(lVar27 + (long)(int)uVar42 * 0x178 + 0x20
                                                          ) == 0xad) {
                                              bVar13 = false;
                                              *puVar3 = uVar42;
                                              uVar86 = uVar86 - 1;
                                              in_stack_00001078 = CONCAT44(0x2d,uVar42);
                                              goto LAB_067d6d64;
                                            }
                                          }
                                          if (fVar78 <= fVar51) {
switchD_067d8fe4_caseD_0:
                                            uVar66 = uVar25;
                                            FUN_068229f0(fVar84,uVar25,fVar57,
                                                         *(undefined4 *)((long)unaff_x19 + 0x2fc),
                                                         fStack00000000000000dc,
                                                         fStack0000000000000134,
                                                         fStack0000000000000100,fVar52);
                                          }
                                          else {
                                            if (*(int *)((long)unaff_x19 + 0x2e4) == -1) {
                                              *(undefined4 *)((long)unaff_x19 + 0x2e4) =
                                                   *(undefined4 *)((long)unaff_x19 + 0x494);
                                            }
                                            fVar61 = fVar51;
                                            if ((char)unaff_x19[0x47] != '\0') {
                                              fVar61 = *(float *)(unaff_x19 + 0x59);
                                              if ((fVar61 < *(float *)((long)unaff_x19 + 700)) &&
                                                 (*(int *)((long)unaff_x19 + 0x244) <
                                                  (int)unaff_x19[0x49])) {
                                                fVar84 = *(float *)((long)unaff_x19 + 700) +
                                                         ((fVar72 - fVar78) /
                                                         (float)((int)unaff_x19[0x95] + 1)) / fVar84
                                                ;
                                                if (fVar84 <= fVar61) {
                                                  fVar84 = fVar61;
                                                }
LAB_067dac68:
                                                *(float *)((long)unaff_x19 + 700) = fVar84;
                                                return;
                                              }
                                              fVar60 = *(float *)((long)unaff_x19 + 0x2d4);
                                              fVar61 = *(float *)(unaff_x19 + 0x5a) / 100.0;
                                              if ((fVar60 < fVar61) &&
                                                 (*(int *)((long)unaff_x19 + 0x244) <
                                                  (int)unaff_x19[0x49])) goto LAB_067dd3dc;
                                              fVar60 = *(float *)((long)unaff_x19 + 0x1e4);
                                              uVar66 = (ulong)(uint)fVar60;
                                              fVar61 = *(float *)(unaff_x19 + 0x4a);
                                              if ((fVar61 < fVar60) &&
                                                 (*(int *)((long)unaff_x19 + 0x244) <
                                                  (int)unaff_x19[0x49])) goto LAB_067dd340;
                                            }
                                            switch((int)unaff_x19[0x5c]) {
                                            case 0:
                                            case 2:
                                            case 4:
                                              goto switchD_067d8fe4_caseD_0;
                                            case 1:
                                              lVar27 = *(long *)
                                                  Method_System_Collections_Generic_HashSet<OvrAvatarShaderNameUtils_KnownShader>_Add__
                                              ;
                                              if (*(int *)(lVar27 + 0xe0) == 0) {
                                                thunk_FUN_032cd7c0();
                                                lVar27 = *(long *)
                                                  Method_System_Collections_Generic_HashSet<OvrAvatarShaderNameUtils_KnownShader>_Add__
                                                ;
                                              }
                                              lVar28 = *(long *)(lVar27 + 0xb8);
                                              if (*(int *)(lVar28 + 0x1580) == 0) {
                                                bVar13 = false;
                                                goto LAB_067da678;
                                              }
                                              if (*(int *)(lVar27 + 0xe0) == 0) {
                                                thunk_FUN_032cd7c0();
                                                lVar28 = *(long *)(*(long *)
                                                  Method_System_Collections_Generic_HashSet<OvrAvatarShaderNameUtils_KnownShader>_Add__
                                                  + 0xb8);
                                              }
                                              FUN_04a0fee4(&stack0x00001090,lVar28 + 0x11f0,
                                                           *(undefined8 *)
                                                                                                                        
                                                  Method_System_Collections_Generic_HashSet<OVRFaceExpressions_FaceExpression>__ctor__
                                                  );
                                              memcpy(&stack0x000008b8,&stack0x00001090,0x378);
                                              iVar21 = FUN_06821f78();
                                              bVar13 = false;
                                              goto LAB_067d8b2c;
                                            case 3:
                                              if (*(int *)(*(long *)
                                                  Method_System_Collections_Generic_HashSet<OvrAvatarShaderNameUtils_KnownShader>_Add__
                                                  + 0xe0) == 0) {
                                                thunk_FUN_032cd7c0();
                                              }
                                              uVar86 = FUN_06821f78();
                                              bVar13 = false;
                                              goto LAB_067d88ac;
                                            case 5:
                                              *(undefined1 *)((long)unaff_x19 + 0x33c) = 1;
                                              uVar66 = uVar25;
                                              FUN_068229f0(fVar84,uVar25,fVar57,
                                                           *(undefined4 *)((long)unaff_x19 + 0x2fc),
                                                           fStack00000000000000dc,
                                                           fStack0000000000000134,
                                                           fStack0000000000000100,fVar52);
                                              *(undefined4 *)(unaff_x19 + 0x9a) = 0;
                                              *(undefined4 *)(unaff_x19 + 0x9b) = 0;
                                              *(undefined8 *)((long)unaff_x19 + 0x4b4) = 0;
                                              *(int *)(unaff_x19 + 0x96) = (int)unaff_x19[0x96] + 1;
                                              break;
                                            case 6:
                                              lVar27 = unaff_x19[0x5d];
                                              if (*(int *)(*(long *)PTR_DAT_072794f0 + 0xe0) == 0) {
                                                thunk_FUN_032cd7c0();
                                              }
                                              uVar30 = FUN_06be9890(lVar27,0,0);
                                              if ((uVar30 & 1) != 0) {
                                                plVar48 = (long *)unaff_x19[0x5d];
                                                uVar32 = (**(code **)(*unaff_x19 + 0x548))();
                                                if (plVar48 == (long *)0x0) goto LAB_067dd33c;
                                                (**(code **)(*plVar48 + 0x558))
                                                          (plVar48,uVar32,
                                                           *(undefined8 *)(*plVar48 + 0x560));
                                                lVar27 = unaff_x19[0x5d];
                                                if (lVar27 == 0) goto LAB_067dd33c;
                                                *(int *)(lVar27 + 0x400) = (int)unaff_x19[0x80];
                                                FUN_06814d00(lVar27,*(undefined4 *)
                                                                     ((long)unaff_x19 + 0x494),0);
                                                plVar48 = (long *)unaff_x19[0x5d];
                                                if (plVar48 == (long *)0x0) goto LAB_067dd33c;
                                                (**(code **)(*plVar48 + 0x7d8))
                                                          (plVar48,0,0,
                                                           *(undefined8 *)(*plVar48 + 0x7e0));
                                                *(undefined1 *)(unaff_x19 + 0x5f) = 1;
                                              }
                                              bVar13 = false;
                                              goto LAB_067d8c40;
                                            default:
                                              bVar13 = false;
                                              goto LAB_067d9048;
                                            }
                                          }
                                          bVar8 = 1;
                                          bVar13 = false;
                                          bVar12 = true;
                                        }
                                      }
                                      else {
                                        bVar13 = false;
                                        *puVar3 = uVar10;
                                        uVar86 = uVar86 - 1;
                                        in_stack_00001078 = CONCAT44(0x2d,uVar10);
                                      }
                                    }
                                    goto LAB_067d6d64;
                                  }
LAB_067d9048:
                                  if (uVar20 != 0xad) {
                                    if (uVar20 == 9) {
                                      lVar27 = *plVar5;
                                      if ((lVar27 != 0) &&
                                         (lVar28 = *(long *)(lVar27 + 0x38), lVar28 != 0)) {
                                        uVar23 = *puVar3;
                                        if (*(uint *)(lVar28 + 0x18) <= uVar23) goto LAB_067dd448;
                                        *(undefined1 *)(lVar28 + (long)(int)uVar23 * 0x178 + 0x194)
                                             = 0;
                                        *(uint *)((long)unaff_x19 + 0x4a4) = uVar23;
                                        lVar28 = *(long *)(lVar27 + 0x50);
                                        if (lVar28 != 0) {
                                          if (*(uint *)(unaff_x19 + 0x95) < *(uint *)(lVar28 + 0x18)
                                             ) {
                                            lVar28 = lVar28 + (long)(int)*(uint *)(unaff_x19 + 0x95)
                                                              * 0x5c;
                                            *(int *)(lVar28 + 0x2c) = *(int *)(lVar28 + 0x2c) + 1;
                                            goto LAB_067d90b8;
                                          }
                                          goto LAB_067dd448;
                                        }
                                      }
                                    }
                                    else {
                                      if (*(int *)((long)unaff_x19 + 0x644) == 1) {
                                        (**(code **)(*unaff_x19 + 0x8c8))(fVar61,fVar82);
                                      }
                                      else if (*(int *)((long)unaff_x19 + 0x644) == 0) {
                                        (**(code **)(*unaff_x19 + 0x8b8))(fStack000000000000016c);
                                      }
                                      if (bVar12) {
                                        *(uint *)((long)unaff_x19 + 0x49c) = *puVar3;
                                      }
                                      *(uint *)((long)unaff_x19 + 0x4a4) = *puVar3;
                                      *(int *)((long)unaff_x19 + 0x4ac) =
                                           *(int *)((long)unaff_x19 + 0x4ac) + 1;
                                      if ((unaff_x19[0x6d] != 0) &&
                                         (lVar27 = *(long *)(unaff_x19[0x6d] + 0x50), lVar27 != 0))
                                      {
                                        if (*(uint *)(unaff_x19 + 0x95) < *(uint *)(lVar27 + 0x18))
                                        {
                                          lVar27 = lVar27 + (long)(int)*(uint *)(unaff_x19 + 0x95) *
                                                            0x5c;
                                          bVar12 = false;
                                          *(float *)(lVar27 + 0x60) = fVar73;
                                          *(float *)(lVar27 + 100) = fVar81;
                                          goto LAB_067d91a0;
                                        }
                                        goto LAB_067dd448;
                                      }
                                    }
                                    goto LAB_067dd33c;
                                  }
                                  if ((*plVar5 == 0) ||
                                     (lVar27 = *(long *)(*plVar5 + 0x38), lVar27 == 0))
                                  goto LAB_067dd33c;
                                  if (*(uint *)(lVar27 + 0x18) <= *puVar3) goto LAB_067dd448;
                                  *(undefined1 *)(lVar27 + (long)(int)*puVar3 * 0x178 + 0x194) = 0;
                                }
                                else {
                                  if (((uVar20 & 0xfffffffe) == 10) && ((int)unaff_x19[0x5c] == 6))
                                  {
                                    fVar53 = (float)uVar66;
                                    fVar75 = 0.0;
                                    if ((0.0 < fVar53) &&
                                       (fVar75 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
                                      fVar75 = *(float *)(unaff_x19 + 0x99) -
                                               *(float *)(unaff_x19 + 0x9a);
                                    }
                                    uVar66 = (ulong)(uint)fVar51;
                                    if (fVar51 < (*(float *)(unaff_x19 + 0x97) -
                                                 (*(float *)((long)unaff_x19 + 0x4cc) - fVar53)) +
                                                 fVar75) {
                                      if (*(int *)((long)unaff_x19 + 0x2e4) == -1) {
                                        *(uint *)((long)unaff_x19 + 0x2e4) = uVar23;
                                      }
                                      if (*(int *)(*(long *)
                                                  Method_System_Collections_Generic_HashSet<OvrAvatarShaderNameUtils_KnownShader>_Add__
                                                  + 0xe0) == 0) {
                                        thunk_FUN_032cd7c0();
                                      }
                                      uVar86 = FUN_06821f78();
                                      lVar27 = unaff_x19[0x5d];
                                      if (*(int *)(*(long *)PTR_DAT_072794f0 + 0xe0) == 0) {
                                        thunk_FUN_032cd7c0(*(long *)PTR_DAT_072794f0);
                                      }
                                      uVar30 = FUN_06be9890(lVar27,0,0);
                                      if ((uVar30 & 1) != 0) {
                                        plVar48 = (long *)unaff_x19[0x5d];
                                        uVar32 = (**(code **)(*unaff_x19 + 0x548))();
                                        if (plVar48 != (long *)0x0) {
                                          (**(code **)(*plVar48 + 0x558))
                                                    (plVar48,uVar32,
                                                     *(undefined8 *)(*plVar48 + 0x560));
                                          lVar27 = unaff_x19[0x5d];
                                          if (lVar27 != 0) {
                                            *(int *)(lVar27 + 0x400) = (int)unaff_x19[0x80];
                                            FUN_06814d00(lVar27,*(undefined4 *)
                                                                 ((long)unaff_x19 + 0x494),0);
                                            plVar48 = (long *)unaff_x19[0x5d];
                                            if (plVar48 != (long *)0x0) {
                                              (**(code **)(*plVar48 + 0x7d8))
                                                        (plVar48,0,0,
                                                         *(undefined8 *)(*plVar48 + 0x7e0));
                                              *(undefined1 *)(unaff_x19 + 0x5f) = 1;
                                              goto LAB_067d88ac;
                                            }
                                          }
                                        }
                                        goto LAB_067dd33c;
                                      }
                                      goto LAB_067d88ac;
                                    }
                                  }
                                  if ((((uVar20 - 0x2007 < 0x23) &&
                                       ((1L << ((ulong)(uVar20 - 0x2007) & 0x3f) & 0x600000001U) !=
                                        0)) || (uVar20 - 10 < 2)) || (uVar20 == 0xa0)) {
LAB_067d8c8c:
                                    if (((uVar20 != 0xad) && (uVar20 != 0x200b)) &&
                                       (uVar20 != 0x2060)) {
                                      lVar27 = *plVar5;
                                      if ((lVar27 == 0) ||
                                         (lVar28 = *(long *)(lVar27 + 0x50), lVar28 == 0))
                                      goto LAB_067dd33c;
                                      if (*(uint *)(lVar28 + 0x18) <= *(uint *)(unaff_x19 + 0x95))
                                      goto LAB_067dd448;
                                      lVar28 = lVar28 + (long)(int)*(uint *)(unaff_x19 + 0x95) *
                                                        0x5c;
                                      *(int *)(lVar28 + 0x2c) = *(int *)(lVar28 + 0x2c) + 1;
                                      *(int *)(lVar27 + 0x20) = *(int *)(lVar27 + 0x20) + 1;
                                    }
                                  }
                                  else {
                                    if (*(int *)(*(long *)PTR_DAT_0727fa20 + 0xe0) == 0) {
                                      thunk_FUN_032cd7c0();
                                    }
                                    uVar25 = FUN_058a5c00(uVar20,0);
                                    if ((uVar25 & 1) != 0) goto LAB_067d8c8c;
                                  }
                                  if (uVar20 == 0xa0) {
                                    if ((*plVar5 == 0) ||
                                       (lVar27 = *(long *)(*plVar5 + 0x50), lVar27 == 0))
                                    goto LAB_067dd33c;
                                    if (*(uint *)(lVar27 + 0x18) <= *(uint *)(unaff_x19 + 0x95))
                                    goto LAB_067dd448;
                                    lVar27 = lVar27 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
LAB_067d90b8:
                                    *(int *)(lVar27 + 0x20) = *(int *)(lVar27 + 0x20) + 1;
                                  }
                                }
LAB_067d91a0:
                                if (((int)unaff_x19[0x5c] == 1) && ((uVar20 == 0x2d || (!bVar11))))
                                {
                                  if (unaff_x19[0xcb] == 0) goto LAB_067dd33c;
                                  fVar75 = *(float *)(unaff_x19 + 0x3d);
                                  iVar21 = FUN_06c5195c(unaff_x19[0xcb] + 0x50,0);
                                  if (unaff_x19[0xcb] == 0) goto LAB_067dd33c;
                                  fVar73 = (float)FUN_06c5196c(unaff_x19[0xcb] + 0x50,0);
                                  lVar27 = unaff_x19[0xca];
                                  fVar53 = fVar69;
                                  if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
                                    fVar53 = 1.0;
                                  }
                                  if ((lVar27 == 0) || (*(long *)(lVar27 + 0x20) == 0))
                                  goto LAB_067dd33c;
                                  fVar61 = *(float *)((long)unaff_x19 + 0x404);
                                  fVar60 = *(float *)(lVar27 + 0x2c);
                                  fVar81 = (float)FUN_06c51eb4(*(long *)(lVar27 + 0x20),0);
                                  fVar82 = *(float *)(unaff_x19 + 0x6a);
                                  fVar81 = fVar61 * (fVar75 / (float)iVar21) * fVar73 * fVar53 *
                                           fVar60 * fVar81;
                                  fVar75 = *(float *)((long)unaff_x19 + 0x354);
                                  if ((uVar20 == 10) &&
                                     (*(int *)((long)unaff_x19 + 0x494) != (int)unaff_x19[0x93])) {
                                    if ((*plVar5 == 0) ||
                                       (lVar27 = *(long *)(*plVar5 + 0x38), lVar27 == 0))
                                    goto LAB_067dd33c;
                                    uVar23 = *(int *)((long)unaff_x19 + 0x494) - 1;
                                    if (*(uint *)(lVar27 + 0x18) <= uVar23) goto LAB_067dd448;
                                    if (unaff_x19[0xcb] == 0) goto LAB_067dd33c;
                                    fVar53 = *(float *)(lVar27 + (long)(int)uVar23 * 0x178 + 0x60);
                                    iVar21 = FUN_06c5195c(unaff_x19[0xcb] + 0x50,0);
                                    if (unaff_x19[0xcb] == 0) goto LAB_067dd33c;
                                    fVar61 = (float)FUN_06c5196c(unaff_x19[0xcb] + 0x50,0);
                                    lVar27 = unaff_x19[0xca];
                                    fVar73 = fVar69;
                                    if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
                                      fVar73 = 1.0;
                                    }
                                    if ((lVar27 == 0) || (*(long *)(lVar27 + 0x20) == 0))
                                    goto LAB_067dd33c;
                                    fVar60 = *(float *)((long)unaff_x19 + 0x404);
                                    fVar78 = *(float *)(lVar27 + 0x2c);
                                    fVar81 = (float)FUN_06c51eb4(*(long *)(lVar27 + 0x20),0);
                                    if ((*plVar5 == 0) ||
                                       (lVar27 = *(long *)(*plVar5 + 0x50), lVar27 == 0))
                                    goto LAB_067dd33c;
                                    if (*(uint *)(lVar27 + 0x18) <= *(uint *)(unaff_x19 + 0x95))
                                    goto LAB_067dd448;
                                    lVar27 = lVar27 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
                                    fVar82 = *(float *)(lVar27 + 0x60);
                                    fVar75 = *(float *)(lVar27 + 100);
                                    fVar81 = fVar60 * (fVar53 / (float)iVar21) * fVar61 * fVar73 *
                                             fVar78 * fVar81;
                                  }
                                  fVar61 = *(float *)(unaff_x19 + 0x9b);
                                  fVar53 = 0.0;
                                  fVar73 = 0.0;
                                  if ((0.0 < fVar61) &&
                                     (fVar73 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
                                    fVar73 = *(float *)(unaff_x19 + 0x99) -
                                             *(float *)(unaff_x19 + 0x9a);
                                  }
                                  fVar78 = *(float *)(unaff_x19 + 0x97);
                                  fVar77 = *(float *)((long)unaff_x19 + 0x4cc);
                                  fVar60 = *(float *)(unaff_x19 + 200);
                                  if ((char)unaff_x19[0x1e] == '\0') {
                                    if ((unaff_x19[0xca] == 0) ||
                                       (lVar27 = *(long *)(unaff_x19[0xca] + 0x20), lVar27 == 0))
                                    goto LAB_067dd33c;
                                    FUN_06c51e78(&stack0x00001090,lVar27,0);
                                    fVar53 = (float)FUN_06c51cc0(&stack0x00000fb0,0);
                                  }
                                  puVar14 = 
                                  Method_System_Collections_Generic_HashSet<OvrAvatarShaderNameUtils_KnownShader>_Add__
                                  ;
                                  fVar68 = *(float *)(unaff_x19 + 0x6c);
                                  fVar75 = (fVar85 - fVar82) - fVar75;
                                  bVar16 = true;
                                  if ((fVar68 <= fVar75) && (bVar16 = false, !NAN(fVar68))) {
                                    bVar16 = fVar68 == -1.0;
                                  }
                                  if (!bVar16) {
                                    fVar75 = fVar68;
                                  }
                                  fVar82 = 1.0;
                                  if ((uVar41 & 0x18) != 0) {
                                    fVar82 = DAT_013a01c4;
                                  }
                                  if (((fVar78 - (fVar77 - fVar61)) + fVar73 < fVar51) &&
                                     (ABS(fVar60) +
                                      fVar81 * fVar53 * (1.0 - *(float *)((long)unaff_x19 + 0x2d4))
                                      < fVar82 * fVar75)) {
                                    if (*(int *)(*(long *)
                                                  Method_System_Collections_Generic_HashSet<OvrAvatarShaderNameUtils_KnownShader>_Add__
                                                + 0xe0) == 0) {
                                      thunk_FUN_032cd7c0();
                                    }
                                    FUN_0682230c();
                                    lVar27 = *(long *)(*(long *)puVar14 + 0xb8);
                                    uVar32 = *(undefined8 *)
                                              Method_System_Collections_Generic_HashSet<OVRFaceExpressions_FaceExpression>_Add__
                                    ;
                                    memcpy(&stack0x00001090,(void *)(lVar27 + 0x788),0x378);
                                    FUN_04a0fdcc(lVar27 + 0x11f0,&stack0x00001090,uVar32);
                                  }
                                }
                                lVar27 = *plVar5;
                                if (lVar27 == 0) goto LAB_067dd33c;
                                lVar28 = *(long *)(lVar27 + 0x38);
                                uVar25 = (ulong)(uint)fVar54;
                                if (lVar28 == 0) goto LAB_067dd33c;
                                if (*(uint *)(lVar28 + 0x18) <= *puVar3) goto LAB_067dd448;
                                uVar23 = *(uint *)(unaff_x19 + 0x95);
                                lVar28 = lVar28 + (long)(int)*puVar3 * 0x178;
                                *(uint *)(lVar28 + 100) = uVar23;
                                *(int *)(lVar28 + 0x68) = (int)unaff_x19[0x96];
                                if ((bVar11) ||
                                   ((uVar20 < 0xe && ((1 << (ulong)(uVar20 & 0x1f) & 0x2c00U) != 0))
                                   )) {
                                  lVar27 = *(long *)(lVar27 + 0x50);
                                  if (lVar27 == 0) goto LAB_067dd33c;
                                  if (*(uint *)(lVar27 + 0x18) <= uVar23) goto LAB_067dd448;
                                  if (*(int *)(lVar27 + (long)(int)uVar23 * 0x5c + 0x24) == 1)
                                  goto LAB_067d9558;
                                }
                                else {
                                  lVar27 = *(long *)(lVar27 + 0x50);
                                  if (lVar27 == 0) goto LAB_067dd33c;
LAB_067d9558:
                                  if (*(uint *)(lVar27 + 0x18) <= uVar23) goto LAB_067dd448;
                                  *(int *)(lVar27 + (long)(int)uVar23 * 0x5c + 0x68) =
                                       (int)unaff_x19[0x4f];
                                }
                                if (uVar20 == 9) {
                                  if (*plVar49 == 0) goto LAB_067dd33c;
                                  fVar75 = (float)FUN_06c51a54(*plVar49 + 0x50,0);
                                  if (*plVar49 == 0) goto LAB_067dd33c;
                                  fVar58 = *(float *)(unaff_x19 + 200);
                                  fVar53 = (float)NEON_ucvtf((uint)*(byte *)(*plVar49 + 0x1b9));
                                  fVar75 = fVar54 * fVar75 * fVar53;
                                  fVar53 = fVar75 * (float)(int)(fVar58 / fVar75);
                                  uVar66 = (ulong)(uint)fVar53;
                                  if (fVar53 <= fVar58) {
                                    fVar53 = fVar58 + fVar75;
                                  }
LAB_067d9778:
                                  *(float *)(unaff_x19 + 200) = fVar53;
                                }
                                else if (*(float *)(unaff_x19 + 0x56) == 0.0) {
                                  if ((char)unaff_x19[0x1e] == '\0') {
                                    if (*(char *)((long)unaff_x19 + 0x474) == '\0') {
                                      fVar73 = 1.0;
                                    }
                                    else {
                                      fVar73 = (float)thunk_FUN_06bda068(lVar26,0);
                                    }
                                    fVar53 = *(float *)(unaff_x19 + 200);
                                    fVar81 = (float)FUN_06c51cc0(&stack0x00001040,0);
                                    if (unaff_x19[0x20] != 0) {
                                      fVar75 = 1.0 - *(float *)((long)unaff_x19 + 0x2d4);
                                      fVar53 = fVar53 + fVar75 * (*(float *)((long)unaff_x19 + 0x2ac
                                                                            ) +
                                                                 fVar54 * (fVar58 + fVar73 * fVar81)
                                                                 + fVar57 * (fStack00000000000000dc
                                                                            + fStack0000000000000134
                                                                              + *(float *)(unaff_x19
                                                  [0x20] + 0x1ac)));
                                      *(float *)(unaff_x19 + 200) = fVar53;
                                      goto joined_r0x067d96c0;
                                    }
                                    goto LAB_067dd33c;
                                  }
                                  if (*plVar49 == 0) goto LAB_067dd33c;
                                  fVar53 = (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                                           (*(float *)((long)unaff_x19 + 0x2ac) +
                                           fVar54 * fVar58 +
                                           fVar57 * (fStack00000000000000dc +
                                                    fStack0000000000000134 +
                                                    *(float *)(*plVar49 + 0x1ac)));
                                  uVar66 = (ulong)(uint)fVar53;
                                  fVar53 = *(float *)(unaff_x19 + 200) - fVar53;
                                  *(float *)(unaff_x19 + 200) = fVar53;
                                  if ((uVar20 == 0x200b) || (uVar22 != 0)) {
                                    fVar75 = fVar57 * *(float *)((long)unaff_x19 + 0x2b4);
                                    uVar66 = (ulong)(uint)fVar75;
                                    fVar53 = fVar53 - fVar75;
                                    goto LAB_067d9778;
                                  }
                                }
                                else {
                                  if (*plVar49 == 0) goto LAB_067dd33c;
                                  fVar75 = *(float *)(unaff_x19 + 200);
                                  fVar53 = fVar75 + (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                                                    (*(float *)((long)unaff_x19 + 0x2ac) +
                                                    (*(float *)(unaff_x19 + 0x56) - fVar59) +
                                                    fVar57 * (fStack0000000000000134 +
                                                             *(float *)(*plVar49 + 0x1ac)));
                                  *(float *)(unaff_x19 + 200) = fVar53;
joined_r0x067d96c0:
                                  if ((uVar20 == 0x200b) ||
                                     (uVar66 = (ulong)(uint)fVar75, uVar22 != 0)) {
                                    fVar75 = fVar57 * *(float *)((long)unaff_x19 + 0x2b4);
                                    uVar66 = (ulong)(uint)fVar75;
                                    fVar53 = fVar53 + fVar75;
                                    goto LAB_067d9778;
                                  }
                                }
                                lVar27 = *plVar5;
                                if ((lVar27 == 0) ||
                                   (lVar28 = *(long *)(lVar27 + 0x38), lVar28 == 0))
                                goto LAB_067dd33c;
                                uVar23 = *puVar3;
                                uVar41 = (uint)*(undefined8 *)(lVar28 + 0x18);
                                if (uVar41 <= uVar23) goto LAB_067dd448;
                                *(float *)(lVar28 + (long)(int)uVar23 * 0x178 + 0x144) = fVar53;
                                uVar42 = uVar20;
                                if ((int)uVar20 < 0xd) {
                                  if ((uVar20 - 10 < 2) || (uVar20 == 3)) goto LAB_067d97d8;
LAB_067d9e88:
                                  if (((bool)(bVar11 & uVar20 == 0x2d)) || (uVar23 == uVar38))
                                  goto LAB_067d97d8;
                                }
                                else {
                                  if (1 < uVar20 - 0x2028) {
                                    if (uVar20 != 0xd) goto LAB_067d9e88;
                                    uVar66 = 0;
                                    *(float *)(unaff_x19 + 200) =
                                         *(float *)((long)unaff_x19 + 0x40c) + 0.0;
                                    if (uVar23 != uVar38) goto LAB_067d9ea4;
                                  }
LAB_067d97d8:
                                  if (0.0 < *(float *)(unaff_x19 + 0x9b)) {
                                    fVar75 = *(float *)(unaff_x19 + 0x99);
                                    fVar53 = *(float *)(unaff_x19 + 0x9a);
                                    if (*(int *)(*(long *)PTR_DAT_07279c00 + 0xe0) == 0) {
                                      thunk_FUN_032cd7c0();
                                    }
                                    fVar75 = fVar75 - fVar53;
                                    if (((fVar80 < ABS(fVar75)) &&
                                        (*(char *)((long)unaff_x19 + 0x2c4) == '\0')) &&
                                       (*(char *)((long)unaff_x19 + 0x33c) == '\0')) {
                                      FUN_0682267c(fVar75);
                                      *(float *)((long)unaff_x19 + 0x4c4) =
                                           *(float *)((long)unaff_x19 + 0x4c4) - fVar75;
                                      *(float *)(unaff_x19 + 0x9b) =
                                           fVar75 + *(float *)(unaff_x19 + 0x9b);
                                      puVar14 = 
                                      Method_System_Collections_Generic_HashSet<OvrAvatarShaderNameUtils_KnownShader>_Add__
                                      ;
                                      lVar27 = *(long *)
                                                Method_System_Collections_Generic_HashSet<OvrAvatarShaderNameUtils_KnownShader>_Add__
                                      ;
                                      if (*(int *)(lVar27 + 0xe0) == 0) {
                                        thunk_FUN_032cd7c0();
                                        lVar27 = *(long *)puVar14;
                                      }
                                      lVar28 = *(long *)(lVar27 + 0xb8);
                                      if (*(int *)(lVar28 + 0x7ac) == (int)unaff_x19[0x95]) {
                                        if (*(int *)(lVar27 + 0xe0) == 0) {
                                          thunk_FUN_032cd7c0();
                                          lVar28 = *(long *)(*(long *)
                                                  Method_System_Collections_Generic_HashSet<OvrAvatarShaderNameUtils_KnownShader>_Add__
                                                  + 0xb8);
                                        }
                                        FUN_04a0fee4(&stack0x00001090,lVar28 + 0x11f0,
                                                     *(undefined8 *)
                                                                                                            
                                                  Method_System_Collections_Generic_HashSet<OVRFaceExpressions_FaceExpression>__ctor__
                                                  );
                                        memcpy(&stack0x000001c0,&stack0x00001090,0x378);
                                        puVar14 = 
                                        Method_System_Collections_Generic_HashSet<OvrAvatarShaderNameUtils_KnownShader>_Add__
                                        ;
                                        lVar27 = *(long *)
                                                  Method_System_Collections_Generic_HashSet<OvrAvatarShaderNameUtils_KnownShader>_Add__
                                        ;
                                        memcpy((void *)(*(long *)(lVar27 + 0xb8) + 0x788),
                                               &stack0x000001c0,0x378);
                                        thunk_FUN_0333a630(*(long *)(lVar27 + 0xb8) + 0x818,0);
                                        lVar27 = *(long *)(*(long *)puVar14 + 0xb8);
                                        *(float *)(lVar27 + 0x7bc) =
                                             fVar75 + *(float *)(lVar27 + 0x7bc);
                                        *(float *)(lVar27 + 0x800) =
                                             fVar75 + *(float *)(lVar27 + 0x800);
                                        uVar32 = *(undefined8 *)
                                                  Method_System_Collections_Generic_HashSet<OVRFaceExpressions_FaceExpression>_Add__
                                        ;
                                        memcpy(&stack0x00001090,(void *)(lVar27 + 0x788),0x378);
                                        FUN_04a0fdcc(lVar27 + 0x11f0,&stack0x00001090,uVar32);
                                      }
                                    }
                                  }
                                  fVar58 = *(float *)(unaff_x19 + 0x9b);
                                  *(undefined1 *)((long)unaff_x19 + 0x33c) = 0;
                                  fVar53 = *(float *)((long)unaff_x19 + 0x4cc) - fVar58;
                                  fVar75 = *(float *)((long)unaff_x19 + 0x4c4);
                                  if (fVar53 <= *(float *)((long)unaff_x19 + 0x4c4)) {
                                    fVar75 = fVar53;
                                  }
                                  *(float *)((long)unaff_x19 + 0x4c4) = fVar75;
                                  fVar73 = *(float *)(unaff_x19 + 0x99);
                                  if (!bVar17) {
                                    fVar87 = fVar75;
                                  }
                                  if ((*(char *)((long)unaff_x19 + 0x334) != '\0') &&
                                     (((int)unaff_x19[0x65] <= *(int *)((long)unaff_x19 + 0x494) ||
                                      ((int)unaff_x19[0x66] <= (int)unaff_x19[0x95])))) {
                                    bVar17 = true;
                                  }
                                  lVar27 = *plVar5;
                                  if ((lVar27 == 0) ||
                                     (lVar28 = *(long *)(lVar27 + 0x50), lVar28 == 0))
                                  goto LAB_067dd33c;
                                  uVar23 = *(uint *)(unaff_x19 + 0x95);
                                  if (*(uint *)(lVar28 + 0x18) <= uVar23) goto LAB_067dd448;
                                  lVar50 = unaff_x19[0x93];
                                  lVar31 = lVar28 + (long)(int)uVar23 * 0x5c;
                                  *(int *)(lVar31 + 0x34) = (int)lVar50;
                                  uVar41 = *(uint *)(unaff_x19 + 0x93);
                                  if ((int)lVar50 <= (int)*(uint *)((long)unaff_x19 + 0x49c)) {
                                    uVar41 = *(uint *)((long)unaff_x19 + 0x49c);
                                  }
                                  *(uint *)((long)unaff_x19 + 0x49c) = uVar41;
                                  *(uint *)(lVar31 + 0x38) = uVar41;
                                  *(undefined4 *)(unaff_x19 + 0x94) =
                                       *(undefined4 *)((long)unaff_x19 + 0x494);
                                  *(undefined4 *)(lVar31 + 0x3c) =
                                       *(undefined4 *)((long)unaff_x19 + 0x494);
                                  iVar21 = *(int *)((long)unaff_x19 + 0x49c);
                                  if ((int)uVar41 <= *(int *)((long)unaff_x19 + 0x4a4)) {
                                    iVar21 = *(int *)((long)unaff_x19 + 0x4a4);
                                  }
                                  *(int *)((long)unaff_x19 + 0x4a4) = iVar21;
                                  *(int *)(lVar31 + 0x40) = iVar21;
                                  *(int *)(lVar31 + 0x24) =
                                       (*(int *)(lVar31 + 0x3c) - *(int *)(lVar31 + 0x34)) + 1;
                                  *(undefined4 *)(lVar31 + 0x28) =
                                       *(undefined4 *)((long)unaff_x19 + 0x4ac);
                                  lVar27 = *(long *)(lVar27 + 0x38);
                                  if (lVar27 == 0) goto LAB_067dd33c;
                                  if (*(uint *)(lVar27 + 0x18) <= uVar41) goto LAB_067dd448;
                                  uVar19 = *(undefined4 *)
                                            (lVar27 + (long)(int)uVar41 * 0x178 + 0x11c);
                                  lVar28 = lVar28 + (long)(int)uVar23 * 0x5c;
                                  *(float *)(lVar28 + 0x70) = fVar53;
                                  *(undefined4 *)(lVar28 + 0x6c) = uVar19;
                                  lVar27 = *plVar5;
                                  if ((lVar27 == 0) ||
                                     (lVar28 = *(long *)(lVar27 + 0x50), lVar28 == 0))
                                  goto LAB_067dd33c;
                                  if (*(uint *)(lVar28 + 0x18) <= *(uint *)(unaff_x19 + 0x95))
                                  goto LAB_067dd448;
                                  lVar27 = *(long *)(lVar27 + 0x38);
                                  if (lVar27 == 0) goto LAB_067dd33c;
                                  if (*(uint *)(lVar27 + 0x18) <= *(uint *)((long)unaff_x19 + 0x4a4)
                                     ) goto LAB_067dd448;
                                  fVar73 = fVar73 - fVar58;
                                  uVar66 = (ulong)(uint)fVar73;
                                  lVar28 = lVar28 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
                                  *(undefined4 *)(lVar28 + 0x74) =
                                       *(undefined4 *)
                                        (lVar27 + (long)(int)*(uint *)((long)unaff_x19 + 0x4a4) *
                                                  0x178 + 0x128);
                                  *(float *)(lVar28 + 0x78) = fVar73;
                                  lVar27 = *plVar5;
                                  if ((lVar27 == 0) ||
                                     (lVar50 = *(long *)(lVar27 + 0x50), lVar50 == 0))
                                  goto LAB_067dd33c;
                                  lVar31 = (long)(int)*(uint *)(unaff_x19 + 0x95);
                                  if (*(uint *)(lVar50 + 0x18) <= *(uint *)(unaff_x19 + 0x95))
                                  goto LAB_067dd448;
                                  lVar28 = lVar50 + lVar31 * 0x5c;
                                  *(float *)(lVar28 + 0x44) =
                                       *(float *)(lVar28 + 0x74) - fVar54 * fStack000000000000016c;
                                  *(float *)(lVar28 + 0x5c) = fStack0000000000000100;
                                  if (*(int *)(lVar28 + 0x24) == 1) {
                                    *(int *)(lVar50 + lVar31 * 0x5c + 0x68) = (int)unaff_x19[0x4f];
                                  }
                                  if ((*plVar49 == 0) ||
                                     (lVar28 = *(long *)(lVar27 + 0x38), lVar28 == 0))
                                  goto LAB_067dd33c;
                                  lVar44 = (long)(int)*(uint *)((long)unaff_x19 + 0x4a4);
                                  uVar41 = (uint)*(undefined8 *)(lVar28 + 0x18);
                                  if (uVar41 <= *(uint *)((long)unaff_x19 + 0x4a4))
                                  goto LAB_067dd448;
                                  if ((*(char *)(lVar28 + lVar44 * 0x178 + 0x194) == '\0') &&
                                     (lVar44 = (long)(int)*(uint *)(unaff_x19 + 0x94),
                                     uVar41 <= *(uint *)(unaff_x19 + 0x94))) goto LAB_067dd448;
                                  lVar50 = lVar50 + lVar31 * 0x5c;
                                  fVar54 = (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                                           (fVar57 * (fStack00000000000000dc +
                                                     fStack0000000000000134 +
                                                     *(float *)(*plVar49 + 0x1ac)) -
                                           *(float *)((long)unaff_x19 + 0x2ac));
                                  fVar75 = -fVar54;
                                  if ((char)unaff_x19[0x1e] != '\0') {
                                    fVar75 = fVar54;
                                  }
                                  *(float *)(lVar50 + 0x58) =
                                       *(float *)(lVar28 + lVar44 * 0x178 + 0x144) + fVar75;
                                  *(float *)(lVar50 + 0x50) = 0.0 - *(float *)(unaff_x19 + 0x9b);
                                  *(float *)(lVar50 + 0x54) = fVar53;
                                  *(float *)(lVar50 + 0x48) = fVar84 * fVar52 + (fVar73 - fVar53);
                                  *(float *)(lVar50 + 0x4c) = fVar73;
                                  if ((int)uVar20 < 0x2d) {
                                    if (uVar20 - 10 < 2) {
LAB_067d9c4c:
                                      if (*(int *)(*(long *)
                                                  Method_System_Collections_Generic_HashSet<OvrAvatarShaderNameUtils_KnownShader>_Add__
                                                  + 0xe0) == 0) {
                                        thunk_FUN_032cd7c0();
                                      }
                                      FUN_0682230c();
                                      lVar27 = unaff_x19[0x6d];
                                      *(undefined4 *)((long)unaff_x19 + 0x4ac) = 0;
                                      iVar21 = (int)unaff_x19[0x95] + 1;
                                      *(int *)(unaff_x19 + 0x95) = iVar21;
                                      *(int *)(unaff_x19 + 0x93) =
                                           *(int *)((long)unaff_x19 + 0x494) + 1;
                                      if ((lVar27 != 0) && (*(long *)(lVar27 + 0x50) != 0)) {
                                        if (*(int *)(*(long *)(lVar27 + 0x50) + 0x18) <= iVar21) {
                                          FUN_06822834();
                                          lVar27 = unaff_x19[0x6d];
                                          if (lVar27 == 0) goto LAB_067dd33c;
                                        }
                                        lVar27 = *(long *)(lVar27 + 0x38);
                                        if (lVar27 != 0) {
                                          if (*puVar3 < *(uint *)(lVar27 + 0x18)) {
                                            fVar75 = *(float *)(lVar27 + (long)(int)*puVar3 * 0x178
                                                               + 0x154);
                                            if (*(float *)(unaff_x19 + 0x58) == DAT_013a0308) {
                                              if ((uVar20 == 0x2029) || (fVar53 = 0.0, uVar20 == 10)
                                                 ) {
                                                fVar53 = *(float *)((long)unaff_x19 + 0x2cc);
                                              }
                                              uVar33 = 0;
                                              fVar53 = fVar75 + (0.0 - *(float *)((long)unaff_x19 +
                                                                                 0x4cc)) +
                                                       fVar84 * (fVar52 + *(float *)((long)unaff_x19
                                                                                    + 700)) +
                                                       fVar57 * (*(float *)(unaff_x19 + 0x57) +
                                                                fVar53) +
                                                       *(float *)(unaff_x19 + 0x9b);
                                            }
                                            else {
                                              if ((uVar20 == 0x2029) || (fVar53 = 0.0, uVar20 == 10)
                                                 ) {
                                                fVar53 = *(float *)((long)unaff_x19 + 0x2cc);
                                              }
                                              uVar33 = 1;
                                              fVar53 = *(float *)(unaff_x19 + 0x9b) +
                                                       *(float *)(unaff_x19 + 0x58) +
                                                       fVar57 * (*(float *)(unaff_x19 + 0x57) +
                                                                fVar53);
                                            }
                                            *(float *)(unaff_x19 + 0x9b) = fVar53;
                                            *(undefined1 *)((long)unaff_x19 + 0x2c4) = uVar33;
                                            puVar14 = 
                                            Method_System_Collections_Generic_HashSet<OvrAvatarShaderNameUtils_KnownShader>_Add__
                                            ;
                                            lVar27 = *(long *)
                                                  Method_System_Collections_Generic_HashSet<OvrAvatarShaderNameUtils_KnownShader>_Add__
                                            ;
                                            if (*(int *)(lVar27 + 0xe0) == 0) {
                                              thunk_FUN_032cd7c0();
                                              lVar27 = *(long *)puVar14;
                                            }
                                            uVar32 = *(undefined8 *)
                                                      (*(long *)(lVar27 + 0xb8) + 0x15a8);
                                            *(float *)(unaff_x19 + 0x9a) = fVar75;
                                            uVar66 = NEON_rev64(uVar32,4);
                                            unaff_x19[0x99] = uVar66;
                                            *(float *)(unaff_x19 + 200) =
                                                 *(float *)(unaff_x19 + 0x81) + 0.0 +
                                                 *(float *)((long)unaff_x19 + 0x40c);
                                            FUN_0682230c();
                                            FUN_0682230c();
                                            *(int *)((long)unaff_x19 + 0x494) =
                                                 *(int *)((long)unaff_x19 + 0x494) + 1;
                                            bVar12 = true;
                                            bVar8 = 1;
                                            goto LAB_067d6d64;
                                          }
                                          goto LAB_067dd448;
                                        }
                                      }
                                      goto LAB_067dd33c;
                                    }
                                    if (uVar20 == 3) {
                                      if (unaff_x19[0x8f] == 0) goto LAB_067dd33c;
                                      uVar86 = (uint)*(undefined8 *)(unaff_x19[0x8f] + 0x18);
                                      uVar42 = 3;
                                    }
                                  }
                                  else if ((uVar20 - 0x2028 < 2) || (uVar20 == 0x2d))
                                  goto LAB_067d9c4c;
                                }
LAB_067d9ea4:
                                uVar23 = *puVar3;
                                if (uVar41 <= uVar23) goto LAB_067dd448;
                                if (*(char *)(lVar28 + (long)(int)uVar23 * 0x178 + 0x194) != '\0') {
                                  lVar28 = lVar28 + (long)(int)uVar23 * 0x178;
                                  uVar30 = *(ulong *)(lVar28 + 0x11c);
                                  uVar66 = *(ulong *)((long)unaff_x19 + 0x4dc);
                                  *(ulong *)((long)unaff_x19 + 0x4dc) =
                                       uVar66 ^ (uVar66 ^ uVar30) &
                                                ~CONCAT44(-(uint)((float)(uVar66 >> 0x20) <
                                                                 (float)(uVar30 >> 0x20)),
                                                          -(uint)((float)uVar66 < (float)uVar30));
                                  uVar30 = *(ulong *)((long)unaff_x19 + 0x4e4);
                                  uVar66 = *(ulong *)(lVar28 + 0x128);
                                  *(ulong *)((long)unaff_x19 + 0x4e4) =
                                       uVar30 ^ (uVar30 ^ uVar66) &
                                                ~CONCAT44(-(uint)((float)(uVar66 >> 0x20) <
                                                                 (float)(uVar30 >> 0x20)),
                                                          -(uint)((float)uVar66 < (float)uVar30));
                                }
                                if (((int)unaff_x19[0x5c] == 5) &&
                                   ((0xd < uVar42 || ((1 << (ulong)(uVar42 & 0x1f) & 0x2c00U) == 0))
                                   )) {
                                  lVar28 = *(long *)(lVar27 + 0x58);
                                  if (lVar28 == 0) goto LAB_067dd33c;
                                  iVar21 = (int)unaff_x19[0x96] + 1;
                                  if (*(int *)(lVar28 + 0x18) < iVar21) {
                                    if (*(int *)(*(long *)
                                                  Method_System_Collections_Generic_HashSet<CAPI_ovrAvatar2NodeId>_Add__
                                                + 0xe0) == 0) {
                                      thunk_FUN_032cd7c0();
                                    }
                                    FUN_03b4f0a0((long *)(lVar27 + 0x58),iVar21,1,
                                                 *(undefined8 *)
                                                  Method_System_Collections_Generic_HashSet<CAPI_ovrAvatar2JointType>_get_Count__
                                                );
                                    lVar27 = *plVar5;
                                    if (lVar27 == 0) goto LAB_067dd33c;
                                  }
                                  lVar28 = *(long *)(lVar27 + 0x58);
                                  if (lVar28 == 0) goto LAB_067dd33c;
                                  uVar41 = *(uint *)(unaff_x19 + 0x96);
                                  lVar50 = (long)(int)uVar41;
                                  uVar23 = *(uint *)(lVar28 + 0x18);
                                  if (uVar23 <= uVar41) goto LAB_067dd448;
                                  lVar31 = lVar28 + lVar50 * 0x14;
                                  fVar53 = *(float *)(lVar31 + 0x30);
                                  uVar66 = (ulong)(uint)fVar53;
                                  *(undefined4 *)(lVar31 + 0x28) =
                                       *(undefined4 *)((long)unaff_x19 + 0x4b4);
                                  fVar75 = *(float *)((long)unaff_x19 + 0x4c4);
                                  if (fVar53 <= *(float *)((long)unaff_x19 + 0x4c4)) {
                                    fVar75 = fVar53;
                                  }
                                  *(float *)(lVar31 + 0x30) = fVar75;
                                  uVar42 = *(uint *)((long)unaff_x19 + 0x494);
                                  if (uVar42 == 0 && uVar41 == 0) {
                                    *(uint *)(lVar28 + (ulong)uVar41 * 0x14 + 0x20) = uVar42;
                                  }
                                  else {
                                    uVar10 = uVar42 - 1;
                                    if (0 < (int)uVar42) {
                                      lVar27 = *(long *)(lVar27 + 0x38);
                                      if (lVar27 == 0) goto LAB_067dd33c;
                                      if (*(uint *)(lVar27 + 0x18) <= uVar10) goto LAB_067dd448;
                                      if (uVar41 != *(uint *)(lVar27 + (ulong)uVar10 * 0x178 + 0x68)
                                         ) {
                                        if (uVar41 - 1 < uVar23) {
                                          *(uint *)(lVar28 + 0x20 + (long)(int)(uVar41 - 1) * 0x14 +
                                                   4) = uVar10;
                                          *(uint *)(lVar28 + 0x20 + lVar50 * 0x14) = uVar42;
                                          goto LAB_067d9f20;
                                        }
                                        goto LAB_067dd448;
                                      }
                                    }
                                    if (uVar42 == uVar38) {
                                      *(uint *)(lVar28 + lVar50 * 0x14 + 0x24) = uVar38;
                                    }
                                  }
                                }
LAB_067d9f20:
                                puVar14 = 
                                Method_System_Collections_Generic_HashSet<OvrAvatarShaderNameUtils_KnownShader>_Add__
                                ;
                                if (((char)unaff_x19[0x5b] == '\0') &&
                                   ((6 < *(uint *)(unaff_x19 + 0x5c) ||
                                    ((1 << (ulong)(*(uint *)(unaff_x19 + 0x5c) & 0x1f) & 0x4aU) == 0
                                    )))) goto LAB_067da420;
                                if ((uVar22 == 0) &&
                                   (((uVar20 != 0x2d && (uVar20 != 0x200b)) && (uVar20 != 0xad)))) {
                                  if (*(char *)((long)unaff_x19 + 0x2da) == '\0') {
LAB_067da01c:
                                    if (((((0x2bfd < uVar20 - 0xac01) && (0xfd < uVar20 - 0x1101))
                                         && (0x1d < uVar20 - 0xa961)) ||
                                        (uVar30 = FUN_06830d40(0), (uVar30 & 1) != 0)) &&
                                       ((((0xed < uVar20 - 0xff01 && (0x1d < uVar20 - 0xfe31)) &&
                                         (0x717d < uVar20 - 0x2e81)) && (0x1fd < uVar20 - 0xf901))))
                                    goto LAB_067da0a4;
                                    lVar27 = FUN_06830bd4(0);
                                    if ((lVar27 == 0) || (*(long *)(lVar27 + 0x10) == 0))
                                    goto LAB_067dd33c;
                                    uVar23 = FUN_0502cedc(*(long *)(lVar27 + 0x10),uVar20,
                                                          *(undefined8 *)
                                                                                                                      
                                                  Method_System_Collections_Generic_HashSet<CAPI_ovrAvatar2JointType>__ctor__
                                                  );
                                    if ((int)uVar38 <= (int)*puVar3) {
                                      if ((uVar23 & 1) == 0) {
LAB_067da398:
                                        if (*(int *)(*(long *)
                                                  Method_System_Collections_Generic_HashSet<OvrAvatarShaderNameUtils_KnownShader>_Add__
                                                  + 0xe0) == 0) {
                                          thunk_FUN_032cd7c0();
                                        }
                                        FUN_0682230c();
                                        bVar8 = 0;
                                        goto LAB_067da420;
                                      }
LAB_067da2fc:
                                      if (uVar47 != uVar35 || ((bVar8 ^ 0xff) & 1) != 0)
                                      goto LAB_067da420;
                                      if (uVar22 != 0) goto LAB_067da318;
                                      goto LAB_067da350;
                                    }
                                    lVar27 = FUN_06830bd4(0);
                                    if (((lVar27 == 0) || (*plVar5 == 0)) ||
                                       (lVar28 = *(long *)(*plVar5 + 0x38), lVar28 == 0))
                                    goto LAB_067dd33c;
                                    if (*(uint *)(lVar28 + 0x18) <= *puVar3 + 1) goto LAB_067dd448;
                                    if (*(long *)(lVar27 + 0x18) == 0) goto LAB_067dd33c;
                                    uVar30 = FUN_0502cedc(*(long *)(lVar27 + 0x18),
                                                          *(undefined2 *)
                                                           (lVar28 + (long)(int)(*puVar3 + 1) *
                                                                     0x178 + 0x20),
                                                          *(undefined8 *)
                                                                                                                      
                                                  Method_System_Collections_Generic_HashSet<CAPI_ovrAvatar2JointType>__ctor__
                                                  );
                                    if ((uVar23 & 1) != 0) goto LAB_067da2fc;
                                    if ((uVar30 & 1) == 0) goto LAB_067da398;
                                    if (bVar8 == 0) goto LAB_067da418;
                                    if (uVar22 != 0) {
                                      if (*(int *)(*(long *)
                                                  Method_System_Collections_Generic_HashSet<OvrAvatarShaderNameUtils_KnownShader>_Add__
                                                  + 0xe0) == 0) {
                                        thunk_FUN_032cd7c0();
                                      }
                                      FUN_0682230c();
                                    }
                                    if (*(int *)(*(long *)
                                                  Method_System_Collections_Generic_HashSet<OvrAvatarShaderNameUtils_KnownShader>_Add__
                                                + 0xe0) == 0) {
                                      thunk_FUN_032cd7c0();
                                    }
                                    FUN_0682230c();
                                  }
                                  else {
                                    if (bVar8 == 0) goto LAB_067da418;
LAB_067da0b0:
                                    if (!bVar13 && uVar20 == 0xad) goto LAB_067da318;
LAB_067da350:
                                    if (*(int *)(*(long *)
                                                  Method_System_Collections_Generic_HashSet<OvrAvatarShaderNameUtils_KnownShader>_Add__
                                                + 0xe0) == 0) {
                                      thunk_FUN_032cd7c0();
                                    }
                                    FUN_0682230c();
                                  }
                                  bVar8 = 1;
                                }
                                else if (*(char *)((long)unaff_x19 + 0x2da) == '\x01') {
LAB_067da0a4:
                                  if (bVar8 != 0) {
                                    if (uVar22 == 0) goto LAB_067da0b0;
LAB_067da318:
                                    if (*(int *)(*(long *)
                                                  Method_System_Collections_Generic_HashSet<OvrAvatarShaderNameUtils_KnownShader>_Add__
                                                + 0xe0) == 0) {
                                      thunk_FUN_032cd7c0();
                                    }
                                    FUN_0682230c();
                                    goto LAB_067da350;
                                  }
LAB_067da418:
                                  bVar8 = 0;
                                }
                                else {
                                  if (((uVar20 - 0x2007 < 0x29) &&
                                      ((1L << ((ulong)(uVar20 - 0x2007) & 0x3f) & 0x10000000401U) !=
                                       0)) || ((uVar20 == 0xa0 || (uVar20 == 0x2060))))
                                  goto LAB_067da01c;
                                  if (*(int *)(*(long *)
                                                Method_System_Collections_Generic_HashSet<OvrAvatarShaderNameUtils_KnownShader>_Add__
                                              + 0xe0) == 0) {
                                    thunk_FUN_032cd7c0();
                                  }
                                  FUN_0682230c();
                                  bVar8 = 0;
                                  *(undefined4 *)(*(long *)(*(long *)puVar14 + 0xb8) + 0xe78) =
                                       0xffffffff;
                                }
LAB_067da420:
                                if (*(int *)(*(long *)
                                              Method_System_Collections_Generic_HashSet<OvrAvatarShaderNameUtils_KnownShader>_Add__
                                            + 0xe0) == 0) {
                                  thunk_FUN_032cd7c0();
                                }
                                FUN_0682230c();
                                *(int *)((long)unaff_x19 + 0x494) =
                                     *(int *)((long)unaff_x19 + 0x494) + 1;
                              }
                            }
                            else {
                              *(undefined1 *)((long)unaff_x19 + 0x431) = 1;
                              *(undefined4 *)((long)unaff_x19 + 0x644) = 0;
                              uVar30 = FUN_0681c370();
                              if (((uVar30 & 1) == 0) ||
                                 (uVar86 = in_stack_0000103c, *(int *)((long)unaff_x19 + 0x644) != 0
                                 )) goto LAB_067d6b88;
                            }
LAB_067d6d64:
                            uVar86 = uVar86 + 1;
                            lVar27 = unaff_x19[0x8f];
                            uVar22 = uVar20;
                            if (lVar27 == 0) goto LAB_067dd33c;
                            goto LAB_067d6a30;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          goto LAB_067dd33c;
        }
      }
      (**(code **)(*unaff_x19 + 0x958))();
      *(undefined4 *)(unaff_x19 + 0x7c) = 0;
      *(undefined4 *)((long)unaff_x19 + 0x3ec) = 0;
      if (*(int *)(*(long *)PTR_DAT_072a5e70 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      FUN_067f5430();
      *(undefined1 *)((long)unaff_x19 + 0x24c) = 1;
      return;
    }
  }
  puVar15 = 
  Method_System_Collections_Generic_HashSet<OvrAvatarShaderNameUtils_KnownShader>_Contains__;
  FUN_06becc20();
  uVar32 = FUN_05920f80(&stack0x0000105c,0);
  uVar32 = FUN_057a19ac(*(undefined8 *)puVar15,uVar32,0);
  if (*(int *)(*(long *)puVar14 + 0xe0) == 0) {
    thunk_FUN_032cd7c0(*(long *)puVar14);
  }
  FUN_06bb2f68(uVar32,0);
  *(undefined1 *)((long)unaff_x19 + 0x24c) = 1;
  return;
LAB_067daf08:
  uVar86 = uVar22 - 1;
  if (*(uint *)(lVar26 + 0x18) <= uVar86) goto LAB_067dd448;
  if ((*plVar5 == 0) || (lVar28 = *(long *)(*plVar5 + 0x50), lVar28 == 0)) goto LAB_067dd33c;
  lVar31 = (long)(int)uVar86;
  lVar50 = lVar26 + lVar31 * 0x178;
  uVar20 = *(uint *)(lVar50 + 100);
  if (*(uint *)(lVar28 + 0x18) <= uVar20) goto LAB_067dd448;
  lVar44 = *(long *)(lVar50 + 0x38);
  lVar46 = (long)(int)uVar20;
  lVar28 = lVar28 + lVar46 * 0x5c;
  uVar47 = *(uint *)(lVar28 + 0x68);
  uVar41 = (uint)*(ushort *)(lVar50 + 0x20);
  uVar35 = *(uint *)(lVar28 + 0x3c);
  iVar7 = *(int *)(lVar28 + 0x20);
  iVar21 = *(int *)(lVar28 + 0x28);
  iVar24 = *(int *)(lVar28 + 0x2c);
  fVar67 = *(float *)(lVar28 + 0x4c);
  uVar23 = *(uint *)(lVar28 + 0x40);
  fVar72 = *(float *)(lVar28 + 0x54);
  fVar55 = *(float *)(lVar28 + 0x58);
  fVar80 = *(float *)(lVar28 + 0x5c);
  fVar87 = *(float *)(lVar28 + 0x60);
  fVar76 = *(float *)(lVar28 + 0x6c);
  fVar58 = *(float *)(lVar28 + 0x70);
  fVar56 = *(float *)(lVar28 + 0x74);
  fVar85 = *(float *)(lVar28 + 0x78);
  if ((int)uVar47 < 9) {
    switch(uVar47) {
    case 1:
      if ((char)unaff_x19[0x1e] == '\0') {
        fStack00000000000000fc = fVar87 + 0.0;
      }
      else {
        fStack00000000000000fc = 0.0 - fVar55;
      }
      break;
    case 2:
LAB_067db0b0:
      fStack00000000000000fc = (fVar87 + fVar80 * 0.5) - fVar55 * 0.5;
      break;
    default:
      goto switchD_067dafec_caseD_3;
    case 4:
      fStack00000000000000fc = (fVar80 + fVar87) - fVar55;
      if ((char)unaff_x19[0x1e] != '\0') {
        fStack00000000000000fc = fVar80 + fVar87;
      }
      break;
    case 8:
      goto switchD_067dafec_caseD_8;
    }
LAB_067db120:
    uStack00000000000000f0 = 0;
  }
  else if (uVar47 == 0x10) {
switchD_067dafec_caseD_8:
    if (uVar41 < 0xad) {
      if ((uVar41 != 3) && (uVar41 != 10)) goto LAB_067db044;
    }
    else if ((uVar41 != 0xad) && ((uVar41 != 0x200b && (uVar41 != 0x2060)))) {
LAB_067db044:
      if (*(uint *)(lVar26 + 0x18) <= uVar35) goto LAB_067dd448;
      uVar9 = *(undefined2 *)(lVar26 + (long)(int)uVar35 * 0x178 + 0x20);
      if (*(int *)(*(long *)PTR_DAT_0727fa20 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      uVar25 = FUN_058a577c(uVar9,0);
      if ((uVar25 & 1) == 0) {
        bVar16 = (int)uVar20 < (int)unaff_x19[0x95];
      }
      else {
        bVar16 = false;
      }
      if ((fVar55 <= fVar80) && (!bVar16 && uVar47 >> 4 == 0)) {
        fStack00000000000000fc = fVar87;
        if ((char)unaff_x19[0x1e] != '\0') {
          fStack00000000000000fc = fVar80 + fVar87;
        }
        goto LAB_067db120;
      }
      if (((uVar22 == 1) || (uVar20 != uVar38)) || (uVar86 == *(uint *)((long)unaff_x19 + 0x324))) {
        fStack00000000000000fc = fVar87;
        if ((char)unaff_x19[0x1e] != '\0') {
          fStack00000000000000fc = fVar80 + fVar87;
        }
        if (*(int *)(*(long *)PTR_DAT_0727fa20 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
        }
        uStack000000000000002c = FUN_058a5c00(uVar41,0);
        uStack00000000000000f0 = 0;
      }
      else {
        cVar34 = (char)unaff_x19[0x1e];
        fVar87 = -fVar55;
        if (cVar34 != '\0') {
          fVar87 = fVar55;
        }
        if (*(uint *)(lVar26 + 0x18) <= uVar35) goto LAB_067dd448;
        iVar24 = (int)*(char *)(lVar26 + (long)(int)uVar35 * 0x178 + 0x194) +
                 (-iVar7 - (uStack000000000000002c & 1)) + iVar24 + -1;
        if (iVar24 < 1) {
          fVar55 = 1.0;
          iVar24 = 1;
        }
        else {
          fVar55 = *(float *)((long)unaff_x19 + 0x2dc);
        }
        if (uVar41 == 9) {
LAB_067dceb4:
          fVar55 = 1.0 - fVar55;
        }
        else {
          if (uVar41 != 0xa0) {
            if (*(int *)(*(long *)PTR_DAT_0727fa20 + 0xe0) == 0) {
              thunk_FUN_032cd7c0();
            }
            uVar25 = FUN_058a5c00(uVar41,0);
            cVar34 = (char)unaff_x19[0x1e];
            if ((uVar25 & 1) != 0) goto LAB_067dceb4;
          }
          iVar24 = (iVar7 - (~uStack000000000000002c & 1)) + iVar21;
        }
        fVar55 = ((fVar80 + fVar87) * fVar55) / (float)iVar24;
        if (cVar34 == '\0') {
          fStack00000000000000fc = fStack00000000000000fc + fVar55;
          uStack00000000000000f0 =
               CONCAT44((float)((ulong)uStack00000000000000f0 >> 0x20) + 0.0,
                        (float)uStack00000000000000f0 + 0.0);
        }
        else {
          fStack00000000000000fc = fStack00000000000000fc - fVar55;
        }
      }
    }
  }
  else if (uVar47 == 0x20) {
    fVar55 = fVar76 + fVar56;
    goto LAB_067db0b0;
  }
switchD_067dafec_caseD_3:
  uVar47 = (uint)*(undefined8 *)(lVar26 + 0x18);
  if (uVar47 <= uVar86) goto LAB_067dd448;
  lVar28 = lVar26 + lVar31 * 0x178;
  fVar87 = fStack00000000000000bc + fStack00000000000000fc;
  fVar55 = (float)uStack00000000000000b0 + (float)uStack00000000000000f0;
  fVar80 = (float)((ulong)uStack00000000000000b0 >> 0x20) +
           (float)((ulong)uStack00000000000000f0 >> 0x20);
  if (*(char *)(lVar28 + 0x194) == '\0') goto LAB_067db918;
  iVar21 = *(int *)(lVar26 + lVar31 * 0x178 + 0x2c);
  if (iVar21 != 0) goto Unity_VisualScripting_BinaryOperatorHandler_OperatorQuery__Equals;
  fVar54 = fmodf(*(float *)((long)unaff_x19 + 0x314) * (float)(int)uVar20,1.0);
  switch(*(undefined4 *)((long)unaff_x19 + 0x30c)) {
  case 0:
    lVar50 = lVar26 + lVar31 * 0x178;
    *(undefined4 *)(lVar50 + 0x84) = 0;
    *(undefined4 *)(lVar50 + 0xac) = 0;
    *(undefined4 *)(lVar50 + 0xd4) = 0x3f800000;
    fVar54 = 1.0;
    break;
  case 1:
    fVar85 = *(float *)(lVar26 + lVar31 * 0x178 + 0x70);
    if (*(int *)((long)unaff_x19 + 0x274) == 0x208) {
      lVar50 = lVar26 + lVar31 * 0x178;
      fVar56 = (fStack00000000000000fc + fVar85) - *(float *)((long)unaff_x19 + 0x4dc);
      fVar85 = *(float *)((long)unaff_x19 + 0x4e4) - *(float *)((long)unaff_x19 + 0x4dc);
      goto LAB_067db26c;
    }
    lVar50 = lVar26 + lVar31 * 0x178;
    fVar56 = fVar56 - fVar76;
    *(float *)(lVar50 + 0x84) = fVar54 + (fVar85 - fVar76) / fVar56;
    *(float *)(lVar50 + 0xac) = fVar54 + (*(float *)(lVar50 + 0x98) - fVar76) / fVar56;
    *(float *)(lVar50 + 0xd4) = fVar54 + (*(float *)(lVar50 + 0xc0) - fVar76) / fVar56;
    fVar54 = fVar54 + (*(float *)(lVar50 + 0xe8) - fVar76) / fVar56;
    break;
  case 2:
    lVar50 = lVar26 + lVar31 * 0x178;
    fVar85 = *(float *)((long)unaff_x19 + 0x4e4) - *(float *)((long)unaff_x19 + 0x4dc);
    fVar56 = (fStack00000000000000fc + *(float *)(lVar50 + 0x70)) -
             *(float *)((long)unaff_x19 + 0x4dc);
LAB_067db26c:
    *(float *)(lVar50 + 0x84) = fVar54 + fVar56 / fVar85;
    *(float *)(lVar50 + 0xac) =
         fVar54 + ((fStack00000000000000fc + *(float *)(lVar50 + 0x98)) -
                  *(float *)((long)unaff_x19 + 0x4dc)) /
                  (*(float *)((long)unaff_x19 + 0x4e4) - *(float *)((long)unaff_x19 + 0x4dc));
    *(float *)(lVar50 + 0xd4) =
         fVar54 + ((fStack00000000000000fc + *(float *)(lVar50 + 0xc0)) -
                  *(float *)((long)unaff_x19 + 0x4dc)) /
                  (*(float *)((long)unaff_x19 + 0x4e4) - *(float *)((long)unaff_x19 + 0x4dc));
    fVar54 = fVar54 + ((fStack00000000000000fc + *(float *)(lVar50 + 0xe8)) -
                      *(float *)((long)unaff_x19 + 0x4dc)) /
                      (*(float *)((long)unaff_x19 + 0x4e4) - *(float *)((long)unaff_x19 + 0x4dc));
    break;
  case 3:
    switch((int)unaff_x19[0x62]) {
    case 0:
      lVar50 = lVar26 + lVar31 * 0x178;
      *(undefined4 *)(lVar50 + 0x88) = 0;
      *(undefined4 *)(lVar50 + 0xb0) = 0x3f800000;
      *(undefined4 *)(lVar50 + 0xd8) = 0;
      *(undefined4 *)(lVar50 + 0x100) = 0x3f800000;
      break;
    case 1:
      lVar50 = lVar26 + lVar31 * 0x178;
      fVar85 = fVar85 - fVar58;
      fVar56 = fVar54 + (*(float *)(lVar50 + 0x74) - fVar58) / fVar85;
      fVar85 = fVar54 + (*(float *)(lVar50 + 0x9c) - fVar58) / fVar85;
      *(float *)(lVar50 + 0x88) = fVar56;
      *(float *)(lVar50 + 0xb0) = fVar85;
      *(float *)(lVar50 + 0xd8) = fVar56;
      *(float *)(lVar50 + 0x100) = fVar85;
      break;
    case 2:
      lVar50 = lVar26 + lVar31 * 0x178;
      fVar56 = fVar54 + (*(float *)(lVar50 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
                        (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
      *(float *)(lVar50 + 0x88) = fVar56;
      fVar85 = *(float *)(unaff_x19 + 0x9c);
      fVar76 = *(float *)(unaff_x19 + 0x9d);
      *(float *)(lVar50 + 0xd8) = fVar56;
      fVar56 = fVar54 + (*(float *)(lVar50 + 0x9c) - fVar85) / (fVar76 - fVar85);
      *(float *)(lVar50 + 0xb0) = fVar56;
      *(float *)(lVar50 + 0x100) = fVar56;
      break;
    case 3:
      if (*(int *)(*(long *)PTR_DAT_072798f8 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      FUN_06bb23f0(*(undefined8 *)
                    Method_System_Linq_Expressions_Interpreter_HybridReferenceDictionary<LabelTarget,_LabelInfo>__ctor__
                   ,0);
      uVar47 = (uint)*(undefined8 *)(lVar26 + 0x18);
    }
    if (uVar47 <= uVar86) goto LAB_067dd448;
    lVar50 = lVar26 + lVar31 * 0x178;
    fVar56 = *(float *)(lVar50 + 0x15c);
    fVar85 = (1.0 - (*(float *)(lVar50 + 0x88) + *(float *)(lVar50 + 0xb0)) * fVar56) * 0.5;
    fVar76 = fVar54 + *(float *)(lVar50 + 0x88) * fVar56 + fVar85;
    fVar54 = fVar54 + fVar85 + *(float *)(lVar50 + 0xb0) * fVar56;
    *(float *)(lVar50 + 0x84) = fVar76;
    *(float *)(lVar50 + 0xac) = fVar76;
    *(float *)(lVar50 + 0xd4) = fVar54;
    break;
  default:
    goto switchD_067db1d0_default;
  }
  *(float *)(lVar26 + lVar31 * 0x178 + 0xfc) = fVar54;
switchD_067db1d0_default:
  switch((int)unaff_x19[0x62]) {
  case 0:
    if (uVar47 <= uVar86) goto LAB_067dd448;
    lVar50 = lVar26 + lVar31 * 0x178;
    *(undefined4 *)(lVar50 + 0x88) = 0;
    *(undefined4 *)(lVar50 + 0xb0) = 0x3f800000;
    *(undefined4 *)(lVar50 + 0xd8) = 0x3f800000;
    *(undefined4 *)(lVar50 + 0x100) = 0;
    break;
  case 1:
    if (uVar86 < uVar47) {
      lVar50 = lVar26 + lVar31 * 0x178;
      fVar67 = fVar67 - fVar72;
      fVar54 = (*(float *)(lVar50 + 0x74) - fVar72) / fVar67;
      fVar67 = (*(float *)(lVar50 + 0x9c) - fVar72) / fVar67;
      *(float *)(lVar50 + 0x88) = fVar54;
      goto LAB_067db5cc;
    }
    goto LAB_067dd448;
  case 2:
    if (uVar47 <= uVar86) goto LAB_067dd448;
    lVar50 = lVar26 + lVar31 * 0x178;
    fVar54 = (*(float *)(lVar50 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
             (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
    *(float *)(lVar50 + 0x88) = fVar54;
    fVar67 = (*(float *)(lVar50 + 0x9c) - *(float *)(unaff_x19 + 0x9c)) /
             (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
LAB_067db5cc:
    *(float *)(lVar50 + 0xb0) = fVar67;
    *(float *)(lVar50 + 0xd8) = fVar67;
    *(float *)(lVar50 + 0x100) = fVar54;
    break;
  case 3:
    if (uVar47 <= uVar86) goto LAB_067dd448;
    lVar50 = lVar26 + lVar31 * 0x178;
    fVar67 = *(float *)(lVar50 + 0x15c);
    fVar56 = (1.0 - (*(float *)(lVar50 + 0x84) + *(float *)(lVar50 + 0xd4)) / fVar67) * 0.5;
    fVar54 = *(float *)(lVar50 + 0x84) / fVar67 + fVar56;
    fVar56 = fVar56 + *(float *)(lVar50 + 0xd4) / fVar67;
    *(float *)(lVar50 + 0x88) = fVar54;
    *(float *)(lVar50 + 0xb0) = fVar56;
    *(float *)(lVar50 + 0x100) = fVar54;
    *(float *)(lVar50 + 0xd8) = fVar56;
  }
  if (uVar47 <= uVar86) goto LAB_067dd448;
  lVar50 = lVar26 + lVar31 * 0x178;
  fVar54 = ABS(fVar84) * *(float *)(lVar50 + 0x160) * (1.0 - *(float *)((long)unaff_x19 + 0x2d4));
  if ((*(char *)(lVar50 + 0x5c) == '\0') && ((*(byte *)(lVar26 + lVar31 * 0x178 + 400) & 1) != 0)) {
    fVar54 = -fVar54;
  }
  lVar50 = lVar26 + lVar31 * 0x178;
  fVar67 = *(float *)(lVar50 + 0x88);
  fVar85 = *(float *)(lVar50 + 0x84);
  fVar56 = -2.1474836e+09;
  if (fVar85 != INFINITY) {
    fVar56 = (float)(int)fVar85;
  }
  fVar76 = *(float *)(lVar50 + 0xd4);
  fVar58 = *(float *)(lVar50 + 0xd8);
  fVar72 = -2.1474836e+09;
  if (fVar67 != INFINITY) {
    fVar72 = (float)(int)fVar67;
  }
  uVar65 = FUN_06827b58(fVar85 - fVar56,fVar67 - fVar72);
  *(undefined4 *)(lVar50 + 0x84) = uVar65;
  if (*(uint *)(lVar26 + 0x18) <= uVar86) goto LAB_067dd448;
  fVar58 = fVar58 - fVar72;
  *(float *)(lVar50 + 0x88) = fVar54;
  uVar65 = FUN_06827b58(fVar85 - fVar56,fVar58);
  *(undefined4 *)(lVar26 + lVar31 * 0x178 + 0xac) = uVar65;
  if (*(uint *)(lVar26 + 0x18) <= uVar86) goto LAB_067dd448;
  fVar76 = fVar76 - fVar56;
  *(float *)(lVar26 + lVar31 * 0x178 + 0xb0) = fVar54;
  fVar56 = (float)FUN_06827b58(fVar76,fVar58);
  *(float *)(lVar50 + 0xd4) = fVar56;
  if (*(uint *)(lVar26 + 0x18) <= uVar86) goto LAB_067dd448;
  *(float *)(lVar50 + 0xd8) = fVar54;
  uVar65 = FUN_06827b58(fVar76,fVar67 - fVar72);
  *(undefined4 *)(lVar26 + lVar31 * 0x178 + 0xfc) = uVar65;
  uVar47 = (uint)*(undefined8 *)(lVar26 + 0x18);
  if (uVar47 <= uVar86) goto LAB_067dd448;
  *(float *)(lVar26 + lVar31 * 0x178 + 0x100) = fVar54;
Unity_VisualScripting_BinaryOperatorHandler_OperatorQuery__Equals:
  if (((int)uVar86 < (int)unaff_x19[0x65]) &&
     ((int)fStack00000000000000dc < *(int *)((long)unaff_x19 + 0x32c))) {
    if (((int)uVar20 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] != 5)) {
      if (uVar47 <= uVar86) goto LAB_067dd448;
LAB_067dc81c:
      lVar28 = lVar26 + lVar31 * 0x178;
      *(ulong *)(lVar28 + 0x70) =
           CONCAT44(fVar55 + (float)((ulong)*(undefined8 *)(lVar28 + 0x70) >> 0x20),
                    fVar87 + (float)*(undefined8 *)(lVar28 + 0x70));
      *(float *)(lVar28 + 0x78) = fVar80 + *(float *)(lVar28 + 0x78);
      *(ulong *)(lVar28 + 0x98) =
           CONCAT44(fVar55 + (float)((ulong)*(undefined8 *)(lVar28 + 0x98) >> 0x20),
                    fVar87 + (float)*(undefined8 *)(lVar28 + 0x98));
      *(float *)(lVar28 + 0xa0) = fVar80 + *(float *)(lVar28 + 0xa0);
      *(ulong *)(lVar28 + 0xc0) =
           CONCAT44(fVar55 + (float)((ulong)*(undefined8 *)(lVar28 + 0xc0) >> 0x20),
                    fVar87 + (float)*(undefined8 *)(lVar28 + 0xc0));
      *(float *)(lVar28 + 200) = fVar80 + *(float *)(lVar28 + 200);
      *(ulong *)(lVar28 + 0xe8) =
           CONCAT44(fVar55 + (float)((ulong)*(undefined8 *)(lVar28 + 0xe8) >> 0x20),
                    fVar87 + (float)*(undefined8 *)(lVar28 + 0xe8));
      *(float *)(lVar28 + 0xf0) = fVar80 + *(float *)(lVar28 + 0xf0);
      goto LAB_067db8cc;
    }
    if (((int)uVar20 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] == 5)) {
      if (uVar86 < uVar47) {
        if (*(uint *)(lVar26 + lVar31 * 0x178 + 0x68) == uVar6) goto LAB_067dc81c;
        goto LAB_067db814;
      }
      goto LAB_067dd448;
    }
  }
LAB_067db814:
  if (uVar47 <= uVar86) goto LAB_067dd448;
  if (DAT_076cd829 == '\0') {
    thunk_FUN_032e1da0();
    DAT_076cd829 = '\x01';
    uVar47 = *(uint *)(lVar26 + 0x18);
  }
  puVar14 = PTR_DAT_072795b0;
  uVar65 = *(undefined4 *)(*(undefined8 **)(*(long *)PTR_DAT_072795b0 + 0xb8) + 1);
  lVar50 = lVar26 + lVar31 * 0x178;
  *(undefined8 *)(lVar50 + 0x70) = **(undefined8 **)(*(long *)PTR_DAT_072795b0 + 0xb8);
  *(undefined4 *)(lVar50 + 0x78) = uVar65;
  if (uVar47 <= uVar86) goto LAB_067dd448;
  uVar65 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar14 + 0xb8) + 1);
  lVar50 = lVar26 + lVar31 * 0x178;
  *(undefined8 *)(lVar50 + 0x98) = **(undefined8 **)(*(long *)puVar14 + 0xb8);
  *(undefined4 *)(lVar50 + 0xa0) = uVar65;
  uVar65 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar14 + 0xb8) + 1);
  *(undefined8 *)(lVar50 + 0xc0) = **(undefined8 **)(*(long *)puVar14 + 0xb8);
  *(undefined4 *)(lVar50 + 200) = uVar65;
  uVar65 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar14 + 0xb8) + 1);
  *(undefined8 *)(lVar50 + 0xe8) = **(undefined8 **)(*(long *)puVar14 + 0xb8);
  *(undefined4 *)(lVar50 + 0xf0) = uVar65;
  *(undefined1 *)(lVar28 + 0x194) = 0;
LAB_067db8cc:
  if (iVar21 == 0) {
    pcVar40 = *(code **)(*unaff_x19 + 0x8d8);
LAB_067db8fc:
    (*pcVar40)();
  }
  else if (iVar21 == 1) {
    pcVar40 = *(code **)(*unaff_x19 + 0x8f8);
    goto LAB_067db8fc;
  }
LAB_067db918:
  if ((*plVar5 == 0) || (lVar28 = *(long *)(*plVar5 + 0x38), lVar28 == 0)) goto LAB_067dd33c;
  if (*(uint *)(lVar28 + 0x18) <= uVar86) goto LAB_067dd448;
  lVar28 = lVar28 + lVar31 * 0x178;
  uVar32 = *(undefined8 *)(lVar28 + 0x11c);
  *(undefined8 *)(lVar28 + 0x11c) =
       CONCAT44(fVar55 + (float)((ulong)uVar32 >> 0x20),fVar87 + (float)uVar32);
  *(float *)(lVar28 + 0x124) = fVar80 + *(float *)(lVar28 + 0x124);
  if ((*plVar5 == 0) || (lVar28 = *(long *)(*plVar5 + 0x38), lVar28 == 0)) goto LAB_067dd33c;
  if (*(uint *)(lVar28 + 0x18) <= uVar86) goto LAB_067dd448;
  lVar28 = lVar28 + lVar31 * 0x178;
  *(ulong *)(lVar28 + 0x110) =
       CONCAT44(fVar55 + (float)((ulong)*(undefined8 *)(lVar28 + 0x110) >> 0x20),
                fVar87 + (float)*(undefined8 *)(lVar28 + 0x110));
  *(float *)(lVar28 + 0x118) = fVar80 + *(float *)(lVar28 + 0x118);
  if ((*plVar5 == 0) || (lVar28 = *(long *)(*plVar5 + 0x38), lVar28 == 0)) goto LAB_067dd33c;
  if (*(uint *)(lVar28 + 0x18) <= uVar86) goto LAB_067dd448;
  lVar28 = lVar28 + lVar31 * 0x178;
  *(ulong *)(lVar28 + 0x128) =
       CONCAT44(fVar55 + (float)((ulong)*(undefined8 *)(lVar28 + 0x128) >> 0x20),
                fVar87 + (float)*(undefined8 *)(lVar28 + 0x128));
  *(float *)(lVar28 + 0x130) = fVar80 + *(float *)(lVar28 + 0x130);
  if ((*plVar5 == 0) || (lVar28 = *(long *)(*plVar5 + 0x38), lVar28 == 0)) goto LAB_067dd33c;
  if (*(uint *)(lVar28 + 0x18) <= uVar86) goto LAB_067dd448;
  lVar28 = lVar28 + lVar31 * 0x178;
  *(float *)(lVar28 + 0x134) = fVar87 + *(float *)(lVar28 + 0x134);
  *(ulong *)(lVar28 + 0x138) =
       CONCAT44(fVar80 + (float)((ulong)*(undefined8 *)(lVar28 + 0x138) >> 0x20),
                fVar55 + (float)*(undefined8 *)(lVar28 + 0x138));
  lVar28 = *plVar5;
  if ((lVar28 == 0) || (lVar50 = *(long *)(lVar28 + 0x38), lVar50 == 0)) goto LAB_067dd33c;
  uVar47 = *(uint *)(lVar50 + 0x18);
  if (uVar47 <= uVar86) goto LAB_067dd448;
  lVar43 = lVar50 + lVar31 * 0x178;
  *(float *)(lVar43 + 0x150) = fVar55 + *(float *)(lVar43 + 0x150);
  *(ulong *)(lVar43 + 0x140) =
       CONCAT44(fVar87 + (float)((ulong)*(undefined8 *)(lVar43 + 0x140) >> 0x20),
                fVar87 + (float)*(undefined8 *)(lVar43 + 0x140));
  *(ulong *)(lVar43 + 0x148) =
       CONCAT44(fVar55 + (float)((ulong)*(undefined8 *)(lVar43 + 0x148) >> 0x20),
                fVar55 + (float)*(undefined8 *)(lVar43 + 0x148));
  if (uVar20 == uVar38) {
    uVar38 = *puVar3 - 1;
    if (uVar86 == uVar38) goto LAB_067dbb34;
  }
  else {
    lVar28 = *(long *)(lVar28 + 0x50);
    if (lVar28 == 0) goto LAB_067dd33c;
    if (*(uint *)(lVar28 + 0x18) <= uVar38) goto LAB_067dd448;
    lVar43 = (long)(int)uVar38;
    lVar45 = lVar28 + lVar43 * 0x5c;
    fVar56 = fVar55 + *(float *)(lVar45 + 0x54);
    *(ulong *)(lVar45 + 0x4c) =
         CONCAT44(fVar55 + (float)((ulong)*(undefined8 *)(lVar45 + 0x4c) >> 0x20),
                  fVar55 + (float)*(undefined8 *)(lVar45 + 0x4c));
    *(float *)(lVar45 + 0x54) = fVar56;
    *(float *)(lVar45 + 0x58) = fVar87 + *(float *)(lVar45 + 0x58);
    if (uVar47 <= *(uint *)(lVar45 + 0x34)) goto LAB_067dd448;
    uVar65 = *(undefined4 *)(lVar50 + (long)(int)*(uint *)(lVar45 + 0x34) * 0x178 + 0x11c);
    lVar28 = lVar28 + lVar43 * 0x5c;
    *(float *)(lVar28 + 0x70) = fVar56;
    *(undefined4 *)(lVar28 + 0x6c) = uVar65;
    lVar28 = *plVar5;
    if ((lVar28 == 0) || (lVar50 = *(long *)(lVar28 + 0x50), lVar50 == 0)) goto LAB_067dd33c;
    if (*(uint *)(lVar50 + 0x18) <= uVar38) goto LAB_067dd448;
    lVar28 = *(long *)(lVar28 + 0x38);
    if (lVar28 == 0) goto LAB_067dd33c;
    uVar38 = *(uint *)(lVar50 + lVar43 * 0x5c + 0x40);
    if (*(uint *)(lVar28 + 0x18) <= uVar38) goto LAB_067dd448;
    lVar50 = lVar50 + lVar43 * 0x5c;
    *(undefined4 *)(lVar50 + 0x74) = *(undefined4 *)(lVar28 + (long)(int)uVar38 * 0x178 + 0x128);
    *(undefined4 *)(lVar50 + 0x78) = *(undefined4 *)(lVar50 + 0x4c);
    uVar38 = *puVar3 - 1;
LAB_067dbb34:
    if (uVar86 == uVar38) {
      lVar28 = *plVar5;
      if ((lVar28 == 0) || (lVar50 = *(long *)(lVar28 + 0x50), lVar50 == 0)) goto LAB_067dd33c;
      if (*(uint *)(lVar50 + 0x18) <= uVar20) goto LAB_067dd448;
      lVar43 = lVar50 + lVar46 * 0x5c;
      fVar56 = fVar55 + *(float *)(lVar43 + 0x54);
      *(ulong *)(lVar43 + 0x4c) =
           CONCAT44(fVar55 + (float)((ulong)*(undefined8 *)(lVar43 + 0x4c) >> 0x20),
                    fVar55 + (float)*(undefined8 *)(lVar43 + 0x4c));
      *(float *)(lVar43 + 0x54) = fVar56;
      *(float *)(lVar43 + 0x58) = fVar87 + *(float *)(lVar43 + 0x58);
      lVar28 = *(long *)(lVar28 + 0x38);
      if (lVar28 == 0) goto LAB_067dd33c;
      if (*(uint *)(lVar28 + 0x18) <= *(uint *)(lVar43 + 0x34)) goto LAB_067dd448;
      uVar65 = *(undefined4 *)(lVar28 + (long)(int)*(uint *)(lVar43 + 0x34) * 0x178 + 0x11c);
      lVar50 = lVar50 + lVar46 * 0x5c;
      *(float *)(lVar50 + 0x70) = fVar56;
      *(undefined4 *)(lVar50 + 0x6c) = uVar65;
      lVar28 = *plVar5;
      if ((lVar28 == 0) || (lVar50 = *(long *)(lVar28 + 0x50), lVar50 == 0)) goto LAB_067dd33c;
      if (*(uint *)(lVar50 + 0x18) <= uVar20) goto LAB_067dd448;
      lVar28 = *(long *)(lVar28 + 0x38);
      if (lVar28 == 0) goto LAB_067dd33c;
      uVar38 = *(uint *)(lVar50 + lVar46 * 0x5c + 0x40);
      if (*(uint *)(lVar28 + 0x18) <= uVar38) goto LAB_067dd448;
      lVar50 = lVar50 + lVar46 * 0x5c;
      *(undefined4 *)(lVar50 + 0x74) = *(undefined4 *)(lVar28 + (long)(int)uVar38 * 0x178 + 0x128);
      *(undefined4 *)(lVar50 + 0x78) = *(undefined4 *)(lVar50 + 0x4c);
    }
  }
  if (*(int *)(*(long *)PTR_DAT_0727fa20 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  uVar25 = FUN_058a4c88(uVar41,0);
  if (((((uVar25 & 1) == 0) && (1 < uVar41 - 0x2010)) && (uVar41 != 0xad)) && (uVar41 != 0x2d)) {
    if (bVar12) {
      if (((uVar22 != 1) && ((int)uVar86 < (int)(*(uint *)(lVar26 + 0x18) - 1))) &&
         (((int)uVar86 < (int)*puVar3 && ((uVar41 == 0x2019 || (uVar41 == 0x27)))))) {
        if (*(uint *)(lVar26 + 0x18) <= uVar22 - 2) goto LAB_067dd448;
        uVar9 = *(undefined2 *)(lVar26 + lVar27 + -0x438);
        if (*(int *)(*(long *)PTR_DAT_0727fa20 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
        }
        uVar25 = FUN_058a4c88(uVar9,0);
        if ((uVar25 & 1) != 0) {
          if (*(uint *)(lVar26 + 0x18) <= uVar22) goto LAB_067dd448;
          uVar9 = *(undefined2 *)(lVar26 + lVar27 + -0x148);
          if (*(int *)(*(long *)PTR_DAT_0727fa20 + 0xe0) == 0) {
            thunk_FUN_032cd7c0();
          }
          uVar25 = FUN_058a4c88(uVar9,0);
          if ((uVar25 & 1) != 0) goto LAB_067dbd58;
        }
      }
    }
    else {
      if (uVar22 != 1) {
LAB_067dc88c:
        bVar12 = false;
        goto LAB_067dbd60;
      }
      if (*(int *)(*(long *)PTR_DAT_0727fa20 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      uVar25 = FUN_058a4bbc(uVar41,0);
      if ((uVar25 & 1) != 0) {
        if (*(int *)(*(long *)PTR_DAT_0727fa20 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
        }
        uVar25 = FUN_058a1fe4(uVar41,0);
        if (((uVar41 != 0x200b) && ((uVar25 & 1) == 0)) && (*puVar3 != 1)) goto LAB_067dc88c;
      }
    }
    if (uVar86 == *puVar3 - 1) {
      if (*(int *)(*(long *)PTR_DAT_0727fa20 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      uVar25 = FUN_058a4c88(uVar41,0);
      iVar21 = (int)fStack0000000000000124;
      if ((uVar25 & 1) == 0) goto LAB_067dc084;
    }
    else {
LAB_067dc084:
      iVar21 = uVar22 - 2;
    }
    lVar28 = *plVar5;
    if (lVar28 == 0) goto LAB_067dd33c;
    lVar50 = *(long *)(lVar28 + 0x40);
    if (lVar50 == 0) goto LAB_067dd33c;
    uVar38 = *(uint *)(lVar28 + 0x24);
    iVar24 = *(int *)(lVar50 + 0x18);
    if (iVar24 < (int)(uVar38 + 1)) {
      if (*(int *)(*(long *)Method_System_Collections_Generic_HashSet<CAPI_ovrAvatar2NodeId>_Add__ +
                  0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      FUN_03b4ee04((long *)(lVar28 + 0x40),iVar24 + 1,
                   *(undefined8 *)
                    Method_System_Collections_Generic_HashSet<CAPI_ovrAvatar2NodeId>__ctor__);
      lVar28 = *plVar5;
      if (lVar28 == 0) goto LAB_067dd33c;
    }
    lVar28 = *(long *)(lVar28 + 0x40);
    if (lVar28 == 0) goto LAB_067dd33c;
    if (*(uint *)(lVar28 + 0x18) <= uVar38) goto LAB_067dd448;
    lVar28 = lVar28 + (long)(int)uVar38 * 0x18;
    *(long **)(lVar28 + 0x20) = unaff_x19;
    *(float *)(lVar28 + 0x28) = fStack000000000000016c;
    *(int *)(lVar28 + 0x2c) = iVar21;
    *(int *)(lVar28 + 0x30) = (iVar21 - (int)fStack000000000000016c) + 1;
    thunk_FUN_0333a630();
    lVar28 = unaff_x19[0x6d];
    if (lVar28 == 0) goto LAB_067dd33c;
    lVar50 = *(long *)(lVar28 + 0x50);
    *(int *)(lVar28 + 0x24) = *(int *)(lVar28 + 0x24) + 1;
    if (lVar50 == 0) goto LAB_067dd33c;
    if (*(uint *)(lVar50 + 0x18) <= uVar20) goto LAB_067dd448;
    lVar50 = lVar50 + lVar46 * 0x5c;
    bVar12 = false;
    fStack00000000000000dc = (float)((int)fStack00000000000000dc + 1);
    *(int *)(lVar50 + 0x30) = *(int *)(lVar50 + 0x30) + 1;
  }
  else {
    if (!bVar12) {
      fStack000000000000016c = (float)uVar86;
    }
    if (uVar86 == *puVar3 - 1) {
      lVar28 = *plVar5;
      if (lVar28 == 0) goto LAB_067dd33c;
      lVar50 = *(long *)(lVar28 + 0x40);
      if (lVar50 == 0) goto LAB_067dd33c;
      uVar38 = *(uint *)(lVar28 + 0x24);
      iVar21 = *(int *)(lVar50 + 0x18);
      if (iVar21 < (int)(uVar38 + 1)) {
        if (*(int *)(*(long *)Method_System_Collections_Generic_HashSet<CAPI_ovrAvatar2NodeId>_Add__
                    + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
        }
        FUN_03b4ee04((long *)(lVar28 + 0x40),iVar21 + 1,
                     *(undefined8 *)
                      Method_System_Collections_Generic_HashSet<CAPI_ovrAvatar2NodeId>__ctor__);
        lVar28 = *plVar5;
        if (lVar28 == 0) goto LAB_067dd33c;
      }
      lVar28 = *(long *)(lVar28 + 0x40);
      if (lVar28 == 0) goto LAB_067dd33c;
      if (*(uint *)(lVar28 + 0x18) <= uVar38) goto LAB_067dd448;
      lVar28 = lVar28 + (long)(int)uVar38 * 0x18;
      *(long **)(lVar28 + 0x20) = unaff_x19;
      *(float *)(lVar28 + 0x28) = fStack000000000000016c;
      *(uint *)(lVar28 + 0x2c) = uVar86;
      *(uint *)(lVar28 + 0x30) = uVar22 - (int)fStack000000000000016c;
      thunk_FUN_0333a630();
      lVar28 = unaff_x19[0x6d];
      if (lVar28 == 0) goto LAB_067dd33c;
      lVar50 = *(long *)(lVar28 + 0x50);
      *(int *)(lVar28 + 0x24) = *(int *)(lVar28 + 0x24) + 1;
      if (lVar50 == 0) goto LAB_067dd33c;
      if (*(uint *)(lVar50 + 0x18) <= uVar20) goto LAB_067dd448;
      lVar50 = lVar50 + lVar46 * 0x5c;
      fStack00000000000000dc = (float)((int)fStack00000000000000dc + 1);
      *(int *)(lVar50 + 0x30) = *(int *)(lVar50 + 0x30) + 1;
    }
LAB_067dbd58:
    bVar12 = true;
  }
LAB_067dbd60:
  if ((*plVar5 == 0) || (lVar28 = *(long *)(*plVar5 + 0x38), lVar28 == 0)) goto LAB_067dd33c;
  uVar38 = *(uint *)(lVar28 + 0x18);
  if (uVar38 <= uVar86) goto LAB_067dd448;
  if ((*(byte *)(lVar28 + lVar31 * 0x178 + 400) >> 2 & 1) == 0) {
    if (bVar17) {
LAB_067dbda8:
      if (uVar38 <= uVar22 - 2) goto LAB_067dd448;
      lVar50 = *unaff_x19;
      uVar65 = *(undefined4 *)(lVar28 + lVar27 + -0x330);
      uVar71 = *(undefined4 *)(lVar28 + lVar27 + -0x2f8);
Unity_VisualScripting_DecrementHandler_<>c__<_ctor>b__0_5:
      pcVar40 = *(code **)(lVar50 + 0x908);
LAB_067dc310:
      (*pcVar40)(fStack000000000000006c,fStack0000000000000064,fStack0000000000000068,uVar65,
                 fStack0000000000000104,0,fVar51,uVar71);
      puVar14 = 
      Method_System_Collections_Generic_HashSet<OvrAvatarShaderNameUtils_KnownShader>_Add__;
      lVar28 = *(long *)
                Method_System_Collections_Generic_HashSet<OvrAvatarShaderNameUtils_KnownShader>_Add__
      ;
      if (*(int *)(lVar28 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar28 = *(long *)puVar14;
      }
Unity_VisualScripting_DecrementHandler_<>c__<_ctor>b__0_6:
      fVar57 = 0.0;
      bVar17 = false;
      fStack0000000000000104 = *(float *)(*(long *)(lVar28 + 0xb8) + 0x15a8);
      fStack0000000000000100 = 0.0;
    }
    else {
LAB_067dc270:
      bVar17 = false;
    }
  }
  else {
    lVar28 = lVar28 + lVar31 * 0x178;
    iVar21 = *(int *)(lVar28 + 0x68);
    *(int *)(lVar28 + 0x16c) = iVar18;
    if ((((int)unaff_x19[0x65] < (int)uVar86) || ((int)unaff_x19[0x66] < (int)uVar20)) ||
       (((int)unaff_x19[0x5c] == 5 && (iVar21 + 1 != (int)unaff_x19[0x67])))) {
      bVar16 = false;
    }
    else {
      bVar16 = true;
    }
    if (*(int *)(*(long *)PTR_DAT_0727fa20 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    uVar25 = FUN_058a1fe4(uVar41,0);
    if ((uVar41 != 0x200b) && ((uVar25 & 1) == 0)) {
      lVar28 = *plVar5;
      if ((lVar28 == 0) || (lVar50 = *(long *)(lVar28 + 0x38), lVar50 == 0)) goto LAB_067dd33c;
      if (*(uint *)(lVar50 + 0x18) <= uVar86) goto LAB_067dd448;
      fVar56 = *(float *)(lVar50 + lVar31 * 0x178 + 0x160);
      if (fVar57 <= fVar56) {
        fVar57 = fVar56;
      }
      if (fStack0000000000000100 <= ABS(fVar54)) {
        fStack0000000000000100 = ABS(fVar54);
      }
      if (iVar21 != iStack0000000000000054) {
        if (*(int *)(*(long *)
                      Method_System_Collections_Generic_HashSet<OvrAvatarShaderNameUtils_KnownShader>_Add__
                    + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
          lVar28 = *plVar5;
          if (lVar28 == 0) goto LAB_067dd33c;
          lVar50 = *(long *)(*(long *)
                              Method_System_Collections_Generic_HashSet<OvrAvatarShaderNameUtils_KnownShader>_Add__
                            + 0xb8);
        }
        else {
          lVar50 = *(long *)(*(long *)
                              Method_System_Collections_Generic_HashSet<OvrAvatarShaderNameUtils_KnownShader>_Add__
                            + 0xb8);
        }
        fStack0000000000000104 = *(float *)(lVar50 + 0x15a8);
      }
      lVar28 = *(long *)(lVar28 + 0x38);
      if (lVar28 == 0) goto LAB_067dd33c;
      if (*(uint *)(lVar28 + 0x18) <= uVar86) goto LAB_067dd448;
      if (unaff_x19[0x1f] == 0) goto LAB_067dd33c;
      fVar67 = *(float *)(lVar28 + lVar31 * 0x178 + 0x14c);
      fVar56 = (float)FUN_06c51a1c(unaff_x19[0x1f] + 0x50,0);
      fVar67 = fVar67 + fVar57 * fVar56;
      iStack0000000000000054 = iVar21;
      if (fVar67 <= fStack0000000000000104) {
        fStack0000000000000104 = fVar67;
      }
    }
    if (!bVar17) {
      bVar17 = false;
      if ((((uVar41 == 0xd) || ((uVar41 & 0xfffe) == 10)) || ((int)uVar23 < (int)uVar86)) ||
         ((bool)(bVar16 ^ 1))) goto LAB_067dc380;
      if (uVar86 == uVar23) {
        if (*(int *)(*(long *)PTR_DAT_0727fa20 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
        }
        uVar25 = FUN_058a5c00(uVar41,0);
        if ((uVar25 & 1) != 0) goto LAB_067dc270;
      }
      if ((*plVar5 == 0) || (lVar28 = *(long *)(*plVar5 + 0x38), lVar28 == 0)) goto LAB_067dd33c;
      if (*(uint *)(lVar28 + 0x18) <= uVar86) goto LAB_067dd448;
      lVar28 = lVar28 + lVar31 * 0x178;
      fVar51 = *(float *)(lVar28 + 0x160);
      fStack000000000000006c = *(float *)(lVar28 + 0x11c);
      bVar17 = fVar57 != 0.0;
      uVar19 = *(undefined4 *)(lVar28 + 0x168);
      fVar56 = fVar51;
      if (bVar17) {
        fVar56 = fVar57;
      }
      fVar57 = fVar56;
      fStack0000000000000068 = 0.0;
      fVar56 = fVar54;
      if (bVar17) {
        fVar56 = fStack0000000000000100;
      }
      fStack0000000000000064 = fStack0000000000000104;
      fStack0000000000000100 = fVar56;
    }
    if (*puVar3 == 1) {
      if ((*plVar5 != 0) && (lVar28 = *(long *)(*plVar5 + 0x38), lVar28 != 0)) {
        if (uVar86 < *(uint *)(lVar28 + 0x18)) {
          lVar28 = lVar28 + lVar31 * 0x178;
          lVar50 = *unaff_x19;
          uVar65 = *(undefined4 *)(lVar28 + 0x128);
          uVar71 = *(undefined4 *)(lVar28 + 0x160);
          goto Unity_VisualScripting_DecrementHandler_<>c__<_ctor>b__0_5;
        }
        goto LAB_067dd448;
      }
      goto LAB_067dd33c;
    }
    if ((uVar86 == uVar35) || ((int)uVar23 <= (int)uVar86)) {
      if (*(int *)(*(long *)PTR_DAT_0727fa20 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      uVar25 = FUN_058a1fe4(uVar41,0);
      if ((*plVar5 != 0) && (lVar28 = *(long *)(*plVar5 + 0x38), lVar28 != 0)) {
        lVar50 = lVar31;
        uVar38 = uVar86;
        if (uVar41 == 0x200b || (uVar25 & 1) != 0) {
          lVar50 = (long)(int)uVar23;
          uVar38 = uVar23;
        }
        if (uVar38 < *(uint *)(lVar28 + 0x18)) {
          lVar28 = lVar28 + lVar50 * 0x178;
          uVar65 = *(undefined4 *)(lVar28 + 0x128);
          uVar71 = *(undefined4 *)(lVar28 + 0x160);
          pcVar40 = *(code **)(*unaff_x19 + 0x908);
          goto LAB_067dc310;
        }
        goto LAB_067dd448;
      }
      goto LAB_067dd33c;
    }
    if (!bVar16) {
      if ((*plVar5 != 0) && (lVar28 = *(long *)(*plVar5 + 0x38), lVar28 != 0)) {
        uVar38 = *(uint *)(lVar28 + 0x18);
        goto LAB_067dbda8;
      }
      goto LAB_067dd33c;
    }
    if ((int)uVar86 < (int)(*puVar3 - 1)) {
      if ((*plVar5 == 0) || (lVar28 = *(long *)(*plVar5 + 0x38), lVar28 == 0)) goto LAB_067dd33c;
      if (*(uint *)(lVar28 + 0x18) <= uVar22) goto LAB_067dd448;
      uVar25 = FUN_067f5e70(uVar19,*(undefined4 *)(lVar28 + lVar27),0);
      if ((uVar25 & 1) == 0) {
        if ((*plVar5 != 0) && (lVar28 = *(long *)(*plVar5 + 0x38), lVar28 != 0)) {
          if (uVar86 < *(uint *)(lVar28 + 0x18)) {
            lVar28 = lVar28 + lVar31 * 0x178;
            (**(code **)(*unaff_x19 + 0x908))
                      (fStack000000000000006c,fStack0000000000000064,fStack0000000000000068,
                       *(undefined4 *)(lVar28 + 0x128),fStack0000000000000104,0,fVar51,
                       *(undefined4 *)(lVar28 + 0x160));
            puVar14 = 
            Method_System_Collections_Generic_HashSet<OvrAvatarShaderNameUtils_KnownShader>_Add__;
            lVar28 = *(long *)
                      Method_System_Collections_Generic_HashSet<OvrAvatarShaderNameUtils_KnownShader>_Add__
            ;
            if (*(int *)(lVar28 + 0xe0) == 0) {
              thunk_FUN_032cd7c0();
              lVar28 = *(long *)puVar14;
            }
            goto Unity_VisualScripting_DecrementHandler_<>c__<_ctor>b__0_6;
          }
          goto LAB_067dd448;
        }
        goto LAB_067dd33c;
      }
    }
    bVar17 = true;
  }
LAB_067dc380:
  if ((*plVar5 == 0) || (lVar28 = *(long *)(*plVar5 + 0x38), lVar28 == 0)) goto LAB_067dd33c;
  if (*(uint *)(lVar28 + 0x18) <= uVar86) goto LAB_067dd448;
  if (lVar44 == 0) goto LAB_067dd33c;
  uVar38 = *(uint *)(lVar28 + lVar31 * 0x178 + 400);
  fVar56 = (float)FUN_06c51a3c(lVar44 + 0x50,0);
  if ((uVar38 >> 6 & 1) == 0) {
    if (bVar13) {
      if ((*plVar5 == 0) || (lVar28 = *(long *)(*plVar5 + 0x38), lVar28 == 0)) goto LAB_067dd33c;
      if (*(uint *)(lVar28 + 0x18) <= uVar22 - 2) goto LAB_067dd448;
      uVar65 = *(undefined4 *)(lVar28 + lVar27 + -0x330);
      fVar55 = *(float *)(lVar28 + lVar27 + -0x30c);
      pcVar40 = *(code **)(*unaff_x19 + 0x908);
LAB_067dc964:
      (*pcVar40)(fStack000000000000009c,fStack0000000000000098,fStack000000000000008c,uVar65,
                 fVar75 * fVar56 + fVar55,0,fVar75,fVar75);
    }
LAB_067dc998:
    bVar13 = false;
  }
  else {
    lVar28 = *plVar5;
    if ((lVar28 == 0) || (lVar50 = *(long *)(lVar28 + 0x38), lVar50 == 0)) goto LAB_067dd33c;
    if (*(uint *)(lVar50 + 0x18) <= uVar86) goto LAB_067dd448;
    *(int *)(lVar50 + lVar31 * 0x178 + 0x174) = iVar18;
    if ((((int)unaff_x19[0x65] < (int)uVar86) || ((int)unaff_x19[0x66] < (int)uVar20)) ||
       (((int)unaff_x19[0x5c] == 5 &&
        (*(int *)(lVar50 + lVar31 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x67])))) {
      bVar16 = false;
    }
    else {
      bVar16 = true;
    }
    if ((((uVar41 == 0xd) || ((uVar41 & 0xfffe) == 10)) || ((int)uVar23 < (int)uVar86)) ||
       (bVar13 || !bVar16)) {
LAB_067dc4cc:
      if (!bVar13) goto LAB_067dc998;
    }
    else {
      if (uVar86 == uVar23) {
        if (*(int *)(*(long *)PTR_DAT_0727fa20 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
        }
        uVar25 = FUN_058a5c00(uVar41,0);
        if ((uVar25 & 1) != 0) goto LAB_067dc4cc;
        lVar28 = *plVar5;
        if (lVar28 == 0) goto LAB_067dd33c;
      }
      lVar28 = *(long *)(lVar28 + 0x38);
      if (lVar28 == 0) goto LAB_067dd33c;
      if (*(uint *)(lVar28 + 0x18) <= uVar86) goto LAB_067dd448;
      lVar28 = lVar28 + lVar31 * 0x178;
      fVar52 = *(float *)(lVar28 + 0x60);
      fStack000000000000009c = *(float *)(lVar28 + 0x11c);
      fVar53 = *(float *)(lVar28 + 0x14c);
      fVar75 = *(float *)(lVar28 + 0x160);
      fStack0000000000000098 = fVar56 * fVar75 + fVar53;
      fStack000000000000008c = 0.0;
    }
    uVar38 = *puVar3;
    if (uVar38 == 1) {
      if ((*plVar5 != 0) && (lVar28 = *(long *)(*plVar5 + 0x38), lVar28 != 0)) {
        uVar38 = *(uint *)(lVar28 + 0x18);
LAB_067dc654:
        if (uVar86 < uVar38) {
          lVar28 = lVar28 + lVar31 * 0x178;
          lVar50 = *unaff_x19;
          uVar65 = *(undefined4 *)(lVar28 + 0x128);
          fVar55 = *(float *)(lVar28 + 0x14c);
LAB_067dc66c:
          pcVar40 = *(code **)(lVar50 + 0x908);
          goto LAB_067dc964;
        }
        goto LAB_067dd448;
      }
      goto LAB_067dd33c;
    }
    if (uVar86 == uVar35) {
      if (*(int *)(*(long *)PTR_DAT_0727fa20 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      uVar25 = FUN_058a1fe4(uVar41,0);
      if ((*plVar5 != 0) && (lVar28 = *(long *)(*plVar5 + 0x38), lVar28 != 0)) {
        uVar38 = *(uint *)(lVar28 + 0x18);
        if (uVar41 == 0x200b || (uVar25 & 1) != 0) goto LAB_067dc928;
LAB_067dc938:
        lVar50 = lVar31;
        if (uVar86 < uVar38) {
LAB_067dc940:
          lVar28 = lVar28 + lVar50 * 0x178;
          fVar55 = *(float *)(lVar28 + 0x14c);
          uVar65 = *(undefined4 *)(lVar28 + 0x128);
          pcVar40 = *(code **)(*unaff_x19 + 0x908);
          goto LAB_067dc964;
        }
        goto LAB_067dd448;
      }
      goto LAB_067dd33c;
    }
    if ((int)uVar86 < (int)uVar38) {
      lVar28 = *plVar5;
      if ((lVar28 != 0) && (lVar50 = *(long *)(lVar28 + 0x38), lVar50 != 0)) {
        if (uVar22 < *(uint *)(lVar50 + 0x18)) {
          if (*(float *)(lVar50 + lVar27 + -0x108) == fVar52) {
            fVar67 = *(float *)(lVar50 + lVar27 + -0x1c);
            if (*(int *)(*(long *)
                          Method_System_Collections_Generic_HashSet<CAPI_ovrAvatar2JointType>_GetEnumerator__
                        + 0xe0) == 0) {
              thunk_FUN_032cd7c0();
            }
            uVar25 = FUN_067f6284(fVar55 + fVar67,fVar53,0);
            if ((uVar25 & 1) != 0) {
              uVar38 = *puVar3;
              goto LAB_067dc758;
            }
            lVar28 = *plVar5;
            if (lVar28 == 0) goto LAB_067dd33c;
          }
          lVar28 = *(long *)(lVar28 + 0x38);
          if (lVar28 != 0) {
            uVar38 = *(uint *)(lVar28 + 0x18);
            if ((int)uVar86 <= (int)uVar23) goto LAB_067dc938;
LAB_067dc928:
            lVar50 = (long)(int)uVar23;
            if (uVar23 < uVar38) goto LAB_067dc940;
            goto LAB_067dd448;
          }
          goto LAB_067dd33c;
        }
        goto LAB_067dd448;
      }
      goto LAB_067dd33c;
    }
LAB_067dc758:
    if ((int)uVar86 < (int)uVar38) {
      iVar21 = FUN_06becc20(lVar44,0);
      if (*(uint *)(lVar26 + 0x18) <= uVar22) goto LAB_067dd448;
      lVar28 = *(long *)(lVar26 + lVar27 + -0x130);
      if (lVar28 == 0) goto LAB_067dd33c;
      iVar24 = FUN_06becc20(lVar28,0);
      if (iVar21 != iVar24) {
        if ((*plVar5 != 0) && (lVar28 = *(long *)(*plVar5 + 0x38), lVar28 != 0)) {
          uVar38 = *(uint *)(lVar28 + 0x18);
          goto LAB_067dc654;
        }
        goto LAB_067dd33c;
      }
    }
    if (!bVar16) {
      if ((*plVar5 != 0) && (lVar28 = *(long *)(*plVar5 + 0x38), lVar28 != 0)) {
        if (uVar22 - 2 < *(uint *)(lVar28 + 0x18)) {
          lVar50 = *unaff_x19;
          uVar65 = *(undefined4 *)(lVar28 + lVar27 + -0x330);
          fVar55 = *(float *)(lVar28 + lVar27 + -0x30c);
          goto LAB_067dc66c;
        }
        goto LAB_067dd448;
      }
      goto LAB_067dd33c;
    }
    bVar13 = true;
  }
  if ((*plVar5 == 0) || (lVar28 = *(long *)(*plVar5 + 0x38), lVar28 == 0)) goto LAB_067dd33c;
  uVar38 = (uint)*(undefined8 *)(lVar28 + 0x18);
  if (uVar38 <= uVar86) goto LAB_067dd448;
  if ((*(byte *)(lVar28 + lVar31 * 0x178 + 0x191) >> 1 & 1) == 0) {
    if (bVar11) {
      (**(code **)(*unaff_x19 + 0x918))
                (fStack00000000000000e0,fStack00000000000000e4,fStack00000000000000b8,
                 fStack00000000000000cc,fVar69,fStack00000000000000b8);
    }
LAB_067dcd4c:
    bVar11 = false;
  }
  else {
    if ((((int)unaff_x19[0x65] < (int)uVar86) || ((int)unaff_x19[0x66] < (int)uVar20)) ||
       (((int)unaff_x19[0x5c] == 5 &&
        (*(int *)(lVar28 + lVar31 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x67])))) {
      bVar16 = false;
    }
    else {
      bVar16 = true;
    }
    if (bVar11) {
LAB_067dcb48:
      if (uVar38 <= uVar86) goto LAB_067dd448;
      lVar28 = lVar28 + lVar31 * 0x178;
      fVar56 = *(float *)(lVar28 + 0x128);
      fVar72 = *(float *)(lVar28 + 0x188);
      uVar29 = *(undefined8 *)(lVar28 + 0x17c);
      fVar80 = *(float *)(lVar28 + 0x184);
      uVar32 = *(undefined8 *)(lVar28 + 0x184);
      fVar76 = *(float *)(lVar28 + 0x18c);
      fVar55 = *(float *)(lVar28 + 0x11c);
      fVar67 = *(float *)(lVar28 + 0x148);
      fVar85 = *(float *)(lVar28 + 0x150);
      in_stack_00000188 = uVar29;
      fStack0000000000000190 = fVar80;
      fStack0000000000000194 = fVar72;
      in_stack_00000198 = fVar76;
      in_stack_000001a0 = in_stack_00001060;
      in_stack_000001a8 = in_stack_00001068;
      in_stack_000001b0 = in_stack_00001070;
      uVar25 = FUN_067f7280(&stack0x000001a0,&stack0x00000188,0);
      lVar28 = *(long *)Method_System_Collections_Generic_HashSet<CAPI_ovrAvatar2JointType>_Remove__
      ;
      if ((uVar25 & 1) == 0) {
        if (*(int *)(lVar28 + 0xe0) == 0) {
          thunk_FUN_032cd7c0(lVar28);
        }
        fVar56 = fVar56 + (float)in_stack_00001068;
        fVar55 = fVar55 - (float)((ulong)in_stack_00001060 >> 0x20);
        fVar67 = fVar67 + (float)((ulong)in_stack_00001068 >> 0x20);
        if (fVar55 <= fStack00000000000000e0) {
          fStack00000000000000e0 = fVar55;
        }
        if (fVar85 - in_stack_00001070 <= fStack00000000000000e4) {
          fStack00000000000000e4 = fVar85 - in_stack_00001070;
        }
        if (fStack00000000000000cc <= fVar56) {
          fStack00000000000000cc = fVar56;
        }
        if (fVar69 <= fVar67) {
          fVar69 = fVar67;
        }
      }
      else {
        if (*(int *)(lVar28 + 0xe0) == 0) {
          thunk_FUN_032cd7c0(lVar28);
        }
        fVar55 = (fVar55 + (fStack00000000000000cc - (float)in_stack_00001068)) * 0.5;
        if (fVar85 <= fStack00000000000000e4) {
          fStack00000000000000e4 = fVar85;
        }
        if (fVar69 <= fVar67) {
          fVar69 = fVar67;
        }
        (**(code **)(*unaff_x19 + 0x918))
                  (fStack00000000000000e0,fStack00000000000000e4,fStack00000000000000b8,fVar55,
                   fVar69,fStack00000000000000b8);
        fStack00000000000000e4 = fVar85 - fVar76;
        fStack00000000000000cc = fVar56 + fVar80;
        fStack00000000000000b8 = 0.0;
        fStack00000000000000e0 = fVar55;
        in_stack_00001060 = uVar29;
        in_stack_00001068 = uVar32;
        in_stack_00001070 = fVar76;
        fVar69 = fVar67 + fVar72;
      }
      if (((*puVar3 == 1) || (uVar86 == uVar35)) || (((int)uVar23 <= (int)uVar86 || (!bVar16)))) {
        (**(code **)(*unaff_x19 + 0x918))
                  (fStack00000000000000e0,fStack00000000000000e4,fStack00000000000000b8,
                   fStack00000000000000cc,fVar69,fStack00000000000000b8);
        goto LAB_067dcd4c;
      }
      bVar11 = true;
    }
    else {
      if ((((uVar41 != 0xd) && ((uVar41 & 0xfffe) != 10)) && ((int)uVar86 <= (int)uVar23)) &&
         (bVar16)) {
        if (uVar86 == uVar23) {
          if (*(int *)(*(long *)PTR_DAT_0727fa20 + 0xe0) == 0) {
            thunk_FUN_032cd7c0();
          }
          uVar25 = FUN_058a5c00(uVar41,0);
          if ((uVar25 & 1) != 0) goto LAB_067dcabc;
        }
        puVar14 = 
        Method_System_Collections_Generic_HashSet<OvrAvatarShaderNameUtils_KnownShader>_Add__;
        lVar50 = *(long *)
                  Method_System_Collections_Generic_HashSet<OvrAvatarShaderNameUtils_KnownShader>_Add__
        ;
        if (*(int *)(lVar50 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
          lVar50 = *(long *)puVar14;
        }
        if ((*plVar5 != 0) && (lVar28 = *(long *)(*plVar5 + 0x38), lVar28 != 0)) {
          uVar38 = (uint)*(undefined8 *)(lVar28 + 0x18);
          if (uVar86 < uVar38) {
            lVar50 = *(long *)(lVar50 + 0xb8);
            lVar44 = lVar28 + lVar31 * 0x178;
            in_stack_00001068 = *(undefined8 *)(lVar44 + 0x184);
            in_stack_00001060 = *(undefined8 *)(lVar44 + 0x17c);
            fStack00000000000000e0 = *(float *)(lVar50 + 0x1598);
            fStack00000000000000e4 = *(float *)(lVar50 + 0x159c);
            in_stack_00001070 = *(float *)(lVar44 + 0x18c);
            fStack00000000000000cc = *(float *)(lVar50 + 0x15a0);
            fVar69 = *(float *)(lVar50 + 0x15a4);
            fStack00000000000000b8 = 0.0;
            goto LAB_067dcb48;
          }
          goto LAB_067dd448;
        }
        goto LAB_067dd33c;
      }
LAB_067dcabc:
      bVar11 = false;
    }
  }
  uVar86 = *puVar3;
  fStack0000000000000124 = (float)((int)fStack0000000000000124 + 1);
  lVar27 = lVar27 + 0x178;
  bVar16 = (int)uVar86 <= (int)uVar22;
  uVar38 = uVar20;
  uVar22 = uVar22 + 1;
  if (bVar16) goto LAB_067dcf18;
  goto LAB_067daf08;
LAB_067dcf18:
  lVar26 = *plVar5;
  if (lVar26 != 0) {
    iVar18 = uVar20 + 1;
    plVar49 = (long *)PTR_DAT_072a6408;
LAB_067dcf3c:
    *(uint *)(lVar26 + 0x18) = uVar86;
    lVar27 = unaff_x19[0xd4];
    *(int *)(lVar26 + 0x2c) = iVar18;
    if ((int)uVar86 < 1 || fStack00000000000000dc == 0.0) {
      fStack00000000000000dc = 1.4013e-45;
    }
    *(int *)(lVar26 + 0x1c) = (int)lVar27;
    *(float *)(lVar26 + 0x24) = fStack00000000000000dc;
    *(int *)(lVar26 + 0x30) = (int)unaff_x19[0x96] + 1;
    if (((int)unaff_x19[99] != 0xff) ||
       (uVar25 = (**(code **)(*unaff_x19 + 0x1c8))(), (uVar25 & 1) == 0)) {
LAB_067da818:
      if (*(int *)(*(long *)PTR_DAT_072a5e70 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      FUN_067f5430();
      return;
    }
    lVar26 = unaff_x19[0xdb];
    if (lVar26 != 0) {
      (**(code **)(lVar26 + 0x18))
                (*(undefined8 *)(lVar26 + 0x40),*plVar5,*(undefined8 *)(lVar26 + 0x28));
    }
    if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
      if ((*plVar5 == 0) || (lVar26 = *(long *)(*plVar5 + 0x60), lVar26 == 0)) goto LAB_067dd33c;
      if (*(int *)(*plVar49 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      if (*(int *)(lVar26 + 0x18) == 0) goto LAB_067dd448;
      FUN_0682f6d0(lVar26 + 0x20,1,0);
    }
    if (unaff_x19[0x74] != 0) {
      FUN_06bcb264(unaff_x19[0x74],0);
      if ((unaff_x19[0x6d] != 0) && (lVar26 = *(long *)(unaff_x19[0x6d] + 0x60), lVar26 != 0)) {
        if (*(int *)(lVar26 + 0x18) == 0) {
LAB_067dd448:
                    /* WARNING: Subroutine does not return */
          Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
        }
        if (unaff_x19[0x74] != 0) {
          FUN_06bc8700(unaff_x19[0x74],*(undefined8 *)(lVar26 + 0x30),0);
          if ((unaff_x19[0x6d] != 0) && (lVar26 = *(long *)(unaff_x19[0x6d] + 0x60), lVar26 != 0)) {
            if (*(int *)(lVar26 + 0x18) == 0) goto LAB_067dd448;
            if (unaff_x19[0x74] != 0) {
              FUN_06bc8904(unaff_x19[0x74],*(undefined8 *)(lVar26 + 0x48),0);
              if ((unaff_x19[0x6d] != 0) &&
                 (lVar26 = *(long *)(unaff_x19[0x6d] + 0x60), lVar26 != 0)) {
                if (*(int *)(lVar26 + 0x18) == 0) goto LAB_067dd448;
                if (unaff_x19[0x74] != 0) {
                  FUN_06bc8964(unaff_x19[0x74],*(undefined8 *)(lVar26 + 0x50),0);
                  if ((unaff_x19[0x6d] != 0) &&
                     (lVar26 = *(long *)(unaff_x19[0x6d] + 0x60), lVar26 != 0)) {
                    if (*(int *)(lVar26 + 0x18) == 0) goto LAB_067dd448;
                    if (unaff_x19[0x74] != 0) {
                      FUN_06bc8b24(unaff_x19[0x74],*(undefined8 *)(lVar26 + 0x58),0);
                      if (unaff_x19[0x74] != 0) {
                        FUN_06bcaf70(unaff_x19[0x74],0);
                        lVar26 = *plVar5;
                        if (lVar26 != 0) {
                          lVar28 = 0;
                          lVar27 = 0;
                          do {
                            uVar25 = lVar27 + 1;
                            if ((long)*(int *)(lVar26 + 0x34) <= (long)uVar25) goto LAB_067da818;
                            lVar26 = *(long *)(lVar26 + 0x60);
                            if (lVar26 == 0) break;
                            if (*(int *)(*plVar49 + 0xe0) == 0) {
                              thunk_FUN_032cd7c0();
                            }
                            if (*(uint *)(lVar26 + 0x18) <= uVar25) goto LAB_067dd448;
                            FUN_0682f59c(lVar26 + lVar28 + 0x70,0);
                            lVar26 = unaff_x19[0xe1];
                            if (lVar26 == 0) break;
                            if (*(uint *)(lVar26 + 0x18) <= uVar25) goto LAB_067dd448;
                            uVar32 = *(undefined8 *)(lVar26 + lVar27 * 8 + 0x28);
                            if (*(int *)(*(long *)PTR_DAT_072794f0 + 0xe0) == 0) {
                              thunk_FUN_032cd7c0();
                            }
                            uVar66 = FUN_06bece64(uVar32,0,0);
                            if ((uVar66 & 1) == 0) {
                              if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
                                if ((*plVar5 == 0) ||
                                   (lVar26 = *(long *)(*plVar5 + 0x60), lVar26 == 0)) break;
                                if (*(int *)(*plVar49 + 0xe0) == 0) {
                                  thunk_FUN_032cd7c0();
                                }
                                if (*(uint *)(lVar26 + 0x18) <= uVar25) goto LAB_067dd448;
                                FUN_0682f6d0(lVar26 + lVar28 + 0x70,1,0);
                              }
                              lVar26 = unaff_x19[0xe1];
                              if (lVar26 == 0) break;
                              if (*(uint *)(lVar26 + 0x18) <= uVar25) goto LAB_067dd448;
                              lVar26 = *(long *)(lVar26 + lVar27 * 8 + 0x28);
                              if (lVar26 == 0) break;
                              lVar26 = FUN_068369d8(lVar26,0);
                              if ((*plVar5 == 0) ||
                                 (lVar50 = *(long *)(*plVar5 + 0x60), lVar50 == 0)) break;
                              if (*(uint *)(lVar50 + 0x18) <= uVar25) goto LAB_067dd448;
                              if (lVar26 == 0) break;
                              FUN_06bc8700(lVar26,*(undefined8 *)(lVar50 + lVar28 + 0x80),0);
                              lVar26 = unaff_x19[0xe1];
                              if (lVar26 == 0) break;
                              if (*(uint *)(lVar26 + 0x18) <= uVar25) goto LAB_067dd448;
                              lVar26 = *(long *)(lVar26 + lVar27 * 8 + 0x28);
                              if (lVar26 == 0) break;
                              lVar26 = FUN_068369d8(lVar26,0);
                              if ((*plVar5 == 0) ||
                                 (lVar50 = *(long *)(*plVar5 + 0x60), lVar50 == 0)) break;
                              if (*(uint *)(lVar50 + 0x18) <= uVar25) goto LAB_067dd448;
                              if (lVar26 == 0) break;
                              FUN_06bc8904(lVar26,*(undefined8 *)(lVar50 + lVar28 + 0x98),0);
                              lVar26 = unaff_x19[0xe1];
                              if (lVar26 == 0) break;
                              if (*(uint *)(lVar26 + 0x18) <= uVar25) goto LAB_067dd448;
                              lVar26 = *(long *)(lVar26 + lVar27 * 8 + 0x28);
                              if (lVar26 == 0) break;
                              lVar26 = FUN_068369d8(lVar26,0);
                              if ((*plVar5 == 0) ||
                                 (lVar50 = *(long *)(*plVar5 + 0x60), lVar50 == 0)) break;
                              if (*(uint *)(lVar50 + 0x18) <= uVar25) goto LAB_067dd448;
                              if (lVar26 == 0) break;
                              FUN_06bc8964(lVar26,*(undefined8 *)(lVar50 + lVar28 + 0xa0),0);
                              lVar26 = unaff_x19[0xe1];
                              if (lVar26 == 0) break;
                              if (*(uint *)(lVar26 + 0x18) <= uVar25) goto LAB_067dd448;
                              lVar26 = *(long *)(lVar26 + lVar27 * 8 + 0x28);
                              if (lVar26 == 0) break;
                              lVar26 = FUN_068369d8(lVar26,0);
                              if ((*plVar5 == 0) ||
                                 (lVar50 = *(long *)(*plVar5 + 0x60), lVar50 == 0)) break;
                              if (*(uint *)(lVar50 + 0x18) <= uVar25) goto LAB_067dd448;
                              if (lVar26 == 0) break;
                              FUN_06bc8b24(lVar26,*(undefined8 *)(lVar50 + lVar28 + 0xa8),0);
                              lVar26 = unaff_x19[0xe1];
                              if (lVar26 == 0) break;
                              if (*(uint *)(lVar26 + 0x18) <= uVar25) goto LAB_067dd448;
                              lVar26 = *(long *)(lVar26 + lVar27 * 8 + 0x28);
                              if ((lVar26 == 0) || (lVar26 = FUN_068369d8(lVar26,0), lVar26 == 0))
                              break;
                              FUN_06bcaf70(lVar26,0);
                            }
                            lVar26 = *plVar5;
                            lVar27 = lVar27 + 1;
                            lVar28 = lVar28 + 0x50;
                          } while (lVar26 != 0);
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
LAB_067dd33c:
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


