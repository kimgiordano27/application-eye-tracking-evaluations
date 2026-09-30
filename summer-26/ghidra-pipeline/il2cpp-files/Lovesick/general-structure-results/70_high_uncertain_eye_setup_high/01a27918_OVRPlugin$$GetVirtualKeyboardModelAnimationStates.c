/*
FUNCTION_NAME: OVRPlugin$$GetVirtualKeyboardModelAnimationStates
ENTRY_POINT: 01a27918
PROGRAM: Lovesick-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetVirtualKeyboardModelAnimationStates
               (ulong param_1,undefined1 param_2 [16],float param_3,float param_4)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x19;
  int unaff_w20;
  long *unaff_x22;
  long *plVar6;
  long unaff_x23;
  float fVar7;
  undefined8 in_stack_00000020;
  float in_stack_00000028;
  float fStack0000000000000030;
  float fStack0000000000000034;
  float in_stack_00000038;
  
  if ((param_1 & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_8537);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List_Enumerator<Tween>_get_Current__);
    thunk_FUN_00d48444(StringLiteral_6259);
    *(undefined1 *)(unaff_x23 + 0xb0a) = 1;
  }
  in_stack_00000038 = 0.0;
  _fStack0000000000000030 = 0;
  in_stack_00000028 = 0.0;
  in_stack_00000020 = 0;
  if (unaff_x22 != (long *)0x0) {
    lVar3 = *unaff_x22;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12a);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) ==
            *(long *)Method_System_Collections_Generic_List_Enumerator<Tween>_get_Current__) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_01a279bc;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_00d59724();
LAB_01a279bc:
    iVar1 = (*(code *)*puVar2)();
    if (0 < iVar1) {
      if (*(long *)(unaff_x19 + 0x18) == 0) goto LAB_01a27b48;
      FUN_01a26974();
      if (DAT_03775377 == '\0') {
        thunk_FUN_00d48444(
                          Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                          );
        DAT_03775377 = '\x01';
      }
      lVar3 = *(long *)(*(long *)
                         Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                       + 0xb8);
      in_stack_00000028 = *(float *)(lVar3 + 0x50);
      fStack0000000000000030 = *(float *)(lVar3 + 0x48);
      fStack0000000000000034 = *(float *)(lVar3 + 0x4c);
      in_stack_00000020 = *(undefined8 *)(lVar3 + 0x48);
      plVar6 = *(long **)(unaff_x19 + 0x20);
      in_stack_00000038 = in_stack_00000028;
      if (plVar6 != (long *)0x0) {
        lVar3 = *plVar6;
        uVar4 = (ulong)*(ushort *)(lVar3 + 0x12a);
        if (uVar4 != 0) {
          piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar5 + -2) == *(long *)StringLiteral_8537) {
              puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
              goto LAB_01a27a84;
            }
            uVar4 = uVar4 - 1;
            piVar5 = piVar5 + 4;
          } while (uVar4 != 0);
        }
        puVar2 = (undefined8 *)FUN_00d59724(plVar6,*(long *)StringLiteral_8537,0);
LAB_01a27a84:
        uVar4 = (*(code *)*puVar2)(plVar6);
        if ((uVar4 & 1) != 0) {
          if (*(int *)(*(long *)StringLiteral_6259 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          fStack0000000000000030 = (float)FUN_02666e8c();
          fStack0000000000000030 = -fStack0000000000000030;
          param_3 = -param_3;
          param_4 = -param_4;
          in_stack_00000038 = param_4;
          fStack0000000000000034 = param_3;
          fVar7 = (float)FUN_02666e8c();
          in_stack_00000028 = -param_4;
          in_stack_00000020 = CONCAT44(-param_3,-fVar7);
          if (unaff_w20 == 1) {
            fStack0000000000000030 = -fStack0000000000000030;
            fStack0000000000000034 = -fStack0000000000000034;
            in_stack_00000038 = -in_stack_00000038;
          }
        }
      }
      uVar4 = (ulong)*(uint *)(unaff_x19 + 0x10);
      if (*(uint *)(unaff_x19 + 0x10) == 0xffffffff) {
        uVar4 = FUN_01a26ba8();
        *(int *)(unaff_x19 + 0x10) = (int)uVar4;
      }
      FUN_01a26cd0(uVar4,*(undefined8 *)(unaff_x19 + 0x18),&stack0x00000030,&stack0x00000020);
    }
    return;
  }
LAB_01a27b48:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


