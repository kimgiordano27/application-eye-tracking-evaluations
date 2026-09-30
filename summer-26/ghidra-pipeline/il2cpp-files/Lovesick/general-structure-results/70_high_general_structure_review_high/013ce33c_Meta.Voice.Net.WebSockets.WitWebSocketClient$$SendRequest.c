/*
FUNCTION_NAME: Meta.Voice.Net.WebSockets.WitWebSocketClient$$SendRequest
ENTRY_POINT: 013ce33c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


void Meta_Voice_Net_WebSockets_WitWebSocketClient__SendRequest
               (long *param_1,long param_2,undefined4 param_3,long param_4)

{
  undefined *puVar1;
  long *plVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  void *pvVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  int *piVar10;
  uint uVar11;
  uint uVar12;
  void *pvVar13;
  void *__dest;
  undefined8 uVar14;
  ulong __n;
  long lVar15;
  ulong __n_00;
  long *plVar16;
  ulong uVar17;
  long alStack_70 [3];
  long *plStack_58;
  void *pvStack_50;
  void *pvStack_48;
  void *pvStack_40;
  long *plStack_38;
  undefined4 uStack_2c;
  long lStack_28;
  long lStack_20;
  undefined4 uStack_18;
  undefined4 uStack_14;
  long *plStack_10;
  long lStack_8;
  
  lVar9 = tpidr_el0;
  lStack_8 = *(long *)(lVar9 + 0x28);
  lStack_20 = param_2;
  if ((DAT_037767ed & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_11440);
    thunk_FUN_00d48444(StringLiteral_3033);
    thunk_FUN_00d48444(Method_System_Xml_Schema_XmlListConverter_ToArray<double>__);
    thunk_FUN_00d48444(StringLiteral_11109);
    thunk_FUN_00d48444(System_Collections_Generic_IEnumerator<Expression>_TypeInfo);
    DAT_037767ed = 1;
  }
  lVar4 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x20);
  if ((*(byte *)(lVar4 + 0x132) & 1) == 0) {
    lVar4 = FUN_00d5941c();
  }
  if (*(int *)(lVar4 + 0x28) < 0) {
    iVar3 = thunk_FUN_00d42afc();
    uVar11 = iVar3 - 0x10;
  }
  else {
    uVar11 = 8;
  }
  lVar4 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0xe0);
  if ((*(byte *)(lVar4 + 0x132) & 1) == 0) {
    lVar4 = FUN_00d5941c();
  }
  if (*(int *)(lVar4 + 0x28) < 0) {
    iVar3 = thunk_FUN_00d42afc();
    uVar12 = iVar3 - 0x10;
  }
  else {
    uVar12 = 8;
  }
  lVar4 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x20);
                    /* catch() { ... } // from try @ 013ce474 with catch @ 013ce430
                       catch() { ... } // from try @ 013ce4ec with catch @ 013ce430 */
  if ((*(byte *)(lVar4 + 0x132) & 1) == 0) {
    lVar4 = FUN_00d5941c();
  }
  if (*(int *)(lVar4 + 0x28) < 0) {
    uVar5 = thunk_FUN_00d42afc();
  }
  else {
    uVar5 = 0x18;
  }
  lVar15 = (long)alStack_70 - ((uVar5 & 0xffffffff) + 0xf & 0x1fffffff0);
  lVar4 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0xe0);
  if ((*(byte *)(lVar4 + 0x132) & 1) == 0) {
    lVar4 = FUN_00d5941c();
  }
  alStack_70[1] = lVar15;
  uStack_2c = param_3;
  lStack_28 = lVar9;
  if (*(int *)(lVar4 + 0x28) < 0) {
    uVar5 = thunk_FUN_00d42afc();
  }
  else {
    uVar5 = 0x18;
  }
  alStack_70[2] = lVar15 - ((uVar5 & 0xffffffff) + 0xf & 0x1fffffff0);
  __n_00 = (ulong)uVar11;
  uVar5 = __n_00 + 0xf & 0x1fffffff0;
  plVar16 = (long *)(alStack_70[2] - uVar5);
  __dest = (void *)((long)plVar16 - uVar5);
  __n = (ulong)uVar12;
  uVar17 = __n + 0xf & 0x1fffffff0;
  plStack_58 = (long *)((long)__dest - uVar17);
  pvStack_48 = (void *)((long)plStack_58 - uVar17);
  pvVar13 = (void *)((long)pvStack_48 - uVar5);
  memset(pvVar13,0,__n_00);
  pvVar6 = (void *)((long)pvVar13 - uVar17);
  pvStack_50 = pvVar6;
  memset(pvVar6,0,__n);
  pvVar6 = (void *)((long)pvVar6 - uVar5);
  memset(pvVar6,0,__n_00);
  pvStack_40 = (void *)((long)pvVar6 - uVar17);
  memset(pvStack_40,0,__n);
  if (param_1 != (long *)0x0) {
    lVar9 = *(long *)(*param_1 + 400);
    (**(code **)(lVar9 + 0x10))(*(undefined8 *)(lVar9 + 8),lVar9,param_1,0,&plStack_10);
    lVar9 = *(long *)(*param_1 + 400);
    plStack_38 = plStack_10;
    (**(code **)(lVar9 + 0x10))(*(undefined8 *)(lVar9 + 8),lVar9,param_1,0,&plStack_10);
    plVar8 = plStack_10;
    puVar1 = StringLiteral_3033;
    if (plStack_10 != (long *)0x0) {
      lVar9 = *plStack_10;
      uVar5 = (ulong)*(ushort *)(lVar9 + 0x12a);
      if (uVar5 != 0) {
        piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)StringLiteral_11440) {
            puVar7 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_013ce620;
          }
          uVar5 = uVar5 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar5 != 0);
      }
      puVar7 = (undefined8 *)FUN_00d59724(plStack_10,*(long *)StringLiteral_11440,0);
