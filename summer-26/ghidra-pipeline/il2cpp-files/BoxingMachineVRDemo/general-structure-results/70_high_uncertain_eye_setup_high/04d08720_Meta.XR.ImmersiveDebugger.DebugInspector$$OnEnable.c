/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.DebugInspector$$OnEnable
ENTRY_POINT: 04d08720
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_DebugInspector__OnEnable(long param_1)

{
  ushort uVar1;
  void *__src;
  long lVar2;
  long lVar3;
  long lVar4;
  size_t unaff_x19;
  void *unaff_x20;
  void *unaff_x21;
  void *unaff_x22;
  long unaff_x23;
  undefined8 unaff_x24;
  long *plVar5;
  long unaff_x25;
  undefined8 unaff_x26;
  undefined8 uVar6;
  uint unaff_w27;
  long *unaff_x28;
  long unaff_x29;
  
  while( true ) {
    lVar3 = *(long *)(*(long *)(param_1 + 0xc0) + 0x50);
    *(undefined8 *)(unaff_x29 + -0x18) = unaff_x24;
    *(void **)(unaff_x29 + -0x10) = unaff_x20;
    (**(code **)(lVar3 + 0x10))(unaff_x26,lVar3,unaff_x25,unaff_x29 + -0x18);
    lVar3 = *unaff_x28;
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02d9a2e0();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x28);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02d9a2e0();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
    memcpy(unaff_x21,unaff_x22,unaff_x19);
    if (lVar3 == 0) break;
    lVar4 = *unaff_x28;
    uVar1 = *(ushort *)(lVar4 + 0x135);
    lVar2 = lVar4;
    if ((uVar1 & 1) == 0) {
      lVar4 = FUN_02d9a2e0(lVar4);
      uVar1 = *(ushort *)(*unaff_x28 + 0x135);
      lVar2 = *unaff_x28;
    }
    uVar6 = **(undefined8 **)(*(long *)(lVar4 + 0xc0) + 0x58);
    if ((uVar1 & 1) == 0) {
      lVar2 = FUN_02d9a2e0(lVar2);
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x58);
    *(void **)(unaff_x29 + -0x18) = unaff_x21;
    *(undefined8 *)(unaff_x29 + -0x10) = unaff_x24;
    (**(code **)(lVar2 + 0x10))(uVar6,lVar2,lVar3,unaff_x29 + -0x18,unaff_x24);
    unaff_w27 = unaff_w27 + 1;
    if ((int)*(uint *)(unaff_x23 + 0x18) <= (int)unaff_w27) {
      if (*(long *)(*(long *)(unaff_x29 + -0x20) + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    if (*(uint *)(unaff_x23 + 0x18) <= unaff_w27) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60af0();
    }
    plVar5 = *(long **)(unaff_x23 + (long)(int)unaff_w27 * 8 + 0x20);
    if (plVar5 == (long *)0x0) break;
    unaff_x24 = (**(code **)(*plVar5 + 0x1b8))(plVar5,*(undefined8 *)(*plVar5 + 0x1c0));
    plVar5 = (long *)(**(code **)(*plVar5 + 0x2e8))(plVar5,0,*(undefined8 *)(*plVar5 + 0x2f0));
    lVar3 = *unaff_x28;
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02d9a2e0(lVar3);
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x48);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02d9a2e0(lVar3);
    }
    if (plVar5 == (long *)0x0) break;
    if (*(long *)(*plVar5 + 0x40) != *(long *)(lVar3 + 0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60e88(plVar5);
    }
    __src = (void *)thunk_FUN_02d9d688();
    memcpy(unaff_x22,__src,unaff_x19);
    lVar3 = *unaff_x28;
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02d9a2e0();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x28);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02d9a2e0();
    }
    unaff_x25 = **(long **)(lVar3 + 0xb8);
    memcpy(unaff_x20,unaff_x22,unaff_x19);
    if (unaff_x25 == 0) break;
    lVar3 = *unaff_x28;
    uVar1 = *(ushort *)(lVar3 + 0x135);
    param_1 = lVar3;
    if ((uVar1 & 1) == 0) {
      lVar3 = FUN_02d9a2e0(lVar3);
      uVar1 = *(ushort *)(*unaff_x28 + 0x135);
      param_1 = *unaff_x28;
    }
    unaff_x26 = **(undefined8 **)(*(long *)(lVar3 + 0xc0) + 0x50);
    if ((uVar1 & 1) == 0) {
      param_1 = FUN_02d9a2e0(param_1);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


