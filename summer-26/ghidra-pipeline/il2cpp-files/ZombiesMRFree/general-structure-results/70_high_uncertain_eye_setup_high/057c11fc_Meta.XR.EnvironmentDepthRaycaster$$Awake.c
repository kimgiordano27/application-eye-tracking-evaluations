/*
FUNCTION_NAME: Meta.XR.EnvironmentDepthRaycaster$$Awake
ENTRY_POINT: 057c11fc
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_EnvironmentDepthRaycaster__Awake(long param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  undefined *puVar2;
  undefined1 in_ZR;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  long in_x9;
  int *in_x10;
  
  while (!(bool)in_ZR) {
    if (*(long *)(in_x10 + -2) == param_3) {
      puVar3 = (undefined8 *)(param_1 + (long)(*in_x10 + 4) * 0x10 + 0x138);
      goto LAB_057c1220;
    }
    in_x9 = in_x9 + -1;
    in_x10 = in_x10 + 4;
    in_ZR = in_x9 == 0;
  }
  puVar3 = (undefined8 *)FUN_02feb5b8();
LAB_057c1220:
  (*(code *)*puVar3)();
  plVar4 = (long *)FUN_06abc65c();
  if (plVar4 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_06f99260 + 0x130);
    if ((bVar1 <= *(byte *)(*plVar4 + 0x130)) &&
       (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_06f99260)) {
      plVar4 = (long *)FUN_06b0d958(plVar4,0);
      goto LAB_057c1274;
    }
  }
  plVar4 = (long *)0x0;
LAB_057c1274:
  puVar2 = PTR_DAT_06f9b060;
  lVar5 = *(long *)PTR_DAT_06f9b060;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
    lVar5 = *(long *)puVar2;
  }
  FUN_06af9aa8(plVar4,*(undefined4 *)(*(long *)(lVar5 + 0xb8) + 8),0);
  if (plVar4 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_06f9b068 + 0x130);
    if (((bVar1 <= *(byte *)(*plVar4 + 0x130)) &&
        (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_06f9b068))
       && (plVar4 = (long *)FUN_06adcaf0(plVar4,0), plVar4 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x057c1324. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 0x178))(plVar4,0,*(undefined8 *)(*plVar4 + 0x180));
      return;
    }
  }
  return;
}


