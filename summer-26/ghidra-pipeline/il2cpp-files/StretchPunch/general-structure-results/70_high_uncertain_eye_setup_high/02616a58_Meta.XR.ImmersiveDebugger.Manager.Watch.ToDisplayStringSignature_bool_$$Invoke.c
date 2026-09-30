/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch.ToDisplayStringSignature<bool>$$Invoke
ENTRY_POINT: 02616a58
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_Watch_ToDisplayStringSignature<bool>__Invoke(void)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  uint unaff_w19;
  long unaff_x20;
  long unaff_x21;
  long *plVar9;
  int iVar10;
  
  plVar2 = (long *)thunk_FUN_01de26bc();
  if (plVar2 == (long *)0x0) {
    FUN_033b3618();
  }
  plVar9 = *(long **)(unaff_x21 + 0x10);
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01d7db70();
  }
  lVar5 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x10);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_01dde7f8(lVar5);
  }
  lVar6 = *plVar9;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == lVar5) {
        puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_02616b1c;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar3 = (undefined8 *)FUN_01dde8fc(plVar9,lVar5,0);
LAB_02616b1c:
  iVar1 = (*(code *)*puVar3)(plVar9,puVar3[1]);
  if (0 < iVar1) {
    iVar10 = 0;
    do {
      plVar9 = *(long **)(unaff_x21 + 0x10);
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01d7db70();
      }
      lVar5 = **(long **)(*(long *)(unaff_x20 + 0x20) + 0xc0);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_01dde7f8(lVar5);
      }
      lVar6 = *plVar9;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == lVar5) {
            puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_02616ba8;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar3 = (undefined8 *)FUN_01dde8fc(plVar9,lVar5,0);
LAB_02616ba8:
      (*(code *)*puVar3)(plVar9,iVar10,puVar3[1]);
      lVar5 = thunk_FUN_01de23e8(*(undefined8 *)
                                  (*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x28));
      if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01d7db70();
      }
      if ((lVar5 != 0) &&
         (lVar6 = thunk_FUN_01de26bc(lVar5,*(undefined8 *)(*plVar2 + 0x40)), lVar6 == 0)) {
        uVar4 = thunk_FUN_01dfb5cc();
                    /* WARNING: Subroutine does not return */
        FUN_01d7da3c(uVar4,0);
      }
      if (*(uint *)(plVar2 + 3) <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
        FUN_01d7db78();
      }
      plVar2[(long)(int)unaff_w19 + 4] = lVar5;
      thunk_FUN_01e10808(plVar2 + (long)(int)unaff_w19 + 4,lVar5);
      iVar10 = iVar10 + 1;
      unaff_w19 = unaff_w19 + 1;
    } while (iVar10 != iVar1);
  }
  return;
}


