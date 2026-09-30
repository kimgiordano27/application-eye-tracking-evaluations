/*
FUNCTION_NAME: RootMotion.FinalIK.RotationLimit$$SetDefaultLocalRotation
ENTRY_POINT: 029ca9bc
PROGRAM: vrlegs-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x029caab0) */
/* WARNING: Removing unreachable block (ram,0x029caac0) */

void RootMotion_FinalIK_RotationLimit__SetDefaultLocalRotation(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  undefined8 unaff_x21;
  long *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x25;
  undefined1 auVar5 [16];
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000068;
  
  while( true ) {
    if (*(int *)(param_1 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      param_1 = *unaff_x22;
    }
    if (**(long **)(param_1 + 0xb8) == 0) break;
    FUN_01b5f01c(**(long **)(param_1 + 0xb8),unaff_x21,*unaff_x25);
    do {
      uVar1 = FUN_0298b7ec(&stack0x00000040,0);
      if ((uVar1 & 1) == 0) {
        iVar4 = 0;
        FUN_0298b8dc(&stack0x00000040,0);
        while( true ) {
          lVar2 = *unaff_x22;
          if (*(int *)(lVar2 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar2 = *unaff_x22;
          }
          lVar3 = **(long **)(lVar2 + 0xb8);
          if (lVar3 == 0) break;
          if (*(int *)(lVar3 + 0x18) <= iVar4) {
            if (in_stack_00000068._4_1_ != '\0') {
              OVRManager_<>c__<InitOVRManager>b__424_0();
            }
            return;
          }
          if (*(int *)(lVar2 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar3 = **(long **)(*unaff_x22 + 0xb8);
            if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01ab6c3c();
            }
          }
          FUN_02215a88(lVar3,iVar4,&stack0x00000018,*unaff_x23);
          FUN_0219eaf8();
          iVar4 = iVar4 + 1;
        }
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      auVar5 = FUN_0298b700(&stack0x00000040,0);
      unaff_x21 = auVar5._0_8_;
    } while (auVar5._8_8_ != 0);
    param_1 = *unaff_x22;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


