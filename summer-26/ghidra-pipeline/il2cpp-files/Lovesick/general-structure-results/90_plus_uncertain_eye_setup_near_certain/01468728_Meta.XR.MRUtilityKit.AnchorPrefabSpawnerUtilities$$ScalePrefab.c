/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.AnchorPrefabSpawnerUtilities$$ScalePrefab
ENTRY_POINT: 01468728
PROGRAM: Lovesick-libil2cpp.so
SCORE: 118
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_19;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_AnchorPrefabSpawnerUtilities__ScalePrefab(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  long lVar7;
  long unaff_x23;
  ulong uVar8;
  long lVar9;
  int unaff_w25;
  int iVar10;
  long *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  float fVar11;
  float fVar12;
  ulong uVar13;
  float fVar14;
  ulong uVar15;
  undefined4 uVar16;
  float *in_stack_00000000;
  float *in_stack_00000008;
  long in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  long in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  long in_stack_00000068;
  
  do {
    FUN_00bbcd7c();
    if ((*(long *)(unaff_x19 + 0x60) == 0) ||
       (FUN_0132138c(*(long *)(unaff_x19 + 0x60),unaff_w25,&stack0x00000030,*unaff_x29),
       in_stack_00000030 == 0)) break;
    FUN_00bbcd7c();
    lVar9 = *(long *)(unaff_x19 + 0x60);
    unaff_w25 = unaff_w25 + 1;
    if (lVar9 == 0) break;
    if (*(int *)(lVar9 + 0x18) <= unaff_w25) {
      if (*(int *)(unaff_x23 + 0x18) < 1) goto LAB_014687c0;
      iVar10 = 0;
      goto LAB_01468780;
    }
    FUN_0132138c(lVar9,unaff_w25,&stack0x00000030,*unaff_x29);
  } while (in_stack_00000030 != 0);
  goto LAB_014689e4;
  while( true ) {
    FUN_0132448c(lVar9,in_stack_00000030,*unaff_x22);
    lVar9 = *(long *)(unaff_x19 + 0x60);
    iVar10 = iVar10 + 1;
    if (*(int *)(unaff_x23 + 0x18) <= iVar10) break;
LAB_01468780:
    FUN_0132138c();
    if (lVar9 == 0) goto LAB_014689e4;
  }
  if (lVar9 != 0) {
LAB_014687c0:
    lVar9 = FUN_00da4fb8(*unaff_x21,*(undefined4 *)(lVar9 + 0x18));
    *(long *)(unaff_x19 + 0x68) = lVar9;
    if (in_stack_00000068 != 0) {
      (**(code **)(in_stack_00000068 + 0x18))
                (0,*(undefined8 *)(in_stack_00000068 + 0x40),*unaff_x20,
                 *(undefined8 *)(in_stack_00000068 + 0x28));
      lVar9 = *(long *)(unaff_x19 + 0x68);
    }
    puVar3 = Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__;
    puVar2 = System_Threading_Timer_TimerComparer_TypeInfo;
    if (lVar9 != 0) {
      uVar8 = 0;
      while( true ) {
        if ((long)*(int *)(lVar9 + 0x18) <= (long)uVar8) {
          if (in_stack_00000068 != 0) {
            (**(code **)(in_stack_00000068 + 0x18))
                      (0,*(undefined8 *)(in_stack_00000068 + 0x40),
                       *(undefined8 *)
                        Method_UnityEngine_InputSystem_InputRemoting_SerializeData<InputRemoting_NewLayoutMsg_Data>__
                       ,*(undefined8 *)(in_stack_00000068 + 0x28));
          }
          fVar12 = *in_stack_00000000;
          if (*in_stack_00000000 <= *in_stack_00000008) {
            if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            FUN_026610e4(*(undefined8 *)Polenter_Serialization_SharpSerializer_TypeInfo,0);
            *in_stack_00000008 = 1e-05;
            fVar12 = *in_stack_00000000;
            if (*in_stack_00000000 < 10.0) {
              *in_stack_00000000 = 10.0;
              fVar12 = 10.0;
            }
          }
          *(float *)(unaff_x19 + 0x58) = fVar12 + 1.0;
          *(float *)(unaff_x19 + 0x5c) = *in_stack_00000008 * DAT_028aa040;
          if (fVar12 + 1.0 < 2.0) {
            *(undefined4 *)(unaff_x19 + 0x58) = 0x40000000;
          }
          return;
        }
        if ((*(long *)(unaff_x19 + 0x60) == 0) ||
           (FUN_0132138c(*(long *)(unaff_x19 + 0x60),uVar8 & 0xffffffff,&stack0x00000030,*unaff_x29)
           , lVar9 = in_stack_00000030, in_stack_00000030 == 0)) break;
        uVar16 = *(undefined4 *)(in_stack_00000030 + 0x30);
        uVar13 = (ulong)*(uint *)(in_stack_00000030 + 0x34);
        uVar15 = (ulong)*(uint *)(in_stack_00000030 + 0x38);
        if (DAT_03774e1c == '\0') {
          thunk_FUN_00d48444(puVar3);
          DAT_03774e1c = '\x01';
        }
        lVar5 = *(long *)(*(long *)puVar3 + 0xb8);
        FUN_02687990(uVar16,uVar13,uVar15,*(undefined4 *)(lVar5 + 0xc),*(undefined4 *)(lVar5 + 0x10)
                     ,*(undefined4 *)(lVar5 + 0x14),&stack0x00000048,0);
        lVar5 = *(long *)(lVar9 + 0x40);
        if (lVar5 == 0) break;
        lVar7 = 0;
        while( true ) {
          fVar14 = (float)uVar15;
          fVar12 = (float)uVar13;
          if ((int)*(uint *)(lVar5 + 0x18) <= (int)(uint)lVar7) break;
          if (*(long *)(unaff_x19 + 0x48) == 0) goto LAB_014689e4;
          if (*(uint *)(lVar5 + 0x18) <= (uint)lVar7) goto LAB_01468ad4;
          lVar6 = *(long *)(*(long *)(unaff_x19 + 0x48) + 0x18);
          if (lVar6 == 0) goto LAB_014689e4;
          uVar1 = *(uint *)(lVar5 + lVar7 * 4 + 0x20);
          if (*(uint *)(lVar6 + 0x18) <= uVar1) goto LAB_01468ad4;
          lVar5 = *(long *)(lVar6 + (long)(int)uVar1 * 8 + 0x20);
          if (((lVar5 == 0) || (lVar5 = *(long *)(lVar5 + 0x10), lVar5 == 0)) ||
             (lVar5 = *(long *)(lVar5 + 0x10), lVar5 == 0)) goto LAB_014689e4;
          FUN_010e58e8(lVar5,&stack0x00000030,*unaff_x28);
          lVar5 = in_stack_00000030;
          if (*(int *)(*unaff_x27 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar4 = FUN_02681b9c(lVar5,0,0);
          if ((uVar4 & 1) != 0) {
            if (lVar5 == 0) goto LAB_014689e4;
            FUN_02667cd8(&stack0x00000030,lVar5,0);
            in_stack_00000018 = in_stack_00000038;
            in_stack_00000010 = in_stack_00000030;
            in_stack_00000020 = in_stack_00000040;
            FUN_02687e74(&stack0x00000048,&stack0x00000010,0);
          }
          lVar5 = *(long *)(lVar9 + 0x40);
          lVar7 = lVar7 + 1;
          if (lVar5 == 0) goto LAB_014689e4;
        }
        lVar9 = *(long *)(unaff_x19 + 0x68);
        fVar11 = (float)FUN_02687a8c(&stack0x00000048,0);
        if (DAT_03774e1b == '\0') {
          thunk_FUN_00d48444(puVar2);
          DAT_03774e1b = '\x01';
        }
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        if (lVar9 == 0) break;
        if (*(uint *)(lVar9 + 0x18) <= uVar8) {
LAB_01468ad4:
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        *(float *)(lVar9 + uVar8 * 4 + 0x20) =
             SQRT(fVar14 * fVar14 + fVar11 * fVar11 + fVar12 * fVar12);
        lVar9 = *(long *)(unaff_x19 + 0x68);
        uVar8 = uVar8 + 1;
        if (lVar9 == 0) break;
      }
    }
  }
LAB_014689e4:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


