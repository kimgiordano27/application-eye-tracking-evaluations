/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.EffectMesh$$ReceiveAnchorCreatedEvent
ENTRY_POINT: 06dc2020
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


void Meta_XR_MRUtilityKit_EffectMesh__ReceiveAnchorCreatedEvent(float param_1,float param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  float in_w8;
  int iVar6;
  undefined8 *in_x9;
  undefined4 *unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  long lVar7;
  long lVar8;
  undefined1 in_stack_00000008;
  undefined1 in_stack_00000018;
  
  iVar3 = -0x80000000;
  if ((float)(int)(param_1 * param_2) != in_w8) {
    iVar3 = (int)(param_1 * param_2);
  }
  uVar4 = FUN_03c8f97c(*in_x9,iVar3);
  *unaff_x21 = uVar4;
  thunk_FUN_03d233cc();
  while( true ) {
    puVar1 = PTR_DAT_08e69550;
    lVar7 = *(long *)(unaff_x19 + 10);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    iVar3 = unaff_x19[0xc];
    iVar6 = *(int *)(lVar7 + 0x18);
    if (iVar6 <= iVar3) {
      if (unaff_x20 != 0) {
        lVar7 = *(long *)(unaff_x20 + 0x88);
        *(undefined1 *)(unaff_x20 + 0x31) = 0;
        if (*(char *)(unaff_x20 + 0x30) == '\0') {
          if (lVar7 != 0) {
            (**(code **)(lVar7 + 0x18))(*(undefined8 *)(lVar7 + 0x40),*(undefined8 *)(lVar7 + 0x28))
            ;
          }
          *(int *)(unaff_x20 + 0x40) = *(int *)(unaff_x20 + 0x40) + 1;
        }
        else {
          if (lVar7 != 0) {
            (**(code **)(lVar7 + 0x18))(*(undefined8 *)(lVar7 + 0x40),*(undefined8 *)(lVar7 + 0x28))
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
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    lVar8 = *(long *)(unaff_x20 + 0x90);
    if (lVar8 == 0) break;
    if (*(int *)(*unaff_x22 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
      iVar6 = *(int *)(lVar7 + 0x18);
    }
    iVar3 = FUN_07101838(*(undefined4 *)(lVar8 + 0x18),iVar6 - iVar3,0);
    FUN_0712485c(*(undefined8 *)(unaff_x19 + 10),unaff_x19[0xc],*(undefined8 *)(unaff_x20 + 0x90),0,
                 iVar3,0);
    lVar7 = *(long *)(unaff_x20 + 0x80);
    if (lVar7 != 0) {
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      (**(code **)(lVar7 + 0x18))
                (0xff7fffff,*(undefined8 *)(lVar7 + 0x40),iVar3,*(undefined8 *)(unaff_x20 + 0x90),
                 *(undefined8 *)(lVar7 + 0x28));
    }
    puVar2 = PTR_DAT_08e69590;
    unaff_x19[0xc] = unaff_x19[0xc] + iVar3;
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    in_stack_00000008 = FUN_0717ee78(0);
    in_stack_00000018 = FUN_0701eef0(&stack0x00000008,0);
    if (*(int *)(*unaff_x23 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    uVar5 = FUN_0701eef8(&stack0x00000018,0);
    if ((uVar5 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined1 *)(unaff_x19 + 0xd) = in_stack_00000018;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      FUN_0452a9a0(unaff_x19 + 2,&stack0x00000018);
      return;
    }
    if (*(int *)(*unaff_x23 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    FUN_0701f2ac(&stack0x00000018,0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


