/*
FUNCTION_NAME: FUN_041fb498
ENTRY_POINT: 041fb498
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_21;telemetry_or_network_hits_3
*/


void FUN_041fb498(undefined8 param_1,long param_2,byte param_3,long param_4)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  int iVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long lVar11;
  uint uVar12;
  ulong uVar13;
  int *piVar14;
  long lVar15;
  int iVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  undefined1 auVar37 [12];
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  
  if ((DAT_04841118 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_System_Linq_Enumerable_First<VoiceServiceRequest>__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Component_GetComponentInChildren<Weapon>__);
    thunk_FUN_01efb3a4(PTR_DAT_045909c8);
    thunk_FUN_01efb3a4(PTR_DAT_045909d0);
    DAT_04841118 = 1;
  }
  local_e8 = 0;
  if ((param_2 == 0) || (*(long *)(param_2 + 0x2b8) == 0)) goto LAB_041fbbc0;
  fVar17 = (float)FUN_0411d864(*(long *)(param_2 + 0x2b8),0);
  if (*(long *)(param_2 + 0x2b8) == 0) goto LAB_041fbbc0;
  fVar18 = (float)FUN_0411d8a0(*(long *)(param_2 + 0x2b8),0);
  if (*(long *)(param_2 + 0x2b8) == 0) goto LAB_041fbbc0;
  fVar19 = (float)FUN_0411d954(*(long *)(param_2 + 0x2b8),0);
  if (*(long *)(param_2 + 0x2b8) == 0) goto LAB_041fbbc0;
  fVar20 = (float)FUN_0411d990(*(long *)(param_2 + 0x2b8),0);
  if (*(long *)(param_2 + 0x2b8) == 0) goto LAB_041fbbc0;
  fVar21 = (float)FUN_0411cba8(*(long *)(param_2 + 0x2b8),0);
  if (*(long *)(param_2 + 0x2b8) == 0) goto LAB_041fbbc0;
  fVar22 = (float)FUN_0411cba8(*(long *)(param_2 + 0x2b8),0);
  if (*(long *)(param_2 + 0x2b8) == 0) goto LAB_041fbbc0;
  fVar23 = (float)FUN_0411cc28(*(long *)(param_2 + 0x2b8),0);
  puVar4 = Method_UnityEngine_Component_GetComponentInChildren<Weapon>__;
  if (*(long *)(param_2 + 0x2b8) == 0) goto LAB_041fbbc0;
  fVar24 = (float)FUN_0411cc68(*(long *)(param_2 + 0x2b8),0);
  fVar29 = *(float *)(param_2 + 100);
  fVar26 = *(float *)(param_2 + 0x68);
  fVar32 = *(float *)(param_2 + 0x6c);
  fVar33 = *(float *)(param_2 + 0x70);
  fVar30 = *(float *)(param_2 + 0x74);
  fVar27 = *(float *)(param_2 + 0x78);
  fVar31 = *(float *)(param_2 + 0x7c);
  fVar28 = *(float *)(param_2 + 0x80);
  fVar35 = fVar19 - (fVar21 + fVar23);
  fVar36 = fVar20 - (fVar22 + fVar24);
  FUN_04224690(param_2,0);
  fVar23 = DAT_00c92314;
  fVar24 = fVar32 - fVar19;
  fVar25 = fVar33 - fVar20;
  fVar31 = fVar31 - fVar35;
  fVar28 = fVar28 - fVar36;
  fVar34 = fVar24 * fVar24 + fVar25 * fVar25;
  fVar24 = fVar17 - fVar29;
  fVar25 = fVar18 - fVar26;
  fVar30 = fVar21 - fVar30;
  fVar27 = fVar22 - fVar27;
  fVar24 = fVar24 * fVar24 + fVar25 * fVar25;
  bVar5 = false;
  if ((fVar31 * fVar31 + fVar28 * fVar28 < DAT_00c92314) &&
     (bVar5 = false, !NAN(fVar34) && !NAN(DAT_00c92314))) {
    bVar5 = fVar34 < DAT_00c92314;
  }
  uVar12 = 0xc00;
  if (bVar5) {
    uVar12 = 0;
  }
  bVar5 = false;
  if ((fVar30 * fVar30 + fVar27 * fVar27 < DAT_00c92314) &&
     (bVar5 = false, !NAN(fVar24) && !NAN(DAT_00c92314))) {
    bVar5 = fVar24 < DAT_00c92314;
  }
  uVar2 = uVar12 | 0x200;
  uVar1 = uVar2;
  if (bVar5) {
    uVar1 = uVar12;
  }
  uVar12 = uVar1;
  if ((uVar1 & 0x600) == 0x400) {
    uVar7 = FUN_04219978(param_2,0);
    FUN_042022cc(&local_c0,uVar7,0);
    if ((float)local_c0 == 0.0) {
      uVar7 = FUN_04219978(param_2,0);
      auVar37 = FUN_04202334(uVar7,0);
      if (DAT_0482ee10 == '\0') {
        thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__);
        DAT_0482ee10 = '\x01';
      }
      uVar7 = *(undefined8 *)
               (*(long *)(*(long *)Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__ +
                         0xb8) + 0x10);
      fVar25 = auVar37._0_4_ -
               *(float *)(*(long *)(*(long *)
                                     Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__
                                   + 0xb8) + 0xc);
      fVar27 = auVar37._4_4_ - (float)uVar7;
      fVar28 = auVar37._8_4_ - (float)((ulong)uVar7 >> 0x20);
      if (fVar28 * fVar28 + fVar25 * fVar25 + fVar27 * fVar27 < fVar23) goto LAB_041fb920;
    }
    plVar8 = (long *)FUN_042198ec(param_2,0);
    if (plVar8 == (long *)0x0) goto LAB_041fbbc0;
    lVar11 = *plVar8;
    uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)puVar4) {
          puVar9 = (undefined8 *)(lVar11 + (long)(*piVar14 + 0x23) * 0x10 + 0x138);
          goto LAB_041fb7d4;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar9 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)puVar4,0x23);
