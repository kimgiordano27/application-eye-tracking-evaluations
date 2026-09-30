/*
FUNCTION_NAME: OVR.OpenVR.IVRSystem._GetRawZeroPoseToStandingAbsoluteTrackingPose$$BeginInvoke
ENTRY_POINT: 05d22b6c
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


/* WARNING: Removing unreachable block (ram,0x05d22d14) */

void OVR_OpenVR_IVRSystem__GetRawZeroPoseToStandingAbsoluteTrackingPose__BeginInvoke
               (long param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong in_x9;
  int *in_x10;
  int *piVar6;
  long in_x11;
  long *unaff_x19;
  long unaff_x20;
  long *plVar7;
  undefined8 uVar8;
  long *unaff_x24;
  long *unaff_x25;
  long *unaff_x26;
  long *unaff_x27;
  
  do {
    if (in_x11 == param_3) {
      puVar2 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
      goto FUN_05d22b9c;
    }
    in_x9 = in_x9 - 1;
    in_x10 = in_x10 + 4;
    if (in_x9 == 0) {
      do {
        puVar2 = (undefined8 *)FUN_032937ac();
FUN_05d22b9c:
        uVar3 = (*(code *)*puVar2)();
        if ((uVar3 & 1) == 0) {
          if (unaff_x19 == (long *)0x0) {
            return;
          }
          lVar4 = *unaff_x19;
          uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar3 == 0) goto LAB_05d22cbc;
          piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          goto LAB_05d22ca4;
        }
        lVar4 = *unaff_x19;
        uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar3 != 0) {
          piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == *unaff_x26) {
              puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
              goto LAB_05d22bf8;
            }
            uVar3 = uVar3 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar3 != 0);
        }
        puVar2 = (undefined8 *)FUN_032937ac();
LAB_05d22bf8:
        lVar4 = (*(code *)*puVar2)();
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        plVar7 = *(long **)(unaff_x20 + 0x38);
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        lVar5 = *plVar7;
        uVar8 = *(undefined8 *)(unaff_x20 + 0x48);
        uVar1 = *(undefined4 *)(lVar4 + 0x14);
        uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar3 != 0) {
          piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == *unaff_x27) {
              puVar2 = (undefined8 *)(lVar5 + (long)(*piVar6 + 1) * 0x10 + 0x138);
              goto LAB_05d22c68;
            }
            uVar3 = uVar3 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar3 != 0);
        }
        puVar2 = (undefined8 *)FUN_032937ac(plVar7,*unaff_x27,1);
LAB_05d22c68:
        (*(code *)*puVar2)(plVar7,uVar8,uVar1,&stack0x00000008,puVar2[1]);
        param_1 = *unaff_x19;
        param_3 = *unaff_x25;
        in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
      } while (in_x9 == 0);
      in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    }
    in_x11 = *(long *)(in_x10 + -2);
  } while( true );
  while( true ) {
    uVar3 = uVar3 - 1;
    piVar6 = piVar6 + 4;
    if (uVar3 == 0) break;
LAB_05d22ca4:
    if (*(long *)(piVar6 + -2) == *unaff_x24) {
      puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
      goto LAB_05d22cd8;
    }
  }
LAB_05d22cbc:
  puVar2 = (undefined8 *)FUN_032937ac();
LAB_05d22cd8:
  (*(code *)*puVar2)();
  return;
}


