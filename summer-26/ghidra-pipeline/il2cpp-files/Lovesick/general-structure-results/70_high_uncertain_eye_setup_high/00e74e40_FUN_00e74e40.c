/*
FUNCTION_NAME: FUN_00e74e40
ENTRY_POINT: 00e74e40
PROGRAM: Lovesick-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_00e74e40(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if ((DAT_03774efd & 1) == 0) {
    thunk_FUN_00d48444(Method_UnityEngine_Mesh_SetIndices<__Il2CppFullySharedGenericStructType>__);
    thunk_FUN_00d48444(OVRPlugin_OVRP_1_104_0_TypeInfo);
    thunk_FUN_00d48444(Method_System_ByReference<__Il2CppFullySharedGenericType>_get_Value__);
    DAT_03774efd = 1;
  }
  lVar2 = FUN_00ed56f0(0);
  if (lVar2 != 0) {
    lVar2 = *(long *)(lVar2 + 0x40);
    uVar3 = FUN_015f5b28(*(undefined8 *)(param_1 + 0x18),
                         *(undefined8 *)
                          Method_System_ByReference<__Il2CppFullySharedGenericType>_get_Value__,0);
    puVar1 = Method_UnityEngine_Mesh_SetIndices<__Il2CppFullySharedGenericStructType>__;
    if (lVar2 != 0) {
      uVar4 = FUN_00fcb580(lVar2,uVar3,0);
      if ((uVar4 & 1) != 0) {
        *(undefined1 *)(param_1 + 0x20) = 1;
        FUN_00e74f9c(param_1,1);
        if (*(char *)(param_1 + 0x90) == '\0') {
          return;
        }
        if (*(long *)(param_1 + 0xa8) != 0) {
          FUN_026c868c(*(long *)(param_1 + 0xa8),0);
        }
        lVar2 = *(long *)(param_1 + 0xb0);
joined_r0x00e74efc:
        if (lVar2 == 0) {
          return;
        }
        FUN_013dfa68(lVar2,param_1,*(undefined8 *)puVar1);
        return;
      }
      lVar2 = FUN_00ed56f0(0);
      if (lVar2 != 0) {
        lVar2 = *(long *)(lVar2 + 0x40);
        uVar3 = FUN_015f5b28(*(undefined8 *)(param_1 + 0x18),
                             *(undefined8 *)OVRPlugin_OVRP_1_104_0_TypeInfo,0);
        if (lVar2 != 0) {
          uVar4 = FUN_00fcb580(lVar2,uVar3,0);
          if ((uVar4 & 1) == 0) {
            return;
          }
          *(undefined1 *)(param_1 + 0x20) = 1;
          FUN_00e74f9c(param_1,0);
          if (*(char *)(param_1 + 0x90) == '\0') {
            return;
          }
          if (*(long *)(param_1 + 0x98) != 0) {
            FUN_026c868c(*(long *)(param_1 + 0x98),0);
          }
          lVar2 = *(long *)(param_1 + 0xa0);
          goto joined_r0x00e74efc;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


