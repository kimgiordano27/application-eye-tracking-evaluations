/*
FUNCTION_NAME: FUN_075217e4
ENTRY_POINT: 075217e4
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x07521c58) */

void FUN_075217e4(undefined8 param_1,long *param_2,undefined8 param_3,long param_4)

{
  uint uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  undefined8 uVar12;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  if ((DAT_0a5229f6 & 1) == 0) {
    FUN_04447ba8(PTR_DAT_09f1f008);
    FUN_04447ba8(PTR_DAT_09f1f018);
    DAT_0a5229f6 = 1;
  }
  uVar6 = 0;
  if (param_2 != (long *)0x0) {
    uVar6 = param_1;
  }
  local_50 = 0;
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  if (param_2 == (long *)0x0) {
    uVar4 = 0;
    uVar6 = param_1;
  }
  else {
    lVar8 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x48);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_04481fb8(lVar8);
    }
    lVar9 = *param_2;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == lVar8) {
          puVar5 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_075218c0;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_044822ac(param_2,lVar8,0);
LAB_075218c0:
    uVar4 = (*(code *)*puVar5)(param_2,puVar5[1]);
  }
  FUN_07521738(uVar6,uVar4,param_3,**(undefined8 **)(*(long *)(param_4 + 0x20) + 0xc0));
  if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_07a4fbac(1,0);
  }
  uVar6 = thunk_FUN_04457f54(param_2,0);
  uVar12 = *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x58);
  if (*(int *)(*(long *)(PTR_DAT_09f1e5b8 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_044a54b4(*(long *)(PTR_DAT_09f1e5b8 + 0xe0));
  }
  uVar12 = FUN_07a4ce38(uVar12,0);
  uVar10 = FUN_07a5629c(uVar6,uVar12,0);
  lVar8 = *(long *)(*(long *)(param_4 + 0x20) + 0xc0);
  if ((uVar10 & 1) != 0) {
    lVar8 = *(long *)(lVar8 + 0x30);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_04481fb8(lVar8);
    }
    if ((*(byte *)(*param_2 + 0x130) < *(byte *)(lVar8 + 0x130)) ||
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)*(byte *)(lVar8 + 0x130) * 8 + -8) != lVar8)) {
                    /* WARNING: Subroutine does not return */
      FUN_044481e4(param_2);
    }
    uVar1 = *(uint *)(param_2 + 4);
    if ((int)uVar1 < 1) {
      return;
    }
    lVar8 = param_2[3];
    if (lVar8 != 0) {
      uVar10 = 0;
      puVar5 = (undefined8 *)(lVar8 + 0x30);
      do {
        if (*(uint *)(lVar8 + 0x18) <= uVar10) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e4c();
        }
        if (-1 < *(int *)(puVar5 + -2)) {
          local_b0 = puVar5[4];
          uStack_c8 = puVar5[1];
          local_d0 = *puVar5;
          uStack_b8 = puVar5[3];
          uStack_c0 = puVar5[2];
          local_a0 = local_d0;
          uStack_98 = uStack_c8;
          uStack_90 = uStack_c0;
          uStack_88 = uStack_b8;
          local_80 = local_b0;
          FUN_07523178(param_1,puVar5[-1],&local_d0,2,
                       *(undefined8 *)
                        (*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) +
                                                      0x80) + 0x20) + 0xc0) + 0x118));
        }
        uVar10 = uVar10 + 1;
        puVar5 = puVar5 + 7;
      } while (uVar1 != uVar10);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  lVar8 = *(long *)(lVar8 + 0x88);
  if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_04481fb8(lVar8);
  }
  lVar9 = *param_2;
  uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == lVar8) {
        puVar5 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
        goto 
        System_Array_EmptyInternalEnumerator<OVRPlugin_Bone>__System_Collections_IEnumerator_get_Current
        ;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar5 = (undefined8 *)FUN_044822ac(param_2,lVar8,0);
System_Array_EmptyInternalEnumerator<OVRPlugin_Bone>__System_Collections_IEnumerator_get_Current:
  plVar7 = (long *)(*(code *)*puVar5)(param_2,puVar5[1]);
  puVar2 = PTR_DAT_09f1f018;
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  do {
    lVar8 = *plVar7;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
          puVar5 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_07521ae4;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_044822ac(plVar7,*(long *)puVar2,0);
LAB_07521ae4:
    uVar10 = (*(code *)*puVar5)(plVar7,puVar5[1]);
    if ((uVar10 & 1) == 0) break;
    lVar8 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x98);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_04481fb8(lVar8);
    }
    lVar9 = *plVar7;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == lVar8) {
          puVar5 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto System_Array_EmptyInternalEnumerator<OVRPlugin_BoneCapsule>__get_Current;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_044822ac(plVar7,lVar8,0);
System_Array_EmptyInternalEnumerator<OVRPlugin_BoneCapsule>__get_Current:
    (*(code *)*puVar5)(&local_d0,plVar7,puVar5[1]);
    uVar3 = uStack_b8;
    uVar12 = uStack_c8;
    uVar6 = local_d0;
    uStack_68 = uStack_c0;
    local_70 = uStack_c8;
    uStack_58 = local_b0;
    uStack_60 = uStack_b8;
    local_50 = local_a8;
    uStack_c8 = uStack_c0;
    local_d0 = uVar12;
    uStack_b8 = local_b0;
    uStack_c0 = uVar3;
    local_b0 = local_a8;
    FUN_07523178(param_1,uVar6,&local_d0,2,
                 *(undefined8 *)
                  (*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x80)
                                      + 0x20) + 0xc0) + 0x118));
  } while( true );
  if (plVar7 != (long *)0x0) {
    lVar8 = *plVar7;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_09f1f008) {
          puVar5 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_07521c10;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_044822ac(plVar7,*(long *)PTR_DAT_09f1f008,0);
LAB_07521c10:
    (*(code *)*puVar5)(plVar7,puVar5[1]);
  }
  return;
}


