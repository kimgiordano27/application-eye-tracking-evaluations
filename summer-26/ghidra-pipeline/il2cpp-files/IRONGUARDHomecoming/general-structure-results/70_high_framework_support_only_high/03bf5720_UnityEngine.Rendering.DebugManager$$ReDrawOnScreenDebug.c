/*
FUNCTION_NAME: UnityEngine.Rendering.DebugManager$$ReDrawOnScreenDebug
ENTRY_POINT: 03bf5720
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03bf59e8) */
/* WARNING: Removing unreachable block (ram,0x03bf5c04) */

void UnityEngine_Rendering_DebugManager__ReDrawOnScreenDebug(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  int in_w10;
  int *piVar12;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  undefined2 uVar13;
  undefined4 in_stack_00000008;
  
  if (in_w10 == 0) {
    thunk_FUN_01ee6d7c(param_1);
  }
  in_stack_00000008 = 0;
  FUN_03b44b80(&stack0x00000008,0x49,0x45,0x56,0x54,0);
  puVar1 = Method_Utility_MonoBehaviourSingleton<TurretsProjectilesFactory>_Awake__;
  if (unaff_x21 != (long *)0x0) {
    (**(code **)(*unaff_x21 + 0x238))();
    (**(code **)(*unaff_x21 + 0x238))();
    (**(code **)(*unaff_x21 + 0x238))();
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
    FUN_04039fb4(0);
    (**(code **)(*unaff_x21 + 0x238))();
    (**(code **)(*unaff_x21 + 0x268))();
    (**(code **)(*unaff_x21 + 0x268))();
    plVar6 = (long *)FUN_03bf5cfc();
    puVar4 = StringLiteral_14175;
    puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    puVar1 = Method_Oculus_Platform_Message<AchievementDefinitionList>__ctor__;
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    do {
      lVar10 = *plVar6;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)puVar3) {
            puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_03bf5884;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar7 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar3,0);
LAB_03bf5884:
      uVar11 = (*(code *)*puVar7)(plVar6,puVar7[1]);
      if ((uVar11 & 1) == 0) goto LAB_03bf5978;
      lVar10 = *plVar6;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)puVar4) {
            puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_03bf58e0;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar7 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar4,0);
LAB_03bf58e0:
      lVar10 = (*(code *)*puVar7)(plVar6,puVar7[1]);
      if (lVar10 == 0) {
        uVar13 = 0;
      }
      else {
        uVar13 = *(undefined2 *)(lVar10 + 4);
      }
      lVar8 = FUN_01f08890(*(undefined8 *)puVar1,uVar13);
      if (lVar8 == 0) {
        lVar9 = 0;
      }
      else {
        lVar9 = 0;
        if (*(int *)(lVar8 + 0x18) != 0) {
          lVar9 = lVar8 + 0x20;
        }
      }
      FUN_04037e20(lVar9,lVar10,uVar13,0);
      (**(code **)(*unaff_x21 + 0x1c8))();
    } while( true );
  }
LAB_03bf5b68:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
LAB_03bf5978:
  if (plVar6 != (long *)0x0) {
    lVar10 = *plVar6;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
          puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_03bf59d0;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar7 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar2,0);
LAB_03bf59d0:
    (*(code *)*puVar7)(plVar6,puVar7[1]);
  }
  puVar1 = StringLiteral_14174;
  (**(code **)(*unaff_x21 + 0x198))();
  (**(code **)(*unaff_x19 + 0x1f8))();
  uVar5 = FUN_02294008(*(undefined8 *)(unaff_x20 + 0xc0),*(undefined8 *)puVar1);
  (**(code **)(*unaff_x21 + 0x238))();
  if (0 < (int)uVar5) {
    uVar11 = 0;
    do {
      if (*(long *)(unaff_x20 + 0xc0) == 0) goto LAB_03bf5b68;
      if (*(uint *)(*(long *)(unaff_x20 + 0xc0) + 0x18) <= uVar11) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      (**(code **)(*unaff_x21 + 0x238))();
      (**(code **)(*unaff_x21 + 0x288))();
      (**(code **)(*unaff_x21 + 0x238))();
      (**(code **)(*unaff_x21 + 0x238))();
      (**(code **)(*unaff_x21 + 0x288))();
      uVar11 = uVar11 + 1;
    } while (uVar5 != uVar11);
  }
  (**(code **)(*unaff_x21 + 0x198))();
  (**(code **)(*unaff_x19 + 0x1f8))();
  (**(code **)(*unaff_x21 + 600))();
  return;
}


