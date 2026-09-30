/*
FUNCTION_NAME: FUN_05ece880
ENTRY_POINT: 05ece880
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 156
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_8;weak_xr_or_state_hits_9;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_8;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_8
*/


void FUN_05ece880(long param_1,long param_2,byte param_3,ulong param_4)

{
  char cVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  byte bVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  undefined8 *puVar13;
  ulong uVar14;
  long lVar15;
  int *piVar16;
  undefined8 uVar17;
  long lVar18;
  undefined4 uVar19;
  long *local_100;
  long **pplStack_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  long *local_e0;
  long **pplStack_d8;
  undefined8 local_d0;
  undefined8 local_c0;
  ulong uStack_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long *local_78;
  ulong local_70;
  undefined8 uStack_68;
  
  puVar3 = PTR_DAT_069fb990;
  if ((DAT_06dc3eaf & 1) == 0) {
    FUN_02d965b8(Method_System_Collections_Generic_List<SampleAvatarConfig_AssetData>_get_Item__);
    FUN_02d965b8(PTR_DAT_069fb930);
    FUN_02d965b8(
                Method_System_Collections_Generic_List<ClassDataContract_ClassDataContractCriticalHelper_Member>__ctor__
                );
    FUN_02d965b8(
                Method_System_Collections_Generic_List<ClassDataContract_ClassDataContractCriticalHelper_Member>_Add__
                );
    FUN_02d965b8(Method_System_Collections_Generic_List<TMP_MaterialManager_MaskingMaterial>_Clear__
                );
    FUN_02d965b8(
                Method_System_Collections_Generic_List<TMP_MaterialManager_MaskingMaterial>_RemoveAt__
                );
    FUN_02d965b8(
                Method_System_Collections_Generic_List<TMP_MaterialManager_MaskingMaterial>_get_Item__
                );
    FUN_02d965b8(Method_Oculus_Platform_Message<DestinationList>__ctor__);
    FUN_02d965b8(PTR_DAT_069fbff0);
    FUN_02d965b8(PTR_DAT_06a002f0);
    FUN_02d965b8(PTR_DAT_06a002f8);
    FUN_02d965b8(PTR_DAT_069fbff8);
    FUN_02d965b8(PTR_DAT_06a0e238);
    FUN_02d965b8(Method_Oculus_Platform_Message<AppDownloadResult>__ctor__);
    FUN_02d965b8(PTR_DAT_06a12010);
    FUN_02d965b8(PTR_DAT_06a149c0);
    FUN_02d965b8(
                Method_System_Collections_Generic_List<TrackedPoseDriverDataDescription_PoseData>_get_Count__
                );
    FUN_02d965b8(
                Method_System_Collections_Generic_List<TemplateAsset_UxmlSerializedDataOverride>_GetEnumerator__
                );
    FUN_02d965b8(Method_System_Collections_Generic_List<TextSettings_FontReferenceMap>_Add__);
    FUN_02d965b8(Method_System_Memory<byte>_get_Length__);
    FUN_02d965b8(UnityEngine_PlayerLoop_Update_var);
    FUN_02d965b8(System_Runtime_CompilerServices_IStrongBox___TypeInfo);
    FUN_02d965b8(PTR_DAT_069fc180);
    FUN_02d965b8(PTR_DAT_069fb990);
    FUN_02d965b8(Method_OVRNativeList<OVRAnchor_FilterUnion>_get_Count__);
    FUN_02d965b8(Method_OVRNativeList<OVRPlugin_DynamicObjectClass>__ctor__);
    FUN_02d965b8(Method_OVRNativeList<OVRPlugin_DynamicObjectClass>_Add__);
    FUN_02d965b8(Method_OVRNativeList<OVRPlugin_DynamicObjectClass>_Dispose__);
    FUN_02d965b8(Method_System_Collections_Generic_LowLevelList<object>_set_Item__);
    FUN_02d965b8(Method_OVRNativeList<OVRPlugin_DynamicObjectClass>_op_Implicit__);
    DAT_06dc3eaf = 1;
  }
  uVar17 = *(undefined8 *)(param_1 + 0x50);
  local_70 = 0;
  uStack_68 = 0;
  local_78 = (long *)0x0;
  local_e0 = (long *)0x0;
  pplStack_d8 = (long **)0x0;
  uStack_b8 = 0;
  local_c0 = 0;
  local_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  local_d0 = 0;
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  uVar9 = FUN_063542dc(uVar17,0);
  if ((uVar9 & 1) == 0) {
    return;
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  uVar9 = FUN_063542dc(param_2,0);
  if ((uVar9 & 1) == 0) {
    if (*(int *)(*(long *)PTR_DAT_069fb930 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    FUN_06309d28(*(undefined8 *)Method_OVRNativeList<OVRPlugin_DynamicObjectClass>__ctor__,0);
    return;
  }
  if ((param_2 == 0) || (*(long *)(param_1 + 0x20) == 0)) goto LAB_05ecf67c;
  uVar9 = FUN_04ff1c80(*(long *)(param_1 + 0x20),*(undefined8 *)(param_2 + 0x80),
                       *(undefined8 *)
                        Method_System_Collections_Generic_List<ClassDataContract_ClassDataContractCriticalHelper_Member>__ctor__
                      );
  lVar10 = *(long *)(param_1 + 0x50);
  if ((uVar9 & 1) == 0) {
    if (lVar10 != 0) {
      if (*(char *)(lVar10 + 0x88) != '\0') {
        return;
      }
      local_100 = *(long **)(param_2 + 0x80);
      uVar17 = thunk_FUN_02dd2d7c(*(undefined8 *)(PTR_DAT_069fb9c0 + 0x70),&local_100);
      uVar17 = FUN_0536388c(*(undefined8 *)
                             Method_OVRNativeList<OVRPlugin_DynamicObjectClass>_op_Implicit__,uVar17
                            ,0);
      if (*(int *)(*(long *)PTR_DAT_069fb930 + 0xe4) == 0) {
        thunk_FUN_02df485c(*(long *)PTR_DAT_069fb930);
      }
      FUN_06309d28(uVar17,0);
      return;
    }
    goto LAB_05ecf67c;
  }
  if (lVar10 == 0) goto LAB_05ecf67c;
  cVar1 = *(char *)(lVar10 + 0x30);
  if ((*(char *)(lVar10 + 0x88) == '\0') &&
     ((uVar9 = FUN_05e5e6d0(lVar10,0), cVar1 != '\0' || ((uVar9 & 1) != 0)))) {
    lVar10 = FUN_035abb34(param_2,*(undefined8 *)
                                   Method_System_Collections_Generic_List<SampleAvatarConfig_AssetData>_get_Item__
                         );
    if (lVar10 == 0) goto LAB_05ecf67c;
    if (0 < (int)*(ulong *)(lVar10 + 0x18)) {
      uVar9 = 0;
      uVar14 = *(ulong *)(lVar10 + 0x18) & 0xffffffff;
      do {
        if (uVar14 <= uVar9) goto LAB_05ecf494;
        lVar18 = *(long *)(lVar10 + 0x20 + uVar9 * 8);
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        uVar14 = FUN_06350670(lVar18,param_2,0);
        if ((uVar14 & 1) == 0) {
          if (lVar18 == 0) goto LAB_05ecf67c;
          uStack_68 = *(undefined8 *)(lVar18 + 0x100);
          local_70 = *(ulong *)(lVar18 + 0xf8);
          if (((local_70 & 0xff) == 0) ||
             (lVar11 = FUN_043382ac(&local_70,
                                    *(undefined8 *)
                                     System_Runtime_CompilerServices_IStrongBox___TypeInfo),
             lVar11 == *(long *)(param_2 + 0x80))) {
            if (cVar1 == '\0') {
              bVar7 = 0;
            }
            else {
              bVar7 = FUN_05e6f878(lVar18,0);
              bVar7 = bVar7 ^ 1;
            }
            *(byte *)(lVar18 + 0x111) = bVar7 & 1;
            uVar14 = FUN_05e74488(lVar18,0);
            iVar8 = FUN_05e76758(0);
            if ((uVar14 & 1) == 0) {
              if (iVar8 < 2) {
                plVar12 = (long *)FUN_02d966a4(*(undefined8 *)PTR_DAT_069fc180,4);
                if (plVar12 == (long *)0x0) goto LAB_05ecf67c;
                if ((*(long *)Method_System_Collections_Generic_LowLevelList<object>_set_Item__ != 0
                    ) && (lVar11 = thunk_FUN_02dd3048(*(long *)
                                                  Method_System_Collections_Generic_LowLevelList<object>_set_Item__
                                                  ,*(undefined8 *)(*plVar12 + 0x40)), lVar11 == 0))
                goto LAB_05ecf4a8;
                if ((int)plVar12[3] == 0) goto LAB_05ecf494;
                plVar12[4] = *(long *)
                              Method_System_Collections_Generic_LowLevelList<object>_set_Item__;
                LeanTween__value();
                local_100 = *(long **)(lVar18 + 0x80);
                lVar18 = thunk_FUN_02dd2d7c(*(undefined8 *)(PTR_DAT_069fb9c0 + 0x70),&local_100);
                if ((lVar18 != 0) &&
                   (lVar11 = thunk_FUN_02dd3048(lVar18,*(undefined8 *)(*plVar12 + 0x40)),
                   lVar11 == 0)) goto LAB_05ecf4a8;
                if ((*(uint *)(plVar12 + 3) & 0xfffffffe) == 0) goto LAB_05ecf494;
                plVar12[5] = lVar18;
                LeanTween__value(plVar12 + 5,lVar18);
                if ((*(long *)Method_System_Collections_Generic_LowLevelList<object>_set_Item__ != 0
                    ) && (lVar18 = thunk_FUN_02dd3048(*(long *)
                                                  Method_System_Collections_Generic_LowLevelList<object>_set_Item__
                                                  ,*(undefined8 *)(*plVar12 + 0x40)), lVar18 == 0))
                goto LAB_05ecf4a8;
                if (*(uint *)(plVar12 + 3) < 3) goto LAB_05ecf494;
                plVar12[6] = *(long *)
                              Method_System_Collections_Generic_LowLevelList<object>_set_Item__;
                LeanTween__value();
                local_e8 = *(undefined8 *)(param_2 + 0x80);
                lVar18 = thunk_FUN_02dd2d7c(*(undefined8 *)(PTR_DAT_069fb9c0 + 0x70),&local_e8);
                if ((lVar18 != 0) &&
                   (lVar11 = thunk_FUN_02dd3048(lVar18,*(undefined8 *)(*plVar12 + 0x40)),
                   lVar11 == 0)) goto LAB_05ecf4a8;
                if ((*(uint *)(plVar12 + 3) & 0xfffffffc) == 0) goto LAB_05ecf494;
                plVar12[7] = lVar18;
                LeanTween__value(plVar12 + 7,lVar18);
                uVar17 = FUN_0536e164(*(undefined8 *)
                                       Method_OVRNativeList<OVRPlugin_DynamicObjectClass>_Add__,
                                      plVar12,0);
                FUN_05e6f7ec(uVar17,0);
              }
            }
            else if (iVar8 < 1) {
              plVar12 = (long *)FUN_02d966a4(*(undefined8 *)PTR_DAT_069fc180,4);
              if (plVar12 == (long *)0x0) goto LAB_05ecf67c;
              if ((*(long *)Method_System_Collections_Generic_LowLevelList<object>_set_Item__ != 0)
                 && (lVar11 = thunk_FUN_02dd3048(*(long *)
                                                  Method_System_Collections_Generic_LowLevelList<object>_set_Item__
                                                 ,*(undefined8 *)(*plVar12 + 0x40)), lVar11 == 0)) {
LAB_05ecf4a8:
                uVar17 = thunk_FUN_02de0bec();
                    /* WARNING: Subroutine does not return */
                FUN_02d96724(uVar17,0);
              }
              if ((int)plVar12[3] == 0) {
LAB_05ecf494:
                    /* WARNING: Subroutine does not return */
                FUN_02d96868();
              }
              plVar12[4] = *(long *)
                            Method_System_Collections_Generic_LowLevelList<object>_set_Item__;
              LeanTween__value();
              local_100 = *(long **)(lVar18 + 0x80);
              lVar18 = thunk_FUN_02dd2d7c(*(undefined8 *)(PTR_DAT_069fb9c0 + 0x70),&local_100);
              if ((lVar18 != 0) &&
                 (lVar11 = thunk_FUN_02dd3048(lVar18,*(undefined8 *)(*plVar12 + 0x40)), lVar11 == 0)
                 ) goto LAB_05ecf4a8;
              if ((*(uint *)(plVar12 + 3) & 0xfffffffe) == 0) goto LAB_05ecf494;
              plVar12[5] = lVar18;
              LeanTween__value(plVar12 + 5,lVar18);
              if ((*(long *)Method_System_Collections_Generic_LowLevelList<object>_set_Item__ != 0)
                 && (lVar18 = thunk_FUN_02dd3048(*(long *)
                                                  Method_System_Collections_Generic_LowLevelList<object>_set_Item__
                                                 ,*(undefined8 *)(*plVar12 + 0x40)), lVar18 == 0))
              goto LAB_05ecf4a8;
              if (*(uint *)(plVar12 + 3) < 3) goto LAB_05ecf494;
              plVar12[6] = *(long *)
                            Method_System_Collections_Generic_LowLevelList<object>_set_Item__;
              LeanTween__value();
              local_e8 = *(undefined8 *)(param_2 + 0x80);
              lVar18 = thunk_FUN_02dd2d7c(*(undefined8 *)(PTR_DAT_069fb9c0 + 0x70),&local_e8);
              if ((lVar18 != 0) &&
                 (lVar11 = thunk_FUN_02dd3048(lVar18,*(undefined8 *)(*plVar12 + 0x40)), lVar11 == 0)
                 ) goto LAB_05ecf4a8;
              if ((*(uint *)(plVar12 + 3) & 0xfffffffc) == 0) goto LAB_05ecf494;
              plVar12[7] = lVar18;
              LeanTween__value(plVar12 + 7,lVar18);
              uVar17 = FUN_0536e164(*(undefined8 *)
                                     Method_OVRNativeList<OVRPlugin_DynamicObjectClass>_Dispose__,
                                    plVar12,0);
              FUN_05e70210(uVar17,0);
            }
          }
        }
        uVar14 = (ulong)*(uint *)(lVar10 + 0x18);
        uVar9 = uVar9 + 1;
      } while ((long)uVar9 < (long)(int)*(uint *)(lVar10 + 0x18));
    }
  }
  FUN_05e762bc(param_2,0);
  uVar17 = *(undefined8 *)(param_1 + 0x50);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  uVar9 = FUN_0634eb94(uVar17,0,0);
  if ((uVar9 & 1) != 0) {
    if (*(long *)(param_1 + 0x50) == 0) goto LAB_05ecf67c;
    uVar9 = FUN_05e5e6d0(*(long *)(param_1 + 0x50),0);
    if ((uVar9 & 1) == 0) {
      if (cVar1 == '\0') goto LAB_05ecf568;
LAB_05ecefc0:
      if (*(long *)(param_1 + 0x50) == 0) goto LAB_05ecf67c;
      lVar18 = *(long *)(param_2 + 0x88);
      lVar10 = FUN_05e5e724(*(long *)(param_1 + 0x50),0);
      if (lVar18 != lVar10) goto LAB_05ecf568;
    }
    else if ((cVar1 != '\0') && ((param_4 & 1) == 0)) goto LAB_05ecefc0;
    lVar10 = *(long *)(param_1 + 0x50);
    if ((lVar10 == 0) || (*(long *)(lVar10 + 0x90) == 0)) goto LAB_05ecf67c;
    if (*(char *)(*(long *)(lVar10 + 0x90) + 0x53) != '\0') {
      if (*(long *)(lVar10 + 0x118) == 0) goto LAB_05ecf67c;
      lVar10 = *(long *)(param_1 + 0x58);
      uVar17 = *(undefined8 *)(param_2 + 0x80);
      uVar19 = FUN_0297bd6c(1,*(undefined8 *)PTR_DAT_06a12010);
      if (lVar10 == 0) goto LAB_05ecf67c;
      FUN_044e4fd0(lVar10,uVar17,uVar19,
                   *(undefined8 *)Method_OVRNativeList<OVRAnchor_FilterUnion>_get_Count__);
    }
    lVar10 = *(long *)(param_1 + 0x68);
    if (lVar10 == 0) goto LAB_05ecf67c;
    *(undefined4 *)(lVar10 + 0x18) = 0;
    *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
    if (*(long *)(param_1 + 0x50) == 0) goto LAB_05ecf67c;
    uVar9 = FUN_05e5e6d0(*(long *)(param_1 + 0x50),0);
    if ((uVar9 & 1) != 0) {
      if ((*(long *)(param_1 + 0x50) == 0) ||
         (lVar10 = FUN_05e6bcf4(*(long *)(param_1 + 0x50),0), lVar10 == 0)) goto LAB_05ecf67c;
      iVar8 = FUN_0297bd6c(0,*(undefined8 *)
                              Method_Oculus_Platform_Message<AppDownloadResult>__ctor__,lVar10);
      if (0 < iVar8) {
        if (cVar1 == '\0') {
LAB_05ecf138:
          if ((*(long *)(param_1 + 0x50) != 0) &&
             (lVar10 = FUN_05e5e70c(*(long *)(param_1 + 0x50),0), lVar10 != 0)) {
            plVar12 = (long *)FUN_0297bd6c(0,*(undefined8 *)PTR_DAT_06a002f0,lVar10);
            puVar6 = PTR_DAT_06a0e4b8;
            puVar5 = PTR_DAT_06a002f8;
            puVar4 = PTR_DAT_069fbff8;
            pplStack_f8 = &local_78;
            local_100 = (long *)0x0;
joined_r0x05ecf170:
            do {
              do {
                do {
                  do {
                    local_78 = plVar12;
                    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                      FUN_02d96860();
                    }
                    lVar10 = *plVar12;
                    uVar9 = (ulong)*(ushort *)(lVar10 + 0x12e);
                    if (uVar9 != 0) {
                      piVar16 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar16 + -2) == *(long *)puVar4) {
                          puVar13 = (undefined8 *)(lVar10 + (long)*piVar16 * 0x10 + 0x138);
                          goto LAB_05ecf1e4;
                        }
                        uVar9 = uVar9 - 1;
                        piVar16 = piVar16 + 4;
                      } while (uVar9 != 0);
                    }
                    puVar13 = (undefined8 *)FUN_02dd004c(plVar12,*(long *)puVar4,0);
LAB_05ecf1e4:
                    uVar9 = (*(code *)*puVar13)(plVar12,puVar13[1]);
                    plVar12 = local_78;
                    if ((uVar9 & 1) == 0) {
                      FUN_029794b4(&local_100);
                      goto LAB_05ecf328;
                    }
                    if (local_78 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                      FUN_02d96860();
                    }
                    lVar10 = *local_78;
                    uVar9 = (ulong)*(ushort *)(lVar10 + 0x12e);
                    if (uVar9 != 0) {
                      piVar16 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar16 + -2) == *(long *)puVar5) {
                          puVar13 = (undefined8 *)(lVar10 + (long)*piVar16 * 0x10 + 0x138);
                          goto LAB_05ecf248;
                        }
                        uVar9 = uVar9 - 1;
                        piVar16 = piVar16 + 4;
                      } while (uVar9 != 0);
                    }
                    puVar13 = (undefined8 *)FUN_02dd004c(local_78,*(long *)puVar5,0);
LAB_05ecf248:
                    lVar10 = (*(code *)*puVar13)(plVar12,puVar13[1]);
                  } while ((cVar1 != '\0') &&
                          (plVar12 = local_78, lVar10 == *(long *)(param_2 + 0x88)));
                  if (*(long *)(param_1 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02d96860();
                  }
                  lVar18 = FUN_05e5e724(*(long *)(param_1 + 0x50),0);
                  plVar12 = local_78;
                } while (lVar10 == lVar18);
                if (DAT_06dc3b9b == '\0') {
                  FUN_02d965b8(puVar6);
                  DAT_06dc3b9b = '\x01';
                }
                plVar12 = local_78;
              } while (*(char *)(param_2 + 0x9b) == '\0');
              if (*(long *)(param_2 + 0xd0) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96860();
              }
              uVar9 = FUN_03c5ecb0(*(long *)(param_2 + 0xd0),lVar10,*(undefined8 *)puVar6);
              plVar12 = local_78;
            } while ((uVar9 & 1) == 0);
            lVar18 = *(long *)(param_1 + 0x68);
            if (lVar18 != 0) {
              lVar11 = *(long *)(lVar18 + 0x10);
              lVar15 = *(long *)PTR_DAT_06a149c0;
              *(int *)(lVar18 + 0x1c) = *(int *)(lVar18 + 0x1c) + 1;
              if (lVar11 != 0) {
                uVar2 = *(uint *)(lVar18 + 0x18);
                if (uVar2 < *(uint *)(lVar11 + 0x18)) {
                  *(uint *)(lVar18 + 0x18) = uVar2 + 1;
                  *(long *)(lVar11 + (long)(int)uVar2 * 8 + 0x20) = lVar10;
                }
                else {
                  FUN_0408dbe4(lVar18,lVar10,
                               *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
                  plVar12 = local_78;
                }
                goto joined_r0x05ecf170;
              }
            }
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          goto LAB_05ecf67c;
        }
        if (*(long *)(param_1 + 0x50) == 0) goto LAB_05ecf67c;
        uVar9 = FUN_05e62820(*(long *)(param_1 + 0x50),0);
        if ((uVar9 & 1) != 0) {
          if (*(long *)(param_1 + 0x50) == 0) goto LAB_05ecf67c;
          lVar18 = *(long *)(param_2 + 0x88);
          lVar10 = FUN_05e5e724(*(long *)(param_1 + 0x50),0);
          if ((lVar18 == lVar10) || ((param_4 & 1) != 0)) goto LAB_05ecf138;
        }
      }
    }
    if (*(long *)(param_1 + 0x50) == 0) goto LAB_05ecf67c;
    uVar9 = FUN_05e5e6d0(*(long *)(param_1 + 0x50),0);
    if ((cVar1 != '\0') && ((uVar9 & 1) == 0)) {
      if (*(long *)(param_1 + 0x50) == 0) goto LAB_05ecf67c;
      lVar18 = *(long *)(param_2 + 0x88);
      lVar10 = FUN_05e5e724(*(long *)(param_1 + 0x50),0);
      if (lVar18 == lVar10) {
        if (*(long *)(param_1 + 0x50) == 0) goto LAB_05ecf67c;
        if ((*(char *)(*(long *)(param_1 + 0x50) + 0x88) == '\0') ||
           (*(char *)(param_2 + 200) == '\0')) {
          if (*(long *)(param_1 + 0x68) == 0) goto LAB_05ecf67c;
          FUN_02d4b438(*(long *)(param_1 + 0x68),0,*(undefined8 *)PTR_DAT_06a149c0);
        }
      }
    }
LAB_05ecf328:
    if (*(long *)(param_1 + 0x68) == 0) goto LAB_05ecf67c;
    if (0 < *(int *)(*(long *)(param_1 + 0x68) + 0x18)) {
      if (*(long *)(param_1 + 0x50) == 0) goto LAB_05ecf67c;
      if (*(char *)(*(long *)(param_1 + 0x50) + 0x88) == '\0') {
        local_c0 = *(undefined8 *)(param_2 + 0x80);
        local_a8 = 0;
        uStack_b0 = 0;
        uStack_b8 = (ulong)*(uint *)(param_2 + 0x48) << 0x20;
        uStack_b8 = CONCAT71(uStack_b8._1_7_,param_3) & 0xffffffffffffff01;
        FUN_05e885a0(&local_c0,0,0);
        local_a8 = CONCAT71(local_a8._1_7_,cVar1);
        uStack_98 = uStack_b8;
        local_a0 = local_c0;
        uStack_88 = local_a8;
        uStack_90 = uStack_b0;
        if (*(long *)(param_1 + 0x68) == 0) goto LAB_05ecf67c;
        FUN_0408e660(&local_100,*(long *)(param_1 + 0x68),
                     *(undefined8 *)
                      Method_System_Collections_Generic_List<TemplateAsset_UxmlSerializedDataOverride>_GetEnumerator__
                    );
        puVar6 = Method_System_Memory<byte>_get_Length__;
        puVar5 = 
        Method_System_Collections_Generic_List<TMP_MaterialManager_MaskingMaterial>_RemoveAt__;
        puVar4 = PTR_DAT_06a0e238;
        pplStack_d8 = pplStack_f8;
        local_e0 = local_100;
        pplStack_f8 = &local_e0;
        local_d0 = local_f0;
        local_100 = (long *)0x0;
        while (uVar9 = FUN_051706f4(&local_e0,*(undefined8 *)puVar5), uVar17 = local_d0,
              (uVar9 & 1) != 0) {
          if (*(long *)(param_1 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          lVar10 = *(long *)(*(long *)(param_1 + 0x50) + 0x128);
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          iVar8 = FUN_036f3340(lVar10,&local_a0,3,local_d0,*(undefined8 *)puVar6);
          if (*(long *)(param_1 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          plVar12 = (long *)FUN_05e63228(*(long *)(param_1 + 0x50),0);
          if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          lVar10 = *plVar12;
          uVar9 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar9 != 0) {
            piVar16 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == *(long *)puVar4) {
                puVar13 = (undefined8 *)(lVar10 + (long)(*piVar16 + 0x11) * 0x10 + 0x138);
                goto LAB_05ecf478;
              }
              uVar9 = uVar9 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar9 != 0);
          }
          puVar13 = (undefined8 *)FUN_02dd004c(plVar12,*(long *)puVar4,0x11);
LAB_05ecf478:
          (*(code *)*puVar13)(plVar12,uVar17,param_2,(long)iVar8,puVar13[1]);
        }
        FUN_02d49b94(&local_100);
      }
    }
  }
LAB_05ecf568:
  FUN_05e73a90(param_2,0);
  if (*(long *)(param_1 + 0x20) == 0) goto LAB_05ecf67c;
  uVar9 = FUN_04ff2f1c(*(long *)(param_1 + 0x20),*(undefined8 *)(param_2 + 0x80),
                       *(undefined8 *)
                        Method_System_Collections_Generic_List<ClassDataContract_ClassDataContractCriticalHelper_Member>_Add__
                      );
  if ((uVar9 & 1) != 0) {
    if (*(long *)(param_1 + 0x28) == 0) goto LAB_05ecf67c;
    FUN_03c232ec(*(long *)(param_1 + 0x28),param_2,
                 *(undefined8 *)Method_Oculus_Platform_Message<DestinationList>__ctor__);
  }
  if (*(char *)(param_2 + 0x99) != '\0') {
    FUN_05ec8b98(param_1,param_2,param_3 & 1);
  }
  uVar17 = FUN_0634bbcc(param_2,0);
  if ((param_3 & 1) != 0) {
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    uVar9 = FUN_0634eb94(uVar17,0,0);
    if ((uVar9 & 1) != 0) {
      if ((*(long *)(param_1 + 0x50) == 0) ||
         (lVar10 = FUN_05e634b8(*(long *)(param_1 + 0x50),0), lVar10 == 0)) {
LAB_05ecf67c:
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      uVar9 = FUN_05ec7a30(lVar10,param_2);
      if ((uVar9 & 1) == 0) {
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        FUN_063550b4(uVar17,0);
      }
      else {
        if ((*(long *)(param_1 + 0x50) == 0) ||
           (lVar10 = FUN_05e634b8(*(long *)(param_1 + 0x50),0), lVar10 == 0)) goto LAB_05ecf67c;
        FUN_05ec7ce0(lVar10,param_2);
      }
    }
  }
  return;
}


