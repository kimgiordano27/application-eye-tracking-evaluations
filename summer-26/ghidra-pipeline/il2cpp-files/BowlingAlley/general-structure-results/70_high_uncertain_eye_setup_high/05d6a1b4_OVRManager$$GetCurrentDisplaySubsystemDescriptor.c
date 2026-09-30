/*
FUNCTION_NAME: OVRManager$$GetCurrentDisplaySubsystemDescriptor
ENTRY_POINT: 05d6a1b4
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__GetCurrentDisplaySubsystemDescriptor(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  undefined8 *unaff_x23;
  
  thunk_FUN_0333a630();
  lVar2 = thunk_FUN_032a56a0(*unaff_x23);
  FUN_05d6a354(lVar2,1);
  if ((lVar2 != 0) &&
     (lVar3 = thunk_FUN_032a55a4(lVar2,*(undefined8 *)(*unaff_x21 + 0x40)), lVar3 == 0)) {
LAB_05d6a344:
    uVar4 = thunk_FUN_032fa790();
                    /* WARNING: Subroutine does not return */
    FUN_032d5dbc(uVar4,0);
  }
  if (1 < *(uint *)(unaff_x21 + 3)) {
    unaff_x21[5] = lVar2;
    thunk_FUN_0333a630(unaff_x21 + 5,lVar2);
    lVar2 = thunk_FUN_032a56a0(*unaff_x23);
    FUN_05d6a354(lVar2,2);
    if ((lVar2 != 0) &&
       (lVar3 = thunk_FUN_032a55a4(lVar2,*(undefined8 *)(*unaff_x21 + 0x40)), lVar3 == 0))
    goto LAB_05d6a344;
    if (2 < *(uint *)(unaff_x21 + 3)) {
      unaff_x21[6] = lVar2;
      thunk_FUN_0333a630(unaff_x21 + 6,lVar2);
      lVar2 = thunk_FUN_032a56a0(*unaff_x23);
      FUN_05d6a354(lVar2,3);
      if ((lVar2 != 0) &&
         (lVar3 = thunk_FUN_032a55a4(lVar2,*(undefined8 *)(*unaff_x21 + 0x40)), lVar3 == 0))
      goto LAB_05d6a344;
      if (3 < *(uint *)(unaff_x21 + 3)) {
        unaff_x21[7] = lVar2;
        thunk_FUN_0333a630(unaff_x21 + 7,lVar2);
        lVar2 = thunk_FUN_032a56a0(*unaff_x23);
        FUN_05d6a354(lVar2,4);
        if ((lVar2 != 0) &&
           (lVar3 = thunk_FUN_032a55a4(lVar2,*(undefined8 *)(*unaff_x21 + 0x40)), lVar3 == 0))
        goto LAB_05d6a344;
        puVar1 = PTR_DAT_072aefe0;
        if (4 < *(uint *)(unaff_x21 + 3)) {
          unaff_x21[8] = lVar2;
          thunk_FUN_0333a630(unaff_x21 + 8,lVar2);
          *(long **)(unaff_x20 + 0x30) = unaff_x21;
          thunk_FUN_0333a630();
          uVar4 = thunk_FUN_032a56a0(*(undefined8 *)puVar1);
          FUN_05d82a68(uVar4,0);
          *(undefined8 *)(unaff_x20 + 0x40) = uVar4;
          thunk_FUN_0333a630((undefined8 *)(unaff_x20 + 0x40),uVar4);
          FUN_059660a0();
          *(undefined8 *)(unaff_x20 + 0x38) = unaff_x19;
          thunk_FUN_0333a630((undefined8 *)(unaff_x20 + 0x38));
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
}


