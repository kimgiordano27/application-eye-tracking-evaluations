/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$SerializeConvertable
ENTRY_POINT: 0592e664
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


undefined8
Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__SerializeConvertable
          (ushort *param_1,ulong param_2,uint param_3,long param_4,uint *param_5,undefined1 *param_6
          )

{
  long lVar1;
  long lVar2;
  ushort uVar3;
  undefined *puVar4;
  bool bVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  int iVar9;
  long unaff_x20;
  ulong uVar10;
  long lVar11;
  ushort *puVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uStack000000000000001c;
  
  if ((*(byte *)(unaff_x20 + 0x3e2) & 1) == 0) {
    thunk_FUN_032e1da0(PTR_DAT_0729a030);
    thunk_FUN_032e1da0(PTR_DAT_072969e0);
    thunk_FUN_032e1da0(PTR_DAT_07296c98);
    thunk_FUN_032e1da0(PTR_DAT_07290a70);
    thunk_FUN_032e1da0(PTR_DAT_07293568);
    thunk_FUN_032e1da0(PTR_DAT_07279e78);
    *(undefined1 *)(unaff_x20 + 0x3e2) = 1;
  }
  puVar4 = PTR_DAT_072969e0;
  uVar13 = (uint)param_2;
  if (uVar13 == 0) goto LAB_0592ebd0;
  uVar3 = *param_1;
  if ((param_3 & 1) != 0) {
    if (*(int *)(*(long *)PTR_DAT_072969e0 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    if ((uVar3 - 9 < 5) || (uVar3 == 0x20)) {
      if (1 < uVar13) {
        uVar15 = 1;
        do {
          uVar3 = param_1[(int)uVar15];
          if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
            thunk_FUN_032cd7c0();
          }
          if ((4 < uVar3 - 9) && (uVar3 != 0x20)) goto LAB_0592e6e4;
          uVar15 = uVar15 + 1;
        } while (uVar13 != uVar15);
      }
      goto LAB_0592ebd0;
    }
  }
  uVar15 = 0;
LAB_0592e6e4:
  uVar17 = (uint)uVar3;
  uVar10 = param_2 >> 0x20;
  if ((param_3 >> 2 & 1) == 0) goto LAB_0592e6ec;
  if (param_4 == 0) goto LAB_0592ec14;
  lVar1 = *(long *)(param_4 + 0x28);
  lVar2 = *(long *)(param_4 + 0x30);
  uVar6 = thunk_FUN_057aa644(lVar1,*(undefined8 *)PTR_DAT_07293568,0);
  if (((uVar6 & 1) == 0) ||
     (uVar6 = thunk_FUN_057aa644(lVar2,*(undefined8 *)PTR_DAT_07279e78,0), (uVar6 & 1) == 0)) {
    lVar11 = *(long *)PTR_DAT_07296c98;
    if (uVar13 < uVar15) {
      FUN_05943e6c(0);
    }
    if ((*(byte *)(*(long *)(lVar11 + 0x20) + 0x135) & 1) == 0) {
      FUN_032934b8();
    }
    uVar13 = uVar13 - uVar15;
    param_2 = (ulong)uVar13;
    param_1 = param_1 + (int)uVar15;
    uVar10 = FUN_057ab1f0(lVar1,0);
    if ((uVar10 & 1) == 0) {
      if (DAT_076d3762 == '\0') {
        thunk_FUN_032e1da0(PTR_DAT_07286280);
        DAT_076d3762 = '\x01';
      }
      if (lVar1 == 0) {
        uVar7 = 0;
        uVar8 = 0;
      }
      else {
        uVar7 = System_Convert__ToSByte(lVar1,0);
        uVar8 = *(undefined4 *)(lVar1 + 0x10);
      }
      uVar10 = FUN_059320ac(param_1,param_2,uVar7,uVar8,*(undefined8 *)PTR_DAT_0729a030);
      if ((uVar10 & 1) == 0) goto LAB_0592e894;
      if (lVar1 == 0) goto LAB_0592ec14;
      uVar15 = *(uint *)(lVar1 + 0x10);
      if (uVar13 <= uVar15) goto LAB_0592ebd0;
      uVar17 = (uint)param_1[(int)uVar15];
    }
    else {
LAB_0592e894:
      uVar10 = FUN_057ab1f0(lVar2,0);
      if ((uVar10 & 1) == 0) {
        if (DAT_076d3762 == '\0') {
          thunk_FUN_032e1da0(PTR_DAT_07286280);
          DAT_076d3762 = '\x01';
        }
        if (lVar2 == 0) {
          uVar7 = 0;
          uVar8 = 0;
        }
        else {
          uVar7 = System_Convert__ToSByte(lVar2,0);
          uVar8 = *(undefined4 *)(lVar2 + 0x10);
        }
        uVar10 = FUN_059320ac(param_1,param_2,uVar7,uVar8,*(undefined8 *)PTR_DAT_0729a030);
        if ((uVar10 & 1) != 0) {
          if (lVar2 == 0) {
LAB_0592ec14:
                    /* WARNING: Subroutine does not return */
            FUN_032d5ee8();
          }
          uVar15 = *(uint *)(lVar2 + 0x10);
          if (uVar13 <= uVar15) goto LAB_0592ebd0;
          uVar17 = (uint)param_1[(int)uVar15];
          uVar10 = 0;
          uVar13 = 0;
          goto LAB_0592e934;
        }
      }
      uVar15 = 0;
    }
    uVar10 = 0;
    uVar13 = 1;
LAB_0592e934:
    puVar4 = PTR_DAT_072969e0;
    if (*(int *)(*(long *)PTR_DAT_072969e0 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    uVar16 = uVar17 - 0x30;
    if (uVar16 < 10) {
      uVar14 = (uint)param_2;
      uStack000000000000001c = uVar13;
      if (uVar17 != 0x30) {
LAB_0592e994:
        uVar13 = uVar15 + 1;
        uVar17 = uVar15 + 9;
        iVar9 = -8;
        do {
          if (uVar14 <= uVar13) goto LAB_0592ebb4;
          uVar3 = param_1[(int)(uVar15 + iVar9 + 9)];
          uVar13 = (uint)uVar3;
          if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
            thunk_FUN_032cd7c0();
          }
          if (9 < uVar3 - 0x30) {
            bVar5 = false;
            uVar17 = uVar15 + iVar9 + 9;
            goto LAB_0592eaf0;
          }
          uVar13 = uVar15 + iVar9 + 10;
          bVar5 = iVar9 != -1;
          iVar9 = iVar9 + 1;
          uVar16 = ((uint)uVar3 + uVar16 * 10) - 0x30;
        } while (bVar5);
        if (uVar13 < uVar14) {
          uVar3 = param_1[(int)uVar17];
          if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
            thunk_FUN_032cd7c0();
          }
          uVar13 = uVar3 - 0x30;
          if (9 < uVar13) goto LAB_0592eaec;
          uVar17 = uVar15 + 10;
          if ((0x19999999 < uVar16) || ((bVar5 = false, uVar16 == 0x19999999 && (0x35 < uVar3)))) {
            bVar5 = true;
          }
          uVar16 = uVar13 + uVar16 * 10;
          if (uVar14 <= uVar17) goto LAB_0592ebb0;
          do {
            uVar3 = param_1[(int)uVar17];
            uVar13 = (uint)uVar3;
            if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
              thunk_FUN_032cd7c0();
            }
            if (9 < uVar3 - 0x30) goto LAB_0592eaf0;
            uVar17 = uVar17 + 1;
            bVar5 = true;
          } while (uVar14 != uVar17);
        }
        else {
LAB_0592ebb4:
          if ((uStack000000000000001c & 1) != 0 || uVar16 == 0) {
LAB_0592ebc8:
            uVar7 = 1;
            goto LAB_0592ebd8;
          }
        }
LAB_0592ebfc:
        uVar16 = 0;
        uVar7 = 0;
        *param_6 = 1;
        goto LAB_0592ebd8;
      }
      do {
        uVar15 = uVar15 + 1;
        if (uVar14 <= uVar15) {
          uVar16 = 0;
          goto LAB_0592ebc8;
        }
        uVar3 = param_1[(int)uVar15];
        uVar16 = uVar3 - 0x30;
      } while (uVar16 == 0);
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      if (uVar16 < 10) goto LAB_0592e994;
      uVar16 = 0;
      uVar17 = uVar15;
LAB_0592eaec:
      uVar13 = (uint)uVar3;
      bVar5 = false;
LAB_0592eaf0:
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      if ((uVar13 - 9 < 5) || (uVar13 == 0x20)) {
        if ((param_3 >> 1 & 1) != 0) {
          uVar17 = uVar17 + 1;
          if ((int)uVar17 < (int)uVar14) {
            puVar12 = param_1 + (int)uVar17;
            do {
              if (uVar14 <= uVar17) {
                    /* WARNING: Subroutine does not return */
                Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
              }
              uVar3 = *puVar12;
              if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                thunk_FUN_032cd7c0();
              }
              if ((4 < uVar3 - 9) && (uVar3 != 0x20)) goto LAB_0592eb6c;
              uVar17 = uVar17 + 1;
              puVar12 = puVar12 + 1;
            } while (uVar14 != uVar17);
          }
          else {
LAB_0592eb6c:
            if (uVar17 < uVar14) goto LAB_0592eb80;
          }
          goto LAB_0592ebb0;
        }
      }
      else {
LAB_0592eb80:
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
        }
        uVar10 = FUN_0592fca4(param_1,param_2 & 0xffffffff | uVar10 << 0x20,uVar17);
        if ((uVar10 & 1) != 0) {
LAB_0592ebb0:
          if (!bVar5) goto LAB_0592ebb4;
          goto LAB_0592ebfc;
        }
      }
    }
  }
  else {
    if (uVar17 != 0x2d) {
      if (uVar17 == 0x2b) {
        uVar15 = uVar15 + 1;
        if (uVar13 <= uVar15) goto LAB_0592ebd0;
        uVar17 = (uint)param_1[(int)uVar15];
      }
LAB_0592e6ec:
      uVar13 = 1;
      goto LAB_0592e934;
    }
    uVar15 = uVar15 + 1;
    if (uVar15 < uVar13) {
      uVar17 = (uint)param_1[(int)uVar15];
      uVar13 = 0;
      goto LAB_0592e934;
    }
  }
LAB_0592ebd0:
  uVar16 = 0;
  uVar7 = 0;
LAB_0592ebd8:
  *param_5 = uVar16;
  return uVar7;
}


