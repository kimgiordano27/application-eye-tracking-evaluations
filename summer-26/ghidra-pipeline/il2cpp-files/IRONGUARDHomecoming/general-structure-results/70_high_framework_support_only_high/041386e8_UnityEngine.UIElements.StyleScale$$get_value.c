/*
FUNCTION_NAME: UnityEngine.UIElements.StyleScale$$get_value
ENTRY_POINT: 041386e8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_6;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x04138838) */
/* WARNING: Removing unreachable block (ram,0x04138888) */
/* WARNING: Removing unreachable block (ram,0x0413899c) */

void UnityEngine_UIElements_StyleScale__get_value(long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  int *piVar9;
  long unaff_x19;
  undefined4 unaff_w20;
  undefined8 unaff_x21;
  int unaff_w22;
  long *unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  
  do {
    uVar7 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (uVar7 != 0) {
      piVar9 = (int *)(*(long *)(param_1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == param_3) {
          puVar3 = (undefined8 *)(param_1 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_0413872c;
        }
        uVar7 = uVar7 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ecb238();
LAB_0413872c:
    uVar7 = (*(code *)*puVar3)();
    if ((uVar7 & 1) == 0) {
      if (unaff_x23 == (long *)0x0) goto LAB_0413882c;
      lVar5 = *unaff_x23;
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar7 == 0) goto LAB_04138804;
      piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      break;
    }
    lVar5 = *unaff_x23;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *unaff_x25) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
          goto FUN_04138788;
        }
        uVar7 = uVar7 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ecb238();
FUN_04138788:
    plVar4 = (long *)(*(code *)*puVar3)();
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if (*(int *)((long)plVar4 + 0x24) == unaff_w22) {
      (**(code **)(*plVar4 + 0x1b8))(plVar4,1,*(undefined8 *)(*plVar4 + 0x1c0));
    }
    param_1 = *unaff_x23;
    param_3 = *unaff_x24;
  } while( true );
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar9 = piVar9 + 4;
    if (uVar7 == 0) break;
    if (*(long *)(piVar9 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar3 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_04138820;
    }
  }
LAB_04138804:
  puVar3 = (undefined8 *)FUN_01ecb238();
LAB_04138820:
  (*(code *)*puVar3)();
LAB_0413882c:
  puVar2 = Method_Unity_Collections_NativeArray<BezierKnot>_Dispose__;
  lVar5 = *(long *)(unaff_x19 + 0x468);
  if (lVar5 != 0) {
    lVar6 = *(long *)(lVar5 + 0x10);
    lVar8 = *(long *)Method_Unity_Collections_NativeArray<BezierKnot>_Dispose__;
    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
    if (lVar6 != 0) {
      uVar1 = *(uint *)(lVar5 + 0x18);
      if (uVar1 < *(uint *)(lVar6 + 0x18)) {
        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
        *(int *)(lVar6 + (long)(int)uVar1 * 4 + 0x20) = unaff_w22;
      }
      else {
        FUN_030ba904(lVar5,unaff_w22,
                     *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
      }
      lVar5 = *(long *)(unaff_x19 + 0x470);
      if (lVar5 != 0) {
        lVar6 = *(long *)(lVar5 + 0x10);
        lVar8 = *(long *)puVar2;
        *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
        if (lVar6 != 0) {
          uVar1 = *(uint *)(lVar5 + 0x18);
          if (uVar1 < *(uint *)(lVar6 + 0x18)) {
            *(uint *)(lVar5 + 0x18) = uVar1 + 1;
            *(undefined4 *)(lVar6 + (long)(int)uVar1 * 4 + 0x20) = unaff_w20;
          }
          else {
            FUN_030ba904(lVar5,unaff_w20,
                         *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
          }
          lVar5 = *(long *)(unaff_x19 + 0x478);
          if (lVar5 != 0) {
            lVar6 = *(long *)(lVar5 + 0x10);
            *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
            if (lVar6 != 0) {
              uVar1 = *(uint *)(lVar5 + 0x18);
              if (*(uint *)(lVar6 + 0x18) <= uVar1) {
                FUN_030f2bb4();
                return;
              }
              *(uint *)(lVar5 + 0x18) = uVar1 + 1;
              puVar3 = (undefined8 *)(lVar6 + (long)(int)uVar1 * 8 + 0x20);
              *puVar3 = unaff_x21;
              thunk_FUN_01f51358(puVar3);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


