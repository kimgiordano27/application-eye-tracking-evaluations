/*
FUNCTION_NAME: OVRPlugin$$GetNodePositionTracked
ENTRY_POINT: 03380d18
PROGRAM: gunraiders-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin__GetNodePositionTracked(long param_1,undefined8 param_2,long param_3)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long in_x9;
  int *in_x10;
  undefined8 uVar4;
  
  do {
    if ((bool)in_ZR) {
      puVar1 = (undefined8 *)(param_1 + (long)(*in_x10 + 1) * 0x10 + 0x138);
LAB_03380dfc:
      lVar2 = (*(code *)*puVar1)();
      if (lVar2 == 0) {
        lVar3 = 0;
      }
      else {
        uVar4 = *(undefined8 *)
                 Method_System_Collections_Generic_Dictionary<string,_string>_get_Keys__;
        lVar3 = thunk_FUN_01c495e4(lVar2,uVar4);
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d748(lVar2,uVar4);
        }
      }
      return lVar3;
    }
    in_x9 = in_x9 + -1;
    if (in_x9 == 0) {
      puVar1 = (undefined8 *)FUN_01c72498();
      goto LAB_03380dfc;
    }
    in_ZR = *(long *)(in_x10 + 2) == param_3;
    in_x10 = in_x10 + 4;
  } while( true );
}


