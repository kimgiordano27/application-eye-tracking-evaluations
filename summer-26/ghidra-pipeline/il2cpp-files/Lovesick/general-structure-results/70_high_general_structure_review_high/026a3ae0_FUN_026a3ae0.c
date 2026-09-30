/*
FUNCTION_NAME: FUN_026a3ae0
ENTRY_POINT: 026a3ae0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined8 FUN_026a3ae0(long *param_1,undefined8 *param_2,long *param_3,long *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  short sVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  
  puVar2 = Method_TMPro_TMP_TextProcessingStack<float>__ctor__;
  puVar1 = Method_System_Collections_Generic_List<PlayerPlatform>_Contains__;
  if ((DAT_03786641 & 1) == 0) {
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<PlayerPlatform>_Contains__);
    thunk_FUN_00d48444(
                      Method_UnityEngine_InputSystem_Utilities_CallbackArray<InputDeviceFindControlLayoutDelegate>_RemoveCallback__
                      );
    thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<Tween>_get_Count__);
    thunk_FUN_00d48444(TMPro_TMP_InputField_SubmitEvent_TypeInfo);
    DAT_03786641 = 1;
  }
  uVar8 = *(undefined8 *)puVar1;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar8 = FUN_01780344(uVar8,0);
  if (param_1 != (long *)0x0) {
    lVar5 = (**(code **)(*param_1 + 0x218))(param_1,uVar8,0,*(undefined8 *)(*param_1 + 0x220));
    *param_2 = 0;
    *param_3 = 0;
    *param_4 = 0;
    if (lVar5 != 0) {
      if (*(int *)(lVar5 + 0x18) != 1) {
        return 0;
      }
      plVar6 = *(long **)(lVar5 + 0x20);
      if (plVar6 != (long *)0x0) {
        if (*plVar6 !=
            *(long *)
             Method_UnityEngine_InputSystem_Utilities_CallbackArray<InputDeviceFindControlLayoutDelegate>_RemoveCallback__
           ) {
                    /* WARNING: Subroutine does not return */
          FUN_00da544c();
        }
        lVar5 = plVar6[2];
        uVar7 = FUN_015ff8a0(lVar5,0);
        if ((uVar7 & 1) != 0) {
          return 0;
        }
        if (lVar5 != 0) {
          lVar9 = *(long *)Method_System_Collections_Generic_List<Tween>_get_Count__;
          iVar4 = FUN_01604d30(lVar5,lVar9,0);
          if (iVar4 < 0) {
            return 0;
          }
          if (((lVar9 != 0) &&
              (lVar5 = FUN_01603ec8(lVar5,*(int *)(lVar9 + 0x10) + iVar4,0), lVar5 != 0)) &&
             (lVar5 = FUN_01604318(lVar5,0), lVar5 != 0)) {
            if (*(int *)(lVar5 + 0x10) == 0) {
              return 0;
            }
            sVar3 = FUN_015fa29c(lVar5,0,0);
            if (sVar3 == 0x5b) {
              iVar4 = FUN_016047a8(lVar5,0x5d,0);
              if (iVar4 == -1) {
                return 0;
              }
              uVar8 = FUN_01601d40(lVar5,1,iVar4 + -1,0);
              *param_2 = uVar8;
              lVar5 = FUN_01603ec8(lVar5,iVar4 + 1,0);
              if ((lVar5 == 0) || (lVar5 = FUN_01604318(lVar5,0), lVar5 == 0)) goto LAB_026a3d94;
            }
            else {
              plVar6 = (long *)(**(code **)(*param_1 + 0x318))
                                         (param_1,*(undefined8 *)(*param_1 + 800));
              if ((plVar6 == (long *)0x0) ||
                 (lVar9 = (**(code **)(*plVar6 + 0x278))(plVar6,*(undefined8 *)(*plVar6 + 0x280)),
                 lVar9 == 0)) goto LAB_026a3d94;
              *param_2 = *(undefined8 *)(lVar9 + 0x10);
            }
            iVar4 = FUN_01605160(lVar5,0x2e,0);
            puVar1 = TMPro_TMP_InputField_SubmitEvent_TypeInfo;
            if (iVar4 < 0) {
              *param_4 = lVar5;
              lVar5 = *(long *)puVar1;
            }
            else {
              lVar9 = FUN_01603ec8(lVar5,iVar4 + 1,0);
              *param_4 = lVar9;
              lVar5 = FUN_01601d40(lVar5,0,iVar4,0);
            }
            if (lVar5 != 0) {
              if (*(int *)(lVar5 + 0x10) < 1) {
                lVar5 = (**(code **)(*param_1 + 0x2e8))(param_1,*(undefined8 *)(*param_1 + 0x2f0));
              }
              *param_3 = lVar5;
              return 1;
            }
          }
        }
      }
    }
  }
LAB_026a3d94:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


