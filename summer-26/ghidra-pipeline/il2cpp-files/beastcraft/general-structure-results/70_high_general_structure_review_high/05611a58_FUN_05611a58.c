/*
FUNCTION_NAME: FUN_05611a58
ENTRY_POINT: 05611a58
PROGRAM: beastcraft-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


int FUN_05611a58(ushort *param_1,ulong param_2,uint param_3,long param_4,ulong *param_5,
                undefined1 *param_6)

{
  long lVar1;
  ushort uVar2;
  bool bVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  undefined4 uVar8;
  long lVar9;
  int iVar10;
  ulong uVar11;
  ushort *puVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  ulong uVar17;
  uint uVar18;
  
  if ((bRam0000000006e8d850 & 1) == 0) {
    FUN_02e3ca1c(PTR_DAT_06a403c8);
    FUN_02e3ca1c(PTR_DAT_06a808e8);
    FUN_02e3ca1c(PTR_DAT_06a403d0);
    FUN_02e3ca1c(PTR_DAT_06a3a278);
    FUN_02e3ca1c(PTR_DAT_06a7da68);
    FUN_02e3ca1c(PTR_DAT_06a6cb50);
    bRam0000000006e8d850 = 1;
  }
  puVar4 = PTR_DAT_06a808e8;
  uVar13 = (uint)param_2;
  if (uVar13 != 0) {
    uVar2 = *param_1;
    if ((param_3 & 1) != 0) {
      if (*(int *)(*(long *)PTR_DAT_06a808e8 + 0xe4) == 0) {
        thunk_FUN_02e9a04c();
      }
      if ((uVar2 - 9 < 5) || (uVar2 == 0x20)) {
        if (uVar13 != 1) {
          lVar6 = *(long *)puVar4;
          uVar15 = 1;
          do {
            uVar2 = param_1[(int)uVar15];
            if (*(int *)(lVar6 + 0xe4) == 0) {
              thunk_FUN_02e9a04c();
              lVar6 = *(long *)puVar4;
            }
            if ((4 < uVar2 - 9) && (uVar2 != 0x20)) goto LAB_05611af8;
            uVar15 = uVar15 + 1;
          } while (uVar13 != uVar15);
        }
        goto LAB_05611ff0;
      }
    }
    uVar15 = 0;
LAB_05611af8:
    uVar18 = (uint)uVar2;
    uVar17 = param_2 >> 0x20;
    if ((param_3 >> 2 & 1) == 0) {
LAB_05611b04:
      iVar16 = 1;
      uVar7 = uVar17;
      goto LAB_05611d80;
    }
    if (param_4 == 0) goto LAB_0561205c;
    lVar6 = *(long *)(param_4 + 0x28);
    lVar1 = *(long *)(param_4 + 0x30);
    uVar7 = thunk_FUN_0548b788(lVar6,*(undefined8 *)PTR_DAT_06a7da68,0);
    if (((uVar7 & 1) == 0) ||
       (uVar7 = thunk_FUN_0548b788(lVar1,*(undefined8 *)PTR_DAT_06a6cb50,0), (uVar7 & 1) == 0)) {
      uVar14 = uVar13 - uVar15;
      param_2 = (ulong)uVar14;
      lVar9 = *(long *)PTR_DAT_06a403d0;
      if (uVar13 < uVar15) {
        FUN_056265f0(0);
      }
      if ((*(ushort *)(*(long *)(lVar9 + 0x20) + 0x135) & 1) == 0) {
        FUN_02e7568c();
      }
      param_1 = param_1 + (int)uVar15;
      uVar17 = FUN_0548ca18(lVar6,0);
      if ((uVar17 & 1) == 0) {
        if (DAT_06e860f0 == '\0') {
          FUN_02e3ca1c(PTR_DAT_06a3a270);
          DAT_06e860f0 = '\x01';
        }
        if (lVar6 == 0) {
          uVar5 = 0;
          uVar8 = 0;
        }
        else {
          uVar5 = FUN_0548a2e4(lVar6,0);
          uVar8 = *(undefined4 *)(lVar6 + 0x10);
        }
        uVar17 = FUN_0324ba64(param_1,param_2,uVar5,uVar8,*(undefined8 *)PTR_DAT_06a403c8);
        if ((uVar17 & 1) != 0) {
          if (lVar6 == 0) goto LAB_0561205c;
          uVar15 = *(uint *)(lVar6 + 0x10);
          uVar17 = 0;
          if (uVar14 <= uVar15) goto LAB_05611ff0;
          iVar16 = 1;
          goto LAB_05611d7c;
        }
      }
      uVar17 = FUN_0548ca18(lVar1,0);
      if ((uVar17 & 1) == 0) {
        if (DAT_06e860f0 == '\0') {
          FUN_02e3ca1c(PTR_DAT_06a3a270);
          DAT_06e860f0 = '\x01';
        }
        if (lVar1 == 0) {
          uVar5 = 0;
          uVar8 = 0;
        }
        else {
          uVar5 = FUN_0548a2e4(lVar1,0);
          uVar8 = *(undefined4 *)(lVar1 + 0x10);
        }
        uVar17 = FUN_0324ba64(param_1,param_2,uVar5,uVar8,*(undefined8 *)PTR_DAT_06a403c8);
        if ((uVar17 & 1) != 0) {
          if (lVar1 == 0) {
LAB_0561205c:
                    /* WARNING: Subroutine does not return */
            FUN_02e3ccc4();
          }
          uVar15 = *(uint *)(lVar1 + 0x10);
          iVar16 = 0;
          uVar17 = 0;
          if (uVar14 <= uVar15) goto LAB_05611ff4;
          goto LAB_05611d7c;
        }
        uVar7 = 0;
        uVar15 = 0;
        iVar16 = 1;
      }
      else {
        uVar7 = 0;
        uVar15 = 0;
        iVar16 = 1;
      }
    }
    else {
      if (uVar18 == 0x2d) {
        uVar15 = uVar15 + 1;
        iVar16 = 0;
        if (uVar13 <= uVar15) {
          uVar17 = 0;
          goto LAB_05611ff4;
        }
      }
      else {
        if (uVar18 != 0x2b) goto LAB_05611b04;
        uVar15 = uVar15 + 1;
        if (uVar13 <= uVar15) goto LAB_05611ff0;
        iVar16 = 1;
      }
LAB_05611d7c:
      uVar18 = (uint)param_1[(int)uVar15];
      uVar7 = uVar17;
    }
