/*
FUNCTION_NAME: OVRPlugin.RectiPair$$set_Item
ENTRY_POINT: 026cbac4
PROGRAM: vrfs-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_4
*/


undefined8 OVRPlugin_RectiPair__set_Item(ulong param_1)

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
  long unaff_x21;
  undefined8 uVar8;
  uint unaff_w25;
  uint unaff_w26;
  long unaff_x27;
  int unaff_w28;
  int *unaff_x29;
  long in_stack_00000008;
  undefined8 *in_stack_00000010;
  long in_stack_00000018;
  
  while ((param_1 & 1) == 0) {
    while( true ) {
      do {
        unaff_w26 = unaff_w25;
        unaff_w25 = *(uint *)(unaff_x27 + unaff_x20 * unaff_x21 + 0x24);
        if ((int)unaff_w25 < 0) {
          *in_stack_00000010 = 0;
          return 0;
        }
        unaff_x27 = *(long *)(unaff_x19 + 0x18);
        if (unaff_x27 == 0) goto LAB_026cbbb4;
        if (*(uint *)(unaff_x27 + 0x18) <= unaff_w25) goto LAB_026cbbb8;
        unaff_x29 = (int *)(unaff_x27 + (long)(int)unaff_w25 * (long)(int)unaff_x21 + 0x20);
        unaff_x20 = (long)(int)unaff_w25;
      } while (*unaff_x29 != unaff_w28);
      plVar4 = *(long **)(unaff_x19 + 0x30);
      if (plVar4 != (long *)0x0) break;
      plVar4 = (long *)(**(code **)(*(long *)(*(long *)(*(long *)(in_stack_00000018 + 0x20) + 0xc0)
                                             + 0x10) + 8))();
      if (plVar4 == (long *)0x0) goto LAB_026cbbb4;
      uVar6 = (**(code **)(*plVar4 + 0x1b8))
                        (plVar4,*(undefined8 *)(unaff_x27 + unaff_x20 * unaff_x21 + 0x28));
      if ((uVar6 & 1) != 0) goto LAB_026cbb0c;
    }
    if (plVar4 == (long *)0x0) goto LAB_026cbbb4;
    lVar3 = *(long *)(*(long *)(*(long *)(in_stack_00000018 + 0x20) + 0xc0) + 0x148);
    uVar8 = *(undefined8 *)(unaff_x27 + unaff_x20 * unaff_x21 + 0x28);
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
          goto LAB_026cbab0;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_015c2a80(plVar4,lVar3,0);
LAB_026cbab0:
    param_1 = (*(code *)*puVar2)(plVar4,uVar8);
  }
LAB_026cbb0c:
  if ((int)unaff_w26 < 0) {
    lVar3 = *(long *)(unaff_x19 + 0x10);
    if (lVar3 != 0) {
      if (*(uint *)(lVar3 + 0x18) <= (uint)in_stack_00000008) goto LAB_026cbbb8;
      *(int *)(lVar3 + in_stack_00000008 * 4 + 0x20) =
           *(int *)(unaff_x27 + unaff_x20 * 0x18 + 0x24) + 1;
      goto OVRPlugin_RectfPair__get_Item;
    }
  }
  else {
    lVar3 = *(long *)(unaff_x19 + 0x18);
    if (lVar3 != 0) {
      if (*(uint *)(lVar3 + 0x18) <= unaff_w26) {
LAB_026cbbb8:
                    /* WARNING: Subroutine does not return */
        FUN_0160eebc();
      }
      *(undefined4 *)(lVar3 + (long)(int)unaff_w26 * 0x18 + 0x24) =
           *(undefined4 *)(unaff_x27 + unaff_x20 * 0x18 + 0x24);
OVRPlugin_RectfPair__get_Item:
      lVar3 = unaff_x27 + unaff_x20 * 0x18;
      *in_stack_00000010 = *(undefined8 *)(lVar3 + 0x30);
      *unaff_x29 = -1;
      uVar1 = *(undefined4 *)(unaff_x19 + 0x24);
      *(undefined8 *)(lVar3 + 0x28) = 0;
      *(undefined4 *)(lVar3 + 0x24) = uVar1;
      *(uint *)(unaff_x19 + 0x24) = unaff_w25;
      *(ulong *)(unaff_x19 + 0x28) =
           CONCAT44((int)((ulong)*(undefined8 *)(unaff_x19 + 0x28) >> 0x20) + 1,
                    (int)*(undefined8 *)(unaff_x19 + 0x28) + 1);
      return 1;
    }
  }
LAB_026cbbb4:
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


