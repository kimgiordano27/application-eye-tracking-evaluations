/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.Vector3f>$$get_Current
ENTRY_POINT: 0177733c
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint System_Array_InternalEnumerator<OVRPlugin_Vector3f>__get_Current
               (long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong in_x9;
  int *in_x10;
  uint unaff_w19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x23;
  uint unaff_w24;
  int unaff_w26;
  
code_r0x0177733c:
  in_x9 = in_x9 - 1;
  in_x10 = in_x10 + 4;
  if (in_x9 != 0) goto LAB_01777330;
  do {
    puVar3 = (undefined8 *)FUN_0122ea3c();
    while( true ) {
      iVar1 = (*(code *)*puVar3)();
      if (iVar1 == 0) {
        return unaff_w24;
      }
      if (iVar1 < 0) {
        unaff_w19 = unaff_w24 + 1;
      }
      else {
        unaff_w26 = unaff_w24 - 1;
      }
      if (unaff_w26 < (int)unaff_w19) {
        return ~unaff_w19;
      }
      unaff_w24 = unaff_w19 + ((int)(unaff_w26 - unaff_w19) >> 1);
      if (*(uint *)(unaff_x23 + 0x18) <= unaff_w24) {
                    /* WARNING: Subroutine does not return */
        FUN_01230ca8();
      }
      if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01230ca0();
      }
      lVar2 = *(long *)(unaff_x20 + 0x20);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_0122e748();
      }
      param_3 = **(long **)(lVar2 + 0xc0);
      if ((*(byte *)(param_3 + 0x135) & 1) == 0) {
        param_3 = FUN_0122e748(param_3);
      }
      param_1 = *unaff_x21;
      in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
      if (in_x9 == 0) break;
      in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
LAB_01777330:
      if (*(long *)(in_x10 + -2) != param_3) goto code_r0x0177733c;
      puVar3 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
    }
  } while( true );
}


