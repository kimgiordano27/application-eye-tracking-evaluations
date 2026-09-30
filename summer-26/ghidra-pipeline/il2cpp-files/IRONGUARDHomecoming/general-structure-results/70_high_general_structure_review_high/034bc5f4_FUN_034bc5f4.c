/*
FUNCTION_NAME: FUN_034bc5f4
ENTRY_POINT: 034bc5f4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ui_interaction;frame_behavior
EVIDENCE: validity_or_gating_hits_14;strong_pose_or_ray_construction_hits_8;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior
*/


void FUN_034bc5f4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  int iVar9;
  long *plVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  int *piVar17;
  undefined1 auVar18 [16];
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 local_70 [16];
  
  puVar1 = Method_System_Collections_Generic_Stack<Matrix4x4>_Clear__;
                    /* try { // try from 034bc60c to 035bc637 has its CatchHandler @ 034bc748 */
  if ((DAT_04832c78 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_UnityEngine_TextCore_Text_TextProcessingStack<Color32>_Remove__);
    thunk_FUN_01efb3a4(Method_System_Type_get_GenericParameterAttributes__);
                    /* try { // try from 034bc648 to 035bc64f has its CatchHandler @ 034bc724 */
    thunk_FUN_01efb3a4(
                      Method_DG_Tweening_TweenSettingsExtensions_OnStart<TweenerCore<Vector3,_Path,_PathOptions>>__
                      );
    thunk_FUN_01efb3a4(Method_System_Type_get_GenericParameterPosition__);
    thunk_FUN_01efb3a4(Method_DG_Tweening_TweenSettingsExtensions_OnStart<Tween>__);
    thunk_FUN_01efb3a4(Method_System_Collections_Generic_Stack<Matrix4x4>_Clear__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_LowLevel_InputStateHistory_Record<TouchState>_GetUnsafeExtraMemoryPtr__
                      );
    thunk_FUN_01efb3a4(Method_UnityEngine_Rendering_VolumeParameter<Color>__ctor__);
                    /* try { // try from 034bc68c to 035bc6b7 has its CatchHandler @ 034bc744 */
    thunk_FUN_01efb3a4(
                      Method_Unity_VisualScripting_StaticFunctionInvoker<Vector2,_Vector2,_Vector2>__ctor__
                      );
    thunk_FUN_01efb3a4(Method_System_Type_get_IsByRefLike__);
    DAT_04832c78 = 1;
  }
  local_70._0_8_ = 0;
  local_70._8_8_ = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  local_80 = 0;
                    /* try { // try from 034bc6b8 to 035bc703 has its CatchHandler @ 034bc4b8 */
  uStack_98 = 0;
  local_a0 = 0;
  FUN_034bc1e8(param_1);
  plVar10 = (long *)thunk_FUN_01f117cc(*(undefined8 *)puVar1);
  FUN_03416d98(plVar10,0);
  plVar11 = *(long **)(param_1 + 0x10);
  if (plVar11 != (long *)0x0) {
    plVar11 = (long *)(**(code **)(*plVar11 + 0x1b8))(plVar11,*(undefined8 *)(*plVar11 + 0x1c0));
    puVar2 = Method_UnityEngine_Rendering_VolumeParameter<Color>__ctor__;
    puVar1 = Method_Unity_VisualScripting_StaticFunctionInvoker<Vector2,_Vector2,_Vector2>__ctor__;
    if (plVar11 != (long *)0x0) {
                    /* try { // try from 034bc704 to 035bc707 has its CatchHandler @ 034bc73c */
                    /* try { // try from 034bc708 to 035bc70b has its CatchHandler @ 034bc738 */
      uVar12 = (**(code **)(*plVar11 + 0x2e8))(plVar11,*(undefined8 *)(*plVar11 + 0x2f0));
                    /* try { // try from 034bc70c to 035bc70f has its CatchHandler @ 034bc734 */
                    /* try { // try from 034bc710 to 035bc713 has its CatchHandler @ 034bc72c */
                    /* try { // try from 034bc714 to 035bc717 has its CatchHandler @ 034bc728 */
                    /* try { // try from 034bc718 to 035bc71b has its CatchHandler @ 034bc720 */
                    /* try { // try from 034bc71c to 035bc75f has its CatchHandler @ 034bc4b8 */
                    /* catch() { ... } // from try @ 034bc718 with catch @ 034bc720 */
      uVar12 = FUN_0340ebc0(*(undefined8 *)puVar1,uVar12,*(undefined8 *)puVar2,0);
                    /* catch() { ... } // from try @ 034bc648 with catch @ 034bc724 */
      if (plVar10 != (long *)0x0) {
                    /* catch() { ... } // from try @ 034bc714 with catch @ 034bc728 */
                    /* catch() { ... } // from try @ 034bc710 with catch @ 034bc72c */
                    /* catch() { ... } // from try @ 034bc5c8 with catch @ 034bc730 */
                    /* catch() { ... } // from try @ 034bc70c with catch @ 034bc734 */
        FUN_03418748(plVar10,uVar12,0);
        puVar7 = Method_System_Type_get_IsByRefLike__;
        puVar6 = Method_System_Type_get_GenericParameterPosition__;
        puVar5 = Method_System_Type_get_GenericParameterAttributes__;
        puVar4 = Method_DG_Tweening_TweenSettingsExtensions_OnStart<Tween>__;
        puVar3 = 
        Method_DG_Tweening_TweenSettingsExtensions_OnStart<TweenerCore<Vector3,_Path,_PathOptions>>__
        ;
        puVar2 = Method_UnityEngine_TextCore_Text_TextProcessingStack<Color32>_Remove__;
        puVar1 = 
        Method_UnityEngine_InputSystem_LowLevel_InputStateHistory_Record<TouchState>_GetUnsafeExtraMemoryPtr__
        ;
                    /* catch() { ... } // from try @ 034bc708 with catch @ 034bc738 */
        plVar11 = *(long **)(param_1 + 0x18);
                    /* catch() { ... } // from try @ 034bc704 with catch @ 034bc73c */
        if (plVar11 != (long *)0x0) {
                    /* catch() { ... } // from try @ 034bc5ac with catch @ 034bc740 */
                    /* catch() { ... } // from try @ 034bc68c with catch @ 034bc744 */
                    /* catch() { ... } // from try @ 034bc60c with catch @ 034bc748 */
                    /* try { // try from 034bc760 to 035bc763 has its CatchHandler @ 034bc784 */
                    /* try { // try from 034bc764 to 035bc78b has its CatchHandler @ 034bc4b8 */
          iVar9 = 0;
          do {
            lVar15 = *plVar11;
            lVar14 = *(long *)puVar3;
                    /* catch() { ... } // from try @ 034bc760 with catch @ 034bc784 */
            uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
            if (uVar16 != 0) {
                    /* try { // try from 034bc78c to 035bc793 has its CatchHandler @ 034bc7a8 */
              piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
              do {
                    /* try { // try from 034bc794 to 035bc79f has its CatchHandler @ 034bc4b8 */
                if (*(long *)(piVar17 + -2) == lVar14) {
                  puVar13 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
                  goto LAB_034bc7c8;
                }
                    /* try { // try from 034bc7a0 to 035bc7a7 has its CatchHandler @ 034bc7a8 */
                uVar16 = uVar16 - 1;
                piVar17 = piVar17 + 4;
                    /* catch() { ... } // from try @ 034bc78c with catch @ 034bc7a8
                       catch() { ... } // from try @ 034bc7a0 with catch @ 034bc7a8 */
              } while (uVar16 != 0);
            }
            puVar13 = (undefined8 *)FUN_01ecb238(plVar11,lVar14,0);
LAB_034bc7c8:
            iVar8 = (*(code *)*puVar13)(plVar11,puVar13[1]);
            if (iVar8 <= iVar9) {
              plVar11 = *(long **)(param_1 + 0x20);
              if (plVar11 != (long *)0x0) {
                lVar14 = *plVar11;
                uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
                if (uVar16 == 0) goto LAB_034bc920;
                piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                goto LAB_034bc908;
              }
              break;
            }
            plVar11 = *(long **)(param_1 + 0x18);
            if (plVar11 == (long *)0x0) break;
            lVar14 = *plVar11;
            uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
            if (uVar16 != 0) {
              piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
              do {
                if (*(long *)(piVar17 + -2) == *(long *)puVar4) {
                  puVar13 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
                  goto LAB_034bc830;
                }
                uVar16 = uVar16 - 1;
                piVar17 = piVar17 + 4;
              } while (uVar16 != 0);
            }
            puVar13 = (undefined8 *)FUN_01ecb238(plVar11,*(long *)puVar4,0);
LAB_034bc830:
            auVar18 = (*(code *)*puVar13)(plVar11,iVar9,puVar13[1]);
            local_70 = auVar18;
            uVar12 = FUN_034b8f94(local_70,0);
            FUN_03418748(plVar10,uVar12,0);
            plVar11 = *(long **)(param_1 + 0x18);
            if (plVar11 == (long *)0x0) break;
            lVar15 = *plVar11;
            lVar14 = *(long *)puVar3;
            uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
            if (uVar16 != 0) {
              piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
              do {
                if (*(long *)(piVar17 + -2) == lVar14) {
                  puVar13 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
                  goto LAB_034bc8b4;
                }
                uVar16 = uVar16 - 1;
                piVar17 = piVar17 + 4;
              } while (uVar16 != 0);
            }
            puVar13 = (undefined8 *)FUN_01ecb238(plVar11,lVar14,0);
LAB_034bc8b4:
            iVar8 = (*(code *)*puVar13)(plVar11,puVar13[1]);
            iVar9 = iVar9 + 1;
            if (iVar9 < iVar8) {
              FUN_03418748(plVar10,*(undefined8 *)puVar1,0);
            }
            plVar11 = *(long **)(param_1 + 0x18);
          } while (plVar11 != (long *)0x0);
        }
      }
    }
  }
  goto LAB_034bcae4;
  while( true ) {
    uVar16 = uVar16 - 1;
    piVar17 = piVar17 + 4;
    if (uVar16 == 0) break;
LAB_034bc908:
    if (*(long *)(piVar17 + -2) == *(long *)puVar5) {
      puVar13 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
      goto LAB_034bc93c;
    }
  }
