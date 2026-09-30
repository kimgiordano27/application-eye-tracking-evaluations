/*
FUNCTION_NAME: FUN_05d5e0d0
ENTRY_POINT: 05d5e0d0
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 138
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_21;paired_field_refs_with_eye_source;telemetry_or_network_hits_4;functionality_data_collection_or_telemetry_hits_4
*/


void FUN_05d5e0d0(long param_1,undefined8 param_2,long *param_3,long param_4,undefined8 param_5)

{
  uint uVar1;
  undefined8 uVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  undefined8 *puVar15;
  long *plVar16;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  undefined8 uVar20;
  undefined1 auVar21 [16];
  int local_15c;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a0;
  undefined1 *puStack_98;
  long local_90;
  undefined8 uStack_88;
  long local_80;
  undefined8 uStack_78;
  undefined1 local_6c [4];
  undefined8 local_68;
  
  puVar6 = Method_OVRSpatialAnchor_ShareAsync__;
  local_68 = param_2;
  if ((DAT_06bc393b & 1) == 0) {
    FUN_02f08768(PTR_DAT_067c8f48);
    FUN_02f08768(Method_OVRTask_SetResult<OVRResult<OVRAnchor_EraseResult>>__);
    FUN_02f08768(Method_OVRTask_FromGuid<OVRSpatialAnchor_OperationResult>__);
    FUN_02f08768(Method_OVRTask_FromResult<OVRResult<OVRAnchor_SaveResult>>__);
    FUN_02f08768(PTR_DAT_067c8f80);
    FUN_02f08768(PTR_DAT_067cc4c8);
    FUN_02f08768(Method_OVRTask_SetResult<OVRResult<OVRColocationSession_Result>>__);
    FUN_02f08768(Method_OVRTask_SetResult<OVRResult<OVRPlugin_Result>>__);
    FUN_02f08768(PTR_DAT_067cc4f8);
    FUN_02f08768(PTR_DAT_067c8f20);
    FUN_02f08768(Method_OVRSpatialAnchor_ShareAsync__);
    FUN_02f08768(PTR_DAT_067c97a8);
    FUN_02f08768(
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                );
    FUN_02f08768(PTR_DAT_067cbf10);
    FUN_02f08768(Method_OVRTask_FromResult<OVRResult<OVRAnchor_ShareResult>>__);
    FUN_02f08768(Method_OVRTask_SetResult<OVRResult<Guid,_OVRColocationSession_Result>>__);
    DAT_06bc393b = 1;
  }
  lVar12 = *(long *)puVar6;
  local_6c[0] = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_90 = 0;
  uStack_88 = 0;
  if (*(int *)(lVar12 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
    lVar12 = *(long *)puVar6;
  }
  FUN_05c5cb44(local_6c,*(undefined8 *)(*(long *)(lVar12 + 0xb8) + 0x10),0);
  local_a0 = 0;
  puStack_98 = local_6c;
  if (param_3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  lVar12 = *(long *)(param_1 + 0x28);
  if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  uVar3 = *(uint *)((long)param_3 + 0x54);
  if (*(uint *)(lVar12 + 0x18) <= uVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089d0();
  }
  if (*(long *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  lVar12 = lVar12 + (long)(int)uVar3 * 0x10;
  uVar20 = *(undefined8 *)(lVar12 + 0x20);
  uVar17 = *(undefined8 *)(lVar12 + 0x28);
  lVar12 = FUN_04818a9c(*(long *)(param_1 + 0x18),uVar20,uVar17,
                        *(undefined8 *)Method_OVRTask_FromGuid<OVRSpatialAnchor_OperationResult>__);
  if (*(long *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  uVar8 = FUN_048155b4(*(long *)(param_1 + 0x30),uVar20,uVar17,
                       *(undefined8 *)Method_OVRTask_SetResult<OVRResult<OVRAnchor_EraseResult>>__);
  lVar13 = FUN_05d5a36c(param_3);
  puVar6 = PTR_DAT_067c8f20;
  if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  uVar20 = *(undefined8 *)(lVar13 + 0x18);
  if (*(int *)(*(long *)PTR_DAT_067c8f20 + 0xe4) == 0) {
    thunk_FUN_02f6670c(*(long *)PTR_DAT_067c8f20);
  }
  uVar14 = FUN_060f078c(uVar20,0,0);
  if ((uVar14 & 1) == 0) {
LAB_05d5e2f0:
    if (param_4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    uVar20 = *(undefined8 *)(param_4 + 0xf0);
    if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar14 = FUN_060f078c(uVar20,0,0);
    if ((uVar14 & 1) != 0) {
      if (*(long *)(param_4 + 0xf0) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      iVar9 = FUN_060d3708(*(long *)(param_4 + 0xf0),0);
      if (iVar9 == 0) goto LAB_05d5e3c4;
    }
    if ((char)param_3[10] != '\0') {
      lVar13 = param_3[0x13];
      if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      uStack_c8 = *(undefined8 *)(lVar13 + 0x30);
      local_d0 = *(undefined8 *)(lVar13 + 0x28);
      uStack_b8 = *(undefined8 *)(lVar13 + 0x40);
      uStack_c0 = *(undefined8 *)(lVar13 + 0x38);
      local_b0 = *(undefined8 *)(lVar13 + 0x48);
      if (*(int *)(*(long *)PTR_DAT_067c97a8 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      FUN_0610d14c(&local_f8,2,0);
      uStack_148 = uStack_f0;
      local_150 = local_f8;
      uStack_138 = uStack_e0;
      uStack_140 = local_e8;
      local_130 = local_d8;
      uStack_118 = uStack_c8;
      local_120 = local_d0;
      uStack_108 = uStack_b8;
      uStack_110 = uStack_c0;
      local_100 = local_b0;
      uVar14 = FUN_0610d678(&local_120,&local_150,0);
      if ((uVar14 & 1) == 0) {
        bVar4 = true;
        bVar5 = true;
        goto LAB_05d5e3d8;
      }
    }
    bVar4 = false;
    iVar9 = uVar8 + 1;
    bVar5 = true;
  }
  else {
    lVar13 = FUN_05d5a36c(param_3);
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    if (*(long *)(lVar13 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    iVar9 = FUN_060d3708(*(long *)(lVar13 + 0x18),0);
    if (iVar9 != 0) goto LAB_05d5e2f0;
LAB_05d5e3c4:
    bVar4 = false;
    bVar5 = false;
LAB_05d5e3d8:
    iVar9 = 1;
  }
  FUN_03ce5014(&local_80,iVar9,2,1,
               *(undefined8 *)Method_OVRTask_SetResult<OVRResult<OVRPlugin_Result>>__);
  lVar13 = local_80;
  if (0 < (int)uVar8) {
    uVar14 = 0;
    lVar19 = 0x20;
    do {
      lVar18 = *(long *)(param_1 + 0x40);
      if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      if (*(uint *)(lVar18 + 0x18) <= uVar14) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089d0();
      }
      memmove((void *)(lVar13 + lVar19 + -0x20),(void *)(lVar18 + lVar19),0x78);
      uVar14 = uVar14 + 1;
      lVar19 = lVar19 + 0x78;
    } while (uVar8 != uVar14);
  }
  if (!bVar4 && !(bool)(bVar5 ^ 1)) {
    memmove((void *)(local_80 + (long)(int)uVar8 * 0x78),(void *)(param_1 + 0x48),0x78);
  }
  auVar21 = FUN_05d5bee0(param_1,param_4,param_3);
  puVar6 = Method_OVRTask_FromResult<OVRResult<OVRAnchor_ShareResult>>__;
  if (*(int *)(*(long *)Method_OVRTask_FromResult<OVRResult<OVRAnchor_ShareResult>>__ + 0xe4) == 0)
  {
    thunk_FUN_02f6670c();
  }
  if (lVar12 == 0) {
    local_15c = 0;
  }
  else {
    iVar9 = (int)*(ulong *)(lVar12 + 0x18);
    local_15c = iVar9 + -1;
    if (0 < iVar9) {
      uVar14 = 0;
      do {
        if (*(int *)(lVar12 + 0x20 + uVar14 * 4) == -1) {
          local_15c = (int)uVar14;
          break;
        }
        uVar14 = uVar14 + 1;
      } while ((*(ulong *)(lVar12 + 0x18) & 0xffffffff) != uVar14);
    }
  }
  uVar10 = FUN_05d5ec1c(param_3);
  uVar1 = uVar10;
  if (!bVar5) {
    uVar1 = 0;
  }
  FUN_03d1851c(&local_90,uVar1,2,1,*(undefined8 *)PTR_DAT_067cc4f8);
  if ((bVar5) && (uVar10 != 0)) {
    lVar19 = param_3[0xb];
    lVar13 = 0;
    iVar9 = 1;
    do {
      *(undefined4 *)(local_90 + lVar13 * 4) = *(undefined4 *)(lVar19 + lVar13 * 4);
      lVar13 = (long)iVar9;
      iVar9 = iVar9 + 1;
    } while (lVar13 < (long)(ulong)uVar10);
  }
  puVar7 = Method_OVRTask_FromResult<OVRResult<OVRAnchor_SaveResult>>__;
  if (local_15c == 1) {
LAB_05d5e574:
    if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar14 = FUN_05d5cfdc(param_3);
    if ((uVar14 & 1) != 0) {
      if (*(int *)(*(long *)PTR_DAT_067c8f48 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      FUN_060a6338(*(undefined8 *)
                    Method_OVRTask_SetResult<OVRResult<Guid,_OVRColocationSession_Result>>__,0);
    }
    if (*(int *)(*(long *)PTR_DAT_067c8f80 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar11 = FUN_050d645c(auVar21._8_8_ & 0xffffffff,1,0);
    uVar20 = uStack_78;
    lVar13 = local_80;
    if (!bVar5) {
      uVar8 = 0;
    }
    if (bVar4) {
      uVar8 = 0xffffffff;
    }
    if (*(int *)(*(long *)PTR_DAT_067cbf10 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    FUN_061295c8(&local_68,auVar21._0_8_ & 0xffffffff,auVar21._0_8_ >> 0x20,uVar11,lVar13,uVar20,
                 uVar8,0);
    FUN_03ce5340(&local_80,
                 *(undefined8 *)Method_OVRTask_SetResult<OVRResult<OVRColocationSession_Result>>__);
    FUN_061297e8(&local_68,local_90,uStack_88,0,0);
LAB_05d5e664:
    *(uint *)(param_1 + 0x10) = uVar3;
  }
  else {
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    if (*(int *)(lVar12 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089d0();
    }
    if (*(uint *)(lVar12 + 0x20) == uVar3) goto LAB_05d5e574;
    if (*(long *)(param_1 + 0x108) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    uVar20 = FUN_03abf644(*(long *)(param_1 + 0x108),*(undefined4 *)(param_1 + 0x10),
                          *(undefined8 *)
                           Method_OVRTask_FromResult<OVRResult<OVRAnchor_SaveResult>>__);
    if (*(long *)(param_1 + 0x108) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    uVar17 = FUN_03abf644(*(long *)(param_1 + 0x108),uVar3,*(undefined8 *)puVar7);
    if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar14 = FUN_05d5ed90(uVar20,uVar17);
    if ((uVar14 & 1) == 0) {
      if (*(int *)(*(long *)PTR_DAT_067cbf10 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      FUN_061298c8(&local_68,0);
      if (*(long *)(param_1 + 0x108) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      uVar20 = FUN_03abf644(*(long *)(param_1 + 0x108),uVar3,*(undefined8 *)puVar7);
      if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      uVar14 = FUN_05d5cfdc(uVar20);
      uVar20 = uStack_88;
      lVar13 = local_90;
      if ((uVar14 & 1) == 0) {
        if (*(int *)(*(long *)PTR_DAT_067cbf10 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        FUN_061297e8(&local_68,lVar13,uVar20,0,0);
      }
      else {
        if (*(long *)(param_1 + 0x108) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        lVar19 = FUN_03abf644(*(long *)(param_1 + 0x108),uVar3,*(undefined8 *)puVar7);
        if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        uVar17 = *(undefined8 *)(lVar19 + 0x68);
        uVar2 = *(undefined8 *)(lVar19 + 0x70);
        if (*(int *)(*(long *)PTR_DAT_067cbf10 + 0xe4) == 0) {
          thunk_FUN_02f6670c(*(long *)PTR_DAT_067cbf10);
        }
        FUN_061296dc(&local_68,lVar13,uVar20,uVar17,uVar2,0,0);
      }
      goto LAB_05d5e664;
    }
    if (*(long *)(param_1 + 0x108) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    uVar20 = FUN_03abf644(*(long *)(param_1 + 0x108),uVar3,*(undefined8 *)puVar7);
    if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar14 = FUN_05d5cfdc(uVar20);
    if ((uVar14 & 1) != 0) {
      if (*(int *)(*(long *)PTR_DAT_067cbf10 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      FUN_061298c8(&local_68,0);
      uVar20 = uStack_88;
      lVar13 = local_90;
      if (*(long *)(param_1 + 0x108) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      lVar19 = FUN_03abf644(*(long *)(param_1 + 0x108),uVar3,*(undefined8 *)puVar7);
      if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      FUN_061296dc(&local_68,lVar13,uVar20,*(undefined8 *)(lVar19 + 0x68),
                   *(undefined8 *)(lVar19 + 0x70),0,0);
      goto LAB_05d5e664;
    }
  }
  FUN_03d18804(&local_90,*(undefined8 *)PTR_DAT_067cc4c8);
  (**(code **)(*param_3 + 0x1d8))(param_3,local_68,param_5,*(undefined8 *)(*param_3 + 0x1e0));
  puVar15 = (undefined8 *)FUN_05ddf250(param_5,0);
  uVar20 = *puVar15;
  if (*(int *)(*(long *)PTR_DAT_067cbf10 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  FUN_06129b08(&local_68,uVar20,0);
  plVar16 = (long *)FUN_05ddf250(param_5,0);
  if (*plVar16 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  FUN_06113868(*plVar16,0);
  uVar8 = local_15c - 1;
  if (uVar8 != 0) {
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    if (*(uint *)(lVar12 + 0x18) <= uVar8) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089d0();
    }
    if (*(uint *)(lVar12 + (long)(int)uVar8 * 4 + 0x20) != uVar3) goto LAB_05d5e754;
  }
  if (*(int *)(*(long *)PTR_DAT_067cbf10 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  FUN_061298c8(&local_68,0);
  FUN_06129940(&local_68,0);
  *(undefined4 *)(param_1 + 0x10) = 0;
LAB_05d5e754:
  puVar6 = 
  Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
  ;
  lVar12 = *(long *)(param_1 + 0x40);
  if (lVar12 != 0) {
    uVar14 = 0;
    lVar13 = 0x20;
    do {
      if ((long)*(int *)(lVar12 + 0x18) <= (long)uVar14) {
        if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        if (DAT_06bc3978 == '\0') {
          FUN_02f08768(
                      Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                      );
          DAT_06bc3978 = '\x01';
        }
        lVar12 = *(long *)puVar6;
        if (*(int *)(lVar12 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
          lVar12 = *(long *)puVar6;
        }
        memmove((void *)(param_1 + 0x48),(void *)(*(long *)(lVar12 + 0xb8) + 8),0x78);
        FUN_05c5cb50(local_6c,0);
        return;
      }
      if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      if (DAT_06bc3978 == '\0') {
        FUN_02f08768(puVar6);
        DAT_06bc3978 = '\x01';
      }
      lVar19 = *(long *)puVar6;
      if (*(int *)(lVar19 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
        lVar19 = *(long *)puVar6;
      }
      if (*(uint *)(lVar12 + 0x18) <= uVar14) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089d0();
      }
      memmove((void *)(lVar12 + lVar13),(void *)(*(long *)(lVar19 + 0xb8) + 8),0x78);
      lVar19 = *(long *)(param_1 + 0xc0);
      if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      if (*(uint *)(lVar19 + 0x18) <= uVar14) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089d0();
      }
      lVar12 = *(long *)(param_1 + 0x40);
      lVar19 = lVar19 + uVar14;
      uVar14 = uVar14 + 1;
      lVar13 = lVar13 + 0x78;
      *(undefined1 *)(lVar19 + 0x20) = 0;
    } while (lVar12 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


