/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Telemetry$$IsTypeCustom
ENTRY_POINT: 06d7c09c
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 104
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;paired_field_refs_with_eye_source;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined1  [16]
Meta_XR_ImmersiveDebugger_Telemetry__IsTypeCustom
          (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x19;
  char *unaff_x20;
  long unaff_x22;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  if (unaff_x22 != 0) {
    uVar6 = param_2;
    uVar7 = param_3;
    uVar5 = FUN_085ea65c();
    uVar1 = *(undefined8 *)(unaff_x19 + 0x70);
    uVar2 = *(undefined8 *)(unaff_x19 + 0x78);
    uVar4 = *(undefined8 *)(unaff_x19 + 0x60);
    if (*unaff_x20 == '\0') {
      auVar8 = ZEXT816(0);
    }
    else {
      auVar8 = FUN_056b7644();
    }
    auVar8 = FUN_046b9948(uVar1,uVar2,uVar4,0x20,auVar8._0_8_,auVar8._8_8_,
                          *(undefined8 *)PTR_DAT_08e8ed08);
    in_stack_00000018 = *(undefined8 *)(unaff_x19 + 0x88);
    in_stack_00000010 = *(undefined8 *)(unaff_x19 + 0x80);
    in_stack_00000028 = *(undefined8 *)(unaff_x19 + 0x98);
    in_stack_00000020 = *(undefined8 *)(unaff_x19 + 0x90);
    auVar8 = FUN_046b97ec(&stack0x00000010,*(undefined8 *)(unaff_x19 + 0x68),auVar8._0_8_,
                          auVar8._8_8_,*(undefined8 *)PTR_DAT_08e8f4f8);
    FUN_0859945c();
    if ((*(long *)(unaff_x19 + 0xb8) != 0) &&
       (lVar3 = *(long *)(*(long *)(unaff_x19 + 0xb8) + 0x18), lVar3 != 0)) {
      FUN_085eb388(lVar3,0);
      if (*(long *)(unaff_x19 + 0xb8) != 0) {
        FUN_06d7b75c();
        if ((*(long *)(unaff_x19 + 0xc0) != 0) &&
           (lVar3 = *(long *)(*(long *)(unaff_x19 + 0xc0) + 0x18), lVar3 != 0)) {
          FUN_085eb388(lVar3,0);
          if (*(long *)(unaff_x19 + 0xc0) != 0) {
            FUN_06d7b75c();
            FUN_085ea6e8(param_1,param_2,param_3);
            FUN_085ea6e8(uVar5,uVar6,uVar7);
            return auVar8;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


