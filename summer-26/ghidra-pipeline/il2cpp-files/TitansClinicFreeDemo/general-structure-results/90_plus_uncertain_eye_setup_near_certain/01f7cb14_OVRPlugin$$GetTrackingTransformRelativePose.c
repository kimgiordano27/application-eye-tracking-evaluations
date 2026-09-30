/*
FUNCTION_NAME: OVRPlugin$$GetTrackingTransformRelativePose
ENTRY_POINT: 01f7cb14
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 97
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint * OVRPlugin__GetTrackingTransformRelativePose
                 (long param_1,long param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  int iVar2;
  uint *puVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  long unaff_x23;
  undefined1 auVar8 [16];
  
  if ((*(byte *)(unaff_x23 + 0xdf3) & 1) == 0) {
    thunk_FUN_01279b34(PTR_DAT_027b9da0);
    thunk_FUN_01279b34(PTR_DAT_027ba9f8);
    thunk_FUN_01279b34(PTR_DAT_027b9de8);
    *(undefined1 *)(unaff_x23 + 0xdf3) = 1;
  }
  if ((int)(uint)param_2 < (int)(uint)param_4) {
    return (uint *)0x0;
  }
  if ((uint)param_4 <= (uint)param_2) {
    if ((*(byte *)(*(long *)(*(long *)PTR_DAT_027ba9f8 + 0x20) + 0x135) & 1) == 0) {
      FUN_0122e748();
    }
    if (*(int *)(*(long *)PTR_DAT_027b9da0 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    iVar2 = FUN_01f159d0(param_1 + ((long)(param_2 - param_4 << 0x20) >> 0x1f),param_4 & 0xffffffff,
                         param_3,param_4,0);
    return (uint *)(ulong)(iVar2 == 0);
  }
  auVar8 = FUN_01f877a8();
  uVar4 = auVar8._8_8_;
  puVar3 = auVar8._0_8_;
  if (uVar4 == 0) {
    return puVar3;
  }
  if (uVar4 - 1 < 0x16) {
    switch(uVar4 - 1 & 0xffffffff) {
    case 0:
      *(undefined1 *)puVar3 = 0;
      return puVar3;
    case 1:
      *(undefined2 *)puVar3 = 0;
      return puVar3;
    case 2:
      *(undefined2 *)puVar3 = 0;
      *(undefined1 *)((long)puVar3 + 2) = 0;
      return puVar3;
    case 3:
      *puVar3 = 0;
      return puVar3;
    case 4:
      *puVar3 = 0;
      *(undefined1 *)(puVar3 + 1) = 0;
      return puVar3;
    case 5:
      *puVar3 = 0;
      *(undefined2 *)(puVar3 + 1) = 0;
      return puVar3;
    case 6:
      *puVar3 = 0;
      *(undefined2 *)(puVar3 + 1) = 0;
      *(undefined1 *)((long)puVar3 + 6) = 0;
      return puVar3;
    case 7:
      break;
    case 8:
      puVar3[0] = 0;
      puVar3[1] = 0;
      *(undefined1 *)(puVar3 + 2) = 0;
      return puVar3;
    case 9:
      puVar3[0] = 0;
      puVar3[1] = 0;
      *(undefined2 *)(puVar3 + 2) = 0;
      return puVar3;
    case 10:
      puVar3[0] = 0;
      puVar3[1] = 0;
      *(undefined2 *)(puVar3 + 2) = 0;
      *(undefined1 *)((long)puVar3 + 10) = 0;
      return puVar3;
    case 0xb:
      puVar3[0] = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      return puVar3;
    case 0xc:
      puVar3[0] = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      *(undefined1 *)(puVar3 + 3) = 0;
      return puVar3;
    case 0xd:
      puVar3[0] = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      *(undefined2 *)(puVar3 + 3) = 0;
      return puVar3;
    case 0xe:
      *(undefined8 *)((long)puVar3 + 7) = 0;
      break;
    case 0xf:
      puVar3[2] = 0;
      puVar3[3] = 0;
      break;
    case 0x10:
      puVar3[0] = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      *(undefined1 *)(puVar3 + 4) = 0;
      return puVar3;
    case 0x11:
      puVar3[0] = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      *(undefined2 *)(puVar3 + 4) = 0;
      return puVar3;
    case 0x12:
      puVar3[0] = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      *(undefined4 *)((long)puVar3 + 0xf) = 0;
      return puVar3;
    case 0x13:
      puVar3[0] = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      puVar3[4] = 0;
      return puVar3;
    case 0x14:
      puVar3[0] = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      *(undefined8 *)((long)puVar3 + 0xd) = 0;
      return puVar3;
    case 0x15:
      puVar3[0] = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      *(undefined8 *)((long)puVar3 + 0xe) = 0;
      return puVar3;
    default:
      goto switchD_01f7cc38_default;
    }
    puVar3[0] = 0;
    puVar3[1] = 0;
    return puVar3;
  }
  if (0x1ff < uVar4) {
    puVar3 = (uint *)thunk_FUN_01274650(puVar3,uVar4,0);
    return puVar3;
  }
switchD_01f7cc38_default:
  uVar6 = *puVar3;
  if ((uVar6 & 3) == 0) {
    uVar7 = 0;
  }
  else {
    if ((uVar6 & 1) == 0) {
      uVar7 = 0;
    }
    else {
      *(undefined1 *)puVar3 = 0;
      uVar6 = *puVar3;
      uVar7 = 1;
      if ((uVar6 >> 1 & 1) != 0) goto LAB_01f7cc6c;
    }
    *(undefined2 *)((long)puVar3 + uVar7) = 0;
    uVar7 = uVar7 | 2;
  }
LAB_01f7cc6c:
  if ((uVar6 - 1 >> 2 & 1) == 0) {
    *(undefined4 *)((long)puVar3 + uVar7) = 0;
    uVar7 = uVar7 | 4;
  }
  uVar1 = uVar7;
  do {
    uVar5 = uVar1;
    uVar1 = uVar5 + 0x10;
    *(undefined8 *)((long)puVar3 + uVar5) = 0;
    ((undefined8 *)((long)puVar3 + uVar5))[1] = 0;
  } while (uVar1 <= uVar4 - 0x10);
  uVar6 = (uint)(uVar4 - uVar7);
  if ((uVar6 >> 3 & 1) != 0) {
    *(undefined8 *)((long)puVar3 + uVar1) = 0;
    uVar1 = uVar5 + 0x18;
  }
  if ((uVar6 >> 2 & 1) != 0) {
    *(undefined4 *)((long)puVar3 + uVar1) = 0;
    uVar1 = uVar1 + 4;
  }
  if ((uVar6 >> 1 & 1) != 0) {
    *(undefined2 *)((long)puVar3 + uVar1) = 0;
    uVar1 = uVar1 + 2;
  }
  if ((uVar4 - uVar7 & 1) == 0) {
    return puVar3;
  }
  *(undefined1 *)((long)puVar3 + uVar1) = 0;
  return puVar3;
}


