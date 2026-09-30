/*
FUNCTION_NAME: OVRPlugin$$get_systemRegion
ENTRY_POINT: 05d79084
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__get_systemRegion(void)

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
  long lVar10;
  long lVar11;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar12;
  
  puVar6 = (undefined8 *)FUN_032937ac();
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
          goto LAB_05d78fc0;
        }
        break;
      }
      if (*(uint *)(lVar7 + 0x18) <= uVar9) goto LAB_05d7912c;
      lVar11 = *(long *)(unaff_x19 + 0x48);
      if (lVar11 == 0) break;
      if (*(uint *)(lVar11 + 0x18) <= uVar9) goto LAB_05d7912c;
      lVar7 = *(long *)(lVar7 + lVar10 * 8 + 0x20);
      if (lVar7 == 0) break;
      if (*(uint *)(lVar7 + 0x18) <= *(uint *)(unaff_x20 + 0x90)) goto LAB_05d7912c;
      lVar11 = lVar11 + lVar10 * 0x10;
      uVar12 = *(undefined8 *)(lVar11 + 0x20);
      lVar7 = lVar7 + (long)(int)*(uint *)(unaff_x20 + 0x90) * 0x10;
      lVar10 = lVar10 + 1;
      *(undefined8 *)(lVar7 + 0x28) = *(undefined8 *)(lVar11 + 0x28);
      *(undefined8 *)(lVar7 + 0x20) = uVar12;
      lVar7 = *(long *)(unaff_x20 + 0x88);
    } while (lVar7 != 0);
  }
  goto LAB_05d79128;
  while( true ) {
    if (*(uint *)(lVar7 + 0x18) <= uVar9) goto LAB_05d7912c;
    lVar11 = *(long *)(unaff_x19 + 0x48);
    if (lVar11 == 0) break;
    if (*(uint *)(lVar11 + 0x18) <= uVar8) goto LAB_05d7912c;
    lVar7 = lVar7 + (long)(int)uVar9 * 0x10;
    uVar12 = *(undefined8 *)(lVar7 + 0x20);
    lVar11 = lVar11 + lVar10 * 0x10;
    lVar10 = lVar10 + 1;
    *(undefined8 *)(lVar11 + 0x28) = *(undefined8 *)(lVar7 + 0x28);
    *(undefined8 *)(lVar11 + 0x20) = uVar12;
    lVar7 = *(long *)(unaff_x20 + 0x88);
    if (lVar7 == 0) break;
LAB_05d78fc0:
    uVar8 = (uint)lVar10;
    if ((int)*(uint *)(lVar7 + 0x18) <= (int)uVar8) {
      return;
    }
    if (*(uint *)(lVar7 + 0x18) <= uVar8) {
LAB_05d7912c:
                    /* WARNING: Subroutine does not return */
      Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
    }
    lVar7 = *(long *)(lVar7 + lVar10 * 8 + 0x20);
    if (lVar7 == 0) break;
  }
LAB_05d79128:
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


