/*
FUNCTION_NAME: Meta.XR.EnvironmentDepthRaycaster$$WorldPosAtDepthTexCoord
ENTRY_POINT: 04a5ce6c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_EnvironmentDepthRaycaster__WorldPosAtDepthTexCoord(undefined8 param_1)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  long unaff_x19;
  int unaff_w20;
  long unaff_x21;
  undefined8 uVar11;
  
  lVar4 = FUN_02b3c908(param_1,unaff_w20);
  iVar8 = *(int *)(unaff_x19 + 0x24);
  if (iVar8 < 1) {
    uVar5 = 0;
  }
  else {
    uVar6 = 0;
    uVar5 = 0;
    lVar7 = 0x20;
    do {
      lVar10 = *(long *)(unaff_x19 + 0x18);
      if (lVar10 == 0) {
LAB_04a5cfa4:
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      if (*(uint *)(lVar10 + 0x18) <= uVar6) goto LAB_04a5cfa0;
      if (-1 < *(int *)(lVar10 + lVar7)) {
        if (unaff_x21 == 0) goto LAB_04a5cfa4;
        if (*(uint *)(unaff_x21 + 0x18) <= uVar5) {
LAB_04a5cfa0:
                    /* WARNING: Subroutine does not return */
          FUN_02b3cacc();
        }
        lVar9 = (long)(int)uVar5;
        uVar11 = *(undefined8 *)(lVar10 + lVar7);
        lVar1 = unaff_x21 + lVar9 * 0x10;
        *(undefined8 *)(lVar1 + 0x28) = ((undefined8 *)(lVar10 + lVar7))[1];
        *(undefined8 *)(lVar1 + 0x20) = uVar11;
        if (*(uint *)(unaff_x21 + 0x18) <= uVar5) goto LAB_04a5cfa0;
        if (lVar4 == 0) goto LAB_04a5cfa4;
        iVar3 = (int)uVar11;
        iVar8 = 0;
        if (unaff_w20 != 0) {
          iVar8 = iVar3 / unaff_w20;
        }
        uVar2 = iVar3 - iVar8 * unaff_w20;
        if (*(uint *)(lVar4 + 0x18) <= uVar2) goto LAB_04a5cfa0;
        lVar10 = lVar4 + (long)(int)uVar2 * 4;
        uVar5 = uVar5 + 1;
        *(int *)(unaff_x21 + lVar9 * 0x10 + 0x24) = *(int *)(lVar10 + 0x20) + -1;
        *(uint *)(lVar10 + 0x20) = uVar5;
        iVar8 = *(int *)(unaff_x19 + 0x24);
      }
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 0x10;
    } while ((long)uVar6 < (long)iVar8);
  }
  *(uint *)(unaff_x19 + 0x24) = uVar5;
  *(long *)(unaff_x19 + 0x18) = unaff_x21;
  thunk_FUN_02bb0e9c();
  *(long *)(unaff_x19 + 0x10) = lVar4;
  thunk_FUN_02bb0e9c((long *)(unaff_x19 + 0x10),lVar4);
  *(undefined4 *)(unaff_x19 + 0x28) = 0xffffffff;
  return;
}


