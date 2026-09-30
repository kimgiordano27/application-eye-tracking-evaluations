/*
FUNCTION_NAME: OVRPlugin$$get_rotation
ENTRY_POINT: 033b9fe8
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 99
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__get_rotation(long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined1 in_ZR;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong in_x9;
  int *piVar8;
  int *in_x10;
  long *unaff_x19;
  long *unaff_x20;
  int unaff_w21;
  int unaff_w23;
  uint unaff_w24;
  int unaff_w25;
  long *plVar9;
  long *unaff_x26;
  long lVar10;
  int unaff_w28;
  uint unaff_w29;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  
  do {
    if ((bool)in_ZR) {
      puVar5 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
      goto LAB_033ba014;
    }
    in_x9 = in_x9 - 1;
    in_x10 = in_x10 + 4;
    uVar1 = unaff_w29;
    if (in_x9 == 0) {
      do {
        unaff_w29 = uVar1;
        puVar5 = (undefined8 *)FUN_01dde8fc(unaff_x26,param_3,0);
LAB_033ba014:
        iVar3 = (*(code *)*puVar5)(unaff_x26);
        if (-1 < iVar3) {
LAB_033ba084:
          if (*unaff_x19 != 0) {
            FUN_033b49e8();
            if (unaff_x19[1] == 0) {
              return;
            }
            FUN_033b49e8(unaff_x19[1],in_stack_00000000,unaff_w28 + unaff_w24);
            return;
          }
LAB_033ba0ec:
                    /* WARNING: Subroutine does not return */
          FUN_01d7db70();
        }
        lVar10 = *unaff_x19;
        if (lVar10 == 0) goto LAB_033ba0ec;
        uVar6 = FUN_033aae5c(lVar10,unaff_w25);
        FUN_033b49e8(lVar10,uVar6,unaff_w28 + unaff_w24);
        lVar10 = unaff_x19[1];
        if (lVar10 != 0) {
          uVar6 = FUN_033aae5c(lVar10,unaff_w25);
          FUN_033b49e8(lVar10,uVar6,unaff_w28 + unaff_w24);
        }
        unaff_w24 = unaff_w29;
        if (unaff_w23 < (int)unaff_w29) goto LAB_033ba084;
        uVar1 = unaff_w29 * 2;
        if ((int)uVar1 < unaff_w21) {
          if (*unaff_x19 == 0) goto LAB_033ba0ec;
          plVar9 = (long *)unaff_x19[2];
          uVar6 = FUN_033aae5c(*unaff_x19,uVar1 + in_stack_00000008._4_4_ + -1);
          if ((*unaff_x19 == 0) ||
             (uVar4 = FUN_033aae5c(*unaff_x19,uVar1 + in_stack_00000008._4_4_),
             plVar9 == (long *)0x0)) goto LAB_033ba0ec;
          lVar10 = *plVar9;
          uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar7 != 0) {
            piVar8 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == *unaff_x20) {
                puVar5 = (undefined8 *)(lVar10 + (long)*piVar8 * 0x10 + 0x138);
                goto LAB_033b9f90;
              }
              uVar7 = uVar7 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar7 != 0);
          }
          puVar5 = (undefined8 *)FUN_01dde8fc(plVar9,*unaff_x20,0);
LAB_033b9f90:
          uVar2 = (*(code *)*puVar5)(plVar9,uVar6,uVar4,puVar5[1]);
          uVar1 = uVar1 | uVar2 >> 0x1f;
        }
        if (*unaff_x19 == 0) goto LAB_033ba0ec;
        unaff_x26 = (long *)unaff_x19[2];
        unaff_w25 = unaff_w28 + uVar1;
        FUN_033aae5c(*unaff_x19,unaff_w25);
        if (unaff_x26 == (long *)0x0) goto LAB_033ba0ec;
        param_1 = *unaff_x26;
        param_3 = *unaff_x20;
        in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
      } while (in_x9 == 0);
      in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    }
    unaff_w29 = uVar1;
    in_ZR = *(long *)(in_x10 + -2) == param_3;
  } while( true );
}


