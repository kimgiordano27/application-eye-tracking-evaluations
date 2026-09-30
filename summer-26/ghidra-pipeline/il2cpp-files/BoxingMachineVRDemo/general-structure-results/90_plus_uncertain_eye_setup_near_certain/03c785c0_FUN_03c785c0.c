/*
FUNCTION_NAME: FUN_03c785c0
ENTRY_POINT: 03c785c0
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 99
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void FUN_03c785c0(long *param_1,long param_2)

{
  ushort uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  if ((DAT_06b74c4c & 1) == 0) {
    FUN_02d6084c(PTR_DAT_06767520);
    FUN_02d6084c(PTR_DAT_06769c38);
    DAT_06b74c4c = 1;
  }
  puVar2 = PTR_DAT_06769c38;
  if ((char)param_1[4] != '\0') {
    if (*(int *)(*(long *)PTR_DAT_06769c38 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    FUN_0508773c(0);
  }
  *(undefined1 *)(param_1 + 4) = 1;
  if (*param_1 == 0) {
    lVar3 = *(long *)puVar2;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar3 = *(long *)puVar2;
    }
    lVar3 = FUN_02d99e8c(param_1,**(undefined8 **)(lVar3 + 0xb8),0);
    if (lVar3 == 0) {
      return;
    }
  }
  lVar3 = *(long *)(param_2 + 0x20);
  lVar6 = param_1[2];
  if (lVar6 == 0) {
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02d9a2e0();
    }
    Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>___ctor
              (param_1,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x68));
    return;
  }
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02d9a2e0();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x30);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02d9a2e0();
  }
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  lVar3 = *(long *)(param_2 + 0x20);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02d9a2e0();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x30);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02d9a2e0();
  }
  puVar2 = PTR_DAT_06767520;
  lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x10);
  if (lVar3 == 0) {
    lVar3 = *(long *)(param_2 + 0x20);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02d9a2e0();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x30);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02d9a2e0();
    }
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    lVar3 = *(long *)(param_2 + 0x20);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02d9a2e0();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x30);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02d9a2e0();
    }
    lVar4 = *(long *)(param_2 + 0x20);
    uVar7 = **(undefined8 **)(lVar3 + 0xb8);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02d9a2e0(lVar4);
    }
    if ((*(byte *)(*(long *)(*(long *)(lVar4 + 0xc0) + 0x40) + 0x135) & 1) == 0) {
      FUN_02d9a2e0();
    }
    lVar3 = thunk_FUN_02d9d534();
    lVar5 = *(long *)(param_2 + 0x20);
    uVar1 = *(ushort *)(lVar5 + 0x135);
    lVar4 = lVar5;
    if ((uVar1 & 1) == 0) {
      lVar5 = FUN_02d9a2e0(lVar5);
      uVar1 = *(ushort *)(*(long *)(param_2 + 0x20) + 0x135);
      lVar4 = *(long *)(param_2 + 0x20);
    }
    uVar8 = *(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x48);
    if ((uVar1 & 1) == 0) {
      lVar4 = FUN_02d9a2e0(lVar4);
    }
    FUN_04692afc(lVar3,uVar7,uVar8,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x50));
    lVar4 = *(long *)(param_2 + 0x20);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02d9a2e0();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x30);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02d9a2e0();
    }
    *(long *)(*(long *)(lVar4 + 0xb8) + 0x10) = lVar3;
    lVar4 = *(long *)(param_2 + 0x20);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02d9a2e0();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x30);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02d9a2e0();
    }
    thunk_FUN_02dd37b4(*(long *)(lVar4 + 0xb8) + 0x10,lVar3);
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  lVar4 = *(long *)(param_2 + 0x20);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02d9a2e0();
  }
  FUN_033c4f60(lVar6,lVar3,param_1,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x58));
  return;
}


