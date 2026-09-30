/*
FUNCTION_NAME: FUN_038f8c08
ENTRY_POINT: 038f8c08
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_14;strong_pose_or_ray_construction_hits_20;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


long FUN_038f8c08(long *param_1,undefined8 param_2,uint param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  byte bVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  int *piVar13;
  int iVar14;
  undefined8 uVar15;
  long *plVar16;
  undefined8 *puVar17;
  long *local_a8;
  long *plStack_a0;
  byte local_90;
  undefined4 local_80;
  long local_78;
  long local_70;
  long local_68;
  
  puVar2 = Method_UnityEngine_UIElements_CallbackEventHandler_UnregisterCallback<FocusInEvent>__;
  if ((DAT_048381b6 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<byte>_ToArray__);
    thunk_FUN_01efb3a4(Method_System_Runtime_Remoting_ConfigHandler_ReadChannel__);
    thunk_FUN_01efb3a4(Method_Drawing_CommandBuilder_Add<CommandBuilder_BoxData>__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_CallbackEventHandler_UnregisterCallback<FocusInEvent>__
                      );
    thunk_FUN_01efb3a4(StringLiteral_3213);
    thunk_FUN_01efb3a4(StringLiteral_3182);
    thunk_FUN_01efb3a4(Method_System_Linq_Enumerable_OrderBy<TMP_SpriteGlyph,_uint>__);
    thunk_FUN_01efb3a4(StringLiteral_3214);
    thunk_FUN_01efb3a4(StringLiteral_3215);
    thunk_FUN_01efb3a4(StringLiteral_3216);
    thunk_FUN_01efb3a4(StringLiteral_3217);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                      );
                    /* try { // try from 038f8cd4 to 039f8d93 has its CatchHandler @ 038f8cd4
                       catch() { ... } // from try @ 038f8cd4 with catch @ 038f8cd4
                       catch() { ... } // from try @ 038f8df8 with catch @ 038f8cd4
                       catch() { ... } // from try @ 038f8e14 with catch @ 038f8cd4
                       catch() { ... } // from try @ 038f8e54 with catch @ 038f8cd4
                       catch() { ... } // from try @ 038f8e8c with catch @ 038f8cd4 */
    thunk_FUN_01efb3a4(StringLiteral_3218);
    thunk_FUN_01efb3a4(Method_UnityEngine_Rendering_Universal_ClipperBase_AddPath__);
    thunk_FUN_01efb3a4(
                      Method_Unity_VisualScripting_ComponentHolderProtocol_GetComponentsInChildren__
                      );
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
    thunk_FUN_01efb3a4(StringLiteral_3219);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_LowLevel_InputStateHistory_Record<TouchState>_GetUnsafeExtraMemoryPtr__
                      );
    thunk_FUN_01efb3a4(StringLiteral_3220);
    thunk_FUN_01efb3a4(Method_System_Nullable<InputControlScheme_MatchResult>_get_HasValue__);
    DAT_048381b6 = 1;
  }
  local_70 = 0;
  local_68 = 0;
  local_78 = 0;
  local_80 = 0;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar5 = FUN_03916b10(param_1,0);
  puVar17 = (undefined8 *)StringLiteral_3217;
  puVar2 = Method_Drawing_CommandBuilder_Add<CommandBuilder_BoxData>__;
  if ((uVar5 & 1) != 0) {
    FUN_01bc50c0(param_1);
    uVar15 = (**(code **)(*param_1 + 0x1a8))(param_1,*(undefined8 *)(*param_1 + 0x1b0));
    uVar10 = thunk_FUN_01efb3a4(StringLiteral_3223);
    uVar15 = FUN_03405678(uVar10,uVar15,0);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
    uVar10 = thunk_FUN_01f117cc();
    FUN_034f6754(uVar10,uVar15,0);
    uVar15 = thunk_FUN_01efb3a4(StringLiteral_3224);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar10,uVar15);
  }
  iVar14 = 0;
  while( true ) {
    lVar6 = *(long *)puVar2;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar6 = *(long *)puVar2;
    }
    lVar11 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x28);
    if (lVar11 == 0) goto System_Text_ValueStringBuilder__Append;
    if (*(int *)(lVar11 + 0x18) <= iVar14) break;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar11 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x28);
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
    }
    plVar7 = (long *)FUN_031ca64c(lVar11,iVar14,*puVar17);
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar6 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar5 != 0) {
      piVar13 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)StringLiteral_3182) {
          puVar8 = (undefined8 *)(lVar6 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_038f8e4c;
        }
        uVar5 = uVar5 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar5 != 0);
    }
    puVar8 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)StringLiteral_3182,0);
