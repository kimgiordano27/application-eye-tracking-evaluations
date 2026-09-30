/*
FUNCTION_NAME: OVRPlugin$$StopColocationSessionAdvertisement
ENTRY_POINT: 05681ce8
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 113
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_15;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05681e14) */
/* WARNING: Removing unreachable block (ram,0x05682138) */
/* WARNING: Removing unreachable block (ram,0x0568212c) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void OVRPlugin__StopColocationSessionAdvertisement(void)

{
  char cVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  long unaff_x19;
  uint unaff_w20;
  ulong unaff_x23;
  long unaff_x24;
  long *unaff_x25;
  
  FUN_02d965b8(PTR_DAT_069fb9e8);
  FUN_02d965b8(System_Collections_Generic_List<VolumeComponent>_TypeInfo);
  *(undefined1 *)(unaff_x24 + 0x730) = 1;
  lVar3 = *unaff_x25;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02df485c();
    lVar3 = *unaff_x25;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x10) == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02df485c();
      lVar3 = *unaff_x25;
    }
    cVar1 = (char)unaff_w20;
    if (cVar1 < **(char **)(lVar3 + 0xb8)) {
      return;
    }
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    lVar3 = FUN_05681a3c();
    if (lVar3 != 0) {
      FUN_062feb1c(lVar3,0);
    }
    if (*(int *)(*unaff_x25 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    uVar6 = FUN_05681870();
    puVar2 = System_Collections_Generic_List<VivoxParticipant>_TypeInfo;
    if (cVar1 < '\x04') {
      if ((unaff_w20 & 0xff) == 3) {
        uVar5 = 0;
        do {
          lVar4 = *(long *)puVar2;
          if (*(int *)(lVar4 + 0xe4) == 0) {
            thunk_FUN_02df485c();
            lVar4 = *(long *)puVar2;
          }
          lVar8 = **(long **)(lVar4 + 0xb8);
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          if ((long)*(int *)(lVar8 + 0x18) <= (long)uVar5) {
            uVar6 = FUN_0536d554(uVar6,*(undefined8 *)PTR_DAT_069fb9e8);
            if (*(int *)(*(long *)PTR_DAT_069fb930 + 0xe4) == 0) {
              thunk_FUN_02df485c();
            }
            FUN_0630c038(uVar6);
            break;
          }
          if (*(int *)(lVar4 + 0xe4) == 0) {
            thunk_FUN_02df485c();
            lVar8 = **(long **)(*(long *)puVar2 + 0xb8);
            if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
          }
          if (*(uint *)(lVar8 + 0x18) <= uVar5) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96868();
          }
          if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          uVar7 = FUN_0536bac4();
          uVar5 = uVar5 + 1;
        } while ((uVar7 & 1) == 0);
      }
      else if (cVar1 < '\x02') {
        if ((unaff_w20 & 0xff) == 1) {
          uVar6 = FUN_0536d554(uVar6,*(undefined8 *)
                                      System_Collections_Generic_List<VolumeComponent>_TypeInfo);
          if (*(int *)(*(long *)PTR_DAT_069fb930 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          FUN_0630b6a0(uVar6);
        }
        else if ((unaff_w20 >> 7 & 1) == 0) {
          uVar6 = FUN_0536d554(uVar6,*(undefined8 *)System_Collections_Generic_List<Volume>_TypeInfo
                              );
          if (*(int *)(*(long *)PTR_DAT_069fb930 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          FUN_0630b6a0(uVar6);
        }
      }
      else {
        uVar6 = FUN_0536d554(uVar6,*(undefined8 *)PTR_DAT_069fb9e8);
        if (*(int *)(*(long *)PTR_DAT_069fb930 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        FUN_0630b6a0(uVar6);
      }
    }
    else {
      uVar6 = FUN_0536d554(uVar6,*(undefined8 *)PTR_DAT_069fb9e8);
      if (*(int *)(*(long *)PTR_DAT_069fb930 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      FUN_0630bcec(uVar6);
    }
    lVar4 = *unaff_x25;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_02df485c();
      lVar4 = *unaff_x25;
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x18);
    if (lVar4 != 0) {
      (**(code **)(lVar4 + 0x18))(*(undefined8 *)(lVar4 + 0x40),unaff_w20);
    }
    if (lVar3 == 0) {
      return;
    }
    FUN_062feba4(lVar3,0);
    return;
  }
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  lVar3 = FUN_05681b5c();
  if (lVar3 != 0) {
    FUN_062feb1c(lVar3,0);
  }
  lVar4 = *unaff_x25;
  if ((unaff_x23 & 1) != 0) {
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_02df485c();
      lVar4 = *unaff_x25;
    }
    lVar8 = *(long *)(*(long *)(lVar4 + 0xb8) + 8);
    if (lVar8 != 0) {
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_02df485c();
        lVar8 = *(long *)(*(long *)(*unaff_x25 + 0xb8) + 8);
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
      }
      uVar5 = (**(code **)(lVar8 + 0x18))
                        (*(undefined8 *)(lVar8 + 0x40),unaff_w20,*(undefined8 *)(lVar8 + 0x28));
      if ((uVar5 & 1) == 0) goto LAB_05681df0;
      lVar4 = *unaff_x25;
    }
  }
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_02df485c();
    lVar4 = *unaff_x25;
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x10);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  (**(code **)(lVar4 + 0x18))(*(undefined8 *)(lVar4 + 0x40),unaff_w20);
LAB_05681df0:
  if (lVar3 != 0) {
    FUN_062feba4(lVar3,0);
  }
  return;
}


