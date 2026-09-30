/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$remove_Error
ENTRY_POINT: 05ac93cc
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerProxy__remove_Error(long param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long unaff_x19;
  int unaff_w20;
  undefined8 unaff_x22;
  long unaff_x23;
  ulong unaff_x24;
  float fVar4;
  
  while( true ) {
    unaff_x24 = unaff_x24 + 1;
    unaff_x23 = unaff_x23 + 0x18;
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    if ((long)(int)*(uint *)(param_1 + 0x18) <= (long)unaff_x24) break;
    if (*(uint *)(param_1 + 0x18) <= unaff_x24) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94f0();
    }
    lVar3 = *(long *)(param_1 + unaff_x23 + 0x20);
    if ((lVar3 != 0) && (lVar3 != param_1)) {
      FUN_05ac9470();
      param_1 = *(long *)(unaff_x19 + 0x10);
    }
  }
  thunk_FUN_02fc2c1c();
  *(undefined1 *)(unaff_x19 + 0x2c) = 1;
  *(undefined8 *)(unaff_x19 + 0x10) = unaff_x22;
  thunk_FUN_03048534();
  iVar2 = *(int *)(unaff_x19 + 0x28);
  fVar4 = *(float *)(unaff_x19 + 0x24) * (float)unaff_w20;
  iVar1 = -0x80000000;
  if (fVar4 != INFINITY) {
    iVar1 = (int)fVar4;
  }
  *(int *)(unaff_x19 + 0x20) = iVar1;
  thunk_FUN_02fc2c1c();
  thunk_FUN_02fc2c1c();
  *(int *)(unaff_x19 + 0x28) = iVar2 + 1;
  thunk_FUN_02fc2c1c();
  *(undefined1 *)(unaff_x19 + 0x2c) = 0;
  return;
}


