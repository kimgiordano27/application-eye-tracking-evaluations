/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.Utilities$$GetPlaneRectFromAnchorData
ENTRY_POINT: 06e03060
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x06e03130) */

void Meta_XR_MRUtilityKit_Utilities__GetPlaneRectFromAnchorData(long param_1)

{
  int iVar1;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  undefined8 uVar2;
  long lVar3;
  long unaff_x19;
  int unaff_w20;
  long *plVar4;
  undefined8 uVar5;
  long *unaff_x23;
  int unaff_w24;
  long *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  undefined8 in_stack_00000008;
  
  while( true ) {
    *(long *)(unaff_x19 + 0xa0) = param_1 + unaff_w24;
    if ((bool)in_ZR || in_NG != in_OV) {
      plVar4 = (long *)(unaff_x19 + 0xb8);
      if (*plVar4 == 0) {
        uVar5 = *(undefined8 *)(unaff_x19 + 0x18);
        uVar2 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e69e98);
        FUN_07064478();
        if (*(int *)(*(long *)PTR_DAT_08e82448 + 0xe0) == 0) {
          thunk_FUN_03cd7500();
        }
        lVar3 = FUN_06dffc84(uVar5,uVar2);
        *plVar4 = lVar3;
        thunk_FUN_03d233cc(plVar4,lVar3);
      }
      return;
    }
    lVar3 = *unaff_x23;
    if (lVar3 == 0) {
      lVar3 = *unaff_x27;
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
        lVar3 = *unaff_x27;
      }
      if (**(long **)(lVar3 + 0xb8) == 0) break;
      uVar2 = FUN_057eac38(**(long **)(lVar3 + 0xb8),*unaff_x28);
      *(undefined8 *)(unaff_x19 + 0x78) = uVar2;
      thunk_FUN_03d233cc();
      uVar2 = *(undefined8 *)(unaff_x19 + 0x70);
      in_stack_00000008._4_1_ = '\0';
      FUN_0716f8f0(uVar2,(long)&stack0x00000008 + 4,0);
      if (*(long *)(unaff_x19 + 0x70) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      FUN_05886828(*(long *)(unaff_x19 + 0x70),*unaff_x23,*unaff_x29);
      if (in_stack_00000008._4_1_ != '\0') {
        thunk_FUN_03cdf404(uVar2,0);
      }
      lVar3 = *unaff_x23;
      if (lVar3 == 0) break;
    }
    iVar1 = *(int *)(lVar3 + 0x18) - *(int *)(unaff_x19 + 0x80);
    unaff_w24 = unaff_w20;
    if (iVar1 <= unaff_w20) {
      unaff_w24 = iVar1;
    }
    FUN_0712485c();
    iVar1 = unaff_w24 + *(int *)(unaff_x19 + 0x80);
    *(int *)(unaff_x19 + 0x80) = iVar1;
    if (*(long *)(unaff_x19 + 0x78) == 0) break;
    unaff_w20 = unaff_w20 - unaff_w24;
    if (*(int *)(*(long *)(unaff_x19 + 0x78) + 0x18) <= iVar1) {
      *(undefined4 *)(unaff_x19 + 0x80) = 0;
      *(undefined8 *)(unaff_x19 + 0x78) = 0;
      thunk_FUN_03d233cc();
    }
    param_1 = *(long *)(unaff_x19 + 0xa0);
    in_NG = unaff_w20 < 0;
    in_ZR = unaff_w20 == 0;
    in_OV = '\0';
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


