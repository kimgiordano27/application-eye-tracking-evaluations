/*
FUNCTION_NAME: OVRManager$$ShutdownInsightPassthrough
ENTRY_POINT: 01d6fe20
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__ShutdownInsightPassthrough(long param_1,undefined8 param_2,long param_3)

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
  
  do {
    do {
      if (*(long *)(in_x10 + -2) == param_3) {
        puVar4 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
        goto LAB_01d6fe54;
      }
      in_x9 = in_x9 - 1;
      in_x10 = in_x10 + 4;
    } while (in_x9 != 0);
    do {
      puVar4 = (undefined8 *)FUN_0103c348(unaff_x25,param_3,0);
LAB_01d6fe54:
      uVar2 = (*(code *)*puVar4)(unaff_x25,unaff_x26,unaff_x27,puVar4[1]);
      uVar9 = unaff_w24;
      unaff_w29 = unaff_w29 | uVar2 >> 0x1f;
      do {
        unaff_w24 = unaff_w29;
        if (*unaff_x19 == 0) goto LAB_01d6ffb0;
        plVar10 = (long *)unaff_x19[2];
        iVar1 = unaff_w28 + unaff_w24;
        FUN_01d60e94(*unaff_x19,iVar1);
        if (plVar10 == (long *)0x0) goto LAB_01d6ffb0;
        lVar6 = *plVar10;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *unaff_x20) {
              puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_01d6fed8;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar4 = (undefined8 *)FUN_0103c348(plVar10,*unaff_x20,0);
LAB_01d6fed8:
        iVar3 = (*(code *)*puVar4)(plVar10);
        if (-1 < iVar3) {
LAB_01d6ff48:
          if (*unaff_x19 != 0) {
            FUN_01d6a894();
            if (unaff_x19[1] == 0) {
              return;
            }
            FUN_01d6a894(unaff_x19[1],in_stack_00000000,unaff_w28 + uVar9);
            return;
          }
          goto LAB_01d6ffb0;
        }
        lVar6 = *unaff_x19;
        if (lVar6 == 0) goto LAB_01d6ffb0;
        uVar5 = FUN_01d60e94(lVar6,iVar1);
        FUN_01d6a894(lVar6,uVar5,unaff_w28 + uVar9);
        lVar6 = unaff_x19[1];
        if (lVar6 != 0) {
          uVar5 = FUN_01d60e94(lVar6,iVar1);
          FUN_01d6a894(lVar6,uVar5,unaff_w28 + uVar9);
        }
        uVar9 = unaff_w24;
        if (unaff_w23 < (int)unaff_w24) goto LAB_01d6ff48;
        unaff_w29 = unaff_w24 * 2;
      } while (unaff_w21 <= (int)unaff_w29);
      if (*unaff_x19 == 0) {
LAB_01d6ffb0:
                    /* WARNING: Subroutine does not return */
        FUN_00fdc534();
      }
      unaff_x25 = (long *)unaff_x19[2];
      unaff_x26 = FUN_01d60e94(*unaff_x19,unaff_w29 + in_stack_00000008._4_4_ + -1);
      if ((*unaff_x19 == 0) ||
         (unaff_x27 = FUN_01d60e94(*unaff_x19,unaff_w29 + in_stack_00000008._4_4_),
         unaff_x25 == (long *)0x0)) goto LAB_01d6ffb0;
      param_1 = *unaff_x25;
      param_3 = *unaff_x20;
      in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
    } while (in_x9 == 0);
    in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
  } while( true );
}


