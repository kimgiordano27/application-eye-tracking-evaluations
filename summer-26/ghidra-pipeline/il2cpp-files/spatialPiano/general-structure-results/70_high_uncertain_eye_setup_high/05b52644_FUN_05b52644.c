/*
FUNCTION_NAME: FUN_05b52644
ENTRY_POINT: 05b52644
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_05b52644(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  puVar2 = Method_System_Array_Resize<OVRPlugin_SpaceComponentType>__;
  if ((DAT_06bc2afa & 1) == 0) {
    FUN_02f08768(Method_UnityEngine_ComputeBuffer_SetData<SphericalHarmonicsL2>__);
    FUN_02f08768(Method_UnityEngine_ComputeBuffer_SetData<TransformUpdatePacket>__);
    FUN_02f08768(Method_System_Array_Resize<OVRPlugin_SpaceComponentType>__);
    FUN_02f08768(PTR_DAT_067ca4e8);
    DAT_06bc2afa = 1;
  }
  lVar5 = **(long **)(*(long *)puVar2 + 0xb8);
  if (lVar5 != 0) {
    uStack_38 = *(undefined8 *)(lVar5 + 0x18);
    local_40 = *(undefined8 *)(lVar5 + 0x10);
    local_30 = *(undefined8 *)(lVar5 + 0x20);
    iVar3 = FUN_0343f580(&local_40,*(undefined8 *)(param_1 + 0x10),
                         *(undefined8 *)
                          Method_UnityEngine_ComputeBuffer_SetData<TransformUpdatePacket>__);
    if (-1 < iVar3) {
      if (**(long **)(*(long *)puVar2 + 0xb8) == 0) goto LAB_05b52778;
      FUN_037a7f9c(**(long **)(*(long *)puVar2 + 0xb8) + 0x10,iVar3,
                   *(undefined8 *)Method_UnityEngine_ComputeBuffer_SetData<SphericalHarmonicsL2>__);
    }
    puVar1 = PTR_DAT_067ca4e8;
    lVar5 = **(long **)(*(long *)puVar2 + 0xb8);
    if (lVar5 != 0) {
      if (*(int *)(lVar5 + 0x10) == 0) {
        lVar4 = *(long *)PTR_DAT_067ca4e8;
        if (*(int *)(lVar4 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
          lVar5 = **(long **)(*(long *)puVar2 + 0xb8);
          if (lVar5 == 0) goto LAB_05b52778;
          lVar4 = *(long *)puVar1;
        }
        lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 8);
        if (lVar4 == 0) goto LAB_05b52778;
        FUN_05b05588(lVar4,*(undefined8 *)(lVar5 + 0x28),0);
      }
      return;
    }
  }
LAB_05b52778:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


