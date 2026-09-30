/*
FUNCTION_NAME: Oculus.Avatar2.OvrPluginTracking.OvrPluginEyeTrackingProvider$$GetEyePose
ENTRY_POINT: 059defe8
PROGRAM: waitwhat-libil2cpp.so
SCORE: 109
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_6
*/


/* WARNING: Removing unreachable block (ram,0x059df15c) */
/* WARNING: Removing unreachable block (ram,0x059df3c8) */
/* WARNING: Removing unreachable block (ram,0x059df3c0) */

void Oculus_Avatar2_OvrPluginTracking_OvrPluginEyeTrackingProvider__GetEyePose(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x21;
  long *plVar8;
  long *unaff_x22;
  long *unaff_x23;
  long *unaff_x24;
  undefined8 *unaff_x26;
  long unaff_x27;
  long *plVar9;
  long *in_stack_00000018;
  
  plVar8 = *(long **)(unaff_x21 + 0xc80);
  plVar9 = *(long **)(unaff_x27 + 0xbe0);
  do {
    lVar5 = *param_1;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *plVar8) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_059df044;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_031c0d08(param_1,*plVar8,0);
LAB_059df044:
    uVar6 = (*(code *)*puVar3)(param_1,puVar3[1]);
    if ((uVar6 & 1) == 0) {
      if (in_stack_00000018 == (long *)0x0) goto LAB_059df150;
      lVar5 = *in_stack_00000018;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 == 0) goto LAB_059df128;
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      break;
    }
    if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    lVar5 = *in_stack_00000018;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *plVar9) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_059df0a8;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_031c0d08(in_stack_00000018,*plVar9,0);
LAB_059df0a8:
    uVar6 = (*(code *)*puVar3)(in_stack_00000018,puVar3[1]);
    lVar5 = *(long *)(*(long *)(*unaff_x22 + 0xb8) + 8);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    if (*(uint *)(lVar5 + 0x18) <= ((uint)uVar6 & 0xffff)) {
                    /* WARNING: Subroutine does not return */
      FUN_03188ce0();
    }
    *(undefined1 *)(lVar5 + (uVar6 & 0xffff) + 0x20) = 1;
    param_1 = in_stack_00000018;
    if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
  } while( true );
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
    if (*(long *)(piVar7 + -2) == *unaff_x23) {
      puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_059df144;
    }
  }
LAB_059df128:
  puVar3 = (undefined8 *)FUN_031c0d08(in_stack_00000018,*unaff_x23,0);
LAB_059df144:
  (*(code *)*puVar3)(in_stack_00000018,puVar3[1]);
LAB_059df150:
  uVar4 = FUN_03188b1c(*unaff_x26,5);
  FUN_0585c08c(uVar4,*(undefined8 *)PTR_DAT_07109be8,0);
  plVar8 = (long *)FUN_03a928f8();
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03188cd8();
  }
  lVar5 = *plVar8;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *unaff_x24) {
        puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_059df1e8;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar3 = (undefined8 *)FUN_031c0d08(plVar8,*unaff_x24,0);
LAB_059df1e8:
  plVar8 = (long *)(*(code *)*puVar3)(plVar8,puVar3[1]);
  puVar2 = PTR_DAT_07109be0;
  puVar1 = PTR_DAT_070c7c80;
  do {
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    lVar5 = *plVar8;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_059df268;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_031c0d08(plVar8,*(long *)puVar1,0);
LAB_059df268:
    uVar6 = (*(code *)*puVar3)(plVar8,puVar3[1]);
    if ((uVar6 & 1) == 0) {
      if (plVar8 == (long *)0x0) {
        return;
      }
      lVar5 = *plVar8;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 == 0) goto LAB_059df348;
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      break;
    }
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    lVar5 = *plVar8;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)puVar2) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_059df2cc;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_031c0d08(plVar8,*(long *)puVar2,0);
LAB_059df2cc:
    uVar6 = (*(code *)*puVar3)(plVar8,puVar3[1]);
    lVar5 = *(long *)(*(long *)(*unaff_x22 + 0xb8) + 0x10);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    if (*(uint *)(lVar5 + 0x18) <= ((uint)uVar6 & 0xffff)) {
                    /* WARNING: Subroutine does not return */
      FUN_03188ce0();
    }
    *(undefined1 *)(lVar5 + (uVar6 & 0xffff) + 0x20) = 1;
  } while( true );
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
    if (*(long *)(piVar7 + -2) == *unaff_x23) {
      puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_059df364;
    }
  }
LAB_059df348:
  puVar3 = (undefined8 *)FUN_031c0d08(plVar8,*unaff_x23,0);
LAB_059df364:
  (*(code *)*puVar3)(plVar8,puVar3[1]);
  return;
}


