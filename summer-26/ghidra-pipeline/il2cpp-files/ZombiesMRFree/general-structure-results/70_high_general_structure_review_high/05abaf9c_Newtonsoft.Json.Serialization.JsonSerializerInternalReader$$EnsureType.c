/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$EnsureType
ENTRY_POINT: 05abaf9c
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__EnsureType(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *unaff_x19;
  undefined4 unaff_w21;
  undefined8 *unaff_x23;
  undefined4 in_stack_00000018;
  
  if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02fe94e8();
  }
  if ((param_1 != 0) &&
     (lVar1 = thunk_FUN_03010710(param_1,*(undefined8 *)(*unaff_x19 + 0x40)), lVar1 == 0)) {
LAB_05abb080:
    uVar3 = RootMotion_Dynamics_PuppetMasterLite_<Deactivation>d__23__System_Collections_Generic_IEnumerator<System_Object>_get_Current
                      ();
                    /* WARNING: Subroutine does not return */
    FUN_02fe93c0(uVar3,0);
  }
  if ((int)unaff_x19[3] != 0) {
    unaff_x19[4] = param_1;
    thunk_FUN_03048534(unaff_x19 + 4,param_1);
    in_stack_00000018 = unaff_w21;
    lVar1 = thunk_FUN_0301043c(*unaff_x23,&stack0x00000018);
    if ((lVar1 != 0) &&
       (lVar2 = thunk_FUN_03010710(lVar1,*(undefined8 *)(*unaff_x19 + 0x40)), lVar2 == 0))
    goto LAB_05abb080;
    if (1 < *(uint *)(unaff_x19 + 3)) {
      unaff_x19[5] = lVar1;
      thunk_FUN_03048534(unaff_x19 + 5,lVar1);
      lVar1 = thunk_FUN_0301043c(*unaff_x23,&stack0x0000000c);
      if ((lVar1 != 0) &&
         (lVar2 = thunk_FUN_03010710(lVar1,*(undefined8 *)(*unaff_x19 + 0x40)), lVar2 == 0))
      goto LAB_05abb080;
      if (2 < *(uint *)(unaff_x19 + 3)) {
        unaff_x19[6] = lVar1;
        thunk_FUN_03048534(unaff_x19 + 6,lVar1);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94f0();
}


