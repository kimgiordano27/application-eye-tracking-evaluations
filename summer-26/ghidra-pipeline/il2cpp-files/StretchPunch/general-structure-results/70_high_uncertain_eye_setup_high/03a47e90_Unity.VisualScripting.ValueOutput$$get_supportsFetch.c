/*
FUNCTION_NAME: Unity.VisualScripting.ValueOutput$$get_supportsFetch
ENTRY_POINT: 03a47e90
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_VisualScripting_ValueOutput__get_supportsFetch(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 unaff_x19;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  
  FUN_033a87c8(**(undefined8 **)(param_1 + 0x9f8),0);
  lVar4 = thunk_FUN_01de27b8(*unaff_x27);
  System_Array_InternalEnumerator<OVRPlugin_Vector4f>__System_Collections_IEnumerator_get_Current
            (lVar4,*unaff_x28);
  uVar5 = FUN_033a87c8(*(undefined8 *)StringLiteral_1172,0);
  if (lVar4 != 0) {
    FUN_02f17d24(lVar4,uVar5,*unaff_x24);
    uVar5 = FUN_033a87c8(*(undefined8 *)StringLiteral_1165,0);
    FUN_02f17d24(lVar4,uVar5,*unaff_x24);
    puVar2 = StringLiteral_1168;
    uVar5 = FUN_033a87c8(*(undefined8 *)StringLiteral_1168,0);
    FUN_02f17d24(lVar4,uVar5,*unaff_x24);
    uVar5 = FUN_033a87c8(*(undefined8 *)StringLiteral_1555,0);
    FUN_02f17d24(lVar4,uVar5,*unaff_x24);
    uVar5 = FUN_033a87c8(*unaff_x23,0);
    FUN_02f17d24(lVar4,uVar5,*unaff_x24);
    uVar5 = FUN_033a87c8(*unaff_x25,0);
    FUN_02f17d24(lVar4,uVar5,*unaff_x24);
    uVar5 = FUN_033a87c8(*unaff_x26,0);
    FUN_02f17d24(lVar4,uVar5,*unaff_x24);
    puVar3 = StringLiteral_1367;
    uVar5 = FUN_033a87c8(*(undefined8 *)StringLiteral_1367,0);
    FUN_02f17d24(lVar4,uVar5,*unaff_x24);
    uVar5 = FUN_033a87c8(*(undefined8 *)StringLiteral_1166,0);
    FUN_02f17d24(lVar4,uVar5,*unaff_x24);
    puVar1 = Field_UnityEngine_InputSystem_InputActionSetupExtensions_CompositeSyntax_m_Action;
    uVar5 = FUN_033a87c8(*(undefined8 *)
                          Field_UnityEngine_InputSystem_InputActionSetupExtensions_CompositeSyntax_m_Action
                         ,0);
    FUN_02f17d24(lVar4,uVar5,*unaff_x24);
    uVar5 = FUN_033a87c8(*unaff_x22,0);
    FUN_02f17d24(lVar4,uVar5,*unaff_x24);
    FUN_02b23db4();
    FUN_033a87c8(*unaff_x22,0);
    lVar4 = thunk_FUN_01de27b8(*(undefined8 *)StringLiteral_3532);
    System_Array_InternalEnumerator<OVRPlugin_Vector4f>__System_Collections_IEnumerator_get_Current
              (lVar4,*(undefined8 *)StringLiteral_3533);
    uVar5 = FUN_033a87c8(*(undefined8 *)StringLiteral_1172,0);
    if (lVar4 != 0) {
      FUN_02f17d24(lVar4,uVar5,*unaff_x24);
      uVar5 = FUN_033a87c8(*(undefined8 *)StringLiteral_1165,0);
      FUN_02f17d24(lVar4,uVar5,*unaff_x24);
      uVar5 = FUN_033a87c8(*(undefined8 *)puVar2,0);
      FUN_02f17d24(lVar4,uVar5,*unaff_x24);
      uVar5 = FUN_033a87c8(*(undefined8 *)StringLiteral_1555,0);
      FUN_02f17d24(lVar4,uVar5,*unaff_x24);
      uVar5 = FUN_033a87c8(*unaff_x23,0);
      FUN_02f17d24(lVar4,uVar5,*unaff_x24);
      uVar5 = FUN_033a87c8(*unaff_x25,0);
      FUN_02f17d24(lVar4,uVar5,*unaff_x24);
      uVar5 = FUN_033a87c8(*unaff_x26,0);
      FUN_02f17d24(lVar4,uVar5,*unaff_x24);
      uVar5 = FUN_033a87c8(*(undefined8 *)puVar3,0);
      FUN_02f17d24(lVar4,uVar5,*unaff_x24);
      uVar5 = FUN_033a87c8(*(undefined8 *)StringLiteral_1166,0);
      FUN_02f17d24(lVar4,uVar5,*unaff_x24);
      uVar5 = FUN_033a87c8(*(undefined8 *)puVar1,0);
      FUN_02f17d24(lVar4,uVar5,*unaff_x24);
      uVar5 = FUN_033a87c8(*(undefined8 *)
                            Field_UnityEngine_InputSystem_InputActionRebindingExtensions_Parameter_field
                           ,0);
      FUN_02f17d24(lVar4,uVar5,*unaff_x24);
      FUN_02b23db4();
      *(undefined8 *)(*(long *)(*(long *)StringLiteral_1279 + 0xb8) + 0x18) = unaff_x19;
      thunk_FUN_01e10808();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01d7db70();
}


