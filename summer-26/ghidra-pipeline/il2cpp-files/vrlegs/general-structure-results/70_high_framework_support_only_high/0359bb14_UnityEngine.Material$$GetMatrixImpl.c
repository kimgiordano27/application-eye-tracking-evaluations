/*
FUNCTION_NAME: UnityEngine.Material$$GetMatrixImpl
ENTRY_POINT: 0359bb14
PROGRAM: vrlegs-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_8;ui_or_gameplay_sink_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


long UnityEngine_Material__GetMatrixImpl(void)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 uVar5;
  ulong uVar6;
  long lVar7;
  int *unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  undefined4 unaff_w22;
  long unaff_x23;
  undefined8 uVar8;
  long *unaff_x25;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  
  *(undefined1 *)(unaff_x23 + 0xbf) = 1;
  if (*(int *)(*unaff_x25 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar6 = FUN_036d35a8();
  if ((uVar6 & 1) != 0) goto LAB_0359bb40;
  if (unaff_x20 != 0) {
    iVar4 = FUN_0359b3f8();
    *unaff_x19 = iVar4;
    puVar3 = OVRPlugin_Sizei_TypeInfo;
    if (iVar4 != -1) {
      return unaff_x20;
    }
    if (**(long **)(*(long *)OVRPlugin_Sizei_TypeInfo + 0xb8) == 0) {
      uVar8 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cc8ba8);
      FUN_021e44d8(uVar8,*(undefined8 *)PTR_DAT_03cc8bb0);
      **(undefined8 **)(*(long *)puVar3 + 0xb8) = uVar8;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                (*(undefined8 *)(*(long *)puVar3 + 0xb8),uVar8);
    }
    else {
      FUN_021e4d64(**(long **)(*(long *)OVRPlugin_Sizei_TypeInfo + 0xb8),
                   *(undefined8 *)PTR_DAT_03ccbbf8);
    }
    uVar5 = FUN_0355ea04();
    puVar2 = PTR_DAT_03cc8e90;
    if (**(long **)(*(long *)puVar3 + 0xb8) != 0) {
      uStack0000000000000008 = uVar5;
      FUN_021e5f08(**(long **)(*(long *)puVar3 + 0xb8),&stack0x00000008,
                   *(undefined8 *)PTR_DAT_03cc8e90);
      if ((unaff_x21 & 1) != 0) {
        lVar7 = *(long *)(unaff_x20 + 0xd8);
        if (((lVar7 != 0) && (0 < *(int *)(lVar7 + 0x18))) &&
           (lVar7 = FUN_0359bdc0(lVar7,unaff_w22,1), *unaff_x19 != -1)) {
          return lVar7;
        }
        lVar7 = FUN_03597474();
        if (lVar7 == 0) goto LAB_0359bdbc;
        uVar8 = *(undefined8 *)(lVar7 + 0x68);
        if (*(int *)(*unaff_x25 + 0xe0) == 0) {
          thunk_FUN_01a58e78(*unaff_x25);
        }
        uVar6 = FUN_036cee6c(uVar8,0,0);
        if ((uVar6 & 1) != 0) {
          lVar7 = FUN_03597474();
          if (lVar7 == 0) goto LAB_0359bdbc;
          lVar7 = FUN_0359bf6c(*(undefined8 *)(lVar7 + 0x68),unaff_w22,1);
          if (*unaff_x19 != -1) {
            return lVar7;
          }
        }
      }
      if (**(long **)(*(long *)puVar3 + 0xb8) != 0) {
        FUN_021e4d64(**(long **)(*(long *)puVar3 + 0xb8),*(undefined8 *)PTR_DAT_03ccbbf8);
        lVar7 = FUN_03597474();
        if (lVar7 != 0) {
          uVar1 = *(undefined4 *)(lVar7 + 0x7c);
          iVar4 = FUN_0359b484();
          *unaff_x19 = iVar4;
          if (iVar4 != -1) {
            return unaff_x20;
          }
          if (**(long **)(*(long *)puVar3 + 0xb8) != 0) {
            uStack000000000000000c = uVar5;
            FUN_021e5f08(**(long **)(*(long *)puVar3 + 0xb8),(long)&stack0x00000008 + 4,
                         *(undefined8 *)puVar2);
            if ((unaff_x21 & 1) != 0) {
              lVar7 = *(long *)(unaff_x20 + 0xd8);
              if (((lVar7 != 0) && (0 < *(int *)(lVar7 + 0x18))) &&
                 (lVar7 = FUN_0359b828(lVar7,uVar1,1), *unaff_x19 != -1)) {
                return lVar7;
              }
              lVar7 = FUN_03597474();
              if (lVar7 == 0) goto LAB_0359bdbc;
              uVar8 = *(undefined8 *)(lVar7 + 0x68);
              if (*(int *)(*unaff_x25 + 0xe0) == 0) {
                thunk_FUN_01a58e78(*unaff_x25);
              }
              uVar6 = FUN_036cee6c(uVar8,0,0);
              if ((uVar6 & 1) != 0) {
                lVar7 = FUN_03597474();
                if (lVar7 == 0) goto LAB_0359bdbc;
                lVar7 = FUN_0359b9d4(*(undefined8 *)(lVar7 + 0x68),uVar1,1);
                if (*unaff_x19 != -1) {
                  return lVar7;
                }
              }
            }
LAB_0359bb40:
            *unaff_x19 = -1;
            return 0;
          }
        }
      }
    }
  }
LAB_0359bdbc:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


