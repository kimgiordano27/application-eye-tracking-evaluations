/*
FUNCTION_NAME: FUN_0162b2ec
ENTRY_POINT: 0162b2ec
PROGRAM: Lovesick-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_10;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_0162b2ec(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  byte bVar4;
  int iVar5;
  undefined1 auVar6 [16];
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined1 auVar11 [16];
  uint uVar12;
  int iVar13;
  undefined8 *puVar14;
  long lVar15;
  int *piVar16;
  ulong uVar17;
  long *plVar18;
  long lVar19;
  ulong uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  long lVar23;
  undefined1 auVar24 [16];
  undefined8 local_a8;
  int *piStack_a0;
  int **local_98;
  undefined1 local_90 [16];
  undefined1 local_80 [16];
  int local_6c;
  int *local_68;
  
  local_68 = param_1;
  if ((DAT_037781bc & 1) == 0) {
    thunk_FUN_00d48444(OVRPlugin_OVRP_1_95_0_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033f3600);
    thunk_FUN_00d48444(Method_Meta_Conduit_Manifest_<>c_<ResolveAllActions>b__29_1__);
    thunk_FUN_00d48444(System_SystemException_TypeInfo);
    thunk_FUN_00d48444(Mono_Security_Interface_TlsException_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_11432);
    thunk_FUN_00d48444(PTR_DAT_033edd40);
    thunk_FUN_00d48444(System_Collections_Generic_List<SerializationCallback>_TypeInfo);
    thunk_FUN_00d48444(Meta_XR_MRUtilityKit_AnchorPrefabSpawner_SelectionMode_TypeInfo);
    DAT_037781bc = 1;
  }
  puVar10 = Meta_XR_MRUtilityKit_AnchorPrefabSpawner_SelectionMode_TypeInfo;
  puVar9 = Mono_Security_Interface_TlsException_TypeInfo;
  puVar8 = System_Collections_Generic_List<SerializationCallback>_TypeInfo;
  local_80._0_8_ = 0;
  local_80._8_8_ = 0;
  local_90._0_8_ = 0;
  local_90._8_8_ = 0;
  auVar24 = ZEXT816(0);
  local_6c = *param_1;
  lVar23 = *(long *)(param_1 + 10);
  auVar11 = ZEXT816(0);
  auVar6 = ZEXT816(0);
  switch(local_6c) {
  case 0:
    local_80 = *(undefined1 (*) [16])(param_1 + 0x16);
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    local_6c = -1;
    *param_1 = -1;
LAB_0162b3fc:
    local_90 = auVar24;
    if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    if (DAT_037781e0 == '\0') {
      thunk_FUN_00d48444(Meta_XR_MRUtilityKit_AnchorPrefabSpawner_SelectionMode_TypeInfo);
      DAT_037781e0 = '\x01';
    }
    if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    if (DAT_037781e1 == '\0') {
      thunk_FUN_00d48444(
                        Field_<PrivateImplementationDetails>_3F62692E2AD5078353EC4471A13421A61EE493294CF59DC66626A6EF9CCCD2C4
                        );
      thunk_FUN_00d48444(
                        Method_System_ComponentModel_ReflectTypeDescriptionProvider_GetTypeFromName__
                        );
      DAT_037781e1 = '\x01';
    }
    uVar21 = local_80._0_8_;
    if ((long *)local_80._0_8_ != (long *)0x0) {
      lVar19 = *(long *)local_80._0_8_;
      bVar4 = *(byte *)(*(long *)
                         Method_System_ComponentModel_ReflectTypeDescriptionProvider_GetTypeFromName__
                       + 300);
      if ((*(byte *)(lVar19 + 300) < bVar4) ||
         (*(long *)(*(long *)(lVar19 + 200) + (ulong)bVar4 * 8 + -8) !=
          *(long *)Method_System_ComponentModel_ReflectTypeDescriptionProvider_GetTypeFromName__)) {
        uVar20 = local_80._8_8_ & 0xffff;
        uVar17 = (ulong)*(ushort *)(lVar19 + 0x12a);
        if (uVar17 != 0) {
          piVar16 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) ==
                *(long *)
                 Field_<PrivateImplementationDetails>_3F62692E2AD5078353EC4471A13421A61EE493294CF59DC66626A6EF9CCCD2C4
               ) {
              puVar14 = (undefined8 *)(lVar19 + (long)(*piVar16 + 2) * 0x10 + 0x138);
              goto LAB_0162b6f0;
            }
            uVar17 = uVar17 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar17 != 0);
        }
        puVar14 = (undefined8 *)
                  FUN_00d59724(local_80._0_8_,
                               *(long *)
                                Field_<PrivateImplementationDetails>_3F62692E2AD5078353EC4471A13421A61EE493294CF59DC66626A6EF9CCCD2C4
                               ,2);
LAB_0162b6f0:
        (*(code *)*puVar14)(uVar21,uVar20,puVar14[1]);
      }
      else {
        FUN_016a13e8(local_80._0_8_,0);
      }
    }
    if (lVar23 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
LAB_0162b704:
    *(undefined4 *)(lVar23 + 0x58) = 0;
    break;
  case 1:
    local_80 = *(undefined1 (*) [16])(param_1 + 0x16);
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    local_6c = -1;
    *param_1 = -1;
    goto LAB_0162b4fc;
  case 2:
    goto switchD_0162b3e0_caseD_2;
  case 3:
    local_80 = *(undefined1 (*) [16])(param_1 + 0x16);
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    local_6c = -1;
    *param_1 = -1;
    goto LAB_0162c4d0;
  default:
    iVar13 = param_1[8];
    iVar1 = param_1[9];
    param_1[0x12] = iVar13;
    param_1[0x13] = iVar1;
    if (lVar23 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    iVar3 = *(int *)(lVar23 + 0x48);
    if (0 < iVar3) {
      iVar5 = *(int *)(lVar23 + 0x4c) - iVar3;
      if (iVar13 < iVar5) {
        FUN_0179eccc(*(undefined8 *)(param_1 + 0xc),iVar1,*(undefined8 *)(lVar23 + 0x40),iVar3,
                     iVar13,0);
        piVar16 = local_68 + 8;
LAB_0162bc98:
        *(int *)(lVar23 + 0x48) = *piVar16 + *(int *)(lVar23 + 0x48);
        goto LAB_0162bca8;
      }
      FUN_0179eccc(*(undefined8 *)(param_1 + 0xc),iVar1,*(undefined8 *)(lVar23 + 0x40),iVar3,iVar5,0
                  );
      iVar13 = *(int *)(lVar23 + 0x4c);
      iVar1 = iVar13 - *(int *)(lVar23 + 0x48);
      local_68[0x12] = local_68[0x12] - iVar1;
      local_68[0x13] = iVar1 + local_68[0x13];
      *(int *)(lVar23 + 0x48) = iVar13;
      param_1 = local_68;
    }
    uVar12 = *(uint *)(lVar23 + 0x58);
    if (0 < (int)uVar12) {
      plVar18 = *(long **)(lVar23 + 0x28);
      lVar19 = *(long *)(lVar23 + 0x50);
      if ((char)param_1[0xe] != '\0') {
        if (lVar19 == 0) {
          FUN_01792d54(0);
          lVar15 = 0;
        }
        else {
          if (*(uint *)(lVar19 + 0x18) < uVar12) {
            FUN_01792d54(0);
          }
          lVar15 = (ulong)uVar12 << 0x20;
        }
        if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        local_90 = (**(code **)(*plVar18 + 0x308))
                             (plVar18,lVar19,lVar15,*(undefined8 *)(local_68 + 0x10),
                              *(undefined8 *)(*plVar18 + 0x310));
        if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)puVar10);
        }
        local_80 = FUN_017e8984(local_90,0);
        if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)puVar8);
        }
        if (DAT_037781de == '\0') {
          thunk_FUN_00d48444(Meta_XR_MRUtilityKit_AnchorPrefabSpawner_SelectionMode_TypeInfo);
          DAT_037781de = '\x01';
        }
        if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        if (DAT_037781df == '\0') {
          thunk_FUN_00d48444(
                            Field_<PrivateImplementationDetails>_3F62692E2AD5078353EC4471A13421A61EE493294CF59DC66626A6EF9CCCD2C4
                            );
          thunk_FUN_00d48444(
                            Method_System_ComponentModel_ReflectTypeDescriptionProvider_GetTypeFromName__
                            );
          DAT_037781df = '\x01';
        }
        uVar21 = local_80._0_8_;
        auVar24 = local_90;
        if ((long *)local_80._0_8_ != (long *)0x0) {
          lVar19 = *(long *)local_80._0_8_;
          bVar4 = *(byte *)(*(long *)
                             Method_System_ComponentModel_ReflectTypeDescriptionProvider_GetTypeFromName__
                           + 300);
          if ((*(byte *)(lVar19 + 300) < bVar4) ||
             (*(long *)(*(long *)(lVar19 + 200) + (ulong)bVar4 * 8 + -8) !=
              *(long *)Method_System_ComponentModel_ReflectTypeDescriptionProvider_GetTypeFromName__
             )) {
            uVar20 = local_80._8_8_ & 0xffff;
            uVar17 = (ulong)*(ushort *)(lVar19 + 0x12a);
            if (uVar17 != 0) {
              piVar16 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
              do {
                if (*(long *)(piVar16 + -2) ==
                    *(long *)
                     Field_<PrivateImplementationDetails>_3F62692E2AD5078353EC4471A13421A61EE493294CF59DC66626A6EF9CCCD2C4
                   ) {
                  puVar14 = (undefined8 *)(lVar19 + (long)*piVar16 * 0x10 + 0x138);
                  goto LAB_0162bb98;
                }
                uVar17 = uVar17 - 1;
                piVar16 = piVar16 + 4;
              } while (uVar17 != 0);
            }
            puVar14 = (undefined8 *)
                      FUN_00d59724(local_80._0_8_,
                                   *(long *)
                                    Field_<PrivateImplementationDetails>_3F62692E2AD5078353EC4471A13421A61EE493294CF59DC66626A6EF9CCCD2C4
                                   ,0);
LAB_0162bb98:
            iVar13 = (*(code *)*puVar14)(uVar21,uVar20,puVar14[1]);
            auVar24 = local_90;
            if (iVar13 == 0) goto LAB_0162bbc0;
          }
          else {
            uVar17 = FUN_017e7b04(local_80._0_8_,0);
            auVar24 = local_90;
            if ((uVar17 & 1) == 0) {
LAB_0162bbc0:
              piVar16 = local_68;
              local_6c = 0;
              *local_68 = 0;
              *(undefined1 (*) [16])(local_68 + 0x16) = local_80;
              if (*(int *)(*(long *)System_SystemException_TypeInfo + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              FUN_010bbddc(piVar16 + 2,local_80,local_68,
                           *(undefined8 *)
                            Method_Meta_Conduit_Manifest_<>c_<ResolveAllActions>b__29_1__);
              return;
            }
          }
        }
        goto LAB_0162b3fc;
      }
      if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      (**(code **)(*plVar18 + 0x368))(plVar18,lVar19,0,uVar12,*(undefined8 *)(*plVar18 + 0x370));
      goto LAB_0162b704;
    }
  }
  iVar13 = *(int *)(lVar23 + 0x48);
  if (iVar13 == *(int *)(lVar23 + 0x4c)) {
    plVar18 = *(long **)(lVar23 + 0x30);
    if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    lVar19 = *plVar18;
    uVar22 = *(undefined8 *)(lVar23 + 0x40);
    uVar21 = *(undefined8 *)(lVar23 + 0x50);
    uVar17 = (ulong)*(ushort *)(lVar19 + 0x12a);
    if (uVar17 != 0) {
      piVar16 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)puVar9) {
          puVar14 = (undefined8 *)(lVar19 + (long)(*piVar16 + 3) * 0x10 + 0x138);
          goto LAB_0162b774;
        }
        uVar17 = uVar17 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar17 != 0);
    }
    puVar14 = (undefined8 *)FUN_00d59724(plVar18,*(long *)puVar9,3);
LAB_0162b774:
    uVar12 = (*(code *)*puVar14)(plVar18,uVar22,0,iVar13,uVar21,0,puVar14[1]);
    local_68[0x14] = uVar12;
    plVar18 = *(long **)(lVar23 + 0x28);
    lVar19 = *(long *)(lVar23 + 0x50);
    if ((char)local_68[0xe] == '\0') {
      if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      (**(code **)(*plVar18 + 0x368))(plVar18,lVar19,0,uVar12,*(undefined8 *)(*plVar18 + 0x370));
    }
    else {
      if (lVar19 == 0) {
        if (uVar12 != 0) {
          FUN_01792d54(0);
        }
        lVar19 = 0;
        lVar15 = 0;
      }
      else {
        if (*(uint *)(lVar19 + 0x18) < uVar12) {
          FUN_01792d54(0);
        }
        lVar15 = (ulong)uVar12 << 0x20;
      }
      if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      auVar24 = (**(code **)(*plVar18 + 0x308))
                          (plVar18,lVar19,lVar15,*(undefined8 *)(local_68 + 0x10),
                           *(undefined8 *)(*plVar18 + 0x310));
      local_90 = auVar24;
      if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar10);
      }
      auVar24 = FUN_017e8984(local_90,0);
      local_80 = auVar24;
      if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar8);
      }
      if (DAT_037781de == '\0') {
        thunk_FUN_00d48444(Meta_XR_MRUtilityKit_AnchorPrefabSpawner_SelectionMode_TypeInfo);
        DAT_037781de = '\x01';
      }
      if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      if (DAT_037781df == '\0') {
        thunk_FUN_00d48444(
                          Field_<PrivateImplementationDetails>_3F62692E2AD5078353EC4471A13421A61EE493294CF59DC66626A6EF9CCCD2C4
                          );
        thunk_FUN_00d48444(
                          Method_System_ComponentModel_ReflectTypeDescriptionProvider_GetTypeFromName__
                          );
        DAT_037781df = '\x01';
      }
      uVar21 = local_80._0_8_;
      auVar24 = local_90;
      if ((long *)local_80._0_8_ != (long *)0x0) {
        lVar19 = *(long *)local_80._0_8_;
        bVar4 = *(byte *)(*(long *)
                           Method_System_ComponentModel_ReflectTypeDescriptionProvider_GetTypeFromName__
                         + 300);
        if ((*(byte *)(lVar19 + 300) < bVar4) ||
           (*(long *)(*(long *)(lVar19 + 200) + (ulong)bVar4 * 8 + -8) !=
            *(long *)Method_System_ComponentModel_ReflectTypeDescriptionProvider_GetTypeFromName__))
        {
          uVar20 = local_80._8_8_ & 0xffff;
          uVar17 = (ulong)*(ushort *)(lVar19 + 0x12a);
          if (uVar17 != 0) {
            piVar16 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) ==
                  *(long *)
                   Field_<PrivateImplementationDetails>_3F62692E2AD5078353EC4471A13421A61EE493294CF59DC66626A6EF9CCCD2C4
                 ) {
                puVar14 = (undefined8 *)(lVar19 + (long)*piVar16 * 0x10 + 0x138);
                goto LAB_0162bb0c;
              }
              uVar17 = uVar17 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar17 != 0);
          }
          puVar14 = (undefined8 *)
                    FUN_00d59724(local_80._0_8_,
                                 *(long *)
                                  Field_<PrivateImplementationDetails>_3F62692E2AD5078353EC4471A13421A61EE493294CF59DC66626A6EF9CCCD2C4
                                 ,0);
LAB_0162bb0c:
          iVar13 = (*(code *)*puVar14)(uVar21,uVar20,puVar14[1]);
          auVar24 = local_90;
          if (iVar13 == 0) goto LAB_0162bb34;
        }
        else {
          uVar17 = FUN_017e7b04(local_80._0_8_,0);
          auVar24 = local_90;
          if ((uVar17 & 1) == 0) {
LAB_0162bb34:
            piVar16 = local_68;
            local_6c = 1;
            *local_68 = 1;
            *(undefined1 (*) [16])(local_68 + 0x16) = local_80;
            if (*(int *)(*(long *)System_SystemException_TypeInfo + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            FUN_010bbddc(piVar16 + 2,local_80,local_68,
                         *(undefined8 *)
                          Method_Meta_Conduit_Manifest_<>c_<ResolveAllActions>b__29_1__);
            return;
          }
        }
      }
LAB_0162b4fc:
      local_90 = auVar24;
      if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      if (DAT_037781e0 == '\0') {
        thunk_FUN_00d48444(Meta_XR_MRUtilityKit_AnchorPrefabSpawner_SelectionMode_TypeInfo);
        DAT_037781e0 = '\x01';
      }
      if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      if (DAT_037781e1 == '\0') {
        thunk_FUN_00d48444(
                          Field_<PrivateImplementationDetails>_3F62692E2AD5078353EC4471A13421A61EE493294CF59DC66626A6EF9CCCD2C4
                          );
        thunk_FUN_00d48444(
                          Method_System_ComponentModel_ReflectTypeDescriptionProvider_GetTypeFromName__
                          );
        DAT_037781e1 = '\x01';
      }
      uVar21 = local_80._0_8_;
      if ((long *)local_80._0_8_ != (long *)0x0) {
        lVar19 = *(long *)local_80._0_8_;
        bVar4 = *(byte *)(*(long *)
                           Method_System_ComponentModel_ReflectTypeDescriptionProvider_GetTypeFromName__
                         + 300);
        if ((*(byte *)(lVar19 + 300) < bVar4) ||
           (*(long *)(*(long *)(lVar19 + 200) + (ulong)bVar4 * 8 + -8) !=
            *(long *)Method_System_ComponentModel_ReflectTypeDescriptionProvider_GetTypeFromName__))
        {
          uVar20 = local_80._8_8_ & 0xffff;
          uVar17 = (ulong)*(ushort *)(lVar19 + 0x12a);
          if (uVar17 != 0) {
            piVar16 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) ==
                  *(long *)
                   Field_<PrivateImplementationDetails>_3F62692E2AD5078353EC4471A13421A61EE493294CF59DC66626A6EF9CCCD2C4
                 ) {
                puVar14 = (undefined8 *)(lVar19 + (long)(*piVar16 + 2) * 0x10 + 0x138);
                goto LAB_0162b6c4;
              }
              uVar17 = uVar17 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar17 != 0);
          }
          puVar14 = (undefined8 *)
                    FUN_00d59724(local_80._0_8_,
                                 *(long *)
                                  Field_<PrivateImplementationDetails>_3F62692E2AD5078353EC4471A13421A61EE493294CF59DC66626A6EF9CCCD2C4
                                 ,2);
LAB_0162b6c4:
          (*(code *)*puVar14)(uVar21,uVar20,puVar14[1]);
        }
        else {
          FUN_016a13e8(local_80._0_8_,0);
        }
      }
      if (lVar23 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
    }
    *(undefined4 *)(lVar23 + 0x48) = 0;
  }
  while (iVar13 = local_68[0x12], 0 < iVar13) {
    if (lVar23 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    iVar1 = *(int *)(lVar23 + 0x4c);
    if (iVar13 < iVar1) {
      FUN_0179eccc(*(undefined8 *)(local_68 + 0xc),local_68[0x13],*(undefined8 *)(lVar23 + 0x40),0,
                   iVar13,0);
      piVar16 = local_68 + 0x12;
      goto LAB_0162bc98;
    }
    plVar18 = *(long **)(lVar23 + 0x30);
    if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    lVar19 = *plVar18;
    uVar17 = (ulong)*(ushort *)(lVar19 + 0x12a);
    if (uVar17 != 0) {
      piVar16 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)puVar9) {
          puVar14 = (undefined8 *)(lVar19 + (long)(*piVar16 + 2) * 0x10 + 0x138);
          goto LAB_0162bd70;
        }
        uVar17 = uVar17 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar17 != 0);
    }
    puVar14 = (undefined8 *)FUN_00d59724(plVar18,*(long *)puVar9,2);
LAB_0162bd70:
    uVar12 = (*(code *)*puVar14)(plVar18,puVar14[1]);
    puVar7 = PTR_DAT_033f3600;
    iVar3 = 0;
    if (iVar1 != 0) {
      iVar3 = iVar13 / iVar1;
    }
    if ((iVar3 < 2) || (((uVar12 ^ 1) & 1) != 0)) {
      plVar18 = *(long **)(lVar23 + 0x30);
      if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      lVar19 = *plVar18;
      uVar2 = *(undefined4 *)(lVar23 + 0x4c);
      uVar21 = *(undefined8 *)(lVar23 + 0x50);
      uVar22 = *(undefined8 *)(local_68 + 0xc);
      iVar13 = local_68[0x13];
      uVar17 = (ulong)*(ushort *)(lVar19 + 0x12a);
      if (uVar17 != 0) {
        piVar16 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)puVar9) {
            puVar14 = (undefined8 *)(lVar19 + (long)(*piVar16 + 3) * 0x10 + 0x138);
            goto LAB_0162c0c0;
          }
          uVar17 = uVar17 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar17 != 0);
      }
      puVar14 = (undefined8 *)FUN_00d59724(plVar18,*(long *)puVar9,3);
LAB_0162c0c0:
      uVar12 = (*(code *)*puVar14)(plVar18,uVar22,iVar13,uVar2,uVar21,0,puVar14[1]);
      local_68[0x14] = uVar12;
      plVar18 = *(long **)(lVar23 + 0x28);
      lVar19 = *(long *)(lVar23 + 0x50);
      if ((char)local_68[0xe] == '\0') {
        if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        (**(code **)(*plVar18 + 0x368))(plVar18,lVar19,0,uVar12,*(undefined8 *)(*plVar18 + 0x370));
      }
      else {
        if (lVar19 == 0) {
          if (uVar12 != 0) {
            FUN_01792d54(0);
          }
          lVar15 = 0;
          lVar19 = 0;
        }
        else {
          if (*(uint *)(lVar19 + 0x18) < uVar12) {
            FUN_01792d54(0);
          }
          lVar15 = (ulong)uVar12 << 0x20;
        }
        if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        auVar24 = (**(code **)(*plVar18 + 0x308))
                            (plVar18,lVar19,lVar15,*(undefined8 *)(local_68 + 0x10),
                             *(undefined8 *)(*plVar18 + 0x310));
        local_90 = auVar24;
        if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)puVar10);
        }
        auVar24 = FUN_017e8984(local_90,0);
        local_80 = auVar24;
        if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)puVar8);
        }
        if (DAT_037781de == '\0') {
          thunk_FUN_00d48444(Meta_XR_MRUtilityKit_AnchorPrefabSpawner_SelectionMode_TypeInfo);
          DAT_037781de = '\x01';
        }
        if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        if (DAT_037781df == '\0') {
          thunk_FUN_00d48444(
                            Field_<PrivateImplementationDetails>_3F62692E2AD5078353EC4471A13421A61EE493294CF59DC66626A6EF9CCCD2C4
                            );
          thunk_FUN_00d48444(
                            Method_System_ComponentModel_ReflectTypeDescriptionProvider_GetTypeFromName__
                            );
          DAT_037781df = '\x01';
        }
        uVar21 = local_80._0_8_;
        auVar24 = local_90;
        if ((long *)local_80._0_8_ != (long *)0x0) {
          lVar19 = *(long *)local_80._0_8_;
          bVar4 = *(byte *)(*(long *)
                             Method_System_ComponentModel_ReflectTypeDescriptionProvider_GetTypeFromName__
                           + 300);
          if ((*(byte *)(lVar19 + 300) < bVar4) ||
             (*(long *)(*(long *)(lVar19 + 200) + (ulong)bVar4 * 8 + -8) !=
              *(long *)Method_System_ComponentModel_ReflectTypeDescriptionProvider_GetTypeFromName__
             )) {
            uVar20 = local_80._8_8_ & 0xffff;
            uVar17 = (ulong)*(ushort *)(lVar19 + 0x12a);
            if (uVar17 != 0) {
              piVar16 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
              do {
                if (*(long *)(piVar16 + -2) ==
                    *(long *)
                     Field_<PrivateImplementationDetails>_3F62692E2AD5078353EC4471A13421A61EE493294CF59DC66626A6EF9CCCD2C4
                   ) {
                  puVar14 = (undefined8 *)(lVar19 + (long)*piVar16 * 0x10 + 0x138);
                  goto LAB_0162c4bc;
                }
                uVar17 = uVar17 - 1;
                piVar16 = piVar16 + 4;
              } while (uVar17 != 0);
            }
            puVar14 = (undefined8 *)
                      FUN_00d59724(local_80._0_8_,
                                   *(long *)
                                    Field_<PrivateImplementationDetails>_3F62692E2AD5078353EC4471A13421A61EE493294CF59DC66626A6EF9CCCD2C4
                                   ,0);
LAB_0162c4bc:
            iVar13 = (*(code *)*puVar14)(uVar21,uVar20,puVar14[1]);
            auVar24 = local_90;
            if (iVar13 == 0) goto LAB_0162c6b0;
          }
          else {
            uVar17 = FUN_017e7b04(local_80._0_8_,0);
            auVar24 = local_90;
            if ((uVar17 & 1) == 0) {
LAB_0162c6b0:
              piVar16 = local_68;
              local_6c = 3;
              *local_68 = 3;
              *(undefined1 (*) [16])(local_68 + 0x16) = local_80;
              if (*(int *)(*(long *)System_SystemException_TypeInfo + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              FUN_010bbddc(piVar16 + 2,local_80,local_68,
                           *(undefined8 *)
                            Method_Meta_Conduit_Manifest_<>c_<ResolveAllActions>b__29_1__);
              return;
            }
          }
        }
LAB_0162c4d0:
        local_90 = auVar24;
        if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        if (DAT_037781e0 == '\0') {
          thunk_FUN_00d48444(Meta_XR_MRUtilityKit_AnchorPrefabSpawner_SelectionMode_TypeInfo);
          DAT_037781e0 = '\x01';
        }
        if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        if (DAT_037781e1 == '\0') {
          thunk_FUN_00d48444(
                            Field_<PrivateImplementationDetails>_3F62692E2AD5078353EC4471A13421A61EE493294CF59DC66626A6EF9CCCD2C4
                            );
          thunk_FUN_00d48444(
                            Method_System_ComponentModel_ReflectTypeDescriptionProvider_GetTypeFromName__
                            );
          DAT_037781e1 = '\x01';
        }
        uVar21 = local_80._0_8_;
        if ((long *)local_80._0_8_ != (long *)0x0) {
          lVar19 = *(long *)local_80._0_8_;
          bVar4 = *(byte *)(*(long *)
                             Method_System_ComponentModel_ReflectTypeDescriptionProvider_GetTypeFromName__
                           + 300);
          if ((*(byte *)(lVar19 + 300) < bVar4) ||
             (*(long *)(*(long *)(lVar19 + 200) + (ulong)bVar4 * 8 + -8) !=
              *(long *)Method_System_ComponentModel_ReflectTypeDescriptionProvider_GetTypeFromName__
             )) {
            uVar20 = local_80._8_8_ & 0xffff;
            uVar17 = (ulong)*(ushort *)(lVar19 + 0x12a);
            if (uVar17 != 0) {
              piVar16 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
              do {
                if (*(long *)(piVar16 + -2) ==
                    *(long *)
                     Field_<PrivateImplementationDetails>_3F62692E2AD5078353EC4471A13421A61EE493294CF59DC66626A6EF9CCCD2C4
                   ) {
                  puVar14 = (undefined8 *)(lVar19 + (long)(*piVar16 + 2) * 0x10 + 0x138);
                  goto LAB_0162c5c8;
                }
                uVar17 = uVar17 - 1;
                piVar16 = piVar16 + 4;
              } while (uVar17 != 0);
            }
            puVar14 = (undefined8 *)
                      FUN_00d59724(local_80._0_8_,
                                   *(long *)
                                    Field_<PrivateImplementationDetails>_3F62692E2AD5078353EC4471A13421A61EE493294CF59DC66626A6EF9CCCD2C4
                                   ,2);
LAB_0162c5c8:
            (*(code *)*puVar14)(uVar21,uVar20,puVar14[1]);
          }
          else {
            FUN_016a13e8(local_80._0_8_,0);
          }
        }
        if (lVar23 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
      }
      iVar13 = *(int *)(lVar23 + 0x4c);
      local_68[0x12] = local_68[0x12] - iVar13;
      local_68[0x13] = iVar13 + local_68[0x13];
    }
    else {
      local_68[0x1a] = *(int *)(lVar23 + 0x4c) * iVar3;
      if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      lVar15 = *(long *)OVRPlugin_OVRP_1_95_0_TypeInfo;
      lVar19 = *(long *)(lVar15 + 0x20);
      if ((*(byte *)(lVar19 + 0x132) & 1) == 0) {
        lVar19 = FUN_00d5941c();
      }
      lVar19 = *(long *)(*(long *)(lVar19 + 0xc0) + 8);
      if ((*(byte *)(lVar19 + 0x132) & 1) == 0) {
        lVar19 = FUN_00d5941c();
      }
      if (*(int *)(lVar19 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      lVar19 = *(long *)(lVar15 + 0x20);
      if ((*(byte *)(lVar19 + 0x132) & 1) == 0) {
        lVar19 = FUN_00d5941c();
      }
      lVar19 = *(long *)(*(long *)(lVar19 + 0xc0) + 8);
      if ((*(byte *)(lVar19 + 0x132) & 1) == 0) {
        lVar19 = FUN_00d5941c();
      }
      plVar18 = (long *)**(long **)(lVar19 + 0xb8);
      if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      uVar21 = (**(code **)(*plVar18 + 0x178))
                         (plVar18,*(int *)(lVar23 + 0x5c) * iVar3,*(undefined8 *)(*plVar18 + 0x180))
      ;
      *(undefined8 *)(local_68 + 0x1c) = uVar21;
      local_68[0x14] = 0;
      param_1 = local_68;
      auVar11 = local_90;
      auVar6 = local_80;
switchD_0162b3e0_caseD_2:
      local_90 = auVar11;
      piStack_a0 = &local_6c;
      local_98 = &local_68;
      local_a8 = 0;
      if (local_6c == 2) {
        local_80 = *(undefined1 (*) [16])(param_1 + 0x16);
        param_1[0x16] = 0;
        param_1[0x17] = 0;
        param_1[0x18] = 0;
        param_1[0x19] = 0;
        local_6c = -1;
        *param_1 = -1;
LAB_0162be78:
        if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        if (DAT_037781e0 == '\0') {
          thunk_FUN_00d48444(Meta_XR_MRUtilityKit_AnchorPrefabSpawner_SelectionMode_TypeInfo);
          DAT_037781e0 = '\x01';
        }
        if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        if (DAT_037781e1 == '\0') {
          thunk_FUN_00d48444(
                            Field_<PrivateImplementationDetails>_3F62692E2AD5078353EC4471A13421A61EE493294CF59DC66626A6EF9CCCD2C4
                            );
          thunk_FUN_00d48444(
                            Method_System_ComponentModel_ReflectTypeDescriptionProvider_GetTypeFromName__
                            );
          DAT_037781e1 = '\x01';
        }
        uVar21 = local_80._0_8_;
        if ((long *)local_80._0_8_ != (long *)0x0) {
          lVar19 = *(long *)local_80._0_8_;
          bVar4 = *(byte *)(*(long *)
                             Method_System_ComponentModel_ReflectTypeDescriptionProvider_GetTypeFromName__
                           + 300);
          if ((*(byte *)(lVar19 + 300) < bVar4) ||
             (*(long *)(*(long *)(lVar19 + 200) + (ulong)bVar4 * 8 + -8) !=
              *(long *)Method_System_ComponentModel_ReflectTypeDescriptionProvider_GetTypeFromName__
             )) {
            uVar20 = local_80._8_8_ & 0xffff;
            uVar17 = (ulong)*(ushort *)(lVar19 + 0x12a);
            if (uVar17 != 0) {
              piVar16 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
              do {
                if (*(long *)(piVar16 + -2) ==
                    *(long *)
                     Field_<PrivateImplementationDetails>_3F62692E2AD5078353EC4471A13421A61EE493294CF59DC66626A6EF9CCCD2C4
                   ) {
                  puVar14 = (undefined8 *)(lVar19 + (long)(*piVar16 + 2) * 0x10 + 0x138);
                  goto LAB_0162c158;
                }
                uVar17 = uVar17 - 1;
                piVar16 = piVar16 + 4;
              } while (uVar17 != 0);
            }
            puVar14 = (undefined8 *)
                      FUN_00d59724(local_80._0_8_,
                                   *(long *)
                                    Field_<PrivateImplementationDetails>_3F62692E2AD5078353EC4471A13421A61EE493294CF59DC66626A6EF9CCCD2C4
                                   ,2);
LAB_0162c158:
            (*(code *)*puVar14)(uVar21,uVar20,puVar14[1]);
          }
          else {
            FUN_016a13e8(local_80._0_8_,0);
          }
        }
LAB_0162c168:
        iVar13 = 0x1a;
        local_68[0x12] = local_68[0x12] - local_68[0x1a];
        local_68[0x13] = local_68[0x1a] + local_68[0x13];
      }
      else {
        local_80 = auVar6;
        if (lVar23 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        plVar18 = *(long **)(lVar23 + 0x30);
        if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        lVar19 = *plVar18;
        uVar22 = *(undefined8 *)(param_1 + 0xc);
        iVar13 = param_1[0x13];
        iVar1 = param_1[0x1a];
        uVar21 = *(undefined8 *)(param_1 + 0x1c);
        uVar17 = (ulong)*(ushort *)(lVar19 + 0x12a);
        if (uVar17 != 0) {
          piVar16 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == *(long *)puVar9) {
              puVar14 = (undefined8 *)(lVar19 + (long)(*piVar16 + 3) * 0x10 + 0x138);
              goto LAB_0162c028;
            }
            uVar17 = uVar17 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar17 != 0);
        }
        puVar14 = (undefined8 *)FUN_00d59724(plVar18,*(long *)puVar9,3);
        auVar6 = local_80;
LAB_0162c028:
        local_80 = auVar6;
        uVar12 = (*(code *)*puVar14)(plVar18,uVar22,iVar13,iVar1,uVar21,0,puVar14[1]);
        local_68[0x14] = uVar12;
        plVar18 = *(long **)(lVar23 + 0x28);
        lVar19 = *(long *)(local_68 + 0x1c);
        if ((char)local_68[0xe] == '\0') {
          if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          (**(code **)(*plVar18 + 0x368))(plVar18,lVar19,0,uVar12,*(undefined8 *)(*plVar18 + 0x370))
          ;
          goto LAB_0162c168;
        }
        if (lVar19 == 0) {
          if (uVar12 != 0) {
            FUN_01792d54(0);
          }
          lVar15 = 0;
          lVar19 = 0;
        }
        else {
          if (*(uint *)(lVar19 + 0x18) < uVar12) {
            FUN_01792d54(0);
          }
          lVar15 = (ulong)uVar12 << 0x20;
        }
        if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        auVar24 = (**(code **)(*plVar18 + 0x308))
                            (plVar18,lVar19,lVar15,*(undefined8 *)(local_68 + 0x10),
                             *(undefined8 *)(*plVar18 + 0x310));
        local_90 = auVar24;
        if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)puVar10);
        }
        auVar24 = FUN_017e8984(local_90,0);
        local_80 = auVar24;
        if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)puVar8);
        }
        if (DAT_037781de == '\0') {
          thunk_FUN_00d48444(Meta_XR_MRUtilityKit_AnchorPrefabSpawner_SelectionMode_TypeInfo);
          DAT_037781de = '\x01';
        }
        if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        if (DAT_037781df == '\0') {
          thunk_FUN_00d48444(
                            Field_<PrivateImplementationDetails>_3F62692E2AD5078353EC4471A13421A61EE493294CF59DC66626A6EF9CCCD2C4
                            );
          thunk_FUN_00d48444(
                            Method_System_ComponentModel_ReflectTypeDescriptionProvider_GetTypeFromName__
                            );
          DAT_037781df = '\x01';
        }
        uVar21 = local_80._0_8_;
        if ((long *)local_80._0_8_ == (long *)0x0) goto LAB_0162be78;
        lVar19 = *(long *)local_80._0_8_;
        bVar4 = *(byte *)(*(long *)
                           Method_System_ComponentModel_ReflectTypeDescriptionProvider_GetTypeFromName__
                         + 300);
        if ((*(byte *)(lVar19 + 300) < bVar4) ||
           (*(long *)(*(long *)(lVar19 + 200) + (ulong)bVar4 * 8 + -8) !=
            *(long *)Method_System_ComponentModel_ReflectTypeDescriptionProvider_GetTypeFromName__))
        {
          uVar20 = local_80._8_8_ & 0xffff;
          uVar17 = (ulong)*(ushort *)(lVar19 + 0x12a);
          if (uVar17 != 0) {
            piVar16 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) ==
                  *(long *)
                   Field_<PrivateImplementationDetails>_3F62692E2AD5078353EC4471A13421A61EE493294CF59DC66626A6EF9CCCD2C4
                 ) {
                puVar14 = (undefined8 *)(lVar19 + (long)*piVar16 * 0x10 + 0x138);
                goto LAB_0162c478;
              }
              uVar17 = uVar17 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar17 != 0);
          }
          puVar14 = (undefined8 *)
                    FUN_00d59724(local_80._0_8_,
                                 *(long *)
                                  Field_<PrivateImplementationDetails>_3F62692E2AD5078353EC4471A13421A61EE493294CF59DC66626A6EF9CCCD2C4
                                 ,0);
LAB_0162c478:
          iVar13 = (*(code *)*puVar14)(uVar21,uVar20,puVar14[1]);
          if (iVar13 != 0) goto LAB_0162be78;
        }
        else {
          uVar17 = FUN_017e7b04(local_80._0_8_,0);
          if ((uVar17 & 1) != 0) goto LAB_0162be78;
        }
        piVar16 = local_68;
        local_6c = 2;
        *local_68 = 2;
        *(undefined1 (*) [16])(local_68 + 0x16) = local_80;
        if (*(int *)(*(long *)System_SystemException_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_010bbddc(piVar16 + 2,local_80,local_68,
                     *(undefined8 *)Method_Meta_Conduit_Manifest_<>c_<ResolveAllActions>b__29_1__);
        iVar13 = 0xd;
      }
      FUN_00bd8ad0(&local_a8);
      if ((iVar13 != 0x1a) && (iVar13 != 0)) {
        return;
      }
      local_68[0x1c] = 0;
      local_68[0x1d] = 0;
    }
  }
LAB_0162bca8:
  piVar16 = local_68 + 2;
  *local_68 = -2;
  if (*(int *)(*(long *)System_SystemException_TypeInfo + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  FUN_016a2130(piVar16,0);
  return;
}


