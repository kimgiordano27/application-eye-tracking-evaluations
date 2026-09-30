/*
FUNCTION_NAME: UnityEngine.Rendering.Universal.Internal.AdditionalLightsShadowCasterPass$$Render
ENTRY_POINT: 03cfa3e4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 91
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_8;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x03cfa65c) */
/* WARNING: Removing unreachable block (ram,0x03cfa670) */
/* WARNING: Removing unreachable block (ram,0x03cfa674) */
/* WARNING: Removing unreachable block (ram,0x03cfa6ac) */

void UnityEngine_Rendering_Universal_Internal_AdditionalLightsShadowCasterPass__Render(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long unaff_x20;
  undefined8 unaff_x22;
  long *unaff_x24;
  long *unaff_x25;
  long *unaff_x26;
  undefined8 in_stack_00000008;
  
  FUN_02e6c3f4();
  *(undefined8 *)(*(long *)(*unaff_x26 + 0xb8) + 0x18) = unaff_x22;
  thunk_FUN_01f51358();
  uVar5 = FUN_022fb9e0();
  if (*(long *)(unaff_x20 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  plVar6 = (long *)FUN_025d9d24(*(long *)(unaff_x20 + 0x48),*(undefined8 *)PTR_DAT_04572c90);
  puVar4 = PTR_DAT_04572c88;
  puVar3 = Method_UnityEngine_Rendering_Universal_BuddyAllocator_GetNativeArray<int>__;
  puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
LAB_03cfa454:
  lVar9 = *plVar6;
  uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
        puVar7 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
        goto LAB_03cfa4a0;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar7 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar2,0);
LAB_03cfa4a0:
  uVar10 = (*(code *)*puVar7)(plVar6,puVar7[1]);
  if ((uVar10 & 1) != 0) {
    lVar9 = *plVar6;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar4) {
          puVar7 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_03cfa4fc;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar7 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar4,0);
LAB_03cfa4fc:
    plVar8 = (long *)(*(code *)*puVar7)(plVar6,puVar7[1]);
    if (plVar8 != (long *)0x0) {
      lVar9 = *plVar8;
      bVar1 = *(byte *)(*unaff_x24 + 0x130);
      if ((*(byte *)(lVar9 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(lVar9 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x24)) {
        bVar1 = *(byte *)(*unaff_x25 + 0x130);
        if ((*(byte *)(lVar9 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(lVar9 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x25))
        goto LAB_03cfa454;
      }
      in_stack_00000008 = 0;
      FUN_0332f050(&stack0x00000008,uVar5,*(undefined8 *)puVar3);
      FUN_03cfa200();
    }
    goto LAB_03cfa454;
  }
  if (plVar6 != (long *)0x0) {
    lVar9 = *plVar6;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar7 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_03cfa648;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar7 = (undefined8 *)
             FUN_01ecb238(plVar6,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_03cfa648:
    (*(code *)*puVar7)(plVar6,puVar7[1]);
  }
  return;
}


