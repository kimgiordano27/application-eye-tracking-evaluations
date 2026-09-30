/*
FUNCTION_NAME: FUN_0379580c
ENTRY_POINT: 0379580c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 118
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_6;functionality_gaze_retrieval_or_extraction
*/


undefined4 FUN_0379580c(long param_1,long param_2,long param_3,long param_4)

{
  long *plVar1;
  char *pcVar2;
  long *plVar3;
  byte bVar4;
  undefined *puVar5;
  undefined *puVar6;
  bool bVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  undefined4 uVar12;
  int iVar13;
  undefined4 uVar14;
  ulong uVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 *puVar18;
  long *plVar19;
  ulong uVar20;
  undefined8 uVar21;
  long lVar22;
  int *piVar23;
  long lVar24;
  long *plVar25;
  uint *puVar26;
  uint uVar27;
  uint uVar28;
  undefined8 uVar29;
  void *__dest;
  long *plVar30;
  long *plVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  long lVar34;
  int local_1ac;
  uint local_184;
  long local_180;
  undefined1 auStack_170 [80];
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  long local_70;
  uint local_68;
  undefined1 local_64 [4];
  
  if ((DAT_041374fa & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cc02b0);
    FUN_01ab69ac(PTR_DAT_03cbe438);
    FUN_01ab69ac(PTR_DAT_03cd6f90);
    FUN_01ab69ac(
                Method_System_Collections_Generic_Dictionary<int,_GUILayoutUtility_LayoutCache>_Remove__
                );
    FUN_01ab69ac(PTR_DAT_03ceb270);
    FUN_01ab69ac(Method_System_Collections_Generic_Dictionary<int,_List<int>>__ctor__);
    FUN_01ab69ac(Method_System_Collections_Generic_Dictionary<int,_List<Renderer>>_get_Item__);
    FUN_01ab69ac(Method_System_Collections_Generic_Dictionary<int,_char>__ctor__);
    FUN_01ab69ac(Method_System_Collections_Generic_Dictionary<int,_long>_set_Item__);
    FUN_01ab69ac(Method_System_Collections_Generic_Dictionary<int,_List<Renderer>>_get_Keys__);
    FUN_01ab69ac(
                Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Count__
                );
    FUN_01ab69ac(PTR_DAT_03cbea58);
    FUN_01ab69ac(Method_System_Collections_Generic_Dictionary<int,_int>_Clear__);
    FUN_01ab69ac(PTR_DAT_03cbdf88);
    FUN_01ab69ac(Method_System_Collections_Generic_Dictionary<int,_Material>_Add__);
    FUN_01ab69ac(
                Method_System_Collections_Generic_Dictionary<int,_GUILayoutUtility_LayoutCache>_TryGetValue__
                );
    FUN_01ab69ac(
                Method_System_Collections_Generic_Dictionary<int,_GUILayoutUtility_LayoutCache>_set_Item__
                );
    FUN_01ab69ac(Method_System_Collections_Generic_Dictionary<int,_TextColorGradient>__ctor__);
    FUN_01ab69ac(Method_System_Collections_Generic_Dictionary<int,_Texture2D>_TryGetValue__);
    FUN_01ab69ac(Method_System_Collections_Generic_Dictionary<int,_TrackedDeviceEventData>__ctor__);
    FUN_01ab69ac(PTR_DAT_03cc4ad8);
    FUN_01ab69ac(
                Method_System_Collections_Generic_Dictionary<int,_MB3_MeshCombinerSingle_MeshChannels>__ctor__
                );
    FUN_01ab69ac(OVRPlugin_TrackedKeyboardQueryFlags_TypeInfo);
    FUN_01ab69ac(
                Method_System_Collections_Generic_Dictionary<int,_MB3_MeshCombinerSingle_MeshChannels>_Add__
                );
    FUN_01ab69ac(OVRPlugin_TrackingConfidence_TypeInfo);
    DAT_041374fa = 1;
  }
  local_64[0] = 0;
  local_68 = 0;
  local_78 = 0;
  local_70 = 0;
  local_88 = 0;
  local_80 = 0;
  if (param_3 == 0) goto LAB_03796df0;
  lVar24 = *(long *)(param_3 + 0x68);
  pcVar2 = (char *)(param_1 + 0x1578);
  *(undefined4 *)(param_1 + 0xe8) = 0;
  *(undefined1 *)(param_1 + 0x1579) = 0;
  *(undefined1 *)(param_1 + 800) = 0;
  puVar6 = Method_System_Collections_Generic_Dictionary<int,_TrackedDeviceEventData>__ctor__;
  puVar5 = Method_System_Collections_Generic_Dictionary<int,_Texture2D>_TryGetValue__;
  *(undefined4 *)(param_1 + 0x124) = *(undefined4 *)(param_3 + 0x60);
  FUN_037a7f44(param_1 + 0x128,0);
  if ((*(byte *)(param_1 + 0x124) & 1) == 0) {
    uVar14 = *(undefined4 *)(param_3 + 0xec);
  }
  else {
    uVar14 = 700;
  }
  *(undefined4 *)(param_1 + 0x134) = uVar14;
  local_120 = CONCAT44(local_120._4_4_,uVar14);
  FUN_020aa864(param_1 + 0x138,&local_120,*(undefined8 *)puVar6);
  plVar30 = (long *)(param_1 + 0x68);
  *plVar30 = *(long *)(param_3 + 0x40);
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar30);
  plVar31 = (long *)(param_1 + 0x70);
  *plVar31 = *(long *)(param_3 + 0x48);
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar31);
  *(undefined4 *)(param_1 + 0x78) = 0;
  local_f0 = 0;
  uStack_108 = 0;
  local_110 = 0;
  uStack_f8 = 0;
  local_100 = 0;
  uStack_118 = 0;
  local_120 = 0;
  FUN_037846a0(*(undefined4 *)(param_1 + 0xd8),&local_120,0,*plVar30,0,*plVar31,0);
  uStack_b8 = uStack_118;
  local_c0 = local_120;
  uStack_a8 = uStack_108;
  uStack_b0 = local_110;
  uStack_98 = uStack_f8;
  local_a0 = local_100;
  local_90 = local_f0;
  FUN_020aa864(param_1 + 0x80,&local_c0,*(undefined8 *)puVar5);
  puVar5 = Method_System_Collections_Generic_Dictionary<int,_TextColorGradient>__ctor__;
  if (*(long *)(param_1 + 0x19e0) == 0) goto LAB_03796df0;
  FUN_0219c0c4(*(long *)(param_1 + 0x19e0),*(undefined8 *)PTR_DAT_03cd6f90);
  plVar3 = (long *)(param_1 + 0x15b8);
  FUN_0378475c(*(undefined8 *)(param_1 + 0x70),*(undefined8 *)(param_1 + 0x68),plVar3,
               *(undefined8 *)(param_1 + 0x19e0),0);
  if (param_4 == 0) {
    local_180 = thunk_FUN_01a89e68(*(undefined8 *)puVar5);
    FUN_037a6284(local_180,0);
  }
  else {
    lVar22 = *(long *)(param_4 + 0x30);
    if (lVar22 == 0) goto LAB_03796df0;
    iVar9 = *(int *)(param_1 + 0x28);
    local_180 = param_4;
    if (*(int *)(lVar22 + 0x18) < iVar9) {
      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_01ff3814((long *)(param_4 + 0x30),iVar9,0,
                   *(undefined8 *)
                    Method_System_Collections_Generic_Dictionary<int,_GUILayoutUtility_LayoutCache>_set_Item__
                  );
    }
  }
  *pcVar2 = '\x01';
  if (*(int *)(param_3 + 0x74) == 1) {
    FUN_0379e2a8(param_1,param_3);
    if (*(long *)(param_1 + 0x1a00) == 0) {
      *(undefined4 *)(param_3 + 0x74) = 3;
      if (lVar24 == 0) goto LAB_03796df0;
      if (*(char *)(lVar24 + 0x89) != '\0') {
        if (*plVar30 == 0) goto LAB_03796df0;
        uVar21 = FUN_036d3824(*plVar30,0);
        uVar21 = FUN_025bdc88(*(undefined8 *)OVRPlugin_TrackedKeyboardQueryFlags_TypeInfo,uVar21,
                              *(undefined8 *)OVRPlugin_TrackingConfidence_TypeInfo,0);
        if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
          thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbe438);
        }
        FUN_036772fc(uVar21,0);
      }
    }
    else {
      if (*(long *)(param_1 + 0x1a08) == 0) goto LAB_03796df0;
      iVar9 = FUN_036d3364(*(long *)(param_1 + 0x1a08),0);
      if (*plVar30 == 0) goto LAB_03796df0;
      iVar10 = FUN_036d3364(*plVar30,0);
      if (iVar9 != iVar10) {
        if (lVar24 == 0) goto LAB_03796df0;
        if (*(char *)(lVar24 + 0x38) == '\0') {
LAB_03795bc4:
          if (*(long *)(param_1 + 0x1a08) == 0) goto LAB_03796df0;
          uVar21 = *(undefined8 *)(*(long *)(param_1 + 0x1a08) + 0x28);
        }
        else {
          if (*plVar31 == 0) goto LAB_03796df0;
          iVar9 = FUN_036d3364(*plVar31,0);
          if ((*(long *)(param_1 + 0x1a08) == 0) ||
             (lVar22 = *(long *)(*(long *)(param_1 + 0x1a08) + 0x28), lVar22 == 0))
          goto LAB_03796df0;
          iVar10 = FUN_036d3364(lVar22,0);
          if (iVar9 == iVar10) goto LAB_03795bc4;
          if (*(long *)(param_1 + 0x1a08) == 0) goto LAB_03796df0;
          uVar21 = *(undefined8 *)(param_1 + 0x70);
          uVar32 = *(undefined8 *)(*(long *)(param_1 + 0x1a08) + 0x28);
          if (*(int *)(*(long *)
                        Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Count__
                      + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar21 = FUN_03783d84(uVar21,uVar32,0);
        }
        *(undefined8 *)(param_1 + 0x1a10) = uVar21;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(param_1 + 0x1a10);
        uVar11 = FUN_0378475c(*(undefined8 *)(param_1 + 0x1a10),*(undefined8 *)(param_1 + 0x1a08),
                              plVar3,*(undefined8 *)(param_1 + 0x19e0),0);
        lVar22 = *(long *)(param_1 + 0x15b8);
        *(uint *)(param_1 + 0x1a18) = uVar11;
        if (lVar22 == 0) goto LAB_03796df0;
        if (*(uint *)(lVar22 + 0x18) <= uVar11) {
LAB_03796df4:
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        *(undefined4 *)(lVar22 + (long)(int)uVar11 * 0x38 + 0x54) = 0;
      }
    }
  }
  if (param_2 == 0) goto LAB_03796df0;
  uVar11 = *(uint *)(param_2 + 0x18);
  plVar1 = (long *)(local_180 + 0x30);
  if (0 < (int)uVar11) {
    uVar27 = 0;
    local_1ac = 0;
LAB_03795d08:
    if (uVar11 <= uVar27) goto LAB_03796df4;
    puVar26 = (uint *)(param_2 + (long)(int)uVar27 * 0x10 + 0x24);
    if (*puVar26 == 0) goto LAB_03796b00;
    if (local_180 == 0) goto LAB_03796df0;
    iVar9 = *(int *)(param_1 + 0xe8);
    if ((*plVar1 == 0) || (*(int *)(*plVar1 + 0x18) <= iVar9)) {
      if (*(int *)(*(long *)
                    Method_System_Collections_Generic_Dictionary<int,_TextColorGradient>__ctor__ +
                  0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_01ff3814(plVar1,iVar9 + 1,1,
                   *(undefined8 *)
                    Method_System_Collections_Generic_Dictionary<int,_GUILayoutUtility_LayoutCache>_set_Item__
                  );
      uVar11 = *(uint *)(param_2 + 0x18);
    }
    if (uVar11 <= uVar27) goto LAB_03796df4;
    uVar11 = *puVar26;
    if ((uVar11 == 0x3c) && (*(char *)(param_3 + 0xb5) != '\0')) {
      uVar14 = *(undefined4 *)(param_1 + 0x78);
      uVar15 = FUN_037974c0(param_1,param_2,uVar27 + 1,&local_68,param_3,local_180);
      uVar28 = local_68;
      if ((uVar15 & 1) == 0) goto LAB_03795f38;
      if (*(uint *)(param_2 + 0x18) <= uVar27) goto LAB_03796df4;
      if (*pcVar2 != '\x02') goto LAB_03796ae8;
      lVar22 = *(long *)(param_1 + 0x15b8);
      if (lVar22 != 0) {
        if (*(uint *)(param_1 + 0x78) < *(uint *)(lVar22 + 0x18)) {
          lVar22 = lVar22 + (long)(int)*(uint *)(param_1 + 0x78) * 0x38;
          iVar9 = *(int *)(param_2 + (long)(int)uVar27 * 0x10 + 0x28);
          *(int *)(lVar22 + 0x54) = *(int *)(lVar22 + 0x54) + 1;
          lVar22 = *plVar1;
          if (lVar22 != 0) {
            if (*(uint *)(param_1 + 0xe8) < *(uint *)(lVar22 + 0x18)) {
              lVar22 = lVar22 + (long)(int)*(uint *)(param_1 + 0xe8) * 0x188;
              *(short *)(lVar22 + 0x20) = *(short *)(param_1 + 0x157c) + -0x2000;
              *(undefined8 *)(lVar22 + 0x40) = *(undefined8 *)(param_1 + 0x68);
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
              lVar22 = *plVar1;
              if (lVar22 != 0) {
                uVar11 = *(uint *)(param_1 + 0xe8);
                if (uVar11 < *(uint *)(lVar22 + 0x18)) {
                  *(undefined4 *)(lVar22 + (long)(int)uVar11 * 0x188 + 0x60) =
                       *(undefined4 *)(param_1 + 0x78);
                  if ((*(long *)(param_1 + 0xe0) != 0) &&
                     (lVar16 = FUN_037862e0(*(long *)(param_1 + 0xe0),0), lVar16 != 0)) {
                    FUN_02215a88(lVar16,*(undefined4 *)(param_1 + 0x157c),&local_120,
                                 *(undefined8 *)
                                  Method_System_Collections_Generic_Dictionary<int,_long>_set_Item__
                                );
                    if (uVar11 < *(uint *)(lVar22 + 0x18)) {
                      *(undefined8 *)(lVar22 + (long)(int)uVar11 * 0x188 + 0x30) = local_120;
                      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                      lVar22 = *plVar1;
                      if (lVar22 != 0) {
                        uVar11 = *(uint *)(param_1 + 0xe8);
                        if (uVar11 < *(uint *)(lVar22 + 0x18)) {
                          cVar8 = *pcVar2;
                          lVar16 = lVar22 + (long)(int)uVar11 * 0x188;
                          *(int *)(lVar16 + 0x24) = iVar9;
                          *(char *)(lVar16 + 0x28) = cVar8;
                          if (uVar28 < *(uint *)(param_2 + 0x18)) {
                            *(int *)(lVar22 + (long)(int)uVar11 * 0x188 + 0x2c) =
                                 (*(int *)(param_2 + (long)(int)uVar28 * 0x10 + 0x28) - iVar9) + 1;
                            *pcVar2 = '\x01';
                            *(undefined4 *)(param_1 + 0x78) = uVar14;
                            uVar27 = uVar28;
                            goto UnityEngine_UIElements_PointerLeaveEvent___ctor;
                          }
                        }
                        goto LAB_03796df4;
                      }
                      goto LAB_03796df0;
                    }
                    goto LAB_03796df4;
                  }
                  goto LAB_03796df0;
                }
                goto LAB_03796df4;
              }
              goto LAB_03796df0;
            }
            goto LAB_03796df4;
          }
          goto LAB_03796df0;
        }
        goto LAB_03796df4;
      }
      goto LAB_03796df0;
    }
LAB_03795f38:
    uVar21 = *(undefined8 *)(param_1 + 0x68);
    uVar32 = *(undefined8 *)(param_1 + 0x70);
    uVar14 = *(undefined4 *)(param_1 + 0x78);
    if (*pcVar2 != '\x01') goto LAB_0379604c;
    uVar28 = *(uint *)(param_1 + 0x124);
    if ((uVar28 >> 4 & 1) == 0) {
      if ((uVar28 >> 3 & 1) == 0) {
        if ((uVar28 >> 5 & 1) != 0) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar15 = FUN_026b812c(uVar11,0);
          goto joined_r0x03795fc4;
        }
      }
      else {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar15 = FUN_026b8070(uVar11,0);
        if ((uVar15 & 1) != 0) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar11 = FUN_026b8594(uVar11,0);
          goto LAB_03796048;
        }
      }
    }
    else {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar15 = FUN_026b812c(uVar11,0);
joined_r0x03795fc4:
      if ((uVar15 & 1) != 0) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar11 = FUN_026b8410(uVar11,0);
LAB_03796048:
        uVar11 = uVar11 & 0xffff;
      }
    }
LAB_0379604c:
    lVar22 = FUN_0379e454(param_1,param_3,uVar11,*(undefined8 *)(param_1 + 0x68),
                          *(undefined4 *)(param_1 + 0x124),*(undefined4 *)(param_1 + 0x134),local_64
                         );
    local_184 = uVar11;
    if (lVar22 == 0) {
      if (*(uint *)(param_2 + 0x18) <= uVar27) goto LAB_03796df4;
      FUN_0379e748(0,uVar11,*(undefined4 *)(param_2 + (long)(int)uVar27 * 0x10 + 0x28),*plVar30,
                   local_180);
      if (lVar24 == 0) goto LAB_03796df0;
      if (*(uint *)(param_2 + 0x18) <= uVar27) goto LAB_03796df4;
      local_184 = 0x25a1;
      if (*(uint *)(lVar24 + 0x3c) != 0) {
        local_184 = *(uint *)(lVar24 + 0x3c);
      }
      *puVar26 = local_184;
      lVar22 = FUN_03782bd4(local_184,*(undefined8 *)(param_1 + 0x68),1,
                            *(undefined4 *)(param_1 + 0x124),*(undefined4 *)(param_1 + 0x134),
                            local_64,0);
      if ((lVar22 == 0) &&
         (((lVar22 = *(long *)(lVar24 + 0x30), lVar22 == 0 || (*(int *)(lVar22 + 0x18) < 1)) ||
          (lVar22 = FUN_0378314c(local_184,*(undefined8 *)(param_1 + 0x68),lVar22,1,
                                 *(undefined4 *)(param_1 + 0x124),*(undefined4 *)(param_1 + 0x134),
                                 local_64,0), lVar22 == 0)))) {
        uVar33 = *(undefined8 *)(lVar24 + 0x20);
        if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar15 = FUN_036cee6c(uVar33,0,0);
        if (((uVar15 & 1) == 0) ||
           (lVar22 = FUN_03782bd4(local_184,*(undefined8 *)(lVar24 + 0x20),1,
                                  *(undefined4 *)(param_1 + 0x124),*(undefined4 *)(param_1 + 0x134),
                                  local_64,0), lVar22 == 0)) {
          if (*(uint *)(param_2 + 0x18) <= uVar27) goto LAB_03796df4;
          *puVar26 = 0x20;
          local_184 = 0x20;
          lVar22 = FUN_03782bd4(0x20,*(undefined8 *)(param_1 + 0x68),1,
                                *(undefined4 *)(param_1 + 0x124),*(undefined4 *)(param_1 + 0x134),
                                local_64,0);
          if (lVar22 == 0) {
            if (*(uint *)(param_2 + 0x18) <= uVar27) goto LAB_03796df4;
            *puVar26 = 3;
            local_184 = 3;
            lVar22 = FUN_03782bd4(3,*(undefined8 *)(param_1 + 0x68),1,
                                  *(undefined4 *)(param_1 + 0x124),*(undefined4 *)(param_1 + 0x134),
                                  local_64,0);
          }
        }
      }
      if (*(char *)(lVar24 + 0x89) != '\0') {
        if (uVar11 >> 0x10 == 0) {
          local_120 = CONCAT44(local_120._4_4_,uVar11);
          uVar33 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cc4ad8,&local_120);
          if ((*(long *)(param_3 + 0x40) == 0) ||
             (uVar29 = FUN_036d3824(*(long *)(param_3 + 0x40),0), lVar22 == 0)) goto LAB_03796df0;
          local_c4 = FUN_0377baf0(lVar22,0);
          uVar17 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cc4ad8,&local_c4);
          puVar18 = (undefined8 *)
                    Method_System_Collections_Generic_Dictionary<int,_MB3_MeshCombinerSingle_MeshChannels>_Add__
          ;
        }
        else {
          local_120 = CONCAT44(local_120._4_4_,uVar11);
          uVar33 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cc4ad8,&local_120);
          if ((*(long *)(param_3 + 0x40) == 0) ||
             (uVar29 = FUN_036d3824(*(long *)(param_3 + 0x40),0), lVar22 == 0)) goto LAB_03796df0;
          local_c4 = FUN_0377baf0(lVar22,0);
          uVar17 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cc4ad8,&local_c4);
          puVar18 = (undefined8 *)
                    Method_System_Collections_Generic_Dictionary<int,_MB3_MeshCombinerSingle_MeshChannels>__ctor__
          ;
        }
        uVar33 = FUN_025be8b0(*puVar18,uVar33,uVar29,uVar17,0);
        if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_036772fc(uVar33,0);
      }
    }
    lVar16 = *plVar1;
    if (lVar16 == 0) goto LAB_03796df0;
    if (*(uint *)(lVar16 + 0x18) <= *(uint *)(param_1 + 0xe8)) goto LAB_03796df4;
    puVar18 = (undefined8 *)(lVar16 + (long)(int)*(uint *)(param_1 + 0xe8) * 0x188 + 0x38);
    *puVar18 = 0;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar18,0);
    if (lVar22 == 0) goto LAB_03796df0;
    cVar8 = FUN_03787a60(lVar22,0);
    if (cVar8 == '\x01') {
      lVar16 = FUN_03783144(lVar22,0);
      if (lVar16 == 0) goto LAB_03796df0;
      iVar9 = FUN_0377e104(lVar16,0);
      if (*plVar30 == 0) goto LAB_03796df0;
      iVar10 = FUN_0377e104(*plVar30,0);
      if (iVar9 != iVar10) {
        plVar19 = (long *)FUN_03783144(lVar22,0);
        if (plVar19 == (long *)0x0) {
          plVar19 = (long *)0x0;
          *plVar30 = 0;
        }
        else {
          lVar16 = *(long *)Method_System_Collections_Generic_Dictionary<int,_List<int>>__ctor__;
          bVar4 = *(byte *)(lVar16 + 0x130);
          if (*(byte *)(*plVar19 + 0x130) < bVar4) {
            plVar25 = (long *)0x0;
          }
          else {
            plVar25 = plVar19;
            if (*(long *)(*(long *)(*plVar19 + 200) + (ulong)bVar4 * 8 + -8) != lVar16) {
              plVar25 = (long *)0x0;
            }
          }
          *plVar30 = (long)plVar25;
          if (*(byte *)(*plVar19 + 0x130) < bVar4) {
            plVar19 = (long *)0x0;
          }
          else if (*(long *)(*(long *)(*plVar19 + 200) + (ulong)bVar4 * 8 + -8) != lVar16) {
            plVar19 = (long *)0x0;
          }
        }
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar30,plVar19);
      }
      bVar7 = iVar9 != iVar10;
      if ((*plVar30 == 0) || (lVar16 = FUN_03779cb4(*plVar30,0), lVar16 == 0)) goto LAB_03796df0;
      lVar16 = *(long *)(lVar16 + 0x38);
      uVar12 = FUN_0377acf0(lVar22,0);
      if (lVar16 == 0) goto LAB_03796df0;
      local_120 = CONCAT44(local_120._4_4_,uVar12);
      uVar15 = FUN_0219f8b8(lVar16,&local_120,&local_70,
                            *(undefined8 *)
                             Method_System_Collections_Generic_Dictionary<int,_GUILayoutUtility_LayoutCache>_Remove__
                           );
      if ((uVar15 & 1) == 0) goto LAB_0379664c;
      if (local_70 == 0) {
        if (*(char *)(param_1 + 0x19e8) != '\0') goto LAB_03796b0c;
        goto LAB_03796b1c;
      }
      iVar9 = 0;
      while (iVar9 < *(int *)(local_70 + 0x18)) {
        FUN_02215a88(local_70,iVar9,&local_120,
                     *(undefined8 *)
                      Method_System_Collections_Generic_Dictionary<int,_List<Renderer>>_get_Keys__);
        local_80 = local_120;
        local_78 = uStack_118;
        lVar16 = UnityEngine_UIElements_DefaultEventSystem_<>c__<SendInputEvents>b__37_1
                           (&local_80,0);
        if (lVar16 == 0) goto LAB_03796df0;
        uVar15 = *(ulong *)(lVar16 + 0x18);
        iVar10 = FUN_037793f0(&local_80,0);
        uVar11 = (uint)uVar15;
        if (1 < (int)uVar11) {
          uVar28 = 1;
          do {
            if (*(uint *)(param_2 + 0x18) <= uVar27 + uVar28) goto LAB_03796df4;
            if (*plVar30 == 0) goto LAB_03796df0;
            iVar13 = FUN_0377df20(*plVar30,*(undefined4 *)
                                            (param_2 + (long)(int)(uVar27 + uVar28) * 0x10 + 0x24),0
                                 );
            lVar16 = UnityEngine_UIElements_DefaultEventSystem_<>c__<SendInputEvents>b__37_1
                               (&local_80,0);
            if (lVar16 == 0) goto LAB_03796df0;
            if (*(uint *)(lVar16 + 0x18) <= uVar28) goto LAB_03796df4;
            if (iVar13 != *(int *)(lVar16 + (long)(int)uVar28 * 4 + 0x20)) goto LAB_037965a0;
            uVar28 = uVar28 + 1;
          } while (uVar11 != uVar28);
        }
        if (iVar10 != 0) {
          if (*plVar30 == 0) goto LAB_03796df0;
          uVar20 = FUN_0377fff0(*plVar30,iVar10,&local_88,0);
          if ((uVar20 & 1) != 0) {
            lVar16 = *plVar1;
            if (lVar16 == 0) goto LAB_03796df0;
            if (*(uint *)(lVar16 + 0x18) <= *(uint *)(param_1 + 0xe8)) goto LAB_03796df4;
            *(undefined8 *)(lVar16 + (long)(int)*(uint *)(param_1 + 0xe8) * 0x188 + 0x38) = local_88
            ;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
            if ((int)uVar11 < 1) goto LAB_03796644;
            uVar20 = 0;
            uVar28 = 0;
            if (uVar27 <= *(uint *)(param_2 + 0x18)) {
              uVar28 = *(uint *)(param_2 + 0x18) - uVar27;
            }
            goto LAB_03796610;
          }
        }
LAB_037965a0:
        iVar9 = iVar9 + 1;
        if (local_70 == 0) goto LAB_03796df0;
      }
    }
    else {
      bVar7 = false;
    }
