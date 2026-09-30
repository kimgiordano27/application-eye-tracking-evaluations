/*
FUNCTION_NAME: FUN_074646f4
ENTRY_POINT: 074646f4
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_11;functionality_eye_api_context_without_clear_sink_hits_3
*/


bool FUN_074646f4(undefined1 param_1 [16],undefined4 param_2,long param_3)

{
  bool bVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  long *plVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  undefined8 uVar16;
  long *plVar17;
  long *plVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_138;
  int local_12c;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined4 local_e0;
  undefined1 auStack_d0 [80];
  
  if ((DAT_07ef3cfd & 1) == 0) {
    FUN_03642964(Method_System_Data_Listeners<DataViewListener>_Remove__);
    FUN_03642964(PTR_DAT_07a012a8);
    FUN_03642964(PTR_DAT_07a012d0);
    FUN_03642964(PTR_DAT_07a36140);
    FUN_03642964(Method_System_Data_Listeners<DataViewListener>_get_HasListeners__);
    FUN_03642964(
                Method_System_Collections_Generic_List<OVRPlugin_Qpl_Annotation_Builder_Entry>_get_Count__
                );
    FUN_03642964(PTR_DAT_079ffc80);
    FUN_03642964(Method_System_Collections_Generic_LowLevelDictionary<int,_Task>__ctor__);
    FUN_03642964(Method_System_Data_Listeners<DataViewListener>_Add__);
    FUN_03642964(PTR_DAT_079fd9c8);
    FUN_03642964(Method_System_Collections_Generic_LowLevelDictionary<int,_Task>_Remove__);
    DAT_07ef3cfd = 1;
  }
  local_e0 = 0;
  local_128 = 0;
  local_12c = 0;
  local_138 = 0;
  uStack_118 = 0;
  local_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  local_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  plVar8 = (long *)FUN_07464244(param_3);
  puVar2 = PTR_DAT_07a36140;
  if (plVar8 != (long *)0x0) {
    iVar7 = 0;
    bVar1 = true;
    plVar15 = (long *)Method_System_Data_Listeners<DataViewListener>_Add__;
    plVar17 = (long *)PTR_DAT_079ffc80;
    plVar18 = (long *)
              Method_System_Collections_Generic_List<OVRPlugin_Qpl_Annotation_Builder_Entry>_get_Count__
    ;
    do {
      lVar10 = *plVar8;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *plVar18) {
            puVar9 = (undefined8 *)(lVar10 + (long)(*piVar12 + 4) * 0x10 + 0x138);
            goto LAB_0746485c;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar9 = (undefined8 *)FUN_0367cd30(plVar8,*plVar18,4);
LAB_0746485c:
      iVar6 = (*(code *)*puVar9)(plVar8,puVar9[1]);
      if (iVar6 <= iVar7) {
        if (bVar1) {
          *(undefined4 *)(param_3 + 0x38) = 0;
          if (*(long *)(param_3 + 0x30) == 0) break;
          FUN_055f1a50(*(long *)(param_3 + 0x30),*(undefined8 *)PTR_DAT_07a012d0);
        }
        plVar8 = (long *)FUN_07464244(param_3);
        if (plVar8 != (long *)0x0) {
          lVar10 = *plVar8;
          uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar11 == 0) goto LAB_07464c60;
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          goto LAB_07464c48;
        }
        break;
      }
      plVar8 = (long *)FUN_07464244(param_3);
      if (plVar8 == (long *)0x0) break;
      lVar10 = *plVar8;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *plVar18) {
            puVar9 = (undefined8 *)(lVar10 + (long)(*piVar12 + 5) * 0x10 + 0x138);
            goto LAB_074648d0;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar9 = (undefined8 *)FUN_0367cd30(plVar8,*plVar18,5);
LAB_074648d0:
      (*(code *)*puVar9)(auStack_d0,plVar8,iVar7,puVar9[1]);
      memcpy(&local_120,auStack_d0,0x44);
      iVar6 = FUN_0723d9e4(&local_120,0);
      if ((iVar6 != 1) && (iVar6 = FUN_0723d9bc(&local_120,0), iVar6 != 2)) {
        iVar6 = FUN_0723d9bc(&local_120,0);
        if (iVar6 == 0) {
          bVar5 = true;
        }
        else {
          iVar6 = FUN_0723d9bc(&local_120,0);
          bVar5 = iVar6 == 1;
        }
        uVar19 = FUN_0723d96c(&local_120,0);
        if (*(int *)(*(long *)PTR_DAT_079fd9c8 + 0xe4) == 0) {
          thunk_FUN_036a1978();
        }
        FUN_07369710(uVar19,param_2,&local_128,0);
        FUN_0723d974(&local_120,0);
        UnityEngine_UIElements_StyleBackgroundPosition___ctor(&local_120,0);
        FUN_07369710(&local_138,0);
        FUN_0723d984(&local_120,0);
        FUN_0723d98c(&local_120,0);
        FUN_07369a28(0);
        FUN_0723d994(&local_120,0);
        lVar10 = *(long *)(param_3 + 0x30);
        uVar19 = FUN_0723d95c(&local_120,0);
        if (lVar10 == 0) break;
        uVar11 = FUN_055f323c(lVar10,uVar19,&local_12c,*(undefined8 *)puVar2);
        if ((uVar11 & 1) == 0) {
          local_12c = *(int *)(param_3 + 0x38);
          lVar10 = *(long *)(param_3 + 0x30);
          *(int *)(param_3 + 0x38) = local_12c + 1;
          uVar19 = FUN_0723d95c(&local_120,0);
          if (lVar10 == 0) break;
          FUN_055f18d0(lVar10,uVar19,local_12c,*(undefined8 *)PTR_DAT_07a012a8);
        }
        lVar10 = *plVar17;
        if (*(int *)(lVar10 + 0xe4) == 0) {
          thunk_FUN_036a1978();
          lVar10 = *plVar17;
        }
        iVar3 = local_12c;
        lVar13 = *(long *)(param_3 + 0x50);
        iVar6 = *(int *)(*(long *)(lVar10 + 0xb8) + 0xc);
        uVar20 = FUN_0723d96c(&local_120,0);
        uVar19 = param_2;
        uVar21 = FUN_0723d98c(&local_120,0);
        uVar4 = local_128;
        lVar10 = *plVar15;
        if (*(int *)(lVar10 + 0xe4) == 0) {
          thunk_FUN_036a1978();
          lVar10 = *plVar15;
        }
        puVar9 = *(undefined8 **)(lVar10 + 0xb8);
        lVar14 = puVar9[10];
        if (lVar14 == 0) {
          if (*(int *)(lVar10 + 0xe4) == 0) {
            thunk_FUN_036a1978();
            puVar9 = *(undefined8 **)
                      (*(long *)Method_System_Data_Listeners<DataViewListener>_Add__ + 0xb8);
          }
          uVar16 = *puVar9;
          lVar14 = thunk_FUN_0367fe20(*(undefined8 *)
                                       Method_System_Data_Listeners<DataViewListener>_get_HasListeners__
                                     );
          FUN_04167194(lVar14,uVar16,
                       *(undefined8 *)
                        Method_System_Collections_Generic_LowLevelDictionary<int,_Task>__ctor__,0);
          plVar8 = (long *)(*(long *)(*(long *)Method_System_Data_Listeners<DataViewListener>_Add__
                                     + 0xb8) + 0x50);
          *plVar8 = lVar14;
          thunk_FUN_036b7ad0(plVar8,lVar14);
          plVar17 = (long *)PTR_DAT_079ffc80;
          plVar18 = (long *)
                    Method_System_Collections_Generic_List<OVRPlugin_Qpl_Annotation_Builder_Entry>_get_Count__
          ;
        }
        memcpy(auStack_d0,&local_120,0x44);
        uStack_158 = 0;
        local_160 = 0;
        uStack_148 = 0;
        uStack_150 = 0;
        uStack_168 = 0;
        local_170 = 0;
        uStack_188 = 0;
        local_190 = 0;
        uStack_178 = 0;
        uStack_180 = 0;
        FUN_051e34d8(&local_190,auStack_d0,iVar3 + iVar6,local_128,
                     *(undefined8 *)
                      Method_System_Collections_Generic_LowLevelDictionary<int,_Task>_Remove__);
        if (lVar13 == 0) break;
        bVar1 = (bool)(!bVar5 & bVar1);
        memcpy(auStack_d0,&local_190,0x50);
        FUN_03c81dc8(uVar20,param_2,0,uVar21,uVar19,0,lVar13,iVar3 + iVar6,uVar4,lVar14,auStack_d0,0
                     ,*(undefined8 *)Method_System_Data_Listeners<DataViewListener>_Remove__);
        plVar15 = (long *)Method_System_Data_Listeners<DataViewListener>_Add__;
      }
      iVar7 = iVar7 + 1;
      plVar8 = (long *)FUN_07464244(param_3);
    } while (plVar8 != (long *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar12 = piVar12 + 4;
    if (uVar11 == 0) break;
LAB_07464c48:
    if (*(long *)(piVar12 + -2) == *plVar18) {
      puVar9 = (undefined8 *)(lVar10 + (long)(*piVar12 + 4) * 0x10 + 0x138);
      goto LAB_07464c80;
    }
  }
LAB_07464c60:
  puVar9 = (undefined8 *)FUN_0367cd30(plVar8,*plVar18,4);
LAB_07464c80:
  iVar7 = (*(code *)*puVar9)(plVar8,puVar9[1]);
  return 0 < iVar7;
}


