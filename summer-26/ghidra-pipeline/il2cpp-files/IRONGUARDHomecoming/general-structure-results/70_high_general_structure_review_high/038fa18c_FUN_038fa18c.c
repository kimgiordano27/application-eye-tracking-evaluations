/*
FUNCTION_NAME: FUN_038fa18c
ENTRY_POINT: 038fa18c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


long FUN_038fa18c(long *param_1,undefined8 param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  byte bVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  undefined8 *puVar11;
  long *plVar12;
  long *plVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  int *piVar17;
  int iVar18;
  undefined8 uVar19;
  long *local_a8;
  long *plStack_a0;
  byte local_90;
  undefined4 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  
  puVar2 = Method_UnityEngine_UIElements_CallbackEventHandler_UnregisterCallback<FocusInEvent>__;
  if ((DAT_048381b5 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Drawing_CommandBuilder_Add<CommandBuilder_BoxData>__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_CallbackEventHandler_UnregisterCallback<FocusInEvent>__
                      );
    thunk_FUN_01efb3a4(StringLiteral_3213);
    thunk_FUN_01efb3a4(StringLiteral_3182);
    thunk_FUN_01efb3a4(Method_System_Linq_Enumerable_OrderBy<TMP_SpriteGlyph,_uint>__);
    thunk_FUN_01efb3a4(StringLiteral_3235);
    thunk_FUN_01efb3a4(StringLiteral_3236);
    thunk_FUN_01efb3a4(StringLiteral_3214);
    thunk_FUN_01efb3a4(StringLiteral_3215);
    thunk_FUN_01efb3a4(StringLiteral_3216);
    thunk_FUN_01efb3a4(StringLiteral_3217);
    thunk_FUN_01efb3a4(StringLiteral_3237);
    thunk_FUN_01efb3a4(StringLiteral_3218);
    thunk_FUN_01efb3a4(Method_UnityEngine_Rendering_Universal_ClipperBase_AddPath__);
    thunk_FUN_01efb3a4(
                      Method_Unity_VisualScripting_ComponentHolderProtocol_GetComponentsInChildren__
                      );
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
    DAT_048381b5 = 1;
  }
  local_70 = 0;
  local_68 = 0;
  local_78 = 0;
  local_80 = 0;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar7 = FUN_03916b10(param_1,0);
  puVar4 = StringLiteral_3236;
  puVar5 = StringLiteral_3217;
  puVar3 = Method_Drawing_CommandBuilder_Add<CommandBuilder_BoxData>__;
  puVar2 = Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__;
  if ((uVar7 & 1) != 0) {
    FUN_01bc50c0(param_1);
    uVar19 = (**(code **)(*param_1 + 0x1a8))(param_1,*(undefined8 *)(*param_1 + 0x1b0));
    uVar14 = thunk_FUN_01efb3a4(StringLiteral_3223);
    uVar19 = FUN_03405678(uVar14,uVar19,0);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
    uVar14 = thunk_FUN_01f117cc();
    FUN_034f6754(uVar14,uVar19,0);
    uVar19 = thunk_FUN_01efb3a4(StringLiteral_3238);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar14,uVar19);
  }
  lVar8 = thunk_FUN_01f117cc(*(undefined8 *)StringLiteral_3237);
  FUN_030f2380(lVar8,*(undefined8 *)puVar4);
  iVar18 = 0;
  while( true ) {
    lVar9 = *(long *)puVar3;
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar9 = *(long *)puVar3;
    }
    lVar15 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x28);
    if (lVar15 == 0) goto LAB_038faebc;
    if (*(int *)(lVar15 + 0x18) <= iVar18) break;
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar15 = *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x28);
      if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
    }
    plVar10 = (long *)FUN_031ca64c(lVar15,iVar18,*(undefined8 *)puVar5);
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar9 = *plVar10;
    uVar7 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar7 != 0) {
      piVar17 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *(long *)StringLiteral_3182) {
          puVar11 = (undefined8 *)(lVar9 + (long)*piVar17 * 0x10 + 0x138);
          goto LAB_038fa3c4;
        }
        uVar7 = uVar7 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar7 != 0);
    }
    puVar11 = (undefined8 *)FUN_01ecb238(plVar10,*(long *)StringLiteral_3182,0);
LAB_038fa3c4:
    uVar7 = (*(code *)*puVar11)(plVar10,param_1,0,param_2,1,&local_68,puVar11[1]);
    if ((uVar7 & 1) != 0) {
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar9 = *(long *)(lVar8 + 0x10);
      lVar15 = *(long *)StringLiteral_3235;
      *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar1 = *(uint *)(lVar8 + 0x18);
      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
        *(uint *)(lVar8 + 0x18) = uVar1 + 1;
        *(undefined8 *)(lVar9 + (long)(int)uVar1 * 8 + 0x20) = local_68;
        thunk_FUN_01f51358();
      }
      else {
        FUN_030f2bb4(lVar8,local_68,
                     *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
      }
    }
    iVar18 = iVar18 + 1;
  }
  iVar18 = 0;
LAB_038fa634:
  if (*(int *)(lVar9 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar9 = *(long *)puVar3;
  }
  lVar15 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x30);
  if (lVar15 == 0) goto LAB_038faebc;
  if (*(int *)(lVar15 + 0x18) <= iVar18) {
    iVar18 = 0;
    goto LAB_038faa40;
  }
  if (*(int *)(lVar9 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar15 = *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x30);
    if (lVar15 == 0) goto LAB_038faebc;
  }
  FUN_031c7aa8(&local_a8,lVar15,iVar18,*(undefined8 *)StringLiteral_3216);
  bVar6 = local_90;
  plVar12 = plStack_a0;
  plVar10 = local_a8;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar7 = FUN_03582560(param_1,plVar12,0);
  plVar13 = plVar10;
  if ((uVar7 & 1) == 0) {
    if (plVar10 == (long *)0x0) goto LAB_038faebc;
    uVar7 = (**(code **)(*plVar10 + 0x3c8))(plVar10,*(undefined8 *)(*plVar10 + 0x3d0));
    if ((uVar7 & 1) == 0) {
LAB_038fa7b4:
      if (param_1 == (long *)0x0) goto LAB_038faebc;
      uVar7 = (**(code **)(*param_1 + 0x3c8))(param_1,*(undefined8 *)(*param_1 + 0x3d0));
      if (((uVar7 & 1) != 0) &&
         (uVar7 = (**(code **)(*plVar10 + 0x3c8))(plVar10,*(undefined8 *)(*plVar10 + 0x3d0)),
         (uVar7 & 1) != 0)) {
        if (plVar12 == (long *)0x0) goto LAB_038faebc;
        uVar7 = (**(code **)(*plVar12 + 0x3c8))(plVar12,*(undefined8 *)(*plVar12 + 0x3d0));
        if ((uVar7 & 1) != 0) {
          uVar19 = (**(code **)(*param_1 + 0x458))(param_1,*(undefined8 *)(*param_1 + 0x460));
          uVar14 = (**(code **)(*plVar12 + 0x458))(plVar12,*(undefined8 *)(*plVar12 + 0x460));
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c(*(long *)puVar2);
          }
          uVar7 = FUN_03582560(uVar19,uVar14,0);
          plVar13 = (long *)0x0;
          if ((uVar7 & 1) == 0) goto LAB_038fa8d4;
          uVar19 = (**(code **)(*param_1 + 0x478))(param_1,*(undefined8 *)(*param_1 + 0x480));
          if (*(int *)(*(long *)Method_UnityEngine_Rendering_Universal_ClipperBase_AddPath__ + 0xe0)
              == 0) {
            thunk_FUN_01ee6d7c(*(long *)Method_UnityEngine_Rendering_Universal_ClipperBase_AddPath__
                              );
          }
          uVar7 = FUN_03949d10(plVar10,uVar19,0);
          plVar13 = (long *)0x0;
          if ((uVar7 & 1) != 0) {
            plVar10 = (long *)(**(code **)(*plVar10 + 0x458))
                                        (plVar10,*(undefined8 *)(*plVar10 + 0x460));
            if (plVar10 != (long *)0x0) {
              lVar9 = *plVar10;
              goto LAB_038fa7a0;
            }
            goto LAB_038faebc;
          }
          goto LAB_038fa8d4;
        }
      }
      plVar13 = (long *)0x0;
    }
    else {
      if (plVar12 == (long *)0x0) goto LAB_038faebc;
      uVar7 = (**(code **)(*plVar12 + 0x3a8))(plVar12,*(undefined8 *)(*plVar12 + 0x3b0));
      if ((uVar7 & 1) == 0) goto LAB_038fa7b4;
      plVar12 = (long *)FUN_01f08890(*(undefined8 *)
                                      Method_Unity_VisualScripting_ComponentHolderProtocol_GetComponentsInChildren__
                                     ,1);
      if (plVar12 == (long *)0x0) goto LAB_038faebc;
      if ((param_1 != (long *)0x0) &&
         (lVar9 = thunk_FUN_01f116d0(param_1,*(undefined8 *)(*plVar12 + 0x40)), lVar9 == 0))
      goto LAB_038faedc;
      if ((int)plVar12[3] == 0) goto LAB_038faec0;
      plVar12[4] = (long)param_1;
      thunk_FUN_01f51358(plVar12 + 4,param_1);
      if (*(int *)(*(long *)Method_UnityEngine_Rendering_Universal_ClipperBase_AddPath__ + 0xe0) ==
          0) {
        thunk_FUN_01ee6d7c();
      }
      uVar7 = FUN_03948bac(plVar10,&local_70,plVar12,0);
      plVar13 = (long *)0x0;
      if ((uVar7 & 1) == 0) goto LAB_038fa8d4;
      plVar10 = (long *)(**(code **)(*plVar10 + 0x458))(plVar10,*(undefined8 *)(*plVar10 + 0x460));
      if (plVar10 == (long *)0x0) goto LAB_038faebc;
      lVar9 = *plVar10;
      uVar19 = local_70;
LAB_038fa7a0:
      plVar13 = (long *)(**(code **)(lVar9 + 0x928))(plVar10,uVar19,*(undefined8 *)(lVar9 + 0x930));
    }
  }
LAB_038fa8d4:
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar7 = FUN_03583338(plVar13,0,0);
  puVar4 = StringLiteral_3213;
  if ((uVar7 & 1) != 0) {
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    lVar9 = FUN_038fb008(plVar13);
    if (lVar9 != 0) {
      if ((bVar6 & 1) != 0) {
        uVar19 = *(undefined8 *)puVar4;
        lVar15 = thunk_FUN_01f116d0(lVar9,uVar19);
        if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08cfc(lVar9,uVar19);
        }
        lVar15 = *(long *)puVar4;
        plVar10 = (long *)thunk_FUN_01f116d0(lVar9,lVar15);
        if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08cfc(lVar9,lVar15);
        }
        lVar16 = *plVar10;
        uVar7 = (ulong)*(ushort *)(lVar16 + 0x12e);
        if (uVar7 != 0) {
          piVar17 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == lVar15) {
              puVar11 = (undefined8 *)(lVar16 + (long)*piVar17 * 0x10 + 0x138);
              goto LAB_038fa99c;
            }
            uVar7 = uVar7 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar7 != 0);
        }
        puVar11 = (undefined8 *)FUN_01ecb238(plVar10,lVar15,0);
LAB_038fa99c:
        uVar7 = (*(code *)*puVar11)(plVar10,param_1,puVar11[1]);
        if ((uVar7 & 1) == 0) goto LAB_038faa18;
      }
      if (lVar8 == 0) goto LAB_038faebc;
      lVar15 = *(long *)(lVar8 + 0x10);
      lVar16 = *(long *)StringLiteral_3235;
      *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
      if (lVar15 == 0) goto LAB_038faebc;
      uVar1 = *(uint *)(lVar8 + 0x18);
      if (uVar1 < *(uint *)(lVar15 + 0x18)) {
        *(uint *)(lVar8 + 0x18) = uVar1 + 1;
        plVar10 = (long *)(lVar15 + (long)(int)uVar1 * 8 + 0x20);
        *plVar10 = lVar9;
        thunk_FUN_01f51358(plVar10,lVar9);
      }
      else {
        FUN_030f2bb4(lVar8,lVar9,*(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70))
        ;
      }
    }
  }
LAB_038faa18:
  lVar9 = *(long *)puVar3;
  iVar18 = iVar18 + 1;
  goto LAB_038fa634;
LAB_038faa40:
  if (*(int *)(lVar9 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar9 = *(long *)puVar3;
  }
  lVar15 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x28);
  if (lVar15 == 0) goto LAB_038faebc;
  if (*(int *)(lVar15 + 0x18) <= iVar18) {
    uVar19 = *(undefined8 *)StringLiteral_3218;
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    plVar10 = (long *)FUN_03579868(uVar19,0);
    plVar12 = (long *)FUN_01f08890(*(undefined8 *)
                                    Method_Unity_VisualScripting_ComponentHolderProtocol_GetComponentsInChildren__
                                   ,1);
    if (plVar12 != (long *)0x0) {
      if ((param_1 != (long *)0x0) &&
         (lVar9 = thunk_FUN_01f116d0(param_1,*(undefined8 *)(*plVar12 + 0x40)), lVar9 == 0)) {
LAB_038faedc:
        uVar19 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
        FUN_01f08910(uVar19,0);
      }
      if ((int)plVar12[3] == 0) {
LAB_038faec0:
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      plVar12[4] = (long)param_1;
      thunk_FUN_01f51358(plVar12 + 4,param_1);
      if (plVar10 != (long *)0x0) {
        uVar19 = (**(code **)(*plVar10 + 0x928))(plVar10,plVar12,*(undefined8 *)(*plVar10 + 0x930));
        lVar9 = FUN_03594a14(uVar19,0);
        if (lVar8 != 0) {
          if (lVar9 == 0) {
            lVar15 = 0;
          }
          else {
            uVar19 = *(undefined8 *)Method_System_Linq_Enumerable_OrderBy<TMP_SpriteGlyph,_uint>__;
            lVar15 = thunk_FUN_01f116d0(lVar9,uVar19);
            if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08cfc(lVar9,uVar19);
            }
          }
          lVar9 = *(long *)(lVar8 + 0x10);
          lVar16 = *(long *)StringLiteral_3235;
          *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
          if (lVar9 != 0) {
            uVar1 = *(uint *)(lVar8 + 0x18);
            if (uVar1 < *(uint *)(lVar9 + 0x18)) {
              *(uint *)(lVar8 + 0x18) = uVar1 + 1;
              *(long *)(lVar9 + (long)(int)uVar1 * 8 + 0x20) = lVar15;
              thunk_FUN_01f51358();
            }
            else {
              FUN_030f2bb4(lVar8,lVar15,
                           *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
            }
            return lVar8;
          }
        }
      }
    }
LAB_038faebc:
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  if (*(int *)(lVar9 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar15 = *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x28);
    if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
  }
  plVar10 = (long *)FUN_031ca64c(lVar15,iVar18,*(undefined8 *)puVar5);
  if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar9 = *plVar10;
  uVar7 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar7 != 0) {
    piVar17 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar17 + -2) == *(long *)StringLiteral_3182) {
        puVar11 = (undefined8 *)(lVar9 + (long)*piVar17 * 0x10 + 0x138);
        goto LAB_038faaf0;
      }
      uVar7 = uVar7 - 1;
      piVar17 = piVar17 + 4;
    } while (uVar7 != 0);
  }
  puVar11 = (undefined8 *)FUN_01ecb238(plVar10,*(long *)StringLiteral_3182,0);
LAB_038faaf0:
  uVar7 = (*(code *)*puVar11)(plVar10,param_1,1,param_2,1,&local_78,puVar11[1]);
  if ((uVar7 & 1) != 0) {
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar9 = *(long *)(lVar8 + 0x10);
    lVar15 = *(long *)StringLiteral_3235;
    *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar1 = *(uint *)(lVar8 + 0x18);
    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
      *(uint *)(lVar8 + 0x18) = uVar1 + 1;
      *(undefined8 *)(lVar9 + (long)(int)uVar1 * 8 + 0x20) = local_78;
      thunk_FUN_01f51358();
    }
    else {
      FUN_030f2bb4(lVar8,local_78,*(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70)
                  );
    }
  }
  lVar9 = *(long *)puVar3;
  iVar18 = iVar18 + 1;
  goto LAB_038faa40;
}


