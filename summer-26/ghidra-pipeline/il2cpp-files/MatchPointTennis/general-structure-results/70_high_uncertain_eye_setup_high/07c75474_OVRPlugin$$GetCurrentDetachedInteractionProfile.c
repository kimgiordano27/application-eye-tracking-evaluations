/*
FUNCTION_NAME: OVRPlugin$$GetCurrentDetachedInteractionProfile
ENTRY_POINT: 07c75474
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
OVRPlugin__GetCurrentDetachedInteractionProfile(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 *puVar2;
  ulong in_x9;
  int *in_x10;
  long unaff_x19;
  long unaff_x20;
  int unaff_w21;
  long *unaff_x22;
  long *unaff_x24;
  long *unaff_x25;
  float fVar3;
  
code_r0x07c75474:
  in_x9 = in_x9 - 1;
  in_x10 = in_x10 + 4;
  if (in_x9 != 0) goto LAB_07c75468;
  do {
    puVar2 = (undefined8 *)FUN_044822ac(unaff_x22,param_3,0);
    while( true ) {
      fVar3 = (float)(*(code *)*puVar2)(unaff_x22,unaff_w21,puVar2[1]);
      if (*(float *)(unaff_x19 + 0xd8) < fVar3) {
        return 1;
      }
      do {
        unaff_w21 = unaff_w21 + 1;
        if (unaff_w21 == 5) {
          return 0;
        }
        if (*(int *)(*unaff_x24 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        iVar1 = FUN_07c8f8b4();
      } while (iVar1 == 0);
      unaff_x22 = *(long **)(unaff_x20 + 0x130);
      if (unaff_x22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      param_1 = *unaff_x22;
      param_3 = *unaff_x25;
      in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
      if (in_x9 == 0) break;
      in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
LAB_07c75468:
      if (*(long *)(in_x10 + -2) != param_3) goto code_r0x07c75474;
      puVar2 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
    }
  } while( true );
}


