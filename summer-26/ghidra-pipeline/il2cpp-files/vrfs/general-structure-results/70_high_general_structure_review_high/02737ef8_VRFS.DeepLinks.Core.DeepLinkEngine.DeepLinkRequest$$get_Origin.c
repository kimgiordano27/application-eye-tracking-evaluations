/*
FUNCTION_NAME: VRFS.DeepLinks.Core.DeepLinkEngine.DeepLinkRequest$$get_Origin
ENTRY_POINT: 02737ef8
PROGRAM: vrfs-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


long VRFS_DeepLinks_Core_DeepLinkEngine_DeepLinkRequest__get_Origin(void)

{
  ushort uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  undefined1 in_w8;
  long lVar10;
  long lVar11;
  int *piVar12;
  long unaff_x19;
  long unaff_x20;
  undefined4 unaff_w21;
  long *plVar13;
  long *unaff_x23;
  code *pcVar14;
  long *plVar15;
  long unaff_x25;
  long *plVar16;
  long lVar17;
  long unaff_x26;
  undefined8 uVar18;
  
  *(undefined1 *)(unaff_x20 + 0x215) = in_w8;
  lVar3 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar3 + 0x132) & 1) == 0) {
    lVar3 = FUN_015c2790();
  }
  if ((*(byte *)(*(long *)(*(long *)(lVar3 + 0xc0) + 0x50) + 0x132) & 1) == 0) {
    FUN_015c2790();
  }
  lVar3 = thunk_FUN_015d056c();
  if (lVar3 == 0) {
LAB_027382b8:
                    /* WARNING: Subroutine does not return */
    FUN_0160eeb4();
  }
  lVar10 = *(long *)(unaff_x19 + 0x20);
  uVar1 = *(ushort *)(lVar10 + 0x132);
  lVar4 = lVar10;
  if ((uVar1 & 1) == 0) {
    lVar10 = FUN_015c2790(lVar10);
    uVar1 = *(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x132);
    lVar4 = *(long *)(unaff_x19 + 0x20);
  }
  pcVar14 = *(code **)(*(long *)(*(long *)(lVar10 + 0xc0) + 0x58) + 8);
  if ((uVar1 & 1) == 0) {
    lVar4 = FUN_015c2790(lVar4);
  }
  (*pcVar14)(lVar3,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x58));
  plVar15 = (long *)(lVar3 + 0x10);
  *plVar15 = unaff_x25;
  thunk_FUN_01656ef8(plVar15);
  plVar16 = (long *)(lVar3 + 0x18);
  *plVar16 = unaff_x26;
  thunk_FUN_01656ef8(plVar16);
  if (unaff_x23 == (long *)0x0) {
    thunk_FUN_0159f088(PTR_DAT_06e01970);
    uVar6 = thunk_FUN_015d056c();
    FUN_011a9bc8();
    puVar9 = PTR_DAT_06de4a40;
  }
  else {
    if ((*plVar15 != 0) || (*plVar16 != 0)) {
      FUN_036a4e7c(unaff_w21,1,0);
      lVar4 = *(long *)(unaff_x19 + 0x20);
      if ((*(byte *)(lVar4 + 0x132) & 1) == 0) {
        lVar4 = FUN_015c2790();
      }
      if ((*(byte *)(*(long *)(*(long *)(lVar4 + 0xc0) + 0x28) + 0x132) & 1) == 0) {
        FUN_015c2790();
      }
      lVar4 = thunk_FUN_015d056c();
      if (lVar4 != 0) {
        lVar11 = *(long *)(unaff_x19 + 0x20);
        uVar1 = *(ushort *)(lVar11 + 0x132);
        lVar10 = lVar11;
        if ((uVar1 & 1) == 0) {
          lVar11 = FUN_015c2790(lVar11);
          uVar1 = *(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x132);
          lVar10 = *(long *)(unaff_x19 + 0x20);
        }
        puVar9 = PTR_DAT_06da8a48;
        pcVar14 = *(code **)(*(long *)(*(long *)(lVar11 + 0xc0) + 0x60) + 8);
        if ((uVar1 & 1) == 0) {
          FUN_015c2790(lVar10);
        }
        (*pcVar14)(lVar4);
        plVar13 = (long *)(lVar3 + 0x20);
        *plVar13 = lVar4;
        thunk_FUN_01656ef8(plVar13,lVar4);
        if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
          thunk_FUN_016466fc();
        }
        uVar5 = FUN_036998d4(0);
        if ((uVar5 & 1) != 0) {
          lVar4 = *plVar13;
          uVar18 = *(undefined8 *)PTR_DAT_06e5ba50;
          uVar6 = (**(code **)(*unaff_x23 + 0x168))();
          uVar6 = FUN_02519a6c(uVar18,uVar6,0);
          if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
            thunk_FUN_016466fc(*(long *)puVar9);
          }
          FUN_036998dc(0,lVar4,uVar6,0,0);
        }
        lVar4 = *plVar13;
        if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
          thunk_FUN_016466fc();
        }
        if (DAT_072332e8 == '\0') {
          thunk_FUN_0159f088(PTR_DAT_06da8a48);
          thunk_FUN_0159f088(PTR_DAT_06dd2198);
          DAT_072332e8 = '\x01';
        }
        puVar2 = PTR_DAT_06dd2198;
        lVar10 = *(long *)PTR_DAT_06dd2198;
        if (*(int *)(lVar10 + 0xe0) == 0) {
          thunk_FUN_016466fc();
          lVar10 = *(long *)puVar2;
        }
        puVar2 = PTR_DAT_06e31158;
        if (*(char *)(*(long *)(lVar10 + 0xb8) + 0x10) != '\0') {
          if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
            thunk_FUN_016466fc();
          }
          FUN_03699984(lVar4,0);
        }
        lVar4 = thunk_FUN_015d056c(*(undefined8 *)puVar2);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0160eeb4();
        }
        lVar10 = *(long *)(unaff_x19 + 0x20);
        if ((*(byte *)(lVar10 + 0x132) & 1) == 0) {
          lVar10 = FUN_015c2790();
        }
        FUN_028fac88(lVar4,lVar3,*(undefined8 *)(*(long *)(lVar10 + 0xc0) + 0x68),0);
        plVar7 = (long *)(*(code *)unaff_x23[3])(unaff_x23[8],lVar4);
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0160eeb4();
        }
        lVar3 = *plVar7;
        uVar5 = (ulong)*(ushort *)(lVar3 + 0x12a);
        if (uVar5 != 0) {
          piVar12 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_06e14538) {
              puVar8 = (undefined8 *)(lVar3 + (long)(*piVar12 + 3) * 0x10 + 0x138);
              goto LAB_02738224;
            }
            uVar5 = uVar5 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar5 != 0);
        }
        puVar8 = (undefined8 *)FUN_015c2a80(plVar7,*(long *)PTR_DAT_06e14538,3);
