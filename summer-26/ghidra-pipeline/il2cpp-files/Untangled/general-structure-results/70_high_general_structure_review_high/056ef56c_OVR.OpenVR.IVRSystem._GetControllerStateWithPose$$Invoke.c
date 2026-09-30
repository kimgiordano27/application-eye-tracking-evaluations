/*
FUNCTION_NAME: OVR.OpenVR.IVRSystem._GetControllerStateWithPose$$Invoke
ENTRY_POINT: 056ef56c
PROGRAM: Untangled-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


/* WARNING: Removing unreachable block (ram,0x056ef6b0) */

void OVR_OpenVR_IVRSystem__GetControllerStateWithPose__Invoke
               (long param_1,undefined8 param_2,long param_3)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long in_x9;
  int *in_x10;
  int *piVar5;
  long *unaff_x20;
  long lVar6;
  int unaff_w25;
  long unaff_x26;
  
  while (!(bool)in_ZR) {
    if (*(long *)(in_x10 + 2) == param_3) {
      puVar1 = (undefined8 *)(param_1 + (long)in_x10[4] * 0x10 + 0x138);
      goto code_r0x056ef590;
    }
    in_x9 = in_x9 + -1;
    in_x10 = in_x10 + 4;
    in_ZR = in_x9 == 0;
  }
  puVar1 = (undefined8 *)FUN_02eea86c();
code_r0x056ef590:
  (*(code *)*puVar1)();
  if (unaff_x26 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ecbb70();
  }
  if (unaff_w25 != 1) {
    if (unaff_x20 != (long *)0x0) {
      lVar6 = *unaff_x20;
      uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_06d01f60) {
            puVar1 = (undefined8 *)(lVar6 + (long)*piVar5 * 0x10 + 0x138);
            goto code_r0x056ef698;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar1 = (undefined8 *)FUN_02eea86c();
code_r0x056ef698:
      (*(code *)*puVar1)();
    }
                    /* WARNING: Subroutine does not return */
    FUN_02fafaac();
  }
  plVar2 = (long *)RootMotion_FinalIK_IKSolverFABRIK__MapToSolverPositionsLimited();
  lVar6 = *plVar2;
  __cxa_end_catch();
  if (unaff_x20 != (long *)0x0) {
    lVar3 = *unaff_x20;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_06d01f60) {
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_056ef4fc;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_02eea86c();
LAB_056ef4fc:
    (*(code *)*puVar1)();
  }
  if (lVar6 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ecbb70(lVar6);
  }
  return;
}


