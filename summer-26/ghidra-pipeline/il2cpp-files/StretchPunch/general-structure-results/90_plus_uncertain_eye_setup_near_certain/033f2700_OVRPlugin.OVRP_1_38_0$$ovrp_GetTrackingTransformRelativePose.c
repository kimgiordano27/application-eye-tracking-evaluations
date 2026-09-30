/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$ovrp_GetTrackingTransformRelativePose
ENTRY_POINT: 033f2700
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 97
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_38_0__ovrp_GetTrackingTransformRelativePose
               (long param_1,long param_2,int param_3)

{
  bool bVar1;
  uint uVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  int iVar9;
  uint uVar10;
  ulong uVar11;
  uint uVar12;
  long local_98;
  undefined8 local_90;
  ulong local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  long local_68;
  
  puVar4 = StringLiteral_9323;
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  if ((DAT_044a6b83 & 1) == 0) {
    FUN_01d7d918(StringLiteral_9323);
    DAT_044a6b83 = 1;
  }
  local_78 = 0;
  uStack_70 = 0;
  local_98 = 0;
  local_90 = 0;
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  uVar10 = *(uint *)(param_2 + 4);
  if (uVar10 == 0) {
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    uVar10 = *(uint *)(param_2 + 0xc);
  }
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  uVar12 = uVar10 << 0x10;
  if (0xffff < uVar10) {
    uVar12 = uVar10;
  }
  uVar7 = 0x11;
  if (0xffff < uVar10) {
    uVar7 = 1;
  }
  uVar10 = uVar7 | 8;
  uVar2 = uVar12 << 8;
  if (uVar12 >> 0x18 != 0) {
    uVar10 = uVar7;
    uVar2 = uVar12;
  }
  uVar12 = uVar10 | 4;
  uVar7 = uVar2 << 4;
  if (uVar2 >> 0x1c != 0) {
    uVar12 = uVar10;
    uVar7 = uVar2;
  }
  uVar2 = uVar7 << 2;
  uVar10 = uVar12 | 2;
  if (uVar7 >> 0x1e != 0) {
    uVar2 = uVar7;
    uVar10 = uVar12;
  }
  uVar10 = uVar10 + ((int)uVar2 >> 0x1f);
  local_88 = *(long *)(param_1 + 8) << ((ulong)uVar10 & 0x3f);
  local_80 = CONCAT44(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0xc)) >>
             ((ulong)(0x20 - uVar10) & 0x3f);
  if (param_3 < 0) {
    uVar12 = 3;
    lVar8 = (long)param_3;
    do {
      lVar5 = *(long *)puVar4;
      if (lVar8 < -8) {
        uVar7 = 1000000000;
      }
      else {
        if (*(int *)(lVar5 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
          lVar5 = *(long *)puVar4;
        }
        lVar6 = **(long **)(lVar5 + 0xb8);
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01d7db70();
        }
        if (*(uint *)(lVar6 + 0x18) <= (uint)-(int)lVar8) {
                    /* WARNING: Subroutine does not return */
          FUN_01d7db78();
        }
        uVar7 = *(uint *)(lVar6 + lVar8 * -4 + 0x20);
      }
      uVar11 = local_88 & 0xffffffff;
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      uVar11 = uVar11 * uVar7;
      local_88 = CONCAT44(local_88._4_4_,(int)uVar11);
      if (uVar12 != 0) {
        iVar9 = 2;
        lVar5 = 1;
        do {
          uVar2 = *(uint *)((long)&local_88 + lVar5 * 4);
          if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
            thunk_FUN_01dc4f30();
          }
          uVar11 = (uVar11 >> 0x20) + (ulong)uVar2 * (ulong)uVar7;
          *(int *)((long)&local_88 + lVar5 * 4) = (int)uVar11;
          lVar5 = (long)iVar9;
          iVar9 = iVar9 + 1;
        } while (lVar5 <= (long)(ulong)uVar12);
      }
      if (uVar11 >> 0x1f != 0) {
        uVar12 = uVar12 + 1;
        *(int *)((long)&local_88 + (ulong)uVar12 * 4) = (int)(uVar11 >> 0x20);
      }
      bVar1 = lVar8 < -9;
      lVar8 = lVar8 + 9;
    } while (bVar1);
  }
  else {
    uVar12 = 3;
  }
  uVar7 = uVar10 & 0x3f;
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
    iVar9 = *(int *)(param_2 + 4);
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    lVar8 = *(long *)(param_2 + 8);
  }
  else {
    lVar8 = *(long *)(param_2 + 8);
    iVar9 = *(int *)(param_2 + 4);
  }
  lVar8 = lVar8 << uVar7;
  if (iVar9 == 0) {
    if (uVar12 == 4) {
LAB_033f2aa4:
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      FUN_033f1268(&local_80,lVar8);
    }
    else {
      if (uVar12 == 5) {
LAB_033f2a80:
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
        }
        FUN_033f1268((long)&local_80 + 4,lVar8);
        goto LAB_033f2aa4;
      }
      if (uVar12 == 6) {
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
        }
        FUN_033f1268(&local_78,lVar8);
        goto LAB_033f2a80;
      }
    }
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    FUN_033f1268((ulong)&local_88 | 4,lVar8);
    FUN_033f1268(&local_88,lVar8);
    uVar10 = 0;
    *(ulong *)(param_1 + 8) = local_88 >> uVar7;
    goto FUN_033f2b04;
  }
  uVar2 = 0x20 - uVar10 & 0x3f;
  uVar11 = (ulong)local_90 >> 0x20;
  local_90 = CONCAT44((int)uVar11,
                      (int)(CONCAT44(*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 0xc)) >>
                           uVar2));
  local_98 = lVar8;
  if (uVar12 == 4) {
LAB_033f29b4:
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    FUN_033f135c((ulong)&local_88 | 4,&local_98);
  }
  else {
    if (uVar12 == 5) {
LAB_033f2998:
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      FUN_033f135c(&local_80,&local_98);
      goto LAB_033f29b4;
    }
    if (uVar12 == 6) {
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      FUN_033f135c((long)&local_80 + 4,&local_98);
      goto LAB_033f2998;
    }
  }
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  FUN_033f135c(&local_88,&local_98);
  *(ulong *)(param_1 + 8) = (local_88 >> uVar7) + (((local_80 & 0xffffffff) << uVar2) << 0x20);
  uVar10 = (uint)local_80 >> (ulong)(uVar10 & 0x1f);
FUN_033f2b04:
  *(uint *)(param_1 + 4) = uVar10;
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


