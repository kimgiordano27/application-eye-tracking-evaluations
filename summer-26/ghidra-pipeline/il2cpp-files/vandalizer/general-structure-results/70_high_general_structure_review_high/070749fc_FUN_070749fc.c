/*
FUNCTION_NAME: FUN_070749fc
ENTRY_POINT: 070749fc
PROGRAM: vandalizer-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ray_or_cast_sink_hits_2;telemetry_or_network_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x0707502c) */
/* WARNING: Removing unreachable block (ram,0x07074d4c) */
/* WARNING: Removing unreachable block (ram,0x07075104) */
/* WARNING: Removing unreachable block (ram,0x070750f8) */

void FUN_070749fc(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  int *piVar16;
  int iVar17;
  int local_6c;
  long local_68;
  long local_58;
  
  if ((DAT_07a5a63b & 1) == 0) {
    FUN_031f20f4(PTR_DAT_075d76e0);
    FUN_031f20f4(PTR_DAT_0759b580);
    FUN_031f20f4(Fusion_FusionUnityLoggerBase_<>c_TypeInfo);
    FUN_031f20f4(PTR_DAT_075d76e8);
    FUN_031f20f4(UnityEngine_TextCore_Text_FontFeatureTable_<>c_TypeInfo);
    FUN_031f20f4(PTR_DAT_075d76f0);
    FUN_031f20f4(PTR_DAT_0759e2a8);
    FUN_031f20f4(Fusion_FusionUnitySceneManagerUtils_SceneEqualityComparer_TypeInfo);
    FUN_031f20f4(System_Runtime_Fx_<>c_TypeInfo);
    FUN_031f20f4(System_Runtime_Fx_FatalInternalException_TypeInfo);
    FUN_031f20f4(UnityEngine_Rendering_Universal_Internal_GBufferPass_<>c_TypeInfo);
    FUN_031f20f4(UnityEngine_Rendering_Universal_Internal_GBufferPass_PassData_TypeInfo);
    FUN_031f20f4(
                Best_HTTP_Shared_TLS_Crypto_Impl_FastChaChaEngineHelper_ImplProcessBlock_Burst_0000077B_PostfixBurstDelegate_TypeInfo
                );
    FUN_031f20f4(PTR_DAT_0759b1c0);
    DAT_07a5a63b = 1;
  }
  local_58 = 0;
  local_68 = 0;
  local_6c = 0;
  if ((*(long *)(param_1 + 0x500) != 0) &&
     (plVar8 = (long *)FUN_070a27b8(*(long *)(param_1 + 0x500),0), plVar8 != (long *)0x0)) {
    lVar11 = *plVar8;
    uVar14 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar14 != 0) {
      piVar16 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_075d76e8) {
          puVar9 = (undefined8 *)(lVar11 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_07074b50;
        }
        uVar14 = uVar14 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar14 != 0);
    }
    puVar9 = (undefined8 *)FUN_0322c1e8(plVar8,*(long *)PTR_DAT_075d76e8,0);
LAB_07074b50:
    puVar3 = PTR_DAT_0759b580;
    plVar8 = (long *)(*(code *)*puVar9)(plVar8,puVar9[1]);
    puVar7 = 
    Best_HTTP_Shared_TLS_Crypto_Impl_FastChaChaEngineHelper_ImplProcessBlock_Burst_0000077B_PostfixBurstDelegate_TypeInfo
    ;
    puVar6 = PTR_DAT_075d76f0;
    puVar5 = PTR_DAT_075d76e0;
    puVar4 = PTR_DAT_0759e2a8;
    puVar2 = PTR_DAT_0759b1c0;
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_031f2390();
    }
    do {
      lVar11 = *plVar8;
      uVar14 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar14 != 0) {
        piVar16 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)puVar4) {
            puVar9 = (undefined8 *)(lVar11 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_07074be0;
          }
          uVar14 = uVar14 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar14 != 0);
      }
      puVar9 = (undefined8 *)FUN_0322c1e8(plVar8,*(long *)puVar4,0);
