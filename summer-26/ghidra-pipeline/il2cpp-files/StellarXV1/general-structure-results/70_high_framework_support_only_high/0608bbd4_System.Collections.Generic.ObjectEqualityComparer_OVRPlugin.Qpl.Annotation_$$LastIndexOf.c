/*
FUNCTION_NAME: System.Collections.Generic.ObjectEqualityComparer<OVRPlugin.Qpl.Annotation>$$LastIndexOf
ENTRY_POINT: 0608bbd4
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0608bec8) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8
System_Collections_Generic_ObjectEqualityComparer<OVRPlugin_Qpl_Annotation>__LastIndexOf
          (ulong param_1,long param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *unaff_x19;
  ulong unaff_x20;
  undefined8 uVar6;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  long in_stack_00000038;
  
  if ((param_1 & 1) == 0) {
    param_2 = FUN_040b1acc();
  }
  if (*(int *)(param_2 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  lVar1 = *(long *)(in_stack_00000038 + 0x20);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_040b1acc();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_040b1acc();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 0x30);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  uVar6 = *unaff_x19;
  uVar5 = unaff_x19[1];
  lVar2 = *(long *)(in_stack_00000038 + 0x20);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_040b1acc();
  }
  uVar3 = FUN_06dd7ee4(lVar1,uVar6,uVar5,*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x1e8));
  if ((uVar3 & 1) != 0) {
    thunk_FUN_040dedf8(PTR_DAT_09289148);
    uVar6 = thunk_FUN_040b4b34();
    uVar5 = thunk_FUN_040dedf8(PTR_DAT_092ba9e0);
    uVar6 = FUN_074d57ec(uVar5,uVar6,0);
    thunk_FUN_040dedf8(PTR_DAT_0929cb88);
    uVar5 = thunk_FUN_040b4efc();
    FUN_07679464(uVar5,uVar6,0);
                    /* WARNING: Subroutine does not return */
    FUN_040776f4(uVar5,in_stack_00000038);
  }
  in_stack_00000028 = unaff_x19[1];
  in_stack_00000020 = *unaff_x19;
  lVar1 = *(long *)(in_stack_00000038 + 0x20);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_040b1acc();
  }
  lVar1 = FUN_050e8034(*(undefined8 *)(*(long *)(lVar1 + 0xc0) + 0x228));
  if ((unaff_x20 & 1) == 0) {
    lVar2 = *(long *)(in_stack_00000038 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_040b1acc();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_040b1acc();
    }
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    lVar2 = *(long *)(in_stack_00000038 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_040b1acc();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_040b1acc();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x20);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    uVar6 = *unaff_x19;
    uVar5 = unaff_x19[1];
    lVar4 = *(long *)(in_stack_00000038 + 0x20);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_040b1acc();
    }
    FUN_06dd7cd8(lVar2,uVar6,uVar5,lVar1,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x238));
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
  }
  else {
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar2 = *(long *)(in_stack_00000038 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_040b1acc();
    }
    FUN_0671d6e0(lVar1,&stack0x00000034,*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x230));
  }
  if ((*(ushort *)(*(long *)(in_stack_00000038 + 0x20) + 0x135) & 1) == 0) {
    FUN_040b1acc();
  }
  uVar6 = *(undefined8 *)(lVar1 + 0x18);
  if (*(int *)(*(long *)PTR_DAT_092b7070 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  lVar1 = *(long *)(in_stack_00000038 + 0x20);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_040b1acc();
  }
  FUN_0608c644(&stack0x00000020,*(undefined8 *)(*(long *)(lVar1 + 0xc0) + 0x220));
  return uVar6;
}


