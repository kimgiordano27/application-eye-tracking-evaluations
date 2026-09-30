/*
FUNCTION_NAME: FUN_03a28784
ENTRY_POINT: 03a28784
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 121
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_19;strong_pose_or_ray_construction_hits_10;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_03a28784(long param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long *plVar10;
  int *piVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long *plVar17;
  int iVar18;
  long *plVar19;
  int iVar20;
  uint uVar21;
  int iVar22;
  int local_68;
  undefined4 local_64;
  
  if ((DAT_04838b55 & 1) == 0) {
    thunk_FUN_01efb3a4(StringLiteral_6973);
    thunk_FUN_01efb3a4(StringLiteral_6974);
    thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_TextInputBaseField<int>_get_isDelayed__);
    thunk_FUN_01efb3a4(Method_System_RuntimeType_CreateInstanceImpl__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Mesh_SetUvsImpl<Vector3>__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(Method_Utility_MonoBehaviourSingleton<OculusProvider>_get_Instance__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__);
    thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_BaseField_UxmlTraits<Vector2Int>__ctor__);
    thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_BaseField_UxmlTraits<int>__ctor__);
    thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_BaseField_UxmlTraits<int>_ParseChoiceList__);
    thunk_FUN_01efb3a4(Method_UnityEngine_GameObject_AddComponent<SoundEmitter>__);
    thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_BaseField_UxmlTraits<Enum>_Init__);
    DAT_04838b55 = 1;
  }
  puVar9 = (undefined8 *)Method_UnityEngine_GameObject_AddComponent<SoundEmitter>__;
  puVar2 = Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__;
  plVar17 = (long *)(param_1 + 0x68);
  if (*plVar17 == 0) {
LAB_03a28968:
    if (*(int *)(param_1 + 0x54) < *(int *)(param_1 + 0x58)) {
      lVar12 = FUN_01f08890(*(undefined8 *)
                             Method_Utility_MonoBehaviourSingleton<OculusProvider>_get_Instance__);
      plVar19 = (long *)(param_1 + 0x70);
      *plVar19 = lVar12;
      thunk_FUN_01f51358(plVar19,lVar12);
      plVar13 = *(long **)(param_1 + 0x60);
      if ((plVar13 != (long *)0x0) &&
         (plVar13 = (long *)(**(code **)(*plVar13 + 0x328))
                                      (plVar13,*(undefined8 *)(*plVar13 + 0x330)),
         puVar4 = Method_UnityEngine_Mesh_SetUvsImpl<Vector3>__,
         puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__,
         plVar13 != (long *)0x0)) {
        uVar21 = 0;
        do {
          lVar12 = *plVar13;
          uVar5 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar5 != 0) {
            piVar11 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == *(long *)puVar3) {
                puVar9 = (undefined8 *)(lVar12 + (long)*piVar11 * 0x10 + 0x138);
                goto LAB_03a28a18;
              }
              uVar5 = uVar5 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar5 != 0);
          }
          puVar9 = (undefined8 *)FUN_01ecb238(plVar13,*(long *)puVar3,0);
LAB_03a28a18:
          uVar5 = (*(code *)*puVar9)(plVar13,puVar9[1]);
          lVar12 = *plVar19;
          if ((uVar5 & 1) == 0) {
            uVar6 = FUN_02a09360(*(undefined8 *)StringLiteral_6974);
            FUN_02253a74(lVar12,uVar6,*(undefined8 *)StringLiteral_6973);
            puVar9 = (undefined8 *)Method_UnityEngine_GameObject_AddComponent<SoundEmitter>__;
            goto LAB_03a28b00;
          }
          lVar14 = *plVar13;
          uVar5 = (ulong)*(ushort *)(lVar14 + 0x12e);
          if (uVar5 != 0) {
            piVar11 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == *(long *)puVar4) {
                puVar9 = (undefined8 *)(lVar14 + (long)*piVar11 * 0x10 + 0x138);
                goto LAB_03a28a78;
              }
              uVar5 = uVar5 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar5 != 0);
          }
          puVar9 = (undefined8 *)FUN_01ecb238(plVar13,*(long *)puVar4,0);
LAB_03a28a78:
          plVar10 = (long *)(*(code *)*puVar9)(plVar13,puVar9[1]);
          if ((lVar12 == 0) || (plVar10 == (long *)0x0)) break;
          if (*(long *)(*plVar10 + 0x40) != *(long *)(*(long *)puVar2 + 0x40)) goto LAB_03a28e2c;
          puVar7 = (undefined4 *)thunk_FUN_01f11920();
          if (*(uint *)(lVar12 + 0x18) <= uVar21) goto LAB_03a28e30;
          lVar14 = (long)(int)uVar21;
          uVar21 = uVar21 + 1;
          *(undefined4 *)(lVar12 + lVar14 * 4 + 0x20) = *puVar7;
        } while( true );
      }
    }
    else {
LAB_03a28b00:
      puVar4 = Method_UnityEngine_UIElements_BaseField_UxmlTraits<int>__ctor__;
      puVar3 = Method_UnityEngine_UIElements_BaseField_UxmlTraits<Enum>_Init__;
      if (*plVar17 == 0) {
        if (*(long *)(param_1 + 0x70) == 0) {
          return;
        }
        uVar6 = thunk_FUN_01f117cc(*(undefined8 *)Method_System_RuntimeType_CreateInstanceImpl__);
        FUN_03546db4(uVar6,0);
        *(undefined8 *)(param_1 + 0x68) = uVar6;
        thunk_FUN_01f51358(plVar17,uVar6);
        uVar6 = thunk_FUN_01f117cc(*(undefined8 *)puVar3);
        FUN_030f2380(uVar6,*(undefined8 *)puVar4);
        *(undefined8 *)(param_1 + 0x78) = uVar6;
        thunk_FUN_01f51358((undefined8 *)(param_1 + 0x78),uVar6);
        lVar12 = 0;
        iVar18 = -1;
LAB_03a28c00:
        puVar3 = Method_UnityEngine_UIElements_BaseField_UxmlTraits<Vector2Int>__ctor__;
        if (0 < *(int *)(param_1 + 0x54)) {
          uVar5 = 0;
          iVar20 = 0;
          do {
            lVar14 = *(long *)(param_1 + 0x70);
            if (lVar14 == 0) {
              iVar22 = (int)uVar5;
            }
            else {
              if (*(uint *)(lVar14 + 0x18) <= uVar5) {
LAB_03a28e30:
                    /* WARNING: Subroutine does not return */
                FUN_01f08a44();
              }
              iVar22 = *(int *)(lVar14 + uVar5 * 4 + 0x20);
            }
            if (iVar18 == iVar22) {
              if (lVar12 == 0) goto LAB_03a28964;
              lVar14 = *(long *)(param_1 + 0x78);
              uVar6 = FUN_030f28e4(lVar12,iVar20,*puVar9);
              if (lVar14 == 0) goto LAB_03a28964;
              lVar15 = *(long *)(lVar14 + 0x10);
              lVar16 = *(long *)puVar3;
              *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
              if (lVar15 == 0) goto LAB_03a28964;
              uVar21 = *(uint *)(lVar14 + 0x18);
              if (uVar21 < *(uint *)(lVar15 + 0x18)) {
                *(uint *)(lVar14 + 0x18) = uVar21 + 1;
                *(undefined8 *)(lVar15 + (long)(int)uVar21 * 8 + 0x20) = uVar6;
                thunk_FUN_01f51358();
              }
              else {
                FUN_030f2bb4(lVar14,uVar6,
                             *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
              }
              iVar20 = iVar20 + 1;
              if (iVar20 == *(int *)(lVar12 + 0x18)) {
                iVar18 = -1;
              }
              else {
                plVar13 = (long *)*plVar17;
                uVar6 = FUN_030f28e4(lVar12,iVar20,*puVar9);
                if ((plVar13 == (long *)0x0) ||
                   (plVar13 = (long *)(**(code **)(*plVar13 + 0x308))
                                                (plVar13,uVar6,*(undefined8 *)(*plVar13 + 0x310)),
                   plVar13 == (long *)0x0)) goto LAB_03a28964;
                if (*(long *)(*plVar13 + 0x40) != *(long *)(*(long *)puVar2 + 0x40))
                goto LAB_03a28e2c;
                piVar11 = (int *)thunk_FUN_01f11920();
                iVar18 = *piVar11;
              }
            }
            else {
              uVar6 = *(undefined8 *)(param_1 + 0x48);
              if (*(int *)(*(long *)
                            Method_UnityEngine_UIElements_TextInputBaseField<int>_get_isDelayed__ +
                          0xe0) == 0) {
                thunk_FUN_01ee6d7c();
              }
              uVar6 = FUN_035041c8(iVar22,uVar6,0);
              lVar14 = *(long *)(param_1 + 0x78);
              if (lVar14 == 0) goto LAB_03a28964;
              lVar15 = *(long *)(lVar14 + 0x10);
              lVar16 = *(long *)puVar3;
              *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
              if (lVar15 == 0) goto LAB_03a28964;
              uVar21 = *(uint *)(lVar14 + 0x18);
              if (uVar21 < *(uint *)(lVar15 + 0x18)) {
                *(uint *)(lVar14 + 0x18) = uVar21 + 1;
                puVar9 = (undefined8 *)(lVar15 + (long)(int)uVar21 * 8 + 0x20);
                *puVar9 = uVar6;
                thunk_FUN_01f51358(puVar9,uVar6);
              }
              else {
                FUN_030f2bb4(lVar14,uVar6,
                             *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
              }
              plVar13 = (long *)*plVar17;
              local_68 = iVar22;
              uVar8 = thunk_FUN_01f113fc(*(undefined8 *)puVar2,&local_68);
              if (plVar13 == (long *)0x0) goto LAB_03a28964;
              (**(code **)(*plVar13 + 0x318))(plVar13,uVar6,uVar8,*(undefined8 *)(*plVar13 + 800));
              puVar9 = (undefined8 *)Method_UnityEngine_GameObject_AddComponent<SoundEmitter>__;
            }
            uVar5 = uVar5 + 1;
          } while ((long)uVar5 < (long)*(int *)(param_1 + 0x54));
        }
        return;
      }
      plVar13 = (long *)(param_1 + 0x78);
      lVar12 = *plVar13;
      lVar14 = thunk_FUN_01f117cc(*(undefined8 *)
                                   Method_UnityEngine_UIElements_BaseField_UxmlTraits<Enum>_Init__);
      FUN_030f2380(lVar14,*(undefined8 *)puVar4);
      *plVar13 = lVar14;
      thunk_FUN_01f51358(plVar13,lVar14);
      if (lVar12 != 0) {
        plVar13 = *(long **)(param_1 + 0x68);
        uVar6 = FUN_030f28e4(lVar12,0,*puVar9);
        if ((plVar13 != (long *)0x0) &&
           (plVar13 = (long *)(**(code **)(*plVar13 + 0x308))
                                        (plVar13,uVar6,*(undefined8 *)(*plVar13 + 0x310)),
           plVar13 != (long *)0x0)) {
          if (*(long *)(*plVar13 + 0x40) != *(long *)(*(long *)puVar2 + 0x40)) {
LAB_03a28e2c:
                    /* WARNING: Subroutine does not return */
            FUN_01f08cfc();
          }
          piVar11 = (int *)thunk_FUN_01f11920();
          iVar18 = *piVar11;
          goto LAB_03a28c00;
        }
      }
    }
  }
  else {
    lVar12 = *(long *)(param_1 + 0x78);
    if (lVar12 != 0) {
      iVar18 = 0;
      while( true ) {
        if (*(int *)(lVar12 + 0x18) <= iVar18) goto LAB_03a28968;
        iVar20 = *(int *)(param_1 + 0x50);
        while (uVar5 = FUN_03a27828(param_1,iVar20), (uVar5 & 1) != 0) {
          iVar20 = *(int *)(param_1 + 0x50) + 1;
          *(int *)(param_1 + 0x50) = iVar20;
        }
        if (*(long *)(param_1 + 0x78) == 0) break;
        uVar6 = FUN_030f28e4(*(long *)(param_1 + 0x78),iVar18,*puVar9);
        plVar13 = (long *)*plVar17;
        if ((plVar13 == (long *)0x0) ||
           (plVar13 = (long *)(**(code **)(*plVar13 + 0x308))
                                        (plVar13,uVar6,*(undefined8 *)(*plVar13 + 0x310)),
           plVar13 == (long *)0x0)) break;
        if (*(long *)(*plVar13 + 0x40) != *(long *)(*(long *)puVar2 + 0x40)) goto LAB_03a28e2c;
        puVar7 = (undefined4 *)thunk_FUN_01f11920();
        uVar1 = *puVar7;
        local_64 = *(undefined4 *)(param_1 + 0x50);
        plVar13 = *(long **)(param_1 + 0x68);
        uVar8 = thunk_FUN_01f113fc(*(undefined8 *)puVar2,&local_64);
        if (plVar13 == (long *)0x0) break;
        (**(code **)(*plVar13 + 0x318))(plVar13,uVar6,uVar8,*(undefined8 *)(*plVar13 + 800));
        FUN_03a28474(param_1,*(undefined4 *)(param_1 + 0x50),uVar1);
        lVar12 = *(long *)(param_1 + 0x78);
        iVar18 = iVar18 + 1;
        *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
        if (lVar12 == 0) break;
      }
    }
  }
LAB_03a28964:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


