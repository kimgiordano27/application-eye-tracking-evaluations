/*
FUNCTION_NAME: OVRPlugin$$CreatePassthroughColorLut
ENTRY_POINT: 033c2670
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_14;ui_or_gameplay_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


ulong OVRPlugin__CreatePassthroughColorLut(long param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 uVar7;
  long unaff_x22;
  undefined8 unaff_x23;
  long unaff_x24;
  ulong unaff_x25;
  long unaff_x26;
  long unaff_x27;
  long *plVar8;
  undefined8 unaff_x29;
  uint uStack0000000000000000;
  uint uStack0000000000000004;
  long in_stack_00000008;
  long in_stack_00000010;
  long in_stack_00000018;
  long in_stack_00000020;
  
  do {
    plVar8 = (long *)
             Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material;
    if (unaff_x27 != *(long *)(param_1 + 0x18)) goto LAB_033c268c;
    while( true ) {
      unaff_x25 = unaff_x25 + 1;
      if ((long)*(int *)(unaff_x21 + 0x18) <= (long)unaff_x25) {
        if (((uStack0000000000000000 ^ uStack0000000000000004) & 1) != 0) {
          uVar6 = 1;
          if ((uStack0000000000000004 & 1) == 0) {
            uVar6 = 2;
          }
          return (ulong)uVar6;
        }
        if (unaff_x22 != 0 && (uStack0000000000000004 & 1) == 0) {
          if ((unaff_x20 == 0) || (unaff_x19 == 0)) goto LAB_033c2950;
          if (*(int *)(unaff_x19 + 0x18) < *(int *)(unaff_x20 + 0x18)) {
            return 1;
          }
          if (*(int *)(unaff_x20 + 0x18) < *(int *)(unaff_x19 + 0x18)) {
            return 2;
          }
        }
        return 0;
      }
      if (unaff_x22 != 0) break;
      param_2 = *plVar8;
LAB_033c268c:
      if (*(int *)(param_2 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      uVar2 = FUN_033ab18c();
      if ((uVar2 & 1) == 0) {
        if (unaff_x26 == 0) goto LAB_033c2950;
        if (*(uint *)(unaff_x26 + 0x18) <= unaff_x25) goto thunk_FUN_01d7db78;
        if (unaff_x20 == 0) goto LAB_033c2950;
LAB_033c2700:
        uVar6 = *(uint *)(in_stack_00000020 + unaff_x25 * 4);
        if (*(uint *)(unaff_x20 + 0x18) <= uVar6) goto thunk_FUN_01d7db78;
        plVar3 = *(long **)(unaff_x20 + (long)(int)uVar6 * 8 + 0x20);
        if (plVar3 == (long *)0x0) goto LAB_033c2950;
        uVar4 = (**(code **)(*plVar3 + 0x1d8))(plVar3,*(undefined8 *)(*plVar3 + 0x1e0));
      }
      else {
        if (unaff_x26 == 0) goto LAB_033c2950;
        if (*(uint *)(unaff_x26 + 0x18) <= unaff_x25) goto thunk_FUN_01d7db78;
        if (unaff_x20 == 0) goto LAB_033c2950;
        uVar4 = unaff_x23;
        if (*(int *)(in_stack_00000020 + unaff_x25 * 4) < *(int *)(unaff_x20 + 0x18) + -1) {
                    /* try { // try from 033c26dc to 034c27df has its CatchHandler @ 033c26dc
                       catch() { ... } // from try @ 033c26dc with catch @ 033c26dc
                       catch() { ... } // from try @ 033c2c60 with catch @ 033c26dc
                       catch() { ... } // from try @ 033c2cec with catch @ 033c26dc
                       catch() { ... } // from try @ 033c2d24 with catch @ 033c26dc
                       catch() { ... } // from try @ 033c2e44 with catch @ 033c26dc
                       catch() { ... } // from try @ 033c2f08 with catch @ 033c26dc
                       catch() { ... } // from try @ 033c2f64 with catch @ 033c26dc */
          if (unaff_x25 < *(uint *)(unaff_x26 + 0x18)) goto LAB_033c2700;
          goto thunk_FUN_01d7db78;
        }
      }
      if (*(int *)(*plVar8 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      uVar2 = FUN_033ab18c();
      if ((uVar2 & 1) == 0) {
        if (unaff_x24 == 0) goto LAB_033c2950;
        if (*(uint *)(unaff_x24 + 0x18) <= unaff_x25) goto thunk_FUN_01d7db78;
        if (unaff_x19 == 0) goto LAB_033c2950;
LAB_033c27a8:
        uVar6 = *(uint *)(in_stack_00000018 + unaff_x25 * 4);
        if (*(uint *)(unaff_x19 + 0x18) <= uVar6) goto thunk_FUN_01d7db78;
        plVar3 = *(long **)(unaff_x19 + (long)(int)uVar6 * 8 + 0x20);
        if (plVar3 == (long *)0x0) {
LAB_033c2950:
                    /* WARNING: Subroutine does not return */
          FUN_01d7db70();
        }
        uVar5 = (**(code **)(*plVar3 + 0x1d8))(plVar3,*(undefined8 *)(*plVar3 + 0x1e0));
      }
      else {
        if (unaff_x24 == 0) goto LAB_033c2950;
        if (*(uint *)(unaff_x24 + 0x18) <= unaff_x25) goto thunk_FUN_01d7db78;
        if (unaff_x19 == 0) goto LAB_033c2950;
        uVar5 = unaff_x29;
        if (*(int *)(in_stack_00000018 + unaff_x25 * 4) < *(int *)(unaff_x19 + 0x18) + -1) {
          if (unaff_x25 < *(uint *)(unaff_x24 + 0x18)) goto LAB_033c27a8;
          goto thunk_FUN_01d7db78;
        }
      }
      if (*(int *)(*plVar8 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      uVar2 = FUN_033aa3b4(uVar4,uVar5,0);
      if ((uVar2 & 1) == 0) {
        if (*(uint *)(unaff_x21 + 0x18) <= unaff_x25) goto thunk_FUN_01d7db78;
        uVar7 = *(undefined8 *)(in_stack_00000008 + unaff_x25 * 8);
        if (*(int *)(*(long *)StringLiteral_8523 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
        }
        uVar2 = FUN_033c2168(uVar4,uVar5,uVar7);
        iVar1 = (int)uVar2;
        plVar8 = (long *)
                 Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
        ;
        if (iVar1 == 1) {
          uStack0000000000000004 = 1;
        }
        else if (iVar1 == 2) {
          uStack0000000000000000 = 1;
        }
        else if (iVar1 == 0) {
          return uVar2;
        }
      }
    }
    if (*(uint *)(unaff_x22 + 0x18) <= unaff_x25) {
thunk_FUN_01d7db78:
                    /* WARNING: Subroutine does not return */
      FUN_01d7db78();
    }
    param_2 = *plVar8;
    unaff_x27 = *(long *)(in_stack_00000010 + unaff_x25 * 8);
    if (*(int *)(param_2 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
      param_2 = *plVar8;
    }
    param_1 = *(long *)(param_2 + 0xb8);
  } while( true );
}


