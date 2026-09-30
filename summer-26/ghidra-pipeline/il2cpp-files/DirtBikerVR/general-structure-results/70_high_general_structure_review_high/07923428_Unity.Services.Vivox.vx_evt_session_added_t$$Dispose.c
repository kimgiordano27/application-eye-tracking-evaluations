/*
FUNCTION_NAME: Unity.Services.Vivox.vx_evt_session_added_t$$Dispose
ENTRY_POINT: 07923428
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x079234f0) */
/* WARNING: Removing unreachable block (ram,0x07923580) */

void Unity_Services_Vivox_vx_evt_session_added_t__Dispose(long *param_1,long param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  ulong in_stack_00000018;
  long *in_stack_00000028;
  
code_r0x07923428:
  puVar2 = (undefined8 *)FUN_03ac43c4(param_1,param_2,0);
  do {
    (*(code *)*puVar2)(unaff_x23,puVar2[1]);
    if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    FUN_05fa052c();
    plVar1 = in_stack_00000028;
    if (in_stack_00000028 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar3 = *in_stack_00000028;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x24) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_079233dc;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_03ac43c4(in_stack_00000028,*unaff_x24,0);
LAB_079233dc:
    uVar4 = (*(code *)*puVar2)(plVar1,puVar2[1]);
    plVar1 = in_stack_00000028;
    if ((uVar4 & 1) == 0) {
      if (in_stack_00000028 == (long *)0x0) goto LAB_079234e4;
      lVar3 = *in_stack_00000028;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 == 0) goto LAB_079234bc;
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      break;
    }
    if (in_stack_00000028 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar3 = *in_stack_00000028;
    param_2 = *unaff_x25;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    param_1 = in_stack_00000028;
    unaff_x23 = in_stack_00000028;
    if (uVar4 == 0) goto code_r0x07923428;
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    while (*(long *)(piVar5 + -2) != param_2) {
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
      if (uVar4 == 0) goto code_r0x07923428;
    }
    puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
  } while( true );
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar5 = piVar5 + 4;
    if (uVar4 == 0) break;
    if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_08488550) {
      puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
      goto LAB_079234d8;
    }
  }
LAB_079234bc:
  puVar2 = (undefined8 *)FUN_03ac43c4(in_stack_00000028,*(long *)PTR_DAT_08488550,0);
LAB_079234d8:
  (*(code *)*puVar2)(plVar1,puVar2[1]);
LAB_079234e4:
  *(long *)(unaff_x20 + 0x28) = unaff_x21;
  thunk_FUN_03afed3c();
  in_stack_00000018 = *(ulong *)(unaff_x20 + 0x18);
  puVar2 = (undefined8 *)(unaff_x19 + 0x18);
  if ((*(ulong *)(unaff_x20 + 0x18) & 0xff) != 0) {
    puVar2 = &stack0x00000018;
  }
  in_stack_00000018 = *(ulong *)(unaff_x20 + 0x20);
  *(undefined8 *)(unaff_x20 + 0x18) = *puVar2;
  puVar2 = (undefined8 *)(unaff_x19 + 0x20);
  if ((*(ulong *)(unaff_x20 + 0x20) & 0xff) != 0) {
    puVar2 = &stack0x00000018;
  }
  *(undefined8 *)(unaff_x20 + 0x20) = *puVar2;
  return;
}


