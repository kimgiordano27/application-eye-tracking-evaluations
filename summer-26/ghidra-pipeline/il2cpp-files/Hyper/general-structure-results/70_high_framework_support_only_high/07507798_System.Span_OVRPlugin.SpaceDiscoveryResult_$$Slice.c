/*
FUNCTION_NAME: System.Span<OVRPlugin.SpaceDiscoveryResult>$$Slice
ENTRY_POINT: 07507798
PROGRAM: Hyper-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Span<OVRPlugin_SpaceDiscoveryResult>__Slice(void)

{
  bool in_ZR;
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x19;
  long *unaff_x21;
  int unaff_w22;
  long lVar6;
  long *unaff_x25;
  long *unaff_x26;
  undefined8 *in_stack_00000008;
  long *in_stack_00000010;
  
  if (!in_ZR) {
    FUN_04338da4();
                    /* WARNING: Subroutine does not return */
    FUN_04a6935c();
  }
  plVar2 = (long *)__cxa_begin_catch();
  lVar6 = *plVar2;
  __cxa_end_catch();
  plVar2 = (long *)thunk_FUN_04983e64(*in_stack_00000008,*unaff_x25);
  *in_stack_00000010 = (long)plVar2;
  if (plVar2 != (long *)0x0) {
    lVar3 = *plVar2;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x25) {
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_075074c8;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_04980e68(plVar2,*unaff_x25,0);
LAB_075074c8:
    (*(code *)*puVar1)(plVar2,puVar1[1]);
  }
  if (lVar6 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04948184(lVar6);
  }
  FUN_07506d88();
  lVar6 = *unaff_x21;
  uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *unaff_x26) {
        puVar1 = (undefined8 *)(lVar6 + (long)*piVar5 * 0x10 + 0x138);
        goto LAB_07507548;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar1 = (undefined8 *)FUN_04980e68();
LAB_07507548:
  (*(code *)*puVar1)();
  *(int *)(unaff_x19 + 0x18) = *(int *)(unaff_x19 + 0x18) + unaff_w22;
  return;
}


