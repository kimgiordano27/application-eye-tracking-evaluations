/*
FUNCTION_NAME: OVRPlugin.GUID$$.ctor
ENTRY_POINT: 01f8e0fc
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


void OVRPlugin_GUID___ctor(long param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  uint uVar7;
  ulong uVar8;
  int *piVar9;
  long *unaff_x19;
  uint unaff_w20;
  long unaff_x21;
  long *unaff_x22;
  long *plVar10;
  int unaff_w23;
  uint unaff_w24;
  long unaff_x25;
  undefined8 uVar11;
  long unaff_x27;
  int unaff_w28;
  int unaff_w29;
  long in_stack_00000000;
  undefined8 in_stack_00000008;
  
  do {
                    /* try { // try from 01f8e0fc to 0208e277 has its CatchHandler @ 01f8dec4 */
    lVar4 = thunk_FUN_0124baac(param_2,*(undefined8 *)(param_1 + 0x40));
    if (lVar4 == 0) {
LAB_01f8e25c:
      uVar6 = thunk_FUN_012668ac();
                    /* WARNING: Subroutine does not return */
      FUN_01230b78(uVar6,0);
    }
    uVar7 = *(uint *)(unaff_x22 + 3);
    param_2 = unaff_x25;
    uVar1 = unaff_w24;
    do {
      unaff_w24 = unaff_w20;
      uVar1 = unaff_w28 + uVar1;
      if (uVar7 <= uVar1) goto LAB_01f8e254;
      unaff_x22[(long)(int)uVar1 + 4] = param_2;
      thunk_FUN_01286abc(unaff_x22 + (long)(int)uVar1 + 4,param_2);
      plVar10 = (long *)unaff_x19[1];
      if (plVar10 != (long *)0x0) {
        uVar7 = *(uint *)(plVar10 + 3);
        if (uVar7 <= (uint)unaff_x27) goto LAB_01f8e254;
        lVar4 = plVar10[unaff_x27 + 4];
        if (lVar4 != 0) {
          lVar5 = thunk_FUN_0124baac(lVar4,*(undefined8 *)(*plVar10 + 0x40));
          if (lVar5 == 0) goto LAB_01f8e25c;
          uVar7 = *(uint *)(plVar10 + 3);
        }
        if (uVar7 <= uVar1) goto LAB_01f8e254;
        plVar10[(long)(int)uVar1 + 4] = lVar4;
        thunk_FUN_01286abc(plVar10 + (long)(int)uVar1 + 4,lVar4);
      }
      if (unaff_w29 < (int)unaff_w24) {
LAB_01f8e190:
        lVar4 = *unaff_x19;
        if (lVar4 == 0) {
LAB_01f8e258:
                    /* WARNING: Subroutine does not return */
          FUN_01230ca0();
        }
        if ((unaff_x21 != 0) && (lVar5 = thunk_FUN_0124baac(), lVar5 == 0)) goto LAB_01f8e25c;
        uVar1 = unaff_w28 + unaff_w24;
        if (uVar1 < *(uint *)(lVar4 + 0x18)) {
          *(long *)(lVar4 + (long)(int)uVar1 * 8 + 0x20) = unaff_x21;
          thunk_FUN_01286abc();
          plVar10 = (long *)unaff_x19[1];
          if (plVar10 == (long *)0x0) {
            return;
          }
          if ((in_stack_00000000 != 0) &&
             (lVar4 = thunk_FUN_0124baac(in_stack_00000000,*(undefined8 *)(*plVar10 + 0x40)),
             lVar4 == 0)) goto LAB_01f8e25c;
          if (uVar1 < *(uint *)(plVar10 + 3)) {
            plVar10[(long)(int)uVar1 + 4] = in_stack_00000000;
            thunk_FUN_01286abc(plVar10 + (long)(int)uVar1 + 4,in_stack_00000000);
            return;
          }
        }
LAB_01f8e254:
                    /* WARNING: Subroutine does not return */
        FUN_01230ca8();
      }
      unaff_w20 = unaff_w24 * 2;
      if ((int)unaff_w20 < unaff_w23) {
        lVar4 = *unaff_x19;
        if (lVar4 == 0) goto LAB_01f8e258;
        uVar1 = unaff_w20 + in_stack_00000008._4_4_;
        if ((*(uint *)(lVar4 + 0x18) <= uVar1 - 1) || (*(uint *)(lVar4 + 0x18) <= uVar1))
        goto LAB_01f8e254;
        plVar10 = (long *)unaff_x19[2];
        if (plVar10 == (long *)0x0) goto LAB_01f8e258;
        lVar5 = *plVar10;
        uVar6 = *(undefined8 *)(lVar4 + (long)(int)(uVar1 - 1) * 8 + 0x20);
        uVar11 = *(undefined8 *)(lVar4 + (long)(int)uVar1 * 8 + 0x20);
        uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_027b5ad8) {
              puVar3 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_01f8e024;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar3 = (undefined8 *)FUN_0122ea3c(plVar10,*(long *)PTR_DAT_027b5ad8,0);
LAB_01f8e024:
        uVar1 = (*(code *)*puVar3)(plVar10,uVar6,uVar11,puVar3[1]);
        unaff_w20 = unaff_w20 | uVar1 >> 0x1f;
      }
      if (*unaff_x19 == 0) goto LAB_01f8e258;
      uVar1 = unaff_w28 + unaff_w20;
      if (*(uint *)(*unaff_x19 + 0x18) <= uVar1) goto LAB_01f8e254;
      plVar10 = (long *)unaff_x19[2];
      if (plVar10 == (long *)0x0) goto LAB_01f8e258;
      lVar4 = *plVar10;
      unaff_x27 = (long)(int)uVar1;
      uVar8 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_027b5ad8) {
            puVar3 = (undefined8 *)(lVar4 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_01f8e0bc;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar3 = (undefined8 *)FUN_0122ea3c(plVar10,*(long *)PTR_DAT_027b5ad8,0);
LAB_01f8e0bc:
      iVar2 = (*(code *)*puVar3)(plVar10);
      if (-1 < iVar2) goto LAB_01f8e190;
      unaff_x22 = (long *)*unaff_x19;
      if (unaff_x22 == (long *)0x0) goto LAB_01f8e258;
      uVar7 = *(uint *)(unaff_x22 + 3);
      if (uVar7 <= uVar1) goto LAB_01f8e254;
      param_2 = unaff_x22[unaff_x27 + 4];
      uVar1 = unaff_w24;
    } while (param_2 == 0);
    param_1 = *unaff_x22;
    unaff_x25 = param_2;
  } while( true );
}


