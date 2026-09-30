/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUK$$SaveSceneToJsonSharedLib
ENTRY_POINT: 04a7f874
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


uint Meta_XR_MRUtilityKit_MRUK__SaveSceneToJsonSharedLib(undefined8 param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  long unaff_x21;
  int unaff_w22;
  uint unaff_w23;
  long *plVar8;
  undefined8 uVar9;
  long unaff_x26;
  int iVar10;
  
  iVar10 = 0;
  while (unaff_w23 < (uint)param_1) {
    lVar1 = unaff_x26 + 0x20 + (ulong)unaff_w23 * 0x10;
    if (*(int *)(unaff_x26 + 0x20 + (ulong)unaff_w23 * 0x10) == unaff_w22) {
      plVar8 = *(long **)(unaff_x21 + 0x30);
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      uVar9 = *(undefined8 *)(lVar1 + 8);
      lVar4 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x20);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_02b76218(lVar4);
      }
      lVar5 = *plVar8;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == lVar4) {
            puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_04a7f914;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar2 = (undefined8 *)FUN_02b7654c(plVar8,lVar4,0);
LAB_04a7f914:
      uVar6 = (*(code *)*puVar2)(plVar8,uVar9);
      if ((uVar6 & 1) != 0) {
        return unaff_w23;
      }
      param_1 = *(undefined8 *)(unaff_x26 + 0x18);
    }
    if ((int)(uint)param_1 <= iVar10) {
      thunk_FUN_02ba3594(PTR_DAT_0631cb60);
      uVar9 = thunk_FUN_02b79644();
      uVar3 = thunk_FUN_02ba3594(PTR_DAT_06322b90);
      FUN_04d7b3f4(uVar9,uVar3,0);
                    /* WARNING: Subroutine does not return */
      FUN_02b3c988(uVar9);
    }
    if ((uint)param_1 <= unaff_w23) break;
    unaff_w23 = *(uint *)(lVar1 + 4);
    iVar10 = iVar10 + 1;
    if ((int)unaff_w23 < 0) {
      return 0xffffffff;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cacc();
}


