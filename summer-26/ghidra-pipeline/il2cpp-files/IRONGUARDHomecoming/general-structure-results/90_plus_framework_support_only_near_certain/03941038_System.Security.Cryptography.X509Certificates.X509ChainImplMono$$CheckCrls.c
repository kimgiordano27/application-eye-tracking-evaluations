/*
FUNCTION_NAME: System.Security.Cryptography.X509Certificates.X509ChainImplMono$$CheckCrls
ENTRY_POINT: 03941038
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_12;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_6
*/


/* WARNING: Removing unreachable block (ram,0x039410c0) */

void System_Security_Cryptography_X509Certificates_X509ChainImplMono__CheckCrls
               (undefined8 param_1,int param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x22;
  long *in_stack_00000008;
  long *in_stack_00000018;
  
  if (in_stack_00000018 != (long *)0x0) {
    lVar4 = *in_stack_00000018;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar1 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto code_r0x03940fe4;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar1 = (undefined8 *)
             FUN_01ecb238(in_stack_00000018,
                          *(long *)
                           Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__,
                          0);
code_r0x03940fe4:
    (*(code *)*puVar1)(in_stack_00000018,puVar1[1]);
  }
  if (unaff_x22 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01eed990();
  }
  if (param_2 != 1) {
    if (in_stack_00000008 != (long *)0x0) {
      lVar4 = *in_stack_00000008;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
            puVar1 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
            goto code_r0x039410a8;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar1 = (undefined8 *)
               FUN_01ecb238(in_stack_00000008,
                            *(long *)
                             Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                            ,0);
code_r0x039410a8:
      (*(code *)*puVar1)(in_stack_00000008,puVar1[1]);
    }
                    /* WARNING: Subroutine does not return */
    FUN_01fbfd14(param_1);
  }
  plVar2 = (long *)__cxa_begin_catch(param_1);
  lVar4 = *plVar2;
  __cxa_end_catch();
  if (in_stack_00000008 != (long *)0x0) {
    lVar3 = *in_stack_00000008;
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_03940c58;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar1 = (undefined8 *)
             FUN_01ecb238(in_stack_00000008,
                          *(long *)
                           Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__,
                          0);
LAB_03940c58:
    (*(code *)*puVar1)(in_stack_00000008,puVar1[1]);
  }
  if (lVar4 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01eed990(lVar4);
}


