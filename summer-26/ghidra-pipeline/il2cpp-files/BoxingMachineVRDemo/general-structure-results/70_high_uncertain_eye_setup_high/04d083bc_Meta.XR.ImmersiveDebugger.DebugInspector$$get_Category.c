/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.DebugInspector$$get_Category
ENTRY_POINT: 04d083bc
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_DebugInspector__get_Category(long param_1)

{
  uint uVar1;
  ushort uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  void *__src;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  ulong in_x9;
  size_t unaff_x19;
  void *unaff_x20;
  void *unaff_x21;
  void *unaff_x22;
  ulong unaff_x24;
  code *pcVar10;
  long unaff_x25;
  undefined8 unaff_x26;
  undefined8 uVar11;
  uint uVar12;
  long *unaff_x28;
  long unaff_x29;
  
  if ((in_x9 & 1) == 0) {
    param_1 = FUN_02d9a2e0(param_1);
  }
  if ((unaff_x24 & 1) == 0) {
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0xc0) + 0x10);
    FUN_028f4b80(*(undefined8 *)(unaff_x25 + 0xe0));
    plVar5 = (long *)FUN_05015c2c(uVar3,0);
    FUN_028f4e40();
    uVar3 = (**(code **)(*plVar5 + 0x2d8))(plVar5,*(undefined8 *)(*plVar5 + 0x2e0));
    thunk_FUN_02dc61f4(PTR_DAT_06763b78);
    uVar11 = thunk_FUN_02d9d534();
    uVar7 = thunk_FUN_02dc61f4(PTR_DAT_0676c448);
    FUN_04f77088(uVar11,uVar7,uVar3,0);
                    /* WARNING: Subroutine does not return */
    FUN_02d609b4(uVar11);
  }
  if ((*(byte *)(*(long *)(*(long *)(param_1 + 0xc0) + 0x18) + 0x135) & 1) == 0) {
    FUN_02d9a2e0();
  }
  uVar3 = thunk_FUN_02d9d534();
  lVar8 = *unaff_x28;
  uVar2 = *(ushort *)(lVar8 + 0x135);
  lVar4 = lVar8;
  if ((uVar2 & 1) == 0) {
    lVar8 = FUN_02d9a2e0(lVar8);
    uVar2 = *(ushort *)(*unaff_x28 + 0x135);
    lVar4 = *unaff_x28;
  }
  pcVar10 = (code *)**(undefined8 **)(*(long *)(lVar8 + 0xc0) + 0x20);
  if ((uVar2 & 1) == 0) {
    lVar4 = FUN_02d9a2e0(lVar4);
  }
  (*pcVar10)(uVar3,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x20));
  lVar4 = *unaff_x28;
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02d9a2e0();
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x28);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02d9a2e0();
  }
  **(undefined8 **)(lVar4 + 0xb8) = uVar3;
  lVar4 = *unaff_x28;
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02d9a2e0();
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x28);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02d9a2e0();
  }
  thunk_FUN_02dd37b4(*(undefined8 *)(lVar4 + 0xb8),uVar3);
  lVar4 = *unaff_x28;
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02d9a2e0();
  }
  if ((*(byte *)(*(long *)(*(long *)(lVar4 + 0xc0) + 0x38) + 0x135) & 1) == 0) {
    FUN_02d9a2e0();
  }
  uVar3 = thunk_FUN_02d9d534();
  lVar8 = *unaff_x28;
  uVar2 = *(ushort *)(lVar8 + 0x135);
  lVar4 = lVar8;
  if ((uVar2 & 1) == 0) {
    lVar8 = FUN_02d9a2e0(lVar8);
    uVar2 = *(ushort *)(*unaff_x28 + 0x135);
    lVar4 = *unaff_x28;
  }
  pcVar10 = (code *)**(undefined8 **)(*(long *)(lVar8 + 0xc0) + 0x40);
  if ((uVar2 & 1) == 0) {
    lVar4 = FUN_02d9a2e0(lVar4);
  }
  (*pcVar10)(uVar3,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x40));
  lVar4 = *unaff_x28;
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02d9a2e0();
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x28);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02d9a2e0();
  }
  *(undefined8 *)(*(long *)(lVar4 + 0xb8) + 8) = uVar3;
  lVar4 = *unaff_x28;
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02d9a2e0();
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x28);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02d9a2e0();
  }
  thunk_FUN_02dd37b4(*(long *)(lVar4 + 0xb8) + 8,uVar3);
  lVar4 = *unaff_x28;
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02d9a2e0();
  }
  uVar3 = *(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x10);
  if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dbd7b4(*(long *)(unaff_x25 + 0xe0));
  }
  *(undefined8 *)(unaff_x29 + -0x20) = unaff_x26;
  plVar5 = (long *)FUN_05015c2c(uVar3,0);
  if ((plVar5 != (long *)0x0) &&
     (lVar4 = (**(code **)(*plVar5 + 0x6d8))(plVar5,0x18,*(undefined8 *)(*plVar5 + 0x6e0)),
     lVar4 != 0)) {
    uVar1 = *(uint *)(lVar4 + 0x18);
    if (0 < (int)uVar1) {
      uVar12 = 0;
      do {
        if (uVar1 <= uVar12) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60af0();
        }
        plVar5 = *(long **)(lVar4 + (long)(int)uVar12 * 8 + 0x20);
        if (plVar5 == (long *)0x0) goto LAB_04d08834;
        uVar3 = (**(code **)(*plVar5 + 0x1b8))(plVar5,*(undefined8 *)(*plVar5 + 0x1c0));
        plVar5 = (long *)(**(code **)(*plVar5 + 0x2e8))(plVar5,0,*(undefined8 *)(*plVar5 + 0x2f0));
        lVar8 = *unaff_x28;
        if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
          lVar8 = FUN_02d9a2e0(lVar8);
        }
        lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x48);
        if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
          lVar8 = FUN_02d9a2e0(lVar8);
        }
        if (plVar5 == (long *)0x0) goto LAB_04d08834;
        if (*(long *)(*plVar5 + 0x40) != *(long *)(lVar8 + 0x40)) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60e88(plVar5);
        }
        __src = (void *)thunk_FUN_02d9d688();
        memcpy(unaff_x22,__src,unaff_x19);
        lVar8 = *unaff_x28;
        if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
          lVar8 = FUN_02d9a2e0();
        }
        lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x28);
        if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
          lVar8 = FUN_02d9a2e0();
        }
        lVar8 = **(long **)(lVar8 + 0xb8);
        memcpy(unaff_x20,unaff_x22,unaff_x19);
        if (lVar8 == 0) goto LAB_04d08834;
        lVar9 = *unaff_x28;
        uVar2 = *(ushort *)(lVar9 + 0x135);
        lVar6 = lVar9;
        if ((uVar2 & 1) == 0) {
          lVar9 = FUN_02d9a2e0(lVar9);
          uVar2 = *(ushort *)(*unaff_x28 + 0x135);
          lVar6 = *unaff_x28;
        }
        uVar11 = **(undefined8 **)(*(long *)(lVar9 + 0xc0) + 0x50);
        if ((uVar2 & 1) == 0) {
          lVar6 = FUN_02d9a2e0(lVar6);
        }
        lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x50);
        *(undefined8 *)(unaff_x29 + -0x18) = uVar3;
        *(void **)(unaff_x29 + -0x10) = unaff_x20;
        (**(code **)(lVar6 + 0x10))(uVar11,lVar6,lVar8,unaff_x29 + -0x18);
        lVar8 = *unaff_x28;
        if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
          lVar8 = FUN_02d9a2e0();
        }
        lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x28);
        if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
          lVar8 = FUN_02d9a2e0();
        }
        lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 8);
        memcpy(unaff_x21,unaff_x22,unaff_x19);
        if (lVar8 == 0) goto LAB_04d08834;
        lVar9 = *unaff_x28;
        uVar2 = *(ushort *)(lVar9 + 0x135);
        lVar6 = lVar9;
        if ((uVar2 & 1) == 0) {
          lVar9 = FUN_02d9a2e0(lVar9);
          uVar2 = *(ushort *)(*unaff_x28 + 0x135);
          lVar6 = *unaff_x28;
        }
        uVar11 = **(undefined8 **)(*(long *)(lVar9 + 0xc0) + 0x58);
        if ((uVar2 & 1) == 0) {
          lVar6 = FUN_02d9a2e0(lVar6);
        }
        lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x58);
        *(void **)(unaff_x29 + -0x18) = unaff_x21;
        *(undefined8 *)(unaff_x29 + -0x10) = uVar3;
        (**(code **)(lVar6 + 0x10))(uVar11,lVar6,lVar8,unaff_x29 + -0x18,uVar3);
        uVar1 = *(uint *)(lVar4 + 0x18);
        uVar12 = uVar12 + 1;
      } while ((int)uVar12 < (int)uVar1);
    }
    if (*(long *)(*(long *)(unaff_x29 + -0x20) + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
LAB_04d08834:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


