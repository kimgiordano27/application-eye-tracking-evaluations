/*
FUNCTION_NAME: FUN_03582be0
ENTRY_POINT: 03582be0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_14;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_3;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_03582be0(long *param_1,long *param_2,long *param_3)

{
  bool bVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  undefined8 *puVar12;
  ulong uVar13;
  int *piVar14;
  uint uVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  uint uVar19;
  ulong uVar20;
  
  if ((DAT_048333b2 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Drawing_DrawingManager_BeginFrameRendering__);
    thunk_FUN_01efb3a4(Method_Drawing_DrawingManager_PostRender__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                      );
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_localPosition__
                      );
    DAT_048333b2 = 1;
  }
  lVar4 = (**(code **)(*param_1 + 0x6d8))(param_1,0x38,*(undefined8 *)(*param_1 + 0x6e0));
  puVar2 = Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_localPosition__;
  if (lVar4 != 0) {
    plVar5 = (long *)FUN_01f08890(*(undefined8 *)
                                   Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                                  ,*(undefined4 *)(lVar4 + 0x18));
    lVar6 = FUN_01f08890(*(undefined8 *)puVar2,*(undefined4 *)(lVar4 + 0x18));
    uVar19 = *(uint *)(lVar4 + 0x18);
    if (0 < (int)uVar19) {
      lVar16 = 0;
      puVar12 = (undefined8 *)(lVar6 + 0x20);
      plVar11 = plVar5 + 4;
      do {
        uVar15 = (uint)lVar16;
        if (uVar19 <= uVar15) goto LAB_03582f94;
        plVar7 = *(long **)(lVar4 + 0x20 + lVar16 * 8);
        if ((plVar7 == (long *)0x0) ||
           (uVar8 = (**(code **)(*plVar7 + 0x1a8))(plVar7,*(undefined8 *)(*plVar7 + 0x1b0)),
           lVar6 == 0)) goto Oculus_Interaction_PoseDetection_TransformRecognizerActiveState___ctor;
        if (*(uint *)(lVar6 + 0x18) <= uVar15) goto LAB_03582f94;
        *puVar12 = uVar8;
        thunk_FUN_01f51358(puVar12,uVar8);
        if (*(uint *)(lVar4 + 0x18) <= uVar15) goto LAB_03582f94;
        plVar7 = *(long **)(lVar4 + 0x20 + lVar16 * 8);
        if ((plVar7 == (long *)0x0) ||
           (lVar9 = (**(code **)(*plVar7 + 0x328))(plVar7,*(undefined8 *)(*plVar7 + 0x330)),
           plVar5 == (long *)0x0))
        goto Oculus_Interaction_PoseDetection_TransformRecognizerActiveState___ctor;
        if ((lVar9 != 0) &&
           (lVar10 = thunk_FUN_01f116d0(lVar9,*(undefined8 *)(*plVar5 + 0x40)), lVar10 == 0))
        goto LAB_03582f9c;
        if (*(uint *)(plVar5 + 3) <= uVar15) goto LAB_03582f94;
        *plVar11 = lVar9;
        thunk_FUN_01f51358(plVar11,lVar9);
        uVar19 = *(uint *)(lVar4 + 0x18);
        lVar16 = lVar16 + 1;
        puVar12 = puVar12 + 1;
        plVar11 = plVar11 + 1;
      } while ((int)lVar16 < (int)uVar19);
    }
    plVar11 = (long *)FUN_02a12468(*(undefined8 *)
                                    Method_Drawing_DrawingManager_BeginFrameRendering__);
    if (plVar5 != (long *)0x0) {
      if ((int)plVar5[3] < 2) {
LAB_03582f58:
        *param_2 = lVar6;
        thunk_FUN_01f51358(param_2,lVar6);
        *param_3 = (long)plVar5;
        thunk_FUN_01f51358(param_3,plVar5);
        return;
      }
      uVar13 = plVar5[3] & 0xffffffff;
      uVar17 = 1;
LAB_03582d9c:
      if (lVar6 != 0) {
        if (((uVar17 < *(uint *)(lVar6 + 0x18)) && (uVar17 < uVar13)) &&
           ((uint)(uVar17 - 1) < (uint)uVar13)) {
          uVar8 = *(undefined8 *)(lVar6 + uVar17 * 8 + 0x20);
          lVar4 = plVar5[uVar17 + 4];
          bVar1 = false;
          uVar13 = uVar17 - 1;
          uVar20 = uVar17;
          do {
            uVar18 = uVar13;
            lVar16 = plVar5[uVar18 + 4];
            if (plVar11 == (long *)0x0)
            goto Oculus_Interaction_PoseDetection_TransformRecognizerActiveState___ctor;
            lVar9 = *plVar11;
            uVar13 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar13 != 0) {
              piVar14 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == *(long *)Method_Drawing_DrawingManager_PostRender__)
                {
                  puVar12 = (undefined8 *)(lVar9 + (long)*piVar14 * 0x10 + 0x138);
                  goto LAB_03582e40;
                }
                uVar13 = uVar13 - 1;
                piVar14 = piVar14 + 4;
              } while (uVar13 != 0);
            }
            puVar12 = (undefined8 *)
                      FUN_01ecb238(plVar11,*(long *)Method_Drawing_DrawingManager_PostRender__,0);
LAB_03582e40:
            iVar3 = (*(code *)*puVar12)(plVar11,lVar16,lVar4,puVar12[1]);
            if (iVar3 < 1) {
              if (!bVar1) goto LAB_03582f48;
              goto LAB_03582ef4;
            }
            if ((*(uint *)(lVar6 + 0x18) <= (uint)uVar18) ||
               (*(uint *)(lVar6 + 0x18) <= (uint)uVar20)) break;
            *(undefined8 *)(lVar6 + uVar20 * 8 + 0x20) = *(undefined8 *)(lVar6 + uVar18 * 8 + 0x20);
            thunk_FUN_01f51358();
            uVar19 = *(uint *)(plVar5 + 3);
            if (uVar19 <= (uint)uVar18) break;
            lVar16 = plVar5[uVar18 + 4];
            if (lVar16 != 0) {
              lVar9 = thunk_FUN_01f116d0(lVar16,*(undefined8 *)(*plVar5 + 0x40));
              if (lVar9 == 0) goto LAB_03582f9c;
              uVar19 = *(uint *)(plVar5 + 3);
            }
            if (uVar19 <= (uint)uVar20) break;
            plVar5[uVar20 + 4] = lVar16;
            thunk_FUN_01f51358(plVar5 + uVar20 + 4,lVar16);
            if (uVar18 == 0) goto LAB_03582ef0;
            bVar1 = true;
            uVar13 = uVar18 - 1;
            uVar20 = uVar18;
            if (*(uint *)(plVar5 + 3) <= (uint)(uVar18 - 1)) break;
          } while( true );
        }
LAB_03582f94:
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
    }
  }
Oculus_Interaction_PoseDetection_TransformRecognizerActiveState___ctor:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
LAB_03582ef0:
  uVar20 = 0;
LAB_03582ef4:
  uVar19 = (uint)uVar20;
  if (*(uint *)(lVar6 + 0x18) <= uVar19) goto LAB_03582f94;
  *(undefined8 *)(lVar6 + (long)(int)uVar19 * 8 + 0x20) = uVar8;
  thunk_FUN_01f51358();
  if ((lVar4 != 0) &&
     (lVar16 = thunk_FUN_01f116d0(lVar4,*(undefined8 *)(*plVar5 + 0x40)), lVar16 == 0)) {
LAB_03582f9c:
    uVar8 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar8,0);
  }
  if (*(uint *)(plVar5 + 3) <= uVar19) goto LAB_03582f94;
  plVar5[(long)(int)uVar19 + 4] = lVar4;
  thunk_FUN_01f51358(plVar5 + (long)(int)uVar19 + 4,lVar4);
LAB_03582f48:
  uVar13 = (ulong)*(uint *)(plVar5 + 3);
  uVar17 = uVar17 + 1;
  if ((long)(int)*(uint *)(plVar5 + 3) <= (long)uVar17) goto LAB_03582f58;
  goto LAB_03582d9c;
}


