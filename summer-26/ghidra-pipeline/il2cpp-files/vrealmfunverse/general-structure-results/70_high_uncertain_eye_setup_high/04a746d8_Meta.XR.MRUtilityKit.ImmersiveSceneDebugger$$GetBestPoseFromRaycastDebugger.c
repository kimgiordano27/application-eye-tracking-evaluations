/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.ImmersiveSceneDebugger$$GetBestPoseFromRaycastDebugger
ENTRY_POINT: 04a746d8
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_5;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x04a747c8) */
/* WARNING: Removing unreachable block (ram,0x04a747d4) */
/* WARNING: Removing unreachable block (ram,0x04a748f4) */
/* WARNING: Removing unreachable block (ram,0x04a74904) */

undefined8 Meta_XR_MRUtilityKit_ImmersiveSceneDebugger__GetBestPoseFromRaycastDebugger(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  int *in_x10;
  int *piVar5;
  long unaff_x19;
  ulong unaff_x20;
  long unaff_x22;
  long *plVar6;
  long *unaff_x23;
  int unaff_w24;
  int unaff_w25;
  long unaff_x26;
  long *unaff_x27;
  long unaff_x29;
  
code_r0x04a746d8:
  puVar2 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
  while( true ) {
    (*(code *)*puVar2)(unaff_x23,puVar2[1]);
    iVar1 = FUN_04a74128();
    if (iVar1 < 0) break;
    if (unaff_x22 == 0) {
      if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      goto LAB_04a749f0;
    }
    uVar3 = FUN_0527e17c();
    if ((uVar3 & 1) == 0) {
      FUN_0527e100();
      unaff_w25 = unaff_w25 + 1;
    }
LAB_04a7460c:
    plVar6 = *(long **)(unaff_x29 + -0x10);
    if (plVar6 == (long *)0x0) {
      if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      goto LAB_04a749f0;
    }
    lVar4 = *plVar6;
    uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar3 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x27) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_04a74660;
        }
        uVar3 = uVar3 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined8 *)FUN_02b7654c(plVar6,*unaff_x27,0);
LAB_04a74660:
    uVar3 = (*(code *)*puVar2)(plVar6,puVar2[1]);
    if ((uVar3 & 1) == 0) goto LAB_04a74748;
    unaff_x23 = *(long **)(unaff_x29 + -0x10);
    if (unaff_x23 == (long *)0x0) {
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
    param_1 = *unaff_x23;
    uVar3 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (uVar3 != 0) {
      in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
      do {
        if (*(long *)(in_x10 + -2) == lVar4) goto code_r0x04a746d8;
        uVar3 = uVar3 - 1;
        in_x10 = in_x10 + 4;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined8 *)FUN_02b7654c(unaff_x23,lVar4,0);
  }
  unaff_w24 = unaff_w24 + 1;
  if ((unaff_x20 & 1) == 0) goto LAB_04a7460c;
LAB_04a74748:
  plVar6 = *(long **)(unaff_x29 + -0x10);
  if (plVar6 == (long *)0x0) goto LAB_04a747bc;
  lVar4 = *plVar6;
  uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar3 != 0) {
    piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_06312f78) {
        puVar2 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
        goto LAB_04a747b0;
      }
      uVar3 = uVar3 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined8 *)FUN_02b7654c(plVar6,*(long *)PTR_DAT_06312f78,0);
LAB_04a747b0:
  (*(code *)*puVar2)(plVar6,puVar2[1]);
LAB_04a747bc:
  if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return CONCAT44(unaff_w24,unaff_w25);
  }
LAB_04a749f0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


