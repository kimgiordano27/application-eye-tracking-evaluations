/*
FUNCTION_NAME: OVRPlugin$$CreatePassthroughColorLut
ENTRY_POINT: 01f7fd50
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__CreatePassthroughColorLut(void)

{
  bool bVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  ulong unaff_x19;
  long *unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  long unaff_x24;
  long unaff_x26;
  uint uVar8;
  ulong unaff_x27;
  ulong unaff_x29;
  long *in_stack_00000008;
  undefined8 *in_stack_00000010;
  undefined8 in_stack_00000018;
  
code_r0x01f7fd50:
  uVar8 = *(uint *)(unaff_x21 + 3);
  uVar6 = unaff_x29;
LAB_01f7fd54:
  if ((uint)unaff_x27 < uVar8) {
    unaff_x21[unaff_x27 + 4] = unaff_x26;
    thunk_FUN_01286abc(unaff_x21 + unaff_x27 + 4,unaff_x26);
    if (uVar6 == 0) {
      unaff_x27 = 0;
      goto LAB_01f7fd98;
    }
    unaff_x29 = uVar6 - 1;
    bVar1 = true;
    unaff_x27 = uVar6;
    if ((uint)unaff_x29 < *(uint *)(unaff_x21 + 3)) {
      do {
        if (unaff_x23 == (long *)0x0) {
LAB_01f7fe3c:
                    /* WARNING: Subroutine does not return */
          FUN_01230ca0();
        }
        lVar5 = *unaff_x23;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_027b5ad8) {
              puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_01f7fce4;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar3 = (undefined8 *)FUN_0122ea3c();
LAB_01f7fce4:
        iVar2 = (*(code *)*puVar3)();
        if (0 < iVar2) goto code_r0x01f7fd00;
        unaff_x29 = unaff_x19;
        if (bVar1) {
LAB_01f7fd98:
          uVar8 = (uint)unaff_x27;
          if (*(uint *)(unaff_x22 + 0x18) <= uVar8) break;
          *(undefined8 *)(unaff_x22 + (long)(int)uVar8 * 8 + 0x20) = in_stack_00000018;
          thunk_FUN_01286abc();
          if ((unaff_x24 != 0) &&
             (lVar5 = thunk_FUN_0124baac(unaff_x24,*(undefined8 *)(*unaff_x21 + 0x40)), lVar5 == 0))
          goto LAB_01f7fe40;
          if (*(uint *)(unaff_x21 + 3) <= uVar8) break;
          unaff_x21[(long)(int)uVar8 + 4] = unaff_x24;
          thunk_FUN_01286abc(unaff_x21 + (long)(int)uVar8 + 4,unaff_x24);
          unaff_x29 = unaff_x19;
        }
        uVar8 = *(uint *)(unaff_x21 + 3);
        unaff_x19 = unaff_x29 + 1;
        if ((long)(int)uVar8 <= (long)unaff_x19) {
          *in_stack_00000008 = unaff_x22;
          thunk_FUN_01286abc();
          *in_stack_00000010 = unaff_x21;
          thunk_FUN_01286abc();
          return;
        }
        if (unaff_x22 == 0) goto LAB_01f7fe3c;
        if (((*(uint *)(unaff_x22 + 0x18) <= unaff_x19) || (uVar8 <= unaff_x19)) ||
           (uVar8 <= (uint)unaff_x29)) break;
        in_stack_00000018 = *(undefined8 *)(unaff_x22 + unaff_x19 * 8 + 0x20);
        unaff_x24 = unaff_x21[unaff_x29 + 5];
        bVar1 = false;
        unaff_x27 = unaff_x19;
      } while( true );
    }
  }
  goto LAB_01f7fe38;
code_r0x01f7fd3c:
  lVar5 = thunk_FUN_0124baac(unaff_x26,*(undefined8 *)(*unaff_x21 + 0x40));
  if (lVar5 == 0) {
LAB_01f7fe40:
    uVar4 = thunk_FUN_012668ac();
                    /* WARNING: Subroutine does not return */
    FUN_01230b78(uVar4,0);
  }
  goto code_r0x01f7fd50;
code_r0x01f7fd00:
  if (((uint)unaff_x29 < *(uint *)(unaff_x22 + 0x18)) &&
     ((uint)unaff_x27 < *(uint *)(unaff_x22 + 0x18))) {
    *(undefined8 *)(unaff_x22 + unaff_x27 * 8 + 0x20) =
         *(undefined8 *)(unaff_x22 + unaff_x29 * 8 + 0x20);
    thunk_FUN_01286abc();
    uVar8 = *(uint *)(unaff_x21 + 3);
    if ((uint)unaff_x29 < uVar8) {
      unaff_x26 = unaff_x21[unaff_x29 + 4];
      uVar6 = unaff_x29;
      if (unaff_x26 != 0) goto code_r0x01f7fd3c;
      goto LAB_01f7fd54;
    }
  }
LAB_01f7fe38:
                    /* WARNING: Subroutine does not return */
  FUN_01230ca8();
}


