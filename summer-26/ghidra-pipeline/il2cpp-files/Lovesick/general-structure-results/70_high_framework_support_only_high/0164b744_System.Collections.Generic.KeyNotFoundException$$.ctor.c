/*
FUNCTION_NAME: System.Collections.Generic.KeyNotFoundException$$.ctor
ENTRY_POINT: 0164b744
PROGRAM: Lovesick-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;telemetry_or_network_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_2
*/


undefined8
System_Collections_Generic_KeyNotFoundException___ctor(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong in_x9;
  int *piVar8;
  int *in_x10;
  long *plVar9;
  long *unaff_x20;
  long unaff_x21;
  long in_stack_00000010;
  long *in_stack_00000018;
  
code_r0x0164b744:
  in_x9 = in_x9 - 1;
  in_x10 = in_x10 + 4;
  if (in_x9 != 0) goto LAB_0164b738;
LAB_0164b750:
  puVar4 = (undefined8 *)FUN_00d59724(unaff_x20,param_3,0);
  do {
    uVar5 = (*(code *)*puVar4)(unaff_x20,puVar4[1]);
    if ((uVar5 & 1) != 0) {
      plVar9 = *(long **)(in_stack_00000010 + 0x38);
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      lVar7 = *plVar9;
      uVar5 = (ulong)*(ushort *)(lVar7 + 0x12a);
      if (uVar5 == 0) goto LAB_0164b804;
      piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      break;
    }
    FUN_0164b8ec();
    *(undefined8 *)(in_stack_00000010 + 0x38) = 0;
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
    plVar9 = in_stack_00000018;
    if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    lVar7 = *in_stack_00000018;
    uVar5 = (ulong)*(ushort *)(lVar7 + 0x12a);
    if (uVar5 != 0) {
      piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) ==
            *(long *)Method_System_Collections_Generic_List<DebugData>_GetEnumerator__) {
          puVar4 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_0164b6f4;
        }
        uVar5 = uVar5 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar5 != 0);
    }
    puVar4 = (undefined8 *)
             FUN_00d59724(in_stack_00000018,
                          *(long *)Method_System_Collections_Generic_List<DebugData>_GetEnumerator__
                          ,0);
LAB_0164b6f4:
    unaff_x20 = (long *)(*(code *)*puVar4)(plVar9,puVar4[1]);
    *(long **)(in_stack_00000010 + 0x38) = unaff_x20;
    *(undefined4 *)(in_stack_00000010 + 0x10) = 0xfffffffd;
    if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    param_1 = *unaff_x20;
    in_x9 = (ulong)*(ushort *)(param_1 + 0x12a);
    param_3 = *(long *)Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__;
    if (in_x9 == 0) goto LAB_0164b750;
    in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
LAB_0164b738:
    if (*(long *)(in_x10 + -2) != param_3) goto code_r0x0164b744;
    puVar4 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
  } while( true );
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar8 = piVar8 + 4;
    if (uVar5 == 0) break;
    if (*(long *)(piVar8 + -2) == *(long *)Method_System_Convert_ToInt64__) {
      puVar4 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_0164b820;
    }
  }
LAB_0164b804:
  puVar4 = (undefined8 *)FUN_00d59724(plVar9,*(long *)Method_System_Convert_ToInt64__,0);
LAB_0164b820:
  uVar6 = (*(code *)*puVar4)(plVar9,puVar4[1]);
  *(undefined8 *)(in_stack_00000010 + 0x18) = uVar6;
  *(undefined4 *)(in_stack_00000010 + 0x10) = 2;
  return 1;
}


