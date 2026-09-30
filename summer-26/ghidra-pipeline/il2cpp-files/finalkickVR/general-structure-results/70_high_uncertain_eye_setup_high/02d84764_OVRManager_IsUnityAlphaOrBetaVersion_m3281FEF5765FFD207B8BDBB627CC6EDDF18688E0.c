/*
FUNCTION_NAME: OVRManager_IsUnityAlphaOrBetaVersion_m3281FEF5765FFD207B8BDBB627CC6EDDF18688E0
ENTRY_POINT: 02d84764
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_4
*/


undefined1 OVRManager_IsUnityAlphaOrBetaVersion_m3281FEF5765FFD207B8BDBB627CC6EDDF18688E0(void)

{
  ushort uVar1;
  short sVar2;
  int iVar3;
  String_t *pSVar4;
  int local_2c;
  undefined1 local_11;
  
  if ((OVRManager_IsUnityAlphaOrBetaVersion_m3281FEF5765FFD207B8BDBB627CC6EDDF18688E0::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_Dictionary<string,_ProbeReferenceVolumeProfile>__ctor__
              );
    OVRManager_IsUnityAlphaOrBetaVersion_m3281FEF5765FFD207B8BDBB627CC6EDDF18688E0::
    s_Il2CppMethodInitialized = 1;
  }
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)
              Method_System_Collections_Generic_Dictionary<string,_ProbeReferenceVolumeProfile>__ctor__
            );
  pSVar4 = (String_t *)Application_get_unityVersion_m27BB3207901305BD239E1C3A74035E15CF3E5D21(0);
  NullCheck(pSVar4);
  iVar3 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline
                    (pSVar4,(MethodInfo *)0x0);
  for (local_2c = il2cpp_codegen_subtract<int,int>(iVar3,1); -1 < local_2c;
      local_2c = il2cpp_codegen_subtract<int,int>(local_2c,1)) {
    NullCheck(pSVar4);
    uVar1 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(pSVar4,local_2c,0);
    if (uVar1 < 0x30) break;
    NullCheck(pSVar4);
    uVar1 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(pSVar4,local_2c,0);
    if (0x39 < uVar1) break;
  }
  if (local_2c < 0) {
LAB_02d84948:
    local_11 = 0;
  }
  else {
    NullCheck(pSVar4);
    sVar2 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(pSVar4,local_2c,0);
    if (sVar2 != 0x61) {
      NullCheck(pSVar4);
      sVar2 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(pSVar4,local_2c,0);
      if (sVar2 != 0x62) goto LAB_02d84948;
    }
    local_11 = 1;
  }
  return local_11;
}


