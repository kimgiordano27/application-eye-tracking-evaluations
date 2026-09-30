/*
FUNCTION_NAME: FUN_05cee5d4
ENTRY_POINT: 05cee5d4
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_4
*/


uint FUN_05cee5d4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  uint uVar12;
  undefined4 uVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  long *plVar18;
  long lVar19;
  undefined8 uVar20;
  int iVar21;
  undefined8 uVar22;
  uint uVar23;
  undefined8 local_70;
  long local_68;
  
  if ((DAT_06a57da0 & 1) == 0) {
    FUN_02d4dc40(Method_Unity_Properties_PropertyBag_Register<TextShadow>__);
    FUN_02d4dc40(Method_Unity_Properties_PropertyBag_Register<StyleRotate>__);
    FUN_02d4dc40(Method_ExitGames_Client_Photon_Protocol18_WriteCustomTypeArray__);
    FUN_02d4dc40(Method_Unity_Properties_PropertyBag_Register<StyleEnum<ScaleMode>>__);
    FUN_02d4dc40(Method_ExitGames_Client_Photon_Protocol16_SerializeDictionaryHeader__);
    FUN_02d4dc40(PTR_DAT_0664a8b0);
    FUN_02d4dc40(Method_ExitGames_Client_Photon_Protocol16_SerializeLengthAsShort__);
    FUN_02d4dc40(Method_System_Security_Claims_ClaimsPrincipal__ctor__);
    FUN_02d4dc40(Method_ExitGames_Client_Photon_Protocol18_WriteStringArray__);
    FUN_02d4dc40(Method_Unity_Properties_PropertyBag_Register<Vector2Int>__);
    FUN_02d4dc40(Method_Unity_Properties_PropertyBag_Register<Vector3>__);
    DAT_06a57da0 = 1;
  }
  local_70 = 0;
  local_68 = 0;
  FUN_05cefec8(param_1);
  lVar16 = *(long *)(param_1 + 0x148);
  if (lVar16 != 0) {
    if (*(uint *)(lVar16 + 0x18) <= *(uint *)(param_1 + 0x150)) {
LAB_05ceea74:
                    /* WARNING: Subroutine does not return */
      FUN_02d4def0();
    }
    uVar1 = *(undefined8 *)(param_1 + 0x168);
    uVar2 = *(undefined8 *)(param_1 + 0x170);
    uVar20 = *(undefined8 *)(param_1 + 0x200);
    uVar13 = *(undefined4 *)(param_1 + 0x160);
    uVar3 = *(undefined4 *)(param_1 + 0x164);
    uVar22 = *(undefined8 *)(lVar16 + (long)(int)*(uint *)(param_1 + 0x150) * 8 + 0x20);
    if (*(int *)(*(long *)Method_Unity_Properties_PropertyBag_Register<StyleEnum<ScaleMode>>__ +
                0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    uVar12 = FUN_05f86d44(uVar20,uVar13,0,uVar2,uVar1,uVar3,uVar22,&local_68,0);
    puVar11 = Method_ExitGames_Client_Photon_Protocol18_WriteStringArray__;
    puVar10 = Method_ExitGames_Client_Photon_Protocol18_WriteCustomTypeArray__;
    puVar9 = Method_ExitGames_Client_Photon_Protocol16_SerializeDictionaryHeader__;
    puVar8 = Method_Unity_Properties_PropertyBag_Register<Vector3>__;
    puVar7 = Method_Unity_Properties_PropertyBag_Register<TextShadow>__;
    puVar6 = Method_Unity_Properties_PropertyBag_Register<StyleRotate>__;
    puVar5 = PTR_DAT_0664a8b0;
    if (local_68 != 0) {
      uVar23 = 0;
      do {
        if ((int)*(uint *)(local_68 + 0x18) <= (int)uVar23) {
LAB_05cee8c8:
          lVar16 = *(long *)(param_1 + 0x200);
          if (lVar16 != 0) {
            lVar14 = *(long *)(param_1 + 0x210);
            *(undefined4 *)(lVar16 + 0x18) = 0;
            *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
            puVar6 = Method_ExitGames_Client_Photon_Protocol16_SerializeLengthAsShort__;
            if (lVar14 != 0) {
              iVar21 = 0;
              goto LAB_05cee8f0;
            }
          }
          break;
        }
        if (*(uint *)(local_68 + 0x18) <= uVar23) goto LAB_05ceea74;
        lVar16 = *(long *)(local_68 + (long)(int)uVar23 * 8 + 0x20);
        if (lVar16 == 0) goto LAB_05cee8c8;
        uVar13 = FUN_05f84fd8(lVar16,0);
        FUN_05f8503c(lVar16,*(undefined4 *)(param_1 + 0x150),0);
        lVar14 = *(long *)(param_1 + 0x120);
        if (lVar14 == 0) break;
        lVar17 = *(long *)(lVar14 + 0x10);
        lVar19 = *(long *)puVar9;
        *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
        if (lVar17 == 0) break;
        uVar4 = *(uint *)(lVar14 + 0x18);
        if (uVar4 < *(uint *)(lVar17 + 0x18)) {
          *(uint *)(lVar14 + 0x18) = uVar4 + 1;
          plVar18 = (long *)(lVar17 + (long)(int)uVar4 * 8 + 0x20);
          *plVar18 = lVar16;
          thunk_FUN_02dc1ef0(plVar18,lVar16);
        }
        else {
          FUN_036a5e08(lVar14,lVar16,
                       *(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
        }
        if (*(long *)(param_1 + 0x128) == 0) break;
        System_Collections_Generic_HashSet_Enumerator<Int32Enum>___ctor
                  (*(long *)(param_1 + 0x128),uVar13,lVar16,*(undefined8 *)puVar6);
        lVar16 = *(long *)(param_1 + 0x1f8);
        if (lVar16 == 0) break;
        lVar14 = *(long *)(lVar16 + 0x10);
        lVar17 = *(long *)puVar5;
        *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
        if (lVar14 == 0) break;
        uVar4 = *(uint *)(lVar16 + 0x18);
        if (uVar4 < *(uint *)(lVar14 + 0x18)) {
          *(uint *)(lVar16 + 0x18) = uVar4 + 1;
          *(undefined4 *)(lVar14 + (long)(int)uVar4 * 4 + 0x20) = uVar13;
        }
        else {
          FUN_0370970c(lVar16,uVar13,
                       *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
        }
        lVar16 = *(long *)(param_1 + 0x1f0);
        if (lVar16 == 0) break;
        lVar14 = *(long *)(lVar16 + 0x10);
        lVar17 = *(long *)puVar5;
        *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
        if (lVar14 == 0) break;
        uVar4 = *(uint *)(lVar16 + 0x18);
        if (uVar4 < *(uint *)(lVar14 + 0x18)) {
          *(uint *)(lVar16 + 0x18) = uVar4 + 1;
          *(undefined4 *)(lVar14 + (long)(int)uVar4 * 4 + 0x20) = uVar13;
        }
        else {
          FUN_0370970c(lVar16,uVar13,
                       *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
        }
        uVar23 = uVar23 + 1;
      } while (local_68 != 0);
    }
  }
  goto LAB_05ceea48;
  while( true ) {
    lVar14 = *(long *)(param_1 + 0x210);
    iVar21 = iVar21 + 1;
    if (lVar14 == 0) break;
LAB_05cee8f0:
    if (*(int *)(lVar14 + 0x18) <= iVar21) {
      return uVar12 & 1;
    }
    lVar16 = FUN_036a5b38(lVar14,iVar21,*(undefined8 *)puVar8);
    if ((lVar16 == 0) || (*(long *)(param_1 + 0x128) == 0)) break;
    uVar15 = FUN_048bf6ac(*(long *)(param_1 + 0x128),*(undefined4 *)(lVar16 + 0x28),&local_70,
                          *(undefined8 *)puVar10);
    if ((uVar15 & 1) == 0) {
      lVar14 = *(long *)(param_1 + 0x200);
      if (lVar14 == 0) break;
      lVar17 = *(long *)(lVar14 + 0x10);
      uVar13 = *(undefined4 *)(lVar16 + 0x28);
      lVar16 = *(long *)puVar5;
      *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
      if (lVar17 == 0) break;
      uVar23 = *(uint *)(lVar14 + 0x18);
      if (uVar23 < *(uint *)(lVar17 + 0x18)) {
        *(uint *)(lVar14 + 0x18) = uVar23 + 1;
        *(undefined4 *)(lVar17 + (long)(int)uVar23 * 4 + 0x20) = uVar13;
      }
      else {
        FUN_0370970c(lVar14,uVar13,
                     *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
      }
    }
    else {
      *(undefined8 *)(lVar16 + 0x20) = local_70;
      thunk_FUN_02dc1ef0();
      *(long *)(lVar16 + 0x18) = param_1;
      thunk_FUN_02dc1ef0((long *)(lVar16 + 0x18),param_1);
      lVar14 = *(long *)(param_1 + 0x130);
      if (lVar14 == 0) break;
      lVar17 = *(long *)(lVar14 + 0x10);
      lVar19 = *(long *)puVar6;
      *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
      if (lVar17 == 0) break;
      uVar23 = *(uint *)(lVar14 + 0x18);
      if (uVar23 < *(uint *)(lVar17 + 0x18)) {
        *(uint *)(lVar14 + 0x18) = uVar23 + 1;
        plVar18 = (long *)(lVar17 + (long)(int)uVar23 * 8 + 0x20);
        *plVar18 = lVar16;
        thunk_FUN_02dc1ef0(plVar18,lVar16);
      }
      else {
        FUN_036a5e08(lVar14,lVar16,
                     *(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
      }
      if (*(long *)(param_1 + 0x138) == 0) break;
      System_Collections_Generic_HashSet_Enumerator<Int32Enum>___ctor
                (*(long *)(param_1 + 0x138),*(undefined4 *)(lVar16 + 0x14),lVar16,
                 *(undefined8 *)puVar7);
      if (*(long *)(param_1 + 0x210) == 0) break;
      FUN_036a7498(*(long *)(param_1 + 0x210),iVar21,*(undefined8 *)puVar11);
      iVar21 = iVar21 + -1;
    }
  }
LAB_05ceea48:
                    /* WARNING: Subroutine does not return */
  FUN_02d4dee8();
}


