/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$GetInternalSerializer
ENTRY_POINT: 01bc339c
PROGRAM: vrfs-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_20;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x01bc38ec) */
/* WARNING: Removing unreachable block (ram,0x01bc3774) */
/* WARNING: Removing unreachable block (ram,0x01bc37e0) */
/* WARNING: Removing unreachable block (ram,0x01bc38e0) */
/* WARNING: Removing unreachable block (ram,0x01bc38f4) */
/* WARNING: Removing unreachable block (ram,0x01bc3850) */

void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__GetInternalSerializer(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long *unaff_x19;
  undefined8 uVar13;
  ulong unaff_x21;
  long unaff_x22;
  undefined8 unaff_x23;
  long lVar14;
  
                    /* try { // try from 01bc339c to 01cc33b3 has its CatchHandler @ 01bc34b0 */
  FUN_01872200();
  FUN_01872344();
                    /* try { // try from 01bc33bc to 01cc33cf has its CatchHandler @ 01bc34b4 */
  FUN_018721c8();
  FUN_01872238();
  puVar2 = PTR_DAT_06e636c0;
                    /* try { // try from 01bc33e0 to 01cc33e7 has its CatchHandler @ 01bc34ac */
                    /* try { // try from 01bc33f4 to 01cc3403 has its CatchHandler @ 01bc34a8 */
  (**(code **)(*unaff_x19 + 0x188))();
  if (*(char *)((long)unaff_x19 + 0x19) == '\0') {
LAB_01bc3420:
    uVar13 = 0;
  }
  else {
    if (unaff_x22 == 0) goto LAB_01bc38bc;
    uVar4 = FUN_0187269c();
                    /* try { // try from 01bc3414 to 01cc3423 has its CatchHandler @ 01bc34a4 */
    if (((uVar4 & 1) != 0) || (uVar4 = FUN_01bc2df0(), (uVar4 & 1) != 0)) goto LAB_01bc3420;
    uVar13 = FUN_0187e73c(0,0);
    plVar5 = (long *)FUN_0362a59c();
    plVar6 = (long *)FUN_0362a8c0(uVar13,0);
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    while (lVar10 = (**(code **)(*plVar5 + 0x218))(plVar5,*(undefined8 *)(*plVar5 + 0x220)),
          lVar10 != 0) {
      plVar8 = (long *)FUN_025ed634(0);
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      lVar10 = (**(code **)(*plVar8 + 0x268))(plVar8,lVar10,*(undefined8 *)(*plVar8 + 0x270));
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      (**(code **)(*plVar6 + 0x398))
                (plVar6,lVar10,0,*(undefined4 *)(lVar10 + 0x18),*(undefined8 *)(*plVar6 + 0x3a0));
      (**(code **)(*plVar6 + 0x3b8))(plVar6,10,*(undefined8 *)(*plVar6 + 0x3c0));
    }
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    (**(code **)(*plVar6 + 0x2a8))(plVar6,*(undefined8 *)(*plVar6 + 0x2b0));
    lVar10 = *plVar6;
    uVar4 = (ulong)*(ushort *)(lVar10 + 0x12a);
    if (uVar4 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
          puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_01bc37c8;
        }
        uVar4 = uVar4 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar4 != 0);
    }
    puVar7 = (undefined8 *)FUN_015c2a80(plVar6,*(long *)puVar2,0);
LAB_01bc37c8:
    (*(code *)*puVar7)(plVar6,puVar7[1]);
    if (plVar5 != (long *)0x0) {
      lVar10 = *plVar5;
      uVar4 = (ulong)*(ushort *)(lVar10 + 0x12a);
      if (uVar4 != 0) {
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
            puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_01bc3838;
          }
          uVar4 = uVar4 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar4 != 0);
      }
      puVar7 = (undefined8 *)FUN_015c2a80(plVar5,*(long *)puVar2,0);
