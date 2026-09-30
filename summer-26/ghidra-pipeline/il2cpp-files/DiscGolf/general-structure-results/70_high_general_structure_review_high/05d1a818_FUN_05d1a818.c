/*
FUNCTION_NAME: FUN_05d1a818
ENTRY_POINT: 05d1a818
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;ui_interaction
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_2
*/


void FUN_05d1a818(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  puVar1 = PTR_DAT_069fc180;
  if ((DAT_06dc2efd & 1) == 0) {
    FUN_02d965b8(PTR_DAT_06a0db40);
    FUN_02d965b8(PTR_DAT_069fc180);
    FUN_02d965b8(
                Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputUser_OngoingAccountSelection>_Append__
                );
    DAT_06dc2efd = 1;
  }
  plVar2 = (long *)FUN_02d966a4(*(undefined8 *)puVar1,4);
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  lVar5 = *(long *)(param_1 + 0x30);
  if ((lVar5 != 0) &&
     (lVar3 = thunk_FUN_02dd3048(lVar5,*(undefined8 *)(*plVar2 + 0x40)), lVar3 == 0)) {
LAB_05d1a998:
    uVar4 = thunk_FUN_02de0bec();
                    /* WARNING: Subroutine does not return */
    FUN_02d96724(uVar4,0);
  }
  if ((int)plVar2[3] != 0) {
    plVar2[4] = lVar5;
    LeanTween__value(plVar2 + 4,lVar5);
    lVar5 = *(long *)(param_1 + 0x38);
    if ((lVar5 != 0) &&
       (lVar3 = thunk_FUN_02dd3048(lVar5,*(undefined8 *)(*plVar2 + 0x40)), lVar3 == 0))
    goto LAB_05d1a998;
    if ((*(uint *)(plVar2 + 3) & 0xfffffffe) != 0) {
      plVar2[5] = lVar5;
      LeanTween__value(plVar2 + 5,lVar5);
      lVar5 = *(long *)(param_1 + 0x28);
      if ((lVar5 != 0) &&
         (lVar3 = thunk_FUN_02dd3048(lVar5,*(undefined8 *)(*plVar2 + 0x40)), lVar3 == 0))
      goto LAB_05d1a998;
      puVar1 = PTR_DAT_06a0db40;
      if (2 < *(uint *)(plVar2 + 3)) {
        plVar2[6] = lVar5;
        LeanTween__value(plVar2 + 6,lVar5);
        lVar5 = *(long *)puVar1;
        if (*(int *)(lVar5 + 0xe4) == 0) {
          thunk_FUN_02df485c();
          lVar5 = *(long *)puVar1;
        }
        lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
        if ((lVar5 != 0) &&
           (lVar3 = thunk_FUN_02dd3048(lVar5,*(undefined8 *)(*plVar2 + 0x40)), lVar3 == 0))
        goto LAB_05d1a998;
        puVar1 = 
        Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputUser_OngoingAccountSelection>_Append__
        ;
        if ((*(uint *)(plVar2 + 3) & 0xfffffffc) != 0) {
          plVar2[7] = lVar5;
          LeanTween__value(plVar2 + 7,lVar5);
          FUN_0536e164(*(undefined8 *)puVar1,plVar2,0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96868();
}


