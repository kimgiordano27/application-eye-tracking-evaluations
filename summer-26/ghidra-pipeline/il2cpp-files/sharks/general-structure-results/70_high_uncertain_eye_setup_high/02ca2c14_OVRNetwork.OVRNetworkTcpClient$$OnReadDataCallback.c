/*
FUNCTION_NAME: OVRNetwork.OVRNetworkTcpClient$$OnReadDataCallback
ENTRY_POINT: 02ca2c14
PROGRAM: sharks-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_3;validity_or_gating_hits_21;functionality_eye_api_context_without_clear_sink_hits_1
*/


void OVRNetwork_OVRNetworkTcpClient__OnReadDataCallback(long param_1)

{
  ushort uVar1;
  short sVar2;
  undefined *puVar3;
  ulong uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  long *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long *plVar15;
  long unaff_x23;
  long *plVar16;
  ulong unaff_x24;
  undefined8 uVar17;
  long in_stack_00000000;
  ulong in_stack_00000008;
  
  uVar4 = in_stack_00000008;
  FUN_017fc350(*(undefined8 *)(param_1 + 0x578));
  FUN_017fc350(PTR_DAT_037f2d40);
  FUN_017fc350(PTR_DAT_0380e520);
  FUN_017fc350(PTR_DAT_0380e528);
  FUN_017fc350(PTR_DAT_0380e580);
  FUN_017fc350(PTR_DAT_0380e588);
  FUN_017fc350(PTR_DAT_0380e530);
  FUN_017fc350(PTR_DAT_0380e430);
  FUN_017fc350(PTR_DAT_0380e590);
  FUN_017fc350(PTR_DAT_0380e478);
  FUN_017fc350(PTR_DAT_0380e480);
  FUN_017fc350(PTR_DAT_0380e418);
  FUN_017fc350(PTR_DAT_037f2b10);
  FUN_017fc350(PTR_DAT_0380e598);
  FUN_017fc350(PTR_DAT_0380e5a0);
  FUN_017fc350(PTR_DAT_0380e550);
  FUN_017fc350(PTR_DAT_0380e5a8);
  FUN_017fc350(PTR_DAT_0380e5b0);
  *(undefined1 *)(unaff_x22 + 0x25a) = 1;
  if (*(long *)(in_stack_00000000 + 0x10) != 0) {
    iVar5 = FUN_021aeed8(*(long *)(in_stack_00000000 + 0x10),*(undefined8 *)PTR_DAT_0380e530);
    if (iVar5 != 0) {
      if (*(long *)(in_stack_00000000 + 0x10) == 0) goto LAB_02ca32e8;
      System_Array_EmptyInternalEnumerator<OVRPlugin_BoneCapsule>__get_Current
                (*(long *)(in_stack_00000000 + 0x10),*(undefined8 *)PTR_DAT_0380e528);
    }
    puVar3 = PTR_DAT_0380e478;
    if (unaff_x23 != 0) {
      lVar11 = 0xa8;
      if ((unaff_x24 & 1) == 0) {
        lVar11 = 0xa0;
      }
      plVar16 = *(long **)(unaff_x23 + lVar11);
      if (plVar16 != (long *)0x0) {
        iVar5 = 0;
        plVar15 = (long *)PTR_DAT_0380e480;
        do {
          lVar11 = *plVar16;
          uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar13 != 0) {
            piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
                puVar8 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
                goto LAB_02ca2db0;
              }
              uVar13 = uVar13 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar13 != 0);
          }
          puVar8 = (undefined8 *)FUN_0185dba8(plVar16,*(long *)puVar3,0);
LAB_02ca2db0:
          iVar6 = (*(code *)*puVar8)(plVar16,puVar8[1]);
          if (iVar6 <= iVar5) {
            return;
          }
          lVar11 = *plVar16;
          uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar13 != 0) {
            piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == *plVar15) {
                puVar8 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
                goto LAB_02ca2e10;
              }
              uVar13 = uVar13 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar13 != 0);
          }
          puVar8 = (undefined8 *)FUN_0185dba8(plVar16,*plVar15,0);
