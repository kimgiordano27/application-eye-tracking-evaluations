/*
FUNCTION_NAME: OVRPlugin.ControllerState6$$.ctor
ENTRY_POINT: 026cb67c
PROGRAM: vrfs-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_ControllerState6___ctor(long param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long in_x10;
  int *piVar8;
  long unaff_x19;
  undefined8 uVar9;
  uint uVar10;
  int *piVar11;
  long lVar12;
  int unaff_w27;
  long lVar13;
  uint uVar14;
  long lStack0000000000000000;
  long in_stack_00000008;
  
  uVar2 = *(int *)(param_1 + in_x10 * 4 + 0x20) - 1;
  if (-1 < (int)uVar2) {
    lStack0000000000000000 = in_x10;
    uVar14 = 0xffffffff;
    do {
      uVar10 = uVar2;
      lVar12 = *(long *)(unaff_x19 + 0x18);
      if (lVar12 == 0) goto LAB_026cb88c;
      if (*(uint *)(lVar12 + 0x18) <= uVar10) goto LAB_026cb890;
      piVar11 = (int *)(lVar12 + (long)(int)uVar10 * 0x18 + 0x20);
      lVar13 = (long)(int)uVar10;
      if (*piVar11 == unaff_w27) {
        plVar5 = *(long **)(unaff_x19 + 0x30);
        if (plVar5 == (long *)0x0) {
          plVar5 = (long *)(**(code **)(*(long *)(*(long *)(*(long *)(in_stack_00000008 + 0x20) +
                                                           0xc0) + 0x10) + 8))();
          if (plVar5 == (long *)0x0) goto LAB_026cb88c;
          uVar7 = (**(code **)(*plVar5 + 0x1b8))
                            (plVar5,*(undefined8 *)(lVar12 + lVar13 * 0x18 + 0x28));
        }
        else {
          if (plVar5 == (long *)0x0) goto LAB_026cb88c;
          lVar4 = *(long *)(*(long *)(*(long *)(in_stack_00000008 + 0x20) + 0xc0) + 0x148);
          uVar9 = *(undefined8 *)(lVar12 + lVar13 * 0x18 + 0x28);
          if ((*(byte *)(lVar4 + 0x132) & 1) == 0) {
            lVar4 = FUN_015c2790(lVar4);
          }
          lVar6 = *plVar5;
          uVar7 = (ulong)*(ushort *)(lVar6 + 0x12a);
          if (uVar7 != 0) {
            piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == lVar4) {
                puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
                goto LAB_026cb79c;
              }
              uVar7 = uVar7 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar7 != 0);
          }
          puVar3 = (undefined8 *)FUN_015c2a80(plVar5,lVar4,0);
LAB_026cb79c:
          uVar7 = (*(code *)*puVar3)(plVar5,uVar9);
        }
        if ((uVar7 & 1) != 0) {
          if ((int)uVar14 < 0) {
            lVar4 = *(long *)(unaff_x19 + 0x10);
            if (lVar4 == 0) goto LAB_026cb88c;
            if (*(uint *)(lVar4 + 0x18) <= (uint)lStack0000000000000000) goto LAB_026cb890;
            *(int *)(lVar4 + lStack0000000000000000 * 4 + 0x20) =
                 *(int *)(lVar12 + lVar13 * 0x18 + 0x24) + 1;
          }
          else {
            lVar4 = *(long *)(unaff_x19 + 0x18);
            if (lVar4 == 0) {
LAB_026cb88c:
                    /* WARNING: Subroutine does not return */
              FUN_0160eeb4();
            }
            if (*(uint *)(lVar4 + 0x18) <= uVar14) {
LAB_026cb890:
                    /* WARNING: Subroutine does not return */
              FUN_0160eebc();
            }
            *(undefined4 *)(lVar4 + (long)(int)uVar14 * 0x18 + 0x24) =
                 *(undefined4 *)(lVar12 + lVar13 * 0x18 + 0x24);
          }
          *piVar11 = -1;
          uVar1 = *(undefined4 *)(unaff_x19 + 0x24);
          lVar12 = lVar12 + lVar13 * 0x18;
          *(undefined8 *)(lVar12 + 0x28) = 0;
          *(undefined4 *)(lVar12 + 0x24) = uVar1;
          *(uint *)(unaff_x19 + 0x24) = uVar10;
          *(ulong *)(unaff_x19 + 0x28) =
               CONCAT44((int)((ulong)*(undefined8 *)(unaff_x19 + 0x28) >> 0x20) + 1,
                        (int)*(undefined8 *)(unaff_x19 + 0x28) + 1);
          return 1;
        }
      }
      uVar2 = *(uint *)(lVar12 + lVar13 * 0x18 + 0x24);
      uVar14 = uVar10;
    } while (-1 < (int)uVar2);
  }
  return 0;
}