LAB_038f8e4c:
    uVar5 = (*(code *)*puVar8)(plVar7,param_1,0,param_2,param_3 & 1,&local_68,puVar8[1]);
    if ((uVar5 & 1) != 0) {
      return local_68;
    }
    iVar14 = iVar14 + 1;
  }
  iVar14 = 0;
  while( true ) {
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar6 = *(long *)puVar2;
    }
    puVar1 = Method_Unity_Collections_NativeArray<byte>_ToArray__;
    lVar11 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x30);
    if (lVar11 == 0) goto System_Text_ValueStringBuilder__Append;
    if (*(int *)(lVar11 + 0x18) <= iVar14) break;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar11 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x30);
      if (lVar11 == 0) goto System_Text_ValueStringBuilder__Append;
    }
    FUN_031c7aa8(&local_a8,lVar11,iVar14,*(undefined8 *)StringLiteral_3216);
    bVar4 = local_90;
    plVar9 = plStack_a0;
    plVar7 = local_a8;
    if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar5 = FUN_03582560(param_1,plVar9,0);
    plVar16 = plVar7;
    lVar6 = 0;
    if ((uVar5 & 1) == 0) {
      if (plVar7 == (long *)0x0) goto System_Text_ValueStringBuilder__Append;
      uVar5 = (**(code **)(*plVar7 + 0x3c8))(plVar7,*(undefined8 *)(*plVar7 + 0x3d0));
      if ((uVar5 & 1) != 0) {
        if (plVar9 == (long *)0x0) goto System_Text_ValueStringBuilder__Append;
        uVar5 = (**(code **)(*plVar9 + 0x3a8))(plVar9,*(undefined8 *)(*plVar9 + 0x3b0));
        if ((uVar5 & 1) != 0) {
          plVar9 = (long *)FUN_01f08890(*(undefined8 *)
                                         Method_Unity_VisualScripting_ComponentHolderProtocol_GetComponentsInChildren__
                                        ,1);
          if (plVar9 != (long *)0x0) {
            if ((param_1 != (long *)0x0) &&
               (lVar6 = thunk_FUN_01f116d0(param_1,*(undefined8 *)(*plVar9 + 0x40)), lVar6 == 0)) {
              uVar15 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
              FUN_01f08910(uVar15,0);
            }
            if ((int)plVar9[3] == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a44();
            }
            plVar9[4] = (long)param_1;
            thunk_FUN_01f51358(plVar9 + 4,param_1);
            if (*(int *)(*(long *)Method_UnityEngine_Rendering_Universal_ClipperBase_AddPath__ +
                        0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            uVar5 = FUN_03948bac(plVar7,&local_70,plVar9,0);
            plVar16 = (long *)0x0;
            lVar6 = local_70;
            if ((uVar5 & 1) == 0) {
              lVar6 = 0;
            }
            goto LAB_038f92c4;
          }
          goto System_Text_ValueStringBuilder__Append;
        }
      }
      if (param_1 == (long *)0x0) goto System_Text_ValueStringBuilder__Append;
      uVar5 = (**(code **)(*param_1 + 0x3c8))(param_1,*(undefined8 *)(*param_1 + 0x3d0));
      if (((uVar5 & 1) != 0) &&
         (uVar5 = (**(code **)(*plVar7 + 0x3c8))(plVar7,*(undefined8 *)(*plVar7 + 0x3d0)),
         (uVar5 & 1) != 0)) {
        if (plVar9 == (long *)0x0) goto System_Text_ValueStringBuilder__Append;
        uVar5 = (**(code **)(*plVar9 + 0x3c8))(plVar9,*(undefined8 *)(*plVar9 + 0x3d0));
        if ((uVar5 & 1) != 0) {
          uVar15 = (**(code **)(*param_1 + 0x458))(param_1,*(undefined8 *)(*param_1 + 0x460));
          uVar10 = (**(code **)(*plVar9 + 0x458))(plVar9,*(undefined8 *)(*plVar9 + 0x460));
          if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) ==
              0) {
            thunk_FUN_01ee6d7c(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
          }
          uVar5 = FUN_03582560(uVar15,uVar10,0);
          if ((uVar5 & 1) != 0) {
            lVar6 = (**(code **)(*param_1 + 0x478))(param_1,*(undefined8 *)(*param_1 + 0x480));
            if (*(int *)(*(long *)Method_UnityEngine_Rendering_Universal_ClipperBase_AddPath__ +
                        0xe0) == 0) {
              thunk_FUN_01ee6d7c(*(long *)
                                  Method_UnityEngine_Rendering_Universal_ClipperBase_AddPath__);
            }
            uVar5 = FUN_03949d10(plVar7,lVar6,0);
            plVar16 = (long *)0x0;
            if ((uVar5 & 1) == 0) {
              lVar6 = 0;
            }
            goto LAB_038f92c4;
          }
        }
      }
      plVar16 = (long *)0x0;
      lVar6 = 0;
    }
LAB_038f92c4:
    if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar5 = FUN_03582560(plVar16,0,0);
    if ((lVar6 != 0) && ((uVar5 & 1) != 0)) {
      if ((plVar7 == (long *)0x0) ||
         (plVar7 = (long *)(**(code **)(*plVar7 + 0x458))(plVar7,*(undefined8 *)(*plVar7 + 0x460)),
         plVar7 == (long *)0x0)) goto System_Text_ValueStringBuilder__Append;
      plVar16 = (long *)(**(code **)(*plVar7 + 0x928))
                                  (plVar7,lVar6,*(undefined8 *)(*plVar7 + 0x930));
    }
    if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar5 = FUN_03583338(plVar16,0,0);
    puVar17 = (undefined8 *)StringLiteral_3217;
    if ((uVar5 & 1) != 0) {
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      lVar6 = FUN_038fb008(plVar16);
      puVar1 = StringLiteral_3213;
      if (lVar6 != 0) {
        if ((bVar4 & 1) == 0) {
          return lVar6;
        }
        uVar15 = *(undefined8 *)StringLiteral_3213;
        lVar11 = thunk_FUN_01f116d0(lVar6,uVar15);
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08cfc(lVar6,uVar15);
        }
        lVar11 = *(long *)puVar1;
        plVar7 = (long *)thunk_FUN_01f116d0(lVar6,lVar11);
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08cfc(lVar6,lVar11);
        }
        lVar12 = *plVar7;
        uVar5 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar5 != 0) {
          piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == lVar11) {
              puVar8 = (undefined8 *)(lVar12 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_038f9408;
            }
            uVar5 = uVar5 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar5 != 0);
        }
        puVar8 = (undefined8 *)FUN_01ecb238(plVar7,lVar11,0);
