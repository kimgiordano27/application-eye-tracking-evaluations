/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.DebugGizmos$$DrawPlane
ENTRY_POINT: 0729cf00
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_11;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Gizmo_DebugGizmos__DrawPlane
               (long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  ulong in_x9;
  long lVar9;
  int *piVar10;
  int *in_x10;
  ulong uVar11;
  long in_x11;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  uint unaff_w23;
  long *unaff_x24;
  ulong unaff_x25;
  long lVar12;
  long unaff_x26;
  ulong unaff_x27;
  long unaff_x28;
  
  do {
    if (in_x11 == param_3) {
      puVar5 = (undefined8 *)(param_1 + (long)(*in_x10 + 0xe) * 0x10 + 0x138);
      goto LAB_0729cf34;
    }
    in_x9 = in_x9 - 1;
    in_x10 = in_x10 + 4;
    if (in_x9 == 0) {
      do {
        puVar5 = (undefined8 *)FUN_040b1e00();
LAB_0729cf34:
        iVar4 = (*(code *)*puVar5)();
        if (*(uint *)(unaff_x26 + 0x18) <= iVar4 + 1U) goto LAB_0729d0d8;
        if (unaff_x28 == 0) goto LAB_0729d0dc;
        if (*(uint *)(unaff_x28 + 0x18) <= (uint)unaff_x25) goto LAB_0729d0d8;
        unaff_x27 = unaff_x27 + 1;
        *(undefined4 *)(unaff_x28 + unaff_x25 * 4 + 0x20) =
             *(undefined4 *)(unaff_x26 + (long)(int)(iVar4 + 1U) * 4 + 0x20);
        if (*(int *)(unaff_x21 + 0xa0) <= (int)unaff_x27) {
          do {
            uVar8 = (int)unaff_x25 + 1;
            if (*(int *)(unaff_x21 + 0xa4) <= (int)uVar8) {
              if ((int)unaff_w23 <= (int)uVar8) {
                return;
              }
              goto LAB_0729cfa4;
            }
            if (*(uint *)(unaff_x19 + 0x18) <= uVar8) goto LAB_0729d0d8;
            lVar6 = *(long *)(unaff_x21 + 0xb0);
            if (lVar6 == 0) goto LAB_0729d0dc;
            unaff_x25 = (ulong)uVar8;
            uVar8 = *(uint *)(unaff_x19 + unaff_x25 * 4 + 0x20);
            if (*(uint *)(lVar6 + 0x18) <= uVar8) goto LAB_0729d0d8;
            unaff_x26 = *(long *)(lVar6 + (long)(int)uVar8 * 8 + 0x20);
            if (unaff_x26 == 0) goto LAB_0729d0dc;
            if (*(int *)(unaff_x26 + 0x18) == 0) goto LAB_0729d0d8;
          } while (*(int *)(unaff_x21 + 0xa0) < 1);
          unaff_x27 = 0;
        }
        lVar6 = *(long *)(unaff_x21 + 0xd8);
        if (lVar6 == 0) goto LAB_0729d0dc;
        if (*(uint *)(lVar6 + 0x18) <= unaff_x27) goto LAB_0729d0d8;
        if (unaff_x20 == (long *)0x0) goto LAB_0729d0dc;
        param_1 = *unaff_x20;
        param_3 = *unaff_x24;
        in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
        unaff_x28 = *(long *)(lVar6 + unaff_x27 * 8 + 0x20);
      } while (in_x9 == 0);
      in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    }
    in_x11 = *(long *)(in_x10 + -2);
  } while( true );
LAB_0729cfa4:
  if (*(uint *)(unaff_x19 + 0x18) <= uVar8) {
LAB_0729d0d8:
                    /* WARNING: Subroutine does not return */
    FUN_04077838();
  }
  lVar6 = *(long *)(unaff_x21 + 0xb0);
  if (lVar6 == 0) {
LAB_0729d0dc:
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  lVar12 = (long)(int)uVar8;
  uVar3 = *(uint *)(unaff_x19 + lVar12 * 4 + 0x20);
  if (*(uint *)(lVar6 + 0x18) <= uVar3) goto LAB_0729d0d8;
  lVar9 = *(long *)(unaff_x21 + 0xd8);
  if (lVar9 == 0) goto LAB_0729d0dc;
  if ((*(int *)(lVar9 + 0x18) == 0) || (*(int *)(lVar9 + 0x18) == 1)) goto LAB_0729d0d8;
  lVar6 = *(long *)(lVar6 + (long)(int)uVar3 * 8 + 0x20);
  if (lVar6 == 0) goto LAB_0729d0dc;
  if (*(int *)(lVar6 + 0x18) == 0) goto LAB_0729d0d8;
  if (unaff_x20 == (long *)0x0) goto LAB_0729d0dc;
  lVar7 = *unaff_x20;
  lVar1 = *(long *)(lVar9 + 0x20);
  lVar9 = *(long *)(lVar9 + 0x28);
  uVar11 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar11 != 0) {
    piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *unaff_x24) {
        puVar5 = (undefined8 *)(lVar7 + (long)(*piVar10 + 0xe) * 0x10 + 0x138);
        goto LAB_0729d058;
      }
      uVar11 = uVar11 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar11 != 0);
  }
  puVar5 = (undefined8 *)FUN_040b1e00();
LAB_0729d058:
  iVar4 = (*(code *)*puVar5)();
  if (*(uint *)(lVar6 + 0x18) <= iVar4 + 1U) goto LAB_0729d0d8;
  if (lVar9 == 0) goto LAB_0729d0dc;
  if (*(uint *)(lVar9 + 0x18) <= uVar8) goto LAB_0729d0d8;
  uVar2 = *(undefined4 *)(lVar6 + (long)(int)(iVar4 + 1U) * 4 + 0x20);
  *(undefined4 *)(lVar9 + lVar12 * 4 + 0x20) = uVar2;
  if (lVar1 == 0) goto LAB_0729d0dc;
  if (*(uint *)(lVar1 + 0x18) <= uVar8) goto LAB_0729d0d8;
  uVar8 = uVar8 + 1;
  *(undefined4 *)(lVar1 + lVar12 * 4 + 0x20) = uVar2;
  if (uVar8 == unaff_w23) {
    return;
  }
  goto LAB_0729cfa4;
}


