/*
FUNCTION_NAME: OVRPlugin$$StopColocationSessionDiscovery
ENTRY_POINT: 05681e78
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 107
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05682138) */

void OVRPlugin__StopColocationSessionDiscovery(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long unaff_x19;
  uint unaff_w20;
  ulong uVar6;
  long *unaff_x25;
  long in_stack_00000010;
  
  uVar2 = FUN_05681870();
  puVar1 = System_Collections_Generic_List<VivoxParticipant>_TypeInfo;
  if ((char)unaff_w20 < '\x04') {
    if ((unaff_w20 & 0xff) == 3) {
      uVar6 = 0;
      do {
        lVar3 = *(long *)puVar1;
        if (*(int *)(lVar3 + 0xe4) == 0) {
          thunk_FUN_02df485c();
          lVar3 = *(long *)puVar1;
        }
        lVar5 = **(long **)(lVar3 + 0xb8);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        if ((long)*(int *)(lVar5 + 0x18) <= (long)uVar6) {
          uVar2 = FUN_0536d554(uVar2,*(undefined8 *)PTR_DAT_069fb9e8);
          if (*(int *)(*(long *)PTR_DAT_069fb930 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          FUN_0630c038(uVar2);
          break;
        }
        if (*(int *)(lVar3 + 0xe4) == 0) {
          thunk_FUN_02df485c();
          lVar5 = **(long **)(*(long *)puVar1 + 0xb8);
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
        }
        if (*(uint *)(lVar5 + 0x18) <= uVar6) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96868();
        }
        if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        uVar4 = FUN_0536bac4();
        uVar6 = uVar6 + 1;
      } while ((uVar4 & 1) == 0);
    }
    else if ((char)unaff_w20 < '\x02') {
      if ((unaff_w20 & 0xff) == 1) {
        uVar2 = FUN_0536d554(uVar2,*(undefined8 *)
                                    System_Collections_Generic_List<VolumeComponent>_TypeInfo);
        if (*(int *)(*(long *)PTR_DAT_069fb930 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        FUN_0630b6a0(uVar2);
      }
      else if ((unaff_w20 >> 7 & 1) == 0) {
        uVar2 = FUN_0536d554(uVar2,*(undefined8 *)System_Collections_Generic_List<Volume>_TypeInfo);
        if (*(int *)(*(long *)PTR_DAT_069fb930 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        FUN_0630b6a0(uVar2);
      }
    }
    else {
      uVar2 = FUN_0536d554(uVar2,*(undefined8 *)PTR_DAT_069fb9e8);
      if (*(int *)(*(long *)PTR_DAT_069fb930 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      FUN_0630b6a0(uVar2);
    }
  }
  else {
    uVar2 = FUN_0536d554(uVar2,*(undefined8 *)PTR_DAT_069fb9e8);
    if (*(int *)(*(long *)PTR_DAT_069fb930 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    FUN_0630bcec(uVar2);
  }
  lVar3 = *unaff_x25;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02df485c();
    lVar3 = *unaff_x25;
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x18);
  if (lVar3 != 0) {
    (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar3 + 0x40),unaff_w20);
  }
  if (in_stack_00000010 != 0) {
    FUN_062feba4(in_stack_00000010,0);
  }
  return;
}


