/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.AnchorPrefabSpawnerUtilities$$AlignPrefabPivot
ENTRY_POINT: 0146886c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 104
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_13;paired_field_refs_with_eye_source;telemetry_or_network_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_AnchorPrefabSpawnerUtilities__AlignPrefabPivot
               (long param_1,undefined1 *param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long lVar5;
  ulong unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  long *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  float fVar6;
  float fVar7;
  float fVar8;
  ulong unaff_d8;
  ulong unaff_d9;
  ulong unaff_d10;
  float *in_stack_00000000;
  float *in_stack_00000008;
  long in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  long in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  long in_stack_00000068;
  
  while( true ) {
    lVar3 = *(long *)(param_1 + 0xb8);
    FUN_02687990(unaff_d8,unaff_d9,unaff_d10,*(undefined4 *)(lVar3 + 0xc),
                 *(undefined4 *)(lVar3 + 0x10),*(undefined4 *)(lVar3 + 0x14),param_2,0);
    lVar3 = *(long *)(unaff_x20 + 0x40);
    if (lVar3 == 0) break;
    lVar5 = 0;
    while( true ) {
      fVar8 = (float)unaff_d10;
      fVar7 = (float)unaff_d9;
      if ((int)*(uint *)(lVar3 + 0x18) <= (int)(uint)lVar5) break;
      if (*(long *)(unaff_x19 + 0x48) == 0) goto LAB_014689e4;
      if (*(uint *)(lVar3 + 0x18) <= (uint)lVar5) goto LAB_01468ad4;
      lVar4 = *(long *)(*(long *)(unaff_x19 + 0x48) + 0x18);
      if (lVar4 == 0) goto LAB_014689e4;
      uVar1 = *(uint *)(lVar3 + lVar5 * 4 + 0x20);
      if (*(uint *)(lVar4 + 0x18) <= uVar1) goto LAB_01468ad4;
      lVar3 = *(long *)(lVar4 + (long)(int)uVar1 * 8 + 0x20);
      if (((lVar3 == 0) || (lVar3 = *(long *)(lVar3 + 0x10), lVar3 == 0)) ||
         (lVar3 = *(long *)(lVar3 + 0x10), lVar3 == 0)) goto LAB_014689e4;
      FUN_010e58e8(lVar3,&stack0x00000030,*unaff_x28);
      lVar3 = in_stack_00000030;
      if (*(int *)(*unaff_x27 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar2 = FUN_02681b9c(lVar3,0,0);
      if ((uVar2 & 1) != 0) {
        if (lVar3 == 0) goto LAB_014689e4;
        FUN_02667cd8(&stack0x00000030,lVar3,0);
        in_stack_00000018 = in_stack_00000038;
        in_stack_00000010 = in_stack_00000030;
        in_stack_00000020 = in_stack_00000040;
        FUN_02687e74(&stack0x00000048,&stack0x00000010,0);
      }
      lVar3 = *(long *)(unaff_x20 + 0x40);
      lVar5 = lVar5 + 1;
      if (lVar3 == 0) goto LAB_014689e4;
    }
    lVar3 = *(long *)(unaff_x19 + 0x68);
    fVar6 = (float)FUN_02687a8c(&stack0x00000048,0);
    if (*(char *)(unaff_x21 + 0xe1b) == '\0') {
      thunk_FUN_00d48444();
      *(undefined1 *)(unaff_x21 + 0xe1b) = 1;
    }
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    if (lVar3 == 0) break;
    if (*(uint *)(lVar3 + 0x18) <= unaff_x23) {
LAB_01468ad4:
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    *(float *)(lVar3 + unaff_x23 * 4 + 0x20) = SQRT(fVar8 * fVar8 + fVar6 * fVar6 + fVar7 * fVar7);
    unaff_x23 = unaff_x23 + 1;
    if (*(long *)(unaff_x19 + 0x68) == 0) break;
    if ((long)*(int *)(*(long *)(unaff_x19 + 0x68) + 0x18) <= (long)unaff_x23) {
      if (in_stack_00000068 != 0) {
        (**(code **)(in_stack_00000068 + 0x18))
                  (0,*(undefined8 *)(in_stack_00000068 + 0x40),
                   *(undefined8 *)
                    Method_UnityEngine_InputSystem_InputRemoting_SerializeData<InputRemoting_NewLayoutMsg_Data>__
                   ,*(undefined8 *)(in_stack_00000068 + 0x28));
      }
      fVar7 = *in_stack_00000000;
      if (*in_stack_00000000 <= *in_stack_00000008) {
        if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_026610e4(*(undefined8 *)Polenter_Serialization_SharpSerializer_TypeInfo,0);
        *in_stack_00000008 = 1e-05;
        fVar7 = *in_stack_00000000;
        if (*in_stack_00000000 < 10.0) {
          *in_stack_00000000 = 10.0;
          fVar7 = 10.0;
        }
      }
      *(float *)(unaff_x19 + 0x58) = fVar7 + 1.0;
      *(float *)(unaff_x19 + 0x5c) = *in_stack_00000008 * DAT_028aa040;
      if (fVar7 + 1.0 < 2.0) {
        *(undefined4 *)(unaff_x19 + 0x58) = 0x40000000;
      }
      return;
    }
    if ((*(long *)(unaff_x19 + 0x60) == 0) ||
       (FUN_0132138c(*(long *)(unaff_x19 + 0x60),unaff_x23 & 0xffffffff,&stack0x00000030,*unaff_x29)
       , unaff_x20 = in_stack_00000030, in_stack_00000030 == 0)) break;
    unaff_d8 = (ulong)*(uint *)(in_stack_00000030 + 0x30);
    unaff_d9 = (ulong)*(uint *)(in_stack_00000030 + 0x34);
    unaff_d10 = (ulong)*(uint *)(in_stack_00000030 + 0x38);
    if (DAT_03774e1c == '\0') {
      thunk_FUN_00d48444();
      DAT_03774e1c = '\x01';
    }
    param_1 = *unaff_x24;
    param_2 = &stack0x00000048;
  }
LAB_014689e4:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


