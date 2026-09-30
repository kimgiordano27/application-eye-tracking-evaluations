/*
FUNCTION_NAME: OVRPlugin$$set_position
ENTRY_POINT: 0314dfe8
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__set_position(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 *puVar2;
  ulong in_x9;
  long in_x10;
  int *piVar3;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x22;
  
  do {
    piVar3 = (int *)(in_x10 + 8);
    do {
      if (*(long *)(piVar3 + -2) == param_3) {
        puVar2 = (undefined8 *)(param_1 + (long)*piVar3 * 0x10 + 0x138);
        goto LAB_0314e020;
      }
      in_x9 = in_x9 - 1;
      piVar3 = piVar3 + 4;
    } while (in_x9 != 0);
    do {
      puVar2 = (undefined8 *)FUN_01ae9f78(unaff_x22,param_3,0);
LAB_0314e020:
      iVar1 = (*(code *)*puVar2)(unaff_x22,puVar2[1]);
      if (iVar1 != 0) {
        FUN_022752dc();
        *(undefined8 *)(unaff_x19 + 0x20) = 0;
        *(undefined8 *)(unaff_x19 + 0x18) = 0;
        thunk_FUN_01b4f09c(unaff_x19 + 0x20,0);
        *(undefined4 *)(unaff_x19 + 0x10) = 1;
        return 1;
      }
      iVar1 = *(int *)(unaff_x19 + 0x38) + 1;
      *(int *)(unaff_x19 + 0x38) = iVar1;
      if (4 < iVar1) {
        return 0;
      }
      if ((unaff_x20 == 0) || (unaff_x22 = (long *)FUN_0314d63c(), unaff_x22 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      param_1 = *unaff_x22;
      in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
      param_3 = *(long *)PTR_DAT_03d80098;
    } while (in_x9 == 0);
    in_x10 = *(long *)(param_1 + 0xb0);
  } while( true );
}


