/*
FUNCTION_NAME: UniGLTF.RuntimeGltfInstance$$EnableUpdateWhenOffscreen
ENTRY_POINT: 02fa0730
PROGRAM: vrlegs-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_21;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x02fa0d00) */
/* WARNING: Removing unreachable block (ram,0x02fa0d4c) */

void UniGLTF_RuntimeGltfInstance__EnableUpdateWhenOffscreen(ulong param_1)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  int *piVar8;
  int *unaff_x19;
  long unaff_x20;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  int iVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  int iVar16;
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  long in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  char cStack000000000000007c;
  undefined8 in_stack_00000080;
  long in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined1 uStack00000000000000a8;
  undefined1 uStack00000000000000ac;
  undefined1 uStack00000000000000b8;
  undefined1 uStack00000000000000bc;
  
  if ((param_1 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03d25dc0);
    FUN_01ab69ac(PTR_DAT_03d25dc8);
    FUN_01ab69ac(PTR_DAT_03d25dd0);
    FUN_01ab69ac(PTR_DAT_03d25be0);
    FUN_01ab69ac(PTR_DAT_03d25dd8);
    FUN_01ab69ac(PTR_DAT_03d25de0);
    FUN_01ab69ac(PTR_DAT_03d25de8);
    FUN_01ab69ac(PTR_DAT_03d18b80);
    FUN_01ab69ac(PTR_DAT_03d1f860);
    FUN_01ab69ac(PTR_DAT_03d25df0);
    FUN_01ab69ac(PTR_DAT_03d25df8);
    FUN_01ab69ac(PTR_DAT_03d18a38);
    *(undefined1 *)(unaff_x20 + 0xdea) = 1;
  }
  cStack000000000000007c = '\0';
  in_stack_00000060 = 0;
  in_stack_00000068 = 0;
  in_stack_00000088 = 0;
  in_stack_00000080 = 0;
  in_stack_00000098 = 0;
  in_stack_00000090 = 0;
  in_stack_00000050 = 0;
  in_stack_00000058 = 0;
  iVar16 = *unaff_x19;
  lVar10 = *(long *)(unaff_x19 + 8);
  if (iVar16 != 1) {
    if (iVar16 == 0) {
      _in_stack_00000060 = *(undefined1 (*) [16])(unaff_x19 + 0x14);
      unaff_x19[0x14] = 0;
      unaff_x19[0x15] = 0;
      unaff_x19[0x16] = 0;
      unaff_x19[0x17] = 0;
      *unaff_x19 = -1;
    }
    else {
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      uVar11 = *(undefined8 *)(lVar10 + 0x40);
      uVar12 = *(undefined8 *)(lVar10 + 0xa8);
      uVar14 = *(undefined8 *)(unaff_x19 + 10);
      uVar15 = *(undefined8 *)(lVar10 + 0x78);
      uVar3 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03d18b80);
      FUN_02fa0f9c(uVar3,uVar11,uVar12,uVar14,uVar15);
      piVar8 = unaff_x19 + 0xe;
      *(undefined8 *)piVar8 = uVar3;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(piVar8,uVar3);
      plVar5 = (long *)(unaff_x19 + 0x10);
      *plVar5 = 0;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar5,0);
      *(undefined2 *)(unaff_x19 + 0x12) = 0;
      uVar3 = *(undefined8 *)(lVar10 + 0x128);
      cStack000000000000007c = '\0';
      FUN_027e0bd8(uVar3,&stack0x0000007c,0);
      FUN_02f9ed84(&stack0x00000030,lVar10,*(undefined8 *)piVar8);
      lVar7 = in_stack_00000038;
      *(byte *)(unaff_x19 + 0x12) = (byte)in_stack_00000030 & 1;
      *(byte *)((long)unaff_x19 + 0x49) = (byte)((ulong)in_stack_00000030 >> 8) & 1;
      *(undefined8 *)(unaff_x19 + 0x10) = in_stack_00000040;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar5);
      if ((iVar16 < 0) && (cStack000000000000007c != '\0')) {
        OVRManager_<>c__<InitOVRManager>b__424_0(uVar3,0);
      }
      lVar9 = *plVar5;
      if (lVar9 == 0) {
        if (lVar7 != 0) {
          _in_stack_00000050 = FUN_020a2c64(lVar7,0,*(undefined8 *)PTR_DAT_03d25df0);
          uVar4 = FUN_02189a30(&stack0x00000050,*(undefined8 *)PTR_DAT_03d25de8);
          if ((uVar4 & 1) == 0) {
            *unaff_x19 = 1;
            *(undefined1 (*) [16])(unaff_x19 + 0x18) = _in_stack_00000050;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0x18,0);
            if (*(int *)(*(long *)PTR_DAT_03d25be0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            FUN_01f07574(unaff_x19 + 2,&stack0x00000050);
            return;
          }
          goto LAB_02fa0978;
        }
        uVar3 = 0;
        goto LAB_02fa0998;
      }
      if (*(char *)((long)unaff_x19 + 0x49) == '\0') goto LAB_02fa0d30;
      if (*(long *)(unaff_x19 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      lVar10 = FUN_02eb74c0(*(long *)(unaff_x19 + 10),0,*(undefined8 *)(unaff_x19 + 0xc),0);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      _in_stack_00000060 = FUN_027e9a10(lVar10,0,0);
      uVar4 = FUN_026792ec(&stack0x00000060,0);
      if ((uVar4 & 1) == 0) {
        *unaff_x19 = 0;
        *(undefined1 (*) [16])(unaff_x19 + 0x14) = _in_stack_00000060;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0x14,0);
        if (*(int *)(*(long *)PTR_DAT_03d25be0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_01f07574(unaff_x19 + 2,&stack0x00000060);
        return;
      }
    }
    FUN_02679308(&stack0x00000060,0);
    lVar9 = *(long *)(unaff_x19 + 0x10);
LAB_02fa0d30:
    uVar3 = thunk_FUN_01a6ca08(PTR_DAT_03d25e00);
                    /* WARNING: Subroutine does not return */
    FUN_01ab6b14(lVar9,uVar3);
  }
  _in_stack_00000050 = *(undefined1 (*) [16])(unaff_x19 + 0x18);
  iVar16 = -1;
  unaff_x19[0x18] = 0;
  unaff_x19[0x19] = 0;
  unaff_x19[0x1a] = 0;
  unaff_x19[0x1b] = 0;
  *unaff_x19 = -1;
LAB_02fa0978:
  FUN_02189a7c(&stack0x00000050,&stack0x00000030,*(undefined8 *)PTR_DAT_03d25de0);
  uVar3 = in_stack_00000030;
  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
LAB_02fa0998:
  uVar11 = *(undefined8 *)(lVar10 + 0x128);
  cStack000000000000007c = '\0';
  FUN_027e0bd8(uVar11,&stack0x0000007c,0);
  lVar7 = *(long *)(lVar10 + 0xe8);
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  if (((*(char *)(lVar7 + 0x30) == '\0') || (*(char *)(lVar7 + 0x32) != '\0')) ||
     (plVar5 = *(long **)(lVar10 + 0xd8), plVar5 == (long *)0x0)) {
    uVar2 = 0;
  }
  else {
    lVar7 = *plVar5;
    uVar12 = *(undefined8 *)(lVar10 + 0x40);
    uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar4 != 0) {
      piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_03d1f860) {
          puVar6 = (undefined8 *)(lVar7 + (long)(*piVar8 + 1) * 0x10 + 0x138);
          goto LAB_02fa0ce0;
        }
        uVar4 = uVar4 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar4 != 0);
    }
    puVar6 = (undefined8 *)FUN_01a472ec(plVar5,*(long *)PTR_DAT_03d1f860,1);
