/*
FUNCTION_NAME: OVRPlugin.OVRP_1_84_0$$ovrp_QplMarkerPointCached
ENTRY_POINT: 04f87e2c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_84_0__ovrp_QplMarkerPointCached(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar10;
  
  lVar7 = 0;
  do {
    uVar6 = (uint)lVar7;
    if ((int)*(uint *)(param_1 + 0x18) <= (int)uVar6) {
      iVar1 = *(int *)(unaff_x20 + 0x80);
      iVar2 = *(int *)(unaff_x20 + 0x84);
      iVar3 = iVar2;
      if (iVar1 <= iVar2) {
        iVar3 = iVar1;
      }
      iVar4 = 0;
      if (-1 < iVar2) {
        iVar4 = iVar3;
      }
      *(int *)(unaff_x20 + 0x84) = iVar4;
      if (param_1 != 0) {
        iVar4 = (*(int *)(unaff_x20 + 0x90) + iVar1) - iVar4;
        iVar3 = 0;
        if (iVar1 != 0) {
          iVar3 = iVar4 / iVar1;
        }
        uVar6 = iVar4 - iVar3 * iVar1;
        lVar7 = 0;
        goto LAB_04f87d28;
      }
      break;
    }
    if (*(uint *)(param_1 + 0x18) <= uVar6) goto LAB_04f87e94;
    lVar8 = *(long *)(unaff_x19 + 0x48);
    if (lVar8 == 0) break;
    if (*(uint *)(lVar8 + 0x18) <= uVar6) goto LAB_04f87e94;
    lVar5 = *(long *)(param_1 + lVar7 * 8 + 0x20);
    if (lVar5 == 0) break;
    if (*(uint *)(lVar5 + 0x18) <= *(uint *)(unaff_x20 + 0x90)) goto LAB_04f87e94;
    lVar8 = lVar8 + lVar7 * 0x10;
    lVar5 = lVar5 + (long)(int)*(uint *)(unaff_x20 + 0x90) * 0x10;
    lVar7 = lVar7 + 1;
    uVar10 = *(undefined8 *)(lVar8 + 0x20);
    *(undefined8 *)(lVar5 + 0x28) = *(undefined8 *)(lVar8 + 0x28);
    *(undefined8 *)(lVar5 + 0x20) = uVar10;
    param_1 = *(long *)(unaff_x20 + 0x88);
  } while (param_1 != 0);
  goto LAB_04f87e90;
  while( true ) {
    if (*(uint *)(lVar8 + 0x18) <= uVar6) goto LAB_04f87e94;
    lVar5 = *(long *)(unaff_x19 + 0x48);
    if (lVar5 == 0) break;
    if (*(uint *)(lVar5 + 0x18) <= uVar9) goto LAB_04f87e94;
    lVar8 = lVar8 + (long)(int)uVar6 * 0x10;
    uVar10 = *(undefined8 *)(lVar8 + 0x20);
    lVar5 = lVar5 + lVar7 * 0x10;
    lVar7 = lVar7 + 1;
    *(undefined8 *)(lVar5 + 0x28) = *(undefined8 *)(lVar8 + 0x28);
    *(undefined8 *)(lVar5 + 0x20) = uVar10;
    param_1 = *(long *)(unaff_x20 + 0x88);
    if (param_1 == 0) break;
LAB_04f87d28:
    uVar9 = (uint)lVar7;
    if ((int)*(uint *)(param_1 + 0x18) <= (int)uVar9) {
      return;
    }
    if (*(uint *)(param_1 + 0x18) <= uVar9) {
LAB_04f87e94:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cacc();
    }
    lVar8 = *(long *)(param_1 + lVar7 * 8 + 0x20);
    if (lVar8 == 0) break;
  }
LAB_04f87e90:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


