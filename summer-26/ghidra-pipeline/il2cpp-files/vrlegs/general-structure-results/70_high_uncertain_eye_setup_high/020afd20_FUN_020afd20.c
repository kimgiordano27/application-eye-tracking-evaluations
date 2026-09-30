/*
FUNCTION_NAME: FUN_020afd20
ENTRY_POINT: 020afd20
PROGRAM: vrlegs-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x020afec8) */

void FUN_020afd20(long param_1,long *param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  int iVar7;
  undefined8 uStack_70;
  char local_64 [4];
  undefined4 local_60;
  int iStack_5c;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  lVar4 = *(long *)(*(long *)(param_3 + 0x20) + 0xc0);
  puVar5 = (undefined8 *)
           ((long)&uStack_70 -
           ((ulong)*(uint *)(*(long *)(lVar4 + 0x88) + 0xfc) + 0xf & 0x1fffffff0));
  local_64[0] = '\0';
  lVar4 = *(long *)(lVar4 + 0xb0);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01a46ff8(lVar4);
  }
  if (param_2 == (long *)0x0) {
LAB_020afebc:
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  if ((*(byte *)(*param_2 + 0x130) < *(byte *)(lVar4 + 0x130)) ||
     (*(long *)(*(long *)(*param_2 + 200) + (ulong)*(byte *)(lVar4 + 0x130) * 8 + -8) != lVar4)) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6ee0(param_2);
  }
  iVar7 = (int)(short)param_2[2];
  if ((short)param_2[2] <= *(short *)((long)param_2 + 0x12)) {
    do {
      lVar4 = param_2[5];
      FUN_01f66c74(param_2[3],iVar7,puVar5,
                   *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x80));
      if (lVar4 == 0) goto LAB_020afebc;
      puVar3 = puVar5;
      if (-1 < *(int *)(*(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x88) + 0x28)) {
        puVar3 = (undefined8 *)*puVar5;
      }
      local_60 = (undefined4)param_2[4];
      iStack_5c = iVar7;
      (**(code **)(lVar4 + 0x18))
                (*(undefined8 *)(lVar4 + 0x40),puVar3,&iStack_5c,&local_60,
                 *(undefined8 *)(lVar4 + 0x28));
      bVar1 = iVar7 < *(short *)((long)param_2 + 0x12);
      iVar7 = iVar7 + 1;
    } while (bVar1);
  }
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  local_64[0] = '\0';
  FUN_027e0bd8(uVar6,local_64,0);
  if (*(long *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  FUN_0207ef4c(*(long *)(param_1 + 0x18),param_2,
               *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x100));
  if (local_64[0] != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(uVar6,0);
  }
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


