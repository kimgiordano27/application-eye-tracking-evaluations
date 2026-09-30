/*
FUNCTION_NAME: OVRPlugin$$GetSpaceBoundary2D
ENTRY_POINT: 027fffcc
PROGRAM: vrlegs-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_3
*/


undefined8 OVRPlugin__GetSpaceBoundary2D(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined2 *puVar6;
  undefined1 *puVar7;
  undefined4 *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long *unaff_x19;
  long unaff_x20;
  
  FUN_01ab69ac(*(undefined8 *)(param_1 + 0x370));
  FUN_01ab69ac(PTR_DAT_03cbeb38);
  FUN_01ab69ac(PTR_DAT_03cbebc0);
  FUN_01ab69ac(PTR_DAT_03cc4b20);
  FUN_01ab69ac(PTR_DAT_03cc5378);
  FUN_01ab69ac(PTR_DAT_03cc4ad8);
  FUN_01ab69ac(PTR_DAT_03ccc8c0);
  FUN_01ab69ac(PTR_DAT_03cbede8);
  *(undefined1 *)(unaff_x20 + 0x2a6) = 1;
  puVar2 = PTR_DAT_03cfdb48;
  if (unaff_x19 != (long *)0x0) {
    uVar4 = thunk_FUN_01a5dd74();
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01a58e78(*(long *)puVar2);
    }
    uVar3 = FUN_02816a74(uVar4,0);
    switch(uVar3) {
    case 2:
      if (*(int *)(*(long *)PTR_DAT_03cbedd0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      if (*(long *)(*unaff_x19 + 0x40) == *(long *)(*(long *)PTR_DAT_03cc02b0 + 0x40)) {
        puVar6 = (undefined2 *)thunk_FUN_01a89fbc();
        uVar4 = FUN_027fee28(*puVar6);
        return uVar4;
      }
      break;
    default:
      thunk_FUN_01a6ca08(PTR_DAT_03cc41f8);
      FUN_01876390();
      uVar4 = FUN_0271c480(0);
      FUN_018748a8();
      uVar10 = thunk_FUN_01a5dd74();
      uVar11 = thunk_FUN_01a6ca08(PTR_DAT_03cfdb50);
      uVar4 = FUN_0282f8b0(uVar11,uVar4,uVar10,0);
      thunk_FUN_01a6ca08(PTR_DAT_03cbdfd0);
      uVar10 = thunk_FUN_01a89e68();
      FUN_026b274c(uVar10,uVar4,0);
      uVar4 = thunk_FUN_01a6ca08(PTR_DAT_03cfdb58);
                    /* WARNING: Subroutine does not return */
      FUN_01ab6b14(uVar10,uVar4);
    case 4:
      if (*(int *)(*(long *)PTR_DAT_03cbedd0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      if (*(long *)(*unaff_x19 + 0x40) == *(long *)(*(long *)PTR_DAT_03cbeb20 + 0x40)) {
        puVar7 = (undefined1 *)thunk_FUN_01a89fbc();
        uVar4 = FUN_027fedbc(*puVar7);
        return uVar4;
      }
      break;
    case 6:
      if (*(int *)(*(long *)PTR_DAT_03cbedd0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      if (*(long *)(*unaff_x19 + 0x40) == *(long *)(*(long *)PTR_DAT_03cc5370 + 0x40)) {
        puVar7 = (undefined1 *)thunk_FUN_01a89fbc();
        uVar4 = FUN_027ff8c0(*puVar7);
        return uVar4;
      }
      break;
    case 8:
      if (*(int *)(*(long *)PTR_DAT_03cbedd0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      if (*(long *)(*unaff_x19 + 0x40) == *(long *)(*(long *)PTR_DAT_03cc5368 + 0x40)) {
        puVar6 = (undefined2 *)thunk_FUN_01a89fbc();
        uVar4 = FUN_027fefcc(*puVar6);
        return uVar4;
      }
      break;
    case 10:
      if (*(int *)(*(long *)PTR_DAT_03cbedd0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      if (*(long *)(*unaff_x19 + 0x40) == *(long *)(*(long *)PTR_DAT_03cc5378 + 0x40)) {
        puVar6 = (undefined2 *)thunk_FUN_01a89fbc();
        uVar4 = OVRPlugin__LocateSpace(*puVar6);
        return uVar4;
      }
      break;
    case 0xc:
      if (*(int *)(*(long *)PTR_DAT_03cbedd0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      if (*(long *)(*unaff_x19 + 0x40) == *(long *)(*(long *)PTR_DAT_03cbeda8 + 0x40)) {
        puVar8 = (undefined4 *)thunk_FUN_01a89fbc();
        uVar4 = FUN_027fef60(*puVar8);
        return uVar4;
      }
      break;
    case 0xe:
      if (*(int *)(*(long *)PTR_DAT_03cbedd0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      if (*(long *)(*unaff_x19 + 0x40) == *(long *)(*(long *)PTR_DAT_03cbeb28 + 0x40)) {
        puVar7 = (undefined1 *)thunk_FUN_01a89fbc();
        uVar4 = FUN_027ff854(*puVar7);
        return uVar4;
      }
      break;
    case 0x10:
      if (*(int *)(*(long *)PTR_DAT_03cbedd0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      if (*(long *)(*unaff_x19 + 0x40) == *(long *)(*(long *)PTR_DAT_03cc4ad8 + 0x40)) {
        puVar8 = (undefined4 *)thunk_FUN_01a89fbc();
        uVar4 = FUN_027ff0a4(*puVar8);
        return uVar4;
      }
      break;
    case 0x12:
      if (*(int *)(*(long *)PTR_DAT_03cbedd0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      if (*(long *)(*unaff_x19 + 0x40) == *(long *)(*(long *)PTR_DAT_03cbf0c0 + 0x40)) {
        puVar9 = (undefined8 *)thunk_FUN_01a89fbc();
        uVar4 = FUN_027ff110(*puVar9);
        return uVar4;
      }
      break;
    case 0x14:
      if (*(int *)(*(long *)PTR_DAT_03cbedd0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      if (*(long *)(*unaff_x19 + 0x40) == *(long *)(*(long *)PTR_DAT_03ccc8c0 + 0x40)) {
        puVar9 = (undefined8 *)thunk_FUN_01a89fbc();
        uVar4 = FUN_027ff21c(*puVar9);
        return uVar4;
      }
      break;
    case 0x16:
      if (*(int *)(*(long *)PTR_DAT_03cbedd0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      if (*(long *)(*unaff_x19 + 0x40) == *(long *)(*(long *)PTR_DAT_03cbeb38 + 0x40)) {
        puVar8 = (undefined4 *)thunk_FUN_01a89fbc();
        uVar4 = FUN_027ff288(*puVar8);
        return uVar4;
      }
      break;
    case 0x18:
      if (*(int *)(*(long *)PTR_DAT_03cbedd0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      if (*(long *)(*unaff_x19 + 0x40) == *(long *)(*(long *)PTR_DAT_03cbece8 + 0x40)) {
        puVar9 = (undefined8 *)thunk_FUN_01a89fbc();
        uVar4 = FUN_027ff62c(*puVar9);
        return uVar4;
      }
      break;
    case 0x1a:
      if (*(int *)(*(long *)PTR_DAT_03cbedd0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      if (*(long *)(*unaff_x19 + 0x40) == *(long *)(*(long *)PTR_DAT_03cbeeb0 + 0x40)) {
        puVar9 = (undefined8 *)thunk_FUN_01a89fbc();
        uVar4 = FUN_027fe840(*puVar9);
        return uVar4;
      }
      break;
    case 0x1c:
      if (*(int *)(*(long *)PTR_DAT_03cbedd0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      if (*(long *)(*unaff_x19 + 0x40) == *(long *)(*(long *)PTR_DAT_03cbf088 + 0x40)) {
        puVar9 = (undefined8 *)thunk_FUN_01a89fbc();
        uVar4 = FUN_027feb08(*puVar9,puVar9[1]);
        return uVar4;
      }
      break;
    case 0x1e:
      if (*(int *)(*(long *)PTR_DAT_03cbedd0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      if (*(long *)(*unaff_x19 + 0x40) == *(long *)(*(long *)PTR_DAT_03cc5358 + 0x40)) {
        puVar9 = (undefined8 *)thunk_FUN_01a89fbc();
        uVar4 = FUN_027ff92c(*puVar9,puVar9[1]);
        return uVar4;
      }
      break;
    case 0x20:
      if (*(int *)(*(long *)PTR_DAT_03cbedd0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      if (*(long *)(*unaff_x19 + 0x40) == *(long *)(*(long *)PTR_DAT_03cbed58 + 0x40)) {
        puVar9 = (undefined8 *)thunk_FUN_01a89fbc();
        uVar4 = FUN_027ffa20(*puVar9,puVar9[1]);
        return uVar4;
      }
      break;
    case 0x22:
      if (*(int *)(*(long *)PTR_DAT_03cbedd0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      if (*(long *)(*unaff_x19 + 0x40) == *(long *)(*(long *)PTR_DAT_03cc4b20 + 0x40)) {
        puVar9 = (undefined8 *)thunk_FUN_01a89fbc();
        uVar4 = FUN_027ffb98(*puVar9);
        return uVar4;
      }
      break;
    case 0x24:
      if (*(int *)(*(long *)PTR_DAT_03cbedd0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      if (*(long *)(*unaff_x19 + 0x40) == *(long *)(*(long *)PTR_DAT_03cc4168 + 0x40)) {
        puVar9 = (undefined8 *)thunk_FUN_01a89fbc();
        uVar4 = FUN_027ff17c(*puVar9,puVar9[1]);
        return uVar4;
      }
      break;
    case 0x26:
      if (*(int *)(*(long *)PTR_DAT_03cbedd0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      bVar1 = *(byte *)(*(long *)PTR_DAT_03cbede8 + 0x130);
      if ((bVar1 <= *(byte *)(*unaff_x19 + 0x130)) &&
         (*(long *)(*(long *)(*unaff_x19 + 200) + (ulong)bVar1 * 8 + -8) ==
          *(long *)PTR_DAT_03cbede8)) {
        uVar4 = FUN_027ffcf8();
        return uVar4;
      }
      break;
    case 0x27:
      if (*(int *)(*(long *)PTR_DAT_03cbedd0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      if (*unaff_x19 == *(long *)PTR_DAT_03cbebc0) {
        uVar4 = FUN_027feeb4();
        return uVar4;
      }
      break;
    case 0x29:
      goto switchD_0280008c_caseD_29;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01ab6ee0();
  }
switchD_0280008c_caseD_29:
  puVar2 = PTR_DAT_03cbedd0;
  lVar5 = *(long *)PTR_DAT_03cbedd0;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar5 = *(long *)puVar2;
  }
  return *(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x18);
}