LAB_01bc3838:
      (*(code *)*puVar7)(plVar5,puVar7[1]);
    }
    lVar10 = thunk_FUN_015d056c(*(undefined8 *)PTR_DAT_06e09e90);
    if (lVar10 == 0) goto LAB_01bc38bc;
    FUN_0362c804(lVar10,uVar13,0);
    FUN_0362c95c(lVar10,0);
    FUN_01872608();
    unaff_x23 = uVar13;
  }
  uVar4 = FUN_02526f10(unaff_x19[7],0);
  lVar10 = 0;
  if ((uVar4 & 1) == 0) {
    if ((unaff_x22 == 0) || (lVar10 = FUN_01871a0c(), lVar10 == 0)) goto LAB_01bc38bc;
    uVar4 = FUN_02526714(lVar10,unaff_x19[7],5,0);
    lVar10 = 0;
    if ((uVar4 & 1) != 0) {
      lVar10 = FUN_01871a0c();
      if ((unaff_x19[7] == 0) || (lVar10 == 0)) goto LAB_01bc38bc;
      lVar10 = FUN_0252aef8(lVar10,*(int *)(unaff_x19[7] + 0x10) + 1,0);
    }
  }
  puVar1 = PTR_DAT_06e10d20;
  lVar14 = unaff_x19[8];
  if (lVar14 != 0) {
    if (lVar10 == 0) {
      if (unaff_x22 == 0) goto LAB_01bc38bc;
      lVar10 = FUN_01871a0c();
      uVar9 = *(undefined8 *)puVar1;
    }
    else {
      uVar9 = *(undefined8 *)PTR_DAT_06e10d20;
    }
    lVar10 = FUN_02526be4(lVar14,uVar9,lVar10,0);
  }
  if (lVar10 != 0) {
    if (unaff_x22 == 0) goto LAB_01bc38bc;
    FUN_01871a28();
  }
  if ((unaff_x19[0xb] != 0) && (FUN_01876344(), unaff_x22 != 0)) {
    uVar4 = FUN_0187269c();
    puVar1 = PTR_DAT_06e397e8;
    if ((uVar4 & 1) != 0) {
      if ((unaff_x21 & 1) != 0) {
        lVar10 = FUN_01872794();
        if (lVar10 == 0) goto LAB_01bc38bc;
        if (0 < (int)*(ulong *)(lVar10 + 0x18)) {
          uVar4 = 0;
          uVar11 = *(ulong *)(lVar10 + 0x18) & 0xffffffff;
          do {
            if (uVar11 <= uVar4) {
                    /* WARNING: Subroutine does not return */
              FUN_0160eebc();
            }
            FUN_01bc32c8();
            uVar11 = (ulong)*(uint *)(lVar10 + 0x18);
            uVar4 = uVar4 + 1;
          } while ((long)uVar4 < (long)(int)*(uint *)(lVar10 + 0x18));
        }
      }
      return;
    }
    plVar5 = (long *)FUN_0362b068(unaff_x23,0);
    lVar10 = FUN_0160edfc(*(undefined8 *)puVar1,0x8000);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    while( true ) {
      iVar3 = (**(code **)(*plVar5 + 0x368))
                        (plVar5,lVar10,0,*(undefined4 *)(lVar10 + 0x18),
                         *(undefined8 *)(*plVar5 + 0x370));
      if (iVar3 < 1) break;
      plVar6 = (long *)unaff_x19[0xb];
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      (**(code **)(*plVar6 + 0x398))(plVar6,lVar10,0,iVar3,*(undefined8 *)(*plVar6 + 0x3a0));
    }
    lVar10 = *plVar5;
    uVar4 = (ulong)*(ushort *)(lVar10 + 0x12a);
    if (uVar4 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
          puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_01bc375c;
        }
        uVar4 = uVar4 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar4 != 0);
    }
    puVar7 = (undefined8 *)FUN_015c2a80(plVar5,*(long *)puVar2,0,iVar3);
LAB_01bc375c:
    (*(code *)*puVar7)(plVar5,puVar7[1]);
    uVar4 = FUN_02526f10(uVar13,0);
    if ((uVar4 & 1) == 0) {
      FUN_0362a948(uVar13,0);
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


