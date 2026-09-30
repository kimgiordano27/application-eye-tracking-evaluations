/*
FUNCTION_NAME: FUN_04029344
ENTRY_POINT: 04029344
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 111
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_6;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x040296a4) */

undefined8 FUN_04029344(long *param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  int *piVar8;
  undefined8 uVar9;
  long *plVar10;
  
  if ((DAT_0483c552 & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_Oculus_Interaction_Grab_GrabSurfaces_CylinderGrabSurface_MinimalRotationPoseAtSurface__
                      );
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<PointerMoveEvent>__
                      );
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(PTR_DAT_045861b0);
    thunk_FUN_01efb3a4(StringLiteral_12679);
    DAT_0483c552 = 1;
  }
  uVar2 = FUN_035b51f0(param_3,0,0);
  if (((uVar2 & 1) == 0) || (uVar1 = FUN_04028e80(param_3), uVar1 == 0)) {
    uVar2 = thunk_FUN_0340e318(param_2,*(undefined8 *)PTR_DAT_045861b0,0);
    if ((uVar2 & 1) != 0) {
      (**(code **)(*param_1 + 0x1b8))(param_1,*(undefined8 *)(*param_1 + 0x1c0));
      uVar3 = FUN_0401ffb0();
      return uVar3;
    }
    plVar4 = (long *)FUN_01f08890(*(undefined8 *)
                                   Method_Oculus_Interaction_Grab_GrabSurfaces_CylinderGrabSurface_MinimalRotationPoseAtSurface__
                                  ,0);
  }
  else {
    if (uVar1 == 1) {
      uVar2 = thunk_FUN_0340e318(param_2,*(undefined8 *)StringLiteral_12679,0);
      if ((uVar2 & 1) != 0) {
        uVar3 = FUN_04028dd8(param_3,0);
        uVar2 = FUN_035ad140(uVar3,0,0);
        uVar9 = 0;
        if ((uVar2 & 1) == 0) {
          uVar9 = thunk_FUN_01f117cc(*(undefined8 *)
                                      Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<PointerMoveEvent>__
                                    );
          FUN_0402bc04(uVar9,uVar3);
        }
        uVar1 = (**(code **)(*param_1 + 0x1a8))(param_1,uVar9,*(undefined8 *)(*param_1 + 0x1b0));
        uVar3 = FUN_040201b8(uVar1 & 1);
        return uVar3;
      }
      plVar4 = (long *)FUN_01f08890(*(undefined8 *)
                                     Method_Oculus_Interaction_Grab_GrabSurfaces_CylinderGrabSurface_MinimalRotationPoseAtSurface__
                                    ,1);
    }
    else {
      plVar4 = (long *)FUN_01f08890(*(undefined8 *)
                                     Method_Oculus_Interaction_Grab_GrabSurfaces_CylinderGrabSurface_MinimalRotationPoseAtSurface__
                                    ,(ulong)uVar1);
      if ((int)uVar1 < 1) goto LAB_040295a4;
    }
    uVar2 = 0;
    plVar10 = plVar4 + 4;
    do {
      uVar3 = FUN_04028dd8(param_3,uVar2 & 0xffffffff);
      uVar5 = FUN_035b51f0(uVar3,0,0);
      if ((uVar5 & 1) == 0) {
        if (plVar4 == (long *)0x0) goto LAB_04029690;
        lVar6 = 0;
      }
      else {
        lVar6 = FUN_0402bd14(uVar3);
        if (plVar4 == (long *)0x0) {
LAB_04029690:
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        if (lVar6 == 0) {
          uVar5 = 0;
        }
        else {
          uVar5 = thunk_FUN_01f116d0(lVar6,*(undefined8 *)(*plVar4 + 0x40));
          if (uVar5 == 0) {
            uVar3 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
            FUN_01f08910(uVar3,0);
          }
        }
      }
      if (*(uint *)(plVar4 + 3) <= uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44(uVar5,lVar6);
      }
      *plVar10 = lVar6;
      thunk_FUN_01f51358(plVar10);
      uVar2 = uVar2 + 1;
      plVar10 = plVar10 + 1;
    } while (uVar1 != uVar2);
  }
LAB_040295a4:
  plVar4 = (long *)(**(code **)(*param_1 + 0x188))
                             (param_1,param_2,plVar4,*(undefined8 *)(*param_1 + 400));
  if (plVar4 == (long *)0x0) {
    uVar3 = 0;
  }
  else {
    if (plVar4[2] == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined8 *)(plVar4[2] + 0x18);
    }
    if (DAT_0483c040 == (code *)0x0) {
      DAT_0483c040 = (code *)FUN_01f087c4("UnityEngine.AndroidJNI::NewLocalRef(System.IntPtr)");
    }
    uVar3 = (*DAT_0483c040)(uVar3);
    lVar6 = *plVar4;
    uVar2 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar2 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar7 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_04029664;
        }
        uVar2 = uVar2 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar2 != 0);
    }
    puVar7 = (undefined8 *)
             FUN_01ecb238(plVar4,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_04029664:
    (*(code *)*puVar7)(plVar4,puVar7[1]);
  }
  return uVar3;
}