LAB_07074be0:
      uVar14 = (*(code *)*puVar9)(plVar8,puVar9[1]);
      if ((uVar14 & 1) == 0) {
        if (plVar8 == (long *)0x0) goto LAB_07074d40;
        lVar12 = *plVar8;
        lVar11 = *(long *)puVar3;
        uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar14 == 0) goto LAB_07074d18;
        piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        goto LAB_07074d00;
      }
      lVar11 = *plVar8;
      uVar14 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar14 != 0) {
        piVar16 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)puVar6) {
            puVar9 = (undefined8 *)(lVar11 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_07074c3c;
          }
          uVar14 = uVar14 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar14 != 0);
      }
      puVar9 = (undefined8 *)FUN_0322c1e8(plVar8,*(long *)puVar6,0);
LAB_07074c3c:
      uVar10 = (*(code *)*puVar9)(plVar8,puVar9[1]);
      if (*(long *)(param_1 + 0x4e0) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_031f2390(0,uVar10);
      }
      uVar14 = FUN_05815364(*(long *)(param_1 + 0x4e0),uVar10,&local_58,*(undefined8 *)puVar5);
      if ((uVar14 & 1) != 0) {
        if (local_58 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_031f2390();
        }
        if (*(long *)(local_58 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_031f2390();
        }
        FUN_070767d8(*(long *)(local_58 + 0x10),*(undefined8 *)puVar2);
        if (local_58 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_031f2390();
        }
        lVar11 = *(long *)(local_58 + 0x10);
        if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
        }
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_031f2390();
        }
        FUN_06fc7e40(lVar11,*(undefined8 *)(*(long *)(*(long *)puVar7 + 0xb8) + 0x10),0);
        if (local_58 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_031f2390();
        }
        if (*(long *)(local_58 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_031f2390();
        }
        FUN_06fc7e40(*(long *)(local_58 + 0x10),
                     *(undefined8 *)(*(long *)(*(long *)puVar7 + 0xb8) + 0x18),0);
      }
    } while( true );
  }
  goto LAB_070750c0;
  while( true ) {
    uVar14 = uVar14 - 1;
    piVar16 = piVar16 + 4;
    if (uVar14 == 0) break;
LAB_07074d00:
    if (*(long *)(piVar16 + -2) == lVar11) {
      puVar9 = (undefined8 *)(lVar12 + (long)*piVar16 * 0x10 + 0x138);
      goto LAB_07074d34;
    }
  }
LAB_07074d18:
  puVar9 = (undefined8 *)FUN_0322c1e8(plVar8,lVar11,0);
LAB_07074d34:
  (*(code *)*puVar9)(plVar8,puVar9[1]);
LAB_07074d40:
  puVar2 = System_Runtime_Fx_<>c_TypeInfo;
  lVar11 = thunk_FUN_0322f148(*(undefined8 *)
                               UnityEngine_Rendering_Universal_Internal_GBufferPass_PassData_TypeInfo
                             );
  FUN_047aec0c(lVar11,*(undefined8 *)puVar2);
  plVar8 = *(long **)(param_1 + 0x4b0);
  if (plVar8 != (long *)0x0) {
    lVar12 = *plVar8;
    uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar14 != 0) {
      piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)Fusion_FusionUnityLoggerBase_<>c_TypeInfo) {
          puVar9 = (undefined8 *)(lVar12 + (long)*piVar16 * 0x10 + 0x138);
          goto UnityEngine_EventSystems_BaseRaycaster__OnDisable;
        }
        uVar14 = uVar14 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar14 != 0);
    }
    puVar9 = (undefined8 *)FUN_0322c1e8(plVar8,*(long *)Fusion_FusionUnityLoggerBase_<>c_TypeInfo,0)
    ;
UnityEngine_EventSystems_BaseRaycaster__OnDisable:
    plVar8 = (long *)(*(code *)*puVar9)(plVar8,puVar9[1]);
    puVar7 = Fusion_FusionUnitySceneManagerUtils_SceneEqualityComparer_TypeInfo;
    puVar6 = UnityEngine_TextCore_Text_FontFeatureTable_<>c_TypeInfo;
    puVar5 = 
    Best_HTTP_Shared_TLS_Crypto_Impl_FastChaChaEngineHelper_ImplProcessBlock_Burst_0000077B_PostfixBurstDelegate_TypeInfo
    ;
    puVar4 = PTR_DAT_075d76e0;
    puVar2 = PTR_DAT_0759e2a8;
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_031f2390();
    }
    do {
      lVar12 = *plVar8;
      uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar14 != 0) {
        piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)puVar2) {
            puVar9 = (undefined8 *)(lVar12 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_07074e58;
          }
          uVar14 = uVar14 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar14 != 0);
      }
      puVar9 = (undefined8 *)FUN_0322c1e8(plVar8,*(long *)puVar2,0);
