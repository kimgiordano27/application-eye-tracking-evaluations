/*
FUNCTION_NAME: Unity.Netcode.FallbackSerializer<NativeArray<ulong>>$$WriteDelta
ENTRY_POINT: 04bb49f8
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


long * Unity_Netcode_FallbackSerializer<NativeArray<ulong>>__WriteDelta(undefined8 param_1)

{
  undefined4 uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long unaff_x19;
  long *unaff_x20;
  undefined8 uVar7;
  long unaff_x21;
  long *unaff_x24;
  long *unaff_x25;
  
  plVar2 = (long *)FUN_0710fcf0(param_1,0);
  lVar3 = FUN_03c8f97c(*(undefined8 *)PTR_DAT_08e79c00,1);
  if (lVar3 != 0) {
    if ((unaff_x21 != 0) && (lVar4 = thunk_FUN_03cf5138(), lVar4 == 0)) {
      uVar7 = thunk_FUN_03d0e0d0();
                    /* WARNING: Subroutine does not return */
      FUN_03c8f9fc(uVar7,0);
    }
    if (*(int *)(lVar3 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb38();
    }
    *(long *)(lVar3 + 0x20) = unaff_x21;
    thunk_FUN_03d233cc();
    if ((plVar2 != (long *)0x0) &&
       (plVar2 = (long *)(**(code **)(*plVar2 + 0x998))
                                   (plVar2,lVar3,*(undefined8 *)(*plVar2 + 0x9a0)),
       plVar2 != (long *)0x0)) {
      uVar5 = (**(code **)(*plVar2 + 0x2c8))();
      if ((uVar5 & 1) == 0) {
        uVar5 = (**(code **)(*unaff_x20 + 0x5d8))();
        if ((uVar5 & 1) == 0) {
switchD_04bb4b58_default:
          lVar3 = *(long *)(unaff_x19 + 0x20);
          if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
            lVar3 = FUN_03cf1244();
          }
          if ((*(byte *)(*(long *)(*(long *)(lVar3 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
            FUN_03cf1244();
          }
          plVar2 = (long *)thunk_FUN_03cf5234();
          lVar3 = *(long *)(unaff_x19 + 0x20);
          if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
            lVar3 = FUN_03cf1244(lVar3);
          }
          FUN_0579bf9c(plVar2,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x38));
          return plVar2;
        }
        if (*(int *)(*(long *)PTR_DAT_08e6b480 + 0xe0) == 0) {
          thunk_FUN_03cd7500();
        }
        uVar7 = FUN_07135f70();
        if (*(int *)(*unaff_x25 + 0xe0) == 0) {
          thunk_FUN_03cd7500(*unaff_x25);
        }
        uVar1 = FUN_0711c178(uVar7,0);
        switch(uVar1) {
        case 5:
          lVar3 = *unaff_x25;
          puVar6 = (undefined8 *)PTR_DAT_08e83498;
          break;
        case 6:
        case 8:
        case 9:
        case 10:
          lVar3 = *unaff_x25;
          puVar6 = (undefined8 *)PTR_DAT_08e83460;
          break;
        case 7:
          lVar3 = *unaff_x25;
          puVar6 = (undefined8 *)PTR_DAT_08e834a0;
          break;
        case 0xb:
        case 0xc:
          lVar3 = *unaff_x25;
          puVar6 = (undefined8 *)PTR_DAT_08e83480;
          break;
        default:
          goto switchD_04bb4b58_default;
        }
        uVar7 = *puVar6;
        if (*(int *)(lVar3 + 0xe0) == 0) {
          thunk_FUN_03cd7500();
        }
        uVar7 = FUN_0710fcf0(uVar7,0);
        if (*(int *)(*unaff_x24 + 0xe0) == 0) {
          thunk_FUN_03cd7500(*unaff_x24);
        }
      }
      else {
        uVar7 = *(undefined8 *)PTR_DAT_08e83488;
        if (*(int *)(*unaff_x25 + 0xe0) == 0) {
          thunk_FUN_03cd7500();
        }
        uVar7 = FUN_0710fcf0(uVar7,0);
        if (*(int *)(*unaff_x24 + 0xe0) == 0) {
          thunk_FUN_03cd7500(*unaff_x24);
        }
      }
      plVar2 = (long *)FUN_07143ff8(uVar7);
      lVar3 = *(long *)(unaff_x19 + 0x20);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_03cf1244(lVar3);
      }
      lVar3 = **(long **)(lVar3 + 0xc0);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_03cf1244(lVar3);
      }
      if (plVar2 != (long *)0x0) {
        if ((*(byte *)(*plVar2 + 0x130) < *(byte *)(lVar3 + 0x130)) ||
           (*(long *)(*(long *)(*plVar2 + 200) + (ulong)*(byte *)(lVar3 + 0x130) * 8 + -8) != lVar3)
           ) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fecc(plVar2);
        }
      }
      return plVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


