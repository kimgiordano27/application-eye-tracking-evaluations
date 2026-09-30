/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$Copy
ENTRY_POINT: 04c3e3b4
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 129
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_8;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_4
*/


long * Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__Copy
                 (undefined1 param_1 [16],undefined4 param_2,long param_3)

{
  byte bVar1;
  undefined *puVar2;
  undefined4 uVar3;
  uint uVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long *unaff_x20;
  long unaff_x21;
  undefined4 uVar12;
  undefined4 uVar13;
  
  if ((*(byte *)(param_3 + 0x135) & 1) == 0) {
    param_3 = FUN_03775678();
  }
  if (*(int *)(param_3 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  if (unaff_x20 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_07d990b0 + 0x130);
    if (bVar1 <= *(byte *)(*unaff_x20 + 0x130)) {
      plVar6 = unaff_x20;
      if (*(long *)(*(long *)(*unaff_x20 + 200) + (ulong)bVar1 * 8 + -8) !=
          *(long *)PTR_DAT_07d990b0) {
        plVar6 = (long *)0x0;
      }
      goto LAB_04c3e414;
    }
  }
  plVar6 = (long *)0x0;
LAB_04c3e414:
  lVar5 = *(long *)(unaff_x21 + 0x20);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_03775678();
  }
  plVar6 = (long *)FUN_0440a7c4(plVar6,*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x80));
  puVar2 = PTR_DAT_07d985e8;
  if (unaff_x20 != (long *)0x0) {
    lVar5 = *unaff_x20;
    uVar10 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_07d985e8) {
          puVar7 = (undefined8 *)(lVar5 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_04c3e490;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar7 = (undefined8 *)FUN_0377596c();
LAB_04c3e490:
    uVar3 = (*(code *)*puVar7)();
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
      FUN_03775678();
    }
    *(undefined4 *)((long)plVar6 + 100) = uVar3;
    lVar5 = *unaff_x20;
    uVar10 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
          puVar7 = (undefined8 *)(lVar5 + (long)(*piVar11 + 1) * 0x10 + 0x138);
          goto Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__CopySafe;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar7 = (undefined8 *)FUN_0377596c();
Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__CopySafe:
    uVar12 = (*(code *)*puVar7)();
    uVar3 = param_2;
    if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
      FUN_03775678();
    }
    *(undefined4 *)(plVar6 + 0xd) = uVar12;
    *(undefined4 *)((long)plVar6 + 0x6c) = param_2;
    lVar5 = *unaff_x20;
    uVar10 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
          puVar7 = (undefined8 *)(lVar5 + (long)(*piVar11 + 1) * 0x10 + 0x138);
          goto LAB_04c3e580;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar7 = (undefined8 *)FUN_0377596c();
LAB_04c3e580:
    uVar13 = (*(code *)*puVar7)();
    uVar12 = uVar3;
    if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
      FUN_03775678();
    }
    *(undefined4 *)(plVar6 + 0xe) = uVar13;
    *(undefined4 *)((long)plVar6 + 0x74) = uVar3;
    lVar5 = *unaff_x20;
    uVar10 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
          puVar7 = (undefined8 *)(lVar5 + (long)(*piVar11 + 3) * 0x10 + 0x138);
          goto LAB_04c3e5f8;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar7 = (undefined8 *)FUN_0377596c();
LAB_04c3e5f8:
    uVar3 = (*(code *)*puVar7)();
    if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
      FUN_03775678();
    }
    *(undefined4 *)(plVar6 + 0xf) = uVar3;
    *(undefined4 *)((long)plVar6 + 0x7c) = uVar12;
    lVar5 = *unaff_x20;
    uVar10 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
          puVar7 = (undefined8 *)(lVar5 + (long)(*piVar11 + 5) * 0x10 + 0x138);
          goto LAB_04c3e670;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar7 = (undefined8 *)FUN_0377596c();
LAB_04c3e670:
    uVar3 = (*(code *)*puVar7)();
    if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
      FUN_03775678(*(long *)(unaff_x21 + 0x20));
    }
    *(undefined4 *)((long)plVar6 + 0x84) = uVar3;
    lVar5 = *unaff_x20;
    uVar10 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
          puVar7 = (undefined8 *)(lVar5 + (long)(*piVar11 + 6) * 0x10 + 0x138);
          goto LAB_04c3e6e8;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar7 = (undefined8 *)FUN_0377596c();
LAB_04c3e6e8:
    uVar3 = (*(code *)*puVar7)();
    if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
      FUN_03775678(*(long *)(unaff_x21 + 0x20));
    }
    *(undefined4 *)(plVar6 + 0x11) = uVar3;
    lVar5 = *unaff_x20;
    uVar10 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
          puVar7 = (undefined8 *)(lVar5 + (long)(*piVar11 + 4) * 0x10 + 0x138);
          goto LAB_04c3e760;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar7 = (undefined8 *)FUN_0377596c();
LAB_04c3e760:
    puVar2 = PTR_DAT_07d990a8;
    uVar3 = (*(code *)*puVar7)();
    if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
      FUN_03775678(*(long *)(unaff_x21 + 0x20));
    }
    *(undefined4 *)(plVar6 + 0x10) = uVar3;
    plVar8 = (long *)thunk_FUN_037787d0();
    if (plVar8 != (long *)0x0) {
      lVar9 = *plVar8;
      lVar5 = *(long *)puVar2;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == lVar5) {
            puVar7 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_04c3e7f0;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar7 = (undefined8 *)FUN_0377596c(plVar8,lVar5,0);
LAB_04c3e7f0:
      uVar4 = (*(code *)*puVar7)(plVar8,puVar7[1]);
      lVar9 = *plVar6;
      lVar5 = *(long *)puVar2;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == lVar5) {
            puVar7 = (undefined8 *)(lVar9 + (long)(*piVar11 + 1) * 0x10 + 0x138);
            goto LAB_04c3e850;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar7 = (undefined8 *)FUN_0377596c(plVar6,lVar5,1);
LAB_04c3e850:
      (*(code *)*puVar7)(plVar6,uVar4 & 1,puVar7[1]);
    }
  }
  return plVar6;
}


