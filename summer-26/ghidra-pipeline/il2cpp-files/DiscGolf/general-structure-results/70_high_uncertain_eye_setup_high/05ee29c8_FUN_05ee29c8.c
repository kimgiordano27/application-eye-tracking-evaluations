/*
FUNCTION_NAME: FUN_05ee29c8
ENTRY_POINT: 05ee29c8
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_5;validity_or_gating_hits_20;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x05ee2f44) */
/* WARNING: Removing unreachable block (ram,0x05ee2fbc) */

void FUN_05ee29c8(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  int *piVar15;
  int iVar16;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  long **pplStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  long *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 local_50;
  
  if ((DAT_06dc3f99 & 1) == 0) {
    FUN_02d965b8(PTR_DAT_069fb930);
    FUN_02d965b8(PTR_DAT_06a0e4b8);
    FUN_02d965b8(PTR_DAT_069fbff0);
    FUN_02d965b8(PTR_DAT_06a002f0);
    FUN_02d965b8(PTR_DAT_06a002f8);
    FUN_02d965b8(PTR_DAT_069fbff8);
    FUN_02d965b8(PTR_DAT_06a149c0);
    FUN_02d965b8(
                Method_System_Collections_Generic_List<TrackedPoseDriverDataDescription_PoseData>_get_Count__
                );
    FUN_02d965b8(PTR_DAT_069fb990);
    FUN_02d965b8(PTR_DAT_069fc208);
    FUN_02d965b8(Method_OVRManager_Observable<OVRManager_PassthroughInitializationState>_get_Value__
                );
    DAT_06dc3f99 = 1;
  }
  local_50 = 0;
  local_78 = (long *)0x0;
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uVar7 = FUN_05ee4928(param_1);
  if ((uVar7 & 1) != 0) {
    local_80 = 0;
    uStack_98 = 0;
    local_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    FUN_05ee4c04(param_1,&local_a0,0);
  }
  puVar2 = PTR_DAT_069fb990;
  if (*(long *)(param_1 + 0xa0) != 0) {
    uVar8 = FUN_062f57c8(*(long *)(param_1 + 0xa0),0);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_02df485c(*(long *)puVar2);
    }
    uVar7 = FUN_06350670(uVar8,0,0);
    if ((uVar7 & 1) == 0) {
      lVar9 = *(long *)(param_1 + 0xa0);
      *(undefined4 *)(param_1 + 0x108) = 0;
      if (lVar9 != 0) {
        iVar16 = 0;
        do {
          iVar6 = FUN_062f47f0(lVar9,0);
          if (iVar6 <= iVar16) {
            if (*(int *)(param_1 + 0x108) < 1) {
              return;
            }
            lVar9 = FUN_05e653e8(param_1,0);
            if (lVar9 != 0) {
              if (*(char *)(lVar9 + 0x30) != '\0') {
                uStack_d8 = *(undefined8 *)(param_1 + 0x100);
                local_e0 = *(undefined8 *)(param_1 + 0xf8);
                local_d0 = *(undefined8 *)(param_1 + 0x108);
                FUN_05ee170c(param_1,&local_e0);
                return;
              }
              if ((*(char *)(param_1 + 0x26) == '\0') && (*(char *)(param_1 + 0x25) != '\0')) {
                uStack_f8 = *(undefined8 *)(param_1 + 0x100);
                local_100 = *(undefined8 *)(param_1 + 0xf8);
                local_f0 = *(undefined8 *)(param_1 + 0x108);
                FUN_05ee4dec(param_1,&local_100,0,0);
                return;
              }
              lVar9 = *(long *)(param_1 + 200);
              if (lVar9 != 0) {
                *(undefined4 *)(lVar9 + 0x18) = 0;
                *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                lVar9 = FUN_05e653e8(param_1,0);
                if ((lVar9 != 0) &&
                   (plVar10 = (long *)FUN_05e5e70c(lVar9,0), plVar10 != (long *)0x0)) {
                  lVar9 = *plVar10;
                  uVar7 = (ulong)*(ushort *)(lVar9 + 0x12e);
                  if (uVar7 == 0) goto LAB_05ee2ccc;
                  piVar15 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                  goto LAB_05ee2cb4;
                }
              }
            }
            break;
          }
          if (*(long *)(param_1 + 0xa0) == 0) break;
          FUN_062f4d2c(&local_c8,*(long *)(param_1 + 0xa0),iVar16,0);
          uStack_68 = pplStack_c0;
          local_70 = local_c8;
          uStack_58 = uStack_b0;
          uStack_60 = uStack_b8;
          local_50 = local_a8;
          FUN_062f3a8c(&local_70,0);
          FUN_062f3a94(&local_70,0);
          FUN_05ee43ac(param_1,iVar16);
          lVar9 = *(long *)(param_1 + 0xa0);
          iVar16 = iVar16 + 1;
        } while (lVar9 != 0);
      }
    }
    else {
      lVar9 = FUN_05e653e8(param_1,0);
      if (lVar9 != 0) {
        if (*(int *)(lVar9 + 0x9c) != 0) {
          return;
        }
        plVar10 = (long *)thunk_FUN_02da6564(param_1,0);
        if (plVar10 != (long *)0x0) {
          uVar8 = (**(code **)(*plVar10 + 0x208))(plVar10,*(undefined8 *)(*plVar10 + 0x210));
          uVar8 = FUN_0536d554(*(undefined8 *)PTR_DAT_069fc208,uVar8,
                               *(undefined8 *)
                                Method_OVRManager_Observable<OVRManager_PassthroughInitializationState>_get_Value__
                               ,0);
          if (*(int *)(*(long *)PTR_DAT_069fb930 + 0xe4) == 0) {
            thunk_FUN_02df485c(*(long *)PTR_DAT_069fb930);
          }
          FUN_0630bbe4(uVar8,0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar15 = piVar15 + 4;
    if (uVar7 == 0) break;
LAB_05ee2cb4:
    if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_06a002f0) {
      puVar11 = (undefined8 *)(lVar9 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_05ee2d18;
    }
  }
LAB_05ee2ccc:
  puVar11 = (undefined8 *)FUN_02dd004c(plVar10,*(long *)PTR_DAT_06a002f0,0);
LAB_05ee2d18:
  plVar10 = (long *)(*(code *)*puVar11)(plVar10,puVar11[1]);
  puVar5 = PTR_DAT_06a149c0;
  puVar4 = PTR_DAT_06a0e4b8;
  puVar3 = PTR_DAT_06a002f8;
  puVar2 = PTR_DAT_069fbff8;
  pplStack_c0 = &local_78;
  local_c8 = 0;
joined_r0x05ee2d30:
  do {
    do {
      local_78 = plVar10;
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar9 = *plVar10;
      uVar7 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar7 != 0) {
        piVar15 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)puVar2) {
            puVar11 = (undefined8 *)(lVar9 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_05ee2da4;
          }
          uVar7 = uVar7 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar7 != 0);
      }
      puVar11 = (undefined8 *)FUN_02dd004c(plVar10,*(long *)puVar2,0);
LAB_05ee2da4:
      uVar7 = (*(code *)*puVar11)(plVar10,puVar11[1]);
      plVar10 = local_78;
      if ((uVar7 & 1) == 0) {
        if (local_78 == (long *)0x0) goto UnityEngine_Rendering_UI_DebugUIHandlerWidget__Next;
        lVar9 = *local_78;
        uVar7 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar7 == 0) goto LAB_05ee2f10;
        piVar15 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        goto LAB_05ee2ef8;
      }
      if (local_78 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar9 = *local_78;
      uVar7 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar7 != 0) {
        piVar15 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)puVar3) {
            puVar11 = (undefined8 *)(lVar9 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_05ee2e08;
          }
          uVar7 = uVar7 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar7 != 0);
      }
      puVar11 = (undefined8 *)FUN_02dd004c(local_78,*(long *)puVar3,0);
