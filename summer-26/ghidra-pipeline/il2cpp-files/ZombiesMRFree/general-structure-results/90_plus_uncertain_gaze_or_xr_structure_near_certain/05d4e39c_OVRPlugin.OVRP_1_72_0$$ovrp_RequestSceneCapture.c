/*
FUNCTION_NAME: OVRPlugin.OVRP_1_72_0$$ovrp_RequestSceneCapture
ENTRY_POINT: 05d4e39c
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 101
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_OVRP_1_72_0__ovrp_RequestSceneCapture(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  long *plVar4;
  
  while (lVar1 = thunk_FUN_03010710(param_2,*(undefined8 *)(param_1 + 0x40)), param_2 = unaff_x20,
        lVar1 != 0) {
    do {
      if (*(uint *)(unaff_x23 + 3) <= unaff_x21) {
LAB_05d4e42c:
                    /* WARNING: Subroutine does not return */
        FUN_02fe94f0();
      }
      *(long *)((long)unaff_x23 + unaff_x22) = param_2;
                    /* try { // try from 05d4e3c0 to 05e4e3c3 has its CatchHandler @ 05d4e400 */
      thunk_FUN_03048534((long *)((long)unaff_x23 + unaff_x22),param_2);
                    /* try { // try from 05d4e3c4 to 05e4e3f3 has its CatchHandler @ 05d4e27c */
      plVar4 = *(long **)(unaff_x19 + 0xa0);
      lVar1 = FUN_05d4a298();
      if (plVar4 == (long *)0x0) {
LAB_05d4e428:
                    /* WARNING: Subroutine does not return */
        FUN_02fe94e8();
      }
      if ((lVar1 != 0) &&
         (lVar2 = thunk_FUN_03010710(lVar1,*(undefined8 *)(*plVar4 + 0x40)), lVar2 == 0))
      goto LAB_05d4e430;
                    /* try { // try from 05d4e3f4 to 05e4e3f7 has its CatchHandler @ 05d4e3fc */
      if (*(uint *)(plVar4 + 3) <= unaff_x21) goto LAB_05d4e42c;
                    /* try { // try from 05d4e3f8 to 05e4e417 has its CatchHandler @ 05d4e27c */
                    /* catch(type#1 @ 06b7e988) { ... } // from try @ 05d4e3f4 with catch @ 05d4e3fc
                        */
                    /* catch(type#1 @ 06b7e988) { ... } // from try @ 05d4e3c0 with catch @ 05d4e400
                        */
      *(long *)((long)plVar4 + unaff_x22) = lVar1;
                    /* catch(type#1 @ 06b7e988) { ... } // from try @ 05d4e34c with catch @ 05d4e404
                        */
      thunk_FUN_03048534((long *)((long)plVar4 + unaff_x22),lVar1);
                    /* catch(type#1 @ 06b7e988) { ... } // from try @ 05d4e390 with catch @ 05d4e408
                        */
      unaff_x21 = unaff_x21 + 1;
      unaff_x22 = unaff_x22 + 8;
      if (unaff_x21 == 0x1a) {
                    /* try { // try from 05d4e418 to 05e4e41b has its CatchHandler @ 05d4e440 */
                    /* try { // try from 05d4e41c to 05e4e447 has its CatchHandler @ 05d4e27c */
        return;
      }
      unaff_x23 = *(long **)(unaff_x19 + 0x98);
      param_2 = FUN_05d49f28();
      if (unaff_x23 == (long *)0x0) goto LAB_05d4e428;
    } while (param_2 == 0);
    param_1 = *unaff_x23;
    unaff_x20 = param_2;
  }
LAB_05d4e430:
  uVar3 = RootMotion_Dynamics_PuppetMasterLite_<Deactivation>d__23__System_Collections_Generic_IEnumerator<System_Object>_get_Current
                    ();
                    /* WARNING: Subroutine does not return */
  FUN_02fe93c0(uVar3,0);
}


