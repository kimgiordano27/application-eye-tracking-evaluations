/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.ImmersiveSceneDebugger$$Awake
ENTRY_POINT: 04a7414c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


ulong Meta_XR_MRUtilityKit_ImmersiveSceneDebugger__Awake
                (long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long unaff_x19;
  ulong uVar13;
  long *plVar14;
  int iVar15;
  
  iVar4 = FUN_04a74a64(param_2,param_3,*(undefined8 *)(*(long *)(param_1 + 0xc0) + 0xb0));
  lVar8 = *(long *)(param_2 + 0x10);
  if (lVar8 == 0) {
LAB_04a742d4:
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  uVar2 = *(uint *)(lVar8 + 0x18);
  iVar15 = 0;
  if (uVar2 != 0) {
    iVar15 = iVar4 / (int)uVar2;
  }
  uVar3 = iVar4 - iVar15 * uVar2;
  if (uVar2 <= uVar3) {
LAB_04a74294:
                    /* WARNING: Subroutine does not return */
    FUN_02b3cacc();
  }
  uVar2 = *(int *)(lVar8 + (ulong)uVar3 * 4 + 0x20) - 1;
  if (-1 < (int)uVar2) {
    lVar8 = *(long *)(param_2 + 0x18);
    if (lVar8 == 0) goto LAB_04a742d4;
    uVar9 = *(undefined8 *)(lVar8 + 0x18);
    iVar15 = 0;
    do {
      uVar13 = (ulong)uVar2;
      if ((uint)uVar9 <= uVar2) goto LAB_04a74294;
      lVar1 = lVar8 + 0x20 + uVar13 * 0x10;
      if (*(int *)(lVar8 + 0x20 + uVar13 * 0x10) == iVar4) {
        plVar14 = *(long **)(param_2 + 0x30);
        if (plVar14 == (long *)0x0) goto LAB_04a742d4;
        uVar9 = *(undefined8 *)(lVar1 + 8);
        lVar7 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x20);
        if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_02b76218(lVar7);
        }
        lVar10 = *plVar14;
        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == lVar7) {
              puVar5 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_04a74238;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar5 = (undefined8 *)FUN_02b7654c(plVar14,lVar7,0);
LAB_04a74238:
        uVar11 = (*(code *)*puVar5)(plVar14,uVar9);
        if ((uVar11 & 1) != 0) {
          return uVar13;
        }
        uVar9 = *(undefined8 *)(lVar8 + 0x18);
      }
      if ((int)(uint)uVar9 <= iVar15) {
        thunk_FUN_02ba3594(PTR_DAT_0631cb60);
        uVar9 = thunk_FUN_02b79644();
        uVar6 = thunk_FUN_02ba3594(PTR_DAT_06322b90);
        FUN_04d7b3f4(uVar9,uVar6,0);
                    /* WARNING: Subroutine does not return */
        FUN_02b3c988(uVar9);
      }
      if ((uint)uVar9 <= uVar2) goto LAB_04a74294;
      uVar2 = *(uint *)(lVar1 + 4);
      iVar15 = iVar15 + 1;
    } while (-1 < (int)uVar2);
  }
  return 0xffffffff;
}


