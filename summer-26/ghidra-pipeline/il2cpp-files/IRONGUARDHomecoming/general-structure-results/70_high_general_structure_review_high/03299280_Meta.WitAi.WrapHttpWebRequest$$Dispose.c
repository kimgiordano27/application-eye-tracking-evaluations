/*
FUNCTION_NAME: Meta.WitAi.WrapHttpWebRequest$$Dispose
ENTRY_POINT: 03299280
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x032993c4) */

void Meta_WitAi_WrapHttpWebRequest__Dispose(void)

{
  uint uVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  int in_w8;
  long lVar6;
  int iVar7;
  int iVar8;
  long unaff_x19;
  undefined4 unaff_w20;
  int unaff_w21;
  int unaff_w22;
  long unaff_x23;
  long *plVar9;
  undefined8 in_stack_00000008;
  
  plVar9 = *(long **)(unaff_x23 + 0x9d0);
  lVar3 = *plVar9;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar3 = *plVar9;
    in_w8 = *(int *)(unaff_x19 + 0x18);
  }
  if (0 < in_w8) {
    iVar7 = 1;
    if (unaff_w22 == 1) {
      iVar7 = 2;
    }
    iVar8 = 8;
    if (0x4000 < unaff_w21) {
      iVar8 = 9;
    }
    lVar3 = **(long **)(lVar3 + 0xb8);
    if (unaff_w22 == 2) {
      iVar7 = iVar8;
    }
    iVar7 = iVar7 + 1;
    do {
      iVar7 = iVar7 + -1;
      if (iVar7 < 1) {
        if (*(uint *)(unaff_x19 + 0x1c) < 0xffffc567) {
          *(uint *)(unaff_x19 + 0x1c) = *(uint *)(unaff_x19 + 0x1c) + 15000;
        }
        break;
      }
      lVar6 = *(long *)(unaff_x19 + 0x10);
      uVar1 = in_w8 - 1;
      *(uint *)(unaff_x19 + 0x18) = uVar1;
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      if (*(uint *)(lVar6 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      puVar4 = (undefined8 *)(lVar6 + (ulong)uVar1 * 8 + 0x20);
      plVar9 = (long *)*puVar4;
      *puVar4 = 0;
      thunk_FUN_01f51358(puVar4,0);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar5 = FUN_0353bc74(lVar3,0);
      if ((uVar5 & 1) != 0) {
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar2 = (**(code **)(*plVar9 + 0x158))(plVar9,*(undefined8 *)(*plVar9 + 0x160));
        FUN_0354b54c(lVar3,uVar2,(int)plVar9[3],unaff_w20,0);
      }
      in_w8 = *(int *)(unaff_x19 + 0x18);
    } while (0 < in_w8);
  }
  if (in_stack_00000008._4_1_ != '\0') {
    Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_HingeJoint_op_Implicit();
  }
  return;
}


