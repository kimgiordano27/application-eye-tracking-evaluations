/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Controller$$RefreshLayoutPostChildren
ENTRY_POINT: 0728f048
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 104
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_15;paired_field_refs_with_eye_source;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Controller__RefreshLayoutPostChildren
               (long param_1,long param_2)

{
  long *plVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long in_x9;
  long lVar6;
  int iVar7;
  undefined8 uVar8;
  long lVar9;
  int unaff_w19;
  long unaff_x20;
  int unaff_w21;
  long *unaff_x22;
  long *unaff_x23;
  long lVar10;
  uint uVar11;
  float fVar12;
  
  lVar6 = param_1;
  while (lVar6 != 0) {
    param_1 = *(long *)(param_1 + 0x18);
    if (param_1 == *(long *)(in_x9 + 0x10)) {
      lVar6 = *(long *)(in_x9 + 0x18);
      if (lVar6 != 0) {
        uVar11 = 0;
        goto LAB_0728f0e0;
      }
      break;
    }
    if (param_1 == 0) break;
    uVar11 = *(uint *)(param_1 + 0x40);
    lVar6 = in_x9;
    if (uVar11 != 0xffffffff) {
      lVar6 = *unaff_x23;
      if (lVar6 == 0) break;
      if (*(uint *)(lVar6 + 0x18) <= uVar11) {
LAB_0728f278:
                    /* WARNING: Subroutine does not return */
        FUN_04077838();
      }
      lVar6 = lVar6 + (long)(int)uVar11 * 0x10;
      uVar8 = *(undefined8 *)(param_1 + 0x28);
      *(undefined4 *)(lVar6 + 0x28) = *(undefined4 *)(param_1 + 0x30);
      *(undefined8 *)(lVar6 + 0x20) = uVar8;
      lVar6 = *unaff_x23;
      if (lVar6 == 0) break;
      if (*(uint *)(lVar6 + 0x18) <= *(uint *)(param_1 + 0x40)) goto LAB_0728f278;
      in_x9 = *(long *)(unaff_x20 + 0x18);
      *(undefined4 *)(lVar6 + (long)(int)*(uint *)(param_1 + 0x40) * 0x10 + 0x2c) =
           *(undefined4 *)(param_1 + 0x44);
      lVar6 = in_x9;
    }
  }
  goto LAB_0728f254;
LAB_0728f0e0:
  do {
    lVar6 = *(long *)(lVar6 + 0x18);
    if (lVar6 == *(long *)(in_x9 + 0x18)) {
      return;
    }
    if (lVar6 == 0) break;
    if (*(char *)(lVar6 + 0x35) != '\0') {
      if (*(char *)(unaff_x20 + 0xa0) != '\0') {
        fVar12 = (float)FUN_0728b548(lVar6);
        param_2 = *(long *)PTR_DAT_09285ae0;
        if (*(int *)(param_2 + 0xe4) == 0) {
          param_2 = thunk_FUN_040d65a8();
        }
        if (ABS(fVar12) < 1.4013e-45) goto LAB_0728f24c;
      }
      lVar10 = *(long *)(lVar6 + 0x20);
      lVar9 = lVar10;
      iVar2 = 0;
      do {
        iVar7 = iVar2;
        if (((lVar9 == 0) || (plVar1 = (long *)(lVar9 + 0x40), *plVar1 == 0)) ||
           (lVar5 = *unaff_x22, lVar5 == 0)) goto LAB_0728f254;
        uVar4 = *(uint *)(lVar5 + 0x18);
        if (uVar4 <= uVar11 + iVar7) goto LAB_0728f278;
        lVar9 = *(long *)(lVar9 + 0x38);
        iVar2 = iVar7 + 1;
        *(undefined4 *)(lVar5 + (long)(int)(uVar11 + iVar7) * 4 + 0x20) =
             *(undefined4 *)(*plVar1 + 0x40);
      } while (lVar9 != lVar10);
      uVar11 = uVar11 + iVar2;
      if (iVar2 < unaff_w21) {
        iVar7 = (unaff_w21 + -1) - iVar7;
        do {
          if (uVar4 <= uVar11) goto LAB_0728f278;
          lVar9 = (long)(int)uVar11;
          uVar11 = uVar11 + 1;
          iVar7 = iVar7 + -1;
          *(undefined4 *)(lVar5 + lVar9 * 4 + 0x20) = 0xffffffff;
        } while (iVar7 != 0);
      }
      if (unaff_w19 == 1) {
        do {
          lVar9 = *unaff_x22;
          param_2 = FUN_0728ee28(param_2,lVar10);
          if (lVar9 == 0) goto LAB_0728f254;
          if (*(uint *)(lVar9 + 0x18) <= uVar11) goto LAB_0728f278;
          *(int *)(lVar9 + (long)(int)uVar11 * 4 + 0x20) = (int)param_2;
          if (lVar10 == 0) goto LAB_0728f254;
          lVar10 = *(long *)(lVar10 + 0x38);
          uVar11 = uVar11 + 1;
        } while (lVar10 != *(long *)(lVar6 + 0x20));
        if (iVar2 < unaff_w21) {
          lVar9 = *unaff_x22;
          if (lVar9 == 0) break;
          uVar4 = *(uint *)(lVar9 + 0x18);
          iVar7 = 0;
          do {
            uVar3 = uVar11 + iVar7;
            if (uVar4 <= uVar3) goto LAB_0728f278;
            iVar7 = iVar7 + 1;
            *(undefined4 *)(lVar9 + (long)(int)uVar3 * 4 + 0x20) = 0xffffffff;
          } while ((iVar2 - unaff_w21) + iVar7 != 0);
          uVar11 = uVar11 + iVar7;
        }
      }
    }
LAB_0728f24c:
    in_x9 = *(long *)(unaff_x20 + 0x18);
  } while (in_x9 != 0);
LAB_0728f254:
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


