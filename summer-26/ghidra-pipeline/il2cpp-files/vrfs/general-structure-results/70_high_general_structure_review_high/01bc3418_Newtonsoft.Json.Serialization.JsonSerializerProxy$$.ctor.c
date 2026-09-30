/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$.ctor
ENTRY_POINT: 01bc3418
PROGRAM: vrfs-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_19;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x01bc38ec) */
/* WARNING: Removing unreachable block (ram,0x01bc3774) */
/* WARNING: Removing unreachable block (ram,0x01bc37e0) */
/* WARNING: Removing unreachable block (ram,0x01bc38e0) */
/* WARNING: Removing unreachable block (ram,0x01bc38f4) */
/* WARNING: Removing unreachable block (ram,0x01bc3850) */

void Newtonsoft_Json_Serialization_JsonSerializerProxy___ctor(void)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long unaff_x19;
  undefined8 uVar12;
  ulong unaff_x21;
  long unaff_x22;
  undefined8 unaff_x23;
  long lVar13;
  long *unaff_x28;
  
  uVar3 = FUN_01bc2df0();
  if ((uVar3 & 1) == 0) {
    uVar12 = FUN_0187e73c(0,0);
    plVar4 = (long *)FUN_0362a59c();
    plVar5 = (long *)FUN_0362a8c0(uVar12,0);
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    while (lVar9 = (**(code **)(*plVar4 + 0x218))(plVar4,*(undefined8 *)(*plVar4 + 0x220)),
          lVar9 != 0) {
      plVar7 = (long *)FUN_025ed634(0);
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      lVar9 = (**(code **)(*plVar7 + 0x268))(plVar7,lVar9,*(undefined8 *)(*plVar7 + 0x270));
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      (**(code **)(*plVar5 + 0x398))
                (plVar5,lVar9,0,*(undefined4 *)(lVar9 + 0x18),*(undefined8 *)(*plVar5 + 0x3a0));
      (**(code **)(*plVar5 + 0x3b8))(plVar5,10,*(undefined8 *)(*plVar5 + 0x3c0));
    }
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    (**(code **)(*plVar5 + 0x2a8))(plVar5,*(undefined8 *)(*plVar5 + 0x2b0));
    lVar9 = *plVar5;
    uVar3 = (ulong)*(ushort *)(lVar9 + 0x12a);
    if (uVar3 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *unaff_x28) {
          puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_01bc37c8;
        }
        uVar3 = uVar3 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar3 != 0);
    }
    puVar6 = (undefined8 *)FUN_015c2a80(plVar5,*unaff_x28,0);
LAB_01bc37c8:
    (*(code *)*puVar6)(plVar5,puVar6[1]);
    if (plVar4 != (long *)0x0) {
      lVar9 = *plVar4;
      uVar3 = (ulong)*(ushort *)(lVar9 + 0x12a);
      if (uVar3 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *unaff_x28) {
            puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_01bc3838;
          }
          uVar3 = uVar3 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar3 != 0);
      }
      puVar6 = (undefined8 *)FUN_015c2a80(plVar4,*unaff_x28,0);
