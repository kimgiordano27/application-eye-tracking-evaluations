/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.EffectMesh$$ReceiveCreatedRoom
ENTRY_POINT: 06dc20a0
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_9;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_EffectMesh__ReceiveCreatedRoom(long param_1)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  int in_w8;
  long lVar4;
  undefined4 *unaff_x19;
  long unaff_x20;
  int unaff_w21;
  long *unaff_x22;
  long *unaff_x23;
  long *unaff_x24;
  long unaff_x26;
  long unaff_x27;
  undefined1 in_stack_00000008;
  undefined1 in_stack_00000018;
  
  while( true ) {
    if (*(int *)(param_1 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
      in_w8 = *(int *)(unaff_x26 + 0x18);
    }
    iVar2 = FUN_07101838(*(undefined4 *)(unaff_x27 + 0x18),in_w8 - unaff_w21,0);
    FUN_0712485c(*(undefined8 *)(unaff_x19 + 10),unaff_x19[0xc],*(undefined8 *)(unaff_x20 + 0x90),0,
                 iVar2,0);
    lVar4 = *(long *)(unaff_x20 + 0x80);
    if (lVar4 != 0) {
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      (**(code **)(lVar4 + 0x18))
                (0xff7fffff,*(undefined8 *)(lVar4 + 0x40),iVar2,*(undefined8 *)(unaff_x20 + 0x90),
                 *(undefined8 *)(lVar4 + 0x28));
    }
    puVar1 = PTR_DAT_08e69590;
    unaff_x19[0xc] = unaff_x19[0xc] + iVar2;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    in_stack_00000008 = FUN_0717ee78(0);
    in_stack_00000018 = FUN_0701eef0(&stack0x00000008,0);
    if (*(int *)(*unaff_x23 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    uVar3 = FUN_0701eef8(&stack0x00000018,0);
    if ((uVar3 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined1 *)(unaff_x19 + 0xd) = in_stack_00000018;
      if (*(int *)(*unaff_x24 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      FUN_0452a9a0(unaff_x19 + 2,&stack0x00000018);
      return;
    }
    if (*(int *)(*unaff_x23 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    FUN_0701f2ac(&stack0x00000018,0);
    puVar1 = PTR_DAT_08e69550;
    unaff_x26 = *(long *)(unaff_x19 + 10);
    if (unaff_x26 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    unaff_w21 = unaff_x19[0xc];
    in_w8 = *(int *)(unaff_x26 + 0x18);
    if (in_w8 <= unaff_w21) {
      if (unaff_x20 != 0) {
        lVar4 = *(long *)(unaff_x20 + 0x88);
        *(undefined1 *)(unaff_x20 + 0x31) = 0;
        if (*(char *)(unaff_x20 + 0x30) == '\0') {
          if (lVar4 != 0) {
            (**(code **)(lVar4 + 0x18))(*(undefined8 *)(lVar4 + 0x40),*(undefined8 *)(lVar4 + 0x28))
            ;
          }
          *(int *)(unaff_x20 + 0x40) = *(int *)(unaff_x20 + 0x40) + 1;
        }
        else {
          if (lVar4 != 0) {
            (**(code **)(lVar4 + 0x18))(*(undefined8 *)(lVar4 + 0x40),*(undefined8 *)(lVar4 + 0x28))
            ;
          }
          FUN_06dc15bc();
        }
        *unaff_x19 = 0xfffffffe;
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_03cd7500();
        }
        FUN_0701e078(unaff_x19 + 2,0);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    if (unaff_x20 == 0) break;
    unaff_x27 = *(long *)(unaff_x20 + 0x90);
    if (unaff_x27 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    param_1 = *unaff_x22;
    unaff_x24 = (long *)PTR_DAT_08e69550;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


