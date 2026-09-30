/*
FUNCTION_NAME: Meta.XR.EnvironmentDepth.EnvironmentDepthUtils$$.cctor
ENTRY_POINT: 06d77b90
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_EnvironmentDepth_EnvironmentDepthUtils___cctor(long *param_1,undefined4 param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x19;
  long *unaff_x20;
  
  *(undefined4 *)(unaff_x19 + 0x18) = param_2;
  if (*unaff_x20 != *(long *)PTR_DAT_08e8d708) {
    unaff_x20 = (long *)0x0;
  }
  if (*(int *)(*param_1 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  uVar1 = FUN_085dfaac(unaff_x20,0,0);
  if ((uVar1 & 1) == 0) {
    if (unaff_x20 != (long *)0x0) {
      lVar2 = unaff_x20[4];
      *(int *)(unaff_x19 + 0x28) = (int)unaff_x20[5];
      *(long *)(unaff_x19 + 0x20) = lVar2;
      *(long *)(unaff_x19 + 0x30) = unaff_x20[6];
      thunk_FUN_03d233cc((long *)(unaff_x19 + 0x30));
      return;
    }
  }
  else {
    lVar2 = FUN_03c8f97c(*(undefined8 *)PTR_DAT_08e69770,5);
    if (lVar2 != 0) {
      if (*(int *)(lVar2 + 0x18) != 0) {
        *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)PTR_DAT_08e8f420;
        thunk_FUN_03d233cc((undefined8 *)(lVar2 + 0x20));
        uVar3 = FUN_085e29cc();
        if (1 < *(uint *)(lVar2 + 0x18)) {
          *(undefined8 *)(lVar2 + 0x28) = uVar3;
          thunk_FUN_03d233cc((undefined8 *)(lVar2 + 0x28),uVar3);
          if (2 < *(uint *)(lVar2 + 0x18)) {
            *(undefined8 *)(lVar2 + 0x30) = *(undefined8 *)PTR_DAT_08e8f428;
            thunk_FUN_03d233cc((undefined8 *)(lVar2 + 0x30));
            uVar3 = FUN_085e29cc();
            if (3 < *(uint *)(lVar2 + 0x18)) {
              *(undefined8 *)(lVar2 + 0x38) = uVar3;
              thunk_FUN_03d233cc((undefined8 *)(lVar2 + 0x38),uVar3);
              if (4 < *(uint *)(lVar2 + 0x18)) {
                *(undefined8 *)(lVar2 + 0x40) = *(undefined8 *)PTR_DAT_08e8f418;
                thunk_FUN_03d233cc();
                uVar3 = FUN_06f74f38(lVar2,0);
                if (*(int *)(*(long *)PTR_DAT_08e69670 + 0xe0) == 0) {
                  thunk_FUN_03cd7500(*(long *)PTR_DAT_08e69670);
                }
                FUN_085a437c(uVar3,0);
                return;
              }
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb38();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


