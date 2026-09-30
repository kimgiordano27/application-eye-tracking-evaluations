/*
FUNCTION_NAME: FUN_020c2414
ENTRY_POINT: 020c2414
PROGRAM: Lovesick-libil2cpp.so
SCORE: 124
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ray_interaction;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_12;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x020c2a30) */
/* WARNING: Removing unreachable block (ram,0x020c2b88) */

void FUN_020c2414(int *param_1)

{
  int iVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  undefined8 *puVar14;
  int *piVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  undefined8 uVar19;
  undefined1 auVar20 [16];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  int *local_a0;
  int **ppiStack_98;
  undefined1 local_90 [16];
  char local_74 [4];
  long *local_70;
  ulong uStack_68;
  int local_5c;
  int *local_58;
  
  local_58 = param_1;
  if ((DAT_03780eb9 & 1) == 0) {
    thunk_FUN_00d48444(OVRPlugin_OVRP_1_95_0_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033f3600);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<EdgeCollider2D,_ObiEdgeMeshHandle>__ctor__
                      );
    thunk_FUN_00d48444(System_Collections_Generic_List<RadioButton>_TypeInfo);
    thunk_FUN_00d48444(System_SystemException_TypeInfo);
    thunk_FUN_00d48444(Method_System_Collections_Generic_HashSet<VisualTreeAsset>__ctor__);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_EqualityComparer<List<RuleMatcher>>_get_Default__
                      );
    thunk_FUN_00d48444(Method_UnityEngine_GameObject_AddComponent<Button>__);
    thunk_FUN_00d48444(Meta_XR_MRUtilityKit_AnchorPrefabSpawner_SelectionMode_TypeInfo);
    DAT_03780eb9 = 1;
  }
  puVar4 = System_SystemException_TypeInfo;
  local_70 = (long *)0x0;
  uStack_68 = 0;
  local_74[0] = '\0';
  local_90._0_8_ = 0;
  local_90._8_8_ = 0;
  local_5c = *param_1;
  lVar16 = *(long *)(param_1 + 0xc);
  if (local_5c == 0) {
LAB_020c250c:
    puVar9 = 
    Field_<PrivateImplementationDetails>_3F62692E2AD5078353EC4471A13421A61EE493294CF59DC66626A6EF9CCCD2C4
    ;
    puVar8 = Method_System_ComponentModel_ReflectTypeDescriptionProvider_GetTypeFromName__;
    puVar5 = Meta_XR_MRUtilityKit_AnchorPrefabSpawner_SelectionMode_TypeInfo;
    local_a8 = 0;
    local_a0 = &local_5c;
    ppiStack_98 = &local_58;
    if (local_5c == 0) {
      uStack_68 = *(ulong *)(param_1 + 0x14);
      local_70 = *(long **)(param_1 + 0x12);
      param_1[0x12] = 0;
      param_1[0x13] = 0;
      param_1[0x14] = 0;
      param_1[0x15] = 0;
      local_5c = -1;
      *param_1 = -1;
LAB_020c28c0:
      if (DAT_0377862e == '\0') {
        thunk_FUN_00d48444(Meta_XR_MRUtilityKit_AnchorPrefabSpawner_SelectionMode_TypeInfo);
        DAT_0377862e = '\x01';
      }
      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      if (DAT_037781e1 == '\0') {
        thunk_FUN_00d48444(
                          Field_<PrivateImplementationDetails>_3F62692E2AD5078353EC4471A13421A61EE493294CF59DC66626A6EF9CCCD2C4
                          );
        thunk_FUN_00d48444(
                          Method_System_ComponentModel_ReflectTypeDescriptionProvider_GetTypeFromName__
                          );
        DAT_037781e1 = '\x01';
      }
      plVar13 = local_70;
      if (local_70 != (long *)0x0) {
        lVar12 = *local_70;
        lVar17 = *(long *)puVar8;
        bVar2 = *(byte *)(lVar17 + 300);
        if ((*(byte *)(lVar12 + 300) < bVar2) ||
           (*(long *)(*(long *)(lVar12 + 200) + (ulong)bVar2 * 8 + -8) != lVar17)) {
          uVar18 = uStack_68 & 0xffff;
          uVar11 = (ulong)*(ushort *)(lVar12 + 0x12a);
          lVar17 = *(long *)puVar9;
          if (uVar11 != 0) {
            piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == lVar17) {
                puVar14 = (undefined8 *)(lVar12 + (long)(*piVar15 + 2) * 0x10 + 0x138);
                goto LAB_020c29a0;
              }
              uVar11 = uVar11 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar11 != 0);
          }
          puVar14 = (undefined8 *)FUN_00d59724(local_70,lVar17,2);
LAB_020c29a0:
          (*(code *)*puVar14)(plVar13,uVar18,puVar14[1]);
        }
        else {
          FUN_016a13e8(local_70,0);
        }
      }
      iVar10 = 9;
    }
    else {
      uVar11 = FUN_015ff8a0(*(undefined8 *)(param_1 + 8),0);
      puVar7 = Method_System_Collections_Generic_HashSet<VisualTreeAsset>__ctor__;
      puVar6 = OVRPlugin_OVRP_1_95_0_TypeInfo;
      puVar3 = PTR_DAT_033f3600;
      if ((uVar11 & 1) == 0) {
        lVar12 = *(long *)Method_System_Collections_Generic_HashSet<VisualTreeAsset>__ctor__;
        if (*(int *)(lVar12 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar12 = *(long *)puVar7;
        }
        plVar13 = *(long **)(*(long *)(lVar12 + 0xb8) + 8);
        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        iVar10 = (**(code **)(*plVar13 + 0x1f8))
                           (plVar13,*(undefined8 *)(local_58 + 8),*(undefined8 *)(*plVar13 + 0x200))
        ;
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        lVar17 = *(long *)puVar6;
        lVar12 = *(long *)(lVar17 + 0x20);
        if ((*(byte *)(lVar12 + 0x132) & 1) == 0) {
          lVar12 = FUN_00d5941c();
        }
        lVar12 = *(long *)(*(long *)(lVar12 + 0xc0) + 8);
        if ((*(byte *)(lVar12 + 0x132) & 1) == 0) {
          lVar12 = FUN_00d5941c();
        }
        if (*(int *)(lVar12 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        lVar12 = *(long *)(lVar17 + 0x20);
        if ((*(byte *)(lVar12 + 0x132) & 1) == 0) {
          lVar12 = FUN_00d5941c();
        }
        lVar12 = *(long *)(*(long *)(lVar12 + 0xc0) + 8);
        if ((*(byte *)(lVar12 + 0x132) & 1) == 0) {
          lVar12 = FUN_00d5941c();
        }
        plVar13 = (long *)**(long **)(lVar12 + 0xb8);
        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        iVar10 = iVar10 + 2;
        uVar19 = (**(code **)(*plVar13 + 0x178))(plVar13,iVar10,*(undefined8 *)(*plVar13 + 0x180));
        lVar12 = *(long *)(local_58 + 8);
        *(undefined8 *)(local_58 + 0x10) = uVar19;
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        plVar13 = *(long **)(*(long *)(*(long *)puVar7 + 0xb8) + 8);
        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        (**(code **)(*plVar13 + 0x268))
                  (plVar13,lVar12,0,*(undefined4 *)(lVar12 + 0x10),uVar19,2,
                   *(undefined8 *)(*plVar13 + 0x270));
        lVar12 = *(long *)(local_58 + 0x10);
      }
      else {
        if (*(int *)(*(long *)PTR_DAT_033f3600 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        lVar17 = *(long *)puVar6;
        lVar12 = *(long *)(lVar17 + 0x20);
        if ((*(byte *)(lVar12 + 0x132) & 1) == 0) {
          lVar12 = FUN_00d5941c();
        }
        lVar12 = *(long *)(*(long *)(lVar12 + 0xc0) + 8);
        if ((*(byte *)(lVar12 + 0x132) & 1) == 0) {
          lVar12 = FUN_00d5941c();
        }
        if (*(int *)(lVar12 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        lVar12 = *(long *)(lVar17 + 0x20);
        if ((*(byte *)(lVar12 + 0x132) & 1) == 0) {
          lVar12 = FUN_00d5941c();
        }
        lVar12 = *(long *)(*(long *)(lVar12 + 0xc0) + 8);
        if ((*(byte *)(lVar12 + 0x132) & 1) == 0) {
          lVar12 = FUN_00d5941c();
        }
        plVar13 = (long *)**(long **)(lVar12 + 0xb8);
        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        lVar12 = (**(code **)(*plVar13 + 0x178))(plVar13,2,*(undefined8 *)(*plVar13 + 0x180));
        iVar10 = 2;
        *(long *)(local_58 + 0x10) = lVar12;
      }
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      if (*(int *)(lVar12 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      iVar1 = local_58[10];
      *(char *)(lVar12 + 0x20) = (char)((uint)iVar1 >> 8);
      lVar12 = *(long *)(local_58 + 0x10);
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      if (*(uint *)(lVar12 + 0x18) < 2) {
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      *(char *)(lVar12 + 0x21) = (char)iVar1;
      local_b8 = 0;
      uStack_b0 = 0;
      FUN_00bd8314(&local_b8,*(undefined8 *)(local_58 + 0x10),0,iVar10,
                   *(undefined8 *)
                    Method_System_Collections_Generic_EqualityComparer<List<RuleMatcher>>_get_Default__
                  );
      auVar20 = FUN_0132ce28(local_b8,uStack_b0,
                             *(undefined8 *)Method_UnityEngine_GameObject_AddComponent<Button>__);
      if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      auVar20 = FUN_020bbd54(lVar16,8,1,auVar20._0_8_,auVar20._8_8_,*(undefined8 *)(local_58 + 0xe))
      ;
      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uStack_68 = auVar20._8_8_ & 0xffff;
      local_70 = auVar20._0_8_;
      if (DAT_0377862d == '\0') {
        thunk_FUN_00d48444(Meta_XR_MRUtilityKit_AnchorPrefabSpawner_SelectionMode_TypeInfo);
        DAT_0377862d = '\x01';
      }
      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      if (DAT_037781df == '\0') {
        thunk_FUN_00d48444(
                          Field_<PrivateImplementationDetails>_3F62692E2AD5078353EC4471A13421A61EE493294CF59DC66626A6EF9CCCD2C4
                          );
        thunk_FUN_00d48444(
                          Method_System_ComponentModel_ReflectTypeDescriptionProvider_GetTypeFromName__
                          );
        DAT_037781df = '\x01';
      }
      plVar13 = local_70;
      if (local_70 == (long *)0x0) goto LAB_020c28c0;
      lVar12 = *local_70;
      lVar17 = *(long *)puVar8;
      bVar2 = *(byte *)(lVar17 + 300);
      if ((*(byte *)(lVar12 + 300) < bVar2) ||
         (*(long *)(*(long *)(lVar12 + 200) + (ulong)bVar2 * 8 + -8) != lVar17)) {
        uVar18 = uStack_68 & 0xffff;
        uVar11 = (ulong)*(ushort *)(lVar12 + 0x12a);
        lVar17 = *(long *)puVar9;
        if (uVar11 != 0) {
          piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == lVar17) {
              puVar14 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_020c28ac;
            }
            uVar11 = uVar11 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar11 != 0);
        }
        puVar14 = (undefined8 *)FUN_00d59724(local_70,lVar17,0);
LAB_020c28ac:
        iVar10 = (*(code *)*puVar14)(plVar13,uVar18,puVar14[1]);
        if (iVar10 != 0) goto LAB_020c28c0;
      }
      else {
        uVar11 = FUN_017e7b04(local_70,0);
        if ((uVar11 & 1) != 0) goto LAB_020c28c0;
      }
      piVar15 = local_58;
      local_5c = 0;
      *local_58 = 0;
      *(ulong *)(local_58 + 0x14) = uStack_68;
      *(long **)(local_58 + 0x12) = local_70;
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_010bbddc(piVar15 + 2,&local_70,local_58,
                   *(undefined8 *)System_Collections_Generic_List<RadioButton>_TypeInfo);
      iVar10 = 8;
    }
    FUN_00c5828c(&local_a8);
    if ((iVar10 != 9) && (iVar10 != 0)) {
      return;
    }
    if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    uVar19 = *(undefined8 *)(lVar16 + 0x30);
    local_74[0] = '\0';
    FUN_017d75a8(uVar19,local_74,0);
    *(undefined1 *)(lVar16 + 0x5d) = 1;
    if (*(int *)(lVar16 + 0x58) < 5) {
      *(undefined4 *)(lVar16 + 0x58) = 3;
    }
    if ((local_5c < 0) && (local_74[0] != '\0')) {
      thunk_FUN_00d56f10(uVar19,0);
    }
    auVar20._8_8_ = local_90._8_8_;
    auVar20._0_8_ = local_90._0_8_;
    if ((*(char *)(lVar16 + 0x18) != '\0') || (local_90 = auVar20, *(char *)(lVar16 + 0x5e) == '\0')
       ) goto LAB_020c2a3c;
    lVar16 = FUN_020bdb68(lVar16,*(undefined8 *)(local_58 + 0xe));
    if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    local_90 = FUN_017e7d94(lVar16,0,0);
    uVar11 = FUN_016a1974(local_90,0);
    piVar15 = local_58;
    if ((uVar11 & 1) == 0) {
      local_5c = 1;
      *local_58 = 1;
      *(undefined1 (*) [16])(local_58 + 0x16) = local_90;
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_010bbddc(piVar15 + 2,local_90,local_58,
                   *(undefined8 *)
                    Method_System_Collections_Generic_Dictionary<EdgeCollider2D,_ObiEdgeMeshHandle>__ctor__
                  );
      return;
    }
  }
  else {
    if (local_5c != 1) {
      param_1[0x10] = 0;
      param_1[0x11] = 0;
      goto LAB_020c250c;
    }
    local_90 = *(undefined1 (*) [16])(param_1 + 0x16);
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    local_5c = -1;
    *param_1 = -1;
  }
  FUN_016a1990(local_90,0);
LAB_020c2a3c:
  *local_58 = -2;
  local_58[0x10] = 0;
  local_58[0x11] = 0;
  piVar15 = local_58 + 2;
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  FUN_016a2130(piVar15,0);
  return;
}


