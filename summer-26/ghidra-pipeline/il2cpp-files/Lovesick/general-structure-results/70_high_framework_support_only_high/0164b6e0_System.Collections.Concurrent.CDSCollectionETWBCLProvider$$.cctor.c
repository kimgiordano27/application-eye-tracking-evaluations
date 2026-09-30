/*
FUNCTION_NAME: System.Collections.Concurrent.CDSCollectionETWBCLProvider$$.cctor
ENTRY_POINT: 0164b6e0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;telemetry_or_network_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_2
*/


undefined8 System_Collections_Concurrent_CDSCollectionETWBCLProvider___cctor(void)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long unaff_x21;
  long in_stack_00000010;
  long *in_stack_00000018;
  
  do {
    do {
      iVar1 = *(int *)(in_stack_00000010 + 0x30) + 1;
      *(int *)(in_stack_00000010 + 0x30) = iVar1;
      if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      if (*(long *)(unaff_x21 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      iVar3 = FUN_01261074(*(long *)(unaff_x21 + 0x20),
                           *(undefined8 *)Method_Newtonsoft_Json_Utilities_StringUtils_Trim__);
      puVar2 = Method_OVRTask_FromRequest<OVRResult<ulong,_OVRPlugin_Result>>__;
      if (iVar3 <= iVar1) {
        return 0;
      }
      if (*(long *)(unaff_x21 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_01261120(*(long *)(unaff_x21 + 0x20),*(undefined4 *)(in_stack_00000010 + 0x30),
                   &stack0x00000018,
                   *(undefined8 *)Method_OVRTask_FromRequest<OVRResult<ulong,_OVRPlugin_Result>>__);
    } while (in_stack_00000018 == (long *)0x0);
    if (*(long *)(unaff_x21 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_01261120(*(long *)(unaff_x21 + 0x20),*(undefined4 *)(in_stack_00000010 + 0x30),
                 &stack0x00000018,*(undefined8 *)puVar2);
    plVar5 = in_stack_00000018;
    if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    lVar7 = *in_stack_00000018;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12a);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) ==
            *(long *)Method_System_Collections_Generic_List<DebugData>_GetEnumerator__) {
          puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_0164b6f4;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)
             FUN_00d59724(in_stack_00000018,
                          *(long *)Method_System_Collections_Generic_List<DebugData>_GetEnumerator__
                          ,0);
LAB_0164b6f4:
    plVar5 = (long *)(*(code *)*puVar4)(plVar5,puVar4[1]);
    *(long **)(in_stack_00000010 + 0x38) = plVar5;
    *(undefined4 *)(in_stack_00000010 + 0x10) = 0xfffffffd;
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    lVar7 = *plVar5;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12a);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) ==
            *(long *)Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__) {
          puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_0164b76c;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)
             FUN_00d59724(plVar5,*(long *)
                                  Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__
                          ,0);
LAB_0164b76c:
    uVar8 = (*(code *)*puVar4)(plVar5,puVar4[1]);
    if ((uVar8 & 1) != 0) {
      plVar5 = *(long **)(in_stack_00000010 + 0x38);
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      lVar7 = *plVar5;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12a);
      if (uVar8 == 0) goto LAB_0164b804;
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      break;
    }
    FUN_0164b8ec();
    *(undefined8 *)(in_stack_00000010 + 0x38) = 0;
  } while( true );
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar9 = piVar9 + 4;
    if (uVar8 == 0) break;
    if (*(long *)(piVar9 + -2) == *(long *)Method_System_Convert_ToInt64__) {
      puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_0164b820;
    }
  }
LAB_0164b804:
  puVar4 = (undefined8 *)FUN_00d59724(plVar5,*(long *)Method_System_Convert_ToInt64__,0);
LAB_0164b820:
  uVar6 = (*(code *)*puVar4)(plVar5,puVar4[1]);
  *(undefined8 *)(in_stack_00000010 + 0x18) = uVar6;
  *(undefined4 *)(in_stack_00000010 + 0x10) = 2;
  return 1;
}


