/*
FUNCTION_NAME: FUN_033833b4
ENTRY_POINT: 033833b4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 210
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;frame_behavior;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_15;strong_pose_or_ray_construction_hits_16;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_interaction_sink;functionality_gaze_interaction_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03383958) */
/* WARNING: Removing unreachable block (ram,0x03383a3c) */
/* WARNING: Removing unreachable block (ram,0x03383bb0) */
/* WARNING: Removing unreachable block (ram,0x03383bc4) */

void FUN_033833b4(long param_1,long *param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  long *plVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  int *piVar18;
  long lVar19;
  long *local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  long *local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  if ((DAT_048321b1 & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_System_Reflection_Emit_GenericTypeParameterBuilder_HasElementTypeImpl__
                      );
    thunk_FUN_01efb3a4(Method_System_Reflection_Emit_GenericTypeParameterBuilder_InvokeMember__);
    thunk_FUN_01efb3a4(Method_System_Reflection_Emit_GenericTypeParameterBuilder_IsArrayImpl__);
    thunk_FUN_01efb3a4(Method_System_Reflection_Emit_GenericTypeParameterBuilder_IsByRefImpl__);
    thunk_FUN_01efb3a4(Method_System_Reflection_Emit_GenericTypeParameterBuilder_IsCOMObjectImpl__);
    thunk_FUN_01efb3a4(Method_System_Reflection_Emit_GenericTypeParameterBuilder_IsDefined__);
    thunk_FUN_01efb3a4(Method_System_Reflection_Emit_GenericTypeParameterBuilder_IsPointerImpl__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Component_TryGetComponent<Skybox>__);
    thunk_FUN_01efb3a4(Method_System_Linq_Enumerable_Contains<float>__);
    thunk_FUN_01efb3a4(Method_System_Reflection_Emit_GenericTypeParameterBuilder_IsPrimitiveImpl__);
    thunk_FUN_01efb3a4(Method_System_Reflection_Emit_GenericTypeParameterBuilder_get_Assembly__);
    thunk_FUN_01efb3a4(
                      Method_System_Reflection_Emit_GenericTypeParameterBuilder_get_AssemblyQualifiedName__
                      );
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_System_Reflection_Emit_GenericTypeParameterBuilder_get_BaseType__);
    thunk_FUN_01efb3a4(Method_System_Reflection_Emit_GenericTypeParameterBuilder_get_FullName__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_BaseField_UxmlTraits<Vector2Int>__ctor__);
    thunk_FUN_01efb3a4(Method_System_Reflection_Emit_GenericTypeParameterBuilder_get_Module__);
    thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_BaseField_UxmlTraits<int>__ctor__);
    thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_BaseField_UxmlTraits<Enum>_Init__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Component_GetComponent<OVRCameraRig>__);
    thunk_FUN_01efb3a4(Method_System_Reflection_Emit_GenericTypeParameterBuilder_get_Name__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Component_GetComponentsInChildren<DebugUIHandlerWidget>__)
    ;
    thunk_FUN_01efb3a4(Method_System_Reflection_Emit_GenericTypeParameterBuilder_get_Namespace__);
    thunk_FUN_01efb3a4(Method_Gameplay_Turrets_CannonTurret_<Start>b__11_2__);
    thunk_FUN_01efb3a4(
                      Method_System_Reflection_Emit_GenericTypeParameterBuilder_get_UnderlyingSystemType__
                      );
    DAT_048321b1 = 1;
  }
  puVar3 = Method_System_Reflection_Emit_GenericTypeParameterBuilder_IsPointerImpl__;
  puVar2 = Method_System_Reflection_Emit_GenericTypeParameterBuilder_IsCOMObjectImpl__;
  local_80 = (long *)0x0;
  uStack_78 = 0;
  local_70 = 0;
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_02b6b46c(*(long *)(param_1 + 0x20),
                 *(undefined8 *)
                  Method_System_Reflection_Emit_GenericTypeParameterBuilder_IsArrayImpl__);
    lVar6 = thunk_FUN_01f117cc(*(undefined8 *)puVar3);
    FUN_02b5c0dc(lVar6,*(undefined8 *)puVar2);
    if ((((param_2 != (long *)0x0) &&
         (plVar7 = (long *)(**(code **)(*param_2 + 0x2f8))
                                     (param_2,*(undefined8 *)(*param_2 + 0x300)),
         plVar7 != (long *)0x0)) &&
        (plVar7 = (long *)(**(code **)(*plVar7 + 0x1a8))
                                    (plVar7,*(undefined8 *)
                                             Method_System_Reflection_Emit_GenericTypeParameterBuilder_get_Namespace__
                                     ,*(undefined8 *)(*plVar7 + 0x1b0)), plVar7 != (long *)0x0)) &&
       (plVar7 = (long *)(**(code **)(*plVar7 + 0x238))(plVar7,*(undefined8 *)(*plVar7 + 0x240)),
       plVar7 != (long *)0x0)) {
      lVar14 = *plVar7;
      uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar16 != 0) {
        piVar18 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) ==
              *(long *)Method_System_Reflection_Emit_GenericTypeParameterBuilder_get_BaseType__) {
            puVar8 = (undefined8 *)(lVar14 + (long)*piVar18 * 0x10 + 0x138);
            goto LAB_03383618;
          }
          uVar16 = uVar16 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar16 != 0);
      }
      puVar8 = (undefined8 *)
               FUN_01ecb238(plVar7,*(long *)
                                    Method_System_Reflection_Emit_GenericTypeParameterBuilder_get_BaseType__
                            ,0);
