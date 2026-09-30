/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$DeserializeObject<LocalFileContainer.PostmanEnvironment>
ENTRY_POINT: 045c5208
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 81
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


void Newtonsoft_Json_JsonConvert__DeserializeObject<LocalFileContainer_PostmanEnvironment>(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  long unaff_x19;
  long unaff_x20;
  long lVar4;
  ulong unaff_x22;
  undefined8 uVar5;
  long *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  
  puVar1 = PTR_DAT_08e80800;
  FUN_06b293e8();
  if ((unaff_x22 & 1) != 0) {
    uVar5 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x18);
    if (*(int *)(*unaff_x27 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    uVar5 = FUN_0710fcf0(uVar5,0);
    uVar2 = FUN_0710fcf0(*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x20),0);
    uVar3 = FUN_0711a11c(uVar5,uVar2,0);
    if ((uVar3 & 1) != 0) {
      uVar5 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x20);
      if (*(int *)(*unaff_x27 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      FUN_0710fcf0(uVar5,0);
      FUN_0710fcf0(*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x18),0);
      FUN_084bae28();
      if (*(long *)(unaff_x20 + 0x30) == 0) {
LAB_045c5350:
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      uVar3 = FUN_06b295f4(*(long *)(unaff_x20 + 0x30),in_stack_00000000,in_stack_00000008,
                           *unaff_x28);
      if ((uVar3 & 1) == 0) {
        lVar4 = *(long *)(unaff_x20 + 0x30);
        uVar5 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e80810);
        FUN_04d6ed0c();
        if (lVar4 == 0) goto LAB_045c5350;
        FUN_06b293e8(lVar4,in_stack_00000000,in_stack_00000008,uVar5,*(undefined8 *)puVar1);
      }
    }
  }
  return;
}


