/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonTypeReflector$$GetCreator
ENTRY_POINT: 05aca438
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_file_logging_hits_2;telemetry_or_network_hits_1
*/


void Newtonsoft_Json_Serialization_JsonTypeReflector__GetCreator
               (undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  uint unaff_w23;
  long unaff_x24;
  uint unaff_w26;
  int unaff_w27;
  undefined8 unaff_x28;
  undefined8 uVar9;
  float fVar10;
  long *in_stack_00000008;
  long in_stack_00000010;
  long in_stack_00000018;
  undefined *puVar8;
  
  do {
    uVar2 = Newtonsoft_Json_Serialization_TraceJsonWriter__WriteValue(param_1,param_2);
    if (unaff_w23 < uVar2) {
                    /* try { // try from 05aca4fc to 05bca507 has its CatchHandler @ 05aca0a0 */
                    /* try { // try from 05aca508 to 05bca50b has its CatchHandler @ 05aca520 */
      if (uVar2 < 0x94138db6) {
                    /* try { // try from 05aca50c to 05bca50f has its CatchHandler @ 05aca518 */
                    /* try { // try from 05aca510 to 05bca513 has its CatchHandler @ 05aca528 */
                    /* catch() { ... } // from try @ 05aca46c with catch @ 05aca514
                       try { // try from 05aca514 to 05bca583 has its CatchHandler @ 05aca0a0 */
                    /* catch() { ... } // from try @ 05aca50c with catch @ 05aca518 */
        if (uVar2 == 0x8d4d225b) {
          uVar4 = thunk_FUN_05971620(unaff_x28,*(undefined8 *)PTR_DAT_06facb00,0);
          if ((uVar4 & 1) != 0) {
            uVar9 = *(undefined8 *)PTR_DAT_06f9bd48;
            if (*(int *)(*(long *)PTR_DAT_06f6d6a0 + 0xe0) == 0) {
              thunk_FUN_02fdcff0();
            }
            uVar9 = FUN_05afde1c(uVar9,0);
            if (in_stack_00000018 == 0)
            goto Newtonsoft_Json_Serialization_JsonTypeReflector___cctor;
            lVar5 = FUN_059f8194(in_stack_00000018,*(undefined8 *)PTR_DAT_06facb00,uVar9,0);
            if (lVar5 != 0) {
              uVar9 = *(undefined8 *)PTR_DAT_06f6df38;
              unaff_x22 = thunk_FUN_03010710(lVar5,uVar9);
              lVar6 = unaff_x22;
              goto joined_r0x05aca82c;
            }
            unaff_x22 = 0;
          }
        }
        else {
                    /* catch() { ... } // from try @ 05aca2ac with catch @ 05aca51c */
                    /* catch() { ... } // from try @ 05aca508 with catch @ 05aca520 */
                    /* catch() { ... } // from try @ 05aca278 with catch @ 05aca524 */
                    /* catch() { ... } // from try @ 05aca498 with catch @ 05aca528
                       catch() { ... } // from try @ 05aca510 with catch @ 05aca528 */
                    /* catch() { ... } // from try @ 05aca28c with catch @ 05aca52c */
                    /* catch() { ... } // from try @ 05aca4f8 with catch @ 05aca530 */
                    /* catch() { ... } // from try @ 05aca4f4 with catch @ 05aca534 */
                    /* catch() { ... } // from try @ 05aca434 with catch @ 05aca538 */
                    /* catch() { ... } // from try @ 05aca4f0 with catch @ 05aca53c */
                    /* catch() { ... } // from try @ 05aca3d8 with catch @ 05aca540 */
                    /* catch() { ... } // from try @ 05aca4ec with catch @ 05aca544 */
          if ((uVar2 == 0x94138db5) &&
             (uVar4 = thunk_FUN_05971620(unaff_x28,*(undefined8 *)PTR_DAT_06facb18,0),
             (uVar4 & 1) != 0)) {
                    /* catch() { ... } // from try @ 05aca400 with catch @ 05aca548 */
                    /* catch() { ... } // from try @ 05aca3a4 with catch @ 05aca54c */
                    /* catch() { ... } // from try @ 05aca30c with catch @ 05aca550 */
                    /* catch() { ... } // from try @ 05aca368 with catch @ 05aca554 */
                    /* catch() { ... } // from try @ 05aca380 with catch @ 05aca558 */
                    /* catch() { ... } // from try @ 05aca344 with catch @ 05aca55c */
                    /* catch() { ... } // from try @ 05aca4e8 with catch @ 05aca560 */
                    /* catch() { ... } // from try @ 05aca310 with catch @ 05aca564 */
                    /* catch() { ... } // from try @ 05aca4e0 with catch @ 05aca568 */
            uVar9 = *(undefined8 *)PTR_DAT_06facaf0;
                    /* catch() { ... } // from try @ 05aca4dc with catch @ 05aca56c */
            if (*(int *)(*(long *)PTR_DAT_06f6d6a0 + 0xe0) == 0) {
              thunk_FUN_02fdcff0();
            }
            uVar9 = FUN_05afde1c(uVar9,0);
            if (in_stack_00000018 == 0)
            goto Newtonsoft_Json_Serialization_JsonTypeReflector___cctor;
                    /* try { // try from 05aca584 to 05bca587 has its CatchHandler @ 05aca594 */
                    /* catch() { ... } // from try @ 05aca584 with catch @ 05aca594 */
            lVar5 = FUN_059f8194(in_stack_00000018,*(undefined8 *)PTR_DAT_06facb18,uVar9,0);
                    /* try { // try from 05aca5a0 to 05bca5ab has its CatchHandler @ 05aca5c0 */
            if (lVar5 == 0) {
              unaff_x24 = 0;
              goto LAB_05aca8c0;
            }
                    /* try { // try from 05aca5ac to 05bca5b7 has its CatchHandler @ 05aca0a0 */
            uVar9 = *(undefined8 *)PTR_DAT_06fac658;
                    /* try { // try from 05aca5b8 to 05bca5bf has its CatchHandler @ 05aca5c0 */
            unaff_x24 = thunk_FUN_03010710(lVar5,uVar9);
            unaff_w26 = 0x351df9d2;
            lVar6 = unaff_x24;
joined_r0x05aca82c:
            if (lVar6 == 0) {
LAB_05acaaa0:
                    /* WARNING: Subroutine does not return */
              FUN_02fe9884(lVar5,uVar9);
            }
          }
        }
      }
      else if (uVar2 == 0xc80ab660) {
        uVar4 = thunk_FUN_05971620(unaff_x28,*(undefined8 *)PTR_DAT_06f9ca88,0);
        if ((uVar4 & 1) != 0) {
          if (in_stack_00000018 == 0) goto Newtonsoft_Json_Serialization_JsonTypeReflector___cctor;
          unaff_w27 = FUN_059f8624(in_stack_00000018,*(undefined8 *)PTR_DAT_06f9ca88,0);
        }
      }
      else if ((uVar2 == 0xcf9da972) &&
              (uVar4 = thunk_FUN_05971620(unaff_x28,*(undefined8 *)PTR_DAT_06facb10,0),
              (uVar4 & 1) != 0)) {
        if (in_stack_00000018 == 0) goto Newtonsoft_Json_Serialization_JsonTypeReflector___cctor;
        uVar3 = FUN_059f890c(in_stack_00000018,*(undefined8 *)PTR_DAT_06facb10,0);
        *(undefined4 *)(unaff_x19 + 0x24) = uVar3;
      }
    }
    else if (uVar2 == unaff_w26) {
      uVar4 = thunk_FUN_05971620(unaff_x28,*(undefined8 *)PTR_DAT_06f9a9f8,0);
      if ((uVar4 & 1) != 0) {
        uVar9 = *(undefined8 *)PTR_DAT_06facae0;
        if (*(int *)(*(long *)PTR_DAT_06f6d6a0 + 0xe0) == 0) {
          thunk_FUN_02fdcff0();
        }
        uVar9 = FUN_05afde1c(uVar9,0);
        if (in_stack_00000018 == 0) goto Newtonsoft_Json_Serialization_JsonTypeReflector___cctor;
        lVar5 = FUN_059f8194(in_stack_00000018,*(undefined8 *)PTR_DAT_06f9a9f8,uVar9,0);
        if (lVar5 != 0) {
          uVar9 = *(undefined8 *)PTR_DAT_06f9bfa8;
          in_stack_00000010 = thunk_FUN_03010710(lVar5,uVar9);
          unaff_w26 = 0x351df9d2;
          lVar6 = in_stack_00000010;
          goto joined_r0x05aca82c;
        }
        in_stack_00000010 = 0;
LAB_05aca8c0:
        unaff_w26 = 0x351df9d2;
      }
    }
    else if (uVar2 == 0x4939908b) {
      uVar4 = thunk_FUN_05971620(unaff_x28,*(undefined8 *)PTR_DAT_06facb08,0);
      if ((uVar4 & 1) != 0) {
        uVar9 = *(undefined8 *)PTR_DAT_06facae8;
        if (*(int *)(*(long *)PTR_DAT_06f6d6a0 + 0xe0) == 0) {
          thunk_FUN_02fdcff0();
        }
        uVar9 = FUN_05afde1c(uVar9,0);
        if (in_stack_00000018 == 0) goto Newtonsoft_Json_Serialization_JsonTypeReflector___cctor;
        lVar5 = FUN_059f8194(in_stack_00000018,*(undefined8 *)PTR_DAT_06facb08,uVar9,0);
        puVar8 = PTR_DAT_06f99290;
        if (lVar5 == 0) {
          lVar6 = 0;
          *in_stack_00000008 = 0;
        }
        else {
          uVar9 = *(undefined8 *)PTR_DAT_06f99290;
          lVar6 = thunk_FUN_03010710(lVar5,uVar9);
          if (lVar6 == 0) goto LAB_05acaaa0;
          *in_stack_00000008 = lVar6;
          uVar9 = *(undefined8 *)puVar8;
          lVar6 = thunk_FUN_03010710(lVar5,uVar9);
          if (lVar6 == 0) goto LAB_05acaaa0;
        }
        thunk_FUN_03048534(in_stack_00000008,lVar6);
        unaff_w26 = 0x351df9d2;
        unaff_w23 = 0x602b32ed;
      }
    }
    else {
                    /* try { // try from 05aca46c to 05bca46f has its CatchHandler @ 05aca514 */
      if ((uVar2 == unaff_w23) &&
         (uVar4 = thunk_FUN_05971620(unaff_x28,*(undefined8 *)PTR_DAT_06facaf8,0), (uVar4 & 1) != 0)
         ) {
                    /* try { // try from 05aca498 to 05bca49f has its CatchHandler @ 05aca528 */
        uVar9 = *(undefined8 *)PTR_DAT_06f9bd48;
                    /* try { // try from 05aca4a0 to 05bca4db has its CatchHandler @ 05aca0a0 */
        if (*(int *)(*(long *)PTR_DAT_06f6d6a0 + 0xe0) == 0) {
          thunk_FUN_02fdcff0();
        }
        uVar9 = FUN_05afde1c(uVar9,0);
        if (in_stack_00000018 == 0) goto Newtonsoft_Json_Serialization_JsonTypeReflector___cctor;
        lVar5 = FUN_059f8194(in_stack_00000018,*(undefined8 *)PTR_DAT_06facaf8,uVar9,0);
        if (lVar5 != 0) {
                    /* try { // try from 05aca4dc to 05bca4df has its CatchHandler @ 05aca56c */
                    /* try { // try from 05aca4e0 to 05bca4e7 has its CatchHandler @ 05aca568 */
          uVar9 = *(undefined8 *)PTR_DAT_06f6df38;
                    /* try { // try from 05aca4e8 to 05bca4eb has its CatchHandler @ 05aca560 */
                    /* try { // try from 05aca4ec to 05bca4ef has its CatchHandler @ 05aca544 */
          unaff_x21 = thunk_FUN_03010710(lVar5,uVar9);
                    /* try { // try from 05aca4f0 to 05bca4f3 has its CatchHandler @ 05aca53c */
                    /* try { // try from 05aca4f4 to 05bca4f7 has its CatchHandler @ 05aca534 */
          lVar6 = unaff_x21;
          goto joined_r0x05aca82c;
        }
        unaff_x21 = 0;
      }
    }
    uVar4 = FUN_059df624();
    if ((uVar4 & 1) == 0) break;
    param_1 = FUN_059df4ac();
    param_2 = 0;
    unaff_x28 = param_1;
  } while( true );
  fVar10 = *(float *)(unaff_x19 + 0x24) * (float)unaff_w27;
  iVar1 = -0x80000000;
  if (fVar10 != INFINITY) {
    iVar1 = (int)fVar10;
  }
  *(int *)(unaff_x19 + 0x20) = iVar1;
  if ((*(long *)(unaff_x19 + 0x40) == 0) && (unaff_x24 != 0 || in_stack_00000010 != 0)) {
    lVar5 = thunk_FUN_0301080c(*(undefined8 *)PTR_DAT_06facad8);
    FUN_05abd024(lVar5,unaff_x24,in_stack_00000010);
    *in_stack_00000008 = lVar5;
    thunk_FUN_03048534(in_stack_00000008,lVar5);
  }
  uVar9 = FUN_02fe9340(*(undefined8 *)PTR_DAT_06faca58,unaff_w27);
  *unaff_x20 = uVar9;
  thunk_FUN_03048534(unaff_x20,uVar9);
  if (unaff_x21 == 0) {
    thunk_FUN_03037804(PTR_DAT_06f9aa18);
    uVar9 = thunk_FUN_0301080c();
    puVar8 = PTR_DAT_06f9aa20;
  }
  else if (unaff_x22 == 0) {
    thunk_FUN_03037804(PTR_DAT_06f9aa18);
    uVar9 = thunk_FUN_0301080c();
    puVar8 = PTR_DAT_06f9af58;
  }
  else {
    uVar2 = *(uint *)(unaff_x21 + 0x18);
    if (uVar2 == *(uint *)(unaff_x22 + 0x18)) {
      if (0 < (int)uVar2) {
        lVar5 = 0;
        do {
          if (uVar2 <= (uint)lVar5) {
LAB_05acaa50:
                    /* WARNING: Subroutine does not return */
            FUN_02fe94f0();
          }
          if (*(long *)(unaff_x21 + 0x20 + lVar5 * 8) == 0) {
            thunk_FUN_03037804(PTR_DAT_06f9aa18);
            uVar9 = thunk_FUN_0301080c();
            puVar8 = PTR_DAT_06facb28;
            goto LAB_05acaa70;
          }
          if (*(uint *)(unaff_x22 + 0x18) <= (uint)lVar5) goto LAB_05acaa50;
          FUN_05ac8490();
          uVar2 = *(uint *)(unaff_x21 + 0x18);
          lVar5 = lVar5 + 1;
        } while ((int)lVar5 < (int)uVar2);
      }
      if (in_stack_00000018 != 0) {
        uVar3 = FUN_059f8624(in_stack_00000018,*(undefined8 *)PTR_DAT_06f9aa08,0);
        thunk_FUN_02fc2c1c();
        *(undefined4 *)(unaff_x19 + 0x28) = uVar3;
        lVar5 = Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__GetPropertyName();
        if (lVar5 != 0) {
          FUN_050e29b8();
          return;
        }
      }
Newtonsoft_Json_Serialization_JsonTypeReflector___cctor:
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    thunk_FUN_03037804(PTR_DAT_06f9aa18);
    uVar9 = thunk_FUN_0301080c();
    puVar8 = PTR_DAT_06facb38;
  }
LAB_05acaa70:
  uVar7 = thunk_FUN_03037804(puVar8);
  FUN_059ed1a0(uVar9,uVar7,0);
  uVar7 = thunk_FUN_03037804(PTR_DAT_06facb30);
                    /* WARNING: Subroutine does not return */
  FUN_02fe93c0(uVar9,uVar7);
}


