/*
FUNCTION_NAME: Unity.Burst.BurstString$$BigInt_Compare
ENTRY_POINT: 01fde3bc
PROGRAM: Lovesick-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_1;functionality_eye_api_context_without_clear_sink_hits_1
*/


long Unity_Burst_BurstString__BigInt_Compare(long param_1,long *param_2)

{
  byte bVar1;
  undefined *puVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long *unaff_x19;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar2 = Method_TMPro_TMP_TextProcessingStack<float>__ctor__;
  if (param_1 != 0) {
    return param_1;
  }
  uVar6 = *(undefined8 *)Method_UnityEngine_Mesh_SetUvsImpl<Vector2>__;
  if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar6 = FUN_01780344(uVar6,0);
  if ((param_2 == (long *)0x0) ||
     (plVar3 = (long *)(**(code **)(*param_2 + 0x1d8))
                                 (param_2,uVar6,*(undefined8 *)(*param_2 + 0x1e0)),
     plVar3 == (long *)0x0)) {
LAB_01fde588:
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  if (*plVar3 != *(long *)StringLiteral_5104) goto LAB_01fde58c;
  if ((plVar3[2] != 0) && (0 < *(int *)(plVar3[2] + 0x10))) {
    uVar6 = FUN_01fde590();
    lVar5 = *(long *)puVar2;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar5);
    }
    uVar4 = FUN_0178a8c4(uVar6,0,0);
    if ((uVar4 & 1) != 0) {
      uVar7 = *(undefined8 *)StringLiteral_930;
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      plVar3 = (long *)FUN_01780344(uVar7,0);
      if (plVar3 == (long *)0x0) goto LAB_01fde588;
      uVar4 = (**(code **)(*plVar3 + 0x2c8))(plVar3,uVar6,*(undefined8 *)(*plVar3 + 0x2d0));
      if ((uVar4 & 1) != 0) {
        plVar3 = (long *)FUN_01fde78c();
        if (plVar3 == (long *)0x0) {
          unaff_x19[0xc] = 0;
          goto LAB_01fde524;
        }
        lVar5 = *(long *)StringLiteral_4515;
        bVar1 = *(byte *)(lVar5 + 300);
        if ((*(byte *)(*plVar3 + 300) < bVar1) ||
           (*(long *)(*(long *)(*plVar3 + 200) + ((ulong)bVar1 - 1) * 8) != lVar5)) {
LAB_01fde58c:
                    /* WARNING: Subroutine does not return */
          FUN_00da544c();
        }
        unaff_x19[0xc] = (long)plVar3;
        if ((*(byte *)(*plVar3 + 300) < bVar1) ||
           (*(long *)(*(long *)(*plVar3 + 200) + ((ulong)bVar1 - 1) * 8) != lVar5))
        goto LAB_01fde58c;
      }
    }
  }
  if (unaff_x19[0xc] != 0) {
    return unaff_x19[0xc];
  }
LAB_01fde524:
  puVar2 = Method_System_Nullable<OVRPlugin_Result>__ctor__;
  uVar6 = (**(code **)(*unaff_x19 + 0x238))();
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_00d32864(*(long *)puVar2);
  }
  lVar5 = FUN_01ffe2e4(uVar6,0);
  unaff_x19[0xc] = lVar5;
  return lVar5;
}


