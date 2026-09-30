/*
FUNCTION_NAME: FUN_070d4840
ENTRY_POINT: 070d4840
PROGRAM: vandalizer-libil2cpp.so
SCORE: 133
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_10;validity_or_gating_hits_21;paired_field_refs_with_eye_source;telemetry_or_network_hits_2;functionality_eye_api_context_without_clear_sink_hits_6
*/


/* WARNING: Removing unreachable block (ram,0x070d49b0) */

void FUN_070d4840(undefined1 param_1 [16],undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  undefined8 *puVar13;
  long *plVar14;
  undefined4 *puVar15;
  int *piVar16;
  long lVar17;
  long lVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  float fVar26;
  float fVar27;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  
  if ((DAT_07a5a9d2 & 1) == 0) {
    FUN_031f20f4(OVRVirtualKeyboard_KeyboardPosition_TypeInfo);
    FUN_031f20f4(OVRVirtualKeyboard_TextHandlerScope_TypeInfo);
    FUN_031f20f4(OVRPlugin_Size3f_TypeInfo);
    FUN_031f20f4(OVRVirtualKeyboard_WaitUntilKeyboardVisible_TypeInfo);
    FUN_031f20f4(OVRVirtualKeyboardSampleControls_<CreateKeyboard>d__19_TypeInfo);
    FUN_031f20f4(OVRPlugin_SkeletonType_TypeInfo);
    FUN_031f20f4(OVRTrackedKeyboard_<InitializeHandPresenceData>d__86_TypeInfo);
    FUN_031f20f4(PTR_DAT_075d88c8);
    FUN_031f20f4(UnityEngine_ObjectDispatcher_<>c_TypeInfo);
    FUN_031f20f4(UnityEngine_ResourceManagement_Util_ObjectInitializationData_Serializer_TypeInfo);
    FUN_031f20f4(
                System_Runtime_Serialization_Formatters_Binary_ObjectReader_TopLevelAssemblyTypeResolver_TypeInfo
                );
    FUN_031f20f4(OVRTrackedKeyboardSampleControls_<SetShaderCoroutine>d__19_TypeInfo);
    FUN_031f20f4(PTR_DAT_075d6d18);
    FUN_031f20f4(OVRPlugin_UnityOpenXR_TypeInfo);
    DAT_07a5a9d2 = 1;
  }
  puVar6 = OVRVirtualKeyboard_WaitUntilKeyboardVisible_TypeInfo;
  puVar5 = OVRTrackedKeyboardSampleControls_<SetShaderCoroutine>d__19_TypeInfo;
  puVar4 = OVRTrackedKeyboard_<InitializeHandPresenceData>d__86_TypeInfo;
  puVar3 = PTR_DAT_075d6d18;
  local_a0 = 0;
  local_98 = 0;
  bVar7 = true;
  plVar14 = (long *)PTR_DAT_075d88c8;
  puVar21 = (undefined8 *)UnityEngine_ObjectDispatcher_<>c_TypeInfo;
  puVar22 = (undefined8 *)OVRVirtualKeyboard_KeyboardPosition_TypeInfo;
LAB_070d4968:
  do {
    do {
      do {
        uVar10 = FUN_06eb0180(*(undefined8 *)(param_3 + 0x38),0);
        if ((uVar10 & 1) == 0) {
          return;
        }
        if (*(long *)(param_3 + 0x38) == 0) goto LAB_070d4f88;
        iVar8 = FUN_06eafb28(*(long *)(param_3 + 0x38),0);
      } while (iVar8 == 0xb);
      if (*(long *)(param_3 + 0x38) == 0) goto LAB_070d4f88;
      iVar8 = FUN_06eafb28(*(long *)(param_3 + 0x38),0);
    } while (iVar8 == 7);
    if (*(long *)(param_3 + 0x38) == 0) goto LAB_070d4f88;
    iVar8 = FUN_06eafb28(*(long *)(param_3 + 0x38),0);
  } while (iVar8 == 8);
  lVar11 = *(long *)(param_3 + 0x38);
  if (bVar7) {
    if (lVar11 == 0) goto LAB_070d4f88;
    uVar9 = FUN_06eaf2e0(lVar11,0);
  }
  else {
    if (lVar11 == 0) goto LAB_070d4f88;
    uVar1 = *(uint *)(param_3 + 0x14);
    uVar9 = FUN_06eaf2e0(lVar11,0);
    uVar9 = uVar9 | uVar1;
  }
  *(uint *)(param_3 + 0x14) = uVar9;
  if (*(long *)(param_3 + 0x38) == 0) goto LAB_070d4f88;
  iVar8 = FUN_06eafb28(*(long *)(param_3 + 0x38),0);
  if (iVar8 != 5) {
    if (*(long *)(param_3 + 0x38) == 0) goto LAB_070d4f88;
    iVar8 = FUN_06eafb28(*(long *)(param_3 + 0x38),0);
    if (iVar8 != 4) {
      if (*(long *)(param_3 + 0x38) == 0) goto LAB_070d4f88;
      iVar8 = FUN_06eafb28(*(long *)(param_3 + 0x38),0);
      if (iVar8 == 6) {
        plVar12 = (long *)FUN_070d3550(param_3);
        if (plVar12 == (long *)0x0) goto LAB_070d4f88;
        lVar11 = *plVar12;
        uVar10 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar10 != 0) {
          piVar16 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == *(long *)puVar4) {
              puVar13 = (undefined8 *)(lVar11 + (long)(*piVar16 + 9) * 0x10 + 0x138);
              goto LAB_070d4b90;
            }
            uVar10 = uVar10 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar10 != 0);
        }
        puVar13 = (undefined8 *)FUN_0322c1e8(plVar12,*(long *)puVar4,9);
LAB_070d4b90:
        uVar19 = (*(code *)*puVar13)(plVar12,puVar13[1]);
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
        }
        uVar19 = FUN_07005d10(uVar19,&local_98,0);
        if (*(long *)(param_3 + 0x38) != 0) {
          fVar26 = *(float *)(param_3 + 0x24);
          fVar27 = *(float *)(param_3 + 0x28);
          uVar25 = param_2;
          uVar23 = FUN_06eaf084(*(long *)(param_3 + 0x38),0);
          lVar11 = *plVar14;
          lVar17 = *(long *)(param_3 + 0x40);
          if (*(int *)(lVar11 + 0xe4) == 0) {
            Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
            lVar11 = *plVar14;
          }
          uVar24 = local_98;
          lVar18 = *(long *)puVar5;
          uVar2 = *(undefined4 *)(*(long *)(lVar11 + 0xb8) + 8);
          if (*(int *)(lVar18 + 0xe4) == 0) {
            Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
            lVar18 = *(long *)puVar5;
          }
          lVar11 = *(long *)(*(long *)(lVar18 + 0xb8) + 0x10);
          if (lVar11 == 0) {
            if (*(int *)(lVar18 + 0xe4) == 0) {
              Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
              lVar18 = *(long *)puVar5;
            }
            uVar20 = **(undefined8 **)(lVar18 + 0xb8);
            lVar11 = thunk_FUN_0322f148(*(undefined8 *)OVRPlugin_SkeletonType_TypeInfo);
            FUN_042e2fe0(lVar11,uVar20,
                         *(undefined8 *)
                          UnityEngine_ResourceManagement_Util_ObjectInitializationData_Serializer_TypeInfo
                         ,0);
            plVar14 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x10);
            *plVar14 = lVar11;
            thunk_FUN_0329bf60(plVar14,lVar11);
            puVar22 = (undefined8 *)OVRVirtualKeyboard_KeyboardPosition_TypeInfo;
          }
          local_a8 = 0;
          local_b0 = 0;
          FUN_052e9cd0(uVar23,uVar25,&local_b0,*(uint *)(param_3 + 0x14) & 0xf,
                       *(undefined8 *)OVRPlugin_UnityOpenXR_TypeInfo);
          if (lVar17 != 0) {
            FUN_03da0438(uVar19,param_2,0,(float)uVar19 - fVar26,(float)param_2 - fVar27,0,lVar17,
                         uVar2,uVar24,lVar11,local_b0,local_a8,0,
                         *(undefined8 *)OVRPlugin_Size3f_TypeInfo);
            bVar7 = false;
            plVar14 = (long *)PTR_DAT_075d88c8;
            goto LAB_070d4968;
          }
        }
      }
      else {
        if ((*(char *)(param_3 + 0x10) == '\0') && (*(char *)(param_3 + 0x11) == '\0')) {
          if (*(long *)(param_3 + 0x38) == 0) goto LAB_070d4f88;
          iVar8 = FUN_06eaf1c8(*(long *)(param_3 + 0x38),0);
          if (iVar8 == 0) goto LAB_070d4b48;
        }
        else {
LAB_070d4b48:
          if (*(long *)(param_3 + 0x38) == 0) goto LAB_070d4f88;
          iVar8 = FUN_06eafb28(*(long *)(param_3 + 0x38),0);
          if (iVar8 != 0x14) {
            if (*(long *)(param_3 + 0x38) == 0) goto LAB_070d4f88;
            iVar8 = FUN_06eafb28(*(long *)(param_3 + 0x38),0);
            bVar7 = false;
            if (iVar8 != 0x15) goto LAB_070d4968;
          }
        }
        if (*(long *)(param_3 + 0x38) == 0) goto LAB_070d4f88;
        iVar8 = FUN_06eaf1c8(*(long *)(param_3 + 0x38),0);
        if (iVar8 == 0) {
          lVar11 = *plVar14;
          if (*(int *)(lVar11 + 0xe4) == 0) {
            Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
            lVar11 = *plVar14;
          }
          puVar15 = (undefined4 *)(*(long *)(lVar11 + 0xb8) + 8);
        }
        else {
          if (*(long *)(param_3 + 0x38) == 0) goto LAB_070d4f88;
          iVar8 = FUN_06eaf1c8(*(long *)(param_3 + 0x38),0);
          lVar11 = *plVar14;
          if (*(int *)(lVar11 + 0xe4) == 0) {
            Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar11);
            lVar11 = *plVar14;
          }
          if (iVar8 == 1) {
            puVar15 = (undefined4 *)(*(long *)(lVar11 + 0xb8) + 0xc);
          }
          else {
            puVar15 = (undefined4 *)(*(long *)(lVar11 + 0xb8) + 0x14);
          }
        }
        if (*(long *)(param_3 + 0x38) != 0) {
          uVar2 = *puVar15;
          uVar19 = FUN_06eaef40(*(long *)(param_3 + 0x38),0);
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
          }
          uVar19 = FUN_07005d90(uVar19,param_2,&local_a0,0);
          if (*(long *)(param_3 + 0x38) != 0) {
            uVar23 = param_2;
            uVar24 = FUN_06eaf084(*(long *)(param_3 + 0x38),0);
            uVar25 = local_a0;
            lVar11 = *(long *)puVar5;
            lVar17 = *(long *)(param_3 + 0x40);
            if (*(int *)(lVar11 + 0xe4) == 0) {
              Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
              lVar11 = *(long *)puVar5;
            }
            lVar18 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x18);
            if (lVar18 == 0) {
              if (*(int *)(lVar11 + 0xe4) == 0) {
                Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
                lVar11 = *(long *)puVar5;
              }
              uVar20 = **(undefined8 **)(lVar11 + 0xb8);
              lVar18 = thunk_FUN_0322f148(*(undefined8 *)
                                           OVRVirtualKeyboardSampleControls_<CreateKeyboard>d__19_TypeInfo
                                         );
              FUN_042e33cc(lVar18,uVar20,
                           *(undefined8 *)
                            System_Runtime_Serialization_Formatters_Binary_ObjectReader_TopLevelAssemblyTypeResolver_TypeInfo
                           ,0);
              plVar14 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x18);
              *plVar14 = lVar18;
              thunk_FUN_0329bf60(plVar14,lVar18);
            }
            lVar11 = *(long *)(param_3 + 0x38);
            if (lVar11 != 0) {
              iVar8 = FUN_06eafb28(lVar11,0);
              if (iVar8 == 0) {
                bVar7 = true;
              }
              else {
                if (*(long *)(param_3 + 0x38) == 0) goto LAB_070d4f88;
                iVar8 = FUN_06eafb28(*(long *)(param_3 + 0x38),0);
                bVar7 = iVar8 == 0x1e;
              }
              if (lVar17 != 0) {
                FUN_03da2224(uVar19,param_2,0,uVar24,uVar23,0,lVar17,uVar2,uVar25,lVar18,lVar11,
                             bVar7,*(undefined8 *)OVRVirtualKeyboard_TextHandlerScope_TypeInfo);
                bVar7 = false;
                plVar14 = (long *)PTR_DAT_075d88c8;
                puVar21 = (undefined8 *)UnityEngine_ObjectDispatcher_<>c_TypeInfo;
                goto LAB_070d4968;
              }
            }
          }
        }
      }
      goto LAB_070d4f88;
    }
  }
  lVar11 = *(long *)puVar5;
  lVar17 = *(long *)(param_3 + 0x40);
  if (*(int *)(lVar11 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    lVar11 = *(long *)puVar5;
  }
  lVar18 = *(long *)(*(long *)(lVar11 + 0xb8) + 8);
  if (lVar18 == 0) {
    if (*(int *)(lVar11 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      lVar11 = *(long *)puVar5;
    }
    uVar19 = **(undefined8 **)(lVar11 + 0xb8);
    lVar18 = thunk_FUN_0322f148(*(undefined8 *)puVar6);
    FUN_042d6b48(lVar18,uVar19,*puVar21,0);
    plVar12 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 8);
    *plVar12 = lVar18;
    thunk_FUN_0329bf60(plVar12,lVar18);
  }
  if (lVar17 != 0) {
    UnityEngine_XR_OpenXR_OpenXRLoaderBase__StopSubsystem<object>
              (lVar17,lVar18,*(undefined8 *)(param_3 + 0x38),*puVar22);
    FUN_070d5330(param_3,*(undefined8 *)(param_3 + 0x38),*(undefined4 *)(param_3 + 0x14));
    bVar7 = false;
    goto LAB_070d4968;
  }
LAB_070d4f88:
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