LAB_05ee2e08:
      lVar9 = (*(code *)*puVar11)(plVar10,puVar11[1]);
      lVar12 = FUN_05e653e8(param_1,0);
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar12 = FUN_05e5e724(lVar12,0);
      plVar10 = local_78;
    } while (lVar9 == lVar12);
    lVar12 = FUN_05e65e8c(param_1,0);
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    if (*(long *)(lVar12 + 0xd0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    uVar7 = FUN_03c5ecb0(*(long *)(lVar12 + 0xd0),lVar9,*(undefined8 *)puVar4);
    plVar10 = local_78;
  } while ((uVar7 & 1) == 0);
  lVar12 = *(long *)(param_1 + 200);
  if (lVar12 != 0) {
    lVar13 = *(long *)(lVar12 + 0x10);
    lVar14 = *(long *)puVar5;
    *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
    if (lVar13 != 0) {
      uVar1 = *(uint *)(lVar12 + 0x18);
      if (uVar1 < *(uint *)(lVar13 + 0x18)) {
        *(uint *)(lVar12 + 0x18) = uVar1 + 1;
        *(long *)(lVar13 + (long)(int)uVar1 * 8 + 0x20) = lVar9;
      }
      else {
        FUN_0408dbe4(lVar12,lVar9,*(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70)
                    );
        plVar10 = local_78;
      }
      goto joined_r0x05ee2d30;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar15 = piVar15 + 4;
    if (uVar7 == 0) break;
LAB_05ee2ef8:
    if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_069fbff0) {
      puVar11 = (undefined8 *)(lVar9 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_05ee2f2c;
    }
  }
LAB_05ee2f10:
  puVar11 = (undefined8 *)FUN_02dd004c(local_78,*(long *)PTR_DAT_069fbff0,0);
LAB_05ee2f2c:
  (*(code *)*puVar11)(plVar10,puVar11[1]);
UnityEngine_Rendering_UI_DebugUIHandlerWidget__Next:
  puVar11 = (undefined8 *)(param_1 + 0xd0);
  *puVar11 = *(undefined8 *)(param_1 + 200);
  LeanTween__value(puVar11);
  uStack_118 = *(undefined8 *)(param_1 + 0x100);
  local_120 = *(undefined8 *)(param_1 + 0xf8);
  local_110 = *(undefined8 *)(param_1 + 0x108);
  uStack_148 = *(undefined8 *)(param_1 + 0xd8);
  local_150 = *puVar11;
  uStack_138 = *(undefined8 *)(param_1 + 0xe8);
  uStack_140 = *(undefined8 *)(param_1 + 0xe0);
  local_130 = *(undefined8 *)(param_1 + 0xf0);
  FUN_05ee188c(param_1,&local_120,&local_150);
  return;
}


