/*
FUNCTION_NAME: OVRPlugin$$set_suggestedCpuPerfLevel
ENTRY_POINT: 0566a1e8
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0566a30c) */

bool OVRPlugin__set_suggestedCpuPerfLevel(void)

{
  char cVar1;
  long *plVar2;
  int iVar3;
  undefined8 uVar4;
  int in_w8;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *unaff_x19;
  ulong unaff_x20;
  long unaff_x21;
  undefined4 unaff_w22;
  int unaff_w23;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  long *in_stack_00000098;
  
  if (in_w8 == 0) {
    thunk_FUN_02df485c();
  }
  iVar3 = FUN_0564c16c(unaff_w22,unaff_w23 != 0,0);
  if (iVar3 == 0) {
    *(undefined1 *)(unaff_x19 + 0x21) = *(undefined1 *)((long)unaff_x19 + 0x109);
  }
  uVar4 = (**(code **)(*unaff_x19 + 0x188))();
  FUN_0569f4b4(&stack0x00000030,uVar4,0);
  in_stack_00000090 = in_stack_00000050;
  in_stack_00000078 = in_stack_00000038;
  in_stack_00000070 = in_stack_00000030;
  in_stack_00000088 = in_stack_00000048;
  in_stack_00000080 = in_stack_00000040;
  FUN_0569edf0(&stack0x00000008,&stack0x00000070,0);
  plVar2 = in_stack_00000098;
  puVar5 = (undefined8 *)(unaff_x21 + (unaff_x20 & 0xffffffff) * 0x28);
  in_stack_00000038 = in_stack_00000010;
  in_stack_00000030 = in_stack_00000008;
  in_stack_00000048 = in_stack_00000020;
  in_stack_00000040 = in_stack_00000018;
  in_stack_00000050 = in_stack_00000028;
  puVar5[1] = in_stack_00000010;
  *puVar5 = in_stack_00000008;
  puVar5[3] = in_stack_00000020;
  puVar5[2] = in_stack_00000018;
  puVar5[4] = in_stack_00000028;
  cVar1 = *(char *)((long)unaff_x19 + 0x109);
  if (in_stack_00000098 != (long *)0x0) {
    lVar6 = *in_stack_00000098;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_069fbff0) {
          puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_0566a2e4;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar5 = (undefined8 *)FUN_02dd004c(in_stack_00000098,*(long *)PTR_DAT_069fbff0,0);
LAB_0566a2e4:
    (*(code *)*puVar5)(plVar2,puVar5[1]);
  }
  return cVar1 != '\0';
}


