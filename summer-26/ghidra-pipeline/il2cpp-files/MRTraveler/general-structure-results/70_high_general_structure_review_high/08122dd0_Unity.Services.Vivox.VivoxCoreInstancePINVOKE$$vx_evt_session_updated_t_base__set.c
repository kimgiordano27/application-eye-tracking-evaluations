/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_evt_session_updated_t_base__set
ENTRY_POINT: 08122dd0
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_10;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_6;frame_or_lifecycle_behavior
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_session_updated_t_base__set(void)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  int *piVar9;
  long unaff_x19;
  long unaff_x20;
  long *plVar10;
  long unaff_x21;
  undefined8 *unaff_x22;
  
  FUN_03c8f898();
  FUN_03c8f898(PTR_DAT_08f02a38);
  *(undefined1 *)(unaff_x21 + 0xd01) = 1;
  plVar2 = (long *)thunk_FUN_03cf5234(*unaff_x22);
  FUN_07145224(plVar2,0);
  if (plVar2 == (long *)0x0) goto LAB_081230fc;
  plVar2[2] = unaff_x19;
  thunk_FUN_03d233cc();
  uVar1 = *(uint *)(unaff_x19 + 0x88);
  if ((uVar1 | 4) != 4) {
    plVar2 = *(long **)(unaff_x19 + 0xa8);
    if (plVar2 == (long *)0x0) goto LAB_081230fc;
    lVar4 = *plVar2;
    uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar3 != 0) {
      piVar9 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_08f02a48) {
          puVar5 = (undefined8 *)(lVar4 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_08122f9c;
        }
        uVar3 = uVar3 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar3 != 0);
    }
    puVar5 = (undefined8 *)FUN_03cf1348(plVar2,*(long *)PTR_DAT_08f02a48,0);
LAB_08122f9c:
    uVar6 = (*(code *)*puVar5)(plVar2,uVar1,puVar5[1]);
    lVar4 = *(long *)(unaff_x19 + 0x10);
    if (lVar4 != 0) {
      (**(code **)(lVar4 + 0x18))(*(undefined8 *)(lVar4 + 0x40),uVar6,*(undefined8 *)(lVar4 + 0x28))
      ;
    }
    if (*(int *)(*(long *)PTR_DAT_08e69590 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    goto LAB_081230e8;
  }
  uVar3 = FUN_08122580();
  if ((uVar3 & 1) == 0) {
    if ((unaff_x20 == 0) || (*(char *)(unaff_x20 + 0x10) != '\0')) {
      plVar2 = *(long **)(unaff_x19 + 0x98);
      uVar6 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08f02a40);
      if (plVar2 != (long *)0x0) {
        lVar4 = *plVar2;
        uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar3 != 0) {
          piVar9 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_08f02a50) {
              lVar4 = lVar4 + (long)*piVar9 * 0x10 + 0x138;
              goto FUN_08122ff8;
            }
            uVar3 = uVar3 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar3 != 0);
        }
        lVar4 = FUN_03cf1348(plVar2,*(long *)PTR_DAT_08f02a50,0);
FUN_08122ff8:
        uVar7 = *(undefined8 *)(lVar4 + 8);
        goto LAB_08123000;
      }
LAB_081230fc:
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    if (*(long *)(unaff_x19 + 0x80) == 0) goto LAB_081230fc;
    FUN_08123108();
    plVar2 = *(long **)(unaff_x19 + 0xa8);
    if (plVar2 == (long *)0x0) goto LAB_081230fc;
    lVar8 = *plVar2;
    uVar3 = (ulong)*(ushort *)(lVar8 + 0x12e);
    lVar4 = *(long *)PTR_DAT_08f02a48;
    if (uVar3 != 0) {
      piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar4) goto LAB_08123084;
        uVar3 = uVar3 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar3 != 0);
    }
  }
  else {
    if (*(long *)(unaff_x19 + 0x80) == 0) goto LAB_081230fc;
    lVar4 = FUN_0812ec44();
    plVar10 = plVar2 + 3;
    *plVar10 = lVar4;
    thunk_FUN_03d233cc(plVar10,lVar4);
    uVar3 = FUN_06f74e14(*plVar10,0);
    if ((uVar3 & 1) == 0) {
      uVar6 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08f02a40);
      uVar7 = *(undefined8 *)PTR_DAT_08f02a58;
LAB_08123000:
      FUN_04d4bab0(uVar6,plVar2,uVar7,0);
      FUN_08123214();
      return;
    }
    if (*(long *)(unaff_x19 + 0x80) == 0) goto LAB_081230fc;
    FUN_08123108();
    plVar2 = *(long **)(unaff_x19 + 0xa8);
    if (plVar2 == (long *)0x0) goto LAB_081230fc;
    lVar8 = *plVar2;
    uVar3 = (ulong)*(ushort *)(lVar8 + 0x12e);
    lVar4 = *(long *)PTR_DAT_08f02a48;
    if (uVar3 != 0) {
      piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar4) goto LAB_08123084;
        uVar3 = uVar3 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar3 != 0);
    }
  }
  puVar5 = (undefined8 *)FUN_03cf1348(plVar2,lVar4,3);
  goto Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_session_updated_t_session_handle_get;
LAB_08123084:
  puVar5 = (undefined8 *)(lVar8 + (long)(*piVar9 + 3) * 0x10 + 0x138);
Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_session_updated_t_session_handle_get:
  uVar6 = (*(code *)*puVar5)(plVar2,puVar5[1]);
  lVar4 = *(long *)(unaff_x19 + 0x10);
  if (lVar4 != 0) {
    (**(code **)(lVar4 + 0x18))(*(undefined8 *)(lVar4 + 0x40),uVar6,*(undefined8 *)(lVar4 + 0x28));
  }
  FUN_08125864();
  if (*(int *)(*(long *)PTR_DAT_08e69590 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
LAB_081230e8:
  FUN_07178f58(uVar6,0);
  return;
}


