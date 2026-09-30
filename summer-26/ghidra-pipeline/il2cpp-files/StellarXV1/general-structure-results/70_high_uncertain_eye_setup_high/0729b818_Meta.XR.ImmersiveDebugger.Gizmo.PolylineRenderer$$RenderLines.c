/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.PolylineRenderer$$RenderLines
ENTRY_POINT: 0729b818
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 Meta_XR_ImmersiveDebugger_Gizmo_PolylineRenderer__RenderLines(void)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int in_w8;
  long lVar5;
  uint uVar6;
  uint uVar7;
  uint *unaff_x19;
  int unaff_w21;
  int unaff_w22;
  ulong unaff_x23;
  uint unaff_w24;
  uint unaff_w25;
  long unaff_x26;
  int unaff_w27;
  uint unaff_w28;
  long unaff_x29;
  ulong in_stack_00000008;
  ulong in_stack_00000010;
  
  while( true ) {
    if (in_w8 == 0) {
      thunk_FUN_040d65a8();
    }
    uVar4 = *unaff_x19;
    if ((unaff_w25 & 0x1f) != 0) {
      uVar6 = 1 << (ulong)(unaff_w25 & 0x1f);
      do {
        uVar7 = uVar4 << 1;
        uVar2 = uVar4 & 0x8000;
        uVar4 = unaff_w28 ^ uVar4 << 1;
        if ((uVar2 == 0) == ((unaff_w24 & uVar6 >> 1) == 0)) {
          uVar4 = uVar7;
        }
        bVar1 = 3 < uVar6;
        uVar6 = uVar6 >> 1;
      } while (bVar1);
      *unaff_x19 = uVar4;
    }
    unaff_x23 = unaff_x23 + 1;
    unaff_w27 = unaff_w22 + unaff_w27;
    *unaff_x19 = uVar4 & 0xffff;
    if (unaff_x23 == in_stack_00000010) {
      if (((in_stack_00000008 & 0x100000000) != 0) && (1 < unaff_w27)) {
        do {
          uVar4 = FUN_0729c9a4();
          if (*(int *)(*(long *)PTR_DAT_092c2180 + 0xe4) == 0) {
            thunk_FUN_040d65a8(*(long *)PTR_DAT_092c2180);
          }
          uVar6 = *unaff_x19;
          uVar7 = 4;
          do {
            uVar2 = uVar6 << 1;
            uVar3 = uVar6 & 0x8000;
            uVar6 = uVar6 << 1 ^ 0x8005;
            if ((uVar3 == 0) == ((uVar4 & uVar7 >> 1) == 0)) {
              uVar6 = uVar2;
            }
            bVar1 = 3 < uVar7;
            uVar7 = uVar7 >> 1;
          } while (bVar1);
          *unaff_x19 = uVar6 & 0xffff;
          bVar1 = 3 < unaff_w27;
          unaff_w27 = unaff_w27 + -2;
        } while (bVar1);
      }
      return 1;
    }
    if (*(uint *)(unaff_x29 + 0x18) <= unaff_x23) break;
    if (unaff_x26 == 0) {
LAB_0729b94c:
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    uVar4 = *(uint *)(unaff_x29 + unaff_x23 * 4 + 0x20);
    if (*(uint *)(unaff_x26 + 0x18) <= uVar4) break;
    lVar5 = *(long *)(unaff_x26 + (long)(int)uVar4 * 8 + 0x20);
    if (lVar5 == 0) goto LAB_0729b94c;
    if (*(int *)(lVar5 + 0x18) == 0) break;
    unaff_w25 = *(uint *)(lVar5 + 0x20);
    unaff_w24 = FUN_0729c9a4();
    unaff_w22 = unaff_w21;
    if ((int)unaff_w24 < 1) {
      unaff_w22 = 0;
    }
    in_w8 = *(int *)(*(long *)PTR_DAT_092c2180 + 0xe4);
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077838();
}


