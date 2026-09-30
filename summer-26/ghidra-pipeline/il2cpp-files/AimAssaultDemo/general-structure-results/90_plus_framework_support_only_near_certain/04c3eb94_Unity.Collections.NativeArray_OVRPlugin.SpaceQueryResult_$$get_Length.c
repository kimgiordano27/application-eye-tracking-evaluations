/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$get_Length
ENTRY_POINT: 04c3eb94
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 117
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_12;functionality_eye_api_context_without_clear_sink_hits_6
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__get_Length(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long *unaff_x23;
  undefined4 unaff_s8;
  undefined4 unaff_s9;
  
  if ((param_1 & 1) == 0) {
    FUN_03775678();
  }
  *(undefined4 *)(unaff_x20 + 0xf) = unaff_s8;
  *(undefined4 *)((long)unaff_x20 + 0x7c) = unaff_s9;
  lVar7 = *unaff_x19;
  uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *unaff_x23) {
        puVar5 = (undefined8 *)(lVar7 + (long)(*piVar9 + 3) * 0x10 + 0x138);
        goto LAB_04c3ebf0;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar5 = (undefined8 *)FUN_0377596c();
LAB_04c3ebf0:
  iVar3 = (*(code *)*puVar5)();
  if (iVar3 == -1) {
    uVar4 = 0;
  }
  else {
    lVar7 = *unaff_x19;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *unaff_x23) {
          puVar5 = (undefined8 *)(lVar7 + (long)(*piVar9 + 3) * 0x10 + 0x138);
          goto Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__get_IsCreated;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_0377596c();
Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__get_IsCreated:
    uVar4 = (*(code *)*puVar5)();
  }
  if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
    FUN_03775678();
  }
  *(undefined4 *)((long)unaff_x20 + 0x84) = uVar4;
  lVar7 = *unaff_x19;
  uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *unaff_x23) {
        puVar5 = (undefined8 *)(lVar7 + (long)(*piVar9 + 4) * 0x10 + 0x138);
        goto LAB_04c3ecdc;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar5 = (undefined8 *)FUN_0377596c();
LAB_04c3ecdc:
  uVar4 = (*(code *)*puVar5)();
  if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
    FUN_03775678(*(long *)(unaff_x21 + 0x20));
  }
  *(undefined4 *)(unaff_x20 + 0x11) = uVar4;
  lVar7 = *unaff_x19;
  uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *unaff_x23) {
        puVar5 = (undefined8 *)(lVar7 + (long)(*piVar9 + 9) * 0x10 + 0x138);
        goto LAB_04c3ed54;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar5 = (undefined8 *)FUN_0377596c();
LAB_04c3ed54:
  puVar2 = PTR_DAT_07d990c0;
  uVar4 = (*(code *)*puVar5)();
  if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
    FUN_03775678(*(long *)(unaff_x21 + 0x20));
  }
  *(undefined4 *)(unaff_x20 + 0x10) = uVar4;
  plVar6 = (long *)thunk_FUN_037787d0();
  puVar1 = PTR_DAT_07d990a8;
  if (plVar6 != (long *)0x0) {
    lVar7 = *plVar6;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_04c3edec;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_0377596c(plVar6,*(long *)puVar2,0);
LAB_04c3edec:
    (*(code *)*puVar5)(plVar6,puVar5[1]);
    lVar7 = *unaff_x20;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
          puVar5 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
          goto LAB_04c3ee4c;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_0377596c();
LAB_04c3ee4c:
    (*(code *)*puVar5)();
    lVar7 = *unaff_x20;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
          puVar5 = (undefined8 *)(lVar7 + (long)(*piVar9 + 3) * 0x10 + 0x138);
          goto Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__CopyTo;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_0377596c();
Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__CopyTo:
    (*(code *)*puVar5)();
  }
  return;
}


