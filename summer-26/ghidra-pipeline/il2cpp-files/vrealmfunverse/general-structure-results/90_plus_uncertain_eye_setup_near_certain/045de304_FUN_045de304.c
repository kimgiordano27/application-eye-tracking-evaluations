/*
FUNCTION_NAME: FUN_045de304
ENTRY_POINT: 045de304
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 117
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ray_interaction
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_18;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_1;functionality_eye_api_context_without_clear_sink_hits_6
*/


undefined8
FUN_045de304(long param_1,undefined4 param_2,undefined8 *param_3,char param_4,long param_5)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  int *piVar12;
  int iVar13;
  long *plVar14;
  uint uVar15;
  undefined8 uVar16;
  uint uVar17;
  long lVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  
  *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
  local_64 = param_2;
  if (*(long *)(param_1 + 0x10) == 0) {
    FUN_045de224(param_1,0,*(undefined8 *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x10));
  }
  plVar14 = *(long **)(param_1 + 0x30);
  lVar18 = *(long *)(param_1 + 0x18);
  lVar7 = *(long *)(*(long *)(param_5 + 0x20) + 0xc0);
  if (plVar14 == (long *)0x0) {
    uVar4 = FUN_04d98018(&local_64,*(undefined8 *)(lVar7 + 400));
  }
  else {
    lVar7 = *(long *)(lVar7 + 8);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_02b76218(lVar7);
    }
    lVar8 = *plVar14;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar10 != 0) {
      piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == lVar7) {
          puVar5 = (undefined8 *)(lVar8 + (long)(*piVar12 + 1) * 0x10 + 0x138);
          goto FUN_045de3f0;
        }
        uVar10 = uVar10 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_02b7654c(plVar14,lVar7,1);
FUN_045de3f0:
    uVar4 = (*(code *)*puVar5)(plVar14,param_2,puVar5[1]);
  }
  lVar7 = *(long *)(param_1 + 0x10);
  if (lVar7 == 0) goto System_Array_EmptyInternalEnumerator<OVRPlugin_BoneCapsule>___cctor;
  uVar17 = *(uint *)(lVar7 + 0x18);
  uVar4 = uVar4 & 0x7fffffff;
  iVar13 = 0;
  if (uVar17 != 0) {
    iVar13 = (int)uVar4 / (int)uVar17;
  }
  uVar15 = uVar4 - iVar13 * uVar17;
  if (uVar15 < uVar17) {
    piVar12 = (int *)(lVar7 + (ulong)uVar15 * 4 + 0x20);
    uVar17 = *piVar12 - 1;
    if (plVar14 == (long *)0x0) {
      if (lVar18 == 0) goto System_Array_EmptyInternalEnumerator<OVRPlugin_BoneCapsule>___cctor;
      uVar16 = *(undefined8 *)(lVar18 + 0x18);
      uVar15 = (uint)uVar16;
      if (uVar17 < uVar15) {
        iVar13 = 0;
        lVar7 = lVar18 + 0x20;
        do {
          uVar15 = (uint)uVar16;
          if (*(uint *)(lVar7 + (long)(int)uVar17 * 0x24) == uVar4) {
            plVar14 = (long *)FUN_03421e68(*(undefined8 *)
                                            (*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x18));
            if (*(uint *)(lVar18 + 0x18) <= uVar17) goto LAB_045de7ac;
            if (plVar14 == (long *)0x0)
            goto System_Array_EmptyInternalEnumerator<OVRPlugin_BoneCapsule>___cctor;
            uVar10 = (**(code **)(*plVar14 + 0x1b8))
                               (plVar14,*(undefined4 *)(lVar7 + (long)(int)uVar17 * 0x24 + 8),
                                local_64,*(undefined8 *)(*plVar14 + 0x1c0));
            if ((uVar10 & 1) != 0) {
              if (param_4 == '\x02') {
                puVar6 = &local_68;
                lVar7 = *(long *)(*(long *)(param_5 + 0x20) + 0xc0);
                local_68 = local_64;
                goto LAB_045de794;
              }
              if (param_4 != '\x01') {
                return 0;
              }
              if (*(uint *)(lVar18 + 0x18) <= uVar17) goto LAB_045de7ac;
              uVar16 = param_3[2];
              uVar20 = param_3[1];
              uVar19 = *param_3;
              lVar7 = lVar7 + (long)(int)uVar17 * 0x24;
              goto LAB_045de75c;
            }
            uVar15 = *(uint *)(lVar18 + 0x18);
          }
          if (uVar15 <= uVar17) goto LAB_045de7ac;
          uVar17 = *(uint *)(lVar7 + (long)(int)uVar17 * 0x24 + 4);
          if ((int)uVar15 <= iVar13) {
            FUN_04d9cb20(0);
          }
          uVar16 = *(undefined8 *)(lVar18 + 0x18);
          iVar13 = iVar13 + 1;
          uVar15 = (uint)uVar16;
        } while (uVar17 < uVar15);
      }
    }
    else {
      if (lVar18 == 0) goto System_Array_EmptyInternalEnumerator<OVRPlugin_BoneCapsule>___cctor;
      uVar16 = *(undefined8 *)(lVar18 + 0x18);
      uVar15 = (uint)uVar16;
      if (uVar17 < uVar15) {
        iVar13 = 0;
        lVar7 = lVar18 + 0x20;
        do {
          uVar3 = local_64;
          uVar15 = (uint)uVar16;
          if (*(uint *)(lVar7 + (long)(int)uVar17 * 0x24) == uVar4) {
            lVar8 = *(long *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 8);
            uVar1 = *(undefined4 *)(lVar7 + (long)(int)uVar17 * 0x24 + 8);
            if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
              lVar8 = FUN_02b76218(lVar8);
            }
            lVar9 = *plVar14;
            uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar10 != 0) {
              piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar11 + -2) == lVar8) {
                  puVar5 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
                  goto LAB_045de4e4;
                }
                uVar10 = uVar10 - 1;
                piVar11 = piVar11 + 4;
              } while (uVar10 != 0);
            }
            puVar5 = (undefined8 *)FUN_02b7654c(plVar14,lVar8,0);
