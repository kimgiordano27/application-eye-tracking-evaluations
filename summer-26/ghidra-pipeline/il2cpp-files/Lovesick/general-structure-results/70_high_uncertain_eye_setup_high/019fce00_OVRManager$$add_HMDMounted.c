/*
FUNCTION_NAME: OVRManager$$add_HMDMounted
ENTRY_POINT: 019fce00
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__add_HMDMounted(undefined1 param_1 [16],float param_2,float param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined1 in_w8;
  long lVar3;
  float *pfVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  float *unaff_x20;
  long *plVar7;
  long unaff_x21;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  ulong uVar11;
  ulong uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined4 uStack0000000000000010;
  undefined8 uStack0000000000000014;
  undefined8 in_stack_00000040;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined4 uStack0000000000000054;
  undefined4 in_stack_00000058;
  undefined8 uStack0000000000000060;
  undefined4 uStack0000000000000068;
  undefined4 uStack000000000000006c;
  undefined4 uStack0000000000000070;
  undefined4 uStack0000000000000074;
  undefined4 uStack0000000000000078;
  undefined8 in_stack_000000c8;
  
  *(undefined1 *)(unaff_x21 + 0x89b) = in_w8;
  uStack0000000000000068 = 0;
  uStack000000000000006c = 0;
  uStack0000000000000070 = 0;
  uStack0000000000000074 = 0;
  uStack0000000000000060 = 0;
  uStack0000000000000078 = 0;
  if (*(long *)(unaff_x19 + 0x120) != 0) {
    fVar13 = unaff_x20[1];
    in_stack_000000c8._4_4_ = unaff_x20[2];
    fVar15 = *unaff_x20;
    fVar8 = (float)FUN_0269f578(*(long *)(unaff_x19 + 0x120),0);
    if (DAT_037750c4 == '\0') {
      thunk_FUN_00d48444(
                        Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                        );
      DAT_037750c4 = '\x01';
    }
    puVar1 = Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__;
    lVar3 = *(long *)(*(long *)
                       Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                     + 0xb8);
    fVar14 = *(float *)(lVar3 + 0x18);
    fVar17 = *(float *)(lVar3 + 0x1c);
    fVar16 = *(float *)(lVar3 + 0x20);
    if (DAT_0377518b == '\0') {
      thunk_FUN_00d48444(System_Func<Assembly[]>_TypeInfo);
      DAT_0377518b = '\x01';
    }
    fVar9 = fVar16 * fVar16 + fVar14 * fVar14 + fVar17 * fVar17;
    fVar15 = fVar15 - fVar8;
    fVar13 = fVar13 - param_2;
    param_3 = in_stack_000000c8._4_4_ - param_3;
    if (**(float **)(*(long *)System_Func<Assembly[]>_TypeInfo + 0xb8) <= fVar9) {
      fVar8 = param_3 * fVar16 + fVar15 * fVar14 + fVar13 * fVar17;
      fVar15 = fVar15 - (fVar14 * fVar8) / fVar9;
      fVar13 = fVar13 - (fVar17 * fVar8) / fVar9;
      param_3 = param_3 - (fVar16 * fVar8) / fVar9;
    }
    if (DAT_0377518c == '\0') {
      thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
      DAT_0377518c = '\x01';
    }
    if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    fVar8 = SQRT(param_3 * param_3 + fVar15 * fVar15 + fVar13 * fVar13);
    if (fVar8 <= DAT_028aa038) {
      if (DAT_03774d76 == '\0') {
        thunk_FUN_00d48444(
                          Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                          );
        DAT_03774d76 = '\x01';
      }
      pfVar4 = *(float **)(*(long *)puVar1 + 0xb8);
      fVar15 = *pfVar4;
      fVar13 = pfVar4[1];
      param_3 = pfVar4[2];
    }
    else {
      fVar15 = fVar15 / fVar8;
      fVar13 = fVar13 / fVar8;
      param_3 = param_3 / fVar8;
    }
    uVar11 = (ulong)(uint)param_3;
    uVar5 = (ulong)(uint)fVar13;
    if (DAT_037750c4 == '\0') {
      thunk_FUN_00d48444(
                        Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                        );
      DAT_037750c4 = '\x01';
    }
    lVar3 = *(long *)(*(long *)puVar1 + 0xb8);
    uVar12 = (ulong)*(uint *)(lVar3 + 0x18);
    uVar10 = FUN_02698e08(fVar15,uVar5,uVar11,uVar12,*(undefined4 *)(lVar3 + 0x1c),
                          *(undefined4 *)(lVar3 + 0x20),0);
    plVar7 = *(long **)(unaff_x19 + 0x130);
    uStack0000000000000048 = 0;
    uStack000000000000004c = 0;
    uStack0000000000000050 = 0;
    uStack0000000000000054 = 0;
    in_stack_00000040 = 0;
    in_stack_00000058 = 0;
    FUN_02666aac(*unaff_x20,unaff_x20[1],unaff_x20[2],uVar10,uVar5,uVar11,uVar12,&stack0x00000040,0)
    ;
    uStack0000000000000068 = uStack0000000000000048;
    uStack0000000000000060 = in_stack_00000040;
    uStack0000000000000074 = uStack0000000000000054;
    uStack0000000000000078 = in_stack_00000058;
    uStack000000000000006c = uStack000000000000004c;
    uStack0000000000000070 = uStack0000000000000050;
    if (plVar7 != (long *)0x0) {
      lVar3 = *plVar7;
      uVar5 = (ulong)*(ushort *)(lVar3 + 0x12a);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) ==
              *(long *)Method_System_Nullable<InputControlScheme>_get_HasValue__) {
            puVar2 = (undefined8 *)(lVar3 + (long)(*piVar6 + 2) * 0x10 + 0x138);
            goto LAB_019fd098;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar2 = (undefined8 *)
               FUN_00d59724(plVar7,*(long *)
                                    Method_System_Nullable<InputControlScheme>_get_HasValue__,2);
LAB_019fd098:
      (*(code *)*puVar2)(plVar7,&stack0x00000060,puVar2[1]);
      *(undefined8 *)(unaff_x19 + 0x144) = in_stack_00000008;
      *(undefined8 *)(unaff_x19 + 0x13c) = in_stack_00000000;
      *(undefined8 *)(unaff_x19 + 0x150) = uStack0000000000000014;
      *(ulong *)(unaff_x19 + 0x148) = CONCAT44(uStack0000000000000010,in_stack_00000008._4_4_);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


