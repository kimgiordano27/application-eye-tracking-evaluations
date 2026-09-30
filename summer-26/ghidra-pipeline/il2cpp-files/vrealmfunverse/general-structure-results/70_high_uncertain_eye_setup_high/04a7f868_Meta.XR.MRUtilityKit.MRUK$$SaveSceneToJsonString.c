/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUK$$SaveSceneToJsonString
ENTRY_POINT: 04a7f868
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;telemetry_or_network_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


uint Meta_XR_MRUtilityKit_MRUK__SaveSceneToJsonString(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x19;
  long unaff_x21;
  int unaff_w22;
  uint unaff_w23;
  long *plVar9;
  long lVar10;
  int iVar11;
  
  lVar10 = *(long *)(unaff_x21 + 0x18);
  if (lVar10 == 0) {
LAB_04a7f9b0:
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  uVar5 = *(undefined8 *)(lVar10 + 0x18);
  iVar11 = 0;
  do {
    if ((uint)uVar5 <= unaff_w23) {
LAB_04a7f970:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cacc();
    }
    lVar1 = lVar10 + 0x20 + (ulong)unaff_w23 * 0x10;
    if (*(int *)(lVar10 + 0x20 + (ulong)unaff_w23 * 0x10) == unaff_w22) {
      plVar9 = *(long **)(unaff_x21 + 0x30);
      if (plVar9 == (long *)0x0) goto LAB_04a7f9b0;
      uVar5 = *(undefined8 *)(lVar1 + 8);
      lVar4 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x20);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_02b76218(lVar4);
      }
      lVar6 = *plVar9;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == lVar4) {
            puVar2 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_04a7f914;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar2 = (undefined8 *)FUN_02b7654c(plVar9,lVar4,0);
LAB_04a7f914:
      uVar7 = (*(code *)*puVar2)(plVar9,uVar5);
      if ((uVar7 & 1) != 0) {
        return unaff_w23;
      }
      uVar5 = *(undefined8 *)(lVar10 + 0x18);
    }
    if ((int)(uint)uVar5 <= iVar11) {
      thunk_FUN_02ba3594(PTR_DAT_0631cb60);
      uVar5 = thunk_FUN_02b79644();
      uVar3 = thunk_FUN_02ba3594(PTR_DAT_06322b90);
      FUN_04d7b3f4(uVar5,uVar3,0);
                    /* WARNING: Subroutine does not return */
      FUN_02b3c988(uVar5);
    }
    if ((uint)uVar5 <= unaff_w23) goto LAB_04a7f970;
    unaff_w23 = *(uint *)(lVar1 + 4);
    iVar11 = iVar11 + 1;
    if ((int)unaff_w23 < 0) {
      return 0xffffffff;
    }
  } while( true );
}


