/*
FUNCTION_NAME: FUN_04197ecc
ENTRY_POINT: 04197ecc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 117
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_18;strong_pose_or_ray_construction_hits_10;functionality_eye_api_context_without_clear_sink_hits_5
*/


/* WARNING: Removing unreachable block (ram,0x04198394) */
/* WARNING: Removing unreachable block (ram,0x04198260) */
/* WARNING: Removing unreachable block (ram,0x041983c8) */
/* WARNING: Removing unreachable block (ram,0x041983e4) */
/* WARNING: Removing unreachable block (ram,0x04198448) */
/* WARNING: Removing unreachable block (ram,0x04198438) */

void FUN_04197ecc(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  int *piVar14;
  long local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 local_60 [16];
  long local_48;
  
  if ((DAT_04840c96 & 1) == 0) {
    thunk_FUN_01efb3a4(PTR_DAT_0458dea0);
    thunk_FUN_01efb3a4(PTR_DAT_0458dea8);
    thunk_FUN_01efb3a4(PTR_DAT_0458deb0);
    thunk_FUN_01efb3a4(PTR_DAT_0458deb8);
    thunk_FUN_01efb3a4(PTR_DAT_0458dec0);
    thunk_FUN_01efb3a4(PTR_DAT_0458dec8);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(PTR_DAT_0458ded0);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(PTR_DAT_0458ded8);
    thunk_FUN_01efb3a4(PTR_DAT_0458dee0);
    thunk_FUN_01efb3a4(PTR_DAT_0458dee8);
    thunk_FUN_01efb3a4(PTR_DAT_0458def0);
    thunk_FUN_01efb3a4(PTR_DAT_0458def8);
    thunk_FUN_01efb3a4(PTR_DAT_0458df00);
    DAT_04840c96 = 1;
  }
  local_48 = 0;
  local_60._0_8_ = 0;
  local_60._8_8_ = 0;
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  local_70 = 0;
  if (*(char *)(param_1 + 1000) != '\0') {
    return;
  }
  if (*(int *)(*(long *)PTR_DAT_0458dea8 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  local_60 = FUN_029ec56c(&local_48,*(undefined8 *)PTR_DAT_0458dea0);
  if (*(char *)(param_1 + 0x3c8) != '\0') {
    if (*(long *)(param_1 + 0x3d8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    plVar7 = (long *)FUN_041b1698(*(long *)(param_1 + 0x3d8),0);
    puVar6 = PTR_DAT_0458dee0;
    puVar5 = PTR_DAT_0458ded0;
    puVar4 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    do {
      lVar11 = *plVar7;
      uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar12 != 0) {
        piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)puVar4) {
            puVar8 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_0419807c;
          }
          uVar12 = uVar12 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar12 != 0);
      }
      puVar8 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar4,0);
LAB_0419807c:
      uVar12 = (*(code *)*puVar8)(plVar7,puVar8[1]);
      if ((uVar12 & 1) == 0) {
        if (plVar7 == (long *)0x0) break;
        lVar11 = *plVar7;
        uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar12 == 0) goto LAB_0419822c;
        piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        goto LAB_04198214;
      }
      lVar11 = *plVar7;
      uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar12 != 0) {
        piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)puVar5) {
            puVar8 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_041980d8;
          }
          uVar12 = uVar12 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar12 != 0);
      }
      puVar8 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar5,0);
