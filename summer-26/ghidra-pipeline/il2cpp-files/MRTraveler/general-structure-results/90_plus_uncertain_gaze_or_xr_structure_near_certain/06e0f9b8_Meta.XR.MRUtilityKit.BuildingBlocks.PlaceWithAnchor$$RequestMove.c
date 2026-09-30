/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.BuildingBlocks.PlaceWithAnchor$$RequestMove
ENTRY_POINT: 06e0f9b8
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 92
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_15;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


long Meta_XR_MRUtilityKit_BuildingBlocks_PlaceWithAnchor__RequestMove(ulong param_1,long *param_2)

{
  byte bVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 in_x4;
  ulong uVar11;
  long lVar12;
  int *piVar13;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x22;
  long unaff_x25;
  undefined8 uVar14;
  undefined8 uStack0000000000000000;
  
                    /* try { // try from 06e0f9bc to 06f0fa3f has its CatchHandler @ 06e0e7cc */
                    /* catch() { ... } // from try @ 06e0f91c with catch @ 06e0f9c0 */
  uStack0000000000000000 = in_x4;
  if ((param_1 & 1) == 0) {
                    /* catch() { ... } // from try @ 06e0f728 with catch @ 06e0f9c4 */
                    /* catch() { ... } // from try @ 06e0f7b0 with catch @ 06e0f9c8 */
                    /* catch() { ... } // from try @ 06e0f998 with catch @ 06e0f9cc */
    FUN_03c8f898(PTR_DAT_08e92cc0);
                    /* catch() { ... } // from try @ 06e0f770 with catch @ 06e0f9d0 */
                    /* catch() { ... } // from try @ 06e0f990 with catch @ 06e0f9d4 */
                    /* catch() { ... } // from try @ 06e0f988 with catch @ 06e0f9d8 */
    FUN_03c8f898(PTR_DAT_08e92cc8);
    FUN_03c8f898(PTR_DAT_08e92418);
    FUN_03c8f898(PTR_DAT_08e92cd0);
    FUN_03c8f898(PTR_DAT_08e92cd8);
    FUN_03c8f898(PTR_DAT_08e92ce0);
    FUN_03c8f898(PTR_DAT_08e76e18);
    FUN_03c8f898(PTR_DAT_08e92ce8);
    FUN_03c8f898(PTR_DAT_08e69770);
    FUN_03c8f898(PTR_DAT_08e695f0);
    FUN_03c8f898(PTR_DAT_08e92cf0);
    FUN_03c8f898(PTR_DAT_08e92cf8);
    FUN_03c8f898(PTR_DAT_08e90898);
    FUN_03c8f898(PTR_DAT_08e92d00);
    FUN_03c8f898(PTR_DAT_08e92d08);
    FUN_03c8f898(PTR_DAT_08e92d10);
    FUN_03c8f898(PTR_DAT_08e79288);
    FUN_03c8f898(PTR_DAT_08e92d18);
    FUN_03c8f898(PTR_DAT_08e71968);
    *(undefined1 *)(unaff_x19 + 0xf71) = 1;
  }
  uVar3 = FUN_06e137e8();
  puVar2 = PTR_DAT_08e76e18;
  if ((uVar3 & 1) != 0) {
    return unaff_x25;
  }
  if (unaff_x25 == 0) {
    unaff_x25 = FUN_0712c438(param_2,0);
  }
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  lVar4 = FUN_06e101c4(param_2);
  if ((unaff_x22 != (long *)0x0) &&
     (lVar5 = (**(code **)(*unaff_x22 + 0x1e8))(), puVar2 = PTR_DAT_08e92ce0, lVar5 != 0)) {
    if (0 < (int)*(ulong *)(lVar5 + 0x18)) {
      uVar3 = 0;
      uVar11 = *(ulong *)(lVar5 + 0x18) & 0xffffffff;
      puVar7 = (undefined8 *)PTR_DAT_08e92cc0;
      do {
        if (uVar11 <= uVar3) goto LAB_06e101bc;
        if (lVar4 == 0) goto LAB_06e101c0;
        uVar14 = *(undefined8 *)(lVar5 + uVar3 * 8 + 0x20);
        uVar11 = FUN_06a4e574(lVar4,uVar14,*puVar7);
        if ((uVar11 & 1) == 0) {
          lVar12 = FUN_03c8f97c(*(undefined8 *)PTR_DAT_08e69770,5);
          if (lVar12 == 0) goto LAB_06e101c0;
          if (*(int *)(lVar12 + 0x18) == 0) {
LAB_06e101bc:
                    /* WARNING: Subroutine does not return */
            FUN_03c8fb38();
          }
          *(undefined8 *)(lVar12 + 0x20) = *(undefined8 *)PTR_DAT_08e90898;
          thunk_FUN_03d233cc();
          if (param_2 == (long *)0x0) goto LAB_06e101c0;
          uVar8 = (**(code **)(*param_2 + 0x308))(param_2,*(undefined8 *)(*param_2 + 0x310));
          if (*(uint *)(lVar12 + 0x18) < 2) goto LAB_06e101bc;
          *(undefined8 *)(lVar12 + 0x28) = uVar8;
          thunk_FUN_03d233cc((undefined8 *)(lVar12 + 0x28),uVar8);
          if (*(uint *)(lVar12 + 0x18) < 3) goto LAB_06e101bc;
          *(undefined8 *)(lVar12 + 0x30) = *(undefined8 *)PTR_DAT_08e92d00;
          thunk_FUN_03d233cc((undefined8 *)(lVar12 + 0x30));
          if (*(uint *)(lVar12 + 0x18) < 4) goto LAB_06e101bc;
          *(undefined8 *)(lVar12 + 0x38) = uVar14;
          thunk_FUN_03d233cc((undefined8 *)(lVar12 + 0x38),uVar14);
          if (*(uint *)(lVar12 + 0x18) < 5) goto LAB_06e101bc;
          *(undefined8 *)(lVar12 + 0x40) = *(undefined8 *)PTR_DAT_08e92cf0;
          thunk_FUN_03d233cc();
LAB_06e0fe98:
          FUN_06f74f38(lVar12,0);
          if (unaff_x20 == 0) goto LAB_06e101c0;
          FUN_06f84868();
        }
        else {
          plVar6 = (long *)FUN_06a4e300(lVar4,uVar14,*(undefined8 *)PTR_DAT_08e92cc8);
          if (plVar6 == (long *)0x0) goto LAB_06e101c0;
          lVar12 = *plVar6;
          uVar11 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar11 != 0) {
            piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == *(long *)puVar2) {
                puVar7 = (undefined8 *)(lVar12 + (long)(*piVar13 + 2) * 0x10 + 0x138);
                goto LAB_06e0fcc4;
              }
              uVar11 = uVar11 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar11 != 0);
          }
          puVar7 = (undefined8 *)FUN_03cf1348(plVar6,*(long *)puVar2,2);
LAB_06e0fcc4:
          uVar11 = (*(code *)*puVar7)(plVar6,puVar7[1]);
          if ((uVar11 & 1) == 0) {
            lVar12 = FUN_03c8f97c(*(undefined8 *)PTR_DAT_08e69770,7);
            if (lVar12 != 0) {
              if (*(int *)(lVar12 + 0x18) == 0) goto LAB_06e101bc;
              *(undefined8 *)(lVar12 + 0x20) = *(undefined8 *)PTR_DAT_08e90898;
              thunk_FUN_03d233cc();
              if (param_2 != (long *)0x0) {
                uVar8 = (**(code **)(*param_2 + 0x308))(param_2,*(undefined8 *)(*param_2 + 0x310));
                if (*(uint *)(lVar12 + 0x18) < 2) goto LAB_06e101bc;
                *(undefined8 *)(lVar12 + 0x28) = uVar8;
                thunk_FUN_03d233cc((undefined8 *)(lVar12 + 0x28),uVar8);
                if (*(uint *)(lVar12 + 0x18) < 3) goto LAB_06e101bc;
                *(undefined8 *)(lVar12 + 0x30) = *(undefined8 *)PTR_DAT_08e92d18;
                thunk_FUN_03d233cc((undefined8 *)(lVar12 + 0x30));
                if (*(uint *)(lVar12 + 0x18) < 4) goto LAB_06e101bc;
                *(undefined8 *)(lVar12 + 0x38) = uVar14;
                thunk_FUN_03d233cc((undefined8 *)(lVar12 + 0x38),uVar14);
                if (*(uint *)(lVar12 + 0x18) < 5) goto LAB_06e101bc;
                *(undefined8 *)(lVar12 + 0x40) = *(undefined8 *)PTR_DAT_08e92d08;
                thunk_FUN_03d233cc();
                puVar7 = (undefined8 *)PTR_DAT_08e92cc0;
                bVar1 = *(byte *)(*(long *)PTR_DAT_08e92ce8 + 0x130);
                if (*(byte *)(*plVar6 + 0x130) < bVar1) {
                  plVar6 = (long *)0x0;
                }
                else if (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) !=
                         *(long *)PTR_DAT_08e92ce8) {
                  plVar6 = (long *)0x0;
                }
                puVar10 = (undefined8 *)PTR_DAT_08e92d10;
                if (plVar6 != (long *)0x0) {
                  puVar10 = (undefined8 *)PTR_DAT_08e79288;
                }
                if (*(uint *)(lVar12 + 0x18) < 6) goto LAB_06e101bc;
                *(undefined8 *)(lVar12 + 0x48) = *puVar10;
                thunk_FUN_03d233cc((undefined8 *)(lVar12 + 0x48));
                if (*(uint *)(lVar12 + 0x18) < 7) goto LAB_06e101bc;
                *(undefined8 *)(lVar12 + 0x50) = *(undefined8 *)PTR_DAT_08e71968;
                thunk_FUN_03d233cc();
                goto LAB_06e0fe98;
              }
            }
            goto LAB_06e101c0;
          }
          lVar12 = *plVar6;
          uVar11 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar11 != 0) {
            piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == *(long *)puVar2) {
                puVar7 = (undefined8 *)(lVar12 + (long)(*piVar13 + 1) * 0x10 + 0x138);
                goto LAB_06e0fec8;
              }
              uVar11 = uVar11 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar11 != 0);
          }
          puVar7 = (undefined8 *)FUN_03cf1348(plVar6,*(long *)puVar2,1);
