/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs.MrukOnSceneAnchorUpdated$$EndInvoke
ENTRY_POINT: 07714018
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_14;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_MRUKNativeFuncs_MrukOnSceneAnchorUpdated__EndInvoke(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  undefined8 uVar7;
  long *unaff_x23;
  long unaff_x25;
  uint uVar8;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  long in_stack_00000030;
  
code_r0x07714018:
  FUN_094e2354(param_1,0);
  if (unaff_x21 != 0) {
    FUN_05672a08();
    do {
      puVar2 = PTR_DAT_09f309c8;
      puVar1 = PTR_DAT_09f309c0;
      lVar5 = *(long *)(unaff_x19 + 0x20);
      unaff_x25 = unaff_x25 + 1;
      if (lVar5 == 0) goto LAB_077141c8;
      uVar8 = (int)unaff_x25 - 4;
      if ((int)*(uint *)(lVar5 + 0x18) <= (int)uVar8) {
        if (unaff_x21 != 0) {
          System_Array_InternalEnumerator<KeyValuePair<KeyValuePair<object,_object>,_object>>__get_Current
                    (&stack0x00000008);
          in_stack_00000028 = in_stack_00000010;
          in_stack_00000020 = in_stack_00000008;
          in_stack_00000030 = in_stack_00000018;
          while (uVar3 = FUN_0768c8a4(&stack0x00000020,*(undefined8 *)puVar2),
                lVar5 = in_stack_00000030, (uVar3 & 1) != 0) {
            lVar4 = FUN_078bb7b4();
            if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04447e44();
            }
            uVar7 = thunk_FUN_0952ff6c(lVar5,0);
            if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04447e44(uVar7,uVar7);
            }
            lVar5 = FUN_078bb7b4(lVar4,uVar7,0);
            if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04447e44();
            }
            FUN_078c333c(lVar5,0);
          }
          FUN_0768c8a0(&stack0x00000020,*(undefined8 *)puVar1);
          FUN_078bb7b4();
          lVar5 = *(long *)(unaff_x19 + 0x20);
          if (lVar5 == 0) {
LAB_077141cc:
            (**(code **)(*unaff_x20 + 0x168))();
            return;
          }
          lVar4 = 4;
          while( true ) {
            uVar8 = (int)lVar4 - 4;
            if ((int)*(uint *)(lVar5 + 0x18) <= (int)uVar8) goto LAB_077141cc;
            if (*(uint *)(lVar5 + 0x18) <= uVar8) goto LAB_077141f8;
            lVar5 = *(long *)(lVar5 + lVar4 * 8);
            if (lVar5 == 0) break;
            uVar7 = *(undefined8 *)(lVar5 + 0x10);
            if (*(int *)(*unaff_x23 + 0xe4) == 0) {
              thunk_FUN_044a54b4();
            }
            uVar3 = FUN_09531730(uVar7,0,0);
            if ((uVar3 & 1) != 0) {
              lVar5 = FUN_078bb7b4();
              lVar6 = *(long *)(unaff_x19 + 0x20);
              if (lVar6 == 0) break;
              if (*(uint *)(lVar6 + 0x18) <= uVar8) goto LAB_077141f8;
              lVar6 = *(long *)(lVar6 + lVar4 * 8);
              if ((((lVar6 == 0) || (lVar6 = *(long *)(lVar6 + 0x10), lVar6 == 0)) ||
                  (uVar7 = thunk_FUN_0952ff6c(lVar6,0), lVar5 == 0)) ||
                 (lVar5 = FUN_078bb7b4(lVar5,uVar7,0), lVar5 == 0)) break;
              FUN_078c333c(lVar5,0);
            }
            lVar5 = *(long *)(unaff_x19 + 0x20);
            lVar4 = lVar4 + 1;
            if (lVar5 == 0) break;
          }
        }
        goto LAB_077141c8;
      }
      if (*(uint *)(lVar5 + 0x18) <= uVar8) goto LAB_077141f8;
      lVar5 = *(long *)(lVar5 + unaff_x25 * 8);
      if (lVar5 == 0) goto LAB_077141c8;
      uVar7 = *(undefined8 *)(lVar5 + 0x10);
      if (*(int *)(*unaff_x23 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      uVar3 = FUN_09531730(uVar7,0,0);
    } while ((uVar3 & 1) == 0);
    lVar5 = *(long *)(unaff_x19 + 0x20);
    if (lVar5 != 0) goto code_r0x07713ffc;
  }
LAB_077141c8:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
code_r0x07713ffc:
  if (*(uint *)(lVar5 + 0x18) <= uVar8) {
LAB_077141f8:
                    /* WARNING: Subroutine does not return */
    FUN_04447e4c();
  }
  lVar5 = *(long *)(lVar5 + unaff_x25 * 8);
  if ((lVar5 == 0) || (param_1 = *(long *)(lVar5 + 0x10), param_1 == 0)) goto LAB_077141c8;
  goto code_r0x07714018;
}


