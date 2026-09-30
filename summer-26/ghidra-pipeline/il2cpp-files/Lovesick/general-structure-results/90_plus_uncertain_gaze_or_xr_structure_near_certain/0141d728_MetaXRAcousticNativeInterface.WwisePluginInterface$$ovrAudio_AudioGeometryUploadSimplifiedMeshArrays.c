/*
FUNCTION_NAME: MetaXRAcousticNativeInterface.WwisePluginInterface$$ovrAudio_AudioGeometryUploadSimplifiedMeshArrays
ENTRY_POINT: 0141d728
PROGRAM: Lovesick-libil2cpp.so
SCORE: 98
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0141d7e4) */

void MetaXRAcousticNativeInterface_WwisePluginInterface__ovrAudio_AudioGeometryUploadSimplifiedMeshArrays
               (long param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *unaff_x19;
  long unaff_x20;
  long lVar5;
  undefined8 uVar6;
  long unaff_x21;
  undefined8 in_stack_00000008;
  
  thunk_FUN_00d48444(*(undefined8 *)(param_1 + 0x200));
  thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_141__);
  *(undefined1 *)(unaff_x21 + 0x985) = 1;
  if (unaff_x19 != (long *)0x0) {
    lVar5 = *(long *)(unaff_x20 + 0x18);
    uVar2 = FUN_02681c0c();
    if ((lVar5 != 0) &&
       (in_stack_00000008._4_4_ = uVar2, uVar3 = FUN_0129eff4(lVar5,(long)&stack0x00000008 + 4),
       puVar1 = StringLiteral_302, (uVar3 & 1) == 0)) {
      uVar6 = *(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__796_141__;
      uVar4 = (**(code **)(*unaff_x19 + 0x168))();
      uVar4 = FUN_015f5b28(uVar6,uVar4,0);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar1);
      }
      FUN_026610e4(uVar4,0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


