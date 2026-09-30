/*
FUNCTION_NAME: OVRPlugin.ControllerState5$$.ctor
ENTRY_POINT: 026cb744
PROGRAM: vrfs-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_ControllerState5___ctor(void)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar8;
  uint unaff_w24;
  uint uVar9;
  int *piVar10;
  long unaff_x26;
  int unaff_w27;
  long unaff_x28;
  long in_stack_00000000;
  long in_stack_00000008;
  
  do {
    while( true ) {
      do {
        uVar9 = unaff_w24;
        unaff_w24 = *(uint *)(unaff_x26 + unaff_x28 * unaff_x20 + 0x24);
        if ((int)unaff_w24 < 0) {
          return 0;
        }
        unaff_x26 = *(long *)(unaff_x19 + 0x18);
        if (unaff_x26 == 0) goto LAB_026cb88c;
        if (*(uint *)(unaff_x26 + 0x18) <= unaff_w24) goto LAB_026cb890;
        piVar10 = (int *)(unaff_x26 + (long)(int)unaff_w24 * (long)(int)unaff_x20 + 0x20);
        unaff_x28 = (long)(int)unaff_w24;
      } while (*piVar10 != unaff_w27);
      plVar4 = *(long **)(unaff_x19 + 0x30);
      if (plVar4 == (long *)0x0) break;
      if (plVar4 == (long *)0x0) goto LAB_026cb88c;
      lVar3 = *(long *)(*(long *)(*(long *)(in_stack_00000008 + 0x20) + 0xc0) + 0x148);
      uVar8 = *(undefined8 *)(unaff_x26 + unaff_x28 * unaff_x20 + 0x28);
      if ((*(byte *)(lVar3 + 0x132) & 1) == 0) {
        lVar3 = FUN_015c2790(lVar3);
      }
      lVar5 = *plVar4;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12a);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == lVar3) {
            puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_026cb79c;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar2 = (undefined8 *)FUN_015c2a80(plVar4,lVar3,0);
LAB_026cb79c:
      uVar6 = (*(code *)*puVar2)(plVar4,uVar8);
      if ((uVar6 & 1) != 0) goto LAB_026cb7f0;
    }
    plVar4 = (long *)(**(code **)(*(long *)(*(long *)(*(long *)(in_stack_00000008 + 0x20) + 0xc0) +
                                           0x10) + 8))();
    if (plVar4 == (long *)0x0) goto LAB_026cb88c;
    uVar6 = (**(code **)(*plVar4 + 0x1b8))
                      (plVar4,*(undefined8 *)(unaff_x26 + unaff_x28 * unaff_x20 + 0x28));
  } while ((uVar6 & 1) == 0);
LAB_026cb7f0:
  if ((int)uVar9 < 0) {
    lVar3 = *(long *)(unaff_x19 + 0x10);
    if (lVar3 == 0) goto LAB_026cb88c;
    if (*(uint *)(lVar3 + 0x18) <= (uint)in_stack_00000000) goto LAB_026cb890;
    *(int *)(lVar3 + in_stack_00000000 * 4 + 0x20) =
         *(int *)(unaff_x26 + unaff_x28 * 0x18 + 0x24) + 1;
  }
  else {
    lVar3 = *(long *)(unaff_x19 + 0x18);
    if (lVar3 == 0) {
LAB_026cb88c:
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    if (*(uint *)(lVar3 + 0x18) <= uVar9) {
LAB_026cb890:
                    /* WARNING: Subroutine does not return */
      FUN_0160eebc();
    }
    *(undefined4 *)(lVar3 + (long)(int)uVar9 * 0x18 + 0x24) =
         *(undefined4 *)(unaff_x26 + unaff_x28 * 0x18 + 0x24);
  }
  *piVar10 = -1;
  uVar1 = *(undefined4 *)(unaff_x19 + 0x24);
  lVar3 = unaff_x26 + unaff_x28 * 0x18;
  *(undefined8 *)(lVar3 + 0x28) = 0;
  *(undefined4 *)(lVar3 + 0x24) = uVar1;
  *(uint *)(unaff_x19 + 0x24) = unaff_w24;
  *(ulong *)(unaff_x19 + 0x28) =
       CONCAT44((int)((ulong)*(undefined8 *)(unaff_x19 + 0x28) >> 0x20) + 1,
                (int)*(undefined8 *)(unaff_x19 + 0x28) + 1);
  return 1;
}


