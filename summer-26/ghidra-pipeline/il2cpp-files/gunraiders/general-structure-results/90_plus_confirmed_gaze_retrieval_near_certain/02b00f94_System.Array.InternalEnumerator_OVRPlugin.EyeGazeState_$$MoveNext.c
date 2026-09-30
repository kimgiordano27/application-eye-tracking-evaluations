/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.EyeGazeState>$$MoveNext
ENTRY_POINT: 02b00f94
PROGRAM: gunraiders-libil2cpp.so
SCORE: 149
LABEL: confirmed_gaze_retrieval_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_runtime_retrieval
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;attempted_use;active_gaze_retrieval
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;active_gaze_state_retrieval_with_validity_and_pose;functionality_gaze_retrieval_or_extraction
*/


long * System_Array_InternalEnumerator<OVRPlugin_EyeGazeState>__MoveNext(undefined8 param_1)

{
  undefined4 uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long unaff_x19;
  long *unaff_x20;
  undefined8 uVar7;
  long unaff_x21;
  long *unaff_x24;
  long *unaff_x25;
  
  plVar2 = (long *)FUN_032e04b8(param_1,0);
  lVar3 = FUN_01c5d2fc(*(undefined8 *)PTR_DAT_04230910,1);
  if (lVar3 != 0) {
    if ((unaff_x21 != 0) && (lVar4 = thunk_FUN_01c495e4(), lVar4 == 0)) {
      uVar7 = thunk_FUN_01c58458();
                    /* WARNING: Subroutine does not return */
      FUN_01c5d37c(uVar7,0);
    }
    if (*(int *)(lVar3 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4ac();
    }
    *(long *)(lVar3 + 0x20) = unaff_x21;
    if ((plVar2 != (long *)0x0) &&
       (plVar2 = (long *)(**(code **)(*plVar2 + 0x8f8))
                                   (plVar2,lVar3,*(undefined8 *)(*plVar2 + 0x900)),
       plVar2 != (long *)0x0)) {
      uVar5 = (**(code **)(*plVar2 + 0x298))();
      if ((uVar5 & 1) == 0) {
        uVar5 = (**(code **)(*unaff_x20 + 0x588))();
        if ((uVar5 & 1) == 0) {
switchD_02b010e8_default:
          lVar3 = *(long *)(unaff_x19 + 0x20);
          if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
            lVar3 = FUN_01c72394();
          }
          if ((*(byte *)(*(long *)(*(long *)(lVar3 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
            FUN_01c72394();
          }
          plVar2 = (long *)thunk_FUN_01c496e0();
          lVar3 = *(long *)(unaff_x19 + 0x20);
          if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
            lVar3 = FUN_01c72394(lVar3);
          }
          FUN_02f68024(plVar2,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x38));
          return plVar2;
        }
        if (*(int *)(*(long *)PTR_DAT_04235e88 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        uVar7 = FUN_0330546c();
        if (*(int *)(*unaff_x25 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(*unaff_x25);
        }
        uVar1 = FUN_032ebe64(uVar7,0);
        switch(uVar1) {
        case 5:
          lVar3 = *unaff_x25;
          puVar6 = (undefined8 *)PooledFireball_TypeInfo;
          break;
        case 6:
        case 8:
        case 9:
        case 10:
          lVar3 = *unaff_x25;
          puVar6 = (undefined8 *)UnityEngine_Rendering_Universal_PolyNode_TypeInfo;
          break;
        case 7:
          lVar3 = *unaff_x25;
          puVar6 = (undefined8 *)PooledGrenade_TypeInfo;
          break;
        case 0xb:
        case 0xc:
          lVar3 = *unaff_x25;
          puVar6 = (undefined8 *)PooledBlasterBolt_TypeInfo;
          break;
        default:
          goto switchD_02b010e8_default;
        }
        uVar7 = *puVar6;
        if (*(int *)(lVar3 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        uVar7 = FUN_032e04b8(uVar7,0);
        if (*(int *)(*unaff_x24 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(*unaff_x24);
        }
      }
      else {
        uVar7 = *(undefined8 *)PooledCrystal_TypeInfo;
        if (*(int *)(*unaff_x25 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        uVar7 = FUN_032e04b8(uVar7,0);
        if (*(int *)(*unaff_x24 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(*unaff_x24);
        }
      }
      plVar2 = (long *)FUN_03312c94(uVar7);
      lVar3 = *(long *)(unaff_x19 + 0x20);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_01c72394(lVar3);
      }
      lVar3 = **(long **)(lVar3 + 0xc0);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_01c72394(lVar3);
      }
      if (plVar2 != (long *)0x0) {
        if ((*(byte *)(*plVar2 + 0x130) < *(byte *)(lVar3 + 0x130)) ||
           (*(long *)(*(long *)(*plVar2 + 200) + (ulong)*(byte *)(lVar3 + 0x130) * 8 + -8) != lVar3)
           ) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d748(plVar2);
        }
      }
      return plVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


