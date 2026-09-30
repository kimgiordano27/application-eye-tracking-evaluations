/*
FUNCTION_NAME: System.Security.Cryptography.X509Certificates.X509Extension$$get_Critical
ENTRY_POINT: 03941f8c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_16;weak_xr_or_state_hits_16;validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_21;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_16
*/


/* WARNING: Removing unreachable block (ram,0x039421a0) */
/* WARNING: Removing unreachable block (ram,0x03942190) */
/* WARNING: Removing unreachable block (ram,0x03942230) */
/* WARNING: Removing unreachable block (ram,0x03942188) */

undefined8
System_Security_Cryptography_X509Certificates_X509Extension__get_Critical
          (undefined8 param_1,int param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long lVar6;
  long *in_stack_00000000;
  long *in_stack_00000008;
  long *in_stack_00000010;
  long *in_stack_00000018;
  undefined8 in_stack_00000020;
  
  if (param_2 == 1) {
    plVar2 = (long *)__cxa_begin_catch(param_1);
    lVar6 = *plVar2;
    __cxa_end_catch();
    if (in_stack_00000018 != (long *)0x0) {
      lVar3 = *in_stack_00000018;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
            puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
            goto LAB_03941c40;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar1 = (undefined8 *)
               FUN_01ecb238(in_stack_00000018,
                            *(long *)
                             Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                            ,0);
LAB_03941c40:
      (*(code *)*puVar1)(in_stack_00000018,puVar1[1]);
    }
    lVar3 = 0;
    if (lVar6 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01eed990(lVar6);
    }
code_r0x03941c50:
    if (in_stack_00000010 != (long *)0x0) {
      lVar6 = *in_stack_00000010;
      uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
            puVar1 = (undefined8 *)(lVar6 + (long)*piVar5 * 0x10 + 0x138);
            goto FUN_03941ca8;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar1 = (undefined8 *)
               FUN_01ecb238(in_stack_00000010,
                            *(long *)
                             Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                            ,0);
FUN_03941ca8:
      (*(code *)*puVar1)(in_stack_00000010,puVar1[1]);
    }
    lVar6 = 0;
    if (lVar3 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01eed990(lVar3);
    }
  }
  else {
    if (in_stack_00000018 != (long *)0x0) {
      lVar3 = *in_stack_00000018;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
            puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
            goto code_r0x0394204c;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar1 = (undefined8 *)
               FUN_01ecb238(in_stack_00000018,
                            *(long *)
                             Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                            ,0);
code_r0x0394204c:
      (*(code *)*puVar1)(in_stack_00000018,puVar1[1]);
    }
    if (param_2 == 1) {
      plVar2 = (long *)__cxa_begin_catch(param_1);
      lVar3 = *plVar2;
      __cxa_end_catch();
      goto code_r0x03941c50;
    }
    if (in_stack_00000010 != (long *)0x0) {
      lVar3 = *in_stack_00000010;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
            puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
            goto code_r0x039420d4;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar1 = (undefined8 *)
               FUN_01ecb238(in_stack_00000010,
                            *(long *)
                             Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                            ,0);
code_r0x039420d4:
      (*(code *)*puVar1)(in_stack_00000010,puVar1[1]);
    }
    if (param_2 != 1) {
      if (in_stack_00000000 != (long *)0x0) {
        lVar3 = *in_stack_00000000;
        uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar4 != 0) {
          piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar5 + -2) ==
                *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
              puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
              goto code_r0x0394215c;
            }
            uVar4 = uVar4 - 1;
            piVar5 = piVar5 + 4;
          } while (uVar4 != 0);
        }
        puVar1 = (undefined8 *)
                 FUN_01ecb238(in_stack_00000000,
                              *(long *)
                               Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                              ,0);
code_r0x0394215c:
        (*(code *)*puVar1)(in_stack_00000000,puVar1[1]);
      }
      if (param_2 != 1) {
        if (in_stack_00000008 != (long *)0x0) {
          lVar3 = *in_stack_00000008;
          uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
          if (uVar4 != 0) {
            piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
            do {
              if (*(long *)(piVar5 + -2) ==
                  *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__)
              {
                puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
                goto code_r0x03942218;
              }
              uVar4 = uVar4 - 1;
              piVar5 = piVar5 + 4;
            } while (uVar4 != 0);
          }
          puVar1 = (undefined8 *)
                   FUN_01ecb238(in_stack_00000008,
                                *(long *)
                                 Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                                ,0);
code_r0x03942218:
          (*(code *)*puVar1)(in_stack_00000008,puVar1[1]);
        }
                    /* WARNING: Subroutine does not return */
        FUN_01fbfd14(param_1);
      }
      plVar2 = (long *)__cxa_begin_catch(param_1);
      lVar3 = *plVar2;
      __cxa_end_catch();
      goto code_r0x03941d20;
    }
    plVar2 = (long *)__cxa_begin_catch(param_1);
    lVar6 = *plVar2;
    __cxa_end_catch();
  }
  if (in_stack_00000000 != (long *)0x0) {
    lVar3 = *in_stack_00000000;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_03941d10;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)
             FUN_01ecb238(in_stack_00000000,
                          *(long *)
                           Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__,
                          0);
LAB_03941d10:
    (*(code *)*puVar1)(in_stack_00000000,puVar1[1]);
  }
  lVar3 = 0;
  if (lVar6 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01eed990(lVar6);
  }
code_r0x03941d20:
  if (in_stack_00000008 != (long *)0x0) {
    lVar6 = *in_stack_00000008;
    uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar1 = (undefined8 *)(lVar6 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_03941d78;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)
             FUN_01ecb238(in_stack_00000008,
                          *(long *)
                           Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__,
                          0);
LAB_03941d78:
    (*(code *)*puVar1)(in_stack_00000008,puVar1[1]);
  }
  if (lVar3 == 0) {
    return in_stack_00000020;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01eed990(lVar3);
}


