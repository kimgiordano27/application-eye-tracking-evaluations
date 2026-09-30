/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$GetContractSafe
ENTRY_POINT: 05ac2f7c
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


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__GetContractSafe(void)

{
  bool in_ZR;
  undefined8 uVar1;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  long unaff_x22;
  uint unaff_w23;
  
  if (in_ZR) {
    uVar1 = FUN_02fe9340(*(undefined8 *)PTR_DAT_06f6df38,unaff_w23 << 1);
    NodeCanvas_Tasks_Actions_FadeOut___ctor
              (*(undefined8 *)(unaff_x19 + 0x10),0,uVar1,0,*(undefined4 *)(unaff_x19 + 0x18),0);
    *(undefined8 *)(unaff_x19 + 0x10) = uVar1;
    thunk_FUN_03048534();
    unaff_w23 = *(uint *)(unaff_x19 + 0x18);
    unaff_x22 = *(long *)(unaff_x19 + 0x10);
    *(uint *)(unaff_x19 + 0x18) = unaff_w23 + 1;
    if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
  }
  else {
    *(uint *)(unaff_x19 + 0x18) = unaff_w23 + 1;
  }
  if ((unaff_x20 != 0) && (lVar2 = thunk_FUN_03010710(), lVar2 == 0)) {
    uVar1 = RootMotion_Dynamics_PuppetMasterLite_<Deactivation>d__23__System_Collections_Generic_IEnumerator<System_Object>_get_Current
                      ();
                    /* WARNING: Subroutine does not return */
    FUN_02fe93c0(uVar1,0);
  }
  if (*(uint *)(unaff_x22 + 0x18) <= unaff_w23) {
                    /* WARNING: Subroutine does not return */
    FUN_02fe94f0();
  }
  *(long *)(unaff_x22 + (long)(int)unaff_w23 * 8 + 0x20) = unaff_x20;
  thunk_FUN_03048534();
  *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
  return;
}