LAB_06e0fec8:
          uVar11 = (*(code *)*puVar7)(plVar6,puVar7[1]);
          if ((uVar11 & 1) == 0) {
            uVar14 = 0;
          }
          else {
            lVar12 = *plVar6;
            uVar11 = (ulong)*(ushort *)(lVar12 + 0x12e);
            if (uVar11 != 0) {
              piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == *(long *)puVar2) {
                  puVar7 = (undefined8 *)(lVar12 + (long)(*piVar13 + 4) * 0x10 + 0x138);
                  goto LAB_06e0ff30;
                }
                uVar11 = uVar11 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar11 != 0);
            }
            puVar7 = (undefined8 *)FUN_03cf1348(plVar6,*(long *)puVar2,4);
LAB_06e0ff30:
            uVar14 = (*(code *)*puVar7)(plVar6,unaff_x25,puVar7[1]);
          }
          lVar12 = *plVar6;
          uVar11 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar11 != 0) {
            piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == *(long *)puVar2) {
                puVar7 = (undefined8 *)(lVar12 + (long)(*piVar13 + 3) * 0x10 + 0x138);
                goto LAB_06e0ff94;
              }
              uVar11 = uVar11 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar11 != 0);
          }
          puVar7 = (undefined8 *)FUN_03cf1348(plVar6,*(long *)puVar2,3);
