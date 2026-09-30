/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$EndProcessProperty
ENTRY_POINT: 05901370
PROGRAM: waitwhat-libil2cpp.so
SCORE: 88
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


/* WARNING: Removing unreachable block (ram,0x05901468) */
/* WARNING: Removing unreachable block (ram,0x0590150c) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__EndProcessProperty
               (undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  long unaff_x19;
  undefined8 *unaff_x22;
  undefined8 in_stack_00000020;
  long in_stack_00000028;
  
  iVar2 = FUN_059306e4(param_1,param_2,0);
  puVar1 = PTR_DAT_070cb6c8;
  if (iVar2 < 0x1001) {
    lVar3 = *(long *)PTR_DAT_070cb6c8;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_031e5338();
      lVar3 = *(long *)puVar1;
    }
    plVar5 = *(long **)(lVar3 + 0xb8);
    if (*plVar5 != 0) {
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_031e5338();
        plVar5 = *(long **)(*(long *)puVar1 + 0xb8);
      }
      in_stack_00000028 = plVar5[1];
      in_stack_00000020._4_1_ = '\0';
      FUN_05991f08(in_stack_00000028,(long)&stack0x00000020 + 4,0);
      lVar3 = *(long *)puVar1;
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_031e5338();
        lVar3 = *(long *)puVar1;
      }
      plVar5 = *(long **)(lVar3 + 0xb8);
      lVar6 = *plVar5;
      if (lVar6 != 0) {
        if (*(int *)(lVar3 + 0xe4) == 0) {
          thunk_FUN_031e5338();
          plVar5 = *(long **)(*(long *)puVar1 + 0xb8);
          lVar6 = *plVar5;
        }
        *(long *)(unaff_x19 + 0x28) = lVar6;
        *plVar5 = 0;
      }
      if (in_stack_00000020._4_1_ != '\0') {
        thunk_FUN_03194b00(in_stack_00000028,0);
      }
    }
  }
  if (*(long *)(unaff_x19 + 0x28) == 0) {
    uVar4 = FUN_03188b1c(*unaff_x22,iVar2);
    *(undefined8 *)(unaff_x19 + 0x28) = uVar4;
  }
  else {
    FUN_0595236c(*(long *)(unaff_x19 + 0x28),0,iVar2,0);
  }
  *(int *)(unaff_x19 + 0x5c) = iVar2;
  return;
}


