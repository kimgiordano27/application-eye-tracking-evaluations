/*
FUNCTION_NAME: Meta.WitAi.Json.JsonConvert$$SerializeObject<object>
ENTRY_POINT: 045c3b2c
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Meta_WitAi_Json_JsonConvert__SerializeObject<object>(void)

{
  undefined8 uVar1;
  ulong uVar2;
  long unaff_x19;
  long unaff_x20;
  long lVar3;
  ulong unaff_x22;
  undefined8 uVar4;
  long *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  
  FUN_06b293e8();
  if ((unaff_x22 & 1) != 0) {
    uVar4 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x18);
    if (*(int *)(*unaff_x27 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    uVar4 = FUN_0710fcf0(uVar4,0);
    uVar1 = FUN_0710fcf0(*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x20),0);
    uVar2 = FUN_0711a11c(uVar4,uVar1,0);
    if ((uVar2 & 1) != 0) {
      uVar4 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x20);
      if (*(int *)(*unaff_x27 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      FUN_0710fcf0(uVar4,0);
      FUN_0710fcf0(*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x18),0);
      FUN_084bae28();
      if (*(long *)(unaff_x20 + 0x30) == 0) {
LAB_045c3c58:
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      uVar2 = FUN_06b295f4(*(long *)(unaff_x20 + 0x30),in_stack_00000000,in_stack_00000008,
                           *unaff_x28);
      if ((uVar2 & 1) == 0) {
        lVar3 = *(long *)(unaff_x20 + 0x30);
        uVar4 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e80810);
        FUN_04d6ed0c();
        if (lVar3 == 0) goto LAB_045c3c58;
        FUN_06b293e8(lVar3,in_stack_00000000,in_stack_00000008,uVar4,*unaff_x29);
      }
    }
  }
  return;
}