LAB_045de4e4:
            uVar10 = (*(code *)*puVar5)(plVar14,uVar1,uVar3,puVar5[1]);
            if ((uVar10 & 1) != 0) {
              if (param_4 == '\x02') {
                puVar6 = &local_6c;
                lVar7 = *(long *)(*(long *)(param_5 + 0x20) + 0xc0);
                local_6c = local_64;
LAB_045de794:
                uVar16 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                                   (*(undefined8 *)(lVar7 + 0x70),puVar6);
                FUN_04d9ca1c(uVar16,0);
                return 0;
              }
              if (param_4 != '\x01') {
                return 0;
              }
              if (uVar17 < *(uint *)(lVar18 + 0x18)) {
                lVar7 = lVar7 + (long)(int)uVar17 * 0x24;
                uVar16 = param_3[2];
                uVar20 = param_3[1];
                uVar19 = *param_3;
LAB_045de75c:
                *(undefined8 *)(lVar7 + 0x1c) = uVar16;
                *(undefined8 *)(lVar7 + 0x14) = uVar20;
                *(undefined8 *)(lVar7 + 0xc) = uVar19;
                return 1;
              }
              goto LAB_045de7ac;
            }
            uVar15 = *(uint *)(lVar18 + 0x18);
          }
          if (uVar15 <= uVar17) goto LAB_045de7ac;
          uVar17 = *(uint *)(lVar7 + (long)(int)uVar17 * 0x24 + 4);
          if ((int)uVar15 <= iVar13) {
            FUN_04d9cb20(0);
          }
          uVar16 = *(undefined8 *)(lVar18 + 0x18);
          iVar13 = iVar13 + 1;
          uVar15 = (uint)uVar16;
        } while (uVar17 < uVar15);
      }
    }
    if (*(int *)(param_1 + 0x28) < 1) {
      uVar17 = *(uint *)(param_1 + 0x20);
      if (uVar17 == uVar15) {
        FUN_045deb60(param_1,*(undefined8 *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x1b8));
        lVar7 = *(long *)(param_1 + 0x10);
        *(uint *)(param_1 + 0x20) = uVar15 + 1;
        if (lVar7 == 0) goto System_Array_EmptyInternalEnumerator<OVRPlugin_BoneCapsule>___cctor;
        uVar15 = *(uint *)(lVar7 + 0x18);
        iVar13 = 0;
        if (uVar15 != 0) {
          iVar13 = (int)uVar4 / (int)uVar15;
        }
        uVar2 = uVar4 - iVar13 * uVar15;
        if (uVar15 <= uVar2) goto LAB_045de7ac;
        lVar18 = *(long *)(param_1 + 0x18);
        piVar12 = (int *)(lVar7 + (ulong)uVar2 * 4 + 0x20);
      }
      else {
        lVar18 = *(long *)(param_1 + 0x18);
        *(uint *)(param_1 + 0x20) = uVar17 + 1;
      }
      if (lVar18 == 0) {
System_Array_EmptyInternalEnumerator<OVRPlugin_BoneCapsule>___cctor:
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      if (*(uint *)(lVar18 + 0x18) <= uVar17) goto LAB_045de7ac;
      lVar18 = lVar18 + (long)(int)uVar17 * 0x24;
    }
    else {
      uVar17 = *(uint *)(param_1 + 0x24);
      *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + -1;
      if (uVar15 <= uVar17) goto LAB_045de7ac;
      lVar18 = lVar18 + (long)(int)uVar17 * 0x24;
      *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(lVar18 + 0x24);
    }
    *(uint *)(lVar18 + 0x20) = uVar4;
    *(int *)(lVar18 + 0x24) = *piVar12 + -1;
    *(undefined4 *)(lVar18 + 0x28) = local_64;
    uVar19 = param_3[1];
    uVar16 = *param_3;
    *(undefined8 *)(lVar18 + 0x3c) = param_3[2];
    *(undefined8 *)(lVar18 + 0x34) = uVar19;
    *(undefined8 *)(lVar18 + 0x2c) = uVar16;
    *piVar12 = uVar17 + 1;
    return 1;
  }
LAB_045de7ac:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cacc();
}


