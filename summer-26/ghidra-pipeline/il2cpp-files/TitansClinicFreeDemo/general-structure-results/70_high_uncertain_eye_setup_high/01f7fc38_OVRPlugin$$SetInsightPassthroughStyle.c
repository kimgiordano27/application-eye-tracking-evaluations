/*
FUNCTION_NAME: OVRPlugin$$SetInsightPassthroughStyle
ENTRY_POINT: 01f7fc38
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_12;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__SetInsightPassthroughStyle(ulong param_1)

{
  bool bVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  ulong uVar9;
  ulong uVar10;
  long *unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  long lVar11;
  uint uVar12;
  ulong uVar13;
  long *in_stack_00000008;
  undefined8 *in_stack_00000010;
  
  param_1 = param_1 & 0xffffffff;
  uVar9 = 1;
LAB_01f7fc40:
  if (unaff_x22 == 0) {
LAB_01f7fe3c:
                    /* WARNING: Subroutine does not return */
    FUN_01230ca0();
  }
  if (((uVar9 < *(uint *)(unaff_x22 + 0x18)) && (uVar9 < param_1)) &&
     ((uint)(uVar9 - 1) < (uint)param_1)) {
    uVar5 = *(undefined8 *)(unaff_x22 + uVar9 * 8 + 0x20);
    lVar11 = unaff_x21[uVar9 + 4];
    bVar1 = false;
    uVar7 = uVar9 - 1;
    uVar13 = uVar9;
    do {
      uVar10 = uVar7;
      if (unaff_x23 == (long *)0x0) goto LAB_01f7fe3c;
      lVar6 = *unaff_x23;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_027b5ad8) {
            puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_01f7fce4;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar3 = (undefined8 *)FUN_0122ea3c();
LAB_01f7fce4:
      iVar2 = (*(code *)*puVar3)();
      if (iVar2 < 1) {
        if (!bVar1) goto LAB_01f7fdec;
        goto LAB_01f7fd98;
      }
      if ((*(uint *)(unaff_x22 + 0x18) <= (uint)uVar10) ||
         (*(uint *)(unaff_x22 + 0x18) <= (uint)uVar13)) break;
      *(undefined8 *)(unaff_x22 + uVar13 * 8 + 0x20) =
           *(undefined8 *)(unaff_x22 + uVar10 * 8 + 0x20);
      thunk_FUN_01286abc();
      uVar12 = *(uint *)(unaff_x21 + 3);
      if (uVar12 <= (uint)uVar10) break;
      lVar6 = unaff_x21[uVar10 + 4];
      if (lVar6 != 0) {
        lVar4 = thunk_FUN_0124baac(lVar6,*(undefined8 *)(*unaff_x21 + 0x40));
        if (lVar4 == 0) goto LAB_01f7fe40;
        uVar12 = *(uint *)(unaff_x21 + 3);
      }
      if (uVar12 <= (uint)uVar13) break;
      unaff_x21[uVar13 + 4] = lVar6;
      thunk_FUN_01286abc(unaff_x21 + uVar13 + 4,lVar6);
      if (uVar10 == 0) goto LAB_01f7fd94;
      bVar1 = true;
      uVar7 = uVar10 - 1;
      uVar13 = uVar10;
      if (*(uint *)(unaff_x21 + 3) <= (uint)(uVar10 - 1)) break;
    } while( true );
  }
  goto LAB_01f7fe38;
LAB_01f7fd94:
  uVar13 = 0;
LAB_01f7fd98:
  uVar12 = (uint)uVar13;
  if (uVar12 < *(uint *)(unaff_x22 + 0x18)) {
    *(undefined8 *)(unaff_x22 + (long)(int)uVar12 * 8 + 0x20) = uVar5;
    thunk_FUN_01286abc();
    if ((lVar11 != 0) &&
       (lVar6 = thunk_FUN_0124baac(lVar11,*(undefined8 *)(*unaff_x21 + 0x40)), lVar6 == 0)) {
LAB_01f7fe40:
      uVar5 = thunk_FUN_012668ac();
                    /* WARNING: Subroutine does not return */
      FUN_01230b78(uVar5,0);
    }
    if (uVar12 < *(uint *)(unaff_x21 + 3)) {
      unaff_x21[(long)(int)uVar12 + 4] = lVar11;
      thunk_FUN_01286abc(unaff_x21 + (long)(int)uVar12 + 4,lVar11);
LAB_01f7fdec:
      param_1 = (ulong)*(uint *)(unaff_x21 + 3);
      uVar9 = uVar9 + 1;
      if ((long)(int)*(uint *)(unaff_x21 + 3) <= (long)uVar9) {
        *in_stack_00000008 = unaff_x22;
        thunk_FUN_01286abc();
        *in_stack_00000010 = unaff_x21;
        thunk_FUN_01286abc();
        return;
      }
      goto LAB_01f7fc40;
    }
  }
LAB_01f7fe38:
                    /* WARNING: Subroutine does not return */
  FUN_01230ca8();
}


