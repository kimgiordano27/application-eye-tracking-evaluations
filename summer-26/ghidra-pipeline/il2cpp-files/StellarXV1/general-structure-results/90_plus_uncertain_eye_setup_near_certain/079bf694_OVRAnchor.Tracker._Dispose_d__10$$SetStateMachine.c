/*
FUNCTION_NAME: OVRAnchor.Tracker.<Dispose>d__10$$SetStateMachine
ENTRY_POINT: 079bf694
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 99
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void OVRAnchor_Tracker_<Dispose>d__10__SetStateMachine(long param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  long lVar4;
  long unaff_x22;
  ulong uVar5;
  long unaff_x23;
  undefined4 uVar6;
  undefined1 in_stack_00000020 [16];
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  undefined4 uStack0000000000000038;
  undefined4 uStack000000000000003c;
  
  do {
    OVRPlugin_LayerDesc__ToString
              (&stack0x00000020 + 4,param_2,*(undefined4 *)(param_1 + unaff_x21 * 4 + 0x20),0);
    if (unaff_x20 == 0) break;
    if (*(uint *)(unaff_x20 + 0x18) <= unaff_x21) goto LAB_079bf7b0;
    puVar1 = (undefined8 *)(unaff_x20 + unaff_x22);
    unaff_x22 = unaff_x22 + 0x1c;
    unaff_x21 = unaff_x21 + 1;
    *(undefined4 *)(puVar1 + 3) = uStack000000000000003c;
    puVar1[2] = CONCAT44(uStack0000000000000038,uStack0000000000000034);
    puVar1[1] = CONCAT44(uStack0000000000000030,in_stack_00000020._12_4_);
    *puVar1 = in_stack_00000020._4_8_;
    param_1 = *(long *)(unaff_x23 + 0x18);
    if (param_1 == 0) break;
    if ((long)(int)*(uint *)(param_1 + 0x18) <= (long)unaff_x21) {
      if (*(int *)(*(long *)PTR_DAT_092ee5b8 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      uVar6 = FUN_079f383c();
      lVar3 = *(long *)(unaff_x23 + 0x18);
      *(undefined4 *)(unaff_x23 + 0x28) = uVar6;
      if (lVar3 != 0) {
        uVar5 = 0;
        goto LAB_079bf71c;
      }
      break;
    }
    if (*(long *)(unaff_x19 + 0x1a8) == 0) break;
    if (*(uint *)(param_1 + 0x18) <= unaff_x21) goto LAB_079bf7b0;
    param_2 = *(long *)(*(long *)(unaff_x19 + 0x1a8) + 0x10);
  } while (param_2 != 0);
  goto LAB_079bf790;
  while( true ) {
    lVar4 = *(long *)(unaff_x19 + 0x1b0);
    uVar6 = *(undefined4 *)(lVar3 + uVar5 * 4 + 0x20);
    FUN_07a5ce6c(&stack0x00000020 + 4,lVar2,uVar6,0);
    if (lVar4 == 0) break;
    FUN_07a5ceac(lVar4,uVar6);
    lVar3 = *(long *)(unaff_x23 + 0x18);
    uVar5 = uVar5 + 1;
    if (lVar3 == 0) break;
LAB_079bf71c:
    if ((long)(int)*(uint *)(lVar3 + 0x18) <= (long)uVar5) {
      return;
    }
    if (*(uint *)(lVar3 + 0x18) <= uVar5) {
LAB_079bf7b0:
                    /* WARNING: Subroutine does not return */
      FUN_04077838();
    }
    if ((*(long *)(unaff_x19 + 0x1a8) == 0) ||
       (lVar2 = *(long *)(*(long *)(unaff_x19 + 0x1a8) + 0x10), lVar2 == 0)) break;
  }
LAB_079bf790:
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


