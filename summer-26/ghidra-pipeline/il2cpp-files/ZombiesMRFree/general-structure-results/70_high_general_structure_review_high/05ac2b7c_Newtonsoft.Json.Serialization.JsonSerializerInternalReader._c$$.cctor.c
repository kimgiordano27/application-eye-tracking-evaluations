/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader.<>c$$.cctor
ENTRY_POINT: 05ac2b7c
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


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader_<>c___cctor(void)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  int unaff_w24;
  long unaff_x25;
  long unaff_x26;
  
  while( true ) {
                    /* try { // try from 05ac2b84 to 05bc2ba3 has its CatchHandler @ 05ac2d4c */
    if ((unaff_x20 != 0) &&
       (lVar2 = thunk_FUN_03010710(unaff_x20,*(undefined8 *)(*unaff_x22 + 0x40)), lVar2 == 0)) {
      uVar4 = RootMotion_Dynamics_PuppetMasterLite_<Deactivation>d__23__System_Collections_Generic_IEnumerator<System_Object>_get_Current
                        ();
                    /* try { // try from 05ac2c44 to 05bc2c4f has its CatchHandler @ 05ac2d30 */
                    /* WARNING: Subroutine does not return */
      FUN_02fe93c0(uVar4,0);
    }
    if ((ulong)*(uint *)(unaff_x22 + 3) <= (ulong)(unaff_x23 + unaff_x21)) break;
    plVar3 = (long *)((long)unaff_x22 + (unaff_x25 >> 0x1d) + 0x20);
    *plVar3 = unaff_x20;
    thunk_FUN_03048534(plVar3,unaff_x20);
    unaff_x21 = unaff_x21 + 1;
    unaff_w24 = unaff_w24 + -1;
    unaff_x25 = unaff_x25 + unaff_x26;
                    /* try { // try from 05ac2bc8 to 05bc2bcb has its CatchHandler @ 05ac2d40 */
    if (*(int *)(unaff_x19 + 0x18) <= unaff_x21) {
      return;
    }
    lVar2 = *(long *)(unaff_x19 + 0x10);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    uVar1 = *(int *)(unaff_x19 + 0x18) + unaff_w24;
    if (*(uint *)(lVar2 + 0x18) <= uVar1) break;
    unaff_x20 = *(long *)(lVar2 + (long)(int)uVar1 * 8 + 0x20);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94f0();
}


