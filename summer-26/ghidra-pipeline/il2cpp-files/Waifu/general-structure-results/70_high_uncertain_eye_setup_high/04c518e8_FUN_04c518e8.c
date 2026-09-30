/*
FUNCTION_NAME: FUN_04c518e8
ENTRY_POINT: 04c518e8
PROGRAM: Waifu-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined1  [16] FUN_04c518e8(long param_1,long param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_06842340(8);
  }
  if (0 < *(int *)(param_1 + 0x18)) {
    lVar5 = 0;
    uVar6 = 0;
    do {
      lVar4 = *(long *)(param_1 + 0x10);
      if (lVar4 == 0) {
System_Collections_Generic_List<OVRPlugin_Qpl_Annotation_Builder_Entry>__get_Capacity:
                    /* WARNING: Subroutine does not return */
        FUN_033d1d3c();
      }
      if (*(uint *)(lVar4 + 0x18) <= uVar6) {
LAB_04c51994:
                    /* WARNING: Subroutine does not return */
        FUN_033d1d44();
      }
      uVar1 = (**(code **)(param_2 + 0x18))
                        (*(undefined8 *)(param_2 + 0x40),*(undefined8 *)(lVar4 + lVar5 + 0x20),
                         *(undefined8 *)(lVar4 + lVar5 + 0x28),*(undefined8 *)(param_2 + 0x28));
      if ((uVar1 & 1) != 0) {
        lVar4 = *(long *)(param_1 + 0x10);
        if (lVar4 == 0)
        goto System_Collections_Generic_List<OVRPlugin_Qpl_Annotation_Builder_Entry>__get_Capacity;
        if (*(uint *)(lVar4 + 0x18) <= (uint)uVar6) goto LAB_04c51994;
        uVar2 = *(undefined8 *)(lVar4 + lVar5 + 0x20);
        uVar3 = *(undefined8 *)(lVar4 + lVar5 + 0x28);
        goto LAB_04c51980;
      }
      uVar6 = uVar6 + 1;
      lVar5 = lVar5 + 0x10;
    } while ((long)uVar6 < (long)*(int *)(param_1 + 0x18));
  }
  uVar2 = 0;
  uVar3 = 0;
LAB_04c51980:
  auVar7._8_8_ = uVar3;
  auVar7._0_8_ = uVar2;
  return auVar7;
}


