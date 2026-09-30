/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$.cctor
ENTRY_POINT: 0369fdfc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_38_0___cctor(long param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  long in_x9;
  long in_x10;
  long lVar9;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar10;
  
  while (in_x10 != 0) {
    if (*(uint *)(in_x10 + 0x18) <= (uint)in_x9) goto LAB_0369fe48;
    lVar7 = *(long *)(param_1 + in_x9 * 8 + 0x20);
    if (lVar7 == 0) break;
    if (*(uint *)(lVar7 + 0x18) <= *(uint *)(unaff_x20 + 0x90)) goto LAB_0369fe48;
    lVar6 = in_x10 + in_x9 * 0x10;
    uVar10 = *(undefined8 *)(lVar6 + 0x20);
    lVar7 = lVar7 + (long)(int)*(uint *)(unaff_x20 + 0x90) * 0x10;
    in_x9 = in_x9 + 1;
    *(undefined8 *)(lVar7 + 0x28) = *(undefined8 *)(lVar6 + 0x28);
    *(undefined8 *)(lVar7 + 0x20) = uVar10;
    param_1 = *(long *)(unaff_x20 + 0x88);
    if (param_1 == 0) break;
    if ((int)*(uint *)(param_1 + 0x18) <= (int)(uint)in_x9) {
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
        lVar7 = 0;
        iVar5 = (*(int *)(unaff_x20 + 0x90) + iVar1) - iVar5;
        iVar4 = 0;
        if (iVar1 != 0) {
          iVar4 = iVar5 / iVar1;
        }
        uVar3 = iVar5 - iVar4 * iVar1;
        goto LAB_0369fcdc;
      }
      break;
    }
    if (*(uint *)(param_1 + 0x18) <= (uint)in_x9) goto LAB_0369fe48;
    in_x10 = *(long *)(unaff_x19 + 0x38);
  }
  goto LAB_0369fe44;
  while( true ) {
    if (*(uint *)(lVar6 + 0x18) <= uVar3) goto LAB_0369fe48;
    lVar9 = *(long *)(unaff_x19 + 0x38);
    if (lVar9 == 0) break;
    if (*(uint *)(lVar9 + 0x18) <= uVar8) goto LAB_0369fe48;
    lVar6 = lVar6 + (long)(int)uVar3 * 0x10;
    uVar10 = *(undefined8 *)(lVar6 + 0x20);
    lVar9 = lVar9 + lVar7 * 0x10;
    lVar7 = lVar7 + 1;
    *(undefined8 *)(lVar9 + 0x28) = *(undefined8 *)(lVar6 + 0x28);
    *(undefined8 *)(lVar9 + 0x20) = uVar10;
    param_1 = *(long *)(unaff_x20 + 0x88);
    if (param_1 == 0) break;
LAB_0369fcdc:
    uVar8 = (uint)lVar7;
    if ((int)*(uint *)(param_1 + 0x18) <= (int)uVar8) {
      return;
    }
    if (*(uint *)(param_1 + 0x18) <= uVar8) {
LAB_0369fe48:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    lVar6 = *(long *)(param_1 + lVar7 * 8 + 0x20);
    if (lVar6 == 0) break;
  }
LAB_0369fe44:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