LAB_02ca2e10:
          lVar11 = (*(code *)*puVar8)(plVar16,iVar5,puVar8[1]);
          if ((lVar11 == 0) || (unaff_x21 == 0)) break;
          uVar13 = FUN_021ac32c();
          if ((uVar13 & 1) != 0) {
            uVar7 = FUN_021ac0a4();
            lVar9 = thunk_FUN_01861bbc(*(undefined8 *)PTR_DAT_0380e510);
            FUN_02c108e4(lVar9,0);
            puVar8 = (undefined8 *)(lVar11 + 0x18);
            if (lVar9 == 0) break;
            *(undefined8 *)(lVar9 + 0x10) = *puVar8;
            thunk_FUN_0188fd20();
            if (unaff_x20 == (long *)0x0) break;
            lVar12 = *unaff_x20;
            uVar1 = *(ushort *)(lVar12 + 0x12e);
            uVar13 = (ulong)uVar1;
            if ((uVar4 & 1) == 0) {
              if (uVar1 != 0) {
                piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_0380e418) {
                    iVar6 = *piVar14 + 5;
                    goto LAB_02ca2f28;
                  }
                  uVar13 = uVar13 - 1;
                  piVar14 = piVar14 + 4;
                } while (uVar13 != 0);
              }
            }
            else if (uVar1 != 0) {
              piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
LAB_02ca2ec0:
              if (*(long *)(piVar14 + -2) != *(long *)PTR_DAT_0380e418) goto code_r0x02ca2ecc;
              iVar6 = *piVar14 + 4;
LAB_02ca2f28:
              puVar10 = (undefined8 *)(lVar12 + (long)iVar6 * 0x10 + 0x138);
              goto LAB_02ca2f30;
            }
LAB_02ca2f08:
            puVar10 = (undefined8 *)FUN_0185dba8();
LAB_02ca2f30:
            lVar12 = (*(code *)*puVar10)();
            if (lVar12 == 0) break;
            uVar13 = FUN_021af33c(lVar12,*(undefined4 *)(lVar11 + 0x10),
                                  *(undefined8 *)PTR_DAT_0380e588);
            if ((uVar13 & 1) == 0) {
              in_stack_00000008._4_4_ = *(undefined4 *)(lVar11 + 0x10);
              uVar17 = thunk_FUN_018617ec(*(undefined8 *)PTR_DAT_0380e578,(long)&stack0x00000008 + 4
                                         );
              uVar17 = FUN_02a473b8(*(undefined8 *)PTR_DAT_0380e5a8,uVar17,0);
              if (*(int *)(*(long *)PTR_DAT_037f2d40 + 0xe0) == 0) {
                thunk_FUN_01843fdc(*(long *)PTR_DAT_037f2d40);
              }
              FUN_033bd548(uVar17,0);
            }
            else {
              lVar12 = *unaff_x20;
              uVar1 = *(ushort *)(lVar12 + 0x12e);
              uVar13 = (ulong)uVar1;
              if ((uVar4 & 1) == 0) {
                if (uVar1 != 0) {
                  piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_0380e418) {
                      iVar6 = *piVar14 + 5;
                      goto LAB_02ca3050;
                    }
                    uVar13 = uVar13 - 1;
                    piVar14 = piVar14 + 4;
                  } while (uVar13 != 0);
                }
              }
              else if (uVar1 != 0) {
                piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
LAB_02ca2f80:
                if (*(long *)(piVar14 + -2) != *(long *)PTR_DAT_0380e418) goto code_r0x02ca2f8c;
                iVar6 = *piVar14 + 4;
LAB_02ca3050:
                puVar10 = (undefined8 *)(lVar12 + (long)iVar6 * 0x10 + 0x138);
                goto LAB_02ca3058;
              }
LAB_02ca3030:
              puVar10 = (undefined8 *)FUN_0185dba8();
