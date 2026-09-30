/*
FUNCTION_NAME: OVRPlugin.LogCallback2DelegateType$$.ctor
ENTRY_POINT: 01f8e104
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_18;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_LogCallback2DelegateType___ctor(long param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  uint uVar6;
  ulong uVar7;
  int *piVar8;
  long *unaff_x19;
  uint unaff_w20;
  long unaff_x21;
  long *unaff_x22;
  long *plVar9;
  int unaff_w23;
  uint unaff_w24;
  long lVar10;
  long unaff_x25;
  undefined8 uVar11;
  long unaff_x27;
  int unaff_w28;
  int unaff_w29;
  long in_stack_00000000;
  undefined8 in_stack_00000008;
  
  do {
    if (param_1 == 0) {
LAB_01f8e25c:
      uVar5 = thunk_FUN_012668ac();
                    /* WARNING: Subroutine does not return */
      FUN_01230b78(uVar5,0);
    }
    uVar6 = *(uint *)(unaff_x22 + 3);
    uVar1 = unaff_w24;
    do {
      unaff_w24 = unaff_w20;
      uVar1 = unaff_w28 + uVar1;
      if (uVar6 <= uVar1) goto LAB_01f8e254;
      unaff_x22[(long)(int)uVar1 + 4] = unaff_x25;
      thunk_FUN_01286abc(unaff_x22 + (long)(int)uVar1 + 4,unaff_x25);
      plVar9 = (long *)unaff_x19[1];
      if (plVar9 != (long *)0x0) {
        uVar6 = *(uint *)(plVar9 + 3);
        if (uVar6 <= (uint)unaff_x27) goto LAB_01f8e254;
        lVar10 = plVar9[unaff_x27 + 4];
        if (lVar10 != 0) {
          lVar4 = thunk_FUN_0124baac(lVar10,*(undefined8 *)(*plVar9 + 0x40));
          if (lVar4 == 0) goto LAB_01f8e25c;
          uVar6 = *(uint *)(plVar9 + 3);
        }
        if (uVar6 <= uVar1) goto LAB_01f8e254;
        plVar9[(long)(int)uVar1 + 4] = lVar10;
        thunk_FUN_01286abc(plVar9 + (long)(int)uVar1 + 4,lVar10);
      }
      if (unaff_w29 < (int)unaff_w24) {
LAB_01f8e190:
        lVar10 = *unaff_x19;
        if (lVar10 == 0) {
LAB_01f8e258:
                    /* WARNING: Subroutine does not return */
          FUN_01230ca0();
        }
        if ((unaff_x21 != 0) && (lVar4 = thunk_FUN_0124baac(), lVar4 == 0)) goto LAB_01f8e25c;
        uVar1 = unaff_w28 + unaff_w24;
        if (uVar1 < *(uint *)(lVar10 + 0x18)) {
          *(long *)(lVar10 + (long)(int)uVar1 * 8 + 0x20) = unaff_x21;
          thunk_FUN_01286abc();
          plVar9 = (long *)unaff_x19[1];
          if (plVar9 == (long *)0x0) {
            return;
          }
          if ((in_stack_00000000 != 0) &&
             (lVar10 = thunk_FUN_0124baac(in_stack_00000000,*(undefined8 *)(*plVar9 + 0x40)),
             lVar10 == 0)) goto LAB_01f8e25c;
          if (uVar1 < *(uint *)(plVar9 + 3)) {
            plVar9[(long)(int)uVar1 + 4] = in_stack_00000000;
            thunk_FUN_01286abc(plVar9 + (long)(int)uVar1 + 4,in_stack_00000000);
            return;
          }
        }
LAB_01f8e254:
                    /* WARNING: Subroutine does not return */
        FUN_01230ca8();
      }
      unaff_w20 = unaff_w24 * 2;
      if ((int)unaff_w20 < unaff_w23) {
        lVar10 = *unaff_x19;
        if (lVar10 == 0) goto LAB_01f8e258;
        uVar1 = unaff_w20 + in_stack_00000008._4_4_;
        if ((*(uint *)(lVar10 + 0x18) <= uVar1 - 1) || (*(uint *)(lVar10 + 0x18) <= uVar1))
        goto LAB_01f8e254;
        plVar9 = (long *)unaff_x19[2];
        if (plVar9 == (long *)0x0) goto LAB_01f8e258;
        lVar4 = *plVar9;
        uVar5 = *(undefined8 *)(lVar10 + (long)(int)(uVar1 - 1) * 8 + 0x20);
        uVar11 = *(undefined8 *)(lVar10 + (long)(int)uVar1 * 8 + 0x20);
        uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_027b5ad8) {
              puVar3 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_01f8e024;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar3 = (undefined8 *)FUN_0122ea3c(plVar9,*(long *)PTR_DAT_027b5ad8,0);
LAB_01f8e024:
        uVar1 = (*(code *)*puVar3)(plVar9,uVar5,uVar11,puVar3[1]);
        unaff_w20 = unaff_w20 | uVar1 >> 0x1f;
      }
      if (*unaff_x19 == 0) goto LAB_01f8e258;
      uVar1 = unaff_w28 + unaff_w20;
      if (*(uint *)(*unaff_x19 + 0x18) <= uVar1) goto LAB_01f8e254;
      plVar9 = (long *)unaff_x19[2];
      if (plVar9 == (long *)0x0) goto LAB_01f8e258;
      lVar10 = *plVar9;
      unaff_x27 = (long)(int)uVar1;
      uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_027b5ad8) {
            puVar3 = (undefined8 *)(lVar10 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_01f8e0bc;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar3 = (undefined8 *)FUN_0122ea3c(plVar9,*(long *)PTR_DAT_027b5ad8,0);
LAB_01f8e0bc:
      iVar2 = (*(code *)*puVar3)(plVar9);
      if (-1 < iVar2) goto LAB_01f8e190;
      unaff_x22 = (long *)*unaff_x19;
      if (unaff_x22 == (long *)0x0) goto LAB_01f8e258;
      uVar6 = *(uint *)(unaff_x22 + 3);
      if (uVar6 <= uVar1) goto LAB_01f8e254;
      unaff_x25 = unaff_x22[unaff_x27 + 4];
      uVar1 = unaff_w24;
    } while (unaff_x25 == 0);
    param_1 = thunk_FUN_0124baac(unaff_x25,*(undefined8 *)(*unaff_x22 + 0x40));
  } while( true );
}


