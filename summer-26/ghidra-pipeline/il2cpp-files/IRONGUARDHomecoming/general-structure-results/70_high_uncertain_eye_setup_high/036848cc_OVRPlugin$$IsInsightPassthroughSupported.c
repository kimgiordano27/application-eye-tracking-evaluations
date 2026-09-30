/*
FUNCTION_NAME: OVRPlugin$$IsInsightPassthroughSupported
ENTRY_POINT: 036848cc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_10;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__IsInsightPassthroughSupported(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x19;
  long lVar9;
  int iVar10;
  long *plVar11;
  long *unaff_x22;
  long *plVar12;
  float fVar13;
  undefined4 uStack0000000000000000;
  undefined4 uStack0000000000000004;
  undefined4 in_stack_00000008;
  
  plVar11 = *(long **)(unaff_x19 + 0x68);
  if (plVar11 != (long *)0x0) {
    lVar6 = *plVar11;
    lVar9 = *(long *)(unaff_x19 + 0x28);
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x22) {
          puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_03684924;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(plVar11,*unaff_x22,0);
LAB_03684924:
    uVar3 = (*(code *)*puVar5)(plVar11,puVar5[1]);
    if (lVar9 != 0) {
      FUN_0404ad48(lVar9,uVar3,0);
      *(undefined1 *)(unaff_x19 + 0x80) = 1;
      puVar1 = Method_UnityEngine_UIElements_PanelChangedEventBase<DetachFromPanelEvent>_GetPooled__
      ;
      if (*(long *)(unaff_x19 + 0x28) != 0) {
        fVar13 = (float)FUN_0404ab6c(*(long *)(unaff_x19 + 0x28),0);
        if (**(float **)(*(long *)puVar1 + 0xb8) < ABS(fVar13 - *(float *)(unaff_x19 + 0x50))) {
          if (*(long *)(unaff_x19 + 0x28) == 0) goto LAB_03684b40;
          FUN_0404aba8(*(float *)(unaff_x19 + 0x50),*(long *)(unaff_x19 + 0x28),0);
          if (*(long *)(unaff_x19 + 0x28) == 0) goto LAB_03684b40;
          FUN_0404abf4(*(undefined4 *)(unaff_x19 + 0x50),*(long *)(unaff_x19 + 0x28),0);
        }
        plVar11 = *(long **)(unaff_x19 + 0x68);
        if (plVar11 != (long *)0x0) {
          lVar6 = *plVar11;
          uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar7 != 0) {
            piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == *unaff_x22) {
                puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
                goto LAB_036849fc;
              }
              uVar7 = uVar7 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar7 != 0);
          }
          puVar5 = (undefined8 *)FUN_01ecb238(plVar11,*unaff_x22,0);
LAB_036849fc:
          iVar4 = (*(code *)*puVar5)(plVar11,puVar5[1]);
          puVar2 = Method_OVRControllerTest_<>c_<Start>b__4_0__;
          puVar1 = 
          Method_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_<>c_<Render>b__11_0__;
          if (0 < iVar4) {
            iVar10 = 0;
            do {
              plVar11 = *(long **)(unaff_x19 + 0x68);
              if (plVar11 == (long *)0x0) goto LAB_03684b40;
              lVar6 = *plVar11;
              plVar12 = *(long **)(unaff_x19 + 0x58);
              uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
              if (uVar7 != 0) {
                piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
                    puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
                    goto LAB_03684a80;
                  }
                  uVar7 = uVar7 - 1;
                  piVar8 = piVar8 + 4;
                } while (uVar7 != 0);
              }
              puVar5 = (undefined8 *)FUN_01ecb238(plVar11,*(long *)puVar2,0);
LAB_03684a80:
              uVar3 = (*(code *)*puVar5)(plVar11,iVar10,puVar5[1]);
              if (plVar12 == (long *)0x0) goto LAB_03684b40;
              lVar6 = *plVar12;
              uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
              if (uVar7 != 0) {
                piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
                    puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 9) * 0x10 + 0x138);
                    goto LAB_03684ae8;
                  }
                  uVar7 = uVar7 - 1;
                  piVar8 = piVar8 + 4;
                } while (uVar7 != 0);
              }
              puVar5 = (undefined8 *)FUN_01ecb238(plVar12,*(long *)puVar1,9);
LAB_03684ae8:
              uVar7 = (*(code *)*puVar5)(plVar12,uVar3);
              if ((uVar7 & 1) != 0) {
                if (*(long *)(unaff_x19 + 0x28) == 0) goto LAB_03684b40;
                FUN_0404ad8c(uStack0000000000000000,uStack0000000000000004,in_stack_00000008,
                             *(long *)(unaff_x19 + 0x28),iVar10,0);
              }
              iVar10 = iVar10 + 1;
            } while (iVar10 != iVar4);
          }
          return;
        }
      }
    }
  }
LAB_03684b40:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