LAB_02ca3058:
              lVar12 = (*(code *)*puVar10)();
              if ((lVar12 == 0) ||
                 (lVar12 = FUN_021af0a8(lVar12,*(undefined4 *)(lVar11 + 0x10),
                                        *(undefined8 *)PTR_DAT_0380e590), lVar12 == 0)) break;
              iVar6 = *(int *)(lVar12 + 0x14);
              if (*(int *)(lVar12 + 0x10) != *(int *)(lVar11 + 0x10)) {
                lVar12 = FUN_02ca32f4(plVar16);
                if (lVar12 == 0) break;
                puVar8 = (undefined8 *)(lVar12 + 0x18);
              }
              puVar10 = (undefined8 *)(lVar9 + 0x30);
              *puVar10 = *puVar8;
              thunk_FUN_0188fd20(puVar10);
              if (iVar6 != -1) {
                lVar12 = FUN_02ca32f4(plVar16,iVar6);
                if (lVar12 == 0) break;
                puVar10 = (undefined8 *)(lVar12 + 0x18);
              }
              puVar8 = (undefined8 *)(lVar9 + 0x38);
              *puVar8 = *puVar10;
              thunk_FUN_0188fd20(puVar8);
              lVar12 = *plVar16;
              sVar2 = *(short *)(lVar11 + 0x14);
              uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
              if (uVar13 != 0) {
                piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_0380e480) {
                    puVar10 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
                    goto LAB_02ca3140;
                  }
                  uVar13 = uVar13 - 1;
                  piVar14 = piVar14 + 4;
                } while (uVar13 != 0);
              }
              puVar10 = (undefined8 *)FUN_0185dba8(plVar16,*(long *)PTR_DAT_0380e480,0);
LAB_02ca3140:
              lVar12 = (*(code *)*puVar10)(plVar16,(int)sVar2,puVar10[1]);
              if (lVar12 == 0) break;
              *(undefined8 *)(lVar9 + 0x68) = *(undefined8 *)(lVar12 + 0x18);
              thunk_FUN_0188fd20((undefined8 *)(lVar9 + 0x68));
              uVar17 = *(undefined8 *)(lVar9 + 0x30);
              if (*(int *)(*(long *)PTR_DAT_037f2b10 + 0xe0) == 0) {
                thunk_FUN_01843fdc();
              }
              uVar13 = FUN_033ea488(uVar17,0,0);
              if ((uVar13 & 1) != 0) {
                in_stack_00000008._4_4_ = *(undefined4 *)(lVar11 + 0x10);
                uVar17 = thunk_FUN_018617ec(*(undefined8 *)PTR_DAT_0380e578,
                                            (long)&stack0x00000008 + 4);
                uVar17 = FUN_02a473b8(*(undefined8 *)PTR_DAT_0380e5b0,uVar17,0);
                if (*(int *)(*(long *)PTR_DAT_037f2d40 + 0xe0) == 0) {
                  thunk_FUN_01843fdc(*(long *)PTR_DAT_037f2d40);
                }
                FUN_033bdab0(uVar17,0);
              }
              uVar17 = *puVar8;
              if (*(int *)(*(long *)PTR_DAT_037f2b10 + 0xe0) == 0) {
                thunk_FUN_01843fdc();
              }
              uVar13 = FUN_033ea488(uVar17,0,0);
              plVar15 = (long *)PTR_DAT_0380e480;
              if ((uVar13 & 1) != 0) {
                in_stack_00000008._4_4_ = *(undefined4 *)(lVar11 + 0x10);
                uVar17 = thunk_FUN_018617ec(*(undefined8 *)PTR_DAT_0380e578,
                                            (long)&stack0x00000008 + 4);
                uVar17 = FUN_02a473b8(*(undefined8 *)PTR_DAT_0380e550,uVar17,0);
                if (*(int *)(*(long *)PTR_DAT_037f2d40 + 0xe0) == 0) {
                  thunk_FUN_01843fdc(*(long *)PTR_DAT_037f2d40);
                }
                FUN_033bdab0(uVar17,0);
              }
              if (*(long *)(in_stack_00000000 + 0x10) == 0) break;
              FUN_021af148(*(long *)(in_stack_00000000 + 0x10),uVar7,lVar9,
                           *(undefined8 *)PTR_DAT_0380e520);
            }
          }
          iVar5 = iVar5 + 1;
        } while( true );
      }
    }
  }
LAB_02ca32e8:
                    /* WARNING: Subroutine does not return */
  FUN_017fc5a8();
code_r0x02ca2ecc:
  uVar13 = uVar13 - 1;
  piVar14 = piVar14 + 4;
  if (uVar13 == 0) goto LAB_02ca2f08;
  goto LAB_02ca2ec0;
code_r0x02ca2f8c:
  uVar13 = uVar13 - 1;
  piVar14 = piVar14 + 4;
  if (uVar13 == 0) goto LAB_02ca3030;
  goto LAB_02ca2f80;
}


