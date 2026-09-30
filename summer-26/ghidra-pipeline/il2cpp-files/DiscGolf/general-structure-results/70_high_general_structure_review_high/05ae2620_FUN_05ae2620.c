/*
FUNCTION_NAME: FUN_05ae2620
ENTRY_POINT: 05ae2620
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_3;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


long FUN_05ae2620(long param_1,long param_2,long *param_3,long *param_4,uint *param_5)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  uint uVar5;
  long lVar6;
  long local_38;
  
  if ((DAT_06dc1e92 & 1) == 0) {
    FUN_02d965b8(Method_UnityEngine_UIElements_BaseField<bool>_set_value__);
    FUN_02d965b8(Method_UnityEngine_UIElements_BaseField<Vector2>_get_visualInput__);
    FUN_02d965b8(OVR_OpenVR_IVRApplications__IdentifyApplication_TypeInfo);
    DAT_06dc1e92 = 1;
  }
  local_38 = 0;
  *param_5 = 3;
  if (param_2 == 0) {
    if (param_4 == (long *)0x0) {
      if (*(long *)(param_1 + 0x50) == 0) goto LAB_05ae2838;
      uVar3 = FUN_04e95158(*(long *)(param_1 + 0x50),param_3,&local_38,
                           *(undefined8 *)
                            Method_UnityEngine_UIElements_BaseField<Vector2>_get_visualInput__);
      uVar5 = 0;
      if ((uVar3 & 1) == 0) {
        uVar5 = 2;
      }
    }
    else {
      bVar1 = *(byte *)(*(long *)OVR_OpenVR_IVRApplications__IdentifyApplication_TypeInfo + 0x130);
      if ((*(byte *)(*param_4 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*param_4 + 200) + (ulong)bVar1 * 8 + -8) !=
          *(long *)OVR_OpenVR_IVRApplications__IdentifyApplication_TypeInfo)) {
        uVar5 = 9;
      }
      else {
        if (param_3 == (long *)0x0) goto LAB_05ae2838;
        uVar3 = (**(code **)(*param_3 + 0x138))
                          (param_3,param_4[0x10],*(undefined8 *)(*param_3 + 0x140));
        if ((uVar3 & 1) == 0) {
          uVar5 = 8;
        }
        else {
          local_38 = param_4[0x13];
          uVar5 = 0;
        }
      }
    }
  }
  else {
    local_38 = FUN_05ae1854(param_2,param_3);
    if (local_38 != 0) {
      *param_5 = 0;
      return local_38;
    }
    lVar6 = *(long *)(param_2 + 0x88);
    if (lVar6 == 0) {
      if (*(long *)(param_2 + 0x78) == 0) {
LAB_05ae2838:
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      uVar3 = FUN_04e937e4(*(long *)(param_2 + 0x78),param_3,
                           *(undefined8 *)Method_UnityEngine_UIElements_BaseField<bool>_set_value__)
      ;
      if ((uVar3 & 1) == 0) {
        return local_38;
      }
      uVar5 = 7;
    }
    else {
      if (*(long *)(lVar6 + 0x60) == 0) goto LAB_05ae2838;
      uVar3 = FUN_05abb05c(*(long *)(lVar6 + 0x60),param_3,0);
      if ((uVar3 & 1) == 0) {
        uVar5 = 6;
      }
      else {
        iVar2 = FUN_05b0a61c(lVar6,0);
        if (iVar2 == 1) {
          uVar5 = 5;
        }
        else {
          if (*(long *)(param_1 + 0x50) == 0) goto LAB_05ae2838;
          uVar3 = FUN_04e95158(*(long *)(param_1 + 0x50),param_3,&local_38,
                               *(undefined8 *)
                                Method_UnityEngine_UIElements_BaseField<Vector2>_get_visualInput__);
          if ((uVar3 & 1) == 0) {
            iVar2 = FUN_05b0a61c(lVar6,0);
            if (iVar2 != 2) {
              return local_38;
            }
            uVar5 = 4;
          }
          else {
            if ((local_38 == 0) || (plVar4 = *(long **)(local_38 + 0x30), plVar4 == (long *)0x0))
            goto LAB_05ae2838;
            iVar2 = (**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
            uVar5 = (uint)(iVar2 == 0x25);
          }
        }
      }
    }
  }
  *param_5 = uVar5;
  return local_38;
}


