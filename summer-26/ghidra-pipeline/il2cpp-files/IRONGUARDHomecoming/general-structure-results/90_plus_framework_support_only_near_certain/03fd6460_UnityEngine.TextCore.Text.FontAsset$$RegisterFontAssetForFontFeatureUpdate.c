/*
FUNCTION_NAME: UnityEngine.TextCore.Text.FontAsset$$RegisterFontAssetForFontFeatureUpdate
ENTRY_POINT: 03fd6460
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_6;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


void UnityEngine_TextCore_Text_FontAsset__RegisterFontAssetForFontFeatureUpdate(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long *unaff_x23;
  
  lVar10 = *unaff_x20;
  uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar11 != 0) {
    piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == *unaff_x23) {
        puVar6 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
        goto LAB_03fd64ac;
      }
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar11 != 0);
  }
  puVar6 = (undefined8 *)FUN_01ecb238();
LAB_03fd64ac:
  (*(code *)*puVar6)();
  puVar1 = PTR_DAT_045842e0;
  if (unaff_x21 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01eed990(unaff_x21);
  }
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    uVar7 = FUN_03fb3098(*(long *)(unaff_x19 + 0x20),0);
    plVar8 = (long *)FUN_022fba74(uVar7,*(undefined8 *)puVar1);
    if (plVar8 != (long *)0x0) {
      lVar10 = *plVar8;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_045842e8) {
            puVar6 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_03fd6538;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar6 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)PTR_DAT_045842e8,0);
LAB_03fd6538:
      plVar8 = (long *)(*(code *)*puVar6)(plVar8,puVar6[1]);
      puVar5 = PTR_DAT_04584310;
      puVar4 = PTR_DAT_04584308;
      puVar3 = PTR_DAT_04584300;
      puVar2 = Method_UnityEngine_Rendering_CoreUnsafeUtils_HaveDuplicates__;
      puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      do {
        lVar10 = *plVar8;
        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
              puVar6 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_03fd65c0;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar6 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)puVar1,0);
LAB_03fd65c0:
        uVar11 = (*(code *)*puVar6)(plVar8,puVar6[1]);
        if ((uVar11 & 1) == 0) {
          if (plVar8 == (long *)0x0) {
            return;
          }
          lVar10 = *plVar8;
          uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar11 == 0) goto LAB_03fd6700;
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          goto LAB_03fd66e8;
        }
        lVar10 = *plVar8;
        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)puVar3) {
              puVar6 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_03fd661c;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar6 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)puVar3,0);
LAB_03fd661c:
        plVar9 = (long *)(*(code *)*puVar6)(plVar8,puVar6[1]);
        lVar10 = thunk_FUN_01f117cc(*(undefined8 *)puVar5);
        FUN_035ac8e8(lVar10,0);
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        *(long *)(lVar10 + 0x10) = plVar9[2];
        thunk_FUN_01f51358((long *)(lVar10 + 0x10));
        uVar7 = (**(code **)(*plVar9 + 0x1e8))(plVar9,*(undefined8 *)(*plVar9 + 0x1f0));
        *(undefined8 *)(lVar10 + 0x18) = uVar7;
        thunk_FUN_01f51358((undefined8 *)(lVar10 + 0x18));
        uVar7 = thunk_FUN_01f117cc(*(undefined8 *)puVar2);
        FUN_02e6c748(uVar7,lVar10,*(undefined8 *)puVar4,0);
        FUN_03fe4e90();
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar12 = piVar12 + 4;
    if (uVar11 == 0) break;
LAB_03fd66e8:
    if (*(long *)(piVar12 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar6 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_03fd671c;
    }
  }
LAB_03fd6700:
  puVar6 = (undefined8 *)
           FUN_01ecb238(plVar8,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_03fd671c:
  (*(code *)*puVar6)(plVar8,puVar6[1]);
  return;
}