LAB_05611d80:
    puVar4 = PTR_DAT_06a808e8;
    if (*(int *)(*(long *)PTR_DAT_06a808e8 + 0xe4) == 0) {
      thunk_FUN_02e9a04c();
    }
    uVar13 = uVar18 - 0x30;
    if (uVar13 < 10) {
      uVar14 = (uint)param_2;
      if (uVar18 == 0x30) {
        do {
          uVar15 = uVar15 + 1;
          if (uVar14 <= uVar15) {
            uVar17 = 0;
            iVar16 = 1;
            goto LAB_05611ff4;
          }
          uVar2 = param_1[(int)uVar15];
          uVar11 = (ulong)uVar2;
        } while (uVar2 == 0x30);
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          thunk_FUN_02e9a04c();
        }
        uVar13 = uVar2 - 0x30;
        if (uVar13 < 10) goto Oculus_Platform_Callback__FlushJoinIntentNotificationQueue;
        uVar17 = 0;
        uVar13 = uVar15;
LAB_05611f10:
        uVar15 = (uint)uVar11;
        bVar3 = false;
LAB_05611f14:
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          thunk_FUN_02e9a04c();
        }
        if ((uVar15 - 9 < 5) || (uVar15 == 0x20)) {
          if ((param_3 >> 1 & 1) == 0) goto LAB_05611ff0;
          uVar13 = uVar13 + 1;
          if ((int)uVar13 < (int)uVar14) {
            puVar12 = param_1 + (int)uVar13;
            do {
              if (uVar14 <= uVar13) {
                    /* WARNING: Subroutine does not return */
                FUN_02e3cccc();
              }
              uVar2 = *puVar12;
              if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                thunk_FUN_02e9a04c();
              }
              if ((4 < uVar2 - 9) && (uVar2 != 0x20))
              goto Oculus_Platform_Callback_RequestCallback___ctor;
              uVar13 = uVar13 + 1;
              puVar12 = puVar12 + 1;
            } while (uVar14 != uVar13);
            if (bVar3) goto LAB_05612038;
            goto LAB_05612020;
          }
Oculus_Platform_Callback_RequestCallback___ctor:
          if (uVar14 <= uVar13) goto FUN_05611fe4;
        }
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          thunk_FUN_02e9a04c();
        }
        uVar7 = FUN_0561292c(param_1,param_2 & 0xffffffff | uVar7 << 0x20,uVar13);
        if ((uVar7 & 1) == 0) goto LAB_05611ff0;
FUN_05611fe4:
        if (!bVar3) goto LAB_05612020;
      }
      else {
Oculus_Platform_Callback__FlushJoinIntentNotificationQueue:
        uVar17 = (ulong)uVar13;
        uVar13 = uVar15 + 0x13;
        iVar10 = 1;
        do {
          if (uVar14 <= uVar15 + iVar10) goto LAB_05612020;
          uVar2 = param_1[(int)(uVar15 + iVar10)];
          if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
            thunk_FUN_02e9a04c();
          }
          if (9 < uVar2 - 0x30) {
            uVar13 = uVar15 + iVar10;
            uVar11 = (ulong)(uint)uVar2;
            goto LAB_05611f10;
          }
          iVar10 = iVar10 + 1;
          uVar17 = ((ulong)uVar2 + uVar17 * 10) - 0x30;
        } while (iVar10 != 0x13);
        if (uVar13 < uVar14) {
          uVar2 = param_1[(int)uVar13];
          uVar11 = (ulong)uVar2;
          if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
            thunk_FUN_02e9a04c();
          }
          if (9 < uVar2 - 0x30) goto LAB_05611f10;
          uVar13 = uVar15 + 0x14;
          if ((0x1999999999999999 < uVar17) ||
             ((bVar3 = false, uVar17 == 0x1999999999999999 && (0x35 < uVar2)))) {
            bVar3 = true;
          }
          uVar17 = (uVar11 + uVar17 * 10) - 0x30;
          if (uVar14 <= uVar13) goto FUN_05611fe4;
          lVar6 = *(long *)puVar4;
          do {
            uVar2 = param_1[(int)uVar13];
            uVar15 = (uint)uVar2;
            if (*(int *)(lVar6 + 0xe4) == 0) {
              thunk_FUN_02e9a04c();
              lVar6 = *(long *)puVar4;
            }
            if (9 < uVar2 - 0x30) goto LAB_05611f14;
            uVar13 = uVar13 + 1;
            bVar3 = true;
          } while (uVar14 != uVar13);
        }
        else {
LAB_05612020:
          if (uVar17 == 0) {
            iVar16 = 1;
          }
          if (iVar16 != 0) {
            iVar16 = 1;
            goto LAB_05611ff4;
          }
        }
      }
LAB_05612038:
      uVar17 = 0;
      iVar16 = 0;
      *param_6 = 1;
      goto LAB_05611ff4;
    }
  }
LAB_05611ff0:
  uVar17 = 0;
  iVar16 = 0;
LAB_05611ff4:
  *param_5 = uVar17;
  return iVar16;
}


