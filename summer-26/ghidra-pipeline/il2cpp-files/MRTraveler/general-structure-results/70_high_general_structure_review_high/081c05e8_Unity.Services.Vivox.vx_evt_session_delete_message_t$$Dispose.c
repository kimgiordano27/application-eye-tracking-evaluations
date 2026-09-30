/*
FUNCTION_NAME: Unity.Services.Vivox.vx_evt_session_delete_message_t$$Dispose
ENTRY_POINT: 081c05e8
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x081c0b84) */

long Unity_Services_Vivox_vx_evt_session_delete_message_t__Dispose(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  undefined8 *unaff_x19;
  long unaff_x20;
  long *plVar13;
  long unaff_x21;
  long *unaff_x22;
  undefined8 *unaff_x23;
  long unaff_x24;
  undefined1 auVar14 [16];
  
  FUN_03c8f898(*(undefined8 *)(param_1 + 0x48));
  FUN_03c8f898(PTR_DAT_08f07920);
  FUN_03c8f898(PTR_DAT_08f07928);
  *(undefined1 *)(unaff_x24 + 0x2eb) = 1;
  lVar6 = thunk_FUN_03cf5234(*unaff_x23);
  FUN_06a4d5c4(lVar6,*unaff_x19);
  puVar1 = PTR_DAT_08f05540;
  if (unaff_x22 == (long *)0x0) {
LAB_081c0b78:
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  lVar10 = *unaff_x22;
  uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar11 != 0) {
    piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_08f05540) {
        puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
        goto LAB_081c0680;
      }
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar11 != 0);
  }
  puVar7 = (undefined8 *)FUN_03cf1348();
