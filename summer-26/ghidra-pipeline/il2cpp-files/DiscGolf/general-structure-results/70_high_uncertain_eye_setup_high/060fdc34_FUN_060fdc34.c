/*
FUNCTION_NAME: FUN_060fdc34
ENTRY_POINT: 060fdc34
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_14;functionality_eye_api_context_without_clear_sink_hits_4
*/


void FUN_060fdc34(int *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  long *plVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_68;
  undefined8 local_58;
  
  if ((DAT_06dc653c & 1) == 0) {
    FUN_02d965b8(Method_Unity_Netcode_FastBufferWriter_WriteValueSafe<FixedString4096Bytes>__);
    FUN_02d965b8(OVRPlugin_SkeletonType_TypeInfo);
    FUN_02d965b8(OVRPlugin_OVRP_1_94_0_TypeInfo);
    FUN_02d965b8(Method_Unity_Netcode_FastBufferWriter_WriteValueSafe<FixedString512Bytes>__);
    FUN_02d965b8(Method_Unity_Netcode_FastBufferWriter_WriteValueSafe<HashSize>__);
    FUN_02d965b8(Method_Unity_Netcode_FastBufferWriter_WriteValueSafe<int>__);
    FUN_02d965b8(PTR_DAT_06a1e288);
    FUN_02d965b8(PTR_DAT_06a1e280);
    FUN_02d965b8(PTR_DAT_069fcc80);
    FUN_02d965b8(PTR_DAT_069fcca8);
    FUN_02d965b8(PTR_DAT_069fccb8);
    FUN_02d965b8(Method_Unity_Netcode_FastBufferWriter_WriteValueSafe<LoadSceneMode>__);
    FUN_02d965b8(Method_Unity_Netcode_FastBufferWriter_WriteValueSafe<NGOShareAndLocalizeParams>__);
    FUN_02d965b8(Method_Unity_Netcode_FastBufferWriter_WriteValueSafe<NetcodeGameObjectsAnchor>__);
    DAT_06dc653c = 1;
  }
  puVar5 = OVRPlugin_OVRP_1_94_0_TypeInfo;
  iVar4 = *param_1;
  lVar15 = *(long *)(param_1 + 8);
  local_58 = 0;
  local_68 = 0;
  if (1 < iVar4) {
    if (iVar4 == 2) {
      local_58 = *(undefined8 *)(param_1 + 0x18);
      param_1[0x18] = 0;
      param_1[0x19] = 0;
      *param_1 = -1;
LAB_060fde90:
      uVar9 = FUN_047e6288(&local_58,*(undefined8 *)PTR_DAT_069fcc80);
      goto LAB_060fe100;
    }
    if (iVar4 != 3) goto LAB_060fdda4;
    local_58 = *(undefined8 *)(param_1 + 0x18);
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    *param_1 = -1;
LAB_060fdd8c:
    uVar9 = FUN_047e6288(&local_58,*(undefined8 *)PTR_DAT_069fcc80);
    goto LAB_060fe100;
  }
  if (iVar4 == 0) {
    local_58 = *(undefined8 *)(param_1 + 0x18);
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    *param_1 = -1;
LAB_060fe0ec:
    uVar9 = FUN_047e6288(&local_58,*(undefined8 *)PTR_DAT_069fcc80);
  }
  else {
    if (iVar4 == 1) {
      local_58 = *(undefined8 *)(param_1 + 0x18);
      param_1[0x18] = 0;
      param_1[0x19] = 0;
      *param_1 = -1;
    }
    else {
LAB_060fdda4:
      if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar11 = *(long *)(lVar15 + 0x10);
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      plVar14 = *(long **)(lVar11 + 0x110);
      if (plVar14 != (long *)0x0) {
        uVar16 = *(undefined8 *)(param_1 + 10);
        uVar9 = FUN_043372d8(param_1 + 0xc,*(undefined8 *)PTR_DAT_06a1e280);
        if (*(int *)(*(long *)
                      Method_Unity_Netcode_FastBufferWriter_WriteValueSafe<FixedString512Bytes>__ +
                    0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        uVar9 = FUN_060fe418(uVar9);
        local_80 = 0;
        uStack_78 = 0;
        FUN_043372c0(&local_80,uVar9,*(undefined8 *)PTR_DAT_06a1e288);
        uVar8 = uStack_78;
        uVar7 = local_80;
        lVar15 = *plVar14;
        uVar9 = *(undefined8 *)(param_1 + 0x10);
        uVar2 = *(undefined8 *)(param_1 + 0x12);
        uVar1 = *(undefined8 *)(param_1 + 0x14);
        uVar3 = *(undefined8 *)(param_1 + 0x16);
        uVar12 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) ==
                *(long *)Method_Unity_Netcode_FastBufferWriter_WriteValueSafe<int>__) {
              puVar10 = (undefined8 *)(lVar15 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_060fe090;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar10 = (undefined8 *)
                  FUN_02dd004c(plVar14,*(long *)
                                        Method_Unity_Netcode_FastBufferWriter_WriteValueSafe<int>__,
                               0);
LAB_060fe090:
        lVar15 = (*(code *)*puVar10)(plVar14,uVar16,uVar7,uVar8,uVar9,uVar2,uVar1,uVar3,0,puVar10[1]
                                    );
        if (lVar15 == 0) goto LAB_060fe28c;
        local_58 = FUN_0481d028(lVar15,*(undefined8 *)PTR_DAT_069fccb8);
        uVar12 = FUN_047e6248(&local_58,*(undefined8 *)PTR_DAT_069fcca8);
        if ((uVar12 & 1) == 0) {
          *param_1 = 0;
          *(undefined8 *)(param_1 + 0x18) = local_58;
          LeanTween__value(param_1 + 0x18,0);
          if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          FUN_031f8cd0(param_1 + 2,&local_58,param_1,
                       *(undefined8 *)
                        Method_Unity_Netcode_FastBufferWriter_WriteValueSafe<FixedString4096Bytes>__
                      );
          return;
        }
        goto LAB_060fe0ec;
      }
      if ((*(long *)(lVar11 + 0x108) == 0) ||
         (uVar12 = FUN_0536ba54(*(undefined8 *)(param_1 + 0x12),
                                *(undefined8 *)
                                 Method_Unity_Netcode_FastBufferWriter_WriteValueSafe<NGOShareAndLocalizeParams>__
                                ,0), (uVar12 & 1) == 0)) {
        uVar9 = *(undefined8 *)(param_1 + 0x12);
        uVar12 = thunk_FUN_0536b75c(uVar9,*(undefined8 *)
                                           Method_Unity_Netcode_FastBufferWriter_WriteValueSafe<NGOShareAndLocalizeParams>__
                                    ,0);
        if ((uVar12 & 1) != 0) {
          lVar15 = FUN_060fd054(lVar15);
          if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          local_58 = FUN_0481d028(lVar15,*(undefined8 *)PTR_DAT_069fccb8);
          uVar12 = FUN_047e6248(&local_58,*(undefined8 *)PTR_DAT_069fcca8);
          if ((uVar12 & 1) == 0) {
            *param_1 = 2;
            *(undefined8 *)(param_1 + 0x18) = local_58;
            LeanTween__value(param_1 + 0x18,0);
            if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
              thunk_FUN_02df485c();
            }
            FUN_031f8cd0(param_1 + 2,&local_58,param_1,
                         *(undefined8 *)
                          Method_Unity_Netcode_FastBufferWriter_WriteValueSafe<FixedString4096Bytes>__
                        );
            return;
          }
          goto LAB_060fde90;
        }
        uVar12 = thunk_FUN_0536b75c(uVar9,*(undefined8 *)
                                           Method_Unity_Netcode_FastBufferWriter_WriteValueSafe<LoadSceneMode>__
                                    ,0);
        if ((uVar12 & 1) == 0) {
          uVar12 = thunk_FUN_0536b75c(uVar9,*(undefined8 *)
                                             Method_Unity_Netcode_FastBufferWriter_WriteValueSafe<NetcodeGameObjectsAnchor>__
                                      ,0);
          lVar15 = *(long *)(lVar15 + 0x10);
          if ((uVar12 & 1) == 0) {
            if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            uVar9 = FUN_060f4a7c(lVar15,0);
          }
          else {
            if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            uVar9 = FUN_060f4a7c(lVar15,0);
          }
          goto LAB_060fe100;
        }
        lVar15 = FUN_060fd15c(lVar15,*(undefined8 *)(param_1 + 0x14));
        if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        local_58 = FUN_0481d028(lVar15,*(undefined8 *)PTR_DAT_069fccb8);
        uVar12 = FUN_047e6248(&local_58,*(undefined8 *)PTR_DAT_069fcca8);
        if ((uVar12 & 1) == 0) {
          *param_1 = 3;
          *(undefined8 *)(param_1 + 0x18) = local_58;
          LeanTween__value(param_1 + 0x18,0);
          if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          FUN_031f8cd0(param_1 + 2,&local_58,param_1,
                       *(undefined8 *)
                        Method_Unity_Netcode_FastBufferWriter_WriteValueSafe<FixedString4096Bytes>__
                      );
          return;
        }
        goto LAB_060fdd8c;
      }
      if (*(long *)(lVar15 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar15 = *(long *)(*(long *)(lVar15 + 0x10) + 0x108);
      if (lVar15 == 0) {
LAB_060fe28c:
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      uVar16 = *(undefined8 *)(param_1 + 10);
      uVar9 = FUN_043372d8(param_1 + 0xc,*(undefined8 *)PTR_DAT_06a1e280);
      if (*(int *)(*(long *)
                    Method_Unity_Netcode_FastBufferWriter_WriteValueSafe<FixedString512Bytes>__ +
                  0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      uVar9 = FUN_060fe418(uVar9);
      local_80 = 0;
      uStack_78 = 0;
      FUN_043372c0(&local_80,uVar9,*(undefined8 *)PTR_DAT_06a1e288);
      lVar15 = FUN_02d600fc(0,*(undefined8 *)
                               Method_Unity_Netcode_FastBufferWriter_WriteValueSafe<HashSize>__,
                            lVar15,uVar16,local_80,uStack_78,*(undefined8 *)(param_1 + 0x10),
                            *(undefined8 *)(param_1 + 0x12),*(undefined8 *)(param_1 + 0x14),
                            *(undefined8 *)(param_1 + 0x16),0);
      if (lVar15 == 0) goto LAB_060fe28c;
      local_58 = FUN_0481d028(lVar15,*(undefined8 *)PTR_DAT_069fccb8);
      uVar12 = FUN_047e6248(&local_58,*(undefined8 *)PTR_DAT_069fcca8);
      if ((uVar12 & 1) == 0) {
        *param_1 = 1;
        *(undefined8 *)(param_1 + 0x18) = local_58;
        LeanTween__value(param_1 + 0x18,0);
        if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        FUN_031f8cd0(param_1 + 2,&local_58,param_1,
                     *(undefined8 *)
                      Method_Unity_Netcode_FastBufferWriter_WriteValueSafe<FixedString4096Bytes>__);
        return;
      }
    }
    uVar9 = FUN_047e6288(&local_58,*(undefined8 *)PTR_DAT_069fcc80);
  }
LAB_060fe100:
  *param_1 = -2;
  puVar6 = OVRPlugin_SkeletonType_TypeInfo;
  if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  FUN_040b19d8(param_1 + 2,uVar9,*(undefined8 *)puVar6);
  return;
}


