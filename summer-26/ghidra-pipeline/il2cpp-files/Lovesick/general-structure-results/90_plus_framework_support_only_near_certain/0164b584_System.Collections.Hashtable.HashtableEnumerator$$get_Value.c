/*
FUNCTION_NAME: System.Collections.Hashtable.HashtableEnumerator$$get_Value
ENTRY_POINT: 0164b584
PROGRAM: Lovesick-libil2cpp.so
SCORE: 99
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_14;paired_field_refs_with_eye_source;telemetry_or_network_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_2
*/


undefined8 System_Collections_Hashtable_HashtableEnumerator__get_Value(void)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 uVar5;
  int in_w8;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x19;
  int iVar9;
  long unaff_x21;
  long in_stack_00000010;
  long *in_stack_00000018;
  
  if (in_w8 == 0) {
    *(undefined4 *)(unaff_x19 + 0x10) = 0xffffffff;
    *(undefined4 *)(unaff_x19 + 0x30) = 0;
    if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    lVar6 = *(long *)(unaff_x21 + 0x18);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    if (0 < *(int *)(lVar6 + 0x18)) {
      FUN_0132138c(lVar6,0,&stack0x00000018,
                   *(undefined8 *)System_Predicate<Tween_TweenCurve>_TypeInfo);
      *(long **)(in_stack_00000010 + 0x18) = in_stack_00000018;
      *(undefined4 *)(in_stack_00000010 + 0x10) = 1;
      return 1;
    }
    if (*(long *)(unaff_x21 + 0x20) != 0) {
      iVar9 = 0;
      *(undefined4 *)(unaff_x19 + 0x30) = 0;
      do {
        if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        if (*(long *)(unaff_x21 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        iVar2 = FUN_01261074(*(long *)(unaff_x21 + 0x20),
                             *(undefined8 *)Method_Newtonsoft_Json_Utilities_StringUtils_Trim__);
        puVar1 = Method_OVRTask_FromRequest<OVRResult<ulong,_OVRPlugin_Result>>__;
        if (iVar2 <= iVar9) {
          return 0;
        }
        if (*(long *)(unaff_x21 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        FUN_01261120(*(long *)(unaff_x21 + 0x20),*(undefined4 *)(in_stack_00000010 + 0x30),
                     &stack0x00000018,
                     *(undefined8 *)Method_OVRTask_FromRequest<OVRResult<ulong,_OVRPlugin_Result>>__
                    );
        if (in_stack_00000018 != (long *)0x0) {
          if (*(long *)(unaff_x21 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          FUN_01261120(*(long *)(unaff_x21 + 0x20),*(undefined4 *)(in_stack_00000010 + 0x30),
                       &stack0x00000018,*(undefined8 *)puVar1);
          plVar4 = in_stack_00000018;
          if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          lVar6 = *in_stack_00000018;
          uVar7 = (ulong)*(ushort *)(lVar6 + 0x12a);
          if (uVar7 != 0) {
            piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) ==
                  *(long *)Method_System_Collections_Generic_List<DebugData>_GetEnumerator__) {
                puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
                goto LAB_0164b6f4;
              }
              uVar7 = uVar7 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar7 != 0);
          }
          puVar3 = (undefined8 *)
                   FUN_00d59724(in_stack_00000018,
                                *(long *)
                                 Method_System_Collections_Generic_List<DebugData>_GetEnumerator__,0
                               );
LAB_0164b6f4:
          plVar4 = (long *)(*(code *)*puVar3)(plVar4,puVar3[1]);
          *(long **)(in_stack_00000010 + 0x38) = plVar4;
          *(undefined4 *)(in_stack_00000010 + 0x10) = 0xfffffffd;
          if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          lVar6 = *plVar4;
          uVar7 = (ulong)*(ushort *)(lVar6 + 0x12a);
          if (uVar7 != 0) {
            piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) ==
                  *(long *)
                   Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__) {
                puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
                goto LAB_0164b76c;
              }
              uVar7 = uVar7 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar7 != 0);
          }
          puVar3 = (undefined8 *)
                   FUN_00d59724(plVar4,*(long *)
                                        Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__
                                ,0);
LAB_0164b76c:
          uVar7 = (*(code *)*puVar3)(plVar4,puVar3[1]);
          if ((uVar7 & 1) != 0) {
            plVar4 = *(long **)(in_stack_00000010 + 0x38);
            if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            lVar6 = *plVar4;
            uVar7 = (ulong)*(ushort *)(lVar6 + 0x12a);
            if (uVar7 == 0) goto LAB_0164b804;
            piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            goto LAB_0164b7ec;
          }
          FUN_0164b8ec();
          *(undefined8 *)(in_stack_00000010 + 0x38) = 0;
        }
        iVar9 = *(int *)(in_stack_00000010 + 0x30) + 1;
        *(int *)(in_stack_00000010 + 0x30) = iVar9;
      } while( true );
    }
  }
  return 0;
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
LAB_0164b7ec:
    if (*(long *)(piVar8 + -2) == *(long *)Method_System_Convert_ToInt64__) {
      puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_0164b820;
    }
  }
LAB_0164b804:
  puVar3 = (undefined8 *)FUN_00d59724(plVar4,*(long *)Method_System_Convert_ToInt64__,0);
LAB_0164b820:
  uVar5 = (*(code *)*puVar3)(plVar4,puVar3[1]);
  *(undefined8 *)(in_stack_00000010 + 0x18) = uVar5;
  *(undefined4 *)(in_stack_00000010 + 0x10) = 2;
  return 1;
}


