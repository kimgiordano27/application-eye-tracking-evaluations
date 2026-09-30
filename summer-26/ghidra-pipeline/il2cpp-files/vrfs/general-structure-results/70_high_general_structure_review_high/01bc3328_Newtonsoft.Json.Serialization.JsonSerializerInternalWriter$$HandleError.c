/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$HandleError
ENTRY_POINT: 01bc3328
PROGRAM: vrfs-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_17;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x01bc38ec) */
/* WARNING: Removing unreachable block (ram,0x01bc3774) */
/* WARNING: Removing unreachable block (ram,0x01bc37e0) */
/* WARNING: Removing unreachable block (ram,0x01bc38e0) */
/* WARNING: Removing unreachable block (ram,0x01bc38f4) */
/* WARNING: Removing unreachable block (ram,0x01bc3850) */

void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__HandleError(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 *puVar8;
  long *plVar9;
  long *plVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  long *unaff_x19;
  long unaff_x20;
  undefined8 uVar15;
  ulong unaff_x21;
  long unaff_x22;
  undefined8 uVar16;
  long lVar17;
  
  thunk_FUN_0159f088(PTR_DAT_06e10d20);
  *(undefined1 *)(unaff_x22 + 0xcf5) = 1;
  if (unaff_x20 == 0) goto LAB_01bc38bc;
  uVar16 = *(undefined8 *)(unaff_x20 + 0x10);
  plVar5 = (long *)FUN_018718f0();
  if (plVar5 != (long *)0x0) {
                    /* try { // try from 01bc3368 to 01cc336f has its CatchHandler @ 01bc34b8 */
    bVar1 = *(byte *)(*(long *)PTR_DAT_06dff680 + 300);
                    /* try { // try from 01bc3384 to 01cc3393 has its CatchHandler @ 01bc34bc */
    if ((*(byte *)(*plVar5 + 300) < bVar1) ||
       (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_06dff680)) {
                    /* WARNING: Subroutine does not return */
      FUN_0160f170(plVar5);
    }
  }
  if ((char)unaff_x19[9] != '\0') {
    if (plVar5 == (long *)0x0) goto LAB_01bc38bc;
    FUN_01872200(plVar5,(int)unaff_x19[5],0);
    FUN_01872344(plVar5,unaff_x19[6],0);
    FUN_018721c8(plVar5,*(undefined4 *)((long)unaff_x19 + 0x1c),0);
    FUN_01872238(plVar5,unaff_x19[4],0);
  }
  puVar3 = PTR_DAT_06e636c0;
  (**(code **)(*unaff_x19 + 0x188))();
  if (*(char *)((long)unaff_x19 + 0x19) == '\0') {
LAB_01bc3420:
    uVar15 = 0;
  }
  else {
    if (plVar5 == (long *)0x0) goto LAB_01bc38bc;
    uVar6 = FUN_0187269c(plVar5,0);
    if (((uVar6 & 1) != 0) || (uVar6 = FUN_01bc2df0(uVar16), (uVar6 & 1) != 0)) goto LAB_01bc3420;
    uVar15 = FUN_0187e73c(0,0);
    plVar7 = (long *)FUN_0362a59c(uVar16,0);
    plVar9 = (long *)FUN_0362a8c0(uVar15,0);
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    while (lVar12 = (**(code **)(*plVar7 + 0x218))(plVar7,*(undefined8 *)(*plVar7 + 0x220)),
          lVar12 != 0) {
      plVar10 = (long *)FUN_025ed634(0);
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      lVar12 = (**(code **)(*plVar10 + 0x268))(plVar10,lVar12,*(undefined8 *)(*plVar10 + 0x270));
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      (**(code **)(*plVar9 + 0x398))
                (plVar9,lVar12,0,*(undefined4 *)(lVar12 + 0x18),*(undefined8 *)(*plVar9 + 0x3a0));
      (**(code **)(*plVar9 + 0x3b8))(plVar9,10,*(undefined8 *)(*plVar9 + 0x3c0));
    }
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    (**(code **)(*plVar9 + 0x2a8))(plVar9,*(undefined8 *)(*plVar9 + 0x2b0));
    lVar12 = *plVar9;
    uVar6 = (ulong)*(ushort *)(lVar12 + 0x12a);
    if (uVar6 != 0) {
      piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
          puVar8 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_01bc37c8;
        }
        uVar6 = uVar6 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar6 != 0);
    }
    puVar8 = (undefined8 *)FUN_015c2a80(plVar9,*(long *)puVar3,0);
LAB_01bc37c8:
    (*(code *)*puVar8)(plVar9,puVar8[1]);
    if (plVar7 != (long *)0x0) {
      lVar12 = *plVar7;
      uVar6 = (ulong)*(ushort *)(lVar12 + 0x12a);
      if (uVar6 != 0) {
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
            puVar8 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_01bc3838;
          }
          uVar6 = uVar6 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar6 != 0);
      }
      puVar8 = (undefined8 *)FUN_015c2a80(plVar7,*(long *)puVar3,0);
