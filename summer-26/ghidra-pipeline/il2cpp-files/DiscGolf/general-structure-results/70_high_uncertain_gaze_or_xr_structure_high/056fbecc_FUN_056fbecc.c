/*
FUNCTION_NAME: FUN_056fbecc
ENTRY_POINT: 056fbecc
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 89
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_9;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Type propagation algorithm not settling */

void FUN_056fbecc(undefined8 *param_1,long param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined4 *__s;
  uint auStack_60 [2];
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  puVar7 = param_1;
  if ((DAT_06dbeb8a & 1) == 0) {
    FUN_02d965b8(OVRPlugin_TrackingConfidence___TypeInfo);
    FUN_02d965b8(OVRPlugin_Vector2f___TypeInfo);
    FUN_02d965b8(OVRPlugin_Vector3f___TypeInfo);
    FUN_02d965b8(PTR_DAT_06a0d0a8);
    puVar7 = (undefined8 *)FUN_02d965b8(PTR_DAT_06a00f70);
    DAT_06dbeb8a = 1;
  }
  puVar6 = PTR_DAT_06a0d0a8;
  puVar5 = PTR_DAT_06a00f70;
  auStack_60[1] = 0;
  if (param_2 == 0) {
LAB_056fc0f8:
    if (*(long *)(lVar4 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
  }
  else {
    iVar1 = *(int *)(*(long *)PTR_DAT_06a0d0a8 + 0xe4);
    *(undefined4 *)(param_2 + 0x18) = 0;
    *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
    if (iVar1 == 0) {
      thunk_FUN_02df485c();
    }
    uVar11 = *param_1;
    if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    uVar11 = FUN_0577e604(uVar11,0,auStack_60 + 1,0,0);
    uVar8 = FUN_0576856c(uVar11,0);
    puVar7 = (undefined8 *)0x0;
    if ((uVar8 & 1) != 0) {
      uVar8 = (ulong)auStack_60[1];
      if (auStack_60[1] == 0) {
        __s = (undefined4 *)0x0;
      }
      else {
        __s = (undefined4 *)((long)auStack_60 - (uVar8 * 4 + 0xf & 0x7fffffff0));
      }
      memset(__s,0,uVar8 * 4);
      if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
        thunk_FUN_02df485c();
        uVar8 = (ulong)auStack_60[1];
      }
      uVar11 = *param_1;
      if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      uVar11 = FUN_0577e604(uVar11,uVar8,auStack_60 + 1,__s,0);
      puVar7 = (undefined8 *)FUN_0576856c(uVar11,0);
      puVar5 = OVRPlugin_TrackingConfidence___TypeInfo;
      if (((ulong)puVar7 & 1) == 0) {
        puVar7 = (undefined8 *)0x0;
      }
      else {
        if (auStack_60[1] != 0) {
          uVar8 = 0;
          lVar9 = *(long *)OVRPlugin_TrackingConfidence___TypeInfo;
          do {
            lVar10 = *(long *)(param_2 + 0x10);
            uVar2 = *__s;
            *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
            if (lVar10 == 0) goto LAB_056fc0f8;
            uVar3 = *(uint *)(param_2 + 0x18);
            if (uVar3 < *(uint *)(lVar10 + 0x18)) {
              *(uint *)(param_2 + 0x18) = uVar3 + 1;
              *(undefined4 *)(lVar10 + (long)(int)uVar3 * 4 + 0x20) = uVar2;
            }
            else {
              puVar7 = (undefined8 *)
                       FUN_03fb652c(param_2,uVar2,
                                    *(undefined8 *)
                                     (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
              lVar9 = *(long *)puVar5;
            }
            uVar8 = uVar8 + 1;
            __s = __s + 1;
          } while (uVar8 < auStack_60[1]);
        }
        puVar7 = (undefined8 *)0x1;
      }
    }
    if (*(long *)(lVar4 + 0x28) == local_58) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(puVar7);
}


