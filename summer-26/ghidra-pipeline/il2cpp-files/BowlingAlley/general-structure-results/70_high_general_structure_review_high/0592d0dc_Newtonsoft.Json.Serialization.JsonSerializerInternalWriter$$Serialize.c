/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$Serialize
ENTRY_POINT: 0592d0dc
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


undefined8 Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__Serialize(long param_1)

{
  long lVar1;
  long lVar2;
  ushort uVar3;
  uint uVar4;
  undefined *puVar5;
  bool bVar6;
  bool bVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  int *unaff_x19;
  long unaff_x20;
  ulong uVar11;
  long lVar12;
  ushort *puVar13;
  ushort *unaff_x21;
  uint unaff_w22;
  uint uVar14;
  uint uVar15;
  ulong unaff_x23;
  uint uVar16;
  uint uVar17;
  int iVar18;
  long unaff_x25;
  undefined1 *unaff_x27;
  uint uVar19;
  int iStack000000000000001c;
  
  thunk_FUN_032e1da0(*(undefined8 *)(param_1 + 0x568));
  thunk_FUN_032e1da0(PTR_DAT_07279e78);
  *(undefined1 *)(unaff_x20 + 0x3de) = 1;
  puVar5 = PTR_DAT_072969e0;
  uVar14 = (uint)unaff_x23;
  if (uVar14 == 0) goto LAB_0592d5fc;
  uVar3 = *unaff_x21;
  if ((unaff_w22 & 1) != 0) {
    if (*(int *)(*(long *)PTR_DAT_072969e0 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    if ((uVar3 - 9 < 5) || (uVar3 == 0x20)) {
      if (1 < uVar14) {
        uVar16 = 1;
        do {
          uVar3 = unaff_x21[(int)uVar16];
          if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
            thunk_FUN_032cd7c0();
          }
          if ((4 < uVar3 - 9) && (uVar3 != 0x20)) goto LAB_0592d108;
          uVar16 = uVar16 + 1;
        } while (uVar14 != uVar16);
      }
      goto LAB_0592d5fc;
    }
  }
  uVar16 = 0;
LAB_0592d108:
  uVar19 = (uint)uVar3;
  uVar11 = unaff_x23 >> 0x20;
  if ((unaff_w22 >> 2 & 1) == 0) goto LAB_0592d110;
  if (unaff_x25 == 0) goto LAB_0592d644;
  lVar1 = *(long *)(unaff_x25 + 0x28);
  lVar2 = *(long *)(unaff_x25 + 0x30);
  uVar8 = thunk_FUN_057aa644(lVar1,*(undefined8 *)PTR_DAT_07293568,0);
  if (((uVar8 & 1) == 0) ||
     (uVar8 = thunk_FUN_057aa644(lVar2,*(undefined8 *)PTR_DAT_07279e78,0), (uVar8 & 1) == 0)) {
    lVar12 = *(long *)PTR_DAT_07296c98;
    if (uVar14 < uVar16) {
      FUN_05943e6c(0);
    }
    if ((*(byte *)(*(long *)(lVar12 + 0x20) + 0x135) & 1) == 0) {
      FUN_032934b8();
    }
    uVar14 = uVar14 - uVar16;
    unaff_x23 = (ulong)uVar14;
    unaff_x21 = unaff_x21 + (int)uVar16;
    uVar11 = FUN_057ab1f0(lVar1,0);
    if ((uVar11 & 1) == 0) {
      if (DAT_076d3762 == '\0') {
        thunk_FUN_032e1da0(PTR_DAT_07286280);
        DAT_076d3762 = '\x01';
      }
      if (lVar1 == 0) {
        uVar9 = 0;
        uVar10 = 0;
      }
      else {
        uVar9 = System_Convert__ToSByte(lVar1,0);
        uVar10 = *(undefined4 *)(lVar1 + 0x10);
      }
      uVar11 = FUN_059320ac(unaff_x21,unaff_x23,uVar9,uVar10,*(undefined8 *)PTR_DAT_0729a030);
      if ((uVar11 & 1) == 0) goto LAB_0592d2bc;
      if (lVar1 == 0) goto LAB_0592d644;
      uVar16 = *(uint *)(lVar1 + 0x10);
      if (uVar14 <= uVar16) goto LAB_0592d5fc;
      uVar19 = (uint)unaff_x21[(int)uVar16];
    }
    else {
LAB_0592d2bc:
      uVar11 = FUN_057ab1f0(lVar2,0);
      if ((uVar11 & 1) == 0) {
        if (DAT_076d3762 == '\0') {
          thunk_FUN_032e1da0(PTR_DAT_07286280);
          DAT_076d3762 = '\x01';
        }
        if (lVar2 == 0) {
          uVar9 = 0;
          uVar10 = 0;
        }
        else {
          uVar9 = System_Convert__ToSByte(lVar2,0);
          uVar10 = *(undefined4 *)(lVar2 + 0x10);
        }
        uVar11 = FUN_059320ac(unaff_x21,unaff_x23,uVar9,uVar10,*(undefined8 *)PTR_DAT_0729a030);
        if ((uVar11 & 1) != 0) {
          if (lVar2 == 0) {
LAB_0592d644:
                    /* WARNING: Subroutine does not return */
            FUN_032d5ee8();
          }
          uVar16 = *(uint *)(lVar2 + 0x10);
          if (uVar16 < uVar14) {
            uVar19 = (uint)unaff_x21[(int)uVar16];
            uVar11 = 0;
            iVar18 = -1;
            goto LAB_0592d35c;
          }
          goto LAB_0592d5fc;
        }
      }
      uVar16 = 0;
    }
    uVar11 = 0;
    iVar18 = 1;
LAB_0592d35c:
    puVar5 = PTR_DAT_072969e0;
    if (*(int *)(*(long *)PTR_DAT_072969e0 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    uVar14 = uVar19 - 0x30;
    if (uVar14 < 10) {
      uVar15 = (uint)unaff_x23;
      iStack000000000000001c = iVar18;
      if (uVar19 != 0x30) {
LAB_0592d3bc:
        uVar19 = uVar16 + 1;
        uVar17 = uVar16 + 9;
        iVar18 = -8;
        do {
          if (uVar15 <= uVar19) goto LAB_0592d630;
          uVar3 = unaff_x21[(int)(uVar16 + iVar18 + 9)];
          uVar19 = (uint)uVar3;
          if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
            thunk_FUN_032cd7c0();
          }
          if (9 < uVar3 - 0x30) {
            bVar6 = false;
            uVar17 = uVar16 + iVar18 + 9;
            goto LAB_0592d524;
          }
          uVar19 = uVar16 + iVar18 + 10;
          bVar6 = iVar18 != -1;
          iVar18 = iVar18 + 1;
          uVar4 = ((uint)uVar3 + uVar14 * 10) - 0x30;
          uVar14 = uVar4;
        } while (bVar6);
        if (uVar15 <= uVar19) {
LAB_0592d630:
          uVar9 = 1;
          iStack000000000000001c = uVar14 * iStack000000000000001c;
          goto LAB_0592d604;
        }
        uVar3 = unaff_x21[(int)uVar17];
        if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
        }
        if (9 < uVar3 - 0x30) goto LAB_0592d520;
        uVar14 = (uVar3 - 0x30) + uVar4 * 10;
        uVar17 = uVar16 + 10;
        iVar18 = 2 - iStack000000000000001c;
        if (-1 < 1 - iStack000000000000001c) {
          iVar18 = 1 - iStack000000000000001c;
        }
        bVar7 = (ulong)(uint)(iVar18 >> 1) + 0x7fffffff < (ulong)uVar14;
        bVar6 = 0xccccccc < (int)uVar4 || bVar7;
        if (uVar17 < uVar15) {
          do {
            uVar3 = unaff_x21[(int)uVar17];
            uVar19 = (uint)uVar3;
            if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
              thunk_FUN_032cd7c0();
            }
            if (9 < uVar3 - 0x30) goto LAB_0592d524;
            uVar17 = uVar17 + 1;
            bVar6 = true;
          } while (uVar15 != uVar17);
        }
        else if (0xccccccc >= (int)uVar4 && !bVar7) goto LAB_0592d630;
LAB_0592d5e8:
        iStack000000000000001c = 0;
        uVar9 = 0;
        *unaff_x27 = 1;
        goto LAB_0592d604;
      }
      do {
        uVar16 = uVar16 + 1;
        if (uVar15 <= uVar16) {
          uVar14 = 0;
          goto LAB_0592d630;
        }
        uVar3 = unaff_x21[(int)uVar16];
        uVar14 = uVar3 - 0x30;
      } while (uVar14 == 0);
      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      if (uVar14 < 10) goto LAB_0592d3bc;
      uVar17 = uVar16;
      uVar14 = 0;
LAB_0592d520:
      uVar19 = (uint)uVar3;
      bVar6 = false;
LAB_0592d524:
      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      if ((uVar19 - 9 < 5) || (uVar19 == 0x20)) {
        if ((unaff_w22 >> 1 & 1) != 0) {
          uVar17 = uVar17 + 1;
          if ((int)uVar17 < (int)uVar15) {
            puVar13 = unaff_x21 + (int)uVar17;
            do {
              if (uVar15 <= uVar17) {
                    /* WARNING: Subroutine does not return */
                Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
              }
              uVar3 = *puVar13;
              if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
                thunk_FUN_032cd7c0();
              }
              if ((4 < uVar3 - 9) && (uVar3 != 0x20)) goto LAB_0592d5a0;
              uVar17 = uVar17 + 1;
              puVar13 = puVar13 + 1;
            } while (uVar15 != uVar17);
          }
          else {
LAB_0592d5a0:
            if (uVar17 < uVar15) goto LAB_0592d5b4;
          }
          goto LAB_0592d5e0;
        }
      }
      else {
LAB_0592d5b4:
        if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
        }
        uVar11 = FUN_0592fca4(unaff_x21,unaff_x23 & 0xffffffff | uVar11 << 0x20,uVar17);
        if ((uVar11 & 1) != 0) {
LAB_0592d5e0:
          if (!bVar6) goto LAB_0592d630;
          goto LAB_0592d5e8;
        }
      }
    }
  }
  else {
    if (uVar19 != 0x2b) {
      if (uVar19 == 0x2d) {
        uVar16 = uVar16 + 1;
        if (uVar14 <= uVar16) goto LAB_0592d5fc;
        uVar19 = (uint)unaff_x21[(int)uVar16];
        iVar18 = -1;
      }
      else {
LAB_0592d110:
        iVar18 = 1;
      }
      goto LAB_0592d35c;
    }
    uVar16 = uVar16 + 1;
    if (uVar16 < uVar14) {
      uVar19 = (uint)unaff_x21[(int)uVar16];
      goto LAB_0592d110;
    }
  }
LAB_0592d5fc:
  iStack000000000000001c = 0;
  uVar9 = 0;
LAB_0592d604:
  *unaff_x19 = iStack000000000000001c;
  return uVar9;
}


