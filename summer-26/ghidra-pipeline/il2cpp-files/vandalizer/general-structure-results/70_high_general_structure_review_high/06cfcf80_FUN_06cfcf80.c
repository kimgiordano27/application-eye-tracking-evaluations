/*
FUNCTION_NAME: FUN_06cfcf80
ENTRY_POINT: 06cfcf80
PROGRAM: vandalizer-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_7;telemetry_or_network_hits_14
*/


void FUN_06cfcf80(long param_1)

{
  undefined4 *puVar1;
  int iVar2;
  byte bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined4 uVar9;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined4 local_5c;
  ulong local_58;
  ulong local_48;
  
  if ((DAT_07a50ba7 & 1) == 0) {
    FUN_031f20f4(PTR_DAT_0759b238);
    FUN_031f20f4(System_Collections_Generic_IDictionary<DerObjectIdentifier,_string>_TypeInfo);
    FUN_031f20f4(System_Collections_Generic_IDictionary<DerObjectIdentifier,_X509Extension>_TypeInfo
                );
    FUN_031f20f4(Oculus_Platform_Request<AssetDetailsList>_TypeInfo);
    FUN_031f20f4(Oculus_Platform_Request<AssetFileDeleteResult>_TypeInfo);
    FUN_031f20f4(UnityEngine_Pool_ObjectPool<List<XRLoadAnchorResult>>_TypeInfo);
    FUN_031f20f4(Oculus_Platform_Request<AssetFileDownloadCancelResult>_TypeInfo);
    FUN_031f20f4(Oculus_Platform_Request<AssetFileDownloadResult>_TypeInfo);
    FUN_031f20f4(PTR_DAT_0759b2a8);
    FUN_031f20f4(System_Collections_Generic_HashSet<OVRPermissionsRequester_Permission>_TypeInfo);
    FUN_031f20f4(Oculus_Platform_Request<AvatarEditorResult>_TypeInfo);
    FUN_031f20f4(Oculus_Platform_Request<BlockedUserList>_TypeInfo);
    FUN_031f20f4(Oculus_Platform_Request<bool>_TypeInfo);
    DAT_07a50ba7 = 1;
  }
  local_48 = 0;
  local_58 = 0;
  lVar10 = FUN_06cf9128(param_1);
  puVar8 = Oculus_Platform_Request<AssetFileDownloadResult>_TypeInfo;
  puVar7 = UnityEngine_Pool_ObjectPool<List<XRLoadAnchorResult>>_TypeInfo;
  puVar6 = System_Collections_Generic_IDictionary<DerObjectIdentifier,_X509Extension>_TypeInfo;
  puVar5 = System_Collections_Generic_HashSet<OVRPermissionsRequester_Permission>_TypeInfo;
  puVar4 = PTR_DAT_0759b2a8;
  if (lVar10 != 0) {
    iVar2 = *(int *)(lVar10 + 0x18);
    while (iVar2 = iVar2 + -1, -1 < iVar2) {
      lVar10 = FUN_06cf9128(param_1);
      if (lVar10 == 0) goto LAB_06cfd268;
      plVar11 = (long *)FUN_047af170(lVar10,iVar2,*(undefined8 *)puVar6);
      if (plVar11 == (long *)0x0) {
LAB_06cfd0c8:
        plVar11 = (long *)0x0;
      }
      else {
        bVar3 = *(byte *)(*(long *)puVar5 + 0x130);
        if (*(byte *)(*plVar11 + 0x130) < bVar3) goto LAB_06cfd0c8;
        if (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar3 * 8 + -8) != *(long *)puVar5) {
          plVar11 = (long *)0x0;
        }
      }
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      }
      uVar12 = FUN_06e587d8(plVar11,0,0);
      if ((uVar12 & 1) != 0) {
        if (plVar11 == (long *)0x0) goto LAB_06cfd268;
        local_58 = (**(code **)(*plVar11 + 0x568))(plVar11,*(undefined8 *)(*plVar11 + 0x570));
        if ((local_58 & 0xff) != 0) {
          if ((char)local_48 != '\0') {
            uVar13 = thunk_FUN_06e5f718(param_1,0);
            local_5c = System_Collections_Generic_ArraySortHelper<LoggingContext_LoggingContextField>__InternalBinarySearch
                                 (&local_48,*(undefined8 *)puVar8);
            uVar14 = thunk_FUN_0322ed78(*(undefined8 *)
                                         Oculus_Platform_Request<AssetDetailsList>_TypeInfo,
                                        &local_5c);
            uVar14 = FUN_05c7ecc4(*(undefined8 *)Oculus_Platform_Request<BlockedUserList>_TypeInfo,
                                  uVar14,0);
            uVar13 = FUN_05c8920c(*(undefined8 *)
                                   Oculus_Platform_Request<AvatarEditorResult>_TypeInfo,uVar13,
                                  *(undefined8 *)Oculus_Platform_Request<bool>_TypeInfo,uVar14,0);
            if (*(int *)(*(long *)PTR_DAT_0759b238 + 0xe4) == 0) {
              Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite
                        (*(long *)PTR_DAT_0759b238);
            }
            FUN_06def178(uVar13,param_1,0);
            break;
          }
          local_58 = (**(code **)(*plVar11 + 0x568))(plVar11,*(undefined8 *)(*plVar11 + 0x570));
          uVar9 = System_Collections_Generic_ArraySortHelper<LoggingContext_LoggingContextField>__InternalBinarySearch
                            (&local_58,*(undefined8 *)puVar8);
          FUN_04b9f508(&local_48,uVar9,*(undefined8 *)puVar7);
        }
      }
    }
    local_58 = local_48;
    if (param_1 != 0) {
      puVar1 = (undefined4 *)(param_1 + 0x19c);
      if ((local_48 & 0xff) != 0) {
        puVar1 = (undefined4 *)((ulong)&local_58 | 4);
      }
      *(undefined4 *)(param_1 + 0x26c) = *puVar1;
      return;
    }
  }
LAB_06cfd268:
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


