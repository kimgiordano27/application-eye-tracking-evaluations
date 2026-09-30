/*
FUNCTION_NAME: FUN_072e6070
ENTRY_POINT: 072e6070
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_5;validity_or_gating_hits_11;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_072e6070(long param_1)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  undefined8 *puVar13;
  long *plVar14;
  long lVar15;
  int *piVar16;
  long lVar17;
  undefined8 local_d0;
  undefined8 *puStack_c8;
  long *local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  long *local_a8;
  undefined8 local_a0;
  undefined8 *puStack_98;
  long *local_90;
  undefined8 local_80;
  undefined8 *puStack_78;
  long *local_70;
  
  if ((DAT_07ef2ab3 & 1) == 0) {
    FUN_03642964(
                Method_System_Collections_Generic_List_Enumerator<OVRSpatialAnchor_UnboundAnchor>_get_Current__
                );
    FUN_03642964(
                Method_System_Collections_Generic_List_Enumerator<GenericDropdownMenu_MenuItem>_Dispose__
                );
    FUN_03642964(
                Method_System_Collections_Generic_List_Enumerator<OVRVirtualKeyboard_IInputSource>_Dispose__
                );
    FUN_03642964(
                Method_System_Collections_Generic_List_Enumerator<GenericDropdownMenu_MenuItem>_MoveNext__
                );
    FUN_03642964(
                Method_System_Collections_Generic_List_Enumerator<GenericDropdownMenu_MenuItem>_get_Current__
                );
    FUN_03642964(
                Method_System_Collections_Generic_List_Enumerator<OVRVirtualKeyboard_IInputSource>_MoveNext__
                );
    FUN_03642964(Method_System_Collections_Generic_List_Enumerator<GridView_RecycledRow>_Dispose__);
    FUN_03642964(
                Method_System_Collections_Generic_List_Enumerator<OVRPlugin_SpaceComponentType>_Dispose__
                );
    FUN_03642964(
                Method_System_Collections_Generic_List_Enumerator<OVRVirtualKeyboard_IInputSource>_get_Current__
                );
    FUN_03642964(
                Method_System_Collections_Generic_List_Enumerator<OpenXRInteractionFeature_ActionBinding>_Dispose__
                );
    FUN_03642964(
                Method_System_Collections_Generic_List_Enumerator<OpenXRInteractionFeature_ActionBinding>_MoveNext__
                );
    DAT_07ef2ab3 = 1;
  }
  puVar9 = 
  Method_System_Collections_Generic_List_Enumerator<OpenXRInteractionFeature_ActionBinding>_MoveNext__
  ;
  puVar8 = 
  Method_System_Collections_Generic_List_Enumerator<OVRVirtualKeyboard_IInputSource>_get_Current__;
  puVar7 = 
  Method_System_Collections_Generic_List_Enumerator<OVRVirtualKeyboard_IInputSource>_Dispose__;
  puVar6 = 
  Method_System_Collections_Generic_List_Enumerator<OVRSpatialAnchor_UnboundAnchor>_get_Current__;
  puVar5 = Method_System_Collections_Generic_List_Enumerator<OVRPlugin_SpaceComponentType>_Dispose__
  ;
  puVar4 = 
  Method_System_Collections_Generic_List_Enumerator<GenericDropdownMenu_MenuItem>_MoveNext__;
  puVar3 = Method_System_Collections_Generic_List_Enumerator<GenericDropdownMenu_MenuItem>_Dispose__
  ;
  local_80 = 0;
  puStack_78 = (undefined8 *)0x0;
  local_70 = (long *)0x0;
  local_a0 = 0;
  puStack_98 = (undefined8 *)0x0;
  local_90 = (long *)0x0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = (long *)0x0;
  if (*(long *)(param_1 + 0x40) != 0) {
    FUN_0422ad98(&local_d0,*(long *)(param_1 + 0x40),
                 *(undefined8 *)
                  Method_System_Collections_Generic_List_Enumerator<GridView_RecycledRow>_Dispose__)
    ;
    local_70 = local_c0;
    puStack_78 = puStack_c8;
    local_80 = local_d0;
    local_d0 = 0;
    puStack_c8 = &local_80;
    while (uVar10 = FUN_05897378(&local_80,*(undefined8 *)puVar4), plVar14 = local_70,
          (uVar10 & 1) != 0) {
      plVar11 = (long *)FUN_072e5144(uVar10,local_70);
      if (plVar11 == (long *)0x0) {
LAB_072e6298:
        FUN_072e5384(param_1,plVar14);
      }
      else {
        if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        lVar17 = plVar14[0x53];
        lVar12 = FUN_07381d98(param_1,0);
        if (lVar17 != lVar12) {
          lVar12 = *plVar11;
          uVar10 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar10 != 0) {
            piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == *(long *)puVar5) {
                puVar13 = (undefined8 *)(lVar12 + (long)(*piVar16 + 2) * 0x10 + 0x138);
                goto LAB_072e628c;
              }
              uVar10 = uVar10 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar10 != 0);
          }
          puVar13 = (undefined8 *)FUN_0367cd30(plVar11,*(long *)puVar5,2);
LAB_072e628c:
          (*(code *)*puVar13)(plVar11,puVar13[1]);
          goto LAB_072e6298;
        }
        lVar12 = *(long *)(param_1 + 0x70);
        if (lVar12 == 0) {
LAB_072e6470:
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        lVar17 = *(long *)(lVar12 + 0x10);
        lVar15 = *(long *)puVar8;
        *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
        if (lVar17 == 0) goto LAB_072e6470;
        uVar2 = *(uint *)(lVar12 + 0x18);
        if (uVar2 < *(uint *)(lVar17 + 0x18)) {
          *(uint *)(lVar12 + 0x18) = uVar2 + 1;
          plVar14 = (long *)(lVar17 + (long)(int)uVar2 * 8 + 0x20);
          *plVar14 = (long)plVar11;
          thunk_FUN_036b7ad0(plVar14,plVar11);
        }
        else {
          FUN_0459f03c(lVar12,plVar11,
                       *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
        }
      }
    }
    FUN_05897374(&local_80,*(undefined8 *)puVar3);
    if (*(long *)(param_1 + 0x70) != 0) {
      FUN_0459fb44(&local_d0,*(long *)(param_1 + 0x70),*(undefined8 *)puVar9);
      local_90 = local_c0;
      puStack_98 = puStack_c8;
      local_a0 = local_d0;
      local_d0 = 0;
      puStack_c8 = &local_a0;
      while (uVar10 = FUN_05897b28(&local_a0,*(undefined8 *)puVar7), plVar14 = local_90,
            (uVar10 & 1) != 0) {
        if (local_90 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        lVar12 = *local_90;
        uVar10 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar10 != 0) {
          piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == *(long *)puVar5) {
              puVar13 = (undefined8 *)(lVar12 + (long)*piVar16 * 0x10 + 0x138);
              goto LAB_072e635c;
            }
            uVar10 = uVar10 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar10 != 0);
        }
        puVar13 = (undefined8 *)FUN_0367cd30(local_90,*(long *)puVar5,0);
LAB_072e635c:
        (*(code *)*puVar13)(plVar14,puVar13[1]);
      }
      FUN_05897b24(&local_a0,*(undefined8 *)puVar6);
      if (*(long *)(param_1 + 0x70) != 0) {
        FUN_0459fb44(&local_b8,*(long *)(param_1 + 0x70),*(undefined8 *)puVar9);
        local_d0 = 0;
        puStack_c8 = &local_b8;
        while (uVar10 = FUN_05897b28(&local_b8,*(undefined8 *)puVar7), plVar14 = local_a8,
              (uVar10 & 1) != 0) {
          if (local_a8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          lVar12 = *local_a8;
          uVar10 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar10 != 0) {
            piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == *(long *)puVar5) {
                puVar13 = (undefined8 *)(lVar12 + (long)(*piVar16 + 1) * 0x10 + 0x138);
                goto LAB_072e63fc;
              }
              uVar10 = uVar10 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar10 != 0);
          }
          puVar13 = (undefined8 *)FUN_0367cd30(local_a8,*(long *)puVar5,1);
LAB_072e63fc:
          (*(code *)*puVar13)(plVar14,puVar13[1]);
        }
        FUN_05897b24(&local_b8,*(undefined8 *)puVar6);
        lVar12 = *(long *)(param_1 + 0x70);
        if (lVar12 != 0) {
          iVar1 = *(int *)(lVar12 + 0x18);
          *(undefined4 *)(lVar12 + 0x18) = 0;
          *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
          if (0 < iVar1) {
            FUN_05e3b0f4(*(undefined8 *)(lVar12 + 0x10),0,iVar1,0);
          }
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


