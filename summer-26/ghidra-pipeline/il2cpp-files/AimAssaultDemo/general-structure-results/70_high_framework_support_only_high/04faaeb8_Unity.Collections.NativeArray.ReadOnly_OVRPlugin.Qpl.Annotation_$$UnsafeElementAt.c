/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.Qpl.Annotation>$$UnsafeElementAt
ENTRY_POINT: 04faaeb8
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray_ReadOnly<OVRPlugin_Qpl_Annotation>__UnsafeElementAt
               (undefined1 param_1 [16],undefined4 param_2)

{
  ushort uVar1;
  undefined *puVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  undefined8 *puVar6;
  int in_w8;
  ulong uVar7;
  int *piVar8;
  long *unaff_x19;
  long *unaff_x20;
  undefined4 unaff_w22;
  int unaff_w23;
  long *unaff_x24;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  if (in_w8 == 0) {
    thunk_FUN_03798b70();
  }
  if (unaff_w23 == 8) {
    FUN_07841820(unaff_w22,5,0);
  }
  else {
    FUN_0784192c(unaff_w22,5,0);
  }
  lVar5 = *unaff_x19;
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    FUN_03775678();
    lVar5 = *unaff_x19;
  }
  *(undefined1 *)(unaff_x20 + 0x11) = 1;
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    FUN_03775678();
    lVar5 = *unaff_x19;
  }
  *(undefined1 *)((long)unaff_x20 + 100) = 1;
  *(undefined4 *)(unaff_x20 + 0xd) = 0;
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    FUN_03775678();
  }
  *(undefined4 *)((long)unaff_x20 + 0x6c) = 0;
  *(undefined1 *)((long)unaff_x20 + 0x65) = 1;
  if (DAT_08252c50 == '\0') {
    FUN_0373b518(PTR_DAT_07d88538);
    DAT_08252c50 = '\x01';
  }
  puVar2 = PTR_DAT_07d88538;
  uVar11 = **(undefined4 **)(*(long *)PTR_DAT_07d88538 + 0xb8);
  uVar10 = (*(undefined4 **)(*(long *)PTR_DAT_07d88538 + 0xb8))[1];
  if ((*(byte *)(*unaff_x19 + 0x135) & 1) == 0) {
    FUN_03775678();
    cVar3 = DAT_08252c50;
    *(undefined4 *)(unaff_x20 + 0x1a) = uVar11;
    *(undefined4 *)((long)unaff_x20 + 0xd4) = uVar10;
    if (cVar3 == '\0') {
      FUN_0373b518(PTR_DAT_07d88538);
      DAT_08252c50 = '\x01';
    }
  }
  else {
    *(undefined4 *)(unaff_x20 + 0x1a) = uVar11;
    *(undefined4 *)((long)unaff_x20 + 0xd4) = uVar10;
  }
  uVar11 = **(undefined4 **)(*(long *)puVar2 + 0xb8);
  uVar10 = (*(undefined4 **)(*(long *)puVar2 + 0xb8))[1];
  if ((*(byte *)(*unaff_x19 + 0x135) & 1) == 0) {
    FUN_03775678();
  }
  *(undefined4 *)(unaff_x20 + 0x1b) = uVar11;
  *(undefined4 *)((long)unaff_x20 + 0xdc) = uVar10;
  FUN_078372c8();
  iVar4 = FUN_075fd7f0();
  if ((iVar4 == 0) || (iVar4 = FUN_075fd7f0(), iVar4 == 0x1e)) {
    if ((*(byte *)(*unaff_x19 + 0x135) & 1) == 0) {
      FUN_03775678();
    }
    uVar10 = *(undefined4 *)((long)unaff_x20 + 0x7c);
    uVar11 = FUN_075fdb90();
    if (*(int *)(*unaff_x24 + 0xe4) == 0) {
      thunk_FUN_03798b70(*unaff_x24);
    }
    FUN_07841820(uVar10,uVar11,0);
LAB_04fab0a8:
    uVar10 = FUN_075fdb90();
    if ((*(byte *)(*unaff_x19 + 0x135) & 1) == 0) {
      FUN_03775678(*unaff_x19);
    }
LAB_04fab0cc:
    *(undefined4 *)((long)unaff_x20 + 0x8c) = uVar10;
  }
  else {
    iVar4 = FUN_075fd7f0();
    if ((iVar4 == 1) || (iVar4 = FUN_075fd7f0(), iVar4 == 0x1f)) {
      if ((*(byte *)(*unaff_x19 + 0x135) & 1) == 0) {
        FUN_03775678();
      }
      uVar10 = *(undefined4 *)((long)unaff_x20 + 0x7c);
      uVar11 = FUN_075fdb90();
      if (*(int *)(*unaff_x24 + 0xe4) == 0) {
        thunk_FUN_03798b70(*unaff_x24);
      }
      FUN_0784192c(uVar10,uVar11,0);
      goto LAB_04fab0a8;
    }
    iVar4 = FUN_075fd7f0();
    if ((iVar4 == 2) || (iVar4 = FUN_075fd7f0(), iVar4 == 0x20)) {
      if ((*(byte *)(*unaff_x19 + 0x135) & 1) == 0) {
        FUN_03775678();
      }
      uVar10 = 0xffffffff;
      goto LAB_04fab0cc;
    }
  }
  if ((*(byte *)(*unaff_x19 + 0x135) & 1) == 0) {
    FUN_03775678();
  }
  uVar10 = *(undefined4 *)((long)unaff_x20 + 0x7c);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  uVar10 = FUN_07841b58(uVar10,0);
  if ((*(byte *)(*unaff_x19 + 0x135) & 1) == 0) {
    FUN_03775678(*unaff_x19);
  }
  *(undefined4 *)(unaff_x20 + 0x12) = uVar10;
  uVar11 = FUN_075fd87c();
  uVar10 = param_2;
  if ((*(byte *)(*unaff_x19 + 0x135) & 1) == 0) {
    FUN_03775678();
  }
  *(undefined4 *)((long)unaff_x20 + 0x94) = uVar11;
  *(undefined4 *)(unaff_x20 + 0x13) = param_2;
  *(undefined4 *)((long)unaff_x20 + 0x9c) = 0;
  uVar9 = FUN_075fd87c();
  uVar11 = uVar10;
  if ((*(byte *)(*unaff_x19 + 0x135) & 1) == 0) {
    FUN_03775678();
  }
  *(undefined4 *)(unaff_x20 + 0x14) = uVar9;
  *(undefined4 *)((long)unaff_x20 + 0xa4) = uVar10;
  *(undefined4 *)(unaff_x20 + 0x15) = 0;
  uVar9 = FUN_075fd9c0();
  uVar10 = uVar11;
  if ((*(byte *)(*unaff_x19 + 0x135) & 1) == 0) {
    FUN_03775678();
  }
  *(undefined4 *)((long)unaff_x20 + 0xac) = uVar9;
  *(undefined4 *)(unaff_x20 + 0x16) = uVar11;
  *(undefined4 *)((long)unaff_x20 + 0xb4) = 0;
  uVar11 = FUN_075fdf8c();
  if ((*(byte *)(*unaff_x19 + 0x135) & 1) == 0) {
    FUN_03775678(*unaff_x19);
  }
  *(undefined4 *)((long)unaff_x20 + 0xbc) = uVar11;
  uVar11 = FUN_075fdc1c();
  if ((*(byte *)(*unaff_x19 + 0x135) & 1) == 0) {
    FUN_03775678(*unaff_x19);
  }
  *(undefined4 *)(unaff_x20 + 0x1c) = uVar11;
  uVar11 = FUN_075fde5c();
  if ((*(byte *)(*unaff_x19 + 0x135) & 1) == 0) {
    FUN_03775678();
  }
  *(undefined1 *)(unaff_x20 + 0xe) = 1;
  *(undefined4 *)((long)unaff_x20 + 0x74) = uVar11;
  *(undefined4 *)(unaff_x20 + 0xf) = uVar10;
  uVar10 = FUN_075fdf00();
  if ((*(byte *)(*unaff_x19 + 0x135) & 1) == 0) {
    FUN_03775678(*unaff_x19);
  }
  *(undefined4 *)((long)unaff_x20 + 0xcc) = uVar10;
  uVar10 = FUN_075fddd0();
  if ((*(byte *)(*unaff_x19 + 0x135) & 1) == 0) {
    FUN_03775678();
  }
  *(undefined4 *)(unaff_x20 + 0x19) = uVar10;
  iVar4 = FUN_075fdb04();
  if ((iVar4 == 1) || (iVar4 == 2)) {
    uVar10 = FUN_075fdd44();
    if ((*(byte *)(*unaff_x19 + 0x135) & 1) != 0) goto LAB_04fab2a8;
  }
  else {
    uVar1 = *(ushort *)(*unaff_x19 + 0x135);
    if ((uVar1 & 1) == 0) {
      FUN_03775678();
      uVar1 = *(ushort *)(*unaff_x19 + 0x135);
    }
    uVar10 = 0;
    if ((int)unaff_x20[0x12] != 0) {
      uVar10 = 0x3f000000;
    }
    if ((uVar1 & 1) != 0) goto LAB_04fab2a8;
  }
  FUN_03775678();
LAB_04fab2a8:
  *(undefined4 *)(unaff_x20 + 0x18) = uVar10;
  puVar2 = PTR_DAT_07d990c0;
  if ((*(byte *)(*unaff_x19 + 0x135) & 1) == 0) {
    FUN_03775678();
  }
  lVar5 = *unaff_x20;
  *(undefined4 *)((long)unaff_x20 + 0xc4) = 0;
  uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
        puVar6 = (undefined8 *)(lVar5 + (long)(*piVar8 + 1) * 0x10 + 0x138);
        goto LAB_04fab354;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar6 = (undefined8 *)FUN_0377596c();
LAB_04fab354:
  (*(code *)*puVar6)();
  return;
}


