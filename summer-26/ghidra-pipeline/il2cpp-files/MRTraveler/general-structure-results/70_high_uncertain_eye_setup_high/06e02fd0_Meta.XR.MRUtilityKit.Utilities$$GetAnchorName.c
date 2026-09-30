/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.Utilities$$GetAnchorName
ENTRY_POINT: 06e02fd0
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x06e03130) */

void Meta_XR_MRUtilityKit_Utilities__GetAnchorName(void)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x19;
  int unaff_w20;
  long *plVar5;
  undefined8 uVar6;
  long *unaff_x23;
  undefined8 unaff_x24;
  long *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  undefined8 in_stack_00000008;
  
  while( true ) {
    if (in_stack_00000008._4_1_ != '\0') {
      thunk_FUN_03cdf404(unaff_x24,0);
    }
    lVar4 = *unaff_x23;
    if (lVar4 == 0) break;
    do {
      iVar2 = *(int *)(lVar4 + 0x18) - *(int *)(unaff_x19 + 0x80);
      iVar1 = unaff_w20;
      if (iVar2 <= unaff_w20) {
        iVar1 = iVar2;
      }
      FUN_0712485c();
      iVar2 = iVar1 + *(int *)(unaff_x19 + 0x80);
      *(int *)(unaff_x19 + 0x80) = iVar2;
      if (*(long *)(unaff_x19 + 0x78) == 0) goto LAB_06e0312c;
      unaff_w20 = unaff_w20 - iVar1;
      if (*(int *)(*(long *)(unaff_x19 + 0x78) + 0x18) <= iVar2) {
        *(undefined4 *)(unaff_x19 + 0x80) = 0;
        *(undefined8 *)(unaff_x19 + 0x78) = 0;
        thunk_FUN_03d233cc();
      }
      *(long *)(unaff_x19 + 0xa0) = *(long *)(unaff_x19 + 0xa0) + (long)iVar1;
      if (unaff_w20 < 1) {
        plVar5 = (long *)(unaff_x19 + 0xb8);
        if (*plVar5 == 0) {
          uVar6 = *(undefined8 *)(unaff_x19 + 0x18);
          uVar3 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e69e98);
          FUN_07064478();
          if (*(int *)(*(long *)PTR_DAT_08e82448 + 0xe0) == 0) {
            thunk_FUN_03cd7500();
          }
          lVar4 = FUN_06dffc84(uVar6,uVar3);
          *plVar5 = lVar4;
          thunk_FUN_03d233cc(plVar5,lVar4);
        }
        return;
      }
      lVar4 = *unaff_x23;
    } while (lVar4 != 0);
    lVar4 = *unaff_x27;
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
      lVar4 = *unaff_x27;
    }
    if (**(long **)(lVar4 + 0xb8) == 0) break;
    uVar3 = FUN_057eac38(**(long **)(lVar4 + 0xb8),*unaff_x28);
    *(undefined8 *)(unaff_x19 + 0x78) = uVar3;
    thunk_FUN_03d233cc();
    unaff_x24 = *(undefined8 *)(unaff_x19 + 0x70);
    in_stack_00000008._4_1_ = '\0';
    FUN_0716f8f0(unaff_x24,(long)&stack0x00000008 + 4,0);
    if (*(long *)(unaff_x19 + 0x70) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    FUN_05886828(*(long *)(unaff_x19 + 0x70),*unaff_x23,*unaff_x29);
  }
LAB_06e0312c:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


