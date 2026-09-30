/*
FUNCTION_NAME: Meta.WitAi.Requests.VRequest.<PerformUpdate>d__38$$System.IDisposable.Dispose
ENTRY_POINT: 055c9e90
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_4;frame_or_lifecycle_behavior
*/


void Meta_WitAi_Requests_VRequest_<PerformUpdate>d__38__System_IDisposable_Dispose
               (long param_1,long param_2,long param_3)

{
  char cVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_3 + 8);
  *(long *)(param_1 + 0x28) = param_3;
  *(undefined8 *)(param_1 + 0x10) = uVar3;
  *(long *)(param_1 + 0x20) = param_2;
  thunk_FUN_0333a630();
  cVar1 = *(char *)(param_3 + 0x52);
  *(long *)(param_1 + 0x40) = param_1;
  uVar2 = FUN_032d5d54(param_3);
  if ((uVar2 & 1) == 0) {
    if (param_2 == 0) {
      uVar3 = thunk_FUN_032f9fe8(0,"Delegate to an instance method cannot have null \'this\'.");
                    /* WARNING: Subroutine does not return */
      FUN_032d5dbc(uVar3,0);
    }
  }
  else if (cVar1 == '\x01') {
    *(code **)(param_1 + 0x18) = FUN_02ef8b1c;
    goto LAB_055c9ef0;
  }
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_1 + 0x20);
LAB_055c9ef0:
  *(code **)(param_1 + 0x38) = FUN_02ef8ab4;
  return;
}


