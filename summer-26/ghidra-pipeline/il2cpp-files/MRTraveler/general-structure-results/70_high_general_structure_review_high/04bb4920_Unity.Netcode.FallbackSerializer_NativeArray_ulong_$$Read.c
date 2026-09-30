/*
FUNCTION_NAME: Unity.Netcode.FallbackSerializer<NativeArray<ulong>>$$Read
ENTRY_POINT: 04bb4920
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


long * Unity_Netcode_FallbackSerializer<NativeArray<ulong>>__Read(long param_1,undefined8 param_2)

{
  byte bVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  undefined8 *puVar8;
  code *in_x9;
  long unaff_x19;
  long *unaff_x20;
  long *plVar9;
  undefined8 uVar10;
  long *unaff_x24;
  long *unaff_x25;
  
  uVar3 = (*in_x9)(param_2,*(undefined8 *)(param_1 + 0x3f0));
  if ((uVar3 & 1) != 0) {
    uVar4 = (**(code **)(*unaff_x20 + 0x478))();
    uVar10 = *(undefined8 *)PTR_DAT_08e83490;
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_03cd7500(*unaff_x25);
    }
    uVar10 = FUN_0710fcf0(uVar10,0);
    uVar3 = FUN_07119344(uVar4,uVar10,0);
    if ((uVar3 & 1) != 0) {
      lVar5 = (**(code **)(*unaff_x20 + 0x498))();
      if (lVar5 == 0) {
LAB_04bb4bfc:
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      if (*(int *)(lVar5 + 0x18) == 0) {
LAB_04bb4c00:
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb38();
      }
      plVar9 = *(long **)(lVar5 + 0x20);
      if (plVar9 != (long *)0x0) {
        bVar1 = *(byte *)(*unaff_x24 + 0x130);
        if ((*(byte *)(*plVar9 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x24)) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fecc(plVar9);
        }
      }
      uVar4 = *(undefined8 *)PTR_DAT_08e83470;
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      plVar6 = (long *)FUN_0710fcf0(uVar4,0);
      plVar7 = (long *)FUN_03c8f97c(*(undefined8 *)PTR_DAT_08e79c00,1);
      if (plVar7 == (long *)0x0) goto LAB_04bb4bfc;
      if ((plVar9 != (long *)0x0) &&
         (lVar5 = thunk_FUN_03cf5138(plVar9,*(undefined8 *)(*plVar7 + 0x40)), lVar5 == 0)) {
        uVar4 = thunk_FUN_03d0e0d0();
                    /* WARNING: Subroutine does not return */
        FUN_03c8f9fc(uVar4,0);
      }
      if ((int)plVar7[3] == 0) goto LAB_04bb4c00;
      plVar7[4] = (long)plVar9;
      thunk_FUN_03d233cc(plVar7 + 4,plVar9);
      if ((plVar6 == (long *)0x0) ||
         (plVar6 = (long *)(**(code **)(*plVar6 + 0x998))
                                     (plVar6,plVar7,*(undefined8 *)(*plVar6 + 0x9a0)),
         plVar6 == (long *)0x0)) goto LAB_04bb4bfc;
      uVar3 = (**(code **)(*plVar6 + 0x2c8))(plVar6,plVar9,*(undefined8 *)(*plVar6 + 0x2d0));
      if ((uVar3 & 1) != 0) {
        uVar4 = *(undefined8 *)PTR_DAT_08e83488;
        if (*(int *)(*unaff_x25 + 0xe0) == 0) {
          thunk_FUN_03cd7500();
        }
        uVar4 = FUN_0710fcf0(uVar4,0);
        if (*(int *)(*unaff_x24 + 0xe0) == 0) {
          thunk_FUN_03cd7500(*unaff_x24);
        }
        goto LAB_04bb488c;
      }
    }
  }
  uVar3 = (**(code **)(*unaff_x20 + 0x5d8))();
  if ((uVar3 & 1) != 0) {
    if (*(int *)(*(long *)PTR_DAT_08e6b480 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    uVar4 = FUN_07135f70();
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_03cd7500(*unaff_x25);
    }
    uVar2 = FUN_0711c178(uVar4,0);
    switch(uVar2) {
    case 5:
      lVar5 = *unaff_x25;
      puVar8 = (undefined8 *)PTR_DAT_08e83498;
      break;
    case 6:
    case 8:
    case 9:
    case 10:
      lVar5 = *unaff_x25;
      puVar8 = (undefined8 *)PTR_DAT_08e83460;
      break;
    case 7:
      lVar5 = *unaff_x25;
      puVar8 = (undefined8 *)PTR_DAT_08e834a0;
      break;
    case 0xb:
    case 0xc:
      lVar5 = *unaff_x25;
      puVar8 = (undefined8 *)PTR_DAT_08e83480;
      break;
    default:
      goto switchD_04bb4b58_default;
    }
    uVar4 = *puVar8;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    uVar4 = FUN_0710fcf0(uVar4,0);
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_03cd7500(*unaff_x24);
    }
LAB_04bb488c:
    plVar9 = (long *)FUN_07143ff8(uVar4);
    lVar5 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03cf1244(lVar5);
    }
    lVar5 = **(long **)(lVar5 + 0xc0);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03cf1244(lVar5);
    }
    if (plVar9 != (long *)0x0) {
      if ((*(byte *)(*plVar9 + 0x130) < *(byte *)(lVar5 + 0x130)) ||
         (*(long *)(*(long *)(*plVar9 + 200) + (ulong)*(byte *)(lVar5 + 0x130) * 8 + -8) != lVar5))
      {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fecc(plVar9);
      }
    }
    return plVar9;
  }
switchD_04bb4b58_default:
  lVar5 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_03cf1244();
  }
  if ((*(byte *)(*(long *)(*(long *)(lVar5 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
    FUN_03cf1244();
  }
  plVar9 = (long *)thunk_FUN_03cf5234();
  lVar5 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_03cf1244(lVar5);
  }
  FUN_0579bf9c(plVar9,*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x38));
  return plVar9;
}


