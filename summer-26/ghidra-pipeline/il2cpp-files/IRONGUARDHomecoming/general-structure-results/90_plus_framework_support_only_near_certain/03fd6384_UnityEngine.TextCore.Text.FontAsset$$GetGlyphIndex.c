/*
FUNCTION_NAME: UnityEngine.TextCore.Text.FontAsset$$GetGlyphIndex
ENTRY_POINT: 03fd6384
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 91
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_6;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x03fd6758) */

void UnityEngine_TextCore_Text_FontAsset__GetGlyphIndex(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long *plVar11;
  long unaff_x22;
  long *plVar12;
  long *unaff_x23;
  
  plVar11 = *(long **)(unaff_x21 + 0xe08);
  plVar12 = *(long **)(unaff_x22 + 0x2f8);
  do {
    lVar8 = *unaff_x20;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *plVar11) {
          puVar6 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_03fd63d8;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238();
LAB_03fd63d8:
    uVar9 = (*(code *)*puVar6)();
    if ((uVar9 & 1) == 0) {
      if (unaff_x20 == (long *)0x0) goto LAB_03fd64b8;
      lVar8 = *unaff_x20;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 == 0) goto LAB_03fd6490;
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      break;
    }
    lVar8 = *unaff_x20;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *plVar12) {
          puVar6 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_03fd6434;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238();
LAB_03fd6434:
    lVar8 = (*(code *)*puVar6)();
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    FUN_03fe4d94();
  } while( true );
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
    if (*(long *)(piVar10 + -2) == *unaff_x23) {
      puVar6 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_03fd64ac;
    }
  }
LAB_03fd6490:
  puVar6 = (undefined8 *)FUN_01ecb238();
LAB_03fd64ac:
  (*(code *)*puVar6)();
LAB_03fd64b8:
  puVar1 = PTR_DAT_045842e0;
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    uVar7 = FUN_03fb3098(*(long *)(unaff_x19 + 0x20),0);
    plVar11 = (long *)FUN_022fba74(uVar7,*(undefined8 *)puVar1);
    if (plVar11 != (long *)0x0) {
      lVar8 = *plVar11;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_045842e8) {
            puVar6 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_03fd6538;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar6 = (undefined8 *)FUN_01ecb238(plVar11,*(long *)PTR_DAT_045842e8,0);
LAB_03fd6538:
      plVar11 = (long *)(*(code *)*puVar6)(plVar11,puVar6[1]);
      puVar5 = PTR_DAT_04584310;
      puVar4 = PTR_DAT_04584308;
      puVar3 = PTR_DAT_04584300;
      puVar2 = Method_UnityEngine_Rendering_CoreUnsafeUtils_HaveDuplicates__;
      puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      do {
        lVar8 = *plVar11;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
              puVar6 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_03fd65c0;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar6 = (undefined8 *)FUN_01ecb238(plVar11,*(long *)puVar1,0);
LAB_03fd65c0:
        uVar9 = (*(code *)*puVar6)(plVar11,puVar6[1]);
        if ((uVar9 & 1) == 0) {
          if (plVar11 == (long *)0x0) {
            return;
          }
          lVar8 = *plVar11;
          uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar9 == 0) goto LAB_03fd6700;
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          goto LAB_03fd66e8;
        }
        lVar8 = *plVar11;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)puVar3) {
              puVar6 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_03fd661c;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar6 = (undefined8 *)FUN_01ecb238(plVar11,*(long *)puVar3,0);
LAB_03fd661c:
        plVar12 = (long *)(*(code *)*puVar6)(plVar11,puVar6[1]);
        lVar8 = thunk_FUN_01f117cc(*(undefined8 *)puVar5);
        FUN_035ac8e8(lVar8,0);
        if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        *(long *)(lVar8 + 0x10) = plVar12[2];
        thunk_FUN_01f51358((long *)(lVar8 + 0x10));
        uVar7 = (**(code **)(*plVar12 + 0x1e8))(plVar12,*(undefined8 *)(*plVar12 + 0x1f0));
        *(undefined8 *)(lVar8 + 0x18) = uVar7;
        thunk_FUN_01f51358((undefined8 *)(lVar8 + 0x18));
        uVar7 = thunk_FUN_01f117cc(*(undefined8 *)puVar2);
        FUN_02e6c748(uVar7,lVar8,*(undefined8 *)puVar4,0);
        FUN_03fe4e90();
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
LAB_03fd66e8:
    if (*(long *)(piVar10 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar6 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_03fd671c;
    }
  }
LAB_03fd6700:
  puVar6 = (undefined8 *)
           FUN_01ecb238(plVar11,*(long *)
                                 Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_03fd671c:
  (*(code *)*puVar6)(plVar11,puVar6[1]);
  return;
}


