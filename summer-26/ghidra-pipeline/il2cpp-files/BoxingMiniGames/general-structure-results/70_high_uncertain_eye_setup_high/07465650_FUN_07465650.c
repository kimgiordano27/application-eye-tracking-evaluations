/*
FUNCTION_NAME: FUN_07465650
ENTRY_POINT: 07465650
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x074657c0) */

void FUN_07465650(undefined1 param_1 [16],float param_2,long param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  undefined8 *puVar13;
  undefined4 *puVar14;
  undefined8 *puVar15;
  int *piVar16;
  long lVar17;
  long lVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 *puVar21;
  undefined4 uVar22;
  float fVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  
  if ((DAT_07ef3cfa & 1) == 0) {
    FUN_03642964(Method_System_Collections_Generic_LowLevelList<ExceptionDispatchInfo>_get_Count__);
    FUN_03642964(Method_System_Collections_Generic_LowLevelList<ExceptionDispatchInfo>_get_Item__);
    FUN_03642964(Method_System_Collections_Generic_LowLevelList<object>_Add__);
    FUN_03642964(Method_System_Collections_Generic_LowLevelList<object>_IndexOf__);
    FUN_03642964(Method_System_Collections_Generic_LowLevelList<object>_Insert__);
    FUN_03642964(Method_System_Collections_Generic_LowLevelList<object>_RemoveAll__);
    FUN_03642964(
                Method_System_Collections_Generic_List<OVRPlugin_Qpl_Annotation_Builder_Entry>_get_Count__
                );
    FUN_03642964(PTR_DAT_079ffc80);
    FUN_03642964(Method_System_Collections_Generic_LowLevelList<object>_get_Capacity__);
    FUN_03642964(Method_System_Collections_Generic_LowLevelList<object>_get_Count__);
    FUN_03642964(Method_System_Collections_Generic_LowLevelList<object>_get_Item__);
    FUN_03642964(Method_System_Data_Listeners<DataViewListener>_Add__);
    FUN_03642964(PTR_DAT_079fd9c8);
    FUN_03642964(Method_System_Collections_Generic_LowLevelList<object>_set_Item__);
    DAT_07ef3cfa = 1;
  }
  puVar5 = Method_System_Collections_Generic_LowLevelList<object>_get_Capacity__;
  puVar4 = Method_System_Data_Listeners<DataViewListener>_Add__;
  puVar3 = 
  Method_System_Collections_Generic_List<OVRPlugin_Qpl_Annotation_Builder_Entry>_get_Count__;
  puVar2 = PTR_DAT_079fd9c8;
  local_a0 = 0;
  local_98 = 0;
  bVar6 = true;
  plVar12 = (long *)PTR_DAT_079ffc80;
  puVar15 = (undefined8 *)Method_System_Collections_Generic_LowLevelList<object>_IndexOf__;
  puVar21 = (undefined8 *)
            Method_System_Collections_Generic_LowLevelList<ExceptionDispatchInfo>_get_Count__;
LAB_07465778:
  do {
    do {
      do {
        uVar9 = FUN_07215818(*(undefined8 *)(param_3 + 0x48),0);
        if ((uVar9 & 1) == 0) {
          return;
        }
        if (*(long *)(param_3 + 0x48) == 0) goto LAB_07465d88;
        iVar7 = FUN_0721519c(*(long *)(param_3 + 0x48),0);
      } while (iVar7 == 0xb);
      if (*(long *)(param_3 + 0x48) == 0) goto LAB_07465d88;
      iVar7 = FUN_0721519c(*(long *)(param_3 + 0x48),0);
    } while (iVar7 == 7);
    if (*(long *)(param_3 + 0x48) == 0) goto LAB_07465d88;
    iVar7 = FUN_0721519c(*(long *)(param_3 + 0x48),0);
  } while (iVar7 == 8);
  lVar10 = *(long *)(param_3 + 0x48);
  if (bVar6) {
    if (lVar10 == 0) goto LAB_07465d88;
    uVar8 = FUN_072147e4(lVar10,0);
  }
  else {
    if (lVar10 == 0) goto LAB_07465d88;
    uVar1 = *(uint *)(param_3 + 0x14);
    uVar8 = FUN_072147e4(lVar10,0);
    uVar8 = uVar8 | uVar1;
  }
  *(uint *)(param_3 + 0x14) = uVar8;
  if (*(long *)(param_3 + 0x48) == 0) goto LAB_07465d88;
  iVar7 = FUN_0721519c(*(long *)(param_3 + 0x48),0);
  if (iVar7 != 5) {
    if (*(long *)(param_3 + 0x48) == 0) goto LAB_07465d88;
    iVar7 = FUN_0721519c(*(long *)(param_3 + 0x48),0);
    if (iVar7 != 4) {
      if (*(long *)(param_3 + 0x48) == 0) goto LAB_07465d88;
      iVar7 = FUN_0721519c(*(long *)(param_3 + 0x48),0);
      if (iVar7 == 6) {
        plVar11 = (long *)FUN_07464244(param_3);
        if (plVar11 == (long *)0x0) goto LAB_07465d88;
        lVar10 = *plVar11;
        uVar9 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar9 != 0) {
          piVar16 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == *(long *)puVar3) {
              puVar13 = (undefined8 *)(lVar10 + (long)(*piVar16 + 9) * 0x10 + 0x138);
              goto LAB_074659a0;
            }
            uVar9 = uVar9 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar9 != 0);
        }
        puVar13 = (undefined8 *)FUN_0367cd30(plVar11,*(long *)puVar3,9);
LAB_074659a0:
        uVar22 = (*(code *)*puVar13)(plVar11,puVar13[1]);
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_036a1978();
        }
        fVar23 = (float)FUN_07369710(uVar22,&local_98,0);
        if (*(long *)(param_3 + 0x48) == 0) goto LAB_07465d88;
        fVar27 = *(float *)(param_3 + 0x24);
        fVar28 = *(float *)(param_3 + 0x28);
        fVar26 = param_2;
        uVar22 = FUN_07214450(*(long *)(param_3 + 0x48),0);
        lVar10 = *plVar12;
        lVar17 = *(long *)(param_3 + 0x50);
        if (*(int *)(lVar10 + 0xe4) == 0) {
          thunk_FUN_036a1978(lVar10);
          lVar10 = *plVar12;
        }
        uVar19 = local_98;
        lVar18 = *(long *)puVar4;
        uVar24 = *(undefined4 *)(*(long *)(lVar10 + 0xb8) + 8);
        if (*(int *)(lVar18 + 0xe4) == 0) {
          thunk_FUN_036a1978();
          lVar18 = *(long *)puVar4;
        }
        puVar13 = *(undefined8 **)(lVar18 + 0xb8);
        lVar10 = puVar13[2];
        if (lVar10 == 0) {
          if (*(int *)(lVar18 + 0xe4) == 0) {
            thunk_FUN_036a1978();
            puVar13 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
          }
          uVar20 = *puVar13;
          lVar10 = thunk_FUN_0367fe20(*(undefined8 *)
                                       Method_System_Collections_Generic_LowLevelList<object>_RemoveAll__
                                     );
          FUN_041670dc(lVar10,uVar20,
                       *(undefined8 *)
                        Method_System_Collections_Generic_LowLevelList<object>_get_Count__,0);
          plVar12 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x10);
          *plVar12 = lVar10;
          thunk_FUN_036b7ad0(plVar12,lVar10);
          puVar21 = (undefined8 *)
                    Method_System_Collections_Generic_LowLevelList<ExceptionDispatchInfo>_get_Count__
          ;
        }
        local_a8 = 0;
        local_b0 = 0;
        FUN_051b8050(uVar22,fVar26,&local_b0,*(uint *)(param_3 + 0x14) & 0xf,
                     *(undefined8 *)
                      Method_System_Collections_Generic_LowLevelList<object>_set_Item__);
        if (lVar17 == 0) goto LAB_07465d88;
        FUN_03c7f754(fVar23,param_2,0,fVar23 - fVar27,param_2 - fVar28,0,lVar17,uVar24,uVar19,lVar10
                     ,local_b0,local_a8,0,
                     *(undefined8 *)Method_System_Collections_Generic_LowLevelList<object>_Add__);
      }
      else {
        if ((*(char *)(param_3 + 0x10) == '\0') && (*(char *)(param_3 + 0x11) == '\0')) {
          if (*(long *)(param_3 + 0x48) == 0) goto LAB_07465d88;
          iVar7 = FUN_07214594(*(long *)(param_3 + 0x48),0);
          if (iVar7 == 0) goto LAB_07465958;
        }
        else {
LAB_07465958:
          if (*(long *)(param_3 + 0x48) == 0) goto LAB_07465d88;
          iVar7 = FUN_0721519c(*(long *)(param_3 + 0x48),0);
          if (iVar7 != 0x14) {
            if (*(long *)(param_3 + 0x48) == 0) goto LAB_07465d88;
            iVar7 = FUN_0721519c(*(long *)(param_3 + 0x48),0);
            bVar6 = false;
            if (iVar7 != 0x15) goto LAB_07465778;
          }
        }
        if (*(long *)(param_3 + 0x48) == 0) goto LAB_07465d88;
        iVar7 = FUN_07214594(*(long *)(param_3 + 0x48),0);
        if (iVar7 == 0) {
          lVar10 = *plVar12;
          if (*(int *)(lVar10 + 0xe4) == 0) {
            thunk_FUN_036a1978();
            lVar10 = *plVar12;
          }
          puVar14 = (undefined4 *)(*(long *)(lVar10 + 0xb8) + 8);
        }
        else {
          if (*(long *)(param_3 + 0x48) == 0) goto LAB_07465d88;
          iVar7 = FUN_07214594(*(long *)(param_3 + 0x48),0);
          lVar10 = *plVar12;
          if (iVar7 == 1) {
            if (*(int *)(lVar10 + 0xe4) == 0) {
              thunk_FUN_036a1978();
              lVar10 = *plVar12;
            }
            puVar14 = (undefined4 *)(*(long *)(lVar10 + 0xb8) + 0xc);
          }
          else {
            if (*(int *)(lVar10 + 0xe4) == 0) {
              thunk_FUN_036a1978();
              lVar10 = *plVar12;
            }
            puVar14 = (undefined4 *)(*(long *)(lVar10 + 0xb8) + 0x14);
          }
        }
        if (*(long *)(param_3 + 0x48) == 0) goto LAB_07465d88;
        uVar22 = *puVar14;
        uVar24 = FUN_0721430c(*(long *)(param_3 + 0x48),0);
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_036a1978();
        }
        uVar24 = FUN_07369790(uVar24,param_2,&local_a0,0);
        if (*(long *)(param_3 + 0x48) == 0) goto LAB_07465d88;
        fVar23 = param_2;
        uVar25 = FUN_07214450(*(long *)(param_3 + 0x48),0);
        uVar19 = local_a0;
        lVar10 = *(long *)puVar4;
        lVar17 = *(long *)(param_3 + 0x50);
        if (*(int *)(lVar10 + 0xe4) == 0) {
          thunk_FUN_036a1978();
          lVar10 = *(long *)puVar4;
        }
        puVar15 = *(undefined8 **)(lVar10 + 0xb8);
        lVar18 = puVar15[3];
        if (lVar18 == 0) {
          if (*(int *)(lVar10 + 0xe4) == 0) {
            thunk_FUN_036a1978();
            puVar15 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
          }
          uVar20 = *puVar15;
          lVar18 = thunk_FUN_0367fe20(*(undefined8 *)
                                       Method_System_Collections_Generic_LowLevelList<object>_Insert__
                                     );
          FUN_0416739c(lVar18,uVar20,
                       *(undefined8 *)
                        Method_System_Collections_Generic_LowLevelList<object>_get_Item__,0);
          plVar12 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x18);
          *plVar12 = lVar18;
          thunk_FUN_036b7ad0(plVar12,lVar18);
        }
        lVar10 = *(long *)(param_3 + 0x48);
        if (lVar10 == 0) goto LAB_07465d88;
        iVar7 = FUN_0721519c(lVar10,0);
        if (iVar7 == 0) {
          bVar6 = true;
        }
        else {
          if (*(long *)(param_3 + 0x48) == 0) goto LAB_07465d88;
          iVar7 = FUN_0721519c(*(long *)(param_3 + 0x48),0);
          bVar6 = iVar7 == 0x1e;
        }
        if (lVar17 == 0) goto LAB_07465d88;
        FUN_03c82244(uVar24,param_2,0,uVar25,fVar23,0,lVar17,uVar22,uVar19,lVar18,lVar10,bVar6,
                     *(undefined8 *)
                      Method_System_Collections_Generic_LowLevelList<ExceptionDispatchInfo>_get_Item__
                    );
        puVar15 = (undefined8 *)Method_System_Collections_Generic_LowLevelList<object>_IndexOf__;
      }
      bVar6 = false;
      plVar12 = (long *)PTR_DAT_079ffc80;
      goto LAB_07465778;
    }
  }
  lVar10 = *(long *)puVar4;
  lVar17 = *(long *)(param_3 + 0x50);
  if (*(int *)(lVar10 + 0xe4) == 0) {
    thunk_FUN_036a1978();
    lVar10 = *(long *)puVar4;
  }
  puVar13 = *(undefined8 **)(lVar10 + 0xb8);
  lVar18 = puVar13[1];
  if (lVar18 == 0) {
    if (*(int *)(lVar10 + 0xe4) == 0) {
      thunk_FUN_036a1978();
      puVar13 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
    }
    uVar19 = *puVar13;
    lVar18 = thunk_FUN_0367fe20(*puVar15);
    FUN_04159c38(lVar18,uVar19,*(undefined8 *)puVar5,0);
    plVar11 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 8);
    *plVar11 = lVar18;
    thunk_FUN_036b7ad0(plVar11,lVar18);
  }
  if (lVar17 == 0) {
LAB_07465d88:
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  FUN_03c7e948(lVar17,lVar18,*(undefined8 *)(param_3 + 0x48),*puVar21);
  FUN_07466130(param_3,*(undefined8 *)(param_3 + 0x48),*(undefined4 *)(param_3 + 0x14));
  bVar6 = false;
  goto LAB_07465778;
}


