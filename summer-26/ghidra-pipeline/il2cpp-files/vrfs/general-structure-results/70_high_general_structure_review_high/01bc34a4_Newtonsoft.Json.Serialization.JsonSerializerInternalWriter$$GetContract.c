/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$GetContract
ENTRY_POINT: 01bc34a4
PROGRAM: vrfs-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_10;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x01bc3774) */
/* WARNING: Removing unreachable block (ram,0x01bc38e0) */

void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__GetContract(void)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  ulong uVar8;
  int *piVar9;
  long unaff_x19;
  ulong unaff_x21;
  long unaff_x22;
  long *unaff_x28;
  
                    /* catch(type#1 @ 06a5a440) { ... } // from try @ 01bc3414 with catch @ 01bc34a4
                        */
                    /* catch(type#1 @ 06a5a440) { ... } // from try @ 01bc33f4 with catch @ 01bc34a8
                        */
  lVar3 = FUN_02526be4();
                    /* try { // try from 01bc34d4 to 01cc34d7 has its CatchHandler @ 01bc34f8 */
  if (lVar3 != 0) {
                    /* try { // try from 01bc34d8 to 01cc34ff has its CatchHandler @ 01bc2e44 */
    if (unaff_x22 == 0) goto LAB_01bc38bc;
    FUN_01871a28();
  }
                    /* catch() { ... } // from try @ 01bc34d4 with catch @ 01bc34f8 */
                    /* try { // try from 01bc3500 to 01cc3507 has its CatchHandler @ 01bc351c */
  if ((*(long *)(unaff_x19 + 0x58) != 0) && (FUN_01876344(), unaff_x22 != 0)) {
                    /* try { // try from 01bc3508 to 01cc3513 has its CatchHandler @ 01bc2e44 */
    uVar4 = FUN_0187269c();
    puVar1 = PTR_DAT_06e397e8;
    if ((uVar4 & 1) != 0) {
                    /* try { // try from 01bc3514 to 01cc351b has its CatchHandler @ 01bc351c */
      if ((unaff_x21 & 1) != 0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 01bc3500 with catch @ 01bc351c
                       catch(type#2 @ 00000000) { ... } // from try @ 01bc3514 with catch @ 01bc351c
                        */
        lVar3 = FUN_01872794();
        if (lVar3 == 0) goto LAB_01bc38bc;
        if (0 < (int)*(ulong *)(lVar3 + 0x18)) {
          uVar4 = 0;
          uVar8 = *(ulong *)(lVar3 + 0x18) & 0xffffffff;
          do {
            if (uVar8 <= uVar4) {
                    /* WARNING: Subroutine does not return */
              FUN_0160eebc();
            }
            FUN_01bc32c8();
            uVar8 = (ulong)*(uint *)(lVar3 + 0x18);
            uVar4 = uVar4 + 1;
          } while ((long)uVar4 < (long)(int)*(uint *)(lVar3 + 0x18));
        }
      }
      return;
    }
    plVar5 = (long *)FUN_0362b068();
    lVar3 = FUN_0160edfc(*(undefined8 *)puVar1,0x8000);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    while( true ) {
      iVar2 = (**(code **)(*plVar5 + 0x368))
                        (plVar5,lVar3,0,*(undefined4 *)(lVar3 + 0x18),
                         *(undefined8 *)(*plVar5 + 0x370));
      if (iVar2 < 1) break;
      plVar6 = *(long **)(unaff_x19 + 0x58);
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      (**(code **)(*plVar6 + 0x398))(plVar6,lVar3,0,iVar2,*(undefined8 *)(*plVar6 + 0x3a0));
    }
    lVar3 = *plVar5;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12a);
    if (uVar4 != 0) {
      piVar9 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *unaff_x28) {
          puVar7 = (undefined8 *)(lVar3 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_01bc375c;
        }
        uVar4 = uVar4 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar4 != 0);
    }
    puVar7 = (undefined8 *)FUN_015c2a80(plVar5,*unaff_x28,0,iVar2);
LAB_01bc375c:
    (*(code *)*puVar7)(plVar5,puVar7[1]);
    uVar4 = FUN_02526f10();
    if ((uVar4 & 1) == 0) {
      FUN_0362a948();
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


