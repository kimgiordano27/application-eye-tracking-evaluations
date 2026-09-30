/*
FUNCTION_NAME: FUN_05fed864
ENTRY_POINT: 05fed864
PROGRAM: vandalizer-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_14;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05fedd44) */
/* WARNING: Removing unreachable block (ram,0x05fedf60) */
/* WARNING: Removing unreachable block (ram,0x05fedf68) */

undefined8
FUN_05fed864(undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,long param_4,
            long *param_5,long *param_6,undefined8 param_7,undefined8 *param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  uint uVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  long *local_c0;
  long lStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80 [2];
  
  if ((DAT_07a46840 & 1) == 0) {
    FUN_031f20f4(PTR_DAT_0759b580);
    FUN_031f20f4(PTR_DAT_075f6b60);
    FUN_031f20f4(PTR_DAT_075f6b68);
    FUN_031f20f4(PTR_DAT_0759e2a8);
    FUN_031f20f4(PTR_DAT_075f6b70);
    FUN_031f20f4(PTR_DAT_0759b2a8);
    DAT_07a46840 = 1;
  }
  local_80[0] = 0;
  uStack_98 = 0;
  local_a0 = 0;
  local_88 = 0;
  uStack_90 = 0;
  lStack_b8 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  local_c0 = param_5;
  thunk_FUN_0329bf60(&local_c0,param_5);
  lStack_b8 = param_4;
  thunk_FUN_0329bf60(&lStack_b8,param_4);
  local_80[0] = param_7;
  thunk_FUN_0329bf60(local_80,param_7);
  local_b0 = 0;
  thunk_FUN_0329bf60(&local_b0,0);
  plVar7 = local_c0;
  puVar1 = PTR_DAT_075f6b70;
  uStack_c8._4_4_ = 0x7f800000;
  if (local_c0 == (long *)0x0) goto LAB_05fedf58;
  lVar8 = *local_c0;
  uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_075f6b70) {
        puVar6 = (undefined8 *)(lVar8 + (long)(*piVar11 + 1) * 0x10 + 0x138);
        goto LAB_05fed9c0;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar6 = (undefined8 *)FUN_0322c1e8(local_c0,*(long *)PTR_DAT_075f6b70,1);
LAB_05fed9c0:
  uVar13 = (*(code *)*puVar6)(plVar7,0,puVar6[1]);
  plVar7 = local_c0;
  local_d0 = CONCAT44((int)param_2,uVar13);
  uStack_c8._0_4_ = (undefined4)param_3;
  if (local_c0 == (long *)0x0) goto LAB_05fedf58;
  lVar9 = *local_c0;
  lVar8 = *(long *)puVar1;
  uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == lVar8) {
        puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
        goto LAB_05feda2c;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar6 = (undefined8 *)FUN_0322c1e8(local_c0,lVar8,0);
LAB_05feda2c:
  iVar4 = (*(code *)*puVar6)(plVar7,puVar6[1]);
  lVar9 = *plVar7;
  lVar8 = *(long *)puVar1;
  uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == lVar8) {
        puVar6 = (undefined8 *)(lVar9 + (long)(*piVar11 + 1) * 0x10 + 0x138);
        goto OVRManager__get_instance;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar6 = (undefined8 *)FUN_0322c1e8(plVar7,lVar8,1);
OVRManager__get_instance:
  puVar1 = PTR_DAT_0759b2a8;
  uVar14 = (*(code *)*puVar6)(plVar7,iVar4 + -1,puVar6[1]);
  if (DAT_07a3caf2 == '\0') {
    FUN_031f20f4(PTR_DAT_0759b378);
    DAT_07a3caf2 = '\x01';
  }
  lVar8 = *(long *)(*(long *)PTR_DAT_0759b378 + 0xb8);
  uStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  local_110 = 0;
  FUN_05fee0ec(uVar14,param_2,param_3,*(undefined4 *)(lVar8 + 0x18),*(undefined4 *)(lVar8 + 0x1c),
               *(undefined4 *)(lVar8 + 0x20),&local_130,0);
  local_a0 = uStack_128;
  uStack_a8 = local_130;
  uStack_90 = uStack_118;
  uStack_98 = uStack_120;
  local_88 = local_110;
  thunk_FUN_0329bf60(&uStack_a8,0);
  uVar14 = *(undefined8 *)(param_4 + 0x28);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  puVar1 = PTR_DAT_075f6b60;
  uVar10 = FUN_06e587d8(uVar14,0,0);
  if ((uVar10 & 1) != 0) {
    if (param_6 != (long *)0x0) {
      lVar9 = *param_6;
      lVar8 = *(long *)puVar1;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == lVar8) {
            puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_05fedbb0;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar6 = (undefined8 *)FUN_0322c1e8(param_6,lVar8,0);
LAB_05fedbb0:
      plVar7 = (long *)(*(code *)*puVar6)(param_6,puVar6[1]);
      puVar3 = PTR_DAT_075f6b68;
      puVar2 = PTR_DAT_0759e2a8;
      uVar12 = 0;
      do {
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_031f2390();
        }
        lVar8 = *plVar7;
        uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
              puVar6 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_05fedc24;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar6 = (undefined8 *)FUN_0322c1e8(plVar7,*(long *)puVar2,0);
LAB_05fedc24:
        uVar10 = (*(code *)*puVar6)(plVar7,puVar6[1]);
        if ((uVar10 & 1) == 0) {
          if (plVar7 == (long *)0x0) goto LAB_05fedd38;
          lVar8 = *plVar7;
          uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar10 == 0) goto LAB_05fedd10;
          piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          goto LAB_05fedcf8;
        }
        lVar8 = *plVar7;
        uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)puVar3) {
              puVar6 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_05fedc80;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar6 = (undefined8 *)FUN_0322c1e8(plVar7,*(long *)puVar3,0);
LAB_05fedc80:
        lVar8 = (*(code *)*puVar6)(plVar7,puVar6[1]);
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_031f2390();
        }
        if (*(char *)(lVar8 + 0xb0) == '\0') {
          if (*(long *)(param_4 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_031f2390();
          }
          FUN_06e6a5c4(*(long *)(param_4 + 0x28),0);
          uVar5 = FUN_05fee2a0(param_4,lVar8,&local_d0);
          uVar12 = uVar12 | uVar5;
        }
      } while( true );
    }
    goto LAB_05fedf58;
  }
  goto LAB_05fedd4c;
