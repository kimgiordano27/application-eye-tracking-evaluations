/*
FUNCTION_NAME: OVRPlugin.RectiPair$$get_Item
ENTRY_POINT: 026cba10
PROGRAM: vrfs-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_4
*/


undefined8 OVRPlugin_RectiPair__get_Item(undefined8 param_1,long param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x23;
  undefined8 unaff_x24;
  uint unaff_w25;
  uint unaff_w26;
  long unaff_x27;
  int unaff_w28;
  int *unaff_x29;
  long in_stack_00000008;
  undefined8 *in_stack_00000010;
  long in_stack_00000018;
  
code_r0x026cba10:
  param_2 = FUN_015c2790(param_2);
LAB_026cba1c:
  lVar4 = *unaff_x23;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12a);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == param_2) {
        puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
        goto LAB_026cbab0;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar2 = (undefined8 *)FUN_015c2a80(unaff_x23,param_2,0);
LAB_026cbab0:
  uVar5 = (*(code *)*puVar2)(unaff_x23,unaff_x24);
  do {
    if ((uVar5 & 1) != 0) {
      if ((int)unaff_w26 < 0) {
        lVar4 = *(long *)(unaff_x19 + 0x10);
        if (lVar4 == 0) goto LAB_026cbbb4;
        if ((uint)in_stack_00000008 < *(uint *)(lVar4 + 0x18)) {
          *(int *)(lVar4 + in_stack_00000008 * 4 + 0x20) =
               *(int *)(unaff_x27 + unaff_x20 * 0x18 + 0x24) + 1;
          goto OVRPlugin_RectfPair__get_Item;
        }
      }
      else {
        lVar4 = *(long *)(unaff_x19 + 0x18);
        if (lVar4 == 0) goto LAB_026cbbb4;
        if (unaff_w26 < *(uint *)(lVar4 + 0x18)) {
          *(undefined4 *)(lVar4 + (long)(int)unaff_w26 * 0x18 + 0x24) =
               *(undefined4 *)(unaff_x27 + unaff_x20 * 0x18 + 0x24);
OVRPlugin_RectfPair__get_Item:
          lVar4 = unaff_x27 + unaff_x20 * 0x18;
          *in_stack_00000010 = *(undefined8 *)(lVar4 + 0x30);
          *unaff_x29 = -1;
          uVar1 = *(undefined4 *)(unaff_x19 + 0x24);
          *(undefined8 *)(lVar4 + 0x28) = 0;
          *(undefined4 *)(lVar4 + 0x24) = uVar1;
          *(uint *)(unaff_x19 + 0x24) = unaff_w25;
          *(ulong *)(unaff_x19 + 0x28) =
               CONCAT44((int)((ulong)*(undefined8 *)(unaff_x19 + 0x28) >> 0x20) + 1,
                        (int)*(undefined8 *)(unaff_x19 + 0x28) + 1);
          return 1;
        }
      }
LAB_026cbbb8:
                    /* WARNING: Subroutine does not return */
      FUN_0160eebc();
    }
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
    unaff_x23 = *(long **)(unaff_x19 + 0x30);
    if (unaff_x23 != (long *)0x0) break;
    plVar3 = (long *)(**(code **)(*(long *)(*(long *)(*(long *)(in_stack_00000018 + 0x20) + 0xc0) +
                                           0x10) + 8))();
    if (plVar3 == (long *)0x0) goto LAB_026cbbb4;
    uVar5 = (**(code **)(*plVar3 + 0x1b8))
                      (plVar3,*(undefined8 *)(unaff_x27 + unaff_x20 * unaff_x21 + 0x28));
  } while( true );
  if (unaff_x23 == (long *)0x0) {
LAB_026cbbb4:
                    /* WARNING: Subroutine does not return */
    FUN_0160eeb4();
  }
  param_2 = *(long *)(*(long *)(*(long *)(in_stack_00000018 + 0x20) + 0xc0) + 0x148);
  unaff_x24 = *(undefined8 *)(unaff_x27 + unaff_x20 * unaff_x21 + 0x28);
  if ((*(byte *)(param_2 + 0x132) & 1) == 0) goto code_r0x026cba10;
  goto LAB_026cba1c;
}


