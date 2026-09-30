/*
FUNCTION_NAME: OVRManager$$get_monoscopic
ENTRY_POINT: 05ff10a0
PROGRAM: vandalizer-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__get_monoscopic
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined8 *param_4)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  long *unaff_x23;
  long lVar11;
  undefined4 uVar12;
  
  uVar1 = (*(code *)*param_4)();
  plVar7 = (long *)(unaff_x19 + 0x30);
  uVar9 = (ulong)uVar1;
  if ((*plVar7 == 0) || (uVar1 != *(uint *)(*plVar7 + 0x18))) {
    uVar2 = FUN_031f21dc(*(undefined8 *)PTR_DAT_075dc570,uVar9);
    *(undefined8 *)(unaff_x19 + 0x30) = uVar2;
    thunk_FUN_0329bf60(plVar7,uVar2);
    if (*(long *)(unaff_x19 + 0x28) == 0) goto LAB_05ff11e8;
    FUN_06dff2f4(*(long *)(unaff_x19 + 0x28),uVar9,0);
  }
  if (0 < (int)uVar1) {
    uVar8 = 0;
    do {
      if ((*(long *)(unaff_x19 + 0x20) == 0) ||
         (plVar10 = *(long **)(*(long *)(unaff_x19 + 0x20) + 0x128), plVar10 == (long *)0x0))
      goto LAB_05ff11e8;
      lVar4 = *plVar10;
      lVar11 = *(long *)(unaff_x19 + 0x30);
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *unaff_x23) {
            puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 1) * 0x10 + 0x138);
            goto LAB_05ff1188;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined8 *)FUN_0322c1e8(plVar10,*unaff_x23,1);
LAB_05ff1188:
      uVar12 = (*(code *)*puVar3)(plVar10,uVar8 & 0xffffffff,puVar3[1]);
      if (lVar11 == 0) goto LAB_05ff11e8;
      if (*(uint *)(lVar11 + 0x18) <= uVar8) {
                    /* WARNING: Subroutine does not return */
        FUN_031f2398();
      }
      lVar11 = lVar11 + uVar8 * 0xc;
      uVar8 = uVar8 + 1;
      *(undefined4 *)(lVar11 + 0x20) = uVar12;
      *(undefined4 *)(lVar11 + 0x24) = param_2;
      *(undefined4 *)(lVar11 + 0x28) = param_3;
    } while (uVar8 != uVar9);
  }
  if (*(long *)(unaff_x19 + 0x28) != 0) {
    FUN_06e01370(*(long *)(unaff_x19 + 0x28),*plVar7,0);
    return;
  }
LAB_05ff11e8:
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


