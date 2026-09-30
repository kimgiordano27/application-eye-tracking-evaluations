/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$add_Error
ENTRY_POINT: 05ac93ac
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerProxy__add_Error(void)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long unaff_x19;
  int unaff_w20;
  undefined8 unaff_x22;
  long unaff_x23;
  ulong unaff_x24;
  float fVar5;
  
  do {
    FUN_05ac9470();
    lVar4 = *(long *)(unaff_x19 + 0x10);
    do {
      unaff_x24 = unaff_x24 + 1;
      unaff_x23 = unaff_x23 + 0x18;
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02fe94e8();
      }
      if ((long)(int)*(uint *)(lVar4 + 0x18) <= (long)unaff_x24) {
        thunk_FUN_02fc2c1c();
        *(undefined1 *)(unaff_x19 + 0x2c) = 1;
        *(undefined8 *)(unaff_x19 + 0x10) = unaff_x22;
        thunk_FUN_03048534();
        iVar2 = *(int *)(unaff_x19 + 0x28);
        fVar5 = *(float *)(unaff_x19 + 0x24) * (float)unaff_w20;
        iVar1 = -0x80000000;
        if (fVar5 != INFINITY) {
          iVar1 = (int)fVar5;
        }
        *(int *)(unaff_x19 + 0x20) = iVar1;
        thunk_FUN_02fc2c1c();
        thunk_FUN_02fc2c1c();
        *(int *)(unaff_x19 + 0x28) = iVar2 + 1;
        thunk_FUN_02fc2c1c();
        *(undefined1 *)(unaff_x19 + 0x2c) = 0;
        return;
      }
      if (*(uint *)(lVar4 + 0x18) <= unaff_x24) {
                    /* WARNING: Subroutine does not return */
        FUN_02fe94f0();
      }
      lVar3 = *(long *)(lVar4 + unaff_x23 + 0x20);
    } while ((lVar3 == 0) || (lVar3 == lVar4));
  } while( true );
}