LAB_041fb7d4:
    fVar25 = (float)(*(code *)*puVar9)(plVar8,puVar9[1]);
    if (DAT_0482ef73 == '\0') {
      thunk_FUN_01efb3a4(
                        Method_UnityEngine_UIElements_PanelChangedEventBase<DetachFromPanelEvent>_GetPooled__
                        );
      DAT_0482ef73 = '\x01';
    }
    puVar3 = Method_UnityEngine_UIElements_PanelChangedEventBase<DetachFromPanelEvent>_GetPooled__;
    fVar27 = DAT_00c927dc;
    fVar28 = ABS(fVar25);
    if (fVar28 <= 0.0) {
      fVar28 = 0.0;
    }
    fVar31 = ABS(0.0 - fVar25);
    fVar30 = **(float **)
               (*(long *)
                 Method_UnityEngine_UIElements_PanelChangedEventBase<DetachFromPanelEvent>_GetPooled__
               + 0xb8) * 8.0;
    fVar25 = fVar28 * DAT_00c927dc;
    if (fVar28 * DAT_00c927dc <= fVar30) {
      fVar25 = fVar30;
    }
    uVar12 = uVar2;
    if (fVar31 < fVar25) {
      plVar8 = (long *)FUN_042198ec(param_2,0);
      if (plVar8 == (long *)0x0) goto LAB_041fbbc0;
      lVar11 = *plVar8;
      uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)puVar4) {
            puVar9 = (undefined8 *)(lVar11 + (long)(*piVar14 + 0x23) * 0x10 + 0x138);
            goto LAB_041fb8b8;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar9 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)puVar4,0x23);
LAB_041fb8b8:
      (*(code *)*puVar9)(plVar8,puVar9[1]);
      if (DAT_0482ef73 == '\0') {
        thunk_FUN_01efb3a4(
                          Method_UnityEngine_UIElements_PanelChangedEventBase<DetachFromPanelEvent>_GetPooled__
                          );
        DAT_0482ef73 = '\x01';
      }
      fVar25 = ABS(fVar31);
      if (fVar25 <= 0.0) {
        fVar25 = 0.0;
      }
      fVar30 = **(float **)(*(long *)puVar3 + 0xb8) * 8.0;
      fVar28 = fVar25 * fVar27;
      if (fVar25 * fVar27 <= fVar30) {
        fVar28 = fVar30;
      }
      uVar12 = uVar1;
      if (fVar28 <= ABS(0.0 - fVar31)) {
        uVar12 = uVar2;
      }
    }
  }
LAB_041fb920:
  plVar8 = (long *)FUN_042198ec(param_2,0);
  if (plVar8 != (long *)0x0) {
    lVar11 = *plVar8;
    uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)puVar4) {
          puVar9 = (undefined8 *)(lVar11 + (long)(*piVar14 + 0xf) * 0x10 + 0x138);
          goto LAB_041fb984;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar9 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)puVar4,0xf);