LAB_041980d8:
      lVar11 = (*(code *)*puVar8)(plVar7,puVar8[1]);
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      if (*(int *)(lVar11 + 0x10) == -1) {
        uVar12 = FUN_0340eec4(*(undefined8 *)(lVar11 + 0x18),0);
        if ((uVar12 & 1) == 0) {
          if (*(long *)(param_1 + 0x420) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          lVar9 = FUN_041acf38(*(long *)(param_1 + 0x420),*(undefined8 *)(lVar11 + 0x18),0);
          goto LAB_04198130;
        }
LAB_041981bc:
        *(undefined8 *)(lVar11 + 0x28) = 0;
        thunk_FUN_01f51358((undefined8 *)(lVar11 + 0x28),0);
      }
      else {
        if (*(long *)(param_1 + 0x420) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar9 = FUN_041a8808(*(long *)(param_1 + 0x420),*(int *)(lVar11 + 0x10),0);
LAB_04198130:
        if ((lVar9 == 0) || (*(char *)(lVar9 + 0x61) == '\0')) goto LAB_041981bc;
        *(long *)(lVar11 + 0x28) = lVar9;
        thunk_FUN_01f51358((long *)(lVar11 + 0x28),lVar9);
        lVar9 = local_48;
        uVar2 = *(undefined4 *)(lVar11 + 0x20);
        uStack_98 = 0;
        local_a0 = lVar11;
        thunk_FUN_01f51358(&local_a0,lVar11);
        uStack_98 = CONCAT44(uStack_98._4_4_,uVar2);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar11 = *(long *)(lVar9 + 0x10);
        lVar13 = *(long *)puVar6;
        *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar3 = *(uint *)(lVar9 + 0x18);
        if (uVar3 < *(uint *)(lVar11 + 0x18)) {
          lVar11 = lVar11 + (long)(int)uVar3 * 0x10;
          *(uint *)(lVar9 + 0x18) = uVar3 + 1;
          plVar10 = (long *)(lVar11 + 0x20);
          *plVar10 = local_a0;
          *(undefined8 *)(lVar11 + 0x28) = uStack_98;
          thunk_FUN_01f51358(plVar10,0);
        }
        else {
          FUN_031ebd28(lVar9,local_a0,uStack_98,
                       *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
        }
      }
    } while( true );
  }
  goto LAB_04198264;
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar14 = piVar14 + 4;
    if (uVar12 == 0) break;
LAB_04198214:
    if (*(long *)(piVar14 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar8 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
      goto LAB_04198248;
    }
  }
LAB_0419822c:
  puVar8 = (undefined8 *)
           FUN_01ecb238(plVar7,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_04198248:
  (*(code *)*puVar8)(plVar7,puVar8[1]);
LAB_04198264:
  uVar12 = FUN_02303f10(*(undefined8 *)(param_1 + 0x3e0),local_48,*(undefined8 *)PTR_DAT_0458deb0);
  if ((uVar12 & 1) == 0) {
    lVar11 = *(long *)(param_1 + 0x3d0);
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    iVar1 = *(int *)(lVar11 + 0x18);
    *(undefined4 *)(lVar11 + 0x18) = 0;
    *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
    if (0 < iVar1) {
      FUN_0358d1e4(*(undefined8 *)(lVar11 + 0x10),0,iVar1,0);
    }
    if (local_48 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    FUN_031ec79c(&local_a0,local_48,*(undefined8 *)PTR_DAT_0458def0);
    puVar5 = PTR_DAT_0458ded8;
    puVar4 = PTR_DAT_0458dec0;
    uStack_78 = uStack_98;
    local_80 = local_a0;
    uStack_68 = uStack_88;
    local_70 = uStack_90;
    while( true ) {
      uVar12 = FUN_02cbaf58(&local_80,*(undefined8 *)puVar4);
      if ((uVar12 & 1) == 0) break;
      lVar11 = *(long *)(param_1 + 0x3d0);
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar9 = *(long *)(lVar11 + 0x10);
      lVar13 = *(long *)puVar5;
      *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar3 = *(uint *)(lVar11 + 0x18);
      if (uVar3 < *(uint *)(lVar9 + 0x18)) {
        *(uint *)(lVar11 + 0x18) = uVar3 + 1;
        puVar8 = (undefined8 *)(lVar9 + (long)(int)uVar3 * 8 + 0x20);
        *puVar8 = local_70;
        thunk_FUN_01f51358(puVar8);
      }
      else {
        FUN_030f2bb4(lVar11,local_70,
                     *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
      }
    }
    FUN_02cbaf54(&local_80,*(undefined8 *)PTR_DAT_0458deb8);
    FUN_0241b8dc(*(undefined8 *)(param_1 + 0x3e0),local_48,*(undefined8 *)PTR_DAT_0458df00);
    FUN_025ecf24(local_60,*(undefined8 *)PTR_DAT_0458def8);
    FUN_04199edc(param_1);
    FUN_04199f14(param_1);
  }
  else {
    FUN_025ecf24(local_60,*(undefined8 *)PTR_DAT_0458def8);
  }
  return;
}


