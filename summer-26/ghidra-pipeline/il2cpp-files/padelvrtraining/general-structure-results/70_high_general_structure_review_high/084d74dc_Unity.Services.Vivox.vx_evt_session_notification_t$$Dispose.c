/*
FUNCTION_NAME: Unity.Services.Vivox.vx_evt_session_notification_t$$Dispose
ENTRY_POINT: 084d74dc
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x084d7698) */
/* WARNING: Removing unreachable block (ram,0x084d7724) */

void Unity_Services_Vivox_vx_evt_session_notification_t__Dispose
               (long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  long in_x9;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong in_stack_00000018;
  
  if (in_x9 != 0) {
    piVar7 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == param_3) {
        puVar3 = (undefined8 *)(param_1 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_084d751c;
      }
      in_x9 = in_x9 + -1;
      piVar7 = piVar7 + 4;
    } while (in_x9 != 0);
  }
  puVar3 = (undefined8 *)FUN_03d8f370();
LAB_084d751c:
  plVar4 = (long *)(*(code *)*puVar3)();
  puVar2 = PTR_DAT_091af388;
  puVar1 = PTR_DAT_091a1508;
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  do {
    lVar5 = *plVar4;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_084d7594;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_03d8f370(plVar4,*(long *)puVar1,0);
LAB_084d7594:
    uVar6 = (*(code *)*puVar3)(plVar4,puVar3[1]);
    if ((uVar6 & 1) == 0) {
      if (plVar4 == (long *)0x0) goto LAB_084d768c;
      lVar5 = *plVar4;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 == 0) goto LAB_084d7664;
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      break;
    }
    lVar5 = *plVar4;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)puVar2) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_084d75f0;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_03d8f370(plVar4,*(long *)puVar2,0);
LAB_084d75f0:
    (*(code *)*puVar3)(plVar4,puVar3[1]);
    if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    FUN_06b6ddc8();
  } while( true );
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
    if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_091a14e0) {
      puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_084d7680;
    }
  }
LAB_084d7664:
  puVar3 = (undefined8 *)FUN_03d8f370(plVar4,*(long *)PTR_DAT_091a14e0,0);
LAB_084d7680:
  (*(code *)*puVar3)(plVar4,puVar3[1]);
LAB_084d768c:
  *(long *)(unaff_x20 + 0x28) = unaff_x21;
  thunk_FUN_03d1023c();
  in_stack_00000018 = *(ulong *)(unaff_x20 + 0x18);
  puVar3 = (undefined8 *)(unaff_x19 + 0x18);
  if ((*(ulong *)(unaff_x20 + 0x18) & 0xff) != 0) {
    puVar3 = &stack0x00000018;
  }
  *(undefined8 *)(unaff_x20 + 0x18) = *puVar3;
  in_stack_00000018 = *(ulong *)(unaff_x20 + 0x20);
  puVar3 = (undefined8 *)(unaff_x19 + 0x20);
  if ((*(ulong *)(unaff_x20 + 0x20) & 0xff) != 0) {
    puVar3 = &stack0x00000018;
  }
  *(undefined8 *)(unaff_x20 + 0x20) = *puVar3;
  return;
}


