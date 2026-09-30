/*
FUNCTION_NAME: thunk_FUN_0581230c
ENTRY_POINT: 058125d8
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_10;telemetry_or_network_hits_6
*/


undefined8 thunk_FUN_0581230c(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  undefined4 uVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  long lVar17;
  ulong uVar18;
  undefined8 uStack_68;
  
  if ((DAT_066d2c5c & 1) == 0) {
    FUN_02b3c81c(PTR_DAT_063221e8);
    FUN_02b3c81c(Method_System_Collections_Generic_List<OpenXRInput_SerializedBinding>__ctor__);
    FUN_02b3c81c(PTR_DAT_06312d90);
    FUN_02b3c81c(PTR_DAT_06320370);
    FUN_02b3c81c(PTR_DAT_063221f0);
    FUN_02b3c81c(PTR_DAT_06312520);
    FUN_02b3c81c(Method_System_Collections_Generic_List<OpenXRInput_SerializedBinding>_Add__);
    FUN_02b3c81c(Method_System_Collections_Generic_List<OpenXRInput_SerializedBinding>_ToArray__);
    DAT_066d2c5c = 1;
  }
  lVar12 = *(long *)(param_1 + 0x78);
  uStack_68 = 0;
  if (lVar12 == 0) goto LAB_058125d4;
  iVar8 = *(int *)(lVar12 + 0x18);
  *(undefined4 *)(lVar12 + 0x18) = 0;
  *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
  if (0 < iVar8) {
    FUN_04d9e084(*(undefined8 *)(lVar12 + 0x10),0,iVar8,0);
  }
  plVar16 = (long *)(param_1 + 0x70);
  lVar12 = *plVar16;
  if (lVar12 == 0) {
LAB_058123f0:
    puVar2 = PTR_DAT_063221e8;
    uVar9 = FUN_05c425ac(0);
    lVar12 = FUN_02b3c908(*(undefined8 *)puVar2,uVar9);
    *plVar16 = lVar12;
    thunk_FUN_02bb0e9c(plVar16,lVar12);
  }
  else {
    iVar8 = FUN_05c425ac(0);
    if (iVar8 != *(int *)(lVar12 + 0x18)) goto LAB_058123f0;
  }
  FUN_05c4264c(*plVar16,0);
  puVar7 = Method_System_Collections_Generic_List<OpenXRInput_SerializedBinding>_ToArray__;
  puVar6 = Method_System_Collections_Generic_List<OpenXRInput_SerializedBinding>_Add__;
  puVar5 = Method_System_Collections_Generic_List<OpenXRInput_SerializedBinding>__ctor__;
  puVar4 = PTR_DAT_06320370;
  puVar3 = PTR_DAT_06312d90;
  puVar2 = PTR_DAT_06312520;
  lVar12 = *plVar16;
  if (lVar12 != 0) {
    if (0 < (int)*(ulong *)(lVar12 + 0x18)) {
      uVar18 = 0;
      uVar13 = *(ulong *)(lVar12 + 0x18) & 0xffffffff;
      do {
        if (uVar13 <= uVar18) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cacc();
        }
        lVar17 = *(long *)(lVar12 + 0x20 + uVar18 * 8);
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        uVar13 = FUN_05c8e378(lVar17,0,0);
        if ((uVar13 & 1) == 0) {
          if (lVar17 == 0) goto LAB_058125d4;
          iVar8 = FUN_05c40560(lVar17,0);
          if ((iVar8 != 4) && (iVar8 = FUN_05c40560(lVar17,0), iVar8 != 0x10)) {
            uVar13 = FUN_0317392c(lVar17,&uStack_68,*(undefined8 *)puVar5);
            if ((uVar13 & 1) == 0) {
              uVar11 = thunk_FUN_05c92238(lVar17,0);
              uVar11 = FUN_04c0a5c4(*(undefined8 *)puVar6,uVar11,*(undefined8 *)puVar7,0);
              if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                thunk_FUN_02b9ad44(*(long *)puVar3);
              }
              FUN_05c41e34(uVar11,0);
            }
            else {
              lVar10 = *(long *)(param_1 + 0x78);
              if (lVar10 == 0) goto LAB_058125d4;
              lVar14 = *(long *)(lVar10 + 0x10);
              lVar15 = *(long *)puVar4;
              *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
              if (lVar14 == 0) goto LAB_058125d4;
              uVar1 = *(uint *)(lVar10 + 0x18);
              if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                plVar16 = (long *)(lVar14 + (long)(int)uVar1 * 8 + 0x20);
                *plVar16 = lVar17;
                thunk_FUN_02bb0e9c(plVar16,lVar17);
              }
              else {
                FUN_037a6538(lVar10,lVar17,
                             *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
              }
            }
          }
        }
        uVar13 = (ulong)*(uint *)(lVar12 + 0x18);
        uVar18 = uVar18 + 1;
      } while ((long)uVar18 < (long)(int)*(uint *)(lVar12 + 0x18));
    }
    return *(undefined8 *)(param_1 + 0x78);
  }
LAB_058125d4:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


