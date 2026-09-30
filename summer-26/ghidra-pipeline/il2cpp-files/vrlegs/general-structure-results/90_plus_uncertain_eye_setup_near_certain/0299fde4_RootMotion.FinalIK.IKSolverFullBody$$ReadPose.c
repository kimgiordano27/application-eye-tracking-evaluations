/*
FUNCTION_NAME: RootMotion.FinalIK.IKSolverFullBody$$ReadPose
ENTRY_POINT: 0299fde4
PROGRAM: vrlegs-libil2cpp.so
SCORE: 100
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_6;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x0299fcc4) */
/* WARNING: Removing unreachable block (ram,0x0299fccc) */

undefined8 RootMotion_FinalIK_IKSolverFullBody__ReadPose(void)

{
  undefined1 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  long *unaff_x24;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined1 in_stack_00000018;
  char cStack0000000000000028;
  char cStack000000000000002c;
  
  uVar2 = thunk_FUN_01a6ca08(PTR_DAT_03d08048);
  if (*(int *)(unaff_x23 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c44();
  }
  *(undefined8 *)(unaff_x23 + 0x20) = uVar2;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  uVar1 = *(undefined1 *)(unaff_x21 + 0x84);
  in_stack_00000008 = thunk_FUN_01a6ca08(PTR_DAT_03cca1f8);
  in_stack_00000010 = 0xffffffffffffffff;
  in_stack_00000018 = uVar1;
  uVar2 = FUN_027a62b8(&stack0x00000008,0);
  if (*(uint *)(unaff_x23 + 0x18) < 2) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c44();
  }
  *(undefined8 *)(unaff_x23 + 0x28) = uVar2;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  uVar2 = thunk_FUN_01a6ca08(PTR_DAT_03d08050);
  if (*(uint *)(unaff_x23 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c44();
  }
  *(undefined8 *)(unaff_x23 + 0x30) = uVar2;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  uVar2 = *(undefined8 *)(unaff_x21 + 0x30);
  lVar3 = thunk_FUN_01a6ca08(PTR_DAT_03cc9f98);
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar2 = FUN_029bc5e8(uVar2,0,0);
  if (*(uint *)(unaff_x23 + 0x18) < 4) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c44();
  }
  *(undefined8 *)(unaff_x23 + 0x38) = uVar2;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  uVar2 = thunk_FUN_01a6ca08(PTR_DAT_03d08058);
  if (*(uint *)(unaff_x23 + 0x18) < 5) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c44();
  }
  *(undefined8 *)(unaff_x23 + 0x40) = uVar2;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  if (unaff_x24 == (long *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (**(code **)(*unaff_x24 + 0x168))();
  }
  if (*(uint *)(unaff_x23 + 0x18) < 6) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c44();
  }
  *(undefined8 *)(unaff_x23 + 0x48) = uVar2;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  FUN_025be564();
  if (unaff_x22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  lVar3 = thunk_FUN_01a6ca08(PTR_DAT_03cca060);
  lVar5 = *unaff_x22;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == lVar3) {
        puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_0299fc1c;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar4 = (undefined8 *)FUN_01a472ec();
LAB_0299fc1c:
  (*(code *)*puVar4)();
  if (cStack0000000000000028 != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0();
  }
  if (cStack000000000000002c != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0();
  }
  return 0;
}


