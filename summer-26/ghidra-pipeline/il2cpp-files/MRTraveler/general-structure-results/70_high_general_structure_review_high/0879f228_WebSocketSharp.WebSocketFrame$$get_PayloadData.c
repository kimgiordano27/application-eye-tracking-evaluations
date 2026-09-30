/*
FUNCTION_NAME: WebSocketSharp.WebSocketFrame$$get_PayloadData
ENTRY_POINT: 0879f228
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;telemetry_or_network_hits_10;frame_or_lifecycle_behavior
*/


ulong WebSocketSharp_WebSocketFrame__get_PayloadData(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  char in_NG;
  bool in_ZR;
  char in_OV;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  undefined8 *puVar13;
  long lVar14;
  long lVar15;
  code *UNRECOVERED_JUMPTABLE;
  int iVar16;
  ulong uVar17;
  ulong uVar18;
  int *piVar19;
  undefined4 unaff_w20;
  long unaff_x22;
  long unaff_x23;
  ulong uVar20;
  undefined8 uVar21;
  undefined1 *puVar22;
  long unaff_x24;
  undefined8 uVar23;
  undefined1 *puVar24;
  undefined4 unaff_w25;
  int unaff_w28;
  undefined8 unaff_x29;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined8 in_stack_00000028;
  
  if (in_ZR || in_NG != in_OV) {
    switch(unaff_w25) {
    case 0x20000:
      if (unaff_x22 == 0) break;
      plVar11 = (long *)FUN_087c0130();
      puVar3 = System_Action<ITTSEvent>_TypeInfo;
      puVar9 = (undefined4 *)
               FUN_05ab4ccc(unaff_x24 + 8,*(undefined8 *)System_Action<ITTSEvent>_TypeInfo);
      uVar25 = *puVar9;
      puVar9 = (undefined4 *)FUN_05ab4ccc(unaff_x23 + 8,*(undefined8 *)puVar3);
      if (plVar11 == (long *)0x0) break;
      lVar12 = *plVar11;
      uVar26 = *puVar9;
      uVar17 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar17 != 0) {
        piVar19 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_08e86568) {
            puVar13 = (undefined8 *)(lVar12 + (long)(*piVar19 + 4) * 0x10 + 0x138);
            goto LAB_087a39cc;
          }
          uVar17 = uVar17 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar17 != 0);
      }
      puVar13 = (undefined8 *)FUN_03cf1348(plVar11,*(long *)PTR_DAT_08e86568,4);
LAB_087a39cc:
      UNRECOVERED_JUMPTABLE = (code *)*puVar13;
      iVar16 = 0x20000;
      goto LAB_087a4300;
    case 0x20001:
      if (unaff_x22 != 0) {
        plVar11 = (long *)FUN_087c0130();
        puVar3 = System_Action<ITTSEvent>_TypeInfo;
        lVar12 = FUN_05ab4ccc(unaff_x24 + 8,*(undefined8 *)System_Action<ITTSEvent>_TypeInfo);
        uVar25 = *(undefined4 *)(lVar12 + 4);
        lVar12 = FUN_05ab4ccc(unaff_x23 + 8,*(undefined8 *)puVar3);
        if (plVar11 != (long *)0x0) {
          lVar15 = *plVar11;
          uVar26 = *(undefined4 *)(lVar12 + 4);
          uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
          if (uVar17 != 0) {
            piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_08e86568) {
                puVar13 = (undefined8 *)(lVar15 + (long)(*piVar19 + 4) * 0x10 + 0x138);
                goto LAB_087a3a20;
              }
              uVar17 = uVar17 - 1;
              piVar19 = piVar19 + 4;
            } while (uVar17 != 0);
          }
          puVar13 = (undefined8 *)FUN_03cf1348(plVar11,*(long *)PTR_DAT_08e86568,4);
LAB_087a3a20:
          UNRECOVERED_JUMPTABLE = (code *)*puVar13;
          iVar16 = 0x20001;
          goto LAB_087a4300;
        }
      }
      break;
    case 0x20002:
      if (unaff_x22 == 0) break;
      plVar11 = (long *)FUN_087c0130();
      puVar3 = System_Action<ITTSEvent>_TypeInfo;
      lVar12 = FUN_05ab4ccc(unaff_x24 + 8,*(undefined8 *)System_Action<ITTSEvent>_TypeInfo);
      uVar25 = *(undefined4 *)(lVar12 + 8);
      lVar12 = FUN_05ab4ccc(unaff_x23 + 8,*(undefined8 *)puVar3);
      if (plVar11 == (long *)0x0) break;
      lVar15 = *plVar11;
      uVar26 = *(undefined4 *)(lVar12 + 8);
      uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar17 != 0) {
        piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_08e86568) {
            puVar13 = (undefined8 *)(lVar15 + (long)(*piVar19 + 4) * 0x10 + 0x138);
            goto LAB_087a3a48;
          }
          uVar17 = uVar17 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar17 != 0);
      }
      puVar13 = (undefined8 *)FUN_03cf1348(plVar11,*(long *)PTR_DAT_08e86568,4);
LAB_087a3a48:
      UNRECOVERED_JUMPTABLE = (code *)*puVar13;
      iVar16 = 0x20003;
LAB_087a3fec:
      iVar16 = iVar16 + -1;