LAB_07074e58:
      uVar14 = (*(code *)*puVar9)(plVar8,puVar9[1]);
      if ((uVar14 & 1) == 0) {
        if (plVar8 == (long *)0x0) goto LAB_07075020;
        lVar13 = *plVar8;
        lVar12 = *(long *)puVar3;
        uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar14 == 0) goto LAB_07074ff8;
        piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        goto LAB_07074fe0;
      }
      lVar12 = *plVar8;
      uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar14 != 0) {
        piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)puVar6) {
            puVar9 = (undefined8 *)(lVar12 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_07074eb4;
          }
          uVar14 = uVar14 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar14 != 0);
      }
      puVar9 = (undefined8 *)FUN_0322c1e8(plVar8,*(long *)puVar6,0);
LAB_07074eb4:
      lVar12 = (*(code *)*puVar9)(plVar8,puVar9[1]);
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_031f2390();
      }
      if (*(long *)(param_1 + 0x4e0) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_031f2390();
      }
      uVar14 = FUN_05815364(*(long *)(param_1 + 0x4e0),*(undefined8 *)(lVar12 + 0x30),&local_68,
                            *(undefined8 *)puVar4);
      if ((uVar14 & 1) != 0) {
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_031f2390();
        }
        lVar13 = *(long *)(lVar11 + 0x10);
        lVar15 = *(long *)puVar7;
        *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_031f2390();
        }
        uVar1 = *(uint *)(lVar11 + 0x18);
        if (uVar1 < *(uint *)(lVar13 + 0x18)) {
          *(uint *)(lVar11 + 0x18) = uVar1 + 1;
          *(long *)(lVar13 + (long)(int)uVar1 * 8 + 0x20) = local_68;
          thunk_FUN_0329bf60();
        }
        else {
          FUN_047af440(lVar11,local_68,
                       *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
        }
        if (*(int *)(lVar12 + 0x20) == 0) {
          if (local_68 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_031f2390();
          }
          lVar12 = *(long *)(local_68 + 0x10);
          if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
            Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
          }
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_031f2390();
          }
          FUN_06fc7f68(lVar12,*(undefined8 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x10),0);
        }
        else {
          if (local_68 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_031f2390();
          }
          lVar12 = *(long *)(local_68 + 0x10);
          if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
            Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
          }
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_031f2390();
          }
          FUN_06fc7f68(lVar12,*(undefined8 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x18),0);
        }
      }
    } while( true );
  }
  goto LAB_070750c0;
  while( true ) {
    uVar14 = uVar14 - 1;
    piVar16 = piVar16 + 4;
    if (uVar14 == 0) break;
LAB_07074fe0:
    if (*(long *)(piVar16 + -2) == lVar12) {
      puVar9 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
      goto LAB_07075014;
    }
  }
LAB_07074ff8:
  puVar9 = (undefined8 *)FUN_0322c1e8(plVar8,lVar12,0);
LAB_07075014:
  (*(code *)*puVar9)(plVar8,puVar9[1]);
LAB_07075020:
  puVar2 = UnityEngine_Rendering_Universal_Internal_GBufferPass_<>c_TypeInfo;
  if (lVar11 != 0) {
    if (1 < *(int *)(lVar11 + 0x18)) {
      iVar17 = 0;
      do {
        lVar12 = FUN_047af170(lVar11,iVar17,*(undefined8 *)puVar2);
        if (lVar12 == 0) goto LAB_070750c0;
        lVar12 = *(long *)(lVar12 + 0x10);
        iVar17 = iVar17 + 1;
        local_6c = iVar17;
        uVar10 = FUN_05dfee30(&local_6c,0);
        if (lVar12 == 0) goto LAB_070750c0;
        FUN_070767d8(lVar12,uVar10);
      } while (iVar17 < *(int *)(lVar11 + 0x18));
    }
    return;
  }
LAB_070750c0:
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


