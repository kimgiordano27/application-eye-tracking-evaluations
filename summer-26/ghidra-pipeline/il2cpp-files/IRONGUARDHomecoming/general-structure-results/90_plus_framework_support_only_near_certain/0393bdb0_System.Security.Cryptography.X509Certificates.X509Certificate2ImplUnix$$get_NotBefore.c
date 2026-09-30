/*
FUNCTION_NAME: System.Security.Cryptography.X509Certificates.X509Certificate2ImplUnix$$get_NotBefore
ENTRY_POINT: 0393bdb0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_8;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x0393bfd8) */
/* WARNING: Removing unreachable block (ram,0x0393bf4c) */

void System_Security_Cryptography_X509Certificates_X509Certificate2ImplUnix__get_NotBefore
               (undefined8 *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *unaff_x19;
  long *unaff_x20;
  long lVar6;
  int unaff_w25;
  long in_stack_00000028;
  
  (*(code *)*param_1)();
  if (in_stack_00000028 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01eed990(in_stack_00000028);
  }
  if (unaff_w25 == 1) {
    plVar2 = (long *)__cxa_begin_catch();
    lVar6 = *plVar2;
    __cxa_end_catch();
    if (unaff_x20 != (long *)0x0) {
      lVar3 = *unaff_x20;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
            puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
            goto LAB_0393b998;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar1 = (undefined8 *)FUN_01ecb238();
LAB_0393b998:
      (*(code *)*puVar1)();
    }
    if (lVar6 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01eed990(lVar6);
    }
    lVar6 = 0;
  }
  else {
    if (unaff_x20 != (long *)0x0) {
      lVar6 = *unaff_x20;
      uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
            puVar1 = (undefined8 *)(lVar6 + (long)*piVar5 * 0x10 + 0x138);
            goto code_r0x0393bf18;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar1 = (undefined8 *)FUN_01ecb238();
code_r0x0393bf18:
      (*(code *)*puVar1)();
    }
    if (unaff_w25 != 1) {
      if (unaff_x19 != (long *)0x0) {
        lVar6 = *unaff_x19;
        uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar4 != 0) {
          piVar5 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar5 + -2) ==
                *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
              puVar1 = (undefined8 *)(lVar6 + (long)*piVar5 * 0x10 + 0x138);
              goto code_r0x0393bfc0;
            }
            uVar4 = uVar4 - 1;
            piVar5 = piVar5 + 4;
          } while (uVar4 != 0);
        }
        puVar1 = (undefined8 *)FUN_01ecb238();
code_r0x0393bfc0:
        (*(code *)*puVar1)();
      }
                    /* WARNING: Subroutine does not return */
      FUN_01fbfd14();
    }
    plVar2 = (long *)__cxa_begin_catch();
    lVar6 = *plVar2;
    __cxa_end_catch();
  }
  if (unaff_x19 != (long *)0x0) {
    lVar3 = *unaff_x19;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_0393ba04;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_01ecb238();
LAB_0393ba04:
    (*(code *)*puVar1)();
  }
  if (lVar6 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01eed990(lVar6);
  }
  return;
}


