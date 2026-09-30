/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.SerializationUtils$$SerializeToString<__Il2CppFullySharedGenericType>
ENTRY_POINT: 0344a370
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


void Meta_XR_MultiplayerBlocks_Shared_SerializationUtils__SerializeToString<__Il2CppFullySharedGenericType>
               (void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long *unaff_x20;
  int unaff_w21;
  undefined1 auVar10 [16];
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  long in_stack_00000028;
  
  plVar6 = (long *)FUN_0510c51c();
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  uVar7 = (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
  uVar8 = thunk_FUN_02f6ef30();
  uVar7 = FUN_04f65260(uVar7,uVar8,0);
  lVar9 = thunk_FUN_02f6ef30();
  if (*(int *)(lVar9 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  UnityEngine_TextCore_Text_TextGenerator__get_m_LineOffset(uVar7,0);
  FUN_060a2cd4();
  lVar9 = in_stack_00000028;
  puVar3 = PTR_DAT_067ca638;
  puVar2 = PTR_DAT_067ca628;
  puVar1 = PTR_DAT_067ca620;
  auVar10._8_8_ = in_stack_00000018;
  auVar10._0_8_ = in_stack_00000010;
  while( true ) {
    unaff_w21 = unaff_w21 + 1;
    _in_stack_00000010 = auVar10;
    iVar4 = FUN_0441cf88(lVar9 + 0x1e0,*(undefined8 *)puVar2);
    if (iVar4 <= unaff_w21) {
      FUN_0441d35c(lVar9 + 0x1e0,*(undefined8 *)PTR_DAT_067ca618);
      (**(code **)(*unaff_x20 + 0x288))();
      return;
    }
    lVar5 = FUN_0441cf90(lVar9 + 0x1e0,unaff_w21,*(undefined8 *)puVar1);
    if (lVar5 == 0) break;
    auVar10 = (**(code **)(lVar5 + 0x18))(*(undefined8 *)(lVar5 + 0x40));
    if ((auVar10._0_8_ & 0xff) != 0) {
      _in_stack_00000010 = auVar10;
      FUN_03e1c0f0(&stack0x00000010,*(undefined8 *)puVar3);
      return;
    }
  }
  in_stack_00000028 = lVar9;
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


