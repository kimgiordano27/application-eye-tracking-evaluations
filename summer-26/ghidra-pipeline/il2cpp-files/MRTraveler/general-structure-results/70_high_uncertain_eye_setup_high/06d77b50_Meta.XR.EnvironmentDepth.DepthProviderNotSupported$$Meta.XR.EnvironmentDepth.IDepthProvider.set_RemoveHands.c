/*
FUNCTION_NAME: Meta.XR.EnvironmentDepth.DepthProviderNotSupported$$Meta.XR.EnvironmentDepth.IDepthProvider.set_RemoveHands
ENTRY_POINT: 06d77b50
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Meta_XR_EnvironmentDepth_DepthProviderNotSupported__Meta_XR_EnvironmentDepth_IDepthProvider_set_RemoveHands
               (void)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  
  FUN_03c8f898();
  FUN_03c8f898(PTR_DAT_08e8f418);
  FUN_03c8f898(PTR_DAT_08e8f420);
  FUN_03c8f898(PTR_DAT_08e8f428);
  *(undefined1 *)(unaff_x21 + 0x9d3) = 1;
  puVar1 = PTR_DAT_08e68f00;
  if (unaff_x20 != (long *)0x0) {
    *(int *)(unaff_x19 + 0x18) = (int)unaff_x20[3];
    if (*unaff_x20 != *(long *)PTR_DAT_08e8d708) {
      unaff_x20 = (long *)0x0;
    }
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    uVar2 = FUN_085dfaac(unaff_x20,0,0);
    if ((uVar2 & 1) == 0) {
      if (unaff_x20 != (long *)0x0) {
        lVar3 = unaff_x20[4];
        *(int *)(unaff_x19 + 0x28) = (int)unaff_x20[5];
        *(long *)(unaff_x19 + 0x20) = lVar3;
        *(long *)(unaff_x19 + 0x30) = unaff_x20[6];
        thunk_FUN_03d233cc((long *)(unaff_x19 + 0x30));
        return;
      }
    }
    else {
      lVar3 = FUN_03c8f97c(*(undefined8 *)PTR_DAT_08e69770,5);
      if (lVar3 != 0) {
        if (*(int *)(lVar3 + 0x18) != 0) {
          *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)PTR_DAT_08e8f420;
          thunk_FUN_03d233cc((undefined8 *)(lVar3 + 0x20));
          uVar4 = FUN_085e29cc();
          if (1 < *(uint *)(lVar3 + 0x18)) {
            *(undefined8 *)(lVar3 + 0x28) = uVar4;
            thunk_FUN_03d233cc((undefined8 *)(lVar3 + 0x28),uVar4);
            if (2 < *(uint *)(lVar3 + 0x18)) {
              *(undefined8 *)(lVar3 + 0x30) = *(undefined8 *)PTR_DAT_08e8f428;
              thunk_FUN_03d233cc((undefined8 *)(lVar3 + 0x30));
              uVar4 = FUN_085e29cc();
              if (3 < *(uint *)(lVar3 + 0x18)) {
                *(undefined8 *)(lVar3 + 0x38) = uVar4;
                thunk_FUN_03d233cc((undefined8 *)(lVar3 + 0x38),uVar4);
                if (4 < *(uint *)(lVar3 + 0x18)) {
                  *(undefined8 *)(lVar3 + 0x40) = *(undefined8 *)PTR_DAT_08e8f418;
                  thunk_FUN_03d233cc();
                  uVar4 = FUN_06f74f38(lVar3,0);
                  if (*(int *)(*(long *)PTR_DAT_08e69670 + 0xe0) == 0) {
                    thunk_FUN_03cd7500(*(long *)PTR_DAT_08e69670);
                  }
                  FUN_085a437c(uVar4,0);
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
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


