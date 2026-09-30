/*
FUNCTION_NAME: Unity.Burst.Intrinsics.Arm.Neon$$vcvtq_u32_f32
ENTRY_POINT: 01fe8df0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x01fe8f38) */

void Unity_Burst_Intrinsics_Arm_Neon__vcvtq_u32_f32(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  undefined8 uVar7;
  long *unaff_x24;
  char cStack000000000000000c;
  
  plVar2 = (long *)(**(code **)(param_1 + 0x398))();
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  lVar4 = *plVar2;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12a);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *unaff_x24) {
        puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
        goto LAB_01fe8e58;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar3 = (undefined8 *)FUN_00d59724(plVar2,*unaff_x24,0);
LAB_01fe8e58:
  (*(code *)*puVar3)(plVar2,param_2,0,puVar3[1]);
  uVar7 = *(undefined8 *)(unaff_x19 + 0x58);
  cStack000000000000000c = '\0';
  FUN_017d75a8(uVar7,&stack0x0000000c,0);
  puVar1 = Method_System_Nullable<OVRPlugin_Result>__ctor__;
  *(undefined8 *)(unaff_x19 + 0x30) = param_2;
  *(undefined2 *)(unaff_x19 + 0x40) = 0x101;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  if (DAT_03780807 == '\0') {
    thunk_FUN_00d48444(Method_System_Nullable<OVRPlugin_Result>__ctor__);
    DAT_03780807 = '\x01';
  }
  lVar4 = *(long *)puVar1;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar4 = *(long *)puVar1;
  }
  *(undefined4 *)(unaff_x19 + 0x44) = *(undefined4 *)(*(long *)(lVar4 + 0xb8) + 0x20);
  if (cStack000000000000000c != '\0') {
    thunk_FUN_00d56f10(uVar7,0);
  }
  return;
}


