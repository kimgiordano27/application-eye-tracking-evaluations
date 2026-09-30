/*
FUNCTION_NAME: UnityEngine.Rendering.ConstantBufferSingleton<Hammersley.Hammersley2dSeq256>$$.ctor
ENTRY_POINT: 0296b08c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
UnityEngine_Rendering_ConstantBufferSingleton<Hammersley_Hammersley2dSeq256>___ctor
          (ulong param_1,undefined1 param_2 [16],undefined4 param_3,undefined4 param_4,
          undefined4 param_5)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *plVar7;
  undefined4 uVar8;
  undefined1 auVar9 [16];
  
  if ((param_1 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    *(undefined1 *)(unaff_x21 + 0xc7a) = 1;
  }
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (*(int *)((long)unaff_x19 + 0x14) != 2) {
    if (*(int *)((long)unaff_x19 + 0x14) != 1) {
      return 0;
    }
    plVar7 = (long *)unaff_x19[5];
    if (plVar7 == (long *)0x0)
    goto UnityEngine_Rendering_ConstantBufferSingleton<Hammersley_Hammersley2dSeq32>__Release;
    lVar3 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x10);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01ecaf44(lVar3);
    }
    lVar4 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == lVar3) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_0296b130;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238(plVar7,lVar3,0);
LAB_0296b130:
    lVar3 = (*(code *)*puVar2)(plVar7,puVar2[1]);
    unaff_x19[8] = lVar3;
    thunk_FUN_01f51358(unaff_x19 + 8,lVar3);
    *(undefined4 *)((long)unaff_x19 + 0x14) = 2;
  }
  do {
    plVar7 = (long *)unaff_x19[8];
    if (plVar7 == (long *)0x0)
    goto UnityEngine_Rendering_ConstantBufferSingleton<Hammersley_Hammersley2dSeq32>__Release;
    lVar3 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_0296b1ac;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar1,0);
LAB_0296b1ac:
    uVar5 = (*(code *)*puVar2)(plVar7,puVar2[1]);
    if ((uVar5 & 1) == 0) {
      if (unaff_x19 != (long *)0x0) {
        (**(code **)(*unaff_x19 + 0x1f8))();
        return 0;
      }
      goto UnityEngine_Rendering_ConstantBufferSingleton<Hammersley_Hammersley2dSeq32>__Release;
    }
    plVar7 = (long *)unaff_x19[8];
    if (plVar7 == (long *)0x0)
    goto UnityEngine_Rendering_ConstantBufferSingleton<Hammersley_Hammersley2dSeq32>__Release;
    lVar3 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x40);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01ecaf44(lVar3);
    }
    lVar4 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == lVar3) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_0296b22c;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238(plVar7,lVar3,0);
LAB_0296b22c:
    auVar9 = (*(code *)*puVar2)(plVar7,puVar2[1]);
    lVar3 = unaff_x19[6];
  } while ((lVar3 != 0) &&
          (uVar5 = (**(code **)(lVar3 + 0x18))
                             (*(undefined8 *)(lVar3 + 0x40),auVar9._0_8_,auVar9._8_8_,
                              *(undefined8 *)(lVar3 + 0x28)), (uVar5 & 1) == 0));
  lVar3 = unaff_x19[7];
  if (lVar3 != 0) {
    uVar8 = (**(code **)(lVar3 + 0x18))
                      (*(undefined8 *)(lVar3 + 0x40),auVar9._0_8_,auVar9._8_8_,
                       *(undefined8 *)(lVar3 + 0x28));
    *(undefined4 *)(unaff_x19 + 3) = uVar8;
    *(undefined4 *)((long)unaff_x19 + 0x1c) = param_3;
    *(undefined4 *)(unaff_x19 + 4) = param_4;
    *(undefined4 *)((long)unaff_x19 + 0x24) = param_5;
    return 1;
  }
UnityEngine_Rendering_ConstantBufferSingleton<Hammersley_Hammersley2dSeq32>__Release:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


