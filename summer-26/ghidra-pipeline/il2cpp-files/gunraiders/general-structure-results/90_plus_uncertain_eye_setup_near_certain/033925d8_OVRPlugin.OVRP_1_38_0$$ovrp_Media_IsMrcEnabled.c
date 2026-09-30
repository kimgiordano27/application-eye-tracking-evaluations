/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$ovrp_Media_IsMrcEnabled
ENTRY_POINT: 033925d8
PROGRAM: gunraiders-libil2cpp.so
SCORE: 93
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_1;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x033928e0) */

undefined1 OVRPlugin_OVRP_1_38_0__ovrp_Media_IsMrcEnabled(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long unaff_x19;
  long unaff_x20;
  undefined2 uStack0000000000000008;
  undefined8 in_stack_00000018;
  
  FUN_01c5d288(*(undefined8 *)(param_1 + 0xdd0));
  FUN_01c5d288(PTR_DAT_04230960);
  FUN_01c5d288(Method_Unity_Collections_NativeArray_Enumerator<Vector2>_MoveNext__);
  FUN_01c5d288(TMPro_TMP_SpriteGlyph_TypeInfo);
  FUN_01c5d288(Method_UnityEngine_Rendering_DebugUI_Field<Object>_set_setter__);
  FUN_01c5d288(PTR_DAT_04231370);
  FUN_01c5d288(Method_System_Collections_Generic_EqualityComparer<object>_get_Default__);
  FUN_01c5d288(Method_System_Collections_Generic_List_Enumerator<Type>_MoveNext__);
  FUN_01c5d288(PTR_DAT_04231378);
  *(undefined1 *)(unaff_x20 + 0x699) = 1;
  puVar2 = PTR_DAT_04231370;
  in_stack_00000018 = 0;
  if (*(char *)(unaff_x19 + 0xf9) == '\0') {
    _uStack0000000000000008 = _uStack0000000000000008 & 0xffffffffffff0000;
    System_Collections_ObjectModel_ReadOnlyCollection<FrameTimeSample>__System_Collections_IList_set_Item
              (&stack0x00000008,0,*(undefined8 *)PTR_DAT_04231370);
    in_stack_00000018 = *(undefined8 *)(unaff_x19 + 200);
    *(undefined2 *)(unaff_x19 + 0xf9) = uStack0000000000000008;
    iVar6 = FUN_02f211a0(&stack0x00000018,0,
                         *(undefined8 *)
                          Method_UnityEngine_Rendering_DebugUI_Field<Object>_set_setter__);
    if (iVar6 == 0) {
      if (*(long *)(unaff_x19 + 0xd8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      plVar7 = (long *)FUN_027bd80c(*(long *)(unaff_x19 + 0xd8),
                                    *(undefined8 *)
                                     Method_UnityEngine_Rendering_DebugUI_Field<Object>_GetValue__);
      puVar5 = Method_UnityEngine_Rendering_DebugUI_Field<float>__ctor__;
      puVar4 = Method_UnityEngine_Rendering_DebugUI_Field<Object>_set_getter__;
      puVar3 = Method_System_Collections_Generic_EqualityComparer<object>_get_Default__;
      puVar1 = PTR_DAT_04230960;
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      do {
        lVar9 = *plVar7;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
              puVar8 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_03392750;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar8 = (undefined8 *)FUN_01c72498(plVar7,*(long *)puVar1,0);
LAB_03392750:
        uVar10 = (*(code *)*puVar8)(plVar7,puVar8[1]);
        if ((uVar10 & 1) == 0) goto LAB_03392848;
        lVar9 = *plVar7;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)puVar4) {
              puVar8 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_033927ac;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar8 = (undefined8 *)FUN_01c72498(plVar7,*(long *)puVar4,0);
LAB_033927ac:
        lVar9 = (*(code *)*puVar8)(plVar7,puVar8[1]);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        if ((DAT_045336a1 & 1) == 0) {
          FUN_01c5d288(puVar5);
          DAT_045336a1 = 1;
        }
        if (*(int *)(lVar9 + 0x14) != 0) break;
        if ((*(ulong *)(lVar9 + 0x90) & 0xff) == 0) {
          uVar10 = 0;
        }
        else {
          _uStack0000000000000008 = 0;
          FUN_02f2115c(&stack0x00000008,(uint)(*(ulong *)(lVar9 + 0x90) >> 0x20) & 2,
                       *(undefined8 *)puVar3);
          uVar10 = _uStack0000000000000008;
        }
      } while ((uVar10 >> 0x20 != 2) || ((uVar10 & 0xff) == 0));
      _uStack0000000000000008 = _uStack0000000000000008 & 0xffffffffffff0000;
      System_Collections_ObjectModel_ReadOnlyCollection<FrameTimeSample>__System_Collections_IList_set_Item
                (&stack0x00000008,1,*(undefined8 *)puVar2);
      *(undefined2 *)(unaff_x19 + 0xf9) = uStack0000000000000008;
LAB_03392848:
      if (plVar7 != (long *)0x0) {
        lVar9 = *plVar7;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_0422fce8) {
              puVar8 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_033928a0;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar8 = (undefined8 *)FUN_01c72498(plVar7,*(long *)PTR_DAT_0422fce8,0);
LAB_033928a0:
        (*(code *)*puVar8)(plVar7,puVar8[1]);
      }
    }
    else {
      _uStack0000000000000008 = _uStack0000000000000008 & 0xffffffffffff0000;
      System_Collections_ObjectModel_ReadOnlyCollection<FrameTimeSample>__System_Collections_IList_set_Item
                (&stack0x00000008,1,*(undefined8 *)puVar2);
      *(undefined2 *)(unaff_x19 + 0xf9) = uStack0000000000000008;
    }
  }
  return *(undefined1 *)(unaff_x19 + 0xfa);
}


