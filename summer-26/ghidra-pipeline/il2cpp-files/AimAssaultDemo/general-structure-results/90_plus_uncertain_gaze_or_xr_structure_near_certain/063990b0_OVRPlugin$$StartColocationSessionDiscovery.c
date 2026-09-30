/*
FUNCTION_NAME: OVRPlugin$$StartColocationSessionDiscovery
ENTRY_POINT: 063990b0
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 113
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_2
*/


undefined8 OVRPlugin__StartColocationSessionDiscovery(long *param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined1 in_ZR;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  long *in_x9;
  int *piVar8;
  long unaff_x21;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  long in_stack_00000048;
  
code_r0x063990b0:
  if (!(bool)in_ZR) {
    in_x9 = (long *)0x0;
  }
LAB_063990b4:
  thunk_FUN_037aeb94(param_1,in_x9);
  if (*(long *)(in_stack_00000048 + 0x58) != 0) {
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
    puVar2 = PTR_DAT_07d8c148;
    while (uVar4 = FUN_05d64e98(in_stack_00000048 + 0x60,*(undefined8 *)puVar2), (uVar4 & 1) != 0) {
      if (*(long *)(in_stack_00000048 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      uVar4 = System_Globalization_GregorianCalendar__set_TwoDigitYearMax
                        (*(undefined8 *)(*(long *)(in_stack_00000048 + 0x58) + 0x60),
                         *(undefined8 *)(in_stack_00000048 + 0x70),0);
      if ((uVar4 & 1) != 0) {
        if (*(long *)(in_stack_00000048 + 0x58) != 0) {
          uVar5 = FUN_06373478(*(long *)(in_stack_00000048 + 0x58),0);
          *(undefined8 *)(in_stack_00000048 + 0x18) = uVar5;
          thunk_FUN_037aeb94();
          *(undefined4 *)(in_stack_00000048 + 0x10) = 1;
          return 1;
        }
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
    }
    FUN_06399248();
    *(undefined8 *)(in_stack_00000048 + 0x60) = 0;
    *(undefined8 *)(in_stack_00000048 + 0x68) = 0;
    *(undefined8 *)(in_stack_00000048 + 0x70) = 0;
  }
  *(undefined8 *)(in_stack_00000048 + 0x58) = 0;
  thunk_FUN_037aeb94((undefined8 *)(in_stack_00000048 + 0x58),0);
  do {
    plVar6 = *(long **)(in_stack_00000048 + 0x50);
    if (plVar6 == (long *)0x0) {
LAB_06398f54:
      plVar6 = (long *)0x0;
    }
    else {
      bVar1 = *(byte *)(*(long *)PTR_DAT_07db5908 + 0x130);
      if (*(byte *)(*plVar6 + 0x130) < bVar1) goto LAB_06398f54;
      if (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_07db5908)
      {
        plVar6 = (long *)0x0;
      }
    }
    uVar5 = FUN_06395b04(*(undefined8 *)(in_stack_00000048 + 0x48),plVar6);
    *(undefined8 *)(in_stack_00000048 + 0x50) = uVar5;
    thunk_FUN_037aeb94();
    plVar6 = (long *)(in_stack_00000048 + 0x50);
    in_x9 = (long *)*plVar6;
    if (in_x9 != (long *)0x0) break;
    *plVar6 = 0;
    thunk_FUN_037aeb94(plVar6,0);
    *(undefined8 *)(in_stack_00000048 + 0x48) = 0;
    thunk_FUN_037aeb94((undefined8 *)(in_stack_00000048 + 0x48),0);
    plVar6 = *(long **)(in_stack_00000048 + 0x40);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    lVar7 = *plVar6;
    uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar4 != 0) {
      piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_07d89700) {
          puVar3 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_06399040;
        }
        uVar4 = uVar4 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined8 *)FUN_0377596c(plVar6,*(long *)PTR_DAT_07d89700,0);
LAB_06399040:
    uVar4 = (*(code *)*puVar3)(plVar6,puVar3[1]);
    if ((uVar4 & 1) == 0) {
      FUN_06399298();
      *(undefined8 *)(in_stack_00000048 + 0x40) = 0;
      thunk_FUN_037aeb94((undefined8 *)(in_stack_00000048 + 0x40),0);
      return 0;
    }
    plVar6 = *(long **)(in_stack_00000048 + 0x40);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    lVar7 = *plVar6;
    uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar4 != 0) {
      piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_07d9b068) {
          puVar3 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_06398ee8;
        }
        uVar4 = uVar4 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined8 *)FUN_0377596c(plVar6,*(long *)PTR_DAT_07d9b068,0);
LAB_06398ee8:
    uVar5 = (*(code *)*puVar3)(plVar6,puVar3[1]);
    *(undefined8 *)(in_stack_00000048 + 0x48) = uVar5;
    thunk_FUN_037aeb94();
    *(undefined8 *)(in_stack_00000048 + 0x50) = *(undefined8 *)(in_stack_00000048 + 0x48);
    thunk_FUN_037aeb94();
  } while( true );
  lVar7 = *(long *)PTR_DAT_07db5468;
  bVar1 = *(byte *)(lVar7 + 0x130);
  if (*(byte *)(*in_x9 + 0x130) < bVar1) {
    plVar6 = (long *)0x0;
  }
  else {
    plVar6 = in_x9;
    if (*(long *)(*(long *)(*in_x9 + 200) + (ulong)bVar1 * 8 + -8) != lVar7) {
      plVar6 = (long *)0x0;
    }
  }
  param_1 = (long *)(in_stack_00000048 + 0x58);
  *param_1 = (long)plVar6;
  if (bVar1 <= *(byte *)(*in_x9 + 0x130)) goto LAB_063990a0;
  in_x9 = (long *)0x0;
  goto LAB_063990b4;
LAB_063990a0:
  in_ZR = *(long *)(*(long *)(*in_x9 + 200) + (ulong)bVar1 * 8 + -8) == lVar7;
  goto code_r0x063990b0;
}


