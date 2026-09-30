/*
FUNCTION_NAME: FUN_02134870
ENTRY_POINT: 02134870
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 129
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_10;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_5
*/


/* WARNING: Removing unreachable block (ram,0x02134be4) */

long FUN_02134870(long *param_1,long param_2,long param_3,undefined8 param_4,long param_5)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  undefined1 auVar11 [16];
  undefined *puVar6;
  
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
    uVar5 = thunk_FUN_01efb3a4(puVar6);
    uVar5 = FUN_03971094(uVar5,0);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar5,param_5);
  }
  lVar2 = *(long *)(param_5 + 0x20);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01ecaf44();
  }
  if ((*(byte *)(*(long *)(*(long *)(lVar2 + 0xc0) + 8) + 0x135) & 1) == 0) {
    FUN_01ecaf44();
  }
  lVar2 = thunk_FUN_01f117cc();
  lVar7 = *(long *)(param_5 + 0x20);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_01ecaf44(lVar7);
  }
  FUN_0329a010(lVar2,param_4,*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x10));
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
        puVar3 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
        goto LAB_02134990;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar3 = (undefined8 *)FUN_01ecb238(param_1,lVar7,0);
LAB_02134990:
  plVar4 = (long *)(*(code *)*puVar3)(param_1,puVar3[1]);
  puVar6 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar7 = *plVar4;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar6) {
          puVar3 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_021349f8;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ecb238(plVar4,*(long *)puVar6,0);
LAB_021349f8:
    uVar9 = (*(code *)*puVar3)(plVar4,puVar3[1]);
    if ((uVar9 & 1) == 0) {
      if (plVar4 == (long *)0x0) {
        return lVar2;
      }
      lVar7 = *plVar4;
      uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar9 == 0) goto LAB_02134b5c;
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      break;
    }
    lVar7 = *(long *)(*(long *)(param_5 + 0x38) + 0x20);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_01ecaf44(lVar7);
    }
    lVar8 = *plVar4;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar7) {
          puVar3 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_02134a6c;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ecb238(plVar4,lVar7,0);
LAB_02134a6c:
    auVar11 = (*(code *)*puVar3)(plVar4,puVar3[1]);
    uVar1 = (**(code **)(param_2 + 0x18))
                      (*(undefined8 *)(param_2 + 0x40),auVar11._0_8_,auVar11._8_8_,
                       *(undefined8 *)(param_2 + 0x28));
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar7 = *(long *)(param_5 + 0x20);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_01ecaf44();
    }
    lVar7 = FUN_0329a1b8(lVar2,uVar1,1,*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x20));
    auVar11 = (**(code **)(param_3 + 0x18))
                        (*(undefined8 *)(param_3 + 0x40),auVar11._0_8_,auVar11._8_8_,
                         *(undefined8 *)(param_3 + 0x28));
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar8 = *(long *)(param_5 + 0x20);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_01ecaf44();
    }
    FUN_02e9b910(lVar7,auVar11._0_8_,auVar11._8_8_,*(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x38));
  } while( true );
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
    if (*(long *)(piVar10 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar3 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_02134b78;
    }
  }
LAB_02134b5c:
  puVar3 = (undefined8 *)
           FUN_01ecb238(plVar4,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_02134b78:
  (*(code *)*puVar3)(plVar4,puVar3[1]);
  return lVar2;
}