LAB_0379664c:
    lVar16 = *plVar1;
    if (lVar16 == 0) goto LAB_03796df0;
    if (*(uint *)(lVar16 + 0x18) <= *(uint *)(param_1 + 0xe8)) goto LAB_03796df4;
    lVar16 = lVar16 + (long)(int)*(uint *)(param_1 + 0xe8) * 0x188;
    plVar19 = (long *)(lVar16 + 0x30);
    *plVar19 = lVar22;
    *(undefined1 *)(lVar16 + 0x28) = 1;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar19,lVar22);
    lVar16 = *plVar1;
    if (lVar16 == 0) goto LAB_03796df0;
    uVar11 = *(uint *)(param_1 + 0xe8);
    if (*(uint *)(lVar16 + 0x18) <= uVar11) goto LAB_03796df4;
    lVar34 = lVar16 + (long)(int)uVar11 * 0x188;
    *(undefined1 *)(lVar34 + 100) = local_64[0];
    *(short *)(lVar34 + 0x20) = (short)local_184;
    if (*(uint *)(param_2 + 0x18) <= uVar27) goto LAB_03796df4;
    lVar34 = param_2 + (long)(int)uVar27 * 0x10;
    lVar16 = lVar16 + (long)(int)uVar11 * 0x188;
    *(undefined4 *)(lVar16 + 0x24) = *(undefined4 *)(lVar34 + 0x28);
    *(undefined4 *)(lVar16 + 0x2c) = *(undefined4 *)(lVar34 + 0x2c);
    *(long *)(lVar16 + 0x40) = *plVar30;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    cVar8 = FUN_03787a60(lVar22,0);
    if (cVar8 == '\x02') {
      plVar19 = (long *)FUN_03783144(lVar22,0);
      if (plVar19 == (long *)0x0) goto LAB_03796df0;
      bVar4 = *(byte *)(*(long *)Method_System_Collections_Generic_Dictionary<int,_Material>_Add__ +
                       0x130);
      if ((*(byte *)(*plVar19 + 0x130) < bVar4) ||
         (*(long *)(*(long *)(*plVar19 + 200) + (ulong)bVar4 * 8 + -8) !=
          *(long *)Method_System_Collections_Generic_Dictionary<int,_Material>_Add__))
      goto LAB_03796df0;
      uVar11 = FUN_03784994(plVar19[5],plVar19,plVar3,*(undefined8 *)(param_1 + 0x19e0),0);
      lVar22 = *(long *)(param_1 + 0x15b8);
      *(uint *)(param_1 + 0x78) = uVar11;
      if (lVar22 == 0) goto LAB_03796df0;
      if (*(uint *)(lVar22 + 0x18) <= uVar11) goto LAB_03796df4;
      lVar22 = lVar22 + (long)(int)uVar11 * 0x38;
      *(int *)(lVar22 + 0x54) = *(int *)(lVar22 + 0x54) + 1;
      lVar22 = *plVar1;
      if (lVar22 == 0) goto LAB_03796df0;
      uVar11 = *(uint *)(param_1 + 0xe8);
      if (*(uint *)(lVar22 + 0x18) <= uVar11) goto LAB_03796df4;
      lVar22 = lVar22 + (long)(int)uVar11 * 0x188;
      *(undefined1 *)(lVar22 + 0x28) = 2;
      *(undefined4 *)(lVar22 + 0x60) = *(undefined4 *)(param_1 + 0x78);
      *pcVar2 = '\x01';
      *(undefined4 *)(param_1 + 0x78) = uVar14;
UnityEngine_UIElements_PointerLeaveEvent___ctor:
      local_1ac = local_1ac + 1;
    }
    else {
      if (bVar7) {
        if (*plVar30 == 0) goto LAB_03796df0;
        iVar9 = FUN_0377e104(*plVar30,0);
        if (*(long *)(param_3 + 0x40) == 0) goto LAB_03796df0;
        iVar10 = FUN_0377e104(*(long *)(param_3 + 0x40),0);
        if (iVar9 != iVar10) {
          if (lVar24 == 0) goto LAB_03796df0;
          if (*(char *)(lVar24 + 0x38) == '\0') {
            if (*plVar30 == 0) goto LAB_03796df0;
            uVar33 = *(undefined8 *)(*plVar30 + 0x28);
          }
          else {
            if (*plVar30 == 0) goto LAB_03796df0;
            uVar33 = *(undefined8 *)(*plVar30 + 0x28);
            lVar16 = *plVar31;
            if (*(int *)(*(long *)
                          Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Count__
                        + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar33 = FUN_03783d84(lVar16,uVar33,0);
          }
          *(undefined8 *)(param_1 + 0x70) = uVar33;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar31);
          uVar12 = FUN_0378475c(*(undefined8 *)(param_1 + 0x70),*(undefined8 *)(param_1 + 0x68),
                                plVar3,*(undefined8 *)(param_1 + 0x19e0),0);
          *(undefined4 *)(param_1 + 0x78) = uVar12;
        }
      }
      lVar16 = FUN_03787a68(lVar22,0);
      if (lVar16 == 0) goto LAB_03796df0;
      iVar9 = FUN_03776eb8(lVar16,0);
      if (0 < iVar9) {
        lVar16 = *plVar30;
        lVar34 = *plVar31;
        lVar22 = FUN_03787a68(lVar22,0);
        if (lVar22 == 0) goto LAB_03796df0;
        uVar12 = FUN_03776eb8(lVar22,0);
        if (*(int *)(*(long *)
                      Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Count__
                    + 0xe0) == 0) {
          thunk_FUN_01a58e78(*(long *)
                              Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Count__
                            );
        }
        uVar33 = UnityEngine_UIElements_EventDispatcher__CreateForRuntime(lVar16,lVar34,uVar12,0);
        *(undefined8 *)(param_1 + 0x70) = uVar33;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar31,uVar33);
        uVar12 = FUN_0378475c(*(undefined8 *)(param_1 + 0x70),*(undefined8 *)(param_1 + 0x68),plVar3
                              ,*(undefined8 *)(param_1 + 0x19e0),0);
        bVar7 = true;
        *(undefined4 *)(param_1 + 0x78) = uVar12;
      }
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar15 = FUN_026b63d8(local_184,0);
      if ((local_184 != 0x200b) && ((uVar15 & 1) == 0)) {
        lVar22 = *(long *)(param_1 + 0x15b8);
        if (lVar22 == 0) goto LAB_03796df0;
        if (*(uint *)(lVar22 + 0x18) <= *(uint *)(param_1 + 0x78)) goto LAB_03796df4;
        piVar23 = (int *)(lVar22 + (long)(int)*(uint *)(param_1 + 0x78) * 0x38 + 0x54);
        iVar9 = *piVar23;
        if (0x3ffe < iVar9) {
          uVar29 = *(undefined8 *)(param_1 + 0x70);
          uVar33 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cbea58);
          FUN_0369922c(uVar33,uVar29,0);
          uVar11 = FUN_0378475c(uVar33,*(undefined8 *)(param_1 + 0x68),plVar3,
                                *(undefined8 *)(param_1 + 0x19e0),0);
          lVar22 = *(long *)(param_1 + 0x15b8);
          *(uint *)(param_1 + 0x78) = uVar11;
          if (lVar22 == 0) goto LAB_03796df0;
          if (*(uint *)(lVar22 + 0x18) <= uVar11) goto LAB_03796df4;
          piVar23 = (int *)(lVar22 + (long)(int)uVar11 * 0x38 + 0x54);
          iVar9 = *piVar23;
        }
        *piVar23 = iVar9 + 1;
      }
      lVar22 = *plVar1;
      if (lVar22 == 0) goto LAB_03796df0;
      if (*(uint *)(lVar22 + 0x18) <= *(uint *)(param_1 + 0xe8)) goto LAB_03796df4;
      *(long *)(lVar22 + (long)(int)*(uint *)(param_1 + 0xe8) * 0x188 + 0x58) = *plVar31;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      lVar22 = *plVar1;
      if (lVar22 == 0) goto LAB_03796df0;
      uVar11 = *(uint *)(param_1 + 0xe8);
      if (*(uint *)(lVar22 + 0x18) <= uVar11) goto LAB_03796df4;
      uVar28 = *(uint *)(param_1 + 0x78);
      *(uint *)(lVar22 + (long)(int)uVar11 * 0x188 + 0x60) = uVar28;
      lVar22 = *plVar3;
      if (lVar22 == 0) goto LAB_03796df0;
      if (*(uint *)(lVar22 + 0x18) <= uVar28) goto LAB_03796df4;
      *(bool *)(lVar22 + (long)(int)uVar28 * 0x38 + 0x41) = bVar7;
      if (bVar7) {
        puVar18 = (undefined8 *)(lVar22 + (long)(int)uVar28 * 0x38 + 0x48);
        *puVar18 = uVar32;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar18,uVar32);
        *(undefined8 *)(param_1 + 0x68) = uVar21;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar30);
        *(undefined8 *)(param_1 + 0x70) = uVar32;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar31,uVar32);
        uVar11 = *(uint *)(param_1 + 0xe8);
        *(undefined4 *)(param_1 + 0x78) = uVar14;
      }
    }
    *(uint *)(param_1 + 0xe8) = uVar11 + 1;
    uVar28 = uVar27;
