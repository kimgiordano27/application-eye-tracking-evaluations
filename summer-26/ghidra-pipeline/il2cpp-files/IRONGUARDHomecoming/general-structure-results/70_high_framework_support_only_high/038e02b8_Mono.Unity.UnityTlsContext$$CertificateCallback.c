/*
FUNCTION_NAME: Mono.Unity.UnityTlsContext$$CertificateCallback
ENTRY_POINT: 038e02b8
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


/* WARNING: Removing unreachable block (ram,0x038e0424) */

void Mono_Unity_UnityTlsContext__CertificateCallback(long param_1)

{
  long lVar1;
  int iVar2;
  undefined *puVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  int in_w9;
  ulong uVar9;
  int in_w10;
  int *piVar10;
  int unaff_w19;
  long *unaff_x20;
  long unaff_x21;
  
  iVar2 = unaff_w19 * 2;
  if (in_w10 < iVar2) {
    (**(code **)(*unaff_x20 + 0x418))();
    if (*(int *)(*(long *)StringLiteral_2948 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    plVar4 = (long *)FUN_029cff28(iVar2,*(undefined8 *)StringLiteral_2946);
    puVar3 = StringLiteral_2947;
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    FUN_029cfea8(plVar4,*(undefined8 *)StringLiteral_2947);
    FUN_03952ce8();
    plVar5 = (long *)(**(code **)(*unaff_x20 + 0x3f8))();
    uVar6 = FUN_029cfea8(plVar4,*(undefined8 *)puVar3);
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c(uVar6,uVar6);
    }
    (**(code **)(*plVar5 + 0x358))(plVar5,uVar6,0,iVar2,*(undefined8 *)(*plVar5 + 0x360));
    lVar8 = *plVar4;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar7 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_038e0414;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar7 = (undefined8 *)
             FUN_01ecb238(plVar4,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_038e0414:
    (*(code *)*puVar7)(plVar4,puVar7[1]);
    return;
  }
  if (in_w10 < in_w9 + iVar2) {
    (**(code **)(*unaff_x20 + 0x418))();
    param_1 = unaff_x20[7];
    lVar8 = 0;
    if (param_1 == 0) goto LAB_038e0430;
  }
  if (*(int *)(param_1 + 0x18) == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = param_1 + 0x20;
  }
LAB_038e0430:
  lVar1 = 0;
  if (*(int *)(unaff_x21 + 0x18) != 0) {
    lVar1 = unaff_x21 + 0x20;
  }
  FUN_03952c90(lVar1,lVar8 + (int)unaff_x20[8],iVar2,0);
  *(int *)(unaff_x20 + 8) = (int)unaff_x20[8] + iVar2;
  return;
}


