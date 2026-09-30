/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs.MrukOnSceneAnchorUpdated$$BeginInvoke
ENTRY_POINT: 07713f50
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_12;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_MRUKNativeFuncs_MrukOnSceneAnchorUpdated__BeginInvoke(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long unaff_x19;
  long *unaff_x20;
  undefined8 uVar7;
  long lVar8;
  uint uVar9;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  long in_stack_00000030;
  
  puVar3 = PTR_DAT_09f309f0;
  puVar2 = PTR_DAT_09f309e8;
  puVar1 = PTR_DAT_09f1e538;
  if (unaff_x20 != (long *)0x0) {
    FUN_078bb7b4();
    lVar4 = thunk_FUN_0448520c(*(undefined8 *)puVar3);
    FUN_0567183c(lVar4,*(undefined8 *)puVar2);
    puVar2 = PTR_DAT_09f309d8;
    lVar6 = *(long *)(unaff_x19 + 0x20);
    if (lVar6 == 0) {
LAB_07714044:
      puVar3 = PTR_DAT_09f309c8;
      puVar2 = PTR_DAT_09f309c0;
      if (lVar4 != 0) {
        System_Array_InternalEnumerator<KeyValuePair<KeyValuePair<object,_object>,_object>>__get_Current
                  (&stack0x00000008,lVar4,*(undefined8 *)PTR_DAT_09f309e0);
        in_stack_00000028 = in_stack_00000010;
        in_stack_00000020 = in_stack_00000008;
        in_stack_00000030 = in_stack_00000018;
        while (uVar5 = FUN_0768c8a4(&stack0x00000020,*(undefined8 *)puVar3),
              lVar4 = in_stack_00000030, (uVar5 & 1) != 0) {
          lVar6 = FUN_078bb7b4();
          if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          uVar7 = thunk_FUN_0952ff6c(lVar4,0);
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44(uVar7,uVar7);
          }
          lVar4 = FUN_078bb7b4(lVar6,uVar7,0);
          if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          FUN_078c333c(lVar4,0);
        }
        FUN_0768c8a0(&stack0x00000020,*(undefined8 *)puVar2);
        FUN_078bb7b4();
        lVar4 = *(long *)(unaff_x19 + 0x20);
        if (lVar4 == 0) {
LAB_077141cc:
          (**(code **)(*unaff_x20 + 0x168))();
          return;
        }
        lVar6 = 4;
        do {
          uVar9 = (int)lVar6 - 4;
          if ((int)*(uint *)(lVar4 + 0x18) <= (int)uVar9) goto LAB_077141cc;
          if (*(uint *)(lVar4 + 0x18) <= uVar9) goto LAB_077141f8;
          lVar4 = *(long *)(lVar4 + lVar6 * 8);
          if (lVar4 == 0) break;
          uVar7 = *(undefined8 *)(lVar4 + 0x10);
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_044a54b4();
          }
          uVar5 = FUN_09531730(uVar7,0,0);
          if ((uVar5 & 1) != 0) {
            lVar4 = FUN_078bb7b4();
            lVar8 = *(long *)(unaff_x19 + 0x20);
            if (lVar8 == 0) break;
            if (*(uint *)(lVar8 + 0x18) <= uVar9) {
LAB_077141f8:
                    /* WARNING: Subroutine does not return */
              FUN_04447e4c();
            }
            lVar8 = *(long *)(lVar8 + lVar6 * 8);
            if ((((lVar8 == 0) || (lVar8 = *(long *)(lVar8 + 0x10), lVar8 == 0)) ||
                (uVar7 = thunk_FUN_0952ff6c(lVar8,0), lVar4 == 0)) ||
               (lVar4 = FUN_078bb7b4(lVar4,uVar7,0), lVar4 == 0)) break;
            FUN_078c333c(lVar4,0);
          }
          lVar4 = *(long *)(unaff_x19 + 0x20);
          lVar6 = lVar6 + 1;
        } while (lVar4 != 0);
      }
    }
    else {
      lVar8 = 4;
      do {
        uVar9 = (int)lVar8 - 4;
        if ((int)*(uint *)(lVar6 + 0x18) <= (int)uVar9) goto LAB_07714044;
        if (*(uint *)(lVar6 + 0x18) <= uVar9) goto LAB_077141f8;
        lVar6 = *(long *)(lVar6 + lVar8 * 8);
        if (lVar6 == 0) break;
        uVar7 = *(undefined8 *)(lVar6 + 0x10);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        uVar5 = FUN_09531730(uVar7,0,0);
        if ((uVar5 & 1) != 0) {
          lVar6 = *(long *)(unaff_x19 + 0x20);
          if (lVar6 == 0) break;
          if (*(uint *)(lVar6 + 0x18) <= uVar9) goto LAB_077141f8;
          lVar6 = *(long *)(lVar6 + lVar8 * 8);
          if (((lVar6 == 0) || (lVar6 = *(long *)(lVar6 + 0x10), lVar6 == 0)) ||
             (uVar7 = FUN_094e2354(lVar6,0), lVar4 == 0)) break;
          FUN_05672a08(lVar4,uVar7,*(undefined8 *)puVar2);
        }
        lVar6 = *(long *)(unaff_x19 + 0x20);
        lVar8 = lVar8 + 1;
      } while (lVar6 != 0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


