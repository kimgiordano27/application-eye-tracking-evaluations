/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$Serialize
ENTRY_POINT: 01bc25ec
PROGRAM: vrfs-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x01bc28e4) */

void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__Serialize(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  int *piVar10;
  long *unaff_x19;
  long unaff_x20;
  ulong unaff_x22;
  
  (**(code **)(param_1 + 0x188))();
  puVar2 = PTR_DAT_06e53b50;
  if (unaff_x20 != 0) {
                    /* try { // try from 01bc2604 to 01cc260b has its CatchHandler @ 01bc2894 */
    lVar3 = FUN_01871a0c();
                    /* try { // try from 01bc2618 to 01cc261f has its CatchHandler @ 01bc288c */
                    /* try { // try from 01bc2624 to 01cc262f has its CatchHandler @ 01bc2890 */
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_016466fc(*(long *)puVar2);
    }
                    /* try { // try from 01bc2638 to 01cc264b has its CatchHandler @ 01bc2884 */
    uVar4 = FUN_0439736c(lVar3,0);
    if ((uVar4 & 1) != 0) {
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                    /* try { // try from 01bc264c to 01cc27e3 has its CatchHandler @ 01bc2484 */
        thunk_FUN_016466fc();
      }
      lVar5 = FUN_043978d4(lVar3,0);
      if ((lVar5 == 0) || (lVar3 == 0)) goto LAB_01bc2894;
      lVar3 = FUN_0252aef8(lVar3,*(undefined4 *)(lVar5 + 0x10),0);
    }
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_016466fc();
    }
    if (lVar3 != 0) {
      FUN_02528e0c(lVar3,0x2f,*(undefined2 *)(*(long *)(*(long *)puVar2 + 0xb8) + 10),0);
      uVar6 = FUN_04385a0c();
      if ((unaff_x22 & 1) == 0) {
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_016466fc();
        }
        lVar3 = FUN_04393868(uVar6,0);
        if (lVar3 == 0) goto LAB_01bc2894;
        uVar4 = FUN_02526714();
        if ((uVar4 & 1) == 0) {
          thunk_FUN_0159f088(PTR_DAT_06de8fc8);
          uVar6 = thunk_FUN_015d056c();
          FUN_011a9bc8();
          uVar9 = thunk_FUN_0159f088(PTR_DAT_06dcf0a8);
          FUN_0187cfac(uVar6,uVar9,0);
          uVar9 = thunk_FUN_0159f088(PTR_DAT_06dcd278);
                    /* WARNING: Subroutine does not return */
          FUN_0160ee7c(uVar6,uVar9);
        }
      }
      uVar4 = FUN_0187269c();
      puVar1 = PTR_DAT_06e09e90;
      if ((uVar4 & 1) != 0) {
        FUN_01bc2998(uVar6);
        return;
      }
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      FUN_04385e14(uVar6,0);
      FUN_01bc2998();
      plVar7 = (long *)thunk_FUN_015d056c(*(undefined8 *)puVar1);
      if (plVar7 != (long *)0x0) {
        FUN_0362c804(plVar7,uVar6,0);
        uVar4 = (**(code **)(*plVar7 + 0x1d8))(plVar7,*(undefined8 *)(*plVar7 + 0x1e0));
        if ((uVar4 & 1) == 0) {
LAB_01bc279c:
          puVar2 = PTR_DAT_06e636c0;
          plVar7 = (long *)FUN_0362a8c0(uVar6,0);
          if (*(char *)((long)unaff_x19 + 0x19) == '\0') {
            if (unaff_x19[10] == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_0160eeb4();
            }
                    /* try { // try from 01bc27e4 to 01cc27e7 has its CatchHandler @ 01bc287c */
            FUN_01875b3c(unaff_x19[10],plVar7,0);
          }
          else {
            FUN_01bc2ad8();
          }
          if (plVar7 != (long *)0x0) {
                    /* try { // try from 01bc27f4 to 01cc27f7 has its CatchHandler @ 01bc2878 */
            lVar3 = *plVar7;
                    /* try { // try from 01bc27fc to 01cc282b has its CatchHandler @ 01bc2880 */
            uVar4 = (ulong)*(ushort *)(lVar3 + 0x12a);
            if (uVar4 != 0) {
              piVar10 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
              do {
                if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
                  puVar8 = (undefined8 *)(lVar3 + (long)*piVar10 * 0x10 + 0x138);
                  goto LAB_01bc2840;
                }
                uVar4 = uVar4 - 1;
                piVar10 = piVar10 + 4;
              } while (uVar4 != 0);
            }
            puVar8 = (undefined8 *)FUN_015c2a80(plVar7,*(long *)puVar2,0);
                    /* try { // try from 01bc2830 to 01cc284b has its CatchHandler @ 01bc2888 */
LAB_01bc2840:
            (*(code *)*puVar8)(plVar7,puVar8[1]);
          }
                    /* try { // try from 01bc284c to 01cc284f has its CatchHandler @ 01bc2484 */
                    /* try { // try from 01bc2850 to 01cc2877 has its CatchHandler @ 01bc2888 */
          return;
        }
        if ((char)unaff_x19[3] == '\0') {
          uVar4 = FUN_0438763c(plVar7,0);
          if ((uVar4 & 1) == 0) goto LAB_01bc279c;
          lVar3 = *unaff_x19;
        }
        else {
          lVar3 = *unaff_x19;
        }
                    /* catch() { ... } // from try @ 01bc27f4 with catch @ 01bc2878
                       try { // try from 01bc2878 to 01cc28ab has its CatchHandler @ 01bc2484 */
                    /* catch() { ... } // from try @ 01bc27e4 with catch @ 01bc287c */
                    /* catch() { ... } // from try @ 01bc27fc with catch @ 01bc2880 */
                    /* catch() { ... } // from try @ 01bc2638 with catch @ 01bc2884 */
                    /* catch() { ... } // from try @ 01bc2830 with catch @ 01bc2888
                       catch() { ... } // from try @ 01bc2850 with catch @ 01bc2888 */
                    /* catch() { ... } // from try @ 01bc2618 with catch @ 01bc288c */
                    /* WARNING: Could not recover jumptable at 0x01bc2890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* catch() { ... } // from try @ 01bc2624 with catch @ 01bc2890 */
        (**(code **)(lVar3 + 0x188))();
        return;
      }
    }
  }
LAB_01bc2894:
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 01bc2604 with catch @ 01bc2894 */
  FUN_0160eeb4();
}


