/*
FUNCTION_NAME: Newtonsoft.Json.JsonTextReader$$ParsePostValue
ENTRY_POINT: 0709ef64
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_15;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 Newtonsoft_Json_JsonTextReader__ParsePostValue(long param_1)

{
  undefined2 uVar1;
  short sVar2;
  uint uVar3;
  short sVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long *unaff_x19;
  int unaff_w20;
  uint unaff_w21;
  int unaff_w22;
  long lVar10;
  long lVar11;
  int unaff_w23;
  long unaff_x24;
  long unaff_x25;
  uint unaff_w27;
  int unaff_w28;
  int unaff_w29;
  undefined4 *in_stack_00000008;
  uint *in_stack_00000010;
  uint uStack0000000000000018;
  long in_stack_00000020;
  
  do {
    if (*(int *)(param_1 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    uVar6 = unaff_w22 + unaff_w23;
    iVar5 = FUN_070f666c();
    if (iVar5 < (int)uVar6) goto LAB_0709f0d8;
    if (*(int *)(*(long *)PTR_DAT_08ea2b48 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    iVar5 = FUN_070f666c();
    if ((int)uVar6 < iVar5) {
      if (*(uint *)(unaff_x19 + 1) <= uVar6) {
LAB_0709f2b8:
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb38();
      }
      uVar1 = *(undefined2 *)(*unaff_x19 + (long)(int)uVar6 * 2);
      if (*(int *)(*(long *)PTR_DAT_08e6b4b0 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      uVar7 = FUN_0706aea0(uVar1,0);
      if (((uVar7 & 1) != 0) &&
         (uVar7 = FUN_070a2850(in_stack_00000020,*(undefined8 *)(unaff_x24 + 0x10),uVar1,0),
         (uVar7 & 1) == 0)) goto LAB_0709f0d8;
    }
    do {
      lVar8 = *(long *)(unaff_x24 + 0x10);
      if (lVar8 == 0) goto LAB_0709f2b4;
      if (*(int *)(lVar8 + 0x10) == 1) {
        if (*(uint *)(unaff_x19 + 2) < *(uint *)(unaff_x19 + 1)) {
          sVar2 = *(short *)(*unaff_x19 + (long)(int)*(uint *)(unaff_x19 + 2) * 2);
          sVar4 = FUN_06f6fafc(lVar8,0,0);
          if (sVar2 != sVar4) goto LAB_0709f048;
LAB_0709f1fc:
          *in_stack_00000010 = *(uint *)(unaff_x24 + 0x18) & unaff_w27;
          *in_stack_00000008 = *(undefined4 *)(unaff_x24 + 0x1c);
          if (*(long *)(unaff_x24 + 0x10) == 0) {
LAB_0709f2b4:
                    /* WARNING: Subroutine does not return */
            FUN_03c8fb30();
          }
          iVar5 = *(int *)(*(long *)PTR_DAT_08ea2b48 + 0xe0);
          goto joined_r0x0709f234;
        }
        goto LAB_0709f2b8;
      }
LAB_0709f048:
      plVar9 = (long *)FUN_070996f4(in_stack_00000020);
      if (plVar9 == (long *)0x0) goto LAB_0709f2b4;
      lVar8 = (**(code **)(*plVar9 + 0x218))(plVar9,*(undefined8 *)(*plVar9 + 0x220));
      if (*(long *)(unaff_x24 + 0x10) == 0) goto LAB_0709f2b4;
      uVar6 = *(uint *)(*(long *)(unaff_x24 + 0x10) + 0x10);
                    /* try { // try from 0709f070 to 0719f0ab has its CatchHandler @ 0709f070
                       catch() { ... } // from try @ 0709f070 with catch @ 0709f070
                       catch() { ... } // from try @ 0709f0b4 with catch @ 0709f070
                       catch() { ... } // from try @ 0709f11c with catch @ 0709f070 */
      uVar3 = *(uint *)(unaff_x19 + 2);
      lVar10 = *(long *)PTR_DAT_08ea0f18;
      if ((*(uint *)(unaff_x19 + 1) < uVar3) || (*(uint *)(unaff_x19 + 1) - uVar3 < uVar6)) {
        FUN_07122110(0);
      }
      lVar11 = *unaff_x19;
                    /* try { // try from 0709f0ac to 0719f0b3 has its CatchHandler @ 0709f0e0 */
      if ((*(byte *)(*(long *)(lVar10 + 0x20) + 0x135) & 1) == 0) {
        FUN_03cf1244();
      }
                    /* try { // try from 0709f0b4 to 0719f0f7 has its CatchHandler @ 0709f070 */
      if (lVar8 == 0) goto LAB_0709f2b4;
      iVar5 = FUN_07095cbc(lVar8,lVar11 + (long)(int)uVar3 * 2,uVar6,
                           *(undefined8 *)(unaff_x24 + 0x10),1);
      unaff_w27 = uStack0000000000000018;
      if (iVar5 == 0) goto LAB_0709f1fc;
