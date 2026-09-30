/*
FUNCTION_NAME: OVRPlugin$$SetKeyboardOverlayUV
ENTRY_POINT: 051c6f7c
PROGRAM: hellodot-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__SetKeyboardOverlayUV(long param_1,undefined4 param_2,undefined8 *param_3)

{
  undefined *puVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  int *piVar6;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined8 uStack_5c;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined8 uStack_3c;
  
  puVar1 = PTR_DAT_065d62a0;
  if ((DAT_06a713d7 & 1) == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_066056c0);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_06608d10);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065d62a0);
    DAT_06a713d7 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  FUN_05f002ac(&uStack_70,0);
  uStack_3c = uStack_5c;
  uStack_40 = uStack_60;
  uStack_48 = uStack_68;
  local_44 = local_64;
  uStack_50 = uStack_70;
  param_3[1] = CONCAT44(local_64,uStack_68);
  *param_3 = uStack_70;
  *(undefined8 *)((long)param_3 + 0x14) = uStack_5c;
  *(ulong *)((long)param_3 + 0xc) = CONCAT44(uStack_60,local_64);
  uVar2 = FUN_051c6dec(param_1);
  if ((uVar2 & 1) == 0) {
    return 0;
  }
  plVar3 = (long *)FUN_051c6d94(param_1);
  if (plVar3 != (long *)0x0) {
    lVar5 = *plVar3;
    uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar2 != 0) {
      piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_06608d10) {
          puVar4 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_051c7084;
        }
        uVar2 = uVar2 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar2 != 0);
    }
    puVar4 = (undefined8 *)FUN_02ce0a7c(plVar3,*(long *)PTR_DAT_06608d10,0);
LAB_051c7084:
    plVar3 = (long *)(*(code *)*puVar4)(plVar3,puVar4[1]);
    if (plVar3 != (long *)0x0) {
      lVar5 = *plVar3;
      uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar2 != 0) {
        piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_066056c0) {
            puVar4 = (undefined8 *)(lVar5 + (long)(*piVar6 + 2) * 0x10 + 0x138);
            goto LAB_051c70f0;
          }
          uVar2 = uVar2 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar2 != 0);
      }
      puVar4 = (undefined8 *)FUN_02ce0a7c(plVar3,*(long *)PTR_DAT_066056c0,2);
LAB_051c70f0:
      uVar2 = (*(code *)*puVar4)(plVar3,param_2,puVar4[1]);
      if ((uVar2 & 1) == 0) {
        return 0;
      }
      FUN_051c7168(param_1);
      if (*(long *)(param_1 + 0x80) != 0) {
        FUN_051e188c(&uStack_50,*(long *)(param_1 + 0x80),param_2,0);
        param_3[1] = CONCAT44(local_44,uStack_48);
        *param_3 = uStack_50;
        *(undefined8 *)((long)param_3 + 0x14) = uStack_3c;
        *(ulong *)((long)param_3 + 0xc) = CONCAT44(uStack_40,local_44);
        return 1;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