LAB_081c0680:
  puVar2 = PTR_DAT_08e7a2d8;
  uVar8 = (*(code *)*puVar7)();
  uVar11 = FUN_06f74e14(uVar8,0);
  if ((uVar11 & 1) == 0) {
    lVar10 = *unaff_x22;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
          puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_081c06ec;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar7 = (undefined8 *)FUN_03cf1348();
LAB_081c06ec:
    uVar8 = (*(code *)*puVar7)();
    uVar8 = FUN_06f683f8(*(undefined8 *)PTR_DAT_08e79048,uVar8,0);
    if (lVar6 == 0) goto LAB_081c0b78;
    FUN_06a4e380(lVar6,*(undefined8 *)PTR_DAT_08f05570,uVar8,*(undefined8 *)puVar2);
  }
  if (*(int *)(*(long *)PTR_DAT_08e69810 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  uVar8 = FUN_0859d55c(0);
  puVar5 = PTR_DAT_08f075c8;
  puVar4 = PTR_DAT_08f05568;
  puVar3 = PTR_DAT_08f05550;
  puVar7 = (undefined8 *)PTR_DAT_08f03748;
  puVar1 = PTR_DAT_08e69770;
  if (lVar6 == 0) goto LAB_081c0b78;
  FUN_06a4e380(lVar6,*(undefined8 *)PTR_DAT_08f05548,uVar8,*(undefined8 *)puVar2);
  if (**(char **)(*(long *)puVar5 + 0xb8) != '\0') {
    puVar7 = (undefined8 *)puVar3;
  }
  FUN_06a4e380(lVar6,*(undefined8 *)puVar4,*puVar7,*(undefined8 *)puVar2);
  uVar8 = FUN_03c8f97c(*(undefined8 *)puVar1,0);
  lVar10 = FUN_03c8f97c(*(undefined8 *)puVar1,2);
  puVar1 = PTR_DAT_08e78880;
  if (lVar10 == 0) goto LAB_081c0b78;
  if (*(int *)(lVar10 + 0x18) == 0) {
LAB_081c0b7c:
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb38();
  }
  *(undefined8 *)(lVar10 + 0x20) = *(undefined8 *)PTR_DAT_08e78880;
  thunk_FUN_03d233cc((undefined8 *)(lVar10 + 0x20));
  puVar3 = PTR_DAT_08e82db8;
  if (*(uint *)(lVar10 + 0x18) < 2) goto LAB_081c0b7c;
  *(undefined8 *)(lVar10 + 0x28) = *(undefined8 *)PTR_DAT_08ebfa98;
  uVar9 = thunk_FUN_03d233cc();
  uVar9 = Unity_Services_Vivox_vx_evt_session_archive_query_end_t__get_first_id(uVar9,lVar10);
  uVar11 = FUN_06f74e14(uVar9,0);
  if ((uVar11 & 1) == 0) {
    uVar11 = FUN_06a4e380(lVar6,*(undefined8 *)PTR_DAT_08e92b90,uVar9,*(undefined8 *)puVar2);
  }
  uVar9 = *(undefined8 *)puVar3;
  uVar8 = FUN_081c00d8(uVar11,uVar8);
  uVar11 = FUN_06f74e14(uVar8,0);
  if ((uVar11 & 1) != 0) {
    uVar11 = thunk_FUN_06f73d88(uVar9,*(undefined8 *)PTR_DAT_08e79190,0);
    if (((uVar11 & 1) == 0) &&
       (uVar11 = thunk_FUN_06f73d88(uVar9,*(undefined8 *)PTR_DAT_08e82ed8,0), (uVar11 & 1) == 0))
    goto LAB_081c08e4;
    uVar8 = *(undefined8 *)puVar1;
  }
  FUN_06a4e380(lVar6,*(undefined8 *)PTR_DAT_08e78878,uVar8,*(undefined8 *)puVar2);
LAB_081c08e4:
  uVar11 = Newtonsoft_Json_Serialization_DiagnosticsTraceWriter__set_LevelFilter();
  if ((uVar11 & 1) == 0) {
    uVar8 = FUN_070fa770();
    FUN_06a4e380(lVar6,*(undefined8 *)PTR_DAT_08f07918,uVar8,*(undefined8 *)puVar2);
  }
  uVar11 = FUN_06f74e14(*(undefined8 *)(unaff_x21 + 0x20),0);
  if ((uVar11 & 1) == 0) {
    FUN_06a4e380(lVar6,*(undefined8 *)PTR_DAT_08f07920,*(undefined8 *)(unaff_x21 + 0x20),
                 *(undefined8 *)puVar2);
  }
  uVar11 = FUN_06f74e14(*(undefined8 *)(unaff_x21 + 0x28),0);
  if ((uVar11 & 1) == 0) {
    FUN_06a4e380(lVar6,*(undefined8 *)PTR_DAT_08f07928,*(undefined8 *)(unaff_x21 + 0x28),
                 *(undefined8 *)puVar2);
  }
  if ((unaff_x20 == 0) || (plVar13 = *(long **)(unaff_x20 + 0x28), plVar13 == (long *)0x0)) {
    return lVar6;
  }
  lVar10 = *plVar13;
  uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar11 != 0) {
    piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_08e82e00) {
        puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
        goto LAB_081c09ec;
      }
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar11 != 0);
  }
  puVar7 = (undefined8 *)FUN_03cf1348(plVar13,*(long *)PTR_DAT_08e82e00,0);
LAB_081c09ec:
  plVar13 = (long *)(*(code *)*puVar7)(plVar13,puVar7[1]);
  puVar3 = PTR_DAT_08e82e08;
  puVar2 = PTR_DAT_08e7a650;
  puVar1 = PTR_DAT_08e6a290;
  if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  do {
    lVar10 = *plVar13;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
          puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_081c0a64;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar7 = (undefined8 *)FUN_03cf1348(plVar13,*(long *)puVar1,0);
LAB_081c0a64:
    uVar11 = (*(code *)*puVar7)(plVar13,puVar7[1]);
    if ((uVar11 & 1) == 0) break;
    lVar10 = *plVar13;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar3) {
          puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_081c0ac0;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar7 = (undefined8 *)FUN_03cf1348(plVar13,*(long *)puVar3,0);
LAB_081c0ac0:
    auVar14 = (*(code *)*puVar7)(plVar13,puVar7[1]);
    FUN_06a4e36c(lVar6,auVar14._0_8_,auVar14._8_8_,*(undefined8 *)puVar2);
  } while( true );
  if (plVar13 == (long *)0x0) {
    return lVar6;
  }
  lVar10 = *plVar13;
  uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar11 != 0) {
    piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_08e6a288) {
        puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
        goto LAB_081c0b48;
      }
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar11 != 0);
  }
  puVar7 = (undefined8 *)FUN_03cf1348(plVar13,*(long *)PTR_DAT_08e6a288,0);
LAB_081c0b48:
  (*(code *)*puVar7)(plVar13,puVar7[1]);
  return lVar6;
}


