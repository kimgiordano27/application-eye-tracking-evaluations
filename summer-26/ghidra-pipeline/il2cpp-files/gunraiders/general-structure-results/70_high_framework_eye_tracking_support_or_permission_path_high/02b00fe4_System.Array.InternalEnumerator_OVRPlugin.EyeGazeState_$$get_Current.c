/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.EyeGazeState>$$get_Current
ENTRY_POINT: 02b00fe4
PROGRAM: gunraiders-libil2cpp.so
SCORE: 79
LABEL: framework_eye_tracking_support_or_permission_path_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_eye_tracking_support_or_permission_path
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;pose_vector;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction
*/


long * System_Array_InternalEnumerator<OVRPlugin_EyeGazeState>__get_Current(void)

{
  undefined4 uVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  long unaff_x19;
  long *unaff_x20;
  undefined8 uVar6;
  long *unaff_x22;
  long *unaff_x24;
  long *unaff_x25;
  
  if ((unaff_x22 == (long *)0x0) ||
     (plVar2 = (long *)(**(code **)(*unaff_x22 + 0x8f8))(), plVar2 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  uVar3 = (**(code **)(*plVar2 + 0x298))();
  if ((uVar3 & 1) == 0) {
    uVar3 = (**(code **)(*unaff_x20 + 0x588))();
    if ((uVar3 & 1) == 0) {
switchD_02b010e8_default:
      lVar5 = *(long *)(unaff_x19 + 0x20);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_01c72394();
      }
      if ((*(byte *)(*(long *)(*(long *)(lVar5 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
        FUN_01c72394();
      }
      plVar2 = (long *)thunk_FUN_01c496e0();
      lVar5 = *(long *)(unaff_x19 + 0x20);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_01c72394(lVar5);
      }
      FUN_02f68024(plVar2,*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x38));
      return plVar2;
    }
    if (*(int *)(*(long *)PTR_DAT_04235e88 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    uVar6 = FUN_0330546c();
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8(*unaff_x25);
    }
    uVar1 = FUN_032ebe64(uVar6,0);
    switch(uVar1) {
    case 5:
      lVar5 = *unaff_x25;
      puVar4 = (undefined8 *)PooledFireball_TypeInfo;
      break;
    case 6:
    case 8:
    case 9:
    case 10:
      lVar5 = *unaff_x25;
      puVar4 = (undefined8 *)UnityEngine_Rendering_Universal_PolyNode_TypeInfo;
      break;
    case 7:
      lVar5 = *unaff_x25;
      puVar4 = (undefined8 *)PooledGrenade_TypeInfo;
      break;
    case 0xb:
    case 0xc:
      lVar5 = *unaff_x25;
      puVar4 = (undefined8 *)PooledBlasterBolt_TypeInfo;
      break;
    default:
      goto switchD_02b010e8_default;
    }
    uVar6 = *puVar4;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    uVar6 = FUN_032e04b8(uVar6,0);
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8(*unaff_x24);
    }
  }
  else {
    uVar6 = *(undefined8 *)PooledCrystal_TypeInfo;
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    uVar6 = FUN_032e04b8(uVar6,0);
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8(*unaff_x24);
    }
  }
  plVar2 = (long *)FUN_03312c94(uVar6);
  lVar5 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_01c72394(lVar5);
  }
  lVar5 = **(long **)(lVar5 + 0xc0);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_01c72394(lVar5);
  }
  if (plVar2 != (long *)0x0) {
    if ((*(byte *)(*plVar2 + 0x130) < *(byte *)(lVar5 + 0x130)) ||
       (*(long *)(*(long *)(*plVar2 + 200) + (ulong)*(byte *)(lVar5 + 0x130) * 8 + -8) != lVar5)) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d748(plVar2);
    }
  }
  return plVar2;
}


