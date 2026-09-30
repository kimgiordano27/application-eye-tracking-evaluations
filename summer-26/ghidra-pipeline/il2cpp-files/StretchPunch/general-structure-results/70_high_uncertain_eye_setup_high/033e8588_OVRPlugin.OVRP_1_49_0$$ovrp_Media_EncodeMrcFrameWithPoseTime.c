/*
FUNCTION_NAME: OVRPlugin.OVRP_1_49_0$$ovrp_Media_EncodeMrcFrameWithPoseTime
ENTRY_POINT: 033e8588
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_5;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
OVRPlugin_OVRP_1_49_0__ovrp_Media_EncodeMrcFrameWithPoseTime(undefined8 param_1,long *param_2)

{
  long lVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x21;
  long *plVar10;
  long lVar11;
  long lVar12;
  undefined *puVar9;
  
  if ((*(byte *)(unaff_x21 + 0xaf0) & 1) == 0) {
    FUN_01d7d918(StringLiteral_554);
    FUN_01d7d918(Field_UnityEngine_InputSystem_InputActionSetupExtensions_BindingSyntax_m_ActionMap)
    ;
    FUN_01d7d918(StringLiteral_1184);
    *(undefined1 *)(unaff_x21 + 0xaf0) = 1;
  }
  puVar2 = StringLiteral_1184;
  puVar9 = Field_UnityEngine_InputSystem_InputActionSetupExtensions_BindingSyntax_m_ActionMap;
  if (param_2 == (long *)0x0) {
LAB_033e871c:
                    /* WARNING: Subroutine does not return */
    FUN_01d7db70();
  }
  lVar12 = *param_2;
  lVar11 = *(long *)StringLiteral_1184;
  if (lVar12 == lVar11) {
    iVar3 = FUN_033e8ab8(0,0,param_1,param_2);
    plVar10 = param_2;
  }
  else {
    if (*(long *)(lVar12 + 0x40) !=
        *(long *)(*(long *)
                   Field_UnityEngine_InputSystem_InputActionSetupExtensions_BindingSyntax_m_ActionMap
                 + 0x40)) goto LAB_033e8720;
    puVar5 = (undefined4 *)thunk_FUN_01de290c(param_2);
    iVar3 = FUN_033e8b84(0,0,param_1,*puVar5);
    plVar10 = (long *)0x0;
  }
  if (iVar3 == 0) {
    return **(undefined8 **)(*(long *)puVar2 + 0xb8);
  }
  if (iVar3 < 0) {
    thunk_FUN_01dd295c(StringLiteral_1244);
    uVar7 = thunk_FUN_01de27b8();
    puVar9 = StringLiteral_9272;
  }
  else {
    lVar6 = FUN_01d7d9bc(*(undefined8 *)StringLiteral_554,iVar3 + 1);
    if (lVar6 == 0) goto LAB_033e871c;
    iVar4 = (int)*(undefined8 *)(lVar6 + 0x18);
    lVar1 = 0;
    if (iVar4 != 0) {
      lVar1 = lVar6 + 0x20;
    }
    if (lVar12 == lVar11) {
      iVar4 = FUN_033e8ab8(lVar1,(long)iVar4,param_1,plVar10);
    }
    else {
      if (*(long *)(*param_2 + 0x40) != *(long *)(*(long *)puVar9 + 0x40)) {
LAB_033e8720:
                    /* WARNING: Subroutine does not return */
        FUN_01d7df0c(param_2);
      }
      puVar5 = (undefined4 *)thunk_FUN_01de290c(param_2);
      iVar4 = FUN_033e8b84(lVar1,(long)iVar4,param_1,*puVar5);
    }
    if (iVar4 == iVar3) {
      uVar7 = FUN_033e89c0(lVar6,0,iVar3);
      return uVar7;
    }
    thunk_FUN_01dd295c(StringLiteral_1244);
    uVar7 = thunk_FUN_01de27b8();
    puVar9 = StringLiteral_9273;
  }
  uVar8 = thunk_FUN_01dd295c(puVar9);
  FUN_03393770(uVar7,uVar8,0);
  uVar8 = thunk_FUN_01dd295c(StringLiteral_9274);
                    /* WARNING: Subroutine does not return */
  FUN_01d7da3c(uVar7,uVar8);
}


