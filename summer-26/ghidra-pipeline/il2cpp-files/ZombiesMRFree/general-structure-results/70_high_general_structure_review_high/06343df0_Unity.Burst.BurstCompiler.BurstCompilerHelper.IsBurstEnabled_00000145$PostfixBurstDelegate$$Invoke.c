/*
FUNCTION_NAME: Unity.Burst.BurstCompiler.BurstCompilerHelper.IsBurstEnabled_00000145$PostfixBurstDelegate$$Invoke
ENTRY_POINT: 06343df0
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_5;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2
*/


long Unity_Burst_BurstCompiler_BurstCompilerHelper_IsBurstEnabled_00000145_PostfixBurstDelegate__Invoke
               (void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  undefined8 uVar5;
  
  FUN_02fe925c(PTR_DAT_06f91d40);
  *(undefined1 *)(unaff_x19 + 0xfca) = 1;
  lVar2 = thunk_FUN_0301080c(*unaff_x21);
  FUN_05b32c00(lVar2,0);
  if (lVar2 != 0) {
    *(undefined4 *)(lVar2 + 0x10) = *(undefined4 *)(unaff_x20 + 0x10);
    if (*(long *)(unaff_x20 + 0x18) != 0) {
      lVar3 = FUN_05b126c0(*(long *)(unaff_x20 + 0x18),0);
      puVar1 = PTR_DAT_06f91d40;
      if (lVar3 == 0) {
        lVar4 = 0;
        *(undefined8 *)(lVar2 + 0x18) = 0;
      }
      else {
        uVar5 = *(undefined8 *)PTR_DAT_06f91d40;
        lVar4 = thunk_FUN_03010710(lVar3,uVar5);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02fe9884(lVar3,uVar5);
        }
        *(long *)(lVar2 + 0x18) = lVar4;
        uVar5 = *(undefined8 *)puVar1;
        lVar4 = thunk_FUN_03010710(lVar3,uVar5);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02fe9884(lVar3,uVar5);
        }
      }
      thunk_FUN_03048534(lVar2 + 0x18,lVar4);
      return lVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


