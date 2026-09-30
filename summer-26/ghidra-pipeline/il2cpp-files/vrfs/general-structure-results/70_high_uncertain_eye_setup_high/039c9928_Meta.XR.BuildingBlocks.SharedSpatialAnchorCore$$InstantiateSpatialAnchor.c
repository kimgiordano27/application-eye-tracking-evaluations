/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.SharedSpatialAnchorCore$$InstantiateSpatialAnchor
ENTRY_POINT: 039c9928
PROGRAM: vrfs-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8
Meta_XR_BuildingBlocks_SharedSpatialAnchorCore__InstantiateSpatialAnchor
          (code *param_1,long *param_2,ulong param_3,undefined8 param_4,undefined8 param_5)

{
  undefined8 *puVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  int *piVar6;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  uint unaff_w24;
  uint unaff_w25;
  uint unaff_w26;
  long unaff_x27;
  int unaff_w28;
  int *unaff_x29;
  long in_stack_00000000;
  undefined2 *in_stack_00000008;
  long in_stack_00000010;
  undefined8 in_stack_00000018;
  
  while (uVar3 = (*param_1)(param_2,param_3,unaff_w24,param_5), (uVar3 & 1) == 0) {
    while( true ) {
      do {
        unaff_w26 = unaff_w25;
        unaff_w25 = *(uint *)(unaff_x27 + unaff_x20 * unaff_x21 + 0x24);
        if ((int)unaff_w25 < 0) {
          *in_stack_00000008 = 0;
          return 0;
        }
        unaff_x27 = *(long *)(unaff_x19 + 0x18);
        if (unaff_x27 == 0) goto LAB_039c9a20;
        if (*(uint *)(unaff_x27 + 0x18) <= unaff_w25) goto LAB_039c9a24;
        unaff_x29 = (int *)(unaff_x27 + (long)(int)unaff_w25 * (long)(int)unaff_x21 + 0x20);
        unaff_x20 = (long)(int)unaff_w25;
      } while (*unaff_x29 != unaff_w28);
      param_2 = *(long **)(unaff_x19 + 0x30);
      if (param_2 != (long *)0x0) break;
      plVar2 = (long *)(**(code **)(*(long *)(*(long *)(*(long *)(in_stack_00000010 + 0x20) + 0xc0)
                                             + 0x10) + 8))();
      if (plVar2 == (long *)0x0) goto LAB_039c9a20;
      uVar3 = (**(code **)(*plVar2 + 0x1b8))
                        (plVar2,*(undefined2 *)(unaff_x27 + unaff_x20 * unaff_x21 + 0x28),
                         in_stack_00000018._4_2_,*(undefined8 *)(*plVar2 + 0x1c0));
      if ((uVar3 & 1) != 0) goto LAB_039c997c;
    }
    if (param_2 == (long *)0x0) goto LAB_039c9a20;
    unaff_w24 = (uint)in_stack_00000018._4_2_;
    lVar4 = *(long *)(*(long *)(*(long *)(in_stack_00000010 + 0x20) + 0xc0) + 0x148);
    param_3 = (ulong)*(ushort *)(unaff_x27 + unaff_x20 * unaff_x21 + 0x28);
    if ((*(byte *)(lVar4 + 0x132) & 1) == 0) {
      lVar4 = FUN_015c2790(lVar4);
    }
    lVar5 = *param_2;
    uVar3 = (ulong)*(ushort *)(lVar5 + 0x12a);
    if (uVar3 != 0) {
      piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == lVar4) {
          puVar1 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_039c991c;
        }
        uVar3 = uVar3 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_015c2a80(param_2,lVar4,0);
LAB_039c991c:
    param_1 = (code *)*puVar1;
    param_5 = puVar1[1];
  }
LAB_039c997c:
  if ((int)unaff_w26 < 0) {
    lVar4 = *(long *)(unaff_x19 + 0x10);
    if (lVar4 != 0) {
      if (*(uint *)(lVar4 + 0x18) <= (uint)in_stack_00000000) goto LAB_039c9a24;
      *(int *)(lVar4 + in_stack_00000000 * 4 + 0x20) =
           *(int *)(unaff_x27 + unaff_x20 * 0xc + 0x24) + 1;
      goto LAB_039c99e0;
    }
  }
  else {
    lVar4 = *(long *)(unaff_x19 + 0x18);
    if (lVar4 != 0) {
      if (*(uint *)(lVar4 + 0x18) <= unaff_w26) {
LAB_039c9a24:
                    /* WARNING: Subroutine does not return */
        FUN_0160eebc();
      }
      *(undefined4 *)(lVar4 + (long)(int)unaff_w26 * 0xc + 0x24) =
           *(undefined4 *)(unaff_x27 + unaff_x20 * 0xc + 0x24);
LAB_039c99e0:
      lVar4 = unaff_x27 + unaff_x20 * 0xc;
      *in_stack_00000008 = *(undefined2 *)(lVar4 + 0x2a);
      *unaff_x29 = -1;
      *(undefined4 *)(lVar4 + 0x24) = *(undefined4 *)(unaff_x19 + 0x24);
      *(uint *)(unaff_x19 + 0x24) = unaff_w25;
      *(ulong *)(unaff_x19 + 0x28) =
           CONCAT44((int)((ulong)*(undefined8 *)(unaff_x19 + 0x28) >> 0x20) + 1,
                    (int)*(undefined8 *)(unaff_x19 + 0x28) + 1);
      return 1;
    }
  }
LAB_039c9a20:
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


