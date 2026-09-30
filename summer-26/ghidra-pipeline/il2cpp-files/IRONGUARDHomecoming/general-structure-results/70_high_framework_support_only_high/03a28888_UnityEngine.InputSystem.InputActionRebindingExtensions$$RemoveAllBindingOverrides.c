/*
FUNCTION_NAME: UnityEngine.InputSystem.InputActionRebindingExtensions$$RemoveAllBindingOverrides
ENTRY_POINT: 03a28888
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_17;strong_pose_or_ray_construction_hits_3;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


void UnityEngine_InputSystem_InputActionRebindingExtensions__RemoveAllBindingOverrides(void)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined4 *puVar9;
  int *piVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long unaff_x19;
  long *unaff_x20;
  int unaff_w21;
  long *plVar15;
  int iVar16;
  uint uVar17;
  undefined8 *unaff_x25;
  int iVar18;
  long *unaff_x27;
  int iVar19;
  int iStack0000000000000008;
  undefined4 uStack000000000000000c;
  
  do {
    while (uVar3 = FUN_03a27828(), (uVar3 & 1) != 0) {
      *(int *)(unaff_x19 + 0x50) = *(int *)(unaff_x19 + 0x50) + 1;
    }
    if (*(long *)(unaff_x19 + 0x78) == 0) goto LAB_03a28964;
    uVar4 = FUN_030f28e4(*(long *)(unaff_x19 + 0x78),unaff_w21,*unaff_x25);
    plVar11 = (long *)*unaff_x20;
    if ((plVar11 == (long *)0x0) ||
       (plVar11 = (long *)(**(code **)(*plVar11 + 0x308))
                                    (plVar11,uVar4,*(undefined8 *)(*plVar11 + 0x310)),
       plVar11 == (long *)0x0)) goto LAB_03a28964;
    if (*(long *)(*plVar11 + 0x40) != *(long *)(*unaff_x27 + 0x40)) goto LAB_03a28e2c;
    thunk_FUN_01f11920();
    uStack000000000000000c = *(undefined4 *)(unaff_x19 + 0x50);
    plVar11 = *(long **)(unaff_x19 + 0x68);
    uVar5 = thunk_FUN_01f113fc(*unaff_x27,(long)&stack0x00000008 + 4);
    if (plVar11 == (long *)0x0) goto LAB_03a28964;
    (**(code **)(*plVar11 + 0x318))(plVar11,uVar4,uVar5,*(undefined8 *)(*plVar11 + 800));
    FUN_03a28474();
    unaff_w21 = unaff_w21 + 1;
    *(int *)(unaff_x19 + 0x50) = *(int *)(unaff_x19 + 0x50) + 1;
    if (*(long *)(unaff_x19 + 0x78) == 0) goto LAB_03a28964;
  } while (unaff_w21 < *(int *)(*(long *)(unaff_x19 + 0x78) + 0x18));
  if (*(int *)(unaff_x19 + 0x54) < *(int *)(unaff_x19 + 0x58)) {
    lVar6 = FUN_01f08890(*(undefined8 *)
                          Method_Utility_MonoBehaviourSingleton<OculusProvider>_get_Instance__);
    plVar15 = (long *)(unaff_x19 + 0x70);
    *plVar15 = lVar6;
    thunk_FUN_01f51358(plVar15,lVar6);
    plVar11 = *(long **)(unaff_x19 + 0x60);
    if ((plVar11 != (long *)0x0) &&
       (plVar11 = (long *)(**(code **)(*plVar11 + 0x328))(plVar11,*(undefined8 *)(*plVar11 + 0x330))
       , puVar2 = Method_UnityEngine_Mesh_SetUvsImpl<Vector3>__,
       puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__,
       plVar11 != (long *)0x0)) {
      uVar17 = 0;
      do {
        lVar6 = *plVar11;
        uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar3 != 0) {
          piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
              puVar7 = (undefined8 *)(lVar6 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_03a28a18;
            }
            uVar3 = uVar3 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar3 != 0);
        }
        puVar7 = (undefined8 *)FUN_01ecb238(plVar11,*(long *)puVar1,0);
LAB_03a28a18:
        uVar3 = (*(code *)*puVar7)(plVar11,puVar7[1]);
        lVar6 = *plVar15;
        if ((uVar3 & 1) == 0) {
          uVar4 = FUN_02a09360(*(undefined8 *)StringLiteral_6974);
          FUN_02253a74(lVar6,uVar4,*(undefined8 *)StringLiteral_6973);
          unaff_x25 = (undefined8 *)Method_UnityEngine_GameObject_AddComponent<SoundEmitter>__;
          goto LAB_03a28b00;
        }
        lVar12 = *plVar11;
        uVar3 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar3 != 0) {
          piVar10 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
              puVar7 = (undefined8 *)(lVar12 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_03a28a78;
            }
            uVar3 = uVar3 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar3 != 0);
        }
        puVar7 = (undefined8 *)FUN_01ecb238(plVar11,*(long *)puVar2,0);
LAB_03a28a78:
        plVar8 = (long *)(*(code *)*puVar7)(plVar11,puVar7[1]);
        if ((lVar6 == 0) || (plVar8 == (long *)0x0)) break;
        if (*(long *)(*plVar8 + 0x40) != *(long *)(*unaff_x27 + 0x40)) goto LAB_03a28e2c;
        puVar9 = (undefined4 *)thunk_FUN_01f11920();
        if (*(uint *)(lVar6 + 0x18) <= uVar17) goto LAB_03a28e30;
        lVar12 = (long)(int)uVar17;
        uVar17 = uVar17 + 1;
        *(undefined4 *)(lVar6 + lVar12 * 4 + 0x20) = *puVar9;
      } while( true );
    }
  }
  else {
LAB_03a28b00:
    puVar2 = Method_UnityEngine_UIElements_BaseField_UxmlTraits<int>__ctor__;
    puVar1 = Method_UnityEngine_UIElements_BaseField_UxmlTraits<Enum>_Init__;
    if (*unaff_x20 == 0) {
      if (*(long *)(unaff_x19 + 0x70) == 0) {
        return;
      }
      uVar4 = thunk_FUN_01f117cc(*(undefined8 *)Method_System_RuntimeType_CreateInstanceImpl__);
      FUN_03546db4(uVar4,0);
      *(undefined8 *)(unaff_x19 + 0x68) = uVar4;
      thunk_FUN_01f51358();
      uVar4 = thunk_FUN_01f117cc(*(undefined8 *)puVar1);
      FUN_030f2380(uVar4,*(undefined8 *)puVar2);
      *(undefined8 *)(unaff_x19 + 0x78) = uVar4;
      thunk_FUN_01f51358((undefined8 *)(unaff_x19 + 0x78),uVar4);
      lVar6 = 0;
      iVar18 = -1;
LAB_03a28c00:
      puVar1 = Method_UnityEngine_UIElements_BaseField_UxmlTraits<Vector2Int>__ctor__;
      if (0 < *(int *)(unaff_x19 + 0x54)) {
        uVar3 = 0;
        iVar16 = 0;
        do {
          lVar12 = *(long *)(unaff_x19 + 0x70);
          if (lVar12 == 0) {
            iVar19 = (int)uVar3;
          }
          else {
            if (*(uint *)(lVar12 + 0x18) <= uVar3) {
LAB_03a28e30:
                    /* WARNING: Subroutine does not return */
              FUN_01f08a44();
            }
            iVar19 = *(int *)(lVar12 + uVar3 * 4 + 0x20);
          }
          if (iVar18 == iVar19) {
            if (lVar6 == 0) goto LAB_03a28964;
            lVar12 = *(long *)(unaff_x19 + 0x78);
            uVar4 = FUN_030f28e4(lVar6,iVar16,*unaff_x25);
            if (lVar12 == 0) goto LAB_03a28964;
            lVar13 = *(long *)(lVar12 + 0x10);
            lVar14 = *(long *)puVar1;
            *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
            if (lVar13 == 0) goto LAB_03a28964;
            uVar17 = *(uint *)(lVar12 + 0x18);
            if (uVar17 < *(uint *)(lVar13 + 0x18)) {
              *(uint *)(lVar12 + 0x18) = uVar17 + 1;
              *(undefined8 *)(lVar13 + (long)(int)uVar17 * 8 + 0x20) = uVar4;
              thunk_FUN_01f51358();
            }
            else {
              FUN_030f2bb4(lVar12,uVar4,
                           *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
            }
            iVar16 = iVar16 + 1;
            if (iVar16 == *(int *)(lVar6 + 0x18)) {
              iVar18 = -1;
            }
            else {
              plVar11 = (long *)*unaff_x20;
              uVar4 = FUN_030f28e4(lVar6,iVar16,*unaff_x25);
              if ((plVar11 == (long *)0x0) ||
                 (plVar11 = (long *)(**(code **)(*plVar11 + 0x308))
                                              (plVar11,uVar4,*(undefined8 *)(*plVar11 + 0x310)),
                 plVar11 == (long *)0x0)) goto LAB_03a28964;
              if (*(long *)(*plVar11 + 0x40) != *(long *)(*unaff_x27 + 0x40)) goto LAB_03a28e2c;
              piVar10 = (int *)thunk_FUN_01f11920();
              iVar18 = *piVar10;
            }
          }
          else {
            uVar4 = *(undefined8 *)(unaff_x19 + 0x48);
            if (*(int *)(*(long *)
                          Method_UnityEngine_UIElements_TextInputBaseField<int>_get_isDelayed__ +
                        0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            uVar4 = FUN_035041c8(iVar19,uVar4,0);
            lVar12 = *(long *)(unaff_x19 + 0x78);
            if (lVar12 == 0) goto LAB_03a28964;
            lVar13 = *(long *)(lVar12 + 0x10);
            lVar14 = *(long *)puVar1;
            *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
            if (lVar13 == 0) goto LAB_03a28964;
            uVar17 = *(uint *)(lVar12 + 0x18);
            if (uVar17 < *(uint *)(lVar13 + 0x18)) {
              *(uint *)(lVar12 + 0x18) = uVar17 + 1;
              puVar7 = (undefined8 *)(lVar13 + (long)(int)uVar17 * 8 + 0x20);
              *puVar7 = uVar4;
              thunk_FUN_01f51358(puVar7,uVar4);
            }
            else {
              FUN_030f2bb4(lVar12,uVar4,
                           *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
            }
            plVar11 = (long *)*unaff_x20;
            iStack0000000000000008 = iVar19;
            uVar5 = thunk_FUN_01f113fc(*unaff_x27,&stack0x00000008);
            if (plVar11 == (long *)0x0) goto LAB_03a28964;
            (**(code **)(*plVar11 + 0x318))(plVar11,uVar4,uVar5,*(undefined8 *)(*plVar11 + 800));
            unaff_x25 = (undefined8 *)Method_UnityEngine_GameObject_AddComponent<SoundEmitter>__;
          }
          uVar3 = uVar3 + 1;
        } while ((long)uVar3 < (long)*(int *)(unaff_x19 + 0x54));
      }
      return;
    }
    plVar11 = (long *)(unaff_x19 + 0x78);
    lVar6 = *plVar11;
    lVar12 = thunk_FUN_01f117cc(*(undefined8 *)
                                 Method_UnityEngine_UIElements_BaseField_UxmlTraits<Enum>_Init__);
    FUN_030f2380(lVar12,*(undefined8 *)puVar2);
    *plVar11 = lVar12;
    thunk_FUN_01f51358(plVar11,lVar12);
    if (lVar6 != 0) {
      plVar11 = *(long **)(unaff_x19 + 0x68);
      uVar4 = FUN_030f28e4(lVar6,0,*unaff_x25);
      if ((plVar11 != (long *)0x0) &&
         (plVar11 = (long *)(**(code **)(*plVar11 + 0x308))
                                      (plVar11,uVar4,*(undefined8 *)(*plVar11 + 0x310)),
         plVar11 != (long *)0x0)) {
        if (*(long *)(*plVar11 + 0x40) != *(long *)(*unaff_x27 + 0x40)) {
LAB_03a28e2c:
                    /* WARNING: Subroutine does not return */
          FUN_01f08cfc();
        }
        piVar10 = (int *)thunk_FUN_01f11920();
        iVar18 = *piVar10;
        goto LAB_03a28c00;
      }
    }
  }
LAB_03a28964:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


