/*
FUNCTION_NAME: Unity.VisualScripting.AdditionHandler.<>c$$<.ctor>b__0_94
ENTRY_POINT: 067d6374
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 133
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;data_collection_or_telemetry;possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_10;validity_or_gating_hits_21;paired_field_refs_with_eye_source;telemetry_or_network_hits_2;functionality_permission_setup;functionality_data_collection_or_telemetry_hits_2;functionality_possible_biometrics_hits_14
*/


void Unity_VisualScripting_AdditionHandler_<>c__<_ctor>b__0_94(undefined8 param_1)

{
  uint *puVar1;
  long *plVar2;
  uint uVar3;
  int iVar4;
  byte bVar5;
  undefined2 uVar6;
  uint uVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  undefined *puVar11;
  undefined *puVar12;
  bool bVar13;
  bool bVar14;
  undefined4 uVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  long lVar21;
  long lVar22;
  undefined8 uVar23;
  ulong uVar24;
  long lVar25;
  ulong uVar26;
  undefined8 uVar27;
  undefined1 uVar28;
  char cVar29;
  uint uVar30;
  float *pfVar31;
  undefined4 *puVar32;
  uint uVar33;
  long lVar34;
  float *pfVar35;
  code *pcVar36;
  uint uVar37;
  int iVar38;
  uint uVar39;
  long lVar40;
  long lVar41;
  long lVar42;
  long lVar43;
  long *unaff_x19;
  uint uVar44;
  long *unaff_x21;
  int unaff_w23;
  undefined8 uVar45;
  long unaff_x24;
  int unaff_w25;
  long *plVar46;
  long *plVar47;
  long *unaff_x26;
  long lVar48;
  float fVar49;
  float fVar50;
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
  undefined4 uVar63;
  ulong uVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  undefined4 uVar70;
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
  float unaff_s14;
  float fVar82;
  float fVar83;
  uint uStack000000000000002c;
  int iStack0000000000000054;
  float fStack0000000000000064;
  float fStack0000000000000068;
  float fStack000000000000006c;
  float fStack000000000000008c;
  float fStack0000000000000098;
  float fStack000000000000009c;
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
  long *in_stack_00000150;
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
  undefined4 in_stack_000001d0;
  long in_stack_00000fa8;
  uint in_stack_0000103c;
  uint uVar84;
  undefined8 in_stack_00001060;
  undefined8 in_stack_00001068;
  float in_stack_00001070;
  undefined8 in_stack_00001078;
  float fVar85;
  
  fVar49 = (float)FUN_06c5196c(param_1,0);
  fVar74 = *(float *)((long)unaff_x19 + 0x1e4);
  *(undefined4 *)((long)unaff_x19 + 0x404) = 0x3f800000;
  *(float *)(unaff_x19 + 0x3d) = fVar74;
  puVar11 = Method_System_Collections_Generic_HashSet<OVRPlugin_SpaceComponentType>_Add__;
  fVar66 = DAT_013a0014;
  fVar55 = DAT_013a0014;
  if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
    fVar55 = 1.0;
  }
  FUN_04a0f5c4(fVar74,unaff_x19 + 0x3e,
               *(undefined8 *)
                Method_System_Collections_Generic_HashSet<OVRPlugin_SpaceComponentType>_Add__);
  *(uint *)((long)unaff_x19 + 0x25c) = *(uint *)(unaff_x19 + 0x4b);
  if ((*(uint *)(unaff_x19 + 0x4b) & 1) == 0) {
    uVar15 = (undefined4)unaff_x19[0x42];
  }
  else {
    uVar15 = 700;
  }
  *(undefined4 *)((long)unaff_x19 + 0x214) = uVar15;
  FUN_04a0e200(unaff_x19 + 0x43,uVar15,
               *(undefined8 *)
                Method_System_Collections_Generic_HashSet<OVRPermissionsRequester_Permission>_Add__)
  ;
  FUN_0683a1c4(unaff_x19 + 0x4c,0);
  *(undefined4 *)(unaff_x19 + 0x4f) = *(undefined4 *)((long)unaff_x19 + 0x26c);
  FUN_04a0e200(unaff_x19 + 0x50,*(undefined4 *)((long)unaff_x19 + 0x26c),
               *(undefined8 *)
                Method_System_Collections_Generic_HashSet<OVRManager_EventListener>__ctor__);
  *(undefined4 *)((long)unaff_x19 + 0x61c) = 0;
  FUN_04a0f5b8(unaff_x19 + 0xc4,
               *(undefined8 *)
                Method_System_Collections_Generic_HashSet<CAPI_ovrAvatar2NodeId>_Contains__);
  if (DAT_076cd829 == '\0') {
    thunk_FUN_032e1da0(PTR_DAT_072795b0);
    DAT_076cd829 = '\x01';
  }
  pfVar31 = *(float **)(*(long *)PTR_DAT_072795b0 + 0xb8);
  fStack000000000000006c = *pfVar31;
  fStack00000000000000e4 = pfVar31[1];
  fStack0000000000000068 = pfVar31[2];
  uVar15 = FUN_05cb346c((int)unaff_x19[0x29],*(undefined4 *)((long)unaff_x19 + 0x14c),
                        (int)unaff_x19[0x2a],*(undefined4 *)((long)unaff_x19 + 0x154),0);
  *(undefined4 *)((long)unaff_x19 + 0x144) = uVar15;
  *(undefined4 *)((long)unaff_x19 + 0x4ec) = uVar15;
  *(undefined4 *)(unaff_x19 + 0x2b) = uVar15;
  *(undefined4 *)((long)unaff_x19 + 0x15c) = uVar15;
  puVar12 = Method_System_Collections_Generic_HashSet<OVRManager_EventListener>_Add__;
  FUN_04a0cf9c(unaff_x19 + 0x9e,uVar15,
               *(undefined8 *)
                Method_System_Collections_Generic_HashSet<OVRManager_EventListener>_Add__);
  FUN_04a0cf9c(unaff_x19 + 0xa2,*(undefined4 *)((long)unaff_x19 + 0x4ec),*(undefined8 *)puVar12);
  FUN_04a0cf9c(unaff_x19 + 0xa6,*(undefined4 *)((long)unaff_x19 + 0x4ec),*(undefined8 *)puVar12);
  puVar12 = Method_System_Collections_Generic_HashSet<CAPI_ovrAvatar2JointType>_Remove__;
  uVar15 = *(undefined4 *)((long)unaff_x19 + 0x4ec);
  if (*(int *)(*(long *)Method_System_Collections_Generic_HashSet<CAPI_ovrAvatar2JointType>_Remove__
              + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  if (DAT_076e0b47 == '\0') {
    thunk_FUN_032e1da0(Method_System_Collections_Generic_HashSet<CAPI_ovrAvatar2JointType>_Remove__)
    ;
    DAT_076e0b47 = '\x01';
  }
  lVar21 = *(long *)puVar12;
  if (*(int *)(lVar21 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar21 = *(long *)puVar12;
  }
  puVar32 = *(undefined4 **)(lVar21 + 0xb8);
  in_stack_000001c0 = 0;
  in_stack_000001c8 = 0;
  in_stack_000001d0 = 0;
  FUN_067f71a4(*puVar32,puVar32[1],puVar32[2],puVar32[3],&stack0x000001c0,uVar15,0);
  uVar27 = *(undefined8 *)
            Method_System_Collections_Generic_HashSet<OVRFaceExpressions_FaceExpression>_Contains__;
  *(undefined8 *)(unaff_x24 + 0xe8) = in_stack_000001c8;
  *(undefined8 *)(unaff_x24 + 0xe0) = in_stack_000001c0;
  FUN_04a0d57c(unaff_x19 + 0xaa,&stack0x00001090,uVar27);
  unaff_x19[0xb0] = 0;
  thunk_FUN_0333a630(unaff_x19 + 0xb0,0);
  FUN_04a0f008(unaff_x19 + 0xb1,0,
               *(undefined8 *)
                Method_System_Collections_Generic_HashSet<OVRPermissionsRequester_Permission>__ctor__
              );
  if (unaff_x19[0x20] != 0) {
    bVar5 = *(byte *)(unaff_x19[0x20] + 0x1b8);
    *(uint *)(unaff_x19 + 0xbe) = (uint)bVar5;
    FUN_04a0dc74(unaff_x19 + 0xba,bVar5,
                 *(undefined8 *)
                  Method_System_Collections_Generic_HashSet<OVRManager_EventListener>_Remove__);
    FUN_04a0dc68(unaff_x19 + 0xbf,
                 *(undefined8 *)
                  Method_System_Collections_Generic_HashSet<OVRAnchor_TrackableType>_Contains__);
    *(undefined1 *)((long)unaff_x19 + 0x474) = 0;
    *(undefined4 *)(unaff_x19 + 0x9b) = 0;
    *(undefined4 *)(unaff_x19 + 0x58) = 0xc6fffe00;
    if (unaff_x19[0x20] != 0) {
      fVar50 = (float)FUN_06c5197c(unaff_x19[0x20] + 0x50,0);
      if (*unaff_x21 != 0) {
        fVar51 = (float)FUN_06c5198c(*unaff_x21 + 0x50,0);
        if (*unaff_x21 != 0) {
          fVar52 = (float)FUN_06c519cc(*unaff_x21 + 0x50,0);
          *(undefined8 *)((long)unaff_x19 + 0x2ac) = 0;
          *(undefined4 *)(unaff_x19 + 200) = 0;
          unaff_x19[0x81] = 0;
          FUN_04a0f5c4(0,unaff_x19 + 0x82,*(undefined8 *)puVar11);
          *(undefined1 *)(unaff_x19 + 0x86) = 0;
          *(undefined4 *)((long)unaff_x19 + 0x494) = 0;
          *(undefined4 *)(unaff_x19 + 0x93) = *(undefined4 *)((long)unaff_x19 + 0x324);
          *(undefined8 *)((long)unaff_x19 + 0x49c) = 0;
          *(undefined4 *)((long)unaff_x19 + 0x4a4) = 0;
          puVar11 = 
          Method_System_Collections_Generic_HashSet<OvrAvatarShaderNameUtils_KnownShader>_Add__;
          lVar21 = *(long *)
                    Method_System_Collections_Generic_HashSet<OvrAvatarShaderNameUtils_KnownShader>_Add__
          ;
          if (*(int *)(lVar21 + 0xe0) == 0) {
            thunk_FUN_032cd7c0();
            lVar21 = *(long *)puVar11;
          }
          lVar22 = unaff_x19[0x6d];
          uVar27 = *(undefined8 *)(*(long *)(lVar21 + 0xb8) + 0x15a8);
          unaff_x19[0x95] = 0;
          unaff_x19[0x9a] = 0;
          *(undefined1 *)((long)unaff_x19 + 0x2c4) = 0;
          lVar21 = NEON_rev64(uVar27,4);
          *(undefined4 *)((long)unaff_x19 + 0x2e4) = 0xffffffff;
          unaff_x19[0x99] = lVar21;
          *(undefined4 *)(unaff_x19 + 0x96) = 0;
          if ((lVar22 != 0) && (*(long *)(lVar22 + 0x58) != 0)) {
            uVar33 = (int)unaff_x19[0x67] - 1;
            uVar84 = *(int *)(*(long *)(lVar22 + 0x58) + 0x18) - 1;
            if ((int)uVar33 <= (int)uVar84) {
              uVar84 = uVar33;
            }
            uVar3 = 0;
            if (-1 < (int)uVar33) {
              uVar3 = uVar84;
            }
            FUN_068399c0(lVar22,0);
            fVar53 = *(float *)(unaff_x19 + 0x68);
            *(undefined4 *)(unaff_x19 + 0x6c) = 0xbf800000;
            fVar65 = *(float *)((long)unaff_x19 + 0x344);
            unaff_x19[0x6a] = 0;
            lVar21 = *(long *)puVar11;
            fVar54 = *(float *)((long)unaff_x19 + 0x34c);
            fVar82 = *(float *)(unaff_x19 + 0x6b);
            fVar71 = *(float *)((long)unaff_x19 + 0x35c);
            if (*(int *)(lVar21 + 0xe0) == 0) {
              thunk_FUN_032cd7c0();
              lVar21 = *(long *)puVar11;
            }
            *(undefined8 *)((long)unaff_x19 + 0x4dc) =
                 *(undefined8 *)(*(long *)(lVar21 + 0xb8) + 0x1598);
            *(undefined8 *)((long)unaff_x19 + 0x4e4) =
                 *(undefined8 *)(*(long *)(lVar21 + 0xb8) + 0x15a0);
            if (unaff_x19[0x6d] != 0) {
              FUN_06839830(unaff_x19[0x6d],0);
              *(undefined4 *)((long)unaff_x19 + 0x4bc) = 0;
              *(undefined4 *)((long)unaff_x19 + 0x4c4) = 0;
              *(undefined8 *)((long)unaff_x19 + 0x4b4) = 0;
              fVar85 = 0.0;
              bVar14 = false;
              *(undefined1 *)((long)unaff_x19 + 0x33c) = 0;
              *(undefined1 *)((long)unaff_x19 + 0x2da) = 0;
              FUN_06838b38(&stack0x00001078,0xffffffff,0,0);
              FUN_0682230c();
              FUN_0682230c();
              FUN_0682230c();
              FUN_0682230c();
              FUN_0682230c();
              FUN_04a0fbc4(*(long *)(*(long *)puVar11 + 0xb8) + 0x11f0,
                           *(undefined8 *)
                            Method_System_Collections_Generic_HashSet<OVRAnchor_TrackableType>_Add__
                          );
              fVar75 = DAT_013a0604;
              fVar69 = DAT_0139ff50;
              uVar84 = 0;
              lVar21 = unaff_x19[0x8f];
              if (lVar21 != 0) {
                puVar1 = (uint *)((long)unaff_x19 + 0x494);
                plVar47 = unaff_x19 + 0xc9;
                uVar33 = unaff_w23 - 1;
                lVar22 = (long)unaff_x19 + 0x434;
                fVar50 = fVar50 - (fVar51 - fVar52);
                fStack000000000000016c = 0.0;
                if (fVar82 <= 0.0) {
                  fVar82 = 0.0;
                }
                if (fVar71 <= 0.0) {
                  fVar71 = 0.0;
                }
                fVar49 = (unaff_s14 / (float)unaff_w25) * fVar49 * fVar55;
                uVar26 = (ulong)(uint)fVar49;
                fVar82 = fVar82 + DAT_0139fcd0;
                uVar64 = (ulong)(uint)fVar82;
                fVar51 = fVar71 + DAT_0139fcd0;
                fVar55 = fVar74 * DAT_013a0604 * fVar55;
                uStack000000000000002c = 0;
                bVar10 = false;
                iVar38 = 0;
                plVar2 = unaff_x19 + 0x6d;
                bVar9 = true;
                bVar5 = 1;
                fStack0000000000000100 = fVar82;
                uVar18 = 0;
LAB_067d6a30:
                fVar74 = (float)uVar26;
                if ((int)*(uint *)(lVar21 + 0x18) <= (int)uVar84) {
LAB_067da694:
                  fVar55 = (float)uVar64;
                  if (((char)unaff_x19[0x47] != '\0') &&
                     (fVar55 = DAT_013a007c,
                     DAT_013a007c <
                     *(float *)((long)unaff_x19 + 0x23c) - *(float *)(unaff_x19 + 0x48))) {
                    fVar55 = *(float *)((long)unaff_x19 + 0x1e4);
                    fVar66 = *(float *)((long)unaff_x19 + 0x254);
                    if ((fVar55 < fVar66) &&
                       (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
                      if (*(float *)((long)unaff_x19 + 0x2d4) < *(float *)(unaff_x19 + 0x5a) / 100.0
                         ) {
                        *(undefined4 *)((long)unaff_x19 + 0x2d4) = 0;
                      }
                      fVar49 = (*(float *)((long)unaff_x19 + 0x23c) - fVar55) * 0.5;
                      if (fVar49 <= DAT_013a0300) {
                        fVar49 = DAT_013a0300;
                      }
                      *(float *)(unaff_x19 + 0x48) = fVar55;
                      fVar49 = (fVar55 + fVar49) * 20.0 + 0.5;
                      fVar55 = DAT_013a07c8;
                      if (fVar49 != INFINITY) {
                        fVar55 = (float)(int)fVar49 / 20.0;
                      }
                      if (fVar66 <= fVar55) {
                        fVar55 = fVar66;
                      }
LAB_067da750:
                      *(float *)((long)unaff_x19 + 0x1e4) = fVar55;
                      return;
                    }
                  }
                  *(undefined1 *)((long)unaff_x19 + 0x24c) = 1;
                  if ((int)unaff_x19[0x49] <= *(int *)((long)unaff_x19 + 0x244)) {
                    uVar27 = FUN_05920f80((long)unaff_x19 + 0x244,0);
                    uVar23 = FUN_05935e28((long)unaff_x19 + 0x1e4,0);
                    uVar27 = FUN_057ab20c(*(undefined8 *)
                                           Method_System_Linq_Expressions_Interpreter_HybridReferenceDictionary<LabelTarget,_LabelInfo>_ContainsKey__
                                          ,uVar27,*(undefined8 *)
                                                                                                      
                                                  Method_System_Collections_Generic_HashSet<OvrSkinningTypes_Handle>_Add__
                                          ,uVar23,0);
                    if (*(int *)(*(long *)PTR_DAT_072798f8 + 0xe0) == 0) {
                      thunk_FUN_032cd7c0(*(long *)PTR_DAT_072798f8);
                    }
                    FUN_06bb23f0(uVar27,0);
                  }
                  puVar11 = 
                  Method_System_Collections_Generic_HashSet<OvrAvatarShaderNameUtils_KnownShader>_Add__
                  ;
                  if ((*puVar1 == 0) || ((*puVar1 == 1 && (uVar18 == 3)))) {
                    (**(code **)(*unaff_x19 + 0x958))();
                    goto LAB_067da818;
                  }
                  lVar21 = *(long *)
                            Method_System_Collections_Generic_HashSet<OvrAvatarShaderNameUtils_KnownShader>_Add__
                  ;
                  if (*(int *)(lVar21 + 0xe0) == 0) {
                    thunk_FUN_032cd7c0();
                    lVar21 = *(long *)puVar11;
                  }
                  plVar47 = (long *)PTR_DAT_072a6408;
                  lVar21 = **(long **)(lVar21 + 0xb8);
                  if (lVar21 == 0) goto LAB_067dd33c;
                  if (*(uint *)(lVar21 + 0x18) <= *(uint *)(unaff_x19 + 0xd1)) goto LAB_067dd448;
                  iVar38 = *(int *)(lVar21 + (long)(int)*(uint *)(unaff_x19 + 0xd1) * 0x38 + 0x54)
                           << 2;
                  if ((*plVar2 == 0) || (lVar21 = *(long *)(*plVar2 + 0x60), lVar21 == 0))
                  goto LAB_067dd33c;
                  if (*(int *)(*(long *)PTR_DAT_072a6408 + 0xe0) == 0) {
                    thunk_FUN_032cd7c0();
                  }
                  if (*(int *)(lVar21 + 0x18) == 0) goto LAB_067dd448;
                  FUN_0682f464(lVar21 + 0x20,0,0);
                  if (DAT_076cd829 == '\0') {
                    thunk_FUN_032e1da0(PTR_DAT_072795b0);
                    DAT_076cd829 = '\x01';
                  }
                  iVar17 = (int)unaff_x19[0x4e];
                  fStack00000000000000fc = **(float **)(*(long *)PTR_DAT_072795b0 + 0xb8);
                  uStack00000000000000f0 =
                       *(undefined8 *)(*(float **)(*(long *)PTR_DAT_072795b0 + 0xb8) + 1);
                  lVar21 = unaff_x19[0xeb];
                  uVar27 = uStack00000000000000f0;
                  fStack00000000000000bc = fStack00000000000000fc;
                  if (iVar17 < 0x401) {
                    if (iVar17 == 0x100) {
                      if (lVar21 == 0) goto LAB_067dd33c;
                      if (*(uint *)(lVar21 + 0x18) < 2) goto LAB_067dd448;
                      uVar27 = *(undefined8 *)(lVar21 + 0x30);
                      if ((int)unaff_x19[0x5c] == 5) {
                        if ((*plVar2 == 0) || (lVar22 = *(long *)(*plVar2 + 0x58), lVar22 == 0))
                        goto LAB_067dd33c;
                        if (*(uint *)(lVar22 + 0x18) <= uVar3) goto LAB_067dd448;
                        fVar55 = *(float *)(lVar22 + (long)(int)uVar3 * 0x14 + 0x28);
                      }
                      else {
                        fVar55 = *(float *)(unaff_x19 + 0x97);
                      }
                      fStack00000000000000bc = fVar53 + 0.0 + *(float *)(lVar21 + 0x2c);
                      fVar55 = (0.0 - fVar55) - fVar65;
                    }
                    else if (iVar17 == 0x200) {
                      if (lVar21 == 0) goto LAB_067dd33c;
                      if ((*(int *)(lVar21 + 0x18) == 1) || (*(int *)(lVar21 + 0x18) == 0))
                      goto LAB_067dd448;
                      fStack00000000000000bc =
                           (*(float *)(lVar21 + 0x20) + *(float *)(lVar21 + 0x2c)) * 0.5;
                      uVar27 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar21 + 0x24) >> 0x20) +
                                        (float)((ulong)*(undefined8 *)(lVar21 + 0x30) >> 0x20)) *
                                        0.5,((float)*(undefined8 *)(lVar21 + 0x24) +
                                            (float)*(undefined8 *)(lVar21 + 0x30)) * 0.5);
                      if ((int)unaff_x19[0x5c] == 5) {
                        if ((*plVar2 == 0) || (lVar21 = *(long *)(*plVar2 + 0x58), lVar21 == 0))
                        goto LAB_067dd33c;
                        if (*(uint *)(lVar21 + 0x18) <= uVar3) goto LAB_067dd448;
                        lVar21 = lVar21 + (long)(int)uVar3 * 0x14;
                        fStack00000000000000bc = fVar53 + 0.0 + fStack00000000000000bc;
                        fVar55 = ((fVar65 + *(float *)(lVar21 + 0x28) + *(float *)(lVar21 + 0x30)) -
                                 fVar54) * -0.5 + 0.0;
                      }
                      else {
                        fStack00000000000000bc = fVar53 + 0.0 + fStack00000000000000bc;
                        fVar55 = ((fVar65 + *(float *)(unaff_x19 + 0x97) + fVar85) - fVar54) * -0.5
                                 + 0.0;
                      }
                    }
                    else {
                      if (iVar17 != 0x400) goto LAB_067dad6c;
                      if (lVar21 == 0) goto LAB_067dd33c;
                      if (*(int *)(lVar21 + 0x18) == 0) goto LAB_067dd448;
                      uVar27 = *(undefined8 *)(lVar21 + 0x24);
                      if ((int)unaff_x19[0x5c] == 5) {
                        if ((*plVar2 == 0) || (lVar22 = *(long *)(*plVar2 + 0x58), lVar22 == 0))
                        goto LAB_067dd33c;
                        if (*(uint *)(lVar22 + 0x18) <= uVar3) goto LAB_067dd448;
                        fVar85 = *(float *)(lVar22 + (long)(int)uVar3 * 0x14 + 0x30);
                      }
                      fStack00000000000000bc = fVar53 + 0.0 + *(float *)(lVar21 + 0x20);
                      fVar55 = fVar54 + (0.0 - fVar85);
                    }
LAB_067dad5c:
                    uVar27 = CONCAT44((float)((ulong)uVar27 >> 0x20) + 0.0,(float)uVar27 + fVar55);
                  }
                  else if (iVar17 == 0x800) {
                    if (lVar21 == 0) goto LAB_067dd33c;
                    if ((*(int *)(lVar21 + 0x18) == 1) || (*(int *)(lVar21 + 0x18) == 0))
                    goto LAB_067dd448;
                    fVar55 = fVar53 + 0.0 +
                             (*(float *)(lVar21 + 0x20) + *(float *)(lVar21 + 0x2c)) * 0.5;
                    uVar27 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar21 + 0x24) >> 0x20) +
                                      (float)((ulong)*(undefined8 *)(lVar21 + 0x30) >> 0x20)) * 0.5
                                      + 0.0,((float)*(undefined8 *)(lVar21 + 0x24) +
                                            (float)*(undefined8 *)(lVar21 + 0x30)) * 0.5 + 0.0);
                    fStack00000000000000bc = fVar55;
                  }
                  else {
                    if (iVar17 == 0x1000) {
                      if (lVar21 != 0) {
                        if ((*(int *)(lVar21 + 0x18) != 1) && (*(int *)(lVar21 + 0x18) != 0)) {
                          uVar27 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar21 + 0x24) >> 0x20)
                                            + (float)((ulong)*(undefined8 *)(lVar21 + 0x30) >> 0x20)
                                            ) * 0.5,((float)*(undefined8 *)(lVar21 + 0x24) +
                                                    (float)*(undefined8 *)(lVar21 + 0x30)) * 0.5);
                          fStack00000000000000bc =
                               fVar53 + 0.0 +
                               (*(float *)(lVar21 + 0x20) + *(float *)(lVar21 + 0x2c)) * 0.5;
                          fVar55 = 0.0 - ((fVar65 + *(float *)(unaff_x19 + 0x9d) +
                                          *(float *)(unaff_x19 + 0x9c)) - fVar54) * 0.5;
                          goto LAB_067dad5c;
                        }
                        goto LAB_067dd448;
                      }
                      goto LAB_067dd33c;
                    }
                    if (iVar17 == 0x2000) {
                      if (lVar21 == 0) goto LAB_067dd33c;
                      if ((*(int *)(lVar21 + 0x18) == 1) || (*(int *)(lVar21 + 0x18) == 0))
                      goto LAB_067dd448;
                      fVar55 = 0.0 - ((*(float *)((long)unaff_x19 + 0x4bc) - fVar65) - fVar54) * 0.5
                      ;
                      uVar27 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar21 + 0x24) >> 0x20) +
                                        (float)((ulong)*(undefined8 *)(lVar21 + 0x30) >> 0x20)) *
                                        0.5 + 0.0,
                                        ((float)*(undefined8 *)(lVar21 + 0x24) +
                                        (float)*(undefined8 *)(lVar21 + 0x30)) * 0.5 + fVar55);
                      fStack00000000000000bc =
                           fVar53 + 0.0 +
                           (*(float *)(lVar21 + 0x20) + *(float *)(lVar21 + 0x2c)) * 0.5;
                    }
                  }
