/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.SerializationUtils$$DeserializeFromString<__Il2CppFullySharedGenericType>
ENTRY_POINT: 03449a90
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;telemetry_or_network_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MultiplayerBlocks_Shared_SerializationUtils__DeserializeFromString<__Il2CppFullySharedGenericType>
               (long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long *unaff_x20;
  int unaff_w21;
  undefined1 auVar9 [16];
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  long in_stack_00000028;
  
  uVar6 = (**(code **)(param_1 + 0x1b8))(param_2,*(undefined8 *)(param_1 + 0x1c0));
  uVar7 = thunk_FUN_02f6ef30();
  uVar6 = FUN_04f65260(uVar6,uVar7,0);
  lVar8 = thunk_FUN_02f6ef30();
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  UnityEngine_TextCore_Text_TextGenerator__get_m_LineOffset(uVar6,0);
  FUN_060a2cd4();
  lVar8 = in_stack_00000028;
  puVar3 = PTR_DAT_067ca638;
  puVar2 = PTR_DAT_067ca628;
  puVar1 = PTR_DAT_067ca620;
  auVar9._8_8_ = in_stack_00000018;
  auVar9._0_8_ = in_stack_00000010;
  while( true ) {
    unaff_w21 = unaff_w21 + 1;
    _in_stack_00000010 = auVar9;
    iVar4 = FUN_0441cf88(lVar8 + 0x1e0,*(undefined8 *)puVar2);
    if (iVar4 <= unaff_w21) {
      FUN_0441d35c(lVar8 + 0x1e0,*(undefined8 *)PTR_DAT_067ca618);
      (**(code **)(*unaff_x20 + 0x288))();
      return;
    }
    lVar5 = FUN_0441cf90(lVar8 + 0x1e0,unaff_w21,*(undefined8 *)puVar1);
    if (lVar5 == 0) break;
    auVar9 = (**(code **)(lVar5 + 0x18))(*(undefined8 *)(lVar5 + 0x40));
    if ((auVar9._0_8_ & 0xff) != 0) {
      _in_stack_00000010 = auVar9;
      FUN_03e1c0f0(&stack0x00000010,*(undefined8 *)puVar3);
      return;
    }
  }
  in_stack_00000028 = lVar8;
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


