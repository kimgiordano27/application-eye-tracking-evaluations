/*
FUNCTION_NAME: UnityEngine.TextCore.Text.FontAsset$$UpdateFontFeaturesForFontAssetsInQueue
ENTRY_POINT: 03fd65cc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_3;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x03fd6758) */

void UnityEngine_TextCore_Text_FontAsset__UpdateFontFeaturesForFontAssetsInQueue(ulong param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *unaff_x20;
  undefined8 *unaff_x25;
  long *unaff_x26;
  long *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  
  while ((param_1 & 1) != 0) {
    lVar4 = *unaff_x20;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x27) {
          puVar1 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_03fd661c;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar1 = (undefined8 *)FUN_01ecb238();
LAB_03fd661c:
    plVar2 = (long *)(*(code *)*puVar1)();
    lVar4 = thunk_FUN_01f117cc(*unaff_x28);
    FUN_035ac8e8(lVar4,0);
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    *(long *)(lVar4 + 0x10) = plVar2[2];
    thunk_FUN_01f51358((long *)(lVar4 + 0x10));
    uVar3 = (**(code **)(*plVar2 + 0x1e8))(plVar2,*(undefined8 *)(*plVar2 + 0x1f0));
    *(undefined8 *)(lVar4 + 0x18) = uVar3;
    thunk_FUN_01f51358((undefined8 *)(lVar4 + 0x18));
    uVar3 = thunk_FUN_01f117cc(*unaff_x29);
    FUN_02e6c748(uVar3,lVar4,*unaff_x25,0);
    FUN_03fe4e90();
    lVar4 = *unaff_x20;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x26) {
          puVar1 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_03fd65c0;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar1 = (undefined8 *)FUN_01ecb238();
LAB_03fd65c0:
    param_1 = (*(code *)*puVar1)();
  }
  if (unaff_x20 != (long *)0x0) {
    lVar4 = *unaff_x20;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar1 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_03fd671c;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar1 = (undefined8 *)FUN_01ecb238();
LAB_03fd671c:
    (*(code *)*puVar1)();
  }
  return;
}


