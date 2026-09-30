/*
FUNCTION_NAME: OVRPlugin$$GetInsightPassthroughInitializationState
ENTRY_POINT: 01f7fb7c
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_11;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetInsightPassthroughInitializationState(undefined8 param_1)

{
  bool bVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  int *piVar10;
  uint uVar11;
  long unaff_x19;
  ulong uVar12;
  long unaff_x20;
  ulong uVar13;
  long *unaff_x21;
  long unaff_x22;
  long unaff_x23;
  undefined8 *unaff_x24;
  long *unaff_x25;
  ulong uVar14;
  long *in_stack_00000008;
  undefined8 *in_stack_00000010;
  
  while( true ) {
    uVar11 = (uint)unaff_x19;
    if (*(uint *)(unaff_x22 + 0x18) <= uVar11) goto LAB_01f7fe38;
    *unaff_x24 = param_1;
    thunk_FUN_01286abc(unaff_x24,param_1);
    if (*(uint *)(unaff_x23 + 0x18) <= uVar11) goto LAB_01f7fe38;
    plVar3 = *(long **)(unaff_x20 + unaff_x19 * 8);
    if ((plVar3 == (long *)0x0) ||
       (lVar4 = (**(code **)(*plVar3 + 0x2e8))(plVar3,*(undefined8 *)(*plVar3 + 0x2f0)),
       unaff_x21 == (long *)0x0)) goto LAB_01f7fe3c;
    if ((lVar4 != 0) &&
       (lVar5 = thunk_FUN_0124baac(lVar4,*(undefined8 *)(*unaff_x21 + 0x40)), lVar5 == 0))
    goto LAB_01f7fe40;
    if (*(uint *)(unaff_x21 + 3) <= uVar11) goto LAB_01f7fe38;
    *unaff_x25 = lVar4;
    thunk_FUN_01286abc(unaff_x25,lVar4);
    unaff_x19 = unaff_x19 + 1;
    unaff_x24 = unaff_x24 + 1;
    if ((int)*(uint *)(unaff_x23 + 0x18) <= (int)(uint)unaff_x19) break;
    if (*(uint *)(unaff_x23 + 0x18) <= (uint)unaff_x19) goto LAB_01f7fe38;
    plVar3 = *(long **)(unaff_x20 + unaff_x19 * 8);
    if ((plVar3 == (long *)0x0) ||
       (param_1 = (**(code **)(*plVar3 + 0x1a8))(plVar3,*(undefined8 *)(*plVar3 + 0x1b0)),
       unaff_x25 = unaff_x25 + 1, unaff_x22 == 0)) goto LAB_01f7fe3c;
  }
  plVar3 = (long *)FUN_015ab07c(*(undefined8 *)PTR_DAT_027b5ac8);
  if (unaff_x21 != (long *)0x0) {
    if ((int)unaff_x21[3] < 2) goto LAB_01f7fdfc;
    uVar7 = unaff_x21[3] & 0xffffffff;
    uVar12 = 1;
    goto LAB_01f7fc40;
  }
LAB_01f7fe3c:
                    /* WARNING: Subroutine does not return */
  FUN_01230ca0();
LAB_01f7fc40:
  if (unaff_x22 != 0) {
    if (((uVar12 < *(uint *)(unaff_x22 + 0x18)) && (uVar12 < uVar7)) &&
       ((uint)(uVar12 - 1) < (uint)uVar7)) {
      uVar8 = *(undefined8 *)(unaff_x22 + uVar12 * 8 + 0x20);
      lVar4 = unaff_x21[uVar12 + 4];
      bVar1 = false;
      uVar7 = uVar12 - 1;
      uVar14 = uVar12;
      do {
        uVar13 = uVar7;
        lVar5 = unaff_x21[uVar13 + 4];
        if (plVar3 == (long *)0x0) goto LAB_01f7fe3c;
        lVar9 = *plVar3;
        uVar7 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar7 != 0) {
          piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_027b5ad8) {
              puVar6 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_01f7fce4;
            }
            uVar7 = uVar7 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar7 != 0);
        }
        puVar6 = (undefined8 *)FUN_0122ea3c(plVar3,*(long *)PTR_DAT_027b5ad8,0);
LAB_01f7fce4:
        iVar2 = (*(code *)*puVar6)(plVar3,lVar5,lVar4,puVar6[1]);
        if (iVar2 < 1) {
          if (!bVar1) goto LAB_01f7fdec;
          goto LAB_01f7fd98;
        }
        if ((*(uint *)(unaff_x22 + 0x18) <= (uint)uVar13) ||
           (*(uint *)(unaff_x22 + 0x18) <= (uint)uVar14)) break;
        *(undefined8 *)(unaff_x22 + uVar14 * 8 + 0x20) =
             *(undefined8 *)(unaff_x22 + uVar13 * 8 + 0x20);
        thunk_FUN_01286abc();
        uVar11 = *(uint *)(unaff_x21 + 3);
        if (uVar11 <= (uint)uVar13) break;
        lVar5 = unaff_x21[uVar13 + 4];
        if (lVar5 != 0) {
          lVar9 = thunk_FUN_0124baac(lVar5,*(undefined8 *)(*unaff_x21 + 0x40));
          if (lVar9 == 0) goto LAB_01f7fe40;
          uVar11 = *(uint *)(unaff_x21 + 3);
        }
        if (uVar11 <= (uint)uVar14) break;
        unaff_x21[uVar14 + 4] = lVar5;
        thunk_FUN_01286abc(unaff_x21 + uVar14 + 4,lVar5);
        if (uVar13 == 0) goto LAB_01f7fd94;
        bVar1 = true;
        uVar7 = uVar13 - 1;
        uVar14 = uVar13;
        if (*(uint *)(unaff_x21 + 3) <= (uint)(uVar13 - 1)) break;
      } while( true );
    }
LAB_01f7fe38:
                    /* WARNING: Subroutine does not return */
    FUN_01230ca8();
  }
  goto LAB_01f7fe3c;
LAB_01f7fd94:
  uVar14 = 0;
LAB_01f7fd98:
  uVar11 = (uint)uVar14;
  if (*(uint *)(unaff_x22 + 0x18) <= uVar11) goto LAB_01f7fe38;
  *(undefined8 *)(unaff_x22 + (long)(int)uVar11 * 8 + 0x20) = uVar8;
  thunk_FUN_01286abc();
  if ((lVar4 != 0) &&
     (lVar5 = thunk_FUN_0124baac(lVar4,*(undefined8 *)(*unaff_x21 + 0x40)), lVar5 == 0)) {
LAB_01f7fe40:
    uVar8 = thunk_FUN_012668ac();
                    /* WARNING: Subroutine does not return */
    FUN_01230b78(uVar8,0);
  }
  if (*(uint *)(unaff_x21 + 3) <= uVar11) goto LAB_01f7fe38;
  unaff_x21[(long)(int)uVar11 + 4] = lVar4;
  thunk_FUN_01286abc(unaff_x21 + (long)(int)uVar11 + 4,lVar4);
LAB_01f7fdec:
  uVar7 = (ulong)*(uint *)(unaff_x21 + 3);
  uVar12 = uVar12 + 1;
  if ((long)(int)*(uint *)(unaff_x21 + 3) <= (long)uVar12) {
LAB_01f7fdfc:
    *in_stack_00000008 = unaff_x22;
    thunk_FUN_01286abc();
    *in_stack_00000010 = unaff_x21;
    thunk_FUN_01286abc();
    return;
  }
  goto LAB_01f7fc40;
}


