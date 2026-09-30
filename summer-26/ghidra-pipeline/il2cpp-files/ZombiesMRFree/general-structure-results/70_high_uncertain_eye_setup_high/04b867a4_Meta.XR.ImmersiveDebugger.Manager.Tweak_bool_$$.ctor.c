/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Tweak<bool>$$.ctor
ENTRY_POINT: 04b867a4
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_8;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 Meta_XR_ImmersiveDebugger_Manager_Tweak<bool>___ctor(long param_1)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined8 *puVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  int *piVar10;
  long lVar11;
  undefined4 unaff_w19;
  int unaff_w20;
  long unaff_x21;
  long unaff_x22;
  ulong unaff_x23;
  long *plVar12;
  long unaff_x27;
  ulong unaff_x28;
  
  do {
    uVar6 = *(uint *)(param_1 + unaff_x28 * unaff_x27 + 0x28);
    unaff_x28 = (ulong)uVar6;
    if ((int)uVar6 < 0) {
      if ((unaff_x23 & 1) != 0) {
        uVar6 = *(uint *)(unaff_x21 + 0x24);
        if ((int)uVar6 < 0) {
          if (*(long *)(unaff_x21 + 0x18) == 0) goto LAB_04b868b0;
          uVar6 = *(uint *)(unaff_x21 + 0x20);
          if (uVar6 == *(uint *)(*(long *)(unaff_x21 + 0x18) + 0x18)) {
            FUN_04b868b8();
            uVar6 = *(uint *)(unaff_x21 + 0x20);
          }
          *(uint *)(unaff_x21 + 0x20) = uVar6 + 1;
        }
        else {
          lVar8 = *(long *)(unaff_x21 + 0x18);
          if (lVar8 == 0) goto LAB_04b868b0;
          if (*(uint *)(lVar8 + 0x18) <= uVar6) break;
          *(undefined4 *)(unaff_x21 + 0x24) = *(undefined4 *)(lVar8 + (ulong)uVar6 * 0xc + 0x28);
        }
        lVar8 = *(long *)(unaff_x21 + 0x10);
        if ((lVar8 == 0) || (lVar9 = *(long *)(unaff_x21 + 0x18), lVar9 == 0)) goto LAB_04b868b0;
        if (*(uint *)(lVar9 + 0x18) <= uVar6) break;
        uVar2 = *(uint *)(lVar8 + 0x18);
        lVar11 = lVar9 + (long)(int)uVar6 * 0xc;
        *(int *)(lVar11 + 0x20) = unaff_w20;
        *(undefined4 *)(lVar11 + 0x24) = unaff_w19;
        iVar4 = 0;
        if (uVar2 != 0) {
          iVar4 = unaff_w20 / (int)uVar2;
        }
        uVar3 = unaff_w20 - iVar4 * uVar2;
        if (uVar2 <= uVar3) break;
        lVar8 = lVar8 + (long)(int)uVar3 * 4;
        *(int *)(lVar9 + (long)(int)uVar6 * 0xc + 0x28) = *(int *)(lVar8 + 0x20) + -1;
        *(uint *)(lVar8 + 0x20) = uVar6 + 1;
      }
      return 0;
    }
    if (param_1 == 0) goto LAB_04b868b0;
    if (*(uint *)(param_1 + 0x18) <= uVar6) break;
    if (*(int *)(param_1 + unaff_x28 * unaff_x27 + 0x20) == unaff_w20) {
      plVar12 = *(long **)(unaff_x21 + 0x28);
      if (plVar12 == (long *)0x0) {
LAB_04b868b0:
                    /* WARNING: Subroutine does not return */
        FUN_02fe94e8();
      }
      uVar1 = *(undefined4 *)(param_1 + unaff_x28 * unaff_x27 + 0x24);
      lVar8 = **(long **)(*(long *)(unaff_x22 + 0x20) + 0xc0);
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_02feb2c4(lVar8);
      }
      lVar9 = *plVar12;
      uVar7 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar7 != 0) {
        piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == lVar8) {
            puVar5 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_04b86778;
          }
          uVar7 = uVar7 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar7 != 0);
      }
      puVar5 = (undefined8 *)FUN_02feb5b8(plVar12,lVar8,0);
LAB_04b86778:
      uVar7 = (*(code *)*puVar5)(plVar12,uVar1,unaff_w19,puVar5[1]);
      if ((uVar7 & 1) != 0) {
        return 1;
      }
      param_1 = *(long *)(unaff_x21 + 0x18);
      if (param_1 == 0) goto LAB_04b868b0;
    }
  } while (uVar6 < *(uint *)(param_1 + 0x18));
                    /* WARNING: Subroutine does not return */
  FUN_02fe94f0();
}


