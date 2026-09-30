/*
FUNCTION_NAME: FUN_014ed9e4
ENTRY_POINT: 014ed9e4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_3;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_014ed9e4(int *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  int *piVar9;
  long lVar10;
  long *plVar11;
  undefined8 local_38;
  
  if ((DAT_03776ff8 & 1) == 0) {
    thunk_FUN_00d48444(Method_UnityEngine_Events_UnityEvent<MRUKTrackable>_Invoke__);
    thunk_FUN_00d48444(StringLiteral_1147);
    thunk_FUN_00d48444(PTR_DAT_033ebd08);
    thunk_FUN_00d48444(Method_System_Nullable<Quaternion>__ctor__);
    thunk_FUN_00d48444(
                      Method_UnityEngine_UIElements_PointerEventBase<PointerMoveEvent>_PostDispatch__
                      );
    thunk_FUN_00d48444(
                      Method_Oculus_Interaction_PoseDetection_TransformFeatureConfigBuilder_<>c_<_cctor>b__29_4__
                      );
    thunk_FUN_00d48444(System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo)
    ;
    thunk_FUN_00d48444(Method_System_IO_BinaryReader_ReadString__);
    thunk_FUN_00d48444(Method_System_Net_Sockets_NetworkStream_ReadAsync__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<Dropdown_DropdownItem>_get_Item__);
    thunk_FUN_00d48444(
                      System_Collections_Generic_Dictionary<GraphicsFormat,_Dictionary<FormatUsage,_bool>>_TypeInfo
                      );
    thunk_FUN_00d48444(System_Collections_Generic_List<ExposedTeleportPoint>_TypeInfo);
    DAT_03776ff8 = 1;
  }
  puVar3 = Method_System_Nullable<Quaternion>__ctor__;
  local_38 = 0;
  if (*param_1 == 0) {
    local_38 = *(undefined8 *)(param_1 + 0x10);
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    *param_1 = -1;
LAB_014edcd8:
    FUN_016a13e0(&local_38,0);
    puVar8 = *(undefined8 **)
              (*(long *)System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo
              + 0xb8);
  }
  else {
    lVar10 = *(long *)(param_1 + 8);
    lVar4 = thunk_FUN_00d62348(*(undefined8 *)
                                Method_System_Collections_Generic_List<Dropdown_DropdownItem>_get_Item__
                              );
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_017b46ec(lVar4,0);
    *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(param_1 + 8);
    iVar1 = param_1[10];
    *(char *)(lVar4 + 0x20) = (char)iVar1;
    *(undefined8 *)(lVar4 + 0x28) = *(undefined8 *)(param_1 + 0xc);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    uVar5 = FUN_014ec4d8(lVar10,(char)iVar1 != '\0');
    uVar6 = FUN_015ff8a0(uVar5,0);
    if ((uVar6 & 1) == 0) goto LAB_014edcf8;
    lVar7 = FUN_014ec77c(lVar10);
    *(long *)(lVar4 + 0x18) = lVar7;
    puVar8 = (undefined8 *)System_Collections_Generic_List<ExposedTeleportPoint>_TypeInfo;
    if (lVar7 != 0) {
      plVar11 = *(long **)(lVar10 + 0xb0);
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      lVar7 = *plVar11;
      uVar6 = (ulong)*(ushort *)(lVar7 + 0x12a);
      if (uVar6 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) ==
              *(long *)
               Method_UnityEngine_UIElements_PointerEventBase<PointerMoveEvent>_PostDispatch__) {
            puVar8 = (undefined8 *)(lVar7 + (long)(*piVar9 + 7) * 0x10 + 0x138);
            goto LAB_014edba8;
          }
          uVar6 = uVar6 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar6 != 0);
      }
      puVar8 = (undefined8 *)
               FUN_00d59724(plVar11,*(long *)
                                     Method_UnityEngine_UIElements_PointerEventBase<PointerMoveEvent>_PostDispatch__
                            ,7);
LAB_014edba8:
      plVar11 = (long *)(*(code *)*puVar8)(plVar11,puVar8[1]);
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      lVar7 = *plVar11;
      uVar6 = (ulong)*(ushort *)(lVar7 + 0x12a);
      if (uVar6 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) ==
              *(long *)
               Method_Oculus_Interaction_PoseDetection_TransformFeatureConfigBuilder_<>c_<_cctor>b__29_4__
             ) {
            puVar8 = (undefined8 *)(lVar7 + (long)(*piVar9 + 7) * 0x10 + 0x138);
            goto LAB_014edc14;
          }
          uVar6 = uVar6 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar6 != 0);
      }
      puVar8 = (undefined8 *)
               FUN_00d59724(plVar11,*(long *)
                                     Method_Oculus_Interaction_PoseDetection_TransformFeatureConfigBuilder_<>c_<_cctor>b__29_4__
                            ,7);
LAB_014edc14:
      uVar5 = (*(code *)*puVar8)(plVar11,puVar8[1]);
      puVar2 = 
      System_Collections_Generic_Dictionary<GraphicsFormat,_Dictionary<FormatUsage,_bool>>_TypeInfo;
      *(undefined8 *)(lVar10 + 0x18) = uVar5;
      *(undefined4 *)(lVar10 + 0x30) = 2;
      *(undefined8 *)(lVar10 + 0x28) = *(undefined8 *)puVar2;
      if (*(char *)(lVar4 + 0x20) == '\0') {
        if (*(char *)(lVar10 + 0xd5) == '\0') {
          uVar5 = 0;
        }
        else {
          uVar5 = *(undefined8 *)(param_1 + 0xe);
        }
        uVar5 = FUN_014e3040(*(undefined4 *)(lVar10 + 0xd0),uVar5);
        *(undefined8 *)(lVar10 + 0xd8) = uVar5;
      }
      lVar10 = thunk_FUN_00d62348(*(undefined8 *)
                                   Method_UnityEngine_Events_UnityEvent<MRUKTrackable>_Invoke__);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_016f27fc(lVar10,lVar4,*(undefined8 *)Method_System_Net_Sockets_NetworkStream_ReadAsync__,0
                  );
      if (*(int *)(*(long *)Method_System_IO_BinaryReader_ReadString__ + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      lVar4 = FUN_014e0608(lVar10);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      local_38 = FUN_017e7d88(lVar4,0);
      uVar6 = FUN_016a1310(&local_38,0);
      if ((uVar6 & 1) == 0) {
        *param_1 = 0;
        *(undefined8 *)(param_1 + 0x10) = local_38;
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_01098fc0(param_1 + 2,&local_38,param_1,*(undefined8 *)StringLiteral_1147);
        return;
      }
      goto LAB_014edcd8;
    }
  }
  uVar5 = *puVar8;
LAB_014edcf8:
  *param_1 = -2;
  puVar2 = PTR_DAT_033ebd08;
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  FUN_011ccb9c(param_1 + 2,uVar5,*(undefined8 *)puVar2);
  return;
}


