/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Tweak<__Il2CppFullySharedGenericType>$$set_Tween
ENTRY_POINT: 042ca0ac
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_Tweak<__Il2CppFullySharedGenericType>__set_Tween
               (undefined8 param_1,undefined8 param_2)

{
  ushort uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long *plVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  undefined4 unaff_s8;
  undefined4 unaff_s9;
  undefined4 unaff_s10;
  undefined4 unaff_s11;
  long in_stack_00000020;
  long in_stack_00000028;
  long in_stack_00000030;
  long in_stack_00000038;
  
  lVar2 = FUN_02f41e9c(param_2);
  lVar6 = *unaff_x21;
  uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == lVar2) {
        puVar3 = (undefined8 *)(lVar6 + (long)(*piVar9 + 5) * 0x10 + 0x138);
        goto LAB_042ca104;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar3 = (undefined8 *)FUN_02f421d0();
LAB_042ca104:
  uVar8 = (*(code *)*puVar3)(unaff_s11,unaff_s10);
  if ((uVar8 & 1) == 0) {
    lVar2 = *(long *)(unaff_x19 + 0x20);
    in_stack_00000028 = unaff_x20[1];
    in_stack_00000020 = *unaff_x20;
    in_stack_00000038 = unaff_x20[3];
    in_stack_00000030 = unaff_x20[2];
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02f41e9c();
    }
    uVar4 = thunk_FUN_02f44ec4(**(undefined8 **)(lVar2 + 0xc0),&stack0x00000020);
    uVar5 = thunk_FUN_02f45270(*(undefined8 *)PTR_DAT_067c8fb0);
    lVar2 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02f41e9c(lVar2);
    }
    FUN_05054f60(uVar5,uVar4,*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x50),0);
    if (*(int *)(*(long *)PTR_DAT_067c9bb0 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    FUN_05135d10(&stack0x00000048,uVar5,0);
    lVar2 = *(long *)(unaff_x19 + 0x20);
    plVar10 = (long *)unaff_x20[3];
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02f41e9c();
    }
    uVar4 = thunk_FUN_02f44ec4(**(undefined8 **)(lVar2 + 0xc0));
    lVar2 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02f41e9c(lVar2);
    }
    if ((*(ushort *)(*(long *)(*(long *)(lVar2 + 0xc0) + 0x60) + 0x135) & 1) == 0) {
      FUN_02f41e9c();
    }
    uVar5 = thunk_FUN_02f45270();
    lVar6 = *(long *)(unaff_x19 + 0x20);
    uVar1 = *(ushort *)(lVar6 + 0x135);
    lVar2 = lVar6;
    if ((uVar1 & 1) == 0) {
      lVar6 = FUN_02f41e9c(lVar6);
      uVar1 = *(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135);
      lVar2 = *(long *)(unaff_x19 + 0x20);
    }
    uVar11 = *(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x58);
    if ((uVar1 & 1) == 0) {
      lVar2 = FUN_02f41e9c(lVar2);
    }
    FUN_04761af8(uVar5,uVar4,uVar11,*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x68));
    if (plVar10 != (long *)0x0) {
      lVar2 = *(long *)(unaff_x19 + 0x20);
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_02f41e9c();
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x30);
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_02f41e9c(lVar2);
      }
      lVar6 = *plVar10;
      uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == lVar2) {
            puVar3 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_042ca408;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar3 = (undefined8 *)FUN_02f421d0(plVar10,lVar2,0);
LAB_042ca408:
      (*(code *)*puVar3)(plVar10,uVar5,puVar3[1]);
      return;
    }
  }
  else {
    plVar10 = (long *)unaff_x20[3];
    if (plVar10 != (long *)0x0) {
      lVar2 = *(long *)(unaff_x19 + 0x20);
      lVar6 = *unaff_x20;
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_02f41e9c();
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x30);
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_02f41e9c(lVar2);
      }
      lVar7 = *plVar10;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == lVar2) {
            puVar3 = (undefined8 *)(lVar7 + (long)(*piVar9 + 3) * 0x10 + 0x138);
            goto LAB_042ca390;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar3 = (undefined8 *)FUN_02f421d0(plVar10,lVar2,3);
LAB_042ca390:
      uVar12 = (*(code *)*puVar3)(plVar10,puVar3[1]);
      if (lVar6 != 0) {
        lVar2 = *(long *)(unaff_x19 + 0x20);
        if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_02f41e9c();
        }
        FUN_04304e38(uVar12,unaff_s10,unaff_s9,unaff_s8,lVar6,
                     *(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x48));
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