LAB_041fb984:
    iVar6 = (*(code *)*puVar9)(plVar8,puVar9[1]);
    param_3 = iVar6 != 1 & param_3;
    FUN_0422469c(param_2,param_3,0);
    if (uVar12 != 0) {
      FUN_0421dd10(param_2,uVar12,0);
    }
    *(float *)(param_2 + 100) = fVar17;
    *(float *)(param_2 + 0x68) = fVar18;
    *(float *)(param_2 + 0x6c) = fVar19;
    *(float *)(param_2 + 0x70) = fVar20;
    *(float *)(param_2 + 0x74) = fVar21;
    *(float *)(param_2 + 0x78) = fVar22;
    *(float *)(param_2 + 0x7c) = fVar35;
    *(float *)(param_2 + 0x80) = fVar36;
    if (*(long *)(param_2 + 0x2b8) != 0) {
      uVar13 = FUN_0411d094(*(long *)(param_2 + 0x2b8),0);
      if ((uVar13 & 1) != 0) {
        local_e8 = *(undefined8 *)(param_2 + 0x378);
        iVar6 = FUN_04231aa0(&local_e8,0);
        if (0 < iVar6) {
          iVar16 = 0;
          do {
            local_e8 = *(undefined8 *)(param_2 + 0x378);
            lVar11 = FUN_04232a4c(&local_e8,iVar16,0);
            if ((lVar11 == 0) || (*(long *)(lVar11 + 0x2b8) == 0)) goto LAB_041fbbc0;
            uVar10 = FUN_0411d094(*(long *)(lVar11 + 0x2b8),0);
            if ((uVar10 & 1) != 0) {
              FUN_041fb498(param_1,lVar11,param_3,param_4);
            }
            iVar16 = iVar16 + 1;
          } while (iVar6 != iVar16);
        }
      }
      puVar4 = Method_System_Linq_Enumerable_First<VoiceServiceRequest>__;
      if ((fVar23 <= fVar24) || (fVar23 <= fVar34)) {
        lVar11 = *(long *)Method_System_Linq_Enumerable_First<VoiceServiceRequest>__;
        if (*(int *)(lVar11 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
          lVar11 = *(long *)puVar4;
        }
        uVar10 = FUN_0422a494(param_2,*(undefined4 *)(*(long *)(lVar11 + 0xb8) + 0x10),0);
        if ((uVar10 & 1) != 0) {
          local_100 = 0;
          uStack_f8 = 0;
          local_f0 = 0;
          FUN_0301d674(fVar29,fVar26,fVar32,fVar33,&local_100,param_2,
                       *(undefined8 *)PTR_DAT_045909c8);
          if (param_4 == 0) goto LAB_041fbbc0;
          uStack_d8 = uStack_f8;
          local_e0 = local_100;
          local_d0 = local_f0;
          lVar11 = *(long *)(param_4 + 0x10);
          lVar15 = *(long *)PTR_DAT_045909d0;
          *(int *)(param_4 + 0x1c) = *(int *)(param_4 + 0x1c) + 1;
          if (lVar11 == 0) goto LAB_041fbbc0;
          uVar12 = *(uint *)(param_4 + 0x18);
          if (uVar12 < *(uint *)(lVar11 + 0x18)) {
            *(uint *)(param_4 + 0x18) = uVar12 + 1;
            lVar11 = lVar11 + (long)(int)uVar12 * 0x18;
            *(undefined8 *)(lVar11 + 0x30) = local_f0;
            *(undefined8 *)(lVar11 + 0x28) = uStack_f8;
            *(undefined8 *)(lVar11 + 0x20) = local_100;
            thunk_FUN_01f51358((undefined8 *)(lVar11 + 0x30),0);
          }
          else {
            uStack_b8 = uStack_f8;
            local_c0 = local_100;
            local_b0 = local_f0;
            FUN_03051068(param_4,&local_c0,
                         *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
          }
        }
      }
      if ((uVar13 & 1) != 0) {
        if (*(long *)(param_2 + 0x2b8) == 0) goto LAB_041fbbc0;
        FUN_0411da5c(*(long *)(param_2 + 0x2b8),0);
      }
      return;
    }
  }
LAB_041fbbc0:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


