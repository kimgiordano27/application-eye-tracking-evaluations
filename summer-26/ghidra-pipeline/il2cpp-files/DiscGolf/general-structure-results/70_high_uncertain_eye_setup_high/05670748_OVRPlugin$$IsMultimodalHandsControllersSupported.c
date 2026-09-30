/*
FUNCTION_NAME: OVRPlugin$$IsMultimodalHandsControllersSupported
ENTRY_POINT: 05670748
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_8;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_4
*/


void OVRPlugin__IsMultimodalHandsControllersSupported(ulong param_1)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long unaff_x20;
  undefined4 *unaff_x21;
  long unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  uint unaff_w25;
  ulong unaff_x26;
  long unaff_x27;
  long in_stack_00000000;
  undefined8 *in_stack_00000008;
  uint in_stack_00000010;
  
  do {
    do {
      if ((param_1 & 0xffffffff) <= unaff_x26) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96868();
      }
      lVar4 = *(long *)(unaff_x27 + unaff_x26 * 8);
      plVar1 = *(long **)(lVar4 + 0x28);
      if (plVar1 == (long *)0x0) {
        uVar2 = FUN_0634bb04(*(undefined8 *)(lVar4 + 0x20),0);
        FUN_0569f368(uVar2,unaff_x21 + 0x23,0);
      }
      else {
        (**(code **)(*plVar1 + 0x1f8))(plVar1,unaff_x21 + 0x23,*(undefined8 *)(*plVar1 + 0x200));
      }
      param_1 = (ulong)*(uint *)(unaff_x22 + 0x18);
      unaff_x26 = unaff_x26 + 1;
    } while ((long)unaff_x26 < (long)(int)*(uint *)(unaff_x22 + 0x18));
    do {
      do {
        unaff_w25 = unaff_w25 + 1;
        unaff_x21 = (undefined4 *)((ulong)in_stack_00000010 + (long)unaff_x21);
        if (*(uint *)(unaff_x19 + 0x28) <= unaff_w25) {
          plVar1 = (long *)*in_stack_00000008;
          if (plVar1 == (long *)0x0) goto OVRPlugin__IsInsightPassthroughSupported;
          lVar4 = *plVar1;
                    /* try { // try from 056707c4 to 057709a3 has its CatchHandler @ 056707c4
                       catch() { ... } // from try @ 056707c4 with catch @ 056707c4
                       catch() { ... } // from try @ 056709e4 with catch @ 056707c4
                       catch() { ... } // from try @ 05670a84 with catch @ 056707c4
                       catch() { ... } // from try @ 05670aa8 with catch @ 056707c4 */
          uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar5 == 0) goto LAB_056707f4;
          piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          goto LAB_056707dc;
        }
        uVar5 = FUN_04df87e4(*(undefined8 *)(unaff_x20 + 0xe8),*unaff_x21,*unaff_x23);
      } while ((uVar5 & 1) == 0);
      unaff_x22 = FUN_04df8550(*(undefined8 *)(unaff_x20 + 0xe8),*unaff_x21,*unaff_x24);
    } while ((int)*(ulong *)(unaff_x22 + 0x18) < 1);
    unaff_x26 = 0;
    param_1 = *(ulong *)(unaff_x22 + 0x18) & 0xffffffff;
    unaff_x27 = unaff_x22 + 0x20;
  } while( true );
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar6 = piVar6 + 4;
    if (uVar5 == 0) break;
LAB_056707dc:
    if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_069fbff0) {
      puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
      goto LAB_05670810;
    }
  }
LAB_056707f4:
  puVar3 = (undefined8 *)FUN_02dd004c(plVar1,*(long *)PTR_DAT_069fbff0,0);
LAB_05670810:
  (*(code *)*puVar3)(plVar1,puVar3[1]);
OVRPlugin__IsInsightPassthroughSupported:
  if (in_stack_00000000 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96858();
}