LAB_0709f0d8:
      iVar5 = *(int *)(unaff_x24 + 0x18);
                    /* catch(type#1 @ 088de0a8) { ... } // from try @ 0709f0ac with catch @ 0709f0e0
                        */
      if (iVar5 == 5) {
        uVar6 = *(uint *)(in_stack_00000020 + 0x144);
        if (uVar6 == 0xffffffff) {
          uVar6 = FUN_0709c758(in_stack_00000020);
        }
        if ((uVar6 >> 2 & 1) == 0) {
                    /* catch() { ... } // from try @ 0709f0f8 with catch @ 0709f108 */
          iVar5 = *(int *)(unaff_x24 + 0x18);
          goto LAB_0709f10c;
        }
LAB_0709f138:
        if (*(int *)(*(long *)PTR_DAT_08ea2b48 + 0xe0) == 0) {
          thunk_FUN_03cd7500();
        }
        uVar7 = FUN_070f70b0();
        if ((uVar7 & 1) != 0) {
          *in_stack_00000010 = *(uint *)(unaff_x24 + 0x18) & unaff_w27;
          *in_stack_00000008 = *(undefined4 *)(unaff_x24 + 0x1c);
          iVar5 = *(int *)(*(long *)PTR_DAT_08ea2b48 + 0xe0);
joined_r0x0709f234:
          if (iVar5 == 0) {
            thunk_FUN_03cd7500();
          }
          FUN_070f6930();
          return 1;
        }
      }
      else {
LAB_0709f10c:
        if (iVar5 == 7) {
                    /* try { // try from 0709f114 to 0719f11b has its CatchHandler @ 0709f130 */
          uVar6 = *(uint *)(in_stack_00000020 + 0x144);
                    /* try { // try from 0709f11c to 0719f127 has its CatchHandler @ 0709f070 */
          if (uVar6 == 0xffffffff) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0709f114 with catch @ 0709f130
                       catch(type#2 @ 00000000) { ... } // from try @ 0709f128 with catch @ 0709f130
                        */
            uVar6 = FUN_0709c758(in_stack_00000020);
          }
          if ((uVar6 >> 4 & 1) != 0) goto LAB_0709f138;
        }
      }
      do {
        do {
          unaff_w21 = unaff_w21 + unaff_w20;
          if (0xc6 < (int)unaff_w21) {
            unaff_w21 = unaff_w21 - 199;
          }
          unaff_w29 = unaff_w29 + -1;
          if (unaff_w29 == 0) {
            return 0;
          }
          if (*(uint *)(unaff_x25 + 0x18) <= unaff_w21) goto LAB_0709f2b8;
          unaff_x24 = *(long *)(unaff_x25 + (long)(int)unaff_w21 * 8 + 0x20);
          if (unaff_x24 == 0) {
            return 0;
          }
        } while ((int)(*(uint *)(unaff_x24 + 0x18) & unaff_w27) < 1);
        if (*(long *)(unaff_x24 + 0x10) == 0) goto LAB_0709f2b4;
        unaff_w23 = *(int *)(*(long *)(unaff_x24 + 0x10) + 0x10);
      } while (unaff_w28 < unaff_w23);
    } while ((_uStack0000000000000018 & 0x100000000) == 0);
    unaff_w22 = (int)unaff_x19[2];
    param_1 = *(long *)PTR_DAT_08ea2b48;
  } while( true );
}


