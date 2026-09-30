/*
FUNCTION_NAME: FUN_053db9e4
ENTRY_POINT: 053db9e4
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_16;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x053dc07c) */
/* WARNING: Removing unreachable block (ram,0x053dc100) */

void FUN_053db9e4(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  byte bVar4;
  int iVar5;
  undefined4 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  undefined8 *puVar14;
  ulong uVar15;
  int *piVar16;
  long lVar17;
  ulong uVar18;
  ulong local_88;
  long **pplStack_80;
  long *local_78;
  undefined4 local_6c;
  long *local_68;
  
  local_68 = param_1;
  if ((DAT_066d0a05 & 1) == 0) {
    FUN_02b3c81c(PTR_DAT_06336ed0);
    FUN_02b3c81c(PTR_DAT_06312f78);
    FUN_02b3c81c(System_MissingMemberException_TypeInfo);
    FUN_02b3c81c(System_Reflection_MissingMetadataException_TypeInfo);
    FUN_02b3c81c(PTR_DAT_06312f90);
    FUN_02b3c81c(PTR_DAT_0631c5b8);
    FUN_02b3c81c(UnityEngine_Rendering_SphericalHarmonicsL2_TypeInfo);
    FUN_02b3c81c(PTR_DAT_0631d458);
    FUN_02b3c81c(PTR_DAT_0631d8e0);
    FUN_02b3c81c(OVRPlugin_Sizei_TypeInfo);
    DAT_066d0a05 = 1;
  }
  local_6c = 0;
  local_78 = (long *)0x0;
  if (param_1 == (long *)0x0) goto LAB_053dc0e8;
  uVar7 = (**(code **)(*param_1 + 0x398))(param_1,*(undefined8 *)(*param_1 + 0x3a0));
  if ((uVar7 & 1) != 0) {
    local_6c = (**(code **)(*param_1 + 0x468))(param_1,*(undefined8 *)(*param_1 + 0x470));
    uVar8 = FUN_04d78c14(&local_6c,0);
    FUN_04c0a5c4(*(undefined8 *)UnityEngine_Rendering_SphericalHarmonicsL2_TypeInfo,uVar8,
                 *(undefined8 *)PTR_DAT_0631d8e0,0);
    return;
  }
  uVar7 = FUN_04d952d0(param_1,0);
  lVar17 = 0;
  if (((uVar7 & 1) != 0) &&
     (lVar17 = FUN_053dc950(&local_68), param_1 = local_68, local_68 == (long *)0x0))
  goto LAB_053dc0e8;
  uVar8 = (**(code **)(*param_1 + 0x1c8))(param_1,*(undefined8 *)(*param_1 + 0x1d0));
  if (*(int *)(*(long *)(PTR_DAT_06312310 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02b9ad44(*(long *)(PTR_DAT_06312310 + 0xe0));
  }
  uVar7 = FUN_04d938a0(uVar8,0,0);
  if ((uVar7 & 1) == 0) {
    if (local_68 == (long *)0x0) goto LAB_053dc0e8;
    lVar9 = (**(code **)(*local_68 + 0x2b8))(local_68,*(undefined8 *)(*local_68 + 0x2c0));
    if (lVar9 == 0) {
      iVar5 = 0;
    }
    else {
      if ((local_68 == (long *)0x0) ||
         (lVar9 = (**(code **)(*local_68 + 0x2b8))(local_68,*(undefined8 *)(*local_68 + 0x2c0)),
         lVar9 == 0)) goto LAB_053dc0e8;
      iVar5 = *(int *)(lVar9 + 0x10);
      if (0 < iVar5) {
        iVar5 = iVar5 + 1;
      }
    }
    lVar9 = FUN_053d6158(local_68);
    if ((lVar9 == 0) || (lVar9 = FUN_04c0e450(lVar9,iVar5,0), lVar9 == 0)) goto LAB_053dc0e8;
    lVar9 = FUN_04c0c3d8(lVar9,0x2b,0x2e,0);
  }
  else {
    if (local_68 == (long *)0x0) goto LAB_053dc0e8;
    lVar9 = (**(code **)(*local_68 + 0x1b8))(local_68,*(undefined8 *)(*local_68 + 0x1c0));
  }
  if (lVar17 != 0) {
    lVar9 = FUN_04bffdac(lVar17,lVar9,0);
  }
  if (local_68 == (long *)0x0) goto LAB_053dc0e8;
  uVar7 = (**(code **)(*local_68 + 0x3b8))(local_68,*(undefined8 *)(*local_68 + 0x3c0));
  puVar1 = PTR_DAT_0631c5b8;
  if ((uVar7 & 1) == 0) goto LAB_053dc0c0;
  plVar10 = (long *)thunk_FUN_02b79644(*(undefined8 *)PTR_DAT_0631c5b8);
  FUN_04c149dc(plVar10,0);
  plVar11 = (long *)thunk_FUN_02b79644(*(undefined8 *)puVar1);
  FUN_04c149dc(plVar11,0);
  if (lVar9 == 0) goto LAB_053dc0e8;
  iVar5 = FUN_04c0eca4(lVar9,0x5b,0);
  if (-1 < iVar5) {
    lVar9 = FUN_04c0c288(lVar9,0,iVar5,0);
  }
  plVar12 = (long *)FUN_053dcb1c(lVar9,plVar10);
  if (((local_68 == (long *)0x0) ||
      (uVar7 = (**(code **)(*local_68 + 0x3c8))(local_68,*(undefined8 *)(*local_68 + 0x3d0)),
      local_68 == (long *)0x0)) ||
     (lVar17 = (**(code **)(*local_68 + 0x458))(local_68,*(undefined8 *)(*local_68 + 0x460)),
     puVar3 = UnityEngine_Rendering_SphericalHarmonicsL2_TypeInfo, puVar2 = PTR_DAT_0631d8e0,
     puVar1 = PTR_DAT_0631d458, lVar17 == 0)) goto LAB_053dc0e8;
  if ((int)*(ulong *)(lVar17 + 0x18) < 1) {
    bVar4 = 1;
  }
  else {
    uVar18 = 0;
    uVar15 = *(ulong *)(lVar17 + 0x18) & 0xffffffff;
    bVar4 = 1;
    do {
      if (uVar15 <= uVar18) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cacc();
      }
      if ((uVar7 & 1) == 0) {
        local_88 = local_88 & 0xffffffffffffff00;
        lVar9 = FUN_053db378(*(undefined8 *)(lVar17 + 0x20 + uVar18 * 8),&local_88);
        if (((lVar9 == 0) || (plVar10 == (long *)0x0)) ||
           ((FUN_04c1633c(plVar10,*(undefined8 *)(lVar9 + 0x10),0), plVar11 == (long *)0x0 ||
            (lVar13 = FUN_04c1633c(plVar11,*(undefined8 *)puVar1,0), lVar13 == 0))))
        goto LAB_053dc0e8;
        FUN_04c1633c(lVar13,*(undefined8 *)(lVar9 + 0x18),0);
        if ((bVar4 & 1) == 0) {
          bVar4 = 0;
        }
        else {
          bVar4 = FUN_053dca68(*(undefined8 *)(lVar9 + 0x18));
        }
      }
      else {
        if (((plVar10 == (long *)0x0) ||
            (lVar9 = FUN_04c1633c(plVar10,*(undefined8 *)puVar3,0), lVar9 == 0)) ||
           (lVar9 = FUN_04c1727c(lVar9,uVar18 & 0xffffffff,0), lVar9 == 0)) goto LAB_053dc0e8;
        FUN_04c1633c(lVar9,*(undefined8 *)puVar2,0);
      }
      uVar15 = (ulong)*(uint *)(lVar17 + 0x18);
      uVar18 = uVar18 + 1;
    } while ((long)uVar18 < (long)(int)*(uint *)(lVar17 + 0x18));
  }
  if ((uVar7 & 1) != 0) {
    if (plVar10 == (long *)0x0) goto LAB_053dc0e8;
    uVar8 = *(undefined8 *)OVRPlugin_Sizei_TypeInfo;
    goto LAB_053dc0a0;
  }
  if (plVar12 == (long *)0x0) goto LAB_053dc0e8;
  lVar17 = *plVar12;
  uVar7 = (ulong)*(ushort *)(lVar17 + 0x12e);
  if (uVar7 != 0) {
    piVar16 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
    do {
      if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_06336ed0) {
        puVar14 = (undefined8 *)(lVar17 + (long)*piVar16 * 0x10 + 0x138);
        goto LAB_053dbe60;
      }
      uVar7 = uVar7 - 1;
      piVar16 = piVar16 + 4;
    } while (uVar7 != 0);
  }
  puVar14 = (undefined8 *)FUN_02b7654c(plVar12,*(long *)PTR_DAT_06336ed0,0);
LAB_053dbe60:
  iVar5 = (*(code *)*puVar14)(plVar12,puVar14[1]);
  if ((iVar5 < 2 & bVar4) == 0) {
    lVar17 = *plVar12;
    uVar7 = (ulong)*(ushort *)(lVar17 + 0x12e);
    if (uVar7 != 0) {
      piVar16 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)System_MissingMemberException_TypeInfo) {
          puVar14 = (undefined8 *)(lVar17 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_053dbed8;
        }
        uVar7 = uVar7 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar7 != 0);
    }
    puVar14 = (undefined8 *)FUN_02b7654c(plVar12,*(long *)System_MissingMemberException_TypeInfo,0);
