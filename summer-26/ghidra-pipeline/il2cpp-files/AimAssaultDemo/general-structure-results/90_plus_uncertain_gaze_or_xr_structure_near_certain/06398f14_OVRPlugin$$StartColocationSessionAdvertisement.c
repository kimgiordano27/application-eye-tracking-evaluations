/*
FUNCTION_NAME: OVRPlugin$$StartColocationSessionAdvertisement
ENTRY_POINT: 06398f14
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 113
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_2
*/


undefined8 OVRPlugin__StartColocationSessionAdvertisement(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  int *piVar9;
  long unaff_x21;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  long in_stack_00000048;
  
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
    uVar3 = FUN_06395b04(*(undefined8 *)(in_stack_00000048 + 0x48),plVar6);
    *(undefined8 *)(in_stack_00000048 + 0x50) = uVar3;
    thunk_FUN_037aeb94();
    plVar7 = (long *)(in_stack_00000048 + 0x50);
    plVar6 = (long *)*plVar7;
    if (plVar6 == (long *)0x0) {
      *plVar7 = 0;
      thunk_FUN_037aeb94(plVar7,0);
      *(undefined8 *)(in_stack_00000048 + 0x48) = 0;
      thunk_FUN_037aeb94((undefined8 *)(in_stack_00000048 + 0x48),0);
      plVar6 = *(long **)(in_stack_00000048 + 0x40);
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      lVar8 = *plVar6;
      uVar5 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar5 != 0) {
        piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_07d89700) {
            puVar4 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_06399040;
          }
          uVar5 = uVar5 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar5 != 0);
      }
      puVar4 = (undefined8 *)FUN_0377596c(plVar6,*(long *)PTR_DAT_07d89700,0);
LAB_06399040:
      uVar5 = (*(code *)*puVar4)(plVar6,puVar4[1]);
      if ((uVar5 & 1) == 0) {
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
      lVar8 = *plVar6;
      uVar5 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar5 != 0) {
        piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_07d9b068) {
            puVar4 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_06398ee8;
          }
          uVar5 = uVar5 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar5 != 0);
      }
      puVar4 = (undefined8 *)FUN_0377596c(plVar6,*(long *)PTR_DAT_07d9b068,0);
LAB_06398ee8:
      uVar3 = (*(code *)*puVar4)(plVar6,puVar4[1]);
      *(undefined8 *)(in_stack_00000048 + 0x48) = uVar3;
      thunk_FUN_037aeb94();
      *(undefined8 *)(in_stack_00000048 + 0x50) = *(undefined8 *)(in_stack_00000048 + 0x48);
      thunk_FUN_037aeb94();
    }
    else {
      lVar8 = *(long *)PTR_DAT_07db5468;
      bVar1 = *(byte *)(lVar8 + 0x130);
      if (*(byte *)(*plVar6 + 0x130) < bVar1) {
        plVar7 = (long *)0x0;
      }
      else {
        plVar7 = plVar6;
        if (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) != lVar8) {
          plVar7 = (long *)0x0;
        }
      }
      *(long *)(in_stack_00000048 + 0x58) = (long)plVar7;
      if (*(byte *)(*plVar6 + 0x130) < bVar1) {
        plVar6 = (long *)0x0;
      }
      else if (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) != lVar8) {
        plVar6 = (long *)0x0;
      }
      thunk_FUN_037aeb94((long *)(in_stack_00000048 + 0x58),plVar6);
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
        while (uVar5 = FUN_05d64e98(in_stack_00000048 + 0x60,*(undefined8 *)puVar2),
              (uVar5 & 1) != 0) {
          if (*(long *)(in_stack_00000048 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0373b7b4();
          }
          uVar5 = System_Globalization_GregorianCalendar__set_TwoDigitYearMax
                            (*(undefined8 *)(*(long *)(in_stack_00000048 + 0x58) + 0x60),
                             *(undefined8 *)(in_stack_00000048 + 0x70),0);
          if ((uVar5 & 1) != 0) {
            if (*(long *)(in_stack_00000048 + 0x58) != 0) {
              uVar3 = FUN_06373478(*(long *)(in_stack_00000048 + 0x58),0);
              *(undefined8 *)(in_stack_00000048 + 0x18) = uVar3;
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
    }
  } while( true );
}


