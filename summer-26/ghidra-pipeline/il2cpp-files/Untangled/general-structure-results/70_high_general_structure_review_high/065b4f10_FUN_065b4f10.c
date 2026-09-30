/*
FUNCTION_NAME: FUN_065b4f10
ENTRY_POINT: 065b4f10
PROGRAM: Untangled-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_8;ray_or_cast_sink_hits_1;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x065b526c) */
/* WARNING: Removing unreachable block (ram,0x065b5254) */
/* WARNING: Removing unreachable block (ram,0x065b5260) */

void FUN_065b4f10(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  long *plStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  long *local_78;
  undefined8 local_70;
  
  puVar6 = PlayFab_EconomyModels_CreateUploadUrlsResponse_TypeInfo;
  puVar3 = PTR_DAT_06d02348;
  puVar2 = PTR_DAT_06d02340;
  if ((DAT_071ceb46 & 1) == 0) {
    FUN_02f07e70(ES3Types_ES3Type_InheritVelocityModule_TypeInfo);
    FUN_02f07e70(ES3Types_ES3Type_IntPtr_TypeInfo);
    FUN_02f07e70(PTR_DAT_06d08618);
    FUN_02f07e70(ES3Types_ES3Type_IntPtrArray_TypeInfo);
    FUN_02f07e70(ES3Types_ES3Type_Keyframe_TypeInfo);
    FUN_02f07e70(PTR_DAT_06d08628);
    FUN_02f07e70(PTR_DAT_06d08630);
    FUN_02f07e70(ES3Types_ES3Type_KeyframeArray_TypeInfo);
    FUN_02f07e70(PlayFab_EconomyModels_CreateUploadUrlsResponse_TypeInfo);
    FUN_02f07e70(ES3Types_ES3Type_LayerMask_TypeInfo);
    FUN_02f07e70(ES3Types_ES3Type_Light_TypeInfo);
    FUN_02f07e70(PTR_DAT_06d02330);
    FUN_02f07e70(PTR_DAT_06d08648);
    FUN_02f07e70(PTR_DAT_06d02340);
    FUN_02f07e70(PTR_DAT_06d02348);
    DAT_071ceb46 = 1;
  }
  local_70 = 0;
  uStack_88 = 0;
  local_90 = 0;
  local_78 = (long *)0x0;
  local_80 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_a0 = 0;
  lVar11 = thunk_FUN_02ef1808(*(undefined8 *)puVar3);
  FUN_03fd0468(lVar11,*(undefined8 *)puVar2);
  lVar12 = *(long *)puVar6;
  if (*(int *)(lVar12 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar12 = *(long *)puVar6;
  }
  lVar12 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x10);
  if (lVar12 != 0) {
    FUN_056762fc(lVar12,0xffffffff,0);
    lVar12 = *(long *)(*(long *)(*(long *)puVar6 + 0xb8) + 8);
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    FUN_04c74a5c(&local_d8,lVar12,*(undefined8 *)ES3Types_ES3Type_InheritVelocityModule_TypeInfo);
    puVar9 = ES3Types_ES3Type_Keyframe_TypeInfo;
    puVar8 = ES3Types_ES3Type_IntPtrArray_TypeInfo;
    puVar7 = ES3Types_ES3Type_IntPtr_TypeInfo;
    puVar5 = PTR_DAT_06d08648;
    puVar4 = PTR_DAT_06d08628;
    puVar3 = PTR_DAT_06d08618;
    puVar2 = PTR_DAT_06d02330;
    uStack_88 = uStack_d0;
    local_90 = local_d8;
    local_78 = plStack_c0;
    local_80 = local_c8;
    local_70 = local_b8;
    while( true ) {
      do {
        uVar13 = FUN_04e98e80(&local_90,*(undefined8 *)puVar9);
        uVar10 = local_80;
        if ((uVar13 & 1) == 0) {
          FUN_04e98fa0(&local_90,*(undefined8 *)puVar8);
          if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c0();
          }
          FUN_03fd16fc(&local_d8,lVar11,*(undefined8 *)puVar5);
          uStack_a8 = uStack_d0;
          local_b0 = local_d8;
          local_a0 = local_c8;
          while( true ) {
            uVar13 = FUN_04df6d30(&local_b0,*(undefined8 *)puVar4);
            uVar10 = local_a0;
            if ((uVar13 & 1) == 0) {
              FUN_04df6d2c(&local_b0,*(undefined8 *)puVar3);
              lVar11 = *(long *)puVar6;
              if (*(int *)(lVar11 + 0xe0) == 0) {
                thunk_FUN_02f12b58();
                lVar11 = *(long *)puVar6;
              }
              lVar11 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x10);
              if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c0();
              }
              FUN_05676304(lVar11,0);
              return;
            }
            lVar11 = *(long *)puVar6;
            if (*(int *)(lVar11 + 0xe0) == 0) {
              thunk_FUN_02f12b58();
              lVar11 = *(long *)puVar6;
            }
            lVar11 = *(long *)(*(long *)(lVar11 + 0xb8) + 8);
            if (lVar11 == 0) break;
            FUN_04c75b28(lVar11,uVar10,*(undefined8 *)puVar7);
          }
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        if (local_78 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        uVar13 = (**(code **)(*local_78 + 0x188))(local_78,*(undefined8 *)(*local_78 + 400));
      } while ((uVar13 & 1) != 0);
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      lVar12 = *(long *)(lVar11 + 0x10);
      lVar15 = *(long *)puVar2;
      *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
      if (lVar12 == 0) break;
      uVar1 = *(uint *)(lVar11 + 0x18);
      if (uVar1 < *(uint *)(lVar12 + 0x18)) {
        *(uint *)(lVar11 + 0x18) = uVar1 + 1;
        puVar14 = (undefined8 *)(lVar12 + (long)(int)uVar1 * 8 + 0x20);
        *puVar14 = uVar10;
        thunk_FUN_02f411dc(puVar14,uVar10);
      }
      else {
        FUN_03fd0c9c(lVar11,uVar10,
                     *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