LAB_067dad6c:
                  lVar21 = FUN_067e7008();
                  if (lVar21 != 0) {
                    FUN_06bf6348(lVar21,0);
                    *(float *)((long)unaff_x19 + 0x6e4) = fVar55;
                    uVar15 = FUN_05cb346c(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
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
                    puVar11 = 
                    Method_System_Collections_Generic_HashSet<CAPI_ovrAvatar2JointType>_Remove__;
                    lVar21 = *(long *)
                              Method_System_Collections_Generic_HashSet<CAPI_ovrAvatar2JointType>_Remove__
                    ;
                    if (*(int *)(lVar21 + 0xe0) == 0) {
                      thunk_FUN_032cd7c0();
                      lVar21 = *(long *)puVar11;
                    }
                    puVar32 = *(undefined4 **)(lVar21 + 0xb8);
                    FUN_067f71a4(*puVar32,puVar32[1],puVar32[2],puVar32[3],&stack0x00001060,
                                 0x4000ffff,0);
                    if (*(int *)(*(long *)
                                  Method_System_Collections_Generic_HashSet<OvrAvatarShaderNameUtils_KnownShader>_Add__
                                + 0xe0) == 0) {
                      thunk_FUN_032cd7c0();
                    }
                    lVar21 = *plVar2;
                    if (lVar21 != 0) {
                      uVar84 = *puVar1;
                      if ((int)uVar84 < 1) {
                        fStack00000000000000dc = 0.0;
                        iVar38 = 0;
                        goto LAB_067dcf3c;
                      }
                      lVar21 = *(long *)(lVar21 + 0x38);
                      if (lVar21 != 0) {
                        bVar14 = false;
                        bVar8 = false;
                        bVar9 = false;
                        fStack0000000000000124 = 0.0;
                        bVar10 = false;
                        fStack00000000000000dc = 0.0;
                        uStack000000000000002c = 0;
                        fStack000000000000016c = 0.0;
                        iStack0000000000000054 = 0;
                        lVar22 = 0x2e0;
                        fVar53 = 0.0;
                        fVar66 = 0.0;
                        fStack0000000000000098 = fStack00000000000000e4;
                        fStack0000000000000104 =
                             *(float *)(*(long *)(*(long *)
                                                  Method_System_Collections_Generic_HashSet<OvrAvatarShaderNameUtils_KnownShader>_Add__
                                                 + 0xb8) + 0x15a8);
                        fStack0000000000000100 = 0.0;
                        fVar74 = 0.0;
                        fVar51 = 0.0;
                        fVar50 = 0.0;
                        fVar52 = 0.0;
                        fStack0000000000000064 = fStack00000000000000e4;
                        uVar33 = 0;
                        uVar18 = 1;
                        fStack000000000000008c = fStack0000000000000068;
                        fStack000000000000009c = fStack000000000000006c;
                        fStack00000000000000b8 = fStack0000000000000068;
                        fStack00000000000000cc = fStack000000000000006c;
                        fStack00000000000000e0 = fStack000000000000006c;
                        fVar49 = fStack00000000000000e4;
                        goto LAB_067daf08;
                      }
                    }
                  }
                  goto LAB_067dd33c;
                }
                if (*(uint *)(lVar21 + 0x18) <= uVar84) goto LAB_067dd448;
                uVar16 = *(uint *)(lVar21 + (long)(int)uVar84 * 0xc + 0x20);
                if (uVar16 == 0) goto LAB_067da694;
                if (5 < iVar38) {
                  uVar27 = FUN_05920f80(&stack0x0000108c,0);
                  uVar23 = FUN_05920f80(&stack0x00001058,0);
                  uVar27 = FUN_057ab20c(*(undefined8 *)
                                         Method_System_Collections_Generic_HashSet<OvrSkinningTypes_Handle>__ctor__
                                        ,uVar27,*(undefined8 *)
                                                 Method_System_Collections_Generic_HashSet<OvrSkinningTypes_Handle>_get_Count__
                                        ,uVar23,0);
                  if (*(int *)(*(long *)PTR_DAT_072798f8 + 0xe0) == 0) {
                    thunk_FUN_032cd7c0(*(long *)PTR_DAT_072798f8);
                  }
                  FUN_06bb2a00(uVar27,0);
                  in_stack_00001078 = CONCAT44(3,*puVar1);
                }
                if ((*(char *)((long)unaff_x19 + 0x302) == '\0') || (uVar16 != 0x3c)) {
                  if ((*plVar2 == 0) || (lVar21 = *(long *)(*plVar2 + 0x38), lVar21 == 0))
                  goto LAB_067dd33c;
                  if (*(uint *)(lVar21 + 0x18) <= *puVar1) goto LAB_067dd448;
                  lVar21 = lVar21 + (long)(int)*puVar1 * 0x178;
                  *(undefined4 *)((long)unaff_x19 + 0x644) = *(undefined4 *)(lVar21 + 0x2c);
                  *(undefined4 *)(unaff_x19 + 0x24) = *(undefined4 *)(lVar21 + 0x58);
                  unaff_x19[0x20] = *(long *)(lVar21 + 0x38);
                  thunk_FUN_0333a630(unaff_x21);
LAB_067d6b88:
                  if ((unaff_x19[0x6d] == 0) ||
                     (lVar21 = *(long *)(unaff_x19[0x6d] + 0x38), lVar21 == 0)) goto LAB_067dd33c;
                  uVar18 = *puVar1;
                  if (*(uint *)(lVar21 + 0x18) <= uVar18) goto LAB_067dd448;
                  lVar48 = (long)(int)uVar18;
                  cVar29 = *(char *)(lVar21 + lVar48 * 0x178 + 0x5c);
                  *(undefined1 *)((long)unaff_x19 + 0x431) = 0;
                  lVar34 = unaff_x19[0x24];
                  if ((uint)in_stack_00001078 == uVar18) {
                    uVar16 = (uint)((ulong)in_stack_00001078 >> 0x20);
                    *(undefined4 *)((long)unaff_x19 + 0x644) = 0;
                    if (uVar16 == 0x2026) {
                      *(long *)(lVar21 + lVar48 * 0x178 + 0x30) = unaff_x19[0xca];
                      thunk_FUN_0333a630();
                      if ((unaff_x19[0x6d] == 0) ||
                         (lVar21 = *(long *)(unaff_x19[0x6d] + 0x38), lVar21 == 0))
                      goto LAB_067dd33c;
                      if (*(uint *)(lVar21 + 0x18) <= *puVar1) goto LAB_067dd448;
                      lVar21 = lVar21 + (long)(int)*puVar1 * 0x178;
                      *(undefined4 *)(lVar21 + 0x2c) = 0;
                      *(long *)(lVar21 + 0x38) = unaff_x19[0xcb];
                      thunk_FUN_0333a630();
                      if ((unaff_x19[0x6d] == 0) ||
                         (lVar21 = *(long *)(unaff_x19[0x6d] + 0x38), lVar21 == 0))
                      goto LAB_067dd33c;
                      if (*(uint *)(lVar21 + 0x18) <= *puVar1) goto LAB_067dd448;
                      *(long *)(lVar21 + (long)(int)*puVar1 * 0x178 + 0x50) = unaff_x19[0xcc];
                      thunk_FUN_0333a630();
                      if ((*plVar2 == 0) || (lVar21 = *(long *)(*plVar2 + 0x38), lVar21 == 0))
                      goto LAB_067dd33c;
                      uVar18 = *puVar1;
                      if (*(uint *)(lVar21 + 0x18) <= uVar18) goto LAB_067dd448;
                      bVar8 = true;
                      *(int *)(lVar21 + (long)(int)uVar18 * 0x178 + 0x58) = (int)unaff_x19[0xcd];
                      *(undefined1 *)(unaff_x19 + 0x5f) = 1;
                      in_stack_00001078 = CONCAT44(3,uVar18 + 1);
                    }
                    else if (uVar16 == 3) {
                      if ((*unaff_x21 == 0) || (lVar25 = FUN_067fd3b4(*unaff_x21,0), lVar25 == 0))
                      goto LAB_067dd33c;
                      uVar27 = FUN_0518817c(lVar25,3,*(undefined8 *)
                                                                                                            
                                                  Method_System_Collections_Generic_HashSet<CAPI_ovrAvatar2JointType>_Add__
                                           );
                      if (*(uint *)(lVar21 + 0x18) <= uVar18) goto LAB_067dd448;
                      *(undefined8 *)(lVar21 + lVar48 * 0x178 + 0x30) = uVar27;
                      thunk_FUN_0333a630();
                      uVar18 = *(uint *)((long)unaff_x19 + 0x494);
                      bVar8 = true;
                      *(undefined1 *)(unaff_x19 + 0x5f) = 1;
                    }
                    else {
                      bVar8 = true;
                    }
                  }
                  else {
                    bVar8 = false;
                  }
                  if (((int)uVar18 < *(int *)((long)unaff_x19 + 0x324)) && (uVar16 != 3)) {
                    if ((*plVar2 == 0) || (lVar21 = *(long *)(*plVar2 + 0x38), lVar21 == 0))
                    goto LAB_067dd33c;
                    if (*(uint *)(lVar21 + 0x18) <= uVar18) goto LAB_067dd448;
                    lVar21 = lVar21 + (long)(int)uVar18 * 0x178;
                    *(undefined1 *)(lVar21 + 0x194) = 0;
                    *(undefined2 *)(lVar21 + 0x20) = 0x200b;
                    *(undefined4 *)(lVar21 + 100) = 0;
                    *puVar1 = uVar18 + 1;
                  }
                  else {
                    iVar17 = *(int *)((long)unaff_x19 + 0x644);
                    if (iVar17 == 0) {
                      uVar18 = *(uint *)((long)unaff_x19 + 0x25c);
                      if ((uVar18 >> 4 & 1) == 0) {
                        if ((uVar18 >> 3 & 1) == 0) {
                          fVar52 = 1.0;
                          if ((uVar18 >> 5 & 1) != 0) {
                            if (*(int *)(*(long *)PTR_DAT_0727fa20 + 0xe0) == 0) {
                              thunk_FUN_032cd7c0();
                            }
                            uVar24 = FUN_058a4af0(uVar16,0);
                            if ((uVar24 & 1) != 0) {
                              if (*(int *)(*(long *)PTR_DAT_0727fa20 + 0xe0) == 0) {
                                thunk_FUN_032cd7c0();
                              }
                              uVar16 = FUN_058a4dd0(uVar16,0);
                              uVar16 = uVar16 & 0xffff;
                              fVar52 = fVar69;
                            }
                          }
                        }
                        else {
                          if (*(int *)(*(long *)PTR_DAT_0727fa20 + 0xe0) == 0) {
                            thunk_FUN_032cd7c0();
                          }
                          uVar24 = FUN_058a4a34(uVar16,0);
                          fVar52 = 1.0;
                          if ((uVar24 & 1) != 0) {
                            if (*(int *)(*(long *)PTR_DAT_0727fa20 + 0xe0) == 0) {
                              thunk_FUN_032cd7c0();
                            }
                            uVar16 = FUN_058a4f48(uVar16,0);
                            goto LAB_067d7160;
                          }
                        }
                      }
                      else {
                        if (*(int *)(*(long *)PTR_DAT_0727fa20 + 0xe0) == 0) {
                          thunk_FUN_032cd7c0();
                        }
                        uVar24 = FUN_058a4af0(uVar16,0);
                        fVar52 = 1.0;
                        if ((uVar24 & 1) != 0) {
                          if (*(int *)(*(long *)PTR_DAT_0727fa20 + 0xe0) == 0) {
                            thunk_FUN_032cd7c0();
                          }
                          uVar16 = FUN_058a4dd0(uVar16,0);
LAB_067d7160:
                          fVar52 = 1.0;
                          uVar16 = uVar16 & 0xffff;
                        }
                      }
                      iVar17 = *(int *)((long)unaff_x19 + 0x644);
                      if (iVar17 != 0) goto LAB_067d6d94;
LAB_067d7170:
                      if ((*plVar2 == 0) || (lVar21 = *(long *)(*plVar2 + 0x38), lVar21 == 0))
                      goto LAB_067dd33c;
                      if (*(uint *)(lVar21 + 0x18) <= *puVar1) goto LAB_067dd448;
                      *plVar47 = *(long *)(lVar21 + (long)(int)*puVar1 * 0x178 + 0x30);
                      thunk_FUN_0333a630(plVar47);
                      if (*plVar47 == 0) goto LAB_067d6d64;
                      if ((*plVar2 == 0) || (lVar21 = *(long *)(*plVar2 + 0x38), lVar21 == 0))
                      goto LAB_067dd33c;
                      if (*(uint *)(lVar21 + 0x18) <= *puVar1) goto LAB_067dd448;
                      *unaff_x21 = *(long *)(lVar21 + (long)(int)*puVar1 * 0x178 + 0x38);
                      thunk_FUN_0333a630(unaff_x21);
                      if ((*plVar2 == 0) || (lVar21 = *(long *)(*plVar2 + 0x38), lVar21 == 0))
                      goto LAB_067dd33c;
                      if (*(uint *)(lVar21 + 0x18) <= *puVar1) goto LAB_067dd448;
                      *in_stack_00000150 = *(long *)(lVar21 + (long)(int)*puVar1 * 0x178 + 0x50);
                      thunk_FUN_0333a630();
                      if ((*plVar2 == 0) || (lVar21 = *(long *)(*plVar2 + 0x38), lVar21 == 0))
                      goto LAB_067dd33c;
                      uVar44 = *puVar1;
                      uVar18 = *(uint *)(lVar21 + 0x18);
                      if (uVar18 <= uVar44) goto LAB_067dd448;
                      *(undefined4 *)(unaff_x19 + 0x24) =
                           *(undefined4 *)(lVar21 + (long)(int)uVar44 * 0x178 + 0x58);
                      if (bVar8) {
                        lVar34 = unaff_x19[0x8f];
                        if (lVar34 == 0) goto LAB_067dd33c;
                        if (*(uint *)(lVar34 + 0x18) <= uVar84) goto LAB_067dd448;
                        if ((*(int *)(lVar34 + (long)(int)uVar84 * 0xc + 0x20) != 10) ||
                           (uVar44 == *(uint *)(unaff_x19 + 0x93))) goto LAB_067d7280;
                        if (uVar18 <= uVar44 - 1) goto LAB_067dd448;
                        if (*unaff_x21 == 0) goto LAB_067dd33c;
                        fVar83 = *(float *)(lVar21 + (long)(int)(uVar44 - 1) * 0x178 + 0x60);
                        iVar17 = FUN_06c5195c(*unaff_x21 + 0x50,0);
                        lVar21 = *unaff_x21;
                      }
                      else {
LAB_067d7280:
                        if (*unaff_x21 == 0) goto LAB_067dd33c;
                        fVar83 = *(float *)(unaff_x19 + 0x3d);
                        iVar17 = FUN_06c5195c(*unaff_x21 + 0x50,0);
                        lVar21 = unaff_x19[0x20];
                      }
                      if (lVar21 == 0) goto LAB_067dd33c;
                      fVar72 = (float)FUN_06c5196c(lVar21 + 0x50,0);
                      fVar56 = fVar66;
                      if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
                        fVar56 = 1.0;
                      }
                      uVar15 = 0;
                      fStack0000000000000124 = 0.0;
                      if (!(bool)(bVar8 & uVar16 == 0x2026)) {
                        if (*unaff_x21 == 0) goto LAB_067dd33c;
                        fStack0000000000000124 = (float)FUN_06c5198c(*unaff_x21 + 0x50,0);
                        if (*unaff_x21 == 0) goto LAB_067dd33c;
                        uVar15 = FUN_06c519cc(*unaff_x21 + 0x50,0);
                      }
                      lVar21 = unaff_x19[0xc9];
                      if (lVar21 == 0) goto LAB_067dd33c;
                      _fStack0000000000000120 = CONCAT44(fStack0000000000000124,uVar15);
                      if (*(long *)(lVar21 + 0x20) == 0) goto LAB_067dd33c;
                      fVar79 = *(float *)((long)unaff_x19 + 0x404);
                      fVar57 = *(float *)(lVar21 + 0x2c);
                      fVar74 = (float)FUN_06c51eb4(*(long *)(lVar21 + 0x20),0);
                      if (*unaff_x21 == 0) goto LAB_067dd33c;
                      fVar59 = (float)FUN_06c519bc(*unaff_x21 + 0x50,0);
                      if (*unaff_x21 == 0) goto LAB_067dd33c;
                      fVar80 = *(float *)((long)unaff_x19 + 0x404);
                      fStack000000000000017c = (float)FUN_06c5196c(*unaff_x21 + 0x50,0);
                      lVar21 = unaff_x19[0x6d];
                      if ((lVar21 == 0) || (lVar34 = *(long *)(lVar21 + 0x38), lVar34 == 0))
                      goto LAB_067dd33c;
                      if (*(uint *)(lVar34 + 0x18) <= *puVar1) goto LAB_067dd448;
                      lVar34 = lVar34 + (long)(int)*puVar1 * 0x178;
                      *(undefined4 *)(lVar34 + 0x2c) = 0;
                      fVar56 = ((fVar52 * fVar83) / (float)iVar17) * fVar72 * fVar56;
                      fVar74 = fVar56 * fVar79 * fVar57 * fVar74;
                      *(float *)(lVar34 + 0x160) = fVar74;
                      uVar18 = *(uint *)(unaff_x19 + 0x24);
                      fStack000000000000017c = fVar56 * fVar59 * fVar80 * fStack000000000000017c;
                      if (uVar18 == 0) {
                        fStack000000000000016c = *(float *)(unaff_x19 + 0xc3);
                      }
                      else {
                        lVar34 = unaff_x19[0xe1];
                        if (lVar34 == 0) goto LAB_067dd33c;
                        if (*(uint *)(lVar34 + 0x18) <= uVar18) goto LAB_067dd448;
                        lVar34 = *(long *)(lVar34 + (long)(int)uVar18 * 8 + 0x20);
                        if (lVar34 == 0) goto LAB_067dd33c;
                        fStack000000000000016c = *(float *)(lVar34 + 0x54);
                      }
LAB_067d7630:
                      fVar83 = 0.0;
                      if (uVar16 != 3 && uVar16 != 0xad) {
                        fVar83 = fVar74;
                      }
                    }
                    else {
                      fVar52 = 1.0;
                      if (iVar17 == 0) goto LAB_067d7170;
LAB_067d6d94:
                      if (iVar17 == 1) {
                        if ((*plVar2 == 0) || (lVar21 = *(long *)(*plVar2 + 0x38), lVar21 == 0))
                        goto LAB_067dd33c;
                        if (*(uint *)(lVar21 + 0x18) <= *puVar1) goto LAB_067dd448;
                        *unaff_x26 = *(long *)(lVar21 + (long)(int)*puVar1 * 0x178 + 0x40);
                        thunk_FUN_0333a630();
                        if ((*plVar2 == 0) || (lVar21 = *(long *)(*plVar2 + 0x38), lVar21 == 0))
                        goto LAB_067dd33c;
                        if (*(uint *)(lVar21 + 0x18) <= *puVar1) goto LAB_067dd448;
                        *(undefined4 *)((long)unaff_x19 + 0x6a4) =
                             *(undefined4 *)(lVar21 + (long)(int)*puVar1 * 0x178 + 0x48);
                        if ((unaff_x19[0xd3] == 0) ||
                           (lVar21 = FUN_06833818(unaff_x19[0xd3],0), lVar21 == 0))
                        goto LAB_067dd33c;
                        lVar21 = FUN_041e29a8(lVar21,*(undefined4 *)((long)unaff_x19 + 0x6a4),
                                              *(undefined8 *)
                                               Method_System_Collections_Generic_HashSet<CAPI_ovrAvatar2JointType>_Clear__
                                             );
                        puVar11 = 
                        Method_System_Collections_Generic_HashSet<OvrAvatarShaderNameUtils_KnownShader>_Add__
                        ;
                        if (lVar21 == 0) goto LAB_067d6d64;
                        if (uVar16 == 0x3c) {
                          uVar16 = *(int *)((long)unaff_x19 + 0x6a4) + 0xe000;
                        }
                        else {
                          lVar48 = *(long *)
                                    Method_System_Collections_Generic_HashSet<OvrAvatarShaderNameUtils_KnownShader>_Add__
                          ;
                          if (*(int *)(lVar48 + 0xe0) == 0) {
                            thunk_FUN_032cd7c0();
                            lVar48 = *(long *)puVar11;
                          }
                          *(undefined4 *)((long)unaff_x19 + 0x1bc) =
                               *(undefined4 *)(*(long *)(lVar48 + 0xb8) + 0x68);
                        }
                        if (unaff_x19[0x20] == 0) goto LAB_067dd33c;
                        fVar74 = *(float *)(unaff_x19 + 0x3d);
                        memmove(&stack0x00000fd0,(void *)(unaff_x19[0x20] + 0x50),0x60);
                        iVar17 = FUN_06c5195c(&stack0x00000fd0,0);
                        if (*unaff_x21 == 0) goto LAB_067dd33c;
                        memmove(&stack0x00000fd0,(void *)(*unaff_x21 + 0x50),0x60);
                        fVar56 = (float)FUN_06c5196c(&stack0x00000fd0,0);
                        fVar83 = fVar66;
                        if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
                          fVar83 = 1.0;
                        }
                        if (unaff_x19[0xd3] == 0) goto LAB_067dd33c;
                        fVar83 = (fVar74 / (float)iVar17) * fVar56 * fVar83;
                        iVar17 = FUN_06c5195c(unaff_x19[0xd3] + 0x48,0);
                        fVar74 = *(float *)(unaff_x19 + 0x3d);
                        if (iVar17 < 1) {
                          if (*unaff_x21 == 0) goto LAB_067dd33c;
                          iVar17 = FUN_06c5195c(*unaff_x21 + 0x50,0);
                          if (*unaff_x21 == 0) goto LAB_067dd33c;
                          fVar72 = (float)FUN_06c5196c(*unaff_x21 + 0x50,0);
                          fVar56 = fVar66;
                          if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
                            fVar56 = 1.0;
                          }
                          if (unaff_x19[0x20] == 0) goto LAB_067dd33c;
                          fVar79 = (float)FUN_06c5198c(unaff_x19[0x20] + 0x50,0);
                          if (*(long *)(lVar21 + 0x20) == 0) goto LAB_067dd33c;
                          FUN_06c51e78(&stack0x00001090,*(long *)(lVar21 + 0x20),0);
                          fVar57 = (float)FUN_06c51ca8(&stack0x00000fb0,0);
                          if (*(long *)(lVar21 + 0x20) == 0) goto LAB_067dd33c;
                          fVar80 = *(float *)(lVar21 + 0x2c);
                          fVar59 = (float)FUN_06c51eb4(*(long *)(lVar21 + 0x20),0);
                          if (*unaff_x21 == 0) goto LAB_067dd33c;
                          fVar58 = (float)FUN_06c5198c(*unaff_x21 + 0x50,0);
                          if (*unaff_x21 == 0) goto LAB_067dd33c;
                          fVar77 = (float)FUN_06c519bc(*unaff_x21 + 0x50,0);
                          if (*unaff_x21 == 0) goto LAB_067dd33c;
                          fVar76 = *(float *)((long)unaff_x19 + 0x404);
                          fStack000000000000017c = (float)FUN_06c5196c(*unaff_x21 + 0x50,0);
                          if (unaff_x19[0x20] == 0) goto LAB_067dd33c;
                          fStack000000000000017c = fVar83 * fVar77 * fVar76 * fStack000000000000017c
                          ;
                          fVar56 = (fVar74 / (float)iVar17) * fVar72 * fVar56;
                          fVar74 = fVar56 * (fVar79 / fVar57) * fVar80 * fVar59;
                          fVar56 = fVar56 / fVar74;
                          fVar58 = fVar56 * fVar58;
                          fVar83 = (float)FUN_06c519cc(unaff_x19[0x20] + 0x50,0);
                          fVar56 = fVar56 * fVar83;
                        }
                        else {
                          if (*unaff_x26 == 0) goto LAB_067dd33c;
                          iVar17 = FUN_06c5195c(*unaff_x26 + 0x48,0);
                          if (*unaff_x26 == 0) goto LAB_067dd33c;
                          fVar56 = (float)FUN_06c5196c(*unaff_x26 + 0x48,0);
                          if (*(long *)(lVar21 + 0x20) == 0) goto LAB_067dd33c;
                          fVar79 = *(float *)(lVar21 + 0x2c);
                          fVar72 = fVar66;
                          if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
                            fVar72 = 1.0;
                          }
                          fVar57 = (float)FUN_06c51eb4(*(long *)(lVar21 + 0x20),0);
                          if (unaff_x19[0xd3] == 0) goto LAB_067dd33c;
                          fVar58 = (float)FUN_06c5198c(unaff_x19[0xd3] + 0x48,0);
                          if (*unaff_x26 == 0) goto LAB_067dd33c;
                          fVar59 = (float)FUN_06c519bc(*unaff_x26 + 0x48,0);
                          if (*unaff_x26 == 0) goto LAB_067dd33c;
                          fVar80 = *(float *)((long)unaff_x19 + 0x404);
                          fStack000000000000017c = (float)FUN_06c5196c(*unaff_x26 + 0x48,0);
                          if (unaff_x19[0xd3] == 0) goto LAB_067dd33c;
                          fStack000000000000017c = fVar83 * fVar59 * fVar80 * fStack000000000000017c
                          ;
                          fVar74 = (fVar74 / (float)iVar17) * fVar56 * fVar72 * fVar79 * fVar57;
                          fVar56 = (float)FUN_06c519cc(unaff_x19[0xd3] + 0x48,0);
                        }
                        *plVar47 = lVar21;
                        thunk_FUN_0333a630(plVar47,lVar21);
                        if ((*plVar2 != 0) && (lVar21 = *(long *)(*plVar2 + 0x38), lVar21 != 0)) {
                          if (*(uint *)(lVar21 + 0x18) <= *puVar1) goto LAB_067dd448;
                          lVar21 = lVar21 + (long)(int)*puVar1 * 0x178;
                          *(undefined4 *)(lVar21 + 0x2c) = 1;
                          *(float *)(lVar21 + 0x160) = fVar74;
                          *(long *)(lVar21 + 0x40) = *unaff_x26;
                          thunk_FUN_0333a630();
                          if ((*plVar2 != 0) && (lVar21 = *(long *)(*plVar2 + 0x38), lVar21 != 0)) {
                            if (*(uint *)(lVar21 + 0x18) <= *puVar1) goto LAB_067dd448;
                            *(long *)(lVar21 + (long)(int)*puVar1 * 0x178 + 0x38) = *unaff_x21;
                            thunk_FUN_0333a630();
                            lVar21 = *plVar2;
                            if ((lVar21 != 0) && (lVar48 = *(long *)(lVar21 + 0x38), lVar48 != 0)) {
                              if (*puVar1 < *(uint *)(lVar48 + 0x18)) {
                                _fStack0000000000000120 = CONCAT44(fVar58,fVar56);
                                fStack000000000000016c = 0.0;
                                *(int *)(lVar48 + (long)(int)*puVar1 * 0x178 + 0x58) =
                                     (int)unaff_x19[0x24];
                                *(int *)(unaff_x19 + 0x24) = (int)lVar34;
                                goto LAB_067d7630;
                              }
                              goto LAB_067dd448;
                            }
                          }
                        }
                        goto LAB_067dd33c;
                      }
                      lVar21 = *plVar2;
                      fVar83 = 0.0;
                      if (uVar16 != 3 && uVar16 != 0xad) {
                        fVar83 = fVar74;
                      }
                      fStack000000000000017c = 0.0;
                      if (lVar21 == 0) goto LAB_067dd33c;
                      _fStack0000000000000120 = 0;
                    }
                    lVar21 = *(long *)(lVar21 + 0x38);
                    if (lVar21 == 0) goto LAB_067dd33c;
                    if (*(uint *)(lVar21 + 0x18) <= *puVar1) goto LAB_067dd448;
                    lVar21 = lVar21 + (long)(int)*puVar1 * 0x178;
                    *(short *)(lVar21 + 0x20) = (short)uVar16;
                    *(int *)(lVar21 + 0x60) = (int)unaff_x19[0x3d];
                    *(undefined4 *)(lVar21 + 0x164) = *(undefined4 *)((long)unaff_x19 + 0x4ec);
                    if ((unaff_x19[0x6d] == 0) ||
                       (lVar21 = *(long *)(unaff_x19[0x6d] + 0x38), lVar21 == 0)) goto LAB_067dd33c;
                    if (*(uint *)(lVar21 + 0x18) <= *puVar1) goto LAB_067dd448;
                    *(int *)(lVar21 + (long)(int)*puVar1 * 0x178 + 0x168) = (int)unaff_x19[0x2b];
                    if ((unaff_x19[0x6d] == 0) ||
                       (lVar21 = *(long *)(unaff_x19[0x6d] + 0x38), lVar21 == 0)) goto LAB_067dd33c;
                    if (*(uint *)(lVar21 + 0x18) <= *puVar1) goto LAB_067dd448;
                    *(undefined4 *)(lVar21 + (long)(int)*puVar1 * 0x178 + 0x170) =
                         *(undefined4 *)((long)unaff_x19 + 0x15c);
                    if ((unaff_x19[0x6d] == 0) ||
                       (lVar21 = *(long *)(unaff_x19[0x6d] + 0x38), lVar21 == 0)) goto LAB_067dd33c;
                    uVar18 = *puVar1;
                    FUN_04a0d43c(&stack0x000001c0,unaff_x19 + 0xaa,
                                 *(undefined8 *)
                                  Method_System_Collections_Generic_HashSet<OvrAvatarShaderNameUtils_KnownShader>__ctor__
                                );
                    if (*(uint *)(lVar21 + 0x18) <= uVar18) goto LAB_067dd448;
                    lVar21 = lVar21 + (long)(int)uVar18 * 0x178;
                    *(undefined4 *)(lVar21 + 0x18c) = in_stack_000001d0;
                    *(undefined8 *)(lVar21 + 0x184) = in_stack_000001c8;
                    *(undefined8 *)(lVar21 + 0x17c) = in_stack_000001c0;
                    if ((*plVar2 == 0) || (lVar21 = *(long *)(*plVar2 + 0x38), lVar21 == 0))
                    goto LAB_067dd33c;
                    if (*(uint *)(lVar21 + 0x18) <= *puVar1) goto LAB_067dd448;
                    *(undefined4 *)(lVar21 + (long)(int)*puVar1 * 0x178 + 400) =
                         *(undefined4 *)((long)unaff_x19 + 0x25c);
                    if ((unaff_x19[0xc9] == 0) ||
                       (lVar21 = *(long *)(unaff_x19[0xc9] + 0x20), lVar21 == 0)) goto LAB_067dd33c;
                    FUN_06c51e78(&stack0x000001c0,lVar21,0);
                    if ((int)uVar16 < 0x10000) {
                      if (*(int *)(*(long *)PTR_DAT_0727fa20 + 0xe0) == 0) {
                        thunk_FUN_032cd7c0();
                      }
                      uVar18 = FUN_058a1fe4(uVar16,0);
                      uVar18 = uVar18 & 1;
                    }
                    else {
                      uVar18 = 0;
                    }
                    fStack0000000000000134 = *(float *)(unaff_x19 + 0x55);
                    *(undefined4 *)((long)unaff_x19 + 0x2fc) = 0;
                    if (*(char *)((long)unaff_x19 + 0x2f9) == '\0') {
                      fVar56 = 0.0;
                      fVar79 = 0.0;
                      fVar72 = 0.0;
                    }
                    else {
                      if (*plVar47 == 0) goto LAB_067dd33c;
                      uVar30 = *puVar1;
                      uVar44 = *(uint *)(*plVar47 + 0x28);
                      if ((int)uVar30 < (int)uVar33) {
                        if ((*plVar2 == 0) || (lVar21 = *(long *)(*plVar2 + 0x38), lVar21 == 0))
                        goto LAB_067dd33c;
                        if (*(uint *)(lVar21 + 0x18) <= uVar30 + 1) goto LAB_067dd448;
                        lVar21 = *(long *)(lVar21 + (long)(int)(uVar30 + 1) * 0x178 + 0x30);
                        if ((((lVar21 == 0) || (*unaff_x21 == 0)) ||
                            (lVar34 = *(long *)(*unaff_x21 + 0x128), lVar34 == 0)) ||
                           (lVar34 = *(long *)(lVar34 + 0x18), lVar34 == 0)) goto LAB_067dd33c;
                        uVar26 = FUN_05189ccc(lVar34,uVar44 | *(int *)(lVar21 + 0x28) << 0x10,
                                              &stack0x00000fa8,
                                              *(undefined8 *)
                                               Method_System_Collections_Generic_HashSet<CAPI_ovrAvatar2JointType>__ctor__
                                             );
                        uVar15 = 0;
                        if ((uVar26 & 1) == 0) {
                          fVar56 = 0.0;
                          fVar79 = 0.0;
                          fVar72 = 0.0;
                        }
                        else {
                          if (in_stack_00000fa8 == 0) goto LAB_067dd33c;
                          fVar56 = *(float *)(in_stack_00000fa8 + 0x1c);
                          uVar15 = *(undefined4 *)(in_stack_00000fa8 + 0x20);
                          fVar72 = *(float *)(in_stack_00000fa8 + 0x14);
                          fVar79 = *(float *)(in_stack_00000fa8 + 0x18);
                          if ((*(byte *)(in_stack_00000fa8 + 0x39) & 1) != 0) {
                            fStack0000000000000134 = 0.0;
                          }
                        }
                        uVar30 = *puVar1;
                      }
                      else {
                        uVar15 = 0;
                        fVar56 = 0.0;
                        fVar79 = 0.0;
                        fVar72 = 0.0;
                      }
                      if (0 < (int)uVar30) {
                        if ((*plVar2 == 0) || (lVar21 = *(long *)(*plVar2 + 0x38), lVar21 == 0))
                        goto LAB_067dd33c;
                        if (*(uint *)(lVar21 + 0x18) <= uVar30 - 1) goto LAB_067dd448;
                        lVar21 = *(long *)(lVar21 + (ulong)(uVar30 - 1) * 0x178 + 0x30);
                        if (((lVar21 == 0) || (*unaff_x21 == 0)) ||
                           ((lVar34 = *(long *)(*unaff_x21 + 0x128), lVar34 == 0 ||
                            (lVar34 = *(long *)(lVar34 + 0x18), lVar34 == 0)))) goto LAB_067dd33c;
                        uVar26 = FUN_05189ccc(lVar34,*(uint *)(lVar21 + 0x28) | uVar44 << 0x10,
                                              &stack0x00000fa8,
                                              *(undefined8 *)
                                               Method_System_Collections_Generic_HashSet<CAPI_ovrAvatar2JointType>__ctor__
                                             );
                        if ((uVar26 & 1) != 0) {
                          if ((in_stack_00000fa8 == 0) ||
                             (fVar72 = (float)FUN_06807d68(fVar72,fVar79,fVar56,uVar15,
                                                           *(undefined4 *)(in_stack_00000fa8 + 0x28)
                                                           ,*(undefined4 *)
                                                             (in_stack_00000fa8 + 0x2c),
                                                           *(undefined4 *)(in_stack_00000fa8 + 0x30)
                                                           ,*(undefined4 *)
                                                             (in_stack_00000fa8 + 0x34),0),
                             in_stack_00000fa8 == 0)) goto LAB_067dd33c;
                          if ((*(byte *)(in_stack_00000fa8 + 0x39) & 1) != 0) {
                            fStack0000000000000134 = 0.0;
                          }
                        }
                      }
                      *(float *)((long)unaff_x19 + 0x2fc) = fVar56;
                    }
                    if ((char)unaff_x19[0x1e] != '\0') {
                      fVar59 = *(float *)(unaff_x19 + 200);
                      fVar57 = (float)FUN_06c51cc0(&stack0x00001040,0);
                      fVar59 = fVar59 - fVar83 * fVar57 * (1.0 - *(float *)((long)unaff_x19 + 0x2d4)
                                                          );
                      *(float *)(unaff_x19 + 200) = fVar59;
                      if ((uVar16 == 0x200b) || (uVar18 != 0)) {
                        *(float *)(unaff_x19 + 200) =
                             fVar59 - fVar55 * *(float *)((long)unaff_x19 + 0x2b4);
                      }
                    }
                    fVar59 = *(float *)(unaff_x19 + 0x56);
                    fVar57 = 0.0;
                    if (fVar59 != 0.0) {
                      fVar57 = (float)FUN_06c51ca0(&stack0x00001040,0);
                      fVar80 = (float)FUN_06c51cb0(&stack0x00001040,0);
                      fVar57 = (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                               (fVar59 * 0.5 - fVar83 * (fVar57 * 0.5 + fVar80));
                      *(float *)(unaff_x19 + 200) = *(float *)(unaff_x19 + 200) + fVar57;
                    }
                    if (((*(int *)((long)unaff_x19 + 0x644) == 0) && (cVar29 == '\0')) &&
                       ((*(byte *)((long)unaff_x19 + 0x25c) & 1) != 0)) {
                      lVar21 = *in_stack_00000150;
                      if (*(int *)(*(long *)PTR_DAT_072794f0 + 0xe0) == 0) {
                        thunk_FUN_032cd7c0();
                      }
                      uVar26 = FUN_06be9890(lVar21,0,0);
                      fVar80 = 0.0;
                      if ((uVar26 & 1) != 0) {
                        lVar21 = *in_stack_00000150;
                        if (*(int *)(*(long *)
                                      Method_System_Collections_Generic_HashSet<CAPI_ovrAvatar2JointType>_Contains__
                                    + 0xe0) == 0) {
                          thunk_FUN_032cd7c0();
                        }
                        plVar46 = (long *)
                                  Method_System_Collections_Generic_HashSet<CAPI_ovrAvatar2JointType>_Contains__
                        ;
                        if (lVar21 == 0) goto LAB_067dd33c;
                        uVar26 = FUN_06bc3e18(lVar21,*(undefined4 *)
                                                      (*(long *)(*(long *)
                                                  Method_System_Collections_Generic_HashSet<CAPI_ovrAvatar2JointType>_Contains__
                                                  + 0xb8) + 0x54),0);
                        fVar80 = 0.0;
                        if ((uVar26 & 1) != 0) {
                          lVar21 = *in_stack_00000150;
                          if (*(int *)(*plVar46 + 0xe0) == 0) {
                            thunk_FUN_032cd7c0();
                            plVar46 = (long *)
                                      Method_System_Collections_Generic_HashSet<CAPI_ovrAvatar2JointType>_Contains__
                            ;
                          }
                          if (lVar21 == 0) goto LAB_067dd33c;
                          fVar59 = (float)FUN_06bc5a24(lVar21,*(undefined4 *)
                                                               (*(long *)(*plVar46 + 0xb8) + 0x54),0
                                                      );
                          if ((*unaff_x21 == 0) || (*in_stack_00000150 == 0)) goto LAB_067dd33c;
                          fVar58 = *(float *)(*unaff_x21 + 0x1b0);
                          fVar80 = (float)FUN_06bc5a24(*in_stack_00000150,
                                                       *(undefined4 *)
                                                        (*(long *)(*(long *)
                                                  Method_System_Collections_Generic_HashSet<CAPI_ovrAvatar2JointType>_Contains__
                                                  + 0xb8) + 0xcc),0);
                          fVar80 = fVar80 * fVar59 * fVar58 * 0.25;
                          if (fVar59 < fStack000000000000016c + fVar80) {
                            fStack000000000000016c = fVar59 - fVar80;
                          }
                        }
                      }
                      if (*unaff_x21 == 0) goto LAB_067dd33c;
                      fStack00000000000000dc = *(float *)(*unaff_x21 + 0x1b4);
                    }
                    else {
                      lVar21 = *in_stack_00000150;
                      if (*(int *)(*(long *)PTR_DAT_072794f0 + 0xe0) == 0) {
                        thunk_FUN_032cd7c0();
                      }
                      uVar26 = FUN_06be9890(lVar21,0,0);
                      fStack00000000000000dc = 0.0;
                      if ((uVar26 & 1) != 0) {
                        lVar21 = *in_stack_00000150;
                        if (*(int *)(*(long *)
                                      Method_System_Collections_Generic_HashSet<CAPI_ovrAvatar2JointType>_Contains__
                                    + 0xe0) == 0) {
                          thunk_FUN_032cd7c0();
                        }
                        plVar46 = (long *)
                                  Method_System_Collections_Generic_HashSet<CAPI_ovrAvatar2JointType>_Contains__
                        ;
                        if (lVar21 == 0) goto LAB_067dd33c;
                        uVar26 = FUN_06bc3e18(lVar21,*(undefined4 *)
                                                      (*(long *)(*(long *)
                                                  Method_System_Collections_Generic_HashSet<CAPI_ovrAvatar2JointType>_Contains__
                                                  + 0xb8) + 0x54),0);
                        if ((uVar26 & 1) != 0) {
                          lVar21 = *in_stack_00000150;
                          if (*(int *)(*plVar46 + 0xe0) == 0) {
                            thunk_FUN_032cd7c0();
                            plVar46 = (long *)
                                      Method_System_Collections_Generic_HashSet<CAPI_ovrAvatar2JointType>_Contains__
                            ;
                          }
                          if (lVar21 == 0) goto LAB_067dd33c;
                          uVar26 = FUN_06bc3e18(lVar21,*(undefined4 *)
                                                        (*(long *)(*plVar46 + 0xb8) + 0xcc),0);
                          if ((uVar26 & 1) != 0) {
                            lVar21 = *in_stack_00000150;
                            if (*(int *)(*plVar46 + 0xe0) == 0) {
                              thunk_FUN_032cd7c0();
                              plVar46 = (long *)
                                        Method_System_Collections_Generic_HashSet<CAPI_ovrAvatar2JointType>_Contains__
                              ;
                            }
                            if (lVar21 != 0) {
                              fVar59 = (float)FUN_06bc5a24(lVar21,*(undefined4 *)
                                                                   (*(long *)(*plVar46 + 0xb8) +
                                                                   0x54),0);
                              if ((*unaff_x21 != 0) && (*in_stack_00000150 != 0)) {
                                fVar58 = *(float *)(*unaff_x21 + 0x1a8);
                                fVar80 = (float)FUN_06bc5a24(*in_stack_00000150,
                                                             *(undefined4 *)
                                                              (*(long *)(*(long *)
                                                  Method_System_Collections_Generic_HashSet<CAPI_ovrAvatar2JointType>_Contains__
                                                  + 0xb8) + 0xcc),0);
                                fVar80 = fVar80 * fVar59 * fVar58 * 0.25;
                                if (fVar59 < fStack000000000000016c + fVar80) {
                                  fStack000000000000016c = fVar59 - fVar80;
                                }
                                goto LAB_067d7da0;
                              }
                            }
                            goto LAB_067dd33c;
                          }
                        }
                      }
                      fVar80 = 0.0;
                    }
LAB_067d7da0:
                    fVar76 = *(float *)(unaff_x19 + 200);
                    fVar59 = (float)FUN_06c51cb0(&stack0x00001040,0);
                    fVar76 = fVar76 + (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                                      fVar83 * (fVar72 + ((fVar59 - fStack000000000000016c) - fVar80
                                                         ));
                    fVar72 = (float)FUN_06c51cb8(&stack0x00001040,0);
                    fVar58 = *(float *)((long)unaff_x19 + 0x61c) +
                             ((fStack000000000000017c +
                              fVar83 * (fVar79 + fStack000000000000016c + fVar72)) -
                             *(float *)(unaff_x19 + 0x9b));
                    fVar72 = (float)FUN_06c51ca8(&stack0x00001040,0);
                    fVar77 = fVar58 - fVar83 * (fStack000000000000016c + fStack000000000000016c +
                                               fVar72);
                    fVar72 = (float)FUN_06c51ca0(&stack0x00001040,0);
                    fVar59 = fVar76 + (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                                      fVar83 * (fVar80 + fVar80 +
                                               fStack000000000000016c + fStack000000000000016c +
                                               fVar72);
                    fVar72 = fVar76;
                    fVar79 = fVar59;
                    if (((*(int *)((long)unaff_x19 + 0x644) == 0) && (cVar29 == '\0')) &&
                       ((*(byte *)((long)unaff_x19 + 0x25c) >> 1 & 1) != 0)) {
                      fVar67 = (float)(int)unaff_x19[0xbe] * fVar75;
                      fVar72 = (float)FUN_06c51cb8(&stack0x00001040,0);
                      fVar62 = fVar67 * fVar83 * (fVar80 + fStack000000000000016c + fVar72);
                      fVar72 = (float)FUN_06c51cb8(&stack0x00001040,0);
                      fVar79 = (float)FUN_06c51ca8(&stack0x00001040,0);
                      fVar58 = fVar58 + 0.0;
                      fVar77 = fVar77 + 0.0;
                      fVar61 = fVar76 + fVar62;
                      fVar67 = fVar67 * fVar83 * (((fVar72 - fVar79) - fStack000000000000016c) -
                                                 fVar80);
                      fVar79 = fVar59 + fVar67;
                      fVar68 = (fVar62 - fVar67) * 0.5;
                      fVar76 = (fVar76 + fVar67) - fVar68;
                      fVar59 = (fVar59 + fVar62) - fVar68;
                      fVar72 = fVar61 - fVar68;
                      fVar79 = fVar79 - fVar68;
                    }
                    if (*(char *)((long)unaff_x19 + 0x474) == '\0') {
                      fVar61 = 0.0;
                      fVar62 = 0.0;
                      fVar73 = 0.0;
                      fStack0000000000000104 = 0.0;
                      fVar68 = fVar77;
                      fVar67 = fVar58;
                      fStack0000000000000118 = fVar76;
                      fStack000000000000011c = fVar72;
                    }
                    else {
                      thunk_FUN_06bda068(lVar22,0);
                      fVar81 = (fVar77 + fVar58) * 0.5;
                      fVar78 = (fVar59 + fVar76) * 0.5;
                      fVar58 = fVar58 - fVar81;
                      fStack0000000000000104 = 0.0;
                      fVar67 = fVar58;
                      fVar60 = (float)FUN_06bdb690(fVar72 - fVar78,lVar22,0);
                      fStack0000000000000104 = fStack0000000000000104 + 0.0;
                      fVar77 = fVar77 - fVar81;
                      fVar61 = 0.0;
                      fVar72 = fVar77;
                      fVar76 = (float)FUN_06bdb690(fVar76 - fVar78,lVar22,0);
                      fVar61 = fVar61 + 0.0;
                      fVar73 = 0.0;
                      fVar59 = (float)FUN_06bdb690(fVar59 - fVar78,lVar22,0);
                      fVar59 = fVar78 + fVar59;
                      fVar58 = fVar81 + fVar58;
                      fVar73 = fVar73 + 0.0;
                      fVar62 = 0.0;
                      fVar79 = (float)FUN_06bdb690(fVar79 - fVar78,lVar22,0);
                      fVar79 = fVar78 + fVar79;
                      fVar77 = fVar81 + fVar77;
                      fVar62 = fVar62 + 0.0;
                      fVar68 = fVar81 + fVar72;
                      fVar67 = fVar81 + fVar67;
                      fStack0000000000000118 = fVar78 + fVar76;
                      fStack000000000000011c = fVar78 + fVar60;
                    }
                    if (*plVar2 == 0) goto LAB_067dd33c;
                    lVar21 = *(long *)(*plVar2 + 0x38);
                    uVar26 = (ulong)(uint)fVar83;
                    if (lVar21 == 0) goto LAB_067dd33c;
                    if (*(uint *)(lVar21 + 0x18) <= *puVar1) goto LAB_067dd448;
                    lVar21 = lVar21 + (long)(int)*puVar1 * 0x178;
                    *(float *)(lVar21 + 0x11c) = fStack0000000000000118;
                    *(float *)(lVar21 + 0x120) = fVar68;
                    *(float *)(lVar21 + 0x124) = fVar61;
                    if ((*plVar2 == 0) || (lVar21 = *(long *)(*plVar2 + 0x38), lVar21 == 0))
                    goto LAB_067dd33c;
                    if (*(uint *)(lVar21 + 0x18) <= *puVar1) goto LAB_067dd448;
                    lVar21 = lVar21 + (long)(int)*puVar1 * 0x178;
                    *(float *)(lVar21 + 0x110) = fStack000000000000011c;
                    *(float *)(lVar21 + 0x114) = fVar67;
                    *(float *)(lVar21 + 0x118) = fStack0000000000000104;
                    if ((*plVar2 == 0) || (lVar21 = *(long *)(*plVar2 + 0x38), lVar21 == 0))
                    goto LAB_067dd33c;
                    if (*(uint *)(lVar21 + 0x18) <= *puVar1) goto LAB_067dd448;
                    lVar21 = lVar21 + (long)(int)*puVar1 * 0x178;
                    *(float *)(lVar21 + 0x128) = fVar59;
                    *(float *)(lVar21 + 300) = fVar58;
                    *(float *)(lVar21 + 0x130) = fVar73;
                    if ((*plVar2 == 0) || (lVar21 = *(long *)(*plVar2 + 0x38), lVar21 == 0))
                    goto LAB_067dd33c;
                    if (*(uint *)(lVar21 + 0x18) <= *puVar1) goto LAB_067dd448;
                    lVar21 = lVar21 + (long)(int)*puVar1 * 0x178;
                    *(float *)(lVar21 + 0x134) = fVar79;
                    *(float *)(lVar21 + 0x138) = fVar77;
                    *(float *)(lVar21 + 0x13c) = fVar62;
                    if ((*plVar2 == 0) || (lVar21 = *(long *)(*plVar2 + 0x38), lVar21 == 0))
                    goto LAB_067dd33c;
                    uVar44 = *puVar1;
                    lVar34 = (long)(int)uVar44;
                    if (*(uint *)(lVar21 + 0x18) <= uVar44) goto LAB_067dd448;
                    lVar48 = lVar21 + lVar34 * 0x178;
                    *(int *)(lVar48 + 0x140) = (int)unaff_x19[200];
                    fVar79 = *(float *)(unaff_x19 + 0x9b);
                    uVar64 = (ulong)(uint)fVar79;
                    fVar72 = *(float *)((long)unaff_x19 + 0x61c);
                    *(float *)(lVar48 + 0x15c) =
                         (fVar59 - fStack0000000000000118) / (fVar67 - fVar68);
                    *(float *)(lVar48 + 0x14c) = (fStack000000000000017c - fVar79) + fVar72;
                    fVar59 = fStack0000000000000124 * fVar83;
                    if (*(int *)((long)unaff_x19 + 0x644) == 0) {
                      fVar59 = fVar59 / fVar52;
                      fStack0000000000000120 = (fStack0000000000000120 * fVar83) / fVar52;
                    }
                    else {
                      fStack0000000000000120 = fStack0000000000000120 * fVar83;
                    }
                    uVar30 = *(uint *)(unaff_x19 + 0x93);
                    if ((uVar18 == 0) || (uVar44 == uVar30)) {
                      fStack0000000000000120 = fVar72 + fStack0000000000000120;
                      fVar59 = fVar72 + fVar59;
                      fVar77 = fStack0000000000000120;
                      fVar58 = fVar59;
                      if (fVar72 != 0.0) {
                        fVar58 = (fVar59 - fVar72) / *(float *)((long)unaff_x19 + 0x404);
                        fVar77 = (fStack0000000000000120 - fVar72) /
                                 *(float *)((long)unaff_x19 + 0x404);
                        if (fVar58 <= fVar59) {
                          fVar58 = fVar59;
                        }
                        if (fStack0000000000000120 <= fVar77) {
                          fVar77 = fStack0000000000000120;
                        }
                      }
                      lVar21 = lVar21 + lVar34 * 0x178;
                      fVar72 = fVar58;
                      if (fVar58 <= *(float *)(unaff_x19 + 0x99)) {
                        fVar72 = *(float *)(unaff_x19 + 0x99);
                      }
                      fVar76 = fVar77;
                      if (*(float *)((long)unaff_x19 + 0x4cc) <= fVar77) {
                        fVar76 = *(float *)((long)unaff_x19 + 0x4cc);
                      }
                      *(float *)((long)unaff_x19 + 0x4cc) = fVar76;
                      *(float *)(unaff_x19 + 0x99) = fVar72;
                      *(float *)(lVar21 + 0x154) = fVar58;
                      *(float *)(lVar21 + 0x158) = fVar77;
                      *(float *)(lVar21 + 0x148) = fVar59 - fVar79;
                      *(float *)(unaff_x19 + 0x98) = fVar59 - fVar79;
                      *(float *)(lVar21 + 0x150) = fStack0000000000000120 - fVar79;
                      *(float *)((long)unaff_x19 + 0x4c4) = fStack0000000000000120 - fVar79;
                      if (((int)unaff_x19[0x95] == 0) ||
                         (*(char *)((long)unaff_x19 + 0x33c) != '\0')) {
                        *(float *)(unaff_x19 + 0x97) = fVar72;
                        if (unaff_x19[0x20] == 0) goto LAB_067dd33c;
                        fVar72 = *(float *)((long)unaff_x19 + 0x4bc);
                        fVar79 = (float)FUN_06c5199c(unaff_x19[0x20] + 0x50,0);
                        fVar52 = (fVar83 * fVar79) / fVar52;
                        uVar64 = (ulong)*(uint *)(unaff_x19 + 0x9b);
                        if (fVar72 <= fVar52) {
                          fVar72 = fVar52;
                        }
                        *(float *)((long)unaff_x19 + 0x4bc) = fVar72;
                      }
                      if ((float)uVar64 == 0.0) {
                        fVar52 = *(float *)((long)unaff_x19 + 0x4b4);
                        if (*(float *)((long)unaff_x19 + 0x4b4) <= fVar59) {
                          fVar52 = fVar59;
                        }
                        *(float *)((long)unaff_x19 + 0x4b4) = fVar52;
                      }
                    }
                    else {
                      fVar52 = *(float *)(unaff_x19 + 0x99);
                      lVar21 = lVar21 + lVar34 * 0x178;
                      *(float *)(lVar21 + 0x154) = fVar52;
                      fVar72 = *(float *)((long)unaff_x19 + 0x4cc);
                      fVar52 = fVar52 - fVar79;
                      *(float *)(lVar21 + 0x148) = fVar52;
                      *(float *)(lVar21 + 0x158) = fVar72;
                      *(float *)(unaff_x19 + 0x98) = fVar52;
                      fVar72 = fVar72 - fVar79;
                      *(float *)(lVar21 + 0x150) = fVar72;
                      *(float *)((long)unaff_x19 + 0x4c4) = fVar72;
                    }
                    lVar21 = *plVar2;
                    if ((lVar21 == 0) || (lVar34 = *(long *)(lVar21 + 0x38), lVar34 == 0))
                    goto LAB_067dd33c;
                    uVar19 = *puVar1;
                    if (*(uint *)(lVar34 + 0x18) <= uVar19) goto LAB_067dd448;
                    lVar34 = lVar34 + (long)(int)uVar19 * 0x178;
                    *(undefined1 *)(lVar34 + 0x194) = 0;
                    uVar37 = *(uint *)(unaff_x19 + 0x4f);
                    if ((uVar16 == 9) ||
                       (((((uVar18 == 0 && (uVar16 != 3)) && (uVar16 != 0x200b)) && (uVar16 != 0xad)
                         ) || (((bool)(uVar16 == 0xad & (bVar10 ^ 1U)) ||
                               (*(int *)((long)unaff_x19 + 0x644) == 1)))))) {
                      *(undefined1 *)(lVar34 + 0x194) = 1;
                      pfVar35 = (float *)((long)unaff_x19 + 0x354);
                      pfVar31 = (float *)(unaff_x19 + 0x6a);
                      if (bVar8) {
                        lVar21 = *(long *)(lVar21 + 0x50);
                        if (lVar21 == 0) goto LAB_067dd33c;
                        if (*(uint *)(lVar21 + 0x18) <= *(uint *)(unaff_x19 + 0x95))
                        goto LAB_067dd448;
                        lVar21 = lVar21 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
                        pfVar31 = (float *)(lVar21 + 0x60);
                        pfVar35 = (float *)(lVar21 + 100);
                      }
                      fVar72 = *pfVar31;
                      fVar79 = *pfVar35;
                      fVar52 = *(float *)(unaff_x19 + 0x6c);
                      fVar59 = *(float *)(unaff_x19 + 200);
                      fStack0000000000000100 = (fVar82 - fVar72) - fVar79;
                      bVar13 = true;
                      if ((fVar52 <= fStack0000000000000100) && (bVar13 = false, !NAN(fVar52))) {
                        bVar13 = fVar52 == -1.0;
                      }
                      if (!bVar13) {
                        fStack0000000000000100 = fVar52;
                      }
                      fVar52 = 0.0;
                      if ((char)unaff_x19[0x1e] == '\0') {
                        fVar52 = (float)FUN_06c51cc0(&stack0x00001040,0);
                        uVar64 = (ulong)*(uint *)(unaff_x19 + 0x9b);
                      }
                      fVar58 = *(float *)((long)unaff_x19 + 0x2d4);
                      fVar77 = *(float *)((long)unaff_x19 + 0x4cc);
                      if (uVar16 != 0xad) {
                        fVar74 = fVar83;
                      }
                      fVar67 = (float)uVar64;
                      fVar76 = 0.0;
                      if ((0.0 < fVar67) &&
                         (fVar76 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
                        fVar76 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
                      }
                      uVar19 = *puVar1;
                      fVar76 = (*(float *)(unaff_x19 + 0x97) - (fVar77 - fVar67)) + fVar76;
                      if (fVar51 < fVar76) {
                        if (*(int *)((long)unaff_x19 + 0x2e4) == -1) {
                          *(uint *)((long)unaff_x19 + 0x2e4) = uVar19;
                        }
                        puVar11 = 
                        Method_System_Collections_Generic_HashSet<OvrAvatarShaderNameUtils_KnownShader>_Add__
                        ;
                        uVar27 = DAT_0139e7e8;
                        if ((char)unaff_x19[0x47] != '\0') {
                          fVar61 = *(float *)(unaff_x19 + 0x59);
                          if (((fVar61 < *(float *)((long)unaff_x19 + 700)) && (0.0 < fVar67)) &&
                             (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
                            fVar55 = *(float *)((long)unaff_x19 + 700) +
                                     ((fVar71 - fVar76) / (float)(int)unaff_x19[0x95]) / fVar49;
                            if (fVar55 <= fVar61) {
                              fVar55 = fVar61;
                            }
                            goto LAB_067dac68;
                          }
                          fVar67 = *(float *)((long)unaff_x19 + 0x1e4);
                          fVar76 = *(float *)(unaff_x19 + 0x4a);
                          uVar64 = (ulong)(uint)fVar76;
                          if ((fVar76 < fVar67) &&
                             (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
                            fVar55 = (fVar67 - *(float *)(unaff_x19 + 0x48)) * 0.5;
                            if (fVar55 <= DAT_013a0300) {
                              fVar55 = DAT_013a0300;
                            }
                            fVar66 = (fVar67 - fVar55) * 20.0 + 0.5;
                            *(float *)((long)unaff_x19 + 0x23c) = fVar67;
                            fVar55 = DAT_013a07c8;
                            if (fVar66 != INFINITY) {
                              fVar55 = (float)(int)fVar66 / 20.0;
                            }
                            if (fVar55 <= fVar76) {
                              fVar55 = fVar76;
                            }
                            goto LAB_067da750;
                          }
                        }
                        switch((int)unaff_x19[0x5c]) {
                        case 1:
                          lVar21 = *(long *)
                                    Method_System_Collections_Generic_HashSet<OvrAvatarShaderNameUtils_KnownShader>_Add__
                          ;
                          if (*(int *)(lVar21 + 0xe0) == 0) {
                            thunk_FUN_032cd7c0();
                            lVar21 = *(long *)puVar11;
                          }
                          lVar34 = *(long *)(lVar21 + 0xb8);
                          if (*(int *)(lVar34 + 0x1580) == 0) {
LAB_067da678:
                            in_stack_00001078 = DAT_0139e7e8;
                            puVar1[0] = 0;
                            puVar1[1] = 0;
                            uVar84 = 0xffffffff;
                          }
                          else {
                            if (*(int *)(lVar21 + 0xe0) == 0) {
                              thunk_FUN_032cd7c0();
                              lVar34 = *(long *)(*(long *)
                                                  Method_System_Collections_Generic_HashSet<OvrAvatarShaderNameUtils_KnownShader>_Add__
                                                + 0xb8);
                            }
                            FUN_04a0fee4(&stack0x00001090,lVar34 + 0x11f0,
                                         *(undefined8 *)
                                          Method_System_Collections_Generic_HashSet<OVRFaceExpressions_FaceExpression>__ctor__
                                        );
                            memcpy(&stack0x00000c30,&stack0x00001090,0x378);
LAB_067d8b20:
                            iVar17 = FUN_06821f78();
LAB_067d8b2c:
                            iVar20 = *(int *)((long)unaff_x19 + 0x494) + -1;
                            *(int *)((long)unaff_x19 + 0x494) = iVar20;
                            iVar38 = iVar38 + 1;
                            uVar84 = iVar17 - 1;
                            in_stack_00001078 = CONCAT44(0x2026,iVar20);
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
                          uVar84 = FUN_06821f78();
                          break;
                        case 5:
                          if ((uVar19 == 0) || ((int)uVar84 < 0)) {
                            *puVar1 = 0;
                            uVar84 = 0xffffffff;
                            in_stack_00001078 = uVar27;
                          }
                          else {
                            fVar74 = *(float *)(unaff_x19 + 0x99);
                            if (*(int *)(*(long *)
                                          Method_System_Collections_Generic_HashSet<OvrAvatarShaderNameUtils_KnownShader>_Add__
                                        + 0xe0) == 0) {
                              thunk_FUN_032cd7c0();
                            }
                            uVar84 = FUN_06821f78();
                            if (fVar51 < fVar74 - fVar77) break;
                            *(undefined1 *)((long)unaff_x19 + 0x33c) = 1;
                            *(undefined4 *)(unaff_x19 + 0x93) =
                                 *(undefined4 *)((long)unaff_x19 + 0x494);
                            uVar64 = *(ulong *)(*(long *)(*(long *)
                                                  Method_System_Collections_Generic_HashSet<OvrAvatarShaderNameUtils_KnownShader>_Add__
                                                  + 0xb8) + 0x15a8);
                            *(float *)(unaff_x19 + 200) = *(float *)((long)unaff_x19 + 0x40c) + 0.0;
                            *(undefined4 *)(unaff_x19 + 0x9a) = 0;
                            lVar21 = NEON_rev64(uVar64,4);
                            unaff_x19[0x99] = lVar21;
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
                          uVar84 = FUN_06821f78();
                          lVar21 = unaff_x19[0x5d];
                          if (*(int *)(*(long *)PTR_DAT_072794f0 + 0xe0) == 0) {
                            thunk_FUN_032cd7c0(*(long *)PTR_DAT_072794f0);
                          }
                          uVar24 = FUN_06be9890(lVar21,0,0);
                          if ((uVar24 & 1) != 0) {
                            plVar46 = (long *)unaff_x19[0x5d];
                            uVar27 = (**(code **)(*unaff_x19 + 0x548))();
                            if (plVar46 == (long *)0x0) goto LAB_067dd33c;
                            (**(code **)(*plVar46 + 0x558))
                                      (plVar46,uVar27,*(undefined8 *)(*plVar46 + 0x560));
                            lVar21 = unaff_x19[0x5d];
                            if (lVar21 == 0) goto LAB_067dd33c;
                            *(int *)(lVar21 + 0x400) = (int)unaff_x19[0x80];
                            FUN_06814d00(lVar21,*(undefined4 *)((long)unaff_x19 + 0x494),0);
                            plVar46 = (long *)unaff_x19[0x5d];
                            if (plVar46 == (long *)0x0) goto LAB_067dd33c;
                            (**(code **)(*plVar46 + 0x7d8))
                                      (plVar46,0,0,*(undefined8 *)(*plVar46 + 0x7e0));
                            *(undefined1 *)(unaff_x19 + 0x5f) = 1;
                          }
                        }
LAB_067d88ac:
                        in_stack_00001078 = CONCAT44(3,uVar19);
                        goto LAB_067d6d64;
                      }
switchD_067d8568_caseD_2:
                      puVar11 = 
                      Method_System_Collections_Generic_HashSet<OvrAvatarShaderNameUtils_KnownShader>_Add__
                      ;
                      fVar77 = 1.0 - fVar58;
                      uVar64 = (ulong)(uint)fVar77;
                      fVar52 = ABS(fVar59) + fVar52 * fVar77 * fVar74;
                      fVar74 = 1.0;
                      if ((uVar37 & 0x18) != 0) {
                        fVar74 = DAT_013a01c4;
                      }
                      fVar59 = fVar74 * fStack0000000000000100;
                      if (fVar59 < fVar52) {
                        if (((char)unaff_x19[0x5b] == '\0') ||
                           (uVar19 == *(uint *)(unaff_x19 + 0x93))) {
                          if (((char)unaff_x19[0x47] != '\0') &&
                             (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
                            fVar59 = *(float *)(unaff_x19 + 0x5a) / 100.0;
                            if (fVar58 < fVar59) {
                              fVar55 = fVar52 / fVar77;
                              if (fVar58 <= 0.0) {
                                fVar55 = fVar52;
                              }
                              fVar58 = fVar58 + (fVar52 - fVar74 * (fStack0000000000000100 +
                                                                   DAT_013a055c)) / fVar55;
                              goto LAB_067dd3cc;
                            }
                            fVar58 = *(float *)((long)unaff_x19 + 0x1e4);
                            uVar64 = (ulong)(uint)fVar58;
                            fVar59 = *(float *)(unaff_x19 + 0x4a);
                            if (fVar58 <= fVar59) goto LAB_067d867c;
LAB_067dd340:
                            fVar55 = (fVar58 - *(float *)(unaff_x19 + 0x48)) * 0.5;
                            if (fVar55 <= DAT_013a0300) {
                              fVar55 = DAT_013a0300;
                            }
                            *(float *)((long)unaff_x19 + 0x23c) = fVar58;
                            fVar66 = (fVar58 - fVar55) * 20.0 + 0.5;
                            fVar55 = DAT_013a07c8;
                            if (fVar66 != INFINITY) {
                              fVar55 = (float)(int)fVar66 / 20.0;
                            }
                            if (fVar55 <= fVar59) {
                              fVar55 = fVar59;
                            }
                            goto LAB_067da750;
                          }
LAB_067d867c:
                          iVar17 = (int)unaff_x19[0x5c];
                          if (iVar17 == 1) {
                            lVar21 = *(long *)
                                      Method_System_Collections_Generic_HashSet<OvrAvatarShaderNameUtils_KnownShader>_Add__
                            ;
                            if (*(int *)(lVar21 + 0xe0) == 0) {
                              thunk_FUN_032cd7c0();
                              lVar21 = *(long *)puVar11;
                            }
                            lVar34 = *(long *)(lVar21 + 0xb8);
                            if (*(int *)(lVar34 + 0x1580) != 0) {
                              if (*(int *)(lVar21 + 0xe0) == 0) {
                                thunk_FUN_032cd7c0();
                                lVar34 = *(long *)(*(long *)
                                                  Method_System_Collections_Generic_HashSet<OvrAvatarShaderNameUtils_KnownShader>_Add__
                                                  + 0xb8);
                              }
                              FUN_04a0fee4(&stack0x00001090,lVar34 + 0x11f0,
                                           *(undefined8 *)
                                            Method_System_Collections_Generic_HashSet<OVRFaceExpressions_FaceExpression>__ctor__
                                          );
                              memcpy(&stack0x00000540,&stack0x00001090,0x378);
                              goto LAB_067d8b20;
                            }
                            goto LAB_067da678;
                          }
                          if (iVar17 != 6) {
                            if (iVar17 == 3) {
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
                          uVar84 = FUN_06821f78();
                          lVar21 = unaff_x19[0x5d];
                          if (*(int *)(*(long *)PTR_DAT_072794f0 + 0xe0) == 0) {
                            thunk_FUN_032cd7c0(*(long *)PTR_DAT_072794f0);
                          }
                          uVar24 = FUN_06be9890(lVar21,0,0);
                          if ((uVar24 & 1) != 0) {
                            plVar46 = (long *)unaff_x19[0x5d];
                            uVar27 = (**(code **)(*unaff_x19 + 0x548))();
                            if (plVar46 == (long *)0x0) goto LAB_067dd33c;
                            (**(code **)(*plVar46 + 0x558))
                                      (plVar46,uVar27,*(undefined8 *)(*plVar46 + 0x560));
                            lVar21 = unaff_x19[0x5d];
                            if (lVar21 == 0) goto LAB_067dd33c;
                            *(int *)(lVar21 + 0x400) = (int)unaff_x19[0x80];
                            FUN_06814d00(lVar21,*(undefined4 *)((long)unaff_x19 + 0x494),0);
                            plVar46 = (long *)unaff_x19[0x5d];
                            if (plVar46 == (long *)0x0) goto LAB_067dd33c;
                            (**(code **)(*plVar46 + 0x7d8))
                                      (plVar46,0,0,*(undefined8 *)(*plVar46 + 0x7e0));
                            *(undefined1 *)(unaff_x19 + 0x5f) = 1;
                          }
LAB_067d8c40:
                          in_stack_00001078 = CONCAT44(3,*puVar1);
                        }
                        else {
                          if (*(int *)(*(long *)
                                        Method_System_Collections_Generic_HashSet<OvrAvatarShaderNameUtils_KnownShader>_Add__
                                      + 0xe0) == 0) {
                            thunk_FUN_032cd7c0();
                          }
                          uVar84 = FUN_06821f78();
                          if (*(float *)(unaff_x19 + 0x58) == DAT_013a0308) {
                            lVar21 = *plVar2;
                            if ((lVar21 == 0) || (lVar34 = *(long *)(lVar21 + 0x38), lVar34 == 0))
                            goto LAB_067dd33c;
                            if (*(uint *)(lVar34 + 0x18) <= *puVar1) goto LAB_067dd448;
                            fVar59 = *(float *)(unaff_x19 + 0x9b);
                            fVar58 = 0.0;
                            if ((0.0 < fVar59) &&
                               (fVar58 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
                              fVar58 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
                            }
                            fVar58 = fVar55 * *(float *)(unaff_x19 + 0x57) +
                                     *(float *)(lVar34 + (long)(int)*puVar1 * 0x178 + 0x154) +
                                     (fVar58 - *(float *)((long)unaff_x19 + 0x4cc)) +
                                     fVar49 * (fVar50 + *(float *)((long)unaff_x19 + 700));
                          }
                          else {
                            lVar21 = unaff_x19[0x6d];
                            *(undefined1 *)((long)unaff_x19 + 0x2c4) = 1;
                            if (lVar21 == 0) goto LAB_067dd33c;
                            fVar59 = *(float *)(unaff_x19 + 0x9b);
                            fVar58 = *(float *)(unaff_x19 + 0x58) +
                                     fVar55 * *(float *)(unaff_x19 + 0x57);
                          }
                          puVar11 = 
                          Method_System_Collections_Generic_HashSet<OvrAvatarShaderNameUtils_KnownShader>_Add__
                          ;
                          lVar21 = *(long *)(lVar21 + 0x38);
                          if (lVar21 == 0) goto LAB_067dd33c;
                          uVar39 = *(uint *)((long)unaff_x19 + 0x494);
                          if ((*(uint *)(lVar21 + 0x18) <= uVar39) ||
                             (uVar7 = uVar39 - 1, *(uint *)(lVar21 + 0x18) <= uVar7))
                          goto LAB_067dd448;
                          uVar64 = (ulong)(uint)(fVar58 + *(float *)(unaff_x19 + 0x97));
                          fVar77 = (fVar58 + *(float *)(unaff_x19 + 0x97) + fVar59) -
                                   *(float *)(lVar21 + (long)(int)uVar39 * 0x178 + 0x158);
                          if ((bVar10 || *(short *)(lVar21 + (long)(int)uVar7 * 0x178 + 0x20) !=
                                         0xad) ||
                             ((fVar51 <= fVar77 && ((int)unaff_x19[0x5c] != 0)))) {
                            if (*(short *)(lVar21 + (long)(int)uVar39 * 0x178 + 0x20) == 0xad) {
                              bVar10 = true;
                            }
                            else {
                              if ((bVar5 & *(byte *)(unaff_x19 + 0x47)) != 0) {
                                fVar58 = *(float *)((long)unaff_x19 + 0x2d4);
                                fVar59 = *(float *)(unaff_x19 + 0x5a) / 100.0;
                                if ((fVar59 <= fVar58) ||
                                   ((int)unaff_x19[0x49] <= *(int *)((long)unaff_x19 + 0x244))) {
                                  fVar58 = *(float *)((long)unaff_x19 + 0x1e4);
                                  uVar64 = (ulong)(uint)fVar58;
                                  fVar59 = *(float *)(unaff_x19 + 0x4a);
                                  if ((fVar59 < fVar58) &&
                                     (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49]))
                                  goto LAB_067dd340;
                                  goto LAB_067d8e34;
                                }
LAB_067dd3dc:
                                fVar55 = fVar52;
                                if (0.0 < fVar58) {
                                  fVar55 = fVar52 / (1.0 - fVar58);
                                }
                                fVar58 = fVar58 + (fVar52 - fVar74 * (fStack0000000000000100 +
                                                                     DAT_013a055c)) / fVar55;
LAB_067dd3cc:
                                if (fVar59 <= fVar58) {
                                  fVar58 = fVar59;
                                }
                                *(float *)((long)unaff_x19 + 0x2d4) = fVar58;
                                return;
                              }
LAB_067d8e34:
                              lVar21 = *(long *)
                                        Method_System_Collections_Generic_HashSet<OvrAvatarShaderNameUtils_KnownShader>_Add__
                              ;
                              if (*(int *)(lVar21 + 0xe0) == 0) {
                                thunk_FUN_032cd7c0();
                                lVar21 = *(long *)puVar11;
                              }
                              iVar17 = *(int *)(*(long *)(lVar21 + 0xb8) + 0xe78);
                              if (((iVar17 != uStack000000000000002c) && (iVar17 != -1)) &&
                                 (bVar5 == 1)) {
                                if (*(int *)(lVar21 + 0xe0) == 0) {
                                  thunk_FUN_032cd7c0();
                                }
                                uVar84 = FUN_06821f78();
                                if ((unaff_x19[0x6d] == 0) ||
                                   (lVar21 = *(long *)(unaff_x19[0x6d] + 0x38), lVar21 == 0))
                                goto LAB_067dd33c;
                                uVar39 = *puVar1 - 1;
                                if (*(uint *)(lVar21 + 0x18) <= uVar39) goto LAB_067dd448;
                                uStack000000000000002c = iVar17;
                                if (*(short *)(lVar21 + (long)(int)uVar39 * 0x178 + 0x20) == 0xad) {
                                  bVar10 = false;
                                  *puVar1 = uVar39;
                                  uVar84 = uVar84 - 1;
                                  in_stack_00001078 = CONCAT44(0x2d,uVar39);
                                  goto LAB_067d6d64;
                                }
                              }
                              if (fVar77 <= fVar51) {
switchD_067d8fe4_caseD_0:
                                uVar64 = uVar26;
                                FUN_068229f0(fVar49,uVar26,fVar55,
                                             *(undefined4 *)((long)unaff_x19 + 0x2fc),
                                             fStack00000000000000dc,fStack0000000000000134,
                                             fStack0000000000000100,fVar50);
                              }
                              else {
                                if (*(int *)((long)unaff_x19 + 0x2e4) == -1) {
                                  *(undefined4 *)((long)unaff_x19 + 0x2e4) =
                                       *(undefined4 *)((long)unaff_x19 + 0x494);
                                }
                                fVar59 = fVar51;
                                if ((char)unaff_x19[0x47] != '\0') {
                                  fVar59 = *(float *)(unaff_x19 + 0x59);
                                  if ((fVar59 < *(float *)((long)unaff_x19 + 700)) &&
                                     (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
                                    fVar55 = *(float *)((long)unaff_x19 + 700) +
                                             ((fVar71 - fVar77) / (float)((int)unaff_x19[0x95] + 1))
                                             / fVar49;
                                    if (fVar55 <= fVar59) {
                                      fVar55 = fVar59;
                                    }
LAB_067dac68:
                                    *(float *)((long)unaff_x19 + 700) = fVar55;
                                    return;
                                  }
                                  fVar58 = *(float *)((long)unaff_x19 + 0x2d4);
                                  fVar59 = *(float *)(unaff_x19 + 0x5a) / 100.0;
                                  if ((fVar58 < fVar59) &&
                                     (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49]))
                                  goto LAB_067dd3dc;
                                  fVar58 = *(float *)((long)unaff_x19 + 0x1e4);
                                  uVar64 = (ulong)(uint)fVar58;
                                  fVar59 = *(float *)(unaff_x19 + 0x4a);
                                  if ((fVar59 < fVar58) &&
                                     (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49]))
                                  goto LAB_067dd340;
                                }
                                switch((int)unaff_x19[0x5c]) {
                                case 0:
                                case 2:
                                case 4:
                                  goto switchD_067d8fe4_caseD_0;
                                case 1:
                                  lVar21 = *(long *)
                                            Method_System_Collections_Generic_HashSet<OvrAvatarShaderNameUtils_KnownShader>_Add__
                                  ;
                                  if (*(int *)(lVar21 + 0xe0) == 0) {
                                    thunk_FUN_032cd7c0();
                                    lVar21 = *(long *)
                                              Method_System_Collections_Generic_HashSet<OvrAvatarShaderNameUtils_KnownShader>_Add__
                                    ;
                                  }
                                  lVar34 = *(long *)(lVar21 + 0xb8);
                                  if (*(int *)(lVar34 + 0x1580) == 0) {
                                    bVar10 = false;
                                    goto LAB_067da678;
                                  }
                                  if (*(int *)(lVar21 + 0xe0) == 0) {
                                    thunk_FUN_032cd7c0();
                                    lVar34 = *(long *)(*(long *)
                                                  Method_System_Collections_Generic_HashSet<OvrAvatarShaderNameUtils_KnownShader>_Add__
                                                  + 0xb8);
                                  }
                                  FUN_04a0fee4(&stack0x00001090,lVar34 + 0x11f0,
                                               *(undefined8 *)
                                                Method_System_Collections_Generic_HashSet<OVRFaceExpressions_FaceExpression>__ctor__
                                              );
                                  memcpy(&stack0x000008b8,&stack0x00001090,0x378);
                                  iVar17 = FUN_06821f78();
                                  bVar10 = false;
                                  goto LAB_067d8b2c;
                                case 3:
                                  if (*(int *)(*(long *)
                                                Method_System_Collections_Generic_HashSet<OvrAvatarShaderNameUtils_KnownShader>_Add__
                                              + 0xe0) == 0) {
                                    thunk_FUN_032cd7c0();
                                  }
                                  uVar84 = FUN_06821f78();
                                  bVar10 = false;
                                  goto LAB_067d88ac;
                                case 5:
                                  *(undefined1 *)((long)unaff_x19 + 0x33c) = 1;
                                  uVar64 = uVar26;
                                  FUN_068229f0(fVar49,uVar26,fVar55,
                                               *(undefined4 *)((long)unaff_x19 + 0x2fc),
                                               fStack00000000000000dc,fStack0000000000000134,
                                               fStack0000000000000100,fVar50);
                                  *(undefined4 *)(unaff_x19 + 0x9a) = 0;
                                  *(undefined4 *)(unaff_x19 + 0x9b) = 0;
                                  *(undefined8 *)((long)unaff_x19 + 0x4b4) = 0;
                                  *(int *)(unaff_x19 + 0x96) = (int)unaff_x19[0x96] + 1;
                                  break;
                                case 6:
                                  lVar21 = unaff_x19[0x5d];
                                  if (*(int *)(*(long *)PTR_DAT_072794f0 + 0xe0) == 0) {
                                    thunk_FUN_032cd7c0();
                                  }
                                  uVar24 = FUN_06be9890(lVar21,0,0);
                                  if ((uVar24 & 1) != 0) {
                                    plVar46 = (long *)unaff_x19[0x5d];
                                    uVar27 = (**(code **)(*unaff_x19 + 0x548))();
                                    if (plVar46 == (long *)0x0) goto LAB_067dd33c;
                                    (**(code **)(*plVar46 + 0x558))
                                              (plVar46,uVar27,*(undefined8 *)(*plVar46 + 0x560));
                                    lVar21 = unaff_x19[0x5d];
                                    if (lVar21 == 0) goto LAB_067dd33c;
                                    *(int *)(lVar21 + 0x400) = (int)unaff_x19[0x80];
                                    FUN_06814d00(lVar21,*(undefined4 *)((long)unaff_x19 + 0x494),0);
                                    plVar46 = (long *)unaff_x19[0x5d];
                                    if (plVar46 == (long *)0x0) goto LAB_067dd33c;
                                    (**(code **)(*plVar46 + 0x7d8))
                                              (plVar46,0,0,*(undefined8 *)(*plVar46 + 0x7e0));
                                    *(undefined1 *)(unaff_x19 + 0x5f) = 1;
                                  }
                                  bVar10 = false;
                                  goto LAB_067d8c40;
                                default:
                                  bVar10 = false;
                                  goto LAB_067d9048;
                                }
                              }
                              bVar5 = 1;
                              bVar10 = false;
                              bVar9 = true;
                            }
                          }
                          else {
                            bVar10 = false;
                            *puVar1 = uVar7;
                            uVar84 = uVar84 - 1;
                            in_stack_00001078 = CONCAT44(0x2d,uVar7);
                          }
                        }
                        goto LAB_067d6d64;
                      }
LAB_067d9048:
                      if (uVar16 != 0xad) {
                        if (uVar16 == 9) {
                          lVar21 = *plVar2;
                          if ((lVar21 != 0) && (lVar34 = *(long *)(lVar21 + 0x38), lVar34 != 0)) {
                            uVar19 = *puVar1;
                            if (*(uint *)(lVar34 + 0x18) <= uVar19) goto LAB_067dd448;
                            *(undefined1 *)(lVar34 + (long)(int)uVar19 * 0x178 + 0x194) = 0;
                            *(uint *)((long)unaff_x19 + 0x4a4) = uVar19;
                            lVar34 = *(long *)(lVar21 + 0x50);
                            if (lVar34 != 0) {
                              if (*(uint *)(unaff_x19 + 0x95) < *(uint *)(lVar34 + 0x18)) {
                                lVar34 = lVar34 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
                                *(int *)(lVar34 + 0x2c) = *(int *)(lVar34 + 0x2c) + 1;
                                goto LAB_067d90b8;
                              }
                              goto LAB_067dd448;
                            }
                          }
                        }
                        else {
                          if (*(int *)((long)unaff_x19 + 0x644) == 1) {
                            (**(code **)(*unaff_x19 + 0x8c8))(fVar59,fVar80);
                          }
                          else if (*(int *)((long)unaff_x19 + 0x644) == 0) {
                            (**(code **)(*unaff_x19 + 0x8b8))(fStack000000000000016c);
                          }
                          if (bVar9) {
                            *(uint *)((long)unaff_x19 + 0x49c) = *puVar1;
                          }
                          *(uint *)((long)unaff_x19 + 0x4a4) = *puVar1;
                          *(int *)((long)unaff_x19 + 0x4ac) = *(int *)((long)unaff_x19 + 0x4ac) + 1;
                          if ((unaff_x19[0x6d] != 0) &&
                             (lVar21 = *(long *)(unaff_x19[0x6d] + 0x50), lVar21 != 0)) {
                            if (*(uint *)(unaff_x19 + 0x95) < *(uint *)(lVar21 + 0x18)) {
                              lVar21 = lVar21 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
                              bVar9 = false;
                              *(float *)(lVar21 + 0x60) = fVar72;
                              *(float *)(lVar21 + 100) = fVar79;
                              goto LAB_067d91a0;
                            }
                            goto LAB_067dd448;
                          }
                        }
                        goto LAB_067dd33c;
                      }
                      if ((*plVar2 == 0) || (lVar21 = *(long *)(*plVar2 + 0x38), lVar21 == 0))
                      goto LAB_067dd33c;
                      if (*(uint *)(lVar21 + 0x18) <= *puVar1) goto LAB_067dd448;
                      *(undefined1 *)(lVar21 + (long)(int)*puVar1 * 0x178 + 0x194) = 0;
                    }
                    else {
                      if (((uVar16 & 0xfffffffe) == 10) && ((int)unaff_x19[0x5c] == 6)) {
                        fVar52 = (float)uVar64;
                        fVar74 = 0.0;
                        if ((0.0 < fVar52) &&
                           (fVar74 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
                          fVar74 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
                        }
                        uVar64 = (ulong)(uint)fVar51;
                        if (fVar51 < (*(float *)(unaff_x19 + 0x97) -
                                     (*(float *)((long)unaff_x19 + 0x4cc) - fVar52)) + fVar74) {
                          if (*(int *)((long)unaff_x19 + 0x2e4) == -1) {
                            *(uint *)((long)unaff_x19 + 0x2e4) = uVar19;
                          }
                          if (*(int *)(*(long *)
                                        Method_System_Collections_Generic_HashSet<OvrAvatarShaderNameUtils_KnownShader>_Add__
                                      + 0xe0) == 0) {
                            thunk_FUN_032cd7c0();
                          }
                          uVar84 = FUN_06821f78();
                          lVar21 = unaff_x19[0x5d];
                          if (*(int *)(*(long *)PTR_DAT_072794f0 + 0xe0) == 0) {
                            thunk_FUN_032cd7c0(*(long *)PTR_DAT_072794f0);
                          }
                          uVar24 = FUN_06be9890(lVar21,0,0);
                          if ((uVar24 & 1) != 0) {
                            plVar46 = (long *)unaff_x19[0x5d];
                            uVar27 = (**(code **)(*unaff_x19 + 0x548))();
                            if (plVar46 != (long *)0x0) {
                              (**(code **)(*plVar46 + 0x558))
                                        (plVar46,uVar27,*(undefined8 *)(*plVar46 + 0x560));
                              lVar21 = unaff_x19[0x5d];
                              if (lVar21 != 0) {
                                *(int *)(lVar21 + 0x400) = (int)unaff_x19[0x80];
                                FUN_06814d00(lVar21,*(undefined4 *)((long)unaff_x19 + 0x494),0);
                                plVar46 = (long *)unaff_x19[0x5d];
                                if (plVar46 != (long *)0x0) {
                                  (**(code **)(*plVar46 + 0x7d8))
                                            (plVar46,0,0,*(undefined8 *)(*plVar46 + 0x7e0));
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
                      if ((((uVar16 - 0x2007 < 0x23) &&
                           ((1L << ((ulong)(uVar16 - 0x2007) & 0x3f) & 0x600000001U) != 0)) ||
                          (uVar16 - 10 < 2)) || (uVar16 == 0xa0)) {
LAB_067d8c8c:
                        if (((uVar16 != 0xad) && (uVar16 != 0x200b)) && (uVar16 != 0x2060)) {
                          lVar21 = *plVar2;
                          if ((lVar21 == 0) || (lVar34 = *(long *)(lVar21 + 0x50), lVar34 == 0))
                          goto LAB_067dd33c;
                          if (*(uint *)(lVar34 + 0x18) <= *(uint *)(unaff_x19 + 0x95))
                          goto LAB_067dd448;
                          lVar34 = lVar34 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
                          *(int *)(lVar34 + 0x2c) = *(int *)(lVar34 + 0x2c) + 1;
                          *(int *)(lVar21 + 0x20) = *(int *)(lVar21 + 0x20) + 1;
                        }
                      }
                      else {
                        if (*(int *)(*(long *)PTR_DAT_0727fa20 + 0xe0) == 0) {
                          thunk_FUN_032cd7c0();
                        }
                        uVar26 = FUN_058a5c00(uVar16,0);
                        if ((uVar26 & 1) != 0) goto LAB_067d8c8c;
                      }
                      if (uVar16 == 0xa0) {
                        if ((*plVar2 == 0) || (lVar21 = *(long *)(*plVar2 + 0x50), lVar21 == 0))
                        goto LAB_067dd33c;
                        if (*(uint *)(lVar21 + 0x18) <= *(uint *)(unaff_x19 + 0x95))
                        goto LAB_067dd448;
                        lVar21 = lVar21 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
LAB_067d90b8:
                        *(int *)(lVar21 + 0x20) = *(int *)(lVar21 + 0x20) + 1;
                      }
                    }
LAB_067d91a0:
                    if (((int)unaff_x19[0x5c] == 1) && ((uVar16 == 0x2d || (!bVar8)))) {
                      if (unaff_x19[0xcb] == 0) goto LAB_067dd33c;
                      fVar74 = *(float *)(unaff_x19 + 0x3d);
                      iVar17 = FUN_06c5195c(unaff_x19[0xcb] + 0x50,0);
                      if (unaff_x19[0xcb] == 0) goto LAB_067dd33c;
                      fVar72 = (float)FUN_06c5196c(unaff_x19[0xcb] + 0x50,0);
                      lVar21 = unaff_x19[0xca];
                      fVar52 = fVar66;
                      if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
                        fVar52 = 1.0;
                      }
                      if ((lVar21 == 0) || (*(long *)(lVar21 + 0x20) == 0)) goto LAB_067dd33c;
                      fVar59 = *(float *)((long)unaff_x19 + 0x404);
                      fVar58 = *(float *)(lVar21 + 0x2c);
                      fVar79 = (float)FUN_06c51eb4(*(long *)(lVar21 + 0x20),0);
                      fVar80 = *(float *)(unaff_x19 + 0x6a);
                      fVar79 = fVar59 * (fVar74 / (float)iVar17) * fVar72 * fVar52 * fVar58 * fVar79
                      ;
                      fVar74 = *(float *)((long)unaff_x19 + 0x354);
                      if ((uVar16 == 10) &&
                         (*(int *)((long)unaff_x19 + 0x494) != (int)unaff_x19[0x93])) {
                        if ((*plVar2 == 0) || (lVar21 = *(long *)(*plVar2 + 0x38), lVar21 == 0))
                        goto LAB_067dd33c;
                        uVar19 = *(int *)((long)unaff_x19 + 0x494) - 1;
                        if (*(uint *)(lVar21 + 0x18) <= uVar19) goto LAB_067dd448;
                        if (unaff_x19[0xcb] == 0) goto LAB_067dd33c;
                        fVar52 = *(float *)(lVar21 + (long)(int)uVar19 * 0x178 + 0x60);
                        iVar17 = FUN_06c5195c(unaff_x19[0xcb] + 0x50,0);
                        if (unaff_x19[0xcb] == 0) goto LAB_067dd33c;
                        fVar59 = (float)FUN_06c5196c(unaff_x19[0xcb] + 0x50,0);
                        lVar21 = unaff_x19[0xca];
                        fVar72 = fVar66;
                        if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
                          fVar72 = 1.0;
                        }
                        if ((lVar21 == 0) || (*(long *)(lVar21 + 0x20) == 0)) goto LAB_067dd33c;
                        fVar58 = *(float *)((long)unaff_x19 + 0x404);
                        fVar77 = *(float *)(lVar21 + 0x2c);
                        fVar79 = (float)FUN_06c51eb4(*(long *)(lVar21 + 0x20),0);
                        if ((*plVar2 == 0) || (lVar21 = *(long *)(*plVar2 + 0x50), lVar21 == 0))
                        goto LAB_067dd33c;
                        if (*(uint *)(lVar21 + 0x18) <= *(uint *)(unaff_x19 + 0x95))
                        goto LAB_067dd448;
                        lVar21 = lVar21 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
                        fVar80 = *(float *)(lVar21 + 0x60);
                        fVar74 = *(float *)(lVar21 + 100);
                        fVar79 = fVar58 * (fVar52 / (float)iVar17) * fVar59 * fVar72 * fVar77 *
                                 fVar79;
                      }
                      fVar59 = *(float *)(unaff_x19 + 0x9b);
                      fVar52 = 0.0;
                      fVar72 = 0.0;
                      if ((0.0 < fVar59) &&
                         (fVar72 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
                        fVar72 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
                      }
                      fVar77 = *(float *)(unaff_x19 + 0x97);
                      fVar76 = *(float *)((long)unaff_x19 + 0x4cc);
                      fVar58 = *(float *)(unaff_x19 + 200);
                      if ((char)unaff_x19[0x1e] == '\0') {
                        if ((unaff_x19[0xca] == 0) ||
                           (lVar21 = *(long *)(unaff_x19[0xca] + 0x20), lVar21 == 0))
                        goto LAB_067dd33c;
                        FUN_06c51e78(&stack0x00001090,lVar21,0);
                        fVar52 = (float)FUN_06c51cc0(&stack0x00000fb0,0);
                      }
                      puVar11 = 
                      Method_System_Collections_Generic_HashSet<OvrAvatarShaderNameUtils_KnownShader>_Add__
                      ;
                      fVar67 = *(float *)(unaff_x19 + 0x6c);
                      fVar74 = (fVar82 - fVar80) - fVar74;
                      bVar13 = true;
                      if ((fVar67 <= fVar74) && (bVar13 = false, !NAN(fVar67))) {
                        bVar13 = fVar67 == -1.0;
                      }
                      if (!bVar13) {
                        fVar74 = fVar67;
                      }
                      fVar80 = 1.0;
                      if ((uVar37 & 0x18) != 0) {
                        fVar80 = DAT_013a01c4;
                      }
                      if (((fVar77 - (fVar76 - fVar59)) + fVar72 < fVar51) &&
                         (ABS(fVar58) +
                          fVar79 * fVar52 * (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) <
                          fVar80 * fVar74)) {
                        if (*(int *)(*(long *)
                                      Method_System_Collections_Generic_HashSet<OvrAvatarShaderNameUtils_KnownShader>_Add__
                                    + 0xe0) == 0) {
                          thunk_FUN_032cd7c0();
                        }
                        FUN_0682230c();
                        lVar21 = *(long *)(*(long *)puVar11 + 0xb8);
                        uVar27 = *(undefined8 *)
                                  Method_System_Collections_Generic_HashSet<OVRFaceExpressions_FaceExpression>_Add__
                        ;
                        memcpy(&stack0x00001090,(void *)(lVar21 + 0x788),0x378);
                        FUN_04a0fdcc(lVar21 + 0x11f0,&stack0x00001090,uVar27);
                      }
                    }
                    lVar21 = *plVar2;
                    if (lVar21 == 0) goto LAB_067dd33c;
                    lVar34 = *(long *)(lVar21 + 0x38);
                    uVar26 = (ulong)(uint)fVar83;
                    if (lVar34 == 0) goto LAB_067dd33c;
                    if (*(uint *)(lVar34 + 0x18) <= *puVar1) goto LAB_067dd448;
                    uVar19 = *(uint *)(unaff_x19 + 0x95);
                    lVar34 = lVar34 + (long)(int)*puVar1 * 0x178;
                    *(uint *)(lVar34 + 100) = uVar19;
                    *(int *)(lVar34 + 0x68) = (int)unaff_x19[0x96];
                    if ((bVar8) ||
                       ((uVar16 < 0xe && ((1 << (ulong)(uVar16 & 0x1f) & 0x2c00U) != 0)))) {
                      lVar21 = *(long *)(lVar21 + 0x50);
                      if (lVar21 == 0) goto LAB_067dd33c;
                      if (*(uint *)(lVar21 + 0x18) <= uVar19) goto LAB_067dd448;
                      if (*(int *)(lVar21 + (long)(int)uVar19 * 0x5c + 0x24) == 1)
                      goto LAB_067d9558;
                    }
                    else {
                      lVar21 = *(long *)(lVar21 + 0x50);
                      if (lVar21 == 0) goto LAB_067dd33c;
LAB_067d9558:
                      if (*(uint *)(lVar21 + 0x18) <= uVar19) goto LAB_067dd448;
                      *(int *)(lVar21 + (long)(int)uVar19 * 0x5c + 0x68) = (int)unaff_x19[0x4f];
                    }
                    if (uVar16 == 9) {
                      if (*unaff_x21 == 0) goto LAB_067dd33c;
                      fVar74 = (float)FUN_06c51a54(*unaff_x21 + 0x50,0);
                      if (*unaff_x21 == 0) goto LAB_067dd33c;
                      fVar56 = *(float *)(unaff_x19 + 200);
                      fVar52 = (float)NEON_ucvtf((uint)*(byte *)(*unaff_x21 + 0x1b9));
                      fVar74 = fVar83 * fVar74 * fVar52;
                      fVar52 = fVar74 * (float)(int)(fVar56 / fVar74);
                      uVar64 = (ulong)(uint)fVar52;
                      if (fVar52 <= fVar56) {
                        fVar52 = fVar56 + fVar74;
                      }
LAB_067d9778:
                      *(float *)(unaff_x19 + 200) = fVar52;
                    }
                    else if (*(float *)(unaff_x19 + 0x56) == 0.0) {
                      if ((char)unaff_x19[0x1e] == '\0') {
                        if (*(char *)((long)unaff_x19 + 0x474) == '\0') {
                          fVar72 = 1.0;
                        }
                        else {
                          fVar72 = (float)thunk_FUN_06bda068(lVar22,0);
                        }
                        fVar52 = *(float *)(unaff_x19 + 200);
                        fVar79 = (float)FUN_06c51cc0(&stack0x00001040,0);
                        if (unaff_x19[0x20] != 0) {
                          fVar74 = 1.0 - *(float *)((long)unaff_x19 + 0x2d4);
                          fVar52 = fVar52 + fVar74 * (*(float *)((long)unaff_x19 + 0x2ac) +
                                                     fVar83 * (fVar56 + fVar72 * fVar79) +
                                                     fVar55 * (fStack00000000000000dc +
                                                              fStack0000000000000134 +
                                                              *(float *)(unaff_x19[0x20] + 0x1ac)));
                          *(float *)(unaff_x19 + 200) = fVar52;
                          goto joined_r0x067d96c0;
                        }
                        goto LAB_067dd33c;
                      }
                      if (*unaff_x21 == 0) goto LAB_067dd33c;
                      fVar52 = (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                               (*(float *)((long)unaff_x19 + 0x2ac) +
                               fVar83 * fVar56 +
                               fVar55 * (fStack00000000000000dc +
                                        fStack0000000000000134 + *(float *)(*unaff_x21 + 0x1ac)));
                      uVar64 = (ulong)(uint)fVar52;
                      fVar52 = *(float *)(unaff_x19 + 200) - fVar52;
                      *(float *)(unaff_x19 + 200) = fVar52;
                      if ((uVar16 == 0x200b) || (uVar18 != 0)) {
                        fVar74 = fVar55 * *(float *)((long)unaff_x19 + 0x2b4);
                        uVar64 = (ulong)(uint)fVar74;
                        fVar52 = fVar52 - fVar74;
                        goto LAB_067d9778;
                      }
                    }
                    else {
                      if (*unaff_x21 == 0) goto LAB_067dd33c;
                      fVar74 = *(float *)(unaff_x19 + 200);
                      fVar52 = fVar74 + (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                                        (*(float *)((long)unaff_x19 + 0x2ac) +
                                        (*(float *)(unaff_x19 + 0x56) - fVar57) +
                                        fVar55 * (fStack0000000000000134 +
                                                 *(float *)(*unaff_x21 + 0x1ac)));
                      *(float *)(unaff_x19 + 200) = fVar52;
joined_r0x067d96c0:
                      if ((uVar16 == 0x200b) || (uVar64 = (ulong)(uint)fVar74, uVar18 != 0)) {
                        fVar74 = fVar55 * *(float *)((long)unaff_x19 + 0x2b4);
                        uVar64 = (ulong)(uint)fVar74;
                        fVar52 = fVar52 + fVar74;
                        goto LAB_067d9778;
                      }
                    }
                    lVar21 = *plVar2;
                    if ((lVar21 == 0) || (lVar34 = *(long *)(lVar21 + 0x38), lVar34 == 0))
                    goto LAB_067dd33c;
                    uVar19 = *puVar1;
                    uVar37 = (uint)*(undefined8 *)(lVar34 + 0x18);
                    if (uVar37 <= uVar19) goto LAB_067dd448;
                    *(float *)(lVar34 + (long)(int)uVar19 * 0x178 + 0x144) = fVar52;
                    uVar39 = uVar16;
                    if ((int)uVar16 < 0xd) {
                      if ((uVar16 - 10 < 2) || (uVar16 == 3)) goto LAB_067d97d8;
LAB_067d9e88:
                      if (((bool)(bVar8 & uVar16 == 0x2d)) || (uVar19 == uVar33)) goto LAB_067d97d8;
                    }
                    else {
                      if (1 < uVar16 - 0x2028) {
                        if (uVar16 != 0xd) goto LAB_067d9e88;
                        uVar64 = 0;
                        *(float *)(unaff_x19 + 200) = *(float *)((long)unaff_x19 + 0x40c) + 0.0;
                        if (uVar19 != uVar33) goto LAB_067d9ea4;
                      }
LAB_067d97d8:
                      if (0.0 < *(float *)(unaff_x19 + 0x9b)) {
                        fVar74 = *(float *)(unaff_x19 + 0x99);
                        fVar52 = *(float *)(unaff_x19 + 0x9a);
                        if (*(int *)(*(long *)PTR_DAT_07279c00 + 0xe0) == 0) {
                          thunk_FUN_032cd7c0();
                        }
                        fVar74 = fVar74 - fVar52;
                        if (((fVar75 < ABS(fVar74)) && (*(char *)((long)unaff_x19 + 0x2c4) == '\0'))
                           && (*(char *)((long)unaff_x19 + 0x33c) == '\0')) {
                          FUN_0682267c(fVar74);
                          *(float *)((long)unaff_x19 + 0x4c4) =
                               *(float *)((long)unaff_x19 + 0x4c4) - fVar74;
                          *(float *)(unaff_x19 + 0x9b) = fVar74 + *(float *)(unaff_x19 + 0x9b);
                          puVar11 = 
                          Method_System_Collections_Generic_HashSet<OvrAvatarShaderNameUtils_KnownShader>_Add__
                          ;
                          lVar21 = *(long *)
                                    Method_System_Collections_Generic_HashSet<OvrAvatarShaderNameUtils_KnownShader>_Add__
                          ;
                          if (*(int *)(lVar21 + 0xe0) == 0) {
                            thunk_FUN_032cd7c0();
                            lVar21 = *(long *)puVar11;
                          }
                          lVar34 = *(long *)(lVar21 + 0xb8);
                          if (*(int *)(lVar34 + 0x7ac) == (int)unaff_x19[0x95]) {
                            if (*(int *)(lVar21 + 0xe0) == 0) {
                              thunk_FUN_032cd7c0();
                              lVar34 = *(long *)(*(long *)
                                                  Method_System_Collections_Generic_HashSet<OvrAvatarShaderNameUtils_KnownShader>_Add__
                                                + 0xb8);
                            }
                            FUN_04a0fee4(&stack0x00001090,lVar34 + 0x11f0,
                                         *(undefined8 *)
                                          Method_System_Collections_Generic_HashSet<OVRFaceExpressions_FaceExpression>__ctor__
                                        );
                            memcpy(&stack0x000001c0,&stack0x00001090,0x378);
                            puVar11 = 
                            Method_System_Collections_Generic_HashSet<OvrAvatarShaderNameUtils_KnownShader>_Add__
                            ;
                            lVar21 = *(long *)
                                      Method_System_Collections_Generic_HashSet<OvrAvatarShaderNameUtils_KnownShader>_Add__
                            ;
                            memcpy((void *)(*(long *)(lVar21 + 0xb8) + 0x788),&stack0x000001c0,0x378
                                  );
                            thunk_FUN_0333a630(*(long *)(lVar21 + 0xb8) + 0x818,0);
                            lVar21 = *(long *)(*(long *)puVar11 + 0xb8);
                            *(float *)(lVar21 + 0x7bc) = fVar74 + *(float *)(lVar21 + 0x7bc);
                            *(float *)(lVar21 + 0x800) = fVar74 + *(float *)(lVar21 + 0x800);
                            uVar27 = *(undefined8 *)
                                      Method_System_Collections_Generic_HashSet<OVRFaceExpressions_FaceExpression>_Add__
                            ;
                            memcpy(&stack0x00001090,(void *)(lVar21 + 0x788),0x378);
                            FUN_04a0fdcc(lVar21 + 0x11f0,&stack0x00001090,uVar27);
                          }
                        }
                      }
                      fVar56 = *(float *)(unaff_x19 + 0x9b);
                      *(undefined1 *)((long)unaff_x19 + 0x33c) = 0;
                      fVar52 = *(float *)((long)unaff_x19 + 0x4cc) - fVar56;
                      fVar74 = *(float *)((long)unaff_x19 + 0x4c4);
                      if (fVar52 <= *(float *)((long)unaff_x19 + 0x4c4)) {
                        fVar74 = fVar52;
                      }
                      *(float *)((long)unaff_x19 + 0x4c4) = fVar74;
                      fVar72 = *(float *)(unaff_x19 + 0x99);
                      if (!bVar14) {
                        fVar85 = fVar74;
                      }
                      if ((*(char *)((long)unaff_x19 + 0x334) != '\0') &&
                         (((int)unaff_x19[0x65] <= *(int *)((long)unaff_x19 + 0x494) ||
                          ((int)unaff_x19[0x66] <= (int)unaff_x19[0x95])))) {
                        bVar14 = true;
                      }
                      lVar21 = *plVar2;
                      if ((lVar21 == 0) || (lVar34 = *(long *)(lVar21 + 0x50), lVar34 == 0))
                      goto LAB_067dd33c;
                      uVar19 = *(uint *)(unaff_x19 + 0x95);
                      if (*(uint *)(lVar34 + 0x18) <= uVar19) goto LAB_067dd448;
                      lVar48 = unaff_x19[0x93];
                      lVar25 = lVar34 + (long)(int)uVar19 * 0x5c;
                      *(int *)(lVar25 + 0x34) = (int)lVar48;
                      uVar37 = *(uint *)(unaff_x19 + 0x93);
                      if ((int)lVar48 <= (int)*(uint *)((long)unaff_x19 + 0x49c)) {
                        uVar37 = *(uint *)((long)unaff_x19 + 0x49c);
                      }
                      *(uint *)((long)unaff_x19 + 0x49c) = uVar37;
                      *(uint *)(lVar25 + 0x38) = uVar37;
                      *(undefined4 *)(unaff_x19 + 0x94) = *(undefined4 *)((long)unaff_x19 + 0x494);
                      *(undefined4 *)(lVar25 + 0x3c) = *(undefined4 *)((long)unaff_x19 + 0x494);
                      iVar17 = *(int *)((long)unaff_x19 + 0x49c);
                      if ((int)uVar37 <= *(int *)((long)unaff_x19 + 0x4a4)) {
                        iVar17 = *(int *)((long)unaff_x19 + 0x4a4);
                      }
                      *(int *)((long)unaff_x19 + 0x4a4) = iVar17;
                      *(int *)(lVar25 + 0x40) = iVar17;
                      *(int *)(lVar25 + 0x24) =
                           (*(int *)(lVar25 + 0x3c) - *(int *)(lVar25 + 0x34)) + 1;
                      *(undefined4 *)(lVar25 + 0x28) = *(undefined4 *)((long)unaff_x19 + 0x4ac);
                      lVar21 = *(long *)(lVar21 + 0x38);
                      if (lVar21 == 0) goto LAB_067dd33c;
                      if (*(uint *)(lVar21 + 0x18) <= uVar37) goto LAB_067dd448;
                      uVar15 = *(undefined4 *)(lVar21 + (long)(int)uVar37 * 0x178 + 0x11c);
                      lVar34 = lVar34 + (long)(int)uVar19 * 0x5c;
                      *(float *)(lVar34 + 0x70) = fVar52;
                      *(undefined4 *)(lVar34 + 0x6c) = uVar15;
                      lVar21 = *plVar2;
                      if ((lVar21 == 0) || (lVar34 = *(long *)(lVar21 + 0x50), lVar34 == 0))
                      goto LAB_067dd33c;
                      if (*(uint *)(lVar34 + 0x18) <= *(uint *)(unaff_x19 + 0x95))
                      goto LAB_067dd448;
                      lVar21 = *(long *)(lVar21 + 0x38);
                      if (lVar21 == 0) goto LAB_067dd33c;
                      if (*(uint *)(lVar21 + 0x18) <= *(uint *)((long)unaff_x19 + 0x4a4))
                      goto LAB_067dd448;
                      fVar72 = fVar72 - fVar56;
                      uVar64 = (ulong)(uint)fVar72;
                      lVar34 = lVar34 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
                      *(undefined4 *)(lVar34 + 0x74) =
                           *(undefined4 *)
                            (lVar21 + (long)(int)*(uint *)((long)unaff_x19 + 0x4a4) * 0x178 + 0x128)
                      ;
                      *(float *)(lVar34 + 0x78) = fVar72;
                      lVar21 = *plVar2;
                      if ((lVar21 == 0) || (lVar48 = *(long *)(lVar21 + 0x50), lVar48 == 0))
                      goto LAB_067dd33c;
                      lVar25 = (long)(int)*(uint *)(unaff_x19 + 0x95);
                      if (*(uint *)(lVar48 + 0x18) <= *(uint *)(unaff_x19 + 0x95))
                      goto LAB_067dd448;
                      lVar34 = lVar48 + lVar25 * 0x5c;
                      *(float *)(lVar34 + 0x44) =
                           *(float *)(lVar34 + 0x74) - fVar83 * fStack000000000000016c;
                      *(float *)(lVar34 + 0x5c) = fStack0000000000000100;
                      if (*(int *)(lVar34 + 0x24) == 1) {
                        *(int *)(lVar48 + lVar25 * 0x5c + 0x68) = (int)unaff_x19[0x4f];
                      }
                      if ((*unaff_x21 == 0) || (lVar34 = *(long *)(lVar21 + 0x38), lVar34 == 0))
                      goto LAB_067dd33c;
                      lVar41 = (long)(int)*(uint *)((long)unaff_x19 + 0x4a4);
                      uVar37 = (uint)*(undefined8 *)(lVar34 + 0x18);
                      if (uVar37 <= *(uint *)((long)unaff_x19 + 0x4a4)) goto LAB_067dd448;
                      if ((*(char *)(lVar34 + lVar41 * 0x178 + 0x194) == '\0') &&
                         (lVar41 = (long)(int)*(uint *)(unaff_x19 + 0x94),
                         uVar37 <= *(uint *)(unaff_x19 + 0x94))) goto LAB_067dd448;
                      lVar48 = lVar48 + lVar25 * 0x5c;
                      fVar83 = (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                               (fVar55 * (fStack00000000000000dc +
                                         fStack0000000000000134 + *(float *)(*unaff_x21 + 0x1ac)) -
                               *(float *)((long)unaff_x19 + 0x2ac));
                      fVar74 = -fVar83;
                      if ((char)unaff_x19[0x1e] != '\0') {
                        fVar74 = fVar83;
                      }
                      *(float *)(lVar48 + 0x58) =
                           *(float *)(lVar34 + lVar41 * 0x178 + 0x144) + fVar74;
                      *(float *)(lVar48 + 0x50) = 0.0 - *(float *)(unaff_x19 + 0x9b);
                      *(float *)(lVar48 + 0x54) = fVar52;
                      *(float *)(lVar48 + 0x48) = fVar49 * fVar50 + (fVar72 - fVar52);
                      *(float *)(lVar48 + 0x4c) = fVar72;
                      if ((int)uVar16 < 0x2d) {
                        if (uVar16 - 10 < 2) {
LAB_067d9c4c:
                          if (*(int *)(*(long *)
                                        Method_System_Collections_Generic_HashSet<OvrAvatarShaderNameUtils_KnownShader>_Add__
                                      + 0xe0) == 0) {
                            thunk_FUN_032cd7c0();
                          }
                          FUN_0682230c();
                          lVar21 = unaff_x19[0x6d];
                          *(undefined4 *)((long)unaff_x19 + 0x4ac) = 0;
                          iVar17 = (int)unaff_x19[0x95] + 1;
                          *(int *)(unaff_x19 + 0x95) = iVar17;
                          *(int *)(unaff_x19 + 0x93) = *(int *)((long)unaff_x19 + 0x494) + 1;
                          if ((lVar21 != 0) && (*(long *)(lVar21 + 0x50) != 0)) {
                            if (*(int *)(*(long *)(lVar21 + 0x50) + 0x18) <= iVar17) {
                              FUN_06822834();
                              lVar21 = unaff_x19[0x6d];
                              if (lVar21 == 0) goto LAB_067dd33c;
                            }
                            lVar21 = *(long *)(lVar21 + 0x38);
                            if (lVar21 != 0) {
                              if (*puVar1 < *(uint *)(lVar21 + 0x18)) {
                                fVar74 = *(float *)(lVar21 + (long)(int)*puVar1 * 0x178 + 0x154);
                                if (*(float *)(unaff_x19 + 0x58) == DAT_013a0308) {
                                  if ((uVar16 == 0x2029) || (fVar52 = 0.0, uVar16 == 10)) {
                                    fVar52 = *(float *)((long)unaff_x19 + 0x2cc);
                                  }
                                  uVar28 = 0;
                                  fVar52 = fVar74 + (0.0 - *(float *)((long)unaff_x19 + 0x4cc)) +
                                           fVar49 * (fVar50 + *(float *)((long)unaff_x19 + 700)) +
                                           fVar55 * (*(float *)(unaff_x19 + 0x57) + fVar52) +
                                           *(float *)(unaff_x19 + 0x9b);
                                }
                                else {
                                  if ((uVar16 == 0x2029) || (fVar52 = 0.0, uVar16 == 10)) {
                                    fVar52 = *(float *)((long)unaff_x19 + 0x2cc);
                                  }
                                  uVar28 = 1;
                                  fVar52 = *(float *)(unaff_x19 + 0x9b) +
                                           *(float *)(unaff_x19 + 0x58) +
                                           fVar55 * (*(float *)(unaff_x19 + 0x57) + fVar52);
                                }
                                *(float *)(unaff_x19 + 0x9b) = fVar52;
                                *(undefined1 *)((long)unaff_x19 + 0x2c4) = uVar28;
                                puVar11 = 
                                Method_System_Collections_Generic_HashSet<OvrAvatarShaderNameUtils_KnownShader>_Add__
                                ;
                                lVar21 = *(long *)
                                          Method_System_Collections_Generic_HashSet<OvrAvatarShaderNameUtils_KnownShader>_Add__
                                ;
                                if (*(int *)(lVar21 + 0xe0) == 0) {
                                  thunk_FUN_032cd7c0();
                                  lVar21 = *(long *)puVar11;
                                }
                                uVar27 = *(undefined8 *)(*(long *)(lVar21 + 0xb8) + 0x15a8);
                                *(float *)(unaff_x19 + 0x9a) = fVar74;
                                uVar64 = NEON_rev64(uVar27,4);
                                unaff_x19[0x99] = uVar64;
                                *(float *)(unaff_x19 + 200) =
                                     *(float *)(unaff_x19 + 0x81) + 0.0 +
                                     *(float *)((long)unaff_x19 + 0x40c);
                                FUN_0682230c();
                                FUN_0682230c();
                                *(int *)((long)unaff_x19 + 0x494) =
                                     *(int *)((long)unaff_x19 + 0x494) + 1;
                                bVar9 = true;
                                bVar5 = 1;
                                goto LAB_067d6d64;
                              }
                              goto LAB_067dd448;
                            }
                          }
                          goto LAB_067dd33c;
                        }
                        if (uVar16 == 3) {
                          if (unaff_x19[0x8f] == 0) goto LAB_067dd33c;
                          uVar84 = (uint)*(undefined8 *)(unaff_x19[0x8f] + 0x18);
                          uVar39 = 3;
                        }
                      }
                      else if ((uVar16 - 0x2028 < 2) || (uVar16 == 0x2d)) goto LAB_067d9c4c;
                    }
LAB_067d9ea4:
                    uVar19 = *puVar1;
                    if (uVar37 <= uVar19) goto LAB_067dd448;
                    if (*(char *)(lVar34 + (long)(int)uVar19 * 0x178 + 0x194) != '\0') {
                      lVar34 = lVar34 + (long)(int)uVar19 * 0x178;
                      uVar24 = *(ulong *)(lVar34 + 0x11c);
                      uVar64 = *(ulong *)((long)unaff_x19 + 0x4dc);
                      *(ulong *)((long)unaff_x19 + 0x4dc) =
                           uVar64 ^ (uVar64 ^ uVar24) &
                                    ~CONCAT44(-(uint)((float)(uVar64 >> 0x20) <
                                                     (float)(uVar24 >> 0x20)),
                                              -(uint)((float)uVar64 < (float)uVar24));
                      uVar24 = *(ulong *)((long)unaff_x19 + 0x4e4);
                      uVar64 = *(ulong *)(lVar34 + 0x128);
                      *(ulong *)((long)unaff_x19 + 0x4e4) =
                           uVar24 ^ (uVar24 ^ uVar64) &
                                    ~CONCAT44(-(uint)((float)(uVar64 >> 0x20) <
                                                     (float)(uVar24 >> 0x20)),
                                              -(uint)((float)uVar64 < (float)uVar24));
                    }
                    if (((int)unaff_x19[0x5c] == 5) &&
                       ((0xd < uVar39 || ((1 << (ulong)(uVar39 & 0x1f) & 0x2c00U) == 0)))) {
                      lVar34 = *(long *)(lVar21 + 0x58);
                      if (lVar34 == 0) goto LAB_067dd33c;
                      iVar17 = (int)unaff_x19[0x96] + 1;
                      if (*(int *)(lVar34 + 0x18) < iVar17) {
                        if (*(int *)(*(long *)
                                      Method_System_Collections_Generic_HashSet<CAPI_ovrAvatar2NodeId>_Add__
                                    + 0xe0) == 0) {
                          thunk_FUN_032cd7c0();
                        }
                        FUN_03b4f0a0((long *)(lVar21 + 0x58),iVar17,1,
                                     *(undefined8 *)
                                      Method_System_Collections_Generic_HashSet<CAPI_ovrAvatar2JointType>_get_Count__
                                    );
                        lVar21 = *plVar2;
                        if (lVar21 == 0) goto LAB_067dd33c;
                      }
                      lVar34 = *(long *)(lVar21 + 0x58);
                      if (lVar34 == 0) goto LAB_067dd33c;
                      uVar37 = *(uint *)(unaff_x19 + 0x96);
                      lVar48 = (long)(int)uVar37;
                      uVar19 = *(uint *)(lVar34 + 0x18);
                      if (uVar19 <= uVar37) goto LAB_067dd448;
                      lVar25 = lVar34 + lVar48 * 0x14;
                      fVar52 = *(float *)(lVar25 + 0x30);
                      uVar64 = (ulong)(uint)fVar52;
                      *(undefined4 *)(lVar25 + 0x28) = *(undefined4 *)((long)unaff_x19 + 0x4b4);
                      fVar74 = *(float *)((long)unaff_x19 + 0x4c4);
                      if (fVar52 <= *(float *)((long)unaff_x19 + 0x4c4)) {
                        fVar74 = fVar52;
                      }
                      *(float *)(lVar25 + 0x30) = fVar74;
                      uVar39 = *(uint *)((long)unaff_x19 + 0x494);
                      if (uVar39 == 0 && uVar37 == 0) {
                        *(uint *)(lVar34 + (ulong)uVar37 * 0x14 + 0x20) = uVar39;
                      }
                      else {
                        uVar7 = uVar39 - 1;
                        if (0 < (int)uVar39) {
                          lVar21 = *(long *)(lVar21 + 0x38);
                          if (lVar21 == 0) goto LAB_067dd33c;
                          if (*(uint *)(lVar21 + 0x18) <= uVar7) goto LAB_067dd448;
                          if (uVar37 != *(uint *)(lVar21 + (ulong)uVar7 * 0x178 + 0x68)) {
                            if (uVar37 - 1 < uVar19) {
                              *(uint *)(lVar34 + 0x20 + (long)(int)(uVar37 - 1) * 0x14 + 4) = uVar7;
                              *(uint *)(lVar34 + 0x20 + lVar48 * 0x14) = uVar39;
                              goto LAB_067d9f20;
                            }
                            goto LAB_067dd448;
                          }
                        }
                        if (uVar39 == uVar33) {
                          *(uint *)(lVar34 + lVar48 * 0x14 + 0x24) = uVar33;
                        }
                      }
                    }
LAB_067d9f20:
                    puVar11 = 
                    Method_System_Collections_Generic_HashSet<OvrAvatarShaderNameUtils_KnownShader>_Add__
                    ;
                    if (((char)unaff_x19[0x5b] == '\0') &&
                       ((6 < *(uint *)(unaff_x19 + 0x5c) ||
                        ((1 << (ulong)(*(uint *)(unaff_x19 + 0x5c) & 0x1f) & 0x4aU) == 0))))
                    goto LAB_067da420;
                    if ((uVar18 == 0) &&
                       (((uVar16 != 0x2d && (uVar16 != 0x200b)) && (uVar16 != 0xad)))) {
                      if (*(char *)((long)unaff_x19 + 0x2da) == '\0') {
LAB_067da01c:
                        if (((((0x2bfd < uVar16 - 0xac01) && (0xfd < uVar16 - 0x1101)) &&
                             (0x1d < uVar16 - 0xa961)) ||
                            (uVar24 = FUN_06830d40(0), (uVar24 & 1) != 0)) &&
                           ((((0xed < uVar16 - 0xff01 && (0x1d < uVar16 - 0xfe31)) &&
                             (0x717d < uVar16 - 0x2e81)) && (0x1fd < uVar16 - 0xf901))))
                        goto LAB_067da0a4;
                        lVar21 = FUN_06830bd4(0);
                        if ((lVar21 == 0) || (*(long *)(lVar21 + 0x10) == 0)) goto LAB_067dd33c;
                        uVar19 = FUN_0502cedc(*(long *)(lVar21 + 0x10),uVar16,
                                              *(undefined8 *)
                                               Method_System_Collections_Generic_HashSet<CAPI_ovrAvatar2JointType>__ctor__
                                             );
                        if ((int)uVar33 <= (int)*puVar1) {
                          if ((uVar19 & 1) == 0) {
LAB_067da398:
                            if (*(int *)(*(long *)
                                          Method_System_Collections_Generic_HashSet<OvrAvatarShaderNameUtils_KnownShader>_Add__
                                        + 0xe0) == 0) {
                              thunk_FUN_032cd7c0();
                            }
                            FUN_0682230c();
                            bVar5 = 0;
                            goto LAB_067da420;
                          }
LAB_067da2fc:
                          if (uVar44 != uVar30 || ((bVar5 ^ 0xff) & 1) != 0) goto LAB_067da420;
                          if (uVar18 != 0) goto LAB_067da318;
                          goto LAB_067da350;
                        }
                        lVar21 = FUN_06830bd4(0);
                        if (((lVar21 == 0) || (*plVar2 == 0)) ||
                           (lVar34 = *(long *)(*plVar2 + 0x38), lVar34 == 0)) goto LAB_067dd33c;
                        if (*(uint *)(lVar34 + 0x18) <= *puVar1 + 1) goto LAB_067dd448;
                        if (*(long *)(lVar21 + 0x18) == 0) goto LAB_067dd33c;
                        uVar24 = FUN_0502cedc(*(long *)(lVar21 + 0x18),
                                              *(undefined2 *)
                                               (lVar34 + (long)(int)(*puVar1 + 1) * 0x178 + 0x20),
                                              *(undefined8 *)
                                               Method_System_Collections_Generic_HashSet<CAPI_ovrAvatar2JointType>__ctor__
                                             );
                        if ((uVar19 & 1) != 0) goto LAB_067da2fc;
                        if ((uVar24 & 1) == 0) goto LAB_067da398;
                        if (bVar5 == 0) goto LAB_067da418;
                        if (uVar18 != 0) {
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
                        if (bVar5 == 0) goto LAB_067da418;
LAB_067da0b0:
                        if (!bVar10 && uVar16 == 0xad) goto LAB_067da318;
LAB_067da350:
                        if (*(int *)(*(long *)
                                      Method_System_Collections_Generic_HashSet<OvrAvatarShaderNameUtils_KnownShader>_Add__
                                    + 0xe0) == 0) {
                          thunk_FUN_032cd7c0();
                        }
                        FUN_0682230c();
                      }
                      bVar5 = 1;
                    }
                    else if (*(char *)((long)unaff_x19 + 0x2da) == '\x01') {
LAB_067da0a4:
                      if (bVar5 != 0) {
                        if (uVar18 == 0) goto LAB_067da0b0;
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
                      bVar5 = 0;
                    }
                    else {
                      if (((uVar16 - 0x2007 < 0x29) &&
                          ((1L << ((ulong)(uVar16 - 0x2007) & 0x3f) & 0x10000000401U) != 0)) ||
                         ((uVar16 == 0xa0 || (uVar16 == 0x2060)))) goto LAB_067da01c;
                      if (*(int *)(*(long *)
                                    Method_System_Collections_Generic_HashSet<OvrAvatarShaderNameUtils_KnownShader>_Add__
                                  + 0xe0) == 0) {
                        thunk_FUN_032cd7c0();
                      }
                      FUN_0682230c();
                      bVar5 = 0;
                      *(undefined4 *)(*(long *)(*(long *)puVar11 + 0xb8) + 0xe78) = 0xffffffff;
                    }
LAB_067da420:
                    if (*(int *)(*(long *)
                                  Method_System_Collections_Generic_HashSet<OvrAvatarShaderNameUtils_KnownShader>_Add__
                                + 0xe0) == 0) {
                      thunk_FUN_032cd7c0();
                    }
                    FUN_0682230c();
                    *(int *)((long)unaff_x19 + 0x494) = *(int *)((long)unaff_x19 + 0x494) + 1;
                  }
                }
                else {
                  *(undefined1 *)((long)unaff_x19 + 0x431) = 1;
                  *(undefined4 *)((long)unaff_x19 + 0x644) = 0;
                  uVar24 = FUN_0681c370();
                  if (((uVar24 & 1) == 0) ||
                     (uVar84 = in_stack_0000103c, *(int *)((long)unaff_x19 + 0x644) != 0))
                  goto LAB_067d6b88;
                }
LAB_067d6d64:
                uVar84 = uVar84 + 1;
                lVar21 = unaff_x19[0x8f];
                uVar18 = uVar16;
                if (lVar21 == 0) goto LAB_067dd33c;
                goto LAB_067d6a30;
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
LAB_067daf08:
  uVar84 = uVar18 - 1;
  if (*(uint *)(lVar21 + 0x18) <= uVar84) goto LAB_067dd448;
  if ((*plVar2 == 0) || (lVar34 = *(long *)(*plVar2 + 0x50), lVar34 == 0)) goto LAB_067dd33c;
  lVar25 = (long)(int)uVar84;
  lVar48 = lVar21 + lVar25 * 0x178;
  uVar16 = *(uint *)(lVar48 + 100);
  if (*(uint *)(lVar34 + 0x18) <= uVar16) goto LAB_067dd448;
  lVar41 = *(long *)(lVar48 + 0x38);
  lVar43 = (long)(int)uVar16;
  lVar34 = lVar34 + lVar43 * 0x5c;
  uVar44 = *(uint *)(lVar34 + 0x68);
  uVar37 = (uint)*(ushort *)(lVar48 + 0x20);
  uVar30 = *(uint *)(lVar34 + 0x3c);
  iVar4 = *(int *)(lVar34 + 0x20);
  iVar17 = *(int *)(lVar34 + 0x28);
  iVar20 = *(int *)(lVar34 + 0x2c);
  fVar82 = *(float *)(lVar34 + 0x4c);
  uVar19 = *(uint *)(lVar34 + 0x40);
  fVar69 = *(float *)(lVar34 + 0x54);
  fVar54 = *(float *)(lVar34 + 0x58);
  fVar85 = *(float *)(lVar34 + 0x5c);
  fVar83 = *(float *)(lVar34 + 0x60);
  fVar75 = *(float *)(lVar34 + 0x6c);
  fVar56 = *(float *)(lVar34 + 0x70);
  fVar65 = *(float *)(lVar34 + 0x74);
  fVar71 = *(float *)(lVar34 + 0x78);
  if ((int)uVar44 < 9) {
    switch(uVar44) {
    case 1:
      if ((char)unaff_x19[0x1e] == '\0') {
        fStack00000000000000fc = fVar83 + 0.0;
      }
      else {
        fStack00000000000000fc = 0.0 - fVar54;
      }
      break;
    case 2:
LAB_067db0b0:
      fStack00000000000000fc = (fVar83 + fVar85 * 0.5) - fVar54 * 0.5;
      break;
    default:
      goto switchD_067dafec_caseD_3;
    case 4:
      fStack00000000000000fc = (fVar85 + fVar83) - fVar54;
      if ((char)unaff_x19[0x1e] != '\0') {
        fStack00000000000000fc = fVar85 + fVar83;
      }
      break;
    case 8:
      goto switchD_067dafec_caseD_8;
    }
LAB_067db120:
    uStack00000000000000f0 = 0;
  }
  else if (uVar44 == 0x10) {
switchD_067dafec_caseD_8:
    if (uVar37 < 0xad) {
      if ((uVar37 != 3) && (uVar37 != 10)) goto LAB_067db044;
    }
    else if ((uVar37 != 0xad) && ((uVar37 != 0x200b && (uVar37 != 0x2060)))) {
LAB_067db044:
      if (*(uint *)(lVar21 + 0x18) <= uVar30) goto LAB_067dd448;
      uVar6 = *(undefined2 *)(lVar21 + (long)(int)uVar30 * 0x178 + 0x20);
      if (*(int *)(*(long *)PTR_DAT_0727fa20 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      uVar26 = FUN_058a577c(uVar6,0);
      if ((uVar26 & 1) == 0) {
        bVar13 = (int)uVar16 < (int)unaff_x19[0x95];
      }
      else {
        bVar13 = false;
      }
      if ((fVar54 <= fVar85) && (!bVar13 && uVar44 >> 4 == 0)) {
        fStack00000000000000fc = fVar83;
        if ((char)unaff_x19[0x1e] != '\0') {
          fStack00000000000000fc = fVar85 + fVar83;
        }
        goto LAB_067db120;
      }
      if (((uVar18 == 1) || (uVar16 != uVar33)) || (uVar84 == *(uint *)((long)unaff_x19 + 0x324))) {
        fStack00000000000000fc = fVar83;
        if ((char)unaff_x19[0x1e] != '\0') {
          fStack00000000000000fc = fVar85 + fVar83;
        }
        if (*(int *)(*(long *)PTR_DAT_0727fa20 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
        }
        uStack000000000000002c = FUN_058a5c00(uVar37,0);
        uStack00000000000000f0 = 0;
      }
      else {
        cVar29 = (char)unaff_x19[0x1e];
        fVar83 = -fVar54;
        if (cVar29 != '\0') {
          fVar83 = fVar54;
        }
        if (*(uint *)(lVar21 + 0x18) <= uVar30) goto LAB_067dd448;
        iVar20 = (int)*(char *)(lVar21 + (long)(int)uVar30 * 0x178 + 0x194) +
                 (-iVar4 - (uStack000000000000002c & 1)) + iVar20 + -1;
        if (iVar20 < 1) {
          fVar54 = 1.0;
          iVar20 = 1;
        }
        else {
          fVar54 = *(float *)((long)unaff_x19 + 0x2dc);
        }
        if (uVar37 == 9) {
LAB_067dceb4:
          fVar54 = 1.0 - fVar54;
        }
        else {
          if (uVar37 != 0xa0) {
            if (*(int *)(*(long *)PTR_DAT_0727fa20 + 0xe0) == 0) {
              thunk_FUN_032cd7c0();
            }
            uVar26 = FUN_058a5c00(uVar37,0);
            cVar29 = (char)unaff_x19[0x1e];
            if ((uVar26 & 1) != 0) goto LAB_067dceb4;
          }
          iVar20 = (iVar4 - (~uStack000000000000002c & 1)) + iVar17;
        }
        fVar54 = ((fVar85 + fVar83) * fVar54) / (float)iVar20;
        if (cVar29 == '\0') {
          fStack00000000000000fc = fStack00000000000000fc + fVar54;
          uStack00000000000000f0 =
               CONCAT44((float)((ulong)uStack00000000000000f0 >> 0x20) + 0.0,
                        (float)uStack00000000000000f0 + 0.0);
        }
        else {
          fStack00000000000000fc = fStack00000000000000fc - fVar54;
        }
      }
    }
  }
  else if (uVar44 == 0x20) {
    fVar54 = fVar75 + fVar65;
    goto LAB_067db0b0;
  }
switchD_067dafec_caseD_3:
  uVar44 = (uint)*(undefined8 *)(lVar21 + 0x18);
  if (uVar44 <= uVar84) goto LAB_067dd448;
  lVar34 = lVar21 + lVar25 * 0x178;
  fVar83 = fStack00000000000000bc + fStack00000000000000fc;
  fVar54 = (float)uVar27 + (float)uStack00000000000000f0;
  fVar85 = (float)((ulong)uVar27 >> 0x20) + (float)((ulong)uStack00000000000000f0 >> 0x20);
  if (*(char *)(lVar34 + 0x194) == '\0') goto LAB_067db918;
  iVar17 = *(int *)(lVar21 + lVar25 * 0x178 + 0x2c);
  if (iVar17 != 0) goto Unity_VisualScripting_BinaryOperatorHandler_OperatorQuery__Equals;
  fVar53 = fmodf(*(float *)((long)unaff_x19 + 0x314) * (float)(int)uVar16,1.0);
  switch(*(undefined4 *)((long)unaff_x19 + 0x30c)) {
  case 0:
    lVar48 = lVar21 + lVar25 * 0x178;
    *(undefined4 *)(lVar48 + 0x84) = 0;
    *(undefined4 *)(lVar48 + 0xac) = 0;
    *(undefined4 *)(lVar48 + 0xd4) = 0x3f800000;
    fVar53 = 1.0;
    break;
  case 1:
    fVar71 = *(float *)(lVar21 + lVar25 * 0x178 + 0x70);
    if (*(int *)((long)unaff_x19 + 0x274) == 0x208) {
      lVar48 = lVar21 + lVar25 * 0x178;
      fVar65 = (fStack00000000000000fc + fVar71) - *(float *)((long)unaff_x19 + 0x4dc);
      fVar71 = *(float *)((long)unaff_x19 + 0x4e4) - *(float *)((long)unaff_x19 + 0x4dc);
      goto LAB_067db26c;
    }
    lVar48 = lVar21 + lVar25 * 0x178;
    fVar65 = fVar65 - fVar75;
    *(float *)(lVar48 + 0x84) = fVar53 + (fVar71 - fVar75) / fVar65;
    *(float *)(lVar48 + 0xac) = fVar53 + (*(float *)(lVar48 + 0x98) - fVar75) / fVar65;
    *(float *)(lVar48 + 0xd4) = fVar53 + (*(float *)(lVar48 + 0xc0) - fVar75) / fVar65;
    fVar53 = fVar53 + (*(float *)(lVar48 + 0xe8) - fVar75) / fVar65;
    break;
  case 2:
    lVar48 = lVar21 + lVar25 * 0x178;
    fVar71 = *(float *)((long)unaff_x19 + 0x4e4) - *(float *)((long)unaff_x19 + 0x4dc);
    fVar65 = (fStack00000000000000fc + *(float *)(lVar48 + 0x70)) -
             *(float *)((long)unaff_x19 + 0x4dc);
LAB_067db26c:
    *(float *)(lVar48 + 0x84) = fVar53 + fVar65 / fVar71;
    *(float *)(lVar48 + 0xac) =
         fVar53 + ((fStack00000000000000fc + *(float *)(lVar48 + 0x98)) -
                  *(float *)((long)unaff_x19 + 0x4dc)) /
                  (*(float *)((long)unaff_x19 + 0x4e4) - *(float *)((long)unaff_x19 + 0x4dc));
    *(float *)(lVar48 + 0xd4) =
         fVar53 + ((fStack00000000000000fc + *(float *)(lVar48 + 0xc0)) -
                  *(float *)((long)unaff_x19 + 0x4dc)) /
                  (*(float *)((long)unaff_x19 + 0x4e4) - *(float *)((long)unaff_x19 + 0x4dc));
    fVar53 = fVar53 + ((fStack00000000000000fc + *(float *)(lVar48 + 0xe8)) -
                      *(float *)((long)unaff_x19 + 0x4dc)) /
                      (*(float *)((long)unaff_x19 + 0x4e4) - *(float *)((long)unaff_x19 + 0x4dc));
    break;
  case 3:
    switch((int)unaff_x19[0x62]) {
    case 0:
      lVar48 = lVar21 + lVar25 * 0x178;
      *(undefined4 *)(lVar48 + 0x88) = 0;
      *(undefined4 *)(lVar48 + 0xb0) = 0x3f800000;
      *(undefined4 *)(lVar48 + 0xd8) = 0;
      *(undefined4 *)(lVar48 + 0x100) = 0x3f800000;
      break;
    case 1:
      lVar48 = lVar21 + lVar25 * 0x178;
      fVar71 = fVar71 - fVar56;
      fVar65 = fVar53 + (*(float *)(lVar48 + 0x74) - fVar56) / fVar71;
      fVar71 = fVar53 + (*(float *)(lVar48 + 0x9c) - fVar56) / fVar71;
      *(float *)(lVar48 + 0x88) = fVar65;
      *(float *)(lVar48 + 0xb0) = fVar71;
      *(float *)(lVar48 + 0xd8) = fVar65;
      *(float *)(lVar48 + 0x100) = fVar71;
      break;
    case 2:
      lVar48 = lVar21 + lVar25 * 0x178;
      fVar65 = fVar53 + (*(float *)(lVar48 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
                        (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
      *(float *)(lVar48 + 0x88) = fVar65;
      fVar71 = *(float *)(unaff_x19 + 0x9c);
      fVar75 = *(float *)(unaff_x19 + 0x9d);
      *(float *)(lVar48 + 0xd8) = fVar65;
      fVar65 = fVar53 + (*(float *)(lVar48 + 0x9c) - fVar71) / (fVar75 - fVar71);
      *(float *)(lVar48 + 0xb0) = fVar65;
      *(float *)(lVar48 + 0x100) = fVar65;
      break;
    case 3:
      if (*(int *)(*(long *)PTR_DAT_072798f8 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      FUN_06bb23f0(*(undefined8 *)
                    Method_System_Linq_Expressions_Interpreter_HybridReferenceDictionary<LabelTarget,_LabelInfo>__ctor__
                   ,0);
      uVar44 = (uint)*(undefined8 *)(lVar21 + 0x18);
    }
    if (uVar44 <= uVar84) goto LAB_067dd448;
    lVar48 = lVar21 + lVar25 * 0x178;
    fVar65 = *(float *)(lVar48 + 0x15c);
    fVar71 = (1.0 - (*(float *)(lVar48 + 0x88) + *(float *)(lVar48 + 0xb0)) * fVar65) * 0.5;
    fVar75 = fVar53 + *(float *)(lVar48 + 0x88) * fVar65 + fVar71;
    fVar53 = fVar53 + fVar71 + *(float *)(lVar48 + 0xb0) * fVar65;
    *(float *)(lVar48 + 0x84) = fVar75;
    *(float *)(lVar48 + 0xac) = fVar75;
    *(float *)(lVar48 + 0xd4) = fVar53;
    break;
  default:
    goto switchD_067db1d0_default;
  }
  *(float *)(lVar21 + lVar25 * 0x178 + 0xfc) = fVar53;
switchD_067db1d0_default:
  switch((int)unaff_x19[0x62]) {
  case 0:
    if (uVar44 <= uVar84) goto LAB_067dd448;
    lVar48 = lVar21 + lVar25 * 0x178;
    *(undefined4 *)(lVar48 + 0x88) = 0;
    *(undefined4 *)(lVar48 + 0xb0) = 0x3f800000;
    *(undefined4 *)(lVar48 + 0xd8) = 0x3f800000;
    *(undefined4 *)(lVar48 + 0x100) = 0;
    break;
  case 1:
    if (uVar84 < uVar44) {
      lVar48 = lVar21 + lVar25 * 0x178;
      fVar82 = fVar82 - fVar69;
      fVar53 = (*(float *)(lVar48 + 0x74) - fVar69) / fVar82;
      fVar82 = (*(float *)(lVar48 + 0x9c) - fVar69) / fVar82;
      *(float *)(lVar48 + 0x88) = fVar53;
      goto LAB_067db5cc;
    }
    goto LAB_067dd448;
  case 2:
    if (uVar44 <= uVar84) goto LAB_067dd448;
    lVar48 = lVar21 + lVar25 * 0x178;
    fVar53 = (*(float *)(lVar48 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
             (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
    *(float *)(lVar48 + 0x88) = fVar53;
    fVar82 = (*(float *)(lVar48 + 0x9c) - *(float *)(unaff_x19 + 0x9c)) /
             (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
LAB_067db5cc:
    *(float *)(lVar48 + 0xb0) = fVar82;
    *(float *)(lVar48 + 0xd8) = fVar82;
    *(float *)(lVar48 + 0x100) = fVar53;
    break;
  case 3:
    if (uVar44 <= uVar84) goto LAB_067dd448;
    lVar48 = lVar21 + lVar25 * 0x178;
    fVar82 = *(float *)(lVar48 + 0x15c);
    fVar65 = (1.0 - (*(float *)(lVar48 + 0x84) + *(float *)(lVar48 + 0xd4)) / fVar82) * 0.5;
    fVar53 = *(float *)(lVar48 + 0x84) / fVar82 + fVar65;
    fVar65 = fVar65 + *(float *)(lVar48 + 0xd4) / fVar82;
    *(float *)(lVar48 + 0x88) = fVar53;
    *(float *)(lVar48 + 0xb0) = fVar65;
    *(float *)(lVar48 + 0x100) = fVar53;
    *(float *)(lVar48 + 0xd8) = fVar65;
  }
  if (uVar44 <= uVar84) goto LAB_067dd448;
  lVar48 = lVar21 + lVar25 * 0x178;
  fVar53 = ABS(fVar55) * *(float *)(lVar48 + 0x160) * (1.0 - *(float *)((long)unaff_x19 + 0x2d4));
  if ((*(char *)(lVar48 + 0x5c) == '\0') && ((*(byte *)(lVar21 + lVar25 * 0x178 + 400) & 1) != 0)) {
    fVar53 = -fVar53;
  }
  lVar48 = lVar21 + lVar25 * 0x178;
  fVar82 = *(float *)(lVar48 + 0x88);
  fVar71 = *(float *)(lVar48 + 0x84);
  fVar65 = -2.1474836e+09;
  if (fVar71 != INFINITY) {
    fVar65 = (float)(int)fVar71;
  }
  fVar75 = *(float *)(lVar48 + 0xd4);
  fVar56 = *(float *)(lVar48 + 0xd8);
  fVar69 = -2.1474836e+09;
  if (fVar82 != INFINITY) {
    fVar69 = (float)(int)fVar82;
  }
  uVar63 = FUN_06827b58(fVar71 - fVar65,fVar82 - fVar69);
  *(undefined4 *)(lVar48 + 0x84) = uVar63;
  if (*(uint *)(lVar21 + 0x18) <= uVar84) goto LAB_067dd448;
  fVar56 = fVar56 - fVar69;
  *(float *)(lVar48 + 0x88) = fVar53;
  uVar63 = FUN_06827b58(fVar71 - fVar65,fVar56);
  *(undefined4 *)(lVar21 + lVar25 * 0x178 + 0xac) = uVar63;
  if (*(uint *)(lVar21 + 0x18) <= uVar84) goto LAB_067dd448;
  fVar75 = fVar75 - fVar65;
  *(float *)(lVar21 + lVar25 * 0x178 + 0xb0) = fVar53;
  fVar65 = (float)FUN_06827b58(fVar75,fVar56);
  *(float *)(lVar48 + 0xd4) = fVar65;
  if (*(uint *)(lVar21 + 0x18) <= uVar84) goto LAB_067dd448;
  *(float *)(lVar48 + 0xd8) = fVar53;
  uVar63 = FUN_06827b58(fVar75,fVar82 - fVar69);
  *(undefined4 *)(lVar21 + lVar25 * 0x178 + 0xfc) = uVar63;
  uVar44 = (uint)*(undefined8 *)(lVar21 + 0x18);
  if (uVar44 <= uVar84) goto LAB_067dd448;
  *(float *)(lVar21 + lVar25 * 0x178 + 0x100) = fVar53;
Unity_VisualScripting_BinaryOperatorHandler_OperatorQuery__Equals:
  if (((int)uVar84 < (int)unaff_x19[0x65]) &&
     ((int)fStack00000000000000dc < *(int *)((long)unaff_x19 + 0x32c))) {
    if (((int)uVar16 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] != 5)) {
      if (uVar44 <= uVar84) goto LAB_067dd448;
LAB_067dc81c:
      lVar34 = lVar21 + lVar25 * 0x178;
      *(ulong *)(lVar34 + 0x70) =
           CONCAT44(fVar54 + (float)((ulong)*(undefined8 *)(lVar34 + 0x70) >> 0x20),
                    fVar83 + (float)*(undefined8 *)(lVar34 + 0x70));
      *(float *)(lVar34 + 0x78) = fVar85 + *(float *)(lVar34 + 0x78);
      *(ulong *)(lVar34 + 0x98) =
           CONCAT44(fVar54 + (float)((ulong)*(undefined8 *)(lVar34 + 0x98) >> 0x20),
                    fVar83 + (float)*(undefined8 *)(lVar34 + 0x98));
      *(float *)(lVar34 + 0xa0) = fVar85 + *(float *)(lVar34 + 0xa0);
      *(ulong *)(lVar34 + 0xc0) =
           CONCAT44(fVar54 + (float)((ulong)*(undefined8 *)(lVar34 + 0xc0) >> 0x20),
                    fVar83 + (float)*(undefined8 *)(lVar34 + 0xc0));
      *(float *)(lVar34 + 200) = fVar85 + *(float *)(lVar34 + 200);
      *(ulong *)(lVar34 + 0xe8) =
           CONCAT44(fVar54 + (float)((ulong)*(undefined8 *)(lVar34 + 0xe8) >> 0x20),
                    fVar83 + (float)*(undefined8 *)(lVar34 + 0xe8));
      *(float *)(lVar34 + 0xf0) = fVar85 + *(float *)(lVar34 + 0xf0);
      goto LAB_067db8cc;
    }
    if (((int)uVar16 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] == 5)) {
      if (uVar84 < uVar44) {
        if (*(uint *)(lVar21 + lVar25 * 0x178 + 0x68) == uVar3) goto LAB_067dc81c;
        goto LAB_067db814;
      }
      goto LAB_067dd448;
    }
  }
LAB_067db814:
  if (uVar44 <= uVar84) goto LAB_067dd448;
  if (DAT_076cd829 == '\0') {
    thunk_FUN_032e1da0();
    DAT_076cd829 = '\x01';
    uVar44 = *(uint *)(lVar21 + 0x18);
  }
  puVar11 = PTR_DAT_072795b0;
  uVar63 = *(undefined4 *)(*(undefined8 **)(*(long *)PTR_DAT_072795b0 + 0xb8) + 1);
  lVar48 = lVar21 + lVar25 * 0x178;
  *(undefined8 *)(lVar48 + 0x70) = **(undefined8 **)(*(long *)PTR_DAT_072795b0 + 0xb8);
  *(undefined4 *)(lVar48 + 0x78) = uVar63;
  if (uVar44 <= uVar84) goto LAB_067dd448;
  uVar63 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar11 + 0xb8) + 1);
  lVar48 = lVar21 + lVar25 * 0x178;
  *(undefined8 *)(lVar48 + 0x98) = **(undefined8 **)(*(long *)puVar11 + 0xb8);
  *(undefined4 *)(lVar48 + 0xa0) = uVar63;
  uVar63 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar11 + 0xb8) + 1);
  *(undefined8 *)(lVar48 + 0xc0) = **(undefined8 **)(*(long *)puVar11 + 0xb8);
  *(undefined4 *)(lVar48 + 200) = uVar63;
  uVar63 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar11 + 0xb8) + 1);
  *(undefined8 *)(lVar48 + 0xe8) = **(undefined8 **)(*(long *)puVar11 + 0xb8);
  *(undefined4 *)(lVar48 + 0xf0) = uVar63;
  *(undefined1 *)(lVar34 + 0x194) = 0;
LAB_067db8cc:
  if (iVar17 == 0) {
    pcVar36 = *(code **)(*unaff_x19 + 0x8d8);
LAB_067db8fc:
    (*pcVar36)();
  }
  else if (iVar17 == 1) {
    pcVar36 = *(code **)(*unaff_x19 + 0x8f8);
    goto LAB_067db8fc;
  }
LAB_067db918:
  if ((*plVar2 == 0) || (lVar34 = *(long *)(*plVar2 + 0x38), lVar34 == 0)) goto LAB_067dd33c;
  if (*(uint *)(lVar34 + 0x18) <= uVar84) goto LAB_067dd448;
  lVar34 = lVar34 + lVar25 * 0x178;
  uVar23 = *(undefined8 *)(lVar34 + 0x11c);
  *(undefined8 *)(lVar34 + 0x11c) =
       CONCAT44(fVar54 + (float)((ulong)uVar23 >> 0x20),fVar83 + (float)uVar23);
  *(float *)(lVar34 + 0x124) = fVar85 + *(float *)(lVar34 + 0x124);
  if ((*plVar2 == 0) || (lVar34 = *(long *)(*plVar2 + 0x38), lVar34 == 0)) goto LAB_067dd33c;
  if (*(uint *)(lVar34 + 0x18) <= uVar84) goto LAB_067dd448;
  lVar34 = lVar34 + lVar25 * 0x178;
  *(ulong *)(lVar34 + 0x110) =
       CONCAT44(fVar54 + (float)((ulong)*(undefined8 *)(lVar34 + 0x110) >> 0x20),
                fVar83 + (float)*(undefined8 *)(lVar34 + 0x110));
  *(float *)(lVar34 + 0x118) = fVar85 + *(float *)(lVar34 + 0x118);
  if ((*plVar2 == 0) || (lVar34 = *(long *)(*plVar2 + 0x38), lVar34 == 0)) goto LAB_067dd33c;
  if (*(uint *)(lVar34 + 0x18) <= uVar84) goto LAB_067dd448;
  lVar34 = lVar34 + lVar25 * 0x178;
  *(ulong *)(lVar34 + 0x128) =
       CONCAT44(fVar54 + (float)((ulong)*(undefined8 *)(lVar34 + 0x128) >> 0x20),
                fVar83 + (float)*(undefined8 *)(lVar34 + 0x128));
  *(float *)(lVar34 + 0x130) = fVar85 + *(float *)(lVar34 + 0x130);
  if ((*plVar2 == 0) || (lVar34 = *(long *)(*plVar2 + 0x38), lVar34 == 0)) goto LAB_067dd33c;
  if (*(uint *)(lVar34 + 0x18) <= uVar84) goto LAB_067dd448;
  lVar34 = lVar34 + lVar25 * 0x178;
  *(float *)(lVar34 + 0x134) = fVar83 + *(float *)(lVar34 + 0x134);
  *(ulong *)(lVar34 + 0x138) =
       CONCAT44(fVar85 + (float)((ulong)*(undefined8 *)(lVar34 + 0x138) >> 0x20),
                fVar54 + (float)*(undefined8 *)(lVar34 + 0x138));
  lVar34 = *plVar2;
  if ((lVar34 == 0) || (lVar48 = *(long *)(lVar34 + 0x38), lVar48 == 0)) goto LAB_067dd33c;
  uVar44 = *(uint *)(lVar48 + 0x18);
  if (uVar44 <= uVar84) goto LAB_067dd448;
  lVar40 = lVar48 + lVar25 * 0x178;
  *(float *)(lVar40 + 0x150) = fVar54 + *(float *)(lVar40 + 0x150);
  *(ulong *)(lVar40 + 0x140) =
       CONCAT44(fVar83 + (float)((ulong)*(undefined8 *)(lVar40 + 0x140) >> 0x20),
                fVar83 + (float)*(undefined8 *)(lVar40 + 0x140));
  *(ulong *)(lVar40 + 0x148) =
       CONCAT44(fVar54 + (float)((ulong)*(undefined8 *)(lVar40 + 0x148) >> 0x20),
                fVar54 + (float)*(undefined8 *)(lVar40 + 0x148));
  if (uVar16 == uVar33) {
    uVar33 = *puVar1 - 1;
    if (uVar84 == uVar33) goto LAB_067dbb34;
  }
  else {
    lVar34 = *(long *)(lVar34 + 0x50);
    if (lVar34 == 0) goto LAB_067dd33c;
    if (*(uint *)(lVar34 + 0x18) <= uVar33) goto LAB_067dd448;
    lVar40 = (long)(int)uVar33;
    lVar42 = lVar34 + lVar40 * 0x5c;
    fVar65 = fVar54 + *(float *)(lVar42 + 0x54);
    *(ulong *)(lVar42 + 0x4c) =
         CONCAT44(fVar54 + (float)((ulong)*(undefined8 *)(lVar42 + 0x4c) >> 0x20),
                  fVar54 + (float)*(undefined8 *)(lVar42 + 0x4c));
    *(float *)(lVar42 + 0x54) = fVar65;
    *(float *)(lVar42 + 0x58) = fVar83 + *(float *)(lVar42 + 0x58);
    if (uVar44 <= *(uint *)(lVar42 + 0x34)) goto LAB_067dd448;
    uVar63 = *(undefined4 *)(lVar48 + (long)(int)*(uint *)(lVar42 + 0x34) * 0x178 + 0x11c);
    lVar34 = lVar34 + lVar40 * 0x5c;
    *(float *)(lVar34 + 0x70) = fVar65;
    *(undefined4 *)(lVar34 + 0x6c) = uVar63;
    lVar34 = *plVar2;
    if ((lVar34 == 0) || (lVar48 = *(long *)(lVar34 + 0x50), lVar48 == 0)) goto LAB_067dd33c;
    if (*(uint *)(lVar48 + 0x18) <= uVar33) goto LAB_067dd448;
    lVar34 = *(long *)(lVar34 + 0x38);
    if (lVar34 == 0) goto LAB_067dd33c;
    uVar33 = *(uint *)(lVar48 + lVar40 * 0x5c + 0x40);
    if (*(uint *)(lVar34 + 0x18) <= uVar33) goto LAB_067dd448;
    lVar48 = lVar48 + lVar40 * 0x5c;
    *(undefined4 *)(lVar48 + 0x74) = *(undefined4 *)(lVar34 + (long)(int)uVar33 * 0x178 + 0x128);
    *(undefined4 *)(lVar48 + 0x78) = *(undefined4 *)(lVar48 + 0x4c);
    uVar33 = *puVar1 - 1;
LAB_067dbb34:
    if (uVar84 == uVar33) {
      lVar34 = *plVar2;
      if ((lVar34 == 0) || (lVar48 = *(long *)(lVar34 + 0x50), lVar48 == 0)) goto LAB_067dd33c;
      if (*(uint *)(lVar48 + 0x18) <= uVar16) goto LAB_067dd448;
      lVar40 = lVar48 + lVar43 * 0x5c;
      fVar65 = fVar54 + *(float *)(lVar40 + 0x54);
      *(ulong *)(lVar40 + 0x4c) =
           CONCAT44(fVar54 + (float)((ulong)*(undefined8 *)(lVar40 + 0x4c) >> 0x20),
                    fVar54 + (float)*(undefined8 *)(lVar40 + 0x4c));
      *(float *)(lVar40 + 0x54) = fVar65;
      *(float *)(lVar40 + 0x58) = fVar83 + *(float *)(lVar40 + 0x58);
      lVar34 = *(long *)(lVar34 + 0x38);
      if (lVar34 == 0) goto LAB_067dd33c;
      if (*(uint *)(lVar34 + 0x18) <= *(uint *)(lVar40 + 0x34)) goto LAB_067dd448;
      uVar63 = *(undefined4 *)(lVar34 + (long)(int)*(uint *)(lVar40 + 0x34) * 0x178 + 0x11c);
      lVar48 = lVar48 + lVar43 * 0x5c;
      *(float *)(lVar48 + 0x70) = fVar65;
      *(undefined4 *)(lVar48 + 0x6c) = uVar63;
      lVar34 = *plVar2;
      if ((lVar34 == 0) || (lVar48 = *(long *)(lVar34 + 0x50), lVar48 == 0)) goto LAB_067dd33c;
      if (*(uint *)(lVar48 + 0x18) <= uVar16) goto LAB_067dd448;
      lVar34 = *(long *)(lVar34 + 0x38);
      if (lVar34 == 0) goto LAB_067dd33c;
      uVar33 = *(uint *)(lVar48 + lVar43 * 0x5c + 0x40);
      if (*(uint *)(lVar34 + 0x18) <= uVar33) goto LAB_067dd448;
      lVar48 = lVar48 + lVar43 * 0x5c;
      *(undefined4 *)(lVar48 + 0x74) = *(undefined4 *)(lVar34 + (long)(int)uVar33 * 0x178 + 0x128);
      *(undefined4 *)(lVar48 + 0x78) = *(undefined4 *)(lVar48 + 0x4c);
    }
  }
  if (*(int *)(*(long *)PTR_DAT_0727fa20 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  uVar26 = FUN_058a4c88(uVar37,0);
  if (((((uVar26 & 1) == 0) && (1 < uVar37 - 0x2010)) && (uVar37 != 0xad)) && (uVar37 != 0x2d)) {
    if (bVar9) {
      if (((uVar18 != 1) && ((int)uVar84 < (int)(*(uint *)(lVar21 + 0x18) - 1))) &&
         (((int)uVar84 < (int)*puVar1 && ((uVar37 == 0x2019 || (uVar37 == 0x27)))))) {
        if (*(uint *)(lVar21 + 0x18) <= uVar18 - 2) goto LAB_067dd448;
        uVar6 = *(undefined2 *)(lVar21 + lVar22 + -0x438);
        if (*(int *)(*(long *)PTR_DAT_0727fa20 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
        }
        uVar26 = FUN_058a4c88(uVar6,0);
        if ((uVar26 & 1) != 0) {
          if (*(uint *)(lVar21 + 0x18) <= uVar18) goto LAB_067dd448;
          uVar6 = *(undefined2 *)(lVar21 + lVar22 + -0x148);
          if (*(int *)(*(long *)PTR_DAT_0727fa20 + 0xe0) == 0) {
            thunk_FUN_032cd7c0();
          }
          uVar26 = FUN_058a4c88(uVar6,0);
          if ((uVar26 & 1) != 0) goto LAB_067dbd58;
        }
      }
    }
    else {
      if (uVar18 != 1) {
LAB_067dc88c:
        bVar9 = false;
        goto LAB_067dbd60;
      }
      if (*(int *)(*(long *)PTR_DAT_0727fa20 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      uVar26 = FUN_058a4bbc(uVar37,0);
      if ((uVar26 & 1) != 0) {
        if (*(int *)(*(long *)PTR_DAT_0727fa20 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
        }
        uVar26 = FUN_058a1fe4(uVar37,0);
        if (((uVar37 != 0x200b) && ((uVar26 & 1) == 0)) && (*puVar1 != 1)) goto LAB_067dc88c;
      }
    }
    if (uVar84 == *puVar1 - 1) {
      if (*(int *)(*(long *)PTR_DAT_0727fa20 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      uVar26 = FUN_058a4c88(uVar37,0);
      iVar17 = (int)fStack0000000000000124;
      if ((uVar26 & 1) == 0) goto LAB_067dc084;
    }
    else {
LAB_067dc084:
      iVar17 = uVar18 - 2;
    }
    lVar34 = *plVar2;
    if (lVar34 == 0) goto LAB_067dd33c;
    lVar48 = *(long *)(lVar34 + 0x40);
    if (lVar48 == 0) goto LAB_067dd33c;
    uVar33 = *(uint *)(lVar34 + 0x24);
    iVar20 = *(int *)(lVar48 + 0x18);
    if (iVar20 < (int)(uVar33 + 1)) {
      if (*(int *)(*(long *)Method_System_Collections_Generic_HashSet<CAPI_ovrAvatar2NodeId>_Add__ +
                  0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      FUN_03b4ee04((long *)(lVar34 + 0x40),iVar20 + 1,
                   *(undefined8 *)
                    Method_System_Collections_Generic_HashSet<CAPI_ovrAvatar2NodeId>__ctor__);
      lVar34 = *plVar2;
      if (lVar34 == 0) goto LAB_067dd33c;
    }
    lVar34 = *(long *)(lVar34 + 0x40);
    if (lVar34 == 0) goto LAB_067dd33c;
    if (*(uint *)(lVar34 + 0x18) <= uVar33) goto LAB_067dd448;
    lVar34 = lVar34 + (long)(int)uVar33 * 0x18;
    *(long **)(lVar34 + 0x20) = unaff_x19;
    *(float *)(lVar34 + 0x28) = fStack000000000000016c;
    *(int *)(lVar34 + 0x2c) = iVar17;
    *(int *)(lVar34 + 0x30) = (iVar17 - (int)fStack000000000000016c) + 1;
    thunk_FUN_0333a630();
    lVar34 = unaff_x19[0x6d];
    if (lVar34 == 0) goto LAB_067dd33c;
    lVar48 = *(long *)(lVar34 + 0x50);
    *(int *)(lVar34 + 0x24) = *(int *)(lVar34 + 0x24) + 1;
    if (lVar48 == 0) goto LAB_067dd33c;
    if (*(uint *)(lVar48 + 0x18) <= uVar16) goto LAB_067dd448;
    lVar48 = lVar48 + lVar43 * 0x5c;
    bVar9 = false;
    fStack00000000000000dc = (float)((int)fStack00000000000000dc + 1);
    *(int *)(lVar48 + 0x30) = *(int *)(lVar48 + 0x30) + 1;
  }
  else {
    if (!bVar9) {
      fStack000000000000016c = (float)uVar84;
    }
    if (uVar84 == *puVar1 - 1) {
      lVar34 = *plVar2;
      if (lVar34 == 0) goto LAB_067dd33c;
      lVar48 = *(long *)(lVar34 + 0x40);
      if (lVar48 == 0) goto LAB_067dd33c;
      uVar33 = *(uint *)(lVar34 + 0x24);
      iVar17 = *(int *)(lVar48 + 0x18);
      if (iVar17 < (int)(uVar33 + 1)) {
        if (*(int *)(*(long *)Method_System_Collections_Generic_HashSet<CAPI_ovrAvatar2NodeId>_Add__
                    + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
        }
        FUN_03b4ee04((long *)(lVar34 + 0x40),iVar17 + 1,
                     *(undefined8 *)
                      Method_System_Collections_Generic_HashSet<CAPI_ovrAvatar2NodeId>__ctor__);
        lVar34 = *plVar2;
        if (lVar34 == 0) goto LAB_067dd33c;
      }
      lVar34 = *(long *)(lVar34 + 0x40);
      if (lVar34 == 0) goto LAB_067dd33c;
      if (*(uint *)(lVar34 + 0x18) <= uVar33) goto LAB_067dd448;
      lVar34 = lVar34 + (long)(int)uVar33 * 0x18;
      *(long **)(lVar34 + 0x20) = unaff_x19;
      *(float *)(lVar34 + 0x28) = fStack000000000000016c;
      *(uint *)(lVar34 + 0x2c) = uVar84;
      *(uint *)(lVar34 + 0x30) = uVar18 - (int)fStack000000000000016c;
      thunk_FUN_0333a630();
      lVar34 = unaff_x19[0x6d];
      if (lVar34 == 0) goto LAB_067dd33c;
      lVar48 = *(long *)(lVar34 + 0x50);
      *(int *)(lVar34 + 0x24) = *(int *)(lVar34 + 0x24) + 1;
      if (lVar48 == 0) goto LAB_067dd33c;
      if (*(uint *)(lVar48 + 0x18) <= uVar16) goto LAB_067dd448;
      lVar48 = lVar48 + lVar43 * 0x5c;
      fStack00000000000000dc = (float)((int)fStack00000000000000dc + 1);
      *(int *)(lVar48 + 0x30) = *(int *)(lVar48 + 0x30) + 1;
    }
LAB_067dbd58:
    bVar9 = true;
  }
LAB_067dbd60:
  if ((*plVar2 == 0) || (lVar34 = *(long *)(*plVar2 + 0x38), lVar34 == 0)) goto LAB_067dd33c;
  uVar33 = *(uint *)(lVar34 + 0x18);
  if (uVar33 <= uVar84) goto LAB_067dd448;
  if ((*(byte *)(lVar34 + lVar25 * 0x178 + 400) >> 2 & 1) == 0) {
    if (bVar14) {
LAB_067dbda8:
      if (uVar33 <= uVar18 - 2) goto LAB_067dd448;
      lVar48 = *unaff_x19;
      uVar63 = *(undefined4 *)(lVar34 + lVar22 + -0x330);
      uVar70 = *(undefined4 *)(lVar34 + lVar22 + -0x2f8);
Unity_VisualScripting_DecrementHandler_<>c__<_ctor>b__0_5:
      pcVar36 = *(code **)(lVar48 + 0x908);
LAB_067dc310:
      (*pcVar36)(fStack000000000000006c,fStack0000000000000064,fStack0000000000000068,uVar63,
                 fStack0000000000000104,0,fVar74,uVar70);
      puVar11 = 
      Method_System_Collections_Generic_HashSet<OvrAvatarShaderNameUtils_KnownShader>_Add__;
      lVar34 = *(long *)
                Method_System_Collections_Generic_HashSet<OvrAvatarShaderNameUtils_KnownShader>_Add__
      ;
      if (*(int *)(lVar34 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar34 = *(long *)puVar11;
      }
Unity_VisualScripting_DecrementHandler_<>c__<_ctor>b__0_6:
      fVar66 = 0.0;
      bVar14 = false;
      fStack0000000000000104 = *(float *)(*(long *)(lVar34 + 0xb8) + 0x15a8);
      fStack0000000000000100 = 0.0;
    }
    else {
LAB_067dc270:
      bVar14 = false;
    }
  }
  else {
    lVar34 = lVar34 + lVar25 * 0x178;
    iVar17 = *(int *)(lVar34 + 0x68);
    *(int *)(lVar34 + 0x16c) = iVar38;
    if ((((int)unaff_x19[0x65] < (int)uVar84) || ((int)unaff_x19[0x66] < (int)uVar16)) ||
       (((int)unaff_x19[0x5c] == 5 && (iVar17 + 1 != (int)unaff_x19[0x67])))) {
      bVar13 = false;
    }
    else {
      bVar13 = true;
    }
    if (*(int *)(*(long *)PTR_DAT_0727fa20 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    uVar26 = FUN_058a1fe4(uVar37,0);
    if ((uVar37 != 0x200b) && ((uVar26 & 1) == 0)) {
      lVar34 = *plVar2;
      if ((lVar34 == 0) || (lVar48 = *(long *)(lVar34 + 0x38), lVar48 == 0)) goto LAB_067dd33c;
      if (*(uint *)(lVar48 + 0x18) <= uVar84) goto LAB_067dd448;
      fVar65 = *(float *)(lVar48 + lVar25 * 0x178 + 0x160);
      if (fVar66 <= fVar65) {
        fVar66 = fVar65;
      }
      if (fStack0000000000000100 <= ABS(fVar53)) {
        fStack0000000000000100 = ABS(fVar53);
      }
      if (iVar17 != iStack0000000000000054) {
        if (*(int *)(*(long *)
                      Method_System_Collections_Generic_HashSet<OvrAvatarShaderNameUtils_KnownShader>_Add__
                    + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
          lVar34 = *plVar2;
          if (lVar34 == 0) goto LAB_067dd33c;
          lVar48 = *(long *)(*(long *)
                              Method_System_Collections_Generic_HashSet<OvrAvatarShaderNameUtils_KnownShader>_Add__
                            + 0xb8);
        }
        else {
          lVar48 = *(long *)(*(long *)
                              Method_System_Collections_Generic_HashSet<OvrAvatarShaderNameUtils_KnownShader>_Add__
                            + 0xb8);
        }
        fStack0000000000000104 = *(float *)(lVar48 + 0x15a8);
      }
      lVar34 = *(long *)(lVar34 + 0x38);
      if (lVar34 == 0) goto LAB_067dd33c;
      if (*(uint *)(lVar34 + 0x18) <= uVar84) goto LAB_067dd448;
      if (unaff_x19[0x1f] == 0) goto LAB_067dd33c;
      fVar82 = *(float *)(lVar34 + lVar25 * 0x178 + 0x14c);
      fVar65 = (float)FUN_06c51a1c(unaff_x19[0x1f] + 0x50,0);
      fVar82 = fVar82 + fVar66 * fVar65;
      iStack0000000000000054 = iVar17;
      if (fVar82 <= fStack0000000000000104) {
        fStack0000000000000104 = fVar82;
      }
    }
    if (!bVar14) {
      bVar14 = false;
      if ((((uVar37 == 0xd) || ((uVar37 & 0xfffe) == 10)) || ((int)uVar19 < (int)uVar84)) ||
         ((bool)(bVar13 ^ 1))) goto LAB_067dc380;
      if (uVar84 == uVar19) {
        if (*(int *)(*(long *)PTR_DAT_0727fa20 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
        }
        uVar26 = FUN_058a5c00(uVar37,0);
        if ((uVar26 & 1) != 0) goto LAB_067dc270;
      }
      if ((*plVar2 == 0) || (lVar34 = *(long *)(*plVar2 + 0x38), lVar34 == 0)) goto LAB_067dd33c;
      if (*(uint *)(lVar34 + 0x18) <= uVar84) goto LAB_067dd448;
      lVar34 = lVar34 + lVar25 * 0x178;
      fVar74 = *(float *)(lVar34 + 0x160);
      fStack000000000000006c = *(float *)(lVar34 + 0x11c);
      bVar14 = fVar66 != 0.0;
      uVar15 = *(undefined4 *)(lVar34 + 0x168);
      fVar65 = fVar74;
      if (bVar14) {
        fVar65 = fVar66;
      }
      fVar66 = fVar65;
      fStack0000000000000068 = 0.0;
      fVar65 = fVar53;
      if (bVar14) {
        fVar65 = fStack0000000000000100;
      }
      fStack0000000000000064 = fStack0000000000000104;
      fStack0000000000000100 = fVar65;
    }
    if (*puVar1 == 1) {
      if ((*plVar2 != 0) && (lVar34 = *(long *)(*plVar2 + 0x38), lVar34 != 0)) {
        if (uVar84 < *(uint *)(lVar34 + 0x18)) {
          lVar34 = lVar34 + lVar25 * 0x178;
          lVar48 = *unaff_x19;
          uVar63 = *(undefined4 *)(lVar34 + 0x128);
          uVar70 = *(undefined4 *)(lVar34 + 0x160);
          goto Unity_VisualScripting_DecrementHandler_<>c__<_ctor>b__0_5;
        }
        goto LAB_067dd448;
      }
      goto LAB_067dd33c;
    }
    if ((uVar84 == uVar30) || ((int)uVar19 <= (int)uVar84)) {
      if (*(int *)(*(long *)PTR_DAT_0727fa20 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      uVar26 = FUN_058a1fe4(uVar37,0);
      if ((*plVar2 != 0) && (lVar34 = *(long *)(*plVar2 + 0x38), lVar34 != 0)) {
        lVar48 = lVar25;
        uVar33 = uVar84;
        if (uVar37 == 0x200b || (uVar26 & 1) != 0) {
          lVar48 = (long)(int)uVar19;
          uVar33 = uVar19;
        }
        if (uVar33 < *(uint *)(lVar34 + 0x18)) {
          lVar34 = lVar34 + lVar48 * 0x178;
          uVar63 = *(undefined4 *)(lVar34 + 0x128);
          uVar70 = *(undefined4 *)(lVar34 + 0x160);
          pcVar36 = *(code **)(*unaff_x19 + 0x908);
          goto LAB_067dc310;
        }
        goto LAB_067dd448;
      }
      goto LAB_067dd33c;
    }
    if (!bVar13) {
      if ((*plVar2 != 0) && (lVar34 = *(long *)(*plVar2 + 0x38), lVar34 != 0)) {
        uVar33 = *(uint *)(lVar34 + 0x18);
        goto LAB_067dbda8;
      }
      goto LAB_067dd33c;
    }
    if ((int)uVar84 < (int)(*puVar1 - 1)) {
      if ((*plVar2 == 0) || (lVar34 = *(long *)(*plVar2 + 0x38), lVar34 == 0)) goto LAB_067dd33c;
      if (*(uint *)(lVar34 + 0x18) <= uVar18) goto LAB_067dd448;
      uVar26 = FUN_067f5e70(uVar15,*(undefined4 *)(lVar34 + lVar22),0);
      if ((uVar26 & 1) == 0) {
        if ((*plVar2 != 0) && (lVar34 = *(long *)(*plVar2 + 0x38), lVar34 != 0)) {
          if (uVar84 < *(uint *)(lVar34 + 0x18)) {
            lVar34 = lVar34 + lVar25 * 0x178;
            (**(code **)(*unaff_x19 + 0x908))
                      (fStack000000000000006c,fStack0000000000000064,fStack0000000000000068,
                       *(undefined4 *)(lVar34 + 0x128),fStack0000000000000104,0,fVar74,
                       *(undefined4 *)(lVar34 + 0x160));
            puVar11 = 
            Method_System_Collections_Generic_HashSet<OvrAvatarShaderNameUtils_KnownShader>_Add__;
            lVar34 = *(long *)
                      Method_System_Collections_Generic_HashSet<OvrAvatarShaderNameUtils_KnownShader>_Add__
            ;
            if (*(int *)(lVar34 + 0xe0) == 0) {
              thunk_FUN_032cd7c0();
              lVar34 = *(long *)puVar11;
            }
            goto Unity_VisualScripting_DecrementHandler_<>c__<_ctor>b__0_6;
          }
          goto LAB_067dd448;
        }
        goto LAB_067dd33c;
      }
    }
    bVar14 = true;
  }
LAB_067dc380:
  if ((*plVar2 == 0) || (lVar34 = *(long *)(*plVar2 + 0x38), lVar34 == 0)) goto LAB_067dd33c;
  if (*(uint *)(lVar34 + 0x18) <= uVar84) goto LAB_067dd448;
  if (lVar41 == 0) goto LAB_067dd33c;
  uVar33 = *(uint *)(lVar34 + lVar25 * 0x178 + 400);
  fVar65 = (float)FUN_06c51a3c(lVar41 + 0x50,0);
  if ((uVar33 >> 6 & 1) == 0) {
    if (bVar10) {
      if ((*plVar2 == 0) || (lVar34 = *(long *)(*plVar2 + 0x38), lVar34 == 0)) goto LAB_067dd33c;
      if (*(uint *)(lVar34 + 0x18) <= uVar18 - 2) goto LAB_067dd448;
      uVar63 = *(undefined4 *)(lVar34 + lVar22 + -0x330);
      fVar54 = *(float *)(lVar34 + lVar22 + -0x30c);
      pcVar36 = *(code **)(*unaff_x19 + 0x908);
LAB_067dc964:
      (*pcVar36)(fStack000000000000009c,fStack0000000000000098,fStack000000000000008c,uVar63,
                 fVar50 * fVar65 + fVar54,0,fVar50,fVar50);
    }
LAB_067dc998:
    bVar10 = false;
  }
  else {
    lVar34 = *plVar2;
    if ((lVar34 == 0) || (lVar48 = *(long *)(lVar34 + 0x38), lVar48 == 0)) goto LAB_067dd33c;
    if (*(uint *)(lVar48 + 0x18) <= uVar84) goto LAB_067dd448;
    *(int *)(lVar48 + lVar25 * 0x178 + 0x174) = iVar38;
    if ((((int)unaff_x19[0x65] < (int)uVar84) || ((int)unaff_x19[0x66] < (int)uVar16)) ||
       (((int)unaff_x19[0x5c] == 5 &&
        (*(int *)(lVar48 + lVar25 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x67])))) {
      bVar13 = false;
    }
    else {
      bVar13 = true;
    }
    if ((((uVar37 == 0xd) || ((uVar37 & 0xfffe) == 10)) || ((int)uVar19 < (int)uVar84)) ||
       (bVar10 || !bVar13)) {
LAB_067dc4cc:
      if (!bVar10) goto LAB_067dc998;
    }
    else {
      if (uVar84 == uVar19) {
        if (*(int *)(*(long *)PTR_DAT_0727fa20 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
        }
        uVar26 = FUN_058a5c00(uVar37,0);
        if ((uVar26 & 1) != 0) goto LAB_067dc4cc;
        lVar34 = *plVar2;
        if (lVar34 == 0) goto LAB_067dd33c;
      }
      lVar34 = *(long *)(lVar34 + 0x38);
      if (lVar34 == 0) goto LAB_067dd33c;
      if (*(uint *)(lVar34 + 0x18) <= uVar84) goto LAB_067dd448;
      lVar34 = lVar34 + lVar25 * 0x178;
      fVar51 = *(float *)(lVar34 + 0x60);
      fStack000000000000009c = *(float *)(lVar34 + 0x11c);
      fVar52 = *(float *)(lVar34 + 0x14c);
      fVar50 = *(float *)(lVar34 + 0x160);
      fStack0000000000000098 = fVar65 * fVar50 + fVar52;
      fStack000000000000008c = 0.0;
    }
    uVar33 = *puVar1;
    if (uVar33 == 1) {
      if ((*plVar2 != 0) && (lVar34 = *(long *)(*plVar2 + 0x38), lVar34 != 0)) {
        uVar33 = *(uint *)(lVar34 + 0x18);
LAB_067dc654:
        if (uVar84 < uVar33) {
          lVar34 = lVar34 + lVar25 * 0x178;
          lVar48 = *unaff_x19;
          uVar63 = *(undefined4 *)(lVar34 + 0x128);
          fVar54 = *(float *)(lVar34 + 0x14c);
LAB_067dc66c:
          pcVar36 = *(code **)(lVar48 + 0x908);
          goto LAB_067dc964;
        }
        goto LAB_067dd448;
      }
      goto LAB_067dd33c;
    }
    if (uVar84 == uVar30) {
      if (*(int *)(*(long *)PTR_DAT_0727fa20 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      uVar26 = FUN_058a1fe4(uVar37,0);
      if ((*plVar2 != 0) && (lVar34 = *(long *)(*plVar2 + 0x38), lVar34 != 0)) {
        uVar33 = *(uint *)(lVar34 + 0x18);
        if (uVar37 == 0x200b || (uVar26 & 1) != 0) goto LAB_067dc928;
LAB_067dc938:
        lVar48 = lVar25;
        if (uVar84 < uVar33) {
LAB_067dc940:
          lVar34 = lVar34 + lVar48 * 0x178;
          fVar54 = *(float *)(lVar34 + 0x14c);
          uVar63 = *(undefined4 *)(lVar34 + 0x128);
          pcVar36 = *(code **)(*unaff_x19 + 0x908);
          goto LAB_067dc964;
        }
        goto LAB_067dd448;
      }
      goto LAB_067dd33c;
    }
    if ((int)uVar84 < (int)uVar33) {
      lVar34 = *plVar2;
      if ((lVar34 != 0) && (lVar48 = *(long *)(lVar34 + 0x38), lVar48 != 0)) {
        if (uVar18 < *(uint *)(lVar48 + 0x18)) {
          if (*(float *)(lVar48 + lVar22 + -0x108) == fVar51) {
            fVar82 = *(float *)(lVar48 + lVar22 + -0x1c);
            if (*(int *)(*(long *)
                          Method_System_Collections_Generic_HashSet<CAPI_ovrAvatar2JointType>_GetEnumerator__
                        + 0xe0) == 0) {
              thunk_FUN_032cd7c0();
            }
            uVar26 = FUN_067f6284(fVar54 + fVar82,fVar52,0);
            if ((uVar26 & 1) != 0) {
              uVar33 = *puVar1;
              goto LAB_067dc758;
            }
            lVar34 = *plVar2;
            if (lVar34 == 0) goto LAB_067dd33c;
          }
          lVar34 = *(long *)(lVar34 + 0x38);
          if (lVar34 != 0) {
            uVar33 = *(uint *)(lVar34 + 0x18);
            if ((int)uVar84 <= (int)uVar19) goto LAB_067dc938;
LAB_067dc928:
            lVar48 = (long)(int)uVar19;
            if (uVar19 < uVar33) goto LAB_067dc940;
            goto LAB_067dd448;
          }
          goto LAB_067dd33c;
        }
        goto LAB_067dd448;
      }
      goto LAB_067dd33c;
    }
LAB_067dc758:
    if ((int)uVar84 < (int)uVar33) {
      iVar17 = FUN_06becc20(lVar41,0);
      if (*(uint *)(lVar21 + 0x18) <= uVar18) goto LAB_067dd448;
      lVar34 = *(long *)(lVar21 + lVar22 + -0x130);
      if (lVar34 == 0) goto LAB_067dd33c;
      iVar20 = FUN_06becc20(lVar34,0);
      if (iVar17 != iVar20) {
        if ((*plVar2 != 0) && (lVar34 = *(long *)(*plVar2 + 0x38), lVar34 != 0)) {
          uVar33 = *(uint *)(lVar34 + 0x18);
          goto LAB_067dc654;
        }
        goto LAB_067dd33c;
      }
    }
    if (!bVar13) {
      if ((*plVar2 != 0) && (lVar34 = *(long *)(*plVar2 + 0x38), lVar34 != 0)) {
        if (uVar18 - 2 < *(uint *)(lVar34 + 0x18)) {
          lVar48 = *unaff_x19;
          uVar63 = *(undefined4 *)(lVar34 + lVar22 + -0x330);
          fVar54 = *(float *)(lVar34 + lVar22 + -0x30c);
          goto LAB_067dc66c;
        }
        goto LAB_067dd448;
      }
      goto LAB_067dd33c;
    }
    bVar10 = true;
  }
  if ((*plVar2 == 0) || (lVar34 = *(long *)(*plVar2 + 0x38), lVar34 == 0)) goto LAB_067dd33c;
  uVar33 = (uint)*(undefined8 *)(lVar34 + 0x18);
  if (uVar33 <= uVar84) goto LAB_067dd448;
  if ((*(byte *)(lVar34 + lVar25 * 0x178 + 0x191) >> 1 & 1) == 0) {
    if (bVar8) {
      (**(code **)(*unaff_x19 + 0x918))
                (fStack00000000000000e0,fStack00000000000000e4,fStack00000000000000b8,
                 fStack00000000000000cc,fVar49,fStack00000000000000b8);
    }
LAB_067dcd4c:
    bVar8 = false;
  }
  else {
    if ((((int)unaff_x19[0x65] < (int)uVar84) || ((int)unaff_x19[0x66] < (int)uVar16)) ||
       (((int)unaff_x19[0x5c] == 5 &&
        (*(int *)(lVar34 + lVar25 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x67])))) {
      bVar13 = false;
    }
    else {
      bVar13 = true;
    }
    if (bVar8) {
LAB_067dcb48:
      if (uVar33 <= uVar84) goto LAB_067dd448;
      lVar34 = lVar34 + lVar25 * 0x178;
      fVar65 = *(float *)(lVar34 + 0x128);
      fVar69 = *(float *)(lVar34 + 0x188);
      uVar45 = *(undefined8 *)(lVar34 + 0x17c);
      fVar85 = *(float *)(lVar34 + 0x184);
      uVar23 = *(undefined8 *)(lVar34 + 0x184);
      fVar75 = *(float *)(lVar34 + 0x18c);
      fVar54 = *(float *)(lVar34 + 0x11c);
      fVar82 = *(float *)(lVar34 + 0x148);
      fVar71 = *(float *)(lVar34 + 0x150);
      in_stack_00000188 = uVar45;
      fStack0000000000000190 = fVar85;
      fStack0000000000000194 = fVar69;
      in_stack_00000198 = fVar75;
      in_stack_000001a0 = in_stack_00001060;
      in_stack_000001a8 = in_stack_00001068;
      in_stack_000001b0 = in_stack_00001070;
      uVar26 = FUN_067f7280(&stack0x000001a0,&stack0x00000188,0);
      lVar34 = *(long *)Method_System_Collections_Generic_HashSet<CAPI_ovrAvatar2JointType>_Remove__
      ;
      if ((uVar26 & 1) == 0) {
        if (*(int *)(lVar34 + 0xe0) == 0) {
          thunk_FUN_032cd7c0(lVar34);
        }
        fVar65 = fVar65 + (float)in_stack_00001068;
        fVar54 = fVar54 - (float)((ulong)in_stack_00001060 >> 0x20);
        fVar82 = fVar82 + (float)((ulong)in_stack_00001068 >> 0x20);
        if (fVar54 <= fStack00000000000000e0) {
          fStack00000000000000e0 = fVar54;
        }
        if (fVar71 - in_stack_00001070 <= fStack00000000000000e4) {
          fStack00000000000000e4 = fVar71 - in_stack_00001070;
        }
        if (fStack00000000000000cc <= fVar65) {
          fStack00000000000000cc = fVar65;
        }
        if (fVar49 <= fVar82) {
          fVar49 = fVar82;
        }
      }
      else {
        if (*(int *)(lVar34 + 0xe0) == 0) {
          thunk_FUN_032cd7c0(lVar34);
        }
        fVar83 = (fVar54 + (fStack00000000000000cc - (float)in_stack_00001068)) * 0.5;
        fVar54 = fStack00000000000000e4;
        if (fVar71 <= fStack00000000000000e4) {
          fVar54 = fVar71;
        }
        if (fVar49 <= fVar82) {
          fVar49 = fVar82;
        }
        (**(code **)(*unaff_x19 + 0x918))
                  (fStack00000000000000e0,fVar54,fStack00000000000000b8,fVar83,fVar49,
                   fStack00000000000000b8);
        fStack00000000000000e4 = fVar71 - fVar75;
        fStack00000000000000cc = fVar65 + fVar85;
        fStack00000000000000b8 = 0.0;
        fStack00000000000000e0 = fVar83;
        in_stack_00001060 = uVar45;
        in_stack_00001068 = uVar23;
        in_stack_00001070 = fVar75;
        fVar49 = fVar82 + fVar69;
      }
      if (((*puVar1 == 1) || (uVar84 == uVar30)) || (((int)uVar19 <= (int)uVar84 || (!bVar13)))) {
        (**(code **)(*unaff_x19 + 0x918))
                  (fStack00000000000000e0,fStack00000000000000e4,fStack00000000000000b8,
                   fStack00000000000000cc,fVar49,fStack00000000000000b8);
        goto LAB_067dcd4c;
      }
      bVar8 = true;
    }
    else {
      if ((((uVar37 != 0xd) && ((uVar37 & 0xfffe) != 10)) && ((int)uVar84 <= (int)uVar19)) &&
         (bVar13)) {
        if (uVar84 == uVar19) {
          if (*(int *)(*(long *)PTR_DAT_0727fa20 + 0xe0) == 0) {
            thunk_FUN_032cd7c0();
          }
          uVar26 = FUN_058a5c00(uVar37,0);
          if ((uVar26 & 1) != 0) goto LAB_067dcabc;
        }
        puVar11 = 
        Method_System_Collections_Generic_HashSet<OvrAvatarShaderNameUtils_KnownShader>_Add__;
        lVar48 = *(long *)
                  Method_System_Collections_Generic_HashSet<OvrAvatarShaderNameUtils_KnownShader>_Add__
        ;
        if (*(int *)(lVar48 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
          lVar48 = *(long *)puVar11;
        }
        if ((*plVar2 != 0) && (lVar34 = *(long *)(*plVar2 + 0x38), lVar34 != 0)) {
          uVar33 = (uint)*(undefined8 *)(lVar34 + 0x18);
          if (uVar84 < uVar33) {
            lVar48 = *(long *)(lVar48 + 0xb8);
            lVar41 = lVar34 + lVar25 * 0x178;
            in_stack_00001068 = *(undefined8 *)(lVar41 + 0x184);
            in_stack_00001060 = *(undefined8 *)(lVar41 + 0x17c);
            fStack00000000000000e0 = *(float *)(lVar48 + 0x1598);
            fStack00000000000000e4 = *(float *)(lVar48 + 0x159c);
            in_stack_00001070 = *(float *)(lVar41 + 0x18c);
            fStack00000000000000cc = *(float *)(lVar48 + 0x15a0);
            fVar49 = *(float *)(lVar48 + 0x15a4);
            fStack00000000000000b8 = 0.0;
            goto LAB_067dcb48;
          }
          goto LAB_067dd448;
        }
        goto LAB_067dd33c;
      }
LAB_067dcabc:
      bVar8 = false;
    }
  }
  uVar84 = *puVar1;
  fStack0000000000000124 = (float)((int)fStack0000000000000124 + 1);
  lVar22 = lVar22 + 0x178;
  bVar13 = (int)uVar84 <= (int)uVar18;
  uVar33 = uVar16;
  uVar18 = uVar18 + 1;
  if (bVar13) goto LAB_067dcf18;
  goto LAB_067daf08;
LAB_067dcf18:
  lVar21 = *plVar2;
  if (lVar21 == 0) goto LAB_067dd33c;
  iVar38 = uVar16 + 1;
  plVar47 = (long *)PTR_DAT_072a6408;
LAB_067dcf3c:
  *(uint *)(lVar21 + 0x18) = uVar84;
  lVar22 = unaff_x19[0xd4];
  *(int *)(lVar21 + 0x2c) = iVar38;
  if ((int)uVar84 < 1 || fStack00000000000000dc == 0.0) {
    fStack00000000000000dc = 1.4013e-45;
  }
  *(int *)(lVar21 + 0x1c) = (int)lVar22;
  *(float *)(lVar21 + 0x24) = fStack00000000000000dc;
  *(int *)(lVar21 + 0x30) = (int)unaff_x19[0x96] + 1;
  if (((int)unaff_x19[99] != 0xff) ||
     (uVar26 = (**(code **)(*unaff_x19 + 0x1c8))(), (uVar26 & 1) == 0)) {
LAB_067da818:
    if (*(int *)(*(long *)PTR_DAT_072a5e70 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    FUN_067f5430();
    return;
  }
  lVar21 = unaff_x19[0xdb];
  if (lVar21 != 0) {
    (**(code **)(lVar21 + 0x18))
              (*(undefined8 *)(lVar21 + 0x40),*plVar2,*(undefined8 *)(lVar21 + 0x28));
  }
  if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
    if ((*plVar2 == 0) || (lVar21 = *(long *)(*plVar2 + 0x60), lVar21 == 0)) goto LAB_067dd33c;
    if (*(int *)(*plVar47 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    if (*(int *)(lVar21 + 0x18) == 0) goto LAB_067dd448;
    FUN_0682f6d0(lVar21 + 0x20,1,0);
  }
  if (unaff_x19[0x74] != 0) {
    FUN_06bcb264(unaff_x19[0x74],0);
    if ((unaff_x19[0x6d] != 0) && (lVar21 = *(long *)(unaff_x19[0x6d] + 0x60), lVar21 != 0)) {
      if (*(int *)(lVar21 + 0x18) == 0) {
LAB_067dd448:
                    /* WARNING: Subroutine does not return */
        Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
      }
      if (unaff_x19[0x74] != 0) {
        FUN_06bc8700(unaff_x19[0x74],*(undefined8 *)(lVar21 + 0x30),0);
        if ((unaff_x19[0x6d] != 0) && (lVar21 = *(long *)(unaff_x19[0x6d] + 0x60), lVar21 != 0)) {
          if (*(int *)(lVar21 + 0x18) == 0) goto LAB_067dd448;
          if (unaff_x19[0x74] != 0) {
            FUN_06bc8904(unaff_x19[0x74],*(undefined8 *)(lVar21 + 0x48),0);
            if ((unaff_x19[0x6d] != 0) && (lVar21 = *(long *)(unaff_x19[0x6d] + 0x60), lVar21 != 0))
            {
              if (*(int *)(lVar21 + 0x18) == 0) goto LAB_067dd448;
              if (unaff_x19[0x74] != 0) {
                FUN_06bc8964(unaff_x19[0x74],*(undefined8 *)(lVar21 + 0x50),0);
                if ((unaff_x19[0x6d] != 0) &&
                   (lVar21 = *(long *)(unaff_x19[0x6d] + 0x60), lVar21 != 0)) {
                  if (*(int *)(lVar21 + 0x18) == 0) goto LAB_067dd448;
                  if (unaff_x19[0x74] != 0) {
                    FUN_06bc8b24(unaff_x19[0x74],*(undefined8 *)(lVar21 + 0x58),0);
                    if (unaff_x19[0x74] != 0) {
                      FUN_06bcaf70(unaff_x19[0x74],0);
                      lVar21 = *plVar2;
                      if (lVar21 != 0) {
                        lVar34 = 0;
                        lVar22 = 0;
                        do {
                          uVar26 = lVar22 + 1;
                          if ((long)*(int *)(lVar21 + 0x34) <= (long)uVar26) goto LAB_067da818;
                          lVar21 = *(long *)(lVar21 + 0x60);
                          if (lVar21 == 0) break;
                          if (*(int *)(*plVar47 + 0xe0) == 0) {
                            thunk_FUN_032cd7c0();
                          }
                          if (*(uint *)(lVar21 + 0x18) <= uVar26) goto LAB_067dd448;
                          FUN_0682f59c(lVar21 + lVar34 + 0x70,0);
                          lVar21 = unaff_x19[0xe1];
                          if (lVar21 == 0) break;
                          if (*(uint *)(lVar21 + 0x18) <= uVar26) goto LAB_067dd448;
                          uVar27 = *(undefined8 *)(lVar21 + lVar22 * 8 + 0x28);
                          if (*(int *)(*(long *)PTR_DAT_072794f0 + 0xe0) == 0) {
                            thunk_FUN_032cd7c0();
                          }
                          uVar64 = FUN_06bece64(uVar27,0,0);
                          if ((uVar64 & 1) == 0) {
                            if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
                              if ((*plVar2 == 0) ||
                                 (lVar21 = *(long *)(*plVar2 + 0x60), lVar21 == 0)) break;
                              if (*(int *)(*plVar47 + 0xe0) == 0) {
                                thunk_FUN_032cd7c0();
                              }
                              if (*(uint *)(lVar21 + 0x18) <= uVar26) goto LAB_067dd448;
                              FUN_0682f6d0(lVar21 + lVar34 + 0x70,1,0);
                            }
                            lVar21 = unaff_x19[0xe1];
                            if (lVar21 == 0) break;
                            if (*(uint *)(lVar21 + 0x18) <= uVar26) goto LAB_067dd448;
                            lVar21 = *(long *)(lVar21 + lVar22 * 8 + 0x28);
                            if (lVar21 == 0) break;
                            lVar21 = FUN_068369d8(lVar21,0);
                            if ((*plVar2 == 0) || (lVar48 = *(long *)(*plVar2 + 0x60), lVar48 == 0))
                            break;
                            if (*(uint *)(lVar48 + 0x18) <= uVar26) goto LAB_067dd448;
                            if (lVar21 == 0) break;
                            FUN_06bc8700(lVar21,*(undefined8 *)(lVar48 + lVar34 + 0x80),0);
                            lVar21 = unaff_x19[0xe1];
                            if (lVar21 == 0) break;
                            if (*(uint *)(lVar21 + 0x18) <= uVar26) goto LAB_067dd448;
                            lVar21 = *(long *)(lVar21 + lVar22 * 8 + 0x28);
                            if (lVar21 == 0) break;
                            lVar21 = FUN_068369d8(lVar21,0);
                            if ((*plVar2 == 0) || (lVar48 = *(long *)(*plVar2 + 0x60), lVar48 == 0))
                            break;
                            if (*(uint *)(lVar48 + 0x18) <= uVar26) goto LAB_067dd448;
                            if (lVar21 == 0) break;
                            FUN_06bc8904(lVar21,*(undefined8 *)(lVar48 + lVar34 + 0x98),0);
                            lVar21 = unaff_x19[0xe1];
                            if (lVar21 == 0) break;
                            if (*(uint *)(lVar21 + 0x18) <= uVar26) goto LAB_067dd448;
                            lVar21 = *(long *)(lVar21 + lVar22 * 8 + 0x28);
                            if (lVar21 == 0) break;
                            lVar21 = FUN_068369d8(lVar21,0);
                            if ((*plVar2 == 0) || (lVar48 = *(long *)(*plVar2 + 0x60), lVar48 == 0))
                            break;
                            if (*(uint *)(lVar48 + 0x18) <= uVar26) goto LAB_067dd448;
                            if (lVar21 == 0) break;
                            FUN_06bc8964(lVar21,*(undefined8 *)(lVar48 + lVar34 + 0xa0),0);
                            lVar21 = unaff_x19[0xe1];
                            if (lVar21 == 0) break;
                            if (*(uint *)(lVar21 + 0x18) <= uVar26) goto LAB_067dd448;
                            lVar21 = *(long *)(lVar21 + lVar22 * 8 + 0x28);
                            if (lVar21 == 0) break;
                            lVar21 = FUN_068369d8(lVar21,0);
                            if ((*plVar2 == 0) || (lVar48 = *(long *)(*plVar2 + 0x60), lVar48 == 0))
                            break;
                            if (*(uint *)(lVar48 + 0x18) <= uVar26) goto LAB_067dd448;
                            if (lVar21 == 0) break;
                            FUN_06bc8b24(lVar21,*(undefined8 *)(lVar48 + lVar34 + 0xa8),0);
                            lVar21 = unaff_x19[0xe1];
                            if (lVar21 == 0) break;
                            if (*(uint *)(lVar21 + 0x18) <= uVar26) goto LAB_067dd448;
                            lVar21 = *(long *)(lVar21 + lVar22 * 8 + 0x28);
                            if ((lVar21 == 0) || (lVar21 = FUN_068369d8(lVar21,0), lVar21 == 0))
                            break;
                            FUN_06bcaf70(lVar21,0);
                          }
                          lVar21 = *plVar2;
                          lVar22 = lVar22 + 1;
                          lVar34 = lVar34 + 0x50;
                        } while (lVar21 != 0);
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
  goto LAB_067dd33c;
}


