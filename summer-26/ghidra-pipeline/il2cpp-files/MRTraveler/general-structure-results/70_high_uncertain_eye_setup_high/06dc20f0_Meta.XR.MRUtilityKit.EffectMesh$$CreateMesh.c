/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.EffectMesh$$CreateMesh
ENTRY_POINT: 06dc20f0
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_8;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_EffectMesh__CreateMesh(void)

{
  int iVar1;
  undefined *puVar2;
  ulong uVar3;
  int iVar4;
  undefined4 *unaff_x19;
  long unaff_x20;
  int unaff_w21;
  long *unaff_x22;
  long *unaff_x23;
  long *unaff_x24;
  long unaff_x25;
  long lVar5;
  long lVar6;
  undefined1 in_stack_00000008;
  undefined1 in_stack_00000018;
  
  do {
    if (unaff_x25 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    (**(code **)(unaff_x25 + 0x18))
              (0xff7fffff,*(undefined8 *)(unaff_x25 + 0x40),unaff_w21,
               *(undefined8 *)(unaff_x20 + 0x90),*(undefined8 *)(unaff_x25 + 0x28));
    do {
      puVar2 = PTR_DAT_08e69590;
      unaff_x19[0xc] = unaff_x19[0xc] + unaff_w21;
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
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
      unaff_x24 = (long *)PTR_DAT_08e69550;
      lVar5 = *(long *)(unaff_x19 + 10);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      iVar1 = unaff_x19[0xc];
      iVar4 = *(int *)(lVar5 + 0x18);
      if (iVar4 <= iVar1) {
        if (unaff_x20 != 0) {
          lVar5 = *(long *)(unaff_x20 + 0x88);
          *(undefined1 *)(unaff_x20 + 0x31) = 0;
          if (*(char *)(unaff_x20 + 0x30) == '\0') {
            if (lVar5 != 0) {
              (**(code **)(lVar5 + 0x18))
                        (*(undefined8 *)(lVar5 + 0x40),*(undefined8 *)(lVar5 + 0x28));
            }
            *(int *)(unaff_x20 + 0x40) = *(int *)(unaff_x20 + 0x40) + 1;
          }
          else {
            if (lVar5 != 0) {
              (**(code **)(lVar5 + 0x18))
                        (*(undefined8 *)(lVar5 + 0x40),*(undefined8 *)(lVar5 + 0x28));
            }
            FUN_06dc15bc();
          }
          *unaff_x19 = 0xfffffffe;
          if (*(int *)(*unaff_x24 + 0xe0) == 0) {
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
      lVar6 = *(long *)(unaff_x20 + 0x90);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      if (*(int *)(*unaff_x22 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
        iVar4 = *(int *)(lVar5 + 0x18);
      }
      unaff_w21 = FUN_07101838(*(undefined4 *)(lVar6 + 0x18),iVar4 - iVar1,0);
      FUN_0712485c(*(undefined8 *)(unaff_x19 + 10),unaff_x19[0xc],*(undefined8 *)(unaff_x20 + 0x90),
                   0,unaff_w21,0);
      unaff_x25 = *(long *)(unaff_x20 + 0x80);
    } while (unaff_x25 == 0);
  } while( true );
}


