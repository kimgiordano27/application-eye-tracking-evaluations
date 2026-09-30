/*
FUNCTION_NAME: FUN_076d1ba4
ENTRY_POINT: 076d1ba4
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_8;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_21;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined8 FUN_076d1ba4(void *param_1,long *param_2,long *param_3)

{
  undefined *puVar1;
  undefined4 uVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined1 *puVar11;
  undefined2 *puVar12;
  undefined4 *puVar13;
  undefined8 uVar14;
  long **pplVar15;
  code *pcVar16;
  undefined8 local_1c0;
  undefined8 auStack_1b8 [38];
  long *local_88;
  undefined4 local_80;
  undefined2 local_7c [2];
  long *local_78;
  undefined4 local_70;
  undefined1 local_6c [4];
  long *local_68;
  undefined4 local_60;
  undefined2 local_5c [2];
  long *local_58;
  undefined2 local_4c [2];
  undefined1 local_48 [4];
  undefined1 local_44;
  
  if ((DAT_08271478 & 1) == 0) {
    FUN_0373b518(Method_UnityEngine_UIElements_BaseField<ulong>_get_visualInput__);
    FUN_0373b518(Method_UnityEngine_UIElements_BaseField<Vector2>__ctor__);
    FUN_0373b518(Method_UnityEngine_UIElements_BaseField<Vector2>_EndEditing__);
    FUN_0373b518(Method_UnityEngine_UIElements_BaseField<Vector2>_SetValueWithoutNotify__);
    FUN_0373b518(Method_UnityEngine_UIElements_BaseField<Vector2>_StartEditing__);
    FUN_0373b518(Method_UnityEngine_UIElements_BaseField<Vector2>_get_labelElement__);
    FUN_0373b518(Method_UnityEngine_UIElements_BaseField<Vector2>_get_rawValue__);
    FUN_0373b518(Method_UnityEngine_UIElements_BaseField<Vector2>_get_value__);
    FUN_0373b518(Method_UnityEngine_UIElements_BaseField<Vector2>_get_visualInput__);
    FUN_0373b518(Method_UnityEngine_UIElements_BaseField<Vector2>_set_rawValue__);
    FUN_0373b518(Method_UnityEngine_UIElements_BaseField<Vector2>_set_value__);
    FUN_0373b518(Method_UnityEngine_UIElements_BaseField<Vector2Int>_get_labelElement__);
    FUN_0373b518(Method_UnityEngine_UIElements_BaseField<Vector2Int>_get_visualInput__);
    FUN_0373b518(Method_UnityEngine_UIElements_BaseField<Vector3>_get_labelElement__);
    FUN_0373b518(Method_UnityEngine_UIElements_BaseField<Vector3>_get_visualInput__);
    FUN_0373b518(PTR_DAT_07d882c0);
    FUN_0373b518(PTR_DAT_07d92630);
    FUN_0373b518(Method_UnityEngine_UIElements_BaseField<Vector3>_set_showMixedValue__);
    DAT_08271478 = 1;
  }
  local_44 = 0;
  local_48[0] = 0;
  local_4c[0] = 0;
  local_58 = (long *)0x0;
  local_5c[0] = 0;
  local_60 = 0;
  local_68 = (long *)0x0;
  local_6c[0] = 0;
  local_70 = 0;
  local_78 = (long *)0x0;
  local_7c[0] = 0;
  local_80 = 0;
  local_88 = (long *)0x0;
  if ((param_3 != (long *)0x0) &&
     (plVar3 = (long *)thunk_FUN_0374b7cc(param_3,0), plVar3 != (long *)0x0)) {
    uVar4 = (**(code **)(*plVar3 + 0x5b8))(plVar3,*(undefined8 *)(*plVar3 + 0x5c0));
    puVar1 = PTR_DAT_07d86548;
    if ((uVar4 & 1) == 0) {
      if (*(int *)(*(long *)(PTR_DAT_07d86548 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      uVar2 = FUN_0625d834(plVar3,0);
      switch(uVar2) {
      case 3:
        if (*(long *)(*param_3 + 0x40) != *(long *)(*(long *)(puVar1 + 0x28) + 0x40)) {
LAB_076d23c0:
                    /* WARNING: Subroutine does not return */
          FUN_0373bb54(param_3);
        }
        puVar11 = (undefined1 *)thunk_FUN_03778a20(param_3);
        local_44 = *puVar11;
        if (param_2 == (long *)0x0) goto LAB_076d23a8;
        lVar7 = thunk_FUN_0375ad08(*(undefined8 *)
                                    (*param_2 +
                                     (ulong)*(ushort *)
                                             (*(long *)
                                               Method_UnityEngine_UIElements_BaseField<Vector2>_EndEditing__
                                             + 0x50) * 0x10 + 0x140));
        pcVar16 = *(code **)(lVar7 + 8);
        pplVar15 = (long **)&local_44;
        break;
      case 4:
        if (*(long *)(*param_3 + 0x40) != *(long *)(*(long *)(puVar1 + 0x88) + 0x40))
        goto LAB_076d23c0;
        puVar12 = (undefined2 *)thunk_FUN_03778a20(param_3);
        local_4c[0] = *puVar12;
        if (param_2 == (long *)0x0) goto LAB_076d23a8;
        lVar7 = thunk_FUN_0375ad08(*(undefined8 *)
                                    (*param_2 +
                                     (ulong)*(ushort *)
                                             (*(long *)
                                               Method_UnityEngine_UIElements_BaseField<Vector2>_StartEditing__
                                             + 0x50) * 0x10 + 0x140));
        pcVar16 = *(code **)(lVar7 + 8);
        pplVar15 = (long **)local_4c;
        break;
      case 5:
        if (*(long *)(*param_3 + 0x40) != *(long *)(*(long *)(puVar1 + 0x30) + 0x40))
        goto LAB_076d23c0;
        puVar11 = (undefined1 *)thunk_FUN_03778a20(param_3);
        local_6c[0] = *puVar11;
        if (param_2 == (long *)0x0) goto LAB_076d23a8;
        lVar7 = thunk_FUN_0375ad08(*(undefined8 *)
                                    (*param_2 +
                                     (ulong)*(ushort *)
                                             (*(long *)
                                               Method_UnityEngine_UIElements_BaseField<Vector2>_set_rawValue__
                                             + 0x50) * 0x10 + 0x140));
        pcVar16 = *(code **)(lVar7 + 8);
        pplVar15 = (long **)local_6c;
        break;
      case 6:
        if (*(long *)(*param_3 + 0x40) != *(long *)(*(long *)(puVar1 + 0x18) + 0x40))
        goto LAB_076d23c0;
        puVar11 = (undefined1 *)thunk_FUN_03778a20(param_3);
        local_48[0] = *puVar11;
        if (param_2 == (long *)0x0) goto LAB_076d23a8;
        lVar7 = thunk_FUN_0375ad08(*(undefined8 *)
                                    (*param_2 +
                                     (ulong)*(ushort *)
                                             (*(long *)
                                               Method_UnityEngine_UIElements_BaseField<Vector2>_SetValueWithoutNotify__
                                             + 0x50) * 0x10 + 0x140));
        pcVar16 = *(code **)(lVar7 + 8);
        pplVar15 = (long **)local_48;
        break;
      case 7:
        if (*(long *)(*param_3 + 0x40) != *(long *)(*(long *)(puVar1 + 0x38) + 0x40))
        goto LAB_076d23c0;
        puVar12 = (undefined2 *)thunk_FUN_03778a20(param_3);
        local_5c[0] = *puVar12;
        if (param_2 == (long *)0x0) goto LAB_076d23a8;
        lVar7 = thunk_FUN_0375ad08(*(undefined8 *)
                                    (*param_2 +
                                     (ulong)*(ushort *)
                                             (*(long *)
                                               Method_UnityEngine_UIElements_BaseField<Vector2>_get_rawValue__
                                             + 0x50) * 0x10 + 0x140));
        pcVar16 = *(code **)(lVar7 + 8);
        pplVar15 = (long **)local_5c;
        break;
      case 8:
        if (*(long *)(*param_3 + 0x40) != *(long *)(*(long *)(puVar1 + 0x40) + 0x40))
        goto LAB_076d23c0;
        puVar12 = (undefined2 *)thunk_FUN_03778a20(param_3);
        local_7c[0] = *puVar12;
        if (param_2 == (long *)0x0) goto LAB_076d23a8;
        lVar7 = thunk_FUN_0375ad08(*(undefined8 *)
                                    (*param_2 +
                                     (ulong)*(ushort *)
                                             (*(long *)
                                               Method_UnityEngine_UIElements_BaseField<Vector2Int>_get_visualInput__
                                             + 0x50) * 0x10 + 0x140));
        pcVar16 = *(code **)(lVar7 + 8);
        pplVar15 = (long **)local_7c;
        break;
      case 9:
        if (*(long *)(*param_3 + 0x40) != *(long *)(*(long *)(puVar1 + 0x48) + 0x40))
        goto LAB_076d23c0;
        puVar13 = (undefined4 *)thunk_FUN_03778a20(param_3);
        local_60 = *puVar13;
        if (param_2 == (long *)0x0) goto LAB_076d23a8;
        lVar7 = thunk_FUN_0375ad08(*(undefined8 *)
                                    (*param_2 +
                                     (ulong)*(ushort *)
                                             (*(long *)
                                               Method_UnityEngine_UIElements_BaseField<Vector2>_get_value__
                                             + 0x50) * 0x10 + 0x140));
        pcVar16 = *(code **)(lVar7 + 8);
        pplVar15 = (long **)&local_60;
        break;
      case 10:
        if (*(long *)(*param_3 + 0x40) != *(long *)(*(long *)(puVar1 + 0x50) + 0x40))
        goto LAB_076d23c0;
        puVar13 = (undefined4 *)thunk_FUN_03778a20(param_3);
        local_80 = *puVar13;
        if (param_2 == (long *)0x0) goto LAB_076d23a8;
        lVar7 = thunk_FUN_0375ad08(*(undefined8 *)
                                    (*param_2 +
                                     (ulong)*(ushort *)
                                             (*(long *)
                                               Method_UnityEngine_UIElements_BaseField<Vector3>_get_labelElement__
                                             + 0x50) * 0x10 + 0x140));
        pcVar16 = *(code **)(lVar7 + 8);
        pplVar15 = (long **)&local_80;
        break;
      case 0xb:
        if (*(long *)(*param_3 + 0x40) != *(long *)(*(long *)(puVar1 + 0x68) + 0x40))
        goto LAB_076d23c0;
        puVar10 = (undefined8 *)thunk_FUN_03778a20(param_3);
        local_68 = (long *)*puVar10;
        if (param_2 == (long *)0x0) goto LAB_076d23a8;
        lVar7 = thunk_FUN_0375ad08(*(undefined8 *)
                                    (*param_2 +
                                     (ulong)*(ushort *)
                                             (*(long *)
                                               Method_UnityEngine_UIElements_BaseField<Vector2>_get_visualInput__
                                             + 0x50) * 0x10 + 0x140));
        pcVar16 = *(code **)(lVar7 + 8);
        pplVar15 = &local_68;
        break;
      case 0xc:
        if (*(long *)(*param_3 + 0x40) != *(long *)(*(long *)(puVar1 + 0x70) + 0x40))
        goto LAB_076d23c0;
        puVar10 = (undefined8 *)thunk_FUN_03778a20(param_3);
        local_88 = (long *)*puVar10;
        if (param_2 == (long *)0x0) goto LAB_076d23a8;
        lVar7 = thunk_FUN_0375ad08(*(undefined8 *)
                                    (*param_2 +
                                     (ulong)*(ushort *)
                                             (*(long *)
                                               Method_UnityEngine_UIElements_BaseField<Vector3>_get_visualInput__
                                             + 0x50) * 0x10 + 0x140));
        pcVar16 = *(code **)(lVar7 + 8);
        pplVar15 = &local_88;
        break;
      case 0xd:
        if (*(long *)(*param_3 + 0x40) != *(long *)(*(long *)(puVar1 + 0x78) + 0x40))
        goto LAB_076d23c0;
        puVar13 = (undefined4 *)thunk_FUN_03778a20(param_3);
        local_70 = *puVar13;
        if (param_2 == (long *)0x0) goto LAB_076d23a8;
        lVar7 = thunk_FUN_0375ad08(*(undefined8 *)
                                    (*param_2 +
                                     (ulong)*(ushort *)
                                             (*(long *)
                                               Method_UnityEngine_UIElements_BaseField<Vector2>_set_value__
                                             + 0x50) * 0x10 + 0x140));
        pcVar16 = *(code **)(lVar7 + 8);
        pplVar15 = (long **)&local_70;
        break;
      case 0xe:
        if (*(long *)(*param_3 + 0x40) != *(long *)(*(long *)(puVar1 + 0x80) + 0x40))
        goto LAB_076d23c0;
        puVar10 = (undefined8 *)thunk_FUN_03778a20(param_3);
        local_58 = (long *)*puVar10;
        if (param_2 == (long *)0x0) goto LAB_076d23a8;
        lVar7 = thunk_FUN_0375ad08(*(undefined8 *)
                                    (*param_2 +
                                     (ulong)*(ushort *)
                                             (*(long *)
                                               Method_UnityEngine_UIElements_BaseField<Vector2>_get_labelElement__
                                             + 0x50) * 0x10 + 0x140));
        pcVar16 = *(code **)(lVar7 + 8);
        pplVar15 = &local_58;
        break;
      default:
        auStack_1b8[0] =
             *(undefined8 *)Method_UnityEngine_UIElements_BaseField<Vector3>_set_showMixedValue__;
        local_1c0 = 1;
        thunk_FUN_037aeb94(auStack_1b8);
        return local_1c0;
      case 0x12:
        if (*param_3 != *(long *)(puVar1 + 0x90)) goto LAB_076d23c0;
        local_78 = param_3;
        if (param_2 == (long *)0x0) goto LAB_076d23a8;
        lVar7 = thunk_FUN_0375ad08(*(undefined8 *)
                                    (*param_2 +
                                     (ulong)*(ushort *)
                                             (*(long *)
                                               Method_UnityEngine_UIElements_BaseField<Vector2Int>_get_labelElement__
                                             + 0x50) * 0x10 + 0x140));
        pcVar16 = *(code **)(lVar7 + 8);
        pplVar15 = &local_78;
      }
      uVar14 = (*pcVar16)(param_2,param_1,pplVar15,lVar7);
      return uVar14;
    }
    plVar5 = (long *)FUN_076d2980();
    plVar6 = (long *)RootMotion_FinalIK_Finger___ctor(*(undefined8 *)PTR_DAT_07d92630,1);
    if (plVar6 != (long *)0x0) {
      lVar7 = thunk_FUN_037787d0(plVar3,*(undefined8 *)(*plVar6 + 0x40));
      if (lVar7 == 0) goto LAB_076d23b0;
      if ((int)plVar6[3] == 0) goto LAB_076d23ac;
      plVar6[4] = (long)plVar3;
      thunk_FUN_037aeb94(plVar6 + 4,plVar3);
      if (plVar5 != (long *)0x0) {
        lVar7 = (**(code **)(*plVar5 + 0x408))(plVar5,plVar6,*(undefined8 *)(*plVar5 + 0x410));
        plVar3 = (long *)RootMotion_FinalIK_Finger___ctor(*(undefined8 *)PTR_DAT_07d882c0,2);
        memcpy(&local_1c0,param_1,0x138);
        lVar8 = thunk_FUN_037784fc(*(undefined8 *)
                                    Method_UnityEngine_UIElements_BaseField<ulong>_get_visualInput__
                                   ,&local_1c0);
        if (plVar3 != (long *)0x0) {
          if ((lVar8 != 0) &&
             (lVar9 = thunk_FUN_037787d0(lVar8,*(undefined8 *)(*plVar3 + 0x40)), lVar9 == 0)) {
LAB_076d23b0:
            uVar14 = thunk_FUN_037854c8();
                    /* WARNING: Subroutine does not return */
            FUN_0373b680(uVar14,0);
          }
          if ((int)plVar3[3] != 0) {
            plVar3[4] = lVar8;
            thunk_FUN_037aeb94(plVar3 + 4,lVar8);
            lVar8 = thunk_FUN_037787d0(param_3,*(undefined8 *)(*plVar3 + 0x40));
            if (lVar8 == 0) goto LAB_076d23b0;
            if (1 < *(uint *)(plVar3 + 3)) {
              plVar3[5] = (long)param_3;
              thunk_FUN_037aeb94(plVar3 + 5,param_3);
              if ((lVar7 != 0) &&
                 (plVar3 = (long *)FUN_06176200(lVar7,param_2,plVar3,0), plVar3 != (long *)0x0)) {
                if (*(long *)(*plVar3 + 0x40) ==
                    *(long *)(*(long *)Method_UnityEngine_UIElements_BaseField<Vector2>__ctor__ +
                             0x40)) {
                  puVar10 = (undefined8 *)thunk_FUN_03778a20();
                  return *puVar10;
                }
                    /* WARNING: Subroutine does not return */
                FUN_0373bb54();
              }
              goto LAB_076d23a8;
            }
          }
LAB_076d23ac:
                    /* WARNING: Subroutine does not return */
          FUN_0373b7bc();
        }
      }
    }
  }
LAB_076d23a8:
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


