/*
FUNCTION_NAME: System.Array$$LastIndexOf<TextureId>
ENTRY_POINT: 02135104
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 109
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_12;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_5
*/


/* WARNING: Removing unreachable block (ram,0x02135474) */

long System_Array__LastIndexOf<TextureId>
               (long param_1,undefined1 param_2 [16],undefined8 param_3,undefined8 param_4,
               long *param_5,long param_6,long param_7,undefined8 param_8)

{
  long lVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x21;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  
  if (param_1 == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    if (*(long *)(unaff_x21 + 0x38) == 0) {
      FUN_01ecafa0();
    }
  }
  puVar4 = Method_UnityEngine_UIElements_BoundsIntField_<_ctor>b__10_1__;
  if (((param_5 == (long *)0x0) ||
      (puVar4 = 
       Method_Oculus_Interaction_Grab_GrabSurfaces_BoxGrabSurface_MinimalRotationPoseAtSurface__,
      param_6 == 0)) ||
     (puVar4 = 
      Method_Oculus_Interaction_Grab_GrabSurfaces_BoxGrabSurface_MinimalTranslationPoseAtSurface__,
     param_7 == 0)) {
    uVar9 = thunk_FUN_01efb3a4(puVar4);
    FUN_03971094(uVar9,0);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910();
  }
  lVar1 = *(long *)(unaff_x21 + 0x20);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_01ecaf44();
  }
  if ((*(byte *)(*(long *)(*(long *)(lVar1 + 0xc0) + 8) + 0x135) & 1) == 0) {
    FUN_01ecaf44();
  }
  lVar1 = thunk_FUN_01f117cc();
  lVar5 = *(long *)(unaff_x21 + 0x20);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_01ecaf44(lVar5);
  }
  FUN_0329aae0(lVar1,param_8,*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x10));
  lVar5 = **(long **)(unaff_x21 + 0x38);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_01ecaf44(lVar5);
  }
  lVar6 = *param_5;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == lVar5) {
        puVar2 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_02135208;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar2 = (undefined8 *)FUN_01ecb238(param_5,lVar5,0);
LAB_02135208:
  plVar3 = (long *)(*(code *)*puVar2)(param_5,puVar2[1]);
  puVar4 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar5 = *plVar3;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar4) {
          puVar2 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_02135270;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238(plVar3,*(long *)puVar4,0);
LAB_02135270:
    uVar7 = (*(code *)*puVar2)(plVar3,puVar2[1]);
    if ((uVar7 & 1) == 0) {
      if (plVar3 == (long *)0x0) {
        return lVar1;
      }
      lVar5 = *plVar3;
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar7 == 0) goto LAB_021353e4;
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      break;
    }
    lVar5 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x20);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01ecaf44(lVar5);
    }
    lVar6 = *plVar3;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar5) {
          puVar2 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_021352e4;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238(plVar3,lVar5,0);
LAB_021352e4:
    auVar10 = (*(code *)*puVar2)(plVar3,puVar2[1]);
    uVar9 = (**(code **)(param_6 + 0x18))
                      (*(undefined8 *)(param_6 + 0x40),auVar10._0_8_,auVar10._8_8_,
                       *(undefined8 *)(param_6 + 0x28));
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar5 = *(long *)(unaff_x21 + 0x20);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01ecaf44();
    }
    lVar5 = FUN_0329aca0(uVar9,param_3,param_4,lVar1,1,
                         *(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x20));
    auVar10 = (**(code **)(param_7 + 0x18))
                        (*(undefined8 *)(param_7 + 0x40),auVar10._0_8_,auVar10._8_8_,
                         *(undefined8 *)(param_7 + 0x28));
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar6 = *(long *)(unaff_x21 + 0x20);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_01ecaf44();
    }
    FUN_02e9be78(lVar5,auVar10._0_8_,auVar10._8_8_,*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x38));
  } while( true );
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
    if (*(long *)(piVar8 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar2 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_02135400;
    }
  }
LAB_021353e4:
  puVar2 = (undefined8 *)
           FUN_01ecb238(plVar3,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_02135400:
  (*(code *)*puVar2)(plVar3,puVar2[1]);
  return lVar1;
}


