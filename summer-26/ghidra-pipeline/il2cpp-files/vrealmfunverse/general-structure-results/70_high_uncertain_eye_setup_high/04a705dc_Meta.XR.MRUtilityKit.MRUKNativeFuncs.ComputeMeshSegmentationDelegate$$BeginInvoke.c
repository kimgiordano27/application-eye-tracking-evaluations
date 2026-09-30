/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs.ComputeMeshSegmentationDelegate$$BeginInvoke
ENTRY_POINT: 04a705dc
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


ulong Meta_XR_MRUtilityKit_MRUKNativeFuncs_ComputeMeshSegmentationDelegate__BeginInvoke
                (long param_1,int param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long unaff_x19;
  long unaff_x21;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  int iVar14;
  
  if (param_1 == 0) {
LAB_04a70750:
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  uVar2 = *(uint *)(param_1 + 0x18);
  iVar14 = 0;
  if (uVar2 != 0) {
    iVar14 = param_2 / (int)uVar2;
  }
  uVar3 = param_2 - iVar14 * uVar2;
  if (uVar2 <= uVar3) {
LAB_04a70710:
                    /* WARNING: Subroutine does not return */
    FUN_02b3cacc();
  }
  uVar2 = *(int *)(param_1 + (ulong)uVar3 * 4 + 0x20) - 1;
  if (-1 < (int)uVar2) {
    lVar13 = *(long *)(unaff_x21 + 0x18);
    if (lVar13 == 0) goto LAB_04a70750;
    uVar7 = *(undefined8 *)(lVar13 + 0x18);
    iVar14 = 0;
    do {
      uVar11 = (ulong)uVar2;
      if ((uint)uVar7 <= uVar2) goto LAB_04a70710;
      lVar1 = lVar13 + 0x20 + uVar11 * 0x10;
      if (*(int *)(lVar13 + 0x20 + uVar11 * 0x10) == param_2) {
        plVar12 = *(long **)(unaff_x21 + 0x30);
        if (plVar12 == (long *)0x0) goto LAB_04a70750;
        uVar7 = *(undefined8 *)(lVar1 + 8);
        lVar6 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x20);
        if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_02b76218(lVar6);
        }
        lVar8 = *plVar12;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == lVar6) {
              puVar4 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_04a706b4;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar4 = (undefined8 *)FUN_02b7654c(plVar12,lVar6,0);
LAB_04a706b4:
        uVar9 = (*(code *)*puVar4)(plVar12,uVar7);
        if ((uVar9 & 1) != 0) {
          return uVar11;
        }
        uVar7 = *(undefined8 *)(lVar13 + 0x18);
      }
      if ((int)(uint)uVar7 <= iVar14) {
        thunk_FUN_02ba3594(PTR_DAT_0631cb60);
        uVar7 = thunk_FUN_02b79644();
        uVar5 = thunk_FUN_02ba3594(PTR_DAT_06322b90);
        FUN_04d7b3f4(uVar7,uVar5,0);
                    /* WARNING: Subroutine does not return */
        FUN_02b3c988(uVar7);
      }
      if ((uint)uVar7 <= uVar2) goto LAB_04a70710;
      uVar2 = *(uint *)(lVar1 + 4);
      iVar14 = iVar14 + 1;
    } while (-1 < (int)uVar2);
  }
  return 0xffffffff;
}


