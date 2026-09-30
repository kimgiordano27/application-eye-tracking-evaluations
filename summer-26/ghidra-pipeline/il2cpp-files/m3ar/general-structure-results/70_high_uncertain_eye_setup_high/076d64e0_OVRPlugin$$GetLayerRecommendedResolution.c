/*
FUNCTION_NAME: OVRPlugin$$GetLayerRecommendedResolution
ENTRY_POINT: 076d64e0
PROGRAM: m3ar-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetLayerRecommendedResolution(void)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x19;
  long unaff_x20;
  
  FUN_0403162c();
  *(undefined1 *)(unaff_x20 + 0x252) = 1;
  lVar2 = *(long *)(unaff_x19 + 0x38);
  if (lVar2 != 0) {
    if (*(int *)(unaff_x19 + 0x40) == *(int *)(lVar2 + 0x18)) {
      lVar2 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08f65690);
      FUN_08589148(lVar2,0);
      if ((lVar2 != 0) && (lVar2 = FUN_04b60d40(lVar2,*(undefined8 *)PTR_DAT_08f79490), lVar2 != 0))
      {
        FUN_08548810(*(undefined4 *)(unaff_x19 + 0x30),lVar2,0);
        FUN_08548998(*(undefined4 *)(unaff_x19 + 0x30),lVar2,0);
        FUN_0854952c(lVar2,2,0);
        thunk_FUN_0854c21c(lVar2,*(undefined8 *)(unaff_x19 + 0x28),0);
        lVar3 = *(long *)(unaff_x19 + 0x38);
        if (lVar3 != 0) {
          lVar4 = *(long *)(lVar3 + 0x10);
          lVar5 = *(long *)PTR_DAT_08fae068;
          *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
          if (lVar4 != 0) {
            uVar1 = *(uint *)(lVar3 + 0x18);
            if (uVar1 < *(uint *)(lVar4 + 0x18)) {
              *(uint *)(lVar3 + 0x18) = uVar1 + 1;
              *(long *)(lVar4 + (long)(int)uVar1 * 8 + 0x20) = lVar2;
            }
            else {
              FUN_057d53ac(lVar3,lVar2,
                           *(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
            }
            *(int *)(unaff_x19 + 0x40) = *(int *)(unaff_x19 + 0x40) + 1;
            goto LAB_076d6610;
          }
        }
      }
    }
    else {
      lVar2 = FUN_057d50ec(lVar2,*(int *)(unaff_x19 + 0x40),*(undefined8 *)PTR_DAT_08fae078);
      *(int *)(unaff_x19 + 0x40) = *(int *)(unaff_x19 + 0x40) + 1;
      if (lVar2 != 0) {
LAB_076d6610:
        FUN_0854cb58(lVar2,1,0);
        FUN_085495f0(lVar2,0,0);
        FUN_085495f0(lVar2,1,0);
        UnityEngine_TextCore_LowLevel_FontEngine__TryAddGlyphToTexture_Internal_Injected(lVar2,0);
        FUN_085493a4(lVar2,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


