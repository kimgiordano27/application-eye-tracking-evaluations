/*
FUNCTION_NAME: OVRPlugin.OVRP_1_39_0$$.cctor
ENTRY_POINT: 0316ffb8
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_39_0___cctor(long param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  uint uVar7;
  long in_x9;
  uint in_w10;
  long lVar8;
  long lVar9;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar10;
  
  do {
    if (in_w10 <= (uint)in_x9) goto LAB_03170010;
    lVar8 = *(long *)(unaff_x19 + 0x38);
    if (lVar8 == 0) goto LAB_0317000c;
    if (*(uint *)(lVar8 + 0x18) <= (uint)in_x9) goto LAB_03170010;
    lVar6 = *(long *)(param_1 + in_x9 * 8 + 0x20);
    if (lVar6 == 0) goto LAB_0317000c;
    if (*(uint *)(lVar6 + 0x18) <= *(uint *)(unaff_x20 + 0x90)) goto LAB_03170010;
    lVar8 = lVar8 + in_x9 * 0x10;
    uVar10 = *(undefined8 *)(lVar8 + 0x20);
    lVar6 = lVar6 + (long)(int)*(uint *)(unaff_x20 + 0x90) * 0x10;
    in_x9 = in_x9 + 1;
    *(undefined8 *)(lVar6 + 0x28) = *(undefined8 *)(lVar8 + 0x28);
    *(undefined8 *)(lVar6 + 0x20) = uVar10;
    param_1 = *(long *)(unaff_x20 + 0x88);
    if (param_1 == 0) goto LAB_0317000c;
    in_w10 = *(uint *)(param_1 + 0x18);
  } while ((int)in_x9 < (int)in_w10);
  iVar1 = *(int *)(unaff_x20 + 0x80);
  iVar2 = *(int *)(unaff_x20 + 0x84);
  iVar4 = iVar1;
  if (iVar2 <= iVar1) {
    iVar4 = iVar2;
  }
  iVar5 = 0;
  if (-1 < iVar2) {
    iVar5 = iVar4;
  }
  *(int *)(unaff_x20 + 0x84) = iVar5;
  if (param_1 != 0) {
    lVar8 = 0;
    iVar5 = (*(int *)(unaff_x20 + 0x90) + iVar1) - iVar5;
    iVar4 = 0;
    if (iVar1 != 0) {
      iVar4 = iVar5 / iVar1;
    }
    uVar3 = iVar5 - iVar4 * iVar1;
    do {
      uVar7 = (uint)lVar8;
      if ((int)*(uint *)(param_1 + 0x18) <= (int)uVar7) {
        return;
      }
      if (*(uint *)(param_1 + 0x18) <= uVar7) {
LAB_03170010:
                    /* WARNING: Subroutine does not return */
        FUN_01b48180();
      }
      lVar6 = *(long *)(param_1 + lVar8 * 8 + 0x20);
      if (lVar6 == 0) break;
      if (*(uint *)(lVar6 + 0x18) <= uVar3) goto LAB_03170010;
      lVar9 = *(long *)(unaff_x19 + 0x38);
      if (lVar9 == 0) break;
      if (*(uint *)(lVar9 + 0x18) <= uVar7) goto LAB_03170010;
      lVar6 = lVar6 + (long)(int)uVar3 * 0x10;
      uVar10 = *(undefined8 *)(lVar6 + 0x20);
      lVar9 = lVar9 + lVar8 * 0x10;
      lVar8 = lVar8 + 1;
      *(undefined8 *)(lVar9 + 0x28) = *(undefined8 *)(lVar6 + 0x28);
      *(undefined8 *)(lVar9 + 0x20) = uVar10;
      param_1 = *(long *)(unaff_x20 + 0x88);
    } while (param_1 != 0);
  }
LAB_0317000c:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


