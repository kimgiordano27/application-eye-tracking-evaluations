/*
FUNCTION_NAME: OVRPlugin.OVRP_1_44_0$$ovrp_GetUseOverriddenExternalCameraStaticPose
ENTRY_POINT: 0339c2e4
PROGRAM: gunraiders-libil2cpp.so
SCORE: 157
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_15;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_3;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_3
*/


undefined8
OVRPlugin_OVRP_1_44_0__ovrp_GetUseOverriddenExternalCameraStaticPose
          (long param_1,long param_2,long *param_3,long *param_4,undefined8 param_5,long *param_6,
          undefined8 param_7,byte *param_8)

{
  undefined *puVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long *plVar13;
  undefined8 uStack0000000000000010;
  long *plStack0000000000000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  long *in_stack_00000090;
  long *in_stack_00000098;
  undefined1 *in_stack_000000a0;
  undefined1 *in_stack_000000a8;
  
  uStack0000000000000010 = param_5;
  plStack0000000000000018 = param_3;
  if ((DAT_045336be & 1) == 0) {
    FUN_01c5d288(PTR_DAT_042305b0);
    FUN_01c5d288(Method_System_Collections_Generic_List_Enumerator<ShadowCaster2D>_MoveNext__);
    FUN_01c5d288(Method_System_Collections_Generic_HashSet_Enumerator<Vector3Int>_MoveNext__);
    FUN_01c5d288(Method_System_Collections_Generic_HashSet<int>_RemoveWhere__);
    FUN_01c5d288(
                Method_System_Collections_Generic_Dictionary_Enumerator<Type,_List<string>>_get_Current__
                );
    FUN_01c5d288(
                Method_System_Collections_Generic_List_Enumerator<ScriptableRendererFeature>_MoveNext__
                );
    FUN_01c5d288(Method_System_Collections_Generic_HashSet<int>_get_Count__);
    FUN_01c5d288(Method_System_Collections_Generic_HashSet<Interactable>__ctor__);
    FUN_01c5d288(Method_System_Collections_Generic_HashSet<Interactable>_Add__);
    DAT_045336be = 1;
  }
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  *in_stack_00000090 = 0;
  *param_8 = 0;
  *in_stack_00000098 = 0;
  *in_stack_000000a0 = 0;
  *in_stack_000000a8 = 0;
  if (param_2 == 0) goto LAB_0339c83c;
  if (*(char *)(param_2 + 0x80) != '\0') {
    return 1;
  }
  if (param_6 == (long *)0x0) goto LAB_0339c83c;
  iVar3 = (**(code **)(*param_6 + 0x188))(param_6,*(undefined8 *)(*param_6 + 400));
  if (*(long *)(param_2 + 0x48) == 0) {
    uVar6 = FUN_03395dc8(param_1,*(undefined8 *)(param_2 + 0x40));
    *(undefined8 *)(param_2 + 0x48) = uVar6;
  }
  in_stack_00000028 = *(undefined8 *)(param_2 + 0xa0);
  if (*(long *)(param_1 + 0x20) == 0) goto LAB_0339c83c;
  iVar4 = FUN_02f211a0(&stack0x00000028,*(undefined4 *)(*(long *)(param_1 + 0x20) + 0x24),
                       *(undefined8 *)Method_System_Collections_Generic_HashSet<int>_get_Count__);
  if ((iVar4 != 2) &&
     ((((iVar3 - 1U < 2 || (*plStack0000000000000018 != 0)) && (*(char *)(param_2 + 0x81) != '\0'))
      && ((*(long *)(param_2 + 0x48) == 0 || (*(int *)(*(long *)(param_2 + 0x48) + 0x24) != 8))))))
  {
    plVar13 = *(long **)(param_2 + 0x68);
    if (plVar13 == (long *)0x0) goto LAB_0339c83c;
    lVar10 = *plVar13;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) ==
            *(long *)Method_System_Collections_Generic_HashSet<int>_RemoveWhere__) {
          puVar7 = (undefined8 *)(lVar10 + (long)(*piVar12 + 1) * 0x10 + 0x138);
          goto LAB_0339c4d0;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar7 = (undefined8 *)
             FUN_01c72498(plVar13,*(long *)
                                   Method_System_Collections_Generic_HashSet<int>_RemoveWhere__,1);
LAB_0339c4d0:
    lVar10 = (*(code *)*puVar7)(plVar13,param_7,puVar7[1]);
    *in_stack_00000090 = lVar10;
    *in_stack_000000a0 = 1;
    if (*in_stack_00000090 != 0) {
      uVar6 = thunk_FUN_01c5d21c(*in_stack_00000090,0);
      lVar10 = FUN_03395e54(param_1,uVar6);
      *in_stack_00000098 = lVar10;
      if (lVar10 == 0) goto LAB_0339c83c;
      if (*(char *)(lVar10 + 0x28) == '\0') {
        bVar2 = FUN_0337fd4c(*(undefined8 *)(lVar10 + 0x60),0);
        bVar2 = ~bVar2 & 1;
      }
      else {
        bVar2 = 0;
      }
      *param_8 = bVar2;
    }
  }
  puVar1 = Method_System_Collections_Generic_HashSet_Enumerator<Vector3Int>_MoveNext__;
  if ((*(char *)(param_2 + 0x82) == '\0') && (*param_8 == 0)) {
    plVar13 = *(long **)(param_1 + 0x28);
    if (plVar13 == (long *)0x0) {
      return 1;
    }
    lVar10 = *plVar13;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) ==
            *(long *)Method_System_Collections_Generic_HashSet_Enumerator<Vector3Int>_MoveNext__) {
          puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_0339c710;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar7 = (undefined8 *)
             FUN_01c72498(plVar13,*(long *)
                                   Method_System_Collections_Generic_HashSet_Enumerator<Vector3Int>_MoveNext__
                          ,0);
LAB_0339c710:
    iVar3 = (*(code *)*puVar7)(plVar13,puVar7[1]);
    if (iVar3 < 3) {
      return 1;
    }
    plVar13 = *(long **)(param_1 + 0x28);
    uVar6 = (**(code **)(*param_6 + 0x1c8))(param_6,*(undefined8 *)(*param_6 + 0x1d0));
    if (*(int *)(*(long *)PTR_DAT_042305b0 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8(*(long *)PTR_DAT_042305b0);
    }
    uVar8 = FUN_03295500(0);
    uVar8 = FUN_033704d4(*(undefined8 *)
                          Method_System_Collections_Generic_HashSet<Interactable>_Add__,uVar8,
                         *(undefined8 *)(param_2 + 0x30),*(undefined8 *)(param_2 + 0x50),0);
    if (*(int *)(*(long *)
                  Method_System_Collections_Generic_List_Enumerator<ScriptableRendererFeature>_MoveNext__
                + 0xe0) == 0) {
      thunk_FUN_01c1d1e8(*(long *)
                          Method_System_Collections_Generic_List_Enumerator<ScriptableRendererFeature>_MoveNext__
                        );
    }
    uVar9 = thunk_FUN_01c495e4(param_6,*(undefined8 *)
                                        Method_System_Collections_Generic_List_Enumerator<ShadowCaster2D>_MoveNext__
                              );
    uVar6 = FUN_03358c64(uVar9,uVar6,uVar8,0);
    if (plVar13 != (long *)0x0) {
      lVar10 = *plVar13;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
            puVar7 = (undefined8 *)(lVar10 + (long)(*piVar12 + 1) * 0x10 + 0x138);
            goto LAB_0339c820;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar7 = (undefined8 *)FUN_01c72498(plVar13,*(long *)puVar1,1);
LAB_0339c820:
      (*(code *)*puVar7)(plVar13,3,uVar6,0,puVar7[1]);
      return 1;
    }
    goto LAB_0339c83c;
  }
  if (iVar3 == 0xb) {
    if (param_4 == (long *)0x0) {
LAB_0339c578:
      plVar13 = (long *)0x0;
    }
    else {
      bVar2 = *(byte *)(*(long *)
                         Method_System_Collections_Generic_Dictionary_Enumerator<Type,_List<string>>_get_Current__
                       + 0x130);
      if (*(byte *)(*param_4 + 0x130) < bVar2) goto LAB_0339c578;
      plVar13 = param_4;
      if (*(long *)(*(long *)(*param_4 + 200) + (ulong)bVar2 * 8 + -8) !=
          *(long *)
           Method_System_Collections_Generic_Dictionary_Enumerator<Type,_List<string>>_get_Current__
         ) {
        plVar13 = (long *)0x0;
      }
    }
    uVar6 = FUN_03393964(param_1,plVar13,param_2);
    if ((int)uVar6 != 1) goto LAB_0339c600;
LAB_0339c5f8:
    *in_stack_000000a8 = (char)uVar6;
  }
  else {
LAB_0339c600:
    puVar1 = Method_System_Collections_Generic_HashSet<Interactable>__ctor__;
    in_stack_00000020 = *(undefined8 *)(param_2 + 0x90);
    if (*(long *)(param_1 + 0x20) == 0) {
LAB_0339c83c:
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    uVar11 = FUN_02f211a0(&stack0x00000020,*(undefined4 *)(*(long *)(param_1 + 0x20) + 0x2c),
                          *(undefined8 *)
                           Method_System_Collections_Generic_HashSet<Interactable>__ctor__);
    if ((uVar11 & 1) != 0) {
      in_stack_00000020 = *(undefined8 *)(param_2 + 0x90);
      if (*(long *)(param_1 + 0x20) == 0) goto LAB_0339c83c;
      uVar5 = FUN_02f211a0(&stack0x00000020,*(undefined4 *)(*(long *)(param_1 + 0x20) + 0x2c),
                           *(undefined8 *)puVar1);
      if (((uVar5 >> 1 & 1) == 0) && (uVar11 = FUN_0337d8fc(iVar3,0), (uVar11 & 1) != 0)) {
        uVar6 = (**(code **)(*param_6 + 0x198))(param_6,*(undefined8 *)(*param_6 + 0x1a0));
        uVar8 = FUN_033931b0(param_2);
        uVar11 = FUN_0337de00(uVar6,uVar8,0);
        if ((uVar11 & 1) != 0) {
          uVar6 = 1;
          goto LAB_0339c5f8;
        }
      }
    }
    if (*in_stack_00000090 == 0) {
      *in_stack_00000098 = *(long *)(param_2 + 0x48);
      uVar6 = 0;
    }
    else {
      uVar6 = thunk_FUN_01c5d21c(*in_stack_00000090,0);
      lVar10 = FUN_03395e54(param_1,uVar6);
      *in_stack_00000098 = lVar10;
      if (lVar10 == *(long *)(param_2 + 0x48)) {
        uVar6 = 0;
      }
      else {
        lVar10 = FUN_03396234(param_1,lVar10,*(undefined8 *)(param_2 + 0x78),param_4,
                              uStack0000000000000010);
        uVar6 = 0;
        *plStack0000000000000018 = lVar10;
      }
    }
  }
  return uVar6;
}


