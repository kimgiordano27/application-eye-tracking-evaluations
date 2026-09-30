/*
FUNCTION_NAME: System.ThrowHelper$$IfNullAndNullsAreIllegalThenThrow<OVRPlugin.Qpl.Annotation.Builder.Entry>
ENTRY_POINT: 03e7a350
PROGRAM: vandalizer-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;ray_or_cast_sink_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03e7a3b0) */
/* WARNING: Removing unreachable block (ram,0x03e7a4fc) */

void System_ThrowHelper__IfNullAndNullsAreIllegalThenThrow<OVRPlugin_Qpl_Annotation_Builder_Entry>
               (long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  long in_x10;
  long unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  undefined8 unaff_x22;
  long unaff_x23;
  long unaff_x24;
  undefined8 uVar6;
  int iVar7;
  long *unaff_x28;
  long unaff_x29;
  
  do {
    if ((uint)in_x10 < *(uint *)(param_1 + 0x18)) {
      *(uint *)(unaff_x20 + 0x18) = (uint)in_x10 + 1;
      *(long *)(param_1 + in_x10 * 8 + 0x20) = param_3;
      thunk_FUN_0329bf60();
    }
    else {
      FUN_047af440();
    }
System_ThrowHelper__IfNullAndNullsAreIllegalThenThrow<PokeInteractor_SurfaceHitCache_HitInfo>:
    do {
      uVar2 = FUN_05a2e8e4(unaff_x29 + -0x20,*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x70));
      if ((uVar2 & 1) == 0) {
        FUN_05a2e8e0(unaff_x29 + -0x20,*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x78));
        iVar1 = FUN_06e6db64(unaff_x24,0);
        if (0 < iVar1) {
          iVar7 = 0;
          do {
            lVar4 = FUN_06e6e99c(unaff_x24,iVar7,0);
            if ((unaff_x21 & 1) == 0) {
              if ((lVar4 == 0) || (lVar3 = FUN_06e550fc(lVar4,0), lVar3 == 0)) goto LAB_03e7a4f8;
              uVar2 = FUN_06e59d08(lVar3,0);
              if ((uVar2 & 1) != 0) goto LAB_03e7a410;
            }
            else {
              if (lVar4 == 0) goto LAB_03e7a4f8;
LAB_03e7a410:
              puVar5 = *(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x80);
              uVar6 = *puVar5;
              *(undefined8 *)(unaff_x29 + -0x38) = unaff_x22;
              (*(code *)puVar5[2])(uVar6,puVar5,lVar4,unaff_x29 + -0x38);
              uVar2 = FUN_031f2344(*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x88));
              if ((uVar2 & 1) == 0) {
                lVar3 = *unaff_x28;
                if (*(int *)(lVar3 + 0xe4) == 0) {
                  Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
                  lVar3 = *unaff_x28;
                }
                if (**(long **)(lVar3 + 0xb8) == 0) goto LAB_03e7a4f8;
                FUN_04da481c(**(long **)(lVar3 + 0xb8),lVar4,*(undefined8 *)PTR_DAT_075d7850);
              }
            }
            iVar7 = iVar7 + 1;
          } while (iVar1 != iVar7);
        }
        lVar4 = *unaff_x28;
        if (*(int *)(lVar4 + 0xe4) == 0) {
          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
          lVar4 = *unaff_x28;
        }
        lVar3 = **(long **)(lVar4 + 0xb8);
        if (lVar3 != 0) {
          if (*(int *)(lVar3 + 0x20) < 1) {
            if (*(long *)(*(long *)(unaff_x29 + -0x40) + 0x28) == *(long *)(unaff_x29 + -8)) {
              return;
            }
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail();
          }
          if (*(int *)(lVar4 + 0xe4) == 0) {
            Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
            lVar3 = **(long **)(*unaff_x28 + 0xb8);
            if (lVar3 == 0) goto LAB_03e7a4f8;
          }
          unaff_x24 = FUN_04da49ac(lVar3,*(undefined8 *)PTR_DAT_075d7848);
          if (unaff_x23 != 0) {
            iVar1 = *(int *)(unaff_x23 + 0x18);
            *(undefined4 *)(unaff_x23 + 0x18) = 0;
            *(int *)(unaff_x23 + 0x1c) = *(int *)(unaff_x23 + 0x1c) + 1;
            if (0 < iVar1) {
              FUN_05e24380(*(undefined8 *)(unaff_x23 + 0x10),0,iVar1,0);
            }
            if (unaff_x24 != 0) {
              FUN_03d799d4(unaff_x24);
              FUN_047afec0(unaff_x29 + -0x38);
              *(undefined8 *)(unaff_x29 + -0x18) = *(undefined8 *)(unaff_x29 + -0x30);
              *(undefined8 *)(unaff_x29 + -0x20) = *(undefined8 *)(unaff_x29 + -0x38);
              *(undefined8 *)(unaff_x29 + -0x10) = *(undefined8 *)(unaff_x29 + -0x28);
              goto 
              System_ThrowHelper__IfNullAndNullsAreIllegalThenThrow<PokeInteractor_SurfaceHitCache_HitInfo>
              ;
            }
          }
        }
LAB_03e7a4f8:
                    /* WARNING: Subroutine does not return */
        FUN_031f2390();
      }
      uVar6 = *(undefined8 *)(unaff_x29 + -0x10);
      lVar4 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x60);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_0322bef4(lVar4);
      }
      param_3 = thunk_FUN_0322f04c(uVar6,lVar4);
    } while (param_3 == 0);
    param_1 = *(long *)(unaff_x20 + 0x10);
    *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_031f2390();
    }
    in_x10 = (long)*(int *)(unaff_x20 + 0x18);
  } while( true );
}


