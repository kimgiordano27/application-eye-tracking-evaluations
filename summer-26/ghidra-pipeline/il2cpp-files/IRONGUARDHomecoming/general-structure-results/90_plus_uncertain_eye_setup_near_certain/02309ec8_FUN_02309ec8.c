/*
FUNCTION_NAME: FUN_02309ec8
ENTRY_POINT: 02309ec8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 117
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_10;functionality_eye_api_context_without_clear_sink_hits_5
*/


/* WARNING: Removing unreachable block (ram,0x0230a1b8) */

long FUN_02309ec8(long *param_1,long param_2,long param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  
  if (*(long *)(param_5 + 0x38) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    if (*(long *)(param_5 + 0x38) == 0) {
      FUN_01ecafa0(param_5);
    }
  }
  puVar6 = Method_UnityEngine_UIElements_BoundsIntField_<_ctor>b__10_1__;
  if (((param_1 == (long *)0x0) ||
      (puVar6 = 
       Method_Oculus_Interaction_Grab_GrabSurfaces_BoxGrabSurface_MinimalRotationPoseAtSurface__,
      param_2 == 0)) ||
     (puVar6 = 
      Method_Oculus_Interaction_Grab_GrabSurfaces_BoxGrabSurface_MinimalTranslationPoseAtSurface__,
     param_3 == 0)) {
    uVar4 = thunk_FUN_01efb3a4(puVar6);
    uVar4 = FUN_03971094(uVar4,0);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar4,param_5);
  }
  if ((*(byte *)(*(long *)(*(long *)(param_5 + 0x38) + 0x20) + 0x135) & 1) == 0) {
    FUN_01ecaf44();
  }
  lVar1 = thunk_FUN_01f117cc();
  FUN_02b6aa94(lVar1,param_4,*(undefined8 *)(*(long *)(param_5 + 0x38) + 0x28));
  lVar7 = **(long **)(param_5 + 0x38);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_01ecaf44(lVar7);
  }
  lVar8 = *param_1;
  uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == lVar7) {
        puVar2 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
        goto LAB_02309fbc;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar2 = (undefined8 *)FUN_01ecb238(param_1,lVar7,0);
LAB_02309fbc:
  plVar3 = (long *)(*(code *)*puVar2)(param_1,puVar2[1]);
  puVar6 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar7 = *plVar3;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar6) {
          puVar2 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_0230a024;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238(plVar3,*(long *)puVar6,0);
LAB_0230a024:
    uVar9 = (*(code *)*puVar2)(plVar3,puVar2[1]);
    if ((uVar9 & 1) == 0) {
      if (plVar3 == (long *)0x0) {
        return lVar1;
      }
      lVar7 = *plVar3;
      uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar9 == 0) goto LAB_0230a134;
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      break;
    }
    lVar7 = *(long *)(*(long *)(param_5 + 0x38) + 0x38);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_01ecaf44(lVar7);
    }
    lVar8 = *plVar3;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar7) {
          puVar2 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_0230a098;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238(plVar3,lVar7,0);
LAB_0230a098:
    uVar4 = (*(code *)*puVar2)(plVar3,puVar2[1]);
    uVar5 = (**(code **)(param_2 + 0x18))
                      (*(undefined8 *)(param_2 + 0x40),uVar4,*(undefined8 *)(param_2 + 0x28));
    uVar4 = (**(code **)(param_3 + 0x18))
                      (*(undefined8 *)(param_3 + 0x40),uVar4,*(undefined8 *)(param_3 + 0x28));
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    FUN_02b6b2e4(lVar1,uVar5,uVar4,*(undefined8 *)(*(long *)(param_5 + 0x38) + 0x70));
  } while( true );
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
    if (*(long *)(piVar10 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar2 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_0230a150;
    }
  }
LAB_0230a134:
  puVar2 = (undefined8 *)
           FUN_01ecb238(plVar3,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_0230a150:
  (*(code *)*puVar2)(plVar3,puVar2[1]);
  return lVar1;
}