LAB_03383618:
      plVar7 = (long *)(*(code *)*puVar8)(plVar7,puVar8[1]);
      puVar5 = Method_System_Reflection_Emit_GenericTypeParameterBuilder_get_Assembly__;
      puVar4 = Method_System_Reflection_Emit_GenericTypeParameterBuilder_IsDefined__;
      puVar3 = Method_System_Reflection_Emit_GenericTypeParameterBuilder_IsByRefImpl__;
      puVar2 = Method_UnityEngine_UIElements_BaseField_UxmlTraits<Vector2Int>__ctor__;
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      do {
        lVar14 = *plVar7;
        uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar16 != 0) {
          piVar18 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) ==
                *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__)
            {
              puVar8 = (undefined8 *)(lVar14 + (long)*piVar18 * 0x10 + 0x138);
              goto LAB_033836b4;
            }
            uVar16 = uVar16 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar16 != 0);
        }
        puVar8 = (undefined8 *)
                 FUN_01ecb238(plVar7,*(long *)
                                      Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__
                              ,0);
LAB_033836b4:
        uVar16 = (*(code *)*puVar8)(plVar7,puVar8[1]);
        if ((uVar16 & 1) == 0) {
          if (plVar7 == (long *)0x0) goto LAB_03383aa8;
          lVar14 = *plVar7;
          uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
          if (uVar16 == 0) goto LAB_03383a80;
          piVar18 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          goto LAB_03383a68;
        }
        lVar14 = *plVar7;
        uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar16 != 0) {
          piVar18 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) ==
                *(long *)Method_System_Reflection_Emit_GenericTypeParameterBuilder_get_FullName__) {
              puVar8 = (undefined8 *)(lVar14 + (long)*piVar18 * 0x10 + 0x138);
              goto LAB_03383718;
            }
            uVar16 = uVar16 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar16 != 0);
        }
        puVar8 = (undefined8 *)
                 FUN_01ecb238(plVar7,*(long *)
                                      Method_System_Reflection_Emit_GenericTypeParameterBuilder_get_FullName__
                              ,0);
