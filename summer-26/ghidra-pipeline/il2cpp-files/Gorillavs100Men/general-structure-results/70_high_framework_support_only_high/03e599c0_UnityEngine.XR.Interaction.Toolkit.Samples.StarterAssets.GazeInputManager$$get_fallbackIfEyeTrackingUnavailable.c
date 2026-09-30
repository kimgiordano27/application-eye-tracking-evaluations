/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.GazeInputManager$$get_fallbackIfEyeTrackingUnavailable
ENTRY_POINT: 03e599c0
PROGRAM: Gorillavs100Men-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_14;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03e59f6c) */

void UnityEngine_XR_Interaction_Toolkit_Samples_StarterAssets_GazeInputManager__get_fallbackIfEyeTrackingUnavailable
               (undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  ulong unaff_x21;
  undefined8 uVar11;
  long lVar12;
  long unaff_x22;
  long *unaff_x27;
  undefined1 auVar13 [16];
  ulong in_stack_00000010;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  long in_stack_00000130;
  long *in_stack_00000138;
  
  FUN_03dc5b94(param_1,param_2,0);
  plVar4 = in_stack_00000138;
  if (in_stack_00000130 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0206154c();
  }
  *(undefined8 *)(in_stack_00000130 + 0x18) = in_stack_00000028;
  *(undefined8 *)(in_stack_00000130 + 0x20) = in_stack_00000030;
  puVar2 = PTR_DAT_046b1d88;
  if (in_stack_00000138 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0206154c();
  }
  lVar7 = *in_stack_00000138;
  uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *unaff_x27) {
        puVar5 = (undefined8 *)(lVar7 + (long)(*piVar10 + 4) * 0x10 + 0x138);
        goto LAB_03e59a38;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar5 = (undefined8 *)FUN_02091668(in_stack_00000138,*unaff_x27,4);
LAB_03e59a38:
  (*(code *)*puVar5)(plVar4,in_stack_00000028,in_stack_00000030,2,puVar5[1]);
  if (in_stack_00000130 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0206154c();
  }
  *(undefined8 *)(in_stack_00000130 + 0x28) = *(undefined8 *)(unaff_x22 + 0xb8);
  thunk_FUN_020ccb58();
  FUN_03e59038();
  plVar4 = in_stack_00000138;
  lVar7 = in_stack_00000130;
  if (in_stack_00000130 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0206154c();
  }
  if (in_stack_00000138 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0206154c();
  }
  lVar8 = *in_stack_00000138;
  uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
        puVar5 = (undefined8 *)(lVar8 + (long)(*piVar10 + 9) * 0x10 + 0x138);
        goto LAB_03e59ae0;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar5 = (undefined8 *)FUN_02091668(in_stack_00000138,*(long *)puVar2,9);
LAB_03e59ae0:
  (*(code *)*puVar5)(plVar4,lVar7 + 0x30,puVar5[1]);
  plVar4 = in_stack_00000138;
  lVar7 = in_stack_00000130;
  if (in_stack_00000130 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0206154c();
  }
  if (in_stack_00000138 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0206154c();
  }
  lVar8 = *in_stack_00000138;
  uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
        puVar5 = (undefined8 *)(lVar8 + (long)(*piVar10 + 9) * 0x10 + 0x138);
        goto LAB_03e59b50;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar5 = (undefined8 *)FUN_02091668(in_stack_00000138,*(long *)puVar2,9);
LAB_03e59b50:
  (*(code *)*puVar5)(plVar4,lVar7 + 0x3c,puVar5[1]);
  plVar4 = in_stack_00000138;
  if ((in_stack_00000010 & 0x100000000) != 0) {
    _in_stack_000000e0 = FUN_03dc5c08();
    puVar3 = PTR_DAT_046bac20;
    lVar7 = *(long *)PTR_DAT_046bac20;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_020b5864();
      lVar7 = *(long *)puVar3;
    }
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0206154c();
    }
    lVar8 = *plVar4;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    uVar1 = **(undefined4 **)(lVar7 + 0xb8);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
          puVar5 = (undefined8 *)(lVar8 + (long)(*piVar10 + 3) * 0x10 + 0x138);
          goto LAB_03e59bf8;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_02091668(plVar4,*(long *)puVar2,3);
