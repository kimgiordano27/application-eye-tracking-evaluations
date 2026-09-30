/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs.MrukOnSceneAnchorUpdated$$EndInvoke
ENTRY_POINT: 04a6dc34
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 Meta_XR_MRUtilityKit_MRUKNativeFuncs_MrukOnSceneAnchorUpdated__EndInvoke(void)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x19;
  long unaff_x20;
  int unaff_w22;
  long *unaff_x23;
  undefined8 uVar9;
  long unaff_x25;
  ulong unaff_x26;
  int unaff_w27;
  long unaff_x28;
  long unaff_x29;
  
  do {
    if (unaff_x23 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    uVar9 = *(undefined8 *)(unaff_x29 + 8);
    lVar4 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x20);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02b76218(lVar4);
    }
    lVar6 = *unaff_x23;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar4) {
          puVar2 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_04a6dca8;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar2 = (undefined8 *)FUN_02b7654c(unaff_x23,lVar4,0);
LAB_04a6dca8:
    uVar7 = (*(code *)*puVar2)(unaff_x23,uVar9);
    if ((uVar7 & 1) != 0) {
      return 1;
    }
    do {
      uVar5 = (uint)*(undefined8 *)(unaff_x25 + 0x18);
      if ((int)uVar5 <= unaff_w27) {
        thunk_FUN_02ba3594(PTR_DAT_0631cb60);
        uVar9 = thunk_FUN_02b79644();
        uVar3 = thunk_FUN_02ba3594(PTR_DAT_06322b90);
        FUN_04d7b3f4(uVar9,uVar3,0);
                    /* WARNING: Subroutine does not return */
        FUN_02b3c988(uVar9);
      }
      if (uVar5 <= (uint)unaff_x26) {
LAB_04a6dd08:
                    /* WARNING: Subroutine does not return */
        FUN_02b3cacc();
      }
      uVar1 = *(uint *)(unaff_x29 + 4);
      unaff_x26 = (ulong)uVar1;
      unaff_w27 = unaff_w27 + 1;
      if ((int)uVar1 < 0) {
        return 0;
      }
      if (uVar5 <= uVar1) goto LAB_04a6dd08;
      unaff_x29 = unaff_x28 + unaff_x26 * 0x10;
    } while (*(int *)(unaff_x28 + unaff_x26 * 0x10) != unaff_w22);
    unaff_x23 = *(long **)(unaff_x20 + 0x30);
  } while( true );
}