LAB_01bc3838:
      (*(code *)*puVar6)(plVar4,puVar6[1]);
    }
    lVar9 = thunk_FUN_015d056c(*(undefined8 *)PTR_DAT_06e09e90);
    if (lVar9 == 0) goto LAB_01bc38bc;
    FUN_0362c804(lVar9,uVar12,0);
    FUN_0362c95c(lVar9,0);
    FUN_01872608();
    unaff_x23 = uVar12;
  }
  else {
    uVar12 = 0;
  }
                    /* try { // try from 01bc3424 to 01cc34d3 has its CatchHandler @ 01bc2e44 */
  uVar3 = FUN_02526f10(*(undefined8 *)(unaff_x19 + 0x38),0);
  lVar9 = 0;
  if ((uVar3 & 1) == 0) {
    if ((unaff_x22 == 0) || (lVar9 = FUN_01871a0c(), lVar9 == 0)) goto LAB_01bc38bc;
    uVar3 = FUN_02526714(lVar9,*(undefined8 *)(unaff_x19 + 0x38),5,0);
    lVar9 = 0;
    if ((uVar3 & 1) != 0) {
      lVar9 = FUN_01871a0c();
      if ((*(long *)(unaff_x19 + 0x38) == 0) || (lVar9 == 0)) goto LAB_01bc38bc;
      lVar9 = FUN_0252aef8(lVar9,*(int *)(*(long *)(unaff_x19 + 0x38) + 0x10) + 1,0);
    }
  }
  puVar1 = PTR_DAT_06e10d20;
  lVar13 = *(long *)(unaff_x19 + 0x40);
  if (lVar13 != 0) {
    if (lVar9 == 0) {
      if (unaff_x22 == 0) goto LAB_01bc38bc;
      lVar9 = FUN_01871a0c();
      uVar8 = *(undefined8 *)puVar1;
    }
    else {
      uVar8 = *(undefined8 *)PTR_DAT_06e10d20;
    }
    lVar9 = FUN_02526be4(lVar13,uVar8,lVar9,0);
  }
  if (lVar9 != 0) {
    if (unaff_x22 == 0) goto LAB_01bc38bc;
    FUN_01871a28();
  }
  if ((*(long *)(unaff_x19 + 0x58) != 0) && (FUN_01876344(), unaff_x22 != 0)) {
    uVar3 = FUN_0187269c();
    puVar1 = PTR_DAT_06e397e8;
    if ((uVar3 & 1) != 0) {
      if ((unaff_x21 & 1) != 0) {
        lVar9 = FUN_01872794();
        if (lVar9 == 0) goto LAB_01bc38bc;
        if (0 < (int)*(ulong *)(lVar9 + 0x18)) {
          uVar3 = 0;
          uVar10 = *(ulong *)(lVar9 + 0x18) & 0xffffffff;
          do {
            if (uVar10 <= uVar3) {
                    /* WARNING: Subroutine does not return */
              FUN_0160eebc();
            }
            FUN_01bc32c8();
            uVar10 = (ulong)*(uint *)(lVar9 + 0x18);
            uVar3 = uVar3 + 1;
          } while ((long)uVar3 < (long)(int)*(uint *)(lVar9 + 0x18));
        }
      }
      return;
    }
    plVar4 = (long *)FUN_0362b068(unaff_x23,0);
    lVar9 = FUN_0160edfc(*(undefined8 *)puVar1,0x8000);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    while( true ) {
      iVar2 = (**(code **)(*plVar4 + 0x368))
                        (plVar4,lVar9,0,*(undefined4 *)(lVar9 + 0x18),
                         *(undefined8 *)(*plVar4 + 0x370));
      if (iVar2 < 1) break;
      plVar5 = *(long **)(unaff_x19 + 0x58);
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      (**(code **)(*plVar5 + 0x398))(plVar5,lVar9,0,iVar2,*(undefined8 *)(*plVar5 + 0x3a0));
    }
    lVar9 = *plVar4;
    uVar3 = (ulong)*(ushort *)(lVar9 + 0x12a);
    if (uVar3 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *unaff_x28) {
          puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_01bc375c;
        }
        uVar3 = uVar3 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar3 != 0);
    }
    puVar6 = (undefined8 *)FUN_015c2a80(plVar4,*unaff_x28,0,iVar2);
LAB_01bc375c:
    (*(code *)*puVar6)(plVar4,puVar6[1]);
    uVar3 = FUN_02526f10(uVar12,0);
    if ((uVar3 & 1) == 0) {
      FUN_0362a948(uVar12,0);
    }
    if (*(long *)(unaff_x19 + 0x58) != 0) {
      FUN_01876164(*(long *)(unaff_x19 + 0x58),0);
      return;
    }
  }
LAB_01bc38bc:
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


