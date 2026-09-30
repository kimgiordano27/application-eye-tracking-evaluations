/*
FUNCTION_NAME: UnityEngine.Rendering.DebugUI.EnumField<__Il2CppFullySharedGenericType>$$get_enumValues
ENTRY_POINT: 020af470
PROGRAM: vrlegs-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_7;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_6
*/


/* WARNING: Removing unreachable block (ram,0x020af708) */
/* WARNING: Removing unreachable block (ram,0x020af5e4) */
/* WARNING: Removing unreachable block (ram,0x020af830) */
/* WARNING: Removing unreachable block (ram,0x020af64c) */
/* WARNING: Removing unreachable block (ram,0x020af828) */

void UnityEngine_Rendering_DebugUI_EnumField<__Il2CppFullySharedGenericType>__get_enumValues
               (int param_1)

{
  bool in_ZR;
  int iVar1;
  int in_w8;
  long unaff_x19;
  long unaff_x20;
  int unaff_w21;
  long unaff_x23;
  int iVar2;
  long lVar3;
  long *unaff_x26;
  undefined8 uVar4;
  long lVar5;
  int iVar6;
  undefined8 uVar7;
  long unaff_x29;
  
  if (!in_ZR) {
    if (*(int *)(*unaff_x26 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    in_w8 = -0x80000000;
    if ((float)(int)((float)unaff_w21 / (float)param_1) != INFINITY) {
      in_w8 = (int)((float)unaff_w21 / (float)param_1);
    }
  }
  iVar6 = unaff_w21 + -1;
  if (0 < unaff_w21) {
    iVar2 = 0;
    uVar7 = 0;
    *(undefined8 *)(unaff_x29 + -0x40) = 0;
    *(int *)(unaff_x29 + -0x38) = in_w8 + -1;
    *(int *)(unaff_x29 + -0x44) = iVar6;
    do {
      if (*(int *)(*unaff_x26 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      iVar1 = FUN_0276c214(*(int *)(unaff_x29 + -0x38) + iVar2,iVar6,0);
      if (iVar1 == iVar6) {
        if (iVar2 < unaff_w21) {
          *(undefined8 *)(unaff_x29 + -0x30) = uVar7;
          do {
            FUN_01f66c74();
            if (unaff_x23 == 0) goto LAB_020af824;
            *(int *)(unaff_x29 + -0x20) = unaff_w21;
            *(int *)(unaff_x29 + -0x1c) = iVar2;
            (**(code **)(unaff_x23 + 0x18))(*(undefined8 *)(unaff_x23 + 0x40));
            iVar2 = iVar2 + 1;
          } while (iVar2 < unaff_w21);
          uVar7 = *(undefined8 *)(unaff_x29 + -0x30);
        }
      }
      else {
        uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
        *(int *)(unaff_x29 + -0x34) = iVar1;
        *(undefined1 *)(unaff_x29 + -0x24) = 0;
        FUN_027e0bd8(uVar4,unaff_x29 + -0x24,0);
        if (*(long *)(unaff_x20 + 0x10) == 0) {
          *(undefined8 *)(unaff_x29 + -0x30) = uVar7;
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        FUN_0207ee14(*(long *)(unaff_x20 + 0x10),unaff_x29 + -0x18,*(undefined8 *)PTR_DAT_03cda250);
        *(undefined8 *)(unaff_x29 + -0x30) = *(undefined8 *)(unaff_x29 + -0x18);
        if (*(char *)(unaff_x29 + -0x24) != '\0') {
          OVRManager_<>c__<InitOVRManager>b__424_0(uVar4,0);
        }
        uVar7 = *(undefined8 *)(unaff_x20 + 0x18);
        *(undefined1 *)(unaff_x29 + -0x24) = 0;
        FUN_027e0bd8(uVar7,unaff_x29 + -0x24,0);
        if (*(long *)(unaff_x20 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        FUN_0207ee14(*(long *)(unaff_x20 + 0x18),unaff_x29 + -0x10,
                     *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xa8));
        *(undefined8 *)(unaff_x29 + -0x40) = *(undefined8 *)(unaff_x29 + -0x10);
        if (*(char *)(unaff_x29 + -0x24) != '\0') {
          OVRManager_<>c__<InitOVRManager>b__424_0(uVar7,0);
        }
        lVar5 = *(long *)(unaff_x29 + -0x40);
        if (lVar5 == 0) {
LAB_020af824:
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        FUN_0221e108(lVar5,iVar2,*(undefined4 *)(unaff_x29 + -0x34));
        lVar3 = *(long *)(unaff_x29 + -0x30);
        if (lVar3 == 0) goto LAB_020af824;
        *(long *)(lVar3 + 0x18) = lVar5;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                  ((long *)(lVar3 + 0x18),lVar5);
        *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)(unaff_x20 + 0x38);
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
        FUN_020afa8c();
        uVar7 = *(undefined8 *)(unaff_x20 + 0x28);
        *(undefined1 *)(unaff_x29 + -0x24) = 0;
        FUN_027e0bd8(uVar7,unaff_x29 + -0x24,0);
        *(int *)(unaff_x20 + 0x20) = *(int *)(unaff_x20 + 0x20) + 1;
        if (*(char *)(unaff_x29 + -0x24) != '\0') {
          OVRManager_<>c__<InitOVRManager>b__424_0(uVar7,0);
        }
        uVar7 = *(undefined8 *)(unaff_x29 + -0x30);
        FUN_027e13f4(*(undefined8 *)(unaff_x20 + 0x30),uVar7,0);
        iVar6 = *(int *)(unaff_x29 + -0x44);
        iVar1 = *(int *)(unaff_x29 + -0x34);
        unaff_x26 = (long *)PTR_DAT_03cbdee0;
      }
      iVar2 = iVar1 + 1;
    } while (iVar2 < unaff_w21);
  }
  FUN_020af954();
  if (*(long *)(*(long *)(unaff_x29 + -0x50) + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