LAB_034bc920:
  puVar13 = (undefined8 *)FUN_01ecb238(plVar11,*(long *)puVar5,0);
LAB_034bc93c:
  iVar9 = (*(code *)*puVar13)(plVar11,puVar13[1]);
  if (0 < iVar9) {
    FUN_03418748(plVar10,*(undefined8 *)puVar1,0);
  }
  plVar11 = *(long **)(param_1 + 0x20);
  if (plVar11 != (long *)0x0) {
    iVar9 = 0;
    do {
      lVar14 = *plVar11;
      uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar16 != 0) {
        piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == *(long *)puVar5) {
            puVar13 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
            goto LAB_034bc9b8;
          }
          uVar16 = uVar16 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar16 != 0);
      }
      puVar13 = (undefined8 *)FUN_01ecb238(plVar11,*(long *)puVar5,0);
LAB_034bc9b8:
      iVar8 = (*(code *)*puVar13)(plVar11,puVar13[1]);
      if (iVar8 <= iVar9) {
        lVar15 = *(long *)puVar2;
        lVar14 = *(long *)(lVar15 + 0x38);
        if (lVar14 == 0) {
          FUN_01ecafa0(lVar15);
          lVar14 = *(long *)(lVar15 + 0x38);
        }
        lVar14 = *(long *)(lVar14 + 0x10);
        if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
          lVar14 = FUN_01ecaf44();
        }
        if (*(int *)(lVar14 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        lVar14 = *(long *)(*(long *)(lVar15 + 0x38) + 0x10);
        if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
          lVar14 = FUN_01ecaf44();
        }
        FUN_0341a07c(plVar10,*(undefined8 *)puVar7,**(undefined8 **)(lVar14 + 0xb8),0);
        (**(code **)(*plVar10 + 0x168))(plVar10,*(undefined8 *)(*plVar10 + 0x170));
        return;
      }
      plVar11 = *(long **)(param_1 + 0x20);
      if (plVar11 == (long *)0x0) break;
      lVar14 = *plVar11;
      uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar16 != 0) {
        piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == *(long *)puVar6) {
            puVar13 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
            goto LAB_034bca20;
          }
          uVar16 = uVar16 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar16 != 0);
      }
      puVar13 = (undefined8 *)FUN_01ecb238(plVar11,*(long *)puVar6,0);