LAB_087a4300:
                    /* WARNING: Could not recover jumptable at 0x087a4344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar17 = (*UNRECOVERED_JUMPTABLE)
                         (plVar11,iVar16,uVar25,uVar26,in_stack_00000028._4_4_,unaff_w20);
      return uVar17;
    case 0x20003:
      if (unaff_x22 == 0) break;
      plVar11 = (long *)FUN_087c0130();
      puVar3 = System_Action<ITTSEvent>_TypeInfo;
      lVar12 = FUN_05ab4ccc(unaff_x24 + 8,*(undefined8 *)System_Action<ITTSEvent>_TypeInfo);
      uVar25 = *(undefined4 *)(lVar12 + 0xc);
      lVar12 = FUN_05ab4ccc(unaff_x23 + 8,*(undefined8 *)puVar3);
      if (plVar11 == (long *)0x0) break;
      lVar15 = *plVar11;
      uVar26 = *(undefined4 *)(lVar12 + 0xc);
      uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar17 != 0) {
        piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_08e86568) {
            puVar13 = (undefined8 *)(lVar15 + (long)*piVar19 * 0x10 + 0x138);
            goto LAB_087a3a64;
          }
          uVar17 = uVar17 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar17 != 0);
      }
      puVar13 = (undefined8 *)FUN_03cf1348(plVar11,*(long *)PTR_DAT_08e86568,0);
LAB_087a3a64:
      UNRECOVERED_JUMPTABLE = (code *)*puVar13;
      iVar16 = 0x20003;
      goto LAB_087a4280;
    case 0x20004:
      if (unaff_x22 == 0) break;
      plVar11 = (long *)FUN_087c0130();
      puVar3 = System_Action<ITTSEvent>_TypeInfo;
      lVar12 = FUN_05ab4ccc(unaff_x24 + 8,*(undefined8 *)System_Action<ITTSEvent>_TypeInfo);
      uVar25 = *(undefined4 *)(lVar12 + 0x10);
      lVar12 = FUN_05ab4ccc(unaff_x23 + 8,*(undefined8 *)puVar3);
      if (plVar11 == (long *)0x0) break;
      lVar15 = *plVar11;
      uVar26 = *(undefined4 *)(lVar12 + 0x10);
      uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar17 != 0) {
        piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_08e86568) {
            puVar13 = (undefined8 *)(lVar15 + (long)*piVar19 * 0x10 + 0x138);
            goto LAB_087a3a80;
          }
          uVar17 = uVar17 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar17 != 0);
      }
      puVar13 = (undefined8 *)FUN_03cf1348(plVar11,*(long *)PTR_DAT_08e86568,0);
LAB_087a3a80:
      UNRECOVERED_JUMPTABLE = (code *)*puVar13;
      iVar16 = 0x20003;
LAB_087a4088:
      iVar16 = iVar16 + 1;
LAB_087a4280:
                    /* WARNING: Could not recover jumptable at 0x087a42c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar17 = (*UNRECOVERED_JUMPTABLE)
                         (uVar25,uVar26,plVar11,iVar16,in_stack_00000028._4_4_,unaff_w20);
      return uVar17;
    case 0x20005:
      if (unaff_x22 != 0) {
        plVar11 = (long *)FUN_087c0130();
        puVar3 = System_Action<ITTSEvent>_TypeInfo;
        lVar12 = FUN_05ab4ccc(unaff_x24 + 8,*(undefined8 *)System_Action<ITTSEvent>_TypeInfo);
        uVar25 = *(undefined4 *)(lVar12 + 0x14);
        lVar12 = FUN_05ab4ccc(unaff_x23 + 8,*(undefined8 *)puVar3);
        if (plVar11 != (long *)0x0) {
          lVar15 = *plVar11;
          uVar26 = *(undefined4 *)(lVar12 + 0x14);
          uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
          if (uVar17 != 0) {
            piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_08e86568) {
                puVar13 = (undefined8 *)(lVar15 + (long)*piVar19 * 0x10 + 0x138);
                goto LAB_087a3a9c;
              }
              uVar17 = uVar17 - 1;
              piVar19 = piVar19 + 4;
            } while (uVar17 != 0);
          }
          puVar13 = (undefined8 *)FUN_03cf1348(plVar11,*(long *)PTR_DAT_08e86568,0);
LAB_087a3a9c:
          UNRECOVERED_JUMPTABLE = (code *)*puVar13;
          iVar16 = 0x20005;
          goto LAB_087a4280;
        }
      }
      break;
    case 0x20006:
      if (unaff_x22 != 0) {
        plVar11 = (long *)FUN_087c0130();
        puVar3 = System_Action<ITTSEvent>_TypeInfo;
        lVar12 = FUN_05ab4ccc(unaff_x24 + 8,*(undefined8 *)System_Action<ITTSEvent>_TypeInfo);
        uVar25 = *(undefined4 *)(lVar12 + 0x18);
        lVar12 = FUN_05ab4ccc(unaff_x23 + 8,*(undefined8 *)puVar3);
        if (plVar11 != (long *)0x0) {
          lVar15 = *plVar11;
          uVar26 = *(undefined4 *)(lVar12 + 0x18);
          uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
          if (uVar17 != 0) {
            piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_08e86568) {
                puVar13 = (undefined8 *)(lVar15 + (long)*piVar19 * 0x10 + 0x138);
                goto LAB_087a3abc;
              }
              uVar17 = uVar17 - 1;
              piVar19 = piVar19 + 4;
            } while (uVar17 != 0);
          }
          puVar13 = (undefined8 *)FUN_03cf1348(plVar11,*(long *)PTR_DAT_08e86568,0);
LAB_087a3abc:
          UNRECOVERED_JUMPTABLE = (code *)*puVar13;
          iVar16 = 0x20006;
          goto LAB_087a4280;
        }
      }
      break;
    case 0x20007:
      if (unaff_x22 == 0) break;
      plVar11 = (long *)FUN_087c0130();
      puVar3 = System_Action<ITTSEvent>_TypeInfo;
      lVar12 = FUN_05ab4ccc(unaff_x24 + 8,*(undefined8 *)System_Action<ITTSEvent>_TypeInfo);
      uVar23 = *(undefined8 *)(lVar12 + 0x1c);
      lVar12 = FUN_05ab4ccc(unaff_x23 + 8,*(undefined8 *)puVar3);
      if (plVar11 == (long *)0x0) break;
      lVar15 = *plVar11;
      uVar21 = *(undefined8 *)(lVar12 + 0x1c);
      uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar17 != 0) {
        piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_08e86568) {
            puVar13 = (undefined8 *)(lVar15 + (long)(*piVar19 + 2) * 0x10 + 0x138);
            goto LAB_087a3ae0;
          }
          uVar17 = uVar17 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar17 != 0);
      }
      puVar13 = (undefined8 *)FUN_03cf1348(plVar11,*(long *)PTR_DAT_08e86568,2);
LAB_087a3ae0:
      UNRECOVERED_JUMPTABLE = (code *)*puVar13;
      uVar8 = 0x20003;
LAB_087a40f4:
      uVar8 = uVar8 | 4;
LAB_087a40f8:
                    /* WARNING: Could not recover jumptable at 0x087a413c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar17 = (*UNRECOVERED_JUMPTABLE)
                         (plVar11,uVar8,uVar23,uVar21,in_stack_00000028._4_4_,unaff_w20);
      return uVar17;
    case 0x20008:
      if (unaff_x22 != 0) {
        plVar11 = (long *)FUN_087c0130();
        puVar3 = System_Action<ITTSEvent>_TypeInfo;
        lVar12 = FUN_05ab4ccc(unaff_x24 + 8,*(undefined8 *)System_Action<ITTSEvent>_TypeInfo);
        uVar25 = *(undefined4 *)(lVar12 + 0x24);
        lVar12 = FUN_05ab4ccc(unaff_x23 + 8,*(undefined8 *)puVar3);
        if (plVar11 != (long *)0x0) {
          lVar15 = *plVar11;
          uVar26 = *(undefined4 *)(lVar12 + 0x24);
          uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
          if (uVar17 != 0) {
            piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_08e86568) {
                puVar13 = (undefined8 *)(lVar15 + (long)(*piVar19 + 4) * 0x10 + 0x138);
                goto LAB_087a3b00;
              }
              uVar17 = uVar17 - 1;
              piVar19 = piVar19 + 4;
            } while (uVar17 != 0);
          }
          puVar13 = (undefined8 *)FUN_03cf1348(plVar11,*(long *)PTR_DAT_08e86568,4);
LAB_087a3b00:
          UNRECOVERED_JUMPTABLE = (code *)*puVar13;
          iVar16 = 0x20008;
          goto LAB_087a4300;
        }
      }
      break;
    case 0x20009:
      if (unaff_x22 == 0) break;
      plVar11 = (long *)FUN_087c0130();
      puVar3 = System_Action<ITTSEvent>_TypeInfo;
      lVar12 = FUN_05ab4ccc(unaff_x24 + 8,*(undefined8 *)System_Action<ITTSEvent>_TypeInfo);
      uVar23 = *(undefined8 *)(lVar12 + 0x28);
      lVar12 = FUN_05ab4ccc(unaff_x23 + 8,*(undefined8 *)puVar3);
      if (plVar11 == (long *)0x0) break;
      lVar15 = *plVar11;
      uVar21 = *(undefined8 *)(lVar12 + 0x28);
      uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar17 != 0) {
        piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_08e86568) {
            puVar13 = (undefined8 *)(lVar15 + (long)(*piVar19 + 2) * 0x10 + 0x138);
            goto LAB_087a3b24;
          }
          uVar17 = uVar17 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar17 != 0);
      }
      puVar13 = (undefined8 *)FUN_03cf1348(plVar11,*(long *)PTR_DAT_08e86568,2);
LAB_087a3b24:
      UNRECOVERED_JUMPTABLE = (code *)*puVar13;
      iVar16 = 0x20003;
      goto LAB_087a3b30;
    case 0x2000a:
      if (unaff_x22 != 0) {
        plVar11 = (long *)FUN_087c0130();
        puVar3 = System_Action<ITTSEvent>_TypeInfo;
        lVar12 = FUN_05ab4ccc(unaff_x24 + 8,*(undefined8 *)System_Action<ITTSEvent>_TypeInfo);
        uVar25 = *(undefined4 *)(lVar12 + 0x30);
        lVar12 = FUN_05ab4ccc(unaff_x23 + 8,*(undefined8 *)puVar3);
        if (plVar11 != (long *)0x0) {
          lVar15 = *plVar11;
          uVar26 = *(undefined4 *)(lVar12 + 0x30);
          uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
          if (uVar17 != 0) {
            piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_08e86568) {
                puVar13 = (undefined8 *)(lVar15 + (long)(*piVar19 + 4) * 0x10 + 0x138);
                goto FUN_087a3b48;
              }
              uVar17 = uVar17 - 1;
              piVar19 = piVar19 + 4;
            } while (uVar17 != 0);
          }
          puVar13 = (undefined8 *)FUN_03cf1348(plVar11,*(long *)PTR_DAT_08e86568,4);
FUN_087a3b48:
          UNRECOVERED_JUMPTABLE = (code *)*puVar13;
          iVar16 = 0x2000a;
          goto LAB_087a4300;
        }
      }
      break;
    case 0x2000b:
      if (unaff_x22 != 0) {
        plVar11 = (long *)FUN_087c0130();
        puVar3 = System_Action<ITTSEvent>_TypeInfo;
        lVar12 = FUN_05ab4ccc(unaff_x24 + 8,*(undefined8 *)System_Action<ITTSEvent>_TypeInfo);
        uVar25 = *(undefined4 *)(lVar12 + 0x34);
        lVar12 = FUN_05ab4ccc(unaff_x23 + 8,*(undefined8 *)puVar3);
        if (plVar11 != (long *)0x0) {
          lVar15 = *plVar11;
          uVar26 = *(undefined4 *)(lVar12 + 0x34);
          uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
          if (uVar17 != 0) {
            piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_08e86568) {
                puVar13 = (undefined8 *)(lVar15 + (long)*piVar19 * 0x10 + 0x138);
                goto LAB_087a3b68;
              }
              uVar17 = uVar17 - 1;
              piVar19 = piVar19 + 4;
            } while (uVar17 != 0);
          }
          puVar13 = (undefined8 *)FUN_03cf1348(plVar11,*(long *)PTR_DAT_08e86568,0);
LAB_087a3b68:
          UNRECOVERED_JUMPTABLE = (code *)*puVar13;
          iVar16 = 0x2000b;
          goto LAB_087a4280;
        }
      }
      break;
    case 0x2000c:
      if (unaff_x22 != 0) {
        plVar11 = (long *)FUN_087c0130();
        puVar3 = System_Action<ITTSEvent>_TypeInfo;
        lVar12 = FUN_05ab4ccc(unaff_x24 + 8,*(undefined8 *)System_Action<ITTSEvent>_TypeInfo);
        uVar25 = *(undefined4 *)(lVar12 + 0x38);
        lVar12 = FUN_05ab4ccc(unaff_x23 + 8,*(undefined8 *)puVar3);
        if (plVar11 != (long *)0x0) {
          lVar15 = *plVar11;
          uVar26 = *(undefined4 *)(lVar12 + 0x38);
          uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
          if (uVar17 != 0) {
            piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_08e86568) {
                puVar13 = (undefined8 *)(lVar15 + (long)*piVar19 * 0x10 + 0x138);
                goto LAB_087a3b88;
              }
              uVar17 = uVar17 - 1;
              piVar19 = piVar19 + 4;
            } while (uVar17 != 0);
          }
          puVar13 = (undefined8 *)FUN_03cf1348(plVar11,*(long *)PTR_DAT_08e86568,0);
LAB_087a3b88:
          UNRECOVERED_JUMPTABLE = (code *)*puVar13;
          iVar16 = 0x2000c;
          goto LAB_087a4280;
        }
      }
      break;
    case 0x2000d:
      if (unaff_x22 != 0) {
        plVar11 = (long *)FUN_087c0130();
        puVar3 = System_Action<ITTSEvent>_TypeInfo;
        lVar12 = FUN_05ab4ccc(unaff_x24 + 8,*(undefined8 *)System_Action<ITTSEvent>_TypeInfo);
        uVar25 = *(undefined4 *)(lVar12 + 0x3c);
        lVar12 = FUN_05ab4ccc(unaff_x23 + 8,*(undefined8 *)puVar3);
        if (plVar11 != (long *)0x0) {
          lVar15 = *plVar11;
          uVar26 = *(undefined4 *)(lVar12 + 0x3c);
          uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
          if (uVar17 != 0) {
            piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_08e86568) {
                puVar13 = (undefined8 *)(lVar15 + (long)(*piVar19 + 4) * 0x10 + 0x138);
                goto LAB_087a3bac;
              }
              uVar17 = uVar17 - 1;
              piVar19 = piVar19 + 4;
            } while (uVar17 != 0);
          }
          puVar13 = (undefined8 *)FUN_03cf1348(plVar11,*(long *)PTR_DAT_08e86568,4);
LAB_087a3bac:
          UNRECOVERED_JUMPTABLE = (code *)*puVar13;
          iVar16 = 0x2000d;
          goto LAB_087a4300;
        }
      }
      break;
    case 0x2000e:
      if (unaff_x22 == 0) break;
      plVar11 = (long *)FUN_087c0130();
      puVar3 = System_Action<ITTSEvent>_TypeInfo;
      lVar12 = FUN_05ab4ccc(unaff_x24 + 8,*(undefined8 *)System_Action<ITTSEvent>_TypeInfo);
      uVar23 = *(undefined8 *)(lVar12 + 0x40);
      lVar12 = FUN_05ab4ccc(unaff_x23 + 8,*(undefined8 *)puVar3);
      if (plVar11 == (long *)0x0) break;
      lVar15 = *plVar11;
      uVar21 = *(undefined8 *)(lVar12 + 0x40);
      uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar17 != 0) {
        piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_08e86568) {
            puVar13 = (undefined8 *)(lVar15 + (long)(*piVar19 + 2) * 0x10 + 0x138);
            goto LAB_087a3bd0;
          }
          uVar17 = uVar17 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar17 != 0);
      }
      puVar13 = (undefined8 *)FUN_03cf1348(plVar11,*(long *)PTR_DAT_08e86568,2);
LAB_087a3bd0:
      UNRECOVERED_JUMPTABLE = (code *)*puVar13;
      iVar16 = 0x20003;
      goto LAB_087a3bdc;
    case 0x2000f:
      if (unaff_x22 != 0) {
        plVar11 = (long *)FUN_087c0130();
        puVar3 = System_Action<ITTSEvent>_TypeInfo;
        lVar12 = FUN_05ab4ccc(unaff_x24 + 8,*(undefined8 *)System_Action<ITTSEvent>_TypeInfo);
        uVar25 = *(undefined4 *)(lVar12 + 0x48);
        lVar12 = FUN_05ab4ccc(unaff_x23 + 8,*(undefined8 *)puVar3);
        if (plVar11 != (long *)0x0) {
          lVar15 = *plVar11;
          uVar26 = *(undefined4 *)(lVar12 + 0x48);
          uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
          if (uVar17 != 0) {
            piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_08e86568) {
                puVar13 = (undefined8 *)(lVar15 + (long)(*piVar19 + 4) * 0x10 + 0x138);
                goto LAB_087a3bf4;
              }
              uVar17 = uVar17 - 1;
              piVar19 = piVar19 + 4;
            } while (uVar17 != 0);
          }
          puVar13 = (undefined8 *)FUN_03cf1348(plVar11,*(long *)PTR_DAT_08e86568,4);
LAB_087a3bf4:
          UNRECOVERED_JUMPTABLE = (code *)*puVar13;
          iVar16 = 0x2000f;
          goto LAB_087a4300;
        }
      }
      break;
    case 0x20010:
      if (unaff_x22 != 0) {
        plVar11 = (long *)FUN_087c0130();
        puVar3 = System_Action<ITTSEvent>_TypeInfo;
        lVar12 = FUN_05ab4ccc(unaff_x24 + 8,*(undefined8 *)System_Action<ITTSEvent>_TypeInfo);
        uVar23 = *(undefined8 *)(lVar12 + 0x4c);
        lVar12 = FUN_05ab4ccc(unaff_x23 + 8,*(undefined8 *)puVar3);
        if (plVar11 != (long *)0x0) {
          lVar15 = *plVar11;
          uVar21 = *(undefined8 *)(lVar12 + 0x4c);
          uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
          if (uVar17 != 0) {
            piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_08e86568) {
                puVar13 = (undefined8 *)(lVar15 + (long)(*piVar19 + 2) * 0x10 + 0x138);
                goto LAB_087a3c18;
              }
              uVar17 = uVar17 - 1;
              piVar19 = piVar19 + 4;
            } while (uVar17 != 0);
          }
          puVar13 = (undefined8 *)FUN_03cf1348(plVar11,*(long *)PTR_DAT_08e86568,2);
LAB_087a3c18:
          UNRECOVERED_JUMPTABLE = (code *)*puVar13;
          uVar8 = 0x20010;
          goto LAB_087a40f8;
        }
      }
      break;
    case 0x20011:
      if (unaff_x22 != 0) {
        plVar11 = (long *)FUN_087c0130();
        puVar3 = System_Action<ITTSEvent>_TypeInfo;
        lVar12 = FUN_05ab4ccc(unaff_x24 + 8,*(undefined8 *)System_Action<ITTSEvent>_TypeInfo);
        uVar23 = *(undefined8 *)(lVar12 + 0x54);
        lVar12 = FUN_05ab4ccc(unaff_x23 + 8,*(undefined8 *)puVar3);
        if (plVar11 != (long *)0x0) {
          lVar15 = *plVar11;
          uVar21 = *(undefined8 *)(lVar12 + 0x54);
          uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
          if (uVar17 != 0) {
            piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_08e86568) {
                puVar13 = (undefined8 *)(lVar15 + (long)(*piVar19 + 2) * 0x10 + 0x138);
                goto LAB_087a3c3c;
              }
              uVar17 = uVar17 - 1;
              piVar19 = piVar19 + 4;
            } while (uVar17 != 0);
          }
          puVar13 = (undefined8 *)FUN_03cf1348(plVar11,*(long *)PTR_DAT_08e86568,2);
LAB_087a3c3c:
          UNRECOVERED_JUMPTABLE = (code *)*puVar13;
          uVar8 = 0x20011;
          goto LAB_087a40f8;
        }
      }
      break;
    case 0x20012:
      if (unaff_x22 != 0) {
        plVar11 = (long *)FUN_087c0130();
        puVar3 = System_Action<ITTSEvent>_TypeInfo;
        lVar12 = FUN_05ab4ccc(unaff_x24 + 8,*(undefined8 *)System_Action<ITTSEvent>_TypeInfo);
        uVar23 = *(undefined8 *)(lVar12 + 0x5c);
        lVar12 = FUN_05ab4ccc(unaff_x23 + 8,*(undefined8 *)puVar3);
        if (plVar11 != (long *)0x0) {
          lVar15 = *plVar11;
          uVar21 = *(undefined8 *)(lVar12 + 0x5c);
          uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
          if (uVar17 != 0) {
            piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_08e86568) {
                puVar13 = (undefined8 *)(lVar15 + (long)(*piVar19 + 2) * 0x10 + 0x138);
                goto LAB_087a3c60;
              }
              uVar17 = uVar17 - 1;
              piVar19 = piVar19 + 4;
            } while (uVar17 != 0);
          }
          puVar13 = (undefined8 *)FUN_03cf1348(plVar11,*(long *)PTR_DAT_08e86568,2);
LAB_087a3c60:
          UNRECOVERED_JUMPTABLE = (code *)*puVar13;
          uVar8 = 0x20012;
          goto LAB_087a40f8;
        }
      }
      break;
    case 0x20013:
      if (unaff_x22 != 0) {
        plVar11 = (long *)FUN_087c0130();
        puVar3 = System_Action<ITTSEvent>_TypeInfo;
        lVar12 = FUN_05ab4ccc(unaff_x24 + 8,*(undefined8 *)System_Action<ITTSEvent>_TypeInfo);
        uVar23 = *(undefined8 *)(lVar12 + 100);
        lVar12 = FUN_05ab4ccc(unaff_x23 + 8,*(undefined8 *)puVar3);
        if (plVar11 != (long *)0x0) {
          lVar15 = *plVar11;
          uVar21 = *(undefined8 *)(lVar12 + 100);
          uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
          if (uVar17 != 0) {
            piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_08e86568) {
                puVar13 = (undefined8 *)(lVar15 + (long)(*piVar19 + 2) * 0x10 + 0x138);
                goto LAB_087a3c84;
              }
              uVar17 = uVar17 - 1;
              piVar19 = piVar19 + 4;
            } while (uVar17 != 0);
          }
          puVar13 = (undefined8 *)FUN_03cf1348(plVar11,*(long *)PTR_DAT_08e86568,2);
LAB_087a3c84:
          UNRECOVERED_JUMPTABLE = (code *)*puVar13;
          uVar8 = 0x20013;
          goto LAB_087a40f8;
        }
      }
      break;
    case 0x20014:
      if (unaff_x22 != 0) {
        plVar11 = (long *)FUN_087c0130();
        puVar3 = System_Action<ITTSEvent>_TypeInfo;
        lVar12 = FUN_05ab4ccc(unaff_x24 + 8,*(undefined8 *)System_Action<ITTSEvent>_TypeInfo);
        uVar23 = *(undefined8 *)(lVar12 + 0x6c);
        lVar12 = FUN_05ab4ccc(unaff_x23 + 8,*(undefined8 *)puVar3);
        if (plVar11 != (long *)0x0) {
          lVar15 = *plVar11;
          uVar21 = *(undefined8 *)(lVar12 + 0x6c);
          uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
          if (uVar17 != 0) {
            piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_08e86568) {
                puVar13 = (undefined8 *)(lVar15 + (long)(*piVar19 + 2) * 0x10 + 0x138);
                goto FUN_087a3ca8;
              }
              uVar17 = uVar17 - 1;
              piVar19 = piVar19 + 4;
            } while (uVar17 != 0);
          }
          puVar13 = (undefined8 *)FUN_03cf1348(plVar11,*(long *)PTR_DAT_08e86568,2);
FUN_087a3ca8:
          UNRECOVERED_JUMPTABLE = (code *)*puVar13;
          uVar8 = 0x20014;
          goto LAB_087a40f8;
        }
      }
      break;
    case 0x20015:
      if (unaff_x22 != 0) {
        plVar11 = (long *)FUN_087c0130();
        puVar3 = System_Action<ITTSEvent>_TypeInfo;
        lVar12 = FUN_05ab4ccc(unaff_x24 + 8,*(undefined8 *)System_Action<ITTSEvent>_TypeInfo);
        uVar23 = *(undefined8 *)(lVar12 + 0x74);
        lVar12 = FUN_05ab4ccc(unaff_x23 + 8,*(undefined8 *)puVar3);
        if (plVar11 != (long *)0x0) {
          lVar15 = *plVar11;
          uVar21 = *(undefined8 *)(lVar12 + 0x74);
          uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
          if (uVar17 != 0) {
            piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_08e86568) {
                puVar13 = (undefined8 *)(lVar15 + (long)(*piVar19 + 2) * 0x10 + 0x138);
                goto LAB_087a3ccc;
              }
              uVar17 = uVar17 - 1;
              piVar19 = piVar19 + 4;
            } while (uVar17 != 0);
          }
          puVar13 = (undefined8 *)FUN_03cf1348(plVar11,*(long *)PTR_DAT_08e86568,2);
LAB_087a3ccc:
          UNRECOVERED_JUMPTABLE = (code *)*puVar13;
          uVar8 = 0x20015;
          goto LAB_087a40f8;
        }
      }
      break;
    case 0x20016:
      if (unaff_x22 != 0) {
        plVar11 = (long *)FUN_087c0130();
        puVar3 = System_Action<ITTSEvent>_TypeInfo;
        lVar12 = FUN_05ab4ccc(unaff_x24 + 8,*(undefined8 *)System_Action<ITTSEvent>_TypeInfo);
        uVar23 = *(undefined8 *)(lVar12 + 0x7c);
        lVar12 = FUN_05ab4ccc(unaff_x23 + 8,*(undefined8 *)puVar3);
        if (plVar11 != (long *)0x0) {
          lVar15 = *plVar11;
          uVar21 = *(undefined8 *)(lVar12 + 0x7c);
          uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
          if (uVar17 != 0) {
            piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_08e86568) {
                puVar13 = (undefined8 *)(lVar15 + (long)(*piVar19 + 2) * 0x10 + 0x138);
                goto LAB_087a3cf0;
              }
              uVar17 = uVar17 - 1;
              piVar19 = piVar19 + 4;
            } while (uVar17 != 0);
          }
          puVar13 = (undefined8 *)FUN_03cf1348(plVar11,*(long *)PTR_DAT_08e86568,2);
LAB_087a3cf0:
          UNRECOVERED_JUMPTABLE = (code *)*puVar13;
          uVar8 = 0x20016;
          goto LAB_087a40f8;
        }
      }
      break;
    case 0x20017:
      if (unaff_x22 == 0) break;
      plVar11 = (long *)FUN_087c0130();
      puVar3 = System_Action<ITTSEvent>_TypeInfo;
      lVar12 = FUN_05ab4ccc(unaff_x24 + 8,*(undefined8 *)System_Action<ITTSEvent>_TypeInfo);
      uVar23 = *(undefined8 *)(lVar12 + 0x84);
      lVar12 = FUN_05ab4ccc(unaff_x23 + 8,*(undefined8 *)puVar3);
      if (plVar11 == (long *)0x0) break;
      lVar15 = *plVar11;
      uVar21 = *(undefined8 *)(lVar12 + 0x84);
      uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar17 != 0) {
        piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_08e86568) {
            puVar13 = (undefined8 *)(lVar15 + (long)(*piVar19 + 2) * 0x10 + 0x138);
            goto LAB_087a3d14;
          }
          uVar17 = uVar17 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar17 != 0);
      }
      puVar13 = (undefined8 *)FUN_03cf1348(plVar11,*(long *)PTR_DAT_08e86568,2);
LAB_087a3d14:
      UNRECOVERED_JUMPTABLE = (code *)*puVar13;
      uVar6 = 0x14;
      uVar8 = 0x20003;
      goto LAB_087a3d24;
    case 0x20018:
      if (unaff_x22 != 0) {
        plVar11 = (long *)FUN_087c0130();
        puVar3 = System_Action<ITTSEvent>_TypeInfo;
        lVar12 = FUN_05ab4ccc(unaff_x24 + 8,*(undefined8 *)System_Action<ITTSEvent>_TypeInfo);
        uVar23 = *(undefined8 *)(lVar12 + 0x8c);
        lVar12 = FUN_05ab4ccc(unaff_x23 + 8,*(undefined8 *)puVar3);
        if (plVar11 != (long *)0x0) {
          lVar15 = *plVar11;
          uVar21 = *(undefined8 *)(lVar12 + 0x8c);
          uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
          if (uVar17 != 0) {
            piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_08e86568) {
                puVar13 = (undefined8 *)(lVar15 + (long)(*piVar19 + 2) * 0x10 + 0x138);
                goto LAB_087a3d3c;
              }
              uVar17 = uVar17 - 1;
              piVar19 = piVar19 + 4;
            } while (uVar17 != 0);
          }
          puVar13 = (undefined8 *)FUN_03cf1348(plVar11,*(long *)PTR_DAT_08e86568,2);
LAB_087a3d3c:
          UNRECOVERED_JUMPTABLE = (code *)*puVar13;
          uVar8 = 0x20018;
          goto LAB_087a40f8;
        }
      }
      break;
    case 0x20019:
      if (unaff_x22 != 0) {
        plVar11 = (long *)FUN_087c0130();
        puVar3 = System_Action<ITTSEvent>_TypeInfo;
        lVar12 = FUN_05ab4ccc(unaff_x24 + 8,*(undefined8 *)System_Action<ITTSEvent>_TypeInfo);
        uVar23 = *(undefined8 *)(lVar12 + 0x94);
        lVar12 = FUN_05ab4ccc(unaff_x23 + 8,*(undefined8 *)puVar3);
        if (plVar11 != (long *)0x0) {
          lVar15 = *plVar11;
          uVar21 = *(undefined8 *)(lVar12 + 0x94);
          uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
          if (uVar17 != 0) {
            piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_08e86568) {
                puVar13 = (undefined8 *)(lVar15 + (long)(*piVar19 + 2) * 0x10 + 0x138);
                goto LAB_087a3d60;
              }
              uVar17 = uVar17 - 1;
              piVar19 = piVar19 + 4;
            } while (uVar17 != 0);
          }
          puVar13 = (undefined8 *)FUN_03cf1348(plVar11,*(long *)PTR_DAT_08e86568,2);
LAB_087a3d60:
          UNRECOVERED_JUMPTABLE = (code *)*puVar13;
          uVar8 = 0x20019;
          goto LAB_087a40f8;
        }
      }
      break;
    case 0x2001a:
      if (unaff_x22 != 0) {
        plVar11 = (long *)FUN_087c0130();
        puVar3 = System_Action<ITTSEvent>_TypeInfo;
        lVar12 = FUN_05ab4ccc(unaff_x24 + 8,*(undefined8 *)System_Action<ITTSEvent>_TypeInfo);
        uVar23 = *(undefined8 *)(lVar12 + 0x9c);
        lVar12 = FUN_05ab4ccc(unaff_x23 + 8,*(undefined8 *)puVar3);
        if (plVar11 != (long *)0x0) {
          lVar15 = *plVar11;
          uVar21 = *(undefined8 *)(lVar12 + 0x9c);
          uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
          if (uVar17 != 0) {
            piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_08e86568) {
                puVar13 = (undefined8 *)(lVar15 + (long)(*piVar19 + 2) * 0x10 + 0x138);
                goto LAB_087a3d84;
              }
              uVar17 = uVar17 - 1;
              piVar19 = piVar19 + 4;
            } while (uVar17 != 0);
          }
          puVar13 = (undefined8 *)FUN_03cf1348(plVar11,*(long *)PTR_DAT_08e86568,2);
LAB_087a3d84:
          UNRECOVERED_JUMPTABLE = (code *)*puVar13;
          uVar8 = 0x2001a;
          goto LAB_087a40f8;
        }
      }
      break;
    case 0x2001b:
      if (unaff_x22 != 0) {
        plVar11 = (long *)FUN_087c0130();
        puVar3 = System_Action<ITTSEvent>_TypeInfo;
        lVar12 = FUN_05ab4ccc(unaff_x24 + 8,*(undefined8 *)System_Action<ITTSEvent>_TypeInfo);
        uVar23 = *(undefined8 *)(lVar12 + 0xa4);
        lVar12 = FUN_05ab4ccc(unaff_x23 + 8,*(undefined8 *)puVar3);
        if (plVar11 != (long *)0x0) {
          lVar15 = *plVar11;
          uVar21 = *(undefined8 *)(lVar12 + 0xa4);
          uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
          if (uVar17 != 0) {
            piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_08e86568) {
                puVar13 = (undefined8 *)(lVar15 + (long)(*piVar19 + 2) * 0x10 + 0x138);
                goto LAB_087a3da8;
              }
              uVar17 = uVar17 - 1;
              piVar19 = piVar19 + 4;
            } while (uVar17 != 0);
          }
          puVar13 = (undefined8 *)FUN_03cf1348(plVar11,*(long *)PTR_DAT_08e86568,2);
LAB_087a3da8:
          UNRECOVERED_JUMPTABLE = (code *)*puVar13;
          uVar8 = 0x2001b;
          goto LAB_087a40f8;
        }
      }
      break;
    case 0x2001c:
      if (unaff_x22 != 0) {
        plVar11 = (long *)FUN_087c0130();
        puVar3 = System_Action<ITTSEvent>_TypeInfo;
        lVar12 = FUN_05ab4ccc(unaff_x24 + 8,*(undefined8 *)System_Action<ITTSEvent>_TypeInfo);
        uVar23 = *(undefined8 *)(lVar12 + 0xac);
        lVar12 = FUN_05ab4ccc(unaff_x23 + 8,*(undefined8 *)puVar3);
        if (plVar11 != (long *)0x0) {
          lVar15 = *plVar11;
          uVar21 = *(undefined8 *)(lVar12 + 0xac);
          uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
          if (uVar17 != 0) {
            piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_08e86568) {
                puVar13 = (undefined8 *)(lVar15 + (long)(*piVar19 + 2) * 0x10 + 0x138);
                goto LAB_087a3dcc;
              }
              uVar17 = uVar17 - 1;
              piVar19 = piVar19 + 4;
            } while (uVar17 != 0);
          }
          puVar13 = (undefined8 *)FUN_03cf1348(plVar11,*(long *)PTR_DAT_08e86568,2);
LAB_087a3dcc:
          UNRECOVERED_JUMPTABLE = (code *)*puVar13;
          uVar8 = 0x2001c;
          goto LAB_087a40f8;
        }
      }
      break;
    case 0x2001d:
      if (unaff_x22 != 0) {
        plVar11 = (long *)FUN_087c0130();
        puVar3 = System_Action<ITTSEvent>_TypeInfo;
        lVar12 = FUN_05ab4ccc(unaff_x24 + 8,*(undefined8 *)System_Action<ITTSEvent>_TypeInfo);
        uVar25 = *(undefined4 *)(lVar12 + 0xb4);
        lVar12 = FUN_05ab4ccc(unaff_x23 + 8,*(undefined8 *)puVar3);
        if (plVar11 != (long *)0x0) {
          lVar15 = *plVar11;
          uVar26 = *(undefined4 *)(lVar12 + 0xb4);
          uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
          if (uVar17 != 0) {
            piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_08e86568) {
                puVar13 = (undefined8 *)(lVar15 + (long)(*piVar19 + 4) * 0x10 + 0x138);
                goto LAB_087a3df0;
              }
              uVar17 = uVar17 - 1;
              piVar19 = piVar19 + 4;
            } while (uVar17 != 0);
          }
          puVar13 = (undefined8 *)FUN_03cf1348(plVar11,*(long *)PTR_DAT_08e86568,4);
LAB_087a3df0:
          UNRECOVERED_JUMPTABLE = (code *)*puVar13;
          iVar16 = 0x2001d;
          goto LAB_087a4300;
        }
      }
      break;
    case 0x2001e:
      if (unaff_x22 != 0) {
        plVar11 = (long *)FUN_087c0130();
        puVar3 = System_Action<ITTSEvent>_TypeInfo;
        lVar12 = FUN_05ab4ccc(unaff_x24 + 8,*(undefined8 *)System_Action<ITTSEvent>_TypeInfo);
        uVar23 = *(undefined8 *)(lVar12 + 0xb8);
        lVar12 = FUN_05ab4ccc(unaff_x23 + 8,*(undefined8 *)puVar3);
        if (plVar11 != (long *)0x0) {
          lVar15 = *plVar11;
          uVar21 = *(undefined8 *)(lVar12 + 0xb8);
          uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
          if (uVar17 != 0) {
            piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_08e86568) {
                puVar13 = (undefined8 *)(lVar15 + (long)(*piVar19 + 2) * 0x10 + 0x138);
                goto LAB_087a3e14;
              }
              uVar17 = uVar17 - 1;
              piVar19 = piVar19 + 4;
            } while (uVar17 != 0);
          }
          puVar13 = (undefined8 *)FUN_03cf1348(plVar11,*(long *)PTR_DAT_08e86568,2);
LAB_087a3e14:
          UNRECOVERED_JUMPTABLE = (code *)*puVar13;
          uVar8 = 0x2001e;
          goto LAB_087a40f8;
        }
      }
      break;
    case 0x2001f:
      if (unaff_x22 != 0) {
        plVar11 = (long *)FUN_087c0130();
        puVar3 = System_Action<ITTSEvent>_TypeInfo;
        lVar12 = FUN_05ab4ccc(unaff_x24 + 8,*(undefined8 *)System_Action<ITTSEvent>_TypeInfo);
        uVar23 = *(undefined8 *)(lVar12 + 0xc0);
        lVar12 = FUN_05ab4ccc(unaff_x23 + 8,*(undefined8 *)puVar3);
        if (plVar11 != (long *)0x0) {
          lVar15 = *plVar11;
          uVar21 = *(undefined8 *)(lVar12 + 0xc0);
          uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
          if (uVar17 != 0) {
            piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_08e86568) {
                puVar13 = (undefined8 *)(lVar15 + (long)(*piVar19 + 2) * 0x10 + 0x138);
                goto LAB_087a3e38;
              }
              uVar17 = uVar17 - 1;
              piVar19 = piVar19 + 4;
            } while (uVar17 != 0);
          }
          puVar13 = (undefined8 *)FUN_03cf1348(plVar11,*(long *)PTR_DAT_08e86568,2);
LAB_087a3e38:
          UNRECOVERED_JUMPTABLE = (code *)*puVar13;
          uVar8 = 0x2001f;
          goto LAB_087a40f8;
        }
      }
      break;
    case 0x20020:
      if (unaff_x22 != 0) {
        plVar11 = (long *)FUN_087c0130();
        puVar3 = System_Action<ITTSEvent>_TypeInfo;
        lVar12 = FUN_05ab4ccc(unaff_x24 + 8,*(undefined8 *)System_Action<ITTSEvent>_TypeInfo);
        uVar23 = *(undefined8 *)(lVar12 + 200);
        lVar12 = FUN_05ab4ccc(unaff_x23 + 8,*(undefined8 *)puVar3);
        if (plVar11 != (long *)0x0) {
          lVar15 = *plVar11;
          uVar21 = *(undefined8 *)(lVar12 + 200);
          uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
          if (uVar17 != 0) {
            piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_08e86568) {
                puVar13 = (undefined8 *)(lVar15 + (long)(*piVar19 + 2) * 0x10 + 0x138);
                goto FUN_087a3e5c;
              }
              uVar17 = uVar17 - 1;
              piVar19 = piVar19 + 4;
            } while (uVar17 != 0);
          }
          puVar13 = (undefined8 *)FUN_03cf1348(plVar11,*(long *)PTR_DAT_08e86568,2);
FUN_087a3e5c:
          UNRECOVERED_JUMPTABLE = (code *)*puVar13;
          uVar8 = 0x20020;
          goto LAB_087a40f8;
        }
      }
      break;
    default:
      switch(unaff_w25) {
      case 0x10000:
        if (unaff_x22 == 0) break;
        plVar11 = (long *)FUN_087c0130();
        puVar9 = (undefined4 *)FUN_05ab480c();
        uVar25 = *puVar9;
        uVar26 = puVar9[1];
        uVar27 = puVar9[2];
        uVar28 = puVar9[3];
        puVar9 = (undefined4 *)FUN_05ab480c();
        if (plVar11 == (long *)0x0) break;
        uVar30 = puVar9[2];
        uVar29 = puVar9[3];
        lVar12 = *plVar11;
        uVar32 = *puVar9;
        uVar31 = puVar9[1];
        uVar17 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar17 != 0) {
          piVar19 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_08e86568) {
              puVar13 = (undefined8 *)(lVar12 + (long)(*piVar19 + 3) * 0x10 + 0x138);
              goto LAB_087a39e8;
            }
            uVar17 = uVar17 - 1;
            piVar19 = piVar19 + 4;
          } while (uVar17 != 0);
        }
        puVar13 = (undefined8 *)FUN_03cf1348(plVar11,*(long *)PTR_DAT_08e86568,3);
LAB_087a39e8:
        UNRECOVERED_JUMPTABLE = (code *)*puVar13;
        iVar16 = 0x10000;
        goto LAB_087a4158;
      case 0x10001:
        if (unaff_x22 != 0) {
          plVar11 = (long *)FUN_087c0130();
          lVar12 = FUN_05ab480c();
          uVar23 = *(undefined8 *)(lVar12 + 0x10);
          lVar12 = FUN_05ab480c();
          if (plVar11 != (long *)0x0) {
            lVar15 = *plVar11;
            uVar21 = *(undefined8 *)(lVar12 + 0x10);
            uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
            if (uVar17 != 0) {
              piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
              do {
                if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_08e86568) {
                  puVar13 = (undefined8 *)(lVar15 + (long)(*piVar19 + 2) * 0x10 + 0x138);
                  goto LAB_087a3e80;
                }
                uVar17 = uVar17 - 1;
                piVar19 = piVar19 + 4;
              } while (uVar17 != 0);
            }
            puVar13 = (undefined8 *)FUN_03cf1348(plVar11,*(long *)PTR_DAT_08e86568,2);
LAB_087a3e80:
            UNRECOVERED_JUMPTABLE = (code *)*puVar13;
            uVar8 = 0x10001;
            goto LAB_087a40f8;
          }
        }
        break;
      case 0x10002:
        if (unaff_x22 != 0) {
          plVar11 = (long *)FUN_087c0130();
          lVar12 = FUN_05ab480c();
          uVar23 = *(undefined8 *)(lVar12 + 0x18);
          lVar12 = FUN_05ab480c();
          if (plVar11 != (long *)0x0) {
            lVar15 = *plVar11;
            uVar21 = *(undefined8 *)(lVar12 + 0x18);
            uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
            if (uVar17 != 0) {
              piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
              do {
                if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_08e86568) {
                  puVar13 = (undefined8 *)(lVar15 + (long)(*piVar19 + 2) * 0x10 + 0x138);
                  goto LAB_087a3ea4;
                }
                uVar17 = uVar17 - 1;
                piVar19 = piVar19 + 4;
              } while (uVar17 != 0);
            }
            puVar13 = (undefined8 *)FUN_03cf1348(plVar11,*(long *)PTR_DAT_08e86568,2);
LAB_087a3ea4:
            UNRECOVERED_JUMPTABLE = (code *)*puVar13;
            uVar8 = 0x10002;
            goto LAB_087a40f8;
          }
        }
        break;
      case 0x10003:
        if (unaff_x22 == 0) break;
        plVar11 = (long *)FUN_087c0130();
        FUN_05ab480c();
        FUN_05ab480c();
        if (plVar11 == (long *)0x0) break;
        lVar12 = *plVar11;
        uVar17 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar17 != 0) {
          piVar19 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_08e86568) {
              puVar13 = (undefined8 *)(lVar12 + (long)(*piVar19 + 8) * 0x10 + 0x138);
              goto LAB_087a3ec8;
            }
            uVar17 = uVar17 - 1;
            piVar19 = piVar19 + 4;
          } while (uVar17 != 0);
        }
        puVar13 = (undefined8 *)FUN_03cf1348(plVar11,*(long *)PTR_DAT_08e86568,8);
LAB_087a3ec8:
        UNRECOVERED_JUMPTABLE = (code *)*puVar13;
        uVar23 = 0x10003;
        goto LAB_087a3efc;
      case 0x10004:
        if (unaff_x22 != 0) {
          plVar11 = (long *)FUN_087c0130();
          lVar12 = FUN_05ab480c();
          uVar23 = *(undefined8 *)(lVar12 + 0x40);
          lVar12 = FUN_05ab480c();
          if (plVar11 != (long *)0x0) {
            lVar15 = *plVar11;
            uVar21 = *(undefined8 *)(lVar12 + 0x40);
            uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
            if (uVar17 != 0) {
              piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
              do {
                if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_08e86568) {
                  puVar13 = (undefined8 *)(lVar15 + (long)(*piVar19 + 7) * 0x10 + 0x138);
                  goto LAB_087a3f2c;
                }
                uVar17 = uVar17 - 1;
                piVar19 = piVar19 + 4;
              } while (uVar17 != 0);
            }
            puVar13 = (undefined8 *)FUN_03cf1348(plVar11,*(long *)PTR_DAT_08e86568,7);
LAB_087a3f2c:
            UNRECOVERED_JUMPTABLE = (code *)*puVar13;
            uVar8 = 0x10004;
            goto LAB_087a40f8;
          }
        }
        break;
      case 0x10005:
        if (unaff_x22 == 0) break;
        plVar11 = (long *)FUN_087c0130();
        lVar12 = FUN_05ab480c();
        uVar23 = *(undefined8 *)(lVar12 + 0x48);
        uVar17 = *(ulong *)(lVar12 + 0x50);
        lVar12 = FUN_05ab480c();
        if (plVar11 == (long *)0x0) break;
        lVar15 = *plVar11;
        uVar21 = *(undefined8 *)(lVar12 + 0x48);
        uVar20 = *(ulong *)(lVar12 + 0x50);
        uVar18 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar18 != 0) {
          piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_08e86568) {
              puVar13 = (undefined8 *)(lVar15 + (long)(*piVar19 + 6) * 0x10 + 0x138);
              goto LAB_087a3f50;
            }
            uVar18 = uVar18 - 1;
            piVar19 = piVar19 + 4;
          } while (uVar18 != 0);
        }
        puVar13 = (undefined8 *)FUN_03cf1348(plVar11,*(long *)PTR_DAT_08e86568,6);
LAB_087a3f50:
        UNRECOVERED_JUMPTABLE = (code *)*puVar13;
        uVar25 = 0x10005;
        goto LAB_087a3f70;
      case 0x10006:
        if (unaff_x22 != 0) {
          plVar11 = (long *)FUN_087c0130();
          lVar12 = FUN_05ab480c();
          uVar25 = *(undefined4 *)(lVar12 + 0x58);
          lVar12 = FUN_05ab480c();
          if (plVar11 != (long *)0x0) {
            lVar15 = *plVar11;
            uVar26 = *(undefined4 *)(lVar12 + 0x58);
            uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
            if (uVar17 != 0) {
              piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
              do {
                if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_08e86568) {
                  puVar13 = (undefined8 *)(lVar15 + (long)(*piVar19 + 4) * 0x10 + 0x138);
                  goto LAB_087a3f98;
                }
                uVar17 = uVar17 - 1;
                piVar19 = piVar19 + 4;
              } while (uVar17 != 0);
            }
            puVar13 = (undefined8 *)FUN_03cf1348(plVar11,*(long *)PTR_DAT_08e86568,4);
LAB_087a3f98:
            UNRECOVERED_JUMPTABLE = (code *)*puVar13;
            iVar16 = 0x10006;
            goto LAB_087a4300;
          }
        }
        break;
      case 0x10007:
        if (unaff_x22 != 0) {
          plVar11 = (long *)FUN_087c0130();
          lVar12 = FUN_05ab480c();
          uVar23 = *(undefined8 *)(lVar12 + 0x5c);
          lVar12 = FUN_05ab480c();
          if (plVar11 != (long *)0x0) {
            lVar15 = *plVar11;
            uVar21 = *(undefined8 *)(lVar12 + 0x5c);
            uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
            if (uVar17 != 0) {
              piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
              do {
                if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_08e86568) {
                  puVar13 = (undefined8 *)(lVar15 + (long)(*piVar19 + 2) * 0x10 + 0x138);
                  goto LAB_087a3fbc;
                }
                uVar17 = uVar17 - 1;
                piVar19 = piVar19 + 4;
              } while (uVar17 != 0);
            }
            puVar13 = (undefined8 *)FUN_03cf1348(plVar11,*(long *)PTR_DAT_08e86568,2);
LAB_087a3fbc:
            UNRECOVERED_JUMPTABLE = (code *)*puVar13;
            uVar8 = 0x10007;
            goto LAB_087a40f8;
          }
        }
        break;
      case 0x10008:
        if (unaff_x22 == 0) break;
        plVar11 = (long *)FUN_087c0130();
        lVar12 = FUN_05ab480c();
        uVar25 = *(undefined4 *)(lVar12 + 100);
        lVar12 = FUN_05ab480c();
        if (plVar11 == (long *)0x0) break;
        lVar15 = *plVar11;
        uVar26 = *(undefined4 *)(lVar12 + 100);
        uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar17 != 0) {
          piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_08e86568) {
              puVar13 = (undefined8 *)(lVar15 + (long)(*piVar19 + 4) * 0x10 + 0x138);
              goto LAB_087a3fe0;
            }
            uVar17 = uVar17 - 1;
            piVar19 = piVar19 + 4;
          } while (uVar17 != 0);
        }
        puVar13 = (undefined8 *)FUN_03cf1348(plVar11,*(long *)PTR_DAT_08e86568,4);
LAB_087a3fe0:
        UNRECOVERED_JUMPTABLE = (code *)*puVar13;
        iVar16 = 0x10009;
        goto LAB_087a3fec;
      case 0x10009:
        if (unaff_x22 != 0) {
          plVar11 = (long *)FUN_087c0130();
          lVar12 = FUN_05ab480c();
          uVar25 = *(undefined4 *)(lVar12 + 0x68);
          uVar26 = *(undefined4 *)(lVar12 + 0x6c);
          uVar27 = *(undefined4 *)(lVar12 + 0x70);
          uVar28 = *(undefined4 *)(lVar12 + 0x74);
          lVar12 = FUN_05ab480c();
          if (plVar11 != (long *)0x0) {
            uVar30 = *(undefined4 *)(lVar12 + 0x70);
            uVar29 = *(undefined4 *)(lVar12 + 0x74);
            lVar15 = *plVar11;
            uVar32 = *(undefined4 *)(lVar12 + 0x68);
            uVar31 = *(undefined4 *)(lVar12 + 0x6c);
            uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
            if (uVar17 != 0) {
              piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
              do {
                if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_08e86568) {
                  puVar13 = (undefined8 *)(lVar15 + (long)(*piVar19 + 3) * 0x10 + 0x138);
                  goto LAB_087a4004;
                }
                uVar17 = uVar17 - 1;
                piVar19 = piVar19 + 4;
              } while (uVar17 != 0);
            }
            puVar13 = (undefined8 *)FUN_03cf1348(plVar11,*(long *)PTR_DAT_08e86568,3);
LAB_087a4004:
                    /* WARNING: Could not recover jumptable at 0x087a406c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            uVar17 = (*(code *)*puVar13)(uVar25,uVar26,uVar27,uVar28,uVar32,uVar31,uVar30,uVar29,
                                         plVar11,0x10009,in_stack_00000028._4_4_,unaff_w20);
            return uVar17;
          }
        }
        break;
      case 0x1000a:
        if (unaff_x22 == 0) break;
        plVar11 = (long *)FUN_087c0130();
        lVar12 = FUN_05ab480c();
        uVar25 = *(undefined4 *)(lVar12 + 0x78);
        lVar12 = FUN_05ab480c();
        if (plVar11 == (long *)0x0) break;
        lVar15 = *plVar11;
        uVar26 = *(undefined4 *)(lVar12 + 0x78);
        uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar17 != 0) {
          piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_08e86568) {
              puVar13 = (undefined8 *)(lVar15 + (long)*piVar19 * 0x10 + 0x138);
              goto LAB_087a407c;
            }
            uVar17 = uVar17 - 1;
            piVar19 = piVar19 + 4;
          } while (uVar17 != 0);
        }
        puVar13 = (undefined8 *)FUN_03cf1348(plVar11,*(long *)PTR_DAT_08e86568,0);
LAB_087a407c:
        UNRECOVERED_JUMPTABLE = (code *)*puVar13;
        iVar16 = 0x10009;
        goto LAB_087a4088;
      case 0x1000b:
        if (unaff_x22 != 0) {
          plVar11 = (long *)FUN_087c0130();
          lVar12 = FUN_05ab480c();
          uVar25 = *(undefined4 *)(lVar12 + 0x7c);
          lVar12 = FUN_05ab480c();
          if (plVar11 != (long *)0x0) {
            lVar15 = *plVar11;
            uVar26 = *(undefined4 *)(lVar12 + 0x7c);
            uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
            if (uVar17 != 0) {
              piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
              do {
                if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_08e86568) {
                  puVar13 = (undefined8 *)(lVar15 + (long)(*piVar19 + 4) * 0x10 + 0x138);
                  goto LAB_087a40a0;
                }
                uVar17 = uVar17 - 1;
                piVar19 = piVar19 + 4;
              } while (uVar17 != 0);
            }
            puVar13 = (undefined8 *)FUN_03cf1348(plVar11,*(long *)PTR_DAT_08e86568,4);
LAB_087a40a0:
            UNRECOVERED_JUMPTABLE = (code *)*puVar13;
            iVar16 = 0x1000b;
            goto LAB_087a4300;
          }
        }
        break;
      case 0x1000c:
        if (unaff_x22 != 0) {
          plVar11 = (long *)FUN_087c0130();
          lVar12 = FUN_05ab480c();
          uVar25 = *(undefined4 *)(lVar12 + 0x80);
          lVar12 = FUN_05ab480c();
          if (plVar11 != (long *)0x0) {
            lVar15 = *plVar11;
            uVar26 = *(undefined4 *)(lVar12 + 0x80);
            uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
            if (uVar17 != 0) {
              piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
              do {
                if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_08e86568) {
                  puVar13 = (undefined8 *)(lVar15 + (long)(*piVar19 + 4) * 0x10 + 0x138);
                  goto LAB_087a40c4;
                }
                uVar17 = uVar17 - 1;
                piVar19 = piVar19 + 4;
              } while (uVar17 != 0);
            }
            puVar13 = (undefined8 *)FUN_03cf1348(plVar11,*(long *)PTR_DAT_08e86568,4);
LAB_087a40c4:
            UNRECOVERED_JUMPTABLE = (code *)*puVar13;
            iVar16 = 0x1000c;
            goto LAB_087a4300;
          }
        }
        break;
      case 0x1000d:
        if (unaff_x22 == 0) break;
        plVar11 = (long *)FUN_087c0130();
        lVar12 = FUN_05ab480c();
        uVar23 = *(undefined8 *)(lVar12 + 0x84);
        lVar12 = FUN_05ab480c();
        if (plVar11 == (long *)0x0) break;
        lVar15 = *plVar11;
        uVar21 = *(undefined8 *)(lVar12 + 0x84);
        uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar17 != 0) {
          piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_08e86568) {
              puVar13 = (undefined8 *)(lVar15 + (long)(*piVar19 + 2) * 0x10 + 0x138);
              goto LAB_087a40e8;
            }
            uVar17 = uVar17 - 1;
            piVar19 = piVar19 + 4;
          } while (uVar17 != 0);
        }
        puVar13 = (undefined8 *)FUN_03cf1348(plVar11,*(long *)PTR_DAT_08e86568,2);
LAB_087a40e8:
        UNRECOVERED_JUMPTABLE = (code *)*puVar13;
        uVar8 = 0x10009;
        goto LAB_087a40f4;
      default:
        switch(unaff_w25) {
        case 0x30001:
          if (unaff_x22 != 0) {
            plVar11 = (long *)FUN_087c0130();
            puVar3 = System_Action<IView>_TypeInfo;
            lVar12 = FUN_05ab518c(unaff_x24 + 0x10,*(undefined8 *)System_Action<IView>_TypeInfo);
            uVar25 = *(undefined4 *)(lVar12 + 0x18);
            lVar12 = FUN_05ab518c(unaff_x23 + 0x10,*(undefined8 *)puVar3);
            if (plVar11 != (long *)0x0) {
              lVar15 = *plVar11;
              uVar26 = *(undefined4 *)(lVar12 + 0x18);
              uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
              if (uVar17 != 0) {
                piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_08e86568) {
                    puVar13 = (undefined8 *)(lVar15 + (long)(*piVar19 + 4) * 0x10 + 0x138);
                    goto LAB_087a3a04;
                  }
                  uVar17 = uVar17 - 1;
                  piVar19 = piVar19 + 4;
                } while (uVar17 != 0);
              }
              puVar13 = (undefined8 *)FUN_03cf1348(plVar11,*(long *)PTR_DAT_08e86568,4);
LAB_087a3a04:
              UNRECOVERED_JUMPTABLE = (code *)*puVar13;
              iVar16 = unaff_w28 + -8;
              goto LAB_087a4300;
            }
          }
          break;
        case 0x30002:
          if (unaff_x22 == 0) break;
          plVar11 = (long *)FUN_087c0130();
          puVar3 = System_Action<IView>_TypeInfo;
          lVar12 = FUN_05ab518c(unaff_x24 + 0x10,*(undefined8 *)System_Action<IView>_TypeInfo);
          uVar25 = *(undefined4 *)(lVar12 + 0x1c);
          uVar26 = *(undefined4 *)(lVar12 + 0x20);
          uVar27 = *(undefined4 *)(lVar12 + 0x24);
          uVar28 = *(undefined4 *)(lVar12 + 0x28);
          lVar12 = FUN_05ab518c(unaff_x23 + 0x10,*(undefined8 *)puVar3);
          if (plVar11 == (long *)0x0) break;
          uVar30 = *(undefined4 *)(lVar12 + 0x24);
          uVar29 = *(undefined4 *)(lVar12 + 0x28);
          lVar15 = *plVar11;
          uVar32 = *(undefined4 *)(lVar12 + 0x1c);
          uVar31 = *(undefined4 *)(lVar12 + 0x20);
          uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
          if (uVar17 != 0) {
            piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_08e86568) {
                puVar13 = (undefined8 *)(lVar15 + (long)(*piVar19 + 3) * 0x10 + 0x138);
                goto LAB_087a4150;
              }
              uVar17 = uVar17 - 1;
              piVar19 = piVar19 + 4;
            } while (uVar17 != 0);
          }
          puVar13 = (undefined8 *)FUN_03cf1348(plVar11,*(long *)PTR_DAT_08e86568,3);
LAB_087a4150:
          UNRECOVERED_JUMPTABLE = (code *)*puVar13;
          iVar16 = unaff_w28 + -7;
          goto LAB_087a4158;
        case 0x30003:
          if (unaff_x22 != 0) {
            plVar11 = (long *)FUN_087c0130();
            puVar3 = System_Action<IView>_TypeInfo;
            lVar12 = FUN_05ab518c(unaff_x24 + 0x10,*(undefined8 *)System_Action<IView>_TypeInfo);
            uVar25 = *(undefined4 *)(lVar12 + 0x2c);
            lVar12 = FUN_05ab518c(unaff_x23 + 0x10,*(undefined8 *)puVar3);
            if (plVar11 != (long *)0x0) {
              lVar15 = *plVar11;
              uVar26 = *(undefined4 *)(lVar12 + 0x2c);
              uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
              if (uVar17 != 0) {
                piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_08e86568) {
                    puVar13 = (undefined8 *)(lVar15 + (long)(*piVar19 + 4) * 0x10 + 0x138);
                    goto LAB_087a420c;
                  }
                  uVar17 = uVar17 - 1;
                  piVar19 = piVar19 + 4;
                } while (uVar17 != 0);
              }
              puVar13 = (undefined8 *)FUN_03cf1348(plVar11,*(long *)PTR_DAT_08e86568,4);
LAB_087a420c:
              UNRECOVERED_JUMPTABLE = (code *)*puVar13;
              iVar16 = unaff_w28 + -6;
              goto LAB_087a4300;
            }
          }
          break;
        case 0x30004:
          if (unaff_x22 != 0) {
            plVar11 = (long *)FUN_087c0130();
            puVar3 = System_Action<IView>_TypeInfo;
            lVar12 = FUN_05ab518c(unaff_x24 + 0x10,*(undefined8 *)System_Action<IView>_TypeInfo);
            uVar25 = *(undefined4 *)(lVar12 + 0x30);
            lVar12 = FUN_05ab518c(unaff_x23 + 0x10,*(undefined8 *)puVar3);
            if (plVar11 != (long *)0x0) {
              lVar15 = *plVar11;
              uVar26 = *(undefined4 *)(lVar12 + 0x30);
              uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
              if (uVar17 != 0) {
                piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_08e86568) {
                    puVar13 = (undefined8 *)(lVar15 + (long)(*piVar19 + 1) * 0x10 + 0x138);
                    goto LAB_087a4228;
                  }
                  uVar17 = uVar17 - 1;
                  piVar19 = piVar19 + 4;
                } while (uVar17 != 0);
              }
              puVar13 = (undefined8 *)FUN_03cf1348(plVar11,*(long *)PTR_DAT_08e86568,1);
LAB_087a4228:
              UNRECOVERED_JUMPTABLE = (code *)*puVar13;
              iVar16 = unaff_w28 + -5;
              goto LAB_087a4300;
            }
          }
          break;
        case 0x30005:
          if (unaff_x22 != 0) {
            plVar11 = (long *)FUN_087c0130();
            puVar3 = System_Action<IView>_TypeInfo;
            lVar12 = FUN_05ab518c(unaff_x24 + 0x10,*(undefined8 *)System_Action<IView>_TypeInfo);
            uVar25 = *(undefined4 *)(lVar12 + 0x34);
            lVar12 = FUN_05ab518c(unaff_x23 + 0x10,*(undefined8 *)puVar3);
            if (plVar11 != (long *)0x0) {
              lVar15 = *plVar11;
              uVar26 = *(undefined4 *)(lVar12 + 0x34);
              uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
              if (uVar17 != 0) {
                piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_08e86568) {
                    puVar13 = (undefined8 *)(lVar15 + (long)(*piVar19 + 1) * 0x10 + 0x138);
                    goto LAB_087a4244;
                  }
                  uVar17 = uVar17 - 1;
                  piVar19 = piVar19 + 4;
                } while (uVar17 != 0);
              }
              puVar13 = (undefined8 *)FUN_03cf1348(plVar11,*(long *)PTR_DAT_08e86568,1);
LAB_087a4244:
              UNRECOVERED_JUMPTABLE = (code *)*puVar13;
              iVar16 = unaff_w28 + -4;
              goto LAB_087a4300;
            }
          }
          break;
        case 0x30006:
          if (unaff_x22 != 0) {
            plVar11 = (long *)FUN_087c0130();
            puVar3 = System_Action<IView>_TypeInfo;
            lVar12 = FUN_05ab518c(unaff_x24 + 0x10,*(undefined8 *)System_Action<IView>_TypeInfo);
            uVar25 = *(undefined4 *)(lVar12 + 0x38);
            lVar12 = FUN_05ab518c(unaff_x23 + 0x10,*(undefined8 *)puVar3);
            if (plVar11 != (long *)0x0) {
              lVar15 = *plVar11;
              uVar26 = *(undefined4 *)(lVar12 + 0x38);
              uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
              if (uVar17 != 0) {
                piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_08e86568) {
                    puVar13 = (undefined8 *)(lVar15 + (long)(*piVar19 + 1) * 0x10 + 0x138);
                    goto LAB_087a4260;
                  }
                  uVar17 = uVar17 - 1;
                  piVar19 = piVar19 + 4;
                } while (uVar17 != 0);
              }
              puVar13 = (undefined8 *)FUN_03cf1348(plVar11,*(long *)PTR_DAT_08e86568,1);
LAB_087a4260:
              UNRECOVERED_JUMPTABLE = (code *)*puVar13;
              iVar16 = unaff_w28 + -3;
              goto LAB_087a4300;
            }
          }
          break;
        case 0x30007:
          if (unaff_x22 != 0) {
            plVar11 = (long *)FUN_087c0130();
            puVar3 = System_Action<IView>_TypeInfo;
            lVar12 = FUN_05ab518c(unaff_x24 + 0x10,*(undefined8 *)System_Action<IView>_TypeInfo);
            uVar25 = *(undefined4 *)(lVar12 + 0x3c);
            lVar12 = FUN_05ab518c(unaff_x23 + 0x10,*(undefined8 *)puVar3);
            if (plVar11 != (long *)0x0) {
              lVar15 = *plVar11;
              uVar26 = *(undefined4 *)(lVar12 + 0x3c);
              uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
              if (uVar17 != 0) {
                piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_08e86568) {
                    puVar13 = (undefined8 *)(lVar15 + (long)*piVar19 * 0x10 + 0x138);
                    goto FUN_087a4278;
                  }
                  uVar17 = uVar17 - 1;
                  piVar19 = piVar19 + 4;
                } while (uVar17 != 0);
              }
              puVar13 = (undefined8 *)FUN_03cf1348(plVar11,*(long *)PTR_DAT_08e86568,0);
FUN_087a4278:
              UNRECOVERED_JUMPTABLE = (code *)*puVar13;
              iVar16 = unaff_w28 + -2;
              goto LAB_087a4280;
            }
          }
          break;
        case 0x30008:
          if (unaff_x22 != 0) {
            plVar11 = (long *)FUN_087c0130();
            puVar3 = System_Action<IView>_TypeInfo;
            lVar12 = FUN_05ab518c(unaff_x24 + 0x10,*(undefined8 *)System_Action<IView>_TypeInfo);
            uVar25 = *(undefined4 *)(lVar12 + 0x40);
            lVar12 = FUN_05ab518c(unaff_x23 + 0x10,*(undefined8 *)puVar3);
            if (plVar11 != (long *)0x0) {
              lVar15 = *plVar11;
              uVar26 = *(undefined4 *)(lVar12 + 0x40);
              uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
              if (uVar17 != 0) {
                piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_08e86568) {
                    puVar13 = (undefined8 *)(lVar15 + (long)(*piVar19 + 1) * 0x10 + 0x138);
                    goto LAB_087a42d8;
                  }
                  uVar17 = uVar17 - 1;
                  piVar19 = piVar19 + 4;
                } while (uVar17 != 0);
              }
              puVar13 = (undefined8 *)FUN_03cf1348(plVar11,*(long *)PTR_DAT_08e86568,1);
LAB_087a42d8:
              UNRECOVERED_JUMPTABLE = (code *)*puVar13;
              iVar16 = unaff_w28 + -1;
              goto LAB_087a4300;
            }
          }
          break;
        case 0x30009:
          if (unaff_x22 != 0) {
            plVar11 = (long *)FUN_087c0130();
            puVar3 = System_Action<IView>_TypeInfo;
            lVar12 = FUN_05ab518c(unaff_x24 + 0x10,*(undefined8 *)System_Action<IView>_TypeInfo);
            uVar25 = *(undefined4 *)(lVar12 + 0x44);
            lVar12 = FUN_05ab518c(unaff_x23 + 0x10,*(undefined8 *)puVar3);
            if (plVar11 != (long *)0x0) {
              lVar15 = *plVar11;
              uVar26 = *(undefined4 *)(lVar12 + 0x44);
              uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
              if (uVar17 != 0) {
                piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_08e86568) {
                    puVar13 = (undefined8 *)(lVar15 + (long)(*piVar19 + 4) * 0x10 + 0x138);
                    goto LAB_087a42f4;
                  }
                  uVar17 = uVar17 - 1;
                  piVar19 = piVar19 + 4;
                } while (uVar17 != 0);
              }
              puVar13 = (undefined8 *)FUN_03cf1348(plVar11,*(long *)PTR_DAT_08e86568,4);
LAB_087a42f4:
              UNRECOVERED_JUMPTABLE = (code *)*puVar13;
              iVar16 = 0x30009;
              goto LAB_087a4300;
            }
          }
          break;
        default:
          goto switchD_0879f4d4_default;
        }
      }
    }
    goto LAB_087a4348;
  }
  switch(unaff_w25) {
  case 0x70000:
    if (unaff_x22 == 0) goto LAB_087a4348;
    plVar11 = (long *)FUN_087c0130();
    puVar3 = System_Action<IUpdateReceiver>_TypeInfo;
    puVar9 = (undefined4 *)
             FUN_05ab5fc4(unaff_x24 + 0x28,*(undefined8 *)System_Action<IUpdateReceiver>_TypeInfo);
    uVar25 = *puVar9;
    uVar26 = puVar9[1];
    uVar27 = puVar9[2];
    uVar28 = puVar9[3];
    puVar9 = (undefined4 *)FUN_05ab5fc4(unaff_x23 + 0x28,*(undefined8 *)puVar3);
    if (plVar11 == (long *)0x0) goto LAB_087a4348;
    uVar30 = puVar9[2];
    uVar29 = puVar9[3];
    lVar12 = *plVar11;
    uVar32 = *puVar9;
    uVar31 = puVar9[1];
    uVar17 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar17 != 0) {
      piVar19 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_08e86568) {
          puVar13 = (undefined8 *)(lVar12 + (long)(*piVar19 + 3) * 0x10 + 0x138);
          goto LAB_087a35ec;
        }
        uVar17 = uVar17 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar17 != 0);
    }
    puVar13 = (undefined8 *)FUN_03cf1348(plVar11,*(long *)PTR_DAT_08e86568,3);
LAB_087a35ec:
    UNRECOVERED_JUMPTABLE = (code *)*puVar13;
    iVar16 = 0x70000;
    break;
  case 0x70001:
    if (unaff_x22 == 0) goto LAB_087a4348;
    plVar11 = (long *)FUN_087c0130();
    puVar3 = System_Action<IUpdateReceiver>_TypeInfo;
    FUN_05ab5fc4(unaff_x24 + 0x28,*(undefined8 *)System_Action<IUpdateReceiver>_TypeInfo);
    FUN_05ab5fc4(unaff_x23 + 0x28,*(undefined8 *)puVar3);
    if (plVar11 == (long *)0x0) goto LAB_087a4348;
    lVar12 = *plVar11;
    uVar17 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar17 != 0) {
      piVar19 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_08e86568) {
          puVar13 = (undefined8 *)(lVar12 + (long)(*piVar19 + 5) * 0x10 + 0x138);
          goto LAB_087a3608;
        }
        uVar17 = uVar17 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar17 != 0);
    }
    puVar13 = (undefined8 *)FUN_03cf1348(plVar11,*(long *)PTR_DAT_08e86568,5);
LAB_087a3608:
    UNRECOVERED_JUMPTABLE = (code *)*puVar13;
    uVar23 = 0x70001;
    goto LAB_087a3efc;
  case 0x70002:
    if (unaff_x22 == 0) goto LAB_087a4348;
    plVar11 = (long *)FUN_087c0130();
    puVar3 = System_Action<IUpdateReceiver>_TypeInfo;
    lVar12 = FUN_05ab5fc4(unaff_x24 + 0x28,*(undefined8 *)System_Action<IUpdateReceiver>_TypeInfo);
    uVar23 = *(undefined8 *)(lVar12 + 0x30);
    uVar8 = *(uint *)(lVar12 + 0x38);
    lVar12 = FUN_05ab5fc4(unaff_x23 + 0x28,*(undefined8 *)puVar3);
    if (plVar11 == (long *)0x0) goto LAB_087a4348;
    lVar15 = *plVar11;
    uVar6 = *(uint *)(lVar12 + 0x38);
    uVar21 = *(undefined8 *)(lVar12 + 0x30);
    uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar17 != 0) {
      piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_08e86568) {
          puVar13 = (undefined8 *)(lVar15 + (long)(*piVar19 + 0xd) * 0x10 + 0x138);
          goto LAB_087a3640;
        }
        uVar17 = uVar17 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar17 != 0);
    }
    puVar13 = (undefined8 *)FUN_03cf1348(plVar11,*(long *)PTR_DAT_08e86568,0xd);
LAB_087a3640:
    UNRECOVERED_JUMPTABLE = (code *)*puVar13;
    uVar25 = 0x70002;
    goto LAB_087a3670;
  case 0x70003:
    if (unaff_x22 == 0) goto LAB_087a4348;
    plVar11 = (long *)FUN_087c0130();
    puVar3 = System_Action<IUpdateReceiver>_TypeInfo;
    lVar12 = FUN_05ab5fc4(unaff_x24 + 0x28,*(undefined8 *)System_Action<IUpdateReceiver>_TypeInfo);
    uVar23 = *(undefined8 *)(lVar12 + 0x3c);
    uVar8 = *(uint *)(lVar12 + 0x44);
    lVar12 = FUN_05ab5fc4(unaff_x23 + 0x28,*(undefined8 *)puVar3);
    if (plVar11 == (long *)0x0) goto LAB_087a4348;
    lVar15 = *plVar11;
    uVar6 = *(uint *)(lVar12 + 0x44);
    uVar21 = *(undefined8 *)(lVar12 + 0x3c);
    uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar17 != 0) {
      piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_08e86568) {
          puVar13 = (undefined8 *)(lVar15 + (long)(*piVar19 + 0xd) * 0x10 + 0x138);
          goto LAB_087a3660;
        }
        uVar17 = uVar17 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar17 != 0);
    }
    puVar13 = (undefined8 *)FUN_03cf1348(plVar11,*(long *)PTR_DAT_08e86568,0xd);
LAB_087a3660:
    UNRECOVERED_JUMPTABLE = (code *)*puVar13;
    uVar25 = 0x70003;
LAB_087a3670:
    uVar17 = (ulong)uVar8;
    uVar20 = (ulong)uVar6;
LAB_087a3f70:
    uVar8 = (*UNRECOVERED_JUMPTABLE)
                      (plVar11,uVar25,uVar23,uVar17,uVar21,uVar20,in_stack_00000028._4_4_,unaff_w20)
    ;
    goto switchD_0879f3b0_caseD_40008;
  case 0x70004:
    if (unaff_x22 == 0) goto LAB_087a4348;
    plVar11 = (long *)FUN_087c0130();
    puVar3 = System_Action<IUpdateReceiver>_TypeInfo;
    lVar12 = FUN_05ab5fc4(unaff_x24 + 0x28,*(undefined8 *)System_Action<IUpdateReceiver>_TypeInfo);
    uVar23 = *(undefined8 *)(lVar12 + 0x48);
    lVar12 = FUN_05ab5fc4(unaff_x23 + 0x28,*(undefined8 *)puVar3);
    if (plVar11 == (long *)0x0) goto LAB_087a4348;
    lVar15 = *plVar11;
    uVar21 = *(undefined8 *)(lVar12 + 0x48);
    uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar17 != 0) {
      piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_08e86568) {
          puVar13 = (undefined8 *)(lVar15 + (long)(*piVar19 + 0xe) * 0x10 + 0x138);
          goto LAB_087a3698;
        }
        uVar17 = uVar17 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar17 != 0);
    }
    puVar13 = (undefined8 *)FUN_03cf1348(plVar11,*(long *)PTR_DAT_08e86568,0xe);
LAB_087a3698:
    UNRECOVERED_JUMPTABLE = (code *)*puVar13;
    uVar8 = 0x70004;
    goto LAB_087a40f8;
  case 0x70005:
    if (unaff_x22 == 0) goto LAB_087a4348;
    plVar11 = (long *)FUN_087c0130();
    puVar3 = System_Action<IUpdateReceiver>_TypeInfo;
    FUN_05ab5fc4(unaff_x24 + 0x28,*(undefined8 *)System_Action<IUpdateReceiver>_TypeInfo);
    FUN_05ab5fc4(unaff_x23 + 0x28,*(undefined8 *)puVar3);
    if (plVar11 == (long *)0x0) goto LAB_087a4348;
    lVar12 = *plVar11;
    uVar17 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar17 != 0) {
      piVar19 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_08e86568) {
          puVar13 = (undefined8 *)(lVar12 + (long)(*piVar19 + 0xf) * 0x10 + 0x138);
          goto LAB_087a36bc;
        }
        uVar17 = uVar17 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar17 != 0);
    }
    puVar13 = (undefined8 *)FUN_03cf1348(plVar11,*(long *)PTR_DAT_08e86568,0xf);
LAB_087a36bc:
    UNRECOVERED_JUMPTABLE = (code *)*puVar13;
    uVar23 = 0x70005;
LAB_087a3efc:
    uVar8 = (*UNRECOVERED_JUMPTABLE)
                      (plVar11,uVar23,&stack0x00000250,&stack0x00000230,in_stack_00000028._4_4_,
                       unaff_w20);
    goto switchD_0879f3b0_caseD_40008;
  case 0x70006:
    if (unaff_x22 == 0) goto LAB_087a4348;
    plVar11 = (long *)FUN_087c0130();
    puVar3 = System_Action<IUpdateReceiver>_TypeInfo;
    lVar12 = FUN_05ab5fc4(unaff_x24 + 0x28,*(undefined8 *)System_Action<IUpdateReceiver>_TypeInfo);
    uVar25 = *(undefined4 *)(lVar12 + 100);
    uVar26 = *(undefined4 *)(lVar12 + 0x68);
    uVar27 = *(undefined4 *)(lVar12 + 0x6c);
    uVar28 = *(undefined4 *)(lVar12 + 0x70);
    lVar12 = FUN_05ab5fc4(unaff_x23 + 0x28,*(undefined8 *)puVar3);
    if (plVar11 == (long *)0x0) goto LAB_087a4348;
    uVar30 = *(undefined4 *)(lVar12 + 0x6c);
    uVar29 = *(undefined4 *)(lVar12 + 0x70);
    lVar15 = *plVar11;
    uVar32 = *(undefined4 *)(lVar12 + 100);
    uVar31 = *(undefined4 *)(lVar12 + 0x68);
    uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar17 != 0) {
      piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_08e86568) {
          puVar13 = (undefined8 *)(lVar15 + (long)(*piVar19 + 3) * 0x10 + 0x138);
          goto LAB_087a3704;
        }
        uVar17 = uVar17 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar17 != 0);
    }
    puVar13 = (undefined8 *)FUN_03cf1348(plVar11,*(long *)PTR_DAT_08e86568,3);
LAB_087a3704:
    UNRECOVERED_JUMPTABLE = (code *)*puVar13;
    iVar16 = 0x70006;
    break;
  case 0x70007:
    if (unaff_x22 == 0) goto LAB_087a4348;
    plVar11 = (long *)FUN_087c0130();
    puVar3 = System_Action<IUpdateReceiver>_TypeInfo;
    lVar12 = FUN_05ab5fc4(unaff_x24 + 0x28,*(undefined8 *)System_Action<IUpdateReceiver>_TypeInfo);
    uVar23 = *(undefined8 *)(lVar12 + 0x74);
    lVar12 = FUN_05ab5fc4(unaff_x23 + 0x28,*(undefined8 *)puVar3);
    if (plVar11 == (long *)0x0) goto LAB_087a4348;
    lVar15 = *plVar11;
    uVar21 = *(undefined8 *)(lVar12 + 0x74);
    uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar17 != 0) {
      piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_08e86568) {
          puVar13 = (undefined8 *)(lVar15 + (long)(*piVar19 + 2) * 0x10 + 0x138);
          goto LAB_087a3728;
        }
        uVar17 = uVar17 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar17 != 0);
    }
    puVar13 = (undefined8 *)FUN_03cf1348(plVar11,*(long *)PTR_DAT_08e86568,2);
LAB_087a3728:
    UNRECOVERED_JUMPTABLE = (code *)*puVar13;
    uVar6 = 5;
    uVar8 = 0x70002;
LAB_087a3d24:
    uVar8 = uVar8 | uVar6;
    goto LAB_087a40f8;
  case 0x70008:
    if (unaff_x22 == 0) goto LAB_087a4348;
    plVar11 = (long *)FUN_087c0130();
    puVar3 = System_Action<IUpdateReceiver>_TypeInfo;
    lVar12 = FUN_05ab5fc4(unaff_x24 + 0x28,*(undefined8 *)System_Action<IUpdateReceiver>_TypeInfo);
    uVar23 = *(undefined8 *)(lVar12 + 0x7c);
    lVar12 = FUN_05ab5fc4(unaff_x23 + 0x28,*(undefined8 *)puVar3);
    if (plVar11 == (long *)0x0) goto LAB_087a4348;
    lVar15 = *plVar11;
    uVar21 = *(undefined8 *)(lVar12 + 0x7c);
    uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar17 != 0) {
      piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_08e86568) {
          puVar13 = (undefined8 *)(lVar15 + (long)(*piVar19 + 2) * 0x10 + 0x138);
          goto LAB_087a374c;
        }
        uVar17 = uVar17 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar17 != 0);
    }
    puVar13 = (undefined8 *)FUN_03cf1348(plVar11,*(long *)PTR_DAT_08e86568,2);
LAB_087a374c:
    UNRECOVERED_JUMPTABLE = (code *)*puVar13;
    iVar16 = 0x70002;
LAB_087a3b30:
    uVar8 = iVar16 + 6;
    goto LAB_087a40f8;
  case 0x70009:
    if (unaff_x22 == 0) goto LAB_087a4348;
    plVar11 = (long *)FUN_087c0130();
    puVar3 = System_Action<IUpdateReceiver>_TypeInfo;
    lVar12 = FUN_05ab5fc4(unaff_x24 + 0x28,*(undefined8 *)System_Action<IUpdateReceiver>_TypeInfo);
    uVar25 = *(undefined4 *)(lVar12 + 0x84);
    uVar26 = *(undefined4 *)(lVar12 + 0x88);
    uVar27 = *(undefined4 *)(lVar12 + 0x8c);
    uVar28 = *(undefined4 *)(lVar12 + 0x90);
    lVar12 = FUN_05ab5fc4(unaff_x23 + 0x28,*(undefined8 *)puVar3);
    if (plVar11 == (long *)0x0) goto LAB_087a4348;
    uVar30 = *(undefined4 *)(lVar12 + 0x8c);
    uVar29 = *(undefined4 *)(lVar12 + 0x90);
    lVar15 = *plVar11;
    uVar32 = *(undefined4 *)(lVar12 + 0x84);
    uVar31 = *(undefined4 *)(lVar12 + 0x88);
    uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar17 != 0) {
      piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_08e86568) {
          puVar13 = (undefined8 *)(lVar15 + (long)(*piVar19 + 3) * 0x10 + 0x138);
          goto LAB_087a376c;
        }
        uVar17 = uVar17 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar17 != 0);
    }
    puVar13 = (undefined8 *)FUN_03cf1348(plVar11,*(long *)PTR_DAT_08e86568,3);
LAB_087a376c:
    UNRECOVERED_JUMPTABLE = (code *)*puVar13;
    iVar16 = 0x70009;
    break;
  case 0x7000a:
    if (unaff_x22 == 0) goto LAB_087a4348;
    plVar11 = (long *)FUN_087c0130();
    puVar3 = System_Action<IUpdateReceiver>_TypeInfo;
    lVar12 = FUN_05ab5fc4(unaff_x24 + 0x28,*(undefined8 *)System_Action<IUpdateReceiver>_TypeInfo);
    uVar25 = *(undefined4 *)(lVar12 + 0x94);
    uVar26 = *(undefined4 *)(lVar12 + 0x98);
    uVar27 = *(undefined4 *)(lVar12 + 0x9c);
    uVar28 = *(undefined4 *)(lVar12 + 0xa0);
    lVar12 = FUN_05ab5fc4(unaff_x23 + 0x28,*(undefined8 *)puVar3);
    if (plVar11 == (long *)0x0) goto LAB_087a4348;
    uVar30 = *(undefined4 *)(lVar12 + 0x9c);
    uVar29 = *(undefined4 *)(lVar12 + 0xa0);
    lVar15 = *plVar11;
    uVar32 = *(undefined4 *)(lVar12 + 0x94);
    uVar31 = *(undefined4 *)(lVar12 + 0x98);
    uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar17 != 0) {
      piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_08e86568) {
          puVar13 = (undefined8 *)(lVar15 + (long)(*piVar19 + 3) * 0x10 + 0x138);
          goto LAB_087a3790;
        }
        uVar17 = uVar17 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar17 != 0);
    }
    puVar13 = (undefined8 *)FUN_03cf1348(plVar11,*(long *)PTR_DAT_08e86568,3);
LAB_087a3790:
    UNRECOVERED_JUMPTABLE = (code *)*puVar13;
    iVar16 = 0x7000a;
    break;
  case 0x7000b:
    if (unaff_x22 == 0) goto LAB_087a4348;
    plVar11 = (long *)FUN_087c0130();
    puVar3 = System_Action<IUpdateReceiver>_TypeInfo;
    lVar12 = FUN_05ab5fc4(unaff_x24 + 0x28,*(undefined8 *)System_Action<IUpdateReceiver>_TypeInfo);
    uVar25 = *(undefined4 *)(lVar12 + 0xa4);
    uVar26 = *(undefined4 *)(lVar12 + 0xa8);
    uVar27 = *(undefined4 *)(lVar12 + 0xac);
    uVar28 = *(undefined4 *)(lVar12 + 0xb0);
    lVar12 = FUN_05ab5fc4(unaff_x23 + 0x28,*(undefined8 *)puVar3);
    if (plVar11 == (long *)0x0) goto LAB_087a4348;
    uVar30 = *(undefined4 *)(lVar12 + 0xac);
    uVar29 = *(undefined4 *)(lVar12 + 0xb0);
    lVar15 = *plVar11;
    uVar32 = *(undefined4 *)(lVar12 + 0xa4);
    uVar31 = *(undefined4 *)(lVar12 + 0xa8);
    uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar17 != 0) {
      piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_08e86568) {
          puVar13 = (undefined8 *)(lVar15 + (long)(*piVar19 + 3) * 0x10 + 0x138);
          goto LAB_087a37b4;
        }
        uVar17 = uVar17 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar17 != 0);
    }
    puVar13 = (undefined8 *)FUN_03cf1348(plVar11,*(long *)PTR_DAT_08e86568,3);
LAB_087a37b4:
    UNRECOVERED_JUMPTABLE = (code *)*puVar13;
    iVar16 = 0x7000b;
    break;
  case 0x7000c:
    if (unaff_x22 != 0) {
      plVar11 = (long *)FUN_087c0130();
      puVar3 = System_Action<IUpdateReceiver>_TypeInfo;
      lVar12 = FUN_05ab5fc4(unaff_x24 + 0x28,*(undefined8 *)System_Action<IUpdateReceiver>_TypeInfo)
      ;
      uVar23 = *(undefined8 *)(lVar12 + 0xb4);
      lVar12 = FUN_05ab5fc4(unaff_x23 + 0x28,*(undefined8 *)puVar3);
      if (plVar11 != (long *)0x0) {
        lVar15 = *plVar11;
        uVar21 = *(undefined8 *)(lVar12 + 0xb4);
        uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar17 != 0) {
          piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_08e86568) {
              puVar13 = (undefined8 *)(lVar15 + (long)(*piVar19 + 2) * 0x10 + 0x138);
              goto LAB_087a37dc;
            }
            uVar17 = uVar17 - 1;
            piVar19 = piVar19 + 4;
          } while (uVar17 != 0);
        }
        puVar13 = (undefined8 *)FUN_03cf1348(plVar11,*(long *)PTR_DAT_08e86568,2);
LAB_087a37dc:
        UNRECOVERED_JUMPTABLE = (code *)*puVar13;
        uVar8 = 0x7000c;
        goto LAB_087a40f8;
      }
    }
    goto LAB_087a4348;
  case 0x7000d:
    if (unaff_x22 == 0) goto LAB_087a4348;
    plVar11 = (long *)FUN_087c0130();
    puVar3 = System_Action<IUpdateReceiver>_TypeInfo;
    lVar12 = FUN_05ab5fc4(unaff_x24 + 0x28,*(undefined8 *)System_Action<IUpdateReceiver>_TypeInfo);
    uVar23 = *(undefined8 *)(lVar12 + 0xbc);
    lVar12 = FUN_05ab5fc4(unaff_x23 + 0x28,*(undefined8 *)puVar3);
    if (plVar11 == (long *)0x0) goto LAB_087a4348;
    lVar15 = *plVar11;
    uVar21 = *(undefined8 *)(lVar12 + 0xbc);
    uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar17 != 0) {
      piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_08e86568) {
          puVar13 = (undefined8 *)(lVar15 + (long)(*piVar19 + 2) * 0x10 + 0x138);
          goto LAB_087a3800;
        }
        uVar17 = uVar17 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar17 != 0);
    }
    puVar13 = (undefined8 *)FUN_03cf1348(plVar11,*(long *)PTR_DAT_08e86568,2);
LAB_087a3800:
    UNRECOVERED_JUMPTABLE = (code *)*puVar13;
    iVar16 = 0x70002;
LAB_087a3bdc:
    uVar8 = iVar16 + 0xb;
    goto LAB_087a40f8;
  case 0x7000e:
    if (unaff_x22 != 0) {
      plVar11 = (long *)FUN_087c0130();
      puVar3 = System_Action<IUpdateReceiver>_TypeInfo;
      lVar12 = FUN_05ab5fc4(unaff_x24 + 0x28,*(undefined8 *)System_Action<IUpdateReceiver>_TypeInfo)
      ;
      uVar25 = *(undefined4 *)(lVar12 + 0xc4);
      lVar12 = FUN_05ab5fc4(unaff_x23 + 0x28,*(undefined8 *)puVar3);
      if (plVar11 != (long *)0x0) {
        lVar15 = *plVar11;
        uVar26 = *(undefined4 *)(lVar12 + 0xc4);
        uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar17 != 0) {
          piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_08e86568) {
              puVar13 = (undefined8 *)(lVar15 + (long)*piVar19 * 0x10 + 0x138);
              goto LAB_087a381c;
            }
            uVar17 = uVar17 - 1;
            piVar19 = piVar19 + 4;
          } while (uVar17 != 0);
        }
        puVar13 = (undefined8 *)FUN_03cf1348(plVar11,*(long *)PTR_DAT_08e86568,0);
LAB_087a381c:
        UNRECOVERED_JUMPTABLE = (code *)*puVar13;
        iVar16 = 0x7000e;
        goto LAB_087a4280;
      }
    }
    goto LAB_087a4348;
  case 0x7000f:
    if (unaff_x22 != 0) {
      plVar11 = (long *)FUN_087c0130();
      puVar3 = System_Action<IUpdateReceiver>_TypeInfo;
      lVar12 = FUN_05ab5fc4(unaff_x24 + 0x28,*(undefined8 *)System_Action<IUpdateReceiver>_TypeInfo)
      ;
      uVar25 = *(undefined4 *)(lVar12 + 200);
      lVar12 = FUN_05ab5fc4(unaff_x23 + 0x28,*(undefined8 *)puVar3);
      if (plVar11 != (long *)0x0) {
        lVar15 = *plVar11;
        uVar26 = *(undefined4 *)(lVar12 + 200);
        uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar17 != 0) {
          piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_08e86568) {
              puVar13 = (undefined8 *)(lVar15 + (long)(*piVar19 + 4) * 0x10 + 0x138);
              goto LAB_087a3840;
            }
            uVar17 = uVar17 - 1;
            piVar19 = piVar19 + 4;
          } while (uVar17 != 0);
        }
        puVar13 = (undefined8 *)FUN_03cf1348(plVar11,*(long *)PTR_DAT_08e86568,4);
LAB_087a3840:
        UNRECOVERED_JUMPTABLE = (code *)*puVar13;
        iVar16 = 0x7000f;
        goto LAB_087a4300;
      }
    }
LAB_087a4348:
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  default:
    uVar8 = 0;
    switch(unaff_w25) {
    case 0x40000:
      uVar17 = FUN_087a434c();
      return uVar17;
    case 0x40001:
      if (unaff_x22 == 0) goto LAB_087a4348;
      plVar11 = (long *)FUN_087c0130();
      puVar4 = System_Action<IUpdateReceiver>_TypeInfo;
      lVar12 = FUN_05ab5fc4(unaff_x24 + 0x28,*(undefined8 *)System_Action<IUpdateReceiver>_TypeInfo)
      ;
      uVar23 = *(undefined8 *)(lVar12 + 0x30);
      uVar25 = *(undefined4 *)(lVar12 + 0x38);
      lVar12 = FUN_05ab5fc4(unaff_x23 + 0x28,*(undefined8 *)puVar4);
      puVar3 = PTR_DAT_08e86568;
      if (plVar11 == (long *)0x0) goto LAB_087a4348;
      lVar15 = *plVar11;
      uVar26 = *(undefined4 *)(lVar12 + 0x38);
      uVar21 = *(undefined8 *)(lVar12 + 0x30);
      uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar17 != 0) {
        piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_08e86568) {
            puVar13 = (undefined8 *)(lVar15 + (long)(*piVar19 + 0xd) * 0x10 + 0x138);
            goto LAB_087a2284;
          }
          uVar17 = uVar17 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar17 != 0);
      }
      puVar13 = (undefined8 *)FUN_03cf1348(plVar11,*(long *)PTR_DAT_08e86568,0xd);
LAB_087a2284:
      uVar8 = (*(code *)*puVar13)(plVar11,0x70002,uVar23,uVar25,uVar21,uVar26,
                                  in_stack_00000028._4_4_,unaff_w20);
      plVar11 = (long *)FUN_087c0130();
      lVar12 = FUN_05ab5fc4(unaff_x24 + 0x28,*(undefined8 *)puVar4);
      uVar23 = *(undefined8 *)(lVar12 + 0x3c);
      uVar25 = *(undefined4 *)(lVar12 + 0x44);
      lVar12 = FUN_05ab5fc4(unaff_x23 + 0x28,*(undefined8 *)puVar4);
      if (plVar11 == (long *)0x0) goto LAB_087a4348;
      lVar15 = *plVar11;
      uVar26 = *(undefined4 *)(lVar12 + 0x44);
      uVar21 = *(undefined8 *)(lVar12 + 0x3c);
      uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar17 != 0) {
        piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == *(long *)puVar3) {
            puVar13 = (undefined8 *)(lVar15 + (long)(*piVar19 + 0xd) * 0x10 + 0x138);
            goto LAB_087a295c;
          }
          uVar17 = uVar17 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar17 != 0);
      }
      puVar13 = (undefined8 *)FUN_03cf1348(plVar11,*(long *)puVar3,0xd);
LAB_087a295c:
      uVar6 = (*(code *)*puVar13)(plVar11,0x70003,uVar23,uVar25,uVar21,uVar26,
                                  in_stack_00000028._4_4_,unaff_w20);
      goto LAB_087a2f0c;
    case 0x40002:
      if (unaff_x22 == 0) goto LAB_087a4348;
      plVar11 = (long *)FUN_087c0130();
      puVar4 = System_Action<IUpdateReceiver>_TypeInfo;
      lVar12 = unaff_x24 + 0x28;
      lVar15 = FUN_05ab5fc4(lVar12,*(undefined8 *)System_Action<IUpdateReceiver>_TypeInfo);
      uVar25 = *(undefined4 *)(lVar15 + 0xa4);
      uVar26 = *(undefined4 *)(lVar15 + 0xa8);
      uVar27 = *(undefined4 *)(lVar15 + 0xac);
      uVar28 = *(undefined4 *)(lVar15 + 0xb0);
      lVar15 = unaff_x23 + 0x28;
      lVar10 = FUN_05ab5fc4(lVar15,*(undefined8 *)puVar4);
      puVar3 = PTR_DAT_08e86568;
      if (plVar11 == (long *)0x0) goto LAB_087a4348;
      uVar30 = *(undefined4 *)(lVar10 + 0xac);
      uVar29 = *(undefined4 *)(lVar10 + 0xb0);
      lVar14 = *plVar11;
      uVar32 = *(undefined4 *)(lVar10 + 0xa4);
      uVar31 = *(undefined4 *)(lVar10 + 0xa8);
      uVar17 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar17 != 0) {
        piVar19 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_08e86568) {
            puVar13 = (undefined8 *)(lVar14 + (long)(*piVar19 + 3) * 0x10 + 0x138);
            goto LAB_087a2344;
          }
          uVar17 = uVar17 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar17 != 0);
      }
      puVar13 = (undefined8 *)FUN_03cf1348(plVar11,*(long *)PTR_DAT_08e86568,3);
LAB_087a2344:
      uVar8 = (*(code *)*puVar13)(uVar25,uVar26,uVar27,uVar28,uVar32,uVar31,uVar30,uVar29,plVar11,
                                  0x7000b,in_stack_00000028._4_4_,unaff_w20,unaff_x29,puVar13[1]);
      plVar11 = (long *)FUN_087c0130();
      lVar10 = FUN_05ab5fc4(lVar12,*(undefined8 *)puVar4);
      uVar25 = *(undefined4 *)(lVar10 + 0x94);
      uVar26 = *(undefined4 *)(lVar10 + 0x98);
      uVar27 = *(undefined4 *)(lVar10 + 0x9c);
      uVar28 = *(undefined4 *)(lVar10 + 0xa0);
      lVar10 = FUN_05ab5fc4(lVar15,*(undefined8 *)puVar4);
      if (plVar11 == (long *)0x0) goto LAB_087a4348;
      lVar14 = *plVar11;
      uVar30 = *(undefined4 *)(lVar10 + 0x9c);
      uVar29 = *(undefined4 *)(lVar10 + 0xa0);
      uVar32 = *(undefined4 *)(lVar10 + 0x94);
      uVar31 = *(undefined4 *)(lVar10 + 0x98);
      uVar17 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar17 != 0) {
        piVar19 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == *(long *)puVar3) {
            puVar13 = (undefined8 *)(lVar14 + (long)(*piVar19 + 3) * 0x10 + 0x138);
            goto LAB_087a29a4;
          }
          uVar17 = uVar17 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar17 != 0);
      }
      puVar13 = (undefined8 *)FUN_03cf1348(plVar11,*(long *)puVar3,3);
LAB_087a29a4:
      uVar6 = (*(code *)*puVar13)(uVar25,uVar26,uVar27,uVar28,uVar32,uVar31,uVar30,uVar29,plVar11,
                                  0x7000a,in_stack_00000028._4_4_,unaff_w20,unaff_x29,puVar13[1]);
      plVar11 = (long *)FUN_087c0130();
      lVar10 = FUN_05ab5fc4(lVar12,*(undefined8 *)puVar4);
      uVar25 = *(undefined4 *)(lVar10 + 100);
      uVar26 = *(undefined4 *)(lVar10 + 0x68);
      uVar27 = *(undefined4 *)(lVar10 + 0x6c);
      uVar28 = *(undefined4 *)(lVar10 + 0x70);
      lVar10 = FUN_05ab5fc4(lVar15,*(undefined8 *)puVar4);
      if (plVar11 == (long *)0x0) goto LAB_087a4348;
      lVar14 = *plVar11;
      uVar30 = *(undefined4 *)(lVar10 + 0x6c);
      uVar29 = *(undefined4 *)(lVar10 + 0x70);
      uVar32 = *(undefined4 *)(lVar10 + 100);
      uVar31 = *(undefined4 *)(lVar10 + 0x68);
      uVar17 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar17 != 0) {
        piVar19 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == *(long *)puVar3) {
            puVar13 = (undefined8 *)(lVar14 + (long)(*piVar19 + 3) * 0x10 + 0x138);
            goto WebSocketSharp_Net_CookieCollection__get_Count;
          }
          uVar17 = uVar17 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar17 != 0);
      }
      puVar13 = (undefined8 *)FUN_03cf1348(plVar11,*(long *)puVar3,3);
WebSocketSharp_Net_CookieCollection__get_Count:
      uVar5 = (*(code *)*puVar13)(uVar25,uVar26,uVar27,uVar28,uVar32,uVar31,uVar30,uVar29,plVar11,
                                  0x70006,in_stack_00000028._4_4_,unaff_w20,unaff_x29,puVar13[1]);
      plVar11 = (long *)FUN_087c0130();
      lVar12 = FUN_05ab5fc4(lVar12,*(undefined8 *)puVar4);
      uVar25 = *(undefined4 *)(lVar12 + 0x84);
      uVar26 = *(undefined4 *)(lVar12 + 0x88);
      uVar27 = *(undefined4 *)(lVar12 + 0x8c);
      uVar28 = *(undefined4 *)(lVar12 + 0x90);
      lVar12 = FUN_05ab5fc4(lVar15,*(undefined8 *)puVar4);
      if (plVar11 == (long *)0x0) goto LAB_087a4348;
      lVar15 = *plVar11;
      uVar30 = *(undefined4 *)(lVar12 + 0x8c);
      uVar29 = *(undefined4 *)(lVar12 + 0x90);
      uVar32 = *(undefined4 *)(lVar12 + 0x84);
      uVar31 = *(undefined4 *)(lVar12 + 0x88);
      uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar17 != 0) {
        piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == *(long *)puVar3) {
            puVar13 = (undefined8 *)(lVar15 + (long)(*piVar19 + 3) * 0x10 + 0x138);
            goto LAB_087a3454;
          }
          uVar17 = uVar17 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar17 != 0);
      }
      puVar13 = (undefined8 *)FUN_03cf1348(plVar11,*(long *)puVar3,3);
LAB_087a3454:
      uVar7 = (*(code *)*puVar13)(uVar25,uVar26,uVar27,uVar28,uVar32,uVar31,uVar30,uVar29,plVar11,
                                  0x70009,in_stack_00000028._4_4_,unaff_w20,unaff_x29,puVar13[1]);
      if (((uVar8 | uVar6 | uVar5 | uVar7) & 1) == 0) goto switchD_0879f4d4_default;
      goto LAB_087a4190;
    case 0x40003:
      if (unaff_x22 == 0) goto LAB_087a4348;
      plVar11 = (long *)FUN_087c0130();
      puVar3 = System_Action<IUpdateReceiver>_TypeInfo;
      lVar12 = unaff_x24 + 0x28;
      lVar15 = FUN_05ab5fc4(lVar12,*(undefined8 *)System_Action<IUpdateReceiver>_TypeInfo);
      uVar23 = *(undefined8 *)(lVar15 + 0xb4);
      lVar15 = unaff_x23 + 0x28;
      lVar10 = FUN_05ab5fc4(lVar15,*(undefined8 *)puVar3);
      if (plVar11 == (long *)0x0) goto LAB_087a4348;
      lVar14 = *plVar11;
      uVar21 = *(undefined8 *)(lVar10 + 0xb4);
      uVar17 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar17 != 0) {
        piVar19 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_08e86568) {
            puVar13 = (undefined8 *)(lVar14 + (long)(*piVar19 + 2) * 0x10 + 0x138);
            goto LAB_087a241c;
          }
          uVar17 = uVar17 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar17 != 0);
      }
      puVar13 = (undefined8 *)FUN_03cf1348(plVar11,*(long *)PTR_DAT_08e86568,2);
LAB_087a241c:
      uVar6 = (*(code *)*puVar13)(plVar11,0x7000c,uVar23,uVar21,in_stack_00000028._4_4_,unaff_w20);
      plVar11 = (long *)FUN_087c0130();
      lVar10 = FUN_05ab5fc4(lVar12,*(undefined8 *)puVar3);
      uVar23 = *(undefined8 *)(lVar10 + 0xbc);
      lVar10 = FUN_05ab5fc4(lVar15,*(undefined8 *)puVar3);
      if (plVar11 == (long *)0x0) goto LAB_087a4348;
      lVar14 = *plVar11;
      uVar21 = *(undefined8 *)(lVar10 + 0xbc);
      uVar17 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar17 != 0) {
        piVar19 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_08e86568) {
            puVar13 = (undefined8 *)(lVar14 + (long)(*piVar19 + 2) * 0x10 + 0x138);
            goto LAB_087a2a74;
          }
          uVar17 = uVar17 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar17 != 0);
      }
      puVar13 = (undefined8 *)FUN_03cf1348(plVar11,*(long *)PTR_DAT_08e86568,2);
LAB_087a2a74:
      uVar5 = (*(code *)*puVar13)(plVar11,0x7000d,uVar23,uVar21,in_stack_00000028._4_4_,unaff_w20);
      plVar11 = (long *)FUN_087c0130();
      lVar10 = FUN_05ab5fc4(lVar12,*(undefined8 *)puVar3);
      uVar23 = *(undefined8 *)(lVar10 + 0x7c);
      lVar10 = FUN_05ab5fc4(lVar15,*(undefined8 *)puVar3);
      if (plVar11 == (long *)0x0) goto LAB_087a4348;
      lVar14 = *plVar11;
      uVar21 = *(undefined8 *)(lVar10 + 0x7c);
      uVar17 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar17 != 0) {
        piVar19 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_08e86568) {
            puVar13 = (undefined8 *)(lVar14 + (long)(*piVar19 + 2) * 0x10 + 0x138);
            goto LAB_087a3008;
          }
          uVar17 = uVar17 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar17 != 0);
      }
      puVar13 = (undefined8 *)FUN_03cf1348(plVar11,*(long *)PTR_DAT_08e86568,2);
LAB_087a3008:
      uVar8 = (*(code *)*puVar13)(plVar11,0x70008,uVar23,uVar21,in_stack_00000028._4_4_,unaff_w20);
      plVar11 = (long *)FUN_087c0130();
      lVar12 = FUN_05ab5fc4(lVar12,*(undefined8 *)puVar3);
      puVar24 = *(undefined1 **)(lVar12 + 0x74);
      lVar12 = FUN_05ab5fc4(lVar15,*(undefined8 *)puVar3);
      if (plVar11 == (long *)0x0) goto LAB_087a4348;
      lVar15 = *plVar11;
      puVar22 = *(undefined1 **)(lVar12 + 0x74);
      uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
      uVar8 = uVar6 | uVar5 | uVar8;
      if (uVar17 != 0) {
        piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_08e86568) {
            puVar13 = (undefined8 *)(lVar15 + (long)(*piVar19 + 2) * 0x10 + 0x138);
            goto LAB_087a34b4;
          }
          uVar17 = uVar17 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar17 != 0);
      }
      puVar13 = (undefined8 *)FUN_03cf1348(plVar11,*(long *)PTR_DAT_08e86568,2);
LAB_087a34b4:
      UNRECOVERED_JUMPTABLE = (code *)*puVar13;
      uVar25 = 0x70007;
      break;
    case 0x40004:
      if (unaff_x22 == 0) goto LAB_087a4348;
      plVar11 = (long *)FUN_087c0130();
      puVar4 = System_Action<ITTSEvent>_TypeInfo;
      lVar12 = unaff_x24 + 8;
      lVar15 = FUN_05ab4ccc(lVar12,*(undefined8 *)System_Action<ITTSEvent>_TypeInfo);
      uVar25 = *(undefined4 *)(lVar15 + 0x18);
      lVar15 = unaff_x23 + 8;
      lVar10 = FUN_05ab4ccc(lVar15,*(undefined8 *)puVar4);
      puVar3 = PTR_DAT_08e86568;
      if (plVar11 == (long *)0x0) goto LAB_087a4348;
      lVar14 = *plVar11;
      uVar26 = *(undefined4 *)(lVar10 + 0x18);
      uVar17 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar17 != 0) {
        piVar19 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_08e86568) {
            puVar13 = (undefined8 *)(lVar14 + (long)*piVar19 * 0x10 + 0x138);
            goto LAB_087a24d8;
          }
          uVar17 = uVar17 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar17 != 0);
      }
      puVar13 = (undefined8 *)FUN_03cf1348(plVar11,*(long *)PTR_DAT_08e86568,0);
LAB_087a24d8:
      uVar6 = (*(code *)*puVar13)(uVar25,uVar26,plVar11,0x20006,in_stack_00000028._4_4_,unaff_w20);
      plVar11 = (long *)FUN_087c0130();
      lVar10 = FUN_05ab4ccc(lVar12,*(undefined8 *)puVar4);
      uVar25 = *(undefined4 *)(lVar10 + 0x14);
      lVar10 = FUN_05ab4ccc(lVar15,*(undefined8 *)puVar4);
      if (plVar11 == (long *)0x0) goto LAB_087a4348;
      lVar14 = *plVar11;
      uVar26 = *(undefined4 *)(lVar10 + 0x14);
      uVar17 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar17 != 0) {
        piVar19 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == *(long *)puVar3) {
            puVar13 = (undefined8 *)(lVar14 + (long)*piVar19 * 0x10 + 0x138);
            goto LAB_087a2b34;
          }
          uVar17 = uVar17 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar17 != 0);
      }
      puVar13 = (undefined8 *)FUN_03cf1348(plVar11,*(long *)puVar3,0);
LAB_087a2b34:
      uVar5 = (*(code *)*puVar13)(uVar25,uVar26,plVar11,0x20005,in_stack_00000028._4_4_,unaff_w20);
      plVar11 = (long *)FUN_087c0130();
      lVar10 = FUN_05ab4ccc(lVar12,*(undefined8 *)puVar4);
      uVar25 = *(undefined4 *)(lVar10 + 0xc);
      lVar10 = FUN_05ab4ccc(lVar15,*(undefined8 *)puVar4);
      if (plVar11 == (long *)0x0) goto LAB_087a4348;
      lVar14 = *plVar11;
      uVar26 = *(undefined4 *)(lVar10 + 0xc);
      uVar17 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar17 != 0) {
        piVar19 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == *(long *)puVar3) {
            puVar13 = (undefined8 *)(lVar14 + (long)*piVar19 * 0x10 + 0x138);
            goto LAB_087a30cc;
          }
          uVar17 = uVar17 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar17 != 0);
      }
      puVar13 = (undefined8 *)FUN_03cf1348(plVar11,*(long *)puVar3,0);
LAB_087a30cc:
      uVar8 = (*(code *)*puVar13)(uVar25,uVar26,plVar11,0x20003,in_stack_00000028._4_4_,unaff_w20);
      plVar11 = (long *)FUN_087c0130();
      lVar12 = FUN_05ab4ccc(lVar12,*(undefined8 *)puVar4);
      uVar25 = *(undefined4 *)(lVar12 + 0x10);
      lVar12 = FUN_05ab4ccc(lVar15,*(undefined8 *)puVar4);
      if (plVar11 == (long *)0x0) goto LAB_087a4348;
      lVar15 = *plVar11;
      uVar26 = *(undefined4 *)(lVar12 + 0x10);
      uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
      uVar8 = uVar6 | uVar5 | uVar8;
      if (uVar17 != 0) {
        piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == *(long *)puVar3) {
            puVar13 = (undefined8 *)(lVar15 + (long)*piVar19 * 0x10 + 0x138);
            goto LAB_087a34ec;
          }
          uVar17 = uVar17 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar17 != 0);
      }
      puVar13 = (undefined8 *)FUN_03cf1348(plVar11,*(long *)puVar3,0);
LAB_087a34ec:
      uVar6 = (*(code *)*puVar13)(uVar25,uVar26,plVar11,0x20004,in_stack_00000028._4_4_,unaff_w20);
      goto LAB_087a35d4;
    case 0x40005:
      if (unaff_x22 == 0) goto LAB_087a4348;
      plVar11 = (long *)FUN_087c0130();
      puVar4 = System_Action<ITTSEvent>_TypeInfo;
      lVar12 = unaff_x24 + 8;
      lVar15 = FUN_05ab4ccc(lVar12,*(undefined8 *)System_Action<ITTSEvent>_TypeInfo);
      uVar25 = *(undefined4 *)(lVar15 + 0x34);
      lVar15 = unaff_x23 + 8;
      lVar10 = FUN_05ab4ccc(lVar15,*(undefined8 *)puVar4);
      puVar3 = PTR_DAT_08e86568;
      if (plVar11 == (long *)0x0) goto LAB_087a4348;
      lVar14 = *plVar11;
      uVar26 = *(undefined4 *)(lVar10 + 0x34);
      uVar17 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar17 != 0) {
        piVar19 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_08e86568) {
            puVar13 = (undefined8 *)(lVar14 + (long)*piVar19 * 0x10 + 0x138);
            goto LAB_087a2588;
          }
          uVar17 = uVar17 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar17 != 0);
      }
      puVar13 = (undefined8 *)FUN_03cf1348(plVar11,*(long *)PTR_DAT_08e86568,0);
LAB_087a2588:
      uVar8 = (*(code *)*puVar13)(uVar25,uVar26,plVar11,0x2000b,in_stack_00000028._4_4_,unaff_w20);
      plVar11 = (long *)FUN_087c0130();
      lVar10 = FUN_05ab4ccc(lVar12,*(undefined8 *)puVar4);
      uVar25 = *(undefined4 *)(lVar10 + 0x38);
      lVar10 = FUN_05ab4ccc(lVar15,*(undefined8 *)puVar4);
      if (plVar11 == (long *)0x0) goto LAB_087a4348;
      lVar14 = *plVar11;
      uVar26 = *(undefined4 *)(lVar10 + 0x38);
      lVar10 = *(long *)puVar3;
      uVar17 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar17 != 0) {
        piVar19 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == lVar10) {
            puVar13 = (undefined8 *)(lVar14 + (long)*piVar19 * 0x10 + 0x138);
            goto LAB_087a2bdc;
          }
          uVar17 = uVar17 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar17 != 0);
      }
      puVar13 = (undefined8 *)FUN_03cf1348(plVar11,lVar10,0);
LAB_087a2bdc:
      uVar6 = (*(code *)*puVar13)(uVar25,uVar26,plVar11,0x2000c,in_stack_00000028._4_4_,unaff_w20);
      plVar11 = (long *)FUN_087c0130();
      lVar12 = FUN_05ab4ccc(lVar12,*(undefined8 *)puVar4);
      puVar24 = *(undefined1 **)(lVar12 + 0x28);
      lVar12 = FUN_05ab4ccc(lVar15,*(undefined8 *)puVar4);
      if (plVar11 == (long *)0x0) goto LAB_087a4348;
      lVar15 = *plVar11;
      puVar22 = *(undefined1 **)(lVar12 + 0x28);
      lVar12 = *(long *)puVar3;
      uVar8 = uVar8 | uVar6;
      uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar17 != 0) {
        piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == lVar12) {
            puVar13 = (undefined8 *)(lVar15 + (long)(*piVar19 + 2) * 0x10 + 0x138);
            goto LAB_087a318c;
          }
          uVar17 = uVar17 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar17 != 0);
      }
      puVar13 = (undefined8 *)FUN_03cf1348(plVar11,lVar12,2);
LAB_087a318c:
      UNRECOVERED_JUMPTABLE = (code *)*puVar13;
      uVar25 = 0x20009;
      break;
    case 0x40006:
      if (unaff_x22 == 0) goto LAB_087a4348;
      plVar11 = (long *)FUN_087c0130();
      puVar3 = System_Action<ITTSEvent>_TypeInfo;
      lVar12 = unaff_x24 + 8;
      lVar15 = FUN_05ab4ccc(lVar12,*(undefined8 *)System_Action<ITTSEvent>_TypeInfo);
      uVar23 = *(undefined8 *)(lVar15 + 0x6c);
      lVar15 = unaff_x23 + 8;
      lVar10 = FUN_05ab4ccc(lVar15,*(undefined8 *)puVar3);
      if (plVar11 == (long *)0x0) goto LAB_087a4348;
      lVar14 = *plVar11;
      uVar21 = *(undefined8 *)(lVar10 + 0x6c);
      uVar17 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar17 != 0) {
        piVar19 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_08e86568) {
            puVar13 = (undefined8 *)(lVar14 + (long)(*piVar19 + 2) * 0x10 + 0x138);
            goto LAB_087a263c;
          }
          uVar17 = uVar17 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar17 != 0);
      }
      puVar13 = (undefined8 *)FUN_03cf1348(plVar11,*(long *)PTR_DAT_08e86568,2);
LAB_087a263c:
      uVar6 = (*(code *)*puVar13)(plVar11,0x20014,uVar23,uVar21,in_stack_00000028._4_4_,unaff_w20);
      plVar11 = (long *)FUN_087c0130();
      lVar10 = FUN_05ab4ccc(lVar12,*(undefined8 *)puVar3);
      uVar23 = *(undefined8 *)(lVar10 + 100);
      lVar10 = FUN_05ab4ccc(lVar15,*(undefined8 *)puVar3);
      if (plVar11 == (long *)0x0) goto LAB_087a4348;
      lVar14 = *plVar11;
      uVar21 = *(undefined8 *)(lVar10 + 100);
      uVar17 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar17 != 0) {
        piVar19 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_08e86568) {
            puVar13 = (undefined8 *)(lVar14 + (long)(*piVar19 + 2) * 0x10 + 0x138);
            goto LAB_087a2c8c;
          }
          uVar17 = uVar17 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar17 != 0);
      }
      puVar13 = (undefined8 *)FUN_03cf1348(plVar11,*(long *)PTR_DAT_08e86568,2);
LAB_087a2c8c:
      uVar5 = (*(code *)*puVar13)(plVar11,0x20013,uVar23,uVar21,in_stack_00000028._4_4_,unaff_w20);
      plVar11 = (long *)FUN_087c0130();
      lVar10 = FUN_05ab4ccc(lVar12,*(undefined8 *)puVar3);
      uVar23 = *(undefined8 *)(lVar10 + 0x54);
      lVar10 = FUN_05ab4ccc(lVar15,*(undefined8 *)puVar3);
      if (plVar11 == (long *)0x0) goto LAB_087a4348;
      lVar14 = *plVar11;
      uVar21 = *(undefined8 *)(lVar10 + 0x54);
      uVar17 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar17 != 0) {
        piVar19 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_08e86568) {
            puVar13 = (undefined8 *)(lVar14 + (long)(*piVar19 + 2) * 0x10 + 0x138);
            goto LAB_087a31b4;
          }
          uVar17 = uVar17 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar17 != 0);
      }
      puVar13 = (undefined8 *)FUN_03cf1348(plVar11,*(long *)PTR_DAT_08e86568,2);
LAB_087a31b4:
      uVar8 = (*(code *)*puVar13)(plVar11,0x20011,uVar23,uVar21,in_stack_00000028._4_4_,unaff_w20);
      plVar11 = (long *)FUN_087c0130();
      lVar12 = FUN_05ab4ccc(lVar12,*(undefined8 *)puVar3);
      puVar24 = *(undefined1 **)(lVar12 + 0x5c);
      lVar12 = FUN_05ab4ccc(lVar15,*(undefined8 *)puVar3);
      if (plVar11 == (long *)0x0) goto LAB_087a4348;
      lVar15 = *plVar11;
      puVar22 = *(undefined1 **)(lVar12 + 0x5c);
      uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
      uVar8 = uVar6 | uVar5 | uVar8;
      if (uVar17 != 0) {
        piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_08e86568) {
            puVar13 = (undefined8 *)(lVar15 + (long)(*piVar19 + 2) * 0x10 + 0x138);
            goto LAB_087a3524;
          }
          uVar17 = uVar17 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar17 != 0);
      }
      puVar13 = (undefined8 *)FUN_03cf1348(plVar11,*(long *)PTR_DAT_08e86568,2);
LAB_087a3524:
      UNRECOVERED_JUMPTABLE = (code *)*puVar13;
      uVar25 = 0x20012;
      break;
    case 0x40007:
      if (unaff_x22 == 0) goto LAB_087a4348;
      plVar11 = (long *)FUN_087c0130();
      puVar3 = System_Action<ITTSEvent>_TypeInfo;
      lVar12 = unaff_x24 + 8;
      lVar15 = FUN_05ab4ccc(lVar12,*(undefined8 *)System_Action<ITTSEvent>_TypeInfo);
      uVar23 = *(undefined8 *)(lVar15 + 0xac);
      lVar15 = unaff_x23 + 8;
      lVar10 = FUN_05ab4ccc(lVar15,*(undefined8 *)puVar3);
      if (plVar11 == (long *)0x0) goto LAB_087a4348;
      lVar14 = *plVar11;
      uVar21 = *(undefined8 *)(lVar10 + 0xac);
      uVar17 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar17 != 0) {
        piVar19 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_08e86568) {
            puVar13 = (undefined8 *)(lVar14 + (long)(*piVar19 + 2) * 0x10 + 0x138);
            goto LAB_087a26fc;
          }
          uVar17 = uVar17 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar17 != 0);
      }
      puVar13 = (undefined8 *)FUN_03cf1348(plVar11,*(long *)PTR_DAT_08e86568,2);
LAB_087a26fc:
      uVar6 = (*(code *)*puVar13)(plVar11,0x2001c,uVar23,uVar21,in_stack_00000028._4_4_,unaff_w20);
      plVar11 = (long *)FUN_087c0130();
      lVar10 = FUN_05ab4ccc(lVar12,*(undefined8 *)puVar3);
      uVar23 = *(undefined8 *)(lVar10 + 0xa4);
      lVar10 = FUN_05ab4ccc(lVar15,*(undefined8 *)puVar3);
      if (plVar11 == (long *)0x0) goto LAB_087a4348;
      lVar14 = *plVar11;
      uVar21 = *(undefined8 *)(lVar10 + 0xa4);
      uVar17 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar17 != 0) {
        piVar19 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_08e86568) {
            puVar13 = (undefined8 *)(lVar14 + (long)(*piVar19 + 2) * 0x10 + 0x138);
            goto LAB_087a2d54;
          }
          uVar17 = uVar17 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar17 != 0);
      }
      puVar13 = (undefined8 *)FUN_03cf1348(plVar11,*(long *)PTR_DAT_08e86568,2);
LAB_087a2d54:
      uVar5 = (*(code *)*puVar13)(plVar11,0x2001b,uVar23,uVar21,in_stack_00000028._4_4_,unaff_w20);
      plVar11 = (long *)FUN_087c0130();
      lVar10 = FUN_05ab4ccc(lVar12,*(undefined8 *)puVar3);
      uVar23 = *(undefined8 *)(lVar10 + 0x94);
      lVar10 = FUN_05ab4ccc(lVar15,*(undefined8 *)puVar3);
      if (plVar11 == (long *)0x0) goto LAB_087a4348;
      lVar14 = *plVar11;
      uVar21 = *(undefined8 *)(lVar10 + 0x94);
      uVar17 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar17 != 0) {
        piVar19 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_08e86568) {
            puVar13 = (undefined8 *)(lVar14 + (long)(*piVar19 + 2) * 0x10 + 0x138);
            goto LAB_087a3280;
          }
          uVar17 = uVar17 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar17 != 0);
      }
      puVar13 = (undefined8 *)FUN_03cf1348(plVar11,*(long *)PTR_DAT_08e86568,2);
LAB_087a3280:
      uVar8 = (*(code *)*puVar13)(plVar11,0x20019,uVar23,uVar21,in_stack_00000028._4_4_,unaff_w20);
      plVar11 = (long *)FUN_087c0130();
      lVar12 = FUN_05ab4ccc(lVar12,*(undefined8 *)puVar3);
      puVar24 = *(undefined1 **)(lVar12 + 0x9c);
      lVar12 = FUN_05ab4ccc(lVar15,*(undefined8 *)puVar3);
      if (plVar11 == (long *)0x0) goto LAB_087a4348;
      lVar15 = *plVar11;
      puVar22 = *(undefined1 **)(lVar12 + 0x9c);
      uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
      uVar8 = uVar6 | uVar5 | uVar8;
      if (uVar17 != 0) {
        piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_08e86568) {
            puVar13 = (undefined8 *)(lVar15 + (long)(*piVar19 + 2) * 0x10 + 0x138);
            goto LAB_087a3548;
          }
          uVar17 = uVar17 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar17 != 0);
      }
      puVar13 = (undefined8 *)FUN_03cf1348(plVar11,*(long *)PTR_DAT_08e86568,2);
LAB_087a3548:
      UNRECOVERED_JUMPTABLE = (code *)*puVar13;
      uVar25 = 0x2001a;
      break;
    case 0x40008:
      goto switchD_0879f3b0_caseD_40008;
    case 0x40009:
      if (unaff_x22 == 0) goto LAB_087a4348;
      plVar11 = (long *)FUN_087c0130();
      puVar3 = System_Action<IUpdateReceiver>_TypeInfo;
      lVar12 = unaff_x24 + 0x28;
      lVar15 = FUN_05ab5fc4(lVar12,*(undefined8 *)System_Action<IUpdateReceiver>_TypeInfo);
      uVar23 = *(undefined8 *)(lVar15 + 0x30);
      uVar25 = *(undefined4 *)(lVar15 + 0x38);
      lVar15 = unaff_x23 + 0x28;
      lVar10 = FUN_05ab5fc4(lVar15,*(undefined8 *)puVar3);
      if (plVar11 == (long *)0x0) goto LAB_087a4348;
      lVar14 = *plVar11;
      uVar26 = *(undefined4 *)(lVar10 + 0x38);
      uVar21 = *(undefined8 *)(lVar10 + 0x30);
      uVar17 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar17 != 0) {
        piVar19 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_08e86568) {
            puVar13 = (undefined8 *)(lVar14 + (long)(*piVar19 + 0xd) * 0x10 + 0x138);
            goto LAB_087a27bc;
          }
          uVar17 = uVar17 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar17 != 0);
      }
      puVar13 = (undefined8 *)FUN_03cf1348(plVar11,*(long *)PTR_DAT_08e86568,0xd);
LAB_087a27bc:
      uVar6 = (*(code *)*puVar13)(plVar11,0x70002,uVar23,uVar25,uVar21,uVar26,
                                  in_stack_00000028._4_4_,unaff_w20);
      plVar11 = (long *)FUN_087c0130();
      puVar3 = System_Action<IUpdateReceiver>_TypeInfo;
      lVar10 = FUN_05ab5fc4(lVar12,*(undefined8 *)System_Action<IUpdateReceiver>_TypeInfo);
      uVar23 = *(undefined8 *)(lVar10 + 0x3c);
      uVar25 = *(undefined4 *)(lVar10 + 0x44);
      lVar10 = FUN_05ab5fc4(lVar15,*(undefined8 *)puVar3);
      if (plVar11 == (long *)0x0) goto LAB_087a4348;
      lVar14 = *plVar11;
      uVar26 = *(undefined4 *)(lVar10 + 0x44);
      uVar21 = *(undefined8 *)(lVar10 + 0x3c);
      uVar17 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar17 != 0) {
        piVar19 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_08e86568) {
            puVar13 = (undefined8 *)(lVar14 + (long)(*piVar19 + 0xd) * 0x10 + 0x138);
            goto LAB_087a2e1c;
          }
          uVar17 = uVar17 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar17 != 0);
      }
      puVar13 = (undefined8 *)FUN_03cf1348(plVar11,*(long *)PTR_DAT_08e86568,0xd);
LAB_087a2e1c:
      uVar5 = (*(code *)*puVar13)(plVar11,0x70003,uVar23,uVar25,uVar21,uVar26,
                                  in_stack_00000028._4_4_,unaff_w20);
      plVar11 = (long *)FUN_087c0130();
      puVar3 = System_Action<IUpdateReceiver>_TypeInfo;
      lVar10 = FUN_05ab5fc4(lVar12,*(undefined8 *)System_Action<IUpdateReceiver>_TypeInfo);
      uVar23 = *(undefined8 *)(lVar10 + 0x48);
      lVar10 = FUN_05ab5fc4(lVar15,*(undefined8 *)puVar3);
      if (plVar11 == (long *)0x0) goto LAB_087a4348;
      lVar14 = *plVar11;
      uVar21 = *(undefined8 *)(lVar10 + 0x48);
      uVar17 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar17 != 0) {
        piVar19 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_08e86568) {
            puVar13 = (undefined8 *)(lVar14 + (long)(*piVar19 + 0xe) * 0x10 + 0x138);
            goto LAB_087a334c;
          }
          uVar17 = uVar17 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar17 != 0);
      }
      puVar13 = (undefined8 *)FUN_03cf1348(plVar11,*(long *)PTR_DAT_08e86568,0xe);
LAB_087a334c:
      uVar8 = (*(code *)*puVar13)(plVar11,0x70004,uVar23,uVar21,in_stack_00000028._4_4_,unaff_w20);
      plVar11 = (long *)FUN_087c0130();
      puVar3 = System_Action<IUpdateReceiver>_TypeInfo;
      FUN_05ab5fc4(lVar12,*(undefined8 *)System_Action<IUpdateReceiver>_TypeInfo);
      FUN_05ab5fc4(lVar15,*(undefined8 *)puVar3);
      if (plVar11 == (long *)0x0) goto LAB_087a4348;
      lVar12 = *plVar11;
      uVar17 = (ulong)*(ushort *)(lVar12 + 0x12e);
      uVar8 = uVar6 | uVar5 | uVar8;
      if (uVar17 != 0) {
        piVar19 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_08e86568) {
            puVar13 = (undefined8 *)(lVar12 + (long)(*piVar19 + 0xf) * 0x10 + 0x138);
            goto LAB_087a3584;
          }
          uVar17 = uVar17 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar17 != 0);
      }
      puVar13 = (undefined8 *)FUN_03cf1348(plVar11,*(long *)PTR_DAT_08e86568,0xf);
LAB_087a3584:
      UNRECOVERED_JUMPTABLE = (code *)*puVar13;
      uVar25 = 0x70005;
      puVar24 = &stack0x00000250;
      puVar22 = &stack0x00000230;
      break;
    case 0x4000a:
      if (unaff_x22 == 0) goto LAB_087a4348;
      plVar11 = (long *)FUN_087c0130();
      lVar12 = FUN_05ab480c();
      uVar25 = *(undefined4 *)(lVar12 + 0x68);
      uVar26 = *(undefined4 *)(lVar12 + 0x6c);
      uVar27 = *(undefined4 *)(lVar12 + 0x70);
      uVar28 = *(undefined4 *)(lVar12 + 0x74);
      lVar12 = FUN_05ab480c();
      puVar3 = PTR_DAT_08e86568;
      if (plVar11 == (long *)0x0) goto LAB_087a4348;
      uVar30 = *(undefined4 *)(lVar12 + 0x70);
      uVar29 = *(undefined4 *)(lVar12 + 0x74);
      lVar15 = *plVar11;
      uVar32 = *(undefined4 *)(lVar12 + 0x68);
      uVar31 = *(undefined4 *)(lVar12 + 0x6c);
      uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar17 != 0) {
        piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_08e86568) {
            puVar13 = (undefined8 *)(lVar15 + (long)(*piVar19 + 3) * 0x10 + 0x138);
            goto LAB_087a288c;
          }
          uVar17 = uVar17 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar17 != 0);
      }
      puVar13 = (undefined8 *)FUN_03cf1348(plVar11,*(long *)PTR_DAT_08e86568,3);
LAB_087a288c:
      uVar8 = (*(code *)*puVar13)(uVar25,uVar26,uVar27,uVar28,uVar32,uVar31,uVar30,uVar29,plVar11,
                                  0x10009,in_stack_00000028._4_4_,unaff_w20);
      plVar11 = (long *)FUN_087c0130();
      lVar12 = FUN_05ab480c();
      uVar25 = *(undefined4 *)(lVar12 + 0x78);
      lVar12 = FUN_05ab480c();
      if (plVar11 == (long *)0x0) goto LAB_087a4348;
      lVar15 = *plVar11;
      uVar26 = *(undefined4 *)(lVar12 + 0x78);
      uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar17 != 0) {
        piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == *(long *)puVar3) {
            puVar13 = (undefined8 *)(lVar15 + (long)*piVar19 * 0x10 + 0x138);
            goto LAB_087a2ee8;
          }
          uVar17 = uVar17 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar17 != 0);
      }
      puVar13 = (undefined8 *)FUN_03cf1348(plVar11,*(long *)puVar3,0);
LAB_087a2ee8:
      uVar6 = (*(code *)*puVar13)(uVar25,uVar26,plVar11,0x1000a,in_stack_00000028._4_4_,unaff_w20);
LAB_087a2f0c:
      uVar8 = uVar8 | uVar6;
      goto switchD_0879f3b0_caseD_40008;
    default:
      switch(unaff_w25) {
      case 0x50000:
        if (unaff_x22 == 0) goto LAB_087a4348;
        plVar11 = (long *)FUN_087c0130();
        puVar3 = System_Action<IWitWebSocketRequest>_TypeInfo;
        FUN_05ab564c(unaff_x24 + 0x18,*(undefined8 *)System_Action<IWitWebSocketRequest>_TypeInfo);
        FUN_05ab564c(unaff_x23 + 0x18,*(undefined8 *)puVar3);
        if (plVar11 == (long *)0x0) goto LAB_087a4348;
        lVar12 = *plVar11;
        uVar17 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar17 != 0) {
          piVar19 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_08e86568) {
              puVar13 = (undefined8 *)(lVar12 + (long)(*piVar19 + 0xb) * 0x10 + 0x138);
              goto LAB_087a3868;
            }
            uVar17 = uVar17 - 1;
            piVar19 = piVar19 + 4;
          } while (uVar17 != 0);
        }
        puVar13 = (undefined8 *)FUN_03cf1348(plVar11,*(long *)PTR_DAT_08e86568,0xb);
LAB_087a3868:
        UNRECOVERED_JUMPTABLE = (code *)*puVar13;
        uVar23 = 0x50000;
        break;
      case 0x50001:
        if (unaff_x22 == 0) goto LAB_087a4348;
        plVar11 = (long *)FUN_087c0130();
        puVar3 = System_Action<IWitWebSocketRequest>_TypeInfo;
        lVar12 = FUN_05ab564c(unaff_x24 + 0x18,
                              *(undefined8 *)System_Action<IWitWebSocketRequest>_TypeInfo);
        uVar23 = *(undefined8 *)(lVar12 + 0x18);
        uVar21 = *(undefined8 *)(lVar12 + 0x20);
        lVar12 = FUN_05ab564c(unaff_x23 + 0x18,*(undefined8 *)puVar3);
        if (plVar11 == (long *)0x0) goto LAB_087a4348;
        lVar15 = *plVar11;
        uVar1 = *(undefined8 *)(lVar12 + 0x18);
        uVar2 = *(undefined8 *)(lVar12 + 0x20);
        uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar17 != 0) {
          piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_08e86568) {
              puVar13 = (undefined8 *)(lVar15 + (long)(*piVar19 + 9) * 0x10 + 0x138);
              goto LAB_087a38b0;
            }
            uVar17 = uVar17 - 1;
            piVar19 = piVar19 + 4;
          } while (uVar17 != 0);
        }
        puVar13 = (undefined8 *)FUN_03cf1348(plVar11,*(long *)PTR_DAT_08e86568,9);
LAB_087a38b0:
        uVar17 = (*(code *)*puVar13)(plVar11,unaff_w28 + 0x1fff8,uVar23,uVar21,uVar1,uVar2,
                                     in_stack_00000028._4_4_,unaff_w20);
        goto joined_r0x087a38e0;
      case 0x50002:
        if (unaff_x22 == 0) goto LAB_087a4348;
        plVar11 = (long *)FUN_087c0130();
        puVar3 = System_Action<IWitWebSocketRequest>_TypeInfo;
        FUN_05ab564c(unaff_x24 + 0x18,*(undefined8 *)System_Action<IWitWebSocketRequest>_TypeInfo);
        FUN_05ab564c(unaff_x23 + 0x18,*(undefined8 *)puVar3);
        if (plVar11 == (long *)0x0) goto LAB_087a4348;
        lVar12 = *plVar11;
        uVar17 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar17 != 0) {
          piVar19 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_08e86568) {
              puVar13 = (undefined8 *)(lVar12 + (long)(*piVar19 + 0xc) * 0x10 + 0x138);
              goto LAB_087a38f8;
            }
            uVar17 = uVar17 - 1;
            piVar19 = piVar19 + 4;
          } while (uVar17 != 0);
        }
        puVar13 = (undefined8 *)FUN_03cf1348(plVar11,*(long *)PTR_DAT_08e86568,0xc);
LAB_087a38f8:
        UNRECOVERED_JUMPTABLE = (code *)*puVar13;
        uVar23 = 0x50002;
        break;
      case 0x50003:
        if (unaff_x22 == 0) goto LAB_087a4348;
        plVar11 = (long *)FUN_087c0130();
        puVar3 = System_Action<IWitWebSocketRequest>_TypeInfo;
        FUN_05ab564c(unaff_x24 + 0x18,*(undefined8 *)System_Action<IWitWebSocketRequest>_TypeInfo);
        FUN_05ab564c(unaff_x23 + 0x18,*(undefined8 *)puVar3);
        if (plVar11 == (long *)0x0) goto LAB_087a4348;
        lVar12 = *plVar11;
        uVar17 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar17 != 0) {
          piVar19 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_08e86568) {
              puVar13 = (undefined8 *)(lVar12 + (long)(*piVar19 + 10) * 0x10 + 0x138);
              goto LAB_087a3944;
            }
            uVar17 = uVar17 - 1;
            piVar19 = piVar19 + 4;
          } while (uVar17 != 0);
        }
        puVar13 = (undefined8 *)FUN_03cf1348(plVar11,*(long *)PTR_DAT_08e86568,10);
LAB_087a3944:
        UNRECOVERED_JUMPTABLE = (code *)*puVar13;
        uVar23 = 0x50003;
        break;
      default:
        goto switchD_0879f3b0_caseD_40008;
      }
      uVar17 = (*UNRECOVERED_JUMPTABLE)
                         (plVar11,uVar23,&stack0x00000250,&stack0x00000230,in_stack_00000028._4_4_,
                          unaff_w20);
joined_r0x087a38e0:
      if ((uVar17 & 1) == 0) goto switchD_0879f4d4_default;
      uVar17 = FUN_087c2b74();
      if ((uVar17 & 1) == 0) {
        FUN_087c2b74();
        goto LAB_087a41b0;
      }
      goto LAB_087a41bc;
    }
    uVar6 = (*UNRECOVERED_JUMPTABLE)
                      (plVar11,uVar25,puVar24,puVar22,in_stack_00000028._4_4_,unaff_w20);
LAB_087a35d4:
    uVar8 = uVar8 | uVar6;
    goto switchD_0879f3b0_caseD_40008;
  }
LAB_087a4158:
  uVar17 = (*UNRECOVERED_JUMPTABLE)
                     (uVar25,uVar26,uVar27,uVar28,uVar32,uVar31,uVar30,uVar29,plVar11,iVar16,
                      in_stack_00000028._4_4_,unaff_w20);
  if ((uVar17 & 1) == 0) {
switchD_0879f4d4_default:
    uVar8 = 0;
  }
  else {
LAB_087a4190:
    uVar8 = FUN_087c2b74();
    if ((uVar8 >> 3 & 1) == 0) {
      FUN_087c2b74();
LAB_087a41b0:
      FUN_087c2b9c();
    }
LAB_087a41bc:
    uVar8 = 1;
  }
switchD_0879f3b0_caseD_40008:
  return (ulong)(uVar8 & 1);
}