LAB_053dbed8:
    local_78 = (long *)(*(code *)*puVar14)(plVar12,puVar14[1]);
    puVar3 = System_Reflection_MissingMetadataException_TypeInfo;
    puVar2 = PTR_DAT_0631d458;
    puVar1 = PTR_DAT_06312f90;
    pplStack_80 = &local_78;
    local_88 = 0;
    do {
      plVar12 = local_78;
      if (local_78 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      lVar17 = *local_78;
      uVar7 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar7 != 0) {
        piVar16 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)puVar1) {
            puVar14 = (undefined8 *)(lVar17 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_053dbf5c;
          }
          uVar7 = uVar7 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar7 != 0);
      }
      puVar14 = (undefined8 *)FUN_02b7654c(local_78,*(long *)puVar1,0);
LAB_053dbf5c:
      uVar7 = (*(code *)*puVar14)(plVar12,puVar14[1]);
      plVar12 = local_78;
      if ((uVar7 & 1) == 0) {
        if (local_78 == (long *)0x0) goto LAB_053dc070;
        lVar17 = *local_78;
        uVar7 = (ulong)*(ushort *)(lVar17 + 0x12e);
        if (uVar7 == 0) goto LAB_053dc048;
        piVar16 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        goto LAB_053dc030;
      }
      if (local_78 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      lVar17 = *local_78;
      uVar7 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar7 != 0) {
        piVar16 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)puVar3) {
            puVar14 = (undefined8 *)(lVar17 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_053dbfc0;
          }
          uVar7 = uVar7 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar7 != 0);
      }
      puVar14 = (undefined8 *)FUN_02b7654c(local_78,*(long *)puVar3,0);
