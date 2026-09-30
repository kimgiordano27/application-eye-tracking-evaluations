/*
FUNCTION_NAME: OVRPlugin.TextureRectMatrixf$$ToString
ENTRY_POINT: 01f8ecd0
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


void OVRPlugin_TextureRectMatrixf__ToString(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  ulong in_x9;
  ulong uVar7;
  int *in_x10;
  int *piVar8;
  long *unaff_x19;
  long *unaff_x20;
  int unaff_w21;
  int unaff_w23;
  uint unaff_w24;
  uint uVar9;
  long *unaff_x25;
  undefined8 unaff_x26;
  long *plVar10;
  undefined8 unaff_x27;
  int unaff_w28;
  uint unaff_w29;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  
code_r0x01f8ecd0:
  in_x9 = in_x9 - 1;
  in_x10 = in_x10 + 4;
  if (in_x9 != 0) goto LAB_01f8ecc4;
LAB_01f8ecdc:
  puVar4 = (undefined8 *)FUN_0122ea3c(unaff_x25,param_3,0);
  do {
    uVar2 = (*(code *)*puVar4)(unaff_x25,unaff_x26,unaff_x27,puVar4[1]);
    uVar9 = unaff_w24;
    unaff_w29 = unaff_w29 | uVar2 >> 0x1f;
    do {
      unaff_w24 = unaff_w29;
      if (*unaff_x19 == 0) goto LAB_01f8ee54;
      plVar10 = (long *)unaff_x19[2];
      iVar1 = unaff_w28 + unaff_w24;
      FUN_01f7feac(*unaff_x19,iVar1);
      if (plVar10 == (long *)0x0) goto LAB_01f8ee54;
      lVar6 = *plVar10;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *unaff_x20) {
            puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_01f8ed7c;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)FUN_0122ea3c(plVar10,*unaff_x20,0);
LAB_01f8ed7c:
      iVar3 = (*(code *)*puVar4)(plVar10);
      if (-1 < iVar3) {
LAB_01f8edec:
        if (*unaff_x19 != 0) {
          FUN_01f89750();
          if (unaff_x19[1] == 0) {
            return;
          }
          FUN_01f89750(unaff_x19[1],in_stack_00000000,unaff_w28 + uVar9);
          return;
        }
        goto LAB_01f8ee54;
      }
      lVar6 = *unaff_x19;
      if (lVar6 == 0) goto LAB_01f8ee54;
      uVar5 = FUN_01f7feac(lVar6,iVar1);
      FUN_01f89750(lVar6,uVar5,unaff_w28 + uVar9);
      lVar6 = unaff_x19[1];
      if (lVar6 != 0) {
        uVar5 = FUN_01f7feac(lVar6,iVar1);
        FUN_01f89750(lVar6,uVar5,unaff_w28 + uVar9);
      }
      uVar9 = unaff_w24;
      if (unaff_w23 < (int)unaff_w24) goto LAB_01f8edec;
      unaff_w29 = unaff_w24 * 2;
    } while (unaff_w21 <= (int)unaff_w29);
    if (*unaff_x19 == 0) {
LAB_01f8ee54:
                    /* WARNING: Subroutine does not return */
      FUN_01230ca0();
    }
    unaff_x25 = (long *)unaff_x19[2];
    unaff_x26 = FUN_01f7feac(*unaff_x19,unaff_w29 + in_stack_00000008._4_4_ + -1);
    if ((*unaff_x19 == 0) ||
       (unaff_x27 = FUN_01f7feac(*unaff_x19,unaff_w29 + in_stack_00000008._4_4_),
       unaff_x25 == (long *)0x0)) goto LAB_01f8ee54;
    param_1 = *unaff_x25;
    param_3 = *unaff_x20;
    in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (in_x9 == 0) goto LAB_01f8ecdc;
    in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
LAB_01f8ecc4:
    if (*(long *)(in_x10 + -2) != param_3) goto code_r0x01f8ecd0;
    puVar4 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
  } while( true );
}


