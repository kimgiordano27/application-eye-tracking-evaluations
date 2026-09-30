/*
FUNCTION_NAME: FUN_019e75d0
ENTRY_POINT: 019e75d0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void FUN_019e75d0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  puVar1 = Method_System_Linq_Enumerable_FirstOrDefault<VoiceServiceRequest>__;
  if ((DAT_0377a7f5 & 1) == 0) {
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vqrshrn_n_s32__);
    thunk_FUN_00d48444(StringLiteral_6891);
    thunk_FUN_00d48444(UnityEngine_UIElements_PanelEventHandler_PointerEvent_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_9775);
    thunk_FUN_00d48444(OVR_OpenVR_IVRIOBuffer__Close_TypeInfo);
    thunk_FUN_00d48444(
                      Method_UnityEngine_Timeline_AudioTrack_<get_outputs>d__4_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_00d48444(Method_System_Linq_Enumerable_FirstOrDefault<VoiceServiceRequest>__);
    DAT_0377a7f5 = 1;
  }
  lVar3 = *(long *)puVar1;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar3 = *(long *)puVar1;
  }
  puVar2 = UnityEngine_UIElements_PanelEventHandler_PointerEvent_TypeInfo;
  lVar4 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x18);
  if (lVar4 == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar3 = *(long *)puVar1;
    }
    uVar5 = **(undefined8 **)(lVar3 + 0xb8);
    lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
    if (lVar4 == 0) goto LAB_019e7744;
    FUN_012d239c(lVar4,uVar5,
                 *(undefined8 *)
                  Method_UnityEngine_Timeline_AudioTrack_<get_outputs>d__4_System_Collections_IEnumerator_Reset__
                 ,0);
    *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x18) = lVar4;
  }
  puVar1 = OVR_OpenVR_IVRIOBuffer__Close_TypeInfo;
  uVar5 = FUN_010dcdb8(param_2,lVar4,
                       *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vqrshrn_n_s32__);
  lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
  if ((lVar3 != 0) &&
     (FUN_01320f6c(lVar3,uVar5,*(undefined8 *)StringLiteral_9775), puVar1 = StringLiteral_6891,
     param_1 != 0)) {
    *(long *)(param_1 + 0x20) = lVar3;
    uVar5 = FUN_010dfe04(param_2,*(undefined8 *)puVar1);
    *(undefined8 *)(param_1 + 0x28) = uVar5;
    return;
  }
LAB_019e7744:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


