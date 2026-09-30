/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.SerializationUtils$$SerializeToString<ColocationSessionEventHandler.SpaceSharingInfo>
ENTRY_POINT: 0344a6a4
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 91
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;telemetry_or_network_hits_4;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MultiplayerBlocks_Shared_SerializationUtils__SerializeToString<ColocationSessionEventHandler_SpaceSharingInfo>
               (undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long *unaff_x20;
  int unaff_w21;
  undefined1 auVar7 [16];
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  long in_stack_00000028;
  
  lVar6 = thunk_FUN_02f6ef30();
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  UnityEngine_TextCore_Text_TextGenerator__get_m_LineOffset(param_1,0);
  FUN_060a2cd4();
  lVar6 = in_stack_00000028;
  puVar3 = PTR_DAT_067ca638;
  puVar2 = PTR_DAT_067ca628;
  puVar1 = PTR_DAT_067ca620;
  auVar7._8_8_ = in_stack_00000018;
  auVar7._0_8_ = in_stack_00000010;
  while( true ) {
    unaff_w21 = unaff_w21 + 1;
    _in_stack_00000010 = auVar7;
    iVar4 = FUN_0441cf88(lVar6 + 0x1e0,*(undefined8 *)puVar2);
    if (iVar4 <= unaff_w21) {
      FUN_0441d35c(lVar6 + 0x1e0,*(undefined8 *)PTR_DAT_067ca618);
      (**(code **)(*unaff_x20 + 0x288))();
      return;
    }
    lVar5 = FUN_0441cf90(lVar6 + 0x1e0,unaff_w21,*(undefined8 *)puVar1);
    if (lVar5 == 0) break;
    auVar7 = (**(code **)(lVar5 + 0x18))(*(undefined8 *)(lVar5 + 0x40));
    if ((auVar7._0_8_ & 0xff) != 0) {
      _in_stack_00000010 = auVar7;
      FUN_03e1c0f0(&stack0x00000010,*(undefined8 *)puVar3);
      return;
    }
  }
  in_stack_00000028 = lVar6;
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


