/*
FUNCTION_NAME: OVR.OpenVR.IVRChaperoneSetup._GetWorkingStandingZeroPoseToRawTrackingPose$$EndInvoke
ENTRY_POINT: 06080efc
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


byte OVR_OpenVR_IVRChaperoneSetup__GetWorkingStandingZeroPoseToRawTrackingPose__EndInvoke
               (long param_1,undefined1 param_2 [16],undefined1 param_3 [16],float param_4,
               long *param_5)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long *plVar7;
  byte bVar8;
  long *unaff_x24;
  long *unaff_x25;
  long *unaff_x26;
  long *unaff_x27;
  long unaff_x28;
  undefined8 *puVar9;
  float fVar10;
  float unaff_s11;
  float fVar11;
  float fVar12;
  long in_stack_00000028;
  undefined8 *in_stack_00000030;
  float fStack0000000000000038;
  float fStack000000000000003c;
  float fStack0000000000000040;
  float fStack0000000000000044;
  undefined4 uStack0000000000000068;
  undefined4 uStack000000000000006c;
  undefined4 uStack0000000000000070;
  undefined4 uStack0000000000000074;
  undefined8 in_stack_00000078;
  undefined4 uStack0000000000000080;
  undefined4 uStack0000000000000084;
  undefined4 in_stack_00000088;
  long *in_stack_00000098;
  
  puVar9 = *(undefined8 **)(unaff_x28 + 0x20);
  fVar11 = *(float *)(param_1 + 0xe24);
  bVar8 = 1;
  do {
    lVar3 = *param_5;
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x24) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_06080f58;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_0367cd30(param_5,*unaff_x24,0);
LAB_06080f58:
    uVar5 = (*(code *)*puVar2)(param_5,puVar2[1]);
    plVar7 = in_stack_00000098;
    if ((uVar5 & 1) == 0) {
      plVar7 = (long *)*in_stack_00000030;
      if (plVar7 == (long *)0x0)
      goto OVR_OpenVR_IVRChaperoneSetup__SetWorkingStandingZeroPoseToRawTrackingPose___ctor;
      lVar3 = *plVar7;
      uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar5 == 0) goto LAB_060812d4;
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      break;
    }
    if (in_stack_00000098 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    lVar3 = *in_stack_00000098;
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x25) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_06080fbc;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_0367cd30(in_stack_00000098,*unaff_x25,0);
LAB_06080fbc:
    lVar3 = (*(code *)*puVar2)(plVar7,puVar2[1]);
    plVar7 = *(long **)(unaff_x19 + 0x28);
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    lVar4 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x26) {
          puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 9) * 0x10 + 0x138);
          goto LAB_06081024;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_0367cd30(plVar7,*unaff_x26,9);
LAB_06081024:
    uVar5 = (*(code *)*puVar2)(plVar7,1,&stack0x00000078,puVar2[1]);
    if ((uVar5 & 1) == 0) {
LAB_060811f8:
      bVar8 = 0;
      param_5 = in_stack_00000098;
    }
    else {
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      plVar7 = *(long **)(unaff_x19 + 0x28);
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      lVar4 = *plVar7;
      uVar1 = *(undefined4 *)(lVar3 + 0x14);
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *unaff_x26) {
            puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 9) * 0x10 + 0x138);
            goto LAB_0608109c;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar2 = (undefined8 *)FUN_0367cd30(plVar7,*unaff_x26,9);
LAB_0608109c:
      uVar5 = (*(code *)*puVar2)(plVar7,uVar1,&stack0x00000048,puVar2[1]);
      if ((uVar5 & 1) == 0) goto LAB_060811f8;
      plVar7 = *(long **)(unaff_x19 + 0x70);
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      lVar4 = *plVar7;
      uVar1 = *(undefined4 *)(lVar3 + 0x14);
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *unaff_x27) {
            puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 1) * 0x10 + 0x138);
            goto LAB_06081110;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar2 = (undefined8 *)FUN_0367cd30(plVar7,*unaff_x27,1);
LAB_06081110:
      uVar5 = (*(code *)*puVar2)(plVar7,uVar1,&stack0x00000068,puVar2[1]);
      if ((uVar5 & 1) == 0) goto LAB_060811f8;
      uVar5 = CONCAT44(in_stack_00000088,uStack0000000000000084);
      fVar10 = (float)FUN_06081354();
      FUN_071af258(uStack0000000000000068,uStack000000000000006c,uStack0000000000000070,
                   uStack0000000000000074,&stack0x00000038,(long)&stack0x00000040 + 4,0);
      fStack0000000000000044 = fStack0000000000000044 * fVar11;
      fVar12 = fStack0000000000000044 *
               ABS(param_4 * fStack0000000000000040 +
                   fVar10 * fStack0000000000000038 + (float)uVar5 * fStack000000000000003c);
      if (*(long *)(unaff_x19 + 0x60) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      FUN_056e03b4(fVar10,uVar5 & 0xffffffff,*(long *)(unaff_x19 + 0x60),lVar3,*puVar9);
      bVar8 = bVar8 & unaff_s11 < fVar12;
      param_5 = in_stack_00000098;
    }
    in_stack_00000098 = param_5;
    if (param_5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
  } while( true );
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar6 = piVar6 + 4;
    if (uVar5 == 0) break;
    if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_079f4598) {
      puVar9 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
      goto LAB_060812f0;
    }
  }
LAB_060812d4:
  puVar9 = (undefined8 *)FUN_0367cd30(plVar7,*(long *)PTR_DAT_079f4598,0);
LAB_060812f0:
  (*(code *)*puVar9)(plVar7,puVar9[1]);
OVR_OpenVR_IVRChaperoneSetup__SetWorkingStandingZeroPoseToRawTrackingPose___ctor:
  if (in_stack_00000028 == 0) {
    return bVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c00();
}


