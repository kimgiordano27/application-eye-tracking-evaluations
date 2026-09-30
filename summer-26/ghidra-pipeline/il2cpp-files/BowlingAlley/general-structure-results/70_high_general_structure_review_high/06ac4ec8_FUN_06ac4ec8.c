/*
FUNCTION_NAME: FUN_06ac4ec8
ENTRY_POINT: 06ac4ec8
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_8;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_6
*/


void FUN_06ac4ec8(long *param_1,long *param_2)

{
  long *plVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  int *piVar5;
  undefined1 local_38 [16];
  long local_28;
  
                    /* try { // try from 06ac4ecc to 06bc4ef7 has its CatchHandler @ 06ac5358 */
  if ((DAT_076e318d & 1) == 0) {
    thunk_FUN_032e1da0(Method_UnityEngine_Events_UnityEvent<VoiceServiceRequest>_AddListener__);
    thunk_FUN_032e1da0(Method_System_Threading_Tasks_Task<char>_ConfigureAwait__);
    thunk_FUN_032e1da0(PTR_DAT_07279fc0);
    thunk_FUN_032e1da0(PTR_DAT_0727ac98);
    thunk_FUN_032e1da0(Method_UnityEngine_Events_UnityEvent<VoiceServiceRequest>_Invoke__);
    thunk_FUN_032e1da0(PTR_DAT_072794f0);
    thunk_FUN_032e1da0(Method_UnityEngine_Events_UnityEvent<VoiceServiceRequest>_RemoveListener__);
    DAT_076e318d = 1;
  }
  local_38._8_8_ = 0;
  local_28 = 0;
  local_38._0_8_ = 0;
  plVar1 = (long *)param_1[0x13];
  if (plVar1 == (long *)0x0) goto LAB_06ac5138;
  uVar2 = (**(code **)(*plVar1 + 0x178))(plVar1,param_2,*(undefined8 *)(*plVar1 + 0x180));
  if ((uVar2 & 1) == 0) {
    return;
  }
  if (param_2 == (long *)0x0) goto LAB_06ac5138;
  lVar4 = *param_2;
  uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar2 != 0) {
    piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_07279fc0) {
        puVar3 = (undefined8 *)(lVar4 + (long)(*piVar5 + 5) * 0x10 + 0x138);
        goto LAB_06ac4fc4;
      }
      uVar2 = uVar2 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar2 != 0);
  }
  puVar3 = (undefined8 *)FUN_032937ac(param_2,*(long *)PTR_DAT_07279fc0,5);
LAB_06ac4fc4:
  lVar4 = (*(code *)*puVar3)(param_2,puVar3[1]);
  if (*(int *)(*(long *)PTR_DAT_072794f0 + 0xe0) == 0) {
    thunk_FUN_032cd7c0(*(long *)PTR_DAT_072794f0);
  }
  uVar2 = FUN_06bece64(lVar4,0,0);
  if ((uVar2 & 1) == 0) {
    if ((lVar4 == 0) || (lVar4 = FUN_06be6b40(lVar4,0), lVar4 == 0)) goto LAB_06ac5138;
    uVar2 = FUN_06be9adc(lVar4,0);
    if ((uVar2 & 1) != 0) goto LAB_06ac5024;
  }
  else {
LAB_06ac5024:
    FUN_06ac51e0(param_1,param_2);
  }
  lVar4 = thunk_FUN_032a55a4(param_2,*(undefined8 *)PTR_DAT_0727ac98);
  if (lVar4 != 0) {
    FUN_06ac5398(param_1,lVar4);
  }
  lVar4 = thunk_FUN_032a55a4(param_2,*(undefined8 *)
                                      Method_System_Threading_Tasks_Task<char>_ConfigureAwait__);
  if (lVar4 != 0) {
    FUN_06ac5430(param_1,lVar4);
  }
  plVar1 = (long *)param_1[0x13];
  if (plVar1 != (long *)0x0) {
    uVar2 = (**(code **)(*plVar1 + 0x1a8))(plVar1,param_2,*(undefined8 *)(*plVar1 + 0x1b0));
    if ((uVar2 & 1) == 0) {
      return;
    }
    if (param_1[0x1b] != 0) {
      FUN_03d0ac40(param_1[0x1b],param_2,
                   *(undefined8 *)
                    Method_UnityEngine_Events_UnityEvent<VoiceServiceRequest>_AddListener__);
      if (param_1[0x2a] != 0) {
        local_38 = FUN_03fdb010(param_1[0x2a],&local_28,
                                *(undefined8 *)
                                 Method_UnityEngine_Events_UnityEvent<VoiceServiceRequest>_Invoke__)
        ;
        if (local_28 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        *(long *)(local_28 + 0x10) = (long)param_1;
        thunk_FUN_0333a630((long *)(local_28 + 0x10),param_1);
        if (local_28 != 0) {
          *(long *)(local_28 + 0x18) = (long)param_2;
          thunk_FUN_0333a630((long *)(local_28 + 0x18),param_2);
          (**(code **)(*param_1 + 0x2c8))(param_1,local_28,*(undefined8 *)(*param_1 + 0x2d0));
          FUN_0479c18c(local_38,*(undefined8 *)
                                 Method_UnityEngine_Events_UnityEvent<VoiceServiceRequest>_RemoveListener__
                      );
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
    }
  }
LAB_06ac5138:
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


