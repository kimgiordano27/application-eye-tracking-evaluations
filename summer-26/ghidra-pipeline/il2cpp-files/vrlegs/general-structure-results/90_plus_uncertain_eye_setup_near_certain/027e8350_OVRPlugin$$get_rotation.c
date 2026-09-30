/*
FUNCTION_NAME: OVRPlugin$$get_rotation
ENTRY_POINT: 027e8350
PROGRAM: vrlegs-libil2cpp.so
SCORE: 111
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_3;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__get_rotation(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  
  if (param_2 < -1) {
    thunk_FUN_01a6ca08(PTR_DAT_03cbde98);
    uVar4 = thunk_FUN_01a89e68();
    puVar3 = PTR_DAT_03cfd2c0;
  }
  else {
    if (-2 < param_3) {
      if (*(char *)(param_1 + 0x40) != '\0') {
        uVar4 = thunk_FUN_01a6ca08(PTR_DAT_03cfabf0);
        uVar4 = FUN_027b3d94(uVar4,0);
        thunk_FUN_01a6ca08(PTR_DAT_03cc17e0);
        uVar5 = thunk_FUN_01a89e68();
        FUN_0277b3d8(uVar5,0,uVar4,0);
        uVar4 = thunk_FUN_01a6ca08(PTR_DAT_03cfd2e0);
                    /* WARNING: Subroutine does not return */
        FUN_01ab6b14(uVar5,uVar4);
      }
      *(long *)(param_1 + 0x28) = unaff_x20;
      *(long *)(param_1 + 0x30) = param_3;
      lVar1 = 0;
      if (unaff_x20 != 0) {
        if (unaff_x20 < 0) {
          lVar1 = 0x7fffffffffffffff;
          if ((param_4 & 1) != 0) {
            *(undefined8 *)(param_1 + 0x38) = 0x7fffffffffffffff;
            return 1;
          }
        }
        else {
          lVar1 = thunk_FUN_01a4a3e0();
          lVar1 = lVar1 + unaff_x20 * 10000;
        }
      }
      lVar2 = FUN_027e80e0();
      if (lVar2 != 0) {
        FUN_027e86c8(lVar2,param_1,lVar1);
        return 1;
      }
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    thunk_FUN_01a6ca08(PTR_DAT_03cbde98);
    uVar4 = thunk_FUN_01a89e68();
    puVar3 = PTR_DAT_03cfd2d0;
  }
  uVar5 = thunk_FUN_01a6ca08(puVar3);
  FUN_026b3fc8(uVar4,uVar5,0);
  uVar5 = thunk_FUN_01a6ca08(PTR_DAT_03cfd2e0);
                    /* WARNING: Subroutine does not return */
  FUN_01ab6b14(uVar4,uVar5);
}


