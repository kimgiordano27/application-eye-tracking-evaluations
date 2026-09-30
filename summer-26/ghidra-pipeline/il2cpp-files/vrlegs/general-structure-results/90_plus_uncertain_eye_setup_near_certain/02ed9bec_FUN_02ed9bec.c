/*
FUNCTION_NAME: FUN_02ed9bec
ENTRY_POINT: 02ed9bec
PROGRAM: vrlegs-libil2cpp.so
SCORE: 103
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02eda284) */
/* WARNING: Removing unreachable block (ram,0x02eda404) */

void FUN_02ed9bec(int *param_1)

{
  int iVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  int *piVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  undefined1 auVar16 [16];
  unkbyte10 Var17;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  int *piStack_b0;
  int **local_a8;
  undefined1 local_a0 [16];
  char local_84 [4];
  long *local_80;
  ulong uStack_78;
  int local_64;
  long *local_60;
  ulong uStack_58;
  long *local_50;
  ulong uStack_48;
  int *local_38;
  
  local_38 = param_1;
  if ((DAT_0412a793 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cdb9c0);
    FUN_01ab69ac(PTR_DAT_03cdb9d8);
    FUN_01ab69ac(PTR_DAT_03d20988);
    FUN_01ab69ac(PTR_DAT_03d20990);
    FUN_01ab69ac(PTR_DAT_03cc9270);
    FUN_01ab69ac(PTR_DAT_03cd9660);
    FUN_01ab69ac(PTR_DAT_03cf0d30);
    FUN_01ab69ac(PTR_DAT_03cf5bf0);
    FUN_01ab69ac(PTR_DAT_03cda8c8);
    DAT_0412a793 = 1;
  }
  puVar3 = PTR_DAT_03cc9270;
  local_80 = (long *)0x0;
  uStack_78 = 0;
  local_84[0] = '\0';
  local_a0._0_8_ = 0;
  local_a0._8_8_ = 0;
  local_64 = *param_1;
  lVar13 = *(long *)(param_1 + 0xc);
  if (local_64 == 0) {
LAB_02ed9cec:
    puVar5 = PTR_DAT_03cda8c8;
    piStack_b0 = &local_64;
    local_b8 = 0;
    local_a8 = &local_38;
    if (local_64 == 0) {
      uStack_78 = *(ulong *)(local_38 + 0x14);
      local_80 = *(long **)(local_38 + 0x12);
      local_38[0x12] = 0;
      local_38[0x13] = 0;
      local_38[0x14] = 0;
      local_38[0x15] = 0;
      local_64 = -1;
      *local_38 = -1;
LAB_02eda104:
      if (DAT_0412432a == '\0') {
        FUN_01ab69ac(PTR_DAT_03cda8c8);
        DAT_0412432a = '\x01';
      }
      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      if (DAT_04123ead == '\0') {
        FUN_01ab69ac(PTR_DAT_03cf0d80);
        FUN_01ab69ac(PTR_DAT_03cc0330);
        DAT_04123ead = '\x01';
      }
      plVar9 = local_80;
      if (local_80 != (long *)0x0) {
        lVar8 = *local_80;
        bVar2 = *(byte *)(*(long *)PTR_DAT_03cc0330 + 0x130);
        if ((*(byte *)(lVar8 + 0x130) < bVar2) ||
           (*(long *)(*(long *)(lVar8 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)PTR_DAT_03cc0330))
        {
          uVar15 = uStack_78 & 0xffff;
          uVar7 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar7 != 0) {
            piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_03cf0d80) {
                puVar11 = (undefined8 *)(lVar8 + (long)(*piVar12 + 2) * 0x10 + 0x138);
                goto LAB_02eda1f4;
              }
              uVar7 = uVar7 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar7 != 0);
          }
          puVar11 = (undefined8 *)FUN_01a472ec(local_80,*(long *)PTR_DAT_03cf0d80,2);
LAB_02eda1f4:
          (*(code *)*puVar11)(plVar9,uVar15,puVar11[1]);
        }
        else {
          FUN_02678d04(local_80,0);
        }
      }
      iVar6 = 9;
    }
    else {
      uVar7 = FUN_025be440(*(undefined8 *)(local_38 + 8),0);
      puVar4 = PTR_DAT_03cd9660;
      if ((uVar7 & 1) == 0) {
        lVar8 = *(long *)PTR_DAT_03cd9660;
        if (*(int *)(lVar8 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar8 = *(long *)puVar4;
        }
        plVar9 = *(long **)(*(long *)(lVar8 + 0xb8) + 8);
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        iVar6 = (**(code **)(*plVar9 + 0x1e8))
                          (plVar9,*(undefined8 *)(local_38 + 8),*(undefined8 *)(*plVar9 + 0x1f0));
        if (*(int *)(*(long *)PTR_DAT_03cdb9d8 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        lVar14 = *(long *)PTR_DAT_03cdb9c0;
        lVar8 = *(long *)(lVar14 + 0x20);
        if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
          lVar8 = FUN_01a46ff8();
        }
        lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 8);
        if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
          lVar8 = FUN_01a46ff8();
        }
        if (*(int *)(lVar8 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        lVar8 = *(long *)(lVar14 + 0x20);
        if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
          lVar8 = FUN_01a46ff8();
        }
        lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 8);
        if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
          lVar8 = FUN_01a46ff8();
        }
        plVar9 = (long *)**(long **)(lVar8 + 0xb8);
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        iVar6 = iVar6 + 2;
        uVar10 = (**(code **)(*plVar9 + 0x178))(plVar9,iVar6,*(undefined8 *)(*plVar9 + 0x180));
        *(undefined8 *)(local_38 + 0x10) = uVar10;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
        lVar8 = *(long *)(local_38 + 8);
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        plVar9 = *(long **)(*(long *)(*(long *)puVar4 + 0xb8) + 8);
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        (**(code **)(*plVar9 + 0x268))
                  (plVar9,lVar8,0,*(undefined4 *)(lVar8 + 0x10),*(undefined8 *)(local_38 + 0x10),2,
                   *(undefined8 *)(*plVar9 + 0x270));
      }
      else {
        if (*(int *)(*(long *)PTR_DAT_03cdb9d8 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        lVar14 = *(long *)PTR_DAT_03cdb9c0;
        lVar8 = *(long *)(lVar14 + 0x20);
        if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
          lVar8 = FUN_01a46ff8();
        }
        lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 8);
        if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
          lVar8 = FUN_01a46ff8();
        }
        if (*(int *)(lVar8 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        lVar8 = *(long *)(lVar14 + 0x20);
        if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
          lVar8 = FUN_01a46ff8();
        }
        lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 8);
        if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
          lVar8 = FUN_01a46ff8();
        }
        plVar9 = (long *)**(long **)(lVar8 + 0xb8);
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        uVar10 = (**(code **)(*plVar9 + 0x178))(plVar9,2,*(undefined8 *)(*plVar9 + 0x180));
        *(undefined8 *)(local_38 + 0x10) = uVar10;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
        iVar6 = 2;
      }
      lVar8 = *(long *)(local_38 + 0x10);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      if (*(int *)(lVar8 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      iVar1 = local_38[10];
      *(char *)(lVar8 + 0x20) = (char)((uint)iVar1 >> 8);
      lVar8 = *(long *)(local_38 + 0x10);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      if (*(uint *)(lVar8 + 0x18) < 2) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      *(char *)(lVar8 + 0x21) = (char)iVar1;
      local_c8 = 0;
      uStack_c0 = 0;
      FUN_02224a9c(&local_c8,*(undefined8 *)(local_38 + 0x10),0,iVar6,
                   *(undefined8 *)PTR_DAT_03cf0d30);
      auVar16 = FUN_022239fc(local_c8,uStack_c0,*(undefined8 *)PTR_DAT_03cf5bf0);
      if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      Var17 = FluffyUnderware_Curvy_Shapes_CSPie__cpPosition
                        (lVar13,8,1,auVar16._0_8_,auVar16._8_8_,*(undefined8 *)(local_38 + 0xe));
      local_60 = (long *)Var17;
      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uStack_58 = 0;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(&local_60,local_60);
      uStack_58._0_3_ = (uint3)(ushort)((unkuint10)Var17 >> 0x40);
      uStack_48 = uStack_58;
      local_50 = local_60;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(&local_50,0);
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(&local_50,0);
      local_80 = local_50;
      uStack_78 = uStack_48;
      if (DAT_04124329 == '\0') {
        FUN_01ab69ac(PTR_DAT_03cda8c8);
        DAT_04124329 = '\x01';
      }
      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      if (DAT_04123eab == '\0') {
        FUN_01ab69ac(PTR_DAT_03cf0d80);
        FUN_01ab69ac(PTR_DAT_03cc0330);
        DAT_04123eab = '\x01';
      }
      plVar9 = local_80;
      if (local_80 == (long *)0x0) goto LAB_02eda104;
      lVar8 = *local_80;
      bVar2 = *(byte *)(*(long *)PTR_DAT_03cc0330 + 0x130);
      if ((*(byte *)(lVar8 + 0x130) < bVar2) ||
         (*(long *)(*(long *)(lVar8 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)PTR_DAT_03cc0330)) {
        uVar15 = uStack_78 & 0xffff;
        uVar7 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar7 != 0) {
          piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_03cf0d80) {
              puVar11 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_02eda0f0;
            }
            uVar7 = uVar7 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar7 != 0);
        }
        puVar11 = (undefined8 *)FUN_01a472ec(local_80,*(long *)PTR_DAT_03cf0d80,0);
LAB_02eda0f0:
        iVar6 = (*(code *)*puVar11)(plVar9,uVar15,puVar11[1]);
        if (iVar6 != 0) goto LAB_02eda104;
      }
      else {
        uVar7 = FUN_027e971c(local_80,0);
        if ((uVar7 & 1) != 0) goto LAB_02eda104;
      }
      local_64 = 0;
      *local_38 = 0;
      *(ulong *)(local_38 + 0x14) = uStack_78;
      *(long **)(local_38 + 0x12) = local_80;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(local_38 + 0x12,0);
      piVar12 = local_38;
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_01f2e2b8(piVar12 + 2,&local_80,local_38,*(undefined8 *)PTR_DAT_03d20990);
      iVar6 = 8;
    }
    FUN_019c1f7c(&local_b8);
    if ((iVar6 != 9) && (iVar6 != 0)) {
      return;
    }
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    uVar10 = *(undefined8 *)(lVar13 + 0x30);
    local_84[0] = '\0';
    FUN_027e0bd8(uVar10,local_84,0);
    *(undefined1 *)(lVar13 + 0x5d) = 1;
    if (*(int *)(lVar13 + 0x58) < 5) {
      *(undefined4 *)(lVar13 + 0x58) = 3;
    }
    if ((local_64 < 0) && (local_84[0] != '\0')) {
      OVRManager_<>c__<InitOVRManager>b__424_0(uVar10,0);
    }
    auVar16._8_8_ = local_a0._8_8_;
    auVar16._0_8_ = local_a0._0_8_;
    if ((*(char *)(lVar13 + 0x18) != '\0') || (local_a0 = auVar16, *(char *)(lVar13 + 0x5e) == '\0')
       ) goto LAB_02eda290;
    lVar13 = FUN_02ed5134(lVar13,*(undefined8 *)(local_38 + 0xe));
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    local_a0 = FUN_027e9a10(lVar13,0,0);
    uVar7 = FUN_026792ec(local_a0,0);
    if ((uVar7 & 1) == 0) {
      local_64 = 1;
      *local_38 = 1;
      *(undefined1 (*) [16])(local_38 + 0x16) = local_a0;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(local_38 + 0x16,0);
      piVar12 = local_38;
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_01f2e2b8(piVar12 + 2,local_a0,local_38,*(undefined8 *)PTR_DAT_03d20988);
      return;
    }
  }
  else {
    if (local_64 != 1) {
      param_1 = param_1 + 0x10;
      param_1[0] = 0;
      param_1[1] = 0;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(param_1,0);
      goto LAB_02ed9cec;
    }
    local_a0 = *(undefined1 (*) [16])(param_1 + 0x16);
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    local_64 = -1;
    *param_1 = -1;
  }
  FUN_02679308(local_a0,0);
LAB_02eda290:
  *local_38 = -2;
  piVar12 = local_38 + 0x10;
  piVar12[0] = 0;
  piVar12[1] = 0;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(piVar12,0);
  piVar12 = local_38 + 2;
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  FUN_02679adc(piVar12,0);
  return;
}