LAB_02fa0ce0:
    uVar2 = (*(code *)*puVar6)(plVar5,uVar12,puVar6[1]);
    uVar2 = ~uVar2 & 1;
  }
  if ((char)unaff_x19[0x12] == '\0') {
    lVar7 = 0x171;
    if (uVar2 != 0) {
      lVar7 = 0x181;
    }
    lVar9 = 0x174;
    if (uVar2 != 0) {
      lVar9 = 0x184;
    }
    if ((*(char *)(lVar10 + lVar7) != '\0') && (*(int *)(lVar10 + lVar9) != 0)) {
      plVar5 = *(long **)(unaff_x19 + 0xe);
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      iVar1 = (**(code **)(*plVar5 + 0x228))(plVar5,*(undefined8 *)(*plVar5 + 0x230));
      if (iVar1 < 400) {
        if (*(long *)(unaff_x19 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        lVar7 = *(long *)(*(long *)(unaff_x19 + 10) + 0x48);
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        *(undefined1 *)(lVar7 + 0x18) = 1;
      }
    }
    if (*(long *)(lVar10 + 0xf8) != 0) {
      FUN_02eb357c(*(long *)(lVar10 + 0xf8),0);
    }
    in_stack_00000038 = 0;
    in_stack_00000030 = 0;
    in_stack_00000048 = 0;
    in_stack_00000040 = 0;
    uStack00000000000000bc = 0;
    uStack00000000000000b8 = 0;
    FUN_020fafcc(&stack0x00000030,*(undefined8 *)(unaff_x19 + 0xe),(long)&stack0x000000b8 + 4,
                 &stack0x000000b8,uVar3,0,*(undefined8 *)PTR_DAT_03d25df8);
    uVar12 = 0;
    iVar13 = 0x14;
    iVar1 = 0x14;
    in_stack_00000088 = in_stack_00000038;
    in_stack_00000080 = in_stack_00000030;
    in_stack_00000098 = in_stack_00000048;
    in_stack_00000090 = in_stack_00000040;
  }
  else {
    if (*(char *)(lVar10 + 0xe0) != '\0') {
      *(undefined1 *)(lVar10 + 0xe0) = 0;
      if (*(long *)(lVar10 + 0x90) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      FUN_02f7bee0(*(long *)(lVar10 + 0x90),*(undefined8 *)PTR_DAT_03d18a38,0);
    }
    uVar12 = FUN_02f9e5ac(lVar10,*(undefined8 *)(unaff_x19 + 10),*(undefined8 *)(unaff_x19 + 0xe),
                          uVar3,*(undefined8 *)(unaff_x19 + 0xc));
    iVar13 = 0x16;
    iVar1 = 0x16;
  }
  if ((iVar16 < 0) && (iVar1 = iVar13, cStack000000000000007c != '\0')) {
    OVRManager_<>c__<InitOVRManager>b__424_0(uVar11,0);
  }
  if (iVar1 != 0x16) {
    if (iVar1 == 0x14) goto LAB_02fa0b5c;
    if (iVar1 != 0) {
      return;
    }
  }
  uStack00000000000000a8 = *(undefined1 *)((long)unaff_x19 + 0x49);
  in_stack_00000038 = 0;
  in_stack_00000030 = 0;
  in_stack_00000048 = 0;
  in_stack_00000040 = 0;
  uStack00000000000000ac = 1;
  FUN_020fafcc(&stack0x00000030,*(undefined8 *)(unaff_x19 + 0xe),(long)&stack0x000000a8 + 4,
               &stack0x000000a8,uVar3,uVar12,*(undefined8 *)PTR_DAT_03d25df8);
  in_stack_00000088 = in_stack_00000038;
  in_stack_00000080 = in_stack_00000030;
  in_stack_00000098 = in_stack_00000048;
  in_stack_00000090 = in_stack_00000040;
LAB_02fa0b5c:
  *unaff_x19 = -2;
  piVar8 = unaff_x19 + 0xe;
  piVar8[0] = 0;
  piVar8[1] = 0;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(piVar8,0);
  piVar8 = unaff_x19 + 0x10;
  piVar8[0] = 0;
  piVar8[1] = 0;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(piVar8,0);
  in_stack_00000038 = in_stack_00000088;
  in_stack_00000030 = in_stack_00000080;
  in_stack_00000048 = in_stack_00000098;
  in_stack_00000040 = in_stack_00000090;
  if (*(int *)(*(long *)PTR_DAT_03d25be0 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  in_stack_00000018 = in_stack_00000038;
  in_stack_00000010 = in_stack_00000030;
  in_stack_00000028 = in_stack_00000048;
  in_stack_00000020 = in_stack_00000040;
  FUN_02145584(unaff_x19 + 2,&stack0x00000010,*(undefined8 *)PTR_DAT_03d25dd0);
  return;
}


