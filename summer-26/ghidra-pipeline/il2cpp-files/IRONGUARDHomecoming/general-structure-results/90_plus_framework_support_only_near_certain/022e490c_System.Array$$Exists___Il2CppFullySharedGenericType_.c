/*
FUNCTION_NAME: System.Array$$Exists<__Il2CppFullySharedGenericType>
ENTRY_POINT: 022e490c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 148
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_8;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x022e4b68) */

uint System_Array__Exists<__Il2CppFullySharedGenericType>(undefined1 param_1 [16])

{
  uint uVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  undefined8 uStack0000000000000010;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined4 uStack0000000000000020;
  undefined8 uStack0000000000000024;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined8 uStack0000000000000054;
  undefined *puVar5;
  
  uStack0000000000000008 = param_1._8_8_;
  uStack0000000000000000 = param_1._0_8_;
  uStack0000000000000020 = param_1._4_4_;
  uStack0000000000000018 = param_1._8_4_;
  uStack000000000000001c = param_1._12_4_;
  puVar5 = Method_UnityEngine_UIElements_BoundsIntField_<_ctor>b__10_1__;
  uStack0000000000000010 = uStack0000000000000000;
  if ((unaff_x19 == (long *)0x0) ||
     (puVar5 = Method_UnityEngine_CanvasRenderer_SetColor__, unaff_x21 == 0)) {
    uVar4 = thunk_FUN_01efb3a4(puVar5);
    FUN_03971094(uVar4,0);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910();
  }
  lVar6 = **(long **)(unaff_x20 + 0x38);
  uStack0000000000000024 = uStack0000000000000008;
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_01ecaf44(lVar6);
  }
  lVar7 = *unaff_x19;
  uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == lVar6) {
        puVar2 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
        goto LAB_022e4980;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar2 = (undefined8 *)FUN_01ecb238();
LAB_022e4980:
  plVar3 = (long *)(*(code *)*puVar2)();
  puVar5 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar6 = *plVar3;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar5) {
          puVar2 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_022e49e8;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238(plVar3,*(long *)puVar5,0);
LAB_022e49e8:
    uVar1 = (*(code *)*puVar2)(plVar3,puVar2[1]);
    if ((uVar1 & 1) == 0) {
      uVar1 = 0;
      break;
    }
    lVar6 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x18);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_01ecaf44(lVar6);
    }
    lVar7 = *plVar3;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar6) {
          puVar2 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_022e4a60;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238(plVar3,lVar6,0);
LAB_022e4a60:
    (*(code *)*puVar2)(&stack0x00000030,plVar3,puVar2[1]);
    uStack0000000000000024 = uStack0000000000000054;
    uStack0000000000000020 = uStack0000000000000050;
    uStack0000000000000008 = in_stack_00000038;
    uStack0000000000000000 = in_stack_00000030;
    uStack0000000000000018 = uStack0000000000000048;
    uStack000000000000001c = uStack000000000000004c;
    uStack0000000000000010 = in_stack_00000040;
    uVar8 = (**(code **)(unaff_x21 + 0x18))
                      (*(undefined8 *)(unaff_x21 + 0x40),&stack0x00000030,
                       *(undefined8 *)(unaff_x21 + 0x28));
  } while ((uVar8 & 1) == 0);
  if (plVar3 != (long *)0x0) {
    lVar6 = *plVar3;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar2 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_022e4b14;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar2 = (undefined8 *)
             FUN_01ecb238(plVar3,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_022e4b14:
    (*(code *)*puVar2)(plVar3,puVar2[1]);
  }
  return uVar1 & 1;
}


