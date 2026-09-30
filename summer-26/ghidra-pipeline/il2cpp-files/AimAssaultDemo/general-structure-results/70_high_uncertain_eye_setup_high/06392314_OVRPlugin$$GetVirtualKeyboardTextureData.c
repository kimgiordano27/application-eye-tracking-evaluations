/*
FUNCTION_NAME: OVRPlugin$$GetVirtualKeyboardTextureData
ENTRY_POINT: 06392314
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_13;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__GetVirtualKeyboardTextureData(undefined8 *param_1)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long *plVar12;
  undefined8 uVar13;
  long unaff_x21;
  undefined8 uVar14;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  long in_stack_00000048;
  
  uVar2 = (*(code *)*param_1)();
  *(undefined8 *)(in_stack_00000048 + 0x50) = uVar2;
  thunk_FUN_037aeb94();
  *(undefined4 *)(in_stack_00000048 + 0x10) = 0xfffffffd;
  do {
    plVar12 = *(long **)(in_stack_00000048 + 0x50);
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    lVar9 = *plVar12;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_07d89700) {
          puVar3 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_063923dc;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar3 = (undefined8 *)FUN_0377596c(plVar12,*(long *)PTR_DAT_07d89700,0);
LAB_063923dc:
    uVar10 = (*(code *)*puVar3)(plVar12,puVar3[1]);
    if ((uVar10 & 1) == 0) {
      FUN_063929f4();
      *(undefined8 *)(in_stack_00000048 + 0x50) = 0;
      thunk_FUN_037aeb94((undefined8 *)(in_stack_00000048 + 0x50),0);
      return 0;
    }
    plVar12 = *(long **)(in_stack_00000048 + 0x50);
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    lVar9 = *plVar12;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_07d9b068) {
          puVar3 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_06392450;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar3 = (undefined8 *)FUN_0377596c(plVar12,*(long *)PTR_DAT_07d9b068,0);
LAB_06392450:
    plVar12 = (long *)(*(code *)*puVar3)(plVar12,puVar3[1]);
    if (plVar12 == (long *)0x0) {
      *(undefined8 *)(in_stack_00000048 + 0x58) = 0;
      plVar8 = (long *)0x0;
    }
    else {
      lVar9 = *(long *)PTR_DAT_07db4d40;
      bVar1 = *(byte *)(lVar9 + 0x130);
      if (*(byte *)(*plVar12 + 0x130) < bVar1) {
        plVar8 = (long *)0x0;
      }
      else {
        plVar8 = plVar12;
        if (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar1 * 8 + -8) != lVar9) {
          plVar8 = (long *)0x0;
        }
      }
      *(long **)(in_stack_00000048 + 0x58) = plVar8;
      if (*(byte *)(*plVar12 + 0x130) < bVar1) {
        plVar8 = (long *)0x0;
      }
      else {
        plVar8 = plVar12;
        if (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar1 * 8 + -8) != lVar9) {
          plVar8 = (long *)0x0;
        }
      }
    }
    thunk_FUN_037aeb94(in_stack_00000048 + 0x58,plVar8);
    if (*(long *)(in_stack_00000048 + 0x58) == 0) {
      lVar9 = *(long *)(in_stack_00000048 + 0x40);
      if (lVar9 != 0) {
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        if (*(char *)(lVar9 + 0x20) != '\0') {
          lVar9 = thunk_FUN_037a15ac(PTR_DAT_07d88078);
          if (*(int *)(lVar9 + 0xe4) == 0) {
            thunk_FUN_03798b70();
          }
          uVar2 = FUN_061d52c8(0);
          if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0373b7b4();
          }
          uVar7 = *(undefined8 *)(unaff_x21 + 0x10);
          lVar9 = thunk_FUN_037a15ac(PTR_DAT_07db6580);
          if (*(int *)(lVar9 + 0xe4) == 0) {
            thunk_FUN_03798b70();
          }
          lVar9 = thunk_FUN_037a15ac(PTR_DAT_07db6580);
          lVar9 = *(long *)(*(long *)(lVar9 + 0xb8) + 8);
          if (lVar9 == 0) {
            uVar13 = thunk_FUN_037a15ac(PTR_DAT_07d86678);
            uVar4 = thunk_FUN_037a15ac(PTR_DAT_07db6588);
            lVar9 = thunk_FUN_037a15ac(PTR_DAT_07db6580);
            if (*(int *)(lVar9 + 0xe4) == 0) {
              thunk_FUN_03798b70();
            }
            lVar9 = thunk_FUN_037a15ac(PTR_DAT_07db6580);
            uVar14 = **(undefined8 **)(lVar9 + 0xb8);
            thunk_FUN_037a15ac(PTR_DAT_07d93278);
            lVar9 = thunk_FUN_037788cc();
            uVar5 = thunk_FUN_037a15ac(PTR_DAT_07db6590);
            FUN_044a4918(lVar9,uVar14,uVar5,0);
            lVar6 = thunk_FUN_037a15ac(PTR_DAT_07db6580);
            *(long *)(*(long *)(lVar6 + 0xb8) + 8) = lVar9;
            lVar6 = thunk_FUN_037a15ac(PTR_DAT_07db6580);
            thunk_FUN_037aeb94(*(long *)(lVar6 + 0xb8) + 8,lVar9);
          }
          else {
            uVar13 = thunk_FUN_037a15ac(PTR_DAT_07d86678);
            uVar4 = thunk_FUN_037a15ac(PTR_DAT_07db6588);
          }
          uVar5 = thunk_FUN_037a15ac(PTR_DAT_07d93288);
          uVar7 = FUN_03f6a6a8(uVar7,lVar9,uVar5);
          uVar7 = FUN_060c2498(uVar13,uVar7,0);
          if (plVar12 != (long *)0x0) {
            plVar12 = (long *)thunk_FUN_0374b7cc(plVar12,0);
            if (plVar12 != (long *)0x0) {
              uVar13 = (**(code **)(*plVar12 + 0x1b8))(plVar12,*(undefined8 *)(*plVar12 + 0x1c0));
              uVar2 = FUN_06334b04(uVar4,uVar2,uVar7,uVar13,0);
              thunk_FUN_037a15ac(PTR_DAT_07d967c8);
              uVar7 = thunk_FUN_037788cc();
              FUN_062d6d20(uVar7,uVar2,0);
              uVar2 = thunk_FUN_037a15ac(PTR_DAT_07db6598);
                    /* WARNING: Subroutine does not return */
              FUN_0373b680(uVar7,uVar2);
            }
                    /* WARNING: Subroutine does not return */
            FUN_0373b7b4();
          }
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
      }
    }
    else {
      if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      if (*(long *)(unaff_x21 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      FUN_049cf910(&stack0x00000008,*(long *)(unaff_x21 + 0x10),*(undefined8 *)PTR_DAT_07d8c170);
      in_stack_00000028 = in_stack_00000010;
      in_stack_00000020 = in_stack_00000008;
      in_stack_00000030 = in_stack_00000018;
      *(undefined8 *)(in_stack_00000048 + 0x70) = in_stack_00000018;
      *(undefined8 *)(in_stack_00000048 + 0x68) = in_stack_00000010;
      *(undefined8 *)(in_stack_00000048 + 0x60) = in_stack_00000008;
      thunk_FUN_037aeb94(in_stack_00000048 + 0x60,0);
      *(undefined4 *)(in_stack_00000048 + 0x10) = 0xfffffffc;
      while (uVar10 = FUN_05d64e98(in_stack_00000048 + 0x60,*(undefined8 *)PTR_DAT_07d8c148),
            (uVar10 & 1) != 0) {
        *(undefined8 *)(in_stack_00000048 + 0x78) = *(undefined8 *)(in_stack_00000048 + 0x70);
        thunk_FUN_037aeb94();
        if (*(long *)(in_stack_00000048 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        lVar9 = FUN_06377518(*(long *)(in_stack_00000048 + 0x58),
                             *(undefined8 *)(in_stack_00000048 + 0x78),0);
        if (lVar9 != 0) {
          *(long *)(in_stack_00000048 + 0x18) = lVar9;
          thunk_FUN_037aeb94((long *)(in_stack_00000048 + 0x18));
          *(undefined4 *)(in_stack_00000048 + 0x10) = 1;
          return 1;
        }
        lVar9 = *(long *)(in_stack_00000048 + 0x40);
        if (lVar9 != 0) {
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0373b7b4();
          }
          if (*(char *)(lVar9 + 0x20) != '\0') {
            lVar9 = thunk_FUN_037a15ac(PTR_DAT_07d88078);
            if (*(int *)(lVar9 + 0xe4) == 0) {
              thunk_FUN_03798b70();
            }
            uVar2 = FUN_061d52c8(0);
            uVar13 = *(undefined8 *)(in_stack_00000048 + 0x78);
            uVar7 = thunk_FUN_037a15ac(PTR_DAT_07db6558);
            uVar2 = FUN_063349e4(uVar7,uVar2,uVar13,0);
            thunk_FUN_037a15ac(PTR_DAT_07d967c8);
            uVar7 = thunk_FUN_037788cc();
            FUN_062d6d20(uVar7,uVar2,0);
            uVar2 = thunk_FUN_037a15ac(PTR_DAT_07db6598);
                    /* WARNING: Subroutine does not return */
            FUN_0373b680(uVar7,uVar2);
          }
        }
        *(undefined8 *)(in_stack_00000048 + 0x78) = 0;
        thunk_FUN_037aeb94((undefined8 *)(in_stack_00000048 + 0x78),0);
      }
      FUN_063929a4();
      *(undefined8 *)(in_stack_00000048 + 0x60) = 0;
      *(undefined8 *)(in_stack_00000048 + 0x68) = 0;
      *(undefined8 *)(in_stack_00000048 + 0x70) = 0;
    }
    *(undefined8 *)(in_stack_00000048 + 0x58) = 0;
    thunk_FUN_037aeb94((undefined8 *)(in_stack_00000048 + 0x58),0);
  } while( true );
}


