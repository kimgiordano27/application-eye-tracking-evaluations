/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.PolylineRenderer$$Cleanup
ENTRY_POINT: 0729b670
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


undefined8 Meta_XR_ImmersiveDebugger_Gizmo_PolylineRenderer__Cleanup(long param_1)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  long lVar9;
  long in_x9;
  ulong in_x10;
  ulong uVar10;
  uint *unaff_x19;
  int iVar11;
  long unaff_x26;
  int iVar12;
  ulong uVar13;
  long unaff_x29;
  ulong in_stack_00000008;
  ulong in_stack_00000010;
  
  uVar10 = in_x9 + 4;
  if (param_1 != 1) {
    uVar10 = in_x10;
  }
  iVar7 = 1;
  if (param_1 != 3) {
    iVar7 = 2;
  }
  if ((int)uVar10 < 1) {
    uVar10 = 0;
    iVar12 = 0;
  }
  else {
    iVar12 = 0;
    uVar13 = 0;
    do {
      if (*(uint *)(unaff_x29 + 0x18) <= uVar13) goto LAB_0729b948;
      if (unaff_x26 == 0) goto LAB_0729b94c;
      uVar6 = *(uint *)(unaff_x29 + uVar13 * 4 + 0x20);
      if (*(uint *)(unaff_x26 + 0x18) <= uVar6) goto LAB_0729b948;
      lVar9 = *(long *)(unaff_x26 + (long)(int)uVar6 * 8 + 0x20);
      if (lVar9 == 0) goto LAB_0729b94c;
      if (*(int *)(lVar9 + 0x18) == 0) goto LAB_0729b948;
      uVar6 = *(uint *)(lVar9 + 0x20);
      iVar11 = 0;
      do {
        uVar5 = FUN_0729c9a4();
        if (0 < (int)uVar5) {
          iVar12 = iVar12 + 2;
        }
        if (*(int *)(*(long *)PTR_DAT_092c2180 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
        }
        uVar8 = *unaff_x19;
        uVar3 = 1 << (ulong)(uVar6 & 0x1f);
        if ((uVar6 & 0x1f) != 0) {
          do {
            uVar2 = uVar8 << 1;
            uVar4 = uVar8 & 0x8000;
            uVar8 = uVar8 << 1 ^ 0x8005;
            if ((uVar4 == 0) == ((uVar5 & uVar3 >> 1) == 0)) {
              uVar8 = uVar2;
            }
            bVar1 = 3 < uVar3;
            uVar3 = uVar3 >> 1;
          } while (bVar1);
          *unaff_x19 = uVar8;
        }
        iVar11 = iVar11 + 1;
        *unaff_x19 = uVar8 & 0xffff;
      } while (iVar11 != iVar7);
      uVar13 = uVar13 + 1;
    } while (uVar13 != uVar10);
  }
  if ((int)uVar10 < (int)in_stack_00000010) {
    do {
      if (*(uint *)(unaff_x29 + 0x18) <= uVar10) {
LAB_0729b948:
                    /* WARNING: Subroutine does not return */
        FUN_04077838();
      }
      if (unaff_x26 == 0) {
LAB_0729b94c:
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      uVar6 = *(uint *)(unaff_x29 + uVar10 * 4 + 0x20);
      if (*(uint *)(unaff_x26 + 0x18) <= uVar6) goto LAB_0729b948;
      lVar9 = *(long *)(unaff_x26 + (long)(int)uVar6 * 8 + 0x20);
      if (lVar9 == 0) goto LAB_0729b94c;
      if (*(int *)(lVar9 + 0x18) == 0) goto LAB_0729b948;
      uVar6 = *(uint *)(lVar9 + 0x20);
      uVar5 = FUN_0729c9a4();
      iVar11 = iVar7 << 1;
      if ((int)uVar5 < 1) {
        iVar11 = 0;
      }
      if (*(int *)(*(long *)PTR_DAT_092c2180 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      uVar8 = *unaff_x19;
      uVar6 = uVar6 & 0x1f;
      if (uVar6 != 0) {
        uVar6 = 1 << (ulong)uVar6;
        do {
          uVar3 = uVar8 << 1;
          uVar2 = uVar8 & 0x8000;
          uVar8 = uVar8 << 1 ^ 0x8005;
          if ((uVar2 == 0) == ((uVar5 & uVar6 >> 1) == 0)) {
            uVar8 = uVar3;
          }
          bVar1 = 3 < uVar6;
          uVar6 = uVar6 >> 1;
        } while (bVar1);
        *unaff_x19 = uVar8;
      }
      uVar10 = uVar10 + 1;
      iVar12 = iVar11 + iVar12;
      *unaff_x19 = uVar8 & 0xffff;
    } while (uVar10 != in_stack_00000010);
  }
  if (((in_stack_00000008 & 0x100000000) != 0) && (1 < iVar12)) {
    do {
      uVar6 = FUN_0729c9a4();
      if (*(int *)(*(long *)PTR_DAT_092c2180 + 0xe4) == 0) {
        thunk_FUN_040d65a8(*(long *)PTR_DAT_092c2180);
      }
      uVar5 = *unaff_x19;
      uVar8 = 4;
      do {
        uVar3 = uVar5 << 1;
        uVar2 = uVar5 & 0x8000;
        uVar5 = uVar5 << 1 ^ 0x8005;
        if ((uVar2 == 0) == ((uVar6 & uVar8 >> 1) == 0)) {
          uVar5 = uVar3;
        }
        bVar1 = 3 < uVar8;
        uVar8 = uVar8 >> 1;
      } while (bVar1);
      *unaff_x19 = uVar5 & 0xffff;
      bVar1 = 3 < iVar12;
      iVar12 = iVar12 + -2;
    } while (bVar1);
  }
  return 1;
}