LAB_038f9408:
        uVar5 = (*(code *)*puVar8)(plVar7,param_1,puVar8[1]);
        if ((uVar5 & 1) != 0) {
          return lVar6;
        }
      }
    }
    lVar6 = *(long *)puVar2;
    iVar14 = iVar14 + 1;
  }
  iVar14 = 0;
  while( true ) {
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar6 = *(long *)puVar2;
    }
    puVar3 = Method_System_Runtime_Remoting_ConfigHandler_ReadChannel__;
    lVar11 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x28);
    if (lVar11 == 0) goto System_Text_ValueStringBuilder__Append;
    if (*(int *)(lVar11 + 0x18) <= iVar14) break;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar11 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x28);
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
    }
    plVar7 = (long *)FUN_031ca64c(lVar11,iVar14,*puVar17);
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar6 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar5 != 0) {
      piVar13 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)StringLiteral_3182) {
          puVar8 = (undefined8 *)(lVar6 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_038f9690;
        }
        uVar5 = uVar5 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar5 != 0);
    }
    puVar8 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)StringLiteral_3182,0);
LAB_038f9690:
    uVar5 = (*(code *)*puVar8)(plVar7,param_1,1,param_2,param_3 & 1,&local_78,puVar8[1]);
    if ((uVar5 & 1) != 0) {
      return local_78;
    }
    lVar6 = *(long *)puVar2;
    iVar14 = iVar14 + 1;
  }
  if (*(int *)(*(long *)Method_System_Runtime_Remoting_ConfigHandler_ReadChannel__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar5 = FUN_0394f2dc(0);
  if ((uVar5 & 1) != 0) {
    FUN_038fb2d0();
  }
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar5 = FUN_0394f2dc(0);
  if ((uVar5 & 1) != 0) {
    if (param_1 == (long *)0x0) {
System_Text_ValueStringBuilder__Append:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar15 = (**(code **)(*param_1 + 0x1a8))(param_1,*(undefined8 *)(*param_1 + 0x1b0));
    uVar15 = FUN_0340ebc0(*(undefined8 *)StringLiteral_3219,uVar15,*(undefined8 *)StringLiteral_3220
                          ,0);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(*(long *)puVar1);
    }
    FUN_0403f2cc(uVar15,0);
  }
  uVar15 = *(undefined8 *)StringLiteral_3218;
  if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  plVar7 = (long *)FUN_03579868(uVar15,0);
  plVar9 = (long *)FUN_01f08890(*(undefined8 *)
                                 Method_Unity_VisualScripting_ComponentHolderProtocol_GetComponentsInChildren__
                                ,1);
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  if ((param_1 != (long *)0x0) &&
     (lVar6 = thunk_FUN_01f116d0(param_1,*(undefined8 *)(*plVar9 + 0x40)), lVar6 == 0)) {
    uVar15 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar15,0);
  }
  if ((int)plVar9[3] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a44();
  }
  plVar9[4] = (long)param_1;
  thunk_FUN_01f51358(plVar9 + 4,param_1);
  if (plVar7 != (long *)0x0) {
    uVar15 = (**(code **)(*plVar7 + 0x928))(plVar7,plVar9,*(undefined8 *)(*plVar7 + 0x930));
    lVar6 = FUN_03594a14(uVar15,0);
    if (lVar6 == 0) {
      lVar11 = 0;
    }
    else {
      uVar15 = *(undefined8 *)Method_System_Linq_Enumerable_OrderBy<TMP_SpriteGlyph,_uint>__;
      lVar11 = thunk_FUN_01f116d0(lVar6,uVar15);
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08cfc(lVar6,uVar15);
      }
    }
    return lVar11;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


