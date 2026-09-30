/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.fsSerializer$$GetDataType
ENTRY_POINT: 03ea3694
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_4;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Unity_VisualScripting_FullSerializer_fsSerializer__GetDataType(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long in_x10;
  long *unaff_x19;
  long *unaff_x22;
  
  puVar1 = PTR_DAT_0457b640;
  if (*(long *)(param_1 + -8) != in_x10) {
    uVar2 = (**(code **)(*unaff_x19 + 0x4a8))();
    FUN_0340ebc0(*(undefined8 *)puVar1,uVar2,*unaff_x22,0);
    return;
  }
  plVar3 = (long *)FUN_01f08890(*(undefined8 *)
                                 Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                                ,5);
  puVar1 = PTR_DAT_0457b658;
  if (plVar3 != (long *)0x0) {
    if (*(long *)PTR_DAT_0457b658 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01f116d0(*(long *)PTR_DAT_0457b658,*(undefined8 *)(*plVar3 + 0x40));
      if (lVar4 == 0) goto LAB_03ea397c;
      lVar4 = *(long *)puVar1;
    }
    if ((int)plVar3[3] != 0) {
      plVar3[4] = lVar4;
      thunk_FUN_01f51358();
      if (unaff_x19[10] == 0) goto LAB_03ea3988;
      lVar4 = *(long *)(unaff_x19[10] + 0xa0);
      if ((lVar4 != 0) &&
         (lVar5 = thunk_FUN_01f116d0(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0)) {
LAB_03ea397c:
        uVar2 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
        FUN_01f08910(uVar2,0);
      }
      if (1 < *(uint *)(plVar3 + 3)) {
        plVar3[5] = lVar4;
        thunk_FUN_01f51358(plVar3 + 5,lVar4);
        puVar1 = PTR_DAT_0457b660;
        if (*(long *)PTR_DAT_0457b660 == 0) {
          lVar4 = 0;
        }
        else {
          lVar4 = thunk_FUN_01f116d0(*(long *)PTR_DAT_0457b660,*(undefined8 *)(*plVar3 + 0x40));
          if (lVar4 == 0) goto LAB_03ea397c;
          lVar4 = *(long *)puVar1;
        }
        if (2 < *(uint *)(plVar3 + 3)) {
          plVar3[6] = lVar4;
          thunk_FUN_01f51358();
          lVar4 = (**(code **)(*unaff_x19 + 0x4a8))();
          if ((lVar4 != 0) &&
             (lVar5 = thunk_FUN_01f116d0(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
          goto LAB_03ea397c;
          if (3 < *(uint *)(plVar3 + 3)) {
            plVar3[7] = lVar4;
            thunk_FUN_01f51358(plVar3 + 7,lVar4);
            if (*unaff_x22 == 0) {
              lVar4 = 0;
            }
            else {
              lVar4 = thunk_FUN_01f116d0(*unaff_x22,*(undefined8 *)(*plVar3 + 0x40));
              if (lVar4 == 0) goto LAB_03ea397c;
              lVar4 = *unaff_x22;
            }
            if (4 < *(uint *)(plVar3 + 3)) {
              plVar3[8] = lVar4;
              thunk_FUN_01f51358();
              FUN_0340ec80(plVar3,0);
              return;
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01f08a44();
  }
LAB_03ea3988:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


