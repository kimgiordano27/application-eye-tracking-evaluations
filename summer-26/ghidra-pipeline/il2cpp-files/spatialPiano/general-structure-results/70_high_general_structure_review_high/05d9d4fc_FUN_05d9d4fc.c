/*
FUNCTION_NAME: FUN_05d9d4fc
ENTRY_POINT: 05d9d4fc
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_15;strong_pose_or_ray_construction_hits_4;strong_file_logging_hits_2
*/


void FUN_05d9d4fc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  long lVar8;
  uint uVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  undefined8 extraout_x1;
  undefined8 *puVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  undefined1 auVar19 [16];
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined1 *puStack_90;
  undefined8 local_88;
  long local_80;
  long local_78;
  undefined1 local_6c [4];
  long local_68;
  
  puVar7 = PTR_DAT_067c8f20;
  if ((DAT_06bc3aae & 1) == 0) {
    FUN_02f08768(PTR_DAT_067c8f48);
    FUN_02f08768(PTR_DAT_067c9648);
    FUN_02f08768(PTR_DAT_067c8f20);
    FUN_02f08768(Method_System_Net_Sockets_NetworkStream_Close__);
    FUN_02f08768(Method_UnityEngine_Object_FindObjectOfType<SharedSpatialAnchorCore>__);
    FUN_02f08768(
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<Vector4>__
                );
    FUN_02f08768(Method_Unity_Properties_PropertyBag_Register<StyleEnum<Justify>>__);
    FUN_02f08768(
                Method_Unity_AppUI_UI_NotifyValueChangingExtensions_RegisterValueChangingCallback<Vector2>__
                );
    DAT_06bc3aae = 1;
  }
  local_68 = 0;
  puVar15 = (undefined8 *)(param_1 + 0xc0);
  uVar16 = *puVar15;
  local_6c[0] = 0;
  local_80 = 0;
  local_78 = 0;
  local_88 = 0;
  if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  uVar10 = FUN_060f245c(uVar16,0,0);
  puVar7 = Method_System_Net_Sockets_NetworkStream_Close__;
  if ((uVar10 & 1) != 0) {
    plVar11 = (long *)FUN_02f0880c(*(undefined8 *)PTR_DAT_067c9648,1);
    plVar12 = (long *)thunk_FUN_02f1863c(param_1,0);
    if (plVar12 != (long *)0x0) {
      lVar13 = (**(code **)(*plVar12 + 0x1b8))(plVar12,*(undefined8 *)(*plVar12 + 0x1c0));
      if (plVar11 != (long *)0x0) {
        if ((lVar13 != 0) &&
           (lVar14 = thunk_FUN_02f45174(lVar13,*(undefined8 *)(*plVar11 + 0x40)), lVar14 == 0)) {
          uVar16 = thunk_FUN_02f52b60();
                    /* WARNING: Subroutine does not return */
          FUN_02f0888c(uVar16,0);
        }
        puVar7 = PTR_DAT_067c8f48;
        if ((int)plVar11[3] != 0) {
          plVar11[4] = lVar13;
          if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          FUN_060a9df0(*(undefined8 *)
                        Method_Unity_Properties_PropertyBag_Register<StyleEnum<Justify>>__,plVar11,0
                      );
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_02f089d0();
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  plVar11 = (long *)FUN_05ddf250(param_3,0);
  lVar13 = *plVar11;
  local_68 = lVar13;
  uVar16 = FUN_034dac00(0x11,*(undefined8 *)puVar7);
  FUN_05c5cb48(local_6c,lVar13,uVar16,0);
  local_98 = 0;
  puStack_90 = local_6c;
  if (*(long *)(param_1 + 0x158) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  if (*(char *)(*(long *)(param_1 + 0x158) + 0x15) == '\0') {
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    FUN_06116fac(lVar13,*(long *)(*(long *)
                                   Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<Vector4>__
                                 + 0xb8) + 0x88,1,0);
  }
  lVar14 = *(long *)(param_1 + 0xf8);
  if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  if ((*(uint *)(lVar14 + 0x18) & 0xfffffffc) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089d0();
  }
  FUN_05c9ac9c(&local_e8,*(undefined8 *)(lVar14 + 0x38),0);
  uStack_b8 = uStack_e0;
  local_c0 = local_e8;
  uStack_a8 = uStack_d0;
  uStack_b0 = local_d8;
  local_a0 = local_c8;
  if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  uStack_108 = uStack_e0;
  local_110 = local_e8;
  uStack_f8 = uStack_d0;
  uStack_100 = local_d8;
  local_f0 = local_c8;
  FUN_0611f5d0(lVar13,*(undefined8 *)
                       Method_Unity_AppUI_UI_NotifyValueChangingExtensions_RegisterValueChangingCallback<Vector2>__
               ,&local_110,0);
  lVar14 = FUN_05de0c0c(param_3 + 8,0);
  if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  uVar10 = FUN_05c39c18(lVar14,0);
  if ((uVar10 & 1) != 0) {
    if (*(long *)(param_1 + 0x158) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    if ((*(char *)(*(long *)(param_1 + 0x158) + 0x14) != '\0') ||
       (uVar9 = FUN_060fb1f0(0), (uVar9 >> 1 & 1) != 0)) {
LAB_05d9d7d8:
      FUN_06118b88(lVar13,0,0);
      bVar6 = false;
      goto LAB_05d9d7ec;
    }
    uVar10 = FUN_060fb1f0(0);
    if ((uVar10 & 1) != 0) {
      if (*(long *)(param_1 + 0x158) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      if (*(int *)(*(long *)(param_1 + 0x158) + 0x18) == 0) goto LAB_05d9d7d8;
    }
    uVar10 = FUN_060fb1f0(0);
    if ((uVar10 & 1) != 0) {
      bVar6 = true;
      FUN_06118b88(lVar13,1,0);
      goto LAB_05d9d7ec;
    }
  }
  bVar6 = false;
LAB_05d9d7ec:
  if (*(long *)(param_1 + 0x158) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  uVar4 = *(undefined4 *)(param_1 + 0x100);
  cVar5 = *(char *)(*(long *)(param_1 + 0x158) + 0x15);
  if (*(int *)(*(long *)Method_UnityEngine_Object_FindObjectOfType<SharedSpatialAnchorCore>__ + 0xe4
              ) == 0) {
    thunk_FUN_02f6670c();
  }
  FUN_05d9db40(uVar4,cVar5 != '\0',&local_78,&local_80);
  plVar11 = (long *)FUN_05de1004(param_3 + 8,0);
  if (*plVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  local_88 = FUN_05d5f224(*plVar11,0);
  auVar19 = FUN_05de1004(param_3 + 8,0);
  lVar14 = *(long *)(param_1 + 0xf8);
  if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  if (*(int *)(lVar14 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089d0();
  }
  FUN_05d9dd04(&local_68,auVar19._8_8_,auVar19._0_8_,puVar15,&local_88,lVar14 + 0x20,0);
  lVar8 = local_78;
  lVar14 = local_80;
  if (local_80 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  lVar1 = local_80 + 0x20;
  lVar17 = 0;
  while( true ) {
    uVar9 = (uint)lVar17;
    if (*(int *)(lVar14 + 0x18) <= (int)uVar9) {
      if (*(int *)(*(long *)Method_UnityEngine_Object_FindObjectOfType<SharedSpatialAnchorCore>__ +
                  0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      if (*(long *)(param_1 + 0x158) != 0) {
        FUN_06116150(0x3f800000,0,0,*(undefined4 *)(*(long *)(param_1 + 0x158) + 0x24),lVar13,
                     **(undefined4 **)
                       (*(long *)
                         Method_UnityEngine_Object_FindObjectOfType<SharedSpatialAnchorCore>__ +
                       0xb8),0);
        if (bVar6) {
          FUN_06118b88(lVar13,0,0);
        }
        FUN_05c5cb50(local_6c,0);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    if (*(uint *)(lVar8 + 0x18) <= uVar9) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089d0();
    }
    if (*(uint *)(lVar8 + 0x18) <= (uint)(lVar17 + 1)) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089d0();
    }
    lVar18 = lVar8 + lVar17 * 4;
    uVar2 = *(uint *)(lVar18 + 0x20);
    uVar3 = *(uint *)(lVar18 + 0x24);
    auVar19 = FUN_05de1004(param_3 + 8,0);
    uVar16 = auVar19._8_8_;
    lVar18 = *(long *)(param_1 + 0xf8);
    if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    if (*(uint *)(lVar14 + 0x18) <= uVar9) break;
    uVar4 = *(undefined4 *)(lVar1 + lVar17 * 4);
    if (*(int *)(*(long *)Method_UnityEngine_Object_FindObjectOfType<SharedSpatialAnchorCore>__ +
                0xe4) == 0) {
      thunk_FUN_02f6670c();
      uVar16 = extraout_x1;
    }
    if ((*(uint *)(lVar18 + 0x18) <= uVar2) || (*(uint *)(lVar18 + 0x18) <= uVar3)) break;
    FUN_05d9dd04(&local_68,uVar16,auVar19._0_8_,puVar15,lVar18 + 0x20 + (long)(int)uVar2 * 8,
                 lVar18 + 0x20 + (long)(int)uVar3 * 8,uVar4);
    lVar17 = lVar17 + 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089d0();
}


