/*
FUNCTION_NAME: OVRPlugin.OVRP_1_88_0$$.cctor
ENTRY_POINT: 02c58594
PROGRAM: sharks-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_88_0___cctor(long param_1,undefined1 param_2 [16],undefined1 param_3 [16])

{
  undefined4 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 in_x9;
  long unaff_x19;
  undefined8 uVar8;
  uint unaff_w25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  long *unaff_x28;
  long unaff_x29;
  long *plVar9;
  ulong uVar10;
  undefined8 in_stack_000000a0;
  ulong in_stack_000000a8;
  long *in_stack_000000b0;
  ulong in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000e0;
  long *in_stack_000000e8;
  
  uVar10 = param_3._8_8_;
  plVar9 = param_3._0_8_;
  uVar2 = param_2._8_8_;
  uVar6 = param_2._0_8_;
  do {
    lVar7 = unaff_x19 + param_1 * unaff_x29;
    *(undefined8 *)(lVar7 + 0x40) = in_x9;
    *(ulong *)(lVar7 + 0x28) = uVar2;
    *(undefined8 *)(lVar7 + 0x20) = uVar6;
    *(ulong *)(lVar7 + 0x38) = uVar10;
    *(long **)(lVar7 + 0x30) = plVar9;
    thunk_FUN_0188fd20(lVar7 + 0x20,0);
    while( true ) {
      while( true ) {
        unaff_w25 = unaff_w25 + 1;
        uVar2 = FUN_02358864(&stack0x000000d0,*unaff_x26);
        plVar9 = in_stack_000000e8;
        uVar6 = in_stack_000000e0;
        if ((uVar2 & 1) == 0) {
          FUN_02358984(&stack0x000000d0,*(undefined8 *)PTR_DAT_0380cda8);
          return;
        }
        if (in_stack_000000e8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_017fc5a8();
        }
        uVar3 = thunk_FUN_0187f3ac(in_stack_000000e8,0);
        uVar8 = *unaff_x27;
        if (*(int *)(*unaff_x28 + 0xe0) == 0) {
          thunk_FUN_01843fdc();
        }
        uVar8 = FUN_02bddb5c(uVar8,0);
        uVar2 = FUN_02be66d0(uVar3,uVar8,0);
        if ((uVar2 & 1) == 0) break;
        in_stack_000000c0 = 0;
        in_stack_000000a8 = 0;
        in_stack_000000a0 = 0;
        in_stack_000000b8 = 0;
        in_stack_000000b0 = (long *)0x0;
        if (*(long *)(*plVar9 + 0x40) != *(long *)(*(long *)PTR_DAT_037f2f90 + 0x40)) {
                    /* WARNING: Subroutine does not return */
          FUN_017fc944(plVar9);
        }
        puVar4 = (undefined4 *)thunk_FUN_01861d10(plVar9);
        uVar1 = *puVar4;
        in_stack_000000a0 = uVar6;
        thunk_FUN_0188fd20(&stack0x000000a0,uVar6);
        in_stack_000000a8 = CONCAT44(in_stack_000000a8._4_4_,1);
        in_stack_000000b8 = CONCAT44(in_stack_000000b8._4_4_,uVar1);
        in_stack_000000b0 = (long *)0x0;
        thunk_FUN_0188fd20();
        in_stack_000000c0 = 0;
        if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_017fc5a8();
        }
        if (*(uint *)(unaff_x19 + 0x18) <= unaff_w25) {
                    /* WARNING: Subroutine does not return */
          FUN_017fc5b0();
        }
        lVar7 = unaff_x19 + (int)unaff_w25 * unaff_x29;
        *(undefined8 *)(lVar7 + 0x40) = 0;
        *(ulong *)(lVar7 + 0x28) = in_stack_000000a8;
        *(undefined8 *)(lVar7 + 0x20) = in_stack_000000a0;
        *(ulong *)(lVar7 + 0x38) = in_stack_000000b8;
        *(long **)(lVar7 + 0x30) = in_stack_000000b0;
        thunk_FUN_0188fd20(lVar7 + 0x20,0);
      }
      uVar3 = thunk_FUN_0187f3ac(plVar9,0);
      uVar8 = *(undefined8 *)PTR_DAT_037f8858;
      if (*(int *)(*unaff_x28 + 0xe0) == 0) {
        thunk_FUN_01843fdc();
      }
      uVar8 = FUN_02bddb5c(uVar8,0);
      uVar2 = FUN_02be66d0(uVar3,uVar8,0);
      if ((uVar2 & 1) != 0) break;
      uVar3 = thunk_FUN_0187f3ac(plVar9,0);
      uVar8 = *(undefined8 *)PTR_DAT_037f8808;
      if (*(int *)(*unaff_x28 + 0xe0) == 0) {
        thunk_FUN_01843fdc();
      }
      uVar8 = FUN_02bddb5c(uVar8,0);
      uVar2 = FUN_02be66d0(uVar3,uVar8,0);
      if ((uVar2 & 1) == 0) {
        thunk_FUN_01851c08(PTR_DAT_037f4600);
        uVar6 = thunk_FUN_01861bbc();
        uVar3 = thunk_FUN_01851c08(PTR_DAT_0380cdd0);
        FUN_02c04f4c(uVar6,uVar3,0);
        uVar3 = thunk_FUN_01851c08(PTR_DAT_0380cdd8);
                    /* WARNING: Subroutine does not return */
        FUN_017fc474(uVar6,uVar3);
      }
      in_stack_000000c0 = 0;
      in_stack_000000a8 = 0;
      in_stack_000000a0 = 0;
      in_stack_000000b8 = 0;
      in_stack_000000b0 = (long *)0x0;
      if (*(long *)(*plVar9 + 0x40) != *(long *)(*(long *)PTR_DAT_037f2ef8 + 0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_017fc944(plVar9);
      }
      puVar5 = (undefined8 *)thunk_FUN_01861d10(plVar9);
      uVar3 = *puVar5;
      in_stack_000000a0 = uVar6;
      thunk_FUN_0188fd20(&stack0x000000a0,uVar6);
      in_stack_000000a8 = CONCAT44(in_stack_000000a8._4_4_,2);
      in_stack_000000b0 = (long *)0x0;
      in_stack_000000c0 = uVar3;
      thunk_FUN_0188fd20();
      in_stack_000000b8 = in_stack_000000b8 & 0xffffffff00000000;
      if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_017fc5a8();
      }
      if (*(uint *)(unaff_x19 + 0x18) <= unaff_w25) {
                    /* WARNING: Subroutine does not return */
        FUN_017fc5b0();
      }
      lVar7 = unaff_x19 + (int)unaff_w25 * unaff_x29;
      *(undefined8 *)(lVar7 + 0x40) = in_stack_000000c0;
      *(ulong *)(lVar7 + 0x28) = in_stack_000000a8;
      *(undefined8 *)(lVar7 + 0x20) = in_stack_000000a0;
      *(ulong *)(lVar7 + 0x38) = in_stack_000000b8;
      *(long **)(lVar7 + 0x30) = in_stack_000000b0;
      thunk_FUN_0188fd20(lVar7 + 0x20,0);
    }
    in_stack_000000c0 = 0;
    in_stack_000000a8 = 0;
    in_stack_000000a0 = 0;
    in_stack_000000b8 = 0;
    in_stack_000000b0 = (long *)0x0;
    if (*plVar9 != *(long *)PTR_DAT_037f5ae8) {
                    /* WARNING: Subroutine does not return */
      FUN_017fc944(plVar9);
    }
    in_stack_000000a0 = uVar6;
    thunk_FUN_0188fd20(&stack0x000000a0,uVar6);
    in_stack_000000a8 = in_stack_000000a8 & 0xffffffff00000000;
    in_stack_000000b0 = plVar9;
    thunk_FUN_0188fd20();
    in_stack_000000b8 = in_stack_000000b8 & 0xffffffff00000000;
    in_stack_000000c0 = 0;
    if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_017fc5a8();
    }
    if (*(uint *)(unaff_x19 + 0x18) <= unaff_w25) {
                    /* WARNING: Subroutine does not return */
      FUN_017fc5b0();
    }
    in_x9 = 0;
    param_1 = (long)(int)unaff_w25;
    uVar6 = in_stack_000000a0;
    uVar2 = in_stack_000000a8;
    plVar9 = in_stack_000000b0;
    uVar10 = in_stack_000000b8;
  } while( true );
}


