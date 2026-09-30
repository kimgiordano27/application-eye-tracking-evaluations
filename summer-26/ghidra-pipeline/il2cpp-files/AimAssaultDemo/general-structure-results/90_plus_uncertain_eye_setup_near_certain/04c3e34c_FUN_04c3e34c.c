/*
FUNCTION_NAME: FUN_04c3e34c
ENTRY_POINT: 04c3e34c
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 115
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


long * FUN_04c3e34c(undefined1 param_1 [16],undefined4 param_2,long *param_3,long param_4)

{
  byte bVar1;
  undefined *puVar2;
  undefined4 uVar3;
  uint uVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  ulong uVar9;
  int *piVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  
  if ((DAT_082567a9 & 1) == 0) {
    FUN_0373b518(PTR_DAT_07d990b0);
    FUN_0373b518(PTR_DAT_07d990a8);
    FUN_0373b518(PTR_DAT_07d985e8);
    DAT_082567a9 = 1;
  }
  lVar5 = *(long *)(param_4 + 0x20);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_03775678();
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x60);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_03775678();
  }
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  if (param_3 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_07d990b0 + 0x130);
    if (bVar1 <= *(byte *)(*param_3 + 0x130)) {
      plVar6 = param_3;
      if (*(long *)(*(long *)(*param_3 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_07d990b0)
      {
        plVar6 = (long *)0x0;
      }
      goto LAB_04c3e414;
    }
  }
  plVar6 = (long *)0x0;
LAB_04c3e414:
  lVar5 = *(long *)(param_4 + 0x20);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_03775678();
  }
  plVar6 = (long *)FUN_0440a7c4(plVar6,*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x80));
  puVar2 = PTR_DAT_07d985e8;
  if (param_3 != (long *)0x0) {
    lVar5 = *param_3;
    uVar9 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_07d985e8) {
          puVar7 = (undefined8 *)(lVar5 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_04c3e490;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar7 = (undefined8 *)FUN_0377596c(param_3,*(long *)PTR_DAT_07d985e8,0);
LAB_04c3e490:
    uVar3 = (*(code *)*puVar7)(param_3,puVar7[1]);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    if ((*(byte *)(*(long *)(param_4 + 0x20) + 0x135) & 1) == 0) {
      FUN_03775678();
    }
    *(undefined4 *)((long)plVar6 + 100) = uVar3;
    lVar5 = *param_3;
    uVar9 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
          puVar7 = (undefined8 *)(lVar5 + (long)(*piVar10 + 1) * 0x10 + 0x138);
          goto Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__CopySafe;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar7 = (undefined8 *)FUN_0377596c(param_3,*(long *)puVar2,1);
Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__CopySafe:
    uVar11 = (*(code *)*puVar7)(param_3,puVar7[1]);
    uVar3 = param_2;
    if ((*(byte *)(*(long *)(param_4 + 0x20) + 0x135) & 1) == 0) {
      FUN_03775678();
    }
    *(undefined4 *)(plVar6 + 0xd) = uVar11;
    *(undefined4 *)((long)plVar6 + 0x6c) = param_2;
    lVar5 = *param_3;
    uVar9 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
          puVar7 = (undefined8 *)(lVar5 + (long)(*piVar10 + 1) * 0x10 + 0x138);
          goto LAB_04c3e580;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar7 = (undefined8 *)FUN_0377596c(param_3,*(long *)puVar2,1);
LAB_04c3e580:
    uVar12 = (*(code *)*puVar7)(param_3,puVar7[1]);
    uVar11 = uVar3;
    if ((*(byte *)(*(long *)(param_4 + 0x20) + 0x135) & 1) == 0) {
      FUN_03775678();
    }
    *(undefined4 *)(plVar6 + 0xe) = uVar12;
    *(undefined4 *)((long)plVar6 + 0x74) = uVar3;
    lVar5 = *param_3;
    uVar9 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
          puVar7 = (undefined8 *)(lVar5 + (long)(*piVar10 + 3) * 0x10 + 0x138);
          goto LAB_04c3e5f8;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar7 = (undefined8 *)FUN_0377596c(param_3,*(long *)puVar2,3);
LAB_04c3e5f8:
    uVar3 = (*(code *)*puVar7)(param_3,puVar7[1]);
    if ((*(byte *)(*(long *)(param_4 + 0x20) + 0x135) & 1) == 0) {
      FUN_03775678();
    }
    *(undefined4 *)(plVar6 + 0xf) = uVar3;
    *(undefined4 *)((long)plVar6 + 0x7c) = uVar11;
    lVar5 = *param_3;
    uVar9 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
          puVar7 = (undefined8 *)(lVar5 + (long)(*piVar10 + 5) * 0x10 + 0x138);
          goto LAB_04c3e670;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar7 = (undefined8 *)FUN_0377596c(param_3,*(long *)puVar2,5);
LAB_04c3e670:
    uVar3 = (*(code *)*puVar7)(param_3,puVar7[1]);
    if ((*(byte *)(*(long *)(param_4 + 0x20) + 0x135) & 1) == 0) {
      FUN_03775678(*(long *)(param_4 + 0x20));
    }
    *(undefined4 *)((long)plVar6 + 0x84) = uVar3;
    lVar5 = *param_3;
    uVar9 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
          puVar7 = (undefined8 *)(lVar5 + (long)(*piVar10 + 6) * 0x10 + 0x138);
          goto LAB_04c3e6e8;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar7 = (undefined8 *)FUN_0377596c(param_3,*(long *)puVar2,6);
LAB_04c3e6e8:
    uVar3 = (*(code *)*puVar7)(param_3,puVar7[1]);
    if ((*(byte *)(*(long *)(param_4 + 0x20) + 0x135) & 1) == 0) {
      FUN_03775678(*(long *)(param_4 + 0x20));
    }
    *(undefined4 *)(plVar6 + 0x11) = uVar3;
    lVar5 = *param_3;
    uVar9 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
          puVar7 = (undefined8 *)(lVar5 + (long)(*piVar10 + 4) * 0x10 + 0x138);
          goto LAB_04c3e760;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar7 = (undefined8 *)FUN_0377596c(param_3,*(long *)puVar2,4);
LAB_04c3e760:
    puVar2 = PTR_DAT_07d990a8;
    uVar3 = (*(code *)*puVar7)(param_3,puVar7[1]);
    if ((*(byte *)(*(long *)(param_4 + 0x20) + 0x135) & 1) == 0) {
      FUN_03775678(*(long *)(param_4 + 0x20));
    }
    *(undefined4 *)(plVar6 + 0x10) = uVar3;
    plVar8 = (long *)thunk_FUN_037787d0(param_3,*(undefined8 *)puVar2);
    if (plVar8 != (long *)0x0) {
      lVar5 = *plVar8;
      uVar9 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
            puVar7 = (undefined8 *)(lVar5 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_04c3e7f0;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar7 = (undefined8 *)FUN_0377596c(plVar8,*(long *)puVar2,0);
LAB_04c3e7f0:
      uVar4 = (*(code *)*puVar7)(plVar8,puVar7[1]);
      lVar5 = *plVar6;
      uVar9 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
            puVar7 = (undefined8 *)(lVar5 + (long)(*piVar10 + 1) * 0x10 + 0x138);
            goto LAB_04c3e850;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar7 = (undefined8 *)FUN_0377596c(plVar6,*(long *)puVar2,1);
LAB_04c3e850:
      (*(code *)*puVar7)(plVar6,uVar4 & 1,puVar7[1]);
    }
  }
  return plVar6;
}


