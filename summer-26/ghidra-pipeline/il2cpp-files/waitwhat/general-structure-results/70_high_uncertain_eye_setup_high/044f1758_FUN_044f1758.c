/*
FUNCTION_NAME: FUN_044f1758
ENTRY_POINT: 044f1758
PROGRAM: waitwhat-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x044f1a74) */

void FUN_044f1758(long param_1,long *param_2,long param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  int *piVar8;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  long **pplStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long *local_38;
  
  if ((DAT_07548281 & 1) == 0) {
    FUN_03188a78(&DAT_07255a40);
    FUN_03188a78(&DAT_07255b20);
    DAT_07548281 = 1;
  }
  local_40 = 0;
  local_38 = (long *)0x0;
  local_50 = 0;
  uStack_48 = 0;
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
  if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03188cd8();
  }
  lVar4 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x20);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_031c09d4(lVar4);
  }
  lVar5 = *param_2;
  uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == lVar4) {
        puVar2 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_044f1824;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar2 = (undefined8 *)FUN_031c0d08(param_2,lVar4,0);
LAB_044f1824:
  plVar3 = (long *)(*(code *)*puVar2)(param_2,puVar2[1]);
  puVar1 = PTR_DAT_070c7c80;
  pplStack_58 = &local_38;
  local_60 = 0;
  do {
    local_38 = plVar3;
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    lVar4 = *plVar3;
    uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_044f189c;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar2 = (undefined8 *)FUN_031c0d08(plVar3,*(long *)puVar1,0);
LAB_044f189c:
    uVar7 = (*(code *)*puVar2)(plVar3,puVar2[1]);
    plVar3 = local_38;
    if ((uVar7 & 1) == 0) {
      if (local_38 == (long *)0x0) {
        return;
      }
      lVar4 = *local_38;
      uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar7 == 0) goto LAB_044f1a20;
      piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      break;
    }
    if (local_38 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    lVar4 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x140);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_031c09d4(lVar4);
    }
    lVar5 = *plVar3;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar4) {
          puVar2 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_044f1920;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar2 = (undefined8 *)FUN_031c0d08(plVar3,lVar4,0);
LAB_044f1920:
    (*(code *)*puVar2)(&local_78,plVar3,puVar2[1]);
    lVar4 = *(long *)(param_1 + 0x10);
    uStack_48 = uStack_70;
    local_50 = local_78;
    local_40 = local_68;
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    uVar6 = *(uint *)(param_1 + 0x18);
    if (uVar6 == *(uint *)(lVar4 + 0x18)) {
      Unity_Collections_NativeArray<OVRPlugin_Vector3f>__Copy
                (param_1,uVar6 + 1,
                 *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x78));
      uVar6 = *(uint *)(param_1 + 0x18);
      lVar4 = *(long *)(param_1 + 0x10);
      *(uint *)(param_1 + 0x18) = uVar6 + 1;
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
    }
    else {
      *(uint *)(param_1 + 0x18) = uVar6 + 1;
    }
    if (*(uint *)(lVar4 + 0x18) <= uVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_03188ce0();
    }
    lVar4 = lVar4 + (long)(int)uVar6 * 0x18;
    *(undefined8 *)(lVar4 + 0x28) = uStack_48;
    *(undefined8 *)(lVar4 + 0x20) = local_50;
    *(undefined8 *)(lVar4 + 0x30) = local_40;
    plVar3 = local_38;
  } while( true );
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
    if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_070c2e88) {
      puVar2 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_044f1a3c;
    }
  }
LAB_044f1a20:
  puVar2 = (undefined8 *)FUN_031c0d08(local_38,*(long *)PTR_DAT_070c2e88,0);
LAB_044f1a3c:
  (*(code *)*puVar2)(plVar3,puVar2[1]);
  return;
}


