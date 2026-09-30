/*
FUNCTION_NAME: FUN_05998300
ENTRY_POINT: 05998300
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_3;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


long FUN_05998300(undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4,
                 long param_5,undefined8 param_6)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  bool bVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  undefined8 uVar18;
  byte bVar19;
  long lVar20;
  int *piVar21;
  byte bVar22;
  undefined4 *puVar23;
  long lVar24;
  uint *puVar25;
  uint uVar26;
  int iVar27;
  void *__src;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  float fVar32;
  long local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 local_80;
  undefined1 local_74 [4];
  undefined8 local_68;
  
  puVar7 = Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Contains<int>__;
  local_68 = param_6;
  if ((DAT_066d391b & 1) == 0) {
    FUN_02b3c81c(
                Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_EraseSliceWithCapacity<InputDevice>__
                );
    FUN_02b3c81c(Method_UnityEngine_UIElements_TextInputBaseField<int>_get_textInputBase__);
    FUN_02b3c81c(Method_UnityEngine_UIElements_TextInputBaseField<ulong>_get_isDelayed__);
    FUN_02b3c81c(Method_System_Array_Resize<DataContract>__);
    FUN_02b3c81c(PTR_DAT_06316c50);
    FUN_02b3c81c(PTR_DAT_063258d8);
    FUN_02b3c81c(System_Threading_SparselyPopulatedArray<CancellationCallbackInfo>___TypeInfo);
    FUN_02b3c81c(PTR_DAT_06317f10);
    FUN_02b3c81c(Method_UnityEngine_Events_UnityEvent<AutoGun,_AutoAmmo>_Invoke__);
    FUN_02b3c81c(
                Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_EraseAtWithCapacity<MemoryHelpers_BitRegion>__
                );
    FUN_02b3c81c(
                Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_EraseSliceWithCapacity<Finger>__
                );
    FUN_02b3c81c(PTR_DAT_06312520);
    FUN_02b3c81c(Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Contains<int>__);
    FUN_02b3c81c(Method_System_Collections_Generic_Stack<BaseStyleMatcher_MatchContext>_Push__);
    FUN_02b3c81c(PTR_DAT_063203a0);
    DAT_066d391b = 1;
  }
  lVar13 = *(long *)puVar7;
  local_74[0] = 0;
  local_80 = 0;
  local_f8 = 0;
  uStack_d8 = 0;
  local_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_e8 = 0;
  local_f0 = 0;
  if (*(int *)(lVar13 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
    lVar13 = *(long *)puVar7;
  }
  FUN_05814cc8(local_74,*(undefined8 *)(*(long *)(lVar13 + 0xb8) + 0x20),0);
  if (param_4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  lVar13 = FUN_059a8314(param_4,*(undefined8 *)
                                 Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_EraseSliceWithCapacity<InputDevice>__
                       );
  lVar14 = FUN_0590661c(param_4,*(undefined8 *)
                                 Method_UnityEngine_UIElements_TextInputBaseField<int>_get_textInputBase__
                       );
  lVar15 = FUN_0590661c(param_4,*(undefined8 *)
                                 Method_UnityEngine_UIElements_TextInputBaseField<ulong>_get_isDelayed__
                       );
  puVar7 = PTR_DAT_063203a0;
  lVar16 = *(long *)PTR_DAT_063203a0;
  if (*(int *)(lVar16 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
    lVar16 = *(long *)puVar7;
  }
  lVar20 = *(long *)(*(long *)(lVar16 + 0xb8) + 0x70);
  if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  lVar16 = *(long *)(*(long *)(lVar16 + 0xb8) + 0x78);
  *(undefined4 *)(lVar20 + 0x18) = 0;
  *(int *)(lVar20 + 0x1c) = *(int *)(lVar20 + 0x1c) + 1;
  if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  *(undefined4 *)(lVar16 + 0x18) = 0;
  *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
  if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  *(undefined4 *)(lVar13 + 0x40) = 0x10;
  if (param_5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  uVar28 = *(undefined4 *)(param_5 + 0xb8);
  *(undefined4 *)(lVar13 + 0x2c) = *(undefined4 *)(param_5 + 0xd4);
  *(undefined4 *)(lVar13 + 0x1c) = uVar28;
  uVar28 = FUN_0599b394(uVar28,param_5);
  *(undefined4 *)(lVar13 + 0x20) = uVar28;
  *(undefined4 *)(lVar13 + 0x24) = param_2;
  *(undefined4 *)(lVar13 + 0x28) = param_3;
  uVar28 = *(undefined4 *)(param_5 + 0x90);
  uVar29 = *(undefined4 *)(param_5 + 0xa0);
  *(undefined2 *)(lVar13 + 0x58) = 0;
  *(undefined4 *)(lVar13 + 0xac) = 0;
  *(undefined4 *)(lVar13 + 0x14) = uVar28;
  *(undefined4 *)(lVar13 + 0x18) = uVar28;
  *(undefined4 *)(lVar13 + 0x34) = uVar29;
  *(undefined4 *)(lVar13 + 0x38) = uVar29;
  *(undefined8 *)(lVar13 + 0xa4) = 0;
  *(undefined8 *)(lVar13 + 0x9c) = 0;
  *(undefined8 *)(lVar13 + 0x94) = 0;
  *(undefined8 *)(lVar13 + 0x8c) = 0;
  *(undefined8 *)(lVar13 + 0x84) = 0;
  *(undefined8 *)(lVar13 + 0x7c) = 0;
  *(undefined8 *)(lVar13 + 0x74) = 0;
  *(undefined8 *)(lVar13 + 0x6c) = 0;
  *(undefined8 *)(lVar13 + 100) = 0;
  *(undefined8 *)(lVar13 + 0x5c) = 0;
  if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  bVar9 = false;
  if (*(char *)(param_5 + 0x8c) != '\0') {
    bVar9 = *(int *)(param_5 + 0x88) == 1;
  }
  lVar16 = *(long *)(lVar15 + 0x20);
  uVar3 = *(undefined8 *)(lVar15 + 0x28);
  iVar5 = *(int *)(lVar15 + 0x10);
  fVar32 = *(float *)(lVar14 + 0x1a8);
  *(bool *)(lVar13 + 0x11) = bVar9;
  uVar17 = FUN_05c974f4(0);
  if ((uVar17 & 1) == 0) {
    bVar19 = 0;
  }
  else {
    bVar19 = *(byte *)(lVar13 + 0x11);
  }
  bVar9 = 0.0 < fVar32;
  *(byte *)(lVar13 + 0x10) = bVar19 & bVar9;
  if ((char)local_68 == '\0') {
    bVar10 = false;
  }
  else {
    iVar11 = FUN_03ad6694(&local_68,
                          *(undefined8 *)
                           Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_EraseSliceWithCapacity<Finger>__
                         );
    bVar10 = iVar11 == 2;
  }
  if (*(char *)(param_5 + 0x9c) == '\0') {
    bVar10 = false;
  }
  else if (*(int *)(param_5 + 0x94) == 1) {
    bVar10 = true;
  }
  *(bool *)(lVar13 + 0x31) = bVar10;
  uVar17 = FUN_05c974f4(0);
  if ((uVar17 & 1) == 0) {
    bVar19 = 0;
  }
  else {
    bVar19 = 0;
    if (*(char *)(lVar13 + 0x31) != '\0') {
      bVar19 = *(byte *)(lVar15 + 0x30) ^ 1;
    }
  }
  cVar4 = *(char *)(lVar13 + 0x10);
  bVar19 = bVar19 & bVar9;
  *(byte *)(lVar13 + 0x30) = bVar19;
  if ((cVar4 == '\0') && (bVar19 == 0)) goto LAB_05998f14;
  if (iVar5 == -1) {
LAB_059986a8:
    bVar9 = false;
  }
  else {
    __src = (void *)(lVar16 + (long)iVar5 * 0x74);
    memmove(&local_f0,__src,0x74);
    uVar18 = FUN_05ccb6c4(&local_f0,0);
    if (*(int *)(*(long *)PTR_DAT_06312520 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    uVar17 = FUN_05c8c45c(uVar18,0,0);
    if ((uVar17 & 1) == 0) goto LAB_059986a8;
    memmove(&local_f0,__src,0x74);
    lVar14 = FUN_05ccb6c4(&local_f0,0);
    if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    iVar11 = FUN_05c5f324(lVar14,0);
    bVar9 = iVar11 != 0;
  }
  bVar19 = false;
  if (cVar4 != '\0') {
    bVar19 = bVar9;
  }
  *(byte *)(lVar13 + 0x10) = bVar19;
  puVar8 = Method_UnityEngine_Events_UnityEvent<AutoGun,_AutoAmmo>_Invoke__;
  puVar6 = PTR_DAT_06312520;
  iVar11 = (int)uVar3;
  bVar9 = (bool)bVar19;
  if (*(char *)(lVar13 + 0x30) == '\0') {
joined_r0x05998784:
    if (bVar9 == false) goto LAB_05998f14;
  }
  else {
    if (iVar11 < 1) {
      bVar9 = false;
    }
    else {
      iVar27 = 0;
      do {
        if (iVar5 != iVar27) {
          uVar18 = FUN_0322a808(lVar16,uVar3,iVar27,*(undefined8 *)puVar8);
          iVar12 = FUN_05ccb750(uVar18,0);
          if ((iVar12 == 0) || (iVar12 = FUN_05ccb750(uVar18,0), iVar12 == 2)) {
            lVar14 = FUN_05ccb6c4(uVar18,0);
            if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
              thunk_FUN_02b9ad44();
            }
            uVar17 = FUN_05c8e378(lVar14,0,0);
            if ((uVar17 & 1) == 0) {
              if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02b3cac4();
              }
              iVar12 = FUN_05c5f324(lVar14,0);
              if (iVar12 != 0) {
                bVar22 = 1;
                goto LAB_05998774;
              }
            }
          }
        }
        iVar27 = iVar27 + 1;
      } while (iVar11 != iVar27);
      bVar22 = 0;
LAB_05998774:
      bVar19 = *(byte *)(lVar13 + 0x10);
      bVar9 = (bool)(*(byte *)(lVar13 + 0x30) & bVar22);
    }
    *(bool *)(lVar13 + 0x30) = bVar9;
    if (bVar19 == 0) goto joined_r0x05998784;
  }
  puVar6 = PTR_DAT_0631b2c0;
  if (0 < iVar11) {
    iVar27 = 0;
    do {
      if ((*(char *)(lVar13 + 0x10) == '\0') && (iVar5 == iVar27)) {
        lVar14 = *(long *)puVar7;
        if (*(int *)(lVar14 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
          lVar14 = *(long *)puVar7;
        }
        lVar14 = *(long *)(*(long *)(lVar14 + 0xb8) + 0x70);
        if (DAT_066c29d4 == '\0') {
          FUN_02b3c81c(puVar6);
          DAT_066c29d4 = '\x01';
        }
        puVar8 = PTR_DAT_063258d8;
        if (lVar14 == 0) {
LAB_05998f50:
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        puVar23 = *(undefined4 **)(*(long *)puVar6 + 0xb8);
        lVar15 = *(long *)(lVar14 + 0x10);
        uVar28 = *puVar23;
        uVar29 = puVar23[1];
        uVar30 = puVar23[2];
        uVar31 = puVar23[3];
        *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
        if (lVar15 == 0) goto LAB_05998f50;
        uVar26 = *(uint *)(lVar14 + 0x18);
        if (uVar26 < *(uint *)(lVar15 + 0x18)) {
          lVar15 = lVar15 + (long)(int)uVar26 * 0x10;
          *(uint *)(lVar14 + 0x18) = uVar26 + 1;
          *(undefined4 *)(lVar15 + 0x20) = uVar28;
          *(undefined4 *)(lVar15 + 0x24) = uVar29;
          *(undefined4 *)(lVar15 + 0x28) = uVar30;
          *(undefined4 *)(lVar15 + 0x2c) = uVar31;
        }
        else {
          FUN_0386b6c4(lVar14,*(undefined8 *)
                               (*(long *)(*(long *)(*(long *)puVar8 + 0x20) + 0xc0) + 0x70));
        }
        lVar15 = *(long *)(*(long *)(*(long *)puVar7 + 0xb8) + 0x78);
        if (lVar15 == 0) {
LAB_05998f54:
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        lVar14 = *(long *)(lVar15 + 0x10);
        lVar20 = *(long *)PTR_DAT_06316c50;
        *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
        if (lVar14 == 0) goto LAB_05998f54;
        puVar25 = (uint *)(lVar15 + 0x18);
        uVar26 = *puVar25;
        if (*(uint *)(lVar14 + 0x18) <= uVar26) {
          FUN_03753114(lVar15,0,*(undefined8 *)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x70));
          goto FUN_05998e78;
        }
LAB_05998ae8:
        uVar28 = 0;
LAB_05998aec:
        *puVar25 = uVar26 + 1;
        *(undefined4 *)(lVar14 + (long)(int)uVar26 * 4 + 0x20) = uVar28;
      }
      else if ((*(char *)(lVar13 + 0x30) == '\0') && (iVar5 != iVar27)) {
        lVar14 = *(long *)puVar7;
        if (*(int *)(lVar14 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
          lVar14 = *(long *)puVar7;
        }
        lVar14 = *(long *)(*(long *)(lVar14 + 0xb8) + 0x70);
        if (DAT_066c29d4 == '\0') {
          FUN_02b3c81c(puVar6);
          DAT_066c29d4 = '\x01';
        }
        puVar8 = PTR_DAT_063258d8;
        if (lVar14 == 0) {
LAB_05998f5c:
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        puVar23 = *(undefined4 **)(*(long *)puVar6 + 0xb8);
        lVar15 = *(long *)(lVar14 + 0x10);
        uVar28 = *puVar23;
        uVar29 = puVar23[1];
        uVar30 = puVar23[2];
        uVar31 = puVar23[3];
        *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
        if (lVar15 == 0) goto LAB_05998f5c;
        uVar26 = *(uint *)(lVar14 + 0x18);
        if (uVar26 < *(uint *)(lVar15 + 0x18)) {
          lVar15 = lVar15 + (long)(int)uVar26 * 0x10;
          *(uint *)(lVar14 + 0x18) = uVar26 + 1;
          *(undefined4 *)(lVar15 + 0x20) = uVar28;
          *(undefined4 *)(lVar15 + 0x24) = uVar29;
          *(undefined4 *)(lVar15 + 0x28) = uVar30;
          *(undefined4 *)(lVar15 + 0x2c) = uVar31;
        }
        else {
          FUN_0386b6c4(lVar14,*(undefined8 *)
                               (*(long *)(*(long *)(*(long *)puVar8 + 0x20) + 0xc0) + 0x70));
        }
        lVar15 = *(long *)(*(long *)(*(long *)puVar7 + 0xb8) + 0x78);
        if (lVar15 == 0) {
LAB_05998f58:
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        lVar14 = *(long *)(lVar15 + 0x10);
        lVar20 = *(long *)PTR_DAT_06316c50;
        *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
        if (lVar14 == 0) goto LAB_05998f58;
        puVar25 = (uint *)(lVar15 + 0x18);
        uVar26 = *puVar25;
        if (uVar26 < *(uint *)(lVar14 + 0x18)) goto LAB_05998ae8;
        FUN_03753114(lVar15,0,*(undefined8 *)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x70));
      }
      else {
        uVar18 = FUN_0322a808(lVar16,uVar3,iVar27,
                              *(undefined8 *)
                               Method_UnityEngine_Events_UnityEvent<AutoGun,_AutoAmmo>_Invoke__);
        lVar14 = FUN_05ccb6c4(uVar18,0);
        local_f8 = 0;
        if (*(int *)(*(long *)PTR_DAT_06312520 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        uVar17 = FUN_05c8c45c(lVar14,0,0);
        if ((uVar17 & 1) != 0) {
          if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cac4();
          }
          lVar15 = FUN_05c89410(lVar14,0);
          if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cac4();
          }
          FUN_031d911c(lVar15,&local_f8,*(undefined8 *)Method_System_Array_Resize<DataContract>__);
        }
        lVar15 = local_f8;
        if (*(int *)(*(long *)PTR_DAT_06312520 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        uVar17 = FUN_05c921ac(lVar15,0);
        if ((uVar17 & 1) == 0) {
LAB_059989b0:
          lVar15 = *(long *)puVar7;
          if (*(int *)(lVar15 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
            lVar15 = *(long *)puVar7;
          }
          lVar15 = *(long *)(*(long *)(lVar15 + 0xb8) + 0x70);
          if (lVar15 == 0) {
LAB_05998f60:
                    /* WARNING: Subroutine does not return */
            FUN_02b3cac4();
          }
          lVar20 = *(long *)(lVar15 + 0x10);
          uVar28 = *(undefined4 *)(param_5 + 0xd8);
          uVar29 = *(undefined4 *)(param_5 + 0xdc);
          lVar24 = *(long *)PTR_DAT_063258d8;
          *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
          if (lVar20 == 0) goto LAB_05998f60;
          uVar26 = *(uint *)(lVar15 + 0x18);
          if (uVar26 < *(uint *)(lVar20 + 0x18)) {
            *(uint *)(lVar15 + 0x18) = uVar26 + 1;
            puVar23 = (undefined4 *)(lVar20 + (long)(int)uVar26 * 0x10 + 0x20);
            *puVar23 = uVar28;
LAB_05998a14:
            puVar23[1] = uVar29;
            *(undefined8 *)(puVar23 + 2) = 0;
          }
          else {
            FUN_0386b6c4(uVar28,uVar29,0,0,lVar15,
                         *(undefined8 *)(*(long *)(*(long *)(lVar24 + 0x20) + 0xc0) + 0x70));
          }
        }
        else {
          if (local_f8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cac4();
          }
          if (*(char *)(local_f8 + 0x20) != '\0') goto LAB_059989b0;
          lVar15 = *(long *)puVar7;
          if (*(int *)(lVar15 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
            lVar15 = *(long *)puVar7;
          }
          if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cac4();
          }
          lVar15 = *(long *)(*(long *)(lVar15 + 0xb8) + 0x70);
          uVar28 = FUN_05c5edf4(lVar14,0);
          uVar29 = FUN_05c5eea8(lVar14,0);
          if (lVar15 == 0) {
LAB_05998fa4:
                    /* WARNING: Subroutine does not return */
            FUN_02b3cac4();
          }
          lVar20 = *(long *)(lVar15 + 0x10);
          lVar24 = *(long *)PTR_DAT_063258d8;
          *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
          if (lVar20 == 0) goto LAB_05998fa4;
          uVar26 = *(uint *)(lVar15 + 0x18);
          if (uVar26 < *(uint *)(lVar20 + 0x18)) {
            *(uint *)(lVar15 + 0x18) = uVar26 + 1;
            puVar23 = (undefined4 *)(lVar20 + (long)(int)uVar26 * 0x10 + 0x20);
            *puVar23 = uVar28;
            goto LAB_05998a14;
          }
          FUN_0386b6c4(uVar28,uVar29,0,0,lVar15,
                       *(undefined8 *)(*(long *)(*(long *)(lVar24 + 0x20) + 0xc0) + 0x70));
        }
        lVar15 = local_f8;
        if (*(int *)(*(long *)PTR_DAT_06312520 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        uVar17 = FUN_05c921ac(lVar15,0);
        if ((uVar17 & 1) != 0) {
          if (local_f8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cac4();
          }
          iVar12 = *(int *)(local_f8 + 0x30);
          lVar15 = *(long *)
                    Method_System_Collections_Generic_Stack<BaseStyleMatcher_MatchContext>_Push__;
          if (*(int *)(lVar15 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
            lVar15 = *(long *)
                      Method_System_Collections_Generic_Stack<BaseStyleMatcher_MatchContext>_Push__;
          }
          if (iVar12 == **(int **)(lVar15 + 0xb8)) {
            lVar15 = *(long *)puVar7;
            if (*(int *)(lVar15 + 0xe4) == 0) {
              thunk_FUN_02b9ad44();
              lVar15 = *(long *)puVar7;
            }
            if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02b3cac4();
            }
            lVar15 = *(long *)(*(long *)(lVar15 + 0xb8) + 0x78);
            uVar28 = FUN_05c5f560(lVar14,0);
            if (lVar15 == 0) {
LAB_05998f88:
                    /* WARNING: Subroutine does not return */
              FUN_02b3cac4();
            }
            lVar14 = *(long *)(lVar15 + 0x10);
            lVar20 = *(long *)PTR_DAT_06316c50;
            *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
            if (lVar14 == 0) goto LAB_05998f88;
            puVar25 = (uint *)(lVar15 + 0x18);
            uVar26 = *puVar25;
            if (uVar26 < *(uint *)(lVar14 + 0x18)) goto LAB_05998aec;
            FUN_03753114(lVar15,uVar28,
                         *(undefined8 *)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x70));
            goto FUN_05998e78;
          }
        }
        lVar14 = local_f8;
        if (*(int *)(*(long *)PTR_DAT_06312520 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        uVar17 = FUN_05c921ac(lVar14,0);
        if ((uVar17 & 1) != 0) {
          if (local_f8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cac4();
          }
          iVar12 = *(int *)(local_f8 + 0x30);
          lVar14 = *(long *)
                    Method_System_Collections_Generic_Stack<BaseStyleMatcher_MatchContext>_Push__;
          if (*(int *)(lVar14 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
            lVar14 = *(long *)
                      Method_System_Collections_Generic_Stack<BaseStyleMatcher_MatchContext>_Push__;
          }
          piVar21 = *(int **)(lVar14 + 0xb8);
          if (iVar12 != *piVar21) {
            if (local_f8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02b3cac4();
            }
            iVar12 = *(int *)(local_f8 + 0x30);
            if (*(int *)(lVar14 + 0xe4) == 0) {
              thunk_FUN_02b9ad44();
              piVar21 = *(int **)(*(long *)
                                   Method_System_Collections_Generic_Stack<BaseStyleMatcher_MatchContext>_Push__
                                 + 0xb8);
            }
            lVar14 = *(long *)puVar7;
            iVar1 = iVar12;
            if (piVar21[3] <= iVar12) {
              iVar1 = piVar21[3];
            }
            iVar2 = piVar21[1];
            if (piVar21[1] <= iVar12) {
              iVar2 = iVar1;
            }
            if (*(int *)(lVar14 + 0xe4) == 0) {
              thunk_FUN_02b9ad44();
              lVar14 = *(long *)puVar7;
            }
            lVar15 = *(long *)(*(long *)(lVar14 + 0xb8) + 0x78);
            uVar28 = FUN_058efb70(param_5,iVar2,0);
            if (lVar15 == 0) {
LAB_05998f9c:
                    /* WARNING: Subroutine does not return */
              FUN_02b3cac4();
            }
            lVar14 = *(long *)(lVar15 + 0x10);
            lVar20 = *(long *)PTR_DAT_06316c50;
            *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
            if (lVar14 == 0) goto LAB_05998f9c;
            puVar25 = (uint *)(lVar15 + 0x18);
            uVar26 = *puVar25;
            if (uVar26 < *(uint *)(lVar14 + 0x18)) goto LAB_05998aec;
            FUN_03753114(lVar15,uVar28,
                         *(undefined8 *)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x70));
            goto FUN_05998e78;
          }
        }
        lVar14 = *(long *)puVar7;
        if (*(int *)(lVar14 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
          lVar14 = *(long *)puVar7;
        }
        lVar15 = *(long *)
                  Method_System_Collections_Generic_Stack<BaseStyleMatcher_MatchContext>_Push__;
        lVar20 = *(long *)(*(long *)(lVar14 + 0xb8) + 0x78);
        if (*(int *)(lVar15 + 0xe4) == 0) {
          thunk_FUN_02b9ad44(lVar15);
          lVar15 = *(long *)
                    Method_System_Collections_Generic_Stack<BaseStyleMatcher_MatchContext>_Push__;
        }
        uVar28 = FUN_058efb70(param_5,*(undefined4 *)(*(long *)(lVar15 + 0xb8) + 0x10),0);
        if (lVar20 == 0) {
LAB_05998f64:
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        lVar14 = *(long *)(lVar20 + 0x10);
        lVar15 = *(long *)PTR_DAT_06316c50;
        *(int *)(lVar20 + 0x1c) = *(int *)(lVar20 + 0x1c) + 1;
        if (lVar14 == 0) goto LAB_05998f64;
        puVar25 = (uint *)(lVar20 + 0x18);
        uVar26 = *puVar25;
        if (uVar26 < *(uint *)(lVar14 + 0x18)) goto LAB_05998aec;
        FUN_03753114(lVar20,uVar28,
                     *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
      }
FUN_05998e78:
      iVar27 = iVar27 + 1;
    } while (iVar11 != iVar27);
  }
  lVar14 = *(long *)puVar7;
  if (*(int *)(lVar14 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
    lVar14 = *(long *)puVar7;
  }
  *(undefined8 *)(lVar13 + 0x48) = *(undefined8 *)(*(long *)(lVar14 + 0xb8) + 0x70);
  thunk_FUN_02bb0e9c();
  *(undefined8 *)(lVar13 + 0x50) = *(undefined8 *)(*(long *)(*(long *)puVar7 + 0xb8) + 0x78);
  thunk_FUN_02bb0e9c();
  bVar9 = false;
  if (*(char *)(param_5 + 0xe0) != '\0') {
    if (*(char *)(lVar13 + 0x10) == '\0') {
      bVar9 = *(char *)(lVar13 + 0x30) != '\0';
    }
    else {
      bVar9 = true;
    }
  }
  *(bool *)(lVar13 + 0x3c) = bVar9;
LAB_05998f14:
  FUN_05814cd4(local_74,0);
  return lVar13;
}


