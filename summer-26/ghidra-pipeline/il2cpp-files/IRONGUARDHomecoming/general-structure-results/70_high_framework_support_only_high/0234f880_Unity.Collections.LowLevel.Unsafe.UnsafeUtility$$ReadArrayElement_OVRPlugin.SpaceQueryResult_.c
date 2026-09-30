/*
FUNCTION_NAME: Unity.Collections.LowLevel.Unsafe.UnsafeUtility$$ReadArrayElement<OVRPlugin.SpaceQueryResult>
ENTRY_POINT: 0234f880
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_LowLevel_Unsafe_UnsafeUtility__ReadArrayElement<OVRPlugin_SpaceQueryResult>
               (long param_1,long *param_2)

{
  uint uVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  float *pfVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined **in_x9;
  long unaff_x20;
  long lVar11;
  ulong unaff_x22;
  void *unaff_x23;
  long unaff_x24;
  size_t unaff_x25;
  void *unaff_x26;
  long unaff_x27;
  ulong unaff_x28;
  long unaff_x29;
  
  do {
    bVar3 = *(byte *)(*(long *)in_x9[0x1b4] + 0x130);
    if ((*(byte *)(param_1 + 0x130) < bVar3) ||
       (*(long *)(*(long *)(param_1 + 200) + (ulong)bVar3 * 8 + -8) != *(long *)in_x9[0x1b4])) {
      bVar3 = *(byte *)(*(long *)Method_Drawing_CommandBuilder_WireMesh__ + 0x130);
      if ((bVar3 <= *(byte *)(param_1 + 0x130)) &&
         (*(long *)(*(long *)(param_1 + 200) + (ulong)bVar3 * 8 + -8) ==
          *(long *)Method_Drawing_CommandBuilder_WireMesh__)) {
        pfVar8 = (float *)(*(code *)**(undefined8 **)(*(long *)(unaff_x20 + 0x38) + 0x28))();
        bVar2 = **(float **)(*(long *)Method_Drawing_CommandBuilder_WireMesh__ + 0xb8) <= *pfVar8;
        goto 
        Unity_Collections_LowLevel_Unsafe_UnsafeUtility__ReadArrayElement<TubeRenderer_VertexLayout>
        ;
      }
    }
    else {
      bVar3 = FUN_03b429f0(param_2,0);
      bVar2 = (bool)(bVar3 & 1);
Unity_Collections_LowLevel_Unsafe_UnsafeUtility__ReadArrayElement<TubeRenderer_VertexLayout>:
      **(byte **)(unaff_x29 + -0x58) = bVar2;
    }
    do {
      do {
        unaff_x22 = unaff_x22 - 1;
        unaff_x28 = unaff_x28 + 1;
        if (unaff_x22 == 0) {
          do {
            do {
              uVar1 = (int)*(undefined8 *)(unaff_x29 + -0x70) + 1;
              iVar4 = FUN_03b341ac();
              unaff_x27 = unaff_x27 + 1;
              if (iVar4 <= (int)uVar1) {
LAB_0234f964:
                memcpy(unaff_x26,*(void **)(unaff_x29 + -0x50),unaff_x25);
                memcpy(*(void **)(unaff_x29 + -0x80),unaff_x26,unaff_x25);
                if (*(long *)(*(long *)(unaff_x29 + -0x88) + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
                  __stack_chk_fail();
                }
                return;
              }
              lVar5 = FUN_03b341d4();
              uVar6 = FUN_03b34538(lVar5 + unaff_x27 * 0x20,0);
              if ((uVar6 & 1) == 0) goto LAB_0234f964;
              *(ulong *)(unaff_x29 + -0x70) = (ulong)uVar1;
              lVar11 = unaff_x27 * 0x20;
              lVar5 = FUN_03b341d4();
            } while ((uint)*(byte *)(lVar11 + lVar5 + 5) != *(uint *)(unaff_x29 + -0x74));
            lVar5 = FUN_03b341d4();
            unaff_x22 = (ulong)*(byte *)(lVar11 + lVar5);
            lVar5 = FUN_03b341d4();
          } while (unaff_x22 == 0);
          unaff_x28 = (ulong)*(ushort *)(lVar11 + lVar5 + 0xe);
        }
        puVar9 = *(undefined8 **)(*(long *)(unaff_x20 + 0x38) + 8);
        uVar7 = *puVar9;
        *(undefined1 *)(unaff_x29 + -0x14) = 1;
        *(long *)(unaff_x29 + -0x38) = unaff_x29 + -0xc;
        *(long *)(unaff_x29 + -0x30) = unaff_x29 + -0x10;
        *(int *)(unaff_x29 + -0x10) = (int)unaff_x28;
        *(int *)(unaff_x29 + -0xc) = (int)unaff_x27;
        *(long *)(unaff_x29 + -0x28) = unaff_x29 + -0x14;
        *(void **)(unaff_x29 + -0x20) = unaff_x26;
        (*(code *)puVar9[2])(uVar7);
        memcpy(unaff_x23,unaff_x26,unaff_x25);
        memcpy(unaff_x26,unaff_x23,unaff_x25);
        memcpy(*(void **)(unaff_x29 + -0x60),*(void **)(unaff_x29 + -0x50),unaff_x25);
        lVar10 = *(long *)(unaff_x20 + 0x38);
        lVar11 = *(long *)(lVar10 + 0x10);
        lVar5 = lVar11;
        if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = FUN_01ecaf44(lVar11);
          lVar10 = *(long *)(unaff_x20 + 0x38);
          lVar5 = *(long *)(lVar10 + 0x10);
        }
        uVar7 = *(undefined8 *)(lVar10 + 0x20);
        lVar10 = *(long *)(unaff_x29 + -0x40);
        if (-1 < *(int *)(lVar5 + 0x28)) {
          lVar10 = unaff_x29 + -0x40;
        }
        *(void **)(unaff_x29 + -0x38) = unaff_x26;
        *(undefined8 *)(unaff_x29 + -0x30) = *(undefined8 *)(unaff_x29 + -0x60);
        FUN_01f09244(lVar11,uVar7,*(undefined8 *)(unaff_x29 + -0x68),lVar10,unaff_x29 + -0x38,
                     unaff_x29 + -0xc);
        if (0 < *(int *)(unaff_x29 + -0xc)) {
          memcpy(unaff_x26,unaff_x23,unaff_x25);
          memcpy(*(void **)(unaff_x29 + -0x50),unaff_x26,unaff_x25);
          **(undefined4 **)(unaff_x29 + -0x48) = (int)unaff_x28;
        }
      } while ((*(long *)(unaff_x29 + -0x58) == 0) || (unaff_x28 != **(uint **)(unaff_x29 + -0x48)))
      ;
      lVar5 = *(long *)(unaff_x24 + 0x18);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      if (*(uint *)(lVar5 + 0x18) <= unaff_x28) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      param_2 = *(long **)(lVar5 + unaff_x28 * 8 + 0x20);
    } while (param_2 == (long *)0x0);
    in_x9 = &Method_Unity_VisualScripting_BinaryOperatorHandler_Handle<sbyte,_sbyte>__;
    param_1 = *param_2;
  } while( true );
}


