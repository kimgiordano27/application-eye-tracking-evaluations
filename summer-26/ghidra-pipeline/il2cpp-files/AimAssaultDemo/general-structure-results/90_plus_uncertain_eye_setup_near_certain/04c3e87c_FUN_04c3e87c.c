/*
FUNCTION_NAME: FUN_04c3e87c
ENTRY_POINT: 04c3e87c
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 129
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_8;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_4
*/


long * FUN_04c3e87c(undefined1 param_1 [16],undefined4 param_2,long *param_3,long param_4)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  long *plVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  
                    /* catch() { ... } // from try @ 04c3e878 with catch @ 04c3e890 */
  if ((DAT_082567aa & 1) == 0) {
    FUN_0373b518(PTR_DAT_07d990b0);
    FUN_0373b518(PTR_DAT_07d990a8);
    FUN_0373b518(PTR_DAT_07d990c0);
    FUN_0373b518(PTR_DAT_07d990c8);
    DAT_082567aa = 1;
  }
  lVar7 = *(long *)(param_4 + 0x20);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_03775678();
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x60);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_03775678();
  }
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  lVar7 = *(long *)(param_4 + 0x20);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_03775678();
  }
  puVar3 = PTR_DAT_07d990b0;
  plVar8 = (long *)FUN_0440a6e8(*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x58));
  if (param_3 != (long *)0x0) {
    lVar7 = *(long *)puVar3;
    bVar1 = *(byte *)(lVar7 + 0x130);
    if ((bVar1 <= *(byte *)(*param_3 + 0x130)) &&
       (*(long *)(*(long *)(*param_3 + 200) + (ulong)bVar1 * 8 + -8) == lVar7)) {
      lVar7 = param_3[7];
      goto joined_r0x04c3e968;
    }
  }
  lVar7 = 0;
