/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKRoom$$GetBestPoseFromRaycast
ENTRY_POINT: 04a90fac
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_6;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x04a910dc) */
/* WARNING: Removing unreachable block (ram,0x04a910e8) */
/* WARNING: Removing unreachable block (ram,0x04a9120c) */
/* WARNING: Removing unreachable block (ram,0x04a9121c) */

undefined8
Meta_XR_MRUtilityKit_MRUKRoom__GetBestPoseFromRaycast(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  ulong in_x9;
  undefined8 uVar5;
  int *in_x10;
  int *piVar6;
  long in_x11;
  long unaff_x19;
  ulong unaff_x20;
  long unaff_x22;
  long *plVar7;
  long *unaff_x23;
  int unaff_w24;
  int unaff_w25;
  long unaff_x26;
  long *unaff_x27;
  long unaff_x29;
  undefined8 uVar8;
  undefined8 uVar9;
  
  do {
    if (in_x11 == param_3) {
      puVar2 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
      goto LAB_04a90fdc;
    }
    in_x9 = in_x9 - 1;
    in_x10 = in_x10 + 4;
    if (in_x9 == 0) {
      do {
        puVar2 = (undefined8 *)FUN_02b7654c(unaff_x23,param_3,0);
LAB_04a90fdc:
        (*(code *)*puVar2)(unaff_x29 + -0x20,unaff_x23,puVar2[1]);
        uVar9 = *(undefined8 *)(unaff_x29 + -0x18);
        uVar8 = *(undefined8 *)(unaff_x29 + -0x20);
        uVar5 = *(undefined8 *)(unaff_x29 + -0x10);
        *(undefined8 *)(unaff_x29 + -0x18) = uVar9;
        *(undefined8 *)(unaff_x29 + -0x20) = uVar8;
        *(undefined8 *)(unaff_x29 + -0x10) = uVar5;
        *(undefined8 *)(unaff_x29 + -0x38) = uVar9;
        *(undefined8 *)(unaff_x29 + -0x40) = uVar8;
        *(undefined8 *)(unaff_x29 + -0x30) = uVar5;
        iVar1 = FUN_04a909b8();
        if (iVar1 < 0) {
          unaff_w24 = unaff_w24 + 1;
          if ((unaff_x20 & 1) == 0) goto LAB_04a90f04;
LAB_04a9105c:
          plVar7 = *(long **)(unaff_x29 + -0x28);
          if (plVar7 == (long *)0x0) goto LAB_04a910d0;
          lVar4 = *plVar7;
          uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar3 == 0) goto LAB_04a910a8;
          piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          goto LAB_04a91090;
        }
        if (unaff_x22 == 0) {
          if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cac4();
          }
          goto LAB_04a91308;
        }
        uVar3 = FUN_0527e17c();
        if ((uVar3 & 1) == 0) {
          FUN_0527e100();
          unaff_w25 = unaff_w25 + 1;
        }
LAB_04a90f04:
        plVar7 = *(long **)(unaff_x29 + -0x28);
        if (plVar7 == (long *)0x0) {
          if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cac4();
          }
          goto LAB_04a91308;
        }
        lVar4 = *plVar7;
        uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar3 != 0) {
          piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == *unaff_x27) {
              puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
              goto LAB_04a90f58;
            }
            uVar3 = uVar3 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar3 != 0);
        }
        puVar2 = (undefined8 *)FUN_02b7654c(plVar7,*unaff_x27,0);
LAB_04a90f58:
        uVar3 = (*(code *)*puVar2)(plVar7,puVar2[1]);
        if ((uVar3 & 1) == 0) goto LAB_04a9105c;
        unaff_x23 = *(long **)(unaff_x29 + -0x28);
        if (unaff_x23 == (long *)0x0) {
          if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cac4();
          }
          goto LAB_04a91308;
        }
        param_3 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xe8);
        if ((*(ushort *)(param_3 + 0x135) & 1) == 0) {
          param_3 = FUN_02b76218(param_3);
        }
        param_1 = *unaff_x23;
        in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
      } while (in_x9 == 0);
      in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    }
    in_x11 = *(long *)(in_x10 + -2);
  } while( true );
  while( true ) {
    uVar3 = uVar3 - 1;
    piVar6 = piVar6 + 4;
    if (uVar3 == 0) break;
LAB_04a91090:
    if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_06312f78) {
      puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
      goto LAB_04a910c4;
    }
  }
LAB_04a910a8:
  puVar2 = (undefined8 *)FUN_02b7654c(plVar7,*(long *)PTR_DAT_06312f78,0);
LAB_04a910c4:
  (*(code *)*puVar2)(plVar7,puVar2[1]);
LAB_04a910d0:
  if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return CONCAT44(unaff_w24,unaff_w25);
  }
LAB_04a91308:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