LAB_013ce620:
      lVar9 = (*(code *)*puVar7)(plVar8,puVar7[1]);
      plVar8 = (long *)FUN_00da4fb8(*(undefined8 *)puVar1,5);
      if (plVar8 != (long *)0x0) {
        if ((lStack_20 != 0) &&
           (lVar4 = thunk_FUN_00d6225c(lStack_20,*(undefined8 *)(*plVar8 + 0x40)), lVar4 == 0))
        goto LAB_013ce920;
        if ((int)plVar8[3] != 0) {
          plVar8[4] = lStack_20;
          puVar1 = System_Collections_Generic_IEnumerator<Expression>_TypeInfo;
          puVar7 = *(undefined8 **)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0xc0);
          lStack_20 = lVar9;
          plStack_10 = plVar16;
          (*(code *)puVar7[2])(*puVar7,puVar7,param_1,&plStack_10,plVar16);
          memcpy(pvVar13,plVar16,__n_00);
          memcpy(__dest,pvVar13,__n_00);
          lVar9 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x20);
          if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
            lVar9 = FUN_00d5941c();
          }
          uVar5 = FUN_00da5124(lVar9,__dest);
          uVar14 = *(undefined8 *)puVar1;
          if ((uVar5 & 1) == 0) {
            plVar16 = (long *)0x0;
          }
          else {
            memcpy(pvVar6,pvVar13,__n_00);
            lVar4 = *(long *)(*(long *)(param_4 + 0x20) + 0xc0);
            lVar9 = *(long *)(lVar4 + 0x20);
            if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
              lVar9 = FUN_00d5941c();
              lVar4 = *(long *)(*(long *)(param_4 + 0x20) + 0xc0);
            }
            FUN_00da59dc(lVar9,*(undefined8 *)(lVar4 + 200),alStack_70[1],pvVar6,0,&plStack_10);
            plVar16 = plStack_10;
            if ((plStack_10 != (long *)0x0) &&
               (lVar9 = thunk_FUN_00d6225c(plStack_10,*(undefined8 *)(*plVar8 + 0x40)), lVar9 == 0))
            goto LAB_013ce920;
          }
          lVar9 = lStack_20;
          if (1 < *(uint *)(plVar8 + 3)) {
            plVar8[5] = (long)plVar16;
            puVar1 = StringLiteral_11109;
            puVar7 = *(undefined8 **)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0xd0);
            (*(code *)puVar7[2])(*puVar7,puVar7,param_1,0,&plStack_10);
            uStack_14 = plStack_10._0_4_;
            lVar4 = thunk_FUN_00d61fa0(*(undefined8 *)puVar1,&uStack_14);
            if ((lVar4 != 0) &&
               (lVar9 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*plVar8 + 0x40)), lVar9 == 0)) {
LAB_013ce920:
              uVar14 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
              FUN_00da5038(uVar14,0);
            }
            lVar9 = lStack_20;
            if (2 < *(uint *)(plVar8 + 3)) {
              plVar8[6] = lVar4;
              puVar1 = Method_System_Xml_Schema_XmlListConverter_ToArray<double>__;
              puVar7 = *(undefined8 **)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 8);
              (*(code *)puVar7[2])(*puVar7,puVar7,param_1,0,&plStack_10);
              uStack_18 = plStack_10._0_4_;
              lVar4 = thunk_FUN_00d61fa0(*(undefined8 *)puVar1,&uStack_18);
              if ((lVar4 != 0) &&
                 (lVar9 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*plVar8 + 0x40)), lVar9 == 0))
              goto LAB_013ce920;
              plVar16 = plStack_58;
              lVar9 = lStack_20;
              if (3 < *(uint *)(plVar8 + 3)) {
                plVar8[7] = lVar4;
                puVar7 = *(undefined8 **)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0xd8);
                plStack_10 = plStack_58;
                (*(code *)puVar7[2])(*puVar7,puVar7,param_1,&plStack_10,plStack_58);
                pvVar6 = pvStack_50;
                memcpy(pvStack_50,plVar16,__n);
                pvVar13 = pvStack_48;
                memcpy(pvStack_48,pvVar6,__n);
                lVar9 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0xe0);
                if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
                  lVar9 = FUN_00d5941c();
                }
                uVar5 = FUN_00da5124(lVar9,pvVar13);
                if ((uVar5 & 1) == 0) {
                  plVar16 = (long *)0x0;
                }
                else {
                  memcpy(pvStack_40,pvVar6,__n);
                  lVar4 = *(long *)(*(long *)(param_4 + 0x20) + 0xc0);
                  lVar9 = *(long *)(lVar4 + 0xe0);
                  if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
                    lVar9 = FUN_00d5941c();
                    lVar4 = *(long *)(*(long *)(param_4 + 0x20) + 0xc0);
                  }
                  FUN_00da59dc(lVar9,*(undefined8 *)(lVar4 + 0xe8),alStack_70[2],pvStack_40,0,
                               &plStack_10);
                  plVar16 = plStack_10;
                  if ((plStack_10 != (long *)0x0) &&
                     (lVar9 = thunk_FUN_00d6225c(plStack_10,*(undefined8 *)(*plVar8 + 0x40)),
                     lVar9 == 0)) goto LAB_013ce920;
                }
                plVar2 = plStack_38;
                lVar9 = lStack_20;
                if (4 < *(uint *)(plVar8 + 3)) {
                  plVar8[8] = (long)plVar16;
                  if (plStack_38 != (long *)0x0) {
                    lVar9 = *plStack_38;
                    uVar5 = (ulong)*(ushort *)(lVar9 + 0x12a);
                    if (uVar5 != 0) {
                      piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar10 + -2) == *(long *)StringLiteral_11440) {
                          puVar7 = (undefined8 *)(lVar9 + (long)(*piVar10 + 0x1b) * 0x10 + 0x138);
                          goto LAB_013ce9a0;
                        }
                        uVar5 = uVar5 - 1;
                        piVar10 = piVar10 + 4;
                      } while (uVar5 != 0);
                    }
                    puVar7 = (undefined8 *)
                             FUN_00d59724(plStack_38,*(long *)StringLiteral_11440,0x1b);
LAB_013ce9a0:
                    (*(code *)*puVar7)(plVar2,lStack_20,uStack_2c,uVar14,plVar8,puVar7[1]);
                    if (*(long *)(lStack_28 + 0x28) != lStack_8) {
                    /* WARNING: Subroutine does not return */
                      __stack_chk_fail();
                    }
                    return;
                  }
                  goto LAB_013ce9f4;
                }
              }
            }
          }
        }
        lStack_20 = lVar9;
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
    }
  }
LAB_013ce9f4:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


