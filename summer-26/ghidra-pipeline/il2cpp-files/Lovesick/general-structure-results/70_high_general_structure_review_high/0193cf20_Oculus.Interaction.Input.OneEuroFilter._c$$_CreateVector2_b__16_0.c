/*
FUNCTION_NAME: Oculus.Interaction.Input.OneEuroFilter.<>c$$<CreateVector2>b__16_0
ENTRY_POINT: 0193cf20
PROGRAM: Lovesick-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_1
*/


void Oculus_Interaction_Input_OneEuroFilter_<>c__<CreateVector2>b__16_0(void)

{
  undefined *puVar1;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  
  thunk_FUN_00d48444();
  thunk_FUN_00d48444(UnityEngine_InputSystem_UI_MultiplayerEventSystem_TypeInfo);
  thunk_FUN_00d48444(StringLiteral_5473);
  thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vqaddq_s32__);
  *(undefined1 *)(unaff_x20 + 0x155) = 1;
  lVar2 = thunk_FUN_00d62348(*unaff_x21);
  puVar1 = StringLiteral_12714;
  if (lVar2 != 0) {
    FUN_01320e50(lVar2,*(undefined8 *)StringLiteral_11285);
    *(long *)(unaff_x19 + 0x118) = lVar2;
    lVar2 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    puVar1 = UnityEngine_InputSystem_UI_MultiplayerEventSystem_TypeInfo;
    if (lVar2 != 0) {
      FUN_01320e50(lVar2,*(undefined8 *)Polenter_Serialization_Core_DeserializingException_TypeInfo)
      ;
      *(long *)(unaff_x19 + 0x120) = lVar2;
      lVar2 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
      puVar1 = StringLiteral_5473;
      if (lVar2 != 0) {
        FUN_01320e50(lVar2,*(undefined8 *)PTR_DAT_033f6e48);
        *(long *)(unaff_x19 + 0x128) = lVar2;
        lVar2 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
        if (lVar2 != 0) {
          FUN_01320e50(lVar2,*(undefined8 *)Method_Sirenix_Serialization_Serializer<bool>__ctor__);
          *(long *)(unaff_x19 + 0x130) = lVar2;
          FUN_0190578c();
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


