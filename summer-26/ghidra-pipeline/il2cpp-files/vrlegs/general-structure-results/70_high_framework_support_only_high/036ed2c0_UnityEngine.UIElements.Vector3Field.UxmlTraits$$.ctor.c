/*
FUNCTION_NAME: UnityEngine.UIElements.Vector3Field.UxmlTraits$$.ctor
ENTRY_POINT: 036ed2c0
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x036ed628) */

void UnityEngine_UIElements_Vector3Field_UxmlTraits___ctor(void)

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
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 uVar12;
  undefined4 unaff_w21;
  long unaff_x22;
  undefined8 unaff_x23;
  undefined8 *unaff_x24;
  long unaff_x25;
  
  FUN_01ab69ac();
  FUN_01ab69ac(OVRPlugin_AppPerfFrameStats___TypeInfo);
  FUN_01ab69ac(
              Method_Unity_Entities_BlobAssetReference<DotsSerialization_BlobHeader>_get_IsCreated__
              );
  FUN_01ab69ac(Method_Unity_Entities_BlobAssetReference<RuntimeContentCatalogData>_Dispose__);
  FUN_01ab69ac(Method_Unity_Entities_BlobAssetReference<DotsSerialization_BlobHeader>_get_Value__);
  FUN_01ab69ac(Method_System_Threading_Tasks_Box<long>__ctor__);
  *(undefined1 *)(unaff_x25 + 0x755) = 1;
  lVar5 = thunk_FUN_01a89e68(*unaff_x24);
  FUN_027b3d9c(lVar5,0);
  puVar1 = Method_Unity_Entities_BlobArray<ContentFileLocation>_get_Length__;
  if (lVar5 != 0) {
    *(undefined8 *)(lVar5 + 0x10) = unaff_x23;
    *(undefined8 *)(lVar5 + 0x18) = unaff_x20;
    puVar4 = Method_Unity_Entities_BlobAssetReference<DotsSerialization_BlobHeader>_get_IsCreated__;
    puVar3 = Method_Unity_Entities_BlobAssetReference<RuntimeContentCatalogData>_get_Value__;
    puVar2 = Method_Unity_Entities_BlobAssetReference<RuntimeContentCatalogData>_TryRead__;
    uVar12 = *(undefined8 *)(unaff_x22 + 0x10);
    uVar6 = thunk_FUN_01a89e68(*(undefined8 *)puVar1);
    FUN_021de1ac(uVar6,lVar5,*(undefined8 *)puVar4,0);
    plVar7 = (long *)FUN_01f71424(uVar12,uVar6,*(undefined8 *)puVar3);
    uVar8 = FUN_01f649bc(plVar7,*(undefined8 *)puVar2);
    if ((uVar8 & 1) == 0) {
      if (*(int *)(*(long *)PTR_DAT_03cbed58 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar6 = FUN_02763ab8();
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
      *(undefined8 *)(lVar5 + 0x18) = unaff_x19;
      *(undefined4 *)(lVar5 + 0x10) = unaff_w21;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
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


