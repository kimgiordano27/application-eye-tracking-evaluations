/*
FUNCTION_NAME: OVRPlugin.Posef$$.cctor
ENTRY_POINT: 01f8ec04
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_13;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Posef___cctor(long param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined *puVar5;
  uint uVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  long *unaff_x19;
  int unaff_w21;
  uint unaff_w24;
  long *plVar16;
  undefined8 uStack0000000000000000;
  undefined8 in_stack_00000008;
  
  if (param_1 != 0) {
    iVar4 = in_stack_00000008._4_4_ + -1;
    uVar8 = FUN_01f7feac(param_1,iVar4 + unaff_w24);
    if (unaff_x19[1] == 0) {
      uStack0000000000000000 = 0;
    }
    else {
      uStack0000000000000000 = FUN_01f7feac(unaff_x19[1],iVar4 + unaff_w24);
    }
    puVar5 = PTR_DAT_027b5ad8;
    iVar2 = unaff_w21;
    if (unaff_w21 < 0) {
      iVar2 = unaff_w21 + 1;
    }
    while ((int)unaff_w24 <= iVar2 >> 1) {
      uVar3 = unaff_w24 * 2;
      if ((int)uVar3 < unaff_w21) {
        if (*unaff_x19 == 0) goto LAB_01f8ee54;
        plVar16 = (long *)unaff_x19[2];
        uVar9 = FUN_01f7feac(*unaff_x19,uVar3 + in_stack_00000008._4_4_ + -1);
        if ((*unaff_x19 == 0) ||
           (uVar10 = FUN_01f7feac(*unaff_x19,uVar3 + in_stack_00000008._4_4_),
           plVar16 == (long *)0x0)) goto LAB_01f8ee54;
        lVar13 = *plVar16;
        lVar12 = *(long *)puVar5;
        uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == lVar12) {
              puVar11 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_01f8ecf8;
            }
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar14 != 0);
        }
        puVar11 = (undefined8 *)FUN_0122ea3c(plVar16,lVar12,0);
LAB_01f8ecf8:
        uVar6 = (*(code *)*puVar11)(plVar16,uVar9,uVar10,puVar11[1]);
        uVar3 = uVar3 | uVar6 >> 0x1f;
      }
      if (*unaff_x19 == 0) goto LAB_01f8ee54;
      plVar16 = (long *)unaff_x19[2];
      iVar1 = iVar4 + uVar3;
      uVar9 = FUN_01f7feac(*unaff_x19,iVar1);
      if (plVar16 == (long *)0x0) goto LAB_01f8ee54;
      lVar13 = *plVar16;
      lVar12 = *(long *)puVar5;
      uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == lVar12) {
            puVar11 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_01f8ed7c;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar11 = (undefined8 *)FUN_0122ea3c(plVar16,lVar12,0);
LAB_01f8ed7c:
      iVar7 = (*(code *)*puVar11)(plVar16,uVar8,uVar9,puVar11[1]);
      if (-1 < iVar7) break;
      lVar12 = *unaff_x19;
      if (lVar12 == 0) goto LAB_01f8ee54;
      uVar9 = FUN_01f7feac(lVar12,iVar1);
      iVar7 = iVar4 + unaff_w24;
      FUN_01f89750(lVar12,uVar9,iVar7);
      lVar12 = unaff_x19[1];
      unaff_w24 = uVar3;
      if (lVar12 != 0) {
        uVar9 = FUN_01f7feac(lVar12,iVar1);
        FUN_01f89750(lVar12,uVar9,iVar7);
      }
    }
    if (*unaff_x19 != 0) {
      FUN_01f89750(*unaff_x19,uVar8,iVar4 + unaff_w24);
      if (unaff_x19[1] == 0) {
        return;
      }
      FUN_01f89750(unaff_x19[1],uStack0000000000000000,iVar4 + unaff_w24);
      return;
    }
  }
LAB_01f8ee54:
                    /* WARNING: Subroutine does not return */
  FUN_01230ca0();
}


