/*
FUNCTION_NAME: UniJSON.ListTreeNodeExtensions$$GetBoolean
ENTRY_POINT: 02f4a068
PROGRAM: vrlegs-libil2cpp.so
SCORE: 98
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_3;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x02f4a140) */

void UniJSON_ListTreeNodeExtensions__GetBoolean(void)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x22;
  uint unaff_w26;
  int in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  puVar1 = PTR_DAT_03cbed08;
  plVar2 = (long *)thunk_FUN_01a89d6c();
  if (plVar2 != (long *)0x0) {
    lVar4 = *plVar2;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto code_r0x02f4a0d0;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_01a472ec(plVar2,*(long *)puVar1,0);
code_r0x02f4a0d0:
    (*(code *)*puVar3)(plVar2,puVar3[1]);
  }
  if (unaff_x22 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01a28d1c();
  }
  if (in_stack_00000008 != 1) {
    if (in_stack_00000018._4_1_ != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0();
    }
                    /* WARNING: Subroutine does not return */
    FUN_01b3fef0(in_stack_00000010);
  }
  plVar2 = (long *)__cxa_begin_catch(in_stack_00000010);
  lVar4 = *plVar2;
  __cxa_end_catch();
  if (in_stack_00000018._4_1_ != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0();
  }
  puVar1 = PTR_DAT_03cfe690;
  if (lVar4 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01a28d1c(lVar4);
  }
  if ((unaff_w26 & 1) != 0) {
    lVar4 = *(long *)PTR_DAT_03cfe690;
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar4 = *(long *)puVar1;
    }
    FusionStats__get_GraphColorBad(*(long *)(lVar4 + 0xb8) + 0x20,0);
    FUN_02f4ffa8();
  }
  return;
}