LAB_034bca20:
      (*(code *)*puVar13)(&local_d0,plVar11,iVar9,puVar13[1]);
      uStack_98 = uStack_c8;
      local_a0 = local_d0;
      uStack_88 = uStack_b8;
      local_90 = uStack_c0;
      uStack_78 = uStack_a8;
      local_80 = local_b0;
      uVar12 = FUN_034b7ffc(&local_a0,0);
      FUN_03418748(plVar10,uVar12,0);
      plVar11 = *(long **)(param_1 + 0x20);
      if (plVar11 == (long *)0x0) break;
      lVar14 = *plVar11;
      uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar16 != 0) {
        piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == *(long *)puVar5) {
            puVar13 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
            goto LAB_034bcab4;
          }
          uVar16 = uVar16 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar16 != 0);
      }
      puVar13 = (undefined8 *)FUN_01ecb238(plVar11,*(long *)puVar5,0);
LAB_034bcab4:
      iVar8 = (*(code *)*puVar13)(plVar11,puVar13[1]);
      iVar9 = iVar9 + 1;
      if (iVar9 < iVar8) {
        FUN_03418748(plVar10,*(undefined8 *)puVar1,0);
      }
      plVar11 = *(long **)(param_1 + 0x20);
    } while (plVar11 != (long *)0x0);
  }
LAB_034bcae4:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