LAB_053dbfc0:
      uVar6 = (*(code *)*puVar14)(plVar12,puVar14[1]);
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      lVar17 = FUN_04c175c0(plVar11,0,uVar6,0);
      if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      FUN_04c17414(lVar17,0,*(undefined8 *)puVar2,0);
    } while( true );
  }
  if (plVar10 == (long *)0x0) goto LAB_053dc0e8;
  goto LAB_053dc0ac;
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar16 = piVar16 + 4;
    if (uVar7 == 0) break;
LAB_053dc030:
    if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_06312f78) {
      puVar14 = (undefined8 *)(lVar17 + (long)*piVar16 * 0x10 + 0x138);
      goto LAB_053dc064;
    }
  }
LAB_053dc048:
  puVar14 = (undefined8 *)FUN_02b7654c(local_78,*(long *)PTR_DAT_06312f78,0);
LAB_053dc064:
  (*(code *)*puVar14)(plVar12,puVar14[1]);
LAB_053dc070:
  if (plVar11 == (long *)0x0) {
LAB_053dc0e8:
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  (**(code **)(*plVar11 + 0x168))(plVar11,*(undefined8 *)(*plVar11 + 0x170));
  uVar8 = FUN_053dcecc();
  if (plVar10 == (long *)0x0) goto LAB_053dc0e8;
LAB_053dc0a0:
  FUN_04c1633c(plVar10,uVar8,0);
LAB_053dc0ac:
  lVar9 = (**(code **)(*plVar10 + 0x168))(plVar10,*(undefined8 *)(*plVar10 + 0x170));
LAB_053dc0c0:
  FUN_053d6258(lVar9);
  return;
}


