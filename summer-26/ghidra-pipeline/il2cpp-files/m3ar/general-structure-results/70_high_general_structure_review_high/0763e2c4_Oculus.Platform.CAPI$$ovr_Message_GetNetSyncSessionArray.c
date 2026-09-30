/*
FUNCTION_NAME: Oculus.Platform.CAPI$$ovr_Message_GetNetSyncSessionArray
ENTRY_POINT: 0763e2c4
PROGRAM: m3ar-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


void Oculus_Platform_CAPI__ovr_Message_GetNetSyncSessionArray(ulong param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long *unaff_x19;
  long unaff_x23;
  
  if ((param_1 & 1) != 0) {
    FUN_076405e8();
  }
  FUN_075c6ba8();
  uVar1 = FUN_075cd15c();
  if ((uVar1 & 1) != 0) {
    if (unaff_x23 != 0) {
      uVar2 = FUN_0736da40();
      FUN_075c6ba8(uVar2,0);
LAB_0763e328:
      if (*(int *)(*(long *)PTR_DAT_08fa64c8 + 0xe4) == 0) {
        thunk_FUN_0408f364(*(long *)PTR_DAT_08fa64c8);
      }
      FUN_07640be0();
      return;
    }
    goto LAB_0763e4f4;
  }
  uVar1 = FUN_075cd15c();
  if ((uVar1 & 1) != 0) {
    uVar1 = thunk_FUN_07367938();
    if ((uVar1 & 1) == 0) {
      uVar1 = thunk_FUN_07367938();
      if (((((uVar1 & 1) != 0) || (uVar1 = thunk_FUN_07367938(), (uVar1 & 1) != 0)) ||
          (uVar1 = thunk_FUN_07367938(), (uVar1 & 1) != 0)) ||
         (uVar1 = thunk_FUN_07367938(), (uVar1 & 1) != 0)) {
        if ((unaff_x23 != 0) && (FUN_0736da40(), unaff_x19 != (long *)0x0)) {
          (**(code **)(*unaff_x19 + 0x248))();
          goto LAB_0763e328;
        }
LAB_0763e4f4:
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
    }
    else {
      if ((unaff_x23 == 0) || (FUN_0736da40(), unaff_x19 == (long *)0x0)) goto LAB_0763e4f4;
      (**(code **)(*unaff_x19 + 0x248))();
    }
  }
  FUN_07640f5c();
  return;
}


