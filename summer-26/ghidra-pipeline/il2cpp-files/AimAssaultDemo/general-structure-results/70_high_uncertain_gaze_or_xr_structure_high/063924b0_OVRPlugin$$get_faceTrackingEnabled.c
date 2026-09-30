/*
FUNCTION_NAME: OVRPlugin$$get_faceTrackingEnabled
ENTRY_POINT: 063924b0
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 77
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_15;functionality_gaze_retrieval_or_extraction
*/


undefined8 OVRPlugin__get_faceTrackingEnabled(long param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  ulong in_x9;
  int *piVar11;
  long *in_x10;
  long *unaff_x19;
  undefined8 uVar12;
  long unaff_x21;
  undefined8 uVar13;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  long in_stack_00000048;
  
code_r0x063924b0:
  plVar2 = (long *)(in_stack_00000048 + 0x58);
  *plVar2 = (long)in_x10;
  if ((uint)*(byte *)(*unaff_x19 + 0x130) < (uint)in_x9) {
    plVar9 = (long *)0x0;
  }
  else {
    plVar9 = unaff_x19;
    if (*(long *)(*(long *)(*unaff_x19 + 200) + in_x9 * 8 + -8) != param_1) {
      plVar9 = (long *)0x0;
    }
  }
  do {
    thunk_FUN_037aeb94(plVar2,plVar9);
    if (*(long *)(in_stack_00000048 + 0x58) == 0) {
      lVar10 = *(long *)(in_stack_00000048 + 0x40);
      if (lVar10 != 0) {
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        if (*(char *)(lVar10 + 0x20) != '\0') {
          lVar10 = thunk_FUN_037a15ac(PTR_DAT_07d88078);
          if (*(int *)(lVar10 + 0xe4) == 0) {
            thunk_FUN_03798b70();
          }
          uVar7 = FUN_061d52c8(0);
          if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0373b7b4();
          }
          uVar8 = *(undefined8 *)(unaff_x21 + 0x10);
          lVar10 = thunk_FUN_037a15ac(PTR_DAT_07db6580);
          if (*(int *)(lVar10 + 0xe4) == 0) {
            thunk_FUN_03798b70();
          }
          lVar10 = thunk_FUN_037a15ac(PTR_DAT_07db6580);
          lVar10 = *(long *)(*(long *)(lVar10 + 0xb8) + 8);
          if (lVar10 == 0) {
            uVar12 = thunk_FUN_037a15ac(PTR_DAT_07d86678);
            uVar3 = thunk_FUN_037a15ac(PTR_DAT_07db6588);
            lVar10 = thunk_FUN_037a15ac(PTR_DAT_07db6580);
            if (*(int *)(lVar10 + 0xe4) == 0) {
              thunk_FUN_03798b70();
            }
            lVar10 = thunk_FUN_037a15ac(PTR_DAT_07db6580);
            uVar13 = **(undefined8 **)(lVar10 + 0xb8);
            thunk_FUN_037a15ac(PTR_DAT_07d93278);
            lVar10 = thunk_FUN_037788cc();
            uVar4 = thunk_FUN_037a15ac(PTR_DAT_07db6590);
            FUN_044a4918(lVar10,uVar13,uVar4,0);
            lVar5 = thunk_FUN_037a15ac(PTR_DAT_07db6580);
            *(long *)(*(long *)(lVar5 + 0xb8) + 8) = lVar10;
            lVar5 = thunk_FUN_037a15ac(PTR_DAT_07db6580);
            thunk_FUN_037aeb94(*(long *)(lVar5 + 0xb8) + 8,lVar10);
          }
          else {
            uVar12 = thunk_FUN_037a15ac(PTR_DAT_07d86678);
            uVar3 = thunk_FUN_037a15ac(PTR_DAT_07db6588);
          }
          uVar4 = thunk_FUN_037a15ac(PTR_DAT_07d93288);
          uVar8 = FUN_03f6a6a8(uVar8,lVar10,uVar4);
          uVar8 = FUN_060c2498(uVar12,uVar8,0);
          if (unaff_x19 != (long *)0x0) {
            plVar2 = (long *)thunk_FUN_0374b7cc(unaff_x19,0);
            if (plVar2 != (long *)0x0) {
              uVar12 = (**(code **)(*plVar2 + 0x1b8))(plVar2,*(undefined8 *)(*plVar2 + 0x1c0));
              uVar7 = FUN_06334b04(uVar3,uVar7,uVar8,uVar12,0);
              thunk_FUN_037a15ac(PTR_DAT_07d967c8);
              uVar8 = thunk_FUN_037788cc();
              FUN_062d6d20(uVar8,uVar7,0);
              uVar7 = thunk_FUN_037a15ac(PTR_DAT_07db6598);
                    /* WARNING: Subroutine does not return */
              FUN_0373b680(uVar8,uVar7);
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
      while (uVar6 = FUN_05d64e98(in_stack_00000048 + 0x60,*(undefined8 *)PTR_DAT_07d8c148),
            (uVar6 & 1) != 0) {
        *(undefined8 *)(in_stack_00000048 + 0x78) = *(undefined8 *)(in_stack_00000048 + 0x70);
        thunk_FUN_037aeb94();
        if (*(long *)(in_stack_00000048 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        lVar10 = FUN_06377518(*(long *)(in_stack_00000048 + 0x58),
                              *(undefined8 *)(in_stack_00000048 + 0x78),0);
        if (lVar10 != 0) {
          *(long *)(in_stack_00000048 + 0x18) = lVar10;
          thunk_FUN_037aeb94((long *)(in_stack_00000048 + 0x18));
          *(undefined4 *)(in_stack_00000048 + 0x10) = 1;
          return 1;
        }
        lVar10 = *(long *)(in_stack_00000048 + 0x40);
        if (lVar10 != 0) {
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0373b7b4();
          }
          if (*(char *)(lVar10 + 0x20) != '\0') {
            lVar10 = thunk_FUN_037a15ac(PTR_DAT_07d88078);
            if (*(int *)(lVar10 + 0xe4) == 0) {
              thunk_FUN_03798b70();
            }
            uVar7 = FUN_061d52c8(0);
            uVar12 = *(undefined8 *)(in_stack_00000048 + 0x78);
            uVar8 = thunk_FUN_037a15ac(PTR_DAT_07db6558);
            uVar7 = FUN_063349e4(uVar8,uVar7,uVar12,0);
            thunk_FUN_037a15ac(PTR_DAT_07d967c8);
            uVar8 = thunk_FUN_037788cc();
            FUN_062d6d20(uVar8,uVar7,0);
            uVar7 = thunk_FUN_037a15ac(PTR_DAT_07db6598);
                    /* WARNING: Subroutine does not return */
            FUN_0373b680(uVar8,uVar7);
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
    plVar2 = *(long **)(in_stack_00000048 + 0x50);
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    lVar10 = *plVar2;
    uVar6 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar6 != 0) {
      piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_07d89700) {
          puVar1 = (undefined8 *)(lVar10 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_063923dc;
        }
        uVar6 = uVar6 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar6 != 0);
    }
    puVar1 = (undefined8 *)FUN_0377596c(plVar2,*(long *)PTR_DAT_07d89700,0);
LAB_063923dc:
    uVar6 = (*(code *)*puVar1)(plVar2,puVar1[1]);
    if ((uVar6 & 1) == 0) {
      FUN_063929f4();
      *(undefined8 *)(in_stack_00000048 + 0x50) = 0;
      thunk_FUN_037aeb94((undefined8 *)(in_stack_00000048 + 0x50),0);
      return 0;
    }
    plVar2 = *(long **)(in_stack_00000048 + 0x50);
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    lVar10 = *plVar2;
    uVar6 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar6 != 0) {
      piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_07d9b068) {
          puVar1 = (undefined8 *)(lVar10 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_06392450;
        }
        uVar6 = uVar6 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar6 != 0);
    }
    puVar1 = (undefined8 *)FUN_0377596c(plVar2,*(long *)PTR_DAT_07d9b068,0);
LAB_06392450:
    unaff_x19 = (long *)(*(code *)*puVar1)(plVar2,puVar1[1]);
    if (unaff_x19 != (long *)0x0) break;
    plVar2 = (long *)(in_stack_00000048 + 0x58);
    *plVar2 = 0;
    plVar9 = (long *)0x0;
  } while( true );
  param_1 = *(long *)PTR_DAT_07db4d40;
  in_x9 = (ulong)*(byte *)(param_1 + 0x130);
  if (*(byte *)(*unaff_x19 + 0x130) < *(byte *)(param_1 + 0x130)) {
    in_x10 = (long *)0x0;
  }
  else {
    in_x10 = unaff_x19;
    if (*(long *)(*(long *)(*unaff_x19 + 200) + in_x9 * 8 + -8) != param_1) {
      in_x10 = (long *)0x0;
    }
  }
  goto code_r0x063924b0;
}


