/*
FUNCTION_NAME: FUN_036ed218
ENTRY_POINT: 036ed218
PROGRAM: vrlegs-libil2cpp.so
SCORE: 103
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x036ed628) */

void FUN_036ed218(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  int *piVar11;
  undefined8 uVar12;
  undefined8 local_60;
  undefined8 uStack_58;
  
  puVar1 = Method_Unity_Entities_BlobAssetReference<RuntimeContentCatalogData>_Dispose__;
  if ((DAT_04134755 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cbe438);
    FUN_01ab69ac(Method_Unity_Entities_BlobAssetReference<RuntimeContentCatalogData>_TryRead__);
    FUN_01ab69ac(Method_Unity_Entities_BlobAssetReference<RuntimeContentCatalogData>_get_Value__);
    FUN_01ab69ac(Method_Unity_Entities_BlobArray<ContentFileLocation>_get_Length__);
    FUN_01ab69ac(PTR_DAT_03cbed58);
    FUN_01ab69ac(PTR_DAT_03cbed08);
    FUN_01ab69ac(Method_Unity_Entities_BlobAssetReference<SceneMetaData>_TryReadInplace__);
    FUN_01ab69ac(Method_Unity_Entities_BlobAssetReference<SceneMetaData>_get_Value__);
    FUN_01ab69ac(PTR_DAT_03cbed20);
    FUN_01ab69ac(OVRPlugin_AppPerfFrameStats___TypeInfo);
    FUN_01ab69ac(
                Method_Unity_Entities_BlobAssetReference<DotsSerialization_BlobHeader>_get_IsCreated__
                );
    FUN_01ab69ac(Method_Unity_Entities_BlobAssetReference<RuntimeContentCatalogData>_Dispose__);
    FUN_01ab69ac(Method_Unity_Entities_BlobAssetReference<DotsSerialization_BlobHeader>_get_Value__)
    ;
    FUN_01ab69ac(Method_System_Threading_Tasks_Box<long>__ctor__);
    DAT_04134755 = 1;
  }
  local_60 = 0;
  uStack_58 = 0;
  lVar5 = thunk_FUN_01a89e68(*(undefined8 *)puVar1);
  FUN_027b3d9c(lVar5,0);
  puVar1 = Method_Unity_Entities_BlobArray<ContentFileLocation>_get_Length__;
  if (lVar5 != 0) {
    *(undefined8 *)(lVar5 + 0x10) = param_2;
    *(undefined8 *)(lVar5 + 0x18) = param_3;
    puVar4 = Method_Unity_Entities_BlobAssetReference<DotsSerialization_BlobHeader>_get_IsCreated__;
    puVar3 = Method_Unity_Entities_BlobAssetReference<RuntimeContentCatalogData>_get_Value__;
    puVar2 = Method_Unity_Entities_BlobAssetReference<RuntimeContentCatalogData>_TryRead__;
    uVar12 = *(undefined8 *)(param_1 + 0x10);
    uVar6 = thunk_FUN_01a89e68(*(undefined8 *)puVar1);
    FUN_021de1ac(uVar6,lVar5,*(undefined8 *)puVar4,0);
    plVar7 = (long *)FUN_01f71424(uVar12,uVar6,*(undefined8 *)puVar3);
    uVar8 = FUN_01f649bc(plVar7,*(undefined8 *)puVar2);
    if ((uVar8 & 1) == 0) {
      uStack_58 = *(undefined8 *)(lVar5 + 0x18);
      local_60 = *(undefined8 *)(lVar5 + 0x10);
      if (*(int *)(*(long *)PTR_DAT_03cbed58 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar6 = FUN_02763ab8(&local_60,0);
      uVar6 = FUN_025b1328(*(undefined8 *)Method_System_Threading_Tasks_Box<long>__ctor__,uVar6,0);
      if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
        thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbe438);
      }
      FUN_0367ae18(uVar6,0);
      return;
    }
    lVar5 = thunk_FUN_01a89e68(*(undefined8 *)OVRPlugin_AppPerfFrameStats___TypeInfo);
    FUN_027b3d9c(lVar5,0);
    if (lVar5 != 0) {
      *(undefined8 *)(lVar5 + 0x18) = param_4;
      *(undefined4 *)(lVar5 + 0x10) = param_5;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                ((undefined8 *)(lVar5 + 0x18),param_4);
      if (plVar7 != (long *)0x0) {
        lVar10 = *plVar7;
        uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar8 != 0) {
          piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) ==
                *(long *)Method_Unity_Entities_BlobAssetReference<SceneMetaData>_TryReadInplace__) {
              puVar9 = (undefined8 *)(lVar10 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_036ed494;
            }
            uVar8 = uVar8 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar8 != 0);
        }
        puVar9 = (undefined8 *)
                 FUN_01a472ec(plVar7,*(long *)
                                      Method_Unity_Entities_BlobAssetReference<SceneMetaData>_TryReadInplace__
                              ,0);
LAB_036ed494:
        plVar7 = (long *)(*(code *)*puVar9)(plVar7,puVar9[1]);
        puVar3 = Method_Unity_Entities_BlobAssetReference<DotsSerialization_BlobHeader>_get_Value__;
        puVar2 = Method_Unity_Entities_BlobAssetReference<SceneMetaData>_get_Value__;
        puVar1 = PTR_DAT_03cbed20;
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        do {
          lVar10 = *plVar7;
          uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar8 != 0) {
            piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
                puVar9 = (undefined8 *)(lVar10 + (long)*piVar11 * 0x10 + 0x138);
                goto LAB_036ed50c;
              }
              uVar8 = uVar8 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar8 != 0);
          }
          puVar9 = (undefined8 *)FUN_01a472ec(plVar7,*(long *)puVar1,0);
LAB_036ed50c:
          uVar8 = (*(code *)*puVar9)(plVar7,puVar9[1]);
          if ((uVar8 & 1) == 0) {
            if (plVar7 == (long *)0x0) {
              return;
            }
            lVar5 = *plVar7;
            uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
            if (uVar8 == 0) goto LAB_036ed5d0;
            piVar11 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            goto LAB_036ed5b8;
          }
          lVar10 = *plVar7;
          uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar8 != 0) {
            piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
                puVar9 = (undefined8 *)(lVar10 + (long)*piVar11 * 0x10 + 0x138);
                goto LAB_036ed568;
              }
              uVar8 = uVar8 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar8 != 0);
          }
          puVar9 = (undefined8 *)FUN_01a472ec(plVar7,*(long *)puVar2,0);
LAB_036ed568:
          lVar10 = (*(code *)*puVar9)(plVar7,puVar9[1]);
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          if (*(long *)(lVar10 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          FUN_020d4b74(*(long *)(lVar10 + 0x20),lVar5,*(undefined8 *)puVar3);
        } while( true );
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar11 = piVar11 + 4;
    if (uVar8 == 0) break;
LAB_036ed5b8:
    if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_03cbed08) {
      puVar9 = (undefined8 *)(lVar5 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_036ed5ec;
    }
  }
LAB_036ed5d0:
  puVar9 = (undefined8 *)FUN_01a472ec(plVar7,*(long *)PTR_DAT_03cbed08,0);
LAB_036ed5ec:
  (*(code *)*puVar9)(plVar7,puVar9[1]);
  return;
}


