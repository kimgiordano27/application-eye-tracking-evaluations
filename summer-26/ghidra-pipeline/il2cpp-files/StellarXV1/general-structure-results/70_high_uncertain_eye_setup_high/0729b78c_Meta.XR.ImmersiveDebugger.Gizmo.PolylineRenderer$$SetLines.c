/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.PolylineRenderer$$SetLines
ENTRY_POINT: 0729b78c
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_9;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 Meta_XR_ImmersiveDebugger_Gizmo_PolylineRenderer__SetLines(void)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined1 in_ZR;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  ulong in_x13;
  uint *unaff_x19;
  int unaff_w21;
  int iVar9;
  uint unaff_w23;
  long unaff_x26;
  int unaff_w27;
  ulong unaff_x28;
  long unaff_x29;
  ulong in_stack_00000008;
  ulong in_stack_00000010;
  ulong in_stack_00000018;
  long in_stack_00000020;
  long in_stack_00000028;
  
  while (!(bool)in_ZR) {
    if (*(uint *)(unaff_x29 + 0x18) <= unaff_x28) goto LAB_0729b948;
    if (unaff_x26 == 0) goto LAB_0729b94c;
    uVar6 = *(uint *)(unaff_x29 + unaff_x28 * 4 + 0x20);
    if (*(uint *)(unaff_x26 + 0x18) <= uVar6) goto LAB_0729b948;
    lVar8 = *(long *)(unaff_x26 + (long)(int)uVar6 * 8 + 0x20);
    if (lVar8 == 0) goto LAB_0729b94c;
    if (*(int *)(lVar8 + 0x18) == 0) goto LAB_0729b948;
    uVar6 = *(uint *)(lVar8 + 0x20);
    iVar9 = 0;
    do {
      uVar5 = FUN_0729c9a4();
      if (0 < (int)uVar5) {
        unaff_w27 = unaff_w27 + 2;
      }
      if (*(int *)(*(long *)PTR_DAT_092c2180 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      uVar7 = *unaff_x19;
      uVar2 = 1 << (ulong)(uVar6 & 0x1f);
      if ((uVar6 & 0x1f) != 0) {
        do {
          uVar4 = uVar7 << 1;
          uVar3 = uVar7 & 0x8000;
          uVar7 = unaff_w23 ^ uVar7 << 1;
          if ((uVar3 == 0) == ((uVar5 & uVar2 >> 1) == 0)) {
            uVar7 = uVar4;
          }
          bVar1 = 3 < uVar2;
          uVar2 = uVar2 >> 1;
        } while (bVar1);
        *unaff_x19 = uVar7;
      }
      iVar9 = iVar9 + 1;
      *unaff_x19 = uVar7 & 0xffff;
    } while (iVar9 != unaff_w21);
    unaff_x28 = unaff_x28 + 1;
    in_x13 = in_stack_00000018;
    unaff_x26 = in_stack_00000028;
    unaff_x29 = in_stack_00000020;
    in_ZR = unaff_x28 == in_stack_00000018;
  }
  if ((int)in_x13 < (int)in_stack_00000010) {
    do {
      if (*(uint *)(unaff_x29 + 0x18) <= in_x13) {
LAB_0729b948:
                    /* WARNING: Subroutine does not return */
        FUN_04077838();
      }
      if (unaff_x26 == 0) {
LAB_0729b94c:
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      uVar6 = *(uint *)(unaff_x29 + in_x13 * 4 + 0x20);
      if (*(uint *)(unaff_x26 + 0x18) <= uVar6) goto LAB_0729b948;
      lVar8 = *(long *)(unaff_x26 + (long)(int)uVar6 * 8 + 0x20);
      if (lVar8 == 0) goto LAB_0729b94c;
      if (*(int *)(lVar8 + 0x18) == 0) goto LAB_0729b948;
      uVar6 = *(uint *)(lVar8 + 0x20);
      uVar5 = FUN_0729c9a4();
      iVar9 = unaff_w21 << 1;
      if ((int)uVar5 < 1) {
        iVar9 = 0;
      }
      if (*(int *)(*(long *)PTR_DAT_092c2180 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      uVar7 = *unaff_x19;
      uVar6 = uVar6 & 0x1f;
      if (uVar6 != 0) {
        uVar6 = 1 << (ulong)uVar6;
        do {
          uVar2 = uVar7 << 1;
          uVar4 = uVar7 & 0x8000;
          uVar7 = uVar7 << 1 ^ 0x8005;
          if ((uVar4 == 0) == ((uVar5 & uVar6 >> 1) == 0)) {
            uVar7 = uVar2;
          }
          bVar1 = 3 < uVar6;
          uVar6 = uVar6 >> 1;
        } while (bVar1);
        *unaff_x19 = uVar7;
      }
      in_x13 = in_x13 + 1;
      unaff_w27 = iVar9 + unaff_w27;
      *unaff_x19 = uVar7 & 0xffff;
    } while (in_x13 != in_stack_00000010);
  }
  if (((in_stack_00000008 & 0x100000000) != 0) && (1 < unaff_w27)) {
    do {
      uVar6 = FUN_0729c9a4();
      if (*(int *)(*(long *)PTR_DAT_092c2180 + 0xe4) == 0) {
        thunk_FUN_040d65a8(*(long *)PTR_DAT_092c2180);
      }
      uVar5 = *unaff_x19;
      uVar7 = 4;
      do {
        uVar2 = uVar5 << 1;
        uVar4 = uVar5 & 0x8000;
        uVar5 = uVar5 << 1 ^ 0x8005;
        if ((uVar4 == 0) == ((uVar6 & uVar7 >> 1) == 0)) {
          uVar5 = uVar2;
        }
        bVar1 = 3 < uVar7;
        uVar7 = uVar7 >> 1;
      } while (bVar1);
      *unaff_x19 = uVar5 & 0xffff;
      bVar1 = 3 < unaff_w27;
      unaff_w27 = unaff_w27 + -2;
    } while (bVar1);
  }
  return 1;
}


