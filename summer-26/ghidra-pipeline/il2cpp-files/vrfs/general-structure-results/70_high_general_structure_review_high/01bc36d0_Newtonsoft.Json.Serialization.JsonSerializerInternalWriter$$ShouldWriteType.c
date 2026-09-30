/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$ShouldWriteType
ENTRY_POINT: 01bc36d0
PROGRAM: vrfs-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_20;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x01bc38ec) */
/* WARNING: Removing unreachable block (ram,0x01bc3774) */
/* WARNING: Removing unreachable block (ram,0x01bc37e0) */
/* WARNING: Removing unreachable block (ram,0x01bc38e0) */
/* WARNING: Removing unreachable block (ram,0x01bc38f4) */
/* WARNING: Removing unreachable block (ram,0x01bc3850) */

void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__ShouldWriteType(void)

{
  undefined *puVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  code *in_x9;
  ulong uVar9;
  int *piVar10;
  long unaff_x19;
  ulong unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  long lVar11;
  long *unaff_x24;
  long *unaff_x28;
  
  while( true ) {
                    /* catch(type#1 @ 06a5a440) { ... } // from try @ 01bc35fc with catch @ 01bc36d0
                        */
    (*in_x9)();
                    /* catch(type#1 @ 06a5a440) { ... } // from try @ 01bc360c with catch @ 01bc36d4
                        */
    (**(code **)(*unaff_x24 + 0x3b8))();
    lVar4 = (**(code **)(*unaff_x23 + 0x218))();
                    /* try { // try from 01bc36ec to 01cc36ef has its CatchHandler @ 01bc36fc */
    if (lVar4 == 0) break;
    plVar5 = (long *)FUN_025ed634(0);
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    lVar4 = (**(code **)(*plVar5 + 0x268))(plVar5,lVar4,*(undefined8 *)(*plVar5 + 0x270));
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    if (unaff_x24 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    in_x9 = *(code **)(*unaff_x24 + 0x398);
  }
  if (unaff_x24 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0160eeb4();
  }
                    /* catch() { ... } // from try @ 01bc36ec with catch @ 01bc36fc */
                    /* try { // try from 01bc3700 to 01cc3743 has its CatchHandler @ 01bc3758 */
  (**(code **)(*unaff_x24 + 0x2a8))();
  lVar4 = *unaff_x24;
  uVar9 = (ulong)*(ushort *)(lVar4 + 0x12a);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *unaff_x28) {
        puVar6 = (undefined8 *)(lVar4 + (long)*piVar10 * 0x10 + 0x138);
        goto LAB_01bc37c8;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
                    /* try { // try from 01bc3744 to 01cc374f has its CatchHandler @ 01bc3580 */
  puVar6 = (undefined8 *)FUN_015c2a80();
LAB_01bc37c8:
  (*(code *)*puVar6)();
  if (unaff_x23 != (long *)0x0) {
    lVar4 = *unaff_x23;
    uVar9 = (ulong)*(ushort *)(lVar4 + 0x12a);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *unaff_x28) {
          puVar6 = (undefined8 *)(lVar4 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_01bc3838;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar6 = (undefined8 *)FUN_015c2a80();
LAB_01bc3838:
    (*(code *)*puVar6)();
  }
  lVar4 = thunk_FUN_015d056c(*(undefined8 *)PTR_DAT_06e09e90);
  if (lVar4 != 0) {
    FUN_0362c804();
    FUN_0362c95c(lVar4,0);
    FUN_01872608();
    uVar9 = FUN_02526f10(*(undefined8 *)(unaff_x19 + 0x38),0);
    lVar4 = 0;
    if ((uVar9 & 1) == 0) {
      if ((unaff_x22 == 0) || (lVar4 = FUN_01871a0c(), lVar4 == 0)) goto LAB_01bc38bc;
      uVar9 = FUN_02526714(lVar4,*(undefined8 *)(unaff_x19 + 0x38),5,0);
      lVar4 = 0;
      if ((uVar9 & 1) != 0) {
        lVar4 = FUN_01871a0c();
        if ((*(long *)(unaff_x19 + 0x38) == 0) || (lVar4 == 0)) goto LAB_01bc38bc;
        lVar4 = FUN_0252aef8(lVar4,*(int *)(*(long *)(unaff_x19 + 0x38) + 0x10) + 1,0);
      }
    }
    puVar1 = PTR_DAT_06e10d20;
    lVar11 = *(long *)(unaff_x19 + 0x40);
    if (lVar11 != 0) {
      if (lVar4 == 0) {
                    /* catch(type#1 @ 06a5a440) { ... } // from try @ 01bc33e0 with catch @ 01bc34ac
                        */
        if (unaff_x22 == 0) goto LAB_01bc38bc;
                    /* catch(type#1 @ 06a5a440) { ... } // from try @ 01bc339c with catch @ 01bc34b0
                        */
                    /* catch(type#1 @ 06a5a440) { ... } // from try @ 01bc33bc with catch @ 01bc34b4
                        */
                    /* catch(type#1 @ 06a5a440) { ... } // from try @ 01bc3368 with catch @ 01bc34b8
                        */
        lVar4 = FUN_01871a0c();
                    /* catch(type#1 @ 06a5a440) { ... } // from try @ 01bc3384 with catch @ 01bc34bc
                        */
        uVar7 = *(undefined8 *)puVar1;
      }
      else {
        uVar7 = *(undefined8 *)PTR_DAT_06e10d20;
      }
      lVar4 = FUN_02526be4(lVar11,uVar7,lVar4,0);
    }
    if (lVar4 != 0) {
      if (unaff_x22 == 0) goto LAB_01bc38bc;
      FUN_01871a28();
    }
    if ((*(long *)(unaff_x19 + 0x58) != 0) && (FUN_01876344(), unaff_x22 != 0)) {
      uVar9 = FUN_0187269c();
      puVar1 = PTR_DAT_06e397e8;
      if ((uVar9 & 1) != 0) {
        if ((unaff_x21 & 1) != 0) {
          lVar4 = FUN_01872794();
          if (lVar4 == 0) goto LAB_01bc38bc;
          if (0 < (int)*(ulong *)(lVar4 + 0x18)) {
            uVar9 = 0;
            uVar8 = *(ulong *)(lVar4 + 0x18) & 0xffffffff;
            do {
              if (uVar8 <= uVar9) {
                    /* WARNING: Subroutine does not return */
                FUN_0160eebc();
              }
              FUN_01bc32c8();
              uVar8 = (ulong)*(uint *)(lVar4 + 0x18);
              uVar9 = uVar9 + 1;
            } while ((long)uVar9 < (long)(int)*(uint *)(lVar4 + 0x18));
          }
        }
        return;
      }
                    /* try { // try from 01bc3580 to 01cc35fb has its CatchHandler @ 01bc3580
                       catch() { ... } // from try @ 01bc3580 with catch @ 01bc3580
                       catch() { ... } // from try @ 01bc361c with catch @ 01bc3580
                       catch() { ... } // from try @ 01bc3744 with catch @ 01bc3580 */
      plVar5 = (long *)FUN_0362b068();
      lVar4 = FUN_0160edfc(*(undefined8 *)puVar1,0x8000);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      while( true ) {
        iVar2 = (**(code **)(*plVar5 + 0x368))
                          (plVar5,lVar4,0,*(undefined4 *)(lVar4 + 0x18),
                           *(undefined8 *)(*plVar5 + 0x370));
        if (iVar2 < 1) break;
        plVar3 = *(long **)(unaff_x19 + 0x58);
        if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0160eeb4();
        }
        (**(code **)(*plVar3 + 0x398))(plVar3,lVar4,0,iVar2,*(undefined8 *)(*plVar3 + 0x3a0));
      }
                    /* try { // try from 01bc35fc to 01cc35ff has its CatchHandler @ 01bc36d0 */
      lVar4 = *plVar5;
      uVar9 = (ulong)*(ushort *)(lVar4 + 0x12a);
      if (uVar9 != 0) {
                    /* try { // try from 01bc360c to 01cc361b has its CatchHandler @ 01bc36d4 */
        piVar10 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
                    /* try { // try from 01bc361c to 01cc36eb has its CatchHandler @ 01bc3580 */
          if (*(long *)(piVar10 + -2) == *unaff_x28) {
                    /* try { // try from 01bc3750 to 01cc3757 has its CatchHandler @ 01bc3758 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 01bc3700 with catch @ 01bc3758
                       catch(type#2 @ 00000000) { ... } // from try @ 01bc3750 with catch @ 01bc3758
                        */
            puVar6 = (undefined8 *)(lVar4 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_01bc375c;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar6 = (undefined8 *)FUN_015c2a80(plVar5,*unaff_x28,0,iVar2);
LAB_01bc375c:
      (*(code *)*puVar6)(plVar5,puVar6[1]);
      uVar9 = FUN_02526f10();
      if ((uVar9 & 1) == 0) {
        FUN_0362a948();
      }
      if (*(long *)(unaff_x19 + 0x58) != 0) {
        FUN_01876164(*(long *)(unaff_x19 + 0x58),0);
        return;
      }
    }
  }
LAB_01bc38bc:
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