LAB_05fede88:
  if (plVar7 != (long *)0x0) {
    lVar8 = *plVar7;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_0759b580) {
          puVar6 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_05fedee4;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar6 = (undefined8 *)FUN_0322c1e8(plVar7,*(long *)PTR_DAT_0759b580,0);
LAB_05fedee4:
    (*(code *)*puVar6)(plVar7,puVar6[1]);
  }
LAB_05fedef4:
  memcpy(&local_130,&local_d0,0x58);
  param_8[1] = uStack_100;
  *param_8 = local_108;
  param_8[3] = uStack_f0;
  param_8[2] = local_f8;
  param_8[4] = local_e8;
  thunk_FUN_0329bf60(param_8,0);
  return local_b0;
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar11 = piVar11 + 4;
    if (uVar10 == 0) break;
LAB_05fedcf8:
    if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_0759b580) {
      puVar6 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_05fedd2c;
    }
  }
LAB_05fedd10:
  puVar6 = (undefined8 *)FUN_0322c1e8(plVar7,*(long *)PTR_DAT_0759b580,0);
LAB_05fedd2c:
  (*(code *)*puVar6)(plVar7,puVar6[1]);
LAB_05fedd38:
  if ((uVar12 & 1) != 0) goto LAB_05fedef4;
LAB_05fedd4c:
  if (param_6 != (long *)0x0) {
    lVar9 = *param_6;
    lVar8 = *(long *)puVar1;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == lVar8) {
          puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_05fedd9c;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar6 = (undefined8 *)FUN_0322c1e8(param_6,lVar8,0);
LAB_05fedd9c:
    plVar7 = (long *)(*(code *)*puVar6)(param_6,puVar6[1]);
    puVar2 = PTR_DAT_075f6b68;
    puVar1 = PTR_DAT_0759e2a8;
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_031f2390();
    }
    do {
      lVar8 = *plVar7;
      uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
            puVar6 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_05fede0c;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar6 = (undefined8 *)FUN_0322c1e8(plVar7,*(long *)puVar1,0);
LAB_05fede0c:
      uVar10 = (*(code *)*puVar6)(plVar7,puVar6[1]);
      if ((uVar10 & 1) == 0) goto LAB_05fede88;
      lVar8 = *plVar7;
      uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
            puVar6 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_05fede68;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar6 = (undefined8 *)FUN_0322c1e8(plVar7,*(long *)puVar2,0);
LAB_05fede68:
      uVar14 = (*(code *)*puVar6)(plVar7,puVar6[1]);
      FUN_05fee418(param_4,uVar14,&local_d0);
    } while( true );
  }
LAB_05fedf58:
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


