/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonTypeReflector$$CreateNamingStrategyInstance
ENTRY_POINT: 05aca278
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonTypeReflector__CreateNamingStrategyInstance(long param_1)

{
  long *plVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long *plVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  float fVar17;
  long lStack0000000000000010;
  long in_stack_00000018;
  undefined *puVar12;
  
                    /* try { // try from 05aca278 to 05bca287 has its CatchHandler @ 05aca524 */
                    /* try { // try from 05aca28c to 05bca29b has its CatchHandler @ 05aca52c */
  if ((DAT_073970d8 & 1) == 0) {
    FUN_02fe925c(PTR_DAT_06facad8);
                    /* try { // try from 05aca2ac to 05bca2b7 has its CatchHandler @ 05aca51c */
    FUN_02fe925c(PTR_DAT_06f9ca98);
    FUN_02fe925c(PTR_DAT_06f9caa0);
    FUN_02fe925c(PTR_DAT_06facae0);
    FUN_02fe925c(PTR_DAT_06f9bfa8);
    FUN_02fe925c(PTR_DAT_06facae8);
    FUN_02fe925c(PTR_DAT_06f99290);
    FUN_02fe925c(PTR_DAT_06facaf0);
    FUN_02fe925c(PTR_DAT_06fac658);
                    /* try { // try from 05aca30c to 05bca30f has its CatchHandler @ 05aca550 */
                    /* try { // try from 05aca310 to 05bca317 has its CatchHandler @ 05aca564 */
    FUN_02fe925c(PTR_DAT_06f9bd48);
    FUN_02fe925c(PTR_DAT_06f6df38);
    FUN_02fe925c(PTR_DAT_06f6d6a0);
    FUN_02fe925c(PTR_DAT_06facaf8);
                    /* try { // try from 05aca344 to 05bca367 has its CatchHandler @ 05aca55c */
    FUN_02fe925c(PTR_DAT_06f9ca88);
    FUN_02fe925c(PTR_DAT_06facb00);
    FUN_02fe925c(PTR_DAT_06facb08);
                    /* try { // try from 05aca368 to 05bca373 has its CatchHandler @ 05aca554 */
    FUN_02fe925c(PTR_DAT_06facb10);
    FUN_02fe925c(PTR_DAT_06facb18);
    FUN_02fe925c(PTR_DAT_06f9a9f8);
    FUN_02fe925c(PTR_DAT_06f9aa08);
    FUN_02fe925c(PTR_DAT_06faca58);
    DAT_073970d8 = 1;
  }
  in_stack_00000018 = 0;
  plVar13 = (long *)(param_1 + 0x10);
  if (*plVar13 != 0) {
    return;
  }
  lVar6 = Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__GetPropertyName();
  if (lVar6 == 0) {
Newtonsoft_Json_Serialization_JsonTypeReflector___cctor:
                    /* WARNING: Subroutine does not return */
    FUN_02fe94e8();
  }
  FUN_050e2c08(lVar6,param_1,&stack0x00000018,*(undefined8 *)PTR_DAT_06f9caa0);
  if (in_stack_00000018 == 0) {
    thunk_FUN_03037804(PTR_DAT_06f9aa18);
    uVar8 = thunk_FUN_0301080c();
    puVar12 = PTR_DAT_06f9bbb0;
  }
  else {
    lVar6 = FUN_059f72bc(in_stack_00000018,0);
    if (lVar6 == 0) goto Newtonsoft_Json_Serialization_JsonTypeReflector___cctor;
    plVar1 = (long *)(param_1 + 0x40);
    uVar7 = FUN_059df624(lVar6,0);
    if ((uVar7 & 1) == 0) {
      iVar4 = 0;
      lStack0000000000000010 = 0;
      lVar16 = 0;
      lVar14 = 0;
      lVar15 = 0;
    }
    else {
      lVar15 = 0;
      lVar14 = 0;
      lVar16 = 0;
      iVar4 = 0;
      lStack0000000000000010 = 0;
      do {
        uVar8 = FUN_059df4ac(lVar6,0);
        uVar3 = Newtonsoft_Json_Serialization_TraceJsonWriter__WriteValue(uVar8,0);
        if (uVar3 < 0x602b32ee) {
          if (uVar3 == 0x351df9d2) {
            uVar7 = thunk_FUN_05971620(uVar8,*(undefined8 *)PTR_DAT_06f9a9f8,0);
            lVar9 = in_stack_00000018;
            if ((uVar7 & 1) != 0) {
              uVar8 = *(undefined8 *)PTR_DAT_06facae0;
              if (*(int *)(*(long *)PTR_DAT_06f6d6a0 + 0xe0) == 0) {
                thunk_FUN_02fdcff0();
              }
              uVar8 = FUN_05afde1c(uVar8,0);
              if (lVar9 == 0) goto Newtonsoft_Json_Serialization_JsonTypeReflector___cctor;
              lVar9 = FUN_059f8194(lVar9,*(undefined8 *)PTR_DAT_06f9a9f8,uVar8,0);
              if (lVar9 != 0) {
                uVar8 = *(undefined8 *)PTR_DAT_06f9bfa8;
                lStack0000000000000010 = thunk_FUN_03010710(lVar9,uVar8);
                lVar10 = lStack0000000000000010;
                goto joined_r0x05aca82c;
              }
              lStack0000000000000010 = 0;
            }
          }
          else if (uVar3 == 0x4939908b) {
            uVar7 = thunk_FUN_05971620(uVar8,*(undefined8 *)PTR_DAT_06facb08,0);
            lVar9 = in_stack_00000018;
            if ((uVar7 & 1) != 0) {
              uVar8 = *(undefined8 *)PTR_DAT_06facae8;
              if (*(int *)(*(long *)PTR_DAT_06f6d6a0 + 0xe0) == 0) {
                thunk_FUN_02fdcff0();
              }
              uVar8 = FUN_05afde1c(uVar8,0);
              if (lVar9 == 0) goto Newtonsoft_Json_Serialization_JsonTypeReflector___cctor;
              lVar9 = FUN_059f8194(lVar9,*(undefined8 *)PTR_DAT_06facb08,uVar8,0);
              puVar12 = PTR_DAT_06f99290;
              if (lVar9 == 0) {
                lVar10 = 0;
                *plVar1 = 0;
              }
              else {
                uVar8 = *(undefined8 *)PTR_DAT_06f99290;
                lVar10 = thunk_FUN_03010710(lVar9,uVar8);
                if (lVar10 == 0) goto LAB_05acaaa0;
                *plVar1 = lVar10;
                uVar8 = *(undefined8 *)puVar12;
                lVar10 = thunk_FUN_03010710(lVar9,uVar8);
                if (lVar10 == 0) goto LAB_05acaaa0;
              }
              thunk_FUN_03048534(plVar1,lVar10);
            }
          }
          else if ((uVar3 == 0x602b32ed) &&
                  (uVar7 = thunk_FUN_05971620(uVar8,*(undefined8 *)PTR_DAT_06facaf8,0),
                  lVar9 = in_stack_00000018, (uVar7 & 1) != 0)) {
            uVar8 = *(undefined8 *)PTR_DAT_06f9bd48;
            if (*(int *)(*(long *)PTR_DAT_06f6d6a0 + 0xe0) == 0) {
              thunk_FUN_02fdcff0();
            }
            uVar8 = FUN_05afde1c(uVar8,0);
            if (lVar9 == 0) goto Newtonsoft_Json_Serialization_JsonTypeReflector___cctor;
            lVar9 = FUN_059f8194(lVar9,*(undefined8 *)PTR_DAT_06facaf8,uVar8,0);
            if (lVar9 != 0) {
              uVar8 = *(undefined8 *)PTR_DAT_06f6df38;
              lVar14 = thunk_FUN_03010710(lVar9,uVar8);
              lVar10 = lVar14;
              goto joined_r0x05aca82c;
            }
            lVar14 = 0;
          }
        }
        else if (uVar3 < 0x94138db6) {
          if (uVar3 == 0x8d4d225b) {
            uVar7 = thunk_FUN_05971620(uVar8,*(undefined8 *)PTR_DAT_06facb00,0);
            lVar9 = in_stack_00000018;
            if ((uVar7 & 1) != 0) {
              uVar8 = *(undefined8 *)PTR_DAT_06f9bd48;
              if (*(int *)(*(long *)PTR_DAT_06f6d6a0 + 0xe0) == 0) {
                thunk_FUN_02fdcff0();
              }
              uVar8 = FUN_05afde1c(uVar8,0);
              if (lVar9 == 0) goto Newtonsoft_Json_Serialization_JsonTypeReflector___cctor;
              lVar9 = FUN_059f8194(lVar9,*(undefined8 *)PTR_DAT_06facb00,uVar8,0);
              if (lVar9 != 0) {
                uVar8 = *(undefined8 *)PTR_DAT_06f6df38;
                lVar15 = thunk_FUN_03010710(lVar9,uVar8);
                lVar10 = lVar15;
                goto joined_r0x05aca82c;
              }
              lVar15 = 0;
            }
          }
          else if ((uVar3 == 0x94138db5) &&
                  (uVar7 = thunk_FUN_05971620(uVar8,*(undefined8 *)PTR_DAT_06facb18,0),
                  lVar9 = in_stack_00000018, (uVar7 & 1) != 0)) {
            uVar8 = *(undefined8 *)PTR_DAT_06facaf0;
            if (*(int *)(*(long *)PTR_DAT_06f6d6a0 + 0xe0) == 0) {
              thunk_FUN_02fdcff0();
            }
            uVar8 = FUN_05afde1c(uVar8,0);
            if (lVar9 == 0) goto Newtonsoft_Json_Serialization_JsonTypeReflector___cctor;
            lVar9 = FUN_059f8194(lVar9,*(undefined8 *)PTR_DAT_06facb18,uVar8,0);
            if (lVar9 == 0) {
              lVar16 = 0;
            }
            else {
              uVar8 = *(undefined8 *)PTR_DAT_06fac658;
              lVar16 = thunk_FUN_03010710(lVar9,uVar8);
              lVar10 = lVar16;
joined_r0x05aca82c:
              if (lVar10 == 0) {
LAB_05acaaa0:
                    /* WARNING: Subroutine does not return */
                FUN_02fe9884(lVar9,uVar8);
              }
            }
          }
        }
        else if (uVar3 == 0xc80ab660) {
          uVar7 = thunk_FUN_05971620(uVar8,*(undefined8 *)PTR_DAT_06f9ca88,0);
          if ((uVar7 & 1) != 0) {
            if (in_stack_00000018 == 0)
            goto Newtonsoft_Json_Serialization_JsonTypeReflector___cctor;
            iVar4 = FUN_059f8624(in_stack_00000018,*(undefined8 *)PTR_DAT_06f9ca88,0);
          }
        }
        else if ((uVar3 == 0xcf9da972) &&
                (uVar7 = thunk_FUN_05971620(uVar8,*(undefined8 *)PTR_DAT_06facb10,0),
                (uVar7 & 1) != 0)) {
          if (in_stack_00000018 == 0) goto Newtonsoft_Json_Serialization_JsonTypeReflector___cctor;
          uVar5 = FUN_059f890c(in_stack_00000018,*(undefined8 *)PTR_DAT_06facb10,0);
          *(undefined4 *)(param_1 + 0x24) = uVar5;
        }
        uVar7 = FUN_059df624(lVar6,0);
      } while ((uVar7 & 1) != 0);
    }
    fVar17 = *(float *)(param_1 + 0x24) * (float)iVar4;
    iVar2 = -0x80000000;
    if (fVar17 != INFINITY) {
      iVar2 = (int)fVar17;
    }
    *(int *)(param_1 + 0x20) = iVar2;
    if ((*(long *)(param_1 + 0x40) == 0) && (lVar16 != 0 || lStack0000000000000010 != 0)) {
      lVar6 = thunk_FUN_0301080c(*(undefined8 *)PTR_DAT_06facad8);
      FUN_05abd024(lVar6,lVar16,lStack0000000000000010);
      *plVar1 = lVar6;
      thunk_FUN_03048534(plVar1,lVar6);
    }
    lVar6 = FUN_02fe9340(*(undefined8 *)PTR_DAT_06faca58,iVar4);
    *plVar13 = lVar6;
    thunk_FUN_03048534(plVar13,lVar6);
    if (lVar14 == 0) {
      thunk_FUN_03037804(PTR_DAT_06f9aa18);
      uVar8 = thunk_FUN_0301080c();
      puVar12 = PTR_DAT_06f9aa20;
    }
    else if (lVar15 == 0) {
      thunk_FUN_03037804(PTR_DAT_06f9aa18);
      uVar8 = thunk_FUN_0301080c();
      puVar12 = PTR_DAT_06f9af58;
    }
    else {
      uVar3 = *(uint *)(lVar14 + 0x18);
      if (uVar3 == *(uint *)(lVar15 + 0x18)) {
        if (0 < (int)uVar3) {
          lVar6 = 0;
          do {
            if (uVar3 <= (uint)lVar6) {
LAB_05acaa50:
                    /* WARNING: Subroutine does not return */
              FUN_02fe94f0();
            }
            lVar16 = *(long *)(lVar14 + 0x20 + lVar6 * 8);
            if (lVar16 == 0) {
              thunk_FUN_03037804(PTR_DAT_06f9aa18);
              uVar8 = thunk_FUN_0301080c();
              puVar12 = PTR_DAT_06facb28;
              goto LAB_05acaa70;
            }
            if (*(uint *)(lVar15 + 0x18) <= (uint)lVar6) goto LAB_05acaa50;
            FUN_05ac8490(param_1,lVar16,*(undefined8 *)(lVar15 + 0x20 + lVar6 * 8),1);
            uVar3 = *(uint *)(lVar14 + 0x18);
            lVar6 = lVar6 + 1;
          } while ((int)lVar6 < (int)uVar3);
        }
        if (in_stack_00000018 != 0) {
          uVar5 = FUN_059f8624(in_stack_00000018,*(undefined8 *)PTR_DAT_06f9aa08,0);
          thunk_FUN_02fc2c1c();
          *(undefined4 *)(param_1 + 0x28) = uVar5;
          lVar6 = Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__GetPropertyName();
          if (lVar6 != 0) {
            FUN_050e29b8(lVar6,param_1,*(undefined8 *)PTR_DAT_06f9ca98);
            return;
          }
        }
        goto Newtonsoft_Json_Serialization_JsonTypeReflector___cctor;
      }
      thunk_FUN_03037804(PTR_DAT_06f9aa18);
      uVar8 = thunk_FUN_0301080c();
      puVar12 = PTR_DAT_06facb38;
    }
  }
LAB_05acaa70:
  uVar11 = thunk_FUN_03037804(puVar12);
  FUN_059ed1a0(uVar8,uVar11,0);
  uVar11 = thunk_FUN_03037804(PTR_DAT_06facb30);
                    /* WARNING: Subroutine does not return */
  FUN_02fe93c0(uVar8,uVar11);
}


