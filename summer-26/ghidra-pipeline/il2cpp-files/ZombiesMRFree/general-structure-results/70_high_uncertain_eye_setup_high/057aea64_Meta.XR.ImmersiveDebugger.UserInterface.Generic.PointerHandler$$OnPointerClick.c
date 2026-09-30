/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.PointerHandler$$OnPointerClick
ENTRY_POINT: 057aea64
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_PointerHandler__OnPointerClick(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long lVar3;
  long *unaff_x24;
  
  if (param_1 != 0) {
    if ((int)unaff_x21[3] != 0) {
      unaff_x21[4] = unaff_x23;
      thunk_FUN_03048534();
      lVar3 = *(long *)(unaff_x22 + 0x20);
      if ((lVar3 != 0) &&
         (lVar1 = thunk_FUN_03010710(lVar3,*(undefined8 *)(*unaff_x21 + 0x40)), lVar1 == 0))
      goto LAB_057aeb30;
      if (1 < *(uint *)(unaff_x21 + 3)) {
        unaff_x21[5] = lVar3;
        thunk_FUN_03048534(unaff_x21 + 5,lVar3);
        lVar3 = *(long *)(unaff_x22 + 0x28);
        if ((lVar3 != 0) &&
           (lVar1 = thunk_FUN_03010710(lVar3,*(undefined8 *)(*unaff_x21 + 0x40)), lVar1 == 0))
        goto LAB_057aeb30;
        if (2 < *(uint *)(unaff_x21 + 3)) {
          unaff_x21[6] = lVar3;
          thunk_FUN_03048534(unaff_x21 + 6,lVar3);
          if (*(int *)(*unaff_x24 + 0xe0) == 0) {
            thunk_FUN_02fdcff0();
          }
                    /* WARNING: Could not recover jumptable at 0x057aeb28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x18))();
          return;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02fe94f0();
  }
LAB_057aeb30:
  uVar2 = RootMotion_Dynamics_PuppetMasterLite_<Deactivation>d__23__System_Collections_Generic_IEnumerator<System_Object>_get_Current
                    ();
                    /* WARNING: Subroutine does not return */
  FUN_02fe93c0(uVar2,0);
}


