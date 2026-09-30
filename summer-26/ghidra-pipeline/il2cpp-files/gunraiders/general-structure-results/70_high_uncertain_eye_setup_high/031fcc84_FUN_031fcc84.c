/*
FUNCTION_NAME: FUN_031fcc84
ENTRY_POINT: 031fcc84
PROGRAM: gunraiders-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_14;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_031fcc84(long param_1,long param_2,uint param_3)

{
  byte bVar1;
  undefined1 uVar2;
  short sVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  
  if ((DAT_04532711 & 1) == 0) {
    FUN_01c5d288(PTR_DAT_0422fa08);
    FUN_01c5d288(PTR_DAT_042303d0);
    FUN_01c5d288(PTR_DAT_042305b0);
    FUN_01c5d288(OVRPlugin_OVRP_1_60_0_TypeInfo);
    DAT_04532711 = 1;
  }
  switch(*(undefined4 *)(param_1 + 0x10)) {
  case 1:
    lVar8 = *(long *)(param_1 + 0x18);
    if (*(int *)(*(long *)PTR_DAT_0422fa08 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    bVar1 = FUN_03249994(param_2,0);
    if (lVar8 == 0) goto LAB_031fd07c;
    if (param_3 < *(uint *)(lVar8 + 0x18)) {
      *(byte *)(lVar8 + (int)param_3 + 0x20) = bVar1 & 1;
      return;
    }
    goto LAB_031fd080;
  case 3:
    if (param_2 == 0) goto LAB_031fd07c;
    sVar3 = FUN_0314e438(param_2,0,0);
    if ((sVar3 == 0x5f) &&
       (uVar6 = FUN_0315243c(param_2,*(undefined8 *)OVRPlugin_OVRP_1_60_0_TypeInfo,0),
       (uVar6 & 1) != 0)) {
      lVar8 = *(long *)(param_1 + 0x20);
      if (lVar8 != 0) {
        if (param_3 < *(uint *)(lVar8 + 0x18)) {
          *(undefined2 *)(lVar8 + (long)(int)param_3 * 2 + 0x20) = 0;
          return;
        }
        goto LAB_031fd080;
      }
      goto LAB_031fd07c;
    }
    lVar8 = *(long *)(param_1 + 0x20);
    if (*(int *)(*(long *)PTR_DAT_042303d0 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    uVar4 = FUN_0324c87c(param_2,0);
    goto joined_r0x031fcf84;
  case 6:
    lVar8 = *(long *)(param_1 + 0x28);
    if (*(int *)(*(long *)PTR_DAT_042305b0 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    uVar7 = FUN_03295500(0);
    uVar7 = FUN_032b9b48(param_2,uVar7,0);
    if (lVar8 == 0) goto LAB_031fd07c;
    if (*(uint *)(lVar8 + 0x18) <= param_3) goto LAB_031fd080;
    *(undefined8 *)(lVar8 + (long)(int)param_3 * 8 + 0x20) = uVar7;
    break;
  case 7:
    lVar8 = *(long *)(param_1 + 0x30);
    if (*(int *)(*(long *)PTR_DAT_042305b0 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    uVar7 = FUN_03295500(0);
    uVar4 = FUN_032ce460(param_2,uVar7,0);
    goto joined_r0x031fcf84;
  case 8:
    lVar8 = *(long *)(param_1 + 0x38);
    if (*(int *)(*(long *)PTR_DAT_042305b0 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    uVar7 = FUN_03295500(0);
    uVar5 = FUN_032cf7d0(param_2,uVar7,0);
    goto joined_r0x031fcfc0;
  case 9:
    lVar8 = *(long *)(param_1 + 0x40);
    if (*(int *)(*(long *)PTR_DAT_042305b0 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    uVar7 = FUN_03295500(0);
    uVar7 = FUN_032d0f3c(param_2,uVar7,0);
    goto joined_r0x031fd010;
  case 10:
    lVar8 = *(long *)(param_1 + 0x48);
    if (*(int *)(*(long *)PTR_DAT_042305b0 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    uVar7 = FUN_03295500(0);
    uVar2 = FUN_032e3230(param_2,uVar7,0);
    if (lVar8 == 0) goto LAB_031fd07c;
    if (*(uint *)(lVar8 + 0x18) <= param_3) goto LAB_031fd080;
    *(undefined1 *)(lVar8 + (int)param_3 + 0x20) = uVar2;
    break;
  case 0xb:
    lVar8 = *(long *)(param_1 + 0x50);
    if (*(int *)(*(long *)PTR_DAT_042305b0 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    uVar7 = FUN_03295500(0);
    uVar5 = FUN_032e4218(param_2,uVar7,0);
    if (lVar8 == 0) goto LAB_031fd07c;
    if (*(uint *)(lVar8 + 0x18) <= param_3) goto LAB_031fd080;
    *(undefined4 *)(lVar8 + (long)(int)param_3 * 4 + 0x20) = uVar5;
    break;
  case 0xe:
    lVar8 = *(long *)(param_1 + 0x58);
    if (*(int *)(*(long *)PTR_DAT_042305b0 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    uVar7 = FUN_03295500(0);
    uVar4 = FUN_032ed468(param_2,uVar7,0);
joined_r0x031fcf84:
    if (lVar8 == 0) {
LAB_031fd07c:
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    if (*(uint *)(lVar8 + 0x18) <= param_3) {
LAB_031fd080:
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4ac();
    }
    *(undefined2 *)(lVar8 + (long)(int)param_3 * 2 + 0x20) = uVar4;
    break;
  case 0xf:
    lVar8 = *(long *)(param_1 + 0x60);
    if (*(int *)(*(long *)PTR_DAT_042305b0 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    uVar7 = FUN_03295500(0);
    uVar5 = FUN_032ee3e0(param_2,uVar7,0);
joined_r0x031fcfc0:
    if (lVar8 == 0) goto LAB_031fd07c;
    if (param_3 < *(uint *)(lVar8 + 0x18)) {
      *(undefined4 *)(lVar8 + (long)(int)param_3 * 4 + 0x20) = uVar5;
      return;
    }
    goto LAB_031fd080;
  case 0x10:
    lVar8 = *(long *)(param_1 + 0x68);
    if (*(int *)(*(long *)PTR_DAT_042305b0 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    uVar7 = FUN_03295500(0);
    uVar7 = FUN_032ef248(param_2,uVar7,0);
joined_r0x031fd010:
    if (lVar8 == 0) goto LAB_031fd07c;
    if (param_3 < *(uint *)(lVar8 + 0x18)) {
      *(undefined8 *)(lVar8 + (long)(int)param_3 * 8 + 0x20) = uVar7;
      return;
    }
    goto LAB_031fd080;
  }
  return;
}