LAB_03e59bf8:
    (*(code *)*puVar5)(plVar4,&stack0x000000e0,uVar1,puVar5[1]);
    plVar4 = in_stack_00000138;
    if ((unaff_x21 & 1) != 0) {
      auVar13 = FUN_03dc5da8();
      lVar7 = *(long *)puVar3;
      _in_stack_000000e0 = auVar13;
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_020b5864();
        lVar7 = *(long *)puVar3;
      }
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0206154c();
      }
      lVar8 = *plVar4;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      uVar1 = *(undefined4 *)(*(long *)(lVar7 + 0xb8) + 4);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
            puVar5 = (undefined8 *)(lVar8 + (long)(*piVar10 + 3) * 0x10 + 0x138);
            goto LAB_03e59c98;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar5 = (undefined8 *)FUN_02091668(plVar4,*(long *)puVar2,3);
LAB_03e59c98:
      (*(code *)*puVar5)(plVar4,&stack0x000000e0,uVar1,puVar5[1]);
    }
  }
  plVar4 = in_stack_00000138;
  puVar3 = PTR_DAT_046bbe68;
  if (in_stack_00000138 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0206154c();
  }
  lVar7 = *in_stack_00000138;
  uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
        puVar5 = (undefined8 *)(lVar7 + (long)(*piVar10 + 0xb) * 0x10 + 0x138);
        goto LAB_03e59d0c;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar5 = (undefined8 *)FUN_02091668(in_stack_00000138,*(long *)puVar2,0xb);
LAB_03e59d0c:
  (*(code *)*puVar5)(plVar4,0,puVar5[1]);
  plVar4 = in_stack_00000138;
  if (in_stack_00000138 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0206154c();
  }
  lVar7 = *in_stack_00000138;
  uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
        puVar5 = (undefined8 *)(lVar7 + (long)(*piVar10 + 0xc) * 0x10 + 0x138);
        goto LAB_03e59d74;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar5 = (undefined8 *)FUN_02091668(in_stack_00000138,*(long *)puVar2,0xc);
LAB_03e59d74:
  (*(code *)*puVar5)(plVar4,1,puVar5[1]);
  plVar4 = in_stack_00000138;
  lVar7 = *(long *)puVar3;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_020b5864();
    lVar7 = *(long *)puVar3;
  }
  puVar5 = *(undefined8 **)(lVar7 + 0xb8);
  lVar8 = puVar5[1];
  if (lVar8 == 0) {
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_020b5864();
      puVar5 = *(undefined8 **)(*(long *)puVar3 + 0xb8);
    }
    uVar11 = *puVar5;
    lVar8 = thunk_FUN_02094760(*(undefined8 *)PTR_DAT_046bbe48);
    FUN_02ad3ab0(lVar8,uVar11,*(undefined8 *)PTR_DAT_046bbe60,0);
    plVar6 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 8);
    *plVar6 = lVar8;
    thunk_FUN_020ccb58(plVar6,lVar8);
  }
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0206154c();
  }
  lVar7 = *plVar4;
  lVar12 = *(long *)PTR_DAT_046bbe50;
  uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *(long *)(lVar12 + 0x20)) {
        lVar7 = lVar7 + (long)(int)(*piVar10 + (uint)*(ushort *)(lVar12 + 0x50)) * 0x10 + 0x138;
        goto LAB_03e59e60;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  lVar7 = FUN_02091668(plVar4);
LAB_03e59e60:
  lVar7 = thunk_FUN_0207caf4(*(undefined8 *)(lVar7 + 8),lVar12);
  (**(code **)(lVar7 + 8))(plVar4,lVar8,lVar7);
  plVar4 = in_stack_00000138;
  if (in_stack_00000138 != (long *)0x0) {
    lVar7 = *in_stack_00000138;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)StringLiteral_9261) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_03e59ee4;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_02091668(in_stack_00000138,*(long *)StringLiteral_9261,0);
LAB_03e59ee4:
    (*(code *)*puVar5)(plVar4,puVar5[1]);
  }
  return;
}


