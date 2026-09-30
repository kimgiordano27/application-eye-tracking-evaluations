/*
FUNCTION_NAME: Unity.Entities.ChunkIterationUtility.GetEnabledMask_00000A5B$PostfixBurstDelegate$$Invoke
ENTRY_POINT: 063c5374
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2
*/


undefined8
Unity_Entities_ChunkIterationUtility_GetEnabledMask_00000A5B_PostfixBurstDelegate__Invoke(void)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 uVar6;
  undefined8 uVar7;
  long *unaff_x25;
  
  *(undefined8 *)(unaff_x19 + 0x20) = unaff_x20;
  thunk_FUN_03048534();
  uVar6 = *(undefined8 *)PTR_DAT_06f80808;
  if (*(int *)(*unaff_x25 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  lVar1 = FUN_05afde1c(uVar6,0);
  plVar2 = (long *)FUN_02fe9340(*(undefined8 *)PTR_DAT_06f6f008,1);
  lVar3 = FUN_05afde1c(*(undefined8 *)PTR_DAT_06fa6c08,0);
  if (plVar2 != (long *)0x0) {
    if ((lVar3 != 0) &&
       (lVar4 = thunk_FUN_03010710(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0)) {
      uVar6 = RootMotion_Dynamics_PuppetMasterLite_<Deactivation>d__23__System_Collections_Generic_IEnumerator<System_Object>_get_Current
                        ();
                    /* WARNING: Subroutine does not return */
      FUN_02fe93c0(uVar6,0);
    }
    if ((int)plVar2[3] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94f0();
    }
    plVar2[4] = lVar3;
    thunk_FUN_03048534(plVar2 + 4,lVar3);
    if (lVar1 != 0) {
      uVar6 = FUN_05b095c8(lVar1,plVar2,0);
      uVar5 = FUN_05a256a4(uVar6,0,0);
      uVar7 = 0;
      if ((uVar5 & 1) != 0) {
        uVar7 = thunk_FUN_0301080c(*(undefined8 *)PTR_DAT_06fcaee0);
        FUN_063eea38(uVar7,uVar6);
      }
      return uVar7;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


