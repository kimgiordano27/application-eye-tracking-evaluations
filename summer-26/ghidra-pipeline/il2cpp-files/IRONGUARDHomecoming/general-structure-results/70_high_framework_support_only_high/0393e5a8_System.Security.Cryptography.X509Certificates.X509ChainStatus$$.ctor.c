/*
FUNCTION_NAME: System.Security.Cryptography.X509Certificates.X509ChainStatus$$.ctor
ENTRY_POINT: 0393e5a8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0393e678) */
/* WARNING: Removing unreachable block (ram,0x0393e710) */

void System_Security_Cryptography_X509Certificates_X509ChainStatus___ctor
               (long param_1,undefined8 param_2,long param_3)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long in_x9;
  int *piVar5;
  int *in_x10;
  long unaff_x19;
  long *unaff_x23;
  int unaff_w25;
  long *unaff_x26;
  long lVar6;
  long *unaff_x28;
  long in_stack_00000008;
  
  while (!(bool)in_ZR) {
    if (*(long *)(in_x10 + 2) == param_3) {
      puVar1 = (undefined8 *)(param_1 + (long)in_x10[4] * 0x10 + 0x138);
      goto code_r0x0393e5cc;
    }
    in_x9 = in_x9 + -1;
    in_x10 = in_x10 + 4;
    in_ZR = in_x9 == 0;
  }
  puVar1 = (undefined8 *)FUN_01ecb238();
code_r0x0393e5cc:
  (*(code *)*puVar1)();
  if (in_stack_00000008 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01eed990(in_stack_00000008);
  }
  if (unaff_w25 == 1) {
    plVar2 = (long *)__cxa_begin_catch();
    lVar6 = *plVar2;
    __cxa_end_catch();
    if (unaff_x26 != (long *)0x0) {
      lVar3 = *unaff_x26;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
            puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
            goto LAB_0393e0f0;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar1 = (undefined8 *)FUN_01ecb238();
LAB_0393e0f0:
      (*(code *)*puVar1)();
    }
    if (lVar6 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01eed990(lVar6);
    }
    if ((*unaff_x23 == 0) || (*(long *)(*unaff_x23 + 0x18) == 0)) {
      if (*(int *)(*unaff_x28 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      FUN_0393f988();
    }
    else {
      if (*(int *)(*unaff_x28 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      FUN_0393b0d8();
    }
    if (*(int *)(*unaff_x28 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    FUN_0393e72c();
    lVar6 = 0;
  }
  else {
    if (unaff_x26 != (long *)0x0) {
      lVar6 = *unaff_x26;
      uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
            puVar1 = (undefined8 *)(lVar6 + (long)*piVar5 * 0x10 + 0x138);
            goto code_r0x0393e700;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar1 = (undefined8 *)FUN_01ecb238();
code_r0x0393e700:
      (*(code *)*puVar1)();
    }
    if (unaff_w25 != 1) {
      if (unaff_x19 != 0) {
        if (*(int *)(*(long *)Method_System_Configuration_ConfigurationElement_IsModified__ + 0xe0)
            == 0) {
          thunk_FUN_01ee6d7c();
        }
        FUN_029da814();
      }
                    /* WARNING: Subroutine does not return */
      FUN_01fbfd14();
    }
    plVar2 = (long *)__cxa_begin_catch();
    lVar6 = *plVar2;
    __cxa_end_catch();
  }
  if (unaff_x19 != 0) {
    if (*(int *)(*(long *)Method_System_Configuration_ConfigurationElement_IsModified__ + 0xe0) == 0
       ) {
      thunk_FUN_01ee6d7c();
    }
    FUN_029da814();
  }
  if (lVar6 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01eed990(lVar6);
  }
  return;
}


