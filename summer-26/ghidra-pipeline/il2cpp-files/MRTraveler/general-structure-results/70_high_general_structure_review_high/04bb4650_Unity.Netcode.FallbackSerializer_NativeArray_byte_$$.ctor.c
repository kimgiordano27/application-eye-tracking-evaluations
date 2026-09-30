/*
FUNCTION_NAME: Unity.Netcode.FallbackSerializer<NativeArray<byte>>$$.ctor
ENTRY_POINT: 04bb4650
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


long * Unity_Netcode_FallbackSerializer<NativeArray<byte>>___ctor(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  undefined8 *puVar11;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar12;
  undefined8 uVar13;
  
  FUN_03c8f898();
  FUN_03c8f898(PTR_DAT_08e83488);
  FUN_03c8f898(PTR_DAT_08e83490);
  FUN_03c8f898(PTR_DAT_08e82098);
  FUN_03c8f898(PTR_DAT_08e83498);
  FUN_03c8f898(PTR_DAT_08e834a0);
  FUN_03c8f898(PTR_DAT_08e810f0);
  FUN_03c8f898(PTR_DAT_08e79c00);
  FUN_03c8f898(PTR_DAT_08e695f0);
  *(undefined1 *)(unaff_x20 + 0xf56) = 1;
  puVar2 = PTR_DAT_08e695f0;
  lVar5 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_03cf1244();
  }
  uVar12 = *(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x20);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_03cd7500(*(long *)puVar2);
  }
  puVar3 = PTR_DAT_08e82098;
  plVar6 = (long *)FUN_0710fcf0(uVar12,0);
  if (plVar6 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)puVar3 + 0x130);
    if ((*(byte *)(*plVar6 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar3))
    goto LAB_04bb4bf4;
  }
  uVar12 = FUN_0710fcf0(*(undefined8 *)PTR_DAT_08e80ec0,0);
  uVar7 = FUN_07119344(plVar6,uVar12,0);
  if ((uVar7 & 1) == 0) {
    uVar12 = *(undefined8 *)PTR_DAT_08e810f0;
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    uVar12 = FUN_0710fcf0(uVar12,0);
    uVar7 = FUN_07119344(plVar6,uVar12,0);
    if ((uVar7 & 1) != 0) {
      plVar6 = (long *)thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e83478);
      FUN_070dd178(plVar6,0);
      goto LAB_04bb47d8;
    }
    lVar5 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03cf1244();
    }
    uVar12 = *(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x28);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_03cd7500(*(long *)puVar2);
    }
    plVar10 = (long *)FUN_0710fcf0(uVar12,0);
    if (plVar10 == (long *)0x0) {
LAB_04bb4bfc:
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    uVar7 = (**(code **)(*plVar10 + 0x2c8))(plVar10,plVar6,*(undefined8 *)(*plVar10 + 0x2d0));
    if ((uVar7 & 1) == 0) {
      if (plVar6 == (long *)0x0) goto LAB_04bb4bfc;
      uVar7 = (**(code **)(*plVar6 + 1000))(plVar6,*(undefined8 *)(*plVar6 + 0x3f0));
      if ((uVar7 & 1) == 0) {
LAB_04bb4ad8:
        uVar7 = (**(code **)(*plVar6 + 0x5d8))(plVar6,*(undefined8 *)(*plVar6 + 0x5e0));
        if ((uVar7 & 1) == 0) {
switchD_04bb4b58_default:
          lVar5 = *(long *)(unaff_x19 + 0x20);
          if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_03cf1244();
          }
          if ((*(byte *)(*(long *)(*(long *)(lVar5 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
            FUN_03cf1244();
          }
          plVar6 = (long *)thunk_FUN_03cf5234();
          lVar5 = *(long *)(unaff_x19 + 0x20);
          if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_03cf1244(lVar5);
          }
          FUN_0579bf9c(plVar6,*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x38));
          return plVar6;
        }
        if (*(int *)(*(long *)PTR_DAT_08e6b480 + 0xe0) == 0) {
          thunk_FUN_03cd7500();
        }
        uVar12 = FUN_07135f70(plVar6,0);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_03cd7500(*(long *)puVar2);
        }
        uVar4 = FUN_0711c178(uVar12,0);
        switch(uVar4) {
        case 5:
          lVar5 = *(long *)puVar2;
          puVar11 = (undefined8 *)PTR_DAT_08e83498;
          break;
        case 6:
        case 8:
        case 9:
        case 10:
          lVar5 = *(long *)puVar2;
          puVar11 = (undefined8 *)PTR_DAT_08e83460;
          break;
        case 7:
          lVar5 = *(long *)puVar2;
          puVar11 = (undefined8 *)PTR_DAT_08e834a0;
          break;
        case 0xb:
        case 0xc:
          lVar5 = *(long *)puVar2;
          puVar11 = (undefined8 *)PTR_DAT_08e83480;
          break;
        default:
          goto switchD_04bb4b58_default;
        }
        goto LAB_04bb4850;
      }
      uVar12 = (**(code **)(*plVar6 + 0x478))(plVar6,*(undefined8 *)(*plVar6 + 0x480));
      uVar13 = *(undefined8 *)PTR_DAT_08e83490;
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_03cd7500(*(long *)puVar2);
      }
      uVar13 = FUN_0710fcf0(uVar13,0);
      uVar7 = FUN_07119344(uVar12,uVar13,0);
      if ((uVar7 & 1) == 0) goto LAB_04bb4ad8;
      lVar5 = (**(code **)(*plVar6 + 0x498))(plVar6,*(undefined8 *)(*plVar6 + 0x4a0));
      if (lVar5 == 0) goto LAB_04bb4bfc;
      if (*(int *)(lVar5 + 0x18) == 0) {
LAB_04bb4c00:
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb38();
      }
      plVar10 = *(long **)(lVar5 + 0x20);
      if (plVar10 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)puVar3 + 0x130);
        if ((*(byte *)(*plVar10 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar3)) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fecc(plVar10);
        }
      }
      uVar12 = *(undefined8 *)PTR_DAT_08e83470;
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      plVar8 = (long *)FUN_0710fcf0(uVar12,0);
      plVar9 = (long *)FUN_03c8f97c(*(undefined8 *)PTR_DAT_08e79c00,1);
      if (plVar9 == (long *)0x0) goto LAB_04bb4bfc;
      if ((plVar10 != (long *)0x0) &&
         (lVar5 = thunk_FUN_03cf5138(plVar10,*(undefined8 *)(*plVar9 + 0x40)), lVar5 == 0)) {
        uVar12 = thunk_FUN_03d0e0d0();
                    /* WARNING: Subroutine does not return */
        FUN_03c8f9fc(uVar12,0);
      }
      if ((int)plVar9[3] == 0) goto LAB_04bb4c00;
      plVar9[4] = (long)plVar10;
      thunk_FUN_03d233cc(plVar9 + 4,plVar10);
      if ((plVar8 == (long *)0x0) ||
         (plVar8 = (long *)(**(code **)(*plVar8 + 0x998))
                                     (plVar8,plVar9,*(undefined8 *)(*plVar8 + 0x9a0)),
         plVar8 == (long *)0x0)) goto LAB_04bb4bfc;
      uVar7 = (**(code **)(*plVar8 + 0x2c8))(plVar8,plVar10,*(undefined8 *)(*plVar8 + 0x2d0));
      if ((uVar7 & 1) == 0) goto LAB_04bb4ad8;
      uVar12 = *(undefined8 *)PTR_DAT_08e83488;
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      uVar12 = FUN_0710fcf0(uVar12,0);
      plVar6 = plVar10;
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_03cd7500(*(long *)puVar3);
      }
    }
    else {
      lVar5 = *(long *)puVar2;
      puVar11 = (undefined8 *)PTR_DAT_08e83468;
LAB_04bb4850:
      uVar12 = *puVar11;
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      uVar12 = FUN_0710fcf0(uVar12,0);
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_03cd7500(*(long *)puVar3);
      }
    }
    plVar6 = (long *)FUN_07143ff8(uVar12,plVar6,0);
    lVar5 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03cf1244(lVar5);
    }
    plVar10 = *(long **)(lVar5 + 0xc0);
  }
  else {
    plVar6 = (long *)thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e83458);
    FUN_070dd078(plVar6,0);
LAB_04bb47d8:
    lVar5 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03cf1244();
    }
    plVar10 = *(long **)(lVar5 + 0xc0);
  }
  lVar5 = *plVar10;
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_03cf1244(lVar5);
  }
  if (plVar6 != (long *)0x0) {
    if ((*(byte *)(*plVar6 + 0x130) < *(byte *)(lVar5 + 0x130)) ||
       (*(long *)(*(long *)(*plVar6 + 200) + (ulong)*(byte *)(lVar5 + 0x130) * 8 + -8) != lVar5)) {
LAB_04bb4bf4:
                    /* WARNING: Subroutine does not return */
      FUN_03c8fecc(plVar6);
    }
  }
  return plVar6;
}


