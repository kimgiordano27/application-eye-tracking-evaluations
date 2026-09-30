/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$Copy
ENTRY_POINT: 04c3e494
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 117
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_8;functionality_eye_api_context_without_clear_sink_hits_4
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__Copy
               (code *param_1,undefined1 param_2 [16],undefined4 param_3)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long *unaff_x23;
  undefined4 uVar9;
  undefined4 uVar10;
  
  uVar2 = (*param_1)();
  if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 04c3e878 to 04d3e87b has its CatchHandler @ 04c3e890 */
    FUN_0373b7b4();
  }
  if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
    FUN_03775678();
  }
  *(undefined4 *)((long)unaff_x19 + 100) = uVar2;
  lVar5 = *unaff_x20;
  uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *unaff_x23) {
        puVar3 = (undefined8 *)(lVar5 + (long)(*piVar8 + 1) * 0x10 + 0x138);
        goto Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__CopySafe;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar3 = (undefined8 *)FUN_0377596c();
Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__CopySafe:
  uVar9 = (*(code *)*puVar3)();
  uVar2 = param_3;
  if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
    FUN_03775678();
  }
  *(undefined4 *)(unaff_x19 + 0xd) = uVar9;
  *(undefined4 *)((long)unaff_x19 + 0x6c) = param_3;
  lVar5 = *unaff_x20;
  uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *unaff_x23) {
        puVar3 = (undefined8 *)(lVar5 + (long)(*piVar8 + 1) * 0x10 + 0x138);
        goto LAB_04c3e580;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar3 = (undefined8 *)FUN_0377596c();
LAB_04c3e580:
  uVar10 = (*(code *)*puVar3)();
  uVar9 = uVar2;
  if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
    FUN_03775678();
  }
  *(undefined4 *)(unaff_x19 + 0xe) = uVar10;
  *(undefined4 *)((long)unaff_x19 + 0x74) = uVar2;
  lVar5 = *unaff_x20;
  uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *unaff_x23) {
        puVar3 = (undefined8 *)(lVar5 + (long)(*piVar8 + 3) * 0x10 + 0x138);
        goto LAB_04c3e5f8;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar3 = (undefined8 *)FUN_0377596c();
LAB_04c3e5f8:
  uVar2 = (*(code *)*puVar3)();
  if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
    FUN_03775678();
  }
  *(undefined4 *)(unaff_x19 + 0xf) = uVar2;
  *(undefined4 *)((long)unaff_x19 + 0x7c) = uVar9;
  lVar5 = *unaff_x20;
  uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *unaff_x23) {
        puVar3 = (undefined8 *)(lVar5 + (long)(*piVar8 + 5) * 0x10 + 0x138);
        goto LAB_04c3e670;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar3 = (undefined8 *)FUN_0377596c();
LAB_04c3e670:
  uVar2 = (*(code *)*puVar3)();
  if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
    FUN_03775678(*(long *)(unaff_x21 + 0x20));
  }
  *(undefined4 *)((long)unaff_x19 + 0x84) = uVar2;
  lVar5 = *unaff_x20;
  uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *unaff_x23) {
        puVar3 = (undefined8 *)(lVar5 + (long)(*piVar8 + 6) * 0x10 + 0x138);
        goto LAB_04c3e6e8;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar3 = (undefined8 *)FUN_0377596c();
LAB_04c3e6e8:
  uVar2 = (*(code *)*puVar3)();
  if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
    FUN_03775678(*(long *)(unaff_x21 + 0x20));
  }
  *(undefined4 *)(unaff_x19 + 0x11) = uVar2;
  lVar5 = *unaff_x20;
  uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *unaff_x23) {
        puVar3 = (undefined8 *)(lVar5 + (long)(*piVar8 + 4) * 0x10 + 0x138);
        goto LAB_04c3e760;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar3 = (undefined8 *)FUN_0377596c();
LAB_04c3e760:
  puVar1 = PTR_DAT_07d990a8;
  uVar2 = (*(code *)*puVar3)();
  if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
    FUN_03775678(*(long *)(unaff_x21 + 0x20));
  }
  *(undefined4 *)(unaff_x19 + 0x10) = uVar2;
  plVar4 = (long *)thunk_FUN_037787d0();
  if (plVar4 != (long *)0x0) {
    lVar6 = *plVar4;
    lVar5 = *(long *)puVar1;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar5) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_04c3e7f0;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_0377596c(plVar4,lVar5,0);
LAB_04c3e7f0:
    (*(code *)*puVar3)(plVar4,puVar3[1]);
    lVar5 = *unaff_x19;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
          puVar3 = (undefined8 *)(lVar5 + (long)(*piVar8 + 1) * 0x10 + 0x138);
          goto LAB_04c3e850;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_0377596c();
LAB_04c3e850:
    (*(code *)*puVar3)();
  }
  return;
}


