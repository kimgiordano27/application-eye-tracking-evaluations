/*
FUNCTION_NAME: System.Security.Cryptography.X509Certificates.X509ChainImplMono$$get_ChainElements
ENTRY_POINT: 0393dd80
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 91
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_6;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x0393e32c) */
/* WARNING: Removing unreachable block (ram,0x0393dee4) */
/* WARNING: Removing unreachable block (ram,0x0393e340) */
/* WARNING: Removing unreachable block (ram,0x0393e34c) */
/* WARNING: Removing unreachable block (ram,0x0393e108) */
/* WARNING: Removing unreachable block (ram,0x0393e10c) */
/* WARNING: Removing unreachable block (ram,0x0393e114) */
/* WARNING: Removing unreachable block (ram,0x0393e14c) */
/* WARNING: Removing unreachable block (ram,0x0393e15c) */
/* WARNING: Removing unreachable block (ram,0x0393e160) */
/* WARNING: Removing unreachable block (ram,0x0393e11c) */
/* WARNING: Removing unreachable block (ram,0x0393e12c) */
/* WARNING: Removing unreachable block (ram,0x0393e130) */

void System_Security_Cryptography_X509Certificates_X509ChainImplMono__get_ChainElements
               (undefined8 *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x19;
  long unaff_x22;
  long *unaff_x26;
  long *unaff_x28;
  undefined8 in_stack_00000098;
  
  plVar1 = (long *)FUN_029da4a8(*param_1);
  if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  if (plVar1[3] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  FUN_03937bf8(plVar1[3],in_stack_00000098);
  if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  *(long *)(unaff_x22 + 0x50) = plVar1[3];
  thunk_FUN_01f51358();
  if (unaff_x26 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  FUN_038f05a8();
  if (*(int *)(*unaff_x28 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  FUN_0393e9c4();
  lVar3 = *plVar1;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) ==
          *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
        puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
        goto LAB_0393decc;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar2 = (undefined8 *)
           FUN_01ecb238(plVar1,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_0393decc:
  (*(code *)*puVar2)(plVar1,puVar2[1]);
  if (unaff_x26 != (long *)0x0) {
    lVar3 = *unaff_x26;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_0393e0f0;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238();
LAB_0393e0f0:
    (*(code *)*puVar2)();
  }
  if (*(int *)(*unaff_x28 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  FUN_0393e72c();
  if (unaff_x19 != 0) {
    if (*(int *)(*(long *)Method_System_Configuration_ConfigurationElement_IsModified__ + 0xe0) == 0
       ) {
      thunk_FUN_01ee6d7c();
    }
    FUN_029da814();
  }
  return;
}


