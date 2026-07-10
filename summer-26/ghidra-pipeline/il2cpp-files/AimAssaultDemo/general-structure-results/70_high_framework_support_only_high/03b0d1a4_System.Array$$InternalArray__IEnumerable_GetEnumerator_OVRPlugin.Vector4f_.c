/*
FUNCTION_NAME: System.Array$$InternalArray__IEnumerable_GetEnumerator<OVRPlugin.Vector4f>
ENTRY_POINT: 03b0d1a4
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 84
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__IEnumerable_GetEnumerator<OVRPlugin_Vector4f>
               (undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined4 uVar6;
  void *unaff_x19;
  long unaff_x21;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_0373b518(PTR_DAT_07d95a30);
    param_1 = *(undefined8 **)(unaff_x21 + 0x38);
    if (param_1 == (undefined8 *)0x0) {
      FUN_037756d4();
      param_1 = *(undefined8 **)(unaff_x21 + 0x38);
    }
  }
  plVar3 = (long *)FUN_03b0cf6c(param_2,*param_1);
  lVar5 = *(long *)(*(long *)(unaff_x21 + 0x38) + 8);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_03775678(lVar5);
  }
  if (plVar3 != (long *)0x0) {
    if ((*(byte *)(*plVar3 + 0x130) < *(byte *)(lVar5 + 0x130)) ||
       (*(long *)(*(long *)(*plVar3 + 200) + (ulong)*(byte *)(lVar5 + 0x130) * 8 + -8) != lVar5)) {
                    /* WARNING: Subroutine does not return */
      FUN_0373bb54(plVar3);
    }
  }
  lVar5 = *(long *)(unaff_x21 + 0x20);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_03775678();
  }
  lVar5 = FUN_04e14414(param_2,*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x38));
  lVar4 = FUN_062af240(0);
  if (lVar4 != 0) {
    iVar2 = FUN_062b0bcc(lVar4,0);
    puVar1 = PTR_DAT_07d95a30;
    lVar4 = *(long *)PTR_DAT_07d95a30;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_03798b70(lVar4);
      lVar4 = *(long *)puVar1;
    }
    uVar6 = 1;
    if (iVar2 != *(int *)(*(long *)(lVar4 + 0xb8) + 0x38)) {
      uVar6 = 2;
    }
    if (lVar5 != 0) {
      lVar4 = *(long *)(unaff_x21 + 0x20);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_03775678();
      }
      FUN_04e19b18(lVar5,uVar6,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x60));
      memcpy(&stack0x00000008,unaff_x19,0x58);
      if (plVar3 != (long *)0x0) {
        memcpy(plVar3 + 2,&stack0x00000008,0x58);
        thunk_FUN_037aeb94(plVar3 + 3,0);
        lVar5 = plVar3[0xd];
        if (lVar5 != 0) {
                    /* WARNING: Could not recover jumptable at 0x03b0d314. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(lVar5 + 0x18))(*(undefined8 *)(lVar5 + 0x40),*(undefined8 *)(lVar5 + 0x28));
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


