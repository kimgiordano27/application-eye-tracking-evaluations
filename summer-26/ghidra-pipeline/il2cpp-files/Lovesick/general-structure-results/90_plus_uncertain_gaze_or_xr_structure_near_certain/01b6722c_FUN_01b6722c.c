/*
FUNCTION_NAME: FUN_01b6722c
ENTRY_POINT: 01b6722c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 144
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;data_collection;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_9;ui_or_gameplay_sink_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2;functionality_gaze_retrieval_or_extraction;functionality_data_collection_or_telemetry_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x01b677b8) */

void FUN_01b6722c(long param_1)

{
  long *plVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  char *pcVar10;
  ulong uVar11;
  int *piVar12;
  long lVar13;
  long *plVar14;
  float fVar15;
  long local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  long local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  long local_a0;
  undefined8 uStack_98;
  long local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long local_70;
  undefined1 local_68 [8];
  undefined1 local_60 [16];
  undefined1 local_50 [16];
  
  puVar4 = StringLiteral_13123;
  if ((DAT_0377e474 & 1) == 0) {
    thunk_FUN_00d48444(Method_Unity_Jobs_IJobForExtensions_ScheduleParallel<LightExtractionJob>__);
    thunk_FUN_00d48444(StringLiteral_5628);
    thunk_FUN_00d48444(UnityEngine_UIElements_StyleCursor_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033f5410);
    thunk_FUN_00d48444(StringLiteral_9166);
    thunk_FUN_00d48444(Oculus_Platform_Request<AssetFileDownloadCancelResult>_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033ece78);
    thunk_FUN_00d48444(StringLiteral_4668);
    thunk_FUN_00d48444(StringLiteral_4340);
    thunk_FUN_00d48444(StringLiteral_13233);
    thunk_FUN_00d48444(Mono_Security_Cryptography_RSAManaged_TypeInfo);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List<ValueTuple<MethodInfo,_DebugMember>>_Add__
                      );
    thunk_FUN_00d48444(UnityEngine_XR_Management_XRManagerSettings_<InitializeLoader>d__24_TypeInfo)
    ;
    thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_90__);
    thunk_FUN_00d48444(Method_System_Security_Cryptography_RijndaelManagedTransform_EncryptData__);
    thunk_FUN_00d48444(System_Tuple<TextWriter,_char[],_int,_int>_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_13123);
    thunk_FUN_00d48444(Method_UnityEngine_Rendering_Universal_ForwardRenderer_SwapColorBuffer__);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List_Enumerator<AudioPlaybackZone_PlaybackZoneData>_get_Current__
                      );
    thunk_FUN_00d48444(OVR_OpenVR_IVRSystem__GetPropErrorNameFromEnum_TypeInfo);
    DAT_0377e474 = 1;
  }
  local_60._0_8_ = 0;
  local_60._8_8_ = 0;
  local_68[0] = 0;
  local_70 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  lVar9 = *(long *)(*(long *)puVar4 + 0x20);
  if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
    lVar9 = FUN_00d5941c();
  }
  plVar1 = (long *)(param_1 + 0x30);
  lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
  if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
    lVar9 = FUN_00d5941c();
  }
  pcVar10 = (char *)thunk_FUN_00d32ed4(plVar1,*(undefined8 *)(lVar9 + 0x80));
  if (*pcVar10 == '\0') {
    return;
  }
  local_60 = FUN_00c34db4(plVar1,*(undefined8 *)
                                  Method_System_Security_Cryptography_RijndaelManagedTransform_EncryptData__
                         );
  uVar11 = FUN_0265e1cc(local_60,0);
  puVar4 = Method_System_Collections_Generic_List<ValueTuple<MethodInfo,_DebugMember>>_Add__;
  if ((uVar11 & 1) == 0) {
    return;
  }
  FUN_01347408(plVar1,&local_e8,
               *(undefined8 *)
                Method_UnityEngine_Rendering_Universal_ForwardRenderer_SwapColorBuffer__);
  local_60._0_8_ = local_e8;
  local_60._8_8_ = uStack_e0;
  FUN_0265e038(local_60,0);
  *plVar1 = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  puVar8 = StringLiteral_13233;
  piVar12 = *(int **)(param_1 + 0x58);
  if (piVar12 != (int *)0x0) {
    iVar2 = *piVar12;
    FUN_01342a94((undefined8 *)(param_1 + 0x58),*(undefined8 *)StringLiteral_4340);
    if (2 < iVar2) {
      FUN_01ba4900(local_68,*(undefined8 *)OVR_OpenVR_IVRSystem__GetPropErrorNameFromEnum_TypeInfo,0
                  );
      local_e8 = 0;
      uStack_e0 = 0;
      FUN_013421d4(&local_e8,iVar2,3,1,*(undefined8 *)puVar4);
      plVar14 = (long *)(param_1 + 0x48);
      *(undefined8 *)(param_1 + 0x70) = uStack_e0;
      *(long *)(param_1 + 0x68) = local_e8;
      if (*plVar14 == 0) {
        local_e8 = 0;
        uStack_e0 = 0;
        FUN_013421d4(&local_e8,iVar2,4,1,*(undefined8 *)puVar4);
        *(undefined8 *)(param_1 + 0x50) = uStack_e0;
        *plVar14 = local_e8;
      }
      if (*(long *)(param_1 + 0x80) != 0) {
        local_b8 = *(undefined8 *)(*(long *)(param_1 + 0x80) + 0x18);
        local_60._0_8_ = 0;
        local_60._8_8_ = 0;
        uStack_a8 = *(undefined8 *)(param_1 + 0x70);
        local_b0 = *(undefined8 *)(param_1 + 0x68);
        uStack_98 = *(undefined8 *)(param_1 + 0x50);
        local_a0 = *plVar14;
        local_50 = FUN_010ec2cc(&local_b8,0,0,*(undefined8 *)StringLiteral_9166);
        uStack_e0 = 0;
        local_d8 = 0;
        local_e8 = 0;
        FUN_01347274(&local_e8,local_50,
                     *(undefined8 *)System_Tuple<TextWriter,_char[],_int,_int>_TypeInfo);
        *(undefined8 *)(param_1 + 0x40) = local_d8;
        *(undefined8 *)(param_1 + 0x38) = uStack_e0;
        *plVar1 = local_e8;
        FUN_01ba4904(local_68,0);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
LAB_01b6769c:
    FUN_01b67070(param_1);
    return;
  }
  if (*(long *)(param_1 + 0x68) == 0) {
    if (*(char *)(param_1 + 0x78) == '\0') {
      return;
    }
    goto LAB_01b6769c;
  }
  FUN_01ba4900(local_68,*(undefined8 *)
                         Method_System_Collections_Generic_List_Enumerator<AudioPlaybackZone_PlaybackZoneData>_get_Current__
               ,0);
  plVar1 = (long *)(param_1 + 0x48);
  if (*(int *)(param_1 + 0x50) != 0) {
    uVar3 = *(uint *)*plVar1;
    if (DAT_03774d75 == '\0') {
      thunk_FUN_00d48444(
                        Method_System_Collections_Generic_List_Enumerator<DecalCachedChunk>_MoveNext__
                        );
      DAT_03774d75 = '\x01';
    }
    if (*(int *)(*(long *)
                  Method_System_Collections_Generic_List_Enumerator<DecalCachedChunk>_MoveNext__ +
                0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    if ((uVar3 & 0x7fffffff) < 0x7f800001) {
      FUN_01ba4904(local_68,0);
      goto LAB_01b67778;
    }
  }
  if (*plVar1 != 0) {
    FUN_01342a94(plVar1,*(undefined8 *)puVar8);
  }
  local_c8 = 0;
  uStack_c0 = 0;
  FUN_013421d4(&local_c8,*(undefined4 *)(param_1 + 0x70),4,0,*(undefined8 *)puVar4);
  puVar4 = StringLiteral_4668;
  *(undefined8 *)(param_1 + 0x50) = uStack_c0;
  *plVar1 = local_c8;
  FUN_01342d04(plVar1,*(undefined8 *)(param_1 + 0x68),*(undefined8 *)(param_1 + 0x70),
               *(undefined8 *)puVar4);
  lVar9 = *(long *)(param_1 + 0x88);
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  lVar13 = *(long *)PTR_DAT_033ece78;
  *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
  uVar11 = FUN_00da5b18(*(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 200));
  if ((uVar11 & 1) == 0) {
    *(undefined4 *)(lVar9 + 0x18) = 0;
  }
  else {
    iVar2 = *(int *)(lVar9 + 0x18);
    *(undefined4 *)(lVar9 + 0x18) = 0;
    if (0 < iVar2) {
      FUN_0179519c(*(undefined8 *)(lVar9 + 0x10),0,iVar2,0);
    }
  }
  FUN_01342ff4(plVar1,&local_e8,*(undefined8 *)Mono_Security_Cryptography_RSAManaged_TypeInfo);
  puVar7 = StringLiteral_5628;
  puVar6 = UnityEngine_UIElements_StyleCursor_TypeInfo;
  puVar5 = Oculus_Platform_Request<AssetFileDownloadCancelResult>_TypeInfo;
  puVar4 = PTR_DAT_033f5410;
  uStack_88 = uStack_e0;
  local_90 = local_e8;
  uStack_78 = uStack_d0;
  uStack_80 = local_d8;
  while (uVar11 = FUN_00bd306c(&local_90,*(undefined8 *)puVar6), (uVar11 & 1) != 0) {
    fVar15 = (float)FUN_00bd2f28(&local_90,*(undefined8 *)puVar4);
    if (*(long *)(param_1 + 0x88) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_00bbed00(-fVar15,*(long *)(param_1 + 0x88),*(undefined8 *)puVar5);
  }
  FUN_012b4c54(&local_90,*(undefined8 *)puVar7);
  FUN_01ba4904(local_68,0);
LAB_01b67778:
  puVar4 = Method_Unity_Jobs_IJobForExtensions_ScheduleParallel<LightExtractionJob>__;
  FUN_01342a94((long *)(param_1 + 0x68),*(undefined8 *)puVar8);
  uVar11 = FUN_010c3738(param_1,&local_70,*(undefined8 *)puVar4);
  if ((uVar11 & 1) == 0) {
    return;
  }
  if (local_70 != 0) {
    FUN_01b678d0();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


