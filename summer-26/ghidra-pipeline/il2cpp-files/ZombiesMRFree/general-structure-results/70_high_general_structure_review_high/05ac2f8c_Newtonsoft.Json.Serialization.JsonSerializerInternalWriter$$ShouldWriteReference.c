/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$ShouldWriteReference
ENTRY_POINT: 05ac2f8c
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


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__ShouldWriteReference
               (undefined8 *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  long lVar4;
  
  uVar2 = FUN_02fe9340(*param_1);
  NodeCanvas_Tasks_Actions_FadeOut___ctor
            (*(undefined8 *)(unaff_x19 + 0x10),0,uVar2,0,*(undefined4 *)(unaff_x19 + 0x18),0);
  *(undefined8 *)(unaff_x19 + 0x10) = uVar2;
  thunk_FUN_03048534();
  uVar1 = *(uint *)(unaff_x19 + 0x18);
  lVar4 = *(long *)(unaff_x19 + 0x10);
  *(uint *)(unaff_x19 + 0x18) = uVar1 + 1;
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02fe94e8();
  }
  if ((unaff_x20 != 0) && (lVar3 = thunk_FUN_03010710(), lVar3 == 0)) {
    uVar2 = RootMotion_Dynamics_PuppetMasterLite_<Deactivation>d__23__System_Collections_Generic_IEnumerator<System_Object>_get_Current
                      ();
                    /* WARNING: Subroutine does not return */
    FUN_02fe93c0(uVar2,0);
  }
  if (*(uint *)(lVar4 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_02fe94f0();
  }
  *(long *)(lVar4 + (long)(int)uVar1 * 8 + 0x20) = unaff_x20;
  thunk_FUN_03048534();
  *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
  return;
}


