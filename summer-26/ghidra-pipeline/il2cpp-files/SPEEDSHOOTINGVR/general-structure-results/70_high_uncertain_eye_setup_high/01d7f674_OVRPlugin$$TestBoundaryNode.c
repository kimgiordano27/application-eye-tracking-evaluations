/*
FUNCTION_NAME: OVRPlugin$$TestBoundaryNode
ENTRY_POINT: 01d7f674
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__TestBoundaryNode(long param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  ulong uVar7;
  code *in_x9;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  long unaff_x19;
  long *plVar11;
  uint unaff_w21;
  long *unaff_x22;
  
  lVar3 = (*in_x9)(param_2,*(undefined8 *)(param_1 + 0x3a0));
  if (lVar3 == 0) goto LAB_01d7f864;
  uVar10 = *(ulong *)(unaff_x19 + 0x18);
  uVar7 = uVar10 & 0xffffffff;
  uVar2 = (uint)*(ulong *)(lVar3 + 0x18);
  uVar9 = (uint)uVar10;
  if (uVar9 == uVar2) {
    if (((unaff_w21 & 0x10100) == 0x10000) && (0 < (int)uVar9)) {
      if (uVar7 != 0) {
        uVar10 = 0;
        uVar8 = *(ulong *)(lVar3 + 0x18) & 0xffffffff;
        do {
          lVar4 = *(long *)(unaff_x19 + 0x20 + uVar10 * 8);
          if (lVar4 != 0) {
            if (uVar7 <= uVar10) break;
            uVar7 = FUN_01ccbd8c(lVar4,*(undefined8 *)(lVar3 + 0x20 + uVar10 * 8),0);
            if ((uVar7 & 1) == 0) goto LAB_01d7f850;
            uVar8 = (ulong)*(uint *)(lVar3 + 0x18);
          }
          uVar7 = uVar8;
          uVar10 = uVar10 + 1;
          if ((long)(int)uVar7 <= (long)uVar10) goto LAB_01d7f848;
          uVar8 = uVar7;
        } while (uVar10 < *(uint *)(unaff_x19 + 0x18));
      }
      goto LAB_01d7f708;
    }
LAB_01d7f848:
    uVar5 = 1;
  }
  else {
    if ((unaff_w21 & 0x3300) != 0) {
      if ((int)uVar2 < (int)uVar9) {
        uVar2 = (**(code **)(*unaff_x22 + 600))();
        if ((uVar2 >> 1 & 1) != 0) goto LAB_01d7f848;
      }
      else if ((unaff_w21 >> 0x12 & 1) != 0) {
        if (uVar2 <= uVar9) goto LAB_01d7f708;
        lVar4 = *(long *)(lVar3 + ((long)(uVar10 << 0x20) >> 0x1d) + 0x20);
        if (lVar4 == 0) goto LAB_01d7f864;
        uVar7 = FUN_01cc9618(lVar4,0);
        if ((uVar7 & 1) != 0) goto LAB_01d7f848;
      }
      if (*(long *)(lVar3 + 0x18) != 0) {
        iVar6 = (int)*(long *)(lVar3 + 0x18);
        iVar1 = iVar6 + -1;
        if (iVar1 <= *(int *)(unaff_x19 + 0x18)) {
          if (iVar6 == 0) {
LAB_01d7f708:
                    /* WARNING: Subroutine does not return */
            FUN_00fdc53c();
          }
          plVar11 = *(long **)(lVar3 + (long)iVar1 * 8 + 0x20);
          if ((plVar11 == (long *)0x0) ||
             (lVar3 = (**(code **)(*plVar11 + 0x1d8))(plVar11,*(undefined8 *)(*plVar11 + 0x1e0)),
             lVar3 == 0)) {
LAB_01d7f864:
                    /* WARNING: Subroutine does not return */
            FUN_00fdc534();
          }
          uVar7 = FUN_01d61eb0(lVar3,0);
          if ((uVar7 & 1) != 0) {
            uVar5 = *(undefined8 *)PTR_DAT_02358d68;
            if (*(int *)(*(long *)PTR_DAT_0234bc58 + 0xe0) == 0) {
              thunk_FUN_01022c14();
            }
            uVar5 = FUN_01d5e86c(uVar5,0);
            uVar7 = (**(code **)(*plVar11 + 0x208))
                              (plVar11,uVar5,0,*(undefined8 *)(*plVar11 + 0x210));
            if ((uVar7 & 1) == 0) {
              return 0;
            }
            goto LAB_01d7f848;
          }
        }
      }
    }
LAB_01d7f850:
    uVar5 = 0;
  }
  return uVar5;
}