LAB_02738224:
        uVar5 = (*(code *)*puVar8)(plVar7,puVar8[1]);
        if ((uVar5 & 1) != 0) {
          lVar4 = *(long *)(unaff_x19 + 0x20);
          lVar11 = *plVar15;
          lVar10 = *plVar16;
          lVar17 = *plVar13;
          uVar1 = *(ushort *)(lVar4 + 0x132);
          lVar3 = lVar4;
          if ((uVar1 & 1) == 0) {
            lVar3 = FUN_015c2790();
            lVar4 = *(long *)(unaff_x19 + 0x20);
            uVar1 = *(ushort *)(lVar4 + 0x132);
          }
          pcVar14 = *(code **)(*(long *)(*(long *)(lVar3 + 0xc0) + 0x70) + 8);
          if ((uVar1 & 1) == 0) {
            lVar4 = FUN_015c2790();
          }
          (*pcVar14)(plVar7,lVar11,lVar10,lVar17,0,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x70));
        }
        return *plVar13;
      }
      goto LAB_027382b8;
    }
    thunk_FUN_0159f088(PTR_DAT_06e01970);
    uVar6 = thunk_FUN_015d056c();
    FUN_011a9bc8();
    puVar9 = PTR_DAT_06e37ad8;
  }
  uVar18 = thunk_FUN_0159f088(puVar9);
  FUN_028f2804(uVar6,uVar18,0);
  uVar18 = thunk_FUN_0159f088(PTR_DAT_06d9c700);
                    /* WARNING: Subroutine does not return */
  FUN_0160ee7c(uVar6,uVar18);
}


