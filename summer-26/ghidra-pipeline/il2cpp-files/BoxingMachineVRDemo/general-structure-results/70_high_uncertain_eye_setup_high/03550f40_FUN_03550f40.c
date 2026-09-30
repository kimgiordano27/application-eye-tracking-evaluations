/*
FUNCTION_NAME: FUN_03550f40
ENTRY_POINT: 03550f40
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_4
*/


undefined8 FUN_03550f40(long param_1,undefined2 param_2,int param_3,long param_4)

{
  bool bVar1;
  undefined2 uVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  int iVar8;
  undefined2 local_34 [2];
  
  local_34[0] = param_2;
  if (*(long *)(param_4 + 0x38) == 0) {
    FUN_02d9a33c(param_4);
  }
  lVar4 = FUN_0505261c(0,0);
  puVar3 = PTR_DAT_0675e258;
  iVar8 = param_3;
  if (7 < param_3) {
    do {
      uVar2 = *(undefined2 *)(param_1 + lVar4 * 2);
      if (*(int *)(*(long *)(puVar3 + 0x88) + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar5 = FUN_04f83484(local_34,uVar2,*(undefined8 *)(*(long *)(param_4 + 0x38) + 0x20));
      if ((uVar5 & 1) != 0) goto LAB_03551360;
      lVar6 = FUN_05052640(lVar4,1,0);
      uVar2 = *(undefined2 *)(param_1 + lVar6 * 2);
      if (*(int *)(*(long *)(puVar3 + 0x88) + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar5 = FUN_04f83484(local_34,uVar2,*(undefined8 *)(*(long *)(param_4 + 0x38) + 0x20));
      if ((uVar5 & 1) != 0)
      goto System_Array__InternalArray__ICollection_Add<OVRPlugin_AppPerfFrameStats>;
      lVar6 = FUN_05052640(lVar4,2,0);
      uVar2 = *(undefined2 *)(param_1 + lVar6 * 2);
      if (*(int *)(*(long *)(puVar3 + 0x88) + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar5 = FUN_04f83484(local_34,uVar2,*(undefined8 *)(*(long *)(param_4 + 0x38) + 0x20));
      if ((uVar5 & 1) != 0)
      goto System_Array__InternalArray__ICollection_Add<OVRPlugin_BodyJointLocation>;
      lVar6 = FUN_05052640(lVar4,3,0);
      uVar2 = *(undefined2 *)(param_1 + lVar6 * 2);
      if (*(int *)(*(long *)(puVar3 + 0x88) + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar5 = FUN_04f83484(local_34,uVar2,*(undefined8 *)(*(long *)(param_4 + 0x38) + 0x20));
      if ((uVar5 & 1) != 0) goto LAB_03551350;
      lVar6 = FUN_05052640(lVar4,4,0);
      uVar2 = *(undefined2 *)(param_1 + lVar6 * 2);
      if (*(int *)(*(long *)(puVar3 + 0x88) + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar5 = FUN_04f83484(local_34,uVar2,*(undefined8 *)(*(long *)(param_4 + 0x38) + 0x20));
      if ((uVar5 & 1) != 0) {
        uVar7 = 4;
LAB_035512f8:
        uVar7 = FUN_05052640(lVar4,uVar7,0);
        uVar7 = FUN_05052634(uVar7,0);
        return uVar7;
      }
      lVar6 = FUN_05052640(lVar4,5,0);
      uVar2 = *(undefined2 *)(param_1 + lVar6 * 2);
      if (*(int *)(*(long *)(puVar3 + 0x88) + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar5 = FUN_04f83484(local_34,uVar2,*(undefined8 *)(*(long *)(param_4 + 0x38) + 0x20));
      if ((uVar5 & 1) != 0) {
        uVar7 = 5;
        goto LAB_035512f8;
      }
      lVar6 = FUN_05052640(lVar4,6,0);
      uVar2 = *(undefined2 *)(param_1 + lVar6 * 2);
      if (*(int *)(*(long *)(puVar3 + 0x88) + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar5 = FUN_04f83484(local_34,uVar2,*(undefined8 *)(*(long *)(param_4 + 0x38) + 0x20));
      if ((uVar5 & 1) != 0) {
        uVar7 = 6;
        goto LAB_035512f8;
      }
      lVar6 = FUN_05052640(lVar4,7,0);
      uVar2 = *(undefined2 *)(param_1 + lVar6 * 2);
      if (*(int *)(*(long *)(puVar3 + 0x88) + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar5 = FUN_04f83484(local_34,uVar2,*(undefined8 *)(*(long *)(param_4 + 0x38) + 0x20));
      if ((uVar5 & 1) != 0) {
        uVar7 = 7;
        goto LAB_035512f8;
      }
      param_3 = iVar8 + -8;
      lVar4 = FUN_05052640(lVar4,8,0);
      bVar1 = 0xf < iVar8;
      iVar8 = param_3;
    } while (bVar1);
  }
  puVar3 = PTR_DAT_0675e258;
  if (param_3 < 4) {
LAB_035511a8:
    puVar3 = PTR_DAT_0675e258;
    if (0 < param_3) {
      param_3 = param_3 + 1;
      do {
        uVar2 = *(undefined2 *)(param_1 + lVar4 * 2);
        if (*(int *)(*(long *)(puVar3 + 0x88) + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        uVar5 = FUN_04f83484(local_34,uVar2,*(undefined8 *)(*(long *)(param_4 + 0x38) + 0x20));
        if ((uVar5 & 1) != 0) goto LAB_03551360;
        lVar4 = FUN_05052640(lVar4,1,0);
        param_3 = param_3 + -1;
      } while (1 < param_3);
    }
    uVar7 = 0xffffffff;
  }
  else {
    uVar2 = *(undefined2 *)(param_1 + lVar4 * 2);
    if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0x88) + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar5 = FUN_04f83484(local_34,uVar2,*(undefined8 *)(*(long *)(param_4 + 0x38) + 0x20));
    if ((uVar5 & 1) == 0) {
      lVar6 = FUN_05052640(lVar4,1,0);
      uVar2 = *(undefined2 *)(param_1 + lVar6 * 2);
      if (*(int *)(*(long *)(puVar3 + 0x88) + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar5 = FUN_04f83484(local_34,uVar2,*(undefined8 *)(*(long *)(param_4 + 0x38) + 0x20));
      if ((uVar5 & 1) == 0) {
        lVar6 = FUN_05052640(lVar4,2,0);
        uVar2 = *(undefined2 *)(param_1 + lVar6 * 2);
        if (*(int *)(*(long *)(puVar3 + 0x88) + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        uVar5 = FUN_04f83484(local_34,uVar2,*(undefined8 *)(*(long *)(param_4 + 0x38) + 0x20));
        if ((uVar5 & 1) == 0) {
          lVar6 = FUN_05052640(lVar4,3,0);
          uVar2 = *(undefined2 *)(param_1 + lVar6 * 2);
          if (*(int *)(*(long *)(puVar3 + 0x88) + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          uVar5 = FUN_04f83484(local_34,uVar2,*(undefined8 *)(*(long *)(param_4 + 0x38) + 0x20));
          if ((uVar5 & 1) == 0) {
            lVar4 = FUN_05052640(lVar4,4,0);
            param_3 = param_3 + -4;
            goto LAB_035511a8;
          }
LAB_03551350:
          uVar7 = 3;
        }
        else {
System_Array__InternalArray__ICollection_Add<OVRPlugin_BodyJointLocation>:
          uVar7 = 2;
        }
      }
      else {
System_Array__InternalArray__ICollection_Add<OVRPlugin_AppPerfFrameStats>:
        uVar7 = 1;
      }
      lVar4 = FUN_05052640(lVar4,uVar7,0);
    }
LAB_03551360:
    uVar7 = FUN_05052634(lVar4,0);
  }
  return uVar7;
}


