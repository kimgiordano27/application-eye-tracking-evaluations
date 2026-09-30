/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.ImmersiveSceneDebugger$$RayCastDebugger
ENTRY_POINT: 04a745dc
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x04a747c8) */
/* WARNING: Removing unreachable block (ram,0x04a747d4) */
/* WARNING: Removing unreachable block (ram,0x04a748f4) */
/* WARNING: Removing unreachable block (ram,0x04a74904) */

undefined8 Meta_XR_MRUtilityKit_ImmersiveSceneDebugger__RayCastDebugger(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  ulong unaff_x20;
  long unaff_x22;
  long *plVar8;
  int iVar9;
  int iVar10;
  long unaff_x26;
  long *unaff_x27;
  long unaff_x29;
  
  uVar2 = (*(code *)*param_1)();
  iVar10 = 0;
  iVar9 = 0;
  *(undefined8 *)(unaff_x29 + -0x20) = 0;
  *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
  *(undefined8 *)(unaff_x29 + -0x10) = uVar2;
LAB_04a7460c:
  do {
    plVar8 = *(long **)(unaff_x29 + -0x10);
    if (plVar8 == (long *)0x0) {
      if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      goto LAB_04a749f0;
    }
    lVar4 = *plVar8;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x27) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_04a74660;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_02b7654c(plVar8,*unaff_x27,0);
LAB_04a74660:
    uVar6 = (*(code *)*puVar3)(plVar8,puVar3[1]);
    if ((uVar6 & 1) == 0) break;
    plVar8 = *(long **)(unaff_x29 + -0x10);
    if (plVar8 == (long *)0x0) {
      if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      goto LAB_04a749f0;
    }
    lVar4 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xe8);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02b76218(lVar4);
    }
    lVar5 = *plVar8;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar4) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_04a746e4;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_02b7654c(plVar8,lVar4,0);
LAB_04a746e4:
    (*(code *)*puVar3)(plVar8,puVar3[1]);
    iVar1 = FUN_04a74128();
    if (-1 < iVar1) {
      if (unaff_x22 == 0) {
        if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        goto LAB_04a749f0;
      }
      uVar6 = FUN_0527e17c();
      if ((uVar6 & 1) == 0) {
        FUN_0527e100();
        iVar10 = iVar10 + 1;
      }
      goto LAB_04a7460c;
    }
    iVar9 = iVar9 + 1;
  } while ((unaff_x20 & 1) == 0);
  plVar8 = *(long **)(unaff_x29 + -0x10);
  if (plVar8 != (long *)0x0) {
    lVar4 = *plVar8;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_06312f78) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_04a747b0;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_02b7654c(plVar8,*(long *)PTR_DAT_06312f78,0);
LAB_04a747b0:
    (*(code *)*puVar3)(plVar8,puVar3[1]);
  }
  if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return CONCAT44(iVar9,iVar10);
  }
LAB_04a749f0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


