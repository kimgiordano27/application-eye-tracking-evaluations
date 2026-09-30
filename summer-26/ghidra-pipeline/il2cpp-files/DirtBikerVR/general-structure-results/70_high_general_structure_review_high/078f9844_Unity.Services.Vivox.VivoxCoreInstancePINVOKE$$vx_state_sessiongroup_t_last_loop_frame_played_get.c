/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_state_sessiongroup_t_last_loop_frame_played_get
ENTRY_POINT: 078f9844
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_5;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


/* WARNING: Removing unreachable block (ram,0x078f9948) */
/* WARNING: Removing unreachable block (ram,0x078f9a34) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_state_sessiongroup_t_last_loop_frame_played_get
               (int *param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  char in_stack_00000058;
  int iStack000000000000005c;
  
  if ((DAT_08987b9b & 1) == 0) {
    FUN_03a8a718(Unity_Properties_TypeConverter<Font,_StyleFontDefinition>_TypeInfo);
    FUN_03a8a718(PTR_DAT_08488b88);
    FUN_03a8a718(System_Buffers_IMemoryOwner<IntPtr>_TypeInfo);
    DAT_08987b9b = 1;
  }
  puVar1 = PTR_DAT_08488b88;
  iStack000000000000005c = *param_1;
                    /* try { // try from 078f9898 to 079f98bf has its CatchHandler @ 078f9a04 */
  in_stack_00000040 = 0;
  in_stack_00000048 = 0;
  in_stack_00000058 = '\0';
  if (iStack000000000000005c == 0) {
    in_stack_00000040 = *(undefined8 *)(param_1 + 0xe);
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    iStack000000000000005c = -1;
    *param_1 = -1;
  }
  else {
    lVar3 = *(long *)(param_1 + 10);
    lVar2 = FUN_078880f0(*(undefined8 *)(param_1 + 8),0);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    if (*(int *)(lVar3 + 0x18) < *(int *)(lVar2 + 0x98)) {
      in_stack_00000048 = *(undefined8 *)(lVar3 + 0x48);
      in_stack_00000058 = '\0';
      FUN_067b43ac(in_stack_00000048,&stack0x00000058,0);
      *(int *)(lVar3 + 0x18) = (int)*(undefined8 *)(lVar2 + 0x98);
      if ((iStack000000000000005c < 0) && (in_stack_00000058 != '\0')) {
        thunk_FUN_03a98474(in_stack_00000048,0);
      }
    }
    lVar3 = FUN_078f855c(lVar3,lVar2,*(undefined8 *)(param_1 + 0xc));
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    in_stack_00000040 = FUN_067c4bec(lVar3,0);
    uVar4 = FUN_0666e8e0(&stack0x00000040,0);
    if ((uVar4 & 1) == 0) {
      iStack000000000000005c = 0;
      *param_1 = 0;
      *(undefined8 *)(param_1 + 0xe) = in_stack_00000040;
      thunk_FUN_03afed3c(param_1 + 0xe,0);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      FUN_043e5a0c(param_1 + 2,&stack0x00000040,param_1,
                   *(undefined8 *)Unity_Properties_TypeConverter<Font,_StyleFontDefinition>_TypeInfo
                  );
      return;
    }
  }
  FUN_0666e9a8(&stack0x00000040,0);
  lVar3 = *(long *)puVar1;
  *param_1 = -2;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  FUN_0666d184(param_1 + 2,0);
  return;
}


