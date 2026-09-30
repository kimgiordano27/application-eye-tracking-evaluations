/*
FUNCTION_NAME: OVRManager$$RegisterEventListener
ENTRY_POINT: 033ab96c
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool OVRManager__RegisterEventListener(long param_1,long *param_2)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  code *in_x9;
  long unaff_x19;
  long *unaff_x22;
  uint uVar5;
  long lVar6;
  long lVar7;
  
  while( true ) {
    param_2 = (long *)(*in_x9)(param_2,*(undefined8 *)(param_1 + 0x830));
                    /* try { // try from 033ab974 to 034ab9db has its CatchHandler @ 033abeb4 */
    if (*(int *)(*unaff_x22 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    if (param_2 == (long *)0x0) break;
    lVar3 = (**(code **)(*param_2 + 0x848))(param_2,*(undefined8 *)(*param_2 + 0x850));
    if ((lVar3 != 0) && (uVar2 = *(uint *)(lVar3 + 0x18), 0 < (int)uVar2)) {
      lVar6 = 0;
      lVar1 = lVar3 + 0x20;
      do {
        uVar5 = (uint)lVar6;
        if (uVar2 <= uVar5) {
LAB_033ab998:
                    /* WARNING: Subroutine does not return */
          FUN_01d7db78();
        }
        lVar7 = *(long *)(lVar1 + lVar6 * 8);
        if (*(int *)(*unaff_x22 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
        }
        if (lVar7 == unaff_x19) goto LAB_033ab97c;
        if (*(uint *)(lVar3 + 0x18) <= uVar5) goto LAB_033ab998;
        lVar7 = *(long *)(lVar1 + lVar6 * 8);
        if (*(int *)(*unaff_x22 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
        }
        if (lVar7 != 0) {
          if (*(uint *)(lVar3 + 0x18) <= uVar5) goto LAB_033ab998;
          if (*(long *)(lVar1 + lVar6 * 8) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01d7db70();
          }
          uVar4 = FUN_033ab85c();
          if ((uVar4 & 1) != 0) goto LAB_033ab97c;
        }
        uVar2 = *(uint *)(lVar3 + 0x18);
        lVar6 = lVar6 + 1;
      } while ((int)lVar6 < (int)uVar2);
    }
    param_1 = *param_2;
    in_x9 = *(code **)(param_1 + 0x828);
  }
LAB_033ab97c:
  return param_2 != (long *)0x0;
}


