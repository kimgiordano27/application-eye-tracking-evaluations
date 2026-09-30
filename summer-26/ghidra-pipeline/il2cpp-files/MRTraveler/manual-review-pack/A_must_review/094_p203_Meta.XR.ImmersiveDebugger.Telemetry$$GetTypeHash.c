/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Telemetry$$GetTypeHash
ENTRY_POINT: 06d7c034
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 104
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;paired_field_refs_with_eye_source;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined1  [16]
Meta_XR_ImmersiveDebugger_Telemetry__GetTypeHash
          (undefined1 param_1 [16],undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long unaff_x19;
  char *unaff_x20;
  long unaff_x21;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  FUN_06d7a2f8();
  *(undefined1 *)(unaff_x19 + 0x30) = 0;
  *(undefined1 *)(unaff_x19 + 0xa0) = 1;
  *(undefined8 *)(unaff_x19 + 0xd0) = *(undefined8 *)(unaff_x21 + 0x140);
  thunk_FUN_03d233cc();
  lVar5 = *(long *)(unaff_x21 + 0xd8);
  if (lVar5 != 0) {
    lVar3 = FUN_085875ac(lVar5,0x11,0);
    lVar5 = FUN_085875ac(lVar5,0x12,0);
    if ((lVar3 != 0) && (uVar7 = FUN_085ea65c(lVar3,0), lVar5 != 0)) {
      uVar9 = param_2;
      uVar10 = param_3;
      uVar8 = FUN_085ea65c(lVar5,0);
      uVar1 = *(undefined8 *)(unaff_x19 + 0x70);
      uVar2 = *(undefined8 *)(unaff_x19 + 0x78);
      uVar6 = *(undefined8 *)(unaff_x19 + 0x60);
      if (*unaff_x20 == '\0') {
        auVar11 = ZEXT816(0);
      }
      else {
        auVar11 = FUN_056b7644();
      }
      auVar11 = FUN_046b9948(uVar1,uVar2,uVar6,0x20,auVar11._0_8_,auVar11._8_8_,
                             *(undefined8 *)PTR_DAT_08e8ed08);
      in_stack_00000018 = *(undefined8 *)(unaff_x19 + 0x88);
      in_stack_00000010 = *(undefined8 *)(unaff_x19 + 0x80);
      in_stack_00000028 = *(undefined8 *)(unaff_x19 + 0x98);
      in_stack_00000020 = *(undefined8 *)(unaff_x19 + 0x90);
      auVar11 = FUN_046b97ec(&stack0x00000010,*(undefined8 *)(unaff_x19 + 0x68),auVar11._0_8_,
                             auVar11._8_8_,*(undefined8 *)PTR_DAT_08e8f4f8);
      FUN_0859945c();
      if ((*(long *)(unaff_x19 + 0xb8) != 0) &&
         (lVar4 = *(long *)(*(long *)(unaff_x19 + 0xb8) + 0x18), lVar4 != 0)) {
        FUN_085eb388(lVar4,0);
        if (*(long *)(unaff_x19 + 0xb8) != 0) {
          FUN_06d7b75c();
          if ((*(long *)(unaff_x19 + 0xc0) != 0) &&
             (lVar4 = *(long *)(*(long *)(unaff_x19 + 0xc0) + 0x18), lVar4 != 0)) {
            FUN_085eb388(lVar4,0);
            if (*(long *)(unaff_x19 + 0xc0) != 0) {
              FUN_06d7b75c();
              FUN_085ea6e8(uVar7,param_2,param_3,lVar3,0);
              FUN_085ea6e8(uVar8,uVar9,uVar10,lVar5,0);
              return auVar11;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


