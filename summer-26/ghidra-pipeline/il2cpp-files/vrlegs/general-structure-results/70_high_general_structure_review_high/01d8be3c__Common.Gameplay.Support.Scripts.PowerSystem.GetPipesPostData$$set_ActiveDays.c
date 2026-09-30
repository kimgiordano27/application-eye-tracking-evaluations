/*
FUNCTION_NAME: _Common.Gameplay.Support.Scripts.PowerSystem.GetPipesPostData$$set_ActiveDays
ENTRY_POINT: 01d8be3c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_18;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


undefined8 _Common_Gameplay_Support_Scripts_PowerSystem_GetPipesPostData__set_ActiveDays(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  undefined8 *puVar12;
  long lVar13;
  long *plVar14;
  undefined1 in_w8;
  int *piVar15;
  long unaff_x19;
  undefined8 *unaff_x20;
  ulong unaff_x21;
  undefined4 unaff_w22;
  byte unaff_w23;
  long unaff_x24;
  int iStack0000000000000014;
  long lStack0000000000000018;
  ulong uStack0000000000000028;
  
  *(undefined1 *)(unaff_x24 + 0x56) = in_w8;
  uStack0000000000000028 = 0;
  lStack0000000000000018 = 0;
  iStack0000000000000014 = 0;
  lVar6 = thunk_FUN_01a89e68(*unaff_x20);
  FUN_01da6f18(lVar6,0);
  puVar2 = PTR_DAT_03cc0330;
  if (lVar6 == 0) goto LAB_01d8c504;
  *(long *)(lVar6 + 0x10) = unaff_x19;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists((long *)(lVar6 + 0x10));
  *(byte *)(lVar6 + 0x18) = unaff_w23 & 1;
  *(undefined4 *)(lVar6 + 0x1c) = unaff_w22;
  if (*(int *)(unaff_x19 + 0x38) == 0) {
    *(undefined4 *)(unaff_x19 + 0x28) = 0;
    *(undefined8 *)(unaff_x19 + 0x20) = 0;
    FUN_01d8c5b0();
    if (*(int *)(unaff_x19 + 0x3c) == 0) {
      lVar10 = *(long *)(unaff_x19 + 0x30);
      *(undefined4 *)(unaff_x19 + 0x3c) = 1;
      if (lVar10 != 0) {
        FUN_01db1970(lVar10,0);
      }
      if (*(int *)(*(long *)PTR_DAT_03cbfb70 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_01d8c978();
      uVar11 = uStack0000000000000028 >> 0x20;
      uStack0000000000000028 = uStack0000000000000028 & 0xffffffff00000000;
      if (((*(long *)(unaff_x19 + 0x30) != 0) && (*(long *)(unaff_x19 + 0x90) != 0)) &&
         (*(int *)(*(long *)(unaff_x19 + 0x90) + 0x20) == 1)) {
        if (*(char *)(unaff_x19 + 0x1d4) != '\0') {
          uStack0000000000000028 = CONCAT44((int)uVar11,*(undefined4 *)(unaff_x19 + 0x1d0));
        }
        FUN_01d8cb18();
      }
      FUN_01da71dc(lVar6,0);
      if (*(long *)(unaff_x19 + 0x40) != 0) {
        FUN_022393ac(*(long *)(unaff_x19 + 0x40),&stack0x00000018,
                     (undefined1 *)((long)register0x00000008 + 0x2c),&stack0x00000014,
                     *(undefined8 *)PTR_DAT_03cccaf8);
        puVar1 = PTR_DAT_03cbdf88;
        lVar10 = (long)uStack0000000000000028._4_4_;
        if (uStack0000000000000028._4_4_ < iStack0000000000000014) {
          lVar9 = lVar10 * 0x18 + 0x28;
          do {
            if (lStack0000000000000018 == 0) goto LAB_01d8c504;
            if (*(uint *)(lStack0000000000000018 + 0x18) <= (uint)lVar10) goto LAB_01d8c508;
            uVar7 = *(undefined8 *)(lStack0000000000000018 + lVar9);
            if (DAT_04120ed7 == '\0') {
              FUN_01ab69ac(puVar1);
              DAT_04120ed7 = '\x01';
            }
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar11 = FUN_036d36b4(uVar7,0);
            if ((uVar11 & 1) != 0) {
              if (lStack0000000000000018 == 0) goto LAB_01d8c504;
              if (*(uint *)(lStack0000000000000018 + 0x18) <= (uint)lVar10) goto LAB_01d8c508;
              FUN_01d8ccd8();
            }
            lVar10 = lVar10 + 1;
            lVar9 = lVar9 + 0x18;
          } while (lVar10 < iStack0000000000000014);
        }
        if (*(long *)(unaff_x19 + 0x40) == 0) goto LAB_01d8c504;
        FUN_0223935c(*(long *)(unaff_x19 + 0x40),*(undefined8 *)PTR_DAT_03cccaf0);
      }
      _Common_Gameplay_Scripts_GameVisuals_MarkController__OnEnable
                (*(undefined8 *)(unaff_x19 + 0x58),0);
      if (*(long *)(unaff_x19 + 0x30) != 0) {
        FUN_01db1ab8(*(long *)(unaff_x19 + 0x30),0);
      }
      *(undefined8 *)(unaff_x19 + 0x30) = 0;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                ((long *)(unaff_x19 + 0x30),0);
      plVar8 = *(long **)(unaff_x19 + 0x1b0);
      if (plVar8 != (long *)0x0) {
        lVar10 = *plVar8;
        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar11 != 0) {
          piVar15 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_03cccae8) {
              puVar12 = (undefined8 *)(lVar10 + (long)(*piVar15 + 1) * 0x10 + 0x138);
              goto LAB_01d8c1c0;
            }
            uVar11 = uVar11 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar11 != 0);
        }
        puVar12 = (undefined8 *)FUN_01a472ec(plVar8,*(long *)PTR_DAT_03cccae8,1);
LAB_01d8c1c0:
        (*(code *)*puVar12)(plVar8);
      }
      *(undefined8 *)(unaff_x19 + 0x1b0) = 0;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0x1b0,0);
      *(undefined8 *)(unaff_x19 + 0x1b8) = 0;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0x1b8,0);
      FUN_01d8cf40();
      *(undefined4 *)(unaff_x19 + 0x188) = 0;
      uVar7 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03ccb200);
      FUN_01da78d4(uVar7,0,0);
      *(undefined8 *)(unaff_x19 + 400) = uVar7;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 400,uVar7);
      uVar11 = FUN_036e8b18(&stack0x00000028,0);
      if ((uVar11 & 1) == 0) {
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        if (DAT_04120e63 == '\0') {
          FUN_01ab69ac(PTR_DAT_03cc0330);
          DAT_04120e63 = '\x01';
        }
        lVar10 = *(long *)puVar2;
        if (*(int *)(lVar10 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar10 = *(long *)puVar2;
        }
        lVar10 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x30);
      }
      else {
        lVar10 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cccb20);
        FUN_01da73dc(lVar10,0);
        if (*(int *)(*(long *)PTR_DAT_03cc0af8 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_01fa0a24();
        lVar9 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cccb10);
        FUN_0209f9ac(lVar9,*(undefined8 *)PTR_DAT_03cccb00);
        if (lVar10 == 0) goto LAB_01d8c504;
        plVar8 = (long *)(lVar10 + 0x10);
        *plVar8 = lVar9;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar8,lVar9);
        puVar2 = PTR_DAT_03cc0270;
        if (*(int *)(*(long *)PTR_DAT_03cc0270 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        iVar3 = FUN_036e96c8(0);
        if (iVar3 == 1) {
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar4 = FUN_036e9830(0);
          uVar5 = FUN_036e9144(uVar4,uStack0000000000000028 & 0xffffffff,0);
          FUN_01d0a0f0(uVar5 & 1,0);
          puVar1 = PTR_DAT_03cbed58;
          if (*(int *)(*(long *)PTR_DAT_03cbed58 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          FUN_02760d74(0);
          uVar7 = thunk_FUN_01a89a98(*(undefined8 *)puVar1);
          uVar7 = FUN_025b4d3c(*(undefined8 *)PTR_DAT_03cccb28,uVar7,0);
          FUN_036eabb0(uVar7,0);
        }
        uVar11 = uStack0000000000000028 & 0xffffffff;
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        lVar9 = UnityEngine_UIElements_RectField_<>c__<DescribeFields>b__0_4(uVar11,0);
        uVar7 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cc0c10);
        FUN_02060754(uVar7,lVar10,*(undefined8 *)PTR_DAT_03cccb18,0);
        if (lVar9 == 0) goto LAB_01d8c504;
        UnityEngine_Yoga_YogaNode__set_Height(lVar9,uVar7,0);
        if (*plVar8 == 0) goto LAB_01d8c504;
        lVar10 = *(long *)(*plVar8 + 0x10);
      }
      lVar9 = FUN_01d8c9f8();
      plVar8 = (long *)FUN_01ab6a94(*(undefined8 *)PTR_DAT_03ccaf38,2);
      if (plVar8 == (long *)0x0) {
LAB_01d8c504:
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      if ((lVar10 != 0) &&
         (lVar13 = thunk_FUN_01a89d6c(lVar10,*(undefined8 *)(*plVar8 + 0x40)), lVar13 == 0)) {
LAB_01d8c50c:
        uVar7 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
        FUN_01ab6b14(uVar7,0);
      }
      if ((int)plVar8[3] == 0) {
LAB_01d8c508:
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      plVar8[4] = lVar10;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar8 + 4,lVar10);
      if ((lVar9 != 0) &&
         (lVar10 = thunk_FUN_01a89d6c(lVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar10 == 0))
      goto LAB_01d8c50c;
      if (*(uint *)(plVar8 + 3) < 2) goto LAB_01d8c508;
      plVar14 = plVar8 + 5;
      *plVar14 = lVar9;
    }
    else {
      if (*(int *)(*(long *)PTR_DAT_03cbfb70 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_01d8c978();
      if (((*(byte *)(unaff_x19 + 0x3c) & 1) != 0) || ((unaff_x21 & 1) == 0)) goto LAB_01d8bec4;
      FUN_01da71dc(lVar6,0);
      plVar8 = (long *)FUN_01ab6a94(*(undefined8 *)PTR_DAT_03ccaf38,1);
      lVar9 = FUN_01d8c9f8();
      if (plVar8 == (long *)0x0) goto LAB_01d8c504;
      if ((lVar9 != 0) &&
         (lVar10 = thunk_FUN_01a89d6c(lVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar10 == 0))
      goto LAB_01d8c50c;
      if ((int)plVar8[3] == 0) goto LAB_01d8c508;
      plVar14 = plVar8 + 4;
      *plVar14 = lVar9;
    }
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar14,lVar9);
    uVar7 = FUN_01da6f20(lVar6,plVar8,0);
  }
  else {
    *(undefined2 *)(unaff_x19 + 0x21) = 0;
    *(undefined1 *)(unaff_x19 + 0x23) = 0;
    *(undefined1 *)(unaff_x19 + 0x20) = 1;
    *(undefined4 *)(unaff_x19 + 0x24) = unaff_w22;
    *(byte *)(unaff_x19 + 0x28) = unaff_w23 & 1;
    *(undefined2 *)(unaff_x19 + 0x29) = 0;
    *(undefined1 *)(unaff_x19 + 0x2b) = 0;
    if (*(long *)(unaff_x19 + 0x30) != 0) {
      FUN_01db50ec(*(long *)(unaff_x19 + 0x30),0);
    }
LAB_01d8bec4:
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    if (DAT_04120e63 == '\0') {
      FUN_01ab69ac(PTR_DAT_03cc0330);
      DAT_04120e63 = '\x01';
    }
    lVar6 = *(long *)puVar2;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar6 = *(long *)puVar2;
    }
    uVar7 = *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x30);
  }
  return uVar7;
}


