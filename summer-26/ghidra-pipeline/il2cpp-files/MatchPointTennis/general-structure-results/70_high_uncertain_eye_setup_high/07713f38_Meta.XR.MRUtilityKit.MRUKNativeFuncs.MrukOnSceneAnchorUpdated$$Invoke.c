/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs.MrukOnSceneAnchorUpdated$$Invoke
ENTRY_POINT: 07713f38
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


void Meta_XR_MRUtilityKit_MRUKNativeFuncs_MrukOnSceneAnchorUpdated__Invoke(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long unaff_x19;
  undefined8 uVar10;
  long lVar11;
  uint uVar12;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  undefined8 uStack0000000000000020;
  undefined8 uStack0000000000000028;
  long lStack0000000000000030;
  
  uStack0000000000000020 = 0;
  uStack0000000000000028 = 0;
  lStack0000000000000030 = 0;
  plVar6 = (long *)thunk_FUN_0448520c();
  FUN_078c1634(plVar6,0);
  puVar3 = PTR_DAT_09f309f0;
  puVar2 = PTR_DAT_09f309e8;
  puVar1 = PTR_DAT_09f1e538;
  if (plVar6 != (long *)0x0) {
    FUN_078bb7b4(plVar6,*(undefined8 *)PTR_DAT_09f30a00,0);
    lVar7 = thunk_FUN_0448520c(*(undefined8 *)puVar3);
    FUN_0567183c(lVar7,*(undefined8 *)puVar2);
    puVar2 = PTR_DAT_09f309d8;
    lVar9 = *(long *)(unaff_x19 + 0x20);
    if (lVar9 == 0) {
LAB_07714044:
      puVar5 = PTR_DAT_09f30a08;
      puVar4 = PTR_DAT_09f309f8;
      puVar3 = PTR_DAT_09f309c8;
      puVar2 = PTR_DAT_09f309c0;
      if (lVar7 != 0) {
        System_Array_InternalEnumerator<KeyValuePair<KeyValuePair<object,_object>,_object>>__get_Current
                  (&stack0x00000008,lVar7,*(undefined8 *)PTR_DAT_09f309e0);
        uStack0000000000000028 = in_stack_00000010;
        uStack0000000000000020 = in_stack_00000008;
        lStack0000000000000030 = in_stack_00000018;
        while (uVar8 = FUN_0768c8a4(&stack0x00000020,*(undefined8 *)puVar3),
              lVar7 = lStack0000000000000030, (uVar8 & 1) != 0) {
          lVar9 = FUN_078bb7b4(plVar6,*(undefined8 *)puVar5,0);
          if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          uVar10 = thunk_FUN_0952ff6c(lVar7,0);
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44(uVar10,uVar10);
          }
          lVar7 = FUN_078bb7b4(lVar9,uVar10,0);
          if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          FUN_078c333c(lVar7,0);
        }
        FUN_0768c8a0(&stack0x00000020,*(undefined8 *)puVar2);
        FUN_078bb7b4(plVar6,*(undefined8 *)puVar4,0);
        lVar7 = *(long *)(unaff_x19 + 0x20);
        if (lVar7 == 0) {
LAB_077141cc:
          (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
          return;
        }
        lVar9 = 4;
        do {
          uVar12 = (int)lVar9 - 4;
          if ((int)*(uint *)(lVar7 + 0x18) <= (int)uVar12) goto LAB_077141cc;
          if (*(uint *)(lVar7 + 0x18) <= uVar12) goto LAB_077141f8;
          lVar7 = *(long *)(lVar7 + lVar9 * 8);
          if (lVar7 == 0) break;
          uVar10 = *(undefined8 *)(lVar7 + 0x10);
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_044a54b4();
          }
          uVar8 = FUN_09531730(uVar10,0,0);
          if ((uVar8 & 1) != 0) {
            lVar7 = FUN_078bb7b4(plVar6,*(undefined8 *)puVar5,0);
            lVar11 = *(long *)(unaff_x19 + 0x20);
            if (lVar11 == 0) break;
            if (*(uint *)(lVar11 + 0x18) <= uVar12) {
LAB_077141f8:
                    /* WARNING: Subroutine does not return */
              FUN_04447e4c();
            }
            lVar11 = *(long *)(lVar11 + lVar9 * 8);
            if ((((lVar11 == 0) || (lVar11 = *(long *)(lVar11 + 0x10), lVar11 == 0)) ||
                (uVar10 = thunk_FUN_0952ff6c(lVar11,0), lVar7 == 0)) ||
               (lVar7 = FUN_078bb7b4(lVar7,uVar10,0), lVar7 == 0)) break;
            FUN_078c333c(lVar7,0);
          }
          lVar7 = *(long *)(unaff_x19 + 0x20);
          lVar9 = lVar9 + 1;
        } while (lVar7 != 0);
      }
    }
    else {
      lVar11 = 4;
      do {
        uVar12 = (int)lVar11 - 4;
        if ((int)*(uint *)(lVar9 + 0x18) <= (int)uVar12) goto LAB_07714044;
        if (*(uint *)(lVar9 + 0x18) <= uVar12) goto LAB_077141f8;
        lVar9 = *(long *)(lVar9 + lVar11 * 8);
        if (lVar9 == 0) break;
        uVar10 = *(undefined8 *)(lVar9 + 0x10);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        uVar8 = FUN_09531730(uVar10,0,0);
        if ((uVar8 & 1) != 0) {
          lVar9 = *(long *)(unaff_x19 + 0x20);
          if (lVar9 == 0) break;
          if (*(uint *)(lVar9 + 0x18) <= uVar12) goto LAB_077141f8;
          lVar9 = *(long *)(lVar9 + lVar11 * 8);
          if (((lVar9 == 0) || (lVar9 = *(long *)(lVar9 + 0x10), lVar9 == 0)) ||
             (uVar10 = FUN_094e2354(lVar9,0), lVar7 == 0)) break;
          FUN_05672a08(lVar7,uVar10,*(undefined8 *)puVar2);
        }
        lVar9 = *(long *)(unaff_x19 + 0x20);
        lVar11 = lVar11 + 1;
      } while (lVar9 != 0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