joined_r0x04c3e968:
  if (plVar8 != (long *)0x0) {
    plVar8[7] = lVar7;
    thunk_FUN_037aeb94();
    puVar2 = PTR_DAT_07d990c8;
    if (param_3 == (long *)0x0) {
      FUN_078372c8(plVar8,0,0);
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    lVar7 = *(long *)puVar3;
    bVar1 = *(byte *)(lVar7 + 0x130);
    if ((*(byte *)(*param_3 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*param_3 + 200) + (ulong)bVar1 * 8 + -8) != lVar7)) {
      uVar11 = 0;
    }
    else {
      uVar11 = FUN_07833964(param_3,0);
    }
    FUN_078372c8(plVar8,uVar11,0);
    lVar7 = *param_3;
    uVar13 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)puVar2) {
          puVar9 = (undefined8 *)(lVar7 + (long)(*piVar14 + 0x13) * 0x10 + 0x138);
          goto LAB_04c3ea10;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar9 = (undefined8 *)FUN_0377596c(param_3,*(long *)puVar2,0x13);
LAB_04c3ea10:
    uVar4 = (*(code *)*puVar9)(param_3,puVar9[1]);
    if ((*(byte *)(*(long *)(param_4 + 0x20) + 0x135) & 1) == 0) {
      FUN_03775678(*(long *)(param_4 + 0x20));
    }
    *(undefined4 *)((long)plVar8 + 100) = uVar4;
    lVar7 = *param_3;
    uVar13 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)puVar2) {
          puVar9 = (undefined8 *)(lVar7 + (long)(*piVar14 + 5) * 0x10 + 0x138);
          goto FUN_04c3ea88;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar9 = (undefined8 *)FUN_0377596c(param_3,*(long *)puVar2,5);
FUN_04c3ea88:
    uVar15 = (*(code *)*puVar9)(param_3,puVar9[1]);
    uVar4 = param_2;
    if ((*(byte *)(*(long *)(param_4 + 0x20) + 0x135) & 1) == 0) {
      FUN_03775678();
    }
    *(undefined4 *)(plVar8 + 0xd) = uVar15;
    *(undefined4 *)((long)plVar8 + 0x6c) = param_2;
    lVar7 = *param_3;
    uVar13 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)puVar2) {
          puVar9 = (undefined8 *)(lVar7 + (long)(*piVar14 + 5) * 0x10 + 0x138);
          goto LAB_04c3eb00;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar9 = (undefined8 *)FUN_0377596c(param_3,*(long *)puVar2,5);
LAB_04c3eb00:
    uVar16 = (*(code *)*puVar9)(param_3,puVar9[1]);
    uVar15 = uVar4;
    if ((*(byte *)(*(long *)(param_4 + 0x20) + 0x135) & 1) == 0) {
      FUN_03775678();
    }
    *(undefined4 *)(plVar8 + 0xe) = uVar16;
    *(undefined4 *)((long)plVar8 + 0x74) = uVar4;
    lVar7 = *param_3;
    uVar13 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)puVar2) {
          puVar9 = (undefined8 *)(lVar7 + (long)(*piVar14 + 7) * 0x10 + 0x138);
          goto LAB_04c3eb78;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar9 = (undefined8 *)FUN_0377596c(param_3,*(long *)puVar2,7);
LAB_04c3eb78:
    uVar4 = (*(code *)*puVar9)(param_3,puVar9[1]);
    if ((*(byte *)(*(long *)(param_4 + 0x20) + 0x135) & 1) == 0) {
      FUN_03775678();
    }
    *(undefined4 *)(plVar8 + 0xf) = uVar4;
    *(undefined4 *)((long)plVar8 + 0x7c) = uVar15;
    lVar7 = *param_3;
    uVar13 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)puVar2) {
          puVar9 = (undefined8 *)(lVar7 + (long)(*piVar14 + 3) * 0x10 + 0x138);
          goto LAB_04c3ebf0;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar9 = (undefined8 *)FUN_0377596c(param_3,*(long *)puVar2,3);
LAB_04c3ebf0:
    iVar5 = (*(code *)*puVar9)(param_3,puVar9[1]);
    if (iVar5 == -1) {
      uVar4 = 0;
    }
    else {
      lVar7 = *param_3;
      uVar13 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)puVar2) {
            puVar9 = (undefined8 *)(lVar7 + (long)(*piVar14 + 3) * 0x10 + 0x138);
            goto Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__get_IsCreated;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar9 = (undefined8 *)FUN_0377596c(param_3,*(long *)puVar2,3);
Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__get_IsCreated:
      uVar4 = (*(code *)*puVar9)(param_3,puVar9[1]);
    }
    if (plVar8 != (long *)0x0) {
      if ((*(byte *)(*(long *)(param_4 + 0x20) + 0x135) & 1) == 0) {
        FUN_03775678();
      }
      *(undefined4 *)((long)plVar8 + 0x84) = uVar4;
      lVar7 = *param_3;
      uVar13 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)puVar2) {
            puVar9 = (undefined8 *)(lVar7 + (long)(*piVar14 + 4) * 0x10 + 0x138);
            goto LAB_04c3ecdc;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar9 = (undefined8 *)FUN_0377596c(param_3,*(long *)puVar2,4);
LAB_04c3ecdc:
      uVar4 = (*(code *)*puVar9)(param_3,puVar9[1]);
      if ((*(byte *)(*(long *)(param_4 + 0x20) + 0x135) & 1) == 0) {
        FUN_03775678(*(long *)(param_4 + 0x20));
      }
      *(undefined4 *)(plVar8 + 0x11) = uVar4;
      lVar7 = *param_3;
      uVar13 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)puVar2) {
            puVar9 = (undefined8 *)(lVar7 + (long)(*piVar14 + 9) * 0x10 + 0x138);
            goto LAB_04c3ed54;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar9 = (undefined8 *)FUN_0377596c(param_3,*(long *)puVar2,9);
LAB_04c3ed54:
      puVar3 = PTR_DAT_07d990c0;
      uVar4 = (*(code *)*puVar9)(param_3,puVar9[1]);
      if ((*(byte *)(*(long *)(param_4 + 0x20) + 0x135) & 1) == 0) {
        FUN_03775678(*(long *)(param_4 + 0x20));
      }
      *(undefined4 *)(plVar8 + 0x10) = uVar4;
      plVar10 = (long *)thunk_FUN_037787d0(param_3,*(undefined8 *)puVar3);
      puVar2 = PTR_DAT_07d990a8;
      if (plVar10 != (long *)0x0) {
        lVar12 = *plVar10;
        lVar7 = *(long *)puVar3;
        uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == lVar7) {
              puVar9 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_04c3edec;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar9 = (undefined8 *)FUN_0377596c(plVar10,lVar7,0);
LAB_04c3edec:
        uVar6 = (*(code *)*puVar9)(plVar10,puVar9[1]);
        lVar12 = *plVar8;
        lVar7 = *(long *)puVar2;
        uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == lVar7) {
              puVar9 = (undefined8 *)(lVar12 + (long)(*piVar14 + 1) * 0x10 + 0x138);
              goto LAB_04c3ee4c;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar9 = (undefined8 *)FUN_0377596c(plVar8,lVar7,1);
LAB_04c3ee4c:
        (*(code *)*puVar9)(plVar8,uVar6 & 1,puVar9[1]);
        lVar12 = *plVar8;
        lVar7 = *(long *)puVar2;
        uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == lVar7) {
              puVar9 = (undefined8 *)(lVar12 + (long)(*piVar14 + 3) * 0x10 + 0x138);
              goto Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__CopyTo;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar9 = (undefined8 *)FUN_0377596c(plVar8,lVar7,3);
Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__CopyTo:
        (*(code *)*puVar9)(plVar8,param_3,puVar9[1]);
      }
      return plVar8;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


