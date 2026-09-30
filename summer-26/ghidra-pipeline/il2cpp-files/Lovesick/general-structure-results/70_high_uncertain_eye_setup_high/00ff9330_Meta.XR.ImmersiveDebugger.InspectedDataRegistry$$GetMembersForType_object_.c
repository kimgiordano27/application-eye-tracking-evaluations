/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.InspectedDataRegistry$$GetMembersForType<object>
ENTRY_POINT: 00ff9330
PROGRAM: Lovesick-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_18;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_InspectedDataRegistry__GetMembersForType<object>(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long unaff_x19;
  long unaff_x20;
  undefined4 uVar9;
  float fVar10;
  undefined8 uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  float fVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  long in_stack_00000008;
  
  thunk_FUN_00d48444(PTR_DAT_033eb690);
  thunk_FUN_00d48444(Method_System_Collections_Generic_List<IntersectNode>__ctor__);
  thunk_FUN_00d48444(
                    System_Linq_Expressions_Interpreter_DecrementInstruction_DecrementDouble_TypeInfo
                    );
  *(undefined1 *)(unaff_x20 + 0xccd) = 1;
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    fVar18 = *(float *)(unaff_x19 + 0x90);
    lVar6 = FUN_0268fd10(*(long *)(unaff_x19 + 0x20),0);
    if (lVar6 != 0) {
      fVar18 = fVar18 * 0.5;
      FUN_0269f750(-fVar18,0,0,lVar6,0);
      if ((*(long *)(unaff_x19 + 0x28) != 0) &&
         (lVar6 = FUN_0268fd10(*(long *)(unaff_x19 + 0x28),0), lVar6 != 0)) {
        uVar17 = 0;
        fVar15 = 0.0;
        uVar16 = 0;
        FUN_0269f750(fVar18,lVar6,0);
        uVar7 = FUN_00ff96dc();
        *(undefined8 *)(unaff_x19 + 0x58) = uVar7;
        uVar7 = FUN_00ff96dc();
        *(undefined8 *)(unaff_x19 + 0x60) = uVar7;
        if ((*(long *)(unaff_x19 + 0x18) != 0) &&
           (lVar6 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                              (*(long *)(unaff_x19 + 0x18),0), lVar6 != 0)) {
          uVar9 = FUN_0269f578(lVar6,0);
          uVar14 = (ulong)*(uint *)(unaff_x19 + 0x94);
          fVar19 = *(float *)(unaff_x19 + 0x8c);
          *(undefined4 *)(unaff_x19 + 0x30) = uVar9;
          *(undefined4 *)(unaff_x19 + 0x34) = uVar17;
          *(float *)(unaff_x19 + 0x38) = fVar15;
          fVar18 = (float)FUN_02682ae0(0,uVar14,0);
          uVar12 = (ulong)*(uint *)(unaff_x19 + 0x98);
          *(float *)(unaff_x19 + 0x9c) = fVar19 + fVar18;
          fVar18 = (float)FUN_02682ae0(0,uVar12,0);
          puVar4 = Method_System_Collections_Generic_List<IntersectNode>__ctor__;
          lVar6 = *(long *)(unaff_x19 + 0x60);
          if (lVar6 != 0) {
            iVar2 = *(int *)(lVar6 + 0x18);
            iVar1 = *(int *)(unaff_x19 + 0x44) + 1;
            iVar3 = 0;
            if (iVar2 != 0) {
              iVar3 = iVar1 / iVar2;
            }
            iVar1 = iVar1 - iVar3 * iVar2;
            *(int *)(unaff_x19 + 0x44) = iVar1;
            FUN_0132138c(lVar6,iVar1,&stack0x00000008,*(undefined8 *)puVar4);
            lVar6 = in_stack_00000008;
            if (*(long *)(unaff_x19 + 0x28) != 0) {
              lVar8 = FUN_0268fd10(*(long *)(unaff_x19 + 0x28),0);
              if (lVar8 != 0) {
                fVar10 = (float)FUN_0269f578(lVar8,0);
                uVar13 = uVar12;
                fVar19 = fVar15;
                if (DAT_037757b5 == '\0') {
                  thunk_FUN_00d48444(
                                    Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                                    );
                  DAT_037757b5 = '\x01';
                }
                puVar5 = 
                Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__;
                if (*(long *)(unaff_x19 + 0x18) != 0) {
                  lVar8 = *(long *)(*(long *)
                                     Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                                   + 0xb8);
                  fVar20 = *(float *)(lVar8 + 0x30);
                  fVar21 = *(float *)(lVar8 + 0x34);
                  fVar22 = *(float *)(lVar8 + 0x38);
                  lVar8 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                                    (*(long *)(unaff_x19 + 0x18),0);
                  if ((lVar8 != 0) && (uVar7 = FUN_0269f910(lVar8,0), lVar6 != 0)) {
                    uVar12 = (ulong)(uint)((float)uVar12 + fVar18 * fVar21);
                    fVar15 = fVar15 + fVar18 * fVar22;
                    uVar17 = 0;
                    FUN_00ff98a4(fVar10 + fVar18 * fVar20,uVar12,fVar15,uVar7,uVar13,
                                 CONCAT44(uVar16,fVar19),uVar14,*(undefined4 *)(unaff_x19 + 0x88),
                                 lVar6,*(undefined4 *)(unaff_x19 + 0x44));
                    lVar6 = *(long *)(unaff_x19 + 0x58);
                    if (lVar6 != 0) {
                      iVar2 = *(int *)(lVar6 + 0x18);
                      iVar1 = *(int *)(unaff_x19 + 0x40) + 1;
                      iVar3 = 0;
                      if (iVar2 != 0) {
                        iVar3 = iVar1 / iVar2;
                      }
                      iVar1 = iVar1 - iVar3 * iVar2;
                      *(int *)(unaff_x19 + 0x40) = iVar1;
                      FUN_0132138c(lVar6,iVar1,&stack0x00000008,*(undefined8 *)puVar4);
                      lVar6 = in_stack_00000008;
                      if (*(long *)(unaff_x19 + 0x20) != 0) {
                        lVar8 = FUN_0268fd10(*(long *)(unaff_x19 + 0x20),0);
                        if (lVar8 != 0) {
                          fVar10 = (float)FUN_0269f578(lVar8,0);
                          uVar14 = uVar12;
                          fVar19 = fVar15;
                          if (DAT_03775438 == '\0') {
                            thunk_FUN_00d48444(
                                              Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                                              );
                            DAT_03775438 = '\x01';
                          }
                          if (*(long *)(unaff_x19 + 0x18) != 0) {
                            lVar8 = *(long *)(*(long *)puVar5 + 0xb8);
                            fVar20 = *(float *)(lVar8 + 0x3c);
                            fVar21 = *(float *)(lVar8 + 0x40);
                            fVar22 = *(float *)(lVar8 + 0x44);
                            lVar8 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                                              (*(long *)(unaff_x19 + 0x18),0);
                            if ((lVar8 != 0) && (uVar11 = FUN_0269f910(lVar8,0), lVar6 != 0)) {
                              fVar15 = fVar15 + fVar18 * fVar22;
                              FUN_00ff98a4(fVar10 + fVar18 * fVar20,(float)uVar12 + fVar18 * fVar21,
                                           fVar15,uVar11,uVar14,CONCAT44(uVar17,fVar19),uVar7,
                                           *(undefined4 *)(unaff_x19 + 0x88),lVar6,
                                           *(undefined4 *)(unaff_x19 + 0x40));
                              uVar17 = *(undefined4 *)(unaff_x19 + 0x94);
                              fVar19 = *(float *)(unaff_x19 + 0x8c);
                              fVar18 = (float)FUN_02682ae0(0,0);
                              *(float *)(unaff_x19 + 0x9c) = fVar19 + fVar18;
                              if ((*(long *)(unaff_x19 + 0x18) != 0) &&
                                 (lVar6 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                                                    (*(long *)(unaff_x19 + 0x18),0),
                                 puVar4 = 
                                 Method_UnityEngine_Events_UnityEvent<MRUKTrackable>_Invoke__,
                                 lVar6 != 0)) {
                                uVar16 = FUN_0269f6b0(lVar6,0);
                                *(undefined4 *)(unaff_x19 + 0x30) = uVar16;
                                *(undefined4 *)(unaff_x19 + 0x34) = uVar17;
                                *(float *)(unaff_x19 + 0x38) = fVar15;
                                *(undefined4 *)(unaff_x19 + 0x70) = 2;
                                lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
                                puVar4 = 
                                System_Linq_Expressions_Interpreter_DecrementInstruction_DecrementDouble_TypeInfo
                                ;
                                if (lVar6 != 0) {
                                  FUN_016f27fc();
                                  FUN_00fe0700(*(undefined8 *)puVar4,lVar6,0);
                                  return;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


