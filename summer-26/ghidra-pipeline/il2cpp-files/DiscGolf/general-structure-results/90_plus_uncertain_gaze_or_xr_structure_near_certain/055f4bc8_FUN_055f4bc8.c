/*
FUNCTION_NAME: FUN_055f4bc8
ENTRY_POINT: 055f4bc8
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 119
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


ulong FUN_055f4bc8(long param_1)

{
  undefined1 uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined *puVar6;
  byte bVar7;
  undefined4 uVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  int iVar14;
  int *piVar15;
  undefined8 uVar16;
  long *plVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined1 auStack_1a4 [148];
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long local_78;
  long *plStack_70;
  undefined1 local_68 [16];
  long local_58;
  
  local_58 = param_1;
  if ((DAT_06dbb89a & 1) == 0) {
    FUN_02d965b8(PTR_DAT_069fc868);
    FUN_02d965b8(PTR_DAT_06a0f1a0);
    FUN_02d965b8(
                System_Collections_Generic_Dictionary<Type,_CAPI_ovrAvatar2ExperimentalEventPayloadTypeId>_TypeInfo
                );
    FUN_02d965b8(
                System_Collections_Generic_Dictionary<Type,_ComponentFactory_CreateObjectDelegate>_TypeInfo
                );
    FUN_02d965b8(System_Collections_Generic_Dictionary<Type,_DelegateHelpers_TypeInfo>_TypeInfo);
    FUN_02d965b8(PTR_DAT_069fbff8);
    FUN_02d965b8(
                System_Collections_Generic_Dictionary<Type,_EventInterestReflectionUtils_DefaultEventInterests>_TypeInfo
                );
    FUN_02d965b8(PTR_DAT_06a00dd8);
    FUN_02d965b8(PTR_DAT_06a00db8);
    FUN_02d965b8(
                System_Collections_Generic_Dictionary<Type,_ILPPMessageProvider_NetworkMessageTypes>_TypeInfo
                );
    FUN_02d965b8(System_Collections_Generic_Dictionary<Type,_ITypeConverter>_TypeInfo);
    FUN_02d965b8(PTR_DAT_06a0e888);
    FUN_02d965b8(PTR_DAT_06a0e8c0);
    FUN_02d965b8(System_Collections_Generic_Dictionary<Type,_MonoCustomAttrs_AttributeInfo>_TypeInfo
                );
    FUN_02d965b8(System_Collections_Generic_Dictionary<Type,_OVRPlugin_SpaceComponentType>_TypeInfo)
    ;
    FUN_02d965b8(System_Collections_Generic_Dictionary<Type,_VisualElement_TypeData>_TypeInfo);
    FUN_02d965b8(System_Collections_Generic_Dictionary<TypeHandleRef,_IntRef>_TypeInfo);
    FUN_02d965b8(
                System_Collections_Generic_Dictionary<uint,_Dictionary<int,_NetworkObject>>_TypeInfo
                );
    FUN_02d965b8(
                System_Collections_Generic_Dictionary<uint,_Dictionary<ulong,_List<NetworkObject>>>_TypeInfo
                );
    FUN_02d965b8(
                System_Collections_Generic_Dictionary<uint,_List<LigatureSubstitutionRecord>>_TypeInfo
                );
    DAT_06dbb89a = 1;
  }
  puVar6 = System_Collections_Generic_Dictionary<Type,_OVRPlugin_SpaceComponentType>_TypeInfo;
  iVar14 = *(int *)(param_1 + 0x10);
  uVar9 = 0;
  plStack_70 = &local_58;
  local_68._0_8_ = 0;
  local_68._8_8_ = 0;
  auVar5 = ZEXT816(0);
  auVar4 = ZEXT816(0);
  auVar3 = ZEXT816(0);
  auVar2 = ZEXT816(0);
  local_78 = 0;
  if (iVar14 < 3) {
    if (iVar14 == 0) {
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      uVar10 = thunk_FUN_02dd3144(*(undefined8 *)puVar6);
      FUN_0552aca4(uVar10,0);
      *(undefined8 *)(local_58 + 0x28) = uVar10;
      LeanTween__value((undefined8 *)(local_58 + 0x28),uVar10);
      lVar12 = *(long *)(local_58 + 0x28);
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      uVar8 = *(undefined4 *)(local_58 + 0x18);
      *(undefined8 *)(lVar12 + 0xb8) = *(undefined8 *)(local_58 + 0x20);
      *(undefined4 *)(lVar12 + 0xb0) = uVar8;
      LeanTween__value();
      if (*(int *)(*(long *)PTR_DAT_06a0e8c0 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      uVar9 = FUN_0563c9e8(0);
      param_1 = local_58;
      if ((uVar9 & 1) == 0) goto LAB_055f4e1c;
      iVar14 = 1;
      uVar8 = 1;
    }
    else {
      if (iVar14 == 1) {
        *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
LAB_055f4e1c:
        if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860(uVar9);
        }
        memset((void *)(*(long *)(param_1 + 0x28) + 0x10),0,0xa0);
        memset((void *)(param_1 + 0x48),0,0xd4);
        lVar12 = *(long *)(param_1 + 0x28);
        *(undefined4 *)(param_1 + 0x11c) = 0;
        *(undefined4 *)(param_1 + 0x10) = 0xfffffffd;
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        *(undefined8 *)(lVar12 + 0xe0) = 0;
        *(undefined8 *)(lVar12 + 0xe8) = 0;
        *(undefined1 *)(lVar12 + 0xc0) = 1;
        lVar12 = *(long *)(param_1 + 0x28);
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        *(undefined8 *)(lVar12 + 0xf8) = 0;
        *(undefined8 *)(lVar12 + 0x100) = 0;
        lVar12 = *(long *)(param_1 + 0x28);
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        *(undefined8 *)(lVar12 + 0x11c) = 0;
        *(undefined8 *)(lVar12 + 0x114) = 0;
        lVar12 = *(long *)(param_1 + 0x28);
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        *(undefined8 *)(lVar12 + 0x130) = 0;
        *(undefined8 *)(lVar12 + 0x138) = 0;
        lVar12 = *(long *)(param_1 + 0x28);
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        *(undefined8 *)(lVar12 + 0x154) = 0;
        *(undefined8 *)(lVar12 + 0x14c) = 0;
        lVar12 = *(long *)(param_1 + 0x28);
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        *(undefined8 *)(lVar12 + 0x168) = 0;
        *(undefined8 *)(lVar12 + 0x170) = 0;
        lVar12 = *(long *)(param_1 + 0x28);
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        *(undefined8 *)(lVar12 + 0x18c) = 0;
        *(undefined8 *)(lVar12 + 0x184) = 0;
        lVar12 = *(long *)(param_1 + 0x28);
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        *(undefined8 *)(lVar12 + 0x1a0) = 0;
        *(undefined8 *)(lVar12 + 0x1a8) = 0;
        lVar12 = *(long *)(param_1 + 0x28);
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        *(undefined8 *)(lVar12 + 0x1c4) = 0;
        *(undefined8 *)(lVar12 + 0x1bc) = 0;
        lVar12 = *(long *)(param_1 + 0x28);
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        *(undefined8 *)(lVar12 + 0x1d8) = 0;
        *(undefined8 *)(lVar12 + 0x1e0) = 0;
        lVar12 = *(long *)(param_1 + 0x28);
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        *(undefined8 *)(lVar12 + 0x1fc) = 0;
        *(undefined8 *)(lVar12 + 500) = 0;
        if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        *(undefined8 *)(*(long *)(param_1 + 0x28) + 0xf0) = 0;
        if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x108) = 0;
        if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x124) = 0;
        if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x140) = 0;
        if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x15c) = 0;
        if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x178) = 0;
        if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x194) = 0;
        if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x1b0) = 0;
        if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x1cc) = 0;
        if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x1e8) = 0;
        if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x204) = 0;
        lVar12 = *(long *)(param_1 + 0x28);
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        *(undefined1 *)(lVar12 + 0x110) = 0;
        *(undefined1 *)(lVar12 + 300) = 0;
        *(undefined1 *)(lVar12 + 0x148) = 0;
        *(undefined1 *)(lVar12 + 0x164) = 0;
        *(undefined1 *)(lVar12 + 0x180) = 0;
        puVar6 = PTR_DAT_06a0f1a0;
        *(undefined1 *)(lVar12 + 0x19c) = 0;
        uVar8 = *(undefined4 *)(lVar12 + 0xb0);
        *(undefined1 *)(lVar12 + 0x1b8) = 0;
        lVar13 = *(long *)puVar6;
        *(undefined1 *)(lVar12 + 0x1d4) = 0;
        *(undefined1 *)(lVar12 + 0x1f0) = 0;
        if (*(int *)(lVar13 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        FUN_0564981c(auStack_1a4,uVar8,0,0);
        memcpy(&local_110,auStack_1a4,0x94);
        lVar12 = local_58;
        memcpy((void *)(local_58 + 0x88),&local_110,0x94);
        lVar13 = *(long *)(lVar12 + 0x28);
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        *(undefined8 *)(lVar13 + 0x3c) = *(undefined8 *)(lVar12 + 0x88);
        *(int *)(lVar12 + 0x11c) = *(int *)(lVar12 + 0x11c) + 0xa0;
        bVar7 = FUN_055f2c5c(*(undefined4 *)(lVar13 + 0xb0),lVar13 + 0xe0,lVar13 + 0xf0);
        *(byte *)(lVar13 + 0xc0) = bVar7 & 1;
        lVar12 = *(long *)(local_58 + 0x28);
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        iVar14 = *(int *)(local_58 + 0x11c);
        *(int *)(lVar12 + 0x10) = iVar14;
        *(undefined8 *)(local_58 + 0x48) = *(undefined8 *)(lVar12 + 0xf0);
        *(int *)(local_58 + 0x11c) = iVar14 + *(int *)(lVar12 + 0xec) * *(int *)(lVar12 + 0xf4);
        if (*(char *)(lVar12 + 0xc0) != '\0') {
          bVar7 = FUN_055f2d18(*(undefined4 *)(lVar12 + 0xb0),lVar12 + 0xf8,lVar12 + 0x108);
          *(byte *)(lVar12 + 0xc0) = bVar7 & 1;
          lVar12 = *(long *)(local_58 + 0x28);
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          iVar14 = *(int *)(local_58 + 0x11c);
          *(int *)(lVar12 + 0x14) = iVar14;
          *(undefined8 *)(local_58 + 0x50) = *(undefined8 *)(lVar12 + 0x108);
          *(int *)(local_58 + 0x11c) = iVar14 + *(int *)(lVar12 + 0x104) * *(int *)(lVar12 + 0x10c);
        }
        if (*(char *)(lVar12 + 0xc0) != '\0') {
          FUN_055f2dbc(*(undefined4 *)(lVar12 + 0xb0),lVar12 + 0x114,lVar12 + 0x124);
          *(undefined1 *)(lVar12 + 0xc0) = 1;
          lVar12 = *(long *)(local_58 + 0x28);
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          if (*(int *)(lVar12 + 0x114) != 0) {
            *(undefined1 *)(lVar12 + 0x110) = 1;
            iVar14 = *(int *)(local_58 + 0x11c);
            *(int *)(lVar12 + 0x18) = iVar14;
            *(undefined8 *)(local_58 + 0x58) = *(undefined8 *)(lVar12 + 0x124);
            *(int *)(local_58 + 0x11c) =
                 iVar14 + *(int *)(lVar12 + 0x120) * *(int *)(lVar12 + 0x128);
          }
        }
        if (*(char *)(lVar12 + 0xc0) != '\0') {
          FUN_055f2e5c(*(undefined4 *)(lVar12 + 0xb0),lVar12 + 0x130,lVar12 + 0x140);
          *(undefined1 *)(lVar12 + 0xc0) = 1;
          lVar12 = *(long *)(local_58 + 0x28);
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          if (*(int *)(lVar12 + 0x130) != 0) {
            *(undefined1 *)(lVar12 + 300) = 1;
            iVar14 = *(int *)(local_58 + 0x11c);
            *(int *)(lVar12 + 0x1c) = iVar14;
            *(undefined8 *)(local_58 + 0x70) = *(undefined8 *)(lVar12 + 0x140);
            *(int *)(local_58 + 0x11c) =
                 iVar14 + *(int *)(lVar12 + 0x13c) * *(int *)(lVar12 + 0x144);
          }
        }
        if (*(char *)(lVar12 + 0xc0) != '\0') {
          FUN_055f2efc(*(undefined4 *)(lVar12 + 0xb0),lVar12 + 0x14c,lVar12 + 0x15c);
          *(undefined1 *)(lVar12 + 0xc0) = 1;
          lVar12 = *(long *)(local_58 + 0x28);
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          if (*(int *)(lVar12 + 0x14c) != 0) {
            *(undefined1 *)(lVar12 + 0x148) = 1;
            iVar14 = *(int *)(local_58 + 0x11c);
            *(int *)(lVar12 + 0x20) = iVar14;
            *(undefined8 *)(local_58 + 0x68) = *(undefined8 *)(lVar12 + 0x15c);
            *(int *)(local_58 + 0x11c) =
                 iVar14 + *(int *)(lVar12 + 0x158) * *(int *)(lVar12 + 0x160);
          }
        }
        if (*(char *)(lVar12 + 0xc0) != '\0') {
          FUN_055f2f9c(*(undefined4 *)(lVar12 + 0xb0),lVar12 + 0x168,lVar12 + 0x178);
          *(undefined1 *)(lVar12 + 0xc0) = 1;
          lVar12 = *(long *)(local_58 + 0x28);
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          if (*(int *)(lVar12 + 0x168) != 0) {
            *(undefined1 *)(lVar12 + 0x164) = 1;
            iVar14 = *(int *)(local_58 + 0x11c);
            *(int *)(lVar12 + 0x24) = iVar14;
            *(undefined8 *)(local_58 + 0x60) = *(undefined8 *)(lVar12 + 0x178);
            *(int *)(local_58 + 0x11c) =
                 iVar14 + *(int *)(lVar12 + 0x174) * *(int *)(lVar12 + 0x17c);
          }
        }
        if (*(char *)(lVar12 + 0xc0) != '\0') {
          FUN_055f303c(*(undefined4 *)(lVar12 + 0xb0),lVar12 + 0x184,lVar12 + 0x194);
          *(undefined1 *)(lVar12 + 0xc0) = 1;
          lVar12 = *(long *)(local_58 + 0x28);
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          if (*(int *)(lVar12 + 0x184) != 0) {
            *(undefined1 *)(lVar12 + 0x180) = 1;
            iVar14 = *(int *)(local_58 + 0x11c);
            *(int *)(lVar12 + 0x28) = iVar14;
            *(int *)(local_58 + 0x11c) = iVar14 + *(int *)(lVar12 + 400) * *(int *)(lVar12 + 0x198);
          }
        }
        if (*(char *)(lVar12 + 0xc0) != '\0') {
          FUN_055f30dc(*(undefined4 *)(lVar12 + 0xb0),lVar12 + 0x1a0,lVar12 + 0x1b0);
          *(undefined1 *)(lVar12 + 0xc0) = 1;
          lVar12 = *(long *)(local_58 + 0x28);
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          if (*(int *)(lVar12 + 0x1a0) != 0) {
            *(undefined1 *)(lVar12 + 0x19c) = 1;
            iVar14 = *(int *)(local_58 + 0x11c);
            *(int *)(lVar12 + 0x2c) = iVar14;
            *(int *)(local_58 + 0x11c) =
                 iVar14 + *(int *)(lVar12 + 0x1ac) * *(int *)(lVar12 + 0x1b4);
          }
        }
        if (*(char *)(lVar12 + 0xc0) != '\0') {
          FUN_055f317c(*(undefined4 *)(lVar12 + 0xb0),lVar12 + 0x1bc,lVar12 + 0x1cc);
          *(undefined1 *)(lVar12 + 0xc0) = 1;
          lVar12 = *(long *)(local_58 + 0x28);
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          if (*(int *)(lVar12 + 0x1bc) != 0) {
            *(undefined1 *)(lVar12 + 0x1b8) = 1;
            iVar14 = *(int *)(local_58 + 0x11c);
            *(int *)(lVar12 + 0x30) = iVar14;
            *(undefined8 *)(local_58 + 0x78) = *(undefined8 *)(lVar12 + 0x1cc);
            *(uint *)(local_58 + 0x11c) =
                 (*(int *)(lVar12 + 0x1c8) * *(int *)(lVar12 + 0x1d0) + 3U & 0xfffffffc) + iVar14;
          }
        }
        if (*(char *)(lVar12 + 0xc0) != '\0') {
          FUN_055f3210(*(undefined4 *)(lVar12 + 0xb0),lVar12 + 0x1d8,lVar12 + 0x1e8);
          *(undefined1 *)(lVar12 + 0xc0) = 1;
          lVar12 = *(long *)(local_58 + 0x28);
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          if (*(int *)(lVar12 + 0x1d8) != 0) {
            *(undefined1 *)(lVar12 + 0x1d4) = 1;
            iVar14 = *(int *)(local_58 + 0x11c);
            *(int *)(lVar12 + 0x34) = iVar14;
            *(undefined8 *)(local_58 + 0x80) = *(undefined8 *)(lVar12 + 0x1e8);
            *(uint *)(local_58 + 0x11c) =
                 (*(int *)(lVar12 + 0x1e4) * *(int *)(lVar12 + 0x1ec) + 3U & 0xfffffffc) + iVar14;
          }
        }
        if (*(char *)(lVar12 + 0xc0) != '\0') {
          FUN_055f32a4(*(undefined4 *)(lVar12 + 0xb0),lVar12 + 500,lVar12 + 0x204);
          *(undefined1 *)(lVar12 + 0xc0) = 1;
          lVar12 = *(long *)(local_58 + 0x28);
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          if (*(int *)(lVar12 + 500) != 0) {
            *(undefined1 *)(lVar12 + 0x1f0) = 1;
            iVar14 = *(int *)(local_58 + 0x11c);
            *(int *)(lVar12 + 0x38) = iVar14;
            *(int *)(local_58 + 0x11c) =
                 iVar14 + *(int *)(lVar12 + 0x200) * *(int *)(lVar12 + 0x208);
          }
        }
        if (*(int *)(*(long *)PTR_DAT_06a0e8c0 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        uVar9 = FUN_0563c9e8(0);
        param_1 = local_58;
        if ((uVar9 & 1) == 0) goto LAB_055f5454;
        uVar8 = 2;
      }
      else {
        if (iVar14 != 2) goto LAB_055f59fc;
        *(undefined4 *)(param_1 + 0x10) = 0xfffffffd;
LAB_055f5454:
        uVar10 = FUN_055f5cb4(*(undefined4 *)(param_1 + 0x11c));
        *(undefined8 *)(local_58 + 0x120) = uVar10;
        LeanTween__value(local_58 + 0x120);
        if (*(long *)(local_58 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        lVar12 = *(long *)(local_58 + 0x120);
        local_110 = CONCAT44(local_110._4_4_,*(undefined4 *)(*(long *)(local_58 + 0x28) + 0xb0));
        uVar10 = thunk_FUN_02dd2d7c(*(undefined8 *)
                                     System_Collections_Generic_Dictionary<uint,_List<LigatureSubstitutionRecord>>_TypeInfo
                                    ,&local_110);
        uVar10 = FUN_0536388c(*(undefined8 *)
                               System_Collections_Generic_Dictionary<TypeHandleRef,_IntRef>_TypeInfo
                              ,uVar10,0);
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860(uVar10,uVar10);
        }
        thunk_FUN_06357d68(lVar12,uVar10,0);
        if (*(int *)(*(long *)PTR_DAT_06a0e8c0 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        uVar9 = FUN_0563c9e8(0);
        param_1 = local_58;
        if ((uVar9 & 1) == 0) goto LAB_055f54f8;
        uVar8 = 3;
      }
LAB_055f56e8:
      iVar14 = 1;
    }
LAB_055f59f4:
    uVar9 = 1;
    *(undefined4 *)(local_58 + 0x10) = uVar8;
    *(int *)(local_58 + 0x14) = iVar14;
    auVar2 = local_68;
  }
  else {
    if (iVar14 < 5) {
      if (iVar14 == 3) {
        *(undefined4 *)(param_1 + 0x10) = 0xfffffffd;
LAB_055f54f8:
        lVar12 = *(long *)(param_1 + 0x28);
        local_110 = 0;
        uStack_108 = 0;
        System_Nullable<DateTime>__get_Value
                  (&local_110,*(undefined4 *)(param_1 + 0x11c),4,0,*(undefined8 *)PTR_DAT_06a00db8);
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        *(undefined8 *)(lVar12 + 0xd8) = uStack_108;
        *(undefined8 *)(lVar12 + 0xd0) = local_110;
        lVar12 = *(long *)(local_58 + 0x28);
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        *(undefined8 *)(lVar12 + 0x218) = 0;
        *(undefined8 *)(lVar12 + 0x210) = 0;
        puVar6 = PTR_DAT_06a0e888;
        if (*(long *)(local_58 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        *(undefined8 *)(*(long *)(local_58 + 0x28) + 0x220) = 0;
        lVar12 = *(long *)(*(long *)puVar6 + 0x20);
        if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
          lVar12 = FUN_02dcfd18();
        }
        lVar12 = *(long *)(*(long *)(lVar12 + 0xc0) + 8);
        if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
          lVar12 = FUN_02dcfd18();
        }
        lVar12 = *(long *)(*(long *)(lVar12 + 0xb8) + 8);
        uVar18 = *(undefined8 *)(local_58 + 0x28);
        uVar10 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069fc868);
        FUN_054521e8(uVar10,uVar18,
                     *(undefined8 *)
                      System_Collections_Generic_Dictionary<Type,_MonoCustomAttrs_AttributeInfo>_TypeInfo
                     ,0);
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        uVar10 = FUN_056874b4(lVar12,uVar10,0);
        *(undefined8 *)(local_58 + 0x128) = uVar10;
        LeanTween__value(local_58 + 0x128);
        param_1 = local_58;
      }
      else {
        auVar2 = ZEXT816(0);
        if (iVar14 != 4) goto LAB_055f59fc;
        *(undefined4 *)(param_1 + 0x10) = 0xfffffffd;
      }
      if (*(long *)(param_1 + 0x128) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      uVar9 = FUN_0555c064(*(long *)(param_1 + 0x128),0);
      if ((uVar9 & 1) == 0) {
        uVar8 = 4;
        iVar14 = 2;
        goto LAB_055f59f4;
      }
      if (*(long *)(local_58 + 0x120) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      local_68 = FUN_035ad488(*(long *)(local_58 + 0x120),0,*(undefined4 *)(local_58 + 0x11c),
                              *(undefined8 *)
                               System_Collections_Generic_Dictionary<Type,_CAPI_ovrAvatar2ExperimentalEventPayloadTypeId>_TypeInfo
                             );
      lVar12 = *(long *)(local_58 + 0x28);
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      FUN_0422cadc(local_68,*(undefined8 *)(lVar12 + 0xd0),*(undefined8 *)(lVar12 + 0xd8),
                   *(undefined8 *)
                    System_Collections_Generic_Dictionary<Type,_EventInterestReflectionUtils_DefaultEventInterests>_TypeInfo
                  );
      if (*(long *)(local_58 + 0x120) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      FUN_035adf90(*(long *)(local_58 + 0x120),*(undefined4 *)(local_58 + 0x11c),
                   *(undefined8 *)
                    System_Collections_Generic_Dictionary<Type,_ComponentFactory_CreateObjectDelegate>_TypeInfo
                  );
      if (*(long *)(local_58 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      FUN_0422c8ec(*(long *)(local_58 + 0x28) + 0xd0,*(undefined8 *)PTR_DAT_06a00dd8);
      lVar12 = *(long *)(local_58 + 0x30);
      if (lVar12 != 0) {
        (**(code **)(lVar12 + 0x18))(*(undefined8 *)(lVar12 + 0x40),*(undefined8 *)(lVar12 + 0x28));
      }
      lVar12 = *(long *)(local_58 + 0x28);
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      if (*(char *)(lVar12 + 0xc0) != '\0') {
        if (*(int *)(*(long *)PTR_DAT_06a0e8c0 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        uVar9 = FUN_0563c9e8(0);
        param_1 = local_58;
        auVar3 = local_68;
        if ((uVar9 & 1) != 0) {
          uVar8 = 5;
          goto LAB_055f56e8;
        }
        goto LAB_055f56f0;
      }
      lVar13 = *(long *)System_Collections_Generic_Dictionary<Type,_ITypeConverter>_TypeInfo;
      if (*(long *)(lVar13 + 0x38) == 0) {
        FUN_02dcfd74(lVar13);
      }
      plVar17 = (long *)(lVar12 + 0x210);
      if (*plVar17 != 0) {
        FUN_0422c8ec(plVar17,*(undefined8 *)(*(long *)(lVar13 + 0x38) + 0x18));
        *plVar17 = 0;
        *(undefined8 *)(lVar12 + 0x218) = 0;
      }
      lVar12 = *(long *)(local_58 + 0x40);
      if (lVar12 != 0) {
        (**(code **)(lVar12 + 0x18))(*(undefined8 *)(lVar12 + 0x40),*(undefined8 *)(lVar12 + 0x28));
      }
    }
    else {
      if (iVar14 == 5) {
        *(undefined4 *)(param_1 + 0x10) = 0xfffffffd;
LAB_055f56f0:
        local_68 = auVar3;
        if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        *(undefined8 *)(*(long *)(param_1 + 0x28) + 200) =
             *(undefined8 *)
              System_Collections_Generic_Dictionary<uint,_Dictionary<int,_NetworkObject>>_TypeInfo;
        LeanTween__value();
        lVar12 = *(long *)(local_58 + 0x28);
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        uVar24 = *(undefined8 *)(local_58 + 0x50);
        uVar22 = *(undefined8 *)(local_58 + 0x48);
        uVar27 = *(undefined8 *)(local_58 + 0x60);
        uVar26 = *(undefined8 *)(local_58 + 0x58);
        uVar16 = *(undefined8 *)(local_58 + 0x120);
        uVar19 = *(undefined8 *)(lVar12 + 0x210);
        uVar20 = *(undefined8 *)(lVar12 + 0x218);
        uVar21 = *(undefined8 *)(lVar12 + 0x220);
        uVar29 = *(undefined8 *)(local_58 + 0x70);
        uVar28 = *(undefined8 *)(local_58 + 0x68);
        uVar25 = *(undefined8 *)(local_58 + 0x80);
        uVar23 = *(undefined8 *)(local_58 + 0x78);
        uVar8 = *(undefined4 *)(lVar12 + 0x3c);
        uVar1 = *(undefined1 *)(lVar12 + 0x110);
        iVar14 = *(int *)(local_58 + 0x98);
        FUN_05657ea0(&local_110,local_58 + 0x9c,0);
        uVar18 = uStack_108;
        uVar10 = local_110;
        lVar12 = thunk_FUN_02dd3144(*(undefined8 *)
                                     System_Collections_Generic_Dictionary<Type,_ILPPMessageProvider_NetworkMessageTypes>_TypeInfo
                                   );
        FUN_0552aca4(lVar12,0);
        *(undefined8 *)(lVar12 + 0xa0) = uVar16;
        LeanTween__value((undefined8 *)(lVar12 + 0xa0),uVar16);
        *(undefined8 *)(lVar12 + 0xa8) = uVar19;
        *(undefined8 *)(lVar12 + 0xb0) = uVar20;
        *(undefined8 *)(lVar12 + 0x10) = uVar21;
        *(undefined8 *)(lVar12 + 0x20) = uVar24;
        *(undefined8 *)(lVar12 + 0x18) = uVar22;
        *(undefined8 *)(lVar12 + 0x30) = uVar27;
        *(undefined8 *)(lVar12 + 0x28) = uVar26;
        *(undefined4 *)(lVar12 + 0xb8) = uVar8;
        *(undefined1 *)(lVar12 + 0xbc) = uVar1;
        *(undefined8 *)(lVar12 + 0x40) = uVar29;
        *(undefined8 *)(lVar12 + 0x38) = uVar28;
        *(undefined8 *)(lVar12 + 0x50) = uVar25;
        *(undefined8 *)(lVar12 + 0x48) = uVar23;
        *(bool *)(lVar12 + 0x58) = iVar14 != 0;
        *(undefined8 *)(lVar12 + 0x94) = uStack_d8;
        *(undefined8 *)(lVar12 + 0x8c) = uStack_e0;
        *(undefined8 *)(lVar12 + 0x84) = uStack_e8;
        *(undefined8 *)(lVar12 + 0x7c) = local_f0;
        *(undefined8 *)(lVar12 + 0x74) = uStack_f8;
        *(undefined8 *)(lVar12 + 0x6c) = uStack_100;
        *(undefined8 *)(lVar12 + 100) = uVar18;
        *(undefined8 *)(lVar12 + 0x5c) = uVar10;
        lVar13 = *(long *)(local_58 + 0x38);
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        uVar10 = (**(code **)(lVar13 + 0x18))
                           (*(undefined8 *)(lVar13 + 0x40),lVar12,*(undefined8 *)(lVar13 + 0x28));
        *(undefined8 *)(local_58 + 0x130) = uVar10;
        LeanTween__value(local_58 + 0x130);
        param_1 = local_58;
        auVar4 = local_68;
LAB_055f581c:
        local_68 = auVar4;
        if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        *(undefined8 *)(*(long *)(param_1 + 0x28) + 200) =
             *(undefined8 *)
              System_Collections_Generic_Dictionary<uint,_Dictionary<ulong,_List<NetworkObject>>>_TypeInfo
        ;
        LeanTween__value();
        plVar17 = *(long **)(local_58 + 0x130);
        if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        lVar12 = *plVar17;
        uVar9 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar9 != 0) {
          piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_069fbff8) {
              puVar11 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_055f58a4;
            }
            uVar9 = uVar9 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar9 != 0);
        }
        puVar11 = (undefined8 *)FUN_02dd004c(plVar17,*(long *)PTR_DAT_069fbff8,0);
LAB_055f58a4:
        uVar9 = (*(code *)*puVar11)(plVar17,puVar11[1]);
        lVar12 = local_58;
        if ((uVar9 & 1) == 0) {
          lVar12 = 0;
        }
        if ((uVar9 & 1) == 0) {
          uVar8 = 8;
          lVar12 = local_58;
        }
        else {
          plVar17 = *(long **)(local_58 + 0x130);
          if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          lVar13 = *plVar17;
          uVar9 = (ulong)*(ushort *)(lVar13 + 0x12e);
          if (uVar9 != 0) {
            piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) ==
                  *(long *)
                   System_Collections_Generic_Dictionary<Type,_DelegateHelpers_TypeInfo>_TypeInfo) {
                puVar11 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
                goto LAB_055f5980;
              }
              uVar9 = uVar9 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar9 != 0);
          }
          puVar11 = (undefined8 *)
                    FUN_02dd004c(plVar17,*(long *)
                                          System_Collections_Generic_Dictionary<Type,_DelegateHelpers_TypeInfo>_TypeInfo
                                 ,0);
LAB_055f5980:
          uVar8 = (*(code *)*puVar11)(plVar17,puVar11[1]);
        }
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        *(undefined4 *)(lVar12 + 0x138) = uVar8;
        iVar14 = *(int *)(local_58 + 0x138);
        param_1 = local_58;
        auVar5 = local_68;
        if (iVar14 != 8) {
          uVar8 = 6;
          goto LAB_055f59f4;
        }
      }
      else {
        auVar2 = ZEXT816(0);
        if (iVar14 != 6) goto LAB_055f59fc;
        *(undefined4 *)(param_1 + 0x10) = 0xfffffffd;
        if (*(int *)(param_1 + 0x138) != 8) goto LAB_055f581c;
      }
      *(undefined8 *)(param_1 + 0x130) = 0;
      local_68 = auVar5;
      LeanTween__value(param_1 + 0x130,0);
    }
    *(undefined8 *)(local_58 + 0x120) = 0;
    LeanTween__value(local_58 + 0x120,0);
    *(undefined8 *)(local_58 + 0x128) = 0;
    LeanTween__value(local_58 + 0x128,0);
    FUN_055f5d24(local_58);
    uVar9 = 0;
    auVar2 = local_68;
  }
LAB_055f59fc:
  lVar12 = local_78;
  if (local_78 != 0) {
    local_68 = auVar2;
    FUN_02cfcc90(&plStack_70);
                    /* WARNING: Subroutine does not return */
    FUN_02d96858(lVar12);
  }
  return uVar9;
}


