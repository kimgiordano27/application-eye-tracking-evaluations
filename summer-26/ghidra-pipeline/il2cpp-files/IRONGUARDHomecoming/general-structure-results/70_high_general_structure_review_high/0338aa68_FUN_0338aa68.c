/*
FUNCTION_NAME: FUN_0338aa68
ENTRY_POINT: 0338aa68
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;ui_interaction;frame_behavior
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_12;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_4;frame_or_lifecycle_behavior
*/


void FUN_0338aa68(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  int *piVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  if ((DAT_048321f1 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Interaction_HandPokeLimiterVisual_HandlePassedSurfaceChanged__)
    ;
    thunk_FUN_01efb3a4(Method_Oculus_Interaction_HandPokeLimiterVisual_HandleStateChanged__);
    thunk_FUN_01efb3a4(Method_Oculus_Interaction_HandPokeOvershootGlow_UpdateVisual__);
    thunk_FUN_01efb3a4(Method_Oculus_Interaction_HandRayInteractorCursorVisual_UpdateVisual__);
    thunk_FUN_01efb3a4(Method_Oculus_Interaction_HandGrabGlow_UpdateVisual__);
    thunk_FUN_01efb3a4(Method_UnityEngine_GameObject_GetComponent<BoxCollider>__);
    thunk_FUN_01efb3a4(Method_Oculus_Interaction_HandRayInteractorCursorVisual_UpdateVisualState__);
    thunk_FUN_01efb3a4(Method_Oculus_Interaction_HandRayPinchGlow_UpdateVisual__);
    thunk_FUN_01efb3a4(Method_Oculus_Interaction_HandRayPinchGlow_UpdateVisualState__);
    thunk_FUN_01efb3a4(Method_Oculus_Interaction_Body_Samples_BodyPoseSwitcher_<OnDisable>b__22_0__)
    ;
    thunk_FUN_01efb3a4(Method_Oculus_Interaction_HandDebugVisual_UpdateSkeleton__);
    thunk_FUN_01efb3a4(Method_Oculus_Interaction_GrabAPI_HandGrabAPI_OnHandUpdated__);
    thunk_FUN_01efb3a4(Method_Oculus_Interaction_Body_Samples_BodyPoseSwitcher_<OnDisable>b__22_1__)
    ;
    thunk_FUN_01efb3a4(Method_Oculus_Interaction_HandTransformScaler_HandleHandUpdated__);
    DAT_048321f1 = 1;
  }
  local_50 = 0;
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  local_60 = 0;
  uVar4 = FUN_0338918c(param_1);
  puVar1 = Method_Oculus_Interaction_HandGrabGlow_UpdateVisual__;
  if ((uVar4 & 1) != 0) {
    if ((param_1[4] == 0) || (plVar9 = (long *)param_1[8], plVar9 == (long *)0x0))
    goto LAB_0338aeec;
    lVar6 = *plVar9;
    uVar10 = *(undefined8 *)(param_1[4] + 0xb0);
    uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar4 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)Method_Oculus_Interaction_HandGrabGlow_UpdateVisual__
           ) {
          puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 1) * 0x10 + 0x138);
          goto LAB_0338abc0;
        }
        uVar4 = uVar4 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar4 != 0);
    }
    puVar5 = (undefined8 *)
             FUN_01ecb238(plVar9,*(long *)Method_Oculus_Interaction_HandGrabGlow_UpdateVisual__,1);
LAB_0338abc0:
    (*(code *)*puVar5)(plVar9,uVar10,puVar5[1]);
    if (param_1[4] == 0) goto LAB_0338aeec;
    if (*(char *)(param_1[4] + 0xc0) != '\0') {
      plVar9 = (long *)param_1[8];
      if (plVar9 == (long *)0x0) goto LAB_0338aeec;
      lVar7 = *plVar9;
      lVar6 = *(long *)puVar1;
      uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar4 != 0) {
        piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == lVar6) {
            puVar5 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_0338ac34;
          }
          uVar4 = uVar4 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar4 != 0);
      }
      puVar5 = (undefined8 *)FUN_01ecb238(plVar9,lVar6,0);