LAB_03383718:
        plVar9 = (long *)(*(code *)*puVar8)(plVar7,puVar8[1]);
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        plVar10 = (long *)(**(code **)(*plVar9 + 0x188))(plVar9,0,*(undefined8 *)(*plVar9 + 400));
        if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        plVar10 = (long *)(**(code **)(*plVar10 + 0x1a8))
                                    (plVar10,*(undefined8 *)
                                              Method_System_Reflection_Emit_GenericTypeParameterBuilder_get_Name__
                                     ,*(undefined8 *)(*plVar10 + 0x1b0));
        if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar11 = (**(code **)(*plVar10 + 0x1c8))(plVar10,*(undefined8 *)(*plVar10 + 0x1d0));
        plVar10 = (long *)(**(code **)(*plVar9 + 0x188))(plVar9,0,*(undefined8 *)(*plVar9 + 400));
        if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        plVar10 = (long *)(**(code **)(*plVar10 + 0x1a8))
                                    (plVar10,*(undefined8 *)
                                              Method_UnityEngine_Component_GetComponentsInChildren<DebugUIHandlerWidget>__
                                     ,*(undefined8 *)(*plVar10 + 0x1b0));
        if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        plVar10 = (long *)(**(code **)(*plVar10 + 0x1c8))(plVar10,*(undefined8 *)(*plVar10 + 0x1d0))
        ;
        plVar9 = (long *)(**(code **)(*plVar9 + 0x188))(plVar9,0,*(undefined8 *)(*plVar9 + 400));
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        plVar9 = (long *)(**(code **)(*plVar9 + 0x1a8))
                                   (plVar9,*(undefined8 *)
                                            Method_Gameplay_Turrets_CannonTurret_<Start>b__11_2__,
                                    *(undefined8 *)(*plVar9 + 0x1b0));
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar12 = (**(code **)(*plVar9 + 0x1c8))(plVar9,*(undefined8 *)(*plVar9 + 0x1d0));
        uVar12 = FUN_03383d04(param_1,uVar12,plVar10);
        lVar14 = FUN_0230ab8c(uVar12,*(undefined8 *)Method_System_Linq_Enumerable_Contains<float>__)
        ;
        if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        FUN_030f35d0(&local_98,lVar14,
                     *(undefined8 *)
                      Method_System_Reflection_Emit_GenericTypeParameterBuilder_get_Module__);
        uStack_78 = uStack_90;
        local_80 = local_98;
        local_70 = local_88;
        while (uVar16 = FUN_02c7ab6c(&local_80,*(undefined8 *)puVar5), uVar12 = local_70,
              (uVar16 & 1) != 0) {
          if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          uVar16 = FUN_02b6b4d8(*(long *)(param_1 + 0x20),local_70,*(undefined8 *)puVar3);
          if ((uVar16 & 1) == 0) {
            lVar19 = *(long *)(param_1 + 0x20);
            uVar13 = thunk_FUN_01f117cc(*(undefined8 *)
                                         Method_UnityEngine_UIElements_BaseField_UxmlTraits<Enum>_Init__
                                       );
            FUN_030f2380(uVar13,*(undefined8 *)
                                 Method_UnityEngine_UIElements_BaseField_UxmlTraits<int>__ctor__);
            if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            FUN_02b6b2e4(lVar19,uVar12,uVar13,
                         *(undefined8 *)
                          Method_System_Reflection_Emit_GenericTypeParameterBuilder_InvokeMember__);
          }
          if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          lVar19 = FUN_02b6b264(*(long *)(param_1 + 0x20),uVar12,*(undefined8 *)puVar4);
          if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          lVar15 = *(long *)(lVar19 + 0x10);
          lVar17 = *(long *)puVar2;
          *(int *)(lVar19 + 0x1c) = *(int *)(lVar19 + 0x1c) + 1;
          if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          uVar1 = *(uint *)(lVar19 + 0x18);
          if (uVar1 < *(uint *)(lVar15 + 0x18)) {
            *(uint *)(lVar19 + 0x18) = uVar1 + 1;
            puVar8 = (undefined8 *)(lVar15 + (long)(int)uVar1 * 8 + 0x20);
            *puVar8 = uVar11;
            thunk_FUN_01f51358(puVar8,uVar11);
          }
          else {
            FUN_030f2bb4(lVar19,uVar11,
                         *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
          }
        }
        FUN_02c7ab68(&local_80,
                     *(undefined8 *)
                      Method_System_Reflection_Emit_GenericTypeParameterBuilder_IsPrimitiveImpl__);
        uVar12 = FUN_022f69fc(lVar14,*(undefined8 *)
                                      Method_UnityEngine_Component_TryGetComponent<Skybox>__);
        uStack_90 = 0;
        local_98 = plVar10;
        thunk_FUN_01f51358(&local_98,plVar10);
        uStack_90 = uVar12;
        thunk_FUN_01f51358(&uStack_90,uVar12);
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        FUN_02b5c964(lVar6,uVar11,local_98,uStack_90,
                     *(undefined8 *)
                      Method_System_Reflection_Emit_GenericTypeParameterBuilder_HasElementTypeImpl__
                    );
      } while( true );
    }
  }
  goto LAB_03383bbc;
  while( true ) {
    uVar16 = uVar16 - 1;
    piVar18 = piVar18 + 4;
    if (uVar16 == 0) break;
LAB_03383a68:
    if (*(long *)(piVar18 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar8 = (undefined8 *)(lVar14 + (long)*piVar18 * 0x10 + 0x138);
      goto LAB_03383a9c;
    }
  }
LAB_03383a80:
  puVar8 = (undefined8 *)
           FUN_01ecb238(plVar7,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_03383a9c:
  (*(code *)*puVar8)(plVar7,puVar8[1]);
LAB_03383aa8:
  uVar11 = *(undefined8 *)Method_UnityEngine_Component_GetComponent<OVRCameraRig>__;
  if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar11 = FUN_03579868(uVar11,0);
  uStack_90 = 0;
  local_98 = param_2;
  thunk_FUN_01f51358(&local_98);
  uStack_90 = uVar11;
  thunk_FUN_01f51358(&uStack_90,uVar11);
  if (lVar6 != 0) {
    FUN_02b5c964(lVar6,*(undefined8 *)
                        Method_System_Reflection_Emit_GenericTypeParameterBuilder_get_UnderlyingSystemType__
                 ,local_98,uStack_90,
                 *(undefined8 *)
                  Method_System_Reflection_Emit_GenericTypeParameterBuilder_HasElementTypeImpl__);
    FUN_0338407c(param_1,lVar6);
    return;
  }
LAB_03383bbc:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


