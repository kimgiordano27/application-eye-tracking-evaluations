/*
FUNCTION_NAME: FUN_03b33c80
ENTRY_POINT: 03b33c80
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 103
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03b33e24) */

void FUN_03b33c80(long *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long lVar7;
  undefined1 auStack_68 [16];
  uint local_58;
  
  if ((DAT_0483940f & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    DAT_0483940f = 1;
  }
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  plVar2 = (long *)FUN_03b2468c(0);
  if (*param_2 == 0) {
    FUN_03b3037c(auStack_68,param_2[1],param_4,0,param_5,0,param_6);
  }
  else {
    FUN_03b2fa88(auStack_68,*param_2,param_4,0,param_6,param_5);
  }
  if (param_2[1] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar4 = *(long *)(param_2[1] + 0x30);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  if (*(uint *)(lVar4 + 0x18) <= local_58) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a44();
  }
  puVar3 = (undefined8 *)(lVar4 + (long)(int)local_58 * 0x58 + 0x20);
  *puVar3 = param_3;
  thunk_FUN_01f51358(puVar3,param_3);
  if (param_2[1] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar4 = *(long *)(param_2[1] + 0x30);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  if (*(uint *)(lVar4 + 0x18) <= local_58) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a44();
  }
  lVar4 = lVar4 + (long)(int)local_58 * 0x58;
  *(uint *)(lVar4 + 0x58) = *(uint *)(lVar4 + 0x58) | 8;
  if (plVar2 != (long *)0x0) {
    lVar4 = *plVar2;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_03b33de8;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ecb238(plVar2,*(long *)puVar1,0);
LAB_03b33de8:
    (*(code *)*puVar3)(plVar2,puVar3[1]);
  }
  lVar7 = param_2[1];
  lVar4 = *param_2;
  param_1[2] = param_2[2];
  param_1[1] = lVar7;
  *param_1 = lVar4;
  return;
}


