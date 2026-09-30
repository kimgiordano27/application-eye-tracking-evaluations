/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch.<>c__DisplayClass20_0<Vector2>$$<.ctor>b__0
ENTRY_POINT: 0424d60c
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_Watch_<>c__DisplayClass20_0<Vector2>__<_ctor>b__0(void)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  int *piVar6;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long lVar7;
  undefined8 in_stack_00000008;
  undefined4 uStack000000000000001c;
  
  FUN_037756d4();
  uStack000000000000001c = 0;
  in_stack_00000008 = 0;
  if (unaff_x20 != (long *)0x0) {
    uStack000000000000001c = (**(code **)(*unaff_x20 + 0x218))();
    if (*(int *)(unaff_x19 + 0xb8) < *(int *)(unaff_x19 + 0x98)) {
      uVar1 = FUN_04156514(&stack0x0000001c,&stack0x00000008,
                           *(undefined8 *)(*(long *)(unaff_x21 + 0x38) + 0x28));
      if ((uVar1 & 1) == 0) {
        *(undefined4 *)(unaff_x19 + 0xa8) = 4;
      }
      else {
        lVar2 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x40);
        if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_03775678();
        }
        if (*(int *)(lVar2 + 0xe4) == 0) {
          thunk_FUN_03798b70();
        }
        lVar7 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x38);
        lVar2 = *(long *)(lVar7 + 0x20);
        if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_03775678();
        }
        lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
        if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_03775678();
        }
        if (*(int *)(lVar2 + 0xe4) == 0) {
          thunk_FUN_03798b70();
        }
        lVar2 = *(long *)(lVar7 + 0x20);
        if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_03775678();
        }
        lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
        if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_03775678();
        }
        if (*(char *)(*(long *)(lVar2 + 0xb8) + 0xc) != '\0') {
          plVar3 = (long *)FUN_03e0c434(*(undefined8 *)(*(long *)(unaff_x21 + 0x38) + 0x48));
          if (plVar3 == (long *)0x0)
          goto 
          UnityEngine_ProBuilder_ArrayUtility_<>c__DisplayClass21_0<object,_Edge>__<DistinctBy>b__0;
          uVar1 = (**(code **)(*plVar3 + 0x1b8))
                            (plVar3,uStack000000000000001c,0,*(undefined8 *)(*plVar3 + 0x1c0));
          if ((uVar1 & 1) != 0) {
            uVar4 = FUN_050122ec();
            plVar3 = (long *)FUN_07644180(uVar4,0);
            if (plVar3 == (long *)0x0) {
              return;
            }
            lVar2 = *plVar3;
            uVar1 = (ulong)*(ushort *)(lVar2 + 0x12e);
            if (uVar1 != 0) {
              piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
              do {
                if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_07d978a0) {
                  puVar5 = (undefined8 *)(lVar2 + (long)*piVar6 * 0x10 + 0x138);
                  goto LAB_0424d7cc;
                }
                uVar1 = uVar1 - 1;
                piVar6 = piVar6 + 4;
              } while (uVar1 != 0);
            }
            puVar5 = (undefined8 *)FUN_0377596c(plVar3,*(long *)PTR_DAT_07d978a0,0);
LAB_0424d7cc:
            (*(code *)*puVar5)(plVar3);
            return;
          }
        }
        Unity_Collections_LowLevel_Unsafe_UnsafeUtility__WriteArrayElement<DrawInstance>();
      }
    }
    else {
      uVar4 = FUN_050122ec();
      *(undefined8 *)(unaff_x19 + 0xa0) = uVar4;
      thunk_FUN_037aeb94((undefined8 *)(unaff_x19 + 0xa0),uVar4);
    }
    return;
  }
UnityEngine_ProBuilder_ArrayUtility_<>c__DisplayClass21_0<object,_Edge>__<DistinctBy>b__0:
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


