/*
FUNCTION_NAME: FUN_08122d70
ENTRY_POINT: 08122d70
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_10;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4;frame_or_lifecycle_behavior
*/


void FUN_08122d70(long param_1,long param_2)

{
  uint uVar1;
  undefined *puVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  int *piVar10;
  long *plVar11;
  
  puVar2 = PTR_DAT_08f02a38;
  if ((DAT_09428d01 & 1) == 0) {
    FUN_03c8f898(PTR_DAT_08f02a40);
    FUN_03c8f898(PTR_DAT_08f02a48);
    FUN_03c8f898(PTR_DAT_08f02a50);
    FUN_03c8f898(PTR_DAT_08e69590);
    FUN_03c8f898(PTR_DAT_08f02a58);
    FUN_03c8f898(PTR_DAT_08f02a38);
    DAT_09428d01 = 1;
  }
  plVar3 = (long *)thunk_FUN_03cf5234(*(undefined8 *)puVar2);
  FUN_07145224(plVar3,0);
  if (plVar3 == (long *)0x0) goto LAB_081230fc;
  plVar3[2] = param_1;
  thunk_FUN_03d233cc(plVar3 + 2,param_1);
  uVar1 = *(uint *)(param_1 + 0x88);
  if ((uVar1 | 4) != 4) {
    plVar3 = *(long **)(param_1 + 0xa8);
    if (plVar3 == (long *)0x0) goto LAB_081230fc;
    lVar5 = *plVar3;
    uVar4 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar4 != 0) {
      piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_08f02a48) {
          puVar6 = (undefined8 *)(lVar5 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_08122f9c;
        }
        uVar4 = uVar4 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar4 != 0);
    }
    puVar6 = (undefined8 *)FUN_03cf1348(plVar3,*(long *)PTR_DAT_08f02a48,0);
LAB_08122f9c:
    uVar7 = (*(code *)*puVar6)(plVar3,uVar1,puVar6[1]);
    lVar5 = *(long *)(param_1 + 0x10);
    if (lVar5 != 0) {
      (**(code **)(lVar5 + 0x18))(*(undefined8 *)(lVar5 + 0x40),uVar7,*(undefined8 *)(lVar5 + 0x28))
      ;
    }
    if (*(int *)(*(long *)PTR_DAT_08e69590 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    goto LAB_081230e8;
  }
  uVar4 = FUN_08122580(param_1);
  if ((uVar4 & 1) == 0) {
    if ((param_2 == 0) || (*(char *)(param_2 + 0x10) != '\0')) {
      plVar3 = *(long **)(param_1 + 0x98);
      uVar7 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08f02a40);
      if (plVar3 != (long *)0x0) {
        lVar5 = *plVar3;
        uVar4 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar4 != 0) {
          piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_08f02a50) {
              lVar5 = lVar5 + (long)*piVar10 * 0x10 + 0x138;
              goto FUN_08122ff8;
            }
            uVar4 = uVar4 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar4 != 0);
        }
        lVar5 = FUN_03cf1348(plVar3,*(long *)PTR_DAT_08f02a50,0);
FUN_08122ff8:
        uVar8 = *(undefined8 *)(lVar5 + 8);
        goto LAB_08123000;
      }
LAB_081230fc:
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    if (*(long *)(param_1 + 0x80) == 0) goto LAB_081230fc;
    FUN_08123108();
    plVar3 = *(long **)(param_1 + 0xa8);
    if (plVar3 == (long *)0x0) goto LAB_081230fc;
    lVar9 = *plVar3;
    uVar4 = (ulong)*(ushort *)(lVar9 + 0x12e);
    lVar5 = *(long *)PTR_DAT_08f02a48;
    if (uVar4 != 0) {
      piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar5) goto LAB_08123084;
        uVar4 = uVar4 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar4 != 0);
    }
  }
  else {
    if (*(long *)(param_1 + 0x80) == 0) goto LAB_081230fc;
    lVar5 = FUN_0812ec44();
    plVar11 = plVar3 + 3;
    *plVar11 = lVar5;
    thunk_FUN_03d233cc(plVar11,lVar5);
    uVar4 = FUN_06f74e14(*plVar11,0);
    if ((uVar4 & 1) == 0) {
      uVar7 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08f02a40);
      uVar8 = *(undefined8 *)PTR_DAT_08f02a58;
LAB_08123000:
      FUN_04d4bab0(uVar7,plVar3,uVar8,0);
      FUN_08123214(param_1,uVar7,1);
      return;
    }
    if (*(long *)(param_1 + 0x80) == 0) goto LAB_081230fc;
    FUN_08123108();
    plVar3 = *(long **)(param_1 + 0xa8);
    if (plVar3 == (long *)0x0) goto LAB_081230fc;
    lVar9 = *plVar3;
    uVar4 = (ulong)*(ushort *)(lVar9 + 0x12e);
    lVar5 = *(long *)PTR_DAT_08f02a48;
    if (uVar4 != 0) {
      piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar5) goto LAB_08123084;
        uVar4 = uVar4 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar4 != 0);
    }
  }
  puVar6 = (undefined8 *)FUN_03cf1348(plVar3,lVar5,3);
Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_session_updated_t_session_handle_get:
  uVar7 = (*(code *)*puVar6)(plVar3,puVar6[1]);
  lVar5 = *(long *)(param_1 + 0x10);
  if (lVar5 != 0) {
    (**(code **)(lVar5 + 0x18))(*(undefined8 *)(lVar5 + 0x40),uVar7,*(undefined8 *)(lVar5 + 0x28));
  }
  FUN_08125864(param_1,0);
  if (*(int *)(*(long *)PTR_DAT_08e69590 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
LAB_081230e8:
  FUN_07178f58(uVar7,0);
  return;
LAB_08123084:
  puVar6 = (undefined8 *)(lVar9 + (long)(*piVar10 + 3) * 0x10 + 0x138);
  goto Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_session_updated_t_session_handle_get;
}


