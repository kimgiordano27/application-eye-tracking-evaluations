/*
FUNCTION_NAME: OVRPlugin.OVRP_1_101_0$$.cctor
ENTRY_POINT: 051722f0
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x051723ec) */

void OVRPlugin_OVRP_1_101_0___cctor(long param_1)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long *in_stack_00000008;
  long *in_stack_00000018;
  
  if ((DAT_06b79ed3 & 1) == 0) {
    FUN_02d6084c(PTR_DAT_06767b30);
    FUN_02d6084c(PTR_DAT_06782a00);
    FUN_02d6084c(PTR_DAT_06782a08);
    FUN_02d6084c(PTR_DAT_06782a10);
    DAT_06b79ed3 = 1;
  }
  puVar1 = PTR_DAT_06767b30;
  in_stack_00000018 = (long *)0x0;
  in_stack_00000008 = (long *)0x0;
  if (param_1 == 0) goto LAB_051724b8;
  if (*(long *)(param_1 + 0x18) != 0) {
    lVar2 = *(long *)PTR_DAT_06767b30;
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar2 = *(long *)puVar1;
    }
    if (**(long **)(lVar2 + 0xb8) == 0) goto LAB_051724b8;
    uVar3 = System_Collections_Generic_List_Enumerator<NativeSlice<Vertex>>__get_Current
                      (**(long **)(lVar2 + 0xb8),*(undefined8 *)(param_1 + 0x18),&stack0x00000018,
                       *(undefined8 *)PTR_DAT_06782a10);
    if ((uVar3 & 1) != 0) {
      if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      (**(code **)(*in_stack_00000018 + 0x178))
                (in_stack_00000018,param_1,*(undefined8 *)(*in_stack_00000018 + 0x180));
      lVar2 = *(long *)puVar1;
      if (*(int *)(lVar2 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        lVar2 = *(long *)puVar1;
      }
      if (**(long **)(lVar2 + 0xb8) != 0) {
        FUN_049403b4(**(long **)(lVar2 + 0xb8),*(undefined8 *)(param_1 + 0x18),
                     *(undefined8 *)PTR_DAT_06782a00);
        return;
      }
      goto LAB_051724b8;
    }
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar2 = *(long *)puVar1;
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 8);
  if (lVar2 == 0) {
LAB_051724b8:
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  uVar3 = FUN_0493d710(lVar2,*(undefined4 *)(param_1 + 0x10),&stack0x00000008,
                       *(undefined8 *)PTR_DAT_06782a08);
  if ((uVar3 & 1) == 0) {
    lVar2 = *(long *)puVar1;
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar2 = *(long *)puVar1;
    }
    lVar4 = *(long *)(lVar2 + 0xb8);
    if ((*(char *)(lVar4 + 0x10) == '\0') && (*(int *)(param_1 + 0x10) == 0x773889f6)) {
      if (*(int *)(lVar2 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        lVar4 = *(long *)(*(long *)puVar1 + 0xb8);
      }
      *(long *)(lVar4 + 0x18) = param_1;
      thunk_FUN_02dd37b4((long *)(lVar4 + 0x18),param_1);
    }
  }
  else {
    if (in_stack_00000008 == (long *)0x0) goto LAB_051724b8;
    (**(code **)(*in_stack_00000008 + 0x178))
              (in_stack_00000008,param_1,*(undefined8 *)(*in_stack_00000008 + 0x180));
  }
  return;
}