LAB_01bc3838:
      (*(code *)*puVar8)(plVar7,puVar8[1]);
    }
    lVar12 = thunk_FUN_015d056c(*(undefined8 *)PTR_DAT_06e09e90);
    if (lVar12 == 0) goto LAB_01bc38bc;
    FUN_0362c804(lVar12,uVar15,0);
    uVar16 = FUN_0362c95c(lVar12,0);
    FUN_01872608(plVar5,uVar16,0);
    uVar16 = uVar15;
  }
  uVar6 = FUN_02526f10(unaff_x19[7],0);
  lVar12 = 0;
  if ((uVar6 & 1) == 0) {
    if ((plVar5 == (long *)0x0) || (lVar12 = FUN_01871a0c(plVar5,0), lVar12 == 0))
    goto LAB_01bc38bc;
    uVar6 = FUN_02526714(lVar12,unaff_x19[7],5,0);
    lVar12 = 0;
    if ((uVar6 & 1) != 0) {
      lVar12 = FUN_01871a0c(plVar5,0);
      if ((unaff_x19[7] == 0) || (lVar12 == 0)) goto LAB_01bc38bc;
      lVar12 = FUN_0252aef8(lVar12,*(int *)(unaff_x19[7] + 0x10) + 1,0);
    }
  }
  puVar2 = PTR_DAT_06e10d20;
  lVar17 = unaff_x19[8];
  if (lVar17 != 0) {
    if (lVar12 == 0) {
      if (plVar5 == (long *)0x0) goto LAB_01bc38bc;
      lVar12 = FUN_01871a0c(plVar5,0);
      uVar11 = *(undefined8 *)puVar2;
    }
    else {
      uVar11 = *(undefined8 *)PTR_DAT_06e10d20;
    }
    lVar12 = FUN_02526be4(lVar17,uVar11,lVar12,0);
  }
  if (lVar12 != 0) {
    if (plVar5 == (long *)0x0) goto LAB_01bc38bc;
    FUN_01871a28(plVar5,lVar12,0);
  }
  if ((unaff_x19[0xb] != 0) && (FUN_01876344(unaff_x19[0xb],plVar5,0), plVar5 != (long *)0x0)) {
    uVar6 = FUN_0187269c(plVar5,0);
    puVar2 = PTR_DAT_06e397e8;
    if ((uVar6 & 1) != 0) {
      if ((unaff_x21 & 1) != 0) {
        lVar12 = FUN_01872794(plVar5,0);
        if (lVar12 == 0) goto LAB_01bc38bc;
        if (0 < (int)*(ulong *)(lVar12 + 0x18)) {
          uVar6 = 0;
          uVar13 = *(ulong *)(lVar12 + 0x18) & 0xffffffff;
          do {
            if (uVar13 <= uVar6) {
                    /* WARNING: Subroutine does not return */
              FUN_0160eebc();
            }
            FUN_01bc32c8();
            uVar13 = (ulong)*(uint *)(lVar12 + 0x18);
            uVar6 = uVar6 + 1;
          } while ((long)uVar6 < (long)(int)*(uint *)(lVar12 + 0x18));
        }
      }
      return;
    }
    plVar5 = (long *)FUN_0362b068(uVar16,0);
    lVar12 = FUN_0160edfc(*(undefined8 *)puVar2,0x8000);
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    while( true ) {
      iVar4 = (**(code **)(*plVar5 + 0x368))
                        (plVar5,lVar12,0,*(undefined4 *)(lVar12 + 0x18),
                         *(undefined8 *)(*plVar5 + 0x370));
      if (iVar4 < 1) break;
      plVar7 = (long *)unaff_x19[0xb];
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      (**(code **)(*plVar7 + 0x398))(plVar7,lVar12,0,iVar4,*(undefined8 *)(*plVar7 + 0x3a0));
    }
    lVar12 = *plVar5;
    uVar6 = (ulong)*(ushort *)(lVar12 + 0x12a);
    if (uVar6 != 0) {
      piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
          puVar8 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_01bc375c;
        }
        uVar6 = uVar6 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar6 != 0);
    }
    puVar8 = (undefined8 *)FUN_015c2a80(plVar5,*(long *)puVar3,0,iVar4);
LAB_01bc375c:
    (*(code *)*puVar8)(plVar5,puVar8[1]);
    uVar6 = FUN_02526f10(uVar15,0);
    if ((uVar6 & 1) == 0) {
      FUN_0362a948(uVar15,0);
    }
    if (unaff_x19[0xb] != 0) {
      FUN_01876164(unaff_x19[0xb],0);
      return;
    }
  }
LAB_01bc38bc:
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


