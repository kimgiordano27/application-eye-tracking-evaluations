/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.fsDirectConverter<Ray>$$TrySerialize
ENTRY_POINT: 048f47f4
PROGRAM: Untangled-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_4
*/


void Unity_VisualScripting_FullSerializer_fsDirectConverter<Ray>__TrySerialize(void)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  long *plVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long unaff_x21;
  long lVar7;
  ulong uVar8;
  long *unaff_x26;
  
  plVar4 = (long *)RootMotion_FinalIK_IKSolverFABRIK__MapToSolverPositionsLimited();
  lVar7 = *plVar4;
  __cxa_end_catch();
  FUN_06872da8(&stack0x00000008,0);
  if (lVar7 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ecbb70(lVar7);
  }
  FUN_04e06224();
  uVar1 = *(uint *)(unaff_x21 + 0x78);
  if (0 < (int)uVar1) {
    uVar8 = 0;
    do {
      lVar7 = *(long *)(unaff_x21 + 0x58);
      if (lVar7 == 0) {
LAB_048f47a4:
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      if (*(uint *)(lVar7 + 0x18) <= uVar8) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c8();
      }
      if (*(long *)(lVar7 + uVar8 * 8 + 0x20) == unaff_x19) {
        if ((unaff_x19 == 0) || (plVar4 = (long *)FUN_068c3600(), plVar4 == (long *)0x0))
        goto LAB_048f47a4;
        lVar7 = *plVar4;
        uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == *unaff_x26) {
              puVar3 = (undefined8 *)(lVar7 + (long)(*piVar6 + 0x16) * 0x10 + 0x138);
              goto LAB_048f46f4;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
        puVar3 = (undefined8 *)FUN_02eea86c(plVar4,*unaff_x26,0x16);
LAB_048f46f4:
        iVar2 = (*(code *)*puVar3)(plVar4,puVar3[1]);
        lVar7 = *plVar4;
        uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == *unaff_x26) {
              puVar3 = (undefined8 *)(lVar7 + (long)(*piVar6 + 0x17) * 0x10 + 0x138);
              goto LAB_048f4754;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
        puVar3 = (undefined8 *)FUN_02eea86c(plVar4,*unaff_x26,0x17);
LAB_048f4754:
        (*(code *)*puVar3)(plVar4,iVar2 + -1,puVar3[1]);
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 != uVar1);
  }
  FUN_04cfc70c((long *)(unaff_x21 + 0x58));
  return;
}


