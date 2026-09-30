/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$Equals
ENTRY_POINT: 04c3e058
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 109
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


long * Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__Equals
                 (undefined1 param_1 [16],undefined4 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x19;
  long unaff_x20;
  undefined4 uVar9;
  undefined4 uVar10;
  
  lVar4 = FUN_03775678();
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  lVar4 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_03775678();
  }
  plVar5 = (long *)FUN_0440a6e8(*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x58));
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  FUN_078372c8();
  if (unaff_x20 != 0) {
    uVar3 = FUN_075fdc1c();
    if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
      FUN_03775678(*(long *)(unaff_x19 + 0x20));
    }
    *(undefined4 *)((long)plVar5 + 100) = uVar3;
    uVar9 = FUN_075fd87c();
    uVar3 = param_2;
    if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
      FUN_03775678();
    }
    *(undefined4 *)(plVar5 + 0xd) = uVar9;
    *(undefined4 *)((long)plVar5 + 0x6c) = param_2;
    uVar10 = FUN_075fd87c();
    uVar9 = uVar3;
    if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
      FUN_03775678();
    }
    *(undefined4 *)(plVar5 + 0xe) = uVar10;
    *(undefined4 *)((long)plVar5 + 0x74) = uVar3;
    uVar3 = FUN_075fd9c0();
    if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
      FUN_03775678();
    }
    puVar2 = PTR_DAT_07d985f0;
    *(undefined4 *)(plVar5 + 0xf) = uVar3;
    *(undefined4 *)((long)plVar5 + 0x7c) = uVar9;
    uVar3 = FUN_075fdb90();
    if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
      FUN_03775678(*(long *)(unaff_x19 + 0x20));
    }
    *(undefined4 *)((long)plVar5 + 0x84) = uVar3;
    puVar1 = PTR_DAT_07d96318;
    lVar4 = *(long *)puVar2;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar4 = *(long *)puVar2;
    }
    uVar3 = *(undefined4 *)(*(long *)(lVar4 + 0xb8) + 8);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70(*(long *)puVar1);
    }
    uVar3 = FUN_07841b58(uVar3,0);
    if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
      FUN_03775678(*(long *)(unaff_x19 + 0x20));
    }
    puVar2 = PTR_DAT_07d990a8;
    *(undefined4 *)(plVar5 + 0x11) = uVar3;
    uVar3 = FUN_075fdf8c();
    if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
      FUN_03775678(*(long *)(unaff_x19 + 0x20));
    }
    lVar4 = *plVar5;
    *(undefined4 *)(plVar5 + 0x10) = uVar3;
    uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
          puVar6 = (undefined8 *)(lVar4 + (long)(*piVar8 + 1) * 0x10 + 0x138);
          goto LAB_04c3e24c;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar6 = (undefined8 *)FUN_0377596c(plVar5,*(long *)puVar2,1);
LAB_04c3e24c:
    (*(code *)*puVar6)(plVar5,1,puVar6[1]);
  }
  return plVar5;
}


