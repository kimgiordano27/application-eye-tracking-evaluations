/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Utils.ConsoleLogsCache.<>c__DisplayClass7_0$$<EnqueueLogEntry>b__0
ENTRY_POINT: 0143f6d0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_3;validity_or_gating_hits_21;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Utils_ConsoleLogsCache_<>c__DisplayClass7_0__<EnqueueLogEntry>b__0
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  uint uVar8;
  long unaff_x19;
  long unaff_x20;
  int iVar9;
  long unaff_x21;
  undefined4 uStack0000000000000000;
  int iStack0000000000000004;
  long in_stack_00000008;
  
  thunk_FUN_00d48444(*(undefined8 *)(param_1 + 0x1f8));
  thunk_FUN_00d48444(Method_System_Collections_Generic_List<Graphic>__ctor__);
  *(undefined1 *)(unaff_x21 + 0xa26) = 1;
  puVar2 = Method_System_Collections_Generic_List<IXRInteractable>_GetEnumerator__;
  puVar1 = System_Func<MemoryStream>_TypeInfo;
  _uStack0000000000000000 = 0;
  lVar3 = *(long *)(unaff_x19 + 0x60);
  if (lVar3 != 0) {
    iVar9 = *(int *)(lVar3 + 0x18) + -1;
    if (iVar9 < 0) {
LAB_0143f7a0:
      if (*(int *)(unaff_x19 + 0x10) < 4) {
        return;
      }
      plVar5 = (long *)FUN_00da4fb8(*(undefined8 *)PTR_DAT_033ea8a0,6);
      puVar1 = 
      System_Collections_Generic_IEnumerator<JointVelocityActiveState_JointVelocityFeatureConfig>_TypeInfo
      ;
      if (plVar5 != (long *)0x0) {
        if ((*(long *)
              System_Collections_Generic_IEnumerator<JointVelocityActiveState_JointVelocityFeatureConfig>_TypeInfo
             != 0) &&
           (lVar3 = thunk_FUN_00d6225c(*(long *)
                                        System_Collections_Generic_IEnumerator<JointVelocityActiveState_JointVelocityFeatureConfig>_TypeInfo
                                       ,*(undefined8 *)(*plVar5 + 0x40)), lVar3 == 0)) {
LAB_0143f958:
          uVar7 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
          FUN_00da5038(uVar7,0);
        }
        if ((int)plVar5[3] != 0) {
          plVar5[4] = *(long *)puVar1;
          lVar3 = FUN_0176eb1c((long)&stack0x00000000 + 4,0);
          if ((lVar3 != 0) &&
             (lVar6 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*plVar5 + 0x40)), lVar6 == 0))
          goto LAB_0143f958;
          puVar1 = StringLiteral_8340;
          uVar8 = *(uint *)(plVar5 + 3);
          if (1 < uVar8) {
            plVar5[5] = lVar3;
            lVar3 = *(long *)puVar1;
            if (lVar3 != 0) {
              lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*plVar5 + 0x40));
              if (lVar3 == 0) goto LAB_0143f958;
              uVar8 = *(uint *)(plVar5 + 3);
            }
            if (2 < uVar8) {
              plVar5[6] = *(long *)puVar1;
              if (unaff_x20 != 0) {
                lVar3 = thunk_FUN_00d6225c();
                if (lVar3 == 0) goto LAB_0143f958;
                uVar8 = *(uint *)(plVar5 + 3);
              }
              puVar1 = Method_System_Collections_Generic_List<Graphic>__ctor__;
              if (3 < uVar8) {
                plVar5[7] = unaff_x20;
                lVar3 = *(long *)puVar1;
                if (lVar3 != 0) {
                  lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*plVar5 + 0x40));
                  if (lVar3 == 0) goto LAB_0143f958;
                  uVar8 = *(uint *)(plVar5 + 3);
                }
                if (4 < uVar8) {
                  plVar5[8] = *(long *)puVar1;
                  if (*(long *)(unaff_x19 + 0x60) == 0) goto LAB_0143f79c;
                  _uStack0000000000000000 =
                       CONCAT44(iStack0000000000000004,
                                *(undefined4 *)(*(long *)(unaff_x19 + 0x60) + 0x18));
                  lVar3 = FUN_0176eb1c();
                  if ((lVar3 != 0) &&
                     (lVar6 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*plVar5 + 0x40)), lVar6 == 0)
                     ) goto LAB_0143f958;
                  puVar1 = StringLiteral_302;
                  if (5 < *(uint *)(plVar5 + 3)) {
                    plVar5[9] = lVar3;
                    uVar7 = FUN_01600844(plVar5,0);
                    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                      thunk_FUN_00d32864(*(long *)puVar1);
                    }
                    FUN_02660dac(uVar7,0);
                    return;
                  }
                }
              }
            }
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
    }
    else {
      do {
        FUN_0132138c(lVar3,iVar9,&stack0x00000008,*(undefined8 *)puVar2);
        if ((in_stack_00000008 == 0) || (*(long *)(in_stack_00000008 + 0x10) == 0)) break;
        uVar4 = FUN_015fe250();
        if ((uVar4 & 1) != 0) {
          _uStack0000000000000000 = CONCAT44(iStack0000000000000004 + 1,uStack0000000000000000);
          if ((*(long *)(unaff_x19 + 0x60) == 0) ||
             (FUN_0132138c(*(long *)(unaff_x19 + 0x60),iVar9,&stack0x00000008,*(undefined8 *)puVar2)
             , in_stack_00000008 == 0)) break;
          FUN_0142deac(*(undefined8 *)(in_stack_00000008 + 0x18));
          if (*(long *)(unaff_x19 + 0x60) == 0) break;
          FUN_01324ac8(*(long *)(unaff_x19 + 0x60),iVar9,*(undefined8 *)puVar1);
        }
        iVar9 = iVar9 + -1;
        if (iVar9 < 0) goto LAB_0143f7a0;
        lVar3 = *(long *)(unaff_x19 + 0x60);
      } while (lVar3 != 0);
    }
  }
LAB_0143f79c:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


