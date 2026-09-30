/*
FUNCTION_NAME: FUN_03697024
ENTRY_POINT: 03697024
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_5;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_3
*/


void FUN_03697024(undefined1 param_1 [16],ulong param_2,ulong param_3,long *param_4,long param_5,
                 uint *param_6)

{
  uint *puVar1;
  uint *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  int iVar7;
  undefined8 *puVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  int *piVar15;
  int iVar16;
  long *plVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  ulong uVar26;
  ulong uVar27;
  float fVar28;
  ulong uVar29;
  ulong uVar30;
  ulong uVar31;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  
  if ((DAT_04833efc & 1) == 0) {
    thunk_FUN_01efb3a4(Method_OVRResources_<>c__DisplayClass2_0_<Load>b__0__);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__);
    thunk_FUN_01efb3a4(Method_OVRPlugin_FovfPair_get_Item__);
    DAT_04833efc = 1;
  }
  puVar5 = Method_OVRResources_<>c__DisplayClass2_0_<Load>b__0__;
  puVar4 = Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__;
  puVar3 = Method_Oculus_Platform_Message<LeaderboardList>__ctor__;
  local_b0 = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  plVar17 = (long *)param_4[0x27];
  if (plVar17 != (long *)0x0) {
    puVar1 = param_6 + 0xc;
    puVar2 = param_6 + 10;
    fVar28 = 0.0;
    iVar16 = 1;
    uVar29 = (ulong)*param_6;
    uVar30 = (ulong)param_6[1];
    uVar31 = (ulong)param_6[2];
    do {
      lVar12 = *plVar17;
      lVar11 = *(long *)puVar5;
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar13 != 0) {
        piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == lVar11) {
            puVar8 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
            uVar13 = param_2;
            uVar26 = param_3;
            goto LAB_03697138;
          }
          uVar13 = uVar13 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar13 != 0);
      }
      puVar8 = (undefined8 *)FUN_01ecb238(plVar17,lVar11,0);
      uVar13 = param_2;
      uVar26 = param_3;
LAB_03697138:
      iVar7 = (*(code *)*puVar8)(plVar17,puVar8[1]);
      if (iVar7 <= iVar16) {
        return;
      }
      if ((float)param_6[7] < fVar28) {
        return;
      }
      plVar17 = (long *)param_4[0x27];
      if (plVar17 == (long *)0x0) break;
      lVar12 = *plVar17;
      lVar11 = *(long *)puVar5;
      uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == lVar11) {
            puVar8 = (undefined8 *)(lVar12 + (long)(*piVar15 + 1) * 0x10 + 0x138);
            goto LAB_036971b0;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar8 = (undefined8 *)FUN_01ecb238(plVar17,lVar11,1);
LAB_036971b0:
      uVar14 = (*(code *)*puVar8)(plVar17,iVar16,puVar8[1]);
      if (param_5 == 0) break;
      uVar10 = uVar30;
      uVar27 = uVar31;
      uVar9 = FUN_03695674(uVar29,uVar30,uVar31,uVar14,uVar13,uVar26,param_5,&local_d0);
      fVar24 = (float)uVar27;
      fVar21 = (float)uVar10;
      if ((uVar9 & 1) != 0) {
        if (*(int *)(*(long *)Method_OVRPlugin_FovfPair_get_Item__ + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        fVar18 = (float)FUN_03694cd0(&local_d0);
        if (DAT_0482f03f == '\0') {
          thunk_FUN_01efb3a4(puVar3);
          DAT_0482f03f = '\x01';
        }
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        fVar18 = (float)uVar29 - fVar18;
        fVar21 = (float)uVar30 - fVar21;
        fVar24 = (float)uVar31 - fVar24;
        fVar24 = fVar24 * fVar24;
        fVar22 = *(float *)(param_4 + 0x28);
        fVar21 = fVar28 + SQRT(fVar24 + fVar18 * fVar18 + fVar21 * fVar21);
        if (fVar22 <= ABS((float)param_6[7] - fVar21)) {
          lVar11 = *(long *)puVar2;
          if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          uVar10 = FUN_04073094(lVar11,0,0);
          if ((uVar10 & 1) != 0) {
            if (*(long *)puVar2 == 0) break;
            if ((*(char *)(*(long *)puVar2 + 0xb0) == '\0') && (*(char *)(param_5 + 0xb0) != '\0'))
            {
              if (*(int *)(*(long *)Method_OVRPlugin_FovfPair_get_Item__ + 0xe0) == 0) {
                thunk_FUN_01ee6d7c();
              }
              fVar18 = (float)uStack_c8;
              fVar19 = (float)FUN_03694cd0(puVar1);
              fVar23 = fVar22;
              fVar25 = fVar24;
              fVar20 = (float)FUN_03694cd0(&local_d0);
              bVar6 = (fVar24 - fVar25) * (fVar24 - fVar25) +
                      (fVar19 - fVar20) * (fVar19 - fVar20) + (fVar22 - fVar23) * (fVar22 - fVar23)
                      < fVar18 * fVar18;
              goto LAB_036972d8;
            }
          }
          bVar6 = false;
        }
        else {
          bVar6 = true;
        }
LAB_036972d8:
        uVar30 = uVar30 & 0xffffffff;
        uVar31 = uVar31 & 0xffffffff;
        lVar11 = *(long *)puVar2;
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar10 = UnityEngine_UIElements_UIR_Implementation_UIRStylePainter__BuildEntryFromNativeMesh
                           (lVar11,0,0);
        if ((uVar10 & 1) != 0) {
LAB_03697424:
          param_6[7] = (uint)fVar21;
          *(undefined8 *)(param_6 + 0x14) = local_b0;
          *(undefined8 *)(param_6 + 0xe) = uStack_c8;
          *(undefined8 *)puVar1 = local_d0;
          *(undefined8 *)(param_6 + 0x12) = uStack_b8;
          *(undefined8 *)(param_6 + 0x10) = uStack_c0;
          thunk_FUN_01f51358(puVar1,0);
          *(long *)(param_6 + 10) = param_5;
          thunk_FUN_01f51358(puVar2,param_5);
          return;
        }
        if (bVar6) {
          iVar7 = (**(code **)(*param_4 + 0x548))
                            (param_4,param_5,*(long *)puVar2,*(undefined8 *)(*param_4 + 0x550));
          if (0 < iVar7) goto LAB_03697424;
        }
        else if (fVar21 < (float)param_6[7]) goto LAB_03697424;
      }
      if (DAT_0482f03f == '\0') {
        thunk_FUN_01efb3a4(puVar3);
        DAT_0482f03f = '\x01';
      }
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      fVar21 = (float)uVar29 - (float)uVar14;
      fVar24 = (float)uVar30 - (float)uVar13;
      fVar18 = (float)uVar31 - (float)uVar26;
      fVar24 = fVar24 * fVar24;
      param_2 = (ulong)(uint)fVar24;
      plVar17 = (long *)param_4[0x27];
      fVar18 = fVar18 * fVar18;
      param_3 = (ulong)(uint)fVar18;
      fVar28 = fVar28 + SQRT(fVar18 + fVar21 * fVar21 + fVar24);
      iVar16 = iVar16 + 1;
      uVar29 = uVar14;
      uVar30 = uVar13;
      uVar31 = uVar26;
    } while (plVar17 != (long *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


