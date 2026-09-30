/*
FUNCTION_NAME: OVRPlugin$$GetActionStatePose
ENTRY_POINT: 02c1f3c4
PROGRAM: sharks-libil2cpp.so
SCORE: 94
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetActionStatePose(void)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  uint uVar6;
  long unaff_x19;
  long *unaff_x20;
  uint uVar7;
  undefined8 *unaff_x21;
  
  FUN_017fc350();
  *(undefined1 *)(unaff_x19 + 0xee2) = 1;
  plVar2 = (long *)thunk_FUN_01861bbc(*unaff_x21);
  FUN_02a58650(plVar2,0);
  if (unaff_x20 != (long *)0x0) {
    lVar3 = (**(code **)(*unaff_x20 + 0x2f8))();
    if ((plVar2 != (long *)0x0) &&
       (FUN_02a5a000(plVar2,*(undefined8 *)PTR_DAT_037f8250,0), puVar1 = PTR_DAT_037f9d90,
       lVar3 != 0)) {
      uVar6 = *(uint *)(lVar3 + 0x18);
      if (0 < (int)uVar6) {
        uVar7 = 0;
        do {
          if (uVar7 != 0) {
            FUN_02a5a000(plVar2,*(undefined8 *)puVar1,0);
            uVar6 = *(uint *)(lVar3 + 0x18);
          }
          if (uVar6 <= uVar7) {
                    /* WARNING: Subroutine does not return */
            FUN_017fc5b0();
          }
          plVar4 = *(long **)(lVar3 + (long)(int)uVar7 * 8 + 0x20);
          if (plVar4 == (long *)0x0) goto LAB_02c1f4c4;
          uVar5 = (**(code **)(*plVar4 + 0x1a8))(plVar4,*(undefined8 *)(*plVar4 + 0x1b0));
          FUN_02a5a000(plVar2,uVar5,0);
          uVar6 = *(uint *)(lVar3 + 0x18);
          uVar7 = uVar7 + 1;
        } while ((int)uVar7 < (int)uVar6);
      }
      FUN_02a5a000(plVar2,*(undefined8 *)PTR_DAT_037f8258,0);
                    /* WARNING: Could not recover jumptable at 0x02c1f4c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x168))(plVar2,*(undefined8 *)(*plVar2 + 0x170));
      return;
    }
  }
LAB_02c1f4c4:
                    /* WARNING: Subroutine does not return */
  FUN_017fc5a8();
}