LAB_03796ae8:
    uVar11 = *(uint *)(param_2 + 0x18);
    uVar27 = uVar28 + 1;
    if ((int)uVar11 <= (int)uVar27) goto LAB_03796b00;
    goto LAB_03795d08;
  }
  local_1ac = 0;
LAB_03796b00:
  if (*(char *)(param_1 + 0x19e8) != '\0') {
LAB_03796b0c:
    *(undefined1 *)(param_1 + 0x19e8) = 0;
LAB_03796db4:
    return *(undefined4 *)(param_1 + 0xe8);
  }
  if (local_180 != 0) {
LAB_03796b1c:
    *(int *)(local_180 + 0x14) = local_1ac;
    if (*(long *)(param_1 + 0x19e0) != 0) {
      uVar11 = FUN_0219b384(*(long *)(param_1 + 0x19e0),*(undefined8 *)PTR_DAT_03ceb270);
      plVar30 = (long *)(local_180 + 0x58);
      *(uint *)(local_180 + 0x2c) = uVar11;
      puVar5 = Method_System_Collections_Generic_Dictionary<int,_TextColorGradient>__ctor__;
      if (*plVar30 != 0) {
        if (*(int *)(*plVar30 + 0x18) < (int)uVar11) {
          if (*(int *)(*(long *)
                        Method_System_Collections_Generic_Dictionary<int,_TextColorGradient>__ctor__
                      + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          FUN_01ff3814(plVar30,uVar11,0,
                       *(undefined8 *)
                        Method_System_Collections_Generic_Dictionary<int,_GUILayoutUtility_LayoutCache>_TryGetValue__
                      );
        }
        if (*(char *)(param_1 + 0x2c) != '\0') {
          if (*plVar1 == 0) goto LAB_03796df0;
          iVar9 = *(int *)(param_1 + 0xe8);
          if (0x100 < *(int *)(*plVar1 + 0x18) - iVar9) {
            iVar10 = 0x100;
            if (0x100 < iVar9 + 1) {
              iVar10 = iVar9 + 1;
            }
            if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            FUN_01ff3814(plVar1,iVar10,1,
                         *(undefined8 *)
                          Method_System_Collections_Generic_Dictionary<int,_GUILayoutUtility_LayoutCache>_set_Item__
                        );
          }
        }
        puVar5 = Method_System_Collections_Generic_Dictionary<int,_int>_Clear__;
        if (0 < (int)uVar11) {
          uVar27 = 0;
          do {
            lVar24 = *plVar3;
            if (lVar24 == 0) goto LAB_03796df0;
            if (*(uint *)(lVar24 + 0x18) <= uVar27) goto LAB_03796df4;
            lVar22 = *plVar30;
            if (lVar22 == 0) goto LAB_03796df0;
            if (*(uint *)(lVar22 + 0x18) <= uVar27) goto LAB_03796df4;
            lVar34 = (long)(int)uVar27;
            lVar16 = lVar22 + lVar34 * 0x50;
            iVar9 = *(int *)(lVar24 + lVar34 * 0x38 + 0x54);
            plVar31 = (long *)(lVar16 + 0x28);
            lVar24 = *plVar31;
            __dest = (void *)(lVar16 + 0x20);
            if (lVar24 == 0) {
              uStack_e8 = 0;
              local_f0 = 0;
              uStack_d8 = 0;
              uStack_e0 = 0;
              uStack_108 = 0;
              local_110 = 0;
              uStack_f8 = 0;
              local_100 = 0;
              uStack_118 = 0;
              local_120 = 0;
              FUN_037854c0(&local_120,iVar9 + 1,0);
              memcpy(auStack_170,&local_120,0x50);
              if (*(uint *)(lVar22 + 0x18) <= uVar27) goto LAB_03796df4;
              memcpy(__dest,auStack_170,0x50);
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar31,0);
            }
            else {
              iVar10 = *(int *)(lVar24 + 0x18);
              if (iVar10 < iVar9 * 4) {
                if (iVar9 < 0x401) {
                  iVar9 = FUN_036c1d60(iVar9,0);
                }
                else {
LAB_03796ce0:
                  iVar9 = iVar9 + 0x100;
                }
              }
              else {
                if (iVar10 + iVar9 * -4 < 0x401) goto LAB_03796d1c;
                if (0x400 < iVar9) goto LAB_03796ce0;
                iVar9 = FUN_036c1d60(iVar9,0);
                if (iVar9 < 0x101) {
                  iVar9 = 0x100;
                }
              }
              if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              FUN_0378597c(__dest,iVar9,0);
            }
LAB_03796d1c:
            lVar24 = *plVar30;
            if ((lVar24 == 0) || (lVar22 = *plVar3, lVar22 == 0)) goto LAB_03796df0;
            if ((*(uint *)(lVar22 + 0x18) <= uVar27) || (*(uint *)(lVar24 + 0x18) <= uVar27))
            goto LAB_03796df4;
            *(undefined8 *)(lVar24 + lVar34 * 0x50 + 0x60) =
                 *(undefined8 *)(lVar22 + lVar34 * 0x38 + 0x38);
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
            lVar24 = *plVar30;
            if ((lVar24 == 0) || (lVar22 = *plVar3, lVar22 == 0)) goto LAB_03796df0;
            if (*(uint *)(lVar22 + 0x18) <= uVar27) goto LAB_03796df4;
            lVar22 = *(long *)(lVar22 + lVar34 * 0x38 + 0x28);
            if (lVar22 == 0) goto LAB_03796df0;
            uVar14 = FUN_03779c74(lVar22,0);
            if (*(uint *)(lVar24 + 0x18) <= uVar27) goto LAB_03796df4;
            uVar27 = uVar27 + 1;
            *(undefined4 *)(lVar24 + lVar34 * 0x50 + 0x68) = uVar14;
          } while (uVar11 != uVar27);
        }
        goto LAB_03796db4;
      }
    }
  }
LAB_03796df0:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
  while( true ) {
    lVar16 = param_2 + (long)(int)(uVar27 + (int)uVar20) * 0x10;
    if (uVar20 == 0) {
      *(uint *)(lVar16 + 0x2c) = uVar11;
    }
    else {
      *(undefined4 *)(lVar16 + 0x24) = 0x1a;
    }
    uVar20 = uVar20 + 1;
    if ((uVar15 & 0xffffffff) == uVar20) break;
LAB_03796610:
    if (uVar28 == uVar20) goto LAB_03796df4;
  }
LAB_03796644:
  uVar27 = (uVar27 + uVar11) - 1;
  goto LAB_0379664c;
}


