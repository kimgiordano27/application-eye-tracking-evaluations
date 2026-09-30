/*
FUNCTION_NAME: Skonec.Weather.WWISReqest.<RequestWeatherInfo>d__16$$System.IDisposable.Dispose
ENTRY_POINT: 03ed2b34
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_14;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void Skonec_Weather_WWISReqest_<RequestWeatherInfo>d__16__System_IDisposable_Dispose(ulong param_1)

{
  undefined4 uVar1;
  undefined1 auVar2 [16];
  undefined *puVar3;
  int iVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  int *piVar10;
  int *unaff_x19;
  long *plVar11;
  long unaff_x20;
  long lVar12;
  long *plStack0000000000000000;
  ulong uStack0000000000000008;
  long *in_stack_00000010;
  ulong in_stack_00000018;
  
  if ((param_1 & 1) == 0) {
    FUN_03c8f898(PTR_DAT_08e70e40);
    FUN_03c8f898(PTR_DAT_08e710d0);
    FUN_03c8f898(PTR_DAT_08e710d8);
    FUN_03c8f898(PTR_DAT_08e69640);
    *(undefined1 *)(unaff_x20 + 0x75d) = 1;
  }
  lVar12 = *(long *)(unaff_x19 + 6);
  if (*unaff_x19 == 0) {
    auVar2 = *(undefined1 (*) [16])(unaff_x19 + 10);
    unaff_x19[10] = 0;
    unaff_x19[0xb] = 0;
    unaff_x19[0xc] = 0;
    unaff_x19[0xd] = 0;
    *unaff_x19 = -1;
  }
  else {
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    if (*(long *)(lVar12 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    lVar5 = FUN_03ea9194(*(long *)(lVar12 + 0x18),0);
    if (*(long *)(lVar12 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    if (lVar5 == *(long *)(*(long *)(lVar12 + 0x30) + 0x10)) {
      if (*(long *)(lVar12 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      FUN_03ec01a8(*(long *)(lVar12 + 0x18),lVar5,unaff_x19[8],0);
    }
    puVar3 = PTR_DAT_08e69640;
    uVar1 = *(undefined4 *)(lVar12 + 0x38);
    if (*(int *)(*(long *)PTR_DAT_08e69640 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    _in_stack_00000010 = FUN_07c93950(uVar1,0,8,0,0,0);
    thunk_FUN_03d233cc(&stack0x00000010,0);
    auVar2 = _in_stack_00000010;
    uVar9 = in_stack_00000018;
    plVar11 = in_stack_00000010;
    if (DAT_0940ffed == '\0') {
      FUN_03c8f898(PTR_DAT_08e69640);
      DAT_0940ffed = '\x01';
    }
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    if (DAT_0940ffee == '\0') {
      FUN_03c8f898(PTR_DAT_08e69648);
      DAT_0940ffee = '\x01';
    }
    if (plVar11 != (long *)0x0) {
      lVar5 = *plVar11;
      uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar8 != 0) {
        piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_08e69648) {
            puVar6 = (undefined8 *)(lVar5 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_03ed2cdc;
          }
          uVar8 = uVar8 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar8 != 0);
      }
      puVar6 = (undefined8 *)FUN_03cf1348(plVar11,*(long *)PTR_DAT_08e69648,0);
LAB_03ed2cdc:
      iVar4 = (*(code *)*puVar6)(plVar11,uVar9 & 0xffff,puVar6[1]);
      if (iVar4 == 0) {
        *unaff_x19 = 0;
        *(undefined1 (*) [16])(unaff_x19 + 10) = auVar2;
        thunk_FUN_03d233cc(unaff_x19 + 10,0);
        FUN_03edaadc(unaff_x19 + 2);
        return;
      }
    }
  }
  uStack0000000000000008 = auVar2._8_8_;
  plStack0000000000000000 = auVar2._0_8_;
  if (DAT_0940ffef == '\0') {
    FUN_03c8f898(PTR_DAT_08e69648);
    DAT_0940ffef = '\x01';
  }
  if (plStack0000000000000000 != (long *)0x0) {
    lVar5 = *plStack0000000000000000;
    uVar9 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_08e69648) {
          puVar6 = (undefined8 *)(lVar5 + (long)(*piVar10 + 2) * 0x10 + 0x138);
          goto LAB_03ed2d74;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar6 = (undefined8 *)FUN_03cf1348(plStack0000000000000000,*(long *)PTR_DAT_08e69648,2);
LAB_03ed2d74:
    (*(code *)*puVar6)(plStack0000000000000000,uStack0000000000000008 & 0xffff,puVar6[1]);
  }
  if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  if (*(long *)(lVar12 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  lVar5 = *(long *)(*(long *)(lVar12 + 0x18) + 0xd8);
  uVar7 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e70e40);
  FUN_04cee708(uVar7,lVar12,*(undefined8 *)PTR_DAT_08e710d8,0);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  puVar6 = (undefined8 *)(lVar5 + 0xd8);
  *puVar6 = uVar7;
  thunk_FUN_03d233cc(puVar6,uVar7);
  if (*(long *)(lVar12 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  lVar5 = *(long *)(*(long *)(lVar12 + 0x18) + 0xd8);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  FUN_03e55628(lVar5,*(undefined8 *)(lVar12 + 0x30),unaff_x19[8],0);
  *unaff_x19 = -2;
  if (DAT_0940fff2 == '\0') {
    FUN_03c8f898(PTR_DAT_08e69650);
    DAT_0940fff2 = '\x01';
  }
  plVar11 = *(long **)(unaff_x19 + 2);
  if (plVar11 != (long *)0x0) {
    lVar12 = *plVar11;
    uVar9 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_08e69650) {
          puVar6 = (undefined8 *)(lVar12 + (long)(*piVar10 + 2) * 0x10 + 0x138);
          goto LAB_03ed2e7c;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar6 = (undefined8 *)FUN_03cf1348(plVar11,*(long *)PTR_DAT_08e69650,2);
LAB_03ed2e7c:
    (*(code *)*puVar6)(plVar11,puVar6[1]);
  }
  return;
}


