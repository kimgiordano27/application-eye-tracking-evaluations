/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$ovrp_GetNodePositionValid
ENTRY_POINT: 0369fd78
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 75
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_13;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin_OVRP_1_38_0__ovrp_GetNodePositionValid(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  long in_x9;
  long lVar10;
  int *piVar11;
  long lVar12;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar13;
  
  piVar11 = (int *)(*(long *)(param_1 + 0xb0) + 8);
  do {
    if (*(long *)(piVar11 + -2) == param_3) {
      puVar6 = (undefined8 *)(param_1 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_0369fdb4;
    }
    in_x9 = in_x9 + -1;
    piVar11 = piVar11 + 4;
  } while (in_x9 != 0);
  puVar6 = (undefined8 *)FUN_01ecb238();
LAB_0369fdb4:
  uVar5 = (*(code *)*puVar6)();
  iVar2 = *(int *)(unaff_x20 + 0x80);
  lVar7 = *(long *)(unaff_x20 + 0x88);
  iVar1 = *(int *)(unaff_x20 + 0x90) + 1;
  iVar3 = 0;
  if (iVar2 != 0) {
    iVar3 = iVar1 / iVar2;
  }
  *(int *)(unaff_x20 + 0x90) = iVar1 - iVar3 * iVar2;
  *(undefined4 *)(unaff_x20 + 0x94) = uVar5;
  if (lVar7 != 0) {
    lVar10 = 0;
    do {
      uVar9 = (uint)lVar10;
      if ((int)*(uint *)(lVar7 + 0x18) <= (int)uVar9) {
        iVar2 = *(int *)(unaff_x20 + 0x80);
        iVar3 = *(int *)(unaff_x20 + 0x84);
        iVar1 = iVar2;
        if (iVar3 <= iVar2) {
          iVar1 = iVar3;
        }
        iVar4 = 0;
        if (-1 < iVar3) {
          iVar4 = iVar1;
        }
        *(int *)(unaff_x20 + 0x84) = iVar4;
        if (lVar7 != 0) {
          lVar10 = 0;
          iVar4 = (*(int *)(unaff_x20 + 0x90) + iVar2) - iVar4;
          iVar1 = 0;
          if (iVar2 != 0) {
            iVar1 = iVar4 / iVar2;
          }
          uVar9 = iVar4 - iVar1 * iVar2;
          goto LAB_0369fcdc;
        }
        break;
      }
      if (*(uint *)(lVar7 + 0x18) <= uVar9) goto LAB_0369fe48;
      lVar12 = *(long *)(unaff_x19 + 0x38);
      if (lVar12 == 0) break;
      if (*(uint *)(lVar12 + 0x18) <= uVar9) goto LAB_0369fe48;
      lVar7 = *(long *)(lVar7 + lVar10 * 8 + 0x20);
      if (lVar7 == 0) break;
      if (*(uint *)(lVar7 + 0x18) <= *(uint *)(unaff_x20 + 0x90)) goto LAB_0369fe48;
      lVar12 = lVar12 + lVar10 * 0x10;
      uVar13 = *(undefined8 *)(lVar12 + 0x20);
      lVar7 = lVar7 + (long)(int)*(uint *)(unaff_x20 + 0x90) * 0x10;
      lVar10 = lVar10 + 1;
      *(undefined8 *)(lVar7 + 0x28) = *(undefined8 *)(lVar12 + 0x28);
      *(undefined8 *)(lVar7 + 0x20) = uVar13;
      lVar7 = *(long *)(unaff_x20 + 0x88);
    } while (lVar7 != 0);
  }
  goto LAB_0369fe44;
  while( true ) {
    if (*(uint *)(lVar7 + 0x18) <= uVar9) goto LAB_0369fe48;
    lVar12 = *(long *)(unaff_x19 + 0x38);
    if (lVar12 == 0) break;
    if (*(uint *)(lVar12 + 0x18) <= uVar8) goto LAB_0369fe48;
    lVar7 = lVar7 + (long)(int)uVar9 * 0x10;
    uVar13 = *(undefined8 *)(lVar7 + 0x20);
    lVar12 = lVar12 + lVar10 * 0x10;
    lVar10 = lVar10 + 1;
    *(undefined8 *)(lVar12 + 0x28) = *(undefined8 *)(lVar7 + 0x28);
    *(undefined8 *)(lVar12 + 0x20) = uVar13;
    lVar7 = *(long *)(unaff_x20 + 0x88);
    if (lVar7 == 0) break;
LAB_0369fcdc:
    uVar8 = (uint)lVar10;
    if ((int)*(uint *)(lVar7 + 0x18) <= (int)uVar8) {
      return;
    }
    if (*(uint *)(lVar7 + 0x18) <= uVar8) {
LAB_0369fe48:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    lVar7 = *(long *)(lVar7 + lVar10 * 8 + 0x20);
    if (lVar7 == 0) break;
  }
LAB_0369fe44:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


