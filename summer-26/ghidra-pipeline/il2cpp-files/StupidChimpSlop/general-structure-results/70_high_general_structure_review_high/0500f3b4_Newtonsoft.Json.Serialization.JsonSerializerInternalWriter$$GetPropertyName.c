/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$GetPropertyName
ENTRY_POINT: 0500f3b4
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__GetPropertyName(void)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  ushort *puVar6;
  uint unaff_w19;
  uint unaff_w20;
  int iVar7;
  long *unaff_x21;
  uint unaff_w23;
  ushort *unaff_x24;
  long unaff_x25;
  ushort *unaff_x26;
  int unaff_w27;
  ushort *puVar8;
  uint unaff_w28;
  uint uVar9;
  ulong *in_stack_00000000;
  ulong in_stack_00000008;
  undefined8 in_stack_00000018;
  int *in_stack_00000028;
  
code_r0x0500f3b4:
  if (unaff_w20 == 0) {
    if (*(int *)(*unaff_x21 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    lVar4 = FUN_0500f788(unaff_x26);
    if (lVar4 != 0) {
LAB_0500f40c:
      do {
        unaff_x26 = (ushort *)(lVar4 - 2);
        while( true ) {
          unaff_x26 = unaff_x26 + 1;
          unaff_w28 = 0;
          if (unaff_x26 < unaff_x24) {
            unaff_w28 = (uint)*unaff_x26;
          }
          if (*(int *)(*unaff_x21 + 0xe4) == 0) {
            thunk_FUN_02dabd98();
          }
          if (9 < unaff_w28 - 0x30) break;
          if ((unaff_w28 == 0x30) && ((unaff_w19 >> 3 & 1) == 0)) {
            uVar2 = unaff_w19 | 4;
            uVar9 = unaff_w19 >> 4;
            unaff_w19 = uVar2;
            if ((uVar9 & 1) != 0) {
              in_stack_00000028[1] = in_stack_00000028[1] + -1;
            }
          }
          else {
            iVar7 = unaff_w27;
            if (unaff_w27 < 0x32) {
              lVar4 = FUN_05011f14(in_stack_00000028,0);
              *(short *)(lVar4 + (long)unaff_w27 * 2) = (short)unaff_w28;
              iVar7 = unaff_w27 + 1;
              if (unaff_w28 != 0x30 || (in_stack_00000008 & 0x100000000) != 0) {
                in_stack_00000018._4_4_ = unaff_w27 + 1;
              }
            }
            unaff_w27 = iVar7;
            if ((unaff_w19 >> 4 & 1) == 0) {
              in_stack_00000028[1] = in_stack_00000028[1] + 1;
            }
            unaff_w19 = unaff_w19 | 0xc;
          }
        }
        unaff_w20 = unaff_w19 & 0x10;
        if (((unaff_w23 >> 5 & 1) == 0) || (unaff_w20 != 0)) goto LAB_0500f3ac;
        if (*(int *)(*unaff_x21 + 0xe4) == 0) {
          thunk_FUN_02dabd98();
        }
        lVar4 = FUN_0500f788(unaff_x26);
        if (lVar4 == 0) {
          if (((unaff_w23 >> 8 & 1) == 0) || ((unaff_w19 >> 5 & 1) != 0)) goto LAB_0500f3ac;
          if (*(int *)(*unaff_x21 + 0xe4) == 0) {
            thunk_FUN_02dabd98();
          }
          lVar4 = FUN_0500f788(unaff_x26);
          if (lVar4 == 0) goto LAB_0500f3ac;
        }
        unaff_w19 = unaff_w19 | 0x10;
      } while( true );
    }
    if (((unaff_w23 >> 8 & 1) != 0) && ((unaff_w19 >> 5 & 1) == 0)) {
      if (*(int *)(*unaff_x21 + 0xe4) == 0) {
        thunk_FUN_02dabd98();
      }
      lVar4 = FUN_0500f788(unaff_x26);
      if (lVar4 != 0) goto LAB_0500f40c;
    }
    *in_stack_00000028 = in_stack_00000018._4_4_;
    lVar4 = FUN_05011f14(in_stack_00000028,0);
    *(undefined2 *)(lVar4 + (long)in_stack_00000018._4_4_ * 2) = 0;
    goto LAB_0500f464;
  }
LAB_0500f428:
  *in_stack_00000028 = in_stack_00000018._4_4_;
  lVar4 = FUN_05011f14(in_stack_00000028,0);
                    /* try { // try from 0500f440 to 0510f443 has its CatchHandler @ 0500f534 */
  *(undefined2 *)(lVar4 + (long)in_stack_00000018._4_4_ * 2) = 0;
                    /* try { // try from 0500f444 to 0510f47b has its CatchHandler @ 0500f338 */
  if ((unaff_w19 >> 2 & 1) != 0) {
LAB_0500f464:
    if (((unaff_w28 | 0x20) != 0x65) || ((unaff_w23 >> 7 & 1) == 0)) goto LAB_0500f47c;
    puVar8 = unaff_x26 + 1;
    if (puVar8 < unaff_x24) {
      unaff_w28 = (uint)*puVar8;
    }
    else {
      unaff_w28 = 0;
    }
    if (*(int *)(*unaff_x21 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    puVar6 = (ushort *)FUN_0500f788(puVar8);
    bVar3 = puVar6 == (ushort *)0x0;
    if (puVar6 == (ushort *)0x0) {
      if (*(int *)(*unaff_x21 + 0xe4) == 0) {
        thunk_FUN_02dabd98();
      }
      puVar6 = (ushort *)FUN_0500f788(puVar8);
      if (puVar6 == (ushort *)0x0) {
        bVar3 = false;
      }
      else {
        if (puVar6 < unaff_x24) goto LAB_0500f674;
        unaff_w28 = 0;
        bVar3 = true;
        puVar8 = puVar6;
      }
    }
    else if (puVar6 < unaff_x24) {
LAB_0500f674:
      unaff_w28 = (uint)*puVar6;
      puVar8 = puVar6;
    }
    else {
      bVar3 = false;
      unaff_w28 = 0;
      puVar8 = puVar6;
    }
    if (*(int *)(*unaff_x21 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    if (unaff_w28 - 0x30 < 10) {
      iVar7 = 0;
      unaff_x26 = puVar8;
      do {
        unaff_x26 = unaff_x26 + 1;
        if (unaff_x26 < unaff_x24) {
          uVar9 = (uint)*unaff_x26;
        }
        else {
          uVar9 = 0;
        }
        lVar4 = *unaff_x21;
        iVar7 = unaff_w28 + iVar7 * 10 + -0x30;
        unaff_w28 = uVar9;
        if (1000 < iVar7) {
          while( true ) {
            if (*(int *)(lVar4 + 0xe4) == 0) {
              thunk_FUN_02dabd98();
              lVar4 = *unaff_x21;
            }
            if (9 < uVar9 - 0x30) break;
            unaff_x26 = unaff_x26 + 1;
            uVar9 = 0;
            if (unaff_x26 < unaff_x24) {
              uVar9 = (uint)*unaff_x26;
            }
          }
          iVar7 = 9999;
          unaff_w28 = uVar9;
        }
        if (*(int *)(lVar4 + 0xe4) == 0) {
          thunk_FUN_02dabd98();
        }
      } while (unaff_w28 - 0x30 < 10);
      iVar1 = -iVar7;
      if (!bVar3) {
        iVar1 = iVar7;
      }
      in_stack_00000028[1] = in_stack_00000028[1] + iVar1;
    }
    else if (unaff_x26 < unaff_x24) {
      unaff_w28 = (uint)*unaff_x26;
    }
    else {
      unaff_w28 = 0;
    }
LAB_0500f47c:
                    /* try { // try from 0500f47c to 0510f48b has its CatchHandler @ 0500f524 */
    if (*(int *)(*unaff_x21 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    if (((unaff_w23 >> 1 & 1) == 0) || (unaff_w28 != 0x20 && unaff_w28 - 0xe < 0xfffffffb)) {
                    /* try { // try from 0500f4a8 to 0510f4b3 has its CatchHandler @ 0500f53c */
      if (((unaff_w23 >> 3 & 1) == 0) || ((unaff_w19 & 1) != 0)) {
LAB_0500f520:
                    /* try { // try from 0500f520 to 0510f523 has its CatchHandler @ 0500f528 */
                    /* catch(type#1 @ 06204328) { ... } // from try @ 0500f47c with catch @ 0500f524
                       try { // try from 0500f524 to 0510f55b has its CatchHandler @ 0500f338 */
                    /* catch(type#1 @ 06204328) { ... } // from try @ 0500f520 with catch @ 0500f528
                        */
        if ((unaff_w28 == 0x29) && ((unaff_w19 >> 1 & 1) != 0)) {
                    /* catch(type#1 @ 06204328) { ... } // from try @ 0500f4d8 with catch @ 0500f52c
                        */
          unaff_w19 = unaff_w19 & 0xfffffffd;
                    /* catch(type#1 @ 06204328) { ... } // from try @ 0500f4c4 with catch @ 0500f530
                        */
        }
        else {
                    /* catch(type#1 @ 06204328) { ... } // from try @ 0500f440 with catch @ 0500f534
                        */
          if (unaff_x25 == 0) goto LAB_0500f57c;
                    /* catch(type#1 @ 06204328) { ... } // from try @ 0500f38c with catch @ 0500f538
                        */
                    /* catch(type#1 @ 06204328) { ... } // from try @ 0500f4a8 with catch @ 0500f53c
                        */
                    /* catch(type#1 @ 06204328) { ... } // from try @ 0500f4b4 with catch @ 0500f540
                        */
          if (*(int *)(*unaff_x21 + 0xe4) == 0) {
                    /* catch(type#1 @ 06204328) { ... } // from try @ 0500f3a8 with catch @ 0500f544
                        */
            thunk_FUN_02dabd98();
          }
          lVar4 = FUN_0500f788(unaff_x26);
          if (lVar4 == 0) goto LAB_0500f57c;
                    /* try { // try from 0500f55c to 0510f573 has its CatchHandler @ 0500f5a0 */
          unaff_x25 = 0;
          unaff_x26 = (ushort *)(lVar4 - 2);
        }
      }
      else {
                    /* try { // try from 0500f4b4 to 0510f4c3 has its CatchHandler @ 0500f540 */
        if (*(int *)(*unaff_x21 + 0xe4) == 0) {
          thunk_FUN_02dabd98();
        }
                    /* try { // try from 0500f4c4 to 0510f4d7 has its CatchHandler @ 0500f530 */
        lVar4 = FUN_0500f788(unaff_x26);
        if (lVar4 == 0) {
                    /* try { // try from 0500f4d8 to 0510f51f has its CatchHandler @ 0500f52c */
          if (*(int *)(*unaff_x21 + 0xe4) == 0) {
            thunk_FUN_02dabd98();
          }
          lVar4 = FUN_0500f788(unaff_x26);
          if (lVar4 == 0) goto LAB_0500f520;
          FUN_05011f08(in_stack_00000028,1,0);
        }
        unaff_w19 = unaff_w19 | 1;
        unaff_x26 = (ushort *)(lVar4 - 2);
      }
    }
    unaff_x26 = unaff_x26 + 1;
    unaff_w28 = 0;
    if (unaff_x26 < unaff_x24) {
                    /* try { // try from 0500f574 to 0510f58f has its CatchHandler @ 0500f338 */
      unaff_w28 = (uint)*unaff_x26;
    }
    goto LAB_0500f47c;
  }
LAB_0500f5b4:
  uVar5 = 0;
LAB_0500f5bc:
  *in_stack_00000000 = (ulong)unaff_x26;
  return uVar5;
LAB_0500f3ac:
  if (((unaff_w23 >> 6 & 1) == 0) || ((unaff_w19 >> 2 & 1) == 0)) goto LAB_0500f428;
  goto code_r0x0500f3b4;
LAB_0500f57c:
  if ((unaff_w19 >> 1 & 1) == 0) {
    if ((unaff_w19 >> 3 & 1) == 0) {
      if ((in_stack_00000008 & 0x100000000) == 0) {
                    /* try { // try from 0500f590 to 0510f59f has its CatchHandler @ 0500f5a0 */
        in_stack_00000028[1] = 0;
      }
      if ((unaff_w19 >> 4 & 1) == 0) {
                    /* catch() { ... } // from try @ 0500f55c with catch @ 0500f5a0
                       catch() { ... } // from try @ 0500f590 with catch @ 0500f5a0 */
                    /* try { // try from 0500f5a4 to 0510f5a7 has its CatchHandler @ 0500f5b0 */
                    /* try { // try from 0500f5a8 to 0510f5b3 has its CatchHandler @ 0500f338 */
        FUN_05011f08(in_stack_00000028,0,0);
      }
    }
    uVar5 = 1;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0500f5a4 with catch @ 0500f5b0
                        */
    goto LAB_0500f5bc;
  }
  goto LAB_0500f5b4;
}