LAB_0338ac34:
      lVar6 = (*(code *)*puVar5)(plVar9,puVar5[1]);
      if (lVar6 == 0) goto LAB_0338aeec;
      uVar4 = FUN_0337fc70(lVar6,0);
      if ((uVar4 & 1) == 0) {
        FUN_033a19f0(*(undefined8 *)
                      Method_Oculus_Interaction_HandTransformScaler_HandleHandUpdated__,0);
      }
      plVar9 = (long *)param_1[8];
      if (plVar9 == (long *)0x0) goto LAB_0338aeec;
      lVar7 = *plVar9;
      lVar6 = *(long *)puVar1;
      uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar4 != 0) {
        piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == lVar6) {
            puVar5 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_0338acb8;
          }
          uVar4 = uVar4 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar4 != 0);
      }
      puVar5 = (undefined8 *)FUN_01ecb238(plVar9,lVar6,0);
LAB_0338acb8:
      lVar6 = (*(code *)*puVar5)(plVar9,puVar5[1]);
      if ((lVar6 == 0) || (*(long *)(lVar6 + 0x48) == 0)) goto LAB_0338aeec;
      FUN_02b6b714(&local_98,*(long *)(lVar6 + 0x48),
                   *(undefined8 *)
                    Method_Oculus_Interaction_HandPokeLimiterVisual_HandlePassedSurfaceChanged__);
      puVar2 = Method_Oculus_Interaction_HandPokeOvershootGlow_UpdateVisual__;
      puVar1 = Method_UnityEngine_GameObject_GetComponent<BoxCollider>__;
      uStack_68 = uStack_90;
      local_70 = local_98;
      uStack_58 = uStack_80;
      local_60 = local_88;
      local_50 = local_78;
      while (uVar4 = FUN_02ce98b4(&local_70,*(undefined8 *)puVar2), uVar3 = uStack_58,
            uVar10 = local_60, (uVar4 & 1) != 0) {
        plVar9 = (long *)param_1[5];
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar6 = *plVar9;
        uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar4 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
              puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 5) * 0x10 + 0x138);
              goto LAB_0338ad74;
            }
            uVar4 = uVar4 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar4 != 0);
        }
        puVar5 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)puVar1,5);
LAB_0338ad74:
        (*(code *)*puVar5)(plVar9,uVar10,uVar3,puVar5[1]);
      }
      FUN_02ce99d4(&local_70,
                   *(undefined8 *)
                    Method_Oculus_Interaction_HandPokeLimiterVisual_HandleStateChanged__);
    }
  }
  plVar9 = (long *)(**(code **)(*param_1 + 0x338))(param_1,*(undefined8 *)(*param_1 + 0x340));
  puVar1 = Method_Oculus_Interaction_Body_Samples_BodyPoseSwitcher_<OnDisable>b__22_0__;
  if (plVar9 != (long *)0x0) {
    lVar6 = *plVar9;
    uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar4 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) ==
            *(long *)Method_Oculus_Interaction_HandRayInteractorCursorVisual_UpdateVisualState__) {
          puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 2) * 0x10 + 0x138);
          goto LAB_0338ae1c;
        }
        uVar4 = uVar4 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar4 != 0);
    }
    puVar5 = (undefined8 *)
             FUN_01ecb238(plVar9,*(long *)
                                  Method_Oculus_Interaction_HandRayInteractorCursorVisual_UpdateVisualState__
                          ,2);
LAB_0338ae1c:
    lVar6 = (*(code *)*puVar5)(plVar9,puVar5[1]);
    uVar10 = thunk_FUN_01f117cc(*(undefined8 *)puVar1);
    if ((param_1 == (long *)0x0) ||
       (FUN_02808d94(uVar10,param_1,*(undefined8 *)(*param_1 + 0x4d0),0), lVar6 == 0))
    goto LAB_0338aeec;
    FUN_0280b17c(lVar6,uVar10,
                 *(undefined8 *)
                  Method_Oculus_Interaction_Body_Samples_BodyPoseSwitcher_<OnDisable>b__22_1__);
  }
  lVar6 = (**(code **)(*param_1 + 0x368))(param_1,*(undefined8 *)(*param_1 + 0x370));
  if (lVar6 != 0) {
    lVar6 = *(long *)(lVar6 + 0x88);
    uVar10 = thunk_FUN_01f117cc(*(undefined8 *)
                                 Method_Oculus_Interaction_HandDebugVisual_UpdateSkeleton__);
    FUN_02808d94(uVar10,param_1,*(undefined8 *)(*param_1 + 0x4e0),0);
    if (lVar6 != 0) {
      FUN_0280b17c(lVar6,uVar10,
                   *(undefined8 *)Method_Oculus_Interaction_GrabAPI_HandGrabAPI_OnHandUpdated__);
      return;
    }
  }
LAB_0338aeec:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