LAB_06e0ff94:
          uVar8 = (*(code *)*puVar7)(plVar6,puVar7[1]);
          uVar9 = (**(code **)(*unaff_x22 + 0x1a8))();
          if (*(int *)(*(long *)PTR_DAT_08e76e18 + 0xe0) == 0) {
            thunk_FUN_03cd7500(*(long *)PTR_DAT_08e76e18);
          }
          uVar14 = FUN_06e0e58c(uVar8,uVar14,uVar9);
          puVar7 = (undefined8 *)PTR_DAT_08e92cc0;
          lVar12 = *plVar6;
          uVar11 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar11 != 0) {
            piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == *(long *)puVar2) {
                puVar10 = (undefined8 *)(lVar12 + (long)(*piVar13 + 5) * 0x10 + 0x138);
                goto LAB_06e1004c;
              }
              uVar11 = uVar11 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar11 != 0);
          }
          puVar10 = (undefined8 *)FUN_03cf1348(plVar6,*(long *)puVar2,5);
LAB_06e1004c:
          (*(code *)*puVar10)(plVar6,unaff_x25,uVar14,puVar10[1]);
        }
        uVar11 = (ulong)*(uint *)(lVar5 + 0x18);
        uVar3 = uVar3 + 1;
      } while ((long)uVar3 < (long)(int)*(uint *)(lVar5 + 0x18));
    }
    if (param_2 != (long *)0x0) {
      uVar14 = (**(code **)(*param_2 + 0x908))(param_2,*(undefined8 *)(*param_2 + 0x910));
      uVar8 = *(undefined8 *)PTR_DAT_08e92cd0;
      if (*(int *)(*(long *)PTR_DAT_08e695f0 + 0xe0) == 0) {
        thunk_FUN_03cd7500(*(long *)PTR_DAT_08e695f0);
      }
      uVar8 = FUN_0710fcf0(uVar8,0);
      uVar3 = FUN_04611b74(uVar14,uVar8,*(undefined8 *)PTR_DAT_08e92418);
      puVar2 = PTR_DAT_08e92cd8;
      if ((uVar3 & 1) != 0) {
        lVar4 = thunk_FUN_03cf5138(unaff_x25,*(undefined8 *)PTR_DAT_08e92cd8);
        if (lVar4 == 0) goto LAB_06e101c0;
        lVar5 = *(long *)puVar2;
        plVar6 = (long *)thunk_FUN_03cf5138(unaff_x25,lVar5);
        lVar4 = *plVar6;
        uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar3 != 0) {
          piVar13 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == lVar5) {
              puVar7 = (undefined8 *)(lVar4 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_06e10158;
            }
            uVar3 = uVar3 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar3 != 0);
        }
        puVar7 = (undefined8 *)FUN_03cf1348(plVar6,lVar5,0);
LAB_06e10158:
        uVar3 = (*(code *)*puVar7)(plVar6);
        if ((uVar3 & 1) == 0) {
          FUN_06f6be0c(*(undefined8 *)PTR_DAT_08e92cf8,param_2,0);
          if (unaff_x20 == 0) goto LAB_06e101c0;
          FUN_06f84868();
        }
      }
      return unaff_x25;
    }
  }
LAB_06e101c0:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


