/*
FUNCTION_NAME: UnityEngine.UIElements.StyleTranslate$$op_Implicit
ENTRY_POINT: 04138bd4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_6;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x04138d24) */
/* WARNING: Removing unreachable block (ram,0x04138d84) */
/* WARNING: Removing unreachable block (ram,0x04138da4) */

void UnityEngine_UIElements_StyleTranslate__op_Implicit
               (long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  undefined4 unaff_w20;
  int unaff_w22;
  long *unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  
  do {
    uVar5 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(param_1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == param_3) {
          puVar2 = (undefined8 *)(param_1 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_04138c18;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238();
LAB_04138c18:
    uVar5 = (*(code *)*puVar2)();
    if ((uVar5 & 1) == 0) {
      if (unaff_x23 == (long *)0x0) goto LAB_04138d18;
      lVar4 = *unaff_x23;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 == 0) goto LAB_04138cf0;
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      break;
    }
    lVar4 = *unaff_x23;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x25) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_04138c74;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238();
LAB_04138c74:
    plVar3 = (long *)(*(code *)*puVar2)();
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if (*(int *)((long)plVar3 + 0x24) == unaff_w22) {
      (**(code **)(*plVar3 + 0x1b8))(plVar3,0,*(undefined8 *)(*plVar3 + 0x1c0));
    }
    param_1 = *unaff_x23;
    param_3 = *unaff_x24;
  } while( true );
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar6 = piVar6 + 4;
    if (uVar5 == 0) break;
    if (*(long *)(piVar6 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
      goto LAB_04138d0c;
    }
  }
LAB_04138cf0:
  puVar2 = (undefined8 *)FUN_01ecb238();
LAB_04138d0c:
  (*(code *)*puVar2)();
LAB_04138d18:
  puVar1 = Method_Unity_Collections_NativeArray<int>_Dispose__;
  if (*(long *)(unaff_x19 + 0x468) != 0) {
    FUN_030bbd24(*(long *)(unaff_x19 + 0x468),unaff_w22,
                 *(undefined8 *)Method_Unity_Collections_NativeArray<int>_Dispose__);
    if ((*(long *)(unaff_x19 + 0x470) != 0) &&
       (FUN_030bbd24(*(long *)(unaff_x19 + 0x470),unaff_w20,*(undefined8 *)puVar1),
       *(long *)(unaff_x19 + 0x478) != 0)) {
      FUN_030f4000();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


